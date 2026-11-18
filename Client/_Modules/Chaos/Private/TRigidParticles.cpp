// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 84

// TRigidParticles<double,3> @ 143af8f20

TRigidParticles<double,3> * __thiscall
Chaos::TRigidParticles<double,3>::TRigidParticles<double,3>(TRigidParticles<double,3> *this)

{
  TKinematicGeometryParticlesImp<double,3,0>::TKinematicGeometryParticlesImp<double,3,0>
            ((TKinematicGeometryParticlesImp<double,3,0> *)this);
  this->_padding_ = (longlong)&___7__TRigidParticles_N_02_Chaos__6B_;
  *(undefined ***)&this->MI = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MInvI = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MInvIConditioning =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->CoreData).field_0x8 = 0;
  *(undefined8 *)&(this->CoreData).field_0x10 = 0;
  *(undefined ***)&this->CoreData =
       &___7__TArrayCollectionArray_UFRigidParticleCoreData_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MVSmooth).field_0x8 = 0;
  *(undefined ***)&this->MInitialOverlapDepenetrationVelocity =
       &___7__TArrayCollectionArray_M_Chaos__6B_;
  *(undefined ***)&this->MSleepThresholdMultiplier = &___7__TArrayCollectionArray_M_Chaos__6B_;
  *(undefined ***)&this->MCollisionParticles =
       &
       ___7__TArrayCollectionArray_V__TUniquePtr_VFBVHParticles_Chaos__U__TDefaultDelete_VFBVHParticles_Chaos_______Chaos__6B_
  ;
  *(undefined8 *)&(this->MVSmooth).field_0x10 = 0;
  *(undefined ***)&this->MVSmooth = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MWSmooth).field_0x8 = 0;
  *(undefined8 *)&(this->MWSmooth).field_0x10 = 0;
  *(undefined ***)&this->MWSmooth = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MAcceleration).field_0x8 = 0;
  *(undefined8 *)&(this->MAcceleration).field_0x10 = 0;
  *(undefined ***)&this->MAcceleration =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MAngularAcceleration).field_0x8 = 0;
  *(undefined8 *)&(this->MAngularAcceleration).field_0x10 = 0;
  *(undefined ***)&this->MAngularAcceleration =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MLinearImpulseVelocity).field_0x8 = 0;
  *(undefined8 *)&(this->MLinearImpulseVelocity).field_0x10 = 0;
  *(undefined ***)&this->MLinearImpulseVelocity =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MAngularImpulseVelocity).field_0x8 = 0;
  *(undefined8 *)&(this->MAngularImpulseVelocity).field_0x10 = 0;
  *(undefined ***)&this->MAngularImpulseVelocity =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MI).field_0x8 = 0;
  *(undefined8 *)&(this->MI).field_0x10 = 0;
  *(undefined8 *)&(this->MInvI).field_0x8 = 0;
  *(undefined8 *)&(this->MInvI).field_0x10 = 0;
  *(undefined8 *)&(this->MInvIConditioning).field_0x8 = 0;
  *(undefined8 *)&(this->MInvIConditioning).field_0x10 = 0;
  *(undefined8 *)&(this->MM).field_0x8 = 0;
  *(undefined8 *)&(this->MM).field_0x10 = 0;
  *(undefined ***)&this->MM = &___7__TArrayCollectionArray_N_Chaos__6B_;
  *(undefined8 *)&(this->MInvM).field_0x8 = 0;
  *(undefined8 *)&(this->MInvM).field_0x10 = 0;
  *(undefined ***)&this->MInvM = &___7__TArrayCollectionArray_N_Chaos__6B_;
  *(undefined8 *)&(this->MCenterOfMass).field_0x8 = 0;
  *(undefined8 *)&(this->MCenterOfMass).field_0x10 = 0;
  *(undefined ***)&this->MCenterOfMass =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MRotationOfMass).field_0x8 = 0;
  *(undefined8 *)&(this->MRotationOfMass).field_0x10 = 0;
  *(undefined ***)&this->MRotationOfMass =
       &___7__TArrayCollectionArray_V__TRotation_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MLinearEtherDrag).field_0x8 = 0;
  *(undefined8 *)&(this->MLinearEtherDrag).field_0x10 = 0;
  *(undefined ***)&this->MLinearEtherDrag = &___7__TArrayCollectionArray_N_Chaos__6B_;
  *(undefined8 *)&(this->MAngularEtherDrag).field_0x8 = 0;
  *(undefined8 *)&(this->MAngularEtherDrag).field_0x10 = 0;
  *(undefined ***)&this->MAngularEtherDrag = &___7__TArrayCollectionArray_N_Chaos__6B_;
  *(undefined8 *)&(this->MaxLinearSpeedsSq).field_0x8 = 0;
  *(undefined8 *)&(this->MaxLinearSpeedsSq).field_0x10 = 0;
  *(undefined ***)&this->MaxLinearSpeedsSq = &___7__TArrayCollectionArray_N_Chaos__6B_;
  *(undefined8 *)&(this->MaxAngularSpeedsSq).field_0x8 = 0;
  *(undefined8 *)&(this->MaxAngularSpeedsSq).field_0x10 = 0;
  *(undefined ***)&this->MaxAngularSpeedsSq = &___7__TArrayCollectionArray_N_Chaos__6B_;
  *(undefined8 *)&(this->MInitialOverlapDepenetrationVelocity).field_0x8 = 0;
  *(undefined8 *)&(this->MInitialOverlapDepenetrationVelocity).field_0x10 = 0;
  *(undefined8 *)&(this->MSleepThresholdMultiplier).field_0x8 = 0;
  *(undefined8 *)&(this->MSleepThresholdMultiplier).field_0x10 = 0;
  *(undefined8 *)&(this->MCollisionParticles).field_0x8 = 0;
  *(undefined8 *)&(this->MCollisionParticles).field_0x10 = 0;
  *(undefined8 *)&(this->MSleepType).field_0x8 = 0;
  *(undefined8 *)&(this->MSleepType).field_0x10 = 0;
  *(undefined8 *)&(this->MSleepCounter).field_0x8 = 0;
  *(undefined8 *)&(this->MSleepCounter).field_0x10 = 0;
  *(undefined ***)&this->MSleepType = &___7__TArrayCollectionArray_W4ESleepType_Chaos___Chaos__6B_;
  *(undefined ***)&this->MSleepCounter = &___7__TArrayCollectionArray_C_Chaos__6B_;
  *(undefined ***)&this->MDisableCounter = &___7__TArrayCollectionArray_C_Chaos__6B_;
  *(undefined ***)&this->MParticleIterationCounts =
       &___7__TArrayCollectionArray_V__TIterationSettings_C_Private_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MDisableCounter).field_0x8 = 0;
  *(undefined8 *)&(this->MDisableCounter).field_0x10 = 0;
  *(undefined8 *)&(this->MParticleIterationCounts).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleIterationCounts).field_0x10 = 0;
  (this->MSleepData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MSleepData).ArrayNum = 0;
  (this->MSleepData).ArrayMax = 0;
  (this->SleepDataLock).Mutex.Mutex.Ptr = (void *)0x0;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->CoreData);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MVSmooth);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MWSmooth);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MAcceleration);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MAngularAcceleration);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MLinearImpulseVelocity);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MAngularImpulseVelocity);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MI);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MInvI);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MInvIConditioning);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MM);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MInvM);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MCenterOfMass);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MRotationOfMass);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MLinearEtherDrag);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MAngularEtherDrag);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MaxLinearSpeedsSq);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MaxAngularSpeedsSq);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,
             (TArrayCollectionArrayBase *)&this->MInitialOverlapDepenetrationVelocity);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MSleepThresholdMultiplier)
  ;
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MCollisionParticles);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MSleepType);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MSleepCounter);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MDisableCounter);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MParticleIterationCounts);
  return this;
}

// ~TRigidParticles<double,3> @ 143afc380

void __thiscall
Chaos::TRigidParticles<double,3>::~TRigidParticles<double,3>(TRigidParticles<double,3> *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7__TRigidParticles_N_02_Chaos__6B_;
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->SleepDataLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->SleepDataLock);
  }
  pFVar1 = (this->MSleepData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)&this->MParticleIterationCounts =
       &___7__TArrayCollectionArray_V__TIterationSettings_C_Private_Chaos___Chaos__6B_;
  pvVar2 = *(void **)&(this->MParticleIterationCounts).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MDisableCounter = &___7__TArrayCollectionArray_C_Chaos__6B_;
  pvVar2 = *(void **)&(this->MDisableCounter).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MSleepCounter = &___7__TArrayCollectionArray_C_Chaos__6B_;
  pvVar2 = *(void **)&(this->MSleepCounter).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MSleepType = &___7__TArrayCollectionArray_W4ESleepType_Chaos___Chaos__6B_;
  pvVar2 = *(void **)&(this->MSleepType).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MCollisionParticles =
       &
       ___7__TArrayCollectionArray_V__TUniquePtr_VFBVHParticles_Chaos__U__TDefaultDelete_VFBVHParticles_Chaos_______Chaos__6B_
  ;
  DestructItems<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>,int>
            (*(TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> **)
              &(this->MCollisionParticles).field_0x8,*(int *)&(this->MCollisionParticles).field_0x10
            );
  pvVar2 = *(void **)&(this->MCollisionParticles).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MSleepThresholdMultiplier = &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar2 = *(void **)&(this->MSleepThresholdMultiplier).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MInitialOverlapDepenetrationVelocity =
       &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar2 = *(void **)&(this->MInitialOverlapDepenetrationVelocity).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MaxAngularSpeedsSq = &___7__TArrayCollectionArray_N_Chaos__6B_;
  pvVar2 = *(void **)&(this->MaxAngularSpeedsSq).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MaxLinearSpeedsSq = &___7__TArrayCollectionArray_N_Chaos__6B_;
  pvVar2 = *(void **)&(this->MaxLinearSpeedsSq).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MAngularEtherDrag = &___7__TArrayCollectionArray_N_Chaos__6B_;
  pvVar2 = *(void **)&(this->MAngularEtherDrag).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MLinearEtherDrag = &___7__TArrayCollectionArray_N_Chaos__6B_;
  pvVar2 = *(void **)&(this->MLinearEtherDrag).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MRotationOfMass =
       &___7__TArrayCollectionArray_V__TRotation_N_02_Chaos___Chaos__6B_;
  pvVar2 = *(void **)&(this->MRotationOfMass).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MCenterOfMass =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar2 = *(void **)&(this->MCenterOfMass).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MInvM = &___7__TArrayCollectionArray_N_Chaos__6B_;
  pvVar2 = *(void **)&(this->MInvM).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MM = &___7__TArrayCollectionArray_N_Chaos__6B_;
  pvVar2 = *(void **)&(this->MM).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MInvIConditioning =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar2 = *(void **)&(this->MInvIConditioning).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MInvI = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar2 = *(void **)&(this->MInvI).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MI = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar2 = *(void **)&(this->MI).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MAngularImpulseVelocity =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar2 = *(void **)&(this->MAngularImpulseVelocity).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MLinearImpulseVelocity =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar2 = *(void **)&(this->MLinearImpulseVelocity).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MAngularAcceleration =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar2 = *(void **)&(this->MAngularAcceleration).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MAcceleration =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar2 = *(void **)&(this->MAcceleration).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MWSmooth = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar2 = *(void **)&(this->MWSmooth).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->MVSmooth = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar2 = *(void **)&(this->MVSmooth).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->CoreData =
       &___7__TArrayCollectionArray_UFRigidParticleCoreData_Chaos___Chaos__6B_;
  pvVar2 = *(void **)&(this->CoreData).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TKinematicGeometryParticlesImp<double,3,0>::~TKinematicGeometryParticlesImp<double,3,0>
            ((TKinematicGeometryParticlesImp<double,3,0> *)this);
  return;
}

// Serialize @ 143b3daf0

void __thiscall
Chaos::TRigidParticles<double,3>::Serialize(TRigidParticles<double,3> *this,FChaosArchive *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FChaosArchive *pFVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  TArray<int,TSizedDefaultAllocator<32>_> local_d0;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float fStack_b0;
  float local_ac;
  TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_> local_a8;
  TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_> local_98;
  undefined **local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_80;
  undefined **local_70;
  TArray<Chaos::EObjectStateType,TSizedDefaultAllocator<32>_> local_68;
  undefined **local_58;
  TArray<bool,TSizedDefaultAllocator<32>_> local_50;
  
  TKinematicGeometryParticlesImp<double,3,0>::Serialize
            ((TKinematicGeometryParticlesImp<double,3,0> *)this,param_1);
  uVar10 = 0;
  local_70 = &___7__TArrayCollectionArray_W4EObjectStateType_Chaos___Chaos__6B_;
  local_58 = &___7__TArrayCollectionArray__N_Chaos__6B_;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_88 = &___7__TArrayCollectionArray_H_Chaos__6B_;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  if ((param_1->_padding_ & 1) == 0) {
    FLegacyData::CopyFromCoreData((FLegacyData *)&local_88,&this->CoreData);
    uVar9 = *(uint *)&(this->MCollisionParticles).field_0x10;
    if (local_d0.ArrayNum < (int)uVar9) {
      iVar8 = uVar9 - local_d0.ArrayNum;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar8,&local_d0.AllocatorInstance,&local_d0.ArrayNum,&local_d0.ArrayMax
                        );
      memset(local_d0.AllocatorInstance.Data + (longlong)iVar6 * 4,0,(longlong)iVar8 << 2);
    }
    else {
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if ((int)uVar9 < local_d0.ArrayNum) {
        uVar11 = local_d0.ArrayNum - uVar9;
        if ((int)(uVar11 | uVar9) < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (uVar11 != 0) {
          iVar8 = (local_d0.ArrayNum - uVar9) - uVar11;
          iVar6 = local_d0.ArrayNum;
          if (iVar8 != 0) {
            memmove(local_d0.AllocatorInstance.Data + (longlong)(int)uVar9 * 4,
                    local_d0.AllocatorInstance.Data + (longlong)(int)uVar9 * 4 +
                    (longlong)(int)uVar11 * 4,(longlong)iVar8 << 2);
            iVar6 = local_d0.ArrayNum;
          }
          local_d0.ArrayNum = iVar6 - uVar11;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&local_d0.AllocatorInstance,iVar6 - uVar11,&local_d0.ArrayMax);
        }
      }
    }
  }
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar6 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (0x14 < iVar6) {
    operator<<<Chaos::TVector<double,3>_TSizedDefaultAllocator<32>_>
              (param_1,(TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)
                       &(this->MCenterOfMass).field_0x8);
    operator<<<Chaos::TRotation<double,3>_TSizedDefaultAllocator<32>_>
              (param_1,(TArray<Chaos::TRotation<double,3>,TSizedDefaultAllocator<32>_> *)
                       &(this->MRotationOfMass).field_0x8);
  }
  pFVar7 = operator<<<Chaos::TVector<double,3>_TSizedDefaultAllocator<32>_>
                     (param_1,(TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)
                              &(this->MAcceleration).field_0x8);
  pFVar7 = operator<<<Chaos::TVector<double,3>_TSizedDefaultAllocator<32>_>
                     (pFVar7,(TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)
                             &(this->MAngularAcceleration).field_0x8);
  pFVar7 = operator<<<Chaos::TVector<double,3>_TSizedDefaultAllocator<32>_>
                     (pFVar7,(TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)
                             &(this->MLinearImpulseVelocity).field_0x8);
  operator<<<Chaos::TVector<double,3>_TSizedDefaultAllocator<32>_>
            (pFVar7,(TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)
                    &(this->MAngularImpulseVelocity).field_0x8);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  if ((((param_1->_padding_ & 1) == 0) ||
      (iVar6 = FArchiveState::CustomVer
                         ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
      0x3f < iVar6)) ||
     (iVar6 = FArchiveState::CustomVer
                        ((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID),
     0x22 < iVar6)) {
    pFVar7 = operator<<<Chaos::TVector<float,3>_TSizedDefaultAllocator<32>_>
                       (param_1,(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                                &(this->MI).field_0x8);
    operator<<<Chaos::TVector<float,3>_TSizedDefaultAllocator<32>_>
              (pFVar7,(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                      &(this->MInvI).field_0x8);
  }
  else {
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    pFVar7 = operator<<<Chaos::PMatrix<double,3,3>_TSizedDefaultAllocator<32>_>(param_1,&local_a8);
    operator<<<Chaos::PMatrix<double,3,3>_TSizedDefaultAllocator<32>_>(pFVar7,&local_98);
    if (0 < local_a8.ArrayNum) {
      puVar1 = &(this->MI).field_0x8;
      puVar2 = &(this->MInvI).field_0x8;
      uVar13 = uVar10;
      do {
        uVar11 = (uint)uVar10;
        uVar9 = 0;
        if ((int)uVar11 < local_a8.ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_c0 = (float)*(double *)(local_a8.AllocatorInstance.Data + uVar13);
        fStack_bc = (float)*(double *)(local_a8.AllocatorInstance.Data + uVar13 + 0x28);
        local_b8 = (float)*(double *)(local_a8.AllocatorInstance.Data + uVar13 + 0x50);
        if (((*(float **)puVar1 <= &local_c0) &&
            (&local_c0 < *(float **)puVar1 + (longlong)*(int *)&(this->MI).field_0x14 * 3)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = *(int *)&(this->MI).field_0x10;
        if (iVar6 == *(int *)&(this->MI).field_0x14) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,(ForAnyElementType *)puVar1,(int *)&(this->MI).field_0x14);
        }
        *(int *)&(this->MI).field_0x10 = iVar6 + 1;
        lVar12 = *(longlong *)puVar1;
        *(ulonglong *)(lVar12 + (longlong)iVar6 * 0xc) = CONCAT44(fStack_bc,local_c0);
        *(float *)(lVar12 + (longlong)iVar6 * 0xc + 8) = local_b8;
        uVar9 = 0;
        if ((int)uVar11 < local_98.ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_b4 = (float)*(double *)(local_98.AllocatorInstance.Data + uVar13);
        fStack_b0 = (float)*(double *)(local_98.AllocatorInstance.Data + uVar13 + 0x28);
        local_ac = (float)*(double *)(local_98.AllocatorInstance.Data + uVar13 + 0x50);
        if (((*(float **)puVar2 <= &local_b4) &&
            (&local_b4 < *(float **)puVar2 + (longlong)*(int *)&(this->MInvI).field_0x14 * 3)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = *(int *)&(this->MInvI).field_0x10;
        if (iVar6 == *(int *)&(this->MInvI).field_0x14) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,(ForAnyElementType *)puVar2,(int *)&(this->MInvI).field_0x14);
        }
        *(int *)&(this->MInvI).field_0x10 = iVar6 + 1;
        lVar12 = *(longlong *)puVar2;
        uVar10 = (ulonglong)(uVar11 + 1);
        uVar13 = uVar13 + 0x80;
        *(ulonglong *)(lVar12 + (longlong)iVar6 * 0xc) = CONCAT44(fStack_b0,local_b4);
        *(float *)(lVar12 + (longlong)iVar6 * 0xc + 8) = local_ac;
      } while ((int)(uVar11 + 1) < local_a8.ArrayNum);
    }
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
  }
  lVar12 = 0;
  (**(code **)(*(longlong *)&this->MInvIConditioning + 8))
            (&this->MInvIConditioning,*(undefined4 *)&(this->MInvI).field_0x10);
  uVar9 = 0;
  if (0 < *(int *)&(this->MInvI).field_0x10) {
    do {
      uVar11 = 0;
      if ((int)uVar9 < *(int *)&(this->MInvIConditioning).field_0x10) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)&(this->MInvIConditioning).field_0x8;
      uVar9 = uVar9 + 1;
      *(undefined4 *)(lVar12 + lVar3) = 0x3f800000;
      *(undefined4 *)(lVar12 + 4 + lVar3) = 0x3f800000;
      *(undefined4 *)(lVar12 + 8 + lVar3) = 0x3f800000;
      lVar12 = lVar12 + 0xc;
    } while ((int)uVar9 < *(int *)&(this->MInvI).field_0x10);
  }
  pFVar7 = operator<<<double,TSizedDefaultAllocator<32>_>
                     (param_1,(TArray<double,TSizedDefaultAllocator<32>_> *)&(this->MM).field_0x8);
  operator<<<double,TSizedDefaultAllocator<32>_>
            (pFVar7,(TArray<double,TSizedDefaultAllocator<32>_> *)&(this->MInvM).field_0x8);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar6 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (0x17 < iVar6) {
    pFVar7 = operator<<<double,TSizedDefaultAllocator<32>_>
                       (param_1,(TArray<double,TSizedDefaultAllocator<32>_> *)
                                &(this->MLinearEtherDrag).field_0x8);
    operator<<<double,TSizedDefaultAllocator<32>_>
              (pFVar7,(TArray<double,TSizedDefaultAllocator<32>_> *)
                      &(this->MAngularEtherDrag).field_0x8);
  }
  pFVar7 = operator<<<Chaos::FBVHParticles_TSizedDefaultAllocator<32>_>
                     (param_1,(TArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>,TSizedDefaultAllocator<32>_>
                               *)&(this->MCollisionParticles).field_0x8);
  pFVar7 = operator<<<int,TSizedDefaultAllocator<32>_>(pFVar7,&local_80);
  pFVar7 = operator<<<int,TSizedDefaultAllocator<32>_>(pFVar7,&local_d0);
  pFVar7 = operator<<<bool,TSizedDefaultAllocator<32>_>(pFVar7,&local_50);
  pFVar7 = operator<<<enum_Chaos::EObjectStateType_TSizedDefaultAllocator<32>_>(pFVar7,&local_68);
  operator<<<enum_Chaos::ESleepType_TSizedDefaultAllocator<32>_>
            (pFVar7,(TArray<Chaos::ESleepType,TSizedDefaultAllocator<32>_> *)
                    &(this->MSleepType).field_0x8);
  if ((param_1->_padding_ & 1) != 0) {
    FLegacyData::CopyToCoreData((FLegacyData *)&local_88,&this->CoreData);
  }
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  local_58 = &___7__TArrayCollectionArray__N_Chaos__6B_;
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  local_70 = &___7__TArrayCollectionArray_W4EObjectStateType_Chaos___Chaos__6B_;
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  local_88 = &___7__TArrayCollectionArray_H_Chaos__6B_;
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return;
}

// TRigidParticles<double,3> @ 143cffb60

TRigidParticles<double,3> * __thiscall
Chaos::TRigidParticles<double,3>::TRigidParticles<double,3>
          (TRigidParticles<double,3> *this,TRigidParticles<double,3> *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  TGeometryParticlesImp<double,3,0>::TGeometryParticlesImp<double,3,0>
            ((TGeometryParticlesImp<double,3,0> *)this,(TGeometryParticlesImp<double,3,0> *)param_1)
  ;
  plVar1 = &this->_padding_;
  plVar2 = &this->_padding_;
  plVar3 = &this->_padding_;
  this->_padding_ = (longlong)&___7__TKinematicGeometryParticlesImp_N_02_0A__Chaos__6B_;
  *plVar1 = (longlong)&___7TArrayCollectionArrayBase_Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  *plVar1 = (longlong)&___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *plVar2 = (longlong)&___7TArrayCollectionArrayBase_Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  *plVar2 = (longlong)&___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *plVar3 = (longlong)&___7TArrayCollectionArrayBase_Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  *plVar3 = (longlong)&___7__TArrayCollectionArray_VFKinematicTarget_Chaos___Chaos__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)plVar1);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)plVar2);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)plVar3);
  this->_padding_ = (longlong)&___7__TRigidParticles_N_02_Chaos__6B_;
  *(undefined ***)&this->CoreData = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->CoreData).field_0x8 = 0;
  *(undefined8 *)&(this->CoreData).field_0x8 = *(undefined8 *)&(param_1->CoreData).field_0x8;
  *(undefined8 *)&(param_1->CoreData).field_0x8 = 0;
  *(undefined4 *)&(this->CoreData).field_0x10 = *(undefined4 *)&(param_1->CoreData).field_0x10;
  *(undefined4 *)&(this->CoreData).field_0x14 = *(undefined4 *)&(param_1->CoreData).field_0x14;
  *(undefined8 *)&(param_1->CoreData).field_0x10 = 0;
  *(undefined ***)&this->CoreData =
       &___7__TArrayCollectionArray_UFRigidParticleCoreData_Chaos___Chaos__6B_;
  *(undefined ***)&this->MVSmooth = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MVSmooth).field_0x8 = 0;
  *(undefined8 *)&(this->MVSmooth).field_0x8 = *(undefined8 *)&(param_1->MVSmooth).field_0x8;
  *(undefined8 *)&(param_1->MVSmooth).field_0x8 = 0;
  *(undefined4 *)&(this->MVSmooth).field_0x10 = *(undefined4 *)&(param_1->MVSmooth).field_0x10;
  *(undefined4 *)&(this->MVSmooth).field_0x14 = *(undefined4 *)&(param_1->MVSmooth).field_0x14;
  *(undefined8 *)&(param_1->MVSmooth).field_0x10 = 0;
  *(undefined ***)&this->MVSmooth = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MWSmooth = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MWSmooth).field_0x8 = 0;
  *(undefined8 *)&(this->MWSmooth).field_0x8 = *(undefined8 *)&(param_1->MWSmooth).field_0x8;
  *(undefined8 *)&(param_1->MWSmooth).field_0x8 = 0;
  *(undefined4 *)&(this->MWSmooth).field_0x10 = *(undefined4 *)&(param_1->MWSmooth).field_0x10;
  *(undefined4 *)&(this->MWSmooth).field_0x14 = *(undefined4 *)&(param_1->MWSmooth).field_0x14;
  *(undefined8 *)&(param_1->MWSmooth).field_0x10 = 0;
  *(undefined ***)&this->MWSmooth = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MAcceleration = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MAcceleration).field_0x8 = 0;
  *(undefined8 *)&(this->MAcceleration).field_0x8 =
       *(undefined8 *)&(param_1->MAcceleration).field_0x8;
  *(undefined8 *)&(param_1->MAcceleration).field_0x8 = 0;
  *(undefined4 *)&(this->MAcceleration).field_0x10 =
       *(undefined4 *)&(param_1->MAcceleration).field_0x10;
  *(undefined4 *)&(this->MAcceleration).field_0x14 =
       *(undefined4 *)&(param_1->MAcceleration).field_0x14;
  *(undefined8 *)&(param_1->MAcceleration).field_0x10 = 0;
  *(undefined ***)&this->MAcceleration =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MAngularAcceleration = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MAngularAcceleration).field_0x8 = 0;
  *(undefined8 *)&(this->MAngularAcceleration).field_0x8 =
       *(undefined8 *)&(param_1->MAngularAcceleration).field_0x8;
  *(undefined8 *)&(param_1->MAngularAcceleration).field_0x8 = 0;
  *(undefined4 *)&(this->MAngularAcceleration).field_0x10 =
       *(undefined4 *)&(param_1->MAngularAcceleration).field_0x10;
  *(undefined4 *)&(this->MAngularAcceleration).field_0x14 =
       *(undefined4 *)&(param_1->MAngularAcceleration).field_0x14;
  *(undefined8 *)&(param_1->MAngularAcceleration).field_0x10 = 0;
  *(undefined ***)&this->MAngularAcceleration =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MLinearImpulseVelocity = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MLinearImpulseVelocity).field_0x8 = 0;
  *(undefined8 *)&(this->MLinearImpulseVelocity).field_0x8 =
       *(undefined8 *)&(param_1->MLinearImpulseVelocity).field_0x8;
  *(undefined8 *)&(param_1->MLinearImpulseVelocity).field_0x8 = 0;
  *(undefined4 *)&(this->MLinearImpulseVelocity).field_0x10 =
       *(undefined4 *)&(param_1->MLinearImpulseVelocity).field_0x10;
  *(undefined4 *)&(this->MLinearImpulseVelocity).field_0x14 =
       *(undefined4 *)&(param_1->MLinearImpulseVelocity).field_0x14;
  *(undefined8 *)&(param_1->MLinearImpulseVelocity).field_0x10 = 0;
  *(undefined ***)&this->MLinearImpulseVelocity =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MAngularImpulseVelocity = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MAngularImpulseVelocity).field_0x8 = 0;
  *(undefined8 *)&(this->MAngularImpulseVelocity).field_0x8 =
       *(undefined8 *)&(param_1->MAngularImpulseVelocity).field_0x8;
  *(undefined8 *)&(param_1->MAngularImpulseVelocity).field_0x8 = 0;
  *(undefined4 *)&(this->MAngularImpulseVelocity).field_0x10 =
       *(undefined4 *)&(param_1->MAngularImpulseVelocity).field_0x10;
  *(undefined4 *)&(this->MAngularImpulseVelocity).field_0x14 =
       *(undefined4 *)&(param_1->MAngularImpulseVelocity).field_0x14;
  *(undefined8 *)&(param_1->MAngularImpulseVelocity).field_0x10 = 0;
  *(undefined ***)&this->MAngularImpulseVelocity =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MI = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MI).field_0x8 = 0;
  *(undefined8 *)&(this->MI).field_0x8 = *(undefined8 *)&(param_1->MI).field_0x8;
  *(undefined8 *)&(param_1->MI).field_0x8 = 0;
  *(undefined4 *)&(this->MI).field_0x10 = *(undefined4 *)&(param_1->MI).field_0x10;
  *(undefined4 *)&(this->MI).field_0x14 = *(undefined4 *)&(param_1->MI).field_0x14;
  *(undefined8 *)&(param_1->MI).field_0x10 = 0;
  *(undefined ***)&this->MI = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MInvI = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MInvI).field_0x8 = 0;
  *(undefined8 *)&(this->MInvI).field_0x8 = *(undefined8 *)&(param_1->MInvI).field_0x8;
  *(undefined8 *)&(param_1->MInvI).field_0x8 = 0;
  *(undefined4 *)&(this->MInvI).field_0x10 = *(undefined4 *)&(param_1->MInvI).field_0x10;
  *(undefined4 *)&(this->MInvI).field_0x14 = *(undefined4 *)&(param_1->MInvI).field_0x14;
  *(undefined8 *)&(param_1->MInvI).field_0x10 = 0;
  *(undefined ***)&this->MInvI = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MInvIConditioning = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MInvIConditioning).field_0x8 = 0;
  *(undefined8 *)&(this->MInvIConditioning).field_0x8 =
       *(undefined8 *)&(param_1->MInvIConditioning).field_0x8;
  *(undefined8 *)&(param_1->MInvIConditioning).field_0x8 = 0;
  *(undefined4 *)&(this->MInvIConditioning).field_0x10 =
       *(undefined4 *)&(param_1->MInvIConditioning).field_0x10;
  *(undefined4 *)&(this->MInvIConditioning).field_0x14 =
       *(undefined4 *)&(param_1->MInvIConditioning).field_0x14;
  *(undefined8 *)&(param_1->MInvIConditioning).field_0x10 = 0;
  *(undefined ***)&this->MInvIConditioning =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MM = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MM).field_0x8 = 0;
  *(undefined8 *)&(this->MM).field_0x8 = *(undefined8 *)&(param_1->MM).field_0x8;
  *(undefined8 *)&(param_1->MM).field_0x8 = 0;
  *(undefined4 *)&(this->MM).field_0x10 = *(undefined4 *)&(param_1->MM).field_0x10;
  *(undefined4 *)&(this->MM).field_0x14 = *(undefined4 *)&(param_1->MM).field_0x14;
  *(undefined8 *)&(param_1->MM).field_0x10 = 0;
  *(undefined ***)&this->MM = &___7__TArrayCollectionArray_N_Chaos__6B_;
  *(undefined ***)&this->MInvM = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MInvM).field_0x8 = 0;
  *(undefined8 *)&(this->MInvM).field_0x8 = *(undefined8 *)&(param_1->MInvM).field_0x8;
  *(undefined8 *)&(param_1->MInvM).field_0x8 = 0;
  *(undefined4 *)&(this->MInvM).field_0x10 = *(undefined4 *)&(param_1->MInvM).field_0x10;
  *(undefined4 *)&(this->MInvM).field_0x14 = *(undefined4 *)&(param_1->MInvM).field_0x14;
  *(undefined8 *)&(param_1->MInvM).field_0x10 = 0;
  *(undefined ***)&this->MInvM = &___7__TArrayCollectionArray_N_Chaos__6B_;
  *(undefined ***)&this->MCenterOfMass = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MCenterOfMass).field_0x8 = 0;
  *(undefined8 *)&(this->MCenterOfMass).field_0x8 =
       *(undefined8 *)&(param_1->MCenterOfMass).field_0x8;
  *(undefined8 *)&(param_1->MCenterOfMass).field_0x8 = 0;
  *(undefined4 *)&(this->MCenterOfMass).field_0x10 =
       *(undefined4 *)&(param_1->MCenterOfMass).field_0x10;
  *(undefined4 *)&(this->MCenterOfMass).field_0x14 =
       *(undefined4 *)&(param_1->MCenterOfMass).field_0x14;
  *(undefined8 *)&(param_1->MCenterOfMass).field_0x10 = 0;
  *(undefined ***)&this->MCenterOfMass =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MRotationOfMass = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MRotationOfMass).field_0x8 = 0;
  *(undefined8 *)&(this->MRotationOfMass).field_0x8 =
       *(undefined8 *)&(param_1->MRotationOfMass).field_0x8;
  *(undefined8 *)&(param_1->MRotationOfMass).field_0x8 = 0;
  *(undefined4 *)&(this->MRotationOfMass).field_0x10 =
       *(undefined4 *)&(param_1->MRotationOfMass).field_0x10;
  *(undefined4 *)&(this->MRotationOfMass).field_0x14 =
       *(undefined4 *)&(param_1->MRotationOfMass).field_0x14;
  *(undefined8 *)&(param_1->MRotationOfMass).field_0x10 = 0;
  *(undefined ***)&this->MRotationOfMass =
       &___7__TArrayCollectionArray_V__TRotation_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MLinearEtherDrag = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MLinearEtherDrag).field_0x8 = 0;
  *(undefined8 *)&(this->MLinearEtherDrag).field_0x8 =
       *(undefined8 *)&(param_1->MLinearEtherDrag).field_0x8;
  *(undefined8 *)&(param_1->MLinearEtherDrag).field_0x8 = 0;
  *(undefined4 *)&(this->MLinearEtherDrag).field_0x10 =
       *(undefined4 *)&(param_1->MLinearEtherDrag).field_0x10;
  *(undefined4 *)&(this->MLinearEtherDrag).field_0x14 =
       *(undefined4 *)&(param_1->MLinearEtherDrag).field_0x14;
  *(undefined8 *)&(param_1->MLinearEtherDrag).field_0x10 = 0;
  *(undefined ***)&this->MLinearEtherDrag = &___7__TArrayCollectionArray_N_Chaos__6B_;
  *(undefined ***)&this->MAngularEtherDrag = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MAngularEtherDrag).field_0x8 = 0;
  *(undefined8 *)&(this->MAngularEtherDrag).field_0x8 =
       *(undefined8 *)&(param_1->MAngularEtherDrag).field_0x8;
  *(undefined8 *)&(param_1->MAngularEtherDrag).field_0x8 = 0;
  *(undefined4 *)&(this->MAngularEtherDrag).field_0x10 =
       *(undefined4 *)&(param_1->MAngularEtherDrag).field_0x10;
  *(undefined4 *)&(this->MAngularEtherDrag).field_0x14 =
       *(undefined4 *)&(param_1->MAngularEtherDrag).field_0x14;
  *(undefined8 *)&(param_1->MAngularEtherDrag).field_0x10 = 0;
  *(undefined ***)&this->MAngularEtherDrag = &___7__TArrayCollectionArray_N_Chaos__6B_;
  *(undefined ***)&this->MaxLinearSpeedsSq = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MaxLinearSpeedsSq).field_0x8 = 0;
  *(undefined8 *)&(this->MaxLinearSpeedsSq).field_0x8 =
       *(undefined8 *)&(param_1->MaxLinearSpeedsSq).field_0x8;
  *(undefined8 *)&(param_1->MaxLinearSpeedsSq).field_0x8 = 0;
  *(undefined4 *)&(this->MaxLinearSpeedsSq).field_0x10 =
       *(undefined4 *)&(param_1->MaxLinearSpeedsSq).field_0x10;
  *(undefined4 *)&(this->MaxLinearSpeedsSq).field_0x14 =
       *(undefined4 *)&(param_1->MaxLinearSpeedsSq).field_0x14;
  *(undefined8 *)&(param_1->MaxLinearSpeedsSq).field_0x10 = 0;
  *(undefined ***)&this->MaxLinearSpeedsSq = &___7__TArrayCollectionArray_N_Chaos__6B_;
  *(undefined ***)&this->MaxAngularSpeedsSq = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MaxAngularSpeedsSq).field_0x8 = 0;
  *(undefined8 *)&(this->MaxAngularSpeedsSq).field_0x8 =
       *(undefined8 *)&(param_1->MaxAngularSpeedsSq).field_0x8;
  *(undefined8 *)&(param_1->MaxAngularSpeedsSq).field_0x8 = 0;
  *(undefined4 *)&(this->MaxAngularSpeedsSq).field_0x10 =
       *(undefined4 *)&(param_1->MaxAngularSpeedsSq).field_0x10;
  *(undefined4 *)&(this->MaxAngularSpeedsSq).field_0x14 =
       *(undefined4 *)&(param_1->MaxAngularSpeedsSq).field_0x14;
  *(undefined8 *)&(param_1->MaxAngularSpeedsSq).field_0x10 = 0;
  *(undefined ***)&this->MaxAngularSpeedsSq = &___7__TArrayCollectionArray_N_Chaos__6B_;
  *(undefined ***)&this->MInitialOverlapDepenetrationVelocity =
       &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MInitialOverlapDepenetrationVelocity).field_0x8 = 0;
  *(undefined8 *)&(this->MInitialOverlapDepenetrationVelocity).field_0x8 =
       *(undefined8 *)&(param_1->MInitialOverlapDepenetrationVelocity).field_0x8;
  *(undefined8 *)&(param_1->MInitialOverlapDepenetrationVelocity).field_0x8 = 0;
  *(undefined4 *)&(this->MInitialOverlapDepenetrationVelocity).field_0x10 =
       *(undefined4 *)&(param_1->MInitialOverlapDepenetrationVelocity).field_0x10;
  *(undefined4 *)&(this->MInitialOverlapDepenetrationVelocity).field_0x14 =
       *(undefined4 *)&(param_1->MInitialOverlapDepenetrationVelocity).field_0x14;
  *(undefined8 *)&(param_1->MInitialOverlapDepenetrationVelocity).field_0x10 = 0;
  *(undefined ***)&this->MInitialOverlapDepenetrationVelocity =
       &___7__TArrayCollectionArray_M_Chaos__6B_;
  *(undefined ***)&this->MSleepThresholdMultiplier = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MSleepThresholdMultiplier).field_0x8 = 0;
  *(undefined8 *)&(this->MSleepThresholdMultiplier).field_0x8 =
       *(undefined8 *)&(param_1->MSleepThresholdMultiplier).field_0x8;
  *(undefined8 *)&(param_1->MSleepThresholdMultiplier).field_0x8 = 0;
  *(undefined4 *)&(this->MSleepThresholdMultiplier).field_0x10 =
       *(undefined4 *)&(param_1->MSleepThresholdMultiplier).field_0x10;
  *(undefined4 *)&(this->MSleepThresholdMultiplier).field_0x14 =
       *(undefined4 *)&(param_1->MSleepThresholdMultiplier).field_0x14;
  *(undefined8 *)&(param_1->MSleepThresholdMultiplier).field_0x10 = 0;
  *(undefined ***)&this->MSleepThresholdMultiplier = &___7__TArrayCollectionArray_M_Chaos__6B_;
  *(undefined ***)&this->MCollisionParticles = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MCollisionParticles).field_0x8 = 0;
  *(undefined8 *)&(this->MCollisionParticles).field_0x8 =
       *(undefined8 *)&(param_1->MCollisionParticles).field_0x8;
  *(undefined8 *)&(param_1->MCollisionParticles).field_0x8 = 0;
  *(undefined4 *)&(this->MCollisionParticles).field_0x10 =
       *(undefined4 *)&(param_1->MCollisionParticles).field_0x10;
  *(undefined4 *)&(this->MCollisionParticles).field_0x14 =
       *(undefined4 *)&(param_1->MCollisionParticles).field_0x14;
  *(undefined8 *)&(param_1->MCollisionParticles).field_0x10 = 0;
  *(undefined ***)&this->MCollisionParticles =
       &
       ___7__TArrayCollectionArray_V__TUniquePtr_VFBVHParticles_Chaos__U__TDefaultDelete_VFBVHParticles_Chaos_______Chaos__6B_
  ;
  *(undefined ***)&this->MSleepType = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MSleepType).field_0x8 = 0;
  *(undefined8 *)&(this->MSleepType).field_0x8 = *(undefined8 *)&(param_1->MSleepType).field_0x8;
  *(undefined8 *)&(param_1->MSleepType).field_0x8 = 0;
  *(undefined4 *)&(this->MSleepType).field_0x10 = *(undefined4 *)&(param_1->MSleepType).field_0x10;
  *(undefined4 *)&(this->MSleepType).field_0x14 = *(undefined4 *)&(param_1->MSleepType).field_0x14;
  *(undefined8 *)&(param_1->MSleepType).field_0x10 = 0;
  *(undefined ***)&this->MSleepType = &___7__TArrayCollectionArray_W4ESleepType_Chaos___Chaos__6B_;
  *(undefined ***)&this->MSleepCounter = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MSleepCounter).field_0x8 = 0;
  *(undefined8 *)&(this->MSleepCounter).field_0x8 =
       *(undefined8 *)&(param_1->MSleepCounter).field_0x8;
  *(undefined8 *)&(param_1->MSleepCounter).field_0x8 = 0;
  *(undefined4 *)&(this->MSleepCounter).field_0x10 =
       *(undefined4 *)&(param_1->MSleepCounter).field_0x10;
  *(undefined4 *)&(this->MSleepCounter).field_0x14 =
       *(undefined4 *)&(param_1->MSleepCounter).field_0x14;
  *(undefined8 *)&(param_1->MSleepCounter).field_0x10 = 0;
  *(undefined ***)&this->MSleepCounter = &___7__TArrayCollectionArray_C_Chaos__6B_;
  *(undefined ***)&this->MDisableCounter = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MDisableCounter).field_0x8 = 0;
  *(undefined8 *)&(this->MDisableCounter).field_0x8 =
       *(undefined8 *)&(param_1->MDisableCounter).field_0x8;
  *(undefined8 *)&(param_1->MDisableCounter).field_0x8 = 0;
  *(undefined4 *)&(this->MDisableCounter).field_0x10 =
       *(undefined4 *)&(param_1->MDisableCounter).field_0x10;
  *(undefined4 *)&(this->MDisableCounter).field_0x14 =
       *(undefined4 *)&(param_1->MDisableCounter).field_0x14;
  *(undefined8 *)&(param_1->MDisableCounter).field_0x10 = 0;
  *(undefined ***)&this->MDisableCounter = &___7__TArrayCollectionArray_C_Chaos__6B_;
  *(undefined ***)&this->MParticleIterationCounts = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MParticleIterationCounts).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleIterationCounts).field_0x8 =
       *(undefined8 *)&(param_1->MParticleIterationCounts).field_0x8;
  *(undefined8 *)&(param_1->MParticleIterationCounts).field_0x8 = 0;
  *(undefined4 *)&(this->MParticleIterationCounts).field_0x10 =
       *(undefined4 *)&(param_1->MParticleIterationCounts).field_0x10;
  *(undefined4 *)&(this->MParticleIterationCounts).field_0x14 =
       *(undefined4 *)&(param_1->MParticleIterationCounts).field_0x14;
  *(undefined8 *)&(param_1->MParticleIterationCounts).field_0x10 = 0;
  *(undefined ***)&this->MParticleIterationCounts =
       &___7__TArrayCollectionArray_V__TIterationSettings_C_Private_Chaos___Chaos__6B_;
  (this->MSleepData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MSleepData).ArrayNum = 0;
  (this->MSleepData).ArrayMax = 0;
  (this->SleepDataLock).Mutex.Mutex.Ptr = (void *)0x0;
  RegisterArrays(this);
  return this;
}

// RegisterArrays @ 143d608f0

void __thiscall Chaos::TRigidParticles<double,3>::RegisterArrays(TRigidParticles<double,3> *this)

{
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->CoreData);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MVSmooth);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MWSmooth);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MAcceleration);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MAngularAcceleration);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MLinearImpulseVelocity);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MAngularImpulseVelocity);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MI);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MInvI);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MInvIConditioning);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MM);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MInvM);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MCenterOfMass);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MRotationOfMass);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MLinearEtherDrag);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MAngularEtherDrag);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MaxLinearSpeedsSq);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MaxAngularSpeedsSq);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,
             (TArrayCollectionArrayBase *)&this->MInitialOverlapDepenetrationVelocity);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MSleepThresholdMultiplier)
  ;
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MCollisionParticles);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MSleepType);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MSleepCounter);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MDisableCounter);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MParticleIterationCounts);
  return;
}

// Acceleration @ 143e08820

TVector<double,3> * __thiscall
Chaos::TRigidParticles<double,3>::Acceleration(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MAcceleration).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double,3> *)
         (*(longlong *)&(this->MAcceleration).field_0x8 + (longlong)param_1 * 0x18);
}

// Acceleration @ 143e088a0

TVector<double,3> * __thiscall
Chaos::TRigidParticles<double,3>::Acceleration(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MAcceleration).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double,3> *)
         (*(longlong *)&(this->MAcceleration).field_0x8 + (longlong)param_1 * 0x18);
}

// AddCollisionConstraintFlag @ 143e08ea0

void __thiscall
Chaos::TRigidParticles<double,3>::AddCollisionConstraintFlag
          (TRigidParticles<double,3> *this,ECollisionConstraintFlags param_1,int param_2)

{
  ECollisionConstraintFlags *pEVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 < *(int *)&(this->CoreData).field_0x10) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pEVar1 = (ECollisionConstraintFlags *)
           ((longlong)param_2 * 0x10 + 4 + *(longlong *)&(this->CoreData).field_0x8);
  *pEVar1 = *pEVar1 | param_1;
  return;
}

// AddSleepData @ 143e0adb0

void __thiscall
Chaos::TRigidParticles<double,3>::AddSleepData
          (TRigidParticles<double,3> *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<Chaos::TSleepData<double,3>,TSizedDefaultAllocator<32>_> *pTVar6;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = CONCAT31(uStack_10._1_3_,param_2);
  local_18 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)&this->SleepDataLock);
  pTVar6 = &this->MSleepData;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->MSleepData).ArrayMax * 0x10))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->MSleepData).ArrayNum;
  piVar1 = &(this->MSleepData).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar6->AllocatorInstance,piVar1);
  }
  (this->MSleepData).ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined4 *)pFVar2 = (undefined4)local_18;
  *(undefined4 *)(pFVar2 + 4) = local_18._4_4_;
  *(undefined4 *)(pFVar2 + 8) = uStack_10;
  *(undefined4 *)(pFVar2 + 0xc) = uStack_c;
  ReleaseSRWLockExclusive((PSRWLOCK)&this->SleepDataLock);
  return;
}

// AngularAcceleration @ 143e107f0

TVector<double,3> * __thiscall
Chaos::TRigidParticles<double,3>::AngularAcceleration(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MAngularAcceleration).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double,3> *)
         (*(longlong *)&(this->MAngularAcceleration).field_0x8 + (longlong)param_1 * 0x18);
}

// AngularAcceleration @ 143e10870

TVector<double,3> * __thiscall
Chaos::TRigidParticles<double,3>::AngularAcceleration(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MAngularAcceleration).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double,3> *)
         (*(longlong *)&(this->MAngularAcceleration).field_0x8 + (longlong)param_1 * 0x18);
}

// AngularEtherDrag @ 143e108f0

double * __thiscall
Chaos::TRigidParticles<double,3>::AngularEtherDrag(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double *pdVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MAngularEtherDrag).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar4 = (double *)(*pcVar1)();
      return pdVar4;
    }
  }
  return (double *)(*(longlong *)&(this->MAngularEtherDrag).field_0x8 + (longlong)param_1 * 8);
}

// AngularEtherDrag @ 143e10970

double * __thiscall
Chaos::TRigidParticles<double,3>::AngularEtherDrag(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double *pdVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MAngularEtherDrag).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar4 = (double *)(*pcVar1)();
      return pdVar4;
    }
  }
  return (double *)(*(longlong *)&(this->MAngularEtherDrag).field_0x8 + (longlong)param_1 * 8);
}

// AngularImpulseVelocity @ 143e109f0

TVector<double,3> * __thiscall
Chaos::TRigidParticles<double,3>::AngularImpulseVelocity
          (TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MAngularImpulseVelocity).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double,3> *)
         (*(longlong *)&(this->MAngularImpulseVelocity).field_0x8 + (longlong)param_1 * 0x18);
}

// AngularImpulseVelocity @ 143e10a70

TVector<double,3> * __thiscall
Chaos::TRigidParticles<double,3>::AngularImpulseVelocity
          (TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MAngularImpulseVelocity).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double,3> *)
         (*(longlong *)&(this->MAngularImpulseVelocity).field_0x8 + (longlong)param_1 * 0x18);
}

// CenterOfMass @ 143e14b10

TVector<double,3> * __thiscall
Chaos::TRigidParticles<double,3>::CenterOfMass(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MCenterOfMass).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double,3> *)
         (*(longlong *)&(this->MCenterOfMass).field_0x8 + (longlong)param_1 * 0x18);
}

// CenterOfMass @ 143e14b90

TVector<double,3> * __thiscall
Chaos::TRigidParticles<double,3>::CenterOfMass(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MCenterOfMass).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double,3> *)
         (*(longlong *)&(this->MCenterOfMass).field_0x8 + (longlong)param_1 * 0x18);
}

// ClearSleepData @ 143e14c40

void __thiscall Chaos::TRigidParticles<double,3>::ClearSleepData(TRigidParticles<double,3> *this)

{
  int *piVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->SleepDataLock);
  piVar1 = &(this->MSleepData).ArrayMax;
  (this->MSleepData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->MSleepData).AllocatorInstance,0,piVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000143e14c9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->SleepDataLock);
  return;
}

// CollisionConstraintFlags @ 143e14cd0

uint __thiscall
Chaos::TRigidParticles<double,3>::CollisionConstraintFlags
          (TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)(*(longlong *)&(this->CoreData).field_0x8 + 4 + (longlong)param_1 * 0x10);
}

// CollisionGroup @ 143e14d50

int * __thiscall
Chaos::TRigidParticles<double,3>::CollisionGroup(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
  }
  return (int *)((longlong)param_1 * 0x10 + *(longlong *)&(this->CoreData).field_0x8);
}

// CollisionGroup @ 143e14dd0

int __thiscall
Chaos::TRigidParticles<double,3>::CollisionGroup(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)(*(longlong *)&(this->CoreData).field_0x8 + (longlong)param_1 * 0x10);
}

// CollisionParticles @ 143e14e50

TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> * __thiscall
Chaos::TRigidParticles<double,3>::CollisionParticles(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MCollisionParticles).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
  }
  return (TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *)
         (*(longlong *)&(this->MCollisionParticles).field_0x8 + (longlong)param_1 * 8);
}

// CollisionParticles @ 143e14ed0

TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> * __thiscall
Chaos::TRigidParticles<double,3>::CollisionParticles(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MCollisionParticles).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *)(*pcVar1)()
      ;
      return pTVar4;
    }
  }
  return (TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *)
         (*(longlong *)&(this->MCollisionParticles).field_0x8 + (longlong)param_1 * 8);
}

// CollisionParticlesInitIfNeeded @ 143e14f50

void __thiscall
Chaos::TRigidParticles<double,3>::CollisionParticlesInitIfNeeded
          (TRigidParticles<double,3> *this,int param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FBVHParticles *pFVar5;
  FBVHParticles *this_00;
  undefined8 local_28 [2];
  
  this_00 = (FBVHParticles *)0x0;
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MCollisionParticles).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(longlong *)(*(longlong *)&(this->MCollisionParticles).field_0x8 + (longlong)param_1 * 8) ==
      0) {
    pFVar5 = ::operator_new(0x48);
    if (pFVar5 != (FBVHParticles *)0x0) {
      this_00 = FBVHParticles::FBVHParticles(pFVar5);
    }
    uVar4 = 0;
    if (param_1 < *(int *)&(this->MCollisionParticles).field_0x10) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar1 = (undefined8 *)
             (*(longlong *)&(this->MCollisionParticles).field_0x8 + (longlong)param_1 * 8);
    if (puVar1 == local_28) {
      if (this_00 == (FBVHParticles *)0x0) {
        return;
      }
      FBVHParticles::~FBVHParticles(this_00);
    }
    else {
      pFVar5 = (FBVHParticles *)*puVar1;
      *puVar1 = this_00;
      if (pFVar5 == (FBVHParticles *)0x0) {
        return;
      }
      FBVHParticles::~FBVHParticles(pFVar5);
      this_00 = pFVar5;
    }
    ::operator_delete(this_00,0x48);
  }
  return;
}

// CollisionParticlesSize @ 143e150a0

int __thiscall
Chaos::TRigidParticles<double,3>::CollisionParticlesSize
          (TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = 0;
  uVar4 = uVar3;
  if (param_1 < *(int *)&(this->MCollisionParticles).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar5 = (*pcVar1)();
    return iVar5;
  }
  if (*(longlong *)(*(longlong *)&(this->MCollisionParticles).field_0x8 + (longlong)param_1 * 8) !=
      0) {
    uVar3 = 0;
    if (param_1 < *(int *)&(this->MCollisionParticles).field_0x10) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
    uVar3 = *(uint *)(*(longlong *)
                       (*(longlong *)&(this->MCollisionParticles).field_0x8 + (longlong)param_1 * 8)
                     + 0x18);
  }
  return uVar3;
}

// ControlFlags @ 143e17ff0

FRigidParticleControlFlags * __thiscall
Chaos::TRigidParticles<double,3>::ControlFlags(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigidParticleControlFlags *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRigidParticleControlFlags *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FRigidParticleControlFlags *)
         (*(longlong *)&(this->CoreData).field_0x8 + 8 + (longlong)param_1 * 0x10);
}

// ControlFlags @ 143e18080

FRigidParticleControlFlags * __thiscall
Chaos::TRigidParticles<double,3>::ControlFlags(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigidParticleControlFlags *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRigidParticleControlFlags *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FRigidParticleControlFlags *)
         (*(longlong *)&(this->CoreData).field_0x8 + 8 + (longlong)param_1 * 0x10);
}

// DisableCounter @ 143e1b6c0

schar * __thiscall
Chaos::TRigidParticles<double,3>::DisableCounter(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  schar *psVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MDisableCounter).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      psVar4 = (schar *)(*pcVar1)();
      return psVar4;
    }
  }
  return (schar *)((longlong)param_1 + *(longlong *)&(this->MDisableCounter).field_0x8);
}

// DisableCounter @ 143e1b740

schar __thiscall
Chaos::TRigidParticles<double,3>::DisableCounter(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  schar sVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MDisableCounter).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      sVar3 = (*pcVar1)();
      return sVar3;
    }
  }
  return *(schar *)((longlong)param_1 + *(longlong *)&(this->MDisableCounter).field_0x8);
}

// Disabled @ 143e1b7c0

bool __thiscall
Chaos::TRigidParticles<double,3>::Disabled(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                (*(longlong *)&(this->CoreData).field_0x8 + 0xd + (longlong)param_1 * 0x10);
}

// DisabledRef @ 143e1b840

bool * __thiscall
Chaos::TRigidParticles<double,3>::DisabledRef(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar1)();
      return pbVar4;
    }
  }
  return (bool *)(*(longlong *)&(this->CoreData).field_0x8 + 0xd + (longlong)param_1 * 0x10);
}

// Dynamic @ 143e1c4a0

bool __thiscall
Chaos::TRigidParticles<double,3>::Dynamic(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return *(char *)(*(longlong *)&(this->CoreData).field_0x8 + 0xb + (longlong)param_1 * 0x10) ==
         '\x04';
}

// GetSleepData @ 143e2c9d0

TArray<Chaos::TSleepData<double,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TRigidParticles<double,3>::GetSleepData(TRigidParticles<double,3> *this)

{
  return &this->MSleepData;
}

// GetSleepDataLock @ 143e2c9e0

FPlatformRWLock * __thiscall
Chaos::TRigidParticles<double,3>::GetSleepDataLock(TRigidParticles<double,3> *this)

{
  return &this->SleepDataLock;
}

// HasCollisionConstraintFlag @ 143e31040

bool __thiscall
Chaos::TRigidParticles<double,3>::HasCollisionConstraintFlag
          (TRigidParticles<double,3> *this,ECollisionConstraintFlags param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 < *(int *)&(this->CoreData).field_0x10) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (*(ECollisionConstraintFlags *)
           (*(longlong *)&(this->CoreData).field_0x8 + 4 + (longlong)param_2 * 0x10) & param_1) !=
         CCF_None;
}

// HasInfiniteMass @ 143e310d0

bool __thiscall
Chaos::TRigidParticles<double,3>::HasInfiniteMass(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MInvM).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(double *)(*(longlong *)&(this->MInvM).field_0x8 + (longlong)param_1 * 8) == 0.0) {
    return true;
  }
  return false;
}

// I @ 143e31200

TVector<float,3> * __thiscall
Chaos::TRigidParticles<double,3>::I(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MI).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float,3> *)(*(longlong *)&(this->MI).field_0x8 + (longlong)param_1 * 0xc);
}

// I @ 143e31280

TVector<float,3> * __thiscall
Chaos::TRigidParticles<double,3>::I(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MI).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float,3> *)(*(longlong *)&(this->MI).field_0x8 + (longlong)param_1 * 0xc);
}

// InitialOverlapDepenetrationVelocity @ 143e32f90

float * __thiscall
Chaos::TRigidParticles<double,3>::InitialOverlapDepenetrationVelocity
          (TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MInitialOverlapDepenetrationVelocity).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  return (float *)(*(longlong *)&(this->MInitialOverlapDepenetrationVelocity).field_0x8 +
                  (longlong)param_1 * 4);
}

// InitialOverlapDepenetrationVelocity @ 143e33010

float * __thiscall
Chaos::TRigidParticles<double,3>::InitialOverlapDepenetrationVelocity
          (TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MInitialOverlapDepenetrationVelocity).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  return (float *)(*(longlong *)&(this->MInitialOverlapDepenetrationVelocity).field_0x8 +
                  (longlong)param_1 * 4);
}

// InvI @ 143e34980

TVector<float,3> * __thiscall
Chaos::TRigidParticles<double,3>::InvI(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MInvI).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float,3> *)(*(longlong *)&(this->MInvI).field_0x8 + (longlong)param_1 * 0xc);
}

// InvI @ 143e34a00

TVector<float,3> * __thiscall
Chaos::TRigidParticles<double,3>::InvI(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MInvI).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float,3> *)(*(longlong *)&(this->MInvI).field_0x8 + (longlong)param_1 * 0xc);
}

// InvIConditioning @ 143e34a80

TVector<float,3> * __thiscall
Chaos::TRigidParticles<double,3>::InvIConditioning(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MInvIConditioning).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float,3> *)
         (*(longlong *)&(this->MInvIConditioning).field_0x8 + (longlong)param_1 * 0xc);
}

// InvIConditioning @ 143e34b00

TVector<float,3> * __thiscall
Chaos::TRigidParticles<double,3>::InvIConditioning(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MInvIConditioning).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float,3> *)
         (*(longlong *)&(this->MInvIConditioning).field_0x8 + (longlong)param_1 * 0xc);
}

// InvM @ 143e34b80

double * __thiscall
Chaos::TRigidParticles<double,3>::InvM(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double *pdVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MInvM).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar4 = (double *)(*pcVar1)();
      return pdVar4;
    }
  }
  return (double *)(*(longlong *)&(this->MInvM).field_0x8 + (longlong)param_1 * 8);
}

// InvM @ 143e34c00

double __thiscall
Chaos::TRigidParticles<double,3>::InvM(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double dVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MInvM).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar4 = (double)(*pcVar1)();
      return dVar4;
    }
  }
  return *(double *)(*(longlong *)&(this->MInvM).field_0x8 + (longlong)param_1 * 8);
}

// IslandIndex @ 143e34cc0

int * __thiscall
Chaos::TRigidParticles<double,3>::IslandIndex(TRigidParticles<double,3> *this,int param_1)

{
  return &`public:_int&___ptr64___cdecl_Chaos::TRigidParticles<double,3>::IslandIndex(int)___ptr64'
          ::__l2::Dummy;
}

// IslandIndex @ 143e34cd0

int __thiscall
Chaos::TRigidParticles<double,3>::IslandIndex(TRigidParticles<double,3> *this,int param_1)

{
  return -1;
}

// LinearEtherDrag @ 143e34d20

double * __thiscall
Chaos::TRigidParticles<double,3>::LinearEtherDrag(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double *pdVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MLinearEtherDrag).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar4 = (double *)(*pcVar1)();
      return pdVar4;
    }
  }
  return (double *)(*(longlong *)&(this->MLinearEtherDrag).field_0x8 + (longlong)param_1 * 8);
}

// LinearEtherDrag @ 143e34da0

double * __thiscall
Chaos::TRigidParticles<double,3>::LinearEtherDrag(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double *pdVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MLinearEtherDrag).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar4 = (double *)(*pcVar1)();
      return pdVar4;
    }
  }
  return (double *)(*(longlong *)&(this->MLinearEtherDrag).field_0x8 + (longlong)param_1 * 8);
}

// LinearImpulseVelocity @ 143e34e20

TVector<double,3> * __thiscall
Chaos::TRigidParticles<double,3>::LinearImpulseVelocity(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MLinearImpulseVelocity).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double,3> *)
         (*(longlong *)&(this->MLinearImpulseVelocity).field_0x8 + (longlong)param_1 * 0x18);
}

// LinearImpulseVelocity @ 143e34ea0

TVector<double,3> * __thiscall
Chaos::TRigidParticles<double,3>::LinearImpulseVelocity(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MLinearImpulseVelocity).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double,3> *)
         (*(longlong *)&(this->MLinearImpulseVelocity).field_0x8 + (longlong)param_1 * 0x18);
}

// M @ 143e35000

double * __thiscall Chaos::TRigidParticles<double,3>::M(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double *pdVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MM).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar4 = (double *)(*pcVar1)();
      return pdVar4;
    }
  }
  return (double *)(*(longlong *)&(this->MM).field_0x8 + (longlong)param_1 * 8);
}

// M @ 143e35080

double __thiscall Chaos::TRigidParticles<double,3>::M(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double dVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MM).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar4 = (double)(*pcVar1)();
      return dVar4;
    }
  }
  return *(double *)(*(longlong *)&(this->MM).field_0x8 + (longlong)param_1 * 8);
}

// MaxAngularSpeedSq @ 143e35440

double * __thiscall
Chaos::TRigidParticles<double,3>::MaxAngularSpeedSq(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double *pdVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MaxAngularSpeedsSq).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar4 = (double *)(*pcVar1)();
      return pdVar4;
    }
  }
  return (double *)(*(longlong *)&(this->MaxAngularSpeedsSq).field_0x8 + (longlong)param_1 * 8);
}

// MaxAngularSpeedSq @ 143e354c0

double * __thiscall
Chaos::TRigidParticles<double,3>::MaxAngularSpeedSq(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double *pdVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MaxAngularSpeedsSq).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar4 = (double *)(*pcVar1)();
      return pdVar4;
    }
  }
  return (double *)(*(longlong *)&(this->MaxAngularSpeedsSq).field_0x8 + (longlong)param_1 * 8);
}

// MaxLinearSpeedSq @ 143e35540

double * __thiscall
Chaos::TRigidParticles<double,3>::MaxLinearSpeedSq(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double *pdVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MaxLinearSpeedsSq).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar4 = (double *)(*pcVar1)();
      return pdVar4;
    }
  }
  return (double *)(*(longlong *)&(this->MaxLinearSpeedsSq).field_0x8 + (longlong)param_1 * 8);
}

// MaxLinearSpeedSq @ 143e355c0

double * __thiscall
Chaos::TRigidParticles<double,3>::MaxLinearSpeedSq(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double *pdVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MaxLinearSpeedsSq).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar4 = (double *)(*pcVar1)();
      return pdVar4;
    }
  }
  return (double *)(*(longlong *)&(this->MaxLinearSpeedsSq).field_0x8 + (longlong)param_1 * 8);
}

// ObjectState @ 143e374b0

EObjectStateType * __thiscall
Chaos::TRigidParticles<double,3>::ObjectState(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EObjectStateType *pEVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar4 = (EObjectStateType *)(*pcVar1)();
      return pEVar4;
    }
  }
  return (EObjectStateType *)
         (*(longlong *)&(this->CoreData).field_0x8 + 0xb + (longlong)param_1 * 0x10);
}

// ObjectState @ 143e37540

EObjectStateType __thiscall
Chaos::TRigidParticles<double,3>::ObjectState(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EObjectStateType EVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return *(EObjectStateType *)
          (*(longlong *)&(this->CoreData).field_0x8 + 0xb + (longlong)param_1 * 0x10);
}

// ParticleIterationCounts @ 143e37870

TIterationSettings<signed_char> * __thiscall
Chaos::TRigidParticles<double,3>::ParticleIterationCounts
          (TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TIterationSettings<signed_char> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MParticleIterationCounts).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TIterationSettings<signed_char> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TIterationSettings<signed_char> *)
         ((longlong)param_1 * 3 + *(longlong *)&(this->MParticleIterationCounts).field_0x8);
}

// ParticleIterationCounts @ 143e378f0

TIterationSettings<signed_char> __thiscall
Chaos::TRigidParticles<double,3>::ParticleIterationCounts
          (TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TIterationSettings<signed_char> TVar3;
  uint uVar4;
  undefined4 in_register_00000014;
  undefined2 *puVar5;
  uint in_R8D;
  
  uVar4 = 0;
  if ((int)in_R8D < *(int *)&(this->MParticleIterationCounts).field_0x10) {
    uVar4 = ~in_R8D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (TIterationSettings<signed_char>)(*pcVar1)();
      return TVar3;
    }
  }
  puVar5 = (undefined2 *)
           ((longlong)(int)in_R8D * 3 + *(longlong *)&(this->MParticleIterationCounts).field_0x8);
  *(undefined2 *)CONCAT44(in_register_00000014,param_1) = *puVar5;
  *(undefined1 *)((undefined2 *)CONCAT44(in_register_00000014,param_1) + 1) =
       *(undefined1 *)(puVar5 + 1);
  return SUB43(param_1,0);
}

// PreObjectState @ 143e38530

EObjectStateType * __thiscall
Chaos::TRigidParticles<double,3>::PreObjectState(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EObjectStateType *pEVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar4 = (EObjectStateType *)(*pcVar1)();
      return pEVar4;
    }
  }
  return (EObjectStateType *)
         (*(longlong *)&(this->CoreData).field_0x8 + 0xc + (longlong)param_1 * 0x10);
}

// PreObjectState @ 143e385c0

EObjectStateType __thiscall
Chaos::TRigidParticles<double,3>::PreObjectState(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EObjectStateType EVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return *(EObjectStateType *)
          (*(longlong *)&(this->CoreData).field_0x8 + 0xc + (longlong)param_1 * 0x10);
}

// RemoveCollisionConstraintFlag @ 143e3f1b0

void __thiscall
Chaos::TRigidParticles<double,3>::RemoveCollisionConstraintFlag
          (TRigidParticles<double,3> *this,ECollisionConstraintFlags param_1,int param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 < *(int *)&(this->CoreData).field_0x10) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = (uint *)((longlong)param_2 * 0x10 + 4 + *(longlong *)&(this->CoreData).field_0x8);
  *puVar1 = *puVar1 & ~param_1;
  return;
}

// RotationOfMass @ 143e4a2e0

TRotation<double,3> * __thiscall
Chaos::TRigidParticles<double,3>::RotationOfMass(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TRotation<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MRotationOfMass).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRotation<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TRotation<double,3> *)
         ((longlong)param_1 * 0x20 + *(longlong *)&(this->MRotationOfMass).field_0x8);
}

// RotationOfMass @ 143e4a360

TRotation<double,3> * __thiscall
Chaos::TRigidParticles<double,3>::RotationOfMass(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TRotation<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MRotationOfMass).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRotation<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TRotation<double,3> *)
         ((longlong)param_1 * 0x20 + *(longlong *)&(this->MRotationOfMass).field_0x8);
}

// SetCollisionConstraintFlags @ 143e4cd50

void __thiscall
Chaos::TRigidParticles<double,3>::SetCollisionConstraintFlags
          (TRigidParticles<double,3> *this,int param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(uint *)(*(longlong *)&(this->CoreData).field_0x8 + 4 + (longlong)param_1 * 0x10) = param_2;
  return;
}

// SetCollisionParticles @ 143e4cde0

void __thiscall
Chaos::TRigidParticles<double,3>::SetCollisionParticles
          (TRigidParticles<double,3> *this,int param_1,TParticles<double,3> *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  FBVHParticles *pFVar4;
  FBVHParticles *this_00;
  uint uVar5;
  undefined8 local_18 [2];
  
  pFVar4 = ::operator_new(0x48);
  this_00 = (FBVHParticles *)0x0;
  if (pFVar4 != (FBVHParticles *)0x0) {
    this_00 = FBVHParticles::FBVHParticles(pFVar4,param_2);
  }
  uVar5 = 0;
  if (param_1 < *(int *)&(this->MCollisionParticles).field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)&(this->MCollisionParticles).field_0x8 + (longlong)param_1 * 8);
  if (puVar1 == local_18) {
    if (this_00 == (FBVHParticles *)0x0) {
      return;
    }
    FBVHParticles::~FBVHParticles(this_00);
  }
  else {
    pFVar4 = (FBVHParticles *)*puVar1;
    *puVar1 = this_00;
    if (pFVar4 == (FBVHParticles *)0x0) {
      return;
    }
    FBVHParticles::~FBVHParticles(pFVar4);
    this_00 = pFVar4;
  }
  ::operator_delete(this_00,0x48);
  return;
}

// SetDisabledLowLevel @ 143e4d040

void __thiscall
Chaos::TRigidParticles<double,3>::SetDisabledLowLevel
          (TRigidParticles<double,3> *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(bool *)(*(longlong *)&(this->CoreData).field_0x8 + 0xd + (longlong)param_1 * 0x10) = param_2;
  return;
}

// SleepCounter @ 143e50180

schar * __thiscall
Chaos::TRigidParticles<double,3>::SleepCounter(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  schar *psVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MSleepCounter).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      psVar4 = (schar *)(*pcVar1)();
      return psVar4;
    }
  }
  return (schar *)((longlong)param_1 + *(longlong *)&(this->MSleepCounter).field_0x8);
}

// SleepCounter @ 143e50200

schar __thiscall
Chaos::TRigidParticles<double,3>::SleepCounter(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  schar sVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MSleepCounter).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      sVar3 = (*pcVar1)();
      return sVar3;
    }
  }
  return *(schar *)((longlong)param_1 + *(longlong *)&(this->MSleepCounter).field_0x8);
}

// SleepThresholdMultiplier @ 143e50280

float * __thiscall
Chaos::TRigidParticles<double,3>::SleepThresholdMultiplier
          (TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MSleepThresholdMultiplier).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  return (float *)(*(longlong *)&(this->MSleepThresholdMultiplier).field_0x8 + (longlong)param_1 * 4
                  );
}

// SleepThresholdMultiplier @ 143e50300

float * __thiscall
Chaos::TRigidParticles<double,3>::SleepThresholdMultiplier
          (TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MSleepThresholdMultiplier).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  return (float *)(*(longlong *)&(this->MSleepThresholdMultiplier).field_0x8 + (longlong)param_1 * 4
                  );
}

// SleepType @ 143e50380

ESleepType * __thiscall
Chaos::TRigidParticles<double,3>::SleepType(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ESleepType *pEVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MSleepType).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar4 = (ESleepType *)(*pcVar1)();
      return pEVar4;
    }
  }
  return (ESleepType *)((longlong)param_1 + *(longlong *)&(this->MSleepType).field_0x8);
}

// SleepType @ 143e50400

ESleepType __thiscall
Chaos::TRigidParticles<double,3>::SleepType(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ESleepType EVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->MSleepType).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return *(ESleepType *)((longlong)param_1 + *(longlong *)&(this->MSleepType).field_0x8);
}

// Sleeping @ 143e50480

bool __thiscall
Chaos::TRigidParticles<double,3>::Sleeping(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return *(char *)(*(longlong *)&(this->CoreData).field_0x8 + 0xb + (longlong)param_1 * 0x10) ==
         '\x01';
}

// ToString @ 143e562f0

FString * __thiscall
Chaos::TRigidParticles<double,3>::ToString
          (TRigidParticles<double,3> *this,FString *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  uint uVar5;
  uint uVar6;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [3];
  
  TKinematicGeometryParticlesImp<double,3,0>::ToString
            ((TKinematicGeometryParticlesImp<double,3,0> *)this,local_78,param_1);
  uVar6 = 0;
  uVar5 = (uint)~param_1 >> 0x1f;
  uVar3 = uVar6;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar3 = uVar5;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  uVar3 = uVar6;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar3 = uVar5;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  uVar3 = uVar6;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar3 = uVar5;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  uVar3 = uVar6;
  if (param_1 < *(int *)&(this->MCollisionParticles).field_0x10) {
    uVar3 = uVar5;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  if (*(longlong *)(*(longlong *)&(this->MCollisionParticles).field_0x8 + (longlong)param_1 * 8) !=
      0) {
    if (param_1 < *(int *)&(this->MCollisionParticles).field_0x10) {
      uVar6 = uVar5;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar6 = 0;
  uVar3 = uVar6;
  if (param_1 < *(int *)&(this->MRotationOfMass).field_0x10) {
    uVar3 = uVar5;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  ::FString::PrintfImpl(&local_88,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
  uVar3 = uVar6;
  if (param_1 < *(int *)&(this->MCenterOfMass).field_0x10) {
    uVar3 = uVar5;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
  uVar3 = uVar6;
  if (param_1 < *(int *)&(this->MInvM).field_0x10) {
    uVar3 = uVar5;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  uVar3 = uVar6;
  if (param_1 < *(int *)&(this->MM).field_0x10) {
    uVar3 = uVar5;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  uVar3 = uVar6;
  if (param_1 < *(int *)&(this->MInvI).field_0x10) {
    uVar3 = uVar5;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  ::FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
  uVar3 = uVar6;
  if (param_1 < *(int *)&(this->MI).field_0x10) {
    uVar3 = uVar5;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  ::FString::PrintfImpl(&local_b8,L"X=%3.3f Y=%3.3f Z=%3.3f");
  uVar3 = uVar6;
  if (param_1 < *(int *)&(this->MAngularImpulseVelocity).field_0x10) {
    uVar3 = uVar5;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  ::FString::PrintfImpl(&local_c8,L"X=%3.3f Y=%3.3f Z=%3.3f");
  if (param_1 < *(int *)&(this->MLinearImpulseVelocity).field_0x10) {
    uVar6 = uVar5;
  }
  if ((uVar6 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  ::FString::PrintfImpl(&local_d8,L"X=%3.3f Y=%3.3f Z=%3.3f");
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MAngularAcceleration).field_0x10) {
    uVar3 = uVar5;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  ::FString::PrintfImpl(&local_e8,L"X=%3.3f Y=%3.3f Z=%3.3f");
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MAcceleration).field_0x10) {
    uVar3 = uVar5;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  ::FString::PrintfImpl(&local_f8,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"%s, MAcceleration:%s, MAngularAcceleration:%s, MLinearImpulseVelocity:%s, MAngularImpulseVelocity:%s, MI:%s, MInvI:%s, MM:%f, MInvM:%f, MCenterOfMass:%s, MRotationOfMass:%s, MCollisionParticles(num):%d, MCollisionGroup:%d, MDisabled:%d, MSleeping:%d"
            );
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TransientFlags @ 143e56bb0

FRigidParticleTransientFlags * __thiscall
Chaos::TRigidParticles<double,3>::TransientFlags(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigidParticleTransientFlags *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRigidParticleTransientFlags *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FRigidParticleTransientFlags *)
         (*(longlong *)&(this->CoreData).field_0x8 + 10 + (longlong)param_1 * 0x10);
}

// TransientFlags @ 143e56c40

FRigidParticleTransientFlags * __thiscall
Chaos::TRigidParticles<double,3>::TransientFlags(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigidParticleTransientFlags *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->CoreData).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRigidParticleTransientFlags *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FRigidParticleTransientFlags *)
         (*(longlong *)&(this->CoreData).field_0x8 + 10 + (longlong)param_1 * 0x10);
}

// VSmooth @ 143e61ec0

TVector<double,3> * __thiscall
Chaos::TRigidParticles<double,3>::VSmooth(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MVSmooth).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double,3> *)(*(longlong *)&(this->MVSmooth).field_0x8 + (longlong)param_1 * 0x18);
}

// VSmooth @ 143e61f40

TVector<double,3> * __thiscall
Chaos::TRigidParticles<double,3>::VSmooth(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MVSmooth).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double,3> *)(*(longlong *)&(this->MVSmooth).field_0x8 + (longlong)param_1 * 0x18);
}

// WSmooth @ 143e625b0

TVector<double,3> * __thiscall
Chaos::TRigidParticles<double,3>::WSmooth(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MWSmooth).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double,3> *)(*(longlong *)&(this->MWSmooth).field_0x8 + (longlong)param_1 * 0x18);
}

// WSmooth @ 143e62630

TVector<double,3> * __thiscall
Chaos::TRigidParticles<double,3>::WSmooth(TRigidParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MWSmooth).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double,3> *)(*(longlong *)&(this->MWSmooth).field_0x8 + (longlong)param_1 * 0x18);
}

