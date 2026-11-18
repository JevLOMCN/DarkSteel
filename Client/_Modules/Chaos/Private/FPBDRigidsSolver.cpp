// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 93

// FPBDRigidsSolver @ 144068820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FPBDRigidsSolver * __thiscall
Chaos::FPBDRigidsSolver::FPBDRigidsSolver
          (FPBDRigidsSolver *this,EMultiBufferMode param_1,UObject *param_2,double param_3)

{
  TUniquePtr<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>,TDefaultDelete<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>_>_>
  *pTVar1;
  FParticleUniqueIndicesMultithreaded *this_00;
  IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut> *pIVar2;
  FFunctionStorage *pFVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  FPBDRigidsEvolutionGBF *pFVar7;
  FPBDRigidsEvolutionGBF *pFVar8;
  FSolverEventFilters *pFVar9;
  FSolverRemovalEventFilter *pFVar10;
  FPBDRigidDirtyParticlesBuffer *pFVar11;
  TUniquePtr<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>,TDefaultDelete<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>_>_>
  TVar12;
  FPBDRigidsEvolutionGBF *pFVar13;
  FFunctionStorage *pFVar14;
  undefined ***pppuVar15;
  undefined1 auStackY_f8 [32];
  undefined8 *local_b8 [2];
  code *local_a8 [2];
  undefined **local_98;
  FPBDRigidsSolver *local_90;
  undefined ***local_80;
  code *local_78;
  undefined8 uStack_70;
  FFunctionStorage local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  FPhysicsSolverBase::FPhysicsSolverBase
            ((FPhysicsSolverBase *)this,param_1,(param_1 == Single) + TaskGraph,param_2,param_3);
  pFVar13 = (FPBDRigidsEvolutionGBF *)0x0;
  this->bHasFloor = true;
  this->bIsFloorAnalytic = false;
  this->PhysSceneHack = (void *)0x0;
  this->_padding_ = (longlong)&___7FPBDRigidsSolver_Chaos__6B_;
  this->CurrentFrame = 0;
  this->FloorHeight = 0.0;
  this->bIsDeterministic = false;
  pFVar7 = ::operator_new(0x98);
  pFVar8 = pFVar13;
  if (pFVar7 != (FPBDRigidsEvolutionGBF *)0x0) {
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar8 = pFVar7;
  }
  (this->TaskDispatcher).Ptr = (FTaskDispatcherSolver *)pFVar8;
  (this->QueryMaterials_External).HandleEntries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this_00 = &this->UniqueIndices;
  (this->QueryMaterials_External).HandleEntries.ArrayNum = 0;
  (this->QueryMaterials_External).HandleEntries.ArrayMax = 0;
  (this->QueryMaterials_External).Validity.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->QueryMaterials_External).FreeList = 0xffffff;
  (this->QueryMaterials_External).Validity.NumBits = 0;
  (this->QueryMaterials_External).Validity.MaxBits = 0x80;
  (this->QueryMaterials_External).Data = (FChaosPhysicsMaterial *)0x0;
  (this->QueryMaterials_External).NumData = 0;
  (this->QueryMaterials_External).Capacity = 0;
  (this->QueryMaterials_External).NumActive = 0;
  (this->QueryMaterialMasks_External).HandleEntries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->QueryMaterialMasks_External).HandleEntries.ArrayNum = 0;
  (this->QueryMaterialMasks_External).HandleEntries.ArrayMax = 0;
  (this->QueryMaterialMasks_External).Validity.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->QueryMaterialMasks_External).FreeList = 0xffffff;
  (this->QueryMaterialMasks_External).Validity.NumBits = 0;
  (this->QueryMaterialMasks_External).Validity.MaxBits = 0x80;
  (this->QueryMaterialMasks_External).Data = (FChaosPhysicsMaterialMask *)0x0;
  (this->QueryMaterialMasks_External).NumData = 0;
  (this->QueryMaterialMasks_External).Capacity = 0;
  (this->QueryMaterialMasks_External).NumActive = 0;
  (this->SimMaterials).HandleEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimMaterials).HandleEntries.ArrayNum = 0;
  (this->SimMaterials).HandleEntries.ArrayMax = 0;
  (this->SimMaterials).Validity.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->SimMaterials).FreeList = 0xffffff;
  (this->SimMaterials).Validity.NumBits = 0;
  (this->SimMaterials).Validity.MaxBits = 0x80;
  (this->SimMaterials).Data = (FChaosPhysicsMaterial *)0x0;
  (this->SimMaterials).NumData = 0;
  (this->SimMaterials).Capacity = 0;
  (this->SimMaterials).NumActive = 0;
  (this->SimMaterialMasks).HandleEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimMaterialMasks).HandleEntries.ArrayNum = 0;
  (this->SimMaterialMasks).HandleEntries.ArrayMax = 0;
  (this->SimMaterialMasks).Validity.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->SimMaterialMasks).FreeList = 0xffffff;
  (this->SimMaterialMasks).Validity.NumBits = 0;
  (this->SimMaterialMasks).Validity.MaxBits = 0x80;
  (this->SimMaterialMasks).Data = (FChaosPhysicsMaterialMask *)0x0;
  (this->SimMaterialMasks).NumData = 0;
  (this->SimMaterialMasks).Capacity = 0;
  (this->SimMaterialMasks).NumActive = 0;
  this_00->_padding_ = (longlong)&___7FParticleUniqueIndicesMultithreaded_Chaos__6B_;
  (this->UniqueIndices).Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueIndices).Pages.ArrayNum = 0;
  (this->UniqueIndices).Pages.ArrayMax = 0;
  *(undefined8 *)&(this->UniqueIndices).FreeIndices = 0;
  *(undefined8 *)&(this->UniqueIndices).FreeIndices.field_0x8 = 0;
  *(undefined8 *)&(this->UniqueIndices).FreeIndices = 0;
  *(undefined8 *)&(this->UniqueIndices).FreeIndices.field_0x8 = 0;
  uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
  *(ulonglong *)&(this->UniqueIndices).FreeIndices =
       *(ulonglong *)&(this->UniqueIndices).FreeIndices & 0xfffffffffc000000 | (ulonglong)uVar6;
  *(ulonglong *)&(this->UniqueIndices).FreeIndices.field_0x8 =
       *(ulonglong *)&(this->UniqueIndices).FreeIndices.field_0x8 & 0xfffffffffc000000 |
       (ulonglong)uVar6;
  (this->UniqueIndices).Block = '\0';
  FParticleUniqueIndicesMultithreaded::AddPageAndAcquireNextId(this_00,false);
  FPBDRigidsSOAs::FPBDRigidsSOAs(&this->Particles,(IParticleUniqueIndices *)this_00);
  pFVar7 = ::operator_new(0x1440);
  pFVar8 = pFVar13;
  if (pFVar7 != (FPBDRigidsEvolutionGBF *)0x0) {
    pFVar8 = FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF
                       (pFVar7,&this->Particles,&this->SimMaterials,
                        (TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *)
                        &this->_padding_,
                        (TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *)
                        &this->_padding_,
                        (TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *)
                        &this->_padding_,
                        (TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *)
                        &this->_padding_,param_1 == Single);
  }
  (this->MEvolution).Ptr = pFVar8;
  pFVar7 = ::operator_new(0x28);
  pFVar8 = pFVar13;
  if (pFVar7 != (FPBDRigidsEvolutionGBF *)0x0) {
    *(EMultiBufferMode *)&pFVar7->_padding_ = param_1;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar8 = pFVar7;
  }
  (this->MEventManager).Ptr = (FEventManager *)pFVar8;
  pFVar9 = ::operator_new(0x28);
  if (pFVar9 == (FSolverEventFilters *)0x0) {
    pFVar9 = (FSolverEventFilters *)0x0;
  }
  else {
    pFVar7 = ::operator_new(0x10);
    pFVar8 = pFVar13;
    if (pFVar7 != (FPBDRigidsEvolutionGBF *)0x0) {
      *(undefined1 *)&pFVar7->_padding_ = 0;
      *(undefined8 *)((longlong)&pFVar7->_padding_ + 4) = 0;
      *(undefined4 *)((longlong)&pFVar7->_padding_ + 4) = 0;
      pFVar8 = pFVar7;
    }
    (pFVar9->CollisionFilter).Ptr = (FSolverCollisionEventFilter *)pFVar8;
    pFVar7 = ::operator_new(0x10);
    pFVar8 = pFVar13;
    if (pFVar7 != (FPBDRigidsEvolutionGBF *)0x0) {
      *(undefined1 *)&pFVar7->_padding_ = 0;
      *(undefined8 *)((longlong)&pFVar7->_padding_ + 4) = 0;
      *(undefined4 *)((longlong)&pFVar7->_padding_ + 4) = 0;
      pFVar8 = pFVar7;
    }
    (pFVar9->BreakingFilter).Ptr = (FSolverBreakingEventFilter *)pFVar8;
    pFVar7 = ::operator_new(0x10);
    pFVar8 = pFVar13;
    if (pFVar7 != (FPBDRigidsEvolutionGBF *)0x0) {
      *(undefined1 *)&pFVar7->_padding_ = 0;
      *(undefined8 *)((longlong)&pFVar7->_padding_ + 4) = 0;
      *(undefined4 *)((longlong)&pFVar7->_padding_ + 4) = 0;
      pFVar8 = pFVar7;
    }
    (pFVar9->TrailingFilter).Ptr = (FSolverTrailingEventFilter *)pFVar8;
    pFVar10 = ::operator_new(0xc);
    if (pFVar10 == (FSolverRemovalEventFilter *)0x0) {
      (pFVar9->RemovalFilter).Ptr = (FSolverRemovalEventFilter *)0x0;
      pFVar9->CollisionEventsEnabled = false;
      pFVar9->BreakingEventsEnabled = false;
      pFVar9->TrailingEventsEnabled = false;
      pFVar9->RemovalEventsEnabled = false;
    }
    else {
      (pFVar10->Settings).FilterEnabled = false;
      (pFVar10->Settings).MinMass = 0.0;
      (pFVar10->Settings).MinVolume = 0.0;
      (pFVar9->RemovalFilter).Ptr = pFVar10;
      pFVar9->CollisionEventsEnabled = false;
      pFVar9->BreakingEventsEnabled = false;
      pFVar9->TrailingEventsEnabled = false;
      pFVar9->RemovalEventsEnabled = false;
    }
  }
  (this->MSolverEventFilters).Ptr = pFVar9;
  pFVar11 = ::operator_new(0x20);
  if (pFVar11 == (FPBDRigidDirtyParticlesBuffer *)0x0) {
    pFVar11 = (FPBDRigidDirtyParticlesBuffer *)0x0;
  }
  else {
    pFVar11->BufferMode = param_1;
    pTVar1 = &pFVar11->SolverDataOut;
    (pFVar11->ResourceOutLock).Mutex.Mutex.Ptr = (void *)0x0;
    pTVar1->Ptr = (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut> *)0x0;
    pFVar11->bUseLock = param_1 != Single;
    TVar12 = FMultiBufferFactory<Chaos::FPBDRigidDirtyParticlesBufferOut>::CreateBuffer
                       ((EMultiBufferMode)local_b8);
    if ((IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut> *)pTVar1 != TVar12.Ptr) {
      pIVar2 = pTVar1->Ptr;
      pTVar1->Ptr = (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut> *)*TVar12.Ptr;
      *TVar12.Ptr = (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>)0x0;
      if (pIVar2 != (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut> *)0x0) {
        (**(code **)*pIVar2)(pIVar2,1);
      }
    }
    if (local_b8[0] != (undefined8 *)0x0) {
      (**(code **)*local_b8[0])(local_b8[0],1);
    }
  }
  (this->MDirtyParticlesBuffer).Ptr = pFVar11;
  pFVar7 = ::operator_new(0x28);
  pFVar8 = pFVar13;
  if (pFVar7 != (FPBDRigidsEvolutionGBF *)0x0) {
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)pFVar7,4000);
    pFVar8 = pFVar7;
  }
  (this->MCurrentLock).Object = (FWindowsRecursiveMutex *)pFVar8;
  pFVar7 = ::operator_new(0x18);
  if (pFVar7 != (FPBDRigidsEvolutionGBF *)0x0) {
    *(undefined4 *)&pFVar7->_padding_ = 1;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFWindowsRecursiveMutex_UE__U__DefaultDeleter_VFWindowsRecursiveMutex_UE___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar7->_padding_ + 4) = 1;
    pFVar7->_padding_ = (longlong)pFVar8;
    pFVar13 = pFVar7;
  }
  (this->MCurrentLock).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar13;
  *(undefined8 *)&this->SingleParticlePhysicsProxies_PT = 0;
  *(undefined8 *)&(this->SingleParticlePhysicsProxies_PT).field_0x8 = 0;
  *(undefined8 *)&(this->SingleParticlePhysicsProxies_PT).field_0x20 = 0;
  *(undefined4 *)&(this->SingleParticlePhysicsProxies_PT).field_0x28 = 0;
  *(undefined4 *)&(this->SingleParticlePhysicsProxies_PT).field_0x2c = 0x80;
  *(undefined4 *)&(this->SingleParticlePhysicsProxies_PT).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SingleParticlePhysicsProxies_PT).field_0x34 = 0;
  (this->GeometryCollectionPhysicsProxies_Internal).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GeometryCollectionPhysicsProxies_Internal).ArrayNum = 0;
  (this->GeometryCollectionPhysicsProxies_Internal).ArrayMax = 0;
  (this->GeometryCollectionPhysicsProxiesField_Internal).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GeometryCollectionPhysicsProxiesField_Internal).ArrayNum = 0;
  (this->GeometryCollectionPhysicsProxiesField_Internal).ArrayMax = 0;
  (this->ClusterUnionPhysicsProxies_Internal).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ClusterUnionPhysicsProxies_Internal).ArrayNum = 0;
  (this->ClusterUnionPhysicsProxies_Internal).ArrayMax = 0;
  (this->JointConstraintPhysicsProxies_Internal).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->JointConstraintPhysicsProxies_Internal).ArrayNum = 0;
  (this->JointConstraintPhysicsProxies_Internal).ArrayMax = 0;
  (this->CharacterGroundConstraintProxies_Internal).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CharacterGroundConstraintProxies_Internal).ArrayNum = 0;
  (this->CharacterGroundConstraintProxies_Internal).ArrayMax = 0;
  (this->PerSolverField).Ptr = (FPerSolverFieldSystem *)0x0;
  FSolverSerializer::FSolverSerializer(&this->Serializer,this);
  (this->PendingDestroyPhysicsProxy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingDestroyPhysicsProxy).ArrayNum = 0;
  (this->PendingDestroyPhysicsProxy).ArrayMax = 0;
  (this->PendingDestroyGeometryCollectionPhysicsProxy).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PendingDestroyGeometryCollectionPhysicsProxy).ArrayNum = 0;
  (this->PendingDestroyGeometryCollectionPhysicsProxy).ArrayMax = 0;
  (this->PendingDestroyClusterUnionProxy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingDestroyClusterUnionProxy).ArrayNum = 0;
  (this->PendingDestroyClusterUnionProxy).ArrayMax = 0;
  (this->CDDScene).Object = (FChaosDDScene *)0x0;
  (this->CDDScene).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->CDDFrameTimeline).Object = (FChaosDDTimeline *)0x0;
  (this->CDDFrameTimeline).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (5 < (byte)LogPBDRigidsSolver._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPBDRigidsSolver);
  }
  Reset(this);
  pFVar13 = (this->MEvolution).Ptr;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_80 = (undefined ***)0x0;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::__l2::<lambda_1>,void,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_*>
                ::Call;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::__l2::<lambda_1>,void,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_*>
             ::Call;
  local_68.HeapAllocation = (void *)0x0;
  local_90 = this;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::__l2::<lambda_1>,0,0>::
  CloneToEmptyStorage(&local_98,&local_68);
  lVar4 = *(longlong *)&pFVar13->InternalParticleInitilization;
  uVar5 = *(undefined8 *)&(pFVar13->InternalParticleInitilization).field_0x8;
  pFVar3 = *(FFunctionStorage **)&(pFVar13->InternalParticleInitilization).field_0x28;
  *(code **)&pFVar13->InternalParticleInitilization = local_78;
  *(undefined8 *)&(pFVar13->InternalParticleInitilization).field_0x8 = uStack_70;
  (pFVar13->InternalParticleInitilization).field_0x10 = local_68.InlineAllocation[0];
  (pFVar13->InternalParticleInitilization).field_0x11 = local_68.InlineAllocation[1];
  (pFVar13->InternalParticleInitilization).field_0x12 = local_68.InlineAllocation[2];
  (pFVar13->InternalParticleInitilization).field_0x13 = local_68.InlineAllocation[3];
  (pFVar13->InternalParticleInitilization).field_0x14 = local_68.InlineAllocation[4];
  (pFVar13->InternalParticleInitilization).field_0x15 = local_68.InlineAllocation[5];
  (pFVar13->InternalParticleInitilization).field_0x16 = local_68.InlineAllocation[6];
  (pFVar13->InternalParticleInitilization).field_0x17 = local_68.InlineAllocation[7];
  (pFVar13->InternalParticleInitilization).field_0x18 = local_68.InlineAllocation[8];
  (pFVar13->InternalParticleInitilization).field_0x19 = local_68.InlineAllocation[9];
  (pFVar13->InternalParticleInitilization).field_0x1a = local_68.InlineAllocation[10];
  (pFVar13->InternalParticleInitilization).field_0x1b = local_68.InlineAllocation[0xb];
  (pFVar13->InternalParticleInitilization).field_0x1c = local_68.InlineAllocation[0xc];
  (pFVar13->InternalParticleInitilization).field_0x1d = local_68.InlineAllocation[0xd];
  (pFVar13->InternalParticleInitilization).field_0x1e = local_68.InlineAllocation[0xe];
  (pFVar13->InternalParticleInitilization).field_0x1f = local_68.InlineAllocation[0xf];
  (pFVar13->InternalParticleInitilization).field_0x20 = local_68.InlineAllocation[0x10];
  (pFVar13->InternalParticleInitilization).field_0x21 = local_68.InlineAllocation[0x11];
  (pFVar13->InternalParticleInitilization).field_0x22 = local_68.InlineAllocation[0x12];
  (pFVar13->InternalParticleInitilization).field_0x23 = local_68.InlineAllocation[0x13];
  (pFVar13->InternalParticleInitilization).field_0x24 = local_68.InlineAllocation[0x14];
  (pFVar13->InternalParticleInitilization).field_0x25 = local_68.InlineAllocation[0x15];
  (pFVar13->InternalParticleInitilization).field_0x26 = local_68.InlineAllocation[0x16];
  (pFVar13->InternalParticleInitilization).field_0x27 = local_68.InlineAllocation[0x17];
  *(undefined4 *)&(pFVar13->InternalParticleInitilization).field_0x28 =
       local_68.HeapAllocation._0_4_;
  *(undefined4 *)&(pFVar13->InternalParticleInitilization).field_0x2c =
       local_68.HeapAllocation._4_4_;
  local_78 = (code *)lVar4;
  uStack_70 = uVar5;
  local_68.InlineAllocation[0] = (pFVar13->InternalParticleInitilization).field_0x10;
  local_68.InlineAllocation[1] = (pFVar13->InternalParticleInitilization).field_0x11;
  local_68.InlineAllocation[2] = (pFVar13->InternalParticleInitilization).field_0x12;
  local_68.InlineAllocation[3] = (pFVar13->InternalParticleInitilization).field_0x13;
  local_68.InlineAllocation[4] = (pFVar13->InternalParticleInitilization).field_0x14;
  local_68.InlineAllocation[5] = (pFVar13->InternalParticleInitilization).field_0x15;
  local_68.InlineAllocation[6] = (pFVar13->InternalParticleInitilization).field_0x16;
  local_68.InlineAllocation[7] = (pFVar13->InternalParticleInitilization).field_0x17;
  local_68.InlineAllocation[8] = (pFVar13->InternalParticleInitilization).field_0x18;
  local_68.InlineAllocation[9] = (pFVar13->InternalParticleInitilization).field_0x19;
  local_68.InlineAllocation[10] = (pFVar13->InternalParticleInitilization).field_0x1a;
  local_68.InlineAllocation[0xb] = (pFVar13->InternalParticleInitilization).field_0x1b;
  local_68.InlineAllocation[0xc] = (pFVar13->InternalParticleInitilization).field_0x1c;
  local_68.InlineAllocation[0xd] = (pFVar13->InternalParticleInitilization).field_0x1d;
  local_68.InlineAllocation[0xe] = (pFVar13->InternalParticleInitilization).field_0x1e;
  local_68.InlineAllocation[0xf] = (pFVar13->InternalParticleInitilization).field_0x1f;
  local_68.InlineAllocation[0x10] = (pFVar13->InternalParticleInitilization).field_0x20;
  local_68.InlineAllocation[0x11] = (pFVar13->InternalParticleInitilization).field_0x21;
  local_68.InlineAllocation[0x12] = (pFVar13->InternalParticleInitilization).field_0x22;
  local_68.InlineAllocation[0x13] = (pFVar13->InternalParticleInitilization).field_0x23;
  local_68.InlineAllocation[0x14] = (pFVar13->InternalParticleInitilization).field_0x24;
  local_68.InlineAllocation[0x15] = (pFVar13->InternalParticleInitilization).field_0x25;
  local_68.InlineAllocation[0x16] = (pFVar13->InternalParticleInitilization).field_0x26;
  local_68.InlineAllocation[0x17] = (pFVar13->InternalParticleInitilization).field_0x27;
  local_68.HeapAllocation = pFVar3;
  if (lVar4 != 0) {
    pFVar14 = &local_68;
    if (pFVar3 != (FFunctionStorage *)0x0) {
      pFVar14 = pFVar3;
    }
    (**(code **)(*(longlong *)pFVar14->InlineAllocation + 0x10))();
  }
  if (local_a8[0] != (code *)0x0) {
    pppuVar15 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar15 = local_80;
    }
    (*(code *)(*pppuVar15)[2])();
  }
  pFVar13 = (this->MEvolution).Ptr;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_80 = (undefined ***)0x0;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::__l2::<lambda_2>,void,double>
                ::Call;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::__l2::<lambda_2>,void,double>
             ::Call;
  local_68.HeapAllocation = (void *)0x0;
  local_90 = this;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::__l2::<lambda_2>,0,0>::
  CloneToEmptyStorage(&local_98,&local_68);
  lVar4 = *(longlong *)&pFVar13->PreIntegrateCallback;
  uVar5 = *(undefined8 *)&(pFVar13->PreIntegrateCallback).field_0x8;
  pFVar3 = *(FFunctionStorage **)&(pFVar13->PreIntegrateCallback).field_0x28;
  *(code **)&pFVar13->PreIntegrateCallback = local_78;
  *(undefined8 *)&(pFVar13->PreIntegrateCallback).field_0x8 = uStack_70;
  (pFVar13->PreIntegrateCallback).field_0x10 = local_68.InlineAllocation[0];
  (pFVar13->PreIntegrateCallback).field_0x11 = local_68.InlineAllocation[1];
  (pFVar13->PreIntegrateCallback).field_0x12 = local_68.InlineAllocation[2];
  (pFVar13->PreIntegrateCallback).field_0x13 = local_68.InlineAllocation[3];
  (pFVar13->PreIntegrateCallback).field_0x14 = local_68.InlineAllocation[4];
  (pFVar13->PreIntegrateCallback).field_0x15 = local_68.InlineAllocation[5];
  (pFVar13->PreIntegrateCallback).field_0x16 = local_68.InlineAllocation[6];
  (pFVar13->PreIntegrateCallback).field_0x17 = local_68.InlineAllocation[7];
  (pFVar13->PreIntegrateCallback).field_0x18 = local_68.InlineAllocation[8];
  (pFVar13->PreIntegrateCallback).field_0x19 = local_68.InlineAllocation[9];
  (pFVar13->PreIntegrateCallback).field_0x1a = local_68.InlineAllocation[10];
  (pFVar13->PreIntegrateCallback).field_0x1b = local_68.InlineAllocation[0xb];
  (pFVar13->PreIntegrateCallback).field_0x1c = local_68.InlineAllocation[0xc];
  (pFVar13->PreIntegrateCallback).field_0x1d = local_68.InlineAllocation[0xd];
  (pFVar13->PreIntegrateCallback).field_0x1e = local_68.InlineAllocation[0xe];
  (pFVar13->PreIntegrateCallback).field_0x1f = local_68.InlineAllocation[0xf];
  (pFVar13->PreIntegrateCallback).field_0x20 = local_68.InlineAllocation[0x10];
  (pFVar13->PreIntegrateCallback).field_0x21 = local_68.InlineAllocation[0x11];
  (pFVar13->PreIntegrateCallback).field_0x22 = local_68.InlineAllocation[0x12];
  (pFVar13->PreIntegrateCallback).field_0x23 = local_68.InlineAllocation[0x13];
  (pFVar13->PreIntegrateCallback).field_0x24 = local_68.InlineAllocation[0x14];
  (pFVar13->PreIntegrateCallback).field_0x25 = local_68.InlineAllocation[0x15];
  (pFVar13->PreIntegrateCallback).field_0x26 = local_68.InlineAllocation[0x16];
  (pFVar13->PreIntegrateCallback).field_0x27 = local_68.InlineAllocation[0x17];
  *(undefined4 *)&(pFVar13->PreIntegrateCallback).field_0x28 = local_68.HeapAllocation._0_4_;
  *(undefined4 *)&(pFVar13->PreIntegrateCallback).field_0x2c = local_68.HeapAllocation._4_4_;
  local_78 = (code *)lVar4;
  uStack_70 = uVar5;
  local_68.InlineAllocation[0] = (pFVar13->PreIntegrateCallback).field_0x10;
  local_68.InlineAllocation[1] = (pFVar13->PreIntegrateCallback).field_0x11;
  local_68.InlineAllocation[2] = (pFVar13->PreIntegrateCallback).field_0x12;
  local_68.InlineAllocation[3] = (pFVar13->PreIntegrateCallback).field_0x13;
  local_68.InlineAllocation[4] = (pFVar13->PreIntegrateCallback).field_0x14;
  local_68.InlineAllocation[5] = (pFVar13->PreIntegrateCallback).field_0x15;
  local_68.InlineAllocation[6] = (pFVar13->PreIntegrateCallback).field_0x16;
  local_68.InlineAllocation[7] = (pFVar13->PreIntegrateCallback).field_0x17;
  local_68.InlineAllocation[8] = (pFVar13->PreIntegrateCallback).field_0x18;
  local_68.InlineAllocation[9] = (pFVar13->PreIntegrateCallback).field_0x19;
  local_68.InlineAllocation[10] = (pFVar13->PreIntegrateCallback).field_0x1a;
  local_68.InlineAllocation[0xb] = (pFVar13->PreIntegrateCallback).field_0x1b;
  local_68.InlineAllocation[0xc] = (pFVar13->PreIntegrateCallback).field_0x1c;
  local_68.InlineAllocation[0xd] = (pFVar13->PreIntegrateCallback).field_0x1d;
  local_68.InlineAllocation[0xe] = (pFVar13->PreIntegrateCallback).field_0x1e;
  local_68.InlineAllocation[0xf] = (pFVar13->PreIntegrateCallback).field_0x1f;
  local_68.InlineAllocation[0x10] = (pFVar13->PreIntegrateCallback).field_0x20;
  local_68.InlineAllocation[0x11] = (pFVar13->PreIntegrateCallback).field_0x21;
  local_68.InlineAllocation[0x12] = (pFVar13->PreIntegrateCallback).field_0x22;
  local_68.InlineAllocation[0x13] = (pFVar13->PreIntegrateCallback).field_0x23;
  local_68.InlineAllocation[0x14] = (pFVar13->PreIntegrateCallback).field_0x24;
  local_68.InlineAllocation[0x15] = (pFVar13->PreIntegrateCallback).field_0x25;
  local_68.InlineAllocation[0x16] = (pFVar13->PreIntegrateCallback).field_0x26;
  local_68.InlineAllocation[0x17] = (pFVar13->PreIntegrateCallback).field_0x27;
  local_68.HeapAllocation = pFVar3;
  if (lVar4 != 0) {
    pFVar14 = &local_68;
    if (pFVar3 != (FFunctionStorage *)0x0) {
      pFVar14 = pFVar3;
    }
    (**(code **)(*(longlong *)pFVar14->InlineAllocation + 0x10))();
  }
  if (local_a8[0] != (code *)0x0) {
    pppuVar15 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar15 = local_80;
    }
    (*(code *)(*pppuVar15)[2])();
  }
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_80 = (undefined ***)0x0;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::__l2::<lambda_3>,void,double>
                ::Call;
  local_90 = this;
  TFunction<void___cdecl(double)>::operator=
            (&((this->MEvolution).Ptr)->PostIntegrateCallback,
             (TFunction<void___cdecl(double)> *)local_a8);
  if (local_a8[0] != (code *)0x0) {
    pppuVar15 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar15 = local_80;
    }
    (*(code *)(*pppuVar15)[2])();
  }
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_80 = (undefined ***)0x0;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::__l2::<lambda_4>,void,double>
                ::Call;
  local_90 = this;
  TFunction<void___cdecl(double)>::operator=
            (&((this->MEvolution).Ptr)->PreSolveCallback,(TFunction<void___cdecl(double)> *)local_a8
            );
  if (local_a8[0] != (code *)0x0) {
    pppuVar15 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar15 = local_80;
    }
    (*(code *)(*pppuVar15)[2])();
  }
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::`2'::<lambda_5>,0,0>
              ::_vftable_;
  local_80 = (undefined ***)0x0;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::__l2::<lambda_5>,void,double>
                ::Call;
  local_90 = this;
  TFunction<void___cdecl(double)>::operator=
            (&((this->MEvolution).Ptr)->PostSolveCallback,
             (TFunction<void___cdecl(double)> *)local_a8);
  if (local_a8[0] != (code *)0x0) {
    pppuVar15 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar15 = local_80;
    }
    (*(code *)(*pppuVar15)[2])();
  }
  return this;
}

// ~FPBDRigidsSolver @ 14406b770

void __thiscall Chaos::FPBDRigidsSolver::~FPBDRigidsSolver(FPBDRigidsSolver *this)

{
  FScriptContainerElement *pFVar1;
  FPerSolverFieldSystem *this_00;
  FPBDRigidDirtyParticlesBuffer *pFVar2;
  IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut> *pIVar3;
  FSolverEventFilters *pFVar4;
  FPBDRigidsEvolutionGBF *pFVar5;
  ForElementType<unsigned_int> FVar6;
  FTaskDispatcherSolver *this_01;
  code *pcVar7;
  BOOLEAN BVar8;
  bool bVar9;
  FUniqueIdx *pFVar10;
  
  this->_padding_ = (longlong)&___7FPBDRigidsSolver_Chaos__6B_;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CDDFrameTimeline).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CDDScene).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->PendingDestroyClusterUnionProxy).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PendingDestroyGeometryCollectionPhysicsProxy).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PendingDestroyPhysicsProxy).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSolverSerializer::~FSolverSerializer(&this->Serializer);
  this_00 = (this->PerSolverField).Ptr;
  if (this_00 != (FPerSolverFieldSystem *)0x0) {
    DestructItems<FFieldSystemCommand,int>
              ((FFieldSystemCommand *)(this_00->PersistentCommands).AllocatorInstance.Data,
               (this_00->PersistentCommands).ArrayNum);
    pFVar1 = (this_00->PersistentCommands).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<FFieldSystemCommand,int>
              ((FFieldSystemCommand *)(this_00->TransientCommands).AllocatorInstance.Data,
               (this_00->TransientCommands).ArrayNum);
    pFVar1 = (this_00->TransientCommands).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    FFieldExecutionDatas::~FFieldExecutionDatas(&this_00->ExecutionDatas);
    ::operator_delete(this_00,0x120);
  }
  pFVar1 = (this->CharacterGroundConstraintProxies_Internal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->JointConstraintPhysicsProxies_Internal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ClusterUnionPhysicsProxies_Internal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GeometryCollectionPhysicsProxiesField_Internal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GeometryCollectionPhysicsProxies_Internal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TSparseArray<Chaos::FSingleParticlePhysicsProxy_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<Chaos::FSingleParticlePhysicsProxy_*,FDefaultSparseArrayAllocator>
            (&this->SingleParticlePhysicsProxies_PT);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MCurrentLock).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->MDirtyParticlesBuffer).Ptr;
  if (pFVar2 != (FPBDRigidDirtyParticlesBuffer *)0x0) {
    pIVar3 = (pFVar2->SolverDataOut).Ptr;
    if (pIVar3 != (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut> *)0x0) {
      (**(code **)*pIVar3)(pIVar3,1);
    }
    BVar8 = TryAcquireSRWLockExclusive((PSRWLOCK)&pFVar2->ResourceOutLock);
    if (BVar8 == '\0') {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar2->ResourceOutLock);
    }
    ::operator_delete(pFVar2,0x20);
  }
  pFVar4 = (this->MSolverEventFilters).Ptr;
  if (pFVar4 != (FSolverEventFilters *)0x0) {
    ::operator_delete((pFVar4->RemovalFilter).Ptr,0xc);
    ::operator_delete((pFVar4->TrailingFilter).Ptr,0x10);
    ::operator_delete((pFVar4->BreakingFilter).Ptr,0x10);
    ::operator_delete((pFVar4->CollisionFilter).Ptr,0x10);
    ::operator_delete(pFVar4,0x28);
  }
  TDefaultDelete<Chaos::FEventManager>::operator()
            ((TDefaultDelete<Chaos::FEventManager> *)&this->MEventManager,(this->MEventManager).Ptr)
  ;
  pFVar5 = (this->MEvolution).Ptr;
  if (pFVar5 != (FPBDRigidsEvolutionGBF *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  FPBDRigidsSOAs::~FPBDRigidsSOAs(&this->Particles);
  (this->UniqueIndices)._padding_ = (longlong)&___7FParticleUniqueIndicesMultithreaded_Chaos__6B_;
  do {
    pFVar10 = FLockFreePointerFIFOBase<Chaos::FUniqueIdx,0,1>::Pop
                        ((FLockFreePointerFIFOBase<Chaos::FUniqueIdx,0,1> *)
                         &(this->UniqueIndices).FreeIndices);
  } while (pFVar10 != (FUniqueIdx *)0x0);
  FLockFreePointerFIFOBase<Chaos::FUniqueIdx,0,1>::~FLockFreePointerFIFOBase<Chaos::FUniqueIdx,0,1>
            ((FLockFreePointerFIFOBase<Chaos::FUniqueIdx,0,1> *)&(this->UniqueIndices).FreeIndices);
  DestructItems<TUniquePtr<Chaos::FParticleUniqueIndicesMultithreaded::FUniqueIdxPage,TDefaultDelete<Chaos::FParticleUniqueIndicesMultithreaded::FUniqueIdxPage>_>,int>
            ((TUniquePtr<Chaos::FParticleUniqueIndicesMultithreaded::FUniqueIdxPage,TDefaultDelete<Chaos::FParticleUniqueIndicesMultithreaded::FUniqueIdxPage>_>
              *)(this->UniqueIndices).Pages.AllocatorInstance.Data,
             (this->UniqueIndices).Pages.ArrayNum);
  pFVar1 = (this->UniqueIndices).Pages.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::DestroyItems(&this->SimMaterialMasks);
  FVar6 = (this->SimMaterialMasks).Validity.AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  pFVar1 = (this->SimMaterialMasks).HandleEntries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::DestroyItems(&this->SimMaterials);
  FVar6 = (this->SimMaterials).Validity.AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  pFVar1 = (this->SimMaterials).HandleEntries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::DestroyItems
            (&this->QueryMaterialMasks_External);
  FVar6 = (this->QueryMaterialMasks_External).Validity.AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  pFVar1 = (this->QueryMaterialMasks_External).HandleEntries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::DestroyItems(&this->QueryMaterials_External);
  FVar6 = (this->QueryMaterials_External).Validity.AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  pFVar1 = (this->QueryMaterials_External).HandleEntries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_01 = (this->TaskDispatcher).Ptr;
  if (this_01 != (FTaskDispatcherSolver *)0x0) {
    Chaos::Private::FTaskDispatcherSolver::~FTaskDispatcherSolver(this_01);
    ::operator_delete(this_01,0x98);
  }
  FPhysicsSolverBase::~FPhysicsSolverBase((FPhysicsSolverBase *)this);
  return;
}

// operator() @ 14406cba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Chaos::FPBDRigidsSolver::
DispatchTasksBufferPhysicsResults<`Chaos::FPBDRigidsSolver::BufferPhysicsResults'::__l13::<lambda_1>_>'
::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2,
          TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_> *param_3)

{
  EPhysicsProxyType EVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  TPBDRigidParticles<double,3> *this_00;
  TPBDRigidClusteredParticles<double,3> *this_01;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  EObjectStateType EVar7;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar8;
  IPhysicsProxyBase *pIVar9;
  ESyncState *pEVar10;
  FRigidClusteredFlags_u_0 *pFVar11;
  TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator> *pTVar12;
  byte bVar13;
  int iVar14;
  TPBDRigidParticleHandleImp<double,3,0> *this_02;
  uint uVar15;
  longlong lVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178 [8];
  IPhysicsProxyBase *local_170;
  longlong local_168;
  IPhysicsProxyBase *local_160;
  TPBDRigidParticles<double,3> *local_158;
  int local_150;
  byte local_14c;
  int local_148;
  ulonglong local_140;
  longlong local_138;
  int local_130;
  int local_12c;
  char *local_128;
  longlong *local_120;
  uint uStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  uint local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_140 = (ulonglong)param_1;
  if (param_1 < param_2) {
    lVar16 = local_140 * 8;
    uVar20 = local_140;
    local_148 = param_2;
    local_128 = this;
    do {
      plVar2 = *(longlong **)((longlong)this + 8);
      uVar19 = (uint)uVar20;
      uVar15 = 0;
      if ((int)uVar19 < (int)plVar2[1]) {
        uVar15 = ~uVar19 >> 0x1f;
      }
      local_138 = lVar16;
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar3 = *(undefined8 **)(lVar16 + *plVar2);
      this_00 = (TPBDRigidParticles<double,3> *)*puVar3;
      iVar14 = *(int *)(puVar3 + 1);
      local_158 = this_00;
      local_150 = iVar14;
      if (this_00 == (TPBDRigidParticles<double,3> *)0x0) {
        local_14c = 0;
LAB_14406cc9d:
        bVar13 = local_14c;
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6441385585952159504>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                           ,0x8f0,"false");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        bVar13 = (byte)this_00->_padding_;
        local_14c = bVar13;
        if ((bVar13 == 1) || (bVar13 == 0)) goto LAB_14406cc9d;
      }
      pTVar8 = Chaos::TPBDRigidParticles<double,3>::Handle(this_00,iVar14);
      pIVar9 = Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                         (*(TGeometryParticlesImp<double,3,0> **)pTVar8,*(int *)&pTVar8->field_0x8);
      if (pIVar9 != (IPhysicsProxyBase *)0x0) {
        EVar1 = pIVar9->Type;
        if (EVar1 == GeometryCollectionType) {
LAB_14406ce14:
          this_02 = (TPBDRigidParticleHandleImp<double,3,0> *)&local_158;
          if (bVar13 < 3) {
            this_02 = (TPBDRigidParticleHandleImp<double,3,0> *)0x0;
          }
          if (this_02 == (TPBDRigidParticleHandleImp<double,3,0> *)0x0) {
            bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6441385585952159441>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                               ,0x92f,"false");
            if (bVar6) {
code_r0x00014406d2bf:
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          else {
            this_01 = *(TPBDRigidClusteredParticles<double,3> **)this_02;
            iVar14 = *(int *)&this_02->field_0x8;
            pFVar11 = &Chaos::TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                                 (this_01,iVar14)->field0_0x0;
            if ((pFVar11->Bits & 1) == 0) {
              if (pIVar9->Type != GeometryCollectionType) {
                if (pIVar9->Type == SingleParticleProxy) {
                  pFVar4 = (param_3->AllocatorInstance).Data;
                  local_160 = pIVar9;
                  if (((pFVar4 <= (FScriptContainerElement *)&local_160) &&
                      ((FScriptContainerElement *)&local_160 <
                       pFVar4 + (longlong)param_3->ArrayMax * 8)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  iVar14 = param_3->ArrayNum;
                  if (iVar14 == param_3->ArrayMax) {
                    iVar14 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
                  }
                  param_3->ArrayNum = iVar14 + 1;
                  *(IPhysicsProxyBase **)((param_3->AllocatorInstance).Data + (longlong)iVar14 * 8)
                       = local_160;
                }
                else {
                  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_6441385585952159448>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                                     ,0x928,"false");
                  if (bVar6) goto code_r0x00014406d2bf;
                }
              }
            }
            else {
              EVar7 = Chaos::TPBDRigidParticleHandleImp<double,3,0>::ObjectState(this_02);
              if ((EVar7 == Dynamic) || (pIVar9->Type != ClusterUnionProxy)) {
                pTVar12 = Chaos::TPBDRigidClusteredParticles<double,3>::PhysicsProxies
                                    (this_01,iVar14);
                uVar15 = 0;
                local_6c = 0x80;
                local_98._0_8_ = 0;
                local_98._8_8_ = 0;
                local_78 = (uint *)0x0;
                local_70 = 0;
                local_64 = 0;
                local_58 = (ForElementType<FSetElementId>)0x0;
                local_50 = 0;
                local_68 = 0xffffffff;
                TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
                ::operator=((TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
                             *)local_98,pTVar12);
                uVar18 = local_70;
                uStack_114 = 1;
                uStack_104 = uVar15;
                local_100 = uVar15;
                if (local_70 != 0) {
                  puVar17 = (uint *)(local_98 + 0x10);
                  if (local_78 != (uint *)0x0) {
                    puVar17 = local_78;
                  }
                  uVar21 = *puVar17;
                  while (uVar21 == 0) {
                    lVar16 = (longlong)(int)uVar15;
                    local_100 = local_100 + 0x20;
                    uVar15 = uVar15 + 1;
                    uStack_104 = local_70;
                    if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 <
                        (int)uVar15) goto LAB_14406cf20;
                    uVar21 = puVar17[lVar16 + 1];
                  }
                  uStack_114 = -uVar21 & uVar21;
                  uVar20 = (ulonglong)uStack_114 * 2 + 1;
                  lVar16 = 0x3f;
                  if (uVar20 != 0) {
                    for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                    }
                  }
                  uStack_104 = (local_100 - 1) + (int)lVar16;
                  local_130 = (int)lVar16;
                  if ((int)local_70 < (int)uStack_104) {
                    uStack_104 = local_70;
                  }
                }
LAB_14406cf20:
                local_120 = (longlong *)local_98;
                uStack_fc = local_a4;
                uVar21 = local_70 & 0xffffffe0;
                local_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
                uStack_118 = uVar15;
                iStack_f8 = local_98._8_4_ - local_64;
                uStack_108 = 0xffffffff;
                local_f0 = (longlong *)local_98;
                TStack_e8._padding_ = CONCAT44(uStack_114,uVar15);
                iVar14 = (int)local_70 >> 5;
                bVar13 = (byte)local_70;
                TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
                TStack_e8.UnvisitedBitMask = 0xffffffff;
                TStack_e8.CurrentBitIndex = uStack_104;
                TStack_e8.BaseBitIndex = local_100;
                TStack_e8._28_4_ = local_a4;
                uStack_c8 = CONCAT44(uStack_f4,local_98._8_4_ - local_64);
                if (((int)local_70 < 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x7af,L""), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (uVar18 != local_70) {
                  puVar17 = (uint *)(local_98 + 0x10);
                  if (local_78 != (uint *)0x0) {
                    puVar17 = local_78;
                  }
                  uVar15 = -1 << (bVar13 & 0x1f) & puVar17[iVar14];
                  while (uVar15 == 0) {
                    lVar16 = (longlong)iVar14;
                    uVar21 = uVar21 + 0x20;
                    iVar14 = iVar14 + 1;
                    uVar18 = local_70;
                    if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
                    goto LAB_14406d030;
                    uVar15 = puVar17[lVar16 + 1];
                  }
                  uVar20 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
                  lVar16 = 0x3f;
                  if (uVar20 != 0) {
                    for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                    }
                  }
                  local_12c = (int)lVar16;
                  uVar18 = local_12c + -1 + uVar21;
                  if ((int)local_70 < (int)uVar18) {
                    uVar18 = local_70;
                  }
                }
LAB_14406d030:
                while( true ) {
                  plVar2 = local_f0;
                  if ((int)local_f0[1] - *(int *)((longlong)local_f0 + 0x34) != (int)uStack_c8) {
                    local_178[0] = 0;
                    `TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_178);
                  }
                  if (((TStack_e8.CurrentBitIndex == uVar18) &&
                      (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))
                      ) && (plVar2 == (longlong *)local_98)) break;
                  lVar16 = *(longlong *)(*plVar2 + (longlong)TStack_e8.CurrentBitIndex * 0x10);
                  if ((lVar16 != 0) && (*(int *)(lVar16 + 0x1c) != 2)) {
                    if (*(int *)(lVar16 + 0x1c) == 0xb) {
                      pFVar4 = (param_3->AllocatorInstance).Data;
                      local_168 = lVar16;
                      if (((pFVar4 <= (FScriptContainerElement *)&local_168) &&
                          ((FScriptContainerElement *)&local_168 <
                           pFVar4 + (longlong)param_3->ArrayMax * 8)) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar6)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      iVar14 = param_3->ArrayNum;
                      if (iVar14 == param_3->ArrayMax) {
                        iVar14 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
                      }
                      param_3->ArrayNum = iVar14 + 1;
                      *(longlong *)((param_3->AllocatorInstance).Data + (longlong)iVar14 * 8) =
                           local_168;
                    }
                    else {
                      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                        (&bGEnsureHasExecuted<_6441385585952159464>,false,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                                         ,0x918,"false");
                      if (bVar6) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                    }
                  }
                  TStack_e8.UnvisitedBitMask =
                       TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
                }
                local_50 = 0;
                if (local_58 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_58);
                }
                TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_98);
                this = local_128;
              }
            }
          }
        }
        else if (EVar1 == SingleParticleProxy) {
          if (((*(char *)this == '\0') ||
              (pEVar10 = Chaos::TGeometryParticlesImp<double,3,0>::SyncState
                                   ((TGeometryParticlesImp<double,3,0> *)this_00,iVar14),
              *pEVar10 == HardDesync)) &&
             ((Chaos::SyncKinematicOnGameThread != 0 ||
              (EVar7 = Chaos::TPBDRigidParticleHandleImp<double,3,0>::ObjectState
                                 ((TPBDRigidParticleHandleImp<double,3,0> *)&local_158),
              EVar7 != Kinematic)))) {
            pFVar4 = (param_3->AllocatorInstance).Data;
            local_170 = pIVar9;
            if (((pFVar4 <= (FScriptContainerElement *)&local_170) &&
                ((FScriptContainerElement *)&local_170 < pFVar4 + (longlong)param_3->ArrayMax * 8))
               && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar14 = param_3->ArrayNum;
            if (iVar14 == param_3->ArrayMax) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            param_3->ArrayNum = iVar14 + 1;
            *(IPhysicsProxyBase **)((param_3->AllocatorInstance).Data + (longlong)iVar14 * 8) =
                 local_170;
          }
        }
        else {
          if (EVar1 == ClusterUnionProxy) goto LAB_14406ce14;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                             ,0x946,L"");
          if (bVar6) goto code_r0x00014406d2bf;
        }
      }
      local_140 = local_140 + 1;
      lVar16 = local_138 + 8;
      uVar20 = (ulonglong)(uVar19 + 1);
    } while ((int)(uVar19 + 1) < local_148);
  }
  return;
}

// operator() @ 14406d340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Chaos::FPBDRigidsSolver::
DispatchTasksBufferPhysicsResults<`Chaos::FPBDRigidsSolver::BufferPhysicsResults'::__l24::<lambda_2>_>'
::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2,
          TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_> *param_3)

{
  ulonglong uVar1;
  EPhysicsProxyType EVar2;
  TPBDRigidParticles<double,3> *this_00;
  TPBDRigidClusteredParticles<double,3> *this_01;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  EObjectStateType EVar7;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar8;
  IPhysicsProxyBase *pIVar9;
  ESyncState *pEVar10;
  FRigidClusteredFlags_u_0 *pFVar11;
  TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator> *pTVar12;
  byte bVar13;
  longlong lVar14;
  int iVar15;
  TPBDRigidParticleHandleImp<double,3,0> *this_02;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStackY_1a8 [32];
  undefined1 local_158 [8];
  IPhysicsProxyBase *local_150;
  longlong local_148;
  IPhysicsProxyBase *local_140;
  TPBDRigidParticles<double,3> *local_138;
  int local_130;
  byte local_12c;
  int local_128;
  int local_124;
  int local_120;
  char *local_118;
  longlong *local_110;
  uint uStack_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint local_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined4 local_94;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  if (param_1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
    local_128 = param_2;
    local_118 = this;
    do {
      this_00 = *(TPBDRigidParticles<double,3> **)((longlong)this + 8);
      local_138 = this_00;
      local_130 = param_1;
      if (this_00 == (TPBDRigidParticles<double,3> *)0x0) {
        local_12c = 0;
LAB_14406d3d5:
        bVar13 = local_12c;
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6441385585952159504>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                           ,0x8f0,"false");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        bVar13 = (byte)this_00->_padding_;
        local_12c = bVar13;
        if ((bVar13 == 1) || (bVar13 == 0)) goto LAB_14406d3d5;
      }
      pTVar8 = Chaos::TPBDRigidParticles<double,3>::Handle(this_00,param_1);
      pIVar9 = Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                         (*(TGeometryParticlesImp<double,3,0> **)pTVar8,*(int *)&pTVar8->field_0x8);
      if (pIVar9 != (IPhysicsProxyBase *)0x0) {
        EVar2 = pIVar9->Type;
        if (EVar2 == GeometryCollectionType) {
LAB_14406d54c:
          this_02 = (TPBDRigidParticleHandleImp<double,3,0> *)&local_138;
          if (bVar13 < 3) {
            this_02 = (TPBDRigidParticleHandleImp<double,3,0> *)0x0;
          }
          if (this_02 == (TPBDRigidParticleHandleImp<double,3,0> *)0x0) {
            bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6441385585952159441>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                               ,0x92f,"false");
            if (bVar6) {
code_r0x00014406d9ef:
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          else {
            this_01 = *(TPBDRigidClusteredParticles<double,3> **)this_02;
            iVar15 = *(int *)&this_02->field_0x8;
            pFVar11 = &Chaos::TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                                 (this_01,iVar15)->field0_0x0;
            if ((pFVar11->Bits & 1) == 0) {
              if (pIVar9->Type != GeometryCollectionType) {
                if (pIVar9->Type == SingleParticleProxy) {
                  pFVar3 = (param_3->AllocatorInstance).Data;
                  local_140 = pIVar9;
                  if (((pFVar3 <= (FScriptContainerElement *)&local_140) &&
                      ((FScriptContainerElement *)&local_140 <
                       pFVar3 + (longlong)param_3->ArrayMax * 8)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar15 = param_3->ArrayNum;
                  if (iVar15 == param_3->ArrayMax) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
                  }
                  param_3->ArrayNum = iVar15 + 1;
                  *(IPhysicsProxyBase **)((param_3->AllocatorInstance).Data + (longlong)iVar15 * 8)
                       = local_140;
                }
                else {
                  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_6441385585952159448>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                                     ,0x928,"false");
                  if (bVar6) goto code_r0x00014406d9ef;
                }
              }
            }
            else {
              EVar7 = Chaos::TPBDRigidParticleHandleImp<double,3,0>::ObjectState(this_02);
              if ((EVar7 == Dynamic) || (pIVar9->Type != ClusterUnionProxy)) {
                pTVar12 = Chaos::TPBDRigidClusteredParticles<double,3>::PhysicsProxies
                                    (this_01,iVar15);
                local_5c = 0x80;
                local_88._0_8_ = 0;
                local_88._8_8_ = 0;
                local_68 = (uint *)0x0;
                uVar16 = 0;
                local_60 = 0;
                local_54 = 0;
                local_48 = (ForElementType<FSetElementId>)0x0;
                local_40 = 0;
                local_58 = 0xffffffff;
                TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
                ::operator=((TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
                             *)local_88,pTVar12);
                uVar18 = local_60;
                uStack_104 = 1;
                local_f0 = 0;
                uStack_f4 = local_f0;
                if (local_60 != 0) {
                  puVar17 = (uint *)(local_88 + 0x10);
                  if (local_68 != (uint *)0x0) {
                    puVar17 = local_68;
                  }
                  uVar19 = *puVar17;
                  local_f0 = 0;
                  uVar16 = 0;
                  while (uVar19 == 0) {
                    lVar14 = (longlong)(int)uVar16;
                    local_f0 = local_f0 + 0x20;
                    uVar16 = uVar16 + 1;
                    uStack_f4 = local_60;
                    if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 <
                        (int)uVar16) goto LAB_14406d650;
                    uVar19 = puVar17[lVar14 + 1];
                  }
                  uStack_104 = -uVar19 & uVar19;
                  uVar1 = (ulonglong)uStack_104 * 2 + 1;
                  lVar14 = 0x3f;
                  if (uVar1 != 0) {
                    for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                    }
                  }
                  uStack_f4 = (local_f0 - 1) + (int)lVar14;
                  local_124 = (int)lVar14;
                  if ((int)local_60 < (int)uStack_f4) {
                    uStack_f4 = local_60;
                  }
                }
LAB_14406d650:
                local_110 = (longlong *)local_88;
                uStack_ec = local_94;
                uVar19 = local_60 & 0xffffffe0;
                local_100 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
                uStack_108 = uVar16;
                iStack_e8 = local_88._8_4_ - local_54;
                uStack_f8 = 0xffffffff;
                local_e0 = (longlong *)local_88;
                TStack_d8._padding_ = CONCAT44(uStack_104,uVar16);
                iVar15 = (int)local_60 >> 5;
                bVar13 = (byte)local_60;
                TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
                TStack_d8.UnvisitedBitMask = 0xffffffff;
                TStack_d8.CurrentBitIndex = uStack_f4;
                TStack_d8.BaseBitIndex = local_f0;
                TStack_d8._28_4_ = local_94;
                uStack_b8 = CONCAT44(uStack_e4,local_88._8_4_ - local_54);
                if (((int)local_60 < 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x7af,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (uVar18 != local_60) {
                  puVar17 = (uint *)(local_88 + 0x10);
                  if (local_68 != (uint *)0x0) {
                    puVar17 = local_68;
                  }
                  uVar16 = -1 << (bVar13 & 0x1f) & puVar17[iVar15];
                  while (uVar16 == 0) {
                    lVar14 = (longlong)iVar15;
                    uVar19 = uVar19 + 0x20;
                    iVar15 = iVar15 + 1;
                    uVar18 = local_60;
                    if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
                    goto LAB_14406d760;
                    uVar16 = puVar17[lVar14 + 1];
                  }
                  uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
                  lVar14 = 0x3f;
                  if (uVar1 != 0) {
                    for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                    }
                  }
                  local_120 = (int)lVar14;
                  uVar18 = local_120 + -1 + uVar19;
                  if ((int)local_60 < (int)uVar18) {
                    uVar18 = local_60;
                  }
                }
LAB_14406d760:
                while( true ) {
                  plVar5 = local_e0;
                  if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
                    local_158[0] = 0;
                    `TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_158);
                  }
                  if (((TStack_d8.CurrentBitIndex == uVar18) &&
                      (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))
                      ) && (plVar5 == (longlong *)local_88)) break;
                  lVar14 = *(longlong *)(*plVar5 + (longlong)TStack_d8.CurrentBitIndex * 0x10);
                  if ((lVar14 != 0) && (*(int *)(lVar14 + 0x1c) != 2)) {
                    if (*(int *)(lVar14 + 0x1c) == 0xb) {
                      pFVar3 = (param_3->AllocatorInstance).Data;
                      local_148 = lVar14;
                      if (((pFVar3 <= (FScriptContainerElement *)&local_148) &&
                          ((FScriptContainerElement *)&local_148 <
                           pFVar3 + (longlong)param_3->ArrayMax * 8)) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar6)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      iVar15 = param_3->ArrayNum;
                      if (iVar15 == param_3->ArrayMax) {
                        iVar15 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
                      }
                      param_3->ArrayNum = iVar15 + 1;
                      *(longlong *)((param_3->AllocatorInstance).Data + (longlong)iVar15 * 8) =
                           local_148;
                    }
                    else {
                      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                        (&bGEnsureHasExecuted<_6441385585952159464>,false,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                                         ,0x918,"false");
                      if (bVar6) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                    }
                  }
                  TStack_d8.UnvisitedBitMask =
                       TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
                }
                local_40 = 0;
                if (local_48 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_48);
                }
                TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_88);
                this = local_118;
              }
            }
          }
        }
        else if (EVar2 == SingleParticleProxy) {
          if (((*(char *)this == '\0') ||
              (pEVar10 = Chaos::TGeometryParticlesImp<double,3,0>::SyncState
                                   ((TGeometryParticlesImp<double,3,0> *)this_00,param_1),
              *pEVar10 == HardDesync)) &&
             ((Chaos::SyncKinematicOnGameThread != 0 ||
              (EVar7 = Chaos::TPBDRigidParticleHandleImp<double,3,0>::ObjectState
                                 ((TPBDRigidParticleHandleImp<double,3,0> *)&local_138),
              EVar7 != Kinematic)))) {
            pFVar3 = (param_3->AllocatorInstance).Data;
            local_150 = pIVar9;
            if (((pFVar3 <= (FScriptContainerElement *)&local_150) &&
                ((FScriptContainerElement *)&local_150 < pFVar3 + (longlong)param_3->ArrayMax * 8))
               && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar15 = param_3->ArrayNum;
            if (iVar15 == param_3->ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            param_3->ArrayNum = iVar15 + 1;
            *(IPhysicsProxyBase **)((param_3->AllocatorInstance).Data + (longlong)iVar15 * 8) =
                 local_150;
          }
        }
        else {
          if (EVar2 == ClusterUnionProxy) goto LAB_14406d54c;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                             ,0x946,L"");
          if (bVar6) goto code_r0x00014406d9ef;
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < local_128);
  }
  return;
}

// operator() @ 14406db40

void __thiscall
`Chaos::FPBDRigidsSolver::ClearCollisionEventsForProxy'::__l2::<lambda_1>::operator()
          (void *this,FCollisionEventData *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulonglong *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulonglong *puVar7;
  IPhysicsProxyBase *local_res10 [3];
  
  if (0 < (param_1->CollisionData).AllCollisionsArray.ArrayNum) {
    if (*(longlong *)this == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Proxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                         ,0x368,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_res10[0] = *(IPhysicsProxyBase **)this;
    uVar5 = ((uint)((ulonglong)local_res10[0] >> 0x14) & 0xffff ^
            (uint)((ulonglong)local_res10[0] >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = uVar5 >> 0x10 ^ uVar5;
    if (*(int *)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x8 !=
        *(int *)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x34) {
      puVar6 = *(undefined1 **)
                &(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x38;
      }
      iVar3 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(param_1->PhysicsProxyToCollisionIndices).
                                          PhysicsProxyToIndicesMap.field_0x48 - 1U & uVar5) * 4);
      if (iVar3 != -1) {
        while (puVar4 = (ulonglong *)
                        ((longlong)iVar3 * 0x20 +
                        *(longlong *)
                         &(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap),
              (IPhysicsProxyBase *)*puVar4 != local_res10[0]) {
          iVar3 = (int)puVar4[3];
          if (iVar3 == -1) {
            return;
          }
        }
        puVar7 = puVar4 + 1;
        if (puVar4 == (ulonglong *)0x0) {
          puVar7 = (ulonglong *)0x0;
        }
        if (puVar7 != (ulonglong *)0x0) {
          TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<IPhysicsProxyBase_const_*>
                    ((TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap,uVar5,
                     local_res10);
        }
      }
    }
  }
  return;
}

// operator() @ 14406f3c0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
`Chaos::FPBDRigidsSolver::PushPhysicsState'::__l2::<lambda_1>::operator()
          (void *this,int param_1,FDirtyProxy *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  FGeometryCollectionPhysicsProxy *this_00;
  TGeometryParticle<double,3> *this_01;
  code *pcVar4;
  bool bVar5;
  TGeometryParticle<double,3> *pTVar6;
  
  this_00 = (FGeometryCollectionPhysicsProxy *)param_2->Proxy;
  switch(*(undefined4 *)&this_00->field_0x1c) {
  case 2:
    FGeometryCollectionPhysicsProxy::PushStateOnGameThread(this_00,*(FPBDRigidsSolver **)this);
    *(undefined4 *)&this_00->field_0x18 = 0xffffffff;
    break;
  default:
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6441385585952160230>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                       ,0x61a,"0 && L\"Unknown proxy type in physics solver.\"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    break;
  case 8:
    Chaos::FJointConstraintPhysicsProxy::PushStateOnGameThread
              ((FJointConstraintPhysicsProxy *)this_00,
               *(FDirtyPropertiesManager **)((longlong)this + 0x10),param_1,&param_2->PropertyData);
    *(undefined4 *)&this_00->field_0x18 = 0xffffffff;
    break;
  case 9:
    Chaos::FSuspensionConstraintPhysicsProxy::PushStateOnGameThread
              ((FSuspensionConstraintPhysicsProxy *)this_00,
               *(FDirtyPropertiesManager **)((longlong)this + 0x10),param_1,&param_2->PropertyData);
    *(undefined4 *)&this_00->field_0x18 = 0xffffffff;
    break;
  case 10:
    Chaos::FCharacterGroundConstraintProxy::PushStateOnGameThread
              ((FCharacterGroundConstraintProxy *)this_00,
               *(FDirtyPropertiesManager **)((longlong)this + 0x10),param_1,&param_2->PropertyData);
    *(undefined4 *)&this_00->field_0x18 = 0xffffffff;
    break;
  case 0xb:
    this_01 = (TGeometryParticle<double,3> *)(this_00->Parameters).Name.Data.AllocatorInstance.Data;
    pTVar6 = this_01;
    if (this_01->Type < Rigid) {
      pTVar6 = (TGeometryParticle<double,3> *)0x0;
    }
    if ((pTVar6 != (TGeometryParticle<double,3> *)0x0) && (((pTVar6->MDirtyFlags).Bits & 4) != 0)) {
      dVar3 = *(double *)((longlong)this + 8);
      fVar1 = *(float *)((longlong)&pTVar6[2].Proxy + 4);
      fVar2 = *(float *)&pTVar6[2]._padding_;
      *(float *)&pTVar6[2].Proxy = (float)((double)*(float *)&pTVar6[2].Proxy * dVar3);
      *(float *)((longlong)&pTVar6[2].Proxy + 4) = (float)((double)fVar1 * dVar3);
      *(float *)&pTVar6[2]._padding_ = (float)((double)fVar2 * dVar3);
      fVar1 = *(float *)&pTVar6[2].MXR.Property.MX;
      fVar2 = *(float *)((longlong)&pTVar6[2].MXR.Property.MX + 4);
      *(float *)((longlong)&pTVar6[2]._padding_ + 4) =
           (float)((double)*(float *)((longlong)&pTVar6[2]._padding_ + 4) * dVar3);
      *(float *)&pTVar6[2].MXR.Property.MX = (float)((double)fVar1 * dVar3);
      *(float *)((longlong)&pTVar6[2].MXR.Property.MX + 4) = (float)((double)fVar2 * dVar3);
    }
    if (((this_01->MDirtyFlags).Bits & 0x10) != 0) {
      Chaos::TGeometryParticle<double,3>::PrepareBVHImpl(this_01);
    }
    Chaos::TGeometryParticle<double,3>::LockGeometry(this_01);
    Chaos::TGeometryParticle<double,3>::SyncRemoteData
              (this_01,*(FDirtyPropertiesManager **)((longlong)this + 0x10),param_1,
               &param_2->PropertyData,&param_2->ShapeDataIndices,
               *(FShapeDirtyData **)((longlong)this + 0x18));
    Chaos::FSingleParticlePhysicsProxy::ClearAccumulatedData((FSingleParticlePhysicsProxy *)this_00)
    ;
    *(undefined4 *)&this_00->field_0x18 = 0xffffffff;
    break;
  case 0xc:
    Chaos::TGeometryParticle<double,3>::LockGeometry
              ((TGeometryParticle<double,3> *)
               (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1]);
    Chaos::FClusterUnionPhysicsProxy::SyncRemoteData
              ((FClusterUnionPhysicsProxy *)this_00,
               *(FDirtyPropertiesManager **)((longlong)this + 0x10),param_1,&param_2->PropertyData);
    Chaos::FClusterUnionPhysicsProxy::ClearAccumulatedData((FClusterUnionPhysicsProxy *)this_00);
    *(undefined4 *)&this_00->field_0x18 = 0xffffffff;
  }
  return;
}

// operator() @ 14406f960

void __thiscall
`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  Chaos::FCharacterGroundConstraintProxy::DestroyOnPhysicsThread
            (*(FCharacterGroundConstraintProxy **)this,*(FPBDRigidsSolver **)((longlong)this + 8));
  lVar1 = *(longlong *)((longlong)this + 8);
  plVar2 = *(longlong **)(lVar1 + 0xc78);
  if (plVar2 != plVar2 + *(int *)(lVar1 + 0xc80)) {
    plVar4 = plVar2;
    do {
      if (*plVar4 == *(longlong *)this) {
        iVar3 = (int)((longlong)plVar4 - (longlong)plVar2 >> 3);
        if (iVar3 != -1) {
          memmove(plVar2 + iVar3,plVar2 + iVar3 + 1,
                  (longlong)((*(int *)(lVar1 + 0xc80) - iVar3) + -1) << 3);
          *(int *)(lVar1 + 0xc80) = *(int *)(lVar1 + 0xc80) + -1;
        }
        break;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2 + *(int *)(lVar1 + 0xc80));
  }
  plVar2 = *(longlong **)this;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,1);
  }
  return;
}

// operator() @ 14406fa10

void __thiscall
`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>::operator()(void *this)

{
  ForAnyElementType *pFVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  Chaos::FPBDRigidsSolver::ClearCollisionEventsForProxy
            (*(FPBDRigidsSolver **)((longlong)this + 8),*(IPhysicsProxyBase **)this);
  lVar7 = *(longlong *)this;
  if (*(TGeometryParticleHandleImp<double,3,1> **)(lVar7 + 0x168) !=
      (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    Chaos::FPBDRigidsEvolutionBase::DisableParticle
              (*(FPBDRigidsEvolutionBase **)(*(longlong *)((longlong)this + 8) + 0xbd0),
               *(TGeometryParticleHandleImp<double,3,1> **)(lVar7 + 0x168));
    lVar7 = *(longlong *)this;
  }
  lVar9 = *(longlong *)((longlong)this + 8);
  plVar2 = *(longlong **)(lVar9 + 0xc58);
  for (plVar8 = plVar2; plVar8 != plVar2 + *(int *)(lVar9 + 0xc60); plVar8 = plVar8 + 1) {
    if (*plVar8 == lVar7) {
      iVar6 = (int)((longlong)plVar8 - (longlong)plVar2 >> 3);
      if (iVar6 != -1) {
        memmove(plVar2 + iVar6,plVar2 + iVar6 + 1,
                (longlong)((*(int *)(lVar9 + 0xc60) - iVar6) + -1) << 3);
        *(int *)(lVar9 + 0xc60) = *(int *)(lVar9 + 0xc60) + -1;
        lVar9 = *(longlong *)((longlong)this + 8);
      }
      break;
    }
  }
  if (Chaos::bResimDelayDestroyObject != false) {
    lVar9 = *(longlong *)((longlong)this + 8);
    if (*(longlong *)(lVar9 + 0x238) != 0) {
      iStack_10 = *(int *)(*(longlong *)(lVar9 + 0x238) + 0x10);
      goto LAB_14406fad3;
    }
  }
  iStack_10 = 0;
LAB_14406fad3:
  local_18 = *(undefined8 *)this;
  pFVar1 = (ForAnyElementType *)(lVar9 + 0x17b8);
  iStack_10 = iStack_10 + *(int *)(lVar9 + 0x328);
  if (((pFVar1->Data <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 <
       pFVar1->Data + (longlong)*(int *)(lVar9 + 0x17c4) * 0x10)) &&
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
  iVar6 = *(int *)(lVar9 + 0x17c0);
  if (iVar6 == *(int *)(lVar9 + 0x17c4)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar1,(int *)(lVar9 + 0x17c4));
  }
  *(int *)(lVar9 + 0x17c0) = iVar6 + 1;
  pFVar3 = pFVar1->Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10) = local_18;
  *(ulonglong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = CONCAT44(uStack_c,iStack_10);
  return;
}

// operator() @ 14406fbb0

void __thiscall
`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>::operator()(void *this)

{
  ForAnyElementType *pFVar1;
  longlong lVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  Chaos::FPBDRigidsSolver::ClearCollisionEventsForProxy
            (*(FPBDRigidsSolver **)((longlong)this + 8),*(IPhysicsProxyBase **)this);
  lVar2 = *(longlong *)((longlong)this + 8);
  plVar3 = *(longlong **)(lVar2 + 0xc38);
  if (plVar3 != plVar3 + *(int *)(lVar2 + 0xc40)) {
    plVar8 = plVar3;
    do {
      if (*plVar8 == *(longlong *)this) {
        iVar7 = (int)((longlong)plVar8 - (longlong)plVar3 >> 3);
        if (iVar7 != -1) {
          memmove(plVar3 + iVar7,plVar3 + iVar7 + 1,
                  (longlong)((*(int *)(lVar2 + 0xc40) - iVar7) + -1) << 3);
          *(int *)(lVar2 + 0xc40) = *(int *)(lVar2 + 0xc40) + -1;
        }
        break;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar3 + *(int *)(lVar2 + 0xc40));
  }
  FGeometryCollectionPhysicsProxy::SyncBeforeDestroy(*(FGeometryCollectionPhysicsProxy **)this);
  if ((Chaos::bResimDelayDestroyObject == false) ||
     (lVar2 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x238), lVar2 == 0)) {
    iStack_10 = 0;
  }
  else {
    iStack_10 = *(int *)(lVar2 + 0x10);
  }
  lVar2 = *(longlong *)((longlong)this + 8);
  local_18 = *(undefined8 *)this;
  pFVar1 = (ForAnyElementType *)(lVar2 + 0x17a8);
  iStack_10 = *(int *)(lVar2 + 0x328) + iStack_10;
  if (((pFVar1->Data <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 <
       pFVar1->Data + (longlong)*(int *)(lVar2 + 0x17b4) * 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = *(int *)(lVar2 + 0x17b0);
  if (iVar7 == *(int *)(lVar2 + 0x17b4)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar1,(int *)(lVar2 + 0x17b4));
  }
  *(int *)(lVar2 + 0x17b0) = iVar7 + 1;
  pFVar4 = pFVar1->Data;
  *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_18;
  *(ulonglong *)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = CONCAT44(uStack_c,iStack_10);
  return;
}

// operator() @ 14406fd30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x238);
  if (lVar1 != 0) {
    Chaos::
    TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
    ::Remove((TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
              *)(lVar1 + 0x2f8),*(FPBDJointConstraintHandle **)(*(longlong *)this + 0x48),Default);
  }
  Chaos::FJointConstraintPhysicsProxy::DestroyOnPhysicsThread
            (*(FJointConstraintPhysicsProxy **)this,*(FPBDRigidsSolver **)((longlong)this + 8));
  lVar1 = *(longlong *)((longlong)this + 8);
  plVar2 = *(longlong **)(lVar1 + 0xc68);
  if (plVar2 != plVar2 + *(int *)(lVar1 + 0xc70)) {
    plVar4 = plVar2;
    do {
      if (*plVar4 == *(longlong *)this) {
        iVar3 = (int)((longlong)plVar4 - (longlong)plVar2 >> 3);
        if (iVar3 != -1) {
          memmove(plVar2 + iVar3,plVar2 + iVar3 + 1,
                  (longlong)((*(int *)(lVar1 + 0xc70) - iVar3) + -1) << 3);
          *(int *)(lVar1 + 0xc70) = *(int *)(lVar1 + 0xc70) + -1;
        }
        break;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2 + *(int *)(lVar1 + 0xc70));
  }
  plVar2 = *(longlong **)this;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,1);
  }
  return;
}

// operator() @ 14406fe00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>::operator()(void *this)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  longlong lVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  byte bVar9;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TGeometryParticleHandleImp<double,3,1> *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (5 < (byte)LogPBDRigidsSolver._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPBDRigidsSolver);
  }
  Chaos::FPBDRigidsSolver::ClearCollisionEventsForProxy
            (*(FPBDRigidsSolver **)((longlong)this + 0x10),*(IPhysicsProxyBase **)this);
  pTVar5 = *(TGeometryParticleHandleImp<double,3,1> **)(*(longlong *)this + 0x48);
  lVar6 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x238);
  if (lVar6 != 0) {
    Chaos::
    TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
    ::Remove((TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
              *)(lVar6 + 0x298),pTVar5,Default);
  }
  iStack_30 = 0;
  *(undefined8 *)(*(longlong *)this + 0x48) = 0;
  lVar6 = *(longlong *)((longlong)this + 0x10);
  if ((Chaos::bResimDelayDestroyObject != false) && (*(longlong *)(lVar6 + 0x238) != 0)) {
    iStack_30 = *(int *)(*(longlong *)(lVar6 + 0x238) + 0x10);
  }
  local_38 = *(undefined8 *)this;
  pFVar1 = (ForAnyElementType *)(lVar6 + 0x1798);
  uStack_20 = *(undefined4 *)((longlong)this + 8);
  iStack_30 = *(int *)(lVar6 + 0x328) + iStack_30;
  local_28 = pTVar5;
  if ((pFVar1->Data <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar1->Data + (longlong)*(int *)(lVar6 + 0x17a4) * 0x20)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar11 = *(int *)(lVar6 + 0x17a0);
  if (iVar11 == *(int *)(lVar6 + 0x17a4)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,pFVar1,(int *)(lVar6 + 0x17a4));
  }
  *(int *)(lVar6 + 0x17a0) = iVar11 + 1;
  pFVar7 = pFVar1->Data;
  pFVar2 = pFVar7 + (longlong)iVar11 * 0x20;
  *(undefined8 *)pFVar2 = local_38;
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_2c,iStack_30);
  pFVar7 = pFVar7 + (longlong)iVar11 * 0x20 + 0x10;
  *(TGeometryParticleHandleImp<double,3,1> **)pFVar7 = local_28;
  *(ulonglong *)(pFVar7 + 8) = CONCAT44(uStack_1c,uStack_20);
  if (pTVar5 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    Chaos::FPBDRigidsEvolutionBase::DisableParticle
              (*(FPBDRigidsEvolutionBase **)(*(longlong *)((longlong)this + 0x10) + 0xbd0),pTVar5);
  }
  uVar14 = *(uint *)((longlong)this + 8);
  lVar6 = *(longlong *)((longlong)this + 0x10);
  if ((-1 < (int)uVar14) && ((int)uVar14 < *(int *)(lVar6 + 0xc28))) {
    if (*(int *)(lVar6 + 0xc28) <= (int)uVar14) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5c6,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    lVar13 = *(longlong *)(lVar6 + 0xc20);
    if (*(longlong *)(lVar6 + 0xc20) == 0) {
      lVar13 = lVar6 + 0xc10;
    }
    if ((*(uint *)(lVar13 + (longlong)((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar14 & 0x1f) & 1) != 0) {
      lVar6 = *(longlong *)((longlong)this + 0x10);
      iVar11 = *(int *)((longlong)this + 8);
      lVar13 = *(longlong *)(lVar6 + 0xc00);
      bVar9 = (byte)iVar11 & 0x1f;
      uVar14 = 1 << bVar9 | 1U >> 0x20 - bVar9;
      if ((iVar11 < 0) || (*(int *)(lVar6 + 0xc28) <= iVar11)) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L"");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar4 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
      lVar15 = *(longlong *)(lVar6 + 0xc20);
      if (*(longlong *)(lVar6 + 0xc20) == 0) {
        lVar15 = lVar6 + 0xc10;
      }
      if ((*(uint *)(lVar15 + lVar4) & uVar14) == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("AllocationFlags[Index]",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                            ,0xc5,L"");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (*(int *)(lVar6 + 0xc34) != 0) {
        *(int *)(lVar13 + (longlong)*(int *)(lVar6 + 0xc30) * 8) = iVar11;
      }
      uVar12 = 0xffffffff;
      *(undefined4 *)(lVar13 + (longlong)iVar11 * 8) = 0xffffffff;
      if (0 < *(int *)(lVar6 + 0xc34)) {
        uVar12 = *(undefined4 *)(lVar6 + 0xc30);
      }
      *(undefined4 *)(lVar13 + 4 + (longlong)iVar11 * 8) = uVar12;
      *(int *)(lVar6 + 0xc34) = *(int *)(lVar6 + 0xc34) + 1;
      *(int *)(lVar6 + 0xc30) = iVar11;
      if ((iVar11 < 0) || (*(int *)(lVar6 + 0xc28) <= iVar11)) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L"");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar13 = *(longlong *)(lVar6 + 0xc20);
      if (*(longlong *)(lVar6 + 0xc20) == 0) {
        lVar13 = lVar6 + 0xc10;
      }
      puVar3 = (uint *)(lVar13 + lVar4);
      *puVar3 = *puVar3 & ~uVar14;
    }
  }
  return;
}

// operator() @ 144071810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Chaos::FPBDRigidsSolver::
DispatchTasksBufferPhysicsResults<`Chaos::FPBDRigidsSolver::BufferPhysicsResults'::__l13::<lambda_1>_>'
::__l2::<lambda_2>::operator()
          (void *this,int param_1,int param_2,
          TArray<FGeometryCollectionPhysicsProxy_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<Chaos::FClusterUnionPhysicsProxy_*,TSizedDefaultAllocator<32>_> *param_4)

{
  EPhysicsProxyType EVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  TPBDRigidParticles<double,3> *this_00;
  TPBDRigidClusteredParticles<double,3> *this_01;
  code *pcVar4;
  bool bVar5;
  EObjectStateType EVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  FGeometryCollectionPhysicsProxy *pFVar8;
  FRigidClusteredFlags_u_0 *pFVar9;
  TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator> *pTVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  TPBDRigidParticleHandleImp<double,3,0> *this_02;
  uint uVar14;
  longlong lVar15;
  uint *puVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  TPBDRigidParticles<double,3> *local_170;
  int local_168;
  byte local_164;
  int local_160;
  ulonglong local_158;
  longlong local_150;
  int local_148;
  int local_144;
  FGeometryCollectionPhysicsProxy *local_140;
  FGeometryCollectionPhysicsProxy *local_138;
  TArray<Chaos::FClusterUnionPhysicsProxy_*,TSizedDefaultAllocator<32>_> *local_130;
  FGeometryCollectionPhysicsProxy *local_128;
  void *local_120;
  longlong *local_118;
  uint uStack_110;
  uint uStack_10c;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_158 = (ulonglong)param_1;
  local_130 = param_4;
  if (param_1 < param_2) {
    lVar15 = local_158 * 8;
    uVar18 = local_158;
    local_160 = param_2;
    local_120 = this;
    do {
      plVar2 = *(longlong **)((longlong)local_120 + 8);
      uVar17 = (uint)uVar18;
      uVar14 = 0;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      local_150 = lVar15;
      if ((uVar14 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined8 **)(lVar15 + *plVar2);
      this_00 = (TPBDRigidParticles<double,3> *)*puVar3;
      iVar12 = *(int *)(puVar3 + 1);
      local_170 = this_00;
      local_168 = iVar12;
      if (this_00 == (TPBDRigidParticles<double,3> *)0x0) {
        local_164 = 0;
LAB_14407191d:
        bVar11 = local_164;
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6441385585952159399>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                           ,0x959,"false");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        bVar11 = (byte)this_00->_padding_;
        local_164 = bVar11;
        if ((bVar11 == 1) || (bVar11 == 0)) goto LAB_14407191d;
      }
      pTVar7 = Chaos::TPBDRigidParticles<double,3>::Handle(this_00,iVar12);
      pFVar8 = (FGeometryCollectionPhysicsProxy *)
               Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                         (*(TGeometryParticlesImp<double,3,0> **)pTVar7,*(int *)&pTVar7->field_0x8);
      if (pFVar8 != (FGeometryCollectionPhysicsProxy *)0x0) {
        EVar1 = *(EPhysicsProxyType *)&pFVar8->field_0x1c;
        if (EVar1 == GeometryCollectionType) {
LAB_1440719b5:
          this_02 = (TPBDRigidParticleHandleImp<double,3,0> *)&local_170;
          if (bVar11 < 3) {
            this_02 = (TPBDRigidParticleHandleImp<double,3,0> *)0x0;
          }
          if (this_02 == (TPBDRigidParticleHandleImp<double,3,0> *)0x0) {
            bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6441385585952159331>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                               ,0x99d,"false");
            if (bVar5) {
code_r0x000144071db1:
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          else {
            this_01 = *(TPBDRigidClusteredParticles<double,3> **)this_02;
            iVar12 = *(int *)&this_02->field_0x8;
            pFVar9 = &Chaos::TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                                (this_01,iVar12)->field0_0x0;
            if ((pFVar9->Bits & 1) == 0) {
              if (*(EPhysicsProxyType *)&pFVar8->field_0x1c == GeometryCollectionType) {
                local_128 = pFVar8;
                TArray<FGeometryCollectionPhysicsProxy_*,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<FGeometryCollectionPhysicsProxy_*>(param_3,&local_128);
              }
              else if ((*(EPhysicsProxyType *)&pFVar8->field_0x1c != SingleParticleProxy) &&
                      (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<_6441385585952159338>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                                          ,0x996,"false"), bVar5)) goto code_r0x000144071db1;
            }
            else {
              if (*(EPhysicsProxyType *)&pFVar8->field_0x1c == ClusterUnionProxy) {
                local_140 = pFVar8;
                TArray<Chaos::FClusterUnionPhysicsProxy_*,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<Chaos::FClusterUnionPhysicsProxy_*>
                          (param_4,(FClusterUnionPhysicsProxy **)&local_140);
              }
              EVar6 = Chaos::TPBDRigidParticleHandleImp<double,3,0>::ObjectState(this_02);
              if ((EVar6 == Dynamic) ||
                 (*(EPhysicsProxyType *)&pFVar8->field_0x1c != ClusterUnionProxy)) {
                pTVar10 = Chaos::TPBDRigidClusteredParticles<double,3>::PhysicsProxies
                                    (this_01,iVar12);
                uVar14 = 0;
                local_6c = 0x80;
                local_98._0_8_ = 0;
                local_98._8_8_ = 0;
                local_78 = (uint *)0x0;
                local_70 = 0;
                local_64 = 0;
                local_58 = (ForElementType<FSetElementId>)0x0;
                local_50 = 0;
                local_68 = 0xffffffff;
                TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
                ::operator=((TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
                             *)local_98,pTVar10);
                uVar19 = local_70;
                uStack_10c = 1;
                uStack_fc = uVar14;
                local_f8 = uVar14;
                if (local_70 != 0) {
                  puVar16 = (uint *)(local_98 + 0x10);
                  if (local_78 != (uint *)0x0) {
                    puVar16 = local_78;
                  }
                  uVar13 = *puVar16;
                  while (uVar13 == 0) {
                    lVar15 = (longlong)(int)uVar14;
                    local_f8 = local_f8 + 0x20;
                    uVar14 = uVar14 + 1;
                    uStack_fc = local_70;
                    if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 <
                        (int)uVar14) goto LAB_144071ad1;
                    uVar13 = puVar16[lVar15 + 1];
                  }
                  uStack_10c = -uVar13 & uVar13;
                  uVar18 = (ulonglong)uStack_10c * 2 + 1;
                  lVar15 = 0x3f;
                  if (uVar18 != 0) {
                    for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                    }
                  }
                  uStack_fc = (local_f8 - 1) + (int)lVar15;
                  local_148 = (int)lVar15;
                  if ((int)local_70 < (int)uStack_fc) {
                    uStack_fc = local_70;
                  }
                }
LAB_144071ad1:
                local_118 = (longlong *)local_98;
                uStack_f4 = local_9c;
                uVar13 = local_70 & 0xffffffe0;
                local_108 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
                uStack_110 = uVar14;
                iStack_f0 = local_98._8_4_ - local_64;
                uStack_100 = 0xffffffff;
                local_e8 = (longlong *)local_98;
                TStack_e0._padding_ = CONCAT44(uStack_10c,uVar14);
                iVar12 = (int)local_70 >> 5;
                bVar11 = (byte)local_70;
                TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
                TStack_e0.UnvisitedBitMask = 0xffffffff;
                TStack_e0.CurrentBitIndex = uStack_fc;
                TStack_e0.BaseBitIndex = local_f8;
                TStack_e0._28_4_ = local_9c;
                uStack_c0 = CONCAT44(uStack_ec,local_98._8_4_ - local_64);
                if (((int)local_70 < 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x7af,L""), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (uVar19 != local_70) {
                  puVar16 = (uint *)(local_98 + 0x10);
                  if (local_78 != (uint *)0x0) {
                    puVar16 = local_78;
                  }
                  uVar14 = -1 << (bVar11 & 0x1f) & puVar16[iVar12];
                  while (uVar14 == 0) {
                    lVar15 = (longlong)iVar12;
                    uVar13 = uVar13 + 0x20;
                    iVar12 = iVar12 + 1;
                    uVar19 = local_70;
                    if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
                    goto LAB_144071be0;
                    uVar14 = puVar16[lVar15 + 1];
                  }
                  uVar18 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
                  lVar15 = 0x3f;
                  if (uVar18 != 0) {
                    for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                    }
                  }
                  local_144 = (int)lVar15;
                  uVar19 = local_144 + -1 + uVar13;
                  if ((int)local_70 < (int)uVar19) {
                    uVar19 = local_70;
                  }
                }
LAB_144071be0:
                while( true ) {
                  plVar2 = local_e8;
                  if ((int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34) != (int)uStack_c0) {
                    local_178[0] = 0;
                    `TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_178);
                  }
                  if (((TStack_e0.CurrentBitIndex == uVar19) &&
                      (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))
                      ) && (plVar2 == (longlong *)local_98)) break;
                  pFVar8 = *(FGeometryCollectionPhysicsProxy **)
                            (*plVar2 + (longlong)TStack_e0.CurrentBitIndex * 0x10);
                  if (pFVar8 != (FGeometryCollectionPhysicsProxy *)0x0) {
                    if (*(int *)&pFVar8->field_0x1c == 2) {
                      local_138 = pFVar8;
                      TArray<FGeometryCollectionPhysicsProxy_*,TSizedDefaultAllocator<32>_>::
                      AddUniqueImpl<FGeometryCollectionPhysicsProxy_*>(param_3,&local_138);
                    }
                    else if ((*(int *)&pFVar8->field_0x1c != 0xb) &&
                            (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                               (&bGEnsureHasExecuted<_6441385585952159354>,false,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                                                ,0x986,"false"), bVar5)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                  }
                  TStack_e0.UnvisitedBitMask =
                       TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
                }
                local_50 = 0;
                if (local_58 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_58);
                }
                TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_98);
                param_4 = local_130;
              }
            }
          }
        }
        else if (EVar1 != SingleParticleProxy) {
          if (EVar1 == ClusterUnionProxy) goto LAB_1440719b5;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                             ,0x9a5,L"");
          if (bVar5) goto code_r0x000144071db1;
        }
      }
      local_158 = local_158 + 1;
      lVar15 = local_150 + 8;
      uVar18 = (ulonglong)(uVar17 + 1);
    } while ((int)(uVar17 + 1) < local_160);
  }
  return;
}

// operator() @ 144071dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Chaos::FPBDRigidsSolver::
DispatchTasksBufferPhysicsResults<`Chaos::FPBDRigidsSolver::BufferPhysicsResults'::__l24::<lambda_2>_>'
::__l2::<lambda_2>::operator()
          (void *this,int param_1,int param_2,
          TArray<FGeometryCollectionPhysicsProxy_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<Chaos::FClusterUnionPhysicsProxy_*,TSizedDefaultAllocator<32>_> *param_4)

{
  ulonglong uVar1;
  EPhysicsProxyType EVar2;
  TPBDRigidParticles<double,3> *this_00;
  TPBDRigidClusteredParticles<double,3> *this_01;
  code *pcVar3;
  bool bVar4;
  EObjectStateType EVar5;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar6;
  FGeometryCollectionPhysicsProxy *pFVar7;
  FRigidClusteredFlags_u_0 *pFVar8;
  TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator> *pTVar9;
  byte bVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  TPBDRigidParticleHandleImp<double,3,0> *this_02;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [8];
  TPBDRigidParticles<double,3> *local_150;
  int local_148;
  byte local_144;
  int local_140;
  int local_13c;
  int local_138;
  FGeometryCollectionPhysicsProxy *local_130;
  FGeometryCollectionPhysicsProxy *local_128;
  TArray<Chaos::FClusterUnionPhysicsProxy_*,TSizedDefaultAllocator<32>_> *local_120;
  FGeometryCollectionPhysicsProxy *local_118;
  void *local_110;
  TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator> *local_108;
  uint uStack_100;
  uint uStack_fc;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator> *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  if (param_1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
    local_120 = param_4;
    local_140 = param_2;
    local_110 = this;
    do {
      this_00 = *(TPBDRigidParticles<double,3> **)((longlong)local_110 + 8);
      local_150 = this_00;
      local_148 = param_1;
      if (this_00 == (TPBDRigidParticles<double,3> *)0x0) {
        local_144 = 0;
LAB_144071e57:
        bVar10 = local_144;
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6441385585952159399>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                           ,0x959,"false");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        bVar10 = (byte)this_00->_padding_;
        local_144 = bVar10;
        if ((bVar10 == 1) || (bVar10 == 0)) goto LAB_144071e57;
      }
      pTVar6 = Chaos::TPBDRigidParticles<double,3>::Handle(this_00,param_1);
      pFVar7 = (FGeometryCollectionPhysicsProxy *)
               Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                         (*(TGeometryParticlesImp<double,3,0> **)pTVar6,*(int *)&pTVar6->field_0x8);
      if (pFVar7 != (FGeometryCollectionPhysicsProxy *)0x0) {
        EVar2 = *(EPhysicsProxyType *)&pFVar7->field_0x1c;
        if (EVar2 == GeometryCollectionType) {
LAB_144071eef:
          this_02 = (TPBDRigidParticleHandleImp<double,3,0> *)&local_150;
          if (bVar10 < 3) {
            this_02 = (TPBDRigidParticleHandleImp<double,3,0> *)0x0;
          }
          if (this_02 == (TPBDRigidParticleHandleImp<double,3,0> *)0x0) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6441385585952159331>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                               ,0x99d,"false");
            if (bVar4) {
code_r0x0001440722d5:
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            this_01 = *(TPBDRigidClusteredParticles<double,3> **)this_02;
            iVar12 = *(int *)&this_02->field_0x8;
            pFVar8 = &Chaos::TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                                (this_01,iVar12)->field0_0x0;
            if ((pFVar8->Bits & 1) == 0) {
              if (*(EPhysicsProxyType *)&pFVar7->field_0x1c == GeometryCollectionType) {
                local_118 = pFVar7;
                TArray<FGeometryCollectionPhysicsProxy_*,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<FGeometryCollectionPhysicsProxy_*>(param_3,&local_118);
              }
              else if ((*(EPhysicsProxyType *)&pFVar7->field_0x1c != SingleParticleProxy) &&
                      (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<_6441385585952159338>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                                          ,0x996,"false"), bVar4)) goto code_r0x0001440722d5;
            }
            else {
              if (*(EPhysicsProxyType *)&pFVar7->field_0x1c == ClusterUnionProxy) {
                local_130 = pFVar7;
                TArray<Chaos::FClusterUnionPhysicsProxy_*,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<Chaos::FClusterUnionPhysicsProxy_*>
                          (param_4,(FClusterUnionPhysicsProxy **)&local_130);
              }
              EVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,0>::ObjectState(this_02);
              if ((EVar5 == Dynamic) ||
                 (*(EPhysicsProxyType *)&pFVar7->field_0x1c != ClusterUnionProxy)) {
                pTVar9 = Chaos::TPBDRigidClusteredParticles<double,3>::PhysicsProxies
                                   (this_01,iVar12);
                local_5c = 0x80;
                local_88._0_8_ = 0;
                local_88._8_8_ = 0;
                local_68 = (uint *)0x0;
                uVar14 = 0;
                local_60 = 0;
                local_54 = 0;
                local_48 = (ForElementType<FSetElementId>)0x0;
                local_40 = 0;
                local_58 = 0xffffffff;
                TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
                ::operator=((TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
                             *)local_88,pTVar9);
                uVar16 = local_60;
                uStack_fc = 1;
                local_e8 = 0;
                uStack_ec = local_e8;
                if (local_60 != 0) {
                  puVar15 = (uint *)(local_88 + 0x10);
                  if (local_68 != (uint *)0x0) {
                    puVar15 = local_68;
                  }
                  uVar13 = *puVar15;
                  local_e8 = 0;
                  uVar14 = 0;
                  while (uVar13 == 0) {
                    lVar11 = (longlong)(int)uVar14;
                    local_e8 = local_e8 + 0x20;
                    uVar14 = uVar14 + 1;
                    uStack_ec = local_60;
                    if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 <
                        (int)uVar14) goto LAB_144072011;
                    uVar13 = puVar15[lVar11 + 1];
                  }
                  uStack_fc = -uVar13 & uVar13;
                  uVar1 = (ulonglong)uStack_fc * 2 + 1;
                  lVar11 = 0x3f;
                  if (uVar1 != 0) {
                    for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                    }
                  }
                  uStack_ec = (local_e8 - 1) + (int)lVar11;
                  local_13c = (int)lVar11;
                  if ((int)local_60 < (int)uStack_ec) {
                    uStack_ec = local_60;
                  }
                }
LAB_144072011:
                local_108 = (TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
                             *)local_88;
                uStack_e4 = local_8c;
                uVar13 = local_60 & 0xffffffe0;
                local_f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
                uStack_100 = uVar14;
                iStack_e0 = local_88._8_4_ - local_54;
                uStack_f0 = 0xffffffff;
                local_d8 = (TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
                            *)local_88;
                TStack_d0._padding_ = CONCAT44(uStack_fc,uVar14);
                iVar12 = (int)local_60 >> 5;
                bVar10 = (byte)local_60;
                TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
                TStack_d0.UnvisitedBitMask = 0xffffffff;
                TStack_d0.CurrentBitIndex = uStack_ec;
                TStack_d0.BaseBitIndex = local_e8;
                TStack_d0._28_4_ = local_8c;
                uStack_b0 = CONCAT44(uStack_dc,local_88._8_4_ - local_54);
                if (((int)local_60 < 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x7af,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (uVar16 != local_60) {
                  puVar15 = (uint *)(local_88 + 0x10);
                  if (local_68 != (uint *)0x0) {
                    puVar15 = local_68;
                  }
                  uVar14 = -1 << (bVar10 & 0x1f) & puVar15[iVar12];
                  while (uVar14 == 0) {
                    lVar11 = (longlong)iVar12;
                    uVar13 = uVar13 + 0x20;
                    iVar12 = iVar12 + 1;
                    uVar16 = local_60;
                    if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
                    goto LAB_144072120;
                    uVar14 = puVar15[lVar11 + 1];
                  }
                  uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
                  lVar11 = 0x3f;
                  if (uVar1 != 0) {
                    for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                    }
                  }
                  local_138 = (int)lVar11;
                  uVar16 = local_138 + -1 + uVar13;
                  if ((int)local_60 < (int)uVar16) {
                    uVar16 = local_60;
                  }
                }
LAB_144072120:
                while( true ) {
                  pTVar9 = local_d8;
                  if (*(int *)&(local_d8->Elements).field_0x8 -
                      *(int *)&(local_d8->Elements).field_0x34 != (int)uStack_b0) {
                    local_158[0] = 0;
                    `TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_158);
                  }
                  if (((TStack_d0.CurrentBitIndex == uVar16) &&
                      (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))
                      ) && (pTVar9 == (TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
                                       *)local_88)) break;
                  pFVar7 = *(FGeometryCollectionPhysicsProxy **)
                            (*(longlong *)&pTVar9->Elements +
                            (longlong)TStack_d0.CurrentBitIndex * 0x10);
                  if (pFVar7 != (FGeometryCollectionPhysicsProxy *)0x0) {
                    if (*(int *)&pFVar7->field_0x1c == 2) {
                      local_128 = pFVar7;
                      TArray<FGeometryCollectionPhysicsProxy_*,TSizedDefaultAllocator<32>_>::
                      AddUniqueImpl<FGeometryCollectionPhysicsProxy_*>(param_3,&local_128);
                    }
                    else if ((*(int *)&pFVar7->field_0x1c != 0xb) &&
                            (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                               (&bGEnsureHasExecuted<_6441385585952159354>,false,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                                                ,0x986,"false"), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                  }
                  TStack_d0.UnvisitedBitMask =
                       TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
                }
                local_40 = 0;
                if (local_48 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_48);
                }
                TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_88);
                param_4 = local_120;
              }
            }
          }
        }
        else if (EVar2 != SingleParticleProxy) {
          if (EVar2 == ClusterUnionProxy) goto LAB_144071eef;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                             ,0x9a5,L"");
          if (bVar4) goto code_r0x0001440722d5;
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < local_140);
  }
  return;
}

// operator() @ 144072620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::__l2::<lambda_4>::operator()(void *this,double param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  FName FVar5;
  bool bVar6;
  bool bVar7;
  TStatId TVar8;
  uint uVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined8 *puVar10;
  ulonglong uVar11;
  FName FVar12;
  FNameEntryId FVar13;
  FNameEntryId FVar14;
  longlong *plVar15;
  bool bVar16;
  FColor_u_0 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 local_c0 [2];
  uint local_b8;
  FName local_b0;
  FName local_a0;
  uint local_98;
  uint uStack_94;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  undefined8 *local_70;
  undefined4 *local_68;
  FColor_u_0 *local_60;
  undefined1 *local_58;
  undefined1 local_50 [24];
  
  lVar3 = *(longlong *)this;
  local_b8 = *(uint *)(lVar3 + 0x1c0);
  uVar11 = (ulonglong)(int)local_b8;
  plVar15 = *(longlong **)(lVar3 + 0x1b8);
  plVar2 = plVar15 + uVar11;
  do {
    if (*(int *)(lVar3 + 0x1c0) != (int)uVar11) {
      `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (plVar15 == plVar2) {
      Chaos::FPBDRigidsSolver::PreSolveDebugDraw(*(FPBDRigidsSolver **)this,param_1);
      return;
    }
    plVar4 = (longlong *)*plVar15;
    if ((*(ushort *)(plVar4 + 8) & 0x2000) != 0) {
      FVar14.Value = 0;
      bVar7 = false;
      bVar6 = false;
      local_b0.ComparisonIndex.Value = 0;
      local_b0.Number = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'::
         __l2::_thread_safe_static_guard_0__ == -1)) {
        local_res20[0] = 1;
        local_res18[0]._s_0.B = 1;
        local_c0[0] = 2;
        puVar10 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_50);
        local_90 = *puVar10;
        local_70 = &local_90;
        local_68 = local_c0;
        local_60 = local_res18;
        local_58 = local_res20;
        `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_Chaos>'::__l2::<lambda_1>::
        operator()(&local_70);
        _Init_thread_footer(&`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      TVar8.StatIdPtr =
           `public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
           ::__l2::StatId.StatIdPtr;
      if (((SUB84((`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                   ::__l2::StatId.StatIdPtr)->Name,0) != 0) ||
          (SUB84((`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                  ::__l2::StatId.StatIdPtr)->Name,4) != 0)) &&
         (FThreadStats::bPrimaryEnable != false)) {
        FVar5 = *(FName *)&(`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                            ::__l2::StatId.StatIdPtr)->Name;
        FVar13 = FVar5.ComparisonIndex.Value;
        uVar9 = FVar5.Number;
        if ((FVar13.Value != 0) || (uVar9 != 0)) {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_res18[0].Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_res18[0]._s_0,
                       ((`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                         ::__l2::StatId.StatIdPtr)->StatDescriptionAnsi).Ptr);
            bVar7 = false;
            bVar6 = true;
            if (-1 < CpuChannel->Enabled) {
              local_a0.ComparisonIndex.Value = FVar13.Value;
              local_a0.Number = uVar9;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_a0,((TVar8.StatIdPtr)->StatDescriptionWide).Ptr,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                         ,0x125);
              bVar7 = true;
              bVar6 = true;
            }
          }
          bVar16 = FThreadStats::bPrimaryEnable != false;
          FVar12 = local_b0;
          if (bVar16) {
            local_b0 = FVar5;
            local_98 = FVar13.Value;
            uStack_94 = uVar9;
            FThreadStats::AddMessage(FVar5,CycleScopeStart);
            FVar14 = local_b0.ComparisonIndex.Value;
            bVar7 = false;
            FVar12 = FVar5;
          }
          (**(code **)(*plVar4 + 0xa0))(plVar4);
          if (bVar6) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar7) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (((bVar16) && (FVar12 != (FName)0x0)) &&
             ((FThreadStats::bPrimaryDisableForever == false &&
              (FThreadStats::TlsSlot != 0xffffffff)))) {
            this_00 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_00 == (FThreadStats *)0x0) {
              this_01 = FThreadStatsPool::Get();
              this_00 = FThreadStatsPool::GetFromPool(this_01);
            }
            if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
              local_80.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
              local_80.NameAndInfo.Index.Value = FVar14.Value;
              QueryPerformanceCounter(&local_88);
              local_80.StatData.Pad[4] = '\0';
              local_80.StatData.Pad[5] = '\0';
              local_80.StatData.Pad[6] = '\0';
              local_80.StatData.Pad[7] = '\0';
              local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
              local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
              local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
              local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
              FThreadStats::AddStatMessage(this_00,&local_80);
              piVar1 = &this_00->ScopeCount;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FThreadStats::Flush(this_00,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(this_00,false,false);
              }
            }
          }
          goto LAB_1440728a0;
        }
      }
      (**(code **)(*plVar4 + 0xa0))(plVar4);
    }
LAB_1440728a0:
    uVar11 = (ulonglong)local_b8;
    plVar15 = plVar15 + 1;
  } while( true );
}

// operator() @ 144072d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::__l2::<lambda_5>::operator()(void *this,double param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  FName FVar6;
  bool bVar7;
  bool bVar8;
  TStatId TVar9;
  uint uVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined8 *puVar11;
  ulonglong uVar12;
  FNameEntryId FVar13;
  FNameEntryId FVar14;
  longlong *plVar15;
  bool bVar16;
  FColor_u_0 local_res8 [2];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  FName local_a8;
  FName local_98;
  uint local_90;
  uint uStack_8c;
  longlong *local_88;
  undefined8 local_80;
  LARGE_INTEGER local_78;
  FStatMessage local_70;
  undefined8 *local_60;
  undefined4 *local_58;
  FColor_u_0 *local_50;
  undefined1 *local_48;
  undefined1 local_40 [8];
  
  lVar4 = *(longlong *)this;
  uVar3 = *(uint *)(lVar4 + 0x1c0);
  uVar12 = (ulonglong)(int)uVar3;
  plVar15 = *(longlong **)(lVar4 + 0x1b8);
  local_88 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar2 = plVar15 + uVar12;
  do {
    if (*(int *)(lVar4 + 0x1c0) != (int)uVar12) {
      `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar15 == plVar2) {
      return;
    }
    plVar5 = (longlong *)*plVar15;
    if ((*(ushort *)(plVar5 + 8) & 0x4000) != 0) {
      FVar14.Value = 0;
      bVar8 = false;
      bVar7 = false;
      local_a8.ComparisonIndex.Value = 0;
      local_a8.Number = 0;
      if ((*(int *)(*local_88 + 0x9d4c) <
           `public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'::
         __l2::_thread_safe_static_guard_0__ == -1)) {
        local_res18[0] = 1;
        local_res8[0]._s_0.B = 1;
        local_res20[0] = 2;
        puVar11 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_40);
        local_80 = *puVar11;
        local_60 = &local_80;
        local_58 = local_res20;
        local_50 = local_res8;
        local_48 = local_res18;
        `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_Chaos>'::__l2::<lambda_1>::
        operator()(&local_60);
        _Init_thread_footer(&`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      TVar9.StatIdPtr =
           `public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
           ::__l2::StatId.StatIdPtr;
      if (((SUB84((`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                   ::__l2::StatId.StatIdPtr)->Name,0) != 0) ||
          (SUB84((`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                  ::__l2::StatId.StatIdPtr)->Name,4) != 0)) &&
         (FThreadStats::bPrimaryEnable != false)) {
        FVar6 = *(FName *)&(`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                            ::__l2::StatId.StatIdPtr)->Name;
        FVar13 = FVar6.ComparisonIndex.Value;
        uVar10 = FVar6.Number;
        if ((FVar13.Value != 0) || (uVar10 != 0)) {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_res8[0].Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_res8[0]._s_0,
                       ((`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                         ::__l2::StatId.StatIdPtr)->StatDescriptionAnsi).Ptr);
            bVar8 = false;
            bVar7 = true;
            if (-1 < CpuChannel->Enabled) {
              local_98.ComparisonIndex.Value = FVar13.Value;
              local_98.Number = uVar10;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_98,((TVar9.StatIdPtr)->StatDescriptionWide).Ptr,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                         ,0x125);
              bVar8 = true;
              bVar7 = true;
            }
          }
          bVar16 = FThreadStats::bPrimaryEnable != false;
          if (bVar16) {
            local_90 = FVar13.Value;
            uStack_8c = uVar10;
            FThreadStats::AddMessage(FVar6,CycleScopeStart);
            bVar8 = false;
            local_a8 = FVar6;
            FVar14.Value = FVar13.Value;
          }
          (**(code **)(*plVar5 + 0xa8))(plVar5);
          if (bVar7) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar8) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (((bVar16) && (local_a8 != (FName)0x0)) &&
             ((FThreadStats::bPrimaryDisableForever == false &&
              (FThreadStats::TlsSlot != 0xffffffff)))) {
            this_00 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_00 == (FThreadStats *)0x0) {
              this_01 = FThreadStatsPool::Get();
              this_00 = FThreadStatsPool::GetFromPool(this_01);
            }
            if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
              local_70.NameAndInfo.Number = local_a8.Number & 0xffff6fff | 0x6000;
              local_70.NameAndInfo.Index.Value = FVar14.Value;
              QueryPerformanceCounter(&local_78);
              local_70.StatData.Pad[4] = '\0';
              local_70.StatData.Pad[5] = '\0';
              local_70.StatData.Pad[6] = '\0';
              local_70.StatData.Pad[7] = '\0';
              local_70.StatData.Pad[0] = local_78.s.LowPart._0_1_;
              local_70.StatData.Pad[1] = local_78.s.LowPart._1_1_;
              local_70.StatData.Pad[2] = local_78.s.LowPart._2_1_;
              local_70.StatData.Pad[3] = local_78.s.LowPart._3_1_;
              FThreadStats::AddStatMessage(this_00,&local_70);
              piVar1 = &this_00->ScopeCount;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FThreadStats::Flush(this_00,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(this_00,false,false);
              }
            }
          }
          goto LAB_144072fc0;
        }
      }
      (**(code **)(*plVar5 + 0xa8))(plVar5);
    }
LAB_144072fc0:
    uVar12 = (ulonglong)uVar3;
    plVar15 = plVar15 + 1;
  } while( true );
}

// AdvanceSolverBy @ 144078120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsSolver::AdvanceSolverBy(FPBDRigidsSolver *this,FSubStepInfo *param_1)

{
  int *piVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  FChaosSolversModule *this_00;
  IChaosSettingsProvider *pIVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_FinalizePullData> FVar8;
  FThreadStats *pFVar9;
  FThreadStatsPool *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_DestroyPendingProxies> FVar11;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FName FVar15;
  undefined1 uVar16;
  FNameEntryId FVar17;
  bool bVar18;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  FName local_res18;
  FStatMessage local_e8;
  FChaosDDTimelineContext local_d8;
  AdvanceOneTimeStepTask local_b0;
  
  dVar2 = (double)this->_padding_;
  local_d8.Timeline.Object = (FChaosDDTimeline *)0x0;
  local_d8.Timeline.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_d8.bInContext = false;
  local_d8.PreviousFrame.Object = (FChaosDDFrame *)0x0;
  local_d8.PreviousFrame.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  uVar16 = (undefined1)((this->MEvolution).Ptr)->_padding_;
  local_res8.s.LowPart._0_1_ = uVar16;
  if (uVar16 == '\0') {
    ChaosDD::Private::FChaosDDTimelineContext::BeginFrame
              (&local_d8,&this->CDDFrameTimeline,dVar2,(double)this->_padding_);
  }
  this_00 = FChaosSolversModule::GetModule();
  pIVar6 = FChaosSolversModule::GetSettingsProvider(this_00);
  cVar4 = (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
  if (cVar4 != '\0') {
    bVar5 = FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction();
    if ((bVar5) && (4 < (byte)LogChaos._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
  }
  local_b0.MDeltaTime = (double)this->_padding_;
  local_b0.MSubStepInfo.PseudoFraction = param_1->PseudoFraction;
  local_b0.MSubStepInfo.Step = param_1->Step;
  local_b0.MSubStepInfo.NumSteps = param_1->NumSteps;
  local_b0.MSubStepInfo.bSolverSubstepped = param_1->bSolverSubstepped;
  local_b0.MSubStepInfo._17_7_ = *(undefined7 *)&param_1->field_0x11;
  local_b0.CurrentLock.Object = (FWindowsRecursiveMutex *)0x0;
  local_b0.CurrentLock.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_b0.CurrentEvent.Object = (FEvent *)0x0;
  local_b0.CurrentEvent.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_b0.PrevLock.Object = (FWindowsRecursiveMutex *)0x0;
  local_b0.PrevLock.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b0.PrevEvent.Object = (FEvent *)0x0;
  local_b0.PrevEvent.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b0.MSolver = this;
  if (5 < (byte)LogPBDRigidsSolver._0_1_) {
    UE::Logging::Private::BasicLog<6>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Chaos::AdvanceOneTimeStepTask::AdvanceOneTimeStepTask(Chaos::FPBDRigidsSolver*___ptr64,double,Chaos::FSubStepInfo_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogPBDRigidsSolver);
  }
  AdvanceOneTimeStepTask::DoWork(&local_b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.CurrentEvent.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.PrevEvent.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.CurrentLock.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.PrevLock.SharedReferenceCount.ReferenceController);
  FVar17.Value = 0;
  if ((double)this->_padding_ <= 0.0) goto LAB_1440784b2;
  FVar8 = StatPtr_STAT_FinalizePullData;
  if (StatPtr_STAT_FinalizePullData == (FThreadSafeStaticStat<FStat_STAT_FinalizePullData>)0x0) {
    pFVar7 = ::FName::FName(&local_res18,"STAT_FinalizePullData");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_FinalizePullData>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FinalizePullData,*pFVar7,
                       L"Finalize Pull Data","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
                       ,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar8;
  bVar5 = false;
  bVar3 = false;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar12 == 0)) {
LAB_1440783af:
    bVar18 = false;
    FVar14.ComparisonIndex.Value = 0;
    FVar14.Number = 0;
    FVar13.Value = FVar17.Value;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar5 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar13.Value;
        local_res10.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                   ,0x59c);
        bVar5 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1440783af;
    local_res10.s.LowPart = FVar13.Value;
    local_res10.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar18 = true;
  }
  FChaosMarshallingManager::FinalizePullData_Internal
            ((FChaosMarshallingManager *)&this->_padding_,(int)((this->MEvolution).Ptr)->_padding_,
             dVar2,(double)this->_padding_);
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar18) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar9 == (FThreadStats *)0x0) {
      pFVar10 = FThreadStatsPool::Get();
      pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
    }
    if (pFVar9->bWaitForExplicitFlush < pFVar9->ScopeCount) {
      local_e8.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_e8.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res10);
      local_e8.StatData.Pad[4] = '\0';
      local_e8.StatData.Pad[5] = '\0';
      local_e8.StatData.Pad[6] = '\0';
      local_e8.StatData.Pad[7] = '\0';
      local_e8.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_e8.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_e8.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_e8.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar9,&local_e8);
      piVar1 = &pFVar9->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  uVar16 = local_res8.s.LowPart._0_1_;
LAB_1440784b2:
  if (param_1->Step == param_1->NumSteps + -1) {
    FVar11 = StatPtr_STAT_DestroyPendingProxies;
    if (StatPtr_STAT_DestroyPendingProxies ==
        (FThreadSafeStaticStat<FStat_STAT_DestroyPendingProxies>)0x0) {
      pFVar7 = ::FName::FName((FName *)&local_res10.s,"STAT_DestroyPendingProxies");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_DestroyPendingProxies>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DestroyPendingProxies,*pFVar7,
                          L"Destroy Pending Proxies","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
                          true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar15 = *(FName *)FVar11;
    bVar5 = false;
    bVar3 = false;
    FVar13 = FVar15.ComparisonIndex.Value;
    uVar12 = FVar15.Number;
    if ((FVar13.Value == 0) && (uVar12 == 0)) {
      DestroyPendingProxies_Internal(this);
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res8.s.LowPart = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
        bVar5 = false;
        bVar3 = true;
        if (-1 < CpuChannel->Enabled) {
          local_res8.s.LowPart = FVar13.Value;
          local_res8.s.HighPart = uVar12;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                     ,0x5a4);
          bVar5 = true;
          bVar3 = true;
        }
      }
      bVar18 = FThreadStats::bPrimaryEnable == false;
      if (bVar18) {
        FVar15.ComparisonIndex.Value = 0;
        FVar15.Number = 0;
      }
      else {
        local_res8.s.LowPart = FVar13.Value;
        local_res8.s.HighPart = uVar12;
        FThreadStats::AddMessage(FVar15,CycleScopeStart);
        FVar17.Value = FVar13.Value;
      }
      DestroyPendingProxies_Internal(this);
      if (bVar3) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((!bVar18) && (FVar15 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar9 == (FThreadStats *)0x0) {
          pFVar10 = FThreadStatsPool::Get();
          pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
        }
        if (pFVar9->bWaitForExplicitFlush < pFVar9->ScopeCount) {
          local_e8.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
          local_e8.NameAndInfo.Index.Value = FVar17.Value;
          QueryPerformanceCounter(&local_res8);
          local_e8.StatData.Pad[4] = '\0';
          local_e8.StatData.Pad[5] = '\0';
          local_e8.StatData.Pad[6] = '\0';
          local_e8.StatData.Pad[7] = '\0';
          local_e8.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
          local_e8.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
          local_e8.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
          local_e8.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar9,&local_e8);
          piVar1 = &pFVar9->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar9,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar9,false,false);
          }
        }
      }
    }
  }
  if (uVar16 == '\0') {
    ChaosDD::Private::FChaosDDTimelineContext::EndFrame(&local_d8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.PreviousFrame.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.Timeline.SharedReferenceCount.ReferenceController);
  return;
}

// ApplyCVars @ 14407aa90

void __thiscall Chaos::FPBDRigidsSolver::ApplyCVars(FPBDRigidsSolver *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  FPBDRigidsEvolutionGBF *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FString *pFVar8;
  float fVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  bool bVar12;
  FPBDJointSolverSettings *pFVar13;
  undefined1 uVar14;
  int iVar15;
  atomic<int> *paVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  double dVar20;
  FPBDJointSolverSettings local_d8;
  
  (((this->MEvolution).Ptr)->CollisionConstraints).bEnableCollisions =
       CVars::bChaosSolverCollisionEnabled;
  pFVar6 = (this->MEvolution).Ptr;
  pTVar7 = (pFVar6->CollisionConstraints).DetectorSettings.EvolutionName.Name.SharedReferenceCount.
           ReferenceController;
  dVar20 = (pFVar6->CollisionConstraints).DetectorSettings.BoundsExpansion;
  dVar1 = (pFVar6->CollisionConstraints).DetectorSettings.BoundsVelocityInflation;
  dVar2 = (pFVar6->CollisionConstraints).DetectorSettings.MaxVelocityBoundsExpansion;
  dVar3 = (pFVar6->CollisionConstraints).DetectorSettings.BoundsVelocityInflationMACD;
  dVar4 = (pFVar6->CollisionConstraints).DetectorSettings.MaxVelocityBoundsExpansionMACD;
  bVar5 = (pFVar6->CollisionConstraints).DetectorSettings.bFilteringEnabled;
  pFVar8 = (pFVar6->CollisionConstraints).DetectorSettings.EvolutionName.Name.Object;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    paVar16 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar16 = &pTVar7->SharedReferenceCount;
    LOCK();
    *paVar16 = (atomic<int>)((int)*paVar16 + 1);
    UNLOCK();
  }
  bVar12 = CVars::bChaosUseMACD;
  bVar11 = CVars::bChaosUseCCD;
  bVar17 = CVars::ChaosSolverCollisionAllowManifoldUpdate != 0;
  pFVar6 = (this->MEvolution).Ptr;
  bVar18 = CVars::ChaosSolverCollisionDeferNarrowPhase != 0;
  bVar19 = CVars::ChaosSolverCollisionUseManifolds != 0;
  (pFVar6->CollisionConstraints).DetectorSettings.BoundsExpansion = dVar20;
  (pFVar6->CollisionConstraints).DetectorSettings.BoundsVelocityInflation = dVar1;
  (pFVar6->CollisionConstraints).DetectorSettings.bAllowManifolds = bVar19;
  (pFVar6->CollisionConstraints).DetectorSettings.MaxVelocityBoundsExpansion = dVar2;
  (pFVar6->CollisionConstraints).DetectorSettings.BoundsVelocityInflationMACD = dVar3;
  (pFVar6->CollisionConstraints).DetectorSettings.MaxVelocityBoundsExpansionMACD = dVar4;
  (pFVar6->CollisionConstraints).DetectorSettings.bFilteringEnabled = bVar5;
  (pFVar6->CollisionConstraints).DetectorSettings.bDeferNarrowPhase = bVar18;
  (pFVar6->CollisionConstraints).DetectorSettings.bAllowManifoldReuse = bVar17;
  (pFVar6->CollisionConstraints).DetectorSettings.bAllowCCD = bVar11;
  (pFVar6->CollisionConstraints).DetectorSettings.bAllowMACD = bVar12;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar16 = (atomic<int>)((int)*paVar16 + 1);
    UNLOCK();
  }
  pTVar10 = (pFVar6->CollisionConstraints).DetectorSettings.EvolutionName.Name.SharedReferenceCount.
            ReferenceController;
  (pFVar6->CollisionConstraints).DetectorSettings.EvolutionName.Name.Object = pFVar8;
  (pFVar6->CollisionConstraints).DetectorSettings.EvolutionName.Name.SharedReferenceCount.
  ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  pFVar13 = FPBDJointConstraints::GetSettings
                      (&(((this->MEvolution).Ptr)->JointConstraints).LinearConstraints);
  FPBDJointSolverSettings::FPBDJointSolverSettings(&local_d8,pFVar13);
  local_d8.MinSolverStiffness = (double)CVars::ChaosSolverJointMinSolverStiffness;
  local_d8.NumIterationsAtMaxSolverStiffness =
       CVars::ChaosSolverJointNumIterationsAtMaxSolverStiffness;
  local_d8.bSolvePositionLast = CVars::bChaosSolverJointSolvePositionLast;
  local_d8.bUsePositionBasedDrives = CVars::bChaosSolverJointUsePositionBasedDrives;
  local_d8.PositionTolerance = (double)CVars::ChaosSolverJointPositionTolerance;
  local_d8.NumShockPropagationIterations = CVars::ChaosSolverJointNumShockProagationIterations;
  local_d8.bSortEnabled = false;
  local_d8.MaxSolverStiffness = (double)CVars::ChaosSolverJointMaxSolverStiffness;
  local_d8.MinParentMassRatio = (double)CVars::ChaosSolverJointMinParentMassRatio;
  local_d8.AngleTolerance = (double)CVars::ChaosSolverJointAngleTolerance;
  local_d8.ShockPropagationOverride = (double)CVars::ChaosSolverJointShockPropagation;
  local_d8.MaxInertiaRatio = (double)CVars::ChaosSolverJointMaxInertiaRatio;
  FPBDJointConstraints::SetSettings
            (&(((this->MEvolution).Ptr)->JointConstraints).LinearConstraints,&local_d8);
  FPBDJointConstraints::SetSettings
            (&(((this->MEvolution).Ptr)->JointConstraints).NonLinearConstraints,&local_d8);
  if (CVars::bChaosCollisionConfigChanged != false) {
    FPBDRigidsEvolutionGBF::DestroyTransientConstraints((this->MEvolution).Ptr);
    CVars::bChaosCollisionConfigChanged = false;
  }
  if (-1 < CVars::ChaosSolverCollisionPositionFrictionIterations) {
    (((this->MEvolution).Ptr)->CollisionConstraints).SolverSettings.NumPositionFrictionIterations =
         CVars::ChaosSolverCollisionPositionFrictionIterations;
  }
  if (-1 < CVars::ChaosSolverCollisionVelocityFrictionIterations) {
    (((this->MEvolution).Ptr)->CollisionConstraints).SolverSettings.NumVelocityFrictionIterations =
         CVars::ChaosSolverCollisionVelocityFrictionIterations;
  }
  FPBDRigidsEvolutionGBF::SetShockPropagationIterations
            ((this->MEvolution).Ptr,CVars::ChaosSolverCollisionPositionShockPropagationIterations,
             CVars::ChaosSolverCollisionVelocityShockPropagationIterations);
  if (-1 < CVars::ChaosSolverPositionIterations) {
    iVar15 = 0x7f;
    if (CVars::ChaosSolverPositionIterations < 0x7f) {
      iVar15 = CVars::ChaosSolverPositionIterations;
    }
    uVar14 = 0xff;
    if (-1 < iVar15) {
      uVar14 = (char)iVar15;
    }
    *(undefined1 *)&((this->MEvolution).Ptr)->_padding_ = uVar14;
  }
  if (-1 < CVars::ChaosSolverVelocityIterations) {
    iVar15 = 0x7f;
    if (CVars::ChaosSolverVelocityIterations < 0x7f) {
      iVar15 = CVars::ChaosSolverVelocityIterations;
    }
    uVar14 = 0xff;
    if (-1 < iVar15) {
      uVar14 = (char)iVar15;
    }
    *(undefined1 *)((longlong)&((this->MEvolution).Ptr)->_padding_ + 1) = uVar14;
  }
  if (-1 < CVars::ChaosSolverProjectionIterations) {
    iVar15 = 0x7f;
    if (CVars::ChaosSolverProjectionIterations < 0x7f) {
      iVar15 = CVars::ChaosSolverProjectionIterations;
    }
    uVar14 = 0xff;
    if (-1 < iVar15) {
      uVar14 = (char)iVar15;
    }
    *(undefined1 *)((longlong)&((this->MEvolution).Ptr)->_padding_ + 2) = uVar14;
  }
  if (0.0 <= CVars::ChaosSolverCullDistance) {
    (((this->MEvolution).Ptr)->CollisionConstraints).DetectorSettings.BoundsExpansion =
         (double)CVars::ChaosSolverCullDistance;
  }
  if ((0.0 <= CVars::ChaosSolverVelocityBoundsMultiplier) &&
     (0.0 <= CVars::ChaosSolverMaxVelocityBoundsExpansion)) {
    pFVar6 = (this->MEvolution).Ptr;
    dVar20 = (double)CVars::ChaosSolverVelocityBoundsMultiplier;
    (pFVar6->CollisionConstraints).DetectorSettings.MaxVelocityBoundsExpansion =
         (double)CVars::ChaosSolverMaxVelocityBoundsExpansion;
    (pFVar6->CollisionConstraints).DetectorSettings.BoundsVelocityInflation = dVar20;
  }
  if ((0.0 <= CVars::ChaosSolverVelocityBoundsMultiplierMACD) &&
     (0.0 <= CVars::ChaosSolverMaxVelocityBoundsExpansionMACD)) {
    pFVar6 = (this->MEvolution).Ptr;
    dVar20 = (double)CVars::ChaosSolverVelocityBoundsMultiplierMACD;
    (pFVar6->CollisionConstraints).DetectorSettings.MaxVelocityBoundsExpansionMACD =
         (double)CVars::ChaosSolverMaxVelocityBoundsExpansionMACD;
    (pFVar6->CollisionConstraints).DetectorSettings.BoundsVelocityInflationMACD = dVar20;
  }
  if (0.0 <= CVars::ChaosSolverMaxPushOutVelocity) {
    dVar20 = (double)CVars::ChaosSolverMaxPushOutVelocity;
    if ((double)CVars::ChaosSolverMaxPushOutVelocity <= 0.0) {
      dVar20 = 0.0;
    }
    (((this->MEvolution).Ptr)->CollisionConstraints).SolverSettings.MaxPushOutVelocity = dVar20;
  }
  if (0.0 <= CVars::ChaosSolverDepenetrationVelocity) {
    fVar9 = CVars::ChaosSolverDepenetrationVelocity;
    if (__real_501502f9 <= CVars::ChaosSolverDepenetrationVelocity) {
      fVar9 = __real_501502f9;
    }
    (((this->MEvolution).Ptr)->CollisionConstraints).SolverSettings.DepenetrationVelocity = fVar9;
  }
  if (-1 < CVars::ChaosSolverDeterministic) {
    UpdateIsDeterministic(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// ApplyCallbacks_Internal @ 14407aed0

void __thiscall Chaos::FPBDRigidsSolver::ApplyCallbacks_Internal(FPBDRigidsSolver *this)

{
  longlong *plVar1;
  
  FPhysicsSolverBase::ApplyCallbacks_Internal((FPhysicsSolverBase *)this);
  plVar1 = (longlong *)this->_padding_;
  if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)&this->_padding_ + 1) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00014407af08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,this->CurrentFrame,&this->_padding_);
    return;
  }
  return;
}

// ApplyConfig @ 14407af20

void __thiscall
Chaos::FPBDRigidsSolver::ApplyConfig(FPBDRigidsSolver *this,FChaosSolverConfiguration *param_1)

{
  float fVar1;
  bool bVar2;
  FSolverCollisionEventFilter *pFVar3;
  FSolverBreakingEventFilter *pFVar4;
  FSolverTrailingEventFilter *pFVar5;
  undefined3 uVar6;
  float fVar7;
  undefined1 uVar8;
  int iVar9;
  double dVar10;
  float fVar11;
  
  FRigidClustering::ApplySettings(&((this->MEvolution).Ptr)->Clustering,param_1);
  iVar9 = 0x7f;
  if (param_1->PositionIterations < 0x7f) {
    iVar9 = param_1->PositionIterations;
  }
  uVar8 = 0xff;
  if (-1 < iVar9) {
    uVar8 = (char)iVar9;
  }
  *(undefined1 *)&((this->MEvolution).Ptr)->_padding_ = uVar8;
  iVar9 = 0x7f;
  if (param_1->VelocityIterations < 0x7f) {
    iVar9 = param_1->VelocityIterations;
  }
  uVar8 = 0xff;
  if (-1 < iVar9) {
    uVar8 = (char)iVar9;
  }
  *(undefined1 *)((longlong)&((this->MEvolution).Ptr)->_padding_ + 1) = uVar8;
  iVar9 = 0x7f;
  if (param_1->ProjectionIterations < 0x7f) {
    iVar9 = param_1->ProjectionIterations;
  }
  uVar8 = 0xff;
  if (-1 < iVar9) {
    uVar8 = (char)iVar9;
  }
  *(undefined1 *)((longlong)&((this->MEvolution).Ptr)->_padding_ + 2) = uVar8;
  (((this->MEvolution).Ptr)->CollisionConstraints).DetectorSettings.BoundsExpansion =
       (double)param_1->CollisionCullDistance;
  dVar10 = (double)param_1->CollisionMaxPushOutVelocity;
  if (dVar10 <= 0.0) {
    dVar10 = 0.0;
  }
  (((this->MEvolution).Ptr)->CollisionConstraints).SolverSettings.MaxPushOutVelocity = dVar10;
  fVar1 = param_1->CollisionInitialOverlapDepenetrationVelocity;
  fVar11 = __real_501502f9;
  if ((0.0 <= fVar1) && (fVar11 = fVar1, __real_501502f9 <= fVar1)) {
    fVar11 = __real_501502f9;
  }
  (((this->MEvolution).Ptr)->CollisionConstraints).SolverSettings.DepenetrationVelocity = fVar11;
  ((this->MSolverEventFilters).Ptr)->CollisionEventsEnabled = param_1->bGenerateCollisionData;
  bVar2 = param_1->bGenerateBreakData;
  ((this->MSolverEventFilters).Ptr)->BreakingEventsEnabled = bVar2;
  (((this->MEvolution).Ptr)->Clustering).DoGenerateBreakingData = bVar2;
  ((this->MSolverEventFilters).Ptr)->TrailingEventsEnabled = param_1->bGenerateTrailingData;
  uVar6 = *(undefined3 *)&(param_1->CollisionFilterSettings).field_0x1;
  fVar1 = (param_1->CollisionFilterSettings).MinMass;
  fVar11 = (param_1->CollisionFilterSettings).MinSpeed;
  fVar7 = (param_1->CollisionFilterSettings).MinImpulse;
  pFVar3 = (((this->MSolverEventFilters).Ptr)->CollisionFilter).Ptr;
  (pFVar3->Settings).FilterEnabled = (param_1->CollisionFilterSettings).FilterEnabled;
  *(undefined3 *)&(pFVar3->Settings).field_0x1 = uVar6;
  (pFVar3->Settings).MinMass = fVar1;
  (pFVar3->Settings).MinSpeed = fVar11;
  (pFVar3->Settings).MinImpulse = fVar7;
  uVar6 = *(undefined3 *)&(param_1->BreakingFilterSettings).field_0x1;
  fVar1 = (param_1->BreakingFilterSettings).MinMass;
  fVar11 = (param_1->BreakingFilterSettings).MinSpeed;
  fVar7 = (param_1->BreakingFilterSettings).MinVolume;
  pFVar4 = (((this->MSolverEventFilters).Ptr)->BreakingFilter).Ptr;
  (pFVar4->Settings).FilterEnabled = (param_1->BreakingFilterSettings).FilterEnabled;
  *(undefined3 *)&(pFVar4->Settings).field_0x1 = uVar6;
  (pFVar4->Settings).MinMass = fVar1;
  (pFVar4->Settings).MinSpeed = fVar11;
  (pFVar4->Settings).MinVolume = fVar7;
  uVar6 = *(undefined3 *)&(param_1->TrailingFilterSettings).field_0x1;
  fVar1 = (param_1->TrailingFilterSettings).MinMass;
  fVar11 = (param_1->TrailingFilterSettings).MinSpeed;
  fVar7 = (param_1->TrailingFilterSettings).MinVolume;
  pFVar5 = (((this->MSolverEventFilters).Ptr)->TrailingFilter).Ptr;
  (pFVar5->Settings).FilterEnabled = (param_1->TrailingFilterSettings).FilterEnabled;
  *(undefined3 *)&(pFVar5->Settings).field_0x1 = uVar6;
  (pFVar5->Settings).MinMass = fVar1;
  (pFVar5->Settings).MinSpeed = fVar11;
  (pFVar5->Settings).MinVolume = fVar7;
  ApplyCVars(this);
  return;
}

// AreAnyTasksPending @ 14407b270

bool __thiscall Chaos::FPBDRigidsSolver::AreAnyTasksPending(FPBDRigidsSolver *this)

{
  FPBDRigidsEvolutionGBF *pFVar1;
  
  if ((this->_padding_ == 0) || (*(char *)(this->_padding_ + 0xd0) != '\0')) {
    pFVar1 = (this->MEvolution).Ptr;
    if (((pFVar1->_padding_ == 0) || (*(char *)(pFVar1->_padding_ + 0xd0) != '\0')) ||
       (((((char *)pFVar1->_padding_ != (char *)0x0 && (pFVar1->_padding_ != 0)) &&
         (*(char *)pFVar1->_padding_ != '\0')) && (*(char *)pFVar1->_padding_ != '\x01')))) {
      return false;
    }
  }
  return true;
}

// BeginDestroy @ 14407b5f0

void __thiscall Chaos::FPBDRigidsSolver::BeginDestroy(FPBDRigidsSolver *this)

{
  *(undefined1 *)((longlong)&((this->MEvolution).Ptr)->_padding_ + 1) = 0;
  return;
}

// BufferPhysicsResults @ 14407b930

void __thiscall Chaos::FPBDRigidsSolver::BufferPhysicsResults(FPBDRigidsSolver *this)

{
  int *piVar1;
  TArray<Chaos::FDirtyGeometryCollectionData,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Chaos::FDirtyClusterUnionData,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Chaos::FDirtyJointConstraintData,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<Chaos::FDirtyCharacterGroundConstraintData,TSizedDefaultAllocator<32>_> *pTVar5;
  FPullPhysicsData *pFVar6;
  longlong lVar7;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar8;
  TPBDRigidParticles<double,3> *pTVar9;
  FSingleParticlePhysicsProxy *this_00;
  FGeometryCollectionPhysicsProxy *this_01;
  FClusterUnionPhysicsProxy *this_02;
  FJointConstraintPhysicsProxy *this_03;
  FCharacterGroundConstraintProxy *this_04;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  uint local_res10;
  TArray<Chaos::FClusterUnionPhysicsProxy_*,TSizedDefaultAllocator<32>_> local_e8;
  TArray<FGeometryCollectionPhysicsProxy_*,TSizedDefaultAllocator<32>_> local_d8;
  TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_> local_c8;
  undefined1 local_b8;
  undefined7 uStack_b7;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTStack_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTStack_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  TPBDRigidParticles<double,3> *pTStack_90;
  undefined1 local_88;
  undefined7 uStack_87;
  TPBDRigidParticles<double,3> *pTStack_80;
  <lambda_2> local_78;
  <lambda_1> local_68;
  <lambda_2> local_58;
  <lambda_1> local_48;
  
  pFVar6 = (FPullPhysicsData *)this->_padding_;
  if ((GSingleThreadedPhysics != 0) || (CVars::bSingleThreadPushData)) {
    uVar19 = 0;
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = 0;
    local_d8.ArrayMax = 0;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    BufferPhysicsResultsSingleThreaded(this,&local_c8,&local_d8,&local_e8);
    if (((pFVar6->DirtyRigids).ArrayNum != 0) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_6441385585952159120>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                            ,0xa70,"PullData->DirtyRigids.Num() == 0"), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (local_c8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_c8._8_8_ & 0xffffffff);
    }
    piVar1 = &(pFVar6->DirtyRigids).ArrayMax;
    if ((pFVar6->DirtyRigids).ArrayMax < local_c8.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,0x10,local_c8.ArrayNum,(ForAnyElementType *)pFVar6,
                 (pFVar6->DirtyRigids).ArrayNum,piVar1);
    }
    uVar12 = 0;
    uVar17 = uVar19;
    uVar16 = uVar19;
    if (0 < local_c8.ArrayNum) {
      do {
        iVar13 = (pFVar6->DirtyRigids).ArrayNum;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1090,(ForAnyElementType *)pFVar6,piVar1);
        }
        (pFVar6->DirtyRigids).ArrayNum = iVar13 + 1;
        DefaultConstructItems<Chaos::FDirtyRigidParticleData,int>
                  ((pFVar6->DirtyRigids).AllocatorInstance.Data + (longlong)iVar13 * 0x90,1);
        uVar15 = (uint)uVar17;
        uVar20 = uVar12;
        if ((int)uVar15 < local_c8.ArrayNum) {
          uVar20 = ~uVar15 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar13 = (pFVar6->DirtyRigids).ArrayNum;
        uVar14 = iVar13 - 1;
        this_00 = *(FSingleParticlePhysicsProxy **)(local_c8.AllocatorInstance.Data + uVar16);
        uVar20 = uVar12;
        if ((int)uVar14 < iVar13) {
          uVar20 = ~uVar14 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FSingleParticlePhysicsProxy::BufferPhysicsResults
                  (this_00,(FDirtyRigidParticleData *)
                           ((pFVar6->DirtyRigids).AllocatorInstance.Data +
                           (longlong)((pFVar6->DirtyRigids).ArrayNum + -1) * 0x90));
        uVar17 = (ulonglong)(uVar15 + 1);
        uVar16 = uVar16 + 8;
      } while ((int)(uVar15 + 1) < local_c8.ArrayNum);
    }
    if (((pFVar6->DirtyGeometryCollections).ArrayNum != 0) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_6441385585952159110>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                            ,0xa7a,"PullData->DirtyGeometryCollections.Num() == 0"), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pTVar2 = &pFVar6->DirtyGeometryCollections;
    if (local_d8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_d8._8_8_ & 0xffffffff);
    }
    piVar1 = &(pFVar6->DirtyGeometryCollections).ArrayMax;
    if ((pFVar6->DirtyGeometryCollections).ArrayMax < local_d8.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_d8.ArrayNum,&pTVar2->AllocatorInstance,
                 (pFVar6->DirtyGeometryCollections).ArrayNum,piVar1);
    }
    uVar17 = uVar19;
    uVar16 = uVar19;
    if (0 < local_d8.ArrayNum) {
      do {
        iVar13 = (pFVar6->DirtyGeometryCollections).ArrayNum;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&pTVar2->AllocatorInstance,piVar1);
          (pFVar6->DirtyGeometryCollections).ArrayNum = iVar13;
        }
        (pFVar6->DirtyGeometryCollections).ArrayNum = iVar13 + 1;
        DefaultConstructItems<Chaos::FDirtyGeometryCollectionData,int>
                  ((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x20,1);
        uVar15 = (uint)uVar17;
        uVar20 = uVar12;
        if ((int)uVar15 < local_d8.ArrayNum) {
          uVar20 = ~uVar15 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar13 = (pFVar6->DirtyGeometryCollections).ArrayNum;
        uVar14 = iVar13 - 1;
        this_01 = *(FGeometryCollectionPhysicsProxy **)(local_d8.AllocatorInstance.Data + uVar16);
        uVar20 = uVar12;
        if ((int)uVar14 < iVar13) {
          uVar20 = ~uVar14 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FGeometryCollectionPhysicsProxy::BufferPhysicsResults_Internal
                  (this_01,this,
                   (FDirtyGeometryCollectionData *)
                   ((pTVar2->AllocatorInstance).Data +
                   (longlong)((pFVar6->DirtyGeometryCollections).ArrayNum + -1) * 0x20));
        uVar17 = (ulonglong)(uVar15 + 1);
        uVar16 = uVar16 + 8;
      } while ((int)(uVar15 + 1) < local_d8.ArrayNum);
    }
    if (((pFVar6->DirtyClusterUnions).ArrayNum != 0) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_6441385585952159100>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                            ,0xa84,"PullData->DirtyClusterUnions.IsEmpty()"), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pTVar3 = &pFVar6->DirtyClusterUnions;
    if (local_e8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_e8._8_8_ & 0xffffffff);
    }
    piVar1 = &(pFVar6->DirtyClusterUnions).ArrayMax;
    if ((pFVar6->DirtyClusterUnions).ArrayMax < local_e8.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,0x10,local_e8.ArrayNum,&pTVar3->AllocatorInstance,
                 (pFVar6->DirtyClusterUnions).ArrayNum,piVar1);
    }
    uVar17 = uVar19;
    if (0 < local_e8.ArrayNum) {
      do {
        iVar13 = (pFVar6->DirtyClusterUnions).ArrayNum;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10f0,&pTVar3->AllocatorInstance,piVar1);
          (pFVar6->DirtyClusterUnions).ArrayNum = iVar13;
        }
        (pFVar6->DirtyClusterUnions).ArrayNum = iVar13 + 1;
        DefaultConstructItems<Chaos::FDirtyClusterUnionData,int>
                  ((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 0xf0,1);
        uVar15 = (uint)uVar19;
        uVar20 = uVar12;
        if ((int)uVar15 < local_e8.ArrayNum) {
          uVar20 = ~uVar15 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar13 = (pFVar6->DirtyClusterUnions).ArrayNum;
        uVar14 = iVar13 - 1;
        this_02 = *(FClusterUnionPhysicsProxy **)(local_e8.AllocatorInstance.Data + uVar17);
        uVar20 = uVar12;
        if ((int)uVar14 < iVar13) {
          uVar20 = ~uVar14 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FClusterUnionPhysicsProxy::BufferPhysicsResults_Internal
                  (this_02,(FDirtyClusterUnionData *)
                           ((pTVar3->AllocatorInstance).Data +
                           (longlong)((pFVar6->DirtyClusterUnions).ArrayNum + -1) * 0xf0));
        uVar19 = (ulonglong)(uVar15 + 1);
        uVar17 = uVar17 + 8;
      } while ((int)(uVar15 + 1) < local_e8.ArrayNum);
    }
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
  }
  else {
    uVar16 = 0;
    iVar18 = 0;
    local_res10 = 0;
    Chaos::Private::FTaskDispatcherSolver::Initialize
              ((this->TaskDispatcher).Ptr,&(this->Particles).DirtyParticlesView);
    iVar13 = *(int *)&(this->Particles).DirtyParticlesView.field_0x8;
    uVar19 = uVar16;
    uVar17 = uVar16;
    if (0 < iVar13) {
      do {
        uVar20 = (uint)uVar17;
        uVar15 = (uint)uVar16;
        uVar12 = 0;
        if ((int)uVar15 < iVar13) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar7 = *(longlong *)&(this->Particles).DirtyParticlesView;
        pTVar8 = *(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   **)(lVar7 + 8 + uVar19);
        if (pTVar8 == (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                       *)0x0) {
          iVar13 = *(int *)(*(longlong *)(lVar7 + uVar19) + 0x18);
        }
        else {
          iVar13 = pTVar8->ArrayNum;
        }
        if (iVar13 != 0) {
          if (pTVar8 == (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                         *)0x0) {
            pTVar9 = *(TPBDRigidParticles<double,3> **)(lVar7 + uVar19);
            if (pTVar9 == (TPBDRigidParticles<double,3> *)0x0) goto LAB_14407bb01;
            local_98 = (undefined1)((this->MEvolution).Ptr)->_padding_;
            local_48._1_7_ = uStack_87;
            local_48.bIsResim = (bool)local_98;
            local_58._1_7_ = uStack_97;
            local_58.bIsResim = (bool)local_98;
            pTStack_90 = pTVar9;
            local_88 = local_98;
            pTStack_80 = pTVar9;
            local_58.ReturnHandle.Soa = pTVar9;
            local_48.ReturnHandle.Soa = pTVar9;
            iVar13 = Chaos::Private::FTaskDispatcherSolver::
                     CollectPhysicsResults<_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_Chaos::FPBDRigidsSolver::BufferPhysicsResults_::__l24::<lambda_2>_>_::__l2::<lambda_1>,_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_Chaos::FPBDRigidsSolver::BufferPhysicsResults_::__l24::<lambda_2>_>_::__l2::<lambda_2>_>
                               ((this->TaskDispatcher).Ptr,&local_48,&local_58,iVar13,uVar20);
          }
          else {
            iVar18 = pTVar8->ArrayNum;
            if ((iVar18 != iVar13) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("NumHandles == NumParticles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                                    ,0xa53,L""), bVar11)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            local_b8 = (undefined1)((this->MEvolution).Ptr)->_padding_;
            local_68._1_7_ = uStack_a7;
            local_68.bIsResim = (bool)local_b8;
            local_78._1_7_ = uStack_b7;
            local_78.bIsResim = (bool)local_b8;
            pTStack_b0 = pTVar8;
            local_a8 = local_b8;
            pTStack_a0 = pTVar8;
            local_78.ReturnHandle.CurHandlesArray = pTVar8;
            local_68.ReturnHandle.CurHandlesArray = pTVar8;
            iVar13 = Chaos::Private::FTaskDispatcherSolver::
                     CollectPhysicsResults<_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_Chaos::FPBDRigidsSolver::BufferPhysicsResults_::__l13::<lambda_1>_>_::__l2::<lambda_1>,_Chaos::FPBDRigidsSolver::DispatchTasksBufferPhysicsResults<_Chaos::FPBDRigidsSolver::BufferPhysicsResults_::__l13::<lambda_1>_>_::__l2::<lambda_2>_>
                               ((this->TaskDispatcher).Ptr,&local_68,&local_78,iVar18,local_res10);
            uVar20 = local_res10;
          }
          local_res10 = uVar20 + iVar13;
          uVar17 = (ulonglong)local_res10;
        }
LAB_14407bb01:
        iVar18 = (int)uVar17;
        iVar13 = *(int *)&(this->Particles).DirtyParticlesView.field_0x8;
        uVar16 = (ulonglong)(uVar15 + 1);
        uVar19 = uVar19 + 0x10;
      } while ((int)(uVar15 + 1) < iVar13);
    }
    if (((pFVar6->DirtyRigids).ArrayNum != 0) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_6441385585952159137>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                            ,0xa5f,"PullData->DirtyRigids.Num() == 0"), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (((pFVar6->DirtyGeometryCollections).ArrayNum != 0) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_6441385585952159136>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                            ,0xa60,"PullData->DirtyGeometryCollections.Num() == 0"), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (((pFVar6->DirtyClusterUnions).ArrayNum != 0) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_6441385585952159135>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                            ,0xa61,"PullData->DirtyClusterUnions.IsEmpty()"), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if ((((this->TaskDispatcher).Ptr)->NumRigidBatches != iVar18) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskDispatcher->GetNumRigidBatches() == DispatchBatchIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                            ,0xa62,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    Chaos::Private::FTaskDispatcherSolver::BufferRigidResults((this->TaskDispatcher).Ptr,pFVar6);
    Chaos::Private::FTaskDispatcherSolver::BufferGCResults((this->TaskDispatcher).Ptr,pFVar6,this);
    Chaos::Private::FTaskDispatcherSolver::BufferClusterResults((this->TaskDispatcher).Ptr,pFVar6);
  }
  uVar19 = 0;
  if (((pFVar6->DirtyJointConstraints).ArrayNum != 0) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6441385585952159088>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                          ,0xa90,"PullData->DirtyJointConstraints.Num() == 0"), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar12 = (this->JointConstraintPhysicsProxies_Internal).ArrayNum;
  pTVar4 = &pFVar6->DirtyJointConstraints;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &(pFVar6->DirtyJointConstraints).ArrayMax;
  if ((pFVar6->DirtyJointConstraints).ArrayMax < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,uVar12,&pTVar4->AllocatorInstance,(pFVar6->DirtyJointConstraints).ArrayNum,
               piVar1);
  }
  uVar12 = 0;
  uVar17 = uVar19;
  uVar16 = uVar19;
  if (0 < (this->JointConstraintPhysicsProxies_Internal).ArrayNum) {
    do {
      iVar13 = (pFVar6->DirtyJointConstraints).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,&pTVar4->AllocatorInstance,piVar1);
        (pFVar6->DirtyJointConstraints).ArrayNum = iVar13;
      }
      (pFVar6->DirtyJointConstraints).ArrayNum = iVar13 + 1;
      DefaultConstructItems<Chaos::FDirtyJointConstraintData,int>
                ((pTVar4->AllocatorInstance).Data + (longlong)iVar13 * 0x58,1);
      uVar15 = (uint)uVar17;
      uVar20 = 0;
      if ((int)uVar15 < (this->JointConstraintPhysicsProxies_Internal).ArrayNum) {
        uVar20 = ~uVar15 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar13 = (pFVar6->DirtyJointConstraints).ArrayNum;
      uVar14 = iVar13 - 1;
      this_03 = *(FJointConstraintPhysicsProxy **)
                 ((this->JointConstraintPhysicsProxies_Internal).AllocatorInstance.Data + uVar16);
      uVar20 = uVar12;
      if ((int)uVar14 < iVar13) {
        uVar20 = ~uVar14 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FJointConstraintPhysicsProxy::BufferPhysicsResults
                (this_03,(FDirtyJointConstraintData *)
                         ((pTVar4->AllocatorInstance).Data +
                         (longlong)((pFVar6->DirtyJointConstraints).ArrayNum + -1) * 0x58));
      uVar17 = (ulonglong)(uVar15 + 1);
      uVar16 = uVar16 + 8;
    } while ((int)(uVar15 + 1) < (this->JointConstraintPhysicsProxies_Internal).ArrayNum);
  }
  if (((pFVar6->DirtyCharacterGroundConstraints).ArrayNum != 0) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6441385585952159077>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                          ,0xa9b,"PullData->DirtyCharacterGroundConstraints.Num() == 0"), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar20 = (this->CharacterGroundConstraintProxies_Internal).ArrayNum;
  pTVar5 = &pFVar6->DirtyCharacterGroundConstraints;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  piVar1 = &(pFVar6->DirtyCharacterGroundConstraints).ArrayMax;
  if ((pFVar6->DirtyCharacterGroundConstraints).ArrayMax < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x118,8,uVar20,&pTVar5->AllocatorInstance,
               (pFVar6->DirtyCharacterGroundConstraints).ArrayNum,piVar1);
  }
  uVar17 = uVar19;
  if (0 < (this->CharacterGroundConstraintProxies_Internal).ArrayNum) {
    do {
      iVar13 = (pFVar6->DirtyCharacterGroundConstraints).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x118,8,&pTVar5->AllocatorInstance,piVar1);
        (pFVar6->DirtyCharacterGroundConstraints).ArrayNum = iVar13;
      }
      (pFVar6->DirtyCharacterGroundConstraints).ArrayNum = iVar13 + 1;
      DefaultConstructItems<Chaos::FDirtyCharacterGroundConstraintData,int>
                ((pTVar5->AllocatorInstance).Data + (longlong)iVar13 * 0x118,1);
      uVar15 = (uint)uVar19;
      uVar20 = uVar12;
      if ((int)uVar15 < (this->CharacterGroundConstraintProxies_Internal).ArrayNum) {
        uVar20 = ~uVar15 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar13 = (pFVar6->DirtyCharacterGroundConstraints).ArrayNum;
      uVar14 = iVar13 - 1;
      this_04 = *(FCharacterGroundConstraintProxy **)
                 ((this->CharacterGroundConstraintProxies_Internal).AllocatorInstance.Data + uVar17)
      ;
      uVar20 = uVar12;
      if ((int)uVar14 < iVar13) {
        uVar20 = ~uVar14 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FCharacterGroundConstraintProxy::BufferPhysicsResults
                (this_04,(FDirtyCharacterGroundConstraintData *)
                         ((pTVar5->AllocatorInstance).Data +
                         (longlong)((pFVar6->DirtyCharacterGroundConstraints).ArrayNum + -1) * 0x118
                         ));
      uVar19 = (ulonglong)(uVar15 + 1);
      uVar17 = uVar17 + 8;
    } while ((int)(uVar15 + 1) < (this->CharacterGroundConstraintProxies_Internal).ArrayNum);
  }
  if ((FRewindData *)this->_padding_ != (FRewindData *)0x0) {
    FRewindData::BufferPhysicsResults((FRewindData *)this->_padding_,&pFVar6->DirtyRigidErrors);
  }
  if ((GSingleThreadedPhysics == 0) && (CVars::bSingleThreadPushData == false)) {
    Chaos::Private::FTaskDispatcherSolver::WaitTaskEndBufferResults((this->TaskDispatcher).Ptr);
  }
  TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *)&this->_padding_
             ,(double)this->_padding_);
  TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
           *)&(this->Particles).TransientDirtyMapArray);
  iVar13 = (this->Particles).TransientDirtyMapArray.ParticleArray.ArrayMax;
  (this->Particles).TransientDirtyMapArray.ParticleArray.ArrayNum = 0;
  if (iVar13 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Particles).TransientDirtyMapArray.ParticleArray.AllocatorInstance,0,
               &(this->Particles).TransientDirtyMapArray.ParticleArray.ArrayMax);
  }
  return;
}

// BufferPhysicsResultsSingleThreaded @ 14407c530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPBDRigidsSolver::BufferPhysicsResultsSingleThreaded
          (FPBDRigidsSolver *this,
          TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FGeometryCollectionPhysicsProxy_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Chaos::FClusterUnionPhysicsProxy_*,TSizedDefaultAllocator<32>_> *param_3)

{
  ulonglong uVar1;
  EPhysicsProxyType EVar2;
  int iVar3;
  TPBDRigidClusteredParticles<double,3> *this_00;
  TParticleHandleBase<double,3>_u_0 *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  EParticleType EVar7;
  longlong *plVar8;
  bool bVar9;
  EObjectStateType EVar10;
  uint uVar11;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar12;
  FGeometryCollectionPhysicsProxy *pFVar13;
  ESyncState *pEVar14;
  FRigidClusteredFlags_u_0 *pFVar15;
  TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator> *pTVar16;
  byte bVar17;
  longlong lVar18;
  int iVar19;
  TParticleHandleBase<double,3>_u_0 this_01;
  uint uVar20;
  uint *puVar21;
  char cVar22;
  TPBDRigidParticleHandleImp<double,3,0> *this_02;
  uint uVar23;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8;
  char local_1b7;
  undefined1 local_1b0 [24];
  int iStack_198;
  EParticleType EStack_194;
  int local_190;
  int local_18c;
  int local_188;
  TArray<FGeometryCollectionPhysicsProxy_*,TSizedDefaultAllocator<32>_> *local_180;
  TParticleHandleBase<double,3>_u_0 local_178;
  int iStack_170;
  int iStack_16c;
  int local_168;
  int local_164;
  FGeometryCollectionPhysicsProxy *local_160;
  FGeometryCollectionPhysicsProxy *local_158;
  TArray<Chaos::FClusterUnionPhysicsProxy_*,TSizedDefaultAllocator<32>_> *local_150;
  FGeometryCollectionPhysicsProxy *local_148;
  FGeometryCollectionPhysicsProxy *local_140;
  FGeometryCollectionPhysicsProxy *local_138;
  FGeometryCollectionPhysicsProxy *local_130;
  longlong *local_128;
  uint uStack_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  undefined4 local_ac;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  uVar20 = (this->GeometryCollectionPhysicsProxies_Internal).ArrayNum;
  local_180 = param_2;
  local_150 = param_3;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  if (param_2->ArrayMax < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar20,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
  }
  uVar20 = *(uint *)&(this->Particles).DirtyParticlesView.field_0x10;
  uVar11 = *(int *)&(this->SingleParticlePhysicsProxies_PT).field_0x8 -
           *(int *)&(this->SingleParticlePhysicsProxies_PT).field_0x34;
  lVar18 = this->_padding_;
  uVar23 = uVar20;
  if ((int)uVar11 < (int)uVar20) {
    uVar23 = uVar11;
  }
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  if (param_1->ArrayMax < (int)uVar23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar23,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
  }
  uVar23 = (this->ClusterUnionPhysicsProxies_Internal).ArrayNum;
  if ((int)uVar23 < (int)uVar20) {
    uVar20 = uVar23;
  }
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  if (param_3->ArrayMax < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar20,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
  }
  cVar22 = (char)((this->MEvolution).Ptr)->_padding_;
  local_1b7 = cVar22;
  if ((*(int *)(lVar18 + 8) != 0) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6441385585952159292>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                         ,0x9c4,"PullData->DirtyRigids.Num() == 0"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
            ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_1b0,
             (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
              *)&(this->Particles).DirtyParticlesView);
  if ((TPBDRigidParticles<double,3> *)local_1b0._16_8_ != (TPBDRigidParticles<double,3> *)0x0) {
    this_01 = (TParticleHandleBase<double,3>_u_0)local_1b0._16_8_;
    iVar19 = iStack_198;
    do {
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_1b0);
      EVar7 = EStack_194;
      if ((EStack_194 < Rigid) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6441385585952159284>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                             ,0x9cc,"false"), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar12 = TPBDRigidParticles<double,3>::Handle(this_01.PBDRigidParticles,iVar19);
      pFVar13 = (FGeometryCollectionPhysicsProxy *)
                TGeometryParticlesImp<double,3,0>::PhysicsProxy
                          (*(TGeometryParticlesImp<double,3,0> **)pTVar12,
                           *(int *)&pTVar12->field_0x8);
      if (pFVar13 != (FGeometryCollectionPhysicsProxy *)0x0) {
        EVar2 = *(EPhysicsProxyType *)&pFVar13->field_0x1c;
        if (EVar2 == GeometryCollectionType) {
LAB_14407c79f:
          this_02 = (TPBDRigidParticleHandleImp<double,3,0> *)(local_1b0 + 0x10);
          if (EVar7 < Clustered) {
            this_02 = (TPBDRigidParticleHandleImp<double,3,0> *)0x0;
          }
          if (this_02 == (TPBDRigidParticleHandleImp<double,3,0> *)0x0) {
            bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6441385585952159214>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                               ,0xa12,"false");
            if (bVar9) {
code_r0x00014407cb61:
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          else {
            this_00 = *(TPBDRigidClusteredParticles<double,3> **)this_02;
            iVar3 = *(int *)&this_02->field_0x8;
            pFVar15 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags(this_00,iVar3)->
                       field0_0x0;
            if ((pFVar15->Bits & 1) == 0) {
              if (*(EPhysicsProxyType *)&pFVar13->field_0x1c == GeometryCollectionType) {
                local_130 = pFVar13;
                TArray<FGeometryCollectionPhysicsProxy_*,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<FGeometryCollectionPhysicsProxy_*>(local_180,&local_130);
              }
              else if (*(EPhysicsProxyType *)&pFVar13->field_0x1c == SingleParticleProxy) {
                local_138 = pFVar13;
                TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<Chaos::FSingleParticlePhysicsProxy_*>
                          (param_1,(FSingleParticlePhysicsProxy **)&local_138);
              }
              else {
                bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_6441385585952159221>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                                   ,0xa0b,"false");
                if (bVar9) goto code_r0x00014407cb61;
              }
            }
            else {
              if (*(EPhysicsProxyType *)&pFVar13->field_0x1c == ClusterUnionProxy) {
                local_158 = pFVar13;
                TArray<Chaos::FClusterUnionPhysicsProxy_*,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<Chaos::FClusterUnionPhysicsProxy_*>
                          (local_150,(FClusterUnionPhysicsProxy **)&local_158);
              }
              EVar10 = TPBDRigidParticleHandleImp<double,3,0>::ObjectState(this_02);
              if ((EVar10 == Dynamic) ||
                 (*(EPhysicsProxyType *)&pFVar13->field_0x1c != ClusterUnionProxy)) {
                pTVar16 = TPBDRigidClusteredParticles<double,3>::PhysicsProxies(this_00,iVar3);
                local_7c = 0x80;
                local_a8._0_8_ = 0;
                local_a8._8_8_ = 0;
                local_88 = (uint *)0x0;
                uVar20 = 0;
                local_80 = 0;
                local_74 = 0;
                local_68 = (ForElementType<FSetElementId>)0x0;
                local_60 = 0;
                local_78 = 0xffffffff;
                TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
                ::operator=((TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
                             *)local_a8,pTVar16);
                uVar23 = local_80;
                uStack_11c = 1;
                local_108 = 0;
                uStack_10c = uVar20;
                if (local_80 != 0) {
                  puVar21 = (uint *)(local_a8 + 0x10);
                  if (local_88 != (uint *)0x0) {
                    puVar21 = local_88;
                  }
                  uVar11 = *puVar21;
                  local_108 = 0;
                  uVar20 = 0;
                  while (uVar11 == 0) {
                    lVar18 = (longlong)(int)uVar20;
                    local_108 = local_108 + 0x20;
                    uVar20 = uVar20 + 1;
                    uStack_10c = local_80;
                    if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 <
                        (int)uVar20) goto LAB_14407c8d0;
                    uVar11 = puVar21[lVar18 + 1];
                  }
                  uStack_11c = -uVar11 & uVar11;
                  uVar1 = (ulonglong)uStack_11c * 2 + 1;
                  lVar18 = 0x3f;
                  if (uVar1 != 0) {
                    for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                    }
                  }
                  uStack_10c = (local_108 - 1) + (int)lVar18;
                  local_168 = (int)lVar18;
                  if ((int)local_80 < (int)uStack_10c) {
                    uStack_10c = local_80;
                  }
                }
LAB_14407c8d0:
                local_128 = (longlong *)local_a8;
                uStack_104 = local_ac;
                uVar11 = local_80 & 0xffffffe0;
                local_118 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
                uStack_120 = uVar20;
                iStack_100 = local_a8._8_4_ - local_74;
                uStack_110 = 0xffffffff;
                local_f8 = (longlong *)local_a8;
                TStack_f0._padding_ = CONCAT44(uStack_11c,uVar20);
                iVar19 = (int)local_80 >> 5;
                bVar17 = (byte)local_80;
                TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
                TStack_f0.UnvisitedBitMask = 0xffffffff;
                TStack_f0.CurrentBitIndex = uStack_10c;
                TStack_f0.BaseBitIndex = local_108;
                TStack_f0._28_4_ = local_ac;
                uStack_d0 = CONCAT44(uStack_fc,local_a8._8_4_ - local_74);
                if (((int)local_80 < 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x7af,L""), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (uVar23 != local_80) {
                  puVar21 = (uint *)(local_a8 + 0x10);
                  if (local_88 != (uint *)0x0) {
                    puVar21 = local_88;
                  }
                  uVar20 = -1 << (bVar17 & 0x1f) & puVar21[iVar19];
                  while (uVar20 == 0) {
                    lVar18 = (longlong)iVar19;
                    uVar11 = uVar11 + 0x20;
                    iVar19 = iVar19 + 1;
                    uVar23 = local_80;
                    if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
                    goto LAB_14407c9e0;
                    uVar20 = puVar21[lVar18 + 1];
                  }
                  uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
                  lVar18 = 0x3f;
                  if (uVar1 != 0) {
                    for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                    }
                  }
                  local_164 = (int)lVar18;
                  uVar23 = local_164 + -1 + uVar11;
                  if ((int)local_80 < (int)uVar23) {
                    uVar23 = local_80;
                  }
                }
LAB_14407c9e0:
                while( true ) {
                  plVar8 = local_f8;
                  if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
                    local_1b8 = 0;
                    `TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8)
                    ;
                  }
                  if (((TStack_f0.CurrentBitIndex == uVar23) &&
                      (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))
                      ) && (plVar8 == (longlong *)local_a8)) break;
                  pFVar13 = *(FGeometryCollectionPhysicsProxy **)
                             (*plVar8 + (longlong)TStack_f0.CurrentBitIndex * 0x10);
                  if (pFVar13 != (FGeometryCollectionPhysicsProxy *)0x0) {
                    if (*(int *)&pFVar13->field_0x1c == 2) {
                      local_140 = pFVar13;
                      TArray<FGeometryCollectionPhysicsProxy_*,TSizedDefaultAllocator<32>_>::
                      AddUniqueImpl<FGeometryCollectionPhysicsProxy_*>(local_180,&local_140);
                    }
                    else if (*(int *)&pFVar13->field_0x1c == 0xb) {
                      local_148 = pFVar13;
                      TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_>::
                      AddUniqueImpl<Chaos::FSingleParticlePhysicsProxy_*>
                                (param_1,(FSingleParticlePhysicsProxy **)&local_148);
                    }
                    else {
                      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                        (&bGEnsureHasExecuted<_6441385585952159238>,false,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                                         ,0x9fa,"false");
                      if (bVar9) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                    }
                  }
                  TStack_f0.UnvisitedBitMask =
                       TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
                }
                local_60 = 0;
                if (local_68 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_68);
                }
                TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_a8);
                this_01 = (TParticleHandleBase<double,3>_u_0)local_1b0._16_8_;
                iVar19 = iStack_198;
              }
            }
          }
        }
        else if (EVar2 == SingleParticleProxy) {
          if (((cVar22 == '\0') ||
              (pEVar14 = TGeometryParticlesImp<double,3,0>::SyncState
                                   (this_01.GeometryParticles,iVar19), *pEVar14 == HardDesync)) &&
             ((SyncKinematicOnGameThread != 0 ||
              (EVar10 = TPBDRigidParticleHandleImp<double,3,0>::ObjectState
                                  ((TPBDRigidParticleHandleImp<double,3,0> *)(local_1b0 + 0x10)),
              EVar10 != Kinematic)))) {
            local_160 = pFVar13;
            TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<Chaos::FSingleParticlePhysicsProxy_*>
                      (param_1,(FSingleParticlePhysicsProxy **)&local_160);
          }
        }
        else {
          if (EVar2 == ClusterUnionProxy) goto LAB_14407c79f;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                             ,0xa29,L"");
          if (bVar9) goto code_r0x00014407cb61;
        }
      }
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_1b0);
      do {
        uVar6 = local_1b0._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_1b0._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          iVar19 = iVar19 + 1;
          iStack_198 = iVar19;
          if (local_18c <= iVar19) {
LAB_14407cb98:
            local_190 = local_190 + 1;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_1b0);
            this_01 = (TParticleHandleBase<double,3>_u_0)local_1b0._16_8_;
            iVar19 = iStack_198;
          }
        }
        else {
          iVar19 = local_188 + 1;
          local_188 = iVar19;
          if (*(int *)(local_1b0._8_8_ + 8) <= iVar19) goto LAB_14407cb98;
          if ((iVar19 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar4 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar6)->Data + (longlong)iVar19 * 8);
          this_01 = (TParticleHandleBase<double,3>_u_0)pTVar4->GeometryParticles;
          iVar19 = *(int *)(pTVar4 + 1);
          if ((TPBDRigidParticles<double,3> *)this_01.GeometryParticles ==
              (TPBDRigidParticles<double,3> *)0x0) {
            iStack_16c = (uint)iStack_16c._1_3_ << 8;
          }
          else {
            iStack_16c = CONCAT31(iStack_16c._1_3_,(this_01.GeometryParticles)->MParticleType);
          }
          _EStack_194 = iStack_16c;
          iStack_198 = iVar19;
          local_1b0._16_8_ = this_01;
          local_178 = this_01;
          iStack_170 = iVar19;
        }
        if ((TPBDRigidParticles<double,3> *)this_01.GeometryParticles ==
            (TPBDRigidParticles<double,3> *)0x0) break;
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_1b0);
        bVar9 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                          ((TGeometryParticleHandleImp<double,3,0> *)(local_1b0 + 0x10));
      } while (bVar9);
      cVar22 = local_1b7;
    } while ((TPBDRigidParticles<double,3> *)this_01.GeometryParticles !=
             (TPBDRigidParticles<double,3> *)0x0);
  }
  return;
}

// ChangeBufferMode @ 14407f3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPBDRigidsSolver::ChangeBufferMode(FPBDRigidsSolver *this,EMultiBufferMode param_1)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  FTaskGraphInterface *pFVar5;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar6;
  undefined1 auStackY_88 [32];
  TRefCountPtr<FBaseGraphTask> local_48;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_40;
  int local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_88;
  *(EMultiBufferMode *)((longlong)&this->_padding_ + 1) = param_1;
  cVar4 = (param_1 == Single) + '\x01';
  if (GSingleThreadedPhysics != 0) {
    cVar4 = '\x02';
  }
  if (cVar4 != *(char *)((longlong)&this->_padding_ + 2)) {
    if (((cVar4 == '\x02') && (this->_padding_ != 0)) && (*(char *)(this->_padding_ + 0xd0) == '\0')
       ) {
      pFVar5 = FTaskGraphInterface::Get();
      pcVar3 = *(code **)((longlong)*pFVar5 + 0x60);
      local_48.Reference = (FBaseGraphTask *)this->_padding_;
      if (local_48.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&(local_48.Reference)->field_0x30 = *(int *)&(local_48.Reference)->field_0x30 + 1;
        UNLOCK();
      }
      local_40.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_18 = 1;
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                (8,8,1,0,&local_40,1,&local_14);
      FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_40;
      if (local_40.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar6 = local_40.SecondaryData;
      }
      ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
                ((void *)FVar6,&local_48,1);
      (*pcVar3)(pFVar5,&local_40,0xff);
      FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_40;
      if (local_40.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar6 = local_40.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar6,local_18);
      if (local_40.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_40.SecondaryData);
      }
      if (local_48.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &(local_48.Reference)->field_0x30;
        iVar2 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)**(undefined8 **)local_48.Reference)(local_48.Reference,1);
        }
      }
    }
    *(char *)((longlong)&this->_padding_ + 2) = cVar4;
  }
  return;
}

// ClearCollisionEventsForProxy @ 14407f570

void __thiscall
Chaos::FPBDRigidsSolver::ClearCollisionEventsForProxy
          (FPBDRigidsSolver *this,IPhysicsProxyBase *param_1)

{
  FEventManager *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined **local_58;
  IPhysicsProxyBase *local_50;
  undefined ***local_40;
  code *local_38 [2];
  undefined1 local_28 [24];
  undefined8 local_10;
  
  pFVar1 = (this->MEventManager).Ptr;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Chaos::FPBDRigidsSolver::ClearCollisionEventsForProxy'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_40 = (undefined ***)0x0;
  local_50 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)&pFVar1->ContainerLock);
  if (((pFVar1->EventContainers).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar2 = *(longlong **)(pFVar1->EventContainers).AllocatorInstance.Data;
  if (plVar2 != (longlong *)0x0) {
    local_10 = 0;
    pcVar3 = *(code **)(*plVar2 + 0x38);
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FPBDRigidsSolver::ClearCollisionEventsForProxy'::__l2::<lambda_1>,void,Chaos::FCollisionEventData_&>
                  ::Call;
    pppuVar5 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar5 = local_40;
    }
    (*(code *)**pppuVar5)(pppuVar5,local_28);
    (*pcVar3)(plVar2,local_38);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&pFVar1->ContainerLock);
  pppuVar5 = &local_58;
  if (local_40 != (undefined ***)0x0) {
    pppuVar5 = local_40;
  }
  (*(code *)(*pppuVar5)[2])();
  return;
}

// CompleteSceneSimulation @ 14407f990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDRigidsSolver::CompleteSceneSimulation(FPBDRigidsSolver *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_BufferPhysicsResults> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  FLLMScope local_res8 [2];
  LARGE_INTEGER local_res10;
  FMemScope local_res18;
  FName local_res20;
  FStatMessage local_38;
  
  FLLMScope::FLLMScope(local_res8,Chaos,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,Chaos,true);
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_BufferPhysicsResults;
  if (StatPtr_STAT_BufferPhysicsResults ==
      (FThreadSafeStaticStat<FStat_STAT_BufferPhysicsResults>)0x0) {
    pFVar5 = ::FName::FName(&local_res20,"STAT_BufferPhysicsResults");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_BufferPhysicsResults>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BufferPhysicsResults,*pFVar5,
                       L"BufferPhysicsResults","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar8.Value;
        local_res10.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                   ,0x8d2);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar8.Value;
      local_res10.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_14407fb18;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_14407fb18:
  TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *)&this->_padding_
             ,(double)this->_padding_);
  FPBDRigidDirtyParticlesBuffer::CaptureSolverData((this->MDirtyParticlesBuffer).Ptr,this);
  BufferPhysicsResults(this);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res10);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ConditionalApplyRewind_Internal @ 144080b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDRigidsSolver::ConditionalApplyRewind_Internal(FPBDRigidsSolver *this)

{
  longlong *plVar1;
  FPBDRigidsEvolutionGBF *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TParticleHandleBase<double,3>_u_0 TVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  EObjectStateType EVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  FChaosSolversModule *this_00;
  IChaosSettingsProvider *pIVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_Chaos::FPBDRigidsSolver::ConditionalApplyRewind_Internal(void)_::_77_::FStat_ChaosRewindAndResim>
  FVar17;
  TGeometryParticleHandleImp<double,3,1> *pTVar18;
  FPBDIsland *pFVar19;
  ForAnyElementType FVar20;
  FName FVar21;
  FPushPhysicsData *pFVar22;
  uint *puVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  bool local_res18;
  int local_res20;
  FColor_u_0 local_354;
  longlong local_350;
  double local_348;
  FScriptContainerElement *local_340;
  FName local_338;
  longlong local_330;
  FName local_328;
  FName local_320;
  TArray<Chaos::FPushPhysicsData_*,TSizedDefaultAllocator<32>_> local_310;
  LARGE_INTEGER local_300;
  FPushPhysicsData *local_2f8;
  longlong local_2f0;
  LARGE_INTEGER local_2e8;
  FString local_2e0;
  undefined1 local_2d0 [48];
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  undefined1 local_1b0 [48];
  TVector<double,3> local_180;
  TVector<double,3> local_168;
  TVector<double,3> local_150;
  TVector<double,3> local_138;
  TVector<double,3> local_120;
  TVector<double,3> local_108;
  TVector<double,3> local_f0;
  TVector<double,3> local_d8;
  FName local_c0;
  FName local_b8 [2];
  FSolverTasksPTOnly local_a8;
  
  if ((char)this->_padding_ != '\0') {
    return;
  }
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (this->_padding_ == 0) {
    return;
  }
  if ((char)((this->MEvolution).Ptr)->_padding_ != '\0') {
    return;
  }
  iVar25 = *(int *)(this->_padding_ + 0x4e0) + -1;
  local_res20 = (**(code **)(*plVar1 + 0x28))(plVar1,iVar25);
  iVar24 = (iVar25 - local_res20) + 1;
  if (local_res20 < 0) {
    *(undefined4 *)(this->_padding_ + 0x4f4) = 0xffffffff;
    Chaos::Private::FPBDIslandManager::ResetParticleResimFrame
              ((FPBDIslandManager *)&((this->MEvolution).Ptr)->_padding_,-1);
    return;
  }
  this_00 = FChaosSolversModule::GetModule();
  pIVar15 = FChaosSolversModule::GetSettingsProvider(this_00);
  cVar8 = (**(code **)((longlong)*pIVar15 + 0x10))(pIVar15);
  if ((cVar8 == '\0') || (bVar9 = FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(), !bVar9)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
    if (4 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
    TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
    TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
              ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_2d0,
               (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
                *)&(this->Particles).NonDisabledDynamicView);
    TVar6 = (TParticleHandleBase<double,3>_u_0)local_2d0._16_8_;
    while ((TKinematicGeometryParticlesImp<double,3,0> *)TVar6.GeometryParticles !=
           (TKinematicGeometryParticlesImp<double,3,0> *)0x0) {
      local_2d0._16_8_ = TVar6;
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_2d0);
      EVar10 = TPBDRigidParticleHandleImp<double,3,0>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,0> *)(local_2d0 + 0x10));
      uVar27 = (uint)local_2d0._24_8_;
      if (EVar10 == Sleeping) {
        if (4 < (byte)LogChaos._0_1_) {
          TKinematicGeometryParticlesImp<double,3,0>::GetW
                    (TVar6.KinematicGeometryParticles,&local_168,uVar27);
          ::FString::PrintfImpl(&local_230,L"X=%3.3f Y=%3.3f Z=%3.3f");
          uVar14 = 0;
          if ((int)uVar27 < (int)(TVar6.GeometryParticles)->_padding_) {
            uVar14 = ~uVar27 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          ::FString::PrintfImpl(&local_240,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
          TKinematicGeometryParticlesImp<double,3,0>::GetV
                    (TVar6.KinematicGeometryParticles,&local_150,uVar27);
          ::FString::PrintfImpl(&local_250,L"X=%3.3f Y=%3.3f Z=%3.3f");
          TParticles<double,3>::GetX((TParticles<double,3> *)TVar6.GeometryParticles,uVar27);
          ::FString::PrintfImpl(&local_260,L"X=%3.3f Y=%3.3f Z=%3.3f");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
          if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_260.Data.AllocatorInstance.Data);
          }
          if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
          FVar20.Data = local_230.Data.AllocatorInstance.Data;
          if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_240.Data.AllocatorInstance.Data);
            FVar20.Data = local_230.Data.AllocatorInstance.Data;
          }
          goto LAB_1440810f5;
        }
      }
      else if (4 < (byte)LogChaos._0_1_) {
        TKinematicGeometryParticlesImp<double,3,0>::GetW
                  (TVar6.KinematicGeometryParticles,&local_d8,uVar27);
        ::FString::PrintfImpl(&local_270,L"X=%3.3f Y=%3.3f Z=%3.3f");
        uVar14 = 0;
        if ((int)uVar27 < (int)(TVar6.GeometryParticles)->_padding_) {
          uVar14 = ~uVar27 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ::FString::PrintfImpl(&local_280,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
        TKinematicGeometryParticlesImp<double,3,0>::GetV
                  (TVar6.KinematicGeometryParticles,&local_180,uVar27);
        ::FString::PrintfImpl(&local_290,L"X=%3.3f Y=%3.3f Z=%3.3f");
        TParticles<double,3>::GetX((TParticles<double,3> *)TVar6.GeometryParticles,uVar27);
        ::FString::PrintfImpl(&local_2a0,L"X=%3.3f Y=%3.3f Z=%3.3f");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
        if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
        }
        if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_290.Data.AllocatorInstance.Data);
        }
        FVar20.Data = local_270.Data.AllocatorInstance.Data;
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
          FVar20.Data = local_270.Data.AllocatorInstance.Data;
        }
LAB_1440810f5:
        if (FVar20.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar20.Data);
        }
      }
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::operator++
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_2d0);
      TVar6 = (TParticleHandleBase<double,3>_u_0)local_2d0._16_8_;
    }
  }
  if ((iVar25 < local_res20) || ((int)this->_padding_ < iVar24)) goto LAB_144081c62;
  local_348 = 0.0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if (StatPtr_ChaosRewindAndResim ==
        (FThreadSafeStaticStat<_private:_virtual_void___cdecl_Chaos::FPBDRigidsSolver::ConditionalApplyRewind_Internal(void)_::_77_::FStat_ChaosRewindAndResim>
         )0x0) {
      pFVar16 = ::FName::FName(&local_c0,"ChaosRewindAndResim");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_ChaosRewindAndResim,*pFVar16,
                 L"ChaosRewindAndResim","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS1);
  }
  FVar17 = StatPtr_ChaosRewindAndResim;
  if (StatPtr_ChaosRewindAndResim ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_Chaos::FPBDRigidsSolver::ConditionalApplyRewind_Internal(void)_::_77_::FStat_ChaosRewindAndResim>
       )0x0) {
    pFVar16 = ::FName::FName(local_b8,"ChaosRewindAndResim");
    FVar17 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_Chaos::FPBDRigidsSolver::ConditionalApplyRewind_Internal(void)_::_77_::FStat_ChaosRewindAndResim>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_ChaosRewindAndResim,*pFVar16,
                          L"ChaosRewindAndResim","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                          true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar17;
  bVar5 = false;
  bVar11 = false;
  local_320.ComparisonIndex.Value = 0;
  local_320.Number = 0;
  bVar12 = false;
  bVar7 = false;
  if ((FVar21.ComparisonIndex.Value.Value == 0) && (FVar21.Number == 0)) {
LAB_1440812b0:
    bVar5 = bVar12;
    bVar11 = bVar7;
    bVar7 = false;
    local_328 = local_320;
    FVar21 = local_320;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_354.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_354._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar5 = false;
      bVar11 = true;
      bVar12 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_338.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_338.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_338,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                   ,0x854);
        bVar5 = true;
        bVar11 = true;
        bVar12 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1440812b0;
    local_328 = FVar21;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar7 = true;
  }
  bVar12 = FRewindData::RewindToFrame((FRewindData *)this->_padding_,local_res20);
  if (bVar12) {
    puVar23 = (uint *)((longlong)&this->_padding_ + 4);
    *(undefined1 *)&((this->MEvolution).Ptr)->_padding_ = 1;
    local_2f0 = this->_padding_;
    *puVar23 = *puVar23 | 1;
    this->CurrentFrame = local_res20;
    FChaosMarshallingManager::StealHistory_Internal
              ((FChaosMarshallingManager *)&this->_padding_,&local_310,iVar24);
    bVar12 = true;
    local_res18 = true;
    QueryPerformanceCounter(&local_300);
    dVar4 = (double)local_300.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    if ((longlong)local_res20 <= (longlong)iVar25) {
      local_330 = (longlong)iVar25 - (longlong)local_res20;
      iVar24 = iVar25 - local_res20;
      lVar26 = local_330 * 8;
      local_330 = local_330 + 1;
      do {
        if (iVar24 < local_310.ArrayNum) {
          local_350 = lVar26;
          if ((bVar12 == false) && ((char)this->_padding_ == '\0')) {
            FRewindData::StepNonResimParticles((FRewindData *)this->_padding_,local_res20);
          }
          if ((PhysicsReplicationCVars::ResimulationCVars::bApplyTargetsWhileResimulating != false)
             || (bVar12 != false)) {
            FRewindData::ApplyTargets((FRewindData *)this->_padding_,local_res20,bVar12);
          }
          uVar27 = 0;
          if (iVar24 < local_310.ArrayNum) {
            uVar27 = (uint)~(iVar25 - local_res20) >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar22 = *(FPushPhysicsData **)(local_310.AllocatorInstance.Data + lVar26);
          local_2f8 = pFVar22;
          if (bVar12 != false) {
            pFVar2 = (this->MEvolution).Ptr;
            this->_padding_ = (longlong)pFVar22->StartTime;
            (**(code **)(pFVar2->_padding_ + 8))();
          }
          *(bool *)((longlong)&((this->MEvolution).Ptr)->_padding_ + 1) = bVar12;
          if (bVar9) {
            if (4 < (byte)LogChaos._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
            }
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_1b0,
                       (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
                        *)&(this->Particles).NonDisabledDynamicView);
            lVar26 = local_350;
            TVar6 = (TParticleHandleBase<double,3>_u_0)local_1b0._16_8_;
            while (local_350 = lVar26, local_1b0._16_8_ = TVar6,
                  (TPBDRigidParticles<double,3> *)TVar6.GeometryParticles !=
                  (TPBDRigidParticles<double,3> *)0x0) {
              TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                        ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_1b0);
              pFVar2 = (this->MEvolution).Ptr;
              uVar27 = (uint)local_1b0._24_8_;
              pTVar18 = (TGeometryParticleHandleImp<double,3,1> *)
                        TPBDRigidParticles<double,3>::Handle(TVar6.PBDRigidParticles,uVar27);
              pFVar19 = Chaos::Private::FPBDIslandManager::GetParticleIsland
                                  ((FPBDIslandManager *)&pFVar2->_padding_,pTVar18);
              if (pFVar19 != (FPBDIsland *)0x0) {
                EVar10 = TPBDRigidParticleHandleImp<double,3,0>::ObjectState
                                   ((TPBDRigidParticleHandleImp<double,3,0> *)(local_1b0 + 0x10));
                if (EVar10 == Sleeping) {
                  if (4 < (byte)LogChaos._0_1_) {
                    TGeometryParticlesImp<double,3,0>::UniqueIdx(TVar6.GeometryParticles,uVar27);
                    pFVar2 = (this->MEvolution).Ptr;
                    pTVar18 = (TGeometryParticleHandleImp<double,3,1> *)
                              TPBDRigidParticles<double,3>::Handle(TVar6.PBDRigidParticles,uVar27);
                    Chaos::Private::FPBDIslandManager::GetParticleIsland
                              ((FPBDIslandManager *)&pFVar2->_padding_,pTVar18);
                    TGeometryParticlesImp<double,3,0>::SyncState(TVar6.GeometryParticles,uVar27);
                    pFVar2 = (this->MEvolution).Ptr;
                    pTVar18 = (TGeometryParticleHandleImp<double,3,1> *)
                              TPBDRigidParticles<double,3>::Handle(TVar6.PBDRigidParticles,uVar27);
                    Chaos::Private::FPBDIslandManager::GetParticleIsland
                              ((FPBDIslandManager *)&pFVar2->_padding_,pTVar18);
                    TKinematicGeometryParticlesImp<double,3,0>::GetW
                              (TVar6.KinematicGeometryParticles,&local_108,uVar27);
                    ::FString::PrintfImpl(&local_2e0,L"X=%3.3f Y=%3.3f Z=%3.3f");
                    local_340 = (FScriptContainerElement *)L"";
                    if (local_2e0.Data.ArrayNum != 0) {
                      local_340 = local_2e0.Data.AllocatorInstance.Data;
                    }
                    uVar14 = 0;
                    if ((int)uVar27 < (int)(TVar6.GeometryParticles)->_padding_) {
                      uVar14 = ~uVar27 >> 0x1f;
                    }
                    if ((uVar14 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    ::FString::PrintfImpl(&local_1c0,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
                    TKinematicGeometryParticlesImp<double,3,0>::GetV
                              (TVar6.KinematicGeometryParticles,&local_f0,uVar27);
                    ::FString::PrintfImpl(&local_1d0,L"X=%3.3f Y=%3.3f Z=%3.3f");
                    TParticles<double,3>::GetX
                              ((TParticles<double,3> *)TVar6.GeometryParticles,uVar27);
                    ::FString::PrintfImpl(&local_1e0,L"X=%3.3f Y=%3.3f Z=%3.3f");
                    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
                    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
                    }
                    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
                    }
                    FVar20.Data = local_2e0.Data.AllocatorInstance.Data;
                    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
                      FVar20.Data = local_2e0.Data.AllocatorInstance.Data;
                    }
                    goto LAB_144081ab4;
                  }
                }
                else if (4 < (byte)LogChaos._0_1_) {
                  TGeometryParticlesImp<double,3,0>::UniqueIdx(TVar6.GeometryParticles,uVar27);
                  pFVar2 = (this->MEvolution).Ptr;
                  pTVar18 = (TGeometryParticleHandleImp<double,3,1> *)
                            TPBDRigidParticles<double,3>::Handle(TVar6.PBDRigidParticles,uVar27);
                  Chaos::Private::FPBDIslandManager::GetParticleIsland
                            ((FPBDIslandManager *)&pFVar2->_padding_,pTVar18);
                  TGeometryParticlesImp<double,3,0>::SyncState(TVar6.GeometryParticles,uVar27);
                  pFVar2 = (this->MEvolution).Ptr;
                  pTVar18 = (TGeometryParticleHandleImp<double,3,1> *)
                            TPBDRigidParticles<double,3>::Handle(TVar6.PBDRigidParticles,uVar27);
                  Chaos::Private::FPBDIslandManager::GetParticleIsland
                            ((FPBDIslandManager *)&pFVar2->_padding_,pTVar18);
                  TKinematicGeometryParticlesImp<double,3,0>::GetW
                            (TVar6.KinematicGeometryParticles,&local_138,uVar27);
                  ::FString::PrintfImpl(&local_1f0,L"X=%3.3f Y=%3.3f Z=%3.3f");
                  local_340 = (FScriptContainerElement *)L"";
                  if (local_1f0.Data.ArrayNum != 0) {
                    local_340 = local_1f0.Data.AllocatorInstance.Data;
                  }
                  uVar14 = 0;
                  if ((int)uVar27 < (int)(TVar6.GeometryParticles)->_padding_) {
                    uVar14 = ~uVar27 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  ::FString::PrintfImpl(&local_200,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
                  TKinematicGeometryParticlesImp<double,3,0>::GetV
                            (TVar6.KinematicGeometryParticles,&local_120,uVar27);
                  ::FString::PrintfImpl(&local_210,L"X=%3.3f Y=%3.3f Z=%3.3f");
                  TParticles<double,3>::GetX((TParticles<double,3> *)TVar6.GeometryParticles,uVar27)
                  ;
                  ::FString::PrintfImpl(&local_220,L"X=%3.3f Y=%3.3f Z=%3.3f");
                  UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
                  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_220.Data.AllocatorInstance.Data);
                  }
                  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_210.Data.AllocatorInstance.Data);
                  }
                  FVar20.Data = local_1f0.Data.AllocatorInstance.Data;
                  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_200.Data.AllocatorInstance.Data);
                    FVar20.Data = local_1f0.Data.AllocatorInstance.Data;
                  }
LAB_144081ab4:
                  if (FVar20.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FVar20.Data);
                  }
                }
              }
              TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::operator++
                        ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_1b0);
              pFVar22 = local_2f8;
              bVar12 = local_res18;
              lVar26 = local_350;
              TVar6 = (TParticleHandleBase<double,3>_u_0)local_1b0._16_8_;
            }
          }
          (**(code **)(*(longlong *)this->_padding_ + 0x30))
                    ((longlong *)this->_padding_,local_res20,bVar12);
          local_a8.ProcessPushData.Solver = (FPhysicsSolverBase *)this;
          local_a8.ProcessPushData.PushData = pFVar22;
          FPhysicsSolverAdvanceTask::FPhysicsSolverAdvanceTask
                    (&local_a8.AdvanceTask,(FPhysicsSolverBase *)this,pFVar22);
          local_a8.Solver = (FPhysicsSolverBase *)this;
          FSolverTasksPTOnly::AdvanceSolver(&local_a8);
          (**(code **)(*(longlong *)this->_padding_ + 0x38))
                    ((longlong *)this->_padding_,local_res20);
          bVar12 = false;
          local_res18 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a8.AdvanceTask.CVDContext.CurrentDataChannel.SharedReferenceCount.
                     ReferenceController);
        }
        local_res20 = local_res20 + 1;
        iVar24 = iVar24 + -1;
        lVar26 = lVar26 + -8;
        local_330 = local_330 + -1;
      } while (local_330 != 0);
      local_330 = 0;
      FVar21 = local_328;
      local_350 = lVar26;
    }
    puVar23 = (uint *)((longlong)&this->_padding_ + 4);
    this->_padding_ = local_2f0;
    Chaos::Private::FPBDIslandManager::ResetParticleResimFrame
              ((FPBDIslandManager *)&((this->MEvolution).Ptr)->_padding_,-1);
    *(undefined1 *)&((this->MEvolution).Ptr)->_padding_ = 0;
    pFVar2 = (this->MEvolution).Ptr;
    *puVar23 = *puVar23 & 0xfffffffe;
    *(undefined1 *)((longlong)&pFVar2->_padding_ + 1) = 0;
    QueryPerformanceCounter(&local_2e8);
    local_348 = local_348 +
                ((double)local_2e8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar4);
    (**(code **)(*(longlong *)this->_padding_ + 0x50))((longlong *)this->_padding_,&local_348);
    if (local_310.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.AllocatorInstance.Data);
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
LAB_144081c62:
  *(undefined4 *)(this->_padding_ + 0x4f4) = 0xffffffff;
  return;
}

// CreateMaterial @ 1440857a0

void __thiscall
Chaos::FPBDRigidsSolver::CreateMaterial
          (FPBDRigidsSolver *this,FMaterialHandle param_1,FChaosPhysicsMaterial *param_2)

{
  code *pcVar1;
  bool bVar2;
  THandle<Chaos::FChaosPhysicsMaterial,24,8> TVar3;
  undefined4 extraout_var;
  
  if (this == (FPBDRigidsSolver *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PBDRigidsSolver.h"
                       ,0x203,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
  TVar3 = THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::
          Create<Chaos::FChaosPhysicsMaterial_const_&>
                    (&this->SimMaterials,(FChaosPhysicsMaterial *)&stack0x00000010);
  if ((*(uint *)CONCAT44(extraout_var,TVar3) >> 0x18 | *(uint *)CONCAT44(extraout_var,TVar3) << 8)
      != ((uint)param_1.InnerHandle >> 0x18 | (int)param_1.InnerHandle << 8)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6441385585952158632>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                       ,0xc58,"SimMaterials.Create(InNewData) == InHandle.InnerHandle");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014408585c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
  return;
}

// CreateMaterialMask @ 144085870

void __thiscall
Chaos::FPBDRigidsSolver::CreateMaterialMask
          (FPBDRigidsSolver *this,FMaterialMaskHandle param_1,FChaosPhysicsMaterialMask *param_2)

{
  code *pcVar1;
  bool bVar2;
  THandle<Chaos::FChaosPhysicsMaterialMask,24,8> TVar3;
  undefined4 extraout_var;
  
  if (this == (FPBDRigidsSolver *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PBDRigidsSolver.h"
                       ,0x203,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
  TVar3 = THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::
          Create<Chaos::FChaosPhysicsMaterialMask_const_&>
                    (&this->SimMaterialMasks,(FChaosPhysicsMaterialMask *)&stack0x00000010);
  if ((*(uint *)CONCAT44(extraout_var,TVar3) >> 0x18 | *(uint *)CONCAT44(extraout_var,TVar3) << 8)
      != ((uint)param_1.InnerHandle >> 0x18 | (int)param_1.InnerHandle << 8)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6441385585952158614>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                       ,0xc6a,"SimMaterialMasks.Create(InNewData) == InHandle.InnerHandle");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014408592c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
  return;
}

// DebugDrawShapes @ 1440859b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPBDRigidsSolver::DebugDrawShapes
          (FPBDRigidsSolver *this,bool param_1,bool param_2,bool param_3)

{
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  undefined1 local_38 [16];
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_1) {
    local_78 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    dStack_70 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_68 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    dStack_60 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_48 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    dStack_40 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
    ;
    local_28 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    dStack_20 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
    ;
    Chaos::DebugDraw::DrawParticleShapes
              ((TRigidTransform<double,3> *)&local_78,&(this->Particles).ActiveStaticParticlesView,
               __real_3ff0000000000000,&CVars::ChaosSolverDebugDebugDrawSettings);
  }
  if (param_2) {
    local_78 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    dStack_70 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_68 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    dStack_60 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_48 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    dStack_40 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
    ;
    local_28 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    dStack_20 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
    ;
    Chaos::DebugDraw::DrawParticleShapes
              ((TRigidTransform<double,3> *)&local_78,
               &(this->Particles).ActiveKinematicParticlesView,__real_3ff0000000000000,
               &CVars::ChaosSolverDebugDebugDrawSettings);
  }
  if (param_3) {
    local_78 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    dStack_70 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_68 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    dStack_60 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_48 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    dStack_40 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
    ;
    local_28 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    dStack_20 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
    ;
    Chaos::DebugDraw::DrawParticleShapes
              ((TRigidTransform<double,3> *)&local_78,&(this->Particles).NonDisabledDynamicView,
               __real_3ff0000000000000,&CVars::ChaosSolverDebugDebugDrawSettings);
  }
  return;
}

// DestroyMaterial @ 144086440

void __thiscall
Chaos::FPBDRigidsSolver::DestroyMaterial(FPBDRigidsSolver *this,FMaterialHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this == (FPBDRigidsSolver *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PBDRigidsSolver.h"
                       ,0x203,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
  THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::Destroy(&this->SimMaterials,param_1.InnerHandle);
                    /* WARNING: Could not recover jumptable at 0x0001440864b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
  return;
}

// DestroyMaterialMask @ 1440864c0

void __thiscall
Chaos::FPBDRigidsSolver::DestroyMaterialMask(FPBDRigidsSolver *this,FMaterialMaskHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this == (FPBDRigidsSolver *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PBDRigidsSolver.h"
                       ,0x203,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
  THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::Destroy
            (&this->SimMaterialMasks,param_1.InnerHandle);
                    /* WARNING: Could not recover jumptable at 0x000144086530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
  return;
}

// DestroyPendingProxies_Internal @ 144086640

void __thiscall Chaos::FPBDRigidsSolver::DestroyPendingProxies_Internal(FPBDRigidsSolver *this)

{
  int *piVar1;
  undefined8 *puVar2;
  FPBDRigidsEvolutionGBF *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_d8;
  undefined1 local_d7 [7];
  undefined4 local_d0 [2];
  longlong local_c8;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> local_90;
  FScriptContainerElement *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  TArrayView<IPhysicsProxyBase_*,int> local_58;
  
  lVar12 = this->_padding_;
  if (*(int *)(lVar12 + 0x7c) < 0) {
    DestructItems<Chaos::FDirtyClusterUnionData,int>
              (*(FDirtyClusterUnionData **)(lVar12 + 0x70),*(int *)(lVar12 + 0x78));
    *(undefined4 *)(lVar12 + 0x78) = 0;
    if (*(int *)(lVar12 + 0x7c) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,0x10,0,(ForAnyElementType *)(lVar12 + 0x70),0,(int *)(lVar12 + 0x7c));
    }
  }
  else {
    DestructItems<Chaos::FDirtyClusterUnionData,int>
              (*(FDirtyClusterUnionData **)(lVar12 + 0x70),*(int *)(lVar12 + 0x78));
    *(undefined4 *)(lVar12 + 0x78) = 0;
  }
  uVar16 = (this->PendingDestroyClusterUnionProxy).ArrayNum - 1;
  if (-1 < (int)uVar16) {
    lVar12 = (longlong)(int)uVar16;
    lVar15 = lVar12 << 4;
    do {
      uVar7 = 0;
      if ((int)uVar16 < (this->PendingDestroyClusterUnionProxy).ArrayNum) {
        uVar7 = ~uVar16 >> 0x1f;
      }
      local_b0 = lVar12;
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar10 = (this->PendingDestroyClusterUnionProxy).AllocatorInstance.Data + lVar15;
      if ((*(int *)(pFVar10 + 8) <= this->CurrentFrame + -1) || ((char)this->_padding_ != '\0')) {
        if (*(longlong *)pFVar10 != 0) {
          iVar8 = (int)this->_padding_;
          if (0 < iVar8) {
            puVar14 = (undefined8 *)this->_padding_;
            puVar2 = puVar14 + iVar8;
            while( true ) {
              if ((int)this->_padding_ != iVar8) {
                local_res8[0] = 0;
                `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res8);
              }
              lVar12 = local_b0;
              if (puVar14 == puVar2) break;
              (**(code **)(*(longlong *)*puVar14 + 0xc0))
                        ((longlong *)*puVar14,*(undefined8 *)(*(longlong *)pFVar10 + 0x140));
              puVar14 = puVar14 + 1;
            }
          }
          pFVar3 = (this->MEvolution).Ptr;
          if (pFVar3 != (FPBDRigidsEvolutionGBF *)0x0) {
            FClusterUnionManager::DestroyClusterUnion
                      (&(pFVar3->Clustering).ClusterUnionManager,
                       *(int *)(*(longlong *)pFVar10 + 0x170));
          }
          plVar13 = *(longlong **)pFVar10;
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
        uVar7 = 0;
        if ((int)uVar16 < (this->PendingDestroyClusterUnionProxy).ArrayNum) {
          uVar7 = ~uVar16 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (this->PendingDestroyClusterUnionProxy).ArrayNum;
        pFVar10 = (this->PendingDestroyClusterUnionProxy).AllocatorInstance.Data;
        iVar9 = ~uVar16 + iVar8;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar10 + lVar15,pFVar10 + (longlong)(iVar8 - iVar9) * 0x10,(longlong)iVar9 << 4);
        }
        piVar1 = &(this->PendingDestroyClusterUnionProxy).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      lVar12 = lVar12 + -1;
      lVar15 = lVar15 + -0x10;
      uVar16 = uVar16 - 1;
      local_b0 = lVar12;
    } while (-1 < (int)uVar16);
  }
  if (0 < (int)this->_padding_) {
    uVar16 = (this->PendingDestroyPhysicsProxy).ArrayNum;
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8 = 0;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if (0 < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar16,&local_c0,0,(int *)((longlong)&local_b8 + 4));
    }
    iVar8 = (this->PendingDestroyPhysicsProxy).ArrayNum;
    pFVar10 = (this->PendingDestroyPhysicsProxy).AllocatorInstance.Data;
    pFVar11 = pFVar10 + (longlong)iVar8 * 0x20;
    while( true ) {
      if ((this->PendingDestroyPhysicsProxy).ArrayNum != iVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Chaos::FPBDRigidsSolver::FPendingDestroyInfo,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar10 == pFVar11) break;
      local_a0 = *(undefined4 *)(pFVar10 + 0x18);
      uStack_98 = *(undefined8 *)pFVar10;
      if (((local_c0.Data <= (FScriptContainerElement *)&local_a0) &&
          ((FScriptContainerElement *)&local_a0 < local_c0.Data + (longlong)local_b8._4_4_ * 0x10))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((int)local_b8 == local_b8._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_c0,(int *)((longlong)&local_b8 + 4));
        local_b8 = CONCAT44(local_b8._4_4_,iVar9);
      }
      lVar12 = (longlong)(int)local_b8;
      pFVar10 = pFVar10 + 0x20;
      local_b8 = CONCAT44(local_b8._4_4_,(int)local_b8 + 1);
      *(ulonglong *)(local_c0.Data + lVar12 * 0x10) = CONCAT44(uStack_9c,local_a0);
      *(undefined8 *)(local_c0.Data + lVar12 * 0x10 + 8) = uStack_98;
    }
    puVar14 = (undefined8 *)this->_padding_;
    iVar8 = (int)this->_padding_;
    puVar2 = puVar14 + iVar8;
    while( true ) {
      if ((int)this->_padding_ != iVar8) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (puVar14 == puVar2) break;
      (**(code **)(*(longlong *)*puVar14 + 0xb8))((longlong *)*puVar14,&local_c0);
      puVar14 = puVar14 + 1;
    }
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
  }
  uVar16 = (this->PendingDestroyPhysicsProxy).ArrayNum - 1;
  if (-1 < (int)uVar16) {
    local_c8 = (longlong)(int)uVar16;
    lVar12 = local_c8 << 5;
    do {
      uVar7 = 0;
      if ((int)uVar16 < (this->PendingDestroyPhysicsProxy).ArrayNum) {
        uVar7 = ~uVar16 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar10 = (this->PendingDestroyPhysicsProxy).AllocatorInstance.Data + lVar12;
      if ((*(int *)(pFVar10 + 8) <= this->CurrentFrame + -1) || ((char)this->_padding_ != '\0')) {
        iVar8 = (int)this->_padding_;
        if (0 < iVar8) {
          puVar14 = (undefined8 *)this->_padding_;
          puVar2 = puVar14 + iVar8;
          while( true ) {
            if ((int)this->_padding_ != iVar8) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res20);
            }
            if (puVar14 == puVar2) break;
            (**(code **)(*(longlong *)*puVar14 + 0xc0))
                      ((longlong *)*puVar14,*(undefined8 *)(*(longlong *)pFVar10 + 0x50));
            puVar14 = puVar14 + 1;
          }
        }
        local_d0[0] = *(undefined4 *)(pFVar10 + 0x18);
        pFVar3 = (this->MEvolution).Ptr;
        plVar13 = &pFVar3->_padding_;
        if ((((undefined4 *)*plVar13 <= local_d0) &&
            (local_d0 < (undefined4 *)*plVar13 + *(int *)((longlong)&pFVar3->_padding_ + 4))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (int)pFVar3->_padding_;
        piVar1 = (int *)((longlong)&pFVar3->_padding_ + 4);
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)plVar13,piVar1);
        }
        *(int *)&pFVar3->_padding_ = iVar8 + 1;
        *(undefined4 *)(*plVar13 + (longlong)iVar8 * 4) = local_d0[0];
        if (*(TGeometryParticleHandleImp<double,3,1> **)(pFVar10 + 0x10) !=
            (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          FPBDRigidsEvolutionBase::DestroyParticle
                    ((FPBDRigidsEvolutionBase *)(this->MEvolution).Ptr,
                     *(TGeometryParticleHandleImp<double,3,1> **)(pFVar10 + 0x10));
        }
        if ((*(longlong *)(*(longlong *)pFVar10 + 0x48) != 0) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6441385585952160446>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                               ,0x542,"Info.Proxy->GetHandle_LowLevel() == nullptr"), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar13 = *(longlong **)pFVar10;
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
        uVar7 = 0;
        if ((int)uVar16 < (this->PendingDestroyPhysicsProxy).ArrayNum) {
          uVar7 = ~uVar16 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (this->PendingDestroyPhysicsProxy).ArrayNum;
        pFVar10 = (this->PendingDestroyPhysicsProxy).AllocatorInstance.Data;
        iVar9 = ~uVar16 + iVar8;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar10 + lVar12,pFVar10 + (longlong)(iVar8 - iVar9) * 0x20,(longlong)iVar9 << 5);
        }
        piVar1 = &(this->PendingDestroyPhysicsProxy).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      local_c8 = local_c8 + -1;
      lVar12 = lVar12 + -0x20;
      uVar16 = uVar16 - 1;
    } while (-1 < (int)uVar16);
  }
  lVar12 = this->_padding_;
  if (*(int *)(lVar12 + 0x6c) < 0) {
    DestructItems<Chaos::FDirtyGeometryCollectionData,int>
              (*(FDirtyGeometryCollectionData **)(lVar12 + 0x60),*(int *)(lVar12 + 0x68));
    *(undefined4 *)(lVar12 + 0x68) = 0;
    if (*(int *)(lVar12 + 0x6c) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)(lVar12 + 0x60),0,(int *)(lVar12 + 0x6c));
    }
  }
  else {
    DestructItems<Chaos::FDirtyGeometryCollectionData,int>
              (*(FDirtyGeometryCollectionData **)(lVar12 + 0x60),*(int *)(lVar12 + 0x68));
    *(undefined4 *)(lVar12 + 0x68) = 0;
  }
  uVar16 = (this->PendingDestroyGeometryCollectionPhysicsProxy).ArrayNum - 1;
  local_c8 = CONCAT44(local_c8._4_4_,uVar16);
  if (-1 < (int)uVar16) {
    lVar15 = (longlong)(int)uVar16;
    lVar12 = lVar15 << 4;
    do {
      uVar7 = 0;
      if ((int)uVar16 < (this->PendingDestroyGeometryCollectionPhysicsProxy).ArrayNum) {
        uVar7 = ~uVar16 >> 0x1f;
      }
      local_b0 = lVar12;
      local_a8 = lVar15;
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar10 = (this->PendingDestroyGeometryCollectionPhysicsProxy).AllocatorInstance.Data + lVar12
      ;
      uStack_70 = 1;
      local_58._12_4_ = uStack_6c;
      local_58.ArrayNum = 1;
      local_78 = pFVar10;
      local_58.DataPtr = (IPhysicsProxyBase **)pFVar10;
      FRigidClustering::CleanupInternalClustersForProxies
                (&((this->MEvolution).Ptr)->Clustering,&local_58);
      if ((*(int *)(pFVar10 + 8) <= this->CurrentFrame + -1) || ((char)this->_padding_ != '\0')) {
        if (*(FGeometryCollectionPhysicsProxy **)pFVar10 != (FGeometryCollectionPhysicsProxy *)0x0)
        {
          if (0 < (int)this->_padding_) {
            FGeometryCollectionPhysicsProxy::GetAllPhysicsObjects
                      (*(FGeometryCollectionPhysicsProxy **)pFVar10,&local_90);
            iVar8 = local_90.ArrayNum;
            local_68 = local_90.AllocatorInstance.Data + (longlong)iVar8 * 8;
            FVar17.Data = local_90.AllocatorInstance.Data;
            while( true ) {
              pFVar10 = local_68;
              if (local_90.ArrayNum != iVar8) {
                local_d8 = 0;
                `TCheckedPointerIterator<Chaos::FPhysicsObject_*,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_d8);
              }
              if (FVar17.Data == pFVar10) break;
              puVar14 = (undefined8 *)this->_padding_;
              iVar9 = (int)this->_padding_;
              uVar4 = *(undefined8 *)FVar17.Data;
              puVar2 = puVar14 + iVar9;
              while( true ) {
                if ((int)this->_padding_ != iVar9) {
                  local_d7[0] = 0;
                  `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_d7);
                }
                if (puVar14 == puVar2) break;
                (**(code **)(*(longlong *)*puVar14 + 0xc0))((longlong *)*puVar14,uVar4);
                puVar14 = puVar14 + 1;
              }
              FVar17.Data = FVar17.Data + 8;
            }
            uVar16 = (uint)local_c8;
            pFVar10 = local_78;
            lVar12 = local_b0;
            lVar15 = local_a8;
            if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.AllocatorInstance.Data);
              pFVar10 = local_78;
              lVar12 = local_b0;
              lVar15 = local_a8;
            }
          }
          FGeometryCollectionPhysicsProxy::OnRemoveFromSolver
                    (*(FGeometryCollectionPhysicsProxy **)pFVar10,this);
          plVar13 = *(longlong **)pFVar10;
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
        uVar7 = 0;
        if ((int)uVar16 < (this->PendingDestroyGeometryCollectionPhysicsProxy).ArrayNum) {
          uVar7 = ~uVar16 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (this->PendingDestroyGeometryCollectionPhysicsProxy).ArrayNum;
        pFVar10 = (this->PendingDestroyGeometryCollectionPhysicsProxy).AllocatorInstance.Data;
        iVar9 = ~uVar16 + iVar8;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar10 + lVar12,pFVar10 + (longlong)(iVar8 - iVar9) * 0x10,(longlong)iVar9 << 4);
        }
        piVar1 = &(this->PendingDestroyGeometryCollectionPhysicsProxy).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      uVar16 = uVar16 - 1;
      lVar15 = lVar15 + -1;
      lVar12 = lVar12 + -0x10;
      local_c8 = CONCAT44(local_c8._4_4_,uVar16);
    } while (-1 < (int)uVar16);
  }
  return;
}

// EnableRewindCapture @ 14408a010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDRigidsSolver::EnableRewindCapture(FPBDRigidsSolver *this,int param_1)

{
  TArray<Chaos::FRewindData::FFrameManagerInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong *plVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  FRewindData *this_00;
  longlong lVar5;
  int iVar6;
  FRewindData *pFVar7;
  FChaosSolversModule *this_01;
  IChaosSettingsProvider *pIVar8;
  int iVar9;
  longlong local_38;
  uint local_30;
  ForAnyElementType local_28;
  int local_20 [2];
  
  plVar2 = &this->_padding_;
  pFVar7 = (FRewindData *)*plVar2;
  if (pFVar7 == (FRewindData *)0x0) {
    pFVar7 = ::operator_new(0x520);
    if (pFVar7 == (FRewindData *)0x0) {
      pFVar7 = (FRewindData *)0x0;
    }
    else {
      pFVar7 = FRewindData::FRewindData(pFVar7,this,param_1,this->CurrentFrame);
    }
    if (plVar2 == &local_38) {
      if (pFVar7 == (FRewindData *)0x0) goto LAB_14408a1b8;
      FRewindData::~FRewindData(pFVar7);
    }
    else {
      this_00 = (FRewindData *)*plVar2;
      *plVar2 = (longlong)pFVar7;
      if (this_00 == (FRewindData *)0x0) goto LAB_14408a1b8;
      FRewindData::~FRewindData(this_00);
      pFVar7 = this_00;
    }
    ::operator_delete(pFVar7,0x520);
  }
  else {
    iVar6 = this->CurrentFrame;
    pFVar7->Solver = this;
    pFVar7->CurFrame = iVar6;
    pFVar7->LatestFrame = iVar6;
    pFVar7->LatestTargetFrame = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20[0] = 0;
    local_20[1] = 0;
    iVar6 = 1;
    if (param_1 + 1 != 0) {
      iVar6 = param_1 + 1;
    }
    uVar3 = (ulonglong)(iVar6 - 1) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar9 = 1 << ((byte)lVar5 & 0x1f);
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar9,&local_28,local_20,local_20 + 1);
    memset(local_28.Data + (longlong)iVar6 * 0x18,0,(longlong)iVar9 * 0x18);
    pTVar1 = &(pFVar7->Managers).Elements;
    local_30 = local_20[0] - 1;
    (pFVar7->Managers).IndexMask = local_30;
    iVar6 = local_20[0];
    if (pTVar1 != (TArray<Chaos::FRewindData::FFrameManagerInfo,TSizedDefaultAllocator<32>_> *)
                  &local_28) {
      DestructItems<Chaos::FRewindData::FFrameManagerInfo,int>
                ((FFrameManagerInfo *)(pTVar1->AllocatorInstance).Data,
                 (pFVar7->Managers).Elements.ArrayNum);
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar1->AllocatorInstance).Data = local_28.Data;
      (pFVar7->Managers).Elements.ArrayNum = local_20[0];
      (pFVar7->Managers).Elements.ArrayMax = local_20[1];
      local_28.Data = (FScriptContainerElement *)0x0;
      local_20[0] = 0;
      local_20[1] = 0;
      iVar6 = 0;
    }
    DestructItems<Chaos::FRewindData::FFrameManagerInfo,int>
              ((FFrameManagerInfo *)local_28.Data,iVar6);
    if ((FFrameManagerInfo *)local_28.Data != (FFrameManagerInfo *)0x0) {
      FMemory::Free(local_28.Data);
    }
    FRewindData::RegisterEvolutionCallbacks(pFVar7);
  }
LAB_14408a1b8:
  if (*plVar2 != 0) {
    param_1 = *(int *)(*plVar2 + 0x10);
  }
  FChaosMarshallingManager::SetHistoryLength_Internal
            ((FChaosMarshallingManager *)&this->_padding_,param_1);
  ((this->MEvolution).Ptr)->_padding_ = *plVar2;
  if (this->_padding_ != 0) {
    *(longlong *)(this->_padding_ + 8) = *plVar2;
  }
  UpdateIsDeterministic(this);
  if (4 < (byte)LogChaos._0_1_) {
    this_01 = FChaosSolversModule::GetModule();
    pIVar8 = FChaosSolversModule::GetSettingsProvider(this_01);
    (**(code **)((longlong)*pIVar8 + 0x60))(pIVar8);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  return;
}

// EnableRewindCapture @ 14408a290

void __thiscall
Chaos::FPBDRigidsSolver::EnableRewindCapture
          (FPBDRigidsSolver *this,int param_1,bool param_2,
          TUniquePtr<Chaos::IRewindCallback,TDefaultDelete<Chaos::IRewindCallback>_> *param_3)

{
  FPhysicsSolverBase::SetRewindCallback((FPhysicsSolverBase *)this,param_3);
  *(bool *)&this->_padding_ = param_2;
  EnableRewindCapture(this,param_1);
  return;
}

// EnableRewindCapture @ 14408a2e0

void __thiscall
Chaos::FPBDRigidsSolver::EnableRewindCapture(FPBDRigidsSolver *this,int param_1,bool param_2)

{
  *(bool *)&this->_padding_ = param_2;
  EnableRewindCapture(this,param_1);
  return;
}

// EnableRewindCapture @ 14408a300

void __thiscall Chaos::FPBDRigidsSolver::EnableRewindCapture(FPBDRigidsSolver *this)

{
  FChaosSolversModule *this_00;
  IChaosSettingsProvider *pIVar1;
  int iVar2;
  float fVar3;
  
  this_00 = FChaosSolversModule::GetModule();
  pIVar1 = FChaosSolversModule::GetSettingsProvider(this_00);
  fVar3 = (float)(**(code **)((longlong)*pIVar1 + 0x60))(pIVar1);
  iVar2 = -((int)ROUND(__real_bfe0000000000000 -
                       ((double)(fVar3 * __real_3a83126f) + (double)(fVar3 * __real_3a83126f)) /
                       (double)this->_padding_) >> 1);
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  EnableRewindCapture(this,iVar2);
  return;
}

// FieldForcesUpdateCallback @ 14408b4b0

void __thiscall Chaos::FPBDRigidsSolver::FieldForcesUpdateCallback(FPBDRigidsSolver *this)

{
  FPerSolverFieldSystem::FieldForcesUpdateCallback((this->PerSolverField).Ptr,this);
  return;
}

// FieldParameterUpdateCallback @ 14408b4d0

void __thiscall
Chaos::FPBDRigidsSolver::FieldParameterUpdateCallback
          (FPBDRigidsSolver *this,FPBDPositionConstraints *param_1,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_2)

{
  FPerSolverFieldSystem::FieldParameterUpdateCallback
            ((this->PerSolverField).Ptr,this,param_1,param_2);
  return;
}

// FlipEventManagerBuffer @ 14408bdb0

void __thiscall Chaos::FPBDRigidsSolver::FlipEventManagerBuffer(FPBDRigidsSolver *this)

{
  FEventManager::FlipBuffersIfRequired((this->MEventManager).Ptr);
  return;
}

// GetCVDFrameNumber @ 14408c760

int __thiscall Chaos::FPBDRigidsSolver::GetCVDFrameNumber(FPBDRigidsSolver *this)

{
  return this->CurrentFrame;
}

// GetParticleProxy_PT @ 14408cf90

FSingleParticlePhysicsProxy * __thiscall
Chaos::FPBDRigidsSolver::GetParticleProxy_PT(FPBDRigidsSolver *this,FUniqueIdx *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FSingleParticlePhysicsProxy *pFVar4;
  undefined1 *puVar5;
  
  uVar1 = param_1->Idx;
  if ((-1 < (int)uVar1) &&
     ((int)uVar1 < *(int *)&(this->SingleParticlePhysicsProxies_PT).field_0x28)) {
    if (*(int *)&(this->SingleParticlePhysicsProxies_PT).field_0x28 <= (int)uVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FSingleParticlePhysicsProxy *)(*pcVar2)();
        return pFVar4;
      }
    }
    puVar5 = *(undefined1 **)&(this->SingleParticlePhysicsProxies_PT).field_0x20;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->SingleParticlePhysicsProxies_PT).field_0x10;
    }
    if ((*(uint *)(puVar5 + (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) != 0) {
      return *(FSingleParticlePhysicsProxy **)
              (*(longlong *)&this->SingleParticlePhysicsProxies_PT + (longlong)param_1->Idx * 8);
    }
  }
  return (FSingleParticlePhysicsProxy *)0x0;
}

// GetParticleProxy_PT @ 14408d050

FSingleParticlePhysicsProxy * __thiscall
Chaos::FPBDRigidsSolver::GetParticleProxy_PT
          (FPBDRigidsSolver *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FUniqueIdx *pFVar4;
  FSingleParticlePhysicsProxy *pFVar5;
  undefined1 *puVar6;
  
  pFVar4 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                     ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                      (int)param_1->_padding_);
  uVar1 = pFVar4->Idx;
  if ((-1 < (int)uVar1) &&
     ((int)uVar1 < *(int *)&(this->SingleParticlePhysicsProxies_PT).field_0x28)) {
    if (*(int *)&(this->SingleParticlePhysicsProxies_PT).field_0x28 <= (int)uVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FSingleParticlePhysicsProxy *)(*pcVar2)();
        return pFVar5;
      }
    }
    puVar6 = *(undefined1 **)&(this->SingleParticlePhysicsProxies_PT).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->SingleParticlePhysicsProxies_PT).field_0x10;
    }
    if ((*(uint *)(puVar6 + (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) != 0) {
      return *(FSingleParticlePhysicsProxy **)
              (*(longlong *)&this->SingleParticlePhysicsProxies_PT + (longlong)(int)uVar1 * 8);
    }
  }
  return (FSingleParticlePhysicsProxy *)0x0;
}

// GetParticleProxy_PT @ 14408d110

FSingleParticlePhysicsProxy * __thiscall
Chaos::FPBDRigidsSolver::GetParticleProxy_PT(FPBDRigidsSolver *this,FUniqueIdx *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FSingleParticlePhysicsProxy *pFVar4;
  undefined1 *puVar5;
  
  uVar1 = param_1->Idx;
  if ((-1 < (int)uVar1) &&
     ((int)uVar1 < *(int *)&(this->SingleParticlePhysicsProxies_PT).field_0x28)) {
    if (*(int *)&(this->SingleParticlePhysicsProxies_PT).field_0x28 <= (int)uVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FSingleParticlePhysicsProxy *)(*pcVar2)();
        return pFVar4;
      }
    }
    puVar5 = *(undefined1 **)&(this->SingleParticlePhysicsProxies_PT).field_0x20;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->SingleParticlePhysicsProxies_PT).field_0x10;
    }
    if ((*(uint *)(puVar5 + (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) != 0) {
      return *(FSingleParticlePhysicsProxy **)
              (*(longlong *)&this->SingleParticlePhysicsProxies_PT + (longlong)param_1->Idx * 8);
    }
  }
  return (FSingleParticlePhysicsProxy *)0x0;
}

// GetParticleProxy_PT @ 14408d1d0

FSingleParticlePhysicsProxy * __thiscall
Chaos::FPBDRigidsSolver::GetParticleProxy_PT
          (FPBDRigidsSolver *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FUniqueIdx *pFVar4;
  FSingleParticlePhysicsProxy *pFVar5;
  undefined1 *puVar6;
  
  pFVar4 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                     ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                      (int)param_1->_padding_);
  uVar1 = pFVar4->Idx;
  if ((-1 < (int)uVar1) &&
     ((int)uVar1 < *(int *)&(this->SingleParticlePhysicsProxies_PT).field_0x28)) {
    if (*(int *)&(this->SingleParticlePhysicsProxies_PT).field_0x28 <= (int)uVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FSingleParticlePhysicsProxy *)(*pcVar2)();
        return pFVar5;
      }
    }
    puVar6 = *(undefined1 **)&(this->SingleParticlePhysicsProxies_PT).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->SingleParticlePhysicsProxies_PT).field_0x10;
    }
    if ((*(uint *)(puVar6 + (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) != 0) {
      return *(FSingleParticlePhysicsProxy **)
              (*(longlong *)&this->SingleParticlePhysicsProxies_PT + (longlong)(int)uVar1 * 8);
    }
  }
  return (FSingleParticlePhysicsProxy *)0x0;
}

// GetSerializer @ 14408d680

FSolverSerializer * __thiscall Chaos::FPBDRigidsSolver::GetSerializer(FPBDRigidsSolver *this)

{
  return &this->Serializer;
}

// IsDetemerministic @ 144092cb0

bool __thiscall Chaos::FPBDRigidsSolver::IsDetemerministic(FPBDRigidsSolver *this)

{
  char cVar1;
  FChaosSolversModule *this_00;
  IChaosSettingsProvider *pIVar2;
  
  if (((this->bIsDeterministic == false) && (this->_padding_ == 0)) &&
     (CVars::ChaosSolverDeterministic < 1)) {
    this_00 = FChaosSolversModule::GetModule();
    pIVar2 = FChaosSolversModule::GetSettingsProvider(this_00);
    cVar1 = (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    if (cVar1 == '\0') {
      return false;
    }
  }
  return true;
}

// IsResimming @ 144092d00

bool __thiscall Chaos::FPBDRigidsSolver::IsResimming(FPBDRigidsSolver *this)

{
  return (bool)(char)((this->MEvolution).Ptr)->_padding_;
}

// KillSafeAsyncTasks @ 144092d20

void __thiscall Chaos::FPBDRigidsSolver::KillSafeAsyncTasks(FPBDRigidsSolver *this)

{
  FPBDRigidsEvolutionGBF *pFVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  pFVar1 = (this->MEvolution).Ptr;
  lVar2 = pFVar1->_padding_;
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0xd0) == '\0')) &&
     (puVar3 = (undefined1 *)pFVar1->_padding_, puVar3 != (undefined1 *)0x0)) {
    LOCK();
    *puVar3 = 1;
    UNLOCK();
  }
  return;
}

// NumCollisionConstraints @ 144098110

int __thiscall Chaos::FPBDRigidsSolver::NumCollisionConstraints(FPBDRigidsSolver *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (((this->MEvolution).Ptr)->CollisionConstraints).ConstraintAllocator.ActiveConstraints.
          ArrayNum;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return iVar3;
}

// NumJointConstraints @ 1440981a0

int __thiscall Chaos::FPBDRigidsSolver::NumJointConstraints(FPBDRigidsSolver *this)

{
  FPBDRigidsEvolutionGBF *pFVar1;
  int iVar2;
  int iVar3;
  
  pFVar1 = (this->MEvolution).Ptr;
  iVar2 = FPBDJointConstraints::NumConstraints(&(pFVar1->JointConstraints).NonLinearConstraints);
  iVar3 = FPBDJointConstraints::NumConstraints(&(pFVar1->JointConstraints).LinearConstraints);
  return iVar3 + iVar2;
}

// OnDebugNameChanged @ 1440981e0

void __thiscall Chaos::FPBDRigidsSolver::OnDebugNameChanged(FPBDRigidsSolver *this)

{
  FPBDRigidsEvolutionGBF *pFVar1;
  code *pcVar2;
  FName this_00;
  FString *pFVar3;
  FString local_18;
  
  pFVar1 = (this->MEvolution).Ptr;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  this_00 = FPhysicsSolverBase::GetDebugName((FPhysicsSolverBase *)this);
  pFVar3 = ::FName::ToString((FName *)this_00,&local_18);
  (*pcVar2)(pFVar1,pFVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OnEvolutionPostIntegrate @ 144098240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsSolver::OnEvolutionPostIntegrate(FPBDRigidsSolver *this,double param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  FName FVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TStatId TVar9;
  uint uVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined8 *puVar11;
  ulonglong uVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FNameEntryId FVar15;
  longlong *plVar16;
  bool bVar17;
  FColor_u_0 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 local_b8 [2];
  uint local_b0;
  FName local_a8;
  FName local_98;
  uint local_90;
  uint uStack_8c;
  undefined8 local_88;
  LARGE_INTEGER local_80;
  FStatMessage local_78;
  undefined8 *local_68;
  undefined4 *local_60;
  FColor_u_0 *local_58;
  undefined1 *local_50;
  undefined1 local_48 [16];
  
  plVar16 = (longlong *)this->_padding_;
  local_b0 = (uint)this->_padding_;
  uVar12 = (ulonglong)(int)local_b0;
  plVar2 = plVar16 + uVar12;
  plVar3 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  bVar8 = false;
  while( true ) {
    if ((int)this->_padding_ != (int)uVar12) {
      `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (plVar16 == plVar2) break;
    plVar4 = (longlong *)*plVar16;
    if ((*(ushort *)(plVar4 + 8) & 0x1000) != 0) {
      if (!bVar8) {
        (**(code **)(((this->MEvolution).Ptr)->_padding_ + 0x30))();
        bVar8 = true;
      }
      FVar15.Value = 0;
      bVar7 = false;
      bVar6 = false;
      local_a8.ComparisonIndex.Value = 0;
      local_a8.Number = 0;
      if ((*(int *)(*plVar3 + 0x9d4c) <
           `public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'::
         __l2::_thread_safe_static_guard_0__ == -1)) {
        local_res20[0] = 1;
        local_res18[0]._s_0.B = 1;
        local_b8[0] = 2;
        puVar11 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_48);
        local_88 = *puVar11;
        local_68 = &local_88;
        local_60 = local_b8;
        local_58 = local_res18;
        local_50 = local_res20;
        `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_Chaos>'::__l2::<lambda_1>::
        operator()(&local_68);
        _Init_thread_footer(&`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      TVar9.StatIdPtr =
           `public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
           ::__l2::StatId.StatIdPtr;
      if (((SUB84((`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                   ::__l2::StatId.StatIdPtr)->Name,0) == 0) &&
          (SUB84((`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                  ::__l2::StatId.StatIdPtr)->Name,4) == 0)) ||
         (FThreadStats::bPrimaryEnable == false)) {
        (**(code **)(*plVar4 + 0x78))(plVar4);
      }
      else {
        FVar5 = *(FName *)&(`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                            ::__l2::StatId.StatIdPtr)->Name;
        FVar14 = FVar5.ComparisonIndex.Value;
        uVar10 = FVar5.Number;
        if ((FVar14.Value == 0) && (uVar10 == 0)) {
          (**(code **)(*plVar4 + 0x78))(plVar4);
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_res18[0].Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_res18[0]._s_0,
                       ((`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                         ::__l2::StatId.StatIdPtr)->StatDescriptionAnsi).Ptr);
            bVar7 = false;
            bVar6 = true;
            if (-1 < CpuChannel->Enabled) {
              local_98.ComparisonIndex.Value = FVar14.Value;
              local_98.Number = uVar10;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_98,((TVar9.StatIdPtr)->StatDescriptionWide).Ptr,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                         ,0x125);
              bVar7 = true;
              bVar6 = true;
            }
          }
          bVar17 = FThreadStats::bPrimaryEnable != false;
          FVar13 = local_a8;
          if (bVar17) {
            local_a8 = FVar5;
            local_90 = FVar14.Value;
            uStack_8c = uVar10;
            FThreadStats::AddMessage(FVar5,CycleScopeStart);
            FVar15 = local_a8.ComparisonIndex.Value;
            bVar7 = false;
            FVar13 = FVar5;
          }
          (**(code **)(*plVar4 + 0x78))(plVar4);
          if (bVar6) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar7) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (((bVar17) && (FVar13 != (FName)0x0)) &&
             ((FThreadStats::bPrimaryDisableForever == false &&
              (FThreadStats::TlsSlot != 0xffffffff)))) {
            this_00 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_00 == (FThreadStats *)0x0) {
              this_01 = FThreadStatsPool::Get();
              this_00 = FThreadStatsPool::GetFromPool(this_01);
            }
            if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
              local_78.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
              local_78.NameAndInfo.Index.Value = FVar15.Value;
              QueryPerformanceCounter(&local_80);
              local_78.StatData.Pad[4] = '\0';
              local_78.StatData.Pad[5] = '\0';
              local_78.StatData.Pad[6] = '\0';
              local_78.StatData.Pad[7] = '\0';
              local_78.StatData.Pad[0] = local_80.s.LowPart._0_1_;
              local_78.StatData.Pad[1] = local_80.s.LowPart._1_1_;
              local_78.StatData.Pad[2] = local_80.s.LowPart._2_1_;
              local_78.StatData.Pad[3] = local_80.s.LowPart._3_1_;
              FThreadStats::AddStatMessage(this_00,&local_78);
              piVar1 = &this_00->ScopeCount;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FThreadStats::Flush(this_00,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(this_00,false,false);
              }
            }
          }
        }
      }
    }
    plVar16 = plVar16 + 1;
    uVar12 = (ulonglong)local_b0;
  }
  return;
}

// OnEvolutionPreIntegrate @ 1440985a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsSolver::OnEvolutionPreIntegrate(FPBDRigidsSolver *this,double param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  FName FVar5;
  bool bVar6;
  bool bVar7;
  TStatId TVar8;
  uint uVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined8 *puVar10;
  ulonglong uVar11;
  FNameEntryId FVar12;
  FNameEntryId FVar13;
  longlong *plVar14;
  bool bVar15;
  FColor_u_0 local_res8 [2];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  FName local_b8;
  FName local_a8;
  uint local_a0;
  uint uStack_9c;
  undefined8 local_98;
  LARGE_INTEGER local_90;
  FStatMessage local_88;
  undefined8 *local_78;
  undefined4 *local_70;
  FColor_u_0 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [32];
  
  plVar14 = (longlong *)this->_padding_;
  uVar3 = (uint)this->_padding_;
  uVar11 = (ulonglong)(int)uVar3;
  plVar2 = plVar14 + uVar11;
  do {
    if ((int)this->_padding_ != (int)uVar11) {
      `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar14 == plVar2) {
      PreIntegrateDebugDraw(this,param_1);
      return;
    }
    plVar4 = (longlong *)*plVar14;
    if ((*(ushort *)(plVar4 + 8) & 0x800) != 0) {
      FVar13.Value = 0;
      bVar7 = false;
      bVar6 = false;
      local_b8.ComparisonIndex.Value = 0;
      local_b8.Number = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'::
         __l2::_thread_safe_static_guard_0__ == -1)) {
        local_res18[0] = 1;
        local_res8[0]._s_0.B = 1;
        local_res20[0] = 2;
        puVar10 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_58);
        local_98 = *puVar10;
        local_78 = &local_98;
        local_70 = local_res20;
        local_68 = local_res8;
        local_60 = local_res18;
        `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_Chaos>'::__l2::<lambda_1>::
        operator()(&local_78);
        _Init_thread_footer(&`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      TVar8.StatIdPtr =
           `public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
           ::__l2::StatId.StatIdPtr;
      if (((SUB84((`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                   ::__l2::StatId.StatIdPtr)->Name,0) != 0) ||
          (SUB84((`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                  ::__l2::StatId.StatIdPtr)->Name,4) != 0)) &&
         (FThreadStats::bPrimaryEnable != false)) {
        FVar5 = *(FName *)&(`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                            ::__l2::StatId.StatIdPtr)->Name;
        FVar12 = FVar5.ComparisonIndex.Value;
        uVar9 = FVar5.Number;
        if ((FVar12.Value != 0) || (uVar9 != 0)) {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_res8[0].Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_res8[0]._s_0,
                       ((`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                         ::__l2::StatId.StatIdPtr)->StatDescriptionAnsi).Ptr);
            bVar7 = false;
            bVar6 = true;
            if (-1 < CpuChannel->Enabled) {
              local_a8.ComparisonIndex.Value = FVar12.Value;
              local_a8.Number = uVar9;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_a8,((TVar8.StatIdPtr)->StatDescriptionWide).Ptr,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                         ,0x125);
              bVar7 = true;
              bVar6 = true;
            }
          }
          bVar15 = FThreadStats::bPrimaryEnable != false;
          if (bVar15) {
            local_a0 = FVar12.Value;
            uStack_9c = uVar9;
            FThreadStats::AddMessage(FVar5,CycleScopeStart);
            bVar7 = false;
            local_b8 = FVar5;
            FVar13.Value = FVar12.Value;
          }
          (**(code **)(*plVar4 + 0x70))(plVar4);
          if (bVar6) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar7) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (((bVar15) && (local_b8 != (FName)0x0)) &&
             ((FThreadStats::bPrimaryDisableForever == false &&
              (FThreadStats::TlsSlot != 0xffffffff)))) {
            this_00 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_00 == (FThreadStats *)0x0) {
              this_01 = FThreadStatsPool::Get();
              this_00 = FThreadStatsPool::GetFromPool(this_01);
            }
            if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
              local_88.NameAndInfo.Number = local_b8.Number & 0xffff6fff | 0x6000;
              local_88.NameAndInfo.Index.Value = FVar13.Value;
              QueryPerformanceCounter(&local_90);
              local_88.StatData.Pad[4] = '\0';
              local_88.StatData.Pad[5] = '\0';
              local_88.StatData.Pad[6] = '\0';
              local_88.StatData.Pad[7] = '\0';
              local_88.StatData.Pad[0] = local_90.s.LowPart._0_1_;
              local_88.StatData.Pad[1] = local_90.s.LowPart._1_1_;
              local_88.StatData.Pad[2] = local_90.s.LowPart._2_1_;
              local_88.StatData.Pad[3] = local_90.s.LowPart._3_1_;
              FThreadStats::AddStatMessage(this_00,&local_88);
              piVar1 = &this_00->ScopeCount;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FThreadStats::Flush(this_00,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(this_00,false,false);
              }
            }
          }
          goto LAB_144098819;
        }
      }
      (**(code **)(*plVar4 + 0x70))(plVar4);
    }
LAB_144098819:
    uVar11 = (ulonglong)uVar3;
    plVar14 = plVar14 + 1;
  } while( true );
}

// PostTickDebugDraw @ 144098cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDRigidsSolver::PostTickDebugDraw(FPBDRigidsSolver *this,double param_1)

{
  FChaosDDScene *this_00;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar1;
  TParticleHandleBase<double,3>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsSolver::PostTickDebugDraw(double)const_::_2_::FStat_SolverDebugDraw>
  FVar13;
  FName this_01;
  FString *this_02;
  TGeometryParticleHandleImp<double,3,1> *pTVar14;
  FChaosDebugDrawColorsByState *pFVar15;
  FNameEntryId FVar16;
  FName FVar17;
  ulonglong uVar18;
  TParticleHandleBase<double,3>_u_0 TVar19;
  uint uVar20;
  int iVar21;
  undefined1 auStackY_7e8 [32];
  undefined1 local_788 [24];
  uint uStack_770;
  undefined4 uStack_76c;
  int local_768;
  int local_764;
  int local_760;
  FColor_u_0 local_758 [2];
  uint local_750;
  uint uStack_74c;
  FName local_748;
  FName local_740;
  TParticleHandleBase<double,3>_u_0 local_730;
  uint uStack_728;
  int iStack_724;
  FName local_720;
  FName local_718;
  FString local_710;
  undefined1 local_700 [56];
  double local_6c8;
  double dStack_6c0;
  double local_6b8;
  double dStack_6b0;
  undefined1 local_6a8 [16];
  double local_698;
  double dStack_690;
  undefined1 local_688 [16];
  double local_678;
  double dStack_670;
  double local_668;
  double dStack_660;
  double local_658;
  double dStack_650;
  undefined1 local_648 [16];
  double local_638;
  double dStack_630;
  undefined1 local_628 [16];
  double local_618;
  double dStack_610;
  double local_608;
  double dStack_600;
  double local_5f8;
  double dStack_5f0;
  undefined1 local_5e8 [16];
  double local_5d8;
  double dStack_5d0;
  undefined1 local_5c8 [16];
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  double dStack_5a0;
  double local_598;
  double dStack_590;
  undefined1 local_588 [16];
  double local_578;
  double dStack_570;
  undefined1 local_568 [16];
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  undefined1 local_528 [16];
  double local_518;
  double dStack_510;
  undefined1 local_508 [16];
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double dStack_4d0;
  undefined1 local_4c8 [16];
  double local_4b8;
  double dStack_4b0;
  undefined1 local_4a8 [16];
  double local_498;
  double dStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  undefined1 local_468 [16];
  double local_458;
  double dStack_450;
  undefined1 local_448 [16];
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  undefined1 local_408 [16];
  double local_3f8;
  double dStack_3f0;
  undefined1 local_3e8 [16];
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  undefined1 local_3a8 [16];
  double local_398;
  double dStack_390;
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  undefined1 local_268 [16];
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  undefined1 local_228 [16];
  double local_218;
  double dStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_7e8;
  uVar18 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_SolverDebugDraw =
         (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsSolver::PostTickDebugDraw(double)const_::_2_::FStat_SolverDebugDraw>
          )0x0;
    pFVar12 = ::FName::FName(&local_720,"SolverDebugDraw");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_SolverDebugDraw,*pFVar12,L"SolverDebugDraw",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_SolverDebugDraw;
  if (StatPtr_SolverDebugDraw ==
      (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsSolver::PostTickDebugDraw(double)const_::_2_::FStat_SolverDebugDraw>
       )0x0) {
    pFVar12 = ::FName::FName(&local_718,"SolverDebugDraw");
    FVar13 = (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsSolver::PostTickDebugDraw(double)const_::_2_::FStat_SolverDebugDraw>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_SolverDebugDraw,*pFVar12,
                          L"SolverDebugDraw","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true
                          ,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar4 = false;
  bVar6 = false;
  local_740.ComparisonIndex.Value = 0;
  local_740.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar20 = FVar17.Number;
  if ((FVar16.Value == 0) && (uVar20 == 0)) {
LAB_144098ed3:
    bVar5 = false;
    FVar17 = local_740;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_758[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_758[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_748.ComparisonIndex.Value = FVar16.Value;
        local_748.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_748,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                   ,0xbbb);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_144098ed3;
    local_750 = FVar16.Value;
    uStack_74c = uVar20;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  if ((char)((this->MEvolution).Ptr)->_padding_ != '\0') goto LAB_144099b66;
  this_00 = (this->CDDScene).Object;
  if (this_00 != (FChaosDDScene *)0x0) {
    bVar9 = ChaosDD::Private::FChaosDDScene::IsServer(this_00);
    if ((bVar9) && (CVars::ChaosSolverDebugDrawShowServer != 0)) {
LAB_144098f5b:
      bVar9 = true;
    }
    else {
      if (((this->CDDScene).Object == (FChaosDDScene *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar9 = ChaosDD::Private::FChaosDDScene::IsServer((this->CDDScene).Object);
      if ((!bVar9) && (CVars::ChaosSolverDebugDrawShowClient != 0)) goto LAB_144098f5b;
      bVar9 = false;
    }
    if (((this->CDDScene).Object == (FChaosDDScene *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ChaosDD::Private::FChaosDDScene::SetRenderEnabled((this->CDDScene).Object,bVar9);
  }
  this_01 = FPhysicsSolverBase::GetDebugName((FPhysicsSolverBase *)this);
  this_02 = ::FName::ToString((FName *)this_01,&local_710);
  bVar9 = ::FString::StartsWith(this_02,L"Server",6,IgnoreCase);
  if (local_710.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_710.Data.AllocatorInstance.Data);
  }
  iVar21 = CVars::ChaosSolverDebugDrawShowClient;
  if (bVar9) {
    iVar21 = CVars::ChaosSolverDebugDrawShowServer;
  }
  if (iVar21 != 0) {
    if (CVars::ChaosSolverDebugDrawShapes == 1) {
      if (bChaosDebugDraw_UseNewQueue == false) {
        if (CVars::ChaosSolverDebugDrawColorShapeByClientServer == 0) {
          pFVar15 = Chaos::DebugDraw::GetDefaultShapesColorsByState();
          CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.DynamicColor.field0_0x0 =
               (pFVar15->DynamicColor).field0_0x0;
          CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.SleepingColor.field0_0x0 =
               (pFVar15->SleepingColor).field0_0x0;
          CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.KinematicColor.field0_0x0 =
               (pFVar15->KinematicColor).field0_0x0;
          CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.StaticColor.field0_0x0 =
               (pFVar15->StaticColor).field0_0x0;
          CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.DebrisColor.field0_0x0 =
               (FColor_u_0)*(FColor_u_0 *)&(pFVar15->DebrisColor).field0_0x0._s_0;
        }
        else {
          iVar21 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8) + 0x9d4c
                           );
          if (bVar9) {
            if ((iVar21 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              Chaos::DebugDraw::FChaosDebugDrawColorsByState::FChaosDebugDrawColorsByState
                        (&SolverShapesColorsByState_Server,(FColor)0xffff0000,(FColor)0xff800000,
                         (FColor)0xffff0000,(FColor)0xffff0000,(FColor)0xffff0000);
              _Init_thread_footer(&::_TSS0);
            }
            CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.DynamicColor.field0_0x0 =
                 SolverShapesColorsByState_Server.DynamicColor.field0_0x0;
            CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.SleepingColor.field0_0x0 =
                 SolverShapesColorsByState_Server.SleepingColor.field0_0x0;
            CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.KinematicColor.field0_0x0
                 = SolverShapesColorsByState_Server.KinematicColor.field0_0x0;
            CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.StaticColor.field0_0x0 =
                 SolverShapesColorsByState_Server.StaticColor.field0_0x0;
            CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.DebrisColor.field0_0x0 =
                 SolverShapesColorsByState_Server.DebrisColor.field0_0x0;
          }
          else {
            if ((iVar21 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              Chaos::DebugDraw::FChaosDebugDrawColorsByState::FChaosDebugDrawColorsByState
                        (&SolverShapesColorsByState_Client,(FColor)0xff0000ff,(FColor)0xff000080,
                         (FColor)0xff0000ff,(FColor)0xff0000ff,(FColor)0xff0000ff);
              _Init_thread_footer(&::_TSS0);
            }
            CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.DynamicColor.field0_0x0 =
                 SolverShapesColorsByState_Client.DynamicColor.field0_0x0;
            CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.SleepingColor.field0_0x0 =
                 SolverShapesColorsByState_Client.SleepingColor.field0_0x0;
            CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.KinematicColor.field0_0x0
                 = SolverShapesColorsByState_Client.KinematicColor.field0_0x0;
            CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.StaticColor.field0_0x0 =
                 SolverShapesColorsByState_Client.StaticColor.field0_0x0;
            CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.DebrisColor.field0_0x0 =
                 SolverShapesColorsByState_Client.DebrisColor.field0_0x0;
          }
        }
        DebugDrawShapes(this,CVars::ChaosSolverDrawShapesShowStatic != 0,
                        CVars::ChaosSolverDrawShapesShowKinematic != 0,
                        CVars::ChaosSolverDrawShapesShowDynamic != 0);
      }
      else {
        TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
        TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
                  ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_700,
                   (TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                    *)&(this->Particles).NonDisabledView);
        while ((TGeometryParticlesImp<double,3,0> *)local_700._16_8_ !=
               (TGeometryParticlesImp<double,3,0> *)0x0) {
          TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                    ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_700)
          ;
          pTVar14 = TGeometryParticleHandleImp<double,3,0>::Handle
                              ((TGeometryParticleHandleImp<double,3,0> *)(local_700 + 0x10));
          FChaosDDParticle::DrawShapes(pTVar14);
          TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::operator++
                    ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_700)
          ;
        }
      }
    }
    fVar7 = __real_3f800000;
    if (CVars::ChaosSolverDebugDrawCollisions == 1) {
      local_6c8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_6c0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_6b8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_6b0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_698 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_690 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_6a8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_6a8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_6a8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_678 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dStack_670 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_688._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_688._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_688._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      Chaos::DebugDraw::DrawCollisions
                ((TRigidTransform<double,3> *)&local_6c8,
                 &(((this->MEvolution).Ptr)->CollisionConstraints).ConstraintAllocator,
                 __real_3f800000,&CVars::ChaosSolverDebugDebugDrawSettings);
    }
    if (CVars::ChaosSolverDebugDrawMass == 1) {
      local_668 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_660 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_658 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_650 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_638 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_630 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_648._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_648._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_648._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_618 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dStack_610 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_628._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_628._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_628._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      Chaos::DebugDraw::DrawParticleMass
                ((TRigidTransform<double,3> *)&local_668,
                 &(this->Particles).ActiveKinematicParticlesView,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
      local_608 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_600 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_5f8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_5f0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_5d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_5d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_5e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_5e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_5e8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_5b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dStack_5b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_5c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_5c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_5c8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      Chaos::DebugDraw::DrawParticleMass
                ((TRigidTransform<double,3> *)&local_608,&(this->Particles).NonDisabledDynamicView,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
    }
    if (CVars::ChaosSolverDebugDrawDensity == 1) {
      local_5a8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_5a0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_598 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_590 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_578 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_570 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_588._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_588._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_588._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_558 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dStack_550 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_568._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_568._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_568._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      Chaos::DebugDraw::DrawParticleDensity
                ((TRigidTransform<double,3> *)&local_5a8,
                 &(this->Particles).ActiveKinematicParticlesView,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
      local_548 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_540 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_538 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_530 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_518 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_510 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_528._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_528._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_528._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_4f8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dStack_4f0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_508._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_508._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_508._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      Chaos::DebugDraw::DrawParticleDensity
                ((TRigidTransform<double,3> *)&local_548,&(this->Particles).NonDisabledDynamicView,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
    }
    if ((CVars::ChaosSolverDebugDrawBVHs == 1) &&
       (TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
        TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
                  ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_788,
                   (TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                    *)&(this->Particles).NonDisabledView),
       (TGeometryParticlesImp<double,3,0> *)local_788._16_8_ !=
       (TGeometryParticlesImp<double,3,0> *)0x0)) {
      TVar19 = (TParticleHandleBase<double,3>_u_0)local_788._16_8_;
      uVar20 = uStack_770;
      do {
        TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_788);
        uVar11 = 0;
        if ((int)uVar20 < *(int *)&((TVar19.GeometryParticles)->MGeometryParticleHandle).field_0x10)
        {
          uVar11 = ~uVar20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_4e8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        dStack_4e0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_4d8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        dStack_4d0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_4b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_4b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_4c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_4c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_4c8._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_498 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_490 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_4a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_4a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_4a8._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        Chaos::DebugDraw::DrawParticleBVH
                  ((TRigidTransform<double,3> *)&local_4e8,
                   *(TGeometryParticleHandleImp<double,3,1> **)
                    ((TVar19.KinematicGeometryParticles)->_padding_ + (longlong)(int)uVar20 * 8),
                   &FColor::Silver,&CVars::ChaosSolverDebugDebugDrawSettings);
        TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_788);
        do {
          uVar8 = local_788._8_8_;
          if ((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
              )local_788._8_8_ ==
              (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
              )0x0) {
            uVar20 = uVar20 + 1;
            uStack_770 = uVar20;
            if (local_764 <= (int)uVar20) {
LAB_144099537:
              local_768 = local_768 + 1;
              TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
                        ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)
                         local_788);
              TVar19 = (TParticleHandleBase<double,3>_u_0)local_788._16_8_;
              uVar20 = uStack_770;
            }
          }
          else {
            iVar21 = local_760 + 1;
            local_760 = iVar21;
            if (*(int *)(local_788._8_8_ + 8) <= iVar21) goto LAB_144099537;
            if ((iVar21 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pTVar2 = *(TParticleHandleBase<double,3>_u_0 **)
                      (((ForAnyElementType *)uVar8)->Data + (longlong)iVar21 * 8);
            TVar19 = (TParticleHandleBase<double,3>_u_0)pTVar2->KinematicGeometryParticles;
            uVar20 = *(uint *)(pTVar2 + 1);
            if (TVar19.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
              iStack_724 = (uint)iStack_724._1_3_ << 8;
            }
            else {
              iStack_724 = CONCAT31(iStack_724._1_3_,(TVar19.GeometryParticles)->MParticleType);
            }
            uStack_76c = iStack_724;
            uStack_770 = uVar20;
            local_788._16_8_ = TVar19;
            local_730 = TVar19;
            uStack_728 = uVar20;
          }
          if (TVar19.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0)
          goto LAB_14409957a;
          TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                    ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_788)
          ;
          bVar9 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                            ((TGeometryParticleHandleImp<double,3,0> *)(local_788 + 0x10));
        } while (bVar9);
      } while (TVar19.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0);
    }
LAB_14409957a:
    if (CVars::ChaosSolverDebugDrawBounds == 1) {
      local_488 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_480 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_478 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_470 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_458 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_450 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_468._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_468._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_468._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_438 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dStack_430 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_448._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_448._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_448._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      Chaos::DebugDraw::DrawParticleBounds
                ((TRigidTransform<double,3> *)&local_488,
                 &(this->Particles).ActiveStaticParticlesView,param_1,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
      local_428 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_420 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_418 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_410 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_3f8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_3f0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_408._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_408._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_408._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_3d8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dStack_3d0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_3e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_3e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_3e8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      Chaos::DebugDraw::DrawParticleBounds
                ((TRigidTransform<double,3> *)&local_428,
                 &(this->Particles).ActiveKinematicParticlesView,param_1,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
      local_3c8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_3c0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_3b8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_3b0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_398 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_390 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_3a8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_3a8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_3a8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_378 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dStack_370 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_388._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_388._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_388._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      Chaos::DebugDraw::DrawParticleBounds
                ((TRigidTransform<double,3> *)&local_3c8,&(this->Particles).NonDisabledDynamicView,
                 param_1,&CVars::ChaosSolverDebugDebugDrawSettings);
    }
    if (CVars::ChaosSolverDrawTransforms == 1) {
      local_368 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_360 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_358 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_350 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_338 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_330 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_348._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_348._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_348._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_318 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dStack_310 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_328._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_328._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_328._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      Chaos::DebugDraw::DrawParticleTransforms
                ((TRigidTransform<double,3> *)&local_368,&(this->Particles).AllParticlesView,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
    }
    if (CVars::ChaosSolverDrawIslands == 1) {
      local_308 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_300 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_2f8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_2f0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_2d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_2d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_2e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_2e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_2e8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_2b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dStack_2b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_2c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_2c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_2c8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      Chaos::DebugDraw::DrawConstraintGraph
                ((TRigidTransform<double,3> *)&local_308,
                 (FPBDIslandManager *)&((this->MEvolution).Ptr)->_padding_,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
    }
    if (CVars::ChaosSolverDebugDrawIslandSleepState == 1) {
      Chaos::Private::FPBDIslandManager::DebugDrawSleepState
                ((FPBDIslandManager *)&((this->MEvolution).Ptr)->_padding_,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
    }
    if (CVars::ChaosSolverDrawClusterConstraints == 1) {
      Chaos::DebugDraw::DrawConnectionGraph
                (&((this->MEvolution).Ptr)->Clustering,&CVars::ChaosSolverDebugDebugDrawSettings);
    }
    if (CVars::ChaosSolverDebugDrawCollidingShapes == 1) {
      local_2a8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_2a0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_298 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_290 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_278 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_270 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_288._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_288._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_288._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_258 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dStack_250 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_268._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_268._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_268._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      Chaos::DebugDraw::DrawCollidingShapes
                ((TRigidTransform<double,3> *)&local_2a8,
                 &((this->MEvolution).Ptr)->CollisionConstraints,fVar7,0.0,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
    }
    if (CVars::ChaosSolverDrawJoints == 1) {
      local_248 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_240 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_238 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_230 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_218 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_210 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_228._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_228._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_228._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_1f8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dStack_1f0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_208._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_208._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_208._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      Chaos::DebugDraw::DrawJointConstraints
                ((TRigidTransform<double,3> *)&local_248,
                 &(((this->MEvolution).Ptr)->JointConstraints).LinearConstraints,fVar7,
                 &CVars::ChaosSolverDrawJointFeatures,&CVars::ChaosSolverDebugDebugDrawSettings);
      local_1e8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_1e0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_1d8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_1d0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_1b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_1b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_1c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_1c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1c8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_198 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dStack_190 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_1a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_1a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1a8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      Chaos::DebugDraw::DrawJointConstraints
                ((TRigidTransform<double,3> *)&local_1e8,
                 &(((this->MEvolution).Ptr)->JointConstraints).NonLinearConstraints,fVar7,
                 &CVars::ChaosSolverDrawJointFeatures,&CVars::ChaosSolverDebugDebugDrawSettings);
    }
    if (CVars::ChaosSolverDrawCharacterGroundConstraints == 1) {
      local_188 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_180 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_178 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_170 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_158 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_150 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_168._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_168._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_168._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_138 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dStack_130 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_148._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_148._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_148._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      Chaos::DebugDraw::DrawCharacterGroundConstraints
                ((TRigidTransform<double,3> *)&local_188,
                 &((this->MEvolution).Ptr)->CharacterGroundConstraints,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
    }
    if ((CVars::ChaosSolverDebugDrawSpatialAccelerationStructure != 0) &&
       (pIVar1 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
                 ((this->MEvolution).Ptr)->_padding_,
       pIVar1 != (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0)) {
      Chaos::DebugDraw::DrawSpatialAccelerationStructure
                (pIVar1,&CVars::ChaosSolverDebugDebugDrawSettings);
    }
    if (CVars::ChaosSolverDebugDrawCollidingShapes == 1) {
      local_128 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_120 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_118 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_110 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_f8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_f0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_108._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_108._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_108._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_d8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dStack_d0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_e8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      Chaos::DebugDraw::DrawCollidingShapes
                ((TRigidTransform<double,3> *)&local_128,
                 &((this->MEvolution).Ptr)->CollisionConstraints,fVar7,0.0,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
    }
    if (CVars::ChaosSolverDebugDrawSuspensionConstraints == 1) {
      local_c8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_c0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_b8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_b0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_98 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_90 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_a8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_a8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_a8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_78 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dStack_70 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_88._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_88._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      Chaos::DebugDraw::DrawSuspensionConstraints
                ((TRigidTransform<double,3> *)&local_c8,
                 &((this->MEvolution).Ptr)->SuspensionConstraints,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
    }
  }
LAB_144099b66:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  return;
}

// PreIntegrateDebugDraw @ 144099c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsSolver::PreIntegrateDebugDraw(FPBDRigidsSolver *this,double param_1)

{
  TParticleHandleBase<double,3>_u_0 *pTVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsSolver::PreIntegrateDebugDraw(double)const_::_2_::FStat_SolverDebugDraw>
  FVar10;
  FChaosDebugDrawColorsByState *pFVar11;
  TParticleHandleBase<double,3>_u_0 TVar12;
  TParticleHandleBase<double,3>_u_0 TVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStackY_1a8 [32];
  undefined1 local_148 [24];
  uint uStack_130;
  undefined4 uStack_12c;
  int local_128;
  int local_124;
  int local_120;
  undefined1 local_118 [24];
  uint uStack_100;
  undefined4 uStack_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  FColor_u_0 local_e8 [2];
  TParticleHandleBase<double,3>_u_0 local_e0;
  uint uStack_d8;
  int iStack_d4;
  FName local_d0;
  TParticleHandleBase<double,3>_u_0 local_c8;
  TParticleHandleBase<double,3>_u_0 local_b8;
  uint uStack_b0;
  int iStack_ac;
  FName local_a8;
  FName local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_SolverDebugDraw ==
        (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsSolver::PreIntegrateDebugDraw(double)const_::_2_::FStat_SolverDebugDraw>
         )0x0) {
      pFVar9 = ::FName::FName(&local_a8,"SolverDebugDraw");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_SolverDebugDraw,*pFVar9,L"SolverDebugDraw",
                 "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                 MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_SolverDebugDraw;
  if (StatPtr_SolverDebugDraw ==
      (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsSolver::PreIntegrateDebugDraw(double)const_::_2_::FStat_SolverDebugDraw>
       )0x0) {
    pFVar9 = ::FName::FName(&local_a0,"SolverDebugDraw");
    FVar10 = (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsSolver::PreIntegrateDebugDraw(double)const_::_2_::FStat_SolverDebugDraw>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_SolverDebugDraw,*pFVar9,
                          L"SolverDebugDraw","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true
                          ,ST_int64,true,false,MCR_Invalid);
  }
  TVar12 = *(TParticleHandleBase<double,3>_u_0 *)FVar10;
  bVar3 = false;
  bVar5 = false;
  local_c8.GeometryParticles = (TGeometryParticlesImp<double,3,0> *)0x0;
  if ((TVar12._0_4_ != 0) || (TVar12._4_4_ != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.ComparisonIndex.Value = TVar12._0_4_;
        local_d0.Number = TVar12._4_4_;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                   ,0xb7d);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e0 = TVar12;
      FThreadStats::AddMessage((FName)TVar12.SerializableGeometryParticles.Ptr,CycleScopeStart);
      bVar4 = true;
      goto LAB_144099e0a;
    }
  }
  bVar4 = false;
  TVar12 = local_c8;
LAB_144099e0a:
  if (CVars::ChaosSolverDebugDrawPreIntegrationShapes == 1) {
    if (bChaosDebugDraw_UseNewQueue == false) {
      pFVar11 = Chaos::DebugDraw::GetDefaultShapesColorsPreIntegrate();
      CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.DynamicColor.field0_0x0 =
           (pFVar11->DynamicColor).field0_0x0;
      CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.SleepingColor.field0_0x0 =
           (pFVar11->SleepingColor).field0_0x0;
      CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.KinematicColor.field0_0x0 =
           (pFVar11->KinematicColor).field0_0x0;
      CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.StaticColor.field0_0x0 =
           (pFVar11->StaticColor).field0_0x0;
      CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.DebrisColor.field0_0x0 =
           (FColor_u_0)*(FColor_u_0 *)&(pFVar11->DebrisColor).field0_0x0._s_0;
      DebugDrawShapes(this,false,CVars::ChaosSolverDrawShapesShowKinematic != 0,
                      CVars::ChaosSolverDrawShapesShowDynamic != 0);
    }
    else {
      TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
      TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                ((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *)
                 local_148,
                 (TArray<Chaos::TSOAView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                  *)&(this->Particles).ActiveKinematicParticlesView);
      if ((FName)local_148._16_8_ != (FName)0x0) {
        TVar13 = (TParticleHandleBase<double,3>_u_0)local_148._16_8_;
        uVar14 = uStack_130;
        do {
          TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
          RangedForValidation((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                               *)local_148);
          uVar8 = 0;
          if ((int)uVar14 <
              *(int *)&((TVar13.GeometryParticles)->MGeometryParticleHandle).field_0x10) {
            uVar8 = ~uVar14 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FChaosDDParticle::DrawShapes
                    (*(TGeometryParticleHandleImp<double,3,1> **)
                      ((TVar13.KinematicGeometryParticles)->_padding_ + (longlong)(int)uVar14 * 8),
                     &FColor::Black);
          TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
          RangedForValidation((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                               *)local_148);
          do {
            uVar6 = local_148._8_8_;
            if ((TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                 *)local_148._8_8_ ==
                (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                 *)0x0) {
              uVar14 = uVar14 + 1;
              uStack_130 = uVar14;
              if (local_124 <= (int)uVar14) {
LAB_144099ef7:
                local_128 = local_128 + 1;
                TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
                SeekNonEmptySOA((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                                 *)local_148);
                TVar13 = (TParticleHandleBase<double,3>_u_0)local_148._16_8_;
                uVar14 = uStack_130;
              }
            }
            else {
              iVar15 = local_120 + 1;
              local_120 = iVar15;
              if (*(int *)(local_148._8_8_ + 8) <= iVar15) goto LAB_144099ef7;
              if ((iVar15 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pTVar1 = *(TParticleHandleBase<double,3>_u_0 **)
                        (((ForAnyElementType *)uVar6)->Data + (longlong)iVar15 * 8);
              TVar13 = (TParticleHandleBase<double,3>_u_0)pTVar1->KinematicGeometryParticles;
              uVar14 = *(uint *)(pTVar1 + 1);
              if ((FName)TVar13.GeometryParticles == (FName)0x0) {
                iStack_d4 = (uint)iStack_d4._1_3_ << 8;
              }
              else {
                iStack_d4 = CONCAT31(iStack_d4._1_3_,(TVar13.GeometryParticles)->MParticleType);
              }
              uStack_12c = iStack_d4;
              uStack_130 = uVar14;
              local_148._16_8_ = TVar13;
              local_e0 = TVar13;
              uStack_d8 = uVar14;
            }
            if ((FName)TVar13.GeometryParticles == (FName)0x0) goto LAB_144099f33;
            TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
            RangedForValidation((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                                 *)local_148);
            bVar7 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                              ((TGeometryParticleHandleImp<double,3,0> *)(local_148 + 0x10));
          } while (bVar7);
        } while ((FName)TVar13.GeometryParticles != (FName)0x0);
      }
LAB_144099f33:
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_118,
                 (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
                  *)&(this->Particles).NonDisabledDynamicView);
      if ((TGeometryParticlesImp<double,3,0> *)local_118._16_8_ !=
          (TGeometryParticlesImp<double,3,0> *)0x0) {
        TVar13 = (TParticleHandleBase<double,3>_u_0)local_118._16_8_;
        uVar14 = uStack_100;
        do {
          TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                    ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_118);
          uVar8 = 0;
          if ((int)uVar14 <
              *(int *)&((TVar13.GeometryParticles)->MGeometryParticleHandle).field_0x10) {
            uVar8 = ~uVar14 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FChaosDDParticle::DrawShapes
                    (*(TGeometryParticleHandleImp<double,3,1> **)
                      ((TVar13.KinematicGeometryParticles)->_padding_ + (longlong)(int)uVar14 * 8),
                     &FColor::Black);
          TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                    ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_118);
          do {
            uVar6 = local_118._8_8_;
            if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                 *)local_118._8_8_ ==
                (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                 *)0x0) {
              uVar14 = uVar14 + 1;
              uStack_100 = uVar14;
              if (local_f4 <= (int)uVar14) {
LAB_144099fe9:
                local_f8 = local_f8 + 1;
                TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                          ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_118
                          );
                TVar13 = (TParticleHandleBase<double,3>_u_0)local_118._16_8_;
                uVar14 = uStack_100;
              }
            }
            else {
              iVar15 = local_f0 + 1;
              local_f0 = iVar15;
              if (*(int *)(local_118._8_8_ + 8) <= iVar15) goto LAB_144099fe9;
              if ((iVar15 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pTVar1 = *(TParticleHandleBase<double,3>_u_0 **)
                        (((ForAnyElementType *)uVar6)->Data + (longlong)iVar15 * 8);
              TVar13 = (TParticleHandleBase<double,3>_u_0)pTVar1->KinematicGeometryParticles;
              uVar14 = *(uint *)(pTVar1 + 1);
              if (TVar13.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
                iStack_ac = (uint)iStack_ac._1_3_ << 8;
              }
              else {
                iStack_ac = CONCAT31(iStack_ac._1_3_,(TVar13.GeometryParticles)->MParticleType);
              }
              uStack_fc = iStack_ac;
              uStack_100 = uVar14;
              local_118._16_8_ = TVar13;
              local_b8 = TVar13;
              uStack_b0 = uVar14;
            }
            if (TVar13.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0)
            goto LAB_14409a19f;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_118);
            bVar7 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                              ((TGeometryParticleHandleImp<double,3,0> *)(local_118 + 0x10));
          } while (bVar7);
        } while (TVar13.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0);
      }
    }
  }
LAB_14409a19f:
  if (CVars::ChaosSolverDebugDrawPreIntegrationCollisions == 1) {
    local_98 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    dStack_90 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_88 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    dStack_80 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_68 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    dStack_60 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
    ;
    local_48 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    dStack_40 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
    ;
    Chaos::DebugDraw::DrawCollisions
              ((TRigidTransform<double,3> *)&local_98,
               &(((this->MEvolution).Ptr)->CollisionConstraints).ConstraintAllocator,__real_3f800000
               ,&CVars::ChaosSolverDebugDebugDrawSettings);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage((FName)TVar12.SerializableGeometryParticles.Ptr,CycleScopeEnd);
  }
  return;
}

// PreSolveDebugDraw @ 14409a320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDRigidsSolver::PreSolveDebugDraw(FPBDRigidsSolver *this,double param_1)

{
  TParticleHandleBase<double,3>_u_0 *pTVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsSolver::PreSolveDebugDraw(double)const_::_2_::FStat_SolverDebugDraw>
  FVar10;
  FChaosDebugDrawColorsByState *pFVar11;
  TParticleHandleBase<double,3>_u_0 TVar12;
  TParticleHandleBase<double,3>_u_0 TVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStackY_1a8 [32];
  undefined1 local_148 [24];
  uint uStack_130;
  undefined4 uStack_12c;
  int local_128;
  int local_124;
  int local_120;
  undefined1 local_118 [24];
  uint uStack_100;
  undefined4 uStack_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  FColor_u_0 local_e8 [2];
  TParticleHandleBase<double,3>_u_0 local_e0;
  uint uStack_d8;
  int iStack_d4;
  FName local_d0;
  TParticleHandleBase<double,3>_u_0 local_c8;
  TParticleHandleBase<double,3>_u_0 local_b8;
  uint uStack_b0;
  int iStack_ac;
  FName local_a8;
  FName local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_SolverDebugDraw ==
        (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsSolver::PreSolveDebugDraw(double)const_::_2_::FStat_SolverDebugDraw>
         )0x0) {
      pFVar9 = ::FName::FName(&local_a8,"SolverDebugDraw");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_SolverDebugDraw,*pFVar9,L"SolverDebugDraw",
                 "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                 MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_SolverDebugDraw;
  if (StatPtr_SolverDebugDraw ==
      (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsSolver::PreSolveDebugDraw(double)const_::_2_::FStat_SolverDebugDraw>
       )0x0) {
    pFVar9 = ::FName::FName(&local_a0,"SolverDebugDraw");
    FVar10 = (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsSolver::PreSolveDebugDraw(double)const_::_2_::FStat_SolverDebugDraw>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_SolverDebugDraw,*pFVar9,
                          L"SolverDebugDraw","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true
                          ,ST_int64,true,false,MCR_Invalid);
  }
  TVar12 = *(TParticleHandleBase<double,3>_u_0 *)FVar10;
  bVar3 = false;
  bVar5 = false;
  local_c8.GeometryParticles = (TGeometryParticlesImp<double,3,0> *)0x0;
  if ((TVar12._0_4_ != 0) || (TVar12._4_4_ != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.ComparisonIndex.Value = TVar12._0_4_;
        local_d0.Number = TVar12._4_4_;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                   ,0xb9c);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e0 = TVar12;
      FThreadStats::AddMessage((FName)TVar12.SerializableGeometryParticles.Ptr,CycleScopeStart);
      bVar4 = true;
      goto LAB_14409a49a;
    }
  }
  bVar4 = false;
  TVar12 = local_c8;
LAB_14409a49a:
  if (CVars::ChaosSolverDebugDrawPostIntegrationShapes == 1) {
    if (bChaosDebugDraw_UseNewQueue == false) {
      pFVar11 = Chaos::DebugDraw::GetDefaultShapesColorsPostIntegrate();
      CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.DynamicColor.field0_0x0 =
           (pFVar11->DynamicColor).field0_0x0;
      CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.SleepingColor.field0_0x0 =
           (pFVar11->SleepingColor).field0_0x0;
      CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.KinematicColor.field0_0x0 =
           (pFVar11->KinematicColor).field0_0x0;
      CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.StaticColor.field0_0x0 =
           (pFVar11->StaticColor).field0_0x0;
      CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.DebrisColor.field0_0x0 =
           (FColor_u_0)*(FColor_u_0 *)&(pFVar11->DebrisColor).field0_0x0._s_0;
      DebugDrawShapes(this,CVars::ChaosSolverDrawShapesShowStatic != 0,
                      CVars::ChaosSolverDrawShapesShowKinematic != 0,
                      CVars::ChaosSolverDrawShapesShowDynamic != 0);
    }
    else {
      TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
      TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                ((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *)
                 local_148,
                 (TArray<Chaos::TSOAView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                  *)&(this->Particles).ActiveKinematicParticlesView);
      if ((FName)local_148._16_8_ != (FName)0x0) {
        TVar13 = (TParticleHandleBase<double,3>_u_0)local_148._16_8_;
        uVar14 = uStack_130;
        do {
          TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
          RangedForValidation((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                               *)local_148);
          uVar8 = 0;
          if ((int)uVar14 <
              *(int *)&((TVar13.GeometryParticles)->MGeometryParticleHandle).field_0x10) {
            uVar8 = ~uVar14 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FChaosDDParticle::DrawShapes
                    (*(TGeometryParticleHandleImp<double,3,1> **)
                      ((TVar13.KinematicGeometryParticles)->_padding_ + (longlong)(int)uVar14 * 8),
                     &FColor::Blue);
          TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
          RangedForValidation((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                               *)local_148);
          do {
            uVar6 = local_148._8_8_;
            if ((TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                 *)local_148._8_8_ ==
                (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                 *)0x0) {
              uVar14 = uVar14 + 1;
              uStack_130 = uVar14;
              if (local_124 <= (int)uVar14) {
LAB_14409a587:
                local_128 = local_128 + 1;
                TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
                SeekNonEmptySOA((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                                 *)local_148);
                TVar13 = (TParticleHandleBase<double,3>_u_0)local_148._16_8_;
                uVar14 = uStack_130;
              }
            }
            else {
              iVar15 = local_120 + 1;
              local_120 = iVar15;
              if (*(int *)(local_148._8_8_ + 8) <= iVar15) goto LAB_14409a587;
              if ((iVar15 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pTVar1 = *(TParticleHandleBase<double,3>_u_0 **)
                        (((ForAnyElementType *)uVar6)->Data + (longlong)iVar15 * 8);
              TVar13 = (TParticleHandleBase<double,3>_u_0)pTVar1->KinematicGeometryParticles;
              uVar14 = *(uint *)(pTVar1 + 1);
              if ((FName)TVar13.GeometryParticles == (FName)0x0) {
                iStack_d4 = (uint)iStack_d4._1_3_ << 8;
              }
              else {
                iStack_d4 = CONCAT31(iStack_d4._1_3_,(TVar13.GeometryParticles)->MParticleType);
              }
              uStack_12c = iStack_d4;
              uStack_130 = uVar14;
              local_148._16_8_ = TVar13;
              local_e0 = TVar13;
              uStack_d8 = uVar14;
            }
            if ((FName)TVar13.GeometryParticles == (FName)0x0) goto LAB_14409a5c3;
            TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
            RangedForValidation((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                                 *)local_148);
            bVar7 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                              ((TGeometryParticleHandleImp<double,3,0> *)(local_148 + 0x10));
          } while (bVar7);
        } while ((FName)TVar13.GeometryParticles != (FName)0x0);
      }
LAB_14409a5c3:
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_118,
                 (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
                  *)&(this->Particles).NonDisabledDynamicView);
      if ((TGeometryParticlesImp<double,3,0> *)local_118._16_8_ !=
          (TGeometryParticlesImp<double,3,0> *)0x0) {
        TVar13 = (TParticleHandleBase<double,3>_u_0)local_118._16_8_;
        uVar14 = uStack_100;
        do {
          TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                    ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_118);
          uVar8 = 0;
          if ((int)uVar14 <
              *(int *)&((TVar13.GeometryParticles)->MGeometryParticleHandle).field_0x10) {
            uVar8 = ~uVar14 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FChaosDDParticle::DrawShapes
                    (*(TGeometryParticleHandleImp<double,3,1> **)
                      ((TVar13.KinematicGeometryParticles)->_padding_ + (longlong)(int)uVar14 * 8),
                     &FColor::Yellow);
          TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                    ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_118);
          do {
            uVar6 = local_118._8_8_;
            if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                 *)local_118._8_8_ ==
                (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                 *)0x0) {
              uVar14 = uVar14 + 1;
              uStack_100 = uVar14;
              if (local_f4 <= (int)uVar14) {
LAB_14409a679:
                local_f8 = local_f8 + 1;
                TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                          ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_118
                          );
                TVar13 = (TParticleHandleBase<double,3>_u_0)local_118._16_8_;
                uVar14 = uStack_100;
              }
            }
            else {
              iVar15 = local_f0 + 1;
              local_f0 = iVar15;
              if (*(int *)(local_118._8_8_ + 8) <= iVar15) goto LAB_14409a679;
              if ((iVar15 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pTVar1 = *(TParticleHandleBase<double,3>_u_0 **)
                        (((ForAnyElementType *)uVar6)->Data + (longlong)iVar15 * 8);
              TVar13 = (TParticleHandleBase<double,3>_u_0)pTVar1->KinematicGeometryParticles;
              uVar14 = *(uint *)(pTVar1 + 1);
              if (TVar13.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
                iStack_ac = (uint)iStack_ac._1_3_ << 8;
              }
              else {
                iStack_ac = CONCAT31(iStack_ac._1_3_,(TVar13.GeometryParticles)->MParticleType);
              }
              uStack_fc = iStack_ac;
              uStack_100 = uVar14;
              local_118._16_8_ = TVar13;
              local_b8 = TVar13;
              uStack_b0 = uVar14;
            }
            if (TVar13.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0)
            goto LAB_14409a837;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_118);
            bVar7 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                              ((TGeometryParticleHandleImp<double,3,0> *)(local_118 + 0x10));
          } while (bVar7);
        } while (TVar13.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0);
      }
    }
  }
LAB_14409a837:
  if (CVars::ChaosSolverDebugDrawPostIntegrationCollisions == 1) {
    local_98 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    dStack_90 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_88 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    dStack_80 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_68 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    dStack_60 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
    ;
    local_48 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    dStack_40 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
    ;
    Chaos::DebugDraw::DrawCollisions
              ((TRigidTransform<double,3> *)&local_98,
               &(((this->MEvolution).Ptr)->CollisionConstraints).ConstraintAllocator,__real_3f800000
               ,&CVars::ChaosSolverDebugDebugDrawSettings);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage((FName)TVar12.SerializableGeometryParticles.Ptr,CycleScopeEnd);
  }
  return;
}

// PrepareAdvanceBy @ 14409a9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDRigidsSolver::PrepareAdvanceBy(FPBDRigidsSolver *this,double param_1)

{
  ApplyCVars(this);
  if (5 < (byte)LogPBDRigidsSolver._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPBDRigidsSolver);
  }
  this->_padding_ = (longlong)param_1;
  TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *)&this->_padding_
             ,param_1);
  StartingSceneSimulation(this);
  return;
}

// ProcessPushedData_Internal @ 14409aa40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsSolver::ProcessPushedData_Internal
          (FPBDRigidsSolver *this,FPushPhysicsData *param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  TArray<Chaos::FSimCallbackCommandObject_*,TSizedDefaultAllocator<32>_> *pTVar5;
  void *_Dst;
  ushort uVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_Chaos::FPBDRigidsSolver::ProcessPushedData_Internal(Chaos::FPushPhysicsData_&)_::_2_::FStat_ChaosPushData>
  FVar18;
  FName FVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_a8;
  undefined1 local_a0;
  EParticleHistoryPhase local_9f [7];
  FName local_98;
  undefined1 local_90 [8];
  longlong local_88;
  longlong local_80;
  FColor_u_0 local_78 [2];
  FName local_70;
  FName local_68;
  FName local_58;
  FName local_50 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_ChaosPushData ==
        (FThreadSafeStaticStat<_private:_virtual_void___cdecl_Chaos::FPBDRigidsSolver::ProcessPushedData_Internal(Chaos::FPushPhysicsData_&)_::_2_::FStat_ChaosPushData>
         )0x0) {
      pFVar17 = ::FName::FName(&local_58,"ChaosPushData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_ChaosPushData,*pFVar17,L"ChaosPushData",
                 "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                 MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar18 = StatPtr_ChaosPushData;
  if (StatPtr_ChaosPushData ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_Chaos::FPBDRigidsSolver::ProcessPushedData_Internal(Chaos::FPushPhysicsData_&)_::_2_::FStat_ChaosPushData>
       )0x0) {
    pFVar17 = ::FName::FName(local_50,"ChaosPushData");
    FVar18 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_Chaos::FPBDRigidsSolver::ProcessPushedData_Internal(Chaos::FPushPhysicsData_&)_::_2_::FStat_ChaosPushData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_ChaosPushData,*pFVar17,
                          L"ChaosPushData","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                          ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar18;
  bVar10 = false;
  bVar9 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  bVar12 = false;
  bVar11 = false;
  if ((FVar19.ComparisonIndex.Value.Value != 0) || (FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_78[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_78[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_70.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_70.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_70,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                   ,0x757);
        bVar10 = true;
        bVar9 = true;
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_98 = FVar19;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar11 = true;
      goto LAB_14409abbe;
    }
  }
  bVar10 = bVar12;
  bVar9 = bVar11;
  bVar11 = false;
  local_98 = local_68;
LAB_14409abbe:
  if ((param_1->InternalStep != this->CurrentFrame) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6441385585952159912>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                          ,0x758,"PushData.InternalStep == CurrentFrame"), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this->_padding_ = (longlong)param_1;
  plVar7 = &this->_padding_;
  iVar16 = (int)this->_padding_;
  uVar22 = (param_1->SimCallbackObjectsToAdd).ArrayNum + iVar16;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (*(int *)((longlong)&this->_padding_ + 4) < (int)uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar22,(ForAnyElementType *)plVar7,iVar16,piVar1);
  }
  pFVar21 = (param_1->SimCallbackObjectsToAdd).AllocatorInstance.Data;
  iVar16 = (param_1->SimCallbackObjectsToAdd).ArrayNum;
  pFVar20 = pFVar21 + (longlong)iVar16 * 8;
  while( true ) {
    if ((param_1->SimCallbackObjectsToAdd).ArrayNum != iVar16) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    FVar19 = local_98;
    if (pFVar21 == pFVar20) break;
    local_a8 = *(longlong *)pFVar21;
    uVar6 = *(ushort *)(local_a8 + 0x40);
    if (((((uVar6 & 1) != 0) || ((uVar6 & 0x2000) != 0)) || ((uVar6 & 0x4000) != 0)) ||
       (((uVar6 & 0x800) != 0 || ((uVar6 & 0x1000) != 0)))) {
      if (((longlong *)*plVar7 <= &local_a8) &&
         ((&local_a8 < (longlong *)*plVar7 + *piVar1 &&
          (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar12)))) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = (int)this->_padding_;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)plVar7,piVar1);
      }
      *(int *)&this->_padding_ = iVar14 + 1;
      *(longlong *)(*plVar7 + (longlong)iVar14 * 8) = local_a8;
    }
    if ((*(byte *)(local_a8 + 0x40) & 2) != 0) {
      plVar4 = &this->_padding_;
      if ((((longlong *)*plVar4 <= &local_a8) &&
          (&local_a8 < (longlong *)*plVar4 + *(int *)((longlong)&this->_padding_ + 4))) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = (int)this->_padding_;
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar14 == *piVar2) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)plVar4,piVar2);
      }
      *(int *)&this->_padding_ = iVar14 + 1;
      *(longlong *)(*plVar4 + (longlong)iVar14 * 8) = local_a8;
    }
    if ((*(byte *)(local_a8 + 0x40) & 4) != 0) {
      plVar4 = &this->_padding_;
      if ((((longlong *)*plVar4 <= &local_a8) &&
          (&local_a8 < (longlong *)*plVar4 + *(int *)((longlong)&this->_padding_ + 4))) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = (int)this->_padding_;
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar14 == *piVar2) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)plVar4,piVar2);
      }
      *(int *)&this->_padding_ = iVar14 + 1;
      *(longlong *)(*plVar4 + (longlong)iVar14 * 8) = local_a8;
    }
    if ((*(byte *)(local_a8 + 0x40) & 0x20) != 0) {
      plVar4 = &this->_padding_;
      if ((((longlong *)*plVar4 <= &local_a8) &&
          (&local_a8 < (longlong *)*plVar4 + *(int *)((longlong)&this->_padding_ + 4))) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = (int)this->_padding_;
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar14 == *piVar2) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)plVar4,piVar2);
      }
      *(int *)&this->_padding_ = iVar14 + 1;
      *(longlong *)(*plVar4 + (longlong)iVar14 * 8) = local_a8;
    }
    if ((*(byte *)(local_a8 + 0x40) & 8) != 0) {
      plVar4 = &this->_padding_;
      if ((((longlong *)*plVar4 <= &local_a8) &&
          (&local_a8 < (longlong *)*plVar4 + *(int *)((longlong)&this->_padding_ + 4))) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = (int)this->_padding_;
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar14 == *piVar2) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)plVar4,piVar2);
      }
      *(int *)&this->_padding_ = iVar14 + 1;
      *(longlong *)(*plVar4 + (longlong)iVar14 * 8) = local_a8;
    }
    if ((*(byte *)(local_a8 + 0x40) & 0x40) != 0) {
      plVar4 = &this->_padding_;
      if ((((longlong *)*plVar4 <= &local_a8) &&
          (&local_a8 < (longlong *)*plVar4 + *(int *)((longlong)&this->_padding_ + 4))) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = (int)this->_padding_;
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar14 == *piVar2) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)plVar4,piVar2);
      }
      *(int *)&this->_padding_ = iVar14 + 1;
      *(longlong *)(*plVar4 + (longlong)iVar14 * 8) = local_a8;
    }
    if ((*(byte *)(local_a8 + 0x40) & 0x80) != 0) {
      plVar4 = &this->_padding_;
      if ((((longlong *)*plVar4 <= &local_a8) &&
          (&local_a8 < (longlong *)*plVar4 + *(int *)((longlong)&this->_padding_ + 4))) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = (int)this->_padding_;
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar14 == *piVar2) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)plVar4,piVar2);
      }
      *(int *)&this->_padding_ = iVar14 + 1;
      *(longlong *)(*plVar4 + (longlong)iVar14 * 8) = local_a8;
    }
    if (((*(ushort *)(local_a8 + 0x40) & 0x200) != 0) &&
       ((longlong *)this->_padding_ != (longlong *)0x0)) {
      (**(code **)(*(longlong *)this->_padding_ + 0x40))();
    }
    if ((*(ushort *)(local_a8 + 0x40) & 0x400) != 0) {
      plVar4 = &this->_padding_;
      if ((((longlong *)*plVar4 <= &local_a8) &&
          (&local_a8 < (longlong *)*plVar4 + *(int *)((longlong)&this->_padding_ + 4))) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = (int)this->_padding_;
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar14 == *piVar2) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)plVar4,piVar2);
      }
      *(int *)&this->_padding_ = iVar14 + 1;
      *(longlong *)(*plVar4 + (longlong)iVar14 * 8) = local_a8;
    }
    pFVar21 = pFVar21 + 8;
  }
  iVar16 = (param_1->SimCallbackInputs).ArrayNum;
  pFVar20 = (param_1->SimCallbackInputs).AllocatorInstance.Data;
  pFVar21 = pFVar20 + (longlong)iVar16 * 0x10;
  while( true ) {
    if ((param_1->SimCallbackInputs).ArrayNum != iVar16) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<Chaos::FSimCallbackInputAndObject,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar20 == pFVar21) break;
    lVar23 = *(longlong *)pFVar20;
    pFVar3 = pFVar20 + 8;
    pFVar20 = pFVar20 + 0x10;
    *(longlong *)(lVar23 + 0x28) = *(longlong *)pFVar3;
  }
  pFVar21 = (param_1->SimCallbackObjectsToRemove).AllocatorInstance.Data;
  iVar16 = (param_1->SimCallbackObjectsToRemove).ArrayNum;
  pFVar20 = pFVar21 + (longlong)iVar16 * 8;
  while( true ) {
    if ((param_1->SimCallbackObjectsToRemove).ArrayNum != iVar16) {
      local_a0 = 0;
      `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_a0);
    }
    if (pFVar21 == pFVar20) break;
    lVar23 = *(longlong *)pFVar21;
    *(undefined1 *)(lVar23 + 8) = 1;
    if (((*(ushort *)(lVar23 + 0x40) & 0x200) != 0) &&
       ((longlong *)this->_padding_ != (longlong *)0x0)) {
      (**(code **)(*(longlong *)this->_padding_ + 0x48))();
    }
    pFVar21 = pFVar21 + 8;
  }
  uVar22 = (int)this->_padding_ - 1;
  if (-1 < (int)uVar22) {
    lVar24 = (longlong)(int)uVar22;
    lVar23 = lVar24 * 8;
    do {
      uVar15 = 0;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar15 = ~uVar22 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(char *)(*(longlong *)(lVar23 + this->_padding_) + 8) != '\0') {
        uVar15 = 0;
        if ((int)uVar22 < (int)this->_padding_) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar16 = (int)this->_padding_;
        iVar14 = ~uVar22 + iVar16;
        if (1 < iVar14) {
          iVar14 = 1;
        }
        if (iVar14 != 0) {
          memmove((void *)(this->_padding_ + lVar24 * 8),
                  (void *)(this->_padding_ + (longlong)(iVar16 - iVar14) * 8),(longlong)iVar14 << 3)
          ;
        }
        *(int *)&this->_padding_ = (int)this->_padding_ + -1;
      }
      lVar24 = lVar24 + -1;
      lVar23 = lVar23 + -8;
      uVar22 = uVar22 - 1;
      FVar19 = local_98;
    } while (-1 < (int)uVar22);
  }
  uVar22 = (int)this->_padding_ - 1;
  if (-1 < (int)uVar22) {
    lVar24 = (longlong)(int)uVar22;
    lVar23 = lVar24 * 8;
    do {
      uVar15 = 0;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar15 = ~uVar22 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(char *)(*(longlong *)(lVar23 + this->_padding_) + 8) != '\0') {
        uVar15 = 0;
        if ((int)uVar22 < (int)this->_padding_) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar16 = (int)this->_padding_;
        iVar14 = ~uVar22 + iVar16;
        if (1 < iVar14) {
          iVar14 = 1;
        }
        if (iVar14 != 0) {
          memmove((void *)(this->_padding_ + lVar24 * 8),
                  (void *)(this->_padding_ + (longlong)(iVar16 - iVar14) * 8),(longlong)iVar14 << 3)
          ;
        }
        *(int *)&this->_padding_ = (int)this->_padding_ + -1;
      }
      lVar24 = lVar24 + -1;
      lVar23 = lVar23 + -8;
      uVar22 = uVar22 - 1;
      FVar19 = local_98;
    } while (-1 < (int)uVar22);
  }
  uVar22 = (int)this->_padding_ - 1;
  if (-1 < (int)uVar22) {
    lVar24 = (longlong)(int)uVar22;
    lVar23 = lVar24 * 8;
    do {
      uVar15 = 0;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar15 = ~uVar22 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(char *)(*(longlong *)(lVar23 + this->_padding_) + 8) != '\0') {
        uVar15 = 0;
        if ((int)uVar22 < (int)this->_padding_) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar16 = (int)this->_padding_;
        iVar14 = ~uVar22 + iVar16;
        if (1 < iVar14) {
          iVar14 = 1;
        }
        if (iVar14 != 0) {
          memmove((void *)(this->_padding_ + lVar24 * 8),
                  (void *)(this->_padding_ + (longlong)(iVar16 - iVar14) * 8),(longlong)iVar14 << 3)
          ;
        }
        *(int *)&this->_padding_ = (int)this->_padding_ + -1;
      }
      lVar24 = lVar24 + -1;
      lVar23 = lVar23 + -8;
      uVar22 = uVar22 - 1;
      FVar19 = local_98;
    } while (-1 < (int)uVar22);
  }
  uVar22 = (int)this->_padding_ - 1;
  if (-1 < (int)uVar22) {
    lVar24 = (longlong)(int)uVar22;
    lVar23 = lVar24 * 8;
    do {
      uVar15 = 0;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar15 = ~uVar22 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(char *)(*(longlong *)(lVar23 + this->_padding_) + 8) != '\0') {
        uVar15 = 0;
        if ((int)uVar22 < (int)this->_padding_) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar16 = (int)this->_padding_;
        iVar14 = ~uVar22 + iVar16;
        if (1 < iVar14) {
          iVar14 = 1;
        }
        if (iVar14 != 0) {
          memmove((void *)(this->_padding_ + lVar24 * 8),
                  (void *)(this->_padding_ + (longlong)(iVar16 - iVar14) * 8),(longlong)iVar14 << 3)
          ;
        }
        *(int *)&this->_padding_ = (int)this->_padding_ + -1;
      }
      lVar24 = lVar24 + -1;
      lVar23 = lVar23 + -8;
      uVar22 = uVar22 - 1;
      FVar19 = local_98;
    } while (-1 < (int)uVar22);
  }
  uVar22 = (int)this->_padding_ - 1;
  if (-1 < (int)uVar22) {
    lVar24 = (longlong)(int)uVar22;
    lVar23 = lVar24 * 8;
    do {
      uVar15 = 0;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar15 = ~uVar22 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(char *)(*(longlong *)(lVar23 + this->_padding_) + 8) != '\0') {
        uVar15 = 0;
        if ((int)uVar22 < (int)this->_padding_) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar16 = (int)this->_padding_;
        iVar14 = ~uVar22 + iVar16;
        if (1 < iVar14) {
          iVar14 = 1;
        }
        if (iVar14 != 0) {
          memmove((void *)(this->_padding_ + lVar24 * 8),
                  (void *)(this->_padding_ + (longlong)(iVar16 - iVar14) * 8),(longlong)iVar14 << 3)
          ;
        }
        *(int *)&this->_padding_ = (int)this->_padding_ + -1;
      }
      lVar24 = lVar24 + -1;
      lVar23 = lVar23 + -8;
      uVar22 = uVar22 - 1;
      FVar19 = local_98;
    } while (-1 < (int)uVar22);
  }
  uVar22 = (int)this->_padding_ - 1;
  if (-1 < (int)uVar22) {
    lVar24 = (longlong)(int)uVar22;
    lVar23 = lVar24 * 8;
    do {
      uVar15 = 0;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar15 = ~uVar22 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(char *)(*(longlong *)(this->_padding_ + lVar23) + 8) != '\0') {
        uVar15 = 0;
        if ((int)uVar22 < (int)this->_padding_) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar16 = (int)this->_padding_;
        iVar14 = ~uVar22 + iVar16;
        if (1 < iVar14) {
          iVar14 = 1;
        }
        if (iVar14 != 0) {
          memmove((void *)(this->_padding_ + lVar24 * 8),
                  (void *)(this->_padding_ + (longlong)(iVar16 - iVar14) * 8),(longlong)iVar14 << 3)
          ;
        }
        *(int *)&this->_padding_ = (int)this->_padding_ + -1;
      }
      lVar24 = lVar24 + -1;
      lVar23 = lVar23 + -8;
      uVar22 = uVar22 - 1;
      FVar19 = local_98;
    } while (-1 < (int)uVar22);
  }
  uVar22 = (int)this->_padding_ - 1;
  if (-1 < (int)uVar22) {
    lVar24 = (longlong)(int)uVar22;
    lVar23 = lVar24 * 8;
    do {
      uVar15 = 0;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar15 = ~uVar22 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(char *)(*(longlong *)(this->_padding_ + lVar23) + 8) != '\0') {
        uVar15 = 0;
        if ((int)uVar22 < (int)this->_padding_) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar16 = (int)this->_padding_;
        iVar14 = ~uVar22 + iVar16;
        if (1 < iVar14) {
          iVar14 = 1;
        }
        if (iVar14 != 0) {
          memmove((void *)(this->_padding_ + lVar24 * 8),
                  (void *)(this->_padding_ + (longlong)(iVar16 - iVar14) * 8),(longlong)iVar14 << 3)
          ;
        }
        *(int *)&this->_padding_ = (int)this->_padding_ + -1;
      }
      lVar24 = lVar24 + -1;
      lVar23 = lVar23 + -8;
      uVar22 = uVar22 - 1;
      FVar19 = local_98;
    } while (-1 < (int)uVar22);
  }
  uVar22 = (int)this->_padding_ - 1;
  if (-1 < (int)uVar22) {
    lVar24 = (longlong)(int)uVar22;
    lVar23 = lVar24 * 8;
    do {
      uVar15 = 0;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar15 = ~uVar22 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(char *)(*(longlong *)(lVar23 + this->_padding_) + 8) != '\0') {
        uVar15 = 0;
        if ((int)uVar22 < (int)this->_padding_) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar16 = (int)this->_padding_;
        iVar14 = ~uVar22 + iVar16;
        if (1 < iVar14) {
          iVar14 = 1;
        }
        if (iVar14 != 0) {
          memmove((void *)(this->_padding_ + lVar24 * 8),
                  (void *)(this->_padding_ + (longlong)(iVar16 - iVar14) * 8),(longlong)iVar14 << 3)
          ;
        }
        *(int *)&this->_padding_ = (int)this->_padding_ + -1;
      }
      lVar24 = lVar24 + -1;
      lVar23 = lVar23 + -8;
      uVar22 = uVar22 - 1;
      FVar19 = local_98;
    } while (-1 < (int)uVar22);
  }
  if ((FRewindData *)this->_padding_ != (FRewindData *)0x0) {
    local_9f[0] = PrePushData;
    FRewindData::CacheCurrentDirtyData((FRewindData *)this->_padding_,local_9f);
  }
  ProcessSinglePushedData_Internal(this,param_1);
  cVar13 = (**(code **)(this->_padding_ + 0x20))(this);
  if ((cVar13 == '\0') && (uVar22 = (int)this->_padding_ - 1, -1 < (int)uVar22)) {
    lVar24 = (longlong)(int)uVar22;
    lVar23 = lVar24 * 8;
    do {
      uVar15 = 0;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar15 = ~uVar22 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_88 = *(longlong *)(lVar23 + this->_padding_);
      if (*(int *)(local_88 + 0xb4) <= this->CurrentFrame) {
        pTVar5 = &param_1->SimCommands;
        pFVar20 = (pTVar5->AllocatorInstance).Data;
        if (((pFVar20 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 <
             pFVar20 + (longlong)(param_1->SimCommands).ArrayMax * 8)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar16 = (param_1->SimCommands).ArrayNum;
        piVar1 = &(param_1->SimCommands).ArrayMax;
        if (iVar16 == *piVar1) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar5->AllocatorInstance,piVar1);
        }
        pFVar20 = (pTVar5->AllocatorInstance).Data;
        (param_1->SimCommands).ArrayNum = iVar16 + 1;
        memmove(pFVar20 + 8,pFVar20,(longlong)iVar16 << 3);
        *(longlong *)(pTVar5->AllocatorInstance).Data = local_88;
        uVar15 = 0;
        if ((int)uVar22 < (int)this->_padding_) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        _Dst = (void *)(this->_padding_ + lVar24 * 8);
        iVar16 = ~uVar22 + (int)this->_padding_;
        if (iVar16 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar16 << 3);
        }
        *(int *)&this->_padding_ = (int)this->_padding_ + -1;
      }
      lVar24 = lVar24 + -1;
      lVar23 = lVar23 + -8;
      uVar22 = uVar22 - 1;
    } while (-1 < (int)uVar22);
  }
  pFVar21 = (param_1->SimCommands).AllocatorInstance.Data;
  iVar16 = (param_1->SimCommands).ArrayNum;
  pFVar20 = pFVar21 + (longlong)iVar16 * 8;
  do {
    while( true ) {
      if ((param_1->SimCommands).ArrayNum != iVar16) {
        local_9f[1] = 0;
        `TCheckedPointerIterator<Chaos::FSimCallbackCommandObject_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_9f + 1);
      }
      if (pFVar21 == pFVar20) {
        pFVar21 = (param_1->SimCallbackObjectsToAdd).AllocatorInstance.Data;
        iVar16 = (param_1->SimCallbackObjectsToAdd).ArrayNum;
        pFVar20 = pFVar21 + (longlong)iVar16 * 8;
        while( true ) {
          if ((param_1->SimCallbackObjectsToAdd).ArrayNum != iVar16) {
            `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_90);
          }
          if (pFVar21 == pFVar20) break;
          (**(code **)(**(longlong **)pFVar21 + 0x60))();
          pFVar21 = pFVar21 + 8;
        }
        plVar7 = (longlong *)this->_padding_;
        if ((plVar7 != (longlong *)0x0) && ((char)this->_padding_ == '\0')) {
          (**(code **)(*plVar7 + 8))(plVar7,this->CurrentFrame,&param_1->SimCallbackInputs);
        }
        if (bVar9) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar10) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar11) {
          FThreadStats::AddMessage(FVar19,CycleScopeEnd);
        }
        return;
      }
      lVar23 = *(longlong *)pFVar21;
      if (lVar23 != 0) break;
LAB_14409bee5:
      pFVar21 = pFVar21 + 8;
    }
    cVar13 = (**(code **)(this->_padding_ + 0x20))(this);
    iVar14 = *(int *)(lVar23 + 0xb4);
    if (cVar13 == '\0') {
      bVar12 = iVar14 <= this->CurrentFrame;
    }
    else {
      bVar12 = iVar14 == this->CurrentFrame;
    }
    lVar23 = *(longlong *)pFVar21;
    if (!bVar12) {
      cVar13 = (**(code **)(this->_padding_ + 0x20))(this);
      if ((cVar13 == '\0') && (this->CurrentFrame < *(int *)(lVar23 + 0xb4))) {
        local_80 = *(longlong *)pFVar21;
        plVar7 = &this->_padding_;
        if (((longlong *)*plVar7 <= &local_80) &&
           ((&local_80 < (longlong *)*plVar7 + *(int *)((longlong)&this->_padding_ + 4) &&
            (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar12)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar14 = (int)this->_padding_;
        piVar1 = (int *)((longlong)&this->_padding_ + 4);
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)plVar7,piVar1);
        }
        *(int *)&this->_padding_ = iVar14 + 1;
        *(longlong *)(*plVar7 + (longlong)iVar14 * 8) = local_80;
        *(longlong *)pFVar21 = 0;
      }
      goto LAB_14409bee5;
    }
    lVar24 = this->_padding_;
    *(longlong *)(lVar23 + 0x30) = this->_padding_;
    *(longlong *)(lVar23 + 0x38) = lVar24;
    (**(code **)(**(longlong **)pFVar21 + 0x68))();
    pFVar21 = pFVar21 + 8;
  } while( true );
}

// ProcessSinglePushedData_Internal @ 14409ce80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsSolver::ProcessSinglePushedData_Internal
          (FPBDRigidsSolver *this,FPushPhysicsData *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  FRewindData *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_void___cdecl_Chaos::FPBDRigidsSolver::ProcessSinglePushedData_Internal(Chaos::FPushPhysicsData_&)_::_2_::FStat_STAT_ProcessSinglePushedData_Internal>
  FVar8;
  uint uVar9;
  FColor_u_0 FVar10;
  FName FVar11;
  undefined8 *puVar12;
  FColor_u_0 local_res8;
  uint uStackX_c;
  int local_res10 [2];
  FName local_res18;
  TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_> local_98;
  <lambda_2> local_88;
  <lambda_1> local_68;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_ProcessSinglePushedData_Internal ==
          (FThreadSafeStaticStat<_private:_void___cdecl_Chaos::FPBDRigidsSolver::ProcessSinglePushedData_Internal(Chaos::FPushPhysicsData_&)_::_2_::FStat_STAT_ProcessSinglePushedData_Internal>
           )0x0) {
        pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"STAT_ProcessSinglePushedData_Internal");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessSinglePushedData_Internal,
                   *pFVar7,L"STAT_ProcessSinglePushedData_Internal","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_ProcessSinglePushedData_Internal;
  if (StatPtr_STAT_ProcessSinglePushedData_Internal ==
      (FThreadSafeStaticStat<_private:_void___cdecl_Chaos::FPBDRigidsSolver::ProcessSinglePushedData_Internal(Chaos::FPushPhysicsData_&)_::_2_::FStat_STAT_ProcessSinglePushedData_Internal>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res18,"STAT_ProcessSinglePushedData_Internal");
    FVar8 = (FThreadSafeStaticStat<_private:_void___cdecl_Chaos::FPBDRigidsSolver::ProcessSinglePushedData_Internal(Chaos::FPushPhysicsData_&)_::_2_::FStat_STAT_ProcessSinglePushedData_Internal>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessSinglePushedData_Internal
                         ,*pFVar7,L"STAT_ProcessSinglePushedData_Internal","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  FVar10.Bits = (uint)FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar10.Bits;
        uStackX_c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                   ,0x656);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar10.Bits;
      uStackX_c = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar5 = true;
      goto LAB_14409cfe5;
    }
  }
  bVar5 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_14409cfe5:
  local_68.ShapeDirtyData =
       (FShapeDirtyData *)(param_1->DirtyProxiesDataBuffer).ShapesData.AllocatorInstance.Data;
  pFVar3 = (FRewindData *)this->_padding_;
  local_68.ExternalDt = param_1->ExternalDt;
  local_68.RegisteredProxies = &local_98;
  local_88.ProcessProxyPT = &local_68;
  local_88.NumInitializedGCProxies = local_res10;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  local_res10[0] = 0;
  local_88.__this = this;
  local_88.Manager = &param_1->DirtyPropertiesManager;
  local_68.Manager = &param_1->DirtyPropertiesManager;
  local_68.RewindData = pFVar3;
  local_68.__this = this;
  FDirtySet::
  ForEachProxy<_Chaos::FPBDRigidsSolver::ProcessSinglePushedData_Internal_::__l2::<lambda_2>_>
            (&param_1->DirtyProxiesDataBuffer,&local_88);
  local_88.__this = this;
  local_88.ProcessProxyPT = (<lambda_1> *)param_1;
  local_88.Manager = (FDirtyPropertiesManager *)pFVar3;
  FDirtySet::
  ForEachProxy<_Chaos::FPBDRigidsSolver::ProcessSinglePushedData_Internal_::__l2::<lambda_3>_>
            (&param_1->DirtyProxiesDataBuffer,(<lambda_3> *)&local_88);
  iVar2 = (int)this->_padding_;
  if (0 < iVar2) {
    puVar12 = (undefined8 *)this->_padding_;
    puVar1 = puVar12 + iVar2;
    while( true ) {
      if ((int)this->_padding_ != iVar2) {
        `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (puVar12 == puVar1) break;
      (**(code **)(*(longlong *)*puVar12 + 0xb0))((longlong *)*puVar12,&local_98);
      puVar12 = puVar12 + 1;
    }
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar11,CycleScopeEnd);
  }
  return;
}

// PushPhysicsState @ 14409d420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsSolver::PushPhysicsState
          (FPBDRigidsSolver *this,double param_1,int param_2,int param_3)

{
  FDirtyPropertiesManager *pFVar1;
  atomic<int> *paVar2;
  int iVar3;
  int iVar4;
  FDirtyPropertiesManager *this_00;
  FPBDRigidsEvolutionGBF *pFVar5;
  atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*> aVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_Chaos::FPBDRigidsSolver::PushPhysicsState(double,int,int)_::_2_::FStat_STAT_PushPhysicsState>
  FVar13;
  atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*> aVar14;
  FStorageData *pFVar15;
  uint uVar16;
  FNameEntryId FVar17;
  longlong *SRWLock;
  longlong *plVar18;
  FName FVar19;
  TDirtyElementPool<Chaos::FParticleNonFrequentData> *pTVar20;
  longlong *plVar21;
  <lambda_1> local_res18;
  undefined1 local_f8 [4];
  int local_f4;
  uint local_f0;
  uint uStack_ec;
  FColor_u_0 local_e8 [2];
  FName local_e0;
  longlong local_d8;
  FName local_d0;
  longlong *local_c0;
  FDirtyPropertiesManager *local_b8;
  FDirtyPropertiesManager *local_b0;
  FPBDRigidsSolver **local_a8;
  TArrayView<std::nullptr_t,int> local_a0;
  code *local_90;
  FDirtyPropertiesManager **local_88;
  FPBDRigidsSolver *local_80;
  double local_78;
  FDirtyPropertiesManager *local_70;
  undefined8 local_68;
  FName local_60;
  FName local_58 [4];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_PushPhysicsState ==
        (FThreadSafeStaticStat<_private:_virtual_void___cdecl_Chaos::FPBDRigidsSolver::PushPhysicsState(double,int,int)_::_2_::FStat_STAT_PushPhysicsState>
         )0x0) {
      pFVar12 = ::FName::FName(&local_60,"STAT_PushPhysicsState");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PushPhysicsState,*pFVar12,
                 L"STAT_PushPhysicsState","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_PushPhysicsState;
  if (StatPtr_STAT_PushPhysicsState ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_Chaos::FPBDRigidsSolver::PushPhysicsState(double,int,int)_::_2_::FStat_STAT_PushPhysicsState>
       )0x0) {
    pFVar12 = ::FName::FName(local_58,"STAT_PushPhysicsState");
    FVar13 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_Chaos::FPBDRigidsSolver::PushPhysicsState(double,int,int)_::_2_::FStat_STAT_PushPhysicsState>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PushPhysicsState,*pFVar12,
                          L"STAT_PushPhysicsState","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar8 = false;
  bVar9 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  bVar10 = false;
  bVar11 = false;
  FVar17 = FVar19.ComparisonIndex.Value;
  uVar16 = FVar19.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e0.ComparisonIndex.Value = FVar17.Value;
        local_e0.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                   ,0x5cf);
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f0 = FVar17.Value;
      uStack_ec = uVar16;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar10 = true;
      goto LAB_14409d5af;
    }
  }
  bVar9 = bVar11;
  bVar8 = bVar10;
  bVar10 = false;
  FVar19 = local_d0;
LAB_14409d5af:
  if ((param_2 < 1) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6441385585952160304>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                          ,0x5d0,"NumSteps > 0"), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_3 < 1) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6441385585952160303>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                          ,0x5d1,"NumExternalSteps > 0"), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  SRWLock = (longlong *)0x0;
  if (CVars::bEnableAsyncInitBody != false) {
    SRWLock = &this->_padding_;
  }
  local_c0 = SRWLock;
  if (SRWLock != (longlong *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  this_00 = (FDirtyPropertiesManager *)this->_padding_;
  pFVar1 = this_00 + 1;
  local_b8 = pFVar1;
  FDirtyPropertiesManager::PrepareBuckets(this_00,(FDirtyProxiesBucketInfo *)pFVar1);
  FDirtyPropertiesManager::SetNumShapes
            (this_00,*(int *)&this_00[1].GroundParticleProxyPool.Elements.AllocatorInstance.Data);
  local_68._0_4_ = this_00[1].CharacterParticleProxyPool.Elements.ArrayNum;
  local_68._4_4_ = this_00[1].CharacterParticleProxyPool.Elements.ArrayMax;
  local_a8 = &local_80;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::FDirtySet::ParallelForEachProxy<`Chaos::FPBDRigidsSolver::PushPhysicsState'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_88 = &local_b0;
  local_res18 = SUB41(param_2,0);
  local_78 = __real_3ff0000000000000 / (double)param_3;
  local_a0.DataPtr = (void **)0x0;
  local_a0.ArrayNum = 0;
  local_b0 = pFVar1;
  local_80 = this;
  local_70 = this_00;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"Chaos.PF",
             *(int *)((longlong)&this_00[1].DynamicMiscPool.Elements.AllocatorInstance.Data + 4),1,
             (TFunctionRef<void___cdecl(int)> *)&local_90,local_res18,None,&local_a0);
  if (LogDirtyParticles != 0) {
    local_f4 = 0;
    local_f0 = 0;
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
    pTVar20 = &this_00[1].NonFrequentDataPool;
    local_d8 = 0xd;
    do {
      iVar3 = *(int *)&(pTVar20->Elements).AllocatorInstance.Data;
      plVar18 = *(longlong **)
                 &(((TDirtyElementPool<Chaos::FParticleDynamicMisc> *)(pTVar20 + -1))->Elements).
                  ArrayNum;
      plVar21 = plVar18 + (longlong)iVar3 * 4;
      while( true ) {
        if (*(int *)&(pTVar20->Elements).AllocatorInstance.Data != iVar3) {
          local_f8[0] = 0;
          `TCheckedPointerIterator<Chaos::FDirtyProxy,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_f8);
        }
        SRWLock = local_c0;
        if (plVar18 == plVar21) break;
        iVar4 = *(int *)(*plVar18 + 0x1c);
        if (iVar4 == 8) {
LAB_14409d7e9:
          plVar18 = plVar18 + 4;
        }
        else if (iVar4 == 9) {
          plVar18 = plVar18 + 4;
        }
        else if (iVar4 == 10) {
          local_f4 = local_f4 + 1;
          plVar18 = plVar18 + 4;
        }
        else {
          if (iVar4 != 0xb) goto LAB_14409d7e9;
          if (2 < (byte)LogChaos._0_1_) {
            TSharedPtr<FString,1>::operator*<FString>
                      ((TSharedPtr<FString,1> *)(*(longlong *)(*plVar18 + 0x40) + 0x68));
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)&PTR_u___s_150b43688,(FLogCategoryBase *)&LogChaos);
          }
          local_f0 = local_f0 + 1;
          plVar18 = plVar18 + 4;
        }
      }
      pTVar20 = pTVar20 + 1;
      local_d8 = local_d8 + -1;
    } while (local_d8 != 0);
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
  }
  pFVar5 = (this->MEvolution).Ptr;
  iVar3 = ((pFVar5->BroadPhase).IgnoreCollisionManager.StorageDataProducer)->ExternalTimestamp;
  if (iVar3 != -1) {
    if (((int)this->_padding_ != iVar3) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3527348243820183426>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\CollisionConstraintFlags.h"
                            ,0x7e,"ExternalTimestamp == StorageDataProducer->ExternalTimestamp"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    aVar14 = (atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*>)
             (pFVar5->BroadPhase).IgnoreCollisionManager.StorageDataQueue.First;
    if (aVar14 == (atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*>
                   )(pFVar5->BroadPhase).IgnoreCollisionManager.StorageDataQueue.TailCopy) {
      aVar6 = (pFVar5->BroadPhase).IgnoreCollisionManager.StorageDataQueue.Tail;
      aVar14 = (atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*>)
               (pFVar5->BroadPhase).IgnoreCollisionManager.StorageDataQueue.First;
      (pFVar5->BroadPhase).IgnoreCollisionManager.StorageDataQueue.TailCopy = (FNode *)aVar6;
      if (aVar14 == aVar6) {
        aVar14 = (atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*>
                  )FMemory::Malloc(0x10,8);
        *(undefined8 *)
         ((TTypeCompatibleBytes<Chaos::FIgnoreCollisionManager::FStorageData_*> *)
         ((longlong)aVar14 + 8))->Pad = 0;
        *(undefined8 *)aVar14 = 0;
      }
      else {
        (pFVar5->BroadPhase).IgnoreCollisionManager.StorageDataQueue.First = *(FNode **)aVar14;
        *(undefined8 *)aVar14 = 0;
      }
    }
    else {
      (pFVar5->BroadPhase).IgnoreCollisionManager.StorageDataQueue.First = *(FNode **)aVar14;
      *(undefined8 *)aVar14 = 0;
    }
    *(FStorageData **)
     ((TTypeCompatibleBytes<Chaos::FIgnoreCollisionManager::FStorageData_*> *)((longlong)aVar14 + 8)
     )->Pad = (pFVar5->BroadPhase).IgnoreCollisionManager.StorageDataProducer;
    ((pFVar5->BroadPhase).IgnoreCollisionManager.StorageDataQueue.Head)->Next = aVar14;
    (pFVar5->BroadPhase).IgnoreCollisionManager.StorageDataQueue.Head = (FNode *)aVar14;
    LOCK();
    paVar2 = &(pFVar5->BroadPhase).IgnoreCollisionManager.StorageDataQueue.NumElems;
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
    pFVar15 = FIgnoreCollisionManager::GetNewStorageData
                        (&(pFVar5->BroadPhase).IgnoreCollisionManager);
    (pFVar5->BroadPhase).IgnoreCollisionManager.StorageDataProducer = pFVar15;
  }
  plVar18 = (longlong *)this->_padding_;
  if ((plVar18 != (longlong *)0x0) && ((char)this->_padding_ == '\0')) {
    (**(code **)(*plVar18 + 0x20))(plVar18,(int)this->_padding_,param_2);
  }
  FChaosMarshallingManager::Step_External
            ((FChaosMarshallingManager *)&this->_padding_,param_1,param_2,
             *(bool *)((longlong)&this->_padding_ + 1));
  if (SRWLock != (longlong *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// RegisterObject @ 14409dac0

void __thiscall
Chaos::FPBDRigidsSolver::RegisterObject(FPBDRigidsSolver *this,FCharacterGroundConstraint *param_1)

{
  FCharacterGroundConstraintProxy *this_00;
  FCharacterGroundConstraintProxy *pFVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res8,ChaosConstraint,false,None,Default,true);
  FMemScope::FMemScope(local_res18,ChaosConstraint,true);
  this_00 = ::operator_new(0x58);
  pFVar1 = (FCharacterGroundConstraintProxy *)0x0;
  if (this_00 != (FCharacterGroundConstraintProxy *)0x0) {
    pFVar1 = FCharacterGroundConstraintProxy::FCharacterGroundConstraintProxy
                       (this_00,param_1,(FCharacterGroundConstraintHandle *)0x0,(UObject *)0x0);
  }
  pFVar1->_padding_ = (longlong)this;
  FPhysicsSolverBase::AddDirtyProxy((FPhysicsSolverBase *)this,(IPhysicsProxyBase *)pFVar1);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RegisterObject @ 14409db50

void __thiscall
Chaos::FPBDRigidsSolver::RegisterObject(FPBDRigidsSolver *this,FClusterUnionPhysicsProxy *param_1)

{
  TPBDRigidParticle<double,3> *pTVar1;
  IPhysicsProxyBase *pIVar2;
  longlong *plVar3;
  int *piVar4;
  undefined1 local_res10 [8];
  
  if (param_1 != (FClusterUnionPhysicsProxy *)0x0) {
    pTVar1 = (param_1->Particle_External).Ptr;
    if (pTVar1 != (TPBDRigidParticle<double,3> *)0x0) {
      pIVar2 = *(IPhysicsProxyBase **)&pTVar1->field_0x10;
      if (AccelerationStructureSplitStaticAndDynamic == 1) {
        ((FSpatialAccelerationIdx *)&pTVar1->field_0x5c)->Bucket = 0;
        ((FSpatialAccelerationIdx *)&pTVar1->field_0x5c)->InnerIdx = 1;
      }
      else {
        ((FSpatialAccelerationIdx *)&pTVar1->field_0x5c)->Bucket = 0;
        ((FSpatialAccelerationIdx *)&pTVar1->field_0x5c)->InnerIdx = 0;
      }
      ((TDirtyFlags<Chaos::EChaosPropertyFlags> *)&pTVar1->field_0x9c)->Bits =
           ((TDirtyFlags<Chaos::EChaosPropertyFlags> *)&pTVar1->field_0x9c)->Bits | 0x10;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
      plVar3 = *(longlong **)(((this->MEvolution).Ptr)->_padding_ + 0x708);
      piVar4 = (int *)(**(code **)(*plVar3 + 8))(plVar3,local_res10);
      pIVar2 = *(IPhysicsProxyBase **)&pTVar1->field_0x10;
      ((FUniqueIdx *)&pTVar1->field_0x58)->Idx = *piVar4;
      ((TDirtyFlags<Chaos::EChaosPropertyFlags> *)&pTVar1->field_0x9c)->Bits =
           ((TDirtyFlags<Chaos::EChaosPropertyFlags> *)&pTVar1->field_0x9c)->Bits | 0x10;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
      FPhysicsSolverBase::UpdateParticleInAccelerationStructure_External
                ((FPhysicsSolverBase *)this,(TGeometryParticle<double,3> *)pTVar1,Add);
    }
    param_1->_padding_ = (longlong)this;
    FPhysicsSolverBase::AddDirtyProxy((FPhysicsSolverBase *)this,(IPhysicsProxyBase *)param_1);
  }
  return;
}

// RegisterObject @ 14409dc30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsSolver::RegisterObject
          (FPBDRigidsSolver *this,FGeometryCollectionPhysicsProxy *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TGeometryParticle<double,3> *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res10,ChaosBody,false,None,Default,true);
  FMemScope::FMemScope(local_res18,ChaosBody,true);
  if (5 < (byte)LogPBDRigidsSolver._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPBDRigidsSolver);
  }
  *(FPBDRigidsSolver **)&param_1->field_0x8 = this;
  FGeometryCollectionPhysicsProxy::Initialize
            (param_1,(FPBDRigidsEvolutionBase *)(this->MEvolution).Ptr);
  FGeometryCollectionPhysicsProxy::BufferGameState(param_1);
  pFVar4 = (param_1->GTParticles).AllocatorInstance.Data;
  iVar2 = (param_1->GTParticles).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->GTParticles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::TPBDRigidParticle<double,3>,TDefaultDelete<Chaos::TPBDRigidParticle<double,3>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pTVar3 = *(TGeometryParticle<double,3> **)pFVar4;
    if ((pTVar3 != (TGeometryParticle<double,3> *)0x0) &&
       (*(char *)((longlong)&pTVar3[2].MNonFrequentData.Property.MDebugName.Object + 1) == '\0')) {
      FPhysicsSolverBase::UpdateParticleInAccelerationStructure_External
                ((FPhysicsSolverBase *)this,pTVar3,Add);
    }
    pFVar4 = pFVar4 + 8;
  }
  FPhysicsSolverBase::AddDirtyProxy((FPhysicsSolverBase *)this,(IPhysicsProxyBase *)param_1);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// RegisterObject @ 14409dd20

void __thiscall
Chaos::FPBDRigidsSolver::RegisterObject(FPBDRigidsSolver *this,FJointConstraint *param_1)

{
  FJointConstraintPhysicsProxy *this_00;
  FJointConstraintPhysicsProxy *pFVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res8,ChaosConstraint,false,None,Default,true);
  FMemScope::FMemScope(local_res18,ChaosConstraint,true);
  this_00 = ::operator_new(0x68);
  pFVar1 = (FJointConstraintPhysicsProxy *)0x0;
  if (this_00 != (FJointConstraintPhysicsProxy *)0x0) {
    pFVar1 = FJointConstraintPhysicsProxy::FJointConstraintPhysicsProxy
                       (this_00,param_1,(FPBDJointConstraintHandle *)0x0,(UObject *)0x0);
  }
  pFVar1->_padding_ = (longlong)this;
  FPhysicsSolverBase::AddDirtyProxy((FPhysicsSolverBase *)this,(IPhysicsProxyBase *)pFVar1);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RegisterObject @ 14409ddb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsSolver::RegisterObject(FPBDRigidsSolver *this,FSingleParticlePhysicsProxy *param_1)

{
  FSpatialAccelerationIdx *pFVar1;
  FSpatialAccelerationIdx FVar2;
  int iVar3;
  TGeometryParticle<double,3> *pTVar4;
  IPhysicsProxyBase *pIVar5;
  FPBDRigidsEvolutionGBF *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  char cVar9;
  bool bVar10;
  double *pdVar11;
  int *piVar12;
  FPhysicsRwLock *this_00;
  double dVar13;
  double dVar14;
  double dVar15;
  FLLMScope local_res8 [2];
  undefined1 local_res10 [8];
  FMemScope local_res18;
  
  this_00 = (FPhysicsRwLock *)0x0;
  if (CVars::bEnableAsyncInitBody) {
    this_00 = (FPhysicsRwLock *)this->_padding_;
  }
  if (this_00 != (FPhysicsRwLock *)0x0) {
    FPhysicsRwLock::WriteLock(this_00);
  }
  FLLMScope::FLLMScope(local_res8,ChaosBody,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,ChaosBody,true);
  if (5 < (byte)LogPBDRigidsSolver._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPBDRigidsSolver);
  }
  if (BroadPhaseConfig.BroadphaseType < 3) {
    TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
    TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
    pTVar4 = (param_1->Particle).Ptr;
    pIVar5 = pTVar4->Proxy;
    pFVar1 = &(pTVar4->MNonFrequentData).Property.MSpatialIdx;
    pFVar1->Bucket = 0;
    pFVar1->InnerIdx = (((param_1->Particle).Ptr)->MNonFrequentData).Property.MSpatialIdx.InnerIdx;
    (pTVar4->MDirtyFlags).Bits = (pTVar4->MDirtyFlags).Bits | 0x10;
    if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
    }
  }
  else {
    TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
    if ((((param_1->Particle).Ptr)->MNonFrequentData).Property.MGeometry.Reference !=
        (FImplicitObject *)0x0) {
      TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
      if (((((param_1->Particle).Ptr)->MNonFrequentData).Property.MGeometry.Reference)->
          bHasBoundingBox != false) {
        TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                  ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
        pdVar11 = (double *)
                  (**(code **)(((((param_1->Particle).Ptr)->MNonFrequentData).Property.MGeometry.
                               Reference)->_padding_ + 0x90))();
        dVar15 = pdVar11[4] - pdVar11[1];
        dVar14 = pdVar11[3] - *pdVar11;
        dVar13 = pdVar11[5] - pdVar11[2];
        if (((dVar14 <= dVar15) || (dVar14 <= dVar13)) && (dVar14 = dVar13, dVar13 <= dVar15)) {
          dVar14 = dVar15;
        }
        if ((double)MaxBoundsForTree <= dVar14) {
          TThreadedSingleParticlePhysicsProxyBase<1>::SetSpatialIdx
                    ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1,
                     (FSpatialAccelerationIdx)0x1);
        }
      }
    }
  }
  cVar9 = (**(code **)(((param_1->Particle).Ptr)->_padding_ + 0x10))();
  if (cVar9 == '\0') {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6441385585952160987>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                        ,0x325,"Proxy->GetParticle_LowLevel()->IsParticleValid()");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    pFVar6 = (this->MEvolution).Ptr;
    if (pFVar6 == (FPBDRigidsEvolutionGBF *)0x0) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6441385585952160978>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                          ,0x32e,"GetEvolution()");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (2 < (byte)LogPBDRigidsSolver._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPBDRigidsSolver);
      }
    }
    else {
      plVar7 = *(longlong **)(pFVar6->_padding_ + 0x708);
      piVar12 = (int *)(**(code **)(*plVar7 + 8))(plVar7,local_res10);
      iVar3 = *piVar12;
      TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
      pTVar4 = (param_1->Particle).Ptr;
      pIVar5 = pTVar4->Proxy;
      (pTVar4->MNonFrequentData).Property.MUniqueIdx.Idx = iVar3;
      (pTVar4->MDirtyFlags).Bits = (pTVar4->MDirtyFlags).Bits | 0x10;
      if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
      }
      FPhysicsSolverBase::TrackGTParticle_External
                ((FPhysicsSolverBase *)this,(param_1->Particle).Ptr);
      pTVar4 = (param_1->Particle).Ptr;
      param_1->_padding_ = (longlong)this;
      TGeometryParticle<double,3>::SetProxy(pTVar4,(IPhysicsProxyBase *)param_1);
      FPhysicsSolverBase::AddDirtyProxy((FPhysicsSolverBase *)this,(IPhysicsProxyBase *)param_1);
      FPhysicsSolverBase::UpdateParticleInAccelerationStructure_External
                ((FPhysicsSolverBase *)this,(param_1->Particle).Ptr,Add);
    }
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  if (this_00 != (FPhysicsRwLock *)0x0) {
    FPhysicsRwLock::WriteUnlock(this_00);
  }
  return;
}

// RegisterObject @ 14409e090

void __thiscall
Chaos::FPBDRigidsSolver::RegisterObject(FPBDRigidsSolver *this,FSuspensionConstraint *param_1)

{
  FSuspensionConstraintPhysicsProxy *this_00;
  FSuspensionConstraintPhysicsProxy *pFVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res8,ChaosConstraint,false,None,Default,true);
  FMemScope::FMemScope(local_res18,ChaosConstraint,true);
  this_00 = ::operator_new(0x58);
  pFVar1 = (FSuspensionConstraintPhysicsProxy *)0x0;
  if (this_00 != (FSuspensionConstraintPhysicsProxy *)0x0) {
    pFVar1 = FSuspensionConstraintPhysicsProxy::FSuspensionConstraintPhysicsProxy
                       (this_00,param_1,(FPBDSuspensionConstraintHandle *)0x0,(UObject *)0x0);
  }
  pFVar1->_padding_ = (longlong)this;
  FPhysicsSolverBase::AddDirtyProxy((FPhysicsSolverBase *)this,(IPhysicsProxyBase *)pFVar1);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Reset @ 1440aeed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDRigidsSolver::Reset(FPBDRigidsSolver *this)

{
  TUniquePtr<Chaos::FPBDRigidsEvolutionGBF,TDefaultDelete<Chaos::FPBDRigidsEvolutionGBF>_> *pTVar1;
  TUniquePtr<FPerSolverFieldSystem,TDefaultDelete<FPerSolverFieldSystem>_> *pTVar2;
  FPBDRigidsEvolutionGBF *pFVar3;
  FPBDRigidsEvolutionGBF *pFVar4;
  undefined8 *puVar5;
  FPerSolverFieldSystem *this_00;
  FPBDRigidsEvolutionGBF *this_01;
  longlong local_18;
  undefined8 local_10;
  
  if (5 < (byte)LogPBDRigidsSolver._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPBDRigidsSolver);
  }
  this_01 = (FPBDRigidsEvolutionGBF *)0x0;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->CurrentFrame = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x322bcc77;
  *(undefined4 *)&this->_padding_ = 1;
  pFVar3 = ::operator_new(0x1440);
  pFVar4 = this_01;
  if (pFVar3 != (FPBDRigidsEvolutionGBF *)0x0) {
    pFVar4 = FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF
                       (pFVar3,&this->Particles,&this->SimMaterials,
                        (TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *)
                        &this->_padding_,
                        (TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *)
                        &this->_padding_,
                        (TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *)
                        &this->_padding_,
                        (TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *)
                        &this->_padding_,*(char *)((longlong)&this->_padding_ + 1) == '\x01');
  }
  pTVar1 = &this->MEvolution;
  if (pTVar1 == (TUniquePtr<Chaos::FPBDRigidsEvolutionGBF,TDefaultDelete<Chaos::FPBDRigidsEvolutionGBF>_>
                 *)&local_18) {
    if (pFVar4 != (FPBDRigidsEvolutionGBF *)0x0) {
      puVar5 = (undefined8 *)pFVar4->_padding_;
      goto LAB_1440aefc4;
    }
  }
  else {
    pFVar3 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar4;
    if (pFVar3 != (FPBDRigidsEvolutionGBF *)0x0) {
      puVar5 = (undefined8 *)pFVar3->_padding_;
      pFVar4 = pFVar3;
LAB_1440aefc4:
      (*(code *)*puVar5)(pFVar4);
    }
  }
  this_00 = ::operator_new(0x120);
  if (this_00 != (FPerSolverFieldSystem *)0x0) {
    memset(this_00,0,0x120);
    this_01 = (FPBDRigidsEvolutionGBF *)FPerSolverFieldSystem::FPerSolverFieldSystem(this_00);
  }
  pTVar2 = &this->PerSolverField;
  if (pTVar2 == (TUniquePtr<FPerSolverFieldSystem,TDefaultDelete<FPerSolverFieldSystem>_> *)
                &local_10) {
    if (this_01 == (FPBDRigidsEvolutionGBF *)0x0) goto LAB_1440af0cb;
    DestructItems<FFieldSystemCommand,int>
              ((FFieldSystemCommand *)this_01->_padding_,(int)this_01->_padding_);
    if ((void *)this_01->_padding_ != (void *)0x0) {
      FMemory::Free((void *)this_01->_padding_);
    }
    DestructItems<FFieldSystemCommand,int>
              ((FFieldSystemCommand *)this_01->_padding_,(int)this_01->_padding_);
    if ((void *)this_01->_padding_ != (void *)0x0) {
      FMemory::Free((void *)this_01->_padding_);
    }
    FFieldExecutionDatas::~FFieldExecutionDatas((FFieldExecutionDatas *)this_01);
  }
  else {
    pFVar4 = (FPBDRigidsEvolutionGBF *)pTVar2->Ptr;
    pTVar2->Ptr = (FPerSolverFieldSystem *)this_01;
    if (pFVar4 == (FPBDRigidsEvolutionGBF *)0x0) goto LAB_1440af0cb;
    DestructItems<FFieldSystemCommand,int>
              ((FFieldSystemCommand *)pFVar4->_padding_,(int)pFVar4->_padding_);
    if ((void *)pFVar4->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar4->_padding_);
    }
    DestructItems<FFieldSystemCommand,int>
              ((FFieldSystemCommand *)pFVar4->_padding_,(int)pFVar4->_padding_);
    if ((void *)pFVar4->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar4->_padding_);
    }
    FFieldExecutionDatas::~FFieldExecutionDatas((FFieldExecutionDatas *)pFVar4);
    this_01 = pFVar4;
  }
  ::operator_delete(this_01,0x120);
LAB_1440af0cb:
  if (this->_padding_ != 0) {
    EnableRewindCapture(this,*(int *)(this->_padding_ + 0x10));
  }
  FEventDefaults::RegisterSystemEvents((this->MEventManager).Ptr);
  return;
}

// ResetStatCounters @ 1440af160

void __thiscall Chaos::FPBDRigidsSolver::ResetStatCounters(FPBDRigidsSolver *this)

{
  ushort uVar1;
  
  if ((__GTraceCounterChaosTraceCounter_MidPhase_NumShapePair.Value != 0) &&
     (__GTraceCounterChaosTraceCounter_MidPhase_NumShapePair.Value = 0,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterChaosTraceCounter_MidPhase_NumShapePair.CounterId ==
        (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChaosTraceCounter_MidPhase_NumShapePair.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterChaosTraceCounter_MidPhase_NumShapePair.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterChaosTraceCounter_MidPhase_NumShapePair.CounterId ==
          (atomic<unsigned_int>)0x0) {
        __GTraceCounterChaosTraceCounter_MidPhase_NumShapePair.CounterId._2_2_ = 0;
        __GTraceCounterChaosTraceCounter_MidPhase_NumShapePair.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterChaosTraceCounter_MidPhase_NumShapePair.CounterId._0_2_,
               __GTraceCounterChaosTraceCounter_MidPhase_NumShapePair.Value);
  }
  if ((__GTraceCounterChaosTraceCounter_MidPhase_NumGeneric.Value != 0) &&
     (__GTraceCounterChaosTraceCounter_MidPhase_NumGeneric.Value = 0, -1 < CountersChannel->Enabled)
     ) {
    if (__GTraceCounterChaosTraceCounter_MidPhase_NumGeneric.CounterId == (atomic<unsigned_int>)0x0)
    {
      uVar1 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChaosTraceCounter_MidPhase_NumGeneric.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterChaosTraceCounter_MidPhase_NumGeneric.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterChaosTraceCounter_MidPhase_NumGeneric.CounterId ==
          (atomic<unsigned_int>)0x0) {
        __GTraceCounterChaosTraceCounter_MidPhase_NumGeneric.CounterId._2_2_ = 0;
        __GTraceCounterChaosTraceCounter_MidPhase_NumGeneric.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterChaosTraceCounter_MidPhase_NumGeneric.CounterId._0_2_,
               __GTraceCounterChaosTraceCounter_MidPhase_NumGeneric.Value);
    return;
  }
  return;
}

// SetDebugDrawScene @ 1440b2400

void __thiscall
Chaos::FPBDRigidsSolver::SetDebugDrawScene
          (FPBDRigidsSolver *this,TSharedPtr<ChaosDD::Private::FChaosDDScene,1> *param_1)

{
  TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FChaosDDScene *pFVar3;
  FString *pFVar4;
  TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> *pTVar5;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_a8;
  TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> local_98;
  FString local_88;
  FChaosDDScene *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> local_68;
  FStringFormatArg local_58;
  FStringFormatArg local_38;
  FString local_18;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (this->CDDScene).Object;
  pTStack_70 = (this->CDDScene).SharedReferenceCount.ReferenceController;
  (this->CDDScene).Object = pFVar3;
  (this->CDDScene).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  pTVar1 = &this->CDDFrameTimeline;
  local_98.Object = (FChaosDDTimeline *)0x0;
  local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != &local_98) {
    pTVar1->Object = (FChaosDDTimeline *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CDDFrameTimeline).SharedReferenceCount,&local_98.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  pFVar3 = (this->CDDScene).Object;
  if (pFVar3 != (FChaosDDScene *)0x0) {
    pFVar4 = ::FString::FString(&local_18,&pFVar3->Name);
    FStringFormatArg::FStringFormatArg(&local_58,pFVar4);
    FStringFormatArg::FStringFormatArg(&local_38,"Physics Frame");
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_a8.AllocatorInstance,2,&local_a8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_a8.AllocatorInstance.Data,&local_58,2);
    ::FString::FormatImpl(&local_88,L"{0} {1}",&local_a8);
    pTVar5 = ChaosDD::Private::FChaosDDScene::CreateTimeline(pFVar3,&local_68,&local_88);
    if (pTVar1 != pTVar5) {
      pTVar1->Object = pTVar5->Object;
      pTVar5->Object = (FChaosDDTimeline *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CDDFrameTimeline).SharedReferenceCount,&pTVar5->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
    if ((FStringFormatArg *)local_a8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    if (local_38.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
  }
  FPBDRigidsEvolutionGBF::SetDebugDrawScene((this->MEvolution).Ptr,param_1);
  return;
}

// SetExternalTimestampConsumed_Internal @ 1440b2940

void __thiscall
Chaos::FPBDRigidsSolver::SetExternalTimestampConsumed_Internal(FPBDRigidsSolver *this,int param_1)

{
  *(int *)&((this->MEvolution).Ptr)->_padding_ = param_1;
  return;
}

// SetIsDeterministic @ 1440b2960

void __thiscall Chaos::FPBDRigidsSolver::SetIsDeterministic(FPBDRigidsSolver *this,bool param_1)

{
  if (this->bIsDeterministic != param_1) {
    this->bIsDeterministic = param_1;
    UpdateIsDeterministic(this);
    return;
  }
  return;
}

// SetIsResimming @ 1440b2980

void __thiscall Chaos::FPBDRigidsSolver::SetIsResimming(FPBDRigidsSolver *this,bool param_1)

{
  uint uVar1;
  uint uVar2;
  
  *(bool *)&((this->MEvolution).Ptr)->_padding_ = param_1;
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  uVar2 = uVar1 | 1;
  if (!param_1) {
    uVar2 = uVar1 & 0xfffffffe;
  }
  *(uint *)((longlong)&this->_padding_ + 4) = uVar2;
  return;
}

// SetParticleDynamicMisc @ 1440b3b80

void __thiscall
Chaos::FPBDRigidsSolver::SetParticleDynamicMisc
          (FPBDRigidsSolver *this,TPBDRigidParticleHandleImp<double,3,1> *param_1,
          FParticleDynamicMisc *param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  float fVar3;
  schar sVar4;
  FRigidParticleControlFlags_u_0 FVar5;
  undefined2 uVar6;
  uint uVar7;
  FPBDRigidsEvolutionGBF *pFVar8;
  longlong lVar9;
  code *pcVar10;
  EObjectStateType EVar11;
  bool bVar12;
  uint uVar13;
  bool *pbVar14;
  TGeometryParticleHandleImp<double,3,1> *pTVar15;
  float fVar16;
  
  if (param_1 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    bVar12 = param_2->bDisabled;
    pbVar14 = TPBDRigidParticleHandleImp<double,3,1>::Disabled(param_1);
    if (*pbVar14 != bVar12) {
      pFVar8 = (this->MEvolution).Ptr;
      if (param_2->bDisabled == false) {
        FPBDRigidsEvolutionBase::EnableParticle
                  ((FPBDRigidsEvolutionBase *)pFVar8,
                   (TGeometryParticleHandleImp<double,3,1> *)param_1);
      }
      else {
        FPBDRigidsEvolutionBase::DisableParticle
                  ((FPBDRigidsEvolutionBase *)pFVar8,
                   (TGeometryParticleHandleImp<double,3,1> *)param_1);
      }
    }
    EVar11 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_1);
    puVar1 = &param_1->field_0x8;
    if (EVar11 != param_2->MObjectState) {
      uVar7 = *(uint *)puVar1;
      lVar9 = *(longlong *)param_1;
      uVar13 = 0;
      if ((int)uVar7 < *(int *)(lVar9 + 0x2e0)) {
        uVar13 = ~uVar7 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      pbVar2 = (byte *)((longlong)(int)uVar7 * 0x10 + 10 + *(longlong *)(lVar9 + 0x2d8));
      *pbVar2 = *pbVar2 | 1;
    }
    fVar16 = param_2->MInitialOverlapDepenetrationVelocity;
    if (fVar16 < 0.0) {
      fVar16 = (((this->MEvolution).Ptr)->CollisionConstraints).SolverSettings.DepenetrationVelocity
      ;
    }
    uVar7 = *(uint *)puVar1;
    lVar9 = *(longlong *)param_1;
    fVar3 = param_2->MLinearEtherDrag;
    uVar13 = 0;
    if ((int)uVar7 < *(int *)(lVar9 + 0x430)) {
      uVar13 = ~uVar7 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    *(double *)(*(longlong *)(lVar9 + 0x428) + (longlong)(int)uVar7 * 8) = (double)fVar3;
    uVar7 = *(uint *)puVar1;
    lVar9 = *(longlong *)param_1;
    fVar3 = param_2->MAngularEtherDrag;
    uVar13 = 0;
    if ((int)uVar7 < *(int *)(lVar9 + 0x448)) {
      uVar13 = ~uVar7 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    *(double *)(*(longlong *)(lVar9 + 0x440) + (longlong)(int)uVar7 * 8) = (double)fVar3;
    uVar7 = *(uint *)puVar1;
    lVar9 = *(longlong *)param_1;
    fVar3 = param_2->MMaxLinearSpeedSq;
    uVar13 = 0;
    if ((int)uVar7 < *(int *)(lVar9 + 0x460)) {
      uVar13 = ~uVar7 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    *(double *)(*(longlong *)(lVar9 + 0x458) + (longlong)(int)uVar7 * 8) = (double)fVar3;
    lVar9 = *(longlong *)param_1;
    uVar7 = *(uint *)puVar1;
    fVar3 = param_2->MMaxAngularSpeedSq;
    uVar13 = 0;
    if ((int)uVar7 < *(int *)(lVar9 + 0x478)) {
      uVar13 = ~uVar7 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    *(double *)(*(longlong *)(lVar9 + 0x470) + (longlong)(int)uVar7 * 8) = (double)fVar3;
    TPBDRigidParticleHandleImp<double,3,1>::SetInitialOverlapDepenetrationVelocity(param_1,fVar16);
    TPBDRigidParticleHandleImp<double,3,1>::SetSleepThresholdMultiplier
              (param_1,param_2->MSleepThresholdMultiplier);
    TPBDRigidParticleHandleImp<double,3,1>::SetCollisionGroup(param_1,param_2->MCollisionGroup);
    TPBDRigidParticleHandleImp<double,3,1>::SetDisabled(param_1,param_2->bDisabled);
    TPBDRigidParticleHandleImp<double,3,1>::SetCollisionConstraintFlags
              (param_1,param_2->MCollisionConstraintFlag);
    lVar9 = *(longlong *)param_1;
    uVar7 = *(uint *)puVar1;
    FVar5 = (param_2->MControlFlags).field0_0x0;
    uVar13 = 0;
    if ((int)uVar7 < *(int *)(lVar9 + 0x2e0)) {
      uVar13 = ~uVar7 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    *(FRigidParticleControlFlags_u_0 *)
     (*(longlong *)(lVar9 + 0x2d8) + 8 + (longlong)(int)uVar7 * 0x10) = FVar5;
    uVar6 = *(undefined2 *)&param_2->MIterationSettings;
    uVar7 = *(uint *)puVar1;
    lVar9 = *(longlong *)param_1;
    sVar4 = (param_2->MIterationSettings).NumProjectionIterations;
    uVar13 = 0;
    if ((int)uVar7 < *(int *)(lVar9 + 0x520)) {
      uVar13 = ~uVar7 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    lVar9 = *(longlong *)(lVar9 + 0x518);
    *(undefined2 *)((longlong)(int)uVar7 * 3 + lVar9) = uVar6;
    *(schar *)((longlong)(int)uVar7 * 3 + 2 + lVar9) = sVar4;
    FPBDRigidsEvolutionBase::SetParticleObjectState
              ((FPBDRigidsEvolutionBase *)(this->MEvolution).Ptr,param_1,param_2->MObjectState);
    FPBDRigidsEvolutionBase::SetParticleSleepType
              ((FPBDRigidsEvolutionBase *)(this->MEvolution).Ptr,param_1,param_2->MSleepType);
    pFVar8 = (this->MEvolution).Ptr;
    pTVar15 = (TGeometryParticleHandleImp<double,3,1> *)
              TPBDRigidParticles<double,3>::Handle
                        (*(TPBDRigidParticles<double,3> **)param_1,*(int *)puVar1);
    Chaos::Private::FPBDIslandManager::FlagParticleUpdated
              ((FPBDIslandManager *)&pFVar8->_padding_,pTVar15);
  }
  return;
}

// SetSuspensionTarget @ 1440b4430

void __thiscall
Chaos::FPBDRigidsSolver::SetSuspensionTarget
          (FPBDRigidsSolver *this,FSuspensionConstraint *param_1,TVector<double> *param_2,
          TVector<double> *param_3,bool param_4)

{
  FSuspensionConstraintPhysicsProxy *this_00;
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  undefined1 local_res10 [8];
  code *local_18;
  undefined1 *local_10;
  
  puVar3 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar3);
  if (*(int *)(pFVar4 + 2) < 1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3522308889972310308>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x124,"IsInPhysicsThreadContext()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FSuspensionConstraintPhysicsProxy *)param_1->_padding_;
  if (this_00 == (FSuspensionConstraintPhysicsProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SuspensionProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                       ,0x49d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSuspensionConstraintPhysicsProxy::UpdateTargetOnPhysicsThread
            (this_00,this,param_2,param_3,param_4);
  return;
}

// SetVelocityBoundsExpansion @ 1440b4510

void __thiscall
Chaos::FPBDRigidsSolver::SetVelocityBoundsExpansion
          (FPBDRigidsSolver *this,double param_1,double param_2)

{
  FPBDRigidsEvolutionGBF *pFVar1;
  
  pFVar1 = (this->MEvolution).Ptr;
  (pFVar1->CollisionConstraints).DetectorSettings.BoundsVelocityInflation = param_1;
  (pFVar1->CollisionConstraints).DetectorSettings.MaxVelocityBoundsExpansion = param_2;
  return;
}

// SetVelocityBoundsExpansionMACD @ 1440b4530

void __thiscall
Chaos::FPBDRigidsSolver::SetVelocityBoundsExpansionMACD
          (FPBDRigidsSolver *this,double param_1,double param_2)

{
  FPBDRigidsEvolutionGBF *pFVar1;
  
  pFVar1 = (this->MEvolution).Ptr;
  (pFVar1->CollisionConstraints).DetectorSettings.BoundsVelocityInflationMACD = param_1;
  (pFVar1->CollisionConstraints).DetectorSettings.MaxVelocityBoundsExpansionMACD = param_2;
  return;
}

// StartingSceneSimulation @ 1440b5f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDRigidsSolver::StartingSceneSimulation(FPBDRigidsSolver *this)

{
  int *piVar1;
  FPBDRigidsEvolutionGBF *pFVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsSolver::StartingSceneSimulation(void)_::_2_::FStat_STAT_StartedSceneSimulation>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  bool bVar11;
  FLLMScope local_res8 [2];
  LARGE_INTEGER local_res10;
  FMemScope local_res18;
  FName local_res20;
  FStatMessage local_38;
  
  FLLMScope::FLLMScope(local_res8,Chaos,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,Chaos,true);
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_StartedSceneSimulation ==
          (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsSolver::StartingSceneSimulation(void)_::_2_::FStat_STAT_StartedSceneSimulation>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res10.s,"STAT_StartedSceneSimulation");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StartedSceneSimulation,*pFVar5,
                   L"STAT_StartedSceneSimulation","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                   ,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_StartedSceneSimulation;
  if (StatPtr_STAT_StartedSceneSimulation ==
      (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsSolver::StartingSceneSimulation(void)_::_2_::FStat_STAT_StartedSceneSimulation>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res20,"STAT_StartedSceneSimulation");
    FVar6 = (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsSolver::StartingSceneSimulation(void)_::_2_::FStat_STAT_StartedSceneSimulation>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StartedSceneSimulation,*pFVar5,
                         L"STAT_StartedSceneSimulation","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar3 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value == 0) && (uVar7 == 0)) {
    pFVar2 = (this->MEvolution).Ptr;
    FIgnoreCollisionManager::PopStorageData_Internal
              (&(pFVar2->BroadPhase).IgnoreCollisionManager,(int)pFVar2->_padding_);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar3 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar8.Value;
        local_res10.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                   ,0x4f1);
        bVar3 = true;
        bVar4 = true;
      }
    }
    bVar11 = FThreadStats::bPrimaryEnable == false;
    if (bVar11) {
      FVar9.ComparisonIndex.Value = 0;
      FVar9.Number = 0;
    }
    else {
      local_res10.s.LowPart = FVar8.Value;
      local_res10.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      FVar10.Value = FVar8.Value;
    }
    pFVar2 = (this->MEvolution).Ptr;
    FIgnoreCollisionManager::PopStorageData_Internal
              (&(pFVar2->BroadPhase).IgnoreCollisionManager,(int)pFVar2->_padding_);
    if (bVar4) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar11) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar10.Value;
        QueryPerformanceCounter(&local_res10);
        local_38.StatData.Pad[4] = '\0';
        local_38.StatData.Pad[5] = '\0';
        local_38.StatData.Pad[6] = '\0';
        local_38.StatData.Pad[7] = '\0';
        local_38.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
        local_38.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
        local_38.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
        local_38.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_38);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SyncEvents_GameThread @ 1440b62d0

void __thiscall Chaos::FPBDRigidsSolver::SyncEvents_GameThread(FPBDRigidsSolver *this)

{
  FEventManager::DispatchEvents((this->MEventManager).Ptr);
  return;
}

// SyncQueryMaterials_External @ 1440b6400

void __thiscall Chaos::FPBDRigidsSolver::SyncQueryMaterials_External(FPBDRigidsSolver *this)

{
  FPhysicsRwLock *this_00;
  uint uVar1;
  
  this_00 = (FPhysicsRwLock *)this->_padding_;
  if (!`public:___cdecl_Chaos::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>(Chaos::FPhysicsRwLock&___ptr64)___ptr64'
       ::__l2::__CsvProfilerStat912) {
    FCsvProfilerTrace::OutputInlineStat("AcquireSceneWriteLock",_GCsvCategory_PhysicsVerbose.Index);
    `public:___cdecl_Chaos::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>(Chaos::FPhysicsRwLock&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat912 = true;
  }
  uVar1 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("AcquireSceneWriteLock",_GCsvCategory_PhysicsVerbose.Index,"CSV_AcquireSceneWriteLock")
  ;
  FPhysicsRwLock::WriteLock(this_00);
  FCsvProfiler::EndStat("AcquireSceneWriteLock",uVar1);
  AcquireSRWLockShared((PSRWLOCK)&this->_padding_);
  THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::CopyFrom
            (&this->QueryMaterials_External,&this->SimMaterials);
  THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::CopyFrom
            (&this->QueryMaterialMasks_External,&this->SimMaterialMasks);
  ReleaseSRWLockShared((PSRWLOCK)&this->_padding_);
  FPhysicsRwLock::WriteUnlock(this_00);
  return;
}

// UnregisterObject @ 1440b6e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPBDRigidsSolver::UnregisterObject
          (FPBDRigidsSolver *this,FCharacterGroundConstraint *param_1)

{
  FCharacterGroundConstraintProxy *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FSimCallbackCommandObject *pFVar5;
  undefined ***pppuVar6;
  FSimCallbackCommandObject *pFVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined4 local_60;
  FSimCallbackCommandObject *local_58;
  undefined **local_48;
  undefined8 uStack_40;
  FPBDRigidsSolver *local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar1 = (FCharacterGroundConstraintProxy *)param_1->_padding_;
  pFVar7 = (FSimCallbackCommandObject *)0x0;
  local_60 = 0;
  if ((pFVar1 == (FCharacterGroundConstraintProxy *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConstraintProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                         ,0x45d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FPhysicsSolverBase::RemoveDirtyProxy((FPhysicsSolverBase *)this,(IPhysicsProxyBase *)pFVar1);
  lVar2 = param_1->_padding_;
  if ((*(longlong *)(lVar2 + 0x20) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  **(undefined1 **)(lVar2 + 0x20) = 1;
  FConstraintBase::SetProxy((FConstraintBase *)param_1,(IPhysicsProxyBase *)0x0);
  FCharacterGroundConstraintProxy::DestroyOnGameThread(pFVar1);
  if (((CVars::bEnableAsyncInitBody == false) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                         ,0x1b3,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = ::operator_new(0xc0);
  if (pFVar5 != (FSimCallbackCommandObject *)0x0) {
    local_30 = (undefined ***)0x0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Chaos::FPBDRigidsSolver::UnregisterObject'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    uStack_40 = pFVar1;
    pFVar1 = uStack_40;
    local_38 = this;
    *(undefined ***)pFVar5 = &___7FSimCallbackCommandObject_Chaos__6B_;
    *(undefined2 *)&pFVar5->field_0x8 = 0;
    *(undefined8 *)&pFVar5->field_0x10 = 0;
    *(undefined8 *)&pFVar5->field_0x18 = 0;
    *(undefined8 *)&pFVar5->field_0x20 = 0;
    *(undefined8 *)&pFVar5->field_0x28 = 0;
    *(undefined2 *)&pFVar5->field_0x40 = 1;
    *(code **)&pFVar5->Func =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>,void>::
         Call;
    *(undefined8 *)&(pFVar5->Func).field_0x28 = 0;
    uStack_40._0_4_ = SUB84(pFVar1,0);
    uStack_40._4_4_ = (undefined4)((ulonglong)pFVar1 >> 0x20);
    *(undefined4 *)&(pFVar5->Func).field_0x10 = 0x50b45a90;
    *(undefined4 *)&(pFVar5->Func).field_0x14 = 1;
    *(undefined4 *)&(pFVar5->Func).field_0x18 = (undefined4)uStack_40;
    *(undefined4 *)&(pFVar5->Func).field_0x1c = uStack_40._4_4_;
    *(FPBDRigidsSolver **)&(pFVar5->Func).field_0x20 = this;
    local_58 = (FSimCallbackCommandObject *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>,void>
               ::Call;
    if (*(longlong *)&pFVar5->Func != 0) {
      local_58 = pFVar7;
    }
    *(undefined8 *)&pFVar5->Func2 = 0;
    *(undefined8 *)&(pFVar5->Func2).field_0x28 = 0;
    pFVar5->bFuncHasTimeParameters = false;
    pFVar5->ExecuteOnStep = -1;
    uStack_40 = pFVar1;
    if (*(longlong *)&pFVar5->Func == 0) {
      `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                (local_68);
    }
    pFVar7 = pFVar5;
    if (local_58 != (FSimCallbackCommandObject *)0x0) {
      pppuVar6 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar6 = local_30;
      }
      (*(code *)(*pppuVar6)[2])();
    }
  }
  FChaosMarshallingManager::RegisterSimCommand_External
            ((FChaosMarshallingManager *)&this->_padding_,pFVar7);
  return;
}

// UnregisterObject @ 1440b7090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPBDRigidsSolver::UnregisterObject(FPBDRigidsSolver *this,FClusterUnionPhysicsProxy *param_1)

{
  TPBDRigidParticle<double,3> *this_00;
  code *pcVar1;
  bool bVar2;
  FSimCallbackCommandObject *pFVar3;
  undefined ***pppuVar4;
  FSimCallbackCommandObject *pFVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined4 local_60;
  FSimCallbackCommandObject *local_58;
  undefined **local_48;
  FClusterUnionPhysicsProxy *pFStack_40;
  FPBDRigidsSolver *local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  if (param_1 != (FClusterUnionPhysicsProxy *)0x0) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
    pFVar5 = (FSimCallbackCommandObject *)0x0;
    local_60 = 0;
    if ((param_1->_padding_ == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined1 *)param_1->_padding_ = 1;
    FPhysicsSolverBase::RemoveDirtyProxy((FPhysicsSolverBase *)this,(IPhysicsProxyBase *)param_1);
    this_00 = (param_1->Particle_External).Ptr;
    if (this_00 != (TPBDRigidParticle<double,3> *)0x0) {
      TGeometryParticle<double,3>::SetProxy
                ((TGeometryParticle<double,3> *)this_00,(IPhysicsProxyBase *)0x0);
    }
    if (((CVars::bEnableAsyncInitBody == false) && (bVar2 = IsInGameThread(), !bVar2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                           ,0x1b3,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar3 = ::operator_new(0xc0);
    if (pFVar3 != (FSimCallbackCommandObject *)0x0) {
      local_30 = (undefined ***)0x0;
      local_48 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`Chaos::FPBDRigidsSolver::UnregisterObject'::`2'::<lambda_1>,1,0>
                  ::_vftable_;
      pFStack_40 = param_1;
      local_38 = this;
      *(undefined ***)pFVar3 = &___7FSimCallbackCommandObject_Chaos__6B_;
      *(undefined2 *)&pFVar3->field_0x8 = 0;
      *(undefined8 *)&pFVar3->field_0x10 = 0;
      *(undefined8 *)&pFVar3->field_0x18 = 0;
      *(undefined8 *)&pFVar3->field_0x20 = 0;
      *(undefined8 *)&pFVar3->field_0x28 = 0;
      *(undefined2 *)&pFVar3->field_0x40 = 1;
      *(code **)&pFVar3->Func =
           UE::Core::Private::Function::
           TFunctionRefCaller<`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>,void>::
           Call;
      *(undefined8 *)&(pFVar3->Func).field_0x28 = 0;
      *(undefined4 *)&(pFVar3->Func).field_0x10 = 0x50b45a50;
      *(undefined4 *)&(pFVar3->Func).field_0x14 = 1;
      *(FClusterUnionPhysicsProxy **)&(pFVar3->Func).field_0x18 = param_1;
      *(FPBDRigidsSolver **)&(pFVar3->Func).field_0x20 = this;
      local_58 = (FSimCallbackCommandObject *)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>,void>
                 ::Call;
      if (*(longlong *)&pFVar3->Func != 0) {
        local_58 = pFVar5;
      }
      *(undefined8 *)&pFVar3->Func2 = 0;
      *(undefined8 *)&(pFVar3->Func2).field_0x28 = 0;
      pFVar3->bFuncHasTimeParameters = false;
      pFVar3->ExecuteOnStep = -1;
      if (*(longlong *)&pFVar3->Func == 0) {
        `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                  (local_68);
      }
      pFVar5 = pFVar3;
      if (local_58 != (FSimCallbackCommandObject *)0x0) {
        pppuVar4 = &local_48;
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    FChaosMarshallingManager::RegisterSimCommand_External
              ((FChaosMarshallingManager *)&this->_padding_,pFVar5);
  }
  return;
}

// UnregisterObject @ 1440b7270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPBDRigidsSolver::UnregisterObject
          (FPBDRigidsSolver *this,FGeometryCollectionPhysicsProxy *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSimCallbackCommandObject *pFVar3;
  undefined ***pppuVar4;
  FSimCallbackCommandObject *pFVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined4 local_60;
  FSimCallbackCommandObject *local_58;
  undefined **local_48;
  FGeometryCollectionPhysicsProxy *pFStack_40;
  FPBDRigidsSolver *local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar5 = (FSimCallbackCommandObject *)0x0;
  local_60 = 0;
  if ((param_1 == (FGeometryCollectionPhysicsProxy *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                         ,0x3d1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(longlong *)&param_1->field_0x20 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  **(undefined1 **)&param_1->field_0x20 = 1;
  FPhysicsSolverBase::RemoveDirtyProxy((FPhysicsSolverBase *)this,(IPhysicsProxyBase *)param_1);
  FGeometryCollectionPhysicsProxy::OnUnregisteredFromSolver(param_1);
  if (((CVars::bEnableAsyncInitBody == false) && (bVar2 = IsInGameThread(), !bVar2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                         ,0x1b3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = ::operator_new(0xc0);
  if (pFVar3 != (FSimCallbackCommandObject *)0x0) {
    local_30 = (undefined ***)0x0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Chaos::FPBDRigidsSolver::UnregisterObject'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    pFStack_40 = param_1;
    local_38 = this;
    *(undefined ***)pFVar3 = &___7FSimCallbackCommandObject_Chaos__6B_;
    *(undefined2 *)&pFVar3->field_0x8 = 0;
    *(undefined8 *)&pFVar3->field_0x10 = 0;
    *(undefined8 *)&pFVar3->field_0x18 = 0;
    *(undefined8 *)&pFVar3->field_0x20 = 0;
    *(undefined8 *)&pFVar3->field_0x28 = 0;
    *(undefined2 *)&pFVar3->field_0x40 = 1;
    *(code **)&pFVar3->Func =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>,void>::
         Call;
    *(undefined8 *)&(pFVar3->Func).field_0x28 = 0;
    *(undefined4 *)&(pFVar3->Func).field_0x10 = 0x50b45a30;
    *(undefined4 *)&(pFVar3->Func).field_0x14 = 1;
    *(FGeometryCollectionPhysicsProxy **)&(pFVar3->Func).field_0x18 = param_1;
    *(FPBDRigidsSolver **)&(pFVar3->Func).field_0x20 = this;
    local_58 = (FSimCallbackCommandObject *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>,void>
               ::Call;
    if (*(longlong *)&pFVar3->Func != 0) {
      local_58 = pFVar5;
    }
    *(undefined8 *)&pFVar3->Func2 = 0;
    *(undefined8 *)&(pFVar3->Func2).field_0x28 = 0;
    pFVar3->bFuncHasTimeParameters = false;
    pFVar3->ExecuteOnStep = -1;
    if (*(longlong *)&pFVar3->Func == 0) {
      `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                (local_68);
    }
    pFVar5 = pFVar3;
    if (local_58 != (FSimCallbackCommandObject *)0x0) {
      pppuVar4 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar4 = local_30;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  FChaosMarshallingManager::RegisterSimCommand_External
            ((FChaosMarshallingManager *)&this->_padding_,pFVar5);
  return;
}

// UnregisterObject @ 1440b7460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPBDRigidsSolver::UnregisterObject(FPBDRigidsSolver *this,FJointConstraint *param_1)

{
  FJointConstraintPhysicsProxy *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FSimCallbackCommandObject *pFVar5;
  undefined ***pppuVar6;
  FSimCallbackCommandObject *pFVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined4 local_60;
  FSimCallbackCommandObject *local_58;
  undefined **local_48;
  undefined8 uStack_40;
  FPBDRigidsSolver *local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar1 = (FJointConstraintPhysicsProxy *)param_1->_padding_;
  pFVar7 = (FSimCallbackCommandObject *)0x0;
  local_60 = 0;
  if ((pFVar1 == (FJointConstraintPhysicsProxy *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("JointProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                         ,0x433,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FPhysicsSolverBase::RemoveDirtyProxy((FPhysicsSolverBase *)this,(IPhysicsProxyBase *)pFVar1);
  lVar2 = param_1->_padding_;
  if ((*(longlong *)(lVar2 + 0x20) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  **(undefined1 **)(lVar2 + 0x20) = 1;
  FConstraintBase::SetProxy((FConstraintBase *)param_1,(IPhysicsProxyBase *)0x0);
  FJointConstraint::ReleaseKinematicEndPoint(param_1,this);
  FJointConstraintPhysicsProxy::DestroyOnGameThread(pFVar1);
  if (((CVars::bEnableAsyncInitBody == false) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                         ,0x1b3,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = ::operator_new(0xc0);
  if (pFVar5 != (FSimCallbackCommandObject *)0x0) {
    local_30 = (undefined ***)0x0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Chaos::FPBDRigidsSolver::UnregisterObject'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    uStack_40 = pFVar1;
    pFVar1 = uStack_40;
    local_38 = this;
    *(undefined ***)pFVar5 = &___7FSimCallbackCommandObject_Chaos__6B_;
    *(undefined2 *)&pFVar5->field_0x8 = 0;
    *(undefined8 *)&pFVar5->field_0x10 = 0;
    *(undefined8 *)&pFVar5->field_0x18 = 0;
    *(undefined8 *)&pFVar5->field_0x20 = 0;
    *(undefined8 *)&pFVar5->field_0x28 = 0;
    *(undefined2 *)&pFVar5->field_0x40 = 1;
    *(code **)&pFVar5->Func =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>,void>::
         Call;
    *(undefined8 *)&(pFVar5->Func).field_0x28 = 0;
    uStack_40._0_4_ = SUB84(pFVar1,0);
    uStack_40._4_4_ = (undefined4)((ulonglong)pFVar1 >> 0x20);
    *(undefined4 *)&(pFVar5->Func).field_0x10 = 0x50b45a70;
    *(undefined4 *)&(pFVar5->Func).field_0x14 = 1;
    *(undefined4 *)&(pFVar5->Func).field_0x18 = (undefined4)uStack_40;
    *(undefined4 *)&(pFVar5->Func).field_0x1c = uStack_40._4_4_;
    *(FPBDRigidsSolver **)&(pFVar5->Func).field_0x20 = this;
    local_58 = (FSimCallbackCommandObject *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>,void>
               ::Call;
    if (*(longlong *)&pFVar5->Func != 0) {
      local_58 = pFVar7;
    }
    *(undefined8 *)&pFVar5->Func2 = 0;
    *(undefined8 *)&(pFVar5->Func2).field_0x28 = 0;
    pFVar5->bFuncHasTimeParameters = false;
    pFVar5->ExecuteOnStep = -1;
    uStack_40 = pFVar1;
    if (*(longlong *)&pFVar5->Func == 0) {
      `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                (local_68);
    }
    pFVar7 = pFVar5;
    if (local_58 != (FSimCallbackCommandObject *)0x0) {
      pppuVar6 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar6 = local_30;
      }
      (*(code *)(*pppuVar6)[2])();
    }
  }
  FChaosMarshallingManager::RegisterSimCommand_External
            ((FChaosMarshallingManager *)&this->_padding_,pFVar7);
  return;
}

// UnregisterObject @ 1440b7680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsSolver::UnregisterObject
          (FPBDRigidsSolver *this,FSingleParticlePhysicsProxy *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  TGeometryParticle<double,3> *pTVar4;
  IPhysicsProxyBase *pIVar5;
  longlong lVar6;
  FPBDRigidsEvolutionGBF *pFVar7;
  FStorageData *pFVar8;
  code *pcVar9;
  FSimCallbackCommandObject *this_00;
  bool bVar10;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar11;
  FSimCallbackCommandObject *pFVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar15;
  FSimCallbackCommandObject *pFVar16;
  FSimCallbackCommandObject *pFVar17;
  undefined1 auStackY_e8 [32];
  undefined1 local_b8;
  undefined1 local_b7 [7];
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  local_b0;
  FUniqueIdx local_a8 [2];
  FSimCallbackCommandObject *local_a0;
  FSingleParticlePhysicsProxy *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FPBDRigidsSolver *local_88;
  FSimCallbackCommandObject *local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pFVar17 = (FSimCallbackCommandObject *)0x0;
  local_b0 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
              )((ulonglong)local_b0 & 0xffffffff00000000);
  local_a0 = pFVar17;
  if (CVars::bEnableAsyncInitBody) {
    local_a0 = (FSimCallbackCommandObject *)this->_padding_;
  }
  if (local_a0 != (FSimCallbackCommandObject *)0x0) {
    FPhysicsRwLock::WriteLock((FPhysicsRwLock *)local_a0);
  }
  if (5 < (byte)LogPBDRigidsSolver._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPBDRigidsSolver);
  }
  FChaosResultsManager::RemoveProxy_External((FChaosResultsManager *)this->_padding_,param_1);
  FPhysicsSolverBase::ClearGTParticle_External((FPhysicsSolverBase *)this,(param_1->Particle).Ptr);
  FPhysicsSolverBase::UpdateParticleInAccelerationStructure_External
            ((FPhysicsSolverBase *)this,(param_1->Particle).Ptr,Delete);
  FPhysicsSolverBase::RemoveDirtyProxy((FPhysicsSolverBase *)this,(IPhysicsProxyBase *)param_1);
  if ((param_1->_padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  *(undefined1 *)param_1->_padding_ = 1;
  pTVar4 = (param_1->Particle).Ptr;
  pTVar4->Proxy = (IPhysicsProxyBase *)0x0;
  FVar15 = (pTVar4->MShapesArray).AllocatorInstance.SecondaryData;
  iVar1 = (pTVar4->MShapesArray).ArrayNum;
  if (FVar15 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                 )0x0) {
    FVar15 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
              )&pTVar4->MShapesArray;
  }
  FVar11 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
            )((longlong)FVar15 + (longlong)iVar1 * 8);
  local_b0 = FVar11;
  while( true ) {
    if ((pTVar4->MShapesArray).ArrayNum != iVar1) {
      local_b8 = 0;
      `TCheckedPointerIterator<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_b8);
      FVar11 = local_b0;
    }
    if (FVar15 == FVar11) break;
    pIVar5 = pTVar4->Proxy;
    lVar6 = *(longlong *)FVar15;
    *(IPhysicsProxyBase **)(lVar6 + 0x48) = pIVar5;
    if (((pIVar5 != (IPhysicsProxyBase *)0x0) && (*(int *)(lVar6 + 0xc) != 0)) &&
       (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxyShape(pIVar5->Solver,pIVar5,*(uint *)(lVar6 + 8) >> 3);
      FVar11 = local_b0;
    }
    FVar15 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
              )((longlong)FVar15 + 8);
  }
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  this_00 = local_a0;
  pFVar16 = pFVar17;
  if (CVars::bEnableAsyncInitBody != false) {
    pFVar16 = (FSimCallbackCommandObject *)&this->_padding_;
  }
  iVar1 = (((param_1->Particle).Ptr)->MNonFrequentData).Property.MUniqueIdx.Idx;
  local_b0._0_4_ = iVar1;
  if (pFVar16 != (FSimCallbackCommandObject *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)pFVar16);
  }
  iVar2 = (int)this->_padding_;
  pFVar7 = (this->MEvolution).Ptr;
  pFVar8 = (pFVar7->BroadPhase).IgnoreCollisionManager.StorageDataProducer;
  iVar3 = pFVar8->ExternalTimestamp;
  if (iVar3 == -1) {
    pFVar8->ExternalTimestamp = iVar2;
  }
  else if ((iVar3 != iVar2) &&
          (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_3527348243820183436>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\CollisionConstraintFlags.h"
                               ,0x74,"StorageDataProducer->ExternalTimestamp == ExternalTimestamp"),
          bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  TSet<Chaos::FUniqueIdx,DefaultKeyFuncs<Chaos::FUniqueIdx,0>,FDefaultSetAllocator>::
  Emplace<Chaos::FUniqueIdx_const_&>
            (&((pFVar7->BroadPhase).IgnoreCollisionManager.StorageDataProducer)->
              PendingDeactivations,local_a8,(bool *)&local_b0);
  if (pFVar16 != (FSimCallbackCommandObject *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)pFVar16);
  }
  local_98 = param_1;
  iStack_90 = iVar1;
  local_88 = this;
  if (((CVars::bEnableAsyncInitBody == false) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                          ,0x1b3,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar12 = ::operator_new(0xc0);
  pFVar16 = pFVar17;
  if (pFVar12 != (FSimCallbackCommandObject *)0x0) {
    local_78 = (FSimCallbackCommandObject *)0x0;
    puVar13 = FMemory::Malloc(0x20,8);
    *puVar13 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Chaos::FPBDRigidsSolver::UnregisterObject'::`2'::<lambda_1>,1,1>
                ::_vftable_;
    puVar13[1] = local_98;
    puVar13[2] = CONCAT44(uStack_8c,iStack_90);
    puVar13[3] = local_88;
    if (puVar13 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_78 = (FSimCallbackCommandObject *)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>,void>
                 ::Call;
    }
    *(undefined ***)pFVar12 = &___7FSimCallbackCommandObject_Chaos__6B_;
    *(undefined2 *)&pFVar12->field_0x8 = 0;
    *(undefined8 *)&pFVar12->field_0x10 = 0;
    *(undefined8 *)&pFVar12->field_0x18 = 0;
    *(undefined8 *)&pFVar12->field_0x20 = 0;
    *(undefined8 *)&pFVar12->field_0x28 = 0;
    *(undefined2 *)&pFVar12->field_0x40 = 1;
    *(FSimCallbackCommandObject **)&pFVar12->Func = local_78;
    *(undefined8 **)&(pFVar12->Func).field_0x28 = puVar13;
    local_50 = (longlong *)0x0;
    *(longlong *)&(pFVar12->Func).field_0x10 = local_68;
    *(undefined8 *)&(pFVar12->Func).field_0x18 = uStack_60;
    *(undefined8 *)&(pFVar12->Func).field_0x20 = local_58;
    if (*(longlong *)&pFVar12->Func != 0) {
      local_78 = pFVar17;
    }
    *(undefined8 *)&pFVar12->Func2 = 0;
    *(undefined8 *)&(pFVar12->Func2).field_0x28 = 0;
    pFVar12->bFuncHasTimeParameters = false;
    pFVar12->ExecuteOnStep = -1;
    if (*(longlong *)&pFVar12->Func == 0) {
      `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                (local_b7);
    }
    pFVar17 = pFVar12;
    pFVar16 = (FSimCallbackCommandObject *)&DAT_00000001;
  }
  if ((pFVar16 != (FSimCallbackCommandObject *)0x0) &&
     (local_78 != (FSimCallbackCommandObject *)0x0)) {
    plVar14 = &local_68;
    if (local_50 != (longlong *)0x0) {
      plVar14 = local_50;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  FChaosMarshallingManager::RegisterSimCommand_External
            ((FChaosMarshallingManager *)&this->_padding_,pFVar17);
  if (this_00 != (FSimCallbackCommandObject *)0x0) {
    FPhysicsRwLock::WriteUnlock((FPhysicsRwLock *)this_00);
  }
  return;
}

// UnregisterObject @ 1440b7a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPBDRigidsSolver::UnregisterObject(FPBDRigidsSolver *this,FSuspensionConstraint *param_1)

{
  FSuspensionConstraintPhysicsProxy *this_00;
  code *pcVar1;
  bool bVar2;
  FSimCallbackCommandObject *pFVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  FSimCallbackCommandObject *pFVar6;
  FSimCallbackCommandObject *pFVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  FSimCallbackCommandObject *local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  this_00 = (FSuspensionConstraintPhysicsProxy *)param_1->_padding_;
  pFVar6 = (FSimCallbackCommandObject *)0x0;
  local_64 = 0;
  if ((this_00 == (FSuspensionConstraintPhysicsProxy *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SuspensionProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                         ,0x485,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this_00->_padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined1 *)this_00->_padding_ = 1;
  FPhysicsSolverBase::RemoveDirtyProxy((FPhysicsSolverBase *)this,(IPhysicsProxyBase *)this_00);
  FConstraintBase::SetProxy((FConstraintBase *)param_1,(IPhysicsProxyBase *)0x0);
  FSuspensionConstraintPhysicsProxy::DestroyOnGameThread(this_00);
  if (((CVars::bEnableAsyncInitBody == false) && (bVar2 = IsInGameThread(), !bVar2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                         ,0x1b3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = ::operator_new(0xc0);
  pFVar7 = pFVar6;
  if (pFVar3 != (FSimCallbackCommandObject *)0x0) {
    local_58 = (FSimCallbackCommandObject *)0x0;
    puVar4 = FMemory::Malloc(0x20,8);
    *puVar4 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Chaos::FPBDRigidsSolver::UnregisterObject'::`2'::<lambda_1>,1,1>
               ::_vftable_;
    puVar4[1] = &this->Particles;
    puVar4[2] = this_00;
    puVar4[3] = this;
    if (puVar4 + 1 != (longlong *)0x0) {
      local_58 = (FSimCallbackCommandObject *)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>,void>
                 ::Call;
    }
    *(undefined ***)pFVar3 = &___7FSimCallbackCommandObject_Chaos__6B_;
    *(undefined2 *)&pFVar3->field_0x8 = 0;
    *(undefined8 *)&pFVar3->field_0x10 = 0;
    *(undefined8 *)&pFVar3->field_0x18 = 0;
    *(undefined8 *)&pFVar3->field_0x20 = 0;
    *(undefined8 *)&pFVar3->field_0x28 = 0;
    *(undefined2 *)&pFVar3->field_0x40 = 1;
    *(FSimCallbackCommandObject **)&pFVar3->Func = local_58;
    *(undefined8 **)&(pFVar3->Func).field_0x28 = puVar4;
    local_30 = (longlong *)0x0;
    *(longlong *)&(pFVar3->Func).field_0x10 = local_48;
    *(undefined8 *)&(pFVar3->Func).field_0x18 = uStack_40;
    *(undefined8 *)&(pFVar3->Func).field_0x20 = local_38;
    if (*(longlong *)&pFVar3->Func != 0) {
      local_58 = pFVar6;
    }
    *(undefined8 *)&pFVar3->Func2 = 0;
    *(undefined8 *)&(pFVar3->Func2).field_0x28 = 0;
    pFVar3->bFuncHasTimeParameters = false;
    pFVar3->ExecuteOnStep = -1;
    if (*(longlong *)&pFVar3->Func == 0) {
      `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                (local_68);
    }
    pFVar6 = pFVar3;
    pFVar7 = (FSimCallbackCommandObject *)&DAT_00000001;
  }
  if ((pFVar7 != (FSimCallbackCommandObject *)0x0) && (local_58 != (FSimCallbackCommandObject *)0x0)
     ) {
    plVar5 = &local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FChaosMarshallingManager::RegisterSimCommand_External
            ((FChaosMarshallingManager *)&this->_padding_,pFVar6);
  return;
}

// UpdateExpensiveStatCounters @ 1440b7ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDRigidsSolver::UpdateExpensiveStatCounters(FPBDRigidsSolver *this)

{
  byte bVar1;
  FPBDRigidsEvolutionGBF *pFVar2;
  FImplicitObject *this_00;
  FName FVar3;
  code *pcVar4;
  TPBDRigidParticles<double,3> *this_01;
  int iVar5;
  float fVar6;
  undefined8 uVar7;
  bool bVar8;
  uchar uVar9;
  EObjectStateType EVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar15;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumValidConstraints> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  TStatId TVar21;
  FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumRestoredConstraints> FVar22;
  FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumManifoldPoints> FVar23;
  FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumActiveManifoldPoints> FVar24;
  FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumUpdatedManifoldPoints> FVar25;
  FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumStaticShapes> FVar26;
  FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumKinematicShapes> FVar27;
  FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDynamicShapes> FVar28;
  FManifoldPointResult *pFVar29;
  FScriptContainerElement *pFVar30;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar31;
  longlong lVar32;
  FScriptContainerElement *pFVar33;
  longlong lVar34;
  longlong lVar35;
  longlong *plVar36;
  int iVar37;
  ulonglong uVar38;
  int iVar39;
  ulonglong uVar40;
  int iVar41;
  uint uVar42;
  ulonglong uVar43;
  int local_res10;
  int local_res18;
  int local_res20;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  undefined1 local_1e0 [24];
  uint uStack_1c8;
  int iStack_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  FScriptContainerElement *local_1b0;
  FScriptContainerElement *local_1a8;
  undefined8 local_1a0;
  uint uStack_198;
  int iStack_194;
  FName local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FStatMessage local_148;
  FStatMessage local_138;
  FStatMessage local_128;
  FStatMessage local_118;
  FStatMessage local_108;
  FStatMessage local_f8;
  FStatMessage local_e8;
  FStatMessage local_d8;
  FStatMessage local_c8;
  FName local_b8 [2];
  FName local_a8;
  FName local_a0 [2];
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70 [6];
  
  iVar41 = 0;
  pFVar2 = (this->MEvolution).Ptr;
  local_res10 = 0;
  local_1ec = 0;
  local_res18 = 0;
  iVar39 = (pFVar2->CollisionConstraints).ConstraintAllocator.ActiveConstraints.ArrayNum;
  pFVar33 = (pFVar2->CollisionConstraints).ConstraintAllocator.ActiveConstraints.AllocatorInstance.
            Data;
  local_res20 = 0;
  local_1f8 = 0;
  local_1f4 = 0;
  local_1f0 = 0;
  local_1a8 = pFVar33;
  if ((iVar39 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_38d1b717;
  pFVar30 = pFVar33 + (longlong)iVar39 * 8;
  iVar39 = iVar41;
  local_1b0 = pFVar30;
  if (pFVar33 != pFVar30) {
    do {
      lVar34 = *(longlong *)pFVar33;
      if ((lVar34 != 0) && ((*(byte *)(lVar34 + 0x374) >> 1 & 1) == 0)) {
        if (*(int *)(lVar34 + 0x5b0) < 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          pFVar30 = local_1b0;
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else if (0 < *(int *)(lVar34 + 0x5b0)) {
          local_res10 = local_res10 + 1;
        }
        if (((fVar6 < (float)(*(uint *)(lVar34 + 0x120) & uVar13)) ||
            (fVar6 < (float)(*(uint *)(lVar34 + 0x124) & uVar13))) ||
           (fVar6 < (float)(*(uint *)(lVar34 + 0x128) & uVar13))) {
          iVar41 = iVar41 + 1;
          local_1ec = iVar41;
        }
        if ((*(byte *)(lVar34 + 0x374) >> 5 & 1) != 0) {
          local_res18 = iVar39 + 1;
        }
        uVar38 = 0;
        uVar40 = uVar38;
        uVar43 = uVar38;
        iVar39 = local_res18;
        if (0 < *(int *)(lVar34 + 0x5b0)) {
          do {
            uVar42 = (uint)uVar43;
            uVar12 = 0;
            if ((int)uVar42 < *(int *)(lVar34 + 0x5b0)) {
              uVar12 = ~uVar42 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar35 = lVar34 + 0x3f8;
            if (*(longlong *)(lVar34 + 0x5a8) != 0) {
              lVar35 = *(longlong *)(lVar34 + 0x5a8);
            }
            if ((*(int *)(lVar34 + 0x5b0) <= (int)uVar42) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("PointIndex < NumManifoldPoints()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                                   ,0x232,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((int)uVar42 < *(int *)(lVar34 + 0x630)) {
              if (((int)uVar42 < 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar32 = lVar34 + 0x5b8;
              if (*(longlong *)(lVar34 + 0x628) != 0) {
                lVar32 = *(longlong *)(lVar34 + 0x628);
              }
              pFVar29 = (FManifoldPointResult *)(lVar32 + uVar40);
            }
            else if ((*(int *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x9d4c) <
                      `public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
                      ::__l12::_thread_safe_static_guard_0__) &&
                    (_Init_thread_header(&`public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
                                          ::__l12::_thread_safe_static_guard_0__),
                    `public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
                    ::__l12::_thread_safe_static_guard_0__ == -1)) {
              `public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
              ::__l12::ZeroResult.bInsideStaticFrictionCone = '\0';
              `public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
              ::__l12::ZeroResult.bIsValid = '\0';
              `public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
              ::__l12::ZeroResult.NetImpulse._4_8_ = 0;
              `public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
              ::__l12::ZeroResult.NetPushOut._0_8_ = 0;
              `public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
              ::__l12::ZeroResult.NetPushOut._8_4_ = 0;
              `public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
              ::__l12::ZeroResult.NetImpulse._0_4_ = 0;
              _Init_thread_footer(&`public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
                                   ::__l12::_thread_safe_static_guard_0__);
              pFVar29 = &`public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
                         ::__l12::ZeroResult;
            }
            else {
              pFVar29 = &`public:_class_Chaos::FManifoldPointResult_const&___ptr64___cdecl_Chaos::FPBDCollisionConstraint::GetManifoldPointResult(int)const___ptr64'
                         ::__l12::ZeroResult;
            }
            local_res20 = local_res20 + 1;
            bVar1 = *(byte *)(lVar35 + 0x30 + uVar38);
            if (((bVar1 & 2) != 0) || ((*(byte *)(lVar34 + 0x374) >> 5 & 1) != 0)) {
              local_1f4 = local_1f4 + 1;
            }
            if ((bVar1 & 4) != 0) {
              local_1f0 = local_1f0 + 1;
            }
            if ((pFVar29->bIsValid != 0) &&
               (((fVar6 < (float)(*(uint *)&pFVar29->NetPushOut & uVar13) ||
                 (fVar6 < (float)(*(uint *)&(pFVar29->NetPushOut).field_0x4 & uVar13))) ||
                (fVar6 < (float)(*(uint *)&(pFVar29->NetPushOut).field_0x8 & uVar13))))) {
              local_1f8 = local_1f8 + 1;
            }
            uVar38 = uVar38 + 0x6c;
            pFVar30 = local_1b0;
            pFVar33 = local_1a8;
            uVar40 = uVar40 + 0x1c;
            uVar43 = (ulonglong)(uVar42 + 1);
            iVar41 = local_1ec;
          } while ((int)(uVar42 + 1) < *(int *)(lVar34 + 0x5b0));
        }
      }
      pFVar33 = pFVar33 + 8;
      local_1a8 = pFVar33;
    } while (pFVar33 != pFVar30);
  }
  iVar41 = 0;
  iVar39 = 0;
  iVar5 = 0;
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
            ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_1e0,
             (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
              *)&(this->Particles).ActiveParticlesView);
  lVar34 = CONCAT44(local_1e0._20_4_,local_1e0._16_4_);
  iVar37 = iVar41;
  do {
    if (lVar34 == 0) {
LAB_1440b83ae:
      if (FThreadStats::bPrimaryEnable != false) {
        FVar18 = StatPtr_STAT_ChaosCounter_NumValidConstraints;
        if (StatPtr_STAT_ChaosCounter_NumValidConstraints ==
            (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumValidConstraints>)0x0) {
          pFVar17 = ::FName::FName(local_b8,"STAT_ChaosCounter_NumValidConstraints");
          FVar18 = (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumValidConstraints>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_ChaosCounter_NumValidConstraints,*pFVar17,
                              L"NumValidConstraints","STATGROUP_ChaosCounters","STATCAT_Advanced",
                              L"ChaosCounters",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar3 = *(FName *)FVar18;
        if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar19 == (FThreadStats *)0x0) {
            pFVar20 = FThreadStatsPool::Get();
            pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
          }
          local_148.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
          local_190 = FVar3;
          local_148.StatData.Pad = (uchar  [8])(longlong)local_res10;
          local_148.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar19,&local_148);
          FStatsTrace::Set(&local_190,(longlong)local_res10);
          if (pFVar19->ScopeCount == 0) {
            FThreadStats::Flush(pFVar19,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar19,false,false);
          }
        }
      }
      if (__CsvProfilerStat2908 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("NumValidConstraints",_GCsvCategory_PhysicsCounters.Index);
        __CsvProfilerStat2908 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("NumValidConstraints",_GCsvCategory_PhysicsCounters.Index,local_res10,Set);
      lVar34 = (longlong)local_res10;
      if ((__GTraceCounterChaosTraceCounter_NumValidConstraints.Value != lVar34) &&
         (__GTraceCounterChaosTraceCounter_NumValidConstraints.Value = lVar34,
         -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterChaosTraceCounter_NumValidConstraints.CounterId ==
            (atomic<unsigned_int>)0x0) {
          uVar11 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterChaosTraceCounter_NumValidConstraints.CounterName,
                              TraceCounterType_Int,
                              __GTraceCounterChaosTraceCounter_NumValidConstraints.CounterFlags &
                              0xf);
          LOCK();
          if (__GTraceCounterChaosTraceCounter_NumValidConstraints.CounterId ==
              (atomic<unsigned_int>)0x0) {
            __GTraceCounterChaosTraceCounter_NumValidConstraints.CounterId._2_2_ = 0;
            __GTraceCounterChaosTraceCounter_NumValidConstraints.CounterId._0_2_ = uVar11;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterChaosTraceCounter_NumValidConstraints.CounterId._0_2_,
                   __GTraceCounterChaosTraceCounter_NumValidConstraints.Value);
      }
      if (FThreadStats::bPrimaryEnable != false) {
        TVar21 = FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumActiveConstraints,1>::
                 GetStatId((FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumActiveConstraints,1>
                            *)&StatPtr_STAT_ChaosCounter_NumActiveConstraints);
        FThreadStats::AddMessage<__int64>
                  (*(FName *)(TVar21.StatIdPtr)->Name,Set,(longlong)local_1ec,false);
      }
      if (__CsvProfilerStat2909 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("NumActiveConstraints",_GCsvCategory_PhysicsCounters.Index);
        __CsvProfilerStat2909 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("NumActiveConstraints",_GCsvCategory_PhysicsCounters.Index,local_1ec,Set);
      lVar34 = (longlong)local_1ec;
      if ((__GTraceCounterChaosTraceCounter_NumActiveConstraints.Value != lVar34) &&
         (__GTraceCounterChaosTraceCounter_NumActiveConstraints.Value = lVar34,
         -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterChaosTraceCounter_NumActiveConstraints.CounterId ==
            (atomic<unsigned_int>)0x0) {
          uVar11 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterChaosTraceCounter_NumActiveConstraints.CounterName,
                              TraceCounterType_Int,
                              __GTraceCounterChaosTraceCounter_NumActiveConstraints.CounterFlags &
                              0xf);
          LOCK();
          if (__GTraceCounterChaosTraceCounter_NumActiveConstraints.CounterId ==
              (atomic<unsigned_int>)0x0) {
            __GTraceCounterChaosTraceCounter_NumActiveConstraints.CounterId._2_2_ = 0;
            __GTraceCounterChaosTraceCounter_NumActiveConstraints.CounterId._0_2_ = uVar11;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterChaosTraceCounter_NumActiveConstraints.CounterId._0_2_,
                   __GTraceCounterChaosTraceCounter_NumActiveConstraints.Value);
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar22 = StatPtr_STAT_ChaosCounter_NumRestoredConstraints;
        if (StatPtr_STAT_ChaosCounter_NumRestoredConstraints ==
            (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumRestoredConstraints>)0x0) {
          pFVar17 = ::FName::FName(local_70,"STAT_ChaosCounter_NumRestoredConstraints");
          FVar22 = (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumRestoredConstraints>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_ChaosCounter_NumRestoredConstraints,*pFVar17,
                              L"NumRestoredConstraints","STATGROUP_ChaosCounters","STATCAT_Advanced"
                              ,L"ChaosCounters",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar3 = *(FName *)FVar22;
        if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar19 == (FThreadStats *)0x0) {
            pFVar20 = FThreadStatsPool::Get();
            pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
          }
          local_138.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
          local_188 = FVar3;
          local_138.StatData.Pad = (uchar  [8])(longlong)local_res18;
          local_138.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar19,&local_138);
          FStatsTrace::Set(&local_188,(longlong)local_res18);
          if (pFVar19->ScopeCount == 0) {
            FThreadStats::Flush(pFVar19,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar19,false,false);
          }
        }
      }
      if (__CsvProfilerStat2910 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("NumRestoredConstraints",_GCsvCategory_PhysicsCounters.Index);
        __CsvProfilerStat2910 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("NumRestoredConstraints",_GCsvCategory_PhysicsCounters.Index,local_res18,Set);
      lVar34 = (longlong)local_res18;
      if ((__GTraceCounterChaosTraceCounter_NumRestoredConstraints.Value != lVar34) &&
         (__GTraceCounterChaosTraceCounter_NumRestoredConstraints.Value = lVar34,
         -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterChaosTraceCounter_NumRestoredConstraints.CounterId ==
            (atomic<unsigned_int>)0x0) {
          uVar11 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterChaosTraceCounter_NumRestoredConstraints.CounterName,
                              TraceCounterType_Int,
                              __GTraceCounterChaosTraceCounter_NumRestoredConstraints.CounterFlags &
                              0xf);
          LOCK();
          if (__GTraceCounterChaosTraceCounter_NumRestoredConstraints.CounterId ==
              (atomic<unsigned_int>)0x0) {
            __GTraceCounterChaosTraceCounter_NumRestoredConstraints.CounterId._2_2_ = 0;
            __GTraceCounterChaosTraceCounter_NumRestoredConstraints.CounterId._0_2_ = uVar11;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterChaosTraceCounter_NumRestoredConstraints.CounterId._0_2_,
                   __GTraceCounterChaosTraceCounter_NumRestoredConstraints.Value);
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar23 = StatPtr_STAT_ChaosCounter_NumManifoldPoints;
        if (StatPtr_STAT_ChaosCounter_NumManifoldPoints ==
            (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumManifoldPoints>)0x0) {
          pFVar17 = ::FName::FName(&local_a8,"STAT_ChaosCounter_NumManifoldPoints");
          FVar23 = (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumManifoldPoints>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_ChaosCounter_NumManifoldPoints,*pFVar17,
                              L"NumManifoldPoints","STATGROUP_ChaosCounters","STATCAT_Advanced",
                              L"ChaosCounters",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar3 = *(FName *)FVar23;
        if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar19 == (FThreadStats *)0x0) {
            pFVar20 = FThreadStatsPool::Get();
            pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
          }
          local_128.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
          local_180 = FVar3;
          local_128.StatData.Pad = (uchar  [8])(longlong)local_res20;
          local_128.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar19,&local_128);
          FStatsTrace::Set(&local_180,(longlong)local_res20);
          if (pFVar19->ScopeCount == 0) {
            FThreadStats::Flush(pFVar19,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar19,false,false);
          }
        }
      }
      if (__CsvProfilerStat2911 == false) {
        FCsvProfilerTrace::OutputInlineStat("NumManifoldPoints",_GCsvCategory_PhysicsCounters.Index)
        ;
        __CsvProfilerStat2911 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("NumManifoldPoints",_GCsvCategory_PhysicsCounters.Index,local_res20,Set);
      lVar34 = (longlong)local_res20;
      if ((__GTraceCounterChaosTraceCounter_NumManifoldPoints.Value != lVar34) &&
         (__GTraceCounterChaosTraceCounter_NumManifoldPoints.Value = lVar34,
         -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterChaosTraceCounter_NumManifoldPoints.CounterId ==
            (atomic<unsigned_int>)0x0) {
          uVar11 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterChaosTraceCounter_NumManifoldPoints.CounterName,
                              TraceCounterType_Int,
                              __GTraceCounterChaosTraceCounter_NumManifoldPoints.CounterFlags & 0xf)
          ;
          LOCK();
          if (__GTraceCounterChaosTraceCounter_NumManifoldPoints.CounterId ==
              (atomic<unsigned_int>)0x0) {
            __GTraceCounterChaosTraceCounter_NumManifoldPoints.CounterId._2_2_ = 0;
            __GTraceCounterChaosTraceCounter_NumManifoldPoints.CounterId._0_2_ = uVar11;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterChaosTraceCounter_NumManifoldPoints.CounterId._0_2_,
                   __GTraceCounterChaosTraceCounter_NumManifoldPoints.Value);
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar24 = StatPtr_STAT_ChaosCounter_NumActiveManifoldPoints;
        if (StatPtr_STAT_ChaosCounter_NumActiveManifoldPoints ==
            (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumActiveManifoldPoints>)0x0) {
          pFVar17 = ::FName::FName(local_a0,"STAT_ChaosCounter_NumActiveManifoldPoints");
          FVar24 = (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumActiveManifoldPoints>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_ChaosCounter_NumActiveManifoldPoints,*pFVar17,
                              L"NumActiveManifoldPoints","STATGROUP_ChaosCounters",
                              "STATCAT_Advanced",L"ChaosCounters",true,true,ST_int64,false,false,
                              MCR_Invalid);
        }
        FVar3 = *(FName *)FVar24;
        if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar19 == (FThreadStats *)0x0) {
            pFVar20 = FThreadStatsPool::Get();
            pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
          }
          local_118.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
          local_178 = FVar3;
          local_118.StatData.Pad = (uchar  [8])(longlong)local_1f8;
          local_118.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar19,&local_118);
          FStatsTrace::Set(&local_178,(longlong)local_1f8);
          if (pFVar19->ScopeCount == 0) {
            FThreadStats::Flush(pFVar19,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar19,false,false);
          }
        }
      }
      if (__CsvProfilerStat2912 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("NumActiveManifoldPoints",_GCsvCategory_PhysicsCounters.Index);
        __CsvProfilerStat2912 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("NumActiveManifoldPoints",_GCsvCategory_PhysicsCounters.Index,local_1f8,Set);
      lVar34 = (longlong)local_1f8;
      if ((__GTraceCounterChaosTraceCounter_NumActiveManifoldPoints.Value != lVar34) &&
         (__GTraceCounterChaosTraceCounter_NumActiveManifoldPoints.Value = lVar34,
         -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterChaosTraceCounter_NumActiveManifoldPoints.CounterId ==
            (atomic<unsigned_int>)0x0) {
          uVar11 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterChaosTraceCounter_NumActiveManifoldPoints.CounterName,
                              TraceCounterType_Int,
                              __GTraceCounterChaosTraceCounter_NumActiveManifoldPoints.CounterFlags
                              & 0xf);
          LOCK();
          if (__GTraceCounterChaosTraceCounter_NumActiveManifoldPoints.CounterId ==
              (atomic<unsigned_int>)0x0) {
            __GTraceCounterChaosTraceCounter_NumActiveManifoldPoints.CounterId._2_2_ = 0;
            __GTraceCounterChaosTraceCounter_NumActiveManifoldPoints.CounterId._0_2_ = uVar11;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterChaosTraceCounter_NumActiveManifoldPoints.CounterId._0_2_,
                   __GTraceCounterChaosTraceCounter_NumActiveManifoldPoints.Value);
      }
      if (FThreadStats::bPrimaryEnable != false) {
        TVar21 = FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumRestoredManifoldPoints,1>::
                 GetStatId((FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumRestoredManifoldPoints,1>
                            *)&StatPtr_STAT_ChaosCounter_NumRestoredManifoldPoints);
        FVar3 = *(FName *)(TVar21.StatIdPtr)->Name;
        if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar19 == (FThreadStats *)0x0) {
            pFVar20 = FThreadStatsPool::Get();
            pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
          }
          local_108.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
          local_170 = FVar3;
          local_108.StatData.Pad = (uchar  [8])(longlong)local_1f4;
          local_108.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar19,&local_108);
          FStatsTrace::Set(&local_170,(longlong)local_1f4);
          if (pFVar19->ScopeCount == 0) {
            FThreadStats::Flush(pFVar19,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar19,false,false);
          }
        }
      }
      if (__CsvProfilerStat2913 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("NumRestoredManifoldPoints",_GCsvCategory_PhysicsCounters.Index);
        __CsvProfilerStat2913 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("NumRestoredManifoldPoints",_GCsvCategory_PhysicsCounters.Index,local_1f4,Set);
      lVar34 = (longlong)local_1f4;
      if ((__GTraceCounterChaosTraceCounter_NumRestoredManifoldPoints.Value != lVar34) &&
         (__GTraceCounterChaosTraceCounter_NumRestoredManifoldPoints.Value = lVar34,
         -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterChaosTraceCounter_NumRestoredManifoldPoints.CounterId ==
            (atomic<unsigned_int>)0x0) {
          uVar11 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterChaosTraceCounter_NumRestoredManifoldPoints.CounterName
                              ,TraceCounterType_Int,
                              __GTraceCounterChaosTraceCounter_NumRestoredManifoldPoints.
                              CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterChaosTraceCounter_NumRestoredManifoldPoints.CounterId ==
              (atomic<unsigned_int>)0x0) {
            __GTraceCounterChaosTraceCounter_NumRestoredManifoldPoints.CounterId._2_2_ = 0;
            __GTraceCounterChaosTraceCounter_NumRestoredManifoldPoints.CounterId._0_2_ = uVar11;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterChaosTraceCounter_NumRestoredManifoldPoints.CounterId._0_2_,
                   __GTraceCounterChaosTraceCounter_NumRestoredManifoldPoints.Value);
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar25 = StatPtr_STAT_ChaosCounter_NumUpdatedManifoldPoints;
        if (StatPtr_STAT_ChaosCounter_NumUpdatedManifoldPoints ==
            (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumUpdatedManifoldPoints>)0x0) {
          pFVar17 = ::FName::FName(&local_90,"STAT_ChaosCounter_NumUpdatedManifoldPoints");
          FVar25 = (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumUpdatedManifoldPoints>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_ChaosCounter_NumUpdatedManifoldPoints,*pFVar17,
                              L"NumUpdatedManifoldPoints","STATGROUP_ChaosCounters",
                              "STATCAT_Advanced",L"ChaosCounters",true,true,ST_int64,false,false,
                              MCR_Invalid);
        }
        FVar3 = *(FName *)FVar25;
        if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar19 == (FThreadStats *)0x0) {
            pFVar20 = FThreadStatsPool::Get();
            pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
          }
          local_f8.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
          local_168 = FVar3;
          local_f8.StatData.Pad = (uchar  [8])(longlong)local_1f0;
          local_f8.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar19,&local_f8);
          FStatsTrace::Set(&local_168,(longlong)local_1f0);
          if (pFVar19->ScopeCount == 0) {
            FThreadStats::Flush(pFVar19,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar19,false,false);
          }
        }
      }
      if (__CsvProfilerStat2914 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("NumUpdatedManifoldPoints",_GCsvCategory_PhysicsCounters.Index);
        __CsvProfilerStat2914 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("NumUpdatedManifoldPoints",_GCsvCategory_PhysicsCounters.Index,local_1f0,Set);
      lVar34 = (longlong)local_1f0;
      if ((__GTraceCounterChaosTraceCounter_NumUpdatedManifoldPoints.Value != lVar34) &&
         (__GTraceCounterChaosTraceCounter_NumUpdatedManifoldPoints.Value = lVar34,
         -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterChaosTraceCounter_NumUpdatedManifoldPoints.CounterId ==
            (atomic<unsigned_int>)0x0) {
          uVar11 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterChaosTraceCounter_NumUpdatedManifoldPoints.CounterName,
                              TraceCounterType_Int,
                              __GTraceCounterChaosTraceCounter_NumUpdatedManifoldPoints.CounterFlags
                              & 0xf);
          LOCK();
          if (__GTraceCounterChaosTraceCounter_NumUpdatedManifoldPoints.CounterId ==
              (atomic<unsigned_int>)0x0) {
            __GTraceCounterChaosTraceCounter_NumUpdatedManifoldPoints.CounterId._2_2_ = 0;
            __GTraceCounterChaosTraceCounter_NumUpdatedManifoldPoints.CounterId._0_2_ = uVar11;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterChaosTraceCounter_NumUpdatedManifoldPoints.CounterId._0_2_,
                   __GTraceCounterChaosTraceCounter_NumUpdatedManifoldPoints.Value);
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar26 = StatPtr_STAT_ChaosCounter_NumStaticShapes;
        if (StatPtr_STAT_ChaosCounter_NumStaticShapes ==
            (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumStaticShapes>)0x0) {
          pFVar17 = ::FName::FName(&local_88,"STAT_ChaosCounter_NumStaticShapes");
          FVar26 = (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumStaticShapes>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_ChaosCounter_NumStaticShapes,*pFVar17,L"NumStaticShapes"
                              ,"STATGROUP_ChaosCounters","STATCAT_Advanced",L"ChaosCounters",true,
                              true,ST_int64,false,false,MCR_Invalid);
        }
        FVar3 = *(FName *)FVar26;
        if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar19 == (FThreadStats *)0x0) {
            pFVar20 = FThreadStatsPool::Get();
            pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
          }
          local_e8.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
          local_160 = FVar3;
          local_e8.StatData.Pad = (uchar  [8])(longlong)iVar37;
          local_e8.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar19,&local_e8);
          FStatsTrace::Set(&local_160,(longlong)iVar37);
          if (pFVar19->ScopeCount == 0) {
            FThreadStats::Flush(pFVar19,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar19,false,false);
          }
        }
      }
      if (__CsvProfilerStat2915 == false) {
        FCsvProfilerTrace::OutputInlineStat("NumStaticShapes",_GCsvCategory_PhysicsCounters.Index);
        __CsvProfilerStat2915 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("NumStaticShapes",_GCsvCategory_PhysicsCounters.Index,iVar37,Set);
      lVar34 = (longlong)iVar37;
      if ((__GTraceCounterChaosTraceCounter_NumStaticShapes.Value != lVar34) &&
         (__GTraceCounterChaosTraceCounter_NumStaticShapes.Value = lVar34,
         -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterChaosTraceCounter_NumStaticShapes.CounterId == (atomic<unsigned_int>)0x0)
        {
          uVar11 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterChaosTraceCounter_NumStaticShapes.CounterName,
                              TraceCounterType_Int,
                              __GTraceCounterChaosTraceCounter_NumStaticShapes.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterChaosTraceCounter_NumStaticShapes.CounterId ==
              (atomic<unsigned_int>)0x0) {
            __GTraceCounterChaosTraceCounter_NumStaticShapes.CounterId._2_2_ = 0;
            __GTraceCounterChaosTraceCounter_NumStaticShapes.CounterId._0_2_ = uVar11;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterChaosTraceCounter_NumStaticShapes.CounterId._0_2_,
                   __GTraceCounterChaosTraceCounter_NumStaticShapes.Value);
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar27 = StatPtr_STAT_ChaosCounter_NumKinematicShapes;
        if (StatPtr_STAT_ChaosCounter_NumKinematicShapes ==
            (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumKinematicShapes>)0x0) {
          pFVar17 = ::FName::FName(&local_80,"STAT_ChaosCounter_NumKinematicShapes");
          FVar27 = (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumKinematicShapes>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_ChaosCounter_NumKinematicShapes,*pFVar17,
                              L"NumKinematicShapes","STATGROUP_ChaosCounters","STATCAT_Advanced",
                              L"ChaosCounters",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar3 = *(FName *)FVar27;
        if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar19 == (FThreadStats *)0x0) {
            pFVar20 = FThreadStatsPool::Get();
            pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
          }
          local_d8.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
          local_158 = FVar3;
          local_d8.StatData.Pad = (uchar  [8])(longlong)iVar41;
          local_d8.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar19,&local_d8);
          FStatsTrace::Set(&local_158,(longlong)iVar41);
          if (pFVar19->ScopeCount == 0) {
            FThreadStats::Flush(pFVar19,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar19,false,false);
          }
        }
      }
      if (DAT_155074be8 == '\0') {
        FCsvProfilerTrace::OutputInlineStat
                  ("NumKinematicShapes",_GCsvCategory_PhysicsCounters.Index);
        DAT_155074be8 = '\x01';
      }
      FCsvProfiler::RecordCustomStat
                ("NumKinematicShapes",_GCsvCategory_PhysicsCounters.Index,iVar41,Set);
      lVar34 = (longlong)iVar41;
      if ((__GTraceCounterChaosTraceCounter_NumKinematicShapes.Value != lVar34) &&
         (__GTraceCounterChaosTraceCounter_NumKinematicShapes.Value = lVar34,
         -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterChaosTraceCounter_NumKinematicShapes.CounterId ==
            (atomic<unsigned_int>)0x0) {
          uVar11 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterChaosTraceCounter_NumKinematicShapes.CounterName,
                              TraceCounterType_Int,
                              __GTraceCounterChaosTraceCounter_NumKinematicShapes.CounterFlags & 0xf
                             );
          LOCK();
          if (__GTraceCounterChaosTraceCounter_NumKinematicShapes.CounterId ==
              (atomic<unsigned_int>)0x0) {
            __GTraceCounterChaosTraceCounter_NumKinematicShapes.CounterId._2_2_ = 0;
            __GTraceCounterChaosTraceCounter_NumKinematicShapes.CounterId._0_2_ = uVar11;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterChaosTraceCounter_NumKinematicShapes.CounterId._0_2_,
                   __GTraceCounterChaosTraceCounter_NumKinematicShapes.Value);
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar28 = StatPtr_STAT_ChaosCounter_NumDynamicShapes;
        if (StatPtr_STAT_ChaosCounter_NumDynamicShapes ==
            (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDynamicShapes>)0x0) {
          pFVar17 = ::FName::FName(&local_78,"STAT_ChaosCounter_NumDynamicShapes");
          FVar28 = (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDynamicShapes>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_ChaosCounter_NumDynamicShapes,*pFVar17,
                              L"NumDynamicShapes","STATGROUP_ChaosCounters","STATCAT_Advanced",
                              L"ChaosCounters",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar3 = *(FName *)FVar28;
        if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar19 == (FThreadStats *)0x0) {
            pFVar20 = FThreadStatsPool::Get();
            pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
          }
          local_c8.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
          local_150 = FVar3;
          local_c8.StatData.Pad = (uchar  [8])(longlong)iVar39;
          local_c8.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar19,&local_c8);
          FStatsTrace::Set(&local_150,(longlong)iVar39);
          if (pFVar19->ScopeCount == 0) {
            FThreadStats::Flush(pFVar19,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar19,false,false);
          }
        }
      }
      if (DAT_155074be9 == '\0') {
        FCsvProfilerTrace::OutputInlineStat("NumDynamicShapes",_GCsvCategory_PhysicsCounters.Index);
        DAT_155074be9 = '\x01';
      }
      FCsvProfiler::RecordCustomStat
                ("NumDynamicShapes",_GCsvCategory_PhysicsCounters.Index,iVar39,Set);
      lVar34 = (longlong)iVar39;
      if ((__GTraceCounterChaosTraceCounter_NumDynamicShapes.Value != lVar34) &&
         (__GTraceCounterChaosTraceCounter_NumDynamicShapes.Value = lVar34,
         -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterChaosTraceCounter_NumDynamicShapes.CounterId == (atomic<unsigned_int>)0x0
           ) {
          uVar11 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterChaosTraceCounter_NumDynamicShapes.CounterName,
                              TraceCounterType_Int,
                              __GTraceCounterChaosTraceCounter_NumDynamicShapes.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterChaosTraceCounter_NumDynamicShapes.CounterId ==
              (atomic<unsigned_int>)0x0) {
            __GTraceCounterChaosTraceCounter_NumDynamicShapes.CounterId._2_2_ = 0;
            __GTraceCounterChaosTraceCounter_NumDynamicShapes.CounterId._0_2_ = uVar11;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterChaosTraceCounter_NumDynamicShapes.CounterId._0_2_,
                   __GTraceCounterChaosTraceCounter_NumDynamicShapes.Value);
      }
      return;
    }
    TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_1e0);
    uVar13 = uStack_1c8;
    lVar34 = (longlong)(int)uStack_1c8;
    this_01 = (TPBDRigidParticles<double,3> *)CONCAT44(local_1e0._20_4_,local_1e0._16_4_);
    pTVar15 = TPBDRigidParticles<double,3>::Handle(this_01,uStack_1c8);
    uVar12 = 0;
    if ((int)uVar13 < (int)this_01->_padding_) {
      uVar12 = ~uVar13 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(longlong *)(this_01->_padding_ + lVar34 * 8) != 0) {
      lVar35 = (longlong)(int)uStack_1c8;
      lVar34 = CONCAT44(local_1e0._20_4_,local_1e0._16_4_);
      iVar14 = 1;
      uVar13 = 0;
      if ((int)uStack_1c8 < *(int *)(lVar34 + 0x68)) {
        uVar13 = ~uStack_1c8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = *(FImplicitObject **)(*(longlong *)(lVar34 + 0x60) + lVar35 * 8);
      uVar9 = FImplicitObject::GetType(this_00);
      if (((uVar9 == '\x05') || (uVar9 == '\x0f')) && (this_00 != (FImplicitObject *)0x0)) {
        iVar14 = (int)this_00[3]._padding_;
      }
      plVar36 = (longlong *)(local_1e0 + 0x10);
      if ((EParticleType)iStack_1c4 < Clustered) {
        plVar36 = (longlong *)0x0;
      }
      if (plVar36 != (longlong *)0x0) {
        uVar13 = *(uint *)(plVar36 + 1);
        lVar34 = *plVar36;
        uVar12 = 0;
        if ((int)uVar13 < *(int *)(lVar34 + 0x6b8)) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar41 = iVar5;
        if (*(longlong *)(*(longlong *)(lVar34 + 0x6b0) + (longlong)(int)uVar13 * 8) != 0) {
          uVar13 = *(uint *)(plVar36 + 1);
          lVar34 = *plVar36;
          uVar12 = 0;
          if ((int)uVar13 < *(int *)(lVar34 + 0x6b8)) {
            uVar12 = ~uVar13 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)(*(longlong *)(*(longlong *)(lVar34 + 0x6b0) + (longlong)(int)uVar13 * 8) + 8)
              != 0) {
            uVar13 = *(uint *)(plVar36 + 1);
            lVar34 = *plVar36;
            uVar12 = 0;
            if ((int)uVar13 < *(int *)(lVar34 + 0x6b8)) {
              uVar12 = ~uVar13 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar14 = Chaos::Private::FConvexOptimizer::NumCollisionObjects
                               (*(FConvexOptimizer **)
                                 (*(longlong *)(lVar34 + 0x6b0) + (longlong)(int)uVar13 * 8));
          }
        }
      }
      pTVar16 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (pTVar15->field_0xc != '\0') {
        pTVar16 = pTVar15;
      }
      if (pTVar16 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_1440b82e7:
        pTVar16 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (pTVar15->field_0xc != '\0') {
          pTVar16 = pTVar15;
        }
        if (pTVar16 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          pTVar31 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)pTVar16->field_0xc) {
            pTVar31 = pTVar16;
          }
          if (pTVar31 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            EVar10 = Kinematic;
          }
          else {
            EVar10 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar31);
          }
          if (EVar10 == Sleeping) goto LAB_1440b8317;
        }
        pTVar16 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (pTVar15->field_0xc != '\0') {
          pTVar16 = pTVar15;
        }
        if (pTVar16 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          pTVar15 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)pTVar16->field_0xc) {
            pTVar15 = pTVar16;
          }
          if (pTVar15 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            EVar10 = Kinematic;
          }
          else {
            EVar10 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar15);
          }
          if (EVar10 == Kinematic) {
            iVar41 = iVar41 + iVar14;
            iVar5 = iVar41;
            goto LAB_1440b8356;
          }
        }
        iVar37 = iVar37 + iVar14;
      }
      else {
        pTVar31 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar16->field_0xc) {
          pTVar31 = pTVar16;
        }
        if (pTVar31 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          EVar10 = Kinematic;
        }
        else {
          EVar10 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar31);
        }
        if (EVar10 != Dynamic) goto LAB_1440b82e7;
LAB_1440b8317:
        iVar39 = iVar39 + iVar14;
      }
    }
LAB_1440b8356:
    TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_1e0);
    do {
      uVar7 = local_1e0._8_8_;
      if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
          local_1e0._8_8_ ==
          (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0
         ) {
        uStack_1c8 = uStack_1c8 + 1;
        if (local_1bc <= (int)uStack_1c8) {
LAB_1440b8378:
          local_1c0 = local_1c0 + 1;
          TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                    ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_1e0);
        }
      }
      else {
        iVar14 = local_1b8 + 1;
        local_1b8 = iVar14;
        if (*(int *)(local_1e0._8_8_ + 8) <= iVar14) goto LAB_1440b8378;
        if ((iVar14 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar36 = *(longlong **)(((ForAnyElementType *)uVar7)->Data + (longlong)iVar14 * 8);
        lVar34 = *plVar36;
        uStack_1c8 = *(uint *)(plVar36 + 1);
        if (lVar34 == 0) {
          iStack_194 = (uint)iStack_194._1_3_ << 8;
        }
        else {
          iStack_194 = CONCAT31(iStack_194._1_3_,*(undefined1 *)(lVar34 + 0x70));
        }
        local_1a0._0_4_ = (undefined4)lVar34;
        local_1e0._16_4_ = (undefined4)local_1a0;
        local_1a0._4_4_ = (undefined4)((ulonglong)lVar34 >> 0x20);
        local_1e0._20_4_ = local_1a0._4_4_;
        iStack_1c4 = iStack_194;
        local_1a0 = lVar34;
        uStack_198 = uStack_1c8;
      }
      if (CONCAT44(local_1e0._20_4_,local_1e0._16_4_) == 0) goto LAB_1440b83ae;
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_1e0);
      bVar8 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                        ((TGeometryParticleHandleImp<double,3,0> *)(local_1e0 + 0x10));
    } while (bVar8);
    lVar34 = CONCAT44(local_1e0._20_4_,local_1e0._16_4_);
  } while( true );
}

// UpdateExternalAccelerationStructure_External @ 1440b9730

void __thiscall
Chaos::FPBDRigidsSolver::UpdateExternalAccelerationStructure_External
          (FPBDRigidsSolver *this,
          ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> **param_1)

{
  FPBDRigidsEvolutionBase::UpdateExternalAccelerationStructure_External
            ((FPBDRigidsEvolutionBase *)(this->MEvolution).Ptr,param_1,
             (FPendingSpatialDataQueue *)this->_padding_);
  return;
}

// UpdateGameThreadStructures @ 1440b9750

void __thiscall Chaos::FPBDRigidsSolver::UpdateGameThreadStructures(FPBDRigidsSolver *this)

{
  FDispatcher local_res10 [24];
  
  FPhysicsSolverBase::
  PullPhysicsStateForEachDirtyProxy_External<_Chaos::FPBDRigidsSolver::UpdateGameThreadStructures_::__l2::FDispatcher>
            ((FPhysicsSolverBase *)this,local_res10);
  return;
}

// UpdateIsDeterministic @ 1440b9760

void __thiscall Chaos::FPBDRigidsSolver::UpdateIsDeterministic(FPBDRigidsSolver *this)

{
  FPBDRigidsEvolutionGBF *this_00;
  char cVar1;
  FChaosSolversModule *this_01;
  IChaosSettingsProvider *pIVar2;
  
  this_00 = (this->MEvolution).Ptr;
  if (((this->bIsDeterministic == false) && (this->_padding_ == 0)) &&
     (CVars::ChaosSolverDeterministic < 1)) {
    this_01 = FChaosSolversModule::GetModule();
    pIVar2 = FChaosSolversModule::GetSettingsProvider(this_01);
    cVar1 = (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    if (cVar1 == '\0') {
      FPBDRigidsEvolutionGBF::SetIsDeterministic(this_00,false);
      return;
    }
  }
  FPBDRigidsEvolutionGBF::SetIsDeterministic(this_00,true);
  return;
}

// UpdateMaterial @ 1440b97d0

void __thiscall
Chaos::FPBDRigidsSolver::UpdateMaterial
          (FPBDRigidsSolver *this,FMaterialHandle param_1,FChaosPhysicsMaterial *param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  void *pvVar12;
  undefined4 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined2 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  undefined4 uVar22;
  bool bVar23;
  FChaosPhysicsMaterial *pFVar24;
  uint uVar25;
  ForElementType<unsigned_int> FVar26;
  float local_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  
  if (this == (FPBDRigidsSolver *)0x0) {
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("Solver",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PBDRigidsSolver.h"
                        ,0x203,L"");
    if (bVar23) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
  dVar2 = param_2->Friction;
  dVar3 = param_2->StaticFriction;
  dVar4 = param_2->Restitution;
  dVar5 = param_2->Density;
  dVar6 = param_2->LinearEtherDrag;
  dVar7 = param_2->AngularEtherDrag;
  dVar8 = param_2->SleepingLinearThreshold;
  dVar9 = param_2->SleepingAngularThreshold;
  dVar10 = param_2->DisabledLinearThreshold;
  dVar11 = param_2->DisabledAngularThreshold;
  iVar21 = param_2->SleepCounterThreshold;
  uVar22 = *(undefined4 *)&param_2->field_0x54;
  pvVar12 = param_2->UserData;
  uVar13 = param_2->BaseFrictionImpulse;
  uVar14 = param_2->FrictionCombineMode;
  uVar15 = param_2->RestitutionCombineMode;
  uVar16 = *(undefined2 *)&param_2->field_0x66;
  uVar17 = (param_2->Strength).TensileStrength;
  uVar18 = (param_2->Strength).CompressionStrength;
  uVar19 = *(undefined8 *)&(param_2->Strength).ShearStrength;
  uVar20._0_1_ = param_2->SoftCollisionMode;
  uVar20._1_3_ = *(undefined3 *)&param_2->field_0x79;
  uVar20._4_4_ = param_2->SoftCollisionThickness;
  if (0xffffff < (uint)param_1.InnerHandle) {
    uVar25 = (uint)param_1.InnerHandle & 0xffffff;
    if ((int)uVar25 < (this->SimMaterials).Validity.NumBits) {
      if ((this->SimMaterials).Validity.NumBits <= (int)uVar25) {
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L"");
        if (bVar23) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FVar26 = (this->SimMaterials).Validity.AllocatorInstance.SecondaryData;
      if (FVar26 == (ForElementType<unsigned_int>)0x0) {
        FVar26 = (ForElementType<unsigned_int>)&(this->SimMaterials).Validity;
      }
      if ((*(uint *)((longlong)FVar26 + (ulonglong)(uVar25 >> 5) * 4) >>
           ((uint)param_1.InnerHandle & 0x1f) & 1) != 0) {
        if ((this->SimMaterials).HandleEntries.ArrayNum <= (int)uVar25) {
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar23) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if ((this->SimMaterials).HandleEntries.AllocatorInstance.Data[(ulonglong)uVar25 * 4 + 3] ==
            param_1.InnerHandle._3_1_) {
          pFVar24 = (this->SimMaterials).Data + ((uint)param_1.InnerHandle & 0xffffff);
          goto LAB_1440b9961;
        }
      }
    }
  }
  pFVar24 = (FChaosPhysicsMaterial *)0x0;
LAB_1440b9961:
  pFVar24->Friction = dVar2;
  pFVar24->StaticFriction = dVar3;
  pFVar24->Restitution = dVar4;
  pFVar24->Density = dVar5;
  pFVar24->LinearEtherDrag = dVar6;
  pFVar24->AngularEtherDrag = dVar7;
  pFVar24->SleepingLinearThreshold = dVar8;
  pFVar24->SleepingAngularThreshold = dVar9;
  pFVar24->DisabledLinearThreshold = dVar10;
  pFVar24->DisabledAngularThreshold = dVar11;
  pFVar24->SleepCounterThreshold = iVar21;
  *(undefined4 *)&pFVar24->field_0x54 = uVar22;
  pFVar24->UserData = pvVar12;
  local_28 = (float)uVar19;
  fStack_24 = (float)((ulonglong)uVar19 >> 0x20);
  uStack_20 = (undefined4)uVar20;
  pFVar24->BaseFrictionImpulse = (float)uVar13;
  pFVar24->FrictionCombineMode = uVar14;
  pFVar24->RestitutionCombineMode = uVar15;
  *(undefined2 *)&pFVar24->field_0x66 = uVar16;
  (pFVar24->Strength).TensileStrength = (float)uVar17;
  (pFVar24->Strength).CompressionStrength = (float)uVar18;
  (pFVar24->Strength).ShearStrength = local_28;
  (pFVar24->DamageModifier).DamageThresholdMultiplier = fStack_24;
  *(undefined4 *)&pFVar24->SoftCollisionMode = uStack_20;
  pFVar24->SoftCollisionThickness = (float)uVar20._4_4_;
                    /* WARNING: Could not recover jumptable at 0x0001440b99d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
  return;
}

// UpdateMaterialMask @ 1440b99e0

void __thiscall
Chaos::FPBDRigidsSolver::UpdateMaterialMask
          (FPBDRigidsSolver *this,FMaterialMaskHandle param_1,FChaosPhysicsMaterialMask *param_2)

{
  code *pcVar1;
  bool bVar2;
  FChaosPhysicsMaterialMask *pFVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  
  if (this == (FPBDRigidsSolver *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PBDRigidsSolver.h"
                       ,0x203,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
  if (0xffffff < (uint)param_1.InnerHandle) {
    uVar4 = (uint)param_1.InnerHandle & 0xffffff;
    if ((int)uVar4 < (this->SimMaterialMasks).Validity.NumBits) {
      if ((this->SimMaterialMasks).Validity.NumBits <= (int)uVar4) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FVar5 = (this->SimMaterialMasks).Validity.AllocatorInstance.SecondaryData;
      if (FVar5 == (ForElementType<unsigned_int>)0x0) {
        FVar5 = (ForElementType<unsigned_int>)&(this->SimMaterialMasks).Validity;
      }
      if ((*(uint *)((longlong)FVar5 + (ulonglong)(uVar4 >> 5) * 4) >>
           ((uint)param_1.InnerHandle & 0x1f) & 1) != 0) {
        if ((this->SimMaterialMasks).HandleEntries.ArrayNum <= (int)uVar4) {
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
        if ((this->SimMaterialMasks).HandleEntries.AllocatorInstance.Data[(ulonglong)uVar4 * 4 + 3]
            == param_1.InnerHandle._3_1_) {
          pFVar3 = (this->SimMaterialMasks).Data + ((uint)param_1.InnerHandle & 0xffffff);
          goto LAB_1440b9b1f;
        }
      }
    }
  }
  pFVar3 = (FChaosPhysicsMaterialMask *)0x0;
LAB_1440b9b1f:
  pFVar3->SizeX = param_2->SizeX;
  pFVar3->SizeY = param_2->SizeY;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=(&pFVar3->MaskData,&param_2->MaskData);
  pFVar3->UVChannelIndex = param_2->UVChannelIndex;
  pFVar3->AddressX = param_2->AddressX;
  pFVar3->AddressY = param_2->AddressY;
                    /* WARNING: Could not recover jumptable at 0x0001440b9b6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
  return;
}

// UpdateStatCounters @ 1440baf50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDRigidsSolver::UpdateStatCounters(FPBDRigidsSolver *this)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  FPBDRigidsEvolutionGBF *pFVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDisabledBodies> FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumBodies> FVar14;
  FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDynamicBodies> FVar15;
  FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumKinematicBodies> FVar16;
  TStatId TVar17;
  FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumIslandGroups> FVar18;
  FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumProjectionIterations> FVar19;
  longlong lVar20;
  uchar auVar21 [8];
  uchar auVar22 [8];
  uchar auVar23 [8];
  FName local_res20;
  FName local_118;
  FName local_110;
  FName local_108;
  FStatMessage local_100;
  FStatMessage local_f0;
  FStatMessage local_e0;
  FStatMessage local_d0;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8 [3];
  FName local_90 [7];
  FName local_58 [3];
  
  lVar20 = ((this->MEvolution).Ptr)->_padding_;
  iVar8 = *(int *)(lVar20 + 0x6b0);
  iVar9 = *(int *)(lVar20 + 0x668);
  auVar22 = (uchar  [8])(longlong)iVar9;
  iVar1 = *(int *)(lVar20 + 0x5f0);
  auVar21 = (uchar  [8])(longlong)iVar1;
  iVar2 = *(int *)(lVar20 + 0x698);
  if (FThreadStats::bPrimaryEnable) {
    FVar11 = StatPtr_STAT_ChaosCounter_NumDisabledBodies;
    if (StatPtr_STAT_ChaosCounter_NumDisabledBodies ==
        (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDisabledBodies>)0x0) {
      pFVar10 = ::FName::FName(&local_c0,"STAT_ChaosCounter_NumDisabledBodies");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDisabledBodies>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosCounter_NumDisabledBodies,
                          *pFVar10,L"NumDisabledBodies","STATGROUP_ChaosCounters","STATCAT_Advanced"
                          ,L"ChaosCounters",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar11;
    lVar20 = ((this->MEvolution).Ptr)->_padding_;
    auVar23 = (uchar  [8])(longlong)(*(int *)(lVar20 + 0x650) - *(int *)(lVar20 + 0x5d8));
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_100.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
      local_res20 = FVar3;
      local_100.StatData.Pad = auVar23;
      local_100.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_100);
      FStatsTrace::Set(&local_res20,(long64)auVar23);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  if (__CsvProfilerStat2789 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumDisabledBodies",_GCsvCategory_PhysicsCounters.Index);
    __CsvProfilerStat2789 = true;
  }
  lVar20 = ((this->MEvolution).Ptr)->_padding_;
  FCsvProfiler::RecordCustomStat
            ("NumDisabledBodies",_GCsvCategory_PhysicsCounters.Index,
             *(int *)(lVar20 + 0x650) - *(int *)(lVar20 + 0x5d8),Set);
  lVar20 = ((this->MEvolution).Ptr)->_padding_;
  lVar20 = (longlong)(*(int *)(lVar20 + 0x650) - *(int *)(lVar20 + 0x5d8));
  if ((__GTraceCounterChaosTraceCounter_NumDisabledBodies.Value != lVar20) &&
     (__GTraceCounterChaosTraceCounter_NumDisabledBodies.Value = lVar20,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterChaosTraceCounter_NumDisabledBodies.CounterId == (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChaosTraceCounter_NumDisabledBodies.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterChaosTraceCounter_NumDisabledBodies.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterChaosTraceCounter_NumDisabledBodies.CounterId == (atomic<unsigned_int>)0x0)
      {
        __GTraceCounterChaosTraceCounter_NumDisabledBodies.CounterId._2_2_ = 0;
        __GTraceCounterChaosTraceCounter_NumDisabledBodies.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterChaosTraceCounter_NumDisabledBodies.CounterId._0_2_,
               __GTraceCounterChaosTraceCounter_NumDisabledBodies.Value);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar14 = StatPtr_STAT_ChaosCounter_NumBodies;
    if (StatPtr_STAT_ChaosCounter_NumBodies ==
        (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumBodies>)0x0) {
      pFVar10 = ::FName::FName(&local_b8,"STAT_ChaosCounter_NumBodies");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumBodies>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosCounter_NumBodies,*pFVar10
                          ,L"NumBodies","STATGROUP_ChaosCounters","STATCAT_Advanced",
                          L"ChaosCounters",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar14;
    auVar23 = (uchar  [8])(longlong)*(int *)(((this->MEvolution).Ptr)->_padding_ + 0x5d8);
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_f0.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
      local_118 = FVar3;
      local_f0.StatData.Pad = auVar23;
      local_f0.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_f0);
      FStatsTrace::Set(&local_118,(long64)auVar23);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  if (__CsvProfilerStat2790 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumBodies",_GCsvCategory_PhysicsCounters.Index);
    __CsvProfilerStat2790 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumBodies",_GCsvCategory_PhysicsCounters.Index,
             *(int *)(((this->MEvolution).Ptr)->_padding_ + 0x5d8),Set);
  lVar20 = (longlong)*(int *)(((this->MEvolution).Ptr)->_padding_ + 0x5d8);
  if ((__GTraceCounterChaosTraceCounter_NumBodies.Value != lVar20) &&
     (__GTraceCounterChaosTraceCounter_NumBodies.Value = lVar20, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterChaosTraceCounter_NumBodies.CounterId == (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChaosTraceCounter_NumBodies.CounterName,TraceCounterType_Int
                         ,__GTraceCounterChaosTraceCounter_NumBodies.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterChaosTraceCounter_NumBodies.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterChaosTraceCounter_NumBodies.CounterId._2_2_ = 0;
        __GTraceCounterChaosTraceCounter_NumBodies.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterChaosTraceCounter_NumBodies.CounterId._0_2_,
               __GTraceCounterChaosTraceCounter_NumBodies.Value);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar15 = StatPtr_STAT_ChaosCounter_NumDynamicBodies;
    if (StatPtr_STAT_ChaosCounter_NumDynamicBodies ==
        (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDynamicBodies>)0x0) {
      pFVar10 = ::FName::FName(&local_b0,"STAT_ChaosCounter_NumDynamicBodies");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDynamicBodies>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosCounter_NumDynamicBodies,
                          *pFVar10,L"NumDynamicBodies","STATGROUP_ChaosCounters","STATCAT_Advanced",
                          L"ChaosCounters",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar15;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_e0.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
      local_110 = FVar3;
      local_e0.StatData.Pad = auVar21;
      local_e0.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_e0);
      FStatsTrace::Set(&local_110,(long64)auVar21);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  if (__CsvProfilerStat2791 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumDynamicBodies",_GCsvCategory_PhysicsCounters.Index);
    __CsvProfilerStat2791 = true;
  }
  FCsvProfiler::RecordCustomStat("NumDynamicBodies",_GCsvCategory_PhysicsCounters.Index,iVar1,Set);
  if (((uchar  [8])__GTraceCounterChaosTraceCounter_NumDynamicBodies.Value != auVar21) &&
     (__GTraceCounterChaosTraceCounter_NumDynamicBodies.Value = (long64)auVar21,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterChaosTraceCounter_NumDynamicBodies.CounterId == (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChaosTraceCounter_NumDynamicBodies.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterChaosTraceCounter_NumDynamicBodies.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterChaosTraceCounter_NumDynamicBodies.CounterId == (atomic<unsigned_int>)0x0)
      {
        __GTraceCounterChaosTraceCounter_NumDynamicBodies.CounterId._2_2_ = 0;
        __GTraceCounterChaosTraceCounter_NumDynamicBodies.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterChaosTraceCounter_NumDynamicBodies.CounterId._0_2_,
               __GTraceCounterChaosTraceCounter_NumDynamicBodies.Value);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar16 = StatPtr_STAT_ChaosCounter_NumKinematicBodies;
    if (StatPtr_STAT_ChaosCounter_NumKinematicBodies ==
        (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumKinematicBodies>)0x0) {
      pFVar10 = ::FName::FName(local_a8,"STAT_ChaosCounter_NumKinematicBodies");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumKinematicBodies>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosCounter_NumKinematicBodies
                          ,*pFVar10,L"NumKinematicBodies","STATGROUP_ChaosCounters",
                          "STATCAT_Advanced",L"ChaosCounters",true,true,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar3 = *(FName *)FVar16;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_d0.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
      local_108 = FVar3;
      local_d0.StatData.Pad = auVar22;
      local_d0.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_d0);
      FStatsTrace::Set(&local_108,(long64)auVar22);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  if (__CsvProfilerStat2792 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumKinematicBodies",_GCsvCategory_PhysicsCounters.Index);
    __CsvProfilerStat2792 = true;
  }
  FCsvProfiler::RecordCustomStat("NumKinematicBodies",_GCsvCategory_PhysicsCounters.Index,iVar9,Set)
  ;
  if (((uchar  [8])__GTraceCounterChaosTraceCounter_NumKinematicBodies.Value != auVar22) &&
     (__GTraceCounterChaosTraceCounter_NumKinematicBodies.Value = (long64)auVar22,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterChaosTraceCounter_NumKinematicBodies.CounterId == (atomic<unsigned_int>)0x0)
    {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChaosTraceCounter_NumKinematicBodies.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterChaosTraceCounter_NumKinematicBodies.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterChaosTraceCounter_NumKinematicBodies.CounterId == (atomic<unsigned_int>)0x0
         ) {
        __GTraceCounterChaosTraceCounter_NumKinematicBodies.CounterId._2_2_ = 0;
        __GTraceCounterChaosTraceCounter_NumKinematicBodies.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterChaosTraceCounter_NumKinematicBodies.CounterId._0_2_,
               __GTraceCounterChaosTraceCounter_NumKinematicBodies.Value);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    TVar17 = FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumStaticBodies,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumStaticBodies,1> *)
                        &StatPtr_STAT_ChaosCounter_NumStaticBodies);
    FThreadStats::AddMessage<__int64>(*(FName *)(TVar17.StatIdPtr)->Name,Set,(longlong)iVar8,false);
  }
  if (__CsvProfilerStat2793 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumStaticBodies",_GCsvCategory_PhysicsCounters.Index);
    __CsvProfilerStat2793 = true;
  }
  FCsvProfiler::RecordCustomStat("NumStaticBodies",_GCsvCategory_PhysicsCounters.Index,iVar8,Set);
  lVar20 = (longlong)iVar8;
  if ((__GTraceCounterChaosTraceCounter_NumStaticBodies.Value != lVar20) &&
     (__GTraceCounterChaosTraceCounter_NumStaticBodies.Value = lVar20, -1 < CountersChannel->Enabled
     )) {
    if (__GTraceCounterChaosTraceCounter_NumStaticBodies.CounterId == (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChaosTraceCounter_NumStaticBodies.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterChaosTraceCounter_NumStaticBodies.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterChaosTraceCounter_NumStaticBodies.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterChaosTraceCounter_NumStaticBodies.CounterId._2_2_ = 0;
        __GTraceCounterChaosTraceCounter_NumStaticBodies.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterChaosTraceCounter_NumStaticBodies.CounterId._0_2_,
               __GTraceCounterChaosTraceCounter_NumStaticBodies.Value);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    TVar17 = FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumMovingBodies,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumMovingBodies,1> *)
                        &StatPtr_STAT_ChaosCounter_NumMovingBodies);
    FThreadStats::AddMessage<__int64>(*(FName *)(TVar17.StatIdPtr)->Name,Set,(longlong)iVar2,false);
  }
  if (__CsvProfilerStat2794 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumMovingBodies",_GCsvCategory_PhysicsCounters.Index);
    __CsvProfilerStat2794 = true;
  }
  FCsvProfiler::RecordCustomStat("NumMovingBodies",_GCsvCategory_PhysicsCounters.Index,iVar2,Set);
  lVar20 = (longlong)iVar2;
  if ((__GTraceCounterChaosTraceCounter_NumMovingBodies.Value != lVar20) &&
     (__GTraceCounterChaosTraceCounter_NumMovingBodies.Value = lVar20, -1 < CountersChannel->Enabled
     )) {
    if (__GTraceCounterChaosTraceCounter_NumMovingBodies.CounterId == (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChaosTraceCounter_NumMovingBodies.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterChaosTraceCounter_NumMovingBodies.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterChaosTraceCounter_NumMovingBodies.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterChaosTraceCounter_NumMovingBodies.CounterId._2_2_ = 0;
        __GTraceCounterChaosTraceCounter_NumMovingBodies.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterChaosTraceCounter_NumMovingBodies.CounterId._0_2_,
               __GTraceCounterChaosTraceCounter_NumMovingBodies.Value);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    TVar17 = FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumGeometryCollectionBodies,1>::
             GetStatId((FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumGeometryCollectionBodies,1>
                        *)&StatPtr_STAT_ChaosCounter_NumGeometryCollectionBodies);
    FThreadStats::AddMessage<__int64>
              (*(FName *)(TVar17.StatIdPtr)->Name,Set,
               (longlong)*(int *)(*(longlong *)(((this->MEvolution).Ptr)->_padding_ + 0x40) + 0x18),
               false);
  }
  if (__CsvProfilerStat2795 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("NumGeometryCollectionBodies",_GCsvCategory_PhysicsCounters.Index);
    __CsvProfilerStat2795 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumGeometryCollectionBodies",_GCsvCategory_PhysicsCounters.Index,
             *(int *)(*(longlong *)(((this->MEvolution).Ptr)->_padding_ + 0x40) + 0x18),Set);
  lVar20 = (longlong)*(int *)(*(longlong *)(((this->MEvolution).Ptr)->_padding_ + 0x40) + 0x18);
  if ((__GTraceCounterChaosTraceCounter_NumGeometryCollectionBodies.Value != lVar20) &&
     (__GTraceCounterChaosTraceCounter_NumGeometryCollectionBodies.Value = lVar20,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterChaosTraceCounter_NumGeometryCollectionBodies.CounterId ==
        (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChaosTraceCounter_NumGeometryCollectionBodies.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterChaosTraceCounter_NumGeometryCollectionBodies.CounterFlags &
                         0xf);
      LOCK();
      if (__GTraceCounterChaosTraceCounter_NumGeometryCollectionBodies.CounterId ==
          (atomic<unsigned_int>)0x0) {
        __GTraceCounterChaosTraceCounter_NumGeometryCollectionBodies.CounterId._2_2_ = 0;
        __GTraceCounterChaosTraceCounter_NumGeometryCollectionBodies.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterChaosTraceCounter_NumGeometryCollectionBodies.CounterId._0_2_,
               __GTraceCounterChaosTraceCounter_NumGeometryCollectionBodies.Value);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    TVar17 = FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumIslands,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumIslands,1> *)
                        &StatPtr_STAT_ChaosCounter_NumIslands);
    FThreadStats::AddMessage<__int64>
              (*(FName *)(TVar17.StatIdPtr)->Name,Set,
               (longlong)(int)((this->MEvolution).Ptr)->_padding_,false);
  }
  if (__CsvProfilerStat2798 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumIslands",_GCsvCategory_PhysicsCounters.Index);
    __CsvProfilerStat2798 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumIslands",_GCsvCategory_PhysicsCounters.Index,
             (int)((this->MEvolution).Ptr)->_padding_,Set);
  lVar20 = (longlong)(int)((this->MEvolution).Ptr)->_padding_;
  if ((__GTraceCounterChaosTraceCounter_NumIslands.Value != lVar20) &&
     (__GTraceCounterChaosTraceCounter_NumIslands.Value = lVar20, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterChaosTraceCounter_NumIslands.CounterId == (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChaosTraceCounter_NumIslands.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterChaosTraceCounter_NumIslands.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterChaosTraceCounter_NumIslands.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterChaosTraceCounter_NumIslands.CounterId._2_2_ = 0;
        __GTraceCounterChaosTraceCounter_NumIslands.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterChaosTraceCounter_NumIslands.CounterId._0_2_,
               __GTraceCounterChaosTraceCounter_NumIslands.Value);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar18 = StatPtr_STAT_ChaosCounter_NumIslandGroups;
    if (StatPtr_STAT_ChaosCounter_NumIslandGroups ==
        (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumIslandGroups>)0x0) {
      pFVar10 = ::FName::FName(local_90,"STAT_ChaosCounter_NumIslandGroups");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumIslandGroups>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosCounter_NumIslandGroups,
                          *pFVar10,L"NumIslandGroups","STATGROUP_ChaosCounters","STATCAT_Advanced",
                          L"ChaosCounters",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FThreadStats::AddMessage<__int64>
              (*(FName *)FVar18,Set,(longlong)(int)((this->MEvolution).Ptr)->_padding_,false);
  }
  if (__CsvProfilerStat2799 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumIslandGroups",_GCsvCategory_PhysicsCounters.Index);
    __CsvProfilerStat2799 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumIslandGroups",_GCsvCategory_PhysicsCounters.Index,
             (int)((this->MEvolution).Ptr)->_padding_,Set);
  lVar20 = (longlong)(int)((this->MEvolution).Ptr)->_padding_;
  if ((__GTraceCounterChaosTraceCounter_NumIslandGroups.Value != lVar20) &&
     (__GTraceCounterChaosTraceCounter_NumIslandGroups.Value = lVar20, -1 < CountersChannel->Enabled
     )) {
    if (__GTraceCounterChaosTraceCounter_NumIslandGroups.CounterId == (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChaosTraceCounter_NumIslandGroups.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterChaosTraceCounter_NumIslandGroups.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterChaosTraceCounter_NumIslandGroups.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterChaosTraceCounter_NumIslandGroups.CounterId._2_2_ = 0;
        __GTraceCounterChaosTraceCounter_NumIslandGroups.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterChaosTraceCounter_NumIslandGroups.CounterId._0_2_,
               __GTraceCounterChaosTraceCounter_NumIslandGroups.Value);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    TVar17 = FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumContacts,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumContacts,1> *)
                        &StatPtr_STAT_ChaosCounter_NumContacts);
    FVar3 = *(FName *)(TVar17.StatIdPtr)->Name;
    iVar8 = NumCollisionConstraints(this);
    FThreadStats::AddMessage<__int64>(FVar3,Set,(longlong)iVar8,false);
  }
  if (__CsvProfilerStat2800 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumContacts",_GCsvCategory_PhysicsCounters.Index);
    __CsvProfilerStat2800 = true;
  }
  iVar8 = (((this->MEvolution).Ptr)->CollisionConstraints).ConstraintAllocator.ActiveConstraints.
          ArrayNum;
  if ((iVar8 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FCsvProfiler::RecordCustomStat("NumContacts",_GCsvCategory_PhysicsCounters.Index,iVar8,Set);
  iVar8 = (((this->MEvolution).Ptr)->CollisionConstraints).ConstraintAllocator.ActiveConstraints.
          ArrayNum;
  lVar20 = (longlong)iVar8;
  if ((iVar8 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((__GTraceCounterChaosTraceCounter_NumContacts.Value != lVar20) &&
     (__GTraceCounterChaosTraceCounter_NumContacts.Value = lVar20, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterChaosTraceCounter_NumContacts.CounterId == (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChaosTraceCounter_NumContacts.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterChaosTraceCounter_NumContacts.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterChaosTraceCounter_NumContacts.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterChaosTraceCounter_NumContacts.CounterId._2_2_ = 0;
        __GTraceCounterChaosTraceCounter_NumContacts.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterChaosTraceCounter_NumContacts.CounterId._0_2_,
               __GTraceCounterChaosTraceCounter_NumContacts.Value);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    TVar17 = FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumJoints,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumJoints,1> *)
                        &StatPtr_STAT_ChaosCounter_NumJoints);
    FVar3 = *(FName *)(TVar17.StatIdPtr)->Name;
    pFVar4 = (this->MEvolution).Ptr;
    iVar8 = FPBDJointConstraints::NumConstraints(&(pFVar4->JointConstraints).NonLinearConstraints);
    iVar9 = FPBDJointConstraints::NumConstraints(&(pFVar4->JointConstraints).LinearConstraints);
    FThreadStats::AddMessage<__int64>(FVar3,Set,(longlong)(iVar8 + iVar9),false);
  }
  if (__CsvProfilerStat2801 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumJoints",_GCsvCategory_PhysicsCounters.Index);
    __CsvProfilerStat2801 = true;
  }
  pFVar4 = (this->MEvolution).Ptr;
  iVar8 = FPBDJointConstraints::NumConstraints(&(pFVar4->JointConstraints).LinearConstraints);
  iVar9 = FPBDJointConstraints::NumConstraints(&(pFVar4->JointConstraints).NonLinearConstraints);
  FCsvProfiler::RecordCustomStat("NumJoints",_GCsvCategory_PhysicsCounters.Index,iVar9 + iVar8,Set);
  pFVar4 = (this->MEvolution).Ptr;
  iVar8 = FPBDJointConstraints::NumConstraints(&(pFVar4->JointConstraints).NonLinearConstraints);
  iVar9 = FPBDJointConstraints::NumConstraints(&(pFVar4->JointConstraints).LinearConstraints);
  lVar20 = (longlong)(iVar9 + iVar8);
  if ((__GTraceCounterChaosTraceCounter_NumJoints.Value != lVar20) &&
     (__GTraceCounterChaosTraceCounter_NumJoints.Value = lVar20, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterChaosTraceCounter_NumJoints.CounterId == (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChaosTraceCounter_NumJoints.CounterName,TraceCounterType_Int
                         ,__GTraceCounterChaosTraceCounter_NumJoints.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterChaosTraceCounter_NumJoints.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterChaosTraceCounter_NumJoints.CounterId._2_2_ = 0;
        __GTraceCounterChaosTraceCounter_NumJoints.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterChaosTraceCounter_NumJoints.CounterId._0_2_,
               __GTraceCounterChaosTraceCounter_NumJoints.Value);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    TVar17 = FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumCharacterGroundConstraints,1>::
             GetStatId((FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumCharacterGroundConstraints,1>
                        *)&StatPtr_STAT_ChaosCounter_NumCharacterGroundConstraints);
    FThreadStats::AddMessage<__int64>
              (*(FName *)(TVar17.StatIdPtr)->Name,Set,
               (longlong)(((this->MEvolution).Ptr)->CharacterGroundConstraints).Constraints.ArrayNum
               ,false);
  }
  if (__CsvProfilerStat2802 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("NumCharacterGroundConstraints",_GCsvCategory_PhysicsCounters.Index);
    __CsvProfilerStat2802 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumCharacterGroundConstraints",_GCsvCategory_PhysicsCounters.Index,
             (((this->MEvolution).Ptr)->CharacterGroundConstraints).Constraints.ArrayNum,Set);
  lVar20 = (longlong)(((this->MEvolution).Ptr)->CharacterGroundConstraints).Constraints.ArrayNum;
  if ((__GTraceCounterChaosTraceCounter_NumCharacterGroundConstraints.Value != lVar20) &&
     (__GTraceCounterChaosTraceCounter_NumCharacterGroundConstraints.Value = lVar20,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterChaosTraceCounter_NumCharacterGroundConstraints.CounterId ==
        (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChaosTraceCounter_NumCharacterGroundConstraints.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterChaosTraceCounter_NumCharacterGroundConstraints.CounterFlags
                         & 0xf);
      LOCK();
      if (__GTraceCounterChaosTraceCounter_NumCharacterGroundConstraints.CounterId ==
          (atomic<unsigned_int>)0x0) {
        __GTraceCounterChaosTraceCounter_NumCharacterGroundConstraints.CounterId._2_2_ = 0;
        __GTraceCounterChaosTraceCounter_NumCharacterGroundConstraints.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterChaosTraceCounter_NumCharacterGroundConstraints.CounterId._0_2_,
               __GTraceCounterChaosTraceCounter_NumCharacterGroundConstraints.Value);
  }
  UpdateExpensiveStatCounters(this);
  if (FThreadStats::bPrimaryEnable != false) {
    TVar17 = FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumBroadPhasePairs,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumBroadPhasePairs,1> *)
                        &StatPtr_STAT_ChaosCounter_NumBroadPhasePairs);
    FThreadStats::AddMessage<__int64>
              (*(FName *)(TVar17.StatIdPtr)->Name,Set,
               (longlong)(((this->MEvolution).Ptr)->BroadPhase).NumBroadPhasePairs,false);
  }
  if (__CsvProfilerStat2809 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumBroadPhasePairs",_GCsvCategory_PhysicsCounters.Index);
    __CsvProfilerStat2809 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumBroadPhasePairs",_GCsvCategory_PhysicsCounters.Index,
             (((this->MEvolution).Ptr)->BroadPhase).NumBroadPhasePairs,Set);
  lVar20 = (longlong)(((this->MEvolution).Ptr)->BroadPhase).NumBroadPhasePairs;
  if ((__GTraceCounterChaosTraceCounter_NumBroadPhasePairs.Value != lVar20) &&
     (__GTraceCounterChaosTraceCounter_NumBroadPhasePairs.Value = lVar20,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterChaosTraceCounter_NumBroadPhasePairs.CounterId == (atomic<unsigned_int>)0x0)
    {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChaosTraceCounter_NumBroadPhasePairs.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterChaosTraceCounter_NumBroadPhasePairs.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterChaosTraceCounter_NumBroadPhasePairs.CounterId == (atomic<unsigned_int>)0x0
         ) {
        __GTraceCounterChaosTraceCounter_NumBroadPhasePairs.CounterId._2_2_ = 0;
        __GTraceCounterChaosTraceCounter_NumBroadPhasePairs.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterChaosTraceCounter_NumBroadPhasePairs.CounterId._0_2_,
               __GTraceCounterChaosTraceCounter_NumBroadPhasePairs.Value);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    TVar17 = FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumMidPhases,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumMidPhases,1> *)
                        &StatPtr_STAT_ChaosCounter_NumMidPhases);
    FThreadStats::AddMessage<__int64>
              (*(FName *)(TVar17.StatIdPtr)->Name,Set,
               (longlong)(((this->MEvolution).Ptr)->BroadPhase).NumMidPhases,false);
  }
  if (__CsvProfilerStat2810 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumMidPhases",_GCsvCategory_PhysicsCounters.Index);
    __CsvProfilerStat2810 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumMidPhases",_GCsvCategory_PhysicsCounters.Index,
             (((this->MEvolution).Ptr)->BroadPhase).NumMidPhases,Set);
  lVar20 = (longlong)(((this->MEvolution).Ptr)->BroadPhase).NumMidPhases;
  if ((__GTraceCounterChaosTraceCounter_NumMidPhases.Value != lVar20) &&
     (__GTraceCounterChaosTraceCounter_NumMidPhases.Value = lVar20, -1 < CountersChannel->Enabled))
  {
    if (__GTraceCounterChaosTraceCounter_NumMidPhases.CounterId == (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChaosTraceCounter_NumMidPhases.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterChaosTraceCounter_NumMidPhases.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterChaosTraceCounter_NumMidPhases.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterChaosTraceCounter_NumMidPhases.CounterId._2_2_ = 0;
        __GTraceCounterChaosTraceCounter_NumMidPhases.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterChaosTraceCounter_NumMidPhases.CounterId._0_2_,
               __GTraceCounterChaosTraceCounter_NumMidPhases.Value);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    TVar17 = FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumPositionIterations,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumPositionIterations,1>
                         *)&StatPtr_STAT_ChaosCounter_NumPositionIterations);
    FThreadStats::AddMessage<__int64>
              (*(FName *)(TVar17.StatIdPtr)->Name,Set,
               (longlong)(char)((this->MEvolution).Ptr)->_padding_,false);
  }
  if (__CsvProfilerStat2813 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumPositionIterations",_GCsvCategory_PhysicsCounters.Index)
    ;
    __CsvProfilerStat2813 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumPositionIterations",_GCsvCategory_PhysicsCounters.Index,
             (int)(char)((this->MEvolution).Ptr)->_padding_,Set);
  lVar20 = (longlong)(char)((this->MEvolution).Ptr)->_padding_;
  if ((__GTraceCounterChaosTraceCounter_NumPositionIterations.Value != lVar20) &&
     (__GTraceCounterChaosTraceCounter_NumPositionIterations.Value = lVar20,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterChaosTraceCounter_NumPositionIterations.CounterId ==
        (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChaosTraceCounter_NumPositionIterations.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterChaosTraceCounter_NumPositionIterations.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterChaosTraceCounter_NumPositionIterations.CounterId ==
          (atomic<unsigned_int>)0x0) {
        __GTraceCounterChaosTraceCounter_NumPositionIterations.CounterId._2_2_ = 0;
        __GTraceCounterChaosTraceCounter_NumPositionIterations.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterChaosTraceCounter_NumPositionIterations.CounterId._0_2_,
               __GTraceCounterChaosTraceCounter_NumPositionIterations.Value);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    TVar17 = FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumVelocityIterations,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumVelocityIterations,1>
                         *)&StatPtr_STAT_ChaosCounter_NumVelocityIterations);
    FThreadStats::AddMessage<__int64>
              (*(FName *)(TVar17.StatIdPtr)->Name,Set,
               (longlong)*(char *)((longlong)&((this->MEvolution).Ptr)->_padding_ + 1),false);
  }
  if (__CsvProfilerStat2814 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumVelocityIterations",_GCsvCategory_PhysicsCounters.Index)
    ;
    __CsvProfilerStat2814 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumVelocityIterations",_GCsvCategory_PhysicsCounters.Index,
             (int)*(char *)((longlong)&((this->MEvolution).Ptr)->_padding_ + 1),Set);
  lVar20 = (longlong)*(char *)((longlong)&((this->MEvolution).Ptr)->_padding_ + 1);
  if ((__GTraceCounterChaosTraceCounter_NumVelocityIterations.Value != lVar20) &&
     (__GTraceCounterChaosTraceCounter_NumVelocityIterations.Value = lVar20,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterChaosTraceCounter_NumVelocityIterations.CounterId ==
        (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChaosTraceCounter_NumVelocityIterations.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterChaosTraceCounter_NumVelocityIterations.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterChaosTraceCounter_NumVelocityIterations.CounterId ==
          (atomic<unsigned_int>)0x0) {
        __GTraceCounterChaosTraceCounter_NumVelocityIterations.CounterId._2_2_ = 0;
        __GTraceCounterChaosTraceCounter_NumVelocityIterations.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterChaosTraceCounter_NumVelocityIterations.CounterId._0_2_,
               __GTraceCounterChaosTraceCounter_NumVelocityIterations.Value);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar19 = StatPtr_STAT_ChaosCounter_NumProjectionIterations;
    if (StatPtr_STAT_ChaosCounter_NumProjectionIterations ==
        (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumProjectionIterations>)0x0) {
      pFVar10 = ::FName::FName(local_58,"STAT_ChaosCounter_NumProjectionIterations");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumProjectionIterations>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ChaosCounter_NumProjectionIterations,*pFVar10,
                          L"NumProjectionIterations","STATGROUP_ChaosCounters","STATCAT_Advanced",
                          L"ChaosCounters",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FThreadStats::AddMessage<__int64>
              (*(FName *)FVar19,Set,
               (longlong)*(char *)((longlong)&((this->MEvolution).Ptr)->_padding_ + 2),false);
  }
  if (DAT_155074bdf == '\0') {
    FCsvProfilerTrace::OutputInlineStat
              ("NumProjectionIterations",_GCsvCategory_PhysicsCounters.Index);
    DAT_155074bdf = '\x01';
  }
  FCsvProfiler::RecordCustomStat
            ("NumProjectionIterations",_GCsvCategory_PhysicsCounters.Index,
             (int)*(char *)((longlong)&((this->MEvolution).Ptr)->_padding_ + 2),Set);
  lVar20 = (longlong)*(char *)((longlong)&((this->MEvolution).Ptr)->_padding_ + 2);
  if ((__GTraceCounterChaosTraceCounter_NumProjectionIterations.Value != lVar20) &&
     (__GTraceCounterChaosTraceCounter_NumProjectionIterations.Value = lVar20,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterChaosTraceCounter_NumProjectionIterations.CounterId ==
        (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChaosTraceCounter_NumProjectionIterations.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterChaosTraceCounter_NumProjectionIterations.CounterFlags & 0xf
                        );
      LOCK();
      if (__GTraceCounterChaosTraceCounter_NumProjectionIterations.CounterId ==
          (atomic<unsigned_int>)0x0) {
        __GTraceCounterChaosTraceCounter_NumProjectionIterations.CounterId._2_2_ = 0;
        __GTraceCounterChaosTraceCounter_NumProjectionIterations.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterChaosTraceCounter_NumProjectionIterations.CounterId._0_2_,
               __GTraceCounterChaosTraceCounter_NumProjectionIterations.Value);
  }
  return;
}

