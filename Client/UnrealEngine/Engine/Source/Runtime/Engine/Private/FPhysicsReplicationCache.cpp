// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FPhysicsReplicationCache @ 1482d94c0

FPhysicsReplicationCache * __thiscall
FPhysicsReplicationCache::FPhysicsReplicationCache
          (FPhysicsReplicationCache *this,FPhysScene_Chaos *param_1)

{
  FPhysicsSolverBase *this_00;
  code *pcVar1;
  bool bVar2;
  FPhysicsReplicationCache *pFVar3;
  FPhysicsReplicationCacheAsync *_Dst;
  undefined8 *puVar4;
  FPhysicsReplicationCacheAsync *pFVar5;
  
  pFVar5 = (FPhysicsReplicationCacheAsync *)0x0;
  *(undefined8 *)&this->ReplicationCache_External = 0;
  *(undefined8 *)&(this->ReplicationCache_External).field_0x8 = 0;
  *(undefined8 *)&(this->ReplicationCache_External).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FPhysicsReplicationCache__6B_;
  this->SolverFrame = 0;
  *(undefined4 *)&(this->ReplicationCache_External).field_0x28 = 0;
  *(undefined4 *)&(this->ReplicationCache_External).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReplicationCache_External).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReplicationCache_External).field_0x34 = 0;
  *(undefined8 *)&(this->ReplicationCache_External).field_0x40 = 0;
  *(undefined4 *)&(this->ReplicationCache_External).field_0x48 = 0;
  (this->DelegateInjectInputs_External).ID = 0;
  this->PhysicsScene = param_1;
  if ((param_1 == (FPhysScene_Chaos *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PhysicsScene",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsReplicationCache.cpp"
                         ,0x19,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPhysicsReplicationCache *)(*pcVar1)();
    return pFVar3;
  }
  this->AsyncPhysicsReplicationCache = (FPhysicsReplicationCacheAsync *)0x0;
  this_00 = (FPhysicsSolverBase *)this->PhysicsScene->_padding_;
  if (this_00 != (FPhysicsSolverBase *)0x0) {
    _Dst = ::operator_new(0x140);
    if (_Dst != (FPhysicsReplicationCacheAsync *)0x0) {
      memset(_Dst,0,0x140);
      *(undefined2 *)&_Dst->_padding_ = 0x4401;
      _Dst->_padding_ =
           (longlong)
           &
           ___7__TSimCallbackObject_UFPhysicsReplicationCacheAsyncInput__UFPhysicsReplicationCacheAsyncOutput___0EEAB__Chaos__6B_
      ;
      *(undefined1 *)&_Dst->_padding_ = 0;
      puVar4 = FMemory::Malloc(0x10,8);
      *puVar4 = 0;
      _Dst->_padding_ = (longlong)puVar4;
      _Dst->_padding_ = (longlong)puVar4;
      _Dst->_padding_ = (longlong)puVar4;
      _Dst->_padding_ = (longlong)puVar4;
      _Dst->_padding_ = 0;
      _Dst->_padding_ = 0;
      *(undefined1 *)&_Dst->_padding_ = 0;
      puVar4 = FMemory::Malloc(0x10,8);
      *puVar4 = 0;
      _Dst->_padding_ = (longlong)puVar4;
      _Dst->_padding_ = (longlong)puVar4;
      _Dst->_padding_ = (longlong)puVar4;
      _Dst->_padding_ = (longlong)puVar4;
      _Dst->_padding_ = 0;
      _Dst->_padding_ = 0;
      *(undefined1 *)&_Dst->_padding_ = 0;
      puVar4 = FMemory::Malloc(0x10,8);
      *puVar4 = 0;
      _Dst->_padding_ = (longlong)puVar4;
      _Dst->_padding_ = (longlong)puVar4;
      _Dst->_padding_ = (longlong)puVar4;
      _Dst->_padding_ = (longlong)puVar4;
      *(undefined8 *)&_Dst->ReplicationCache_Internal = 0;
      *(undefined8 *)&(_Dst->ReplicationCache_Internal).field_0x8 = 0;
      *(undefined8 *)&(_Dst->ReplicationCache_Internal).field_0x20 = 0;
      _Dst->_padding_ = (longlong)&___7FPhysicsReplicationCacheAsync__6B_;
      _Dst->_padding_ = 0;
      *(undefined4 *)&(_Dst->ReplicationCache_Internal).field_0x28 = 0;
      *(undefined4 *)&(_Dst->ReplicationCache_Internal).field_0x2c = 0x80;
      *(undefined4 *)&(_Dst->ReplicationCache_Internal).field_0x30 = 0xffffffff;
      *(undefined4 *)&(_Dst->ReplicationCache_Internal).field_0x34 = 0;
      *(undefined8 *)&(_Dst->ReplicationCache_Internal).field_0x40 = 0;
      *(undefined4 *)&(_Dst->ReplicationCache_Internal).field_0x48 = 0;
      _Dst->bUpdateAfterRemoval = false;
      pFVar5 = _Dst;
    }
    if ((pFVar5->_padding_ & 0x100) != 0) {
      this_00->bSolverHasFrozenGameThreadCallbacks = true;
    }
    Chaos::FPhysicsSolverBase::RegisterSimCallbackObject_External
              (this_00,(ISimCallbackObject *)pFVar5);
    this->AsyncPhysicsReplicationCache = pFVar5;
  }
  return this;
}

// ~FPhysicsReplicationCache @ 1482ddb20

void __thiscall FPhysicsReplicationCache::~FPhysicsReplicationCache(FPhysicsReplicationCache *this)

{
  FPhysicsSolverBase *this_00;
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FPhysicsReplicationCache__6B_;
  if (((this->AsyncPhysicsReplicationCache != (FPhysicsReplicationCacheAsync *)0x0) &&
      (this->PhysicsScene != (FPhysScene_Chaos *)0x0)) &&
     (this_00 = (FPhysicsSolverBase *)this->PhysicsScene->_padding_,
     this_00 != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::UnregisterAndFreeSimCallbackObject_External
              (this_00,(ISimCallbackObject *)this->AsyncPhysicsReplicationCache);
  }
  *(undefined4 *)&(this->ReplicationCache_External).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ReplicationCache_External).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsObject_const_*,FRigidBodyState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsObject_const_*,FRigidBodyState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsObject_const_*,FRigidBodyState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReplicationCache_External);
  return;
}

// GetStateFromReplicationCache @ 14830d900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRigidBodyState * __thiscall
FPhysicsReplicationCache::GetStateFromReplicationCache
          (FPhysicsReplicationCache *this,UPrimitiveComponent *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSimCallbackInput *pFVar4;
  FRigidBodyState *pFVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulonglong *puVar8;
  undefined8 local_res8;
  ulonglong local_18 [2];
  
  *param_2 = 0;
  if (this->AsyncPhysicsReplicationCache != (FPhysicsReplicationCacheAsync *)0x0) {
    ProcessAsyncOutput(this);
    local_res8 = 0;
    local_18[0] = (**(code **)(*(longlong *)&param_1->field_0x260 + 0x18))
                            (&param_1->field_0x260,&local_res8);
    if (local_18[0] != 0) {
      pFVar4 = Chaos::ISimCallbackObject::GetProducerInputData_External
                         ((ISimCallbackObject *)this->AsyncPhysicsReplicationCache);
      if (pFVar4 != (FSimCallbackInput *)0x0) {
        if ((((ulonglong *)pFVar4[1]._padding_ <= local_18) &&
            (local_18 < (ulonglong *)pFVar4[1]._padding_ + *(int *)&pFVar4[1].field_0xc)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar5 = (FRigidBodyState *)(*pcVar1)();
          return pFVar5;
        }
        iVar3 = pFVar4[1].NumSteps;
        if (iVar3 == *(int *)&pFVar4[1].field_0xc) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)(pFVar4 + 1),(int *)&pFVar4[1].field_0xc);
        }
        pFVar4[1].NumSteps = iVar3 + 1;
        *(ulonglong *)((FScriptContainerElement *)pFVar4[1]._padding_ + (longlong)iVar3 * 8) =
             local_18[0];
      }
      uVar6 = ((uint)(local_18[0] >> 0x14) & 0xffff ^ (uint)(local_18[0] >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      if (*(int *)&(this->ReplicationCache_External).field_0x8 !=
          *(int *)&(this->ReplicationCache_External).field_0x34) {
        puVar7 = *(undefined1 **)&(this->ReplicationCache_External).field_0x40;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &(this->ReplicationCache_External).field_0x38;
        }
        iVar3 = *(int *)(puVar7 + (ulonglong)
                                  (*(int *)&(this->ReplicationCache_External).field_0x48 - 1U &
                                  (uVar6 >> 0x10 ^ uVar6)) * 4);
        if (iVar3 != -1) {
          do {
            puVar8 = (ulonglong *)
                     ((longlong)iVar3 * 0xa0 + *(longlong *)&this->ReplicationCache_External);
            if (*puVar8 == local_18[0]) {
              pFVar5 = (FRigidBodyState *)(puVar8 + 2);
              if (puVar8 == (ulonglong *)0x0) {
                pFVar5 = (FRigidBodyState *)0x0;
              }
              if (pFVar5 != (FRigidBodyState *)0x0) {
                *param_2 = this->SolverFrame;
                return pFVar5;
              }
              return (FRigidBodyState *)0x0;
            }
            iVar3 = (int)puVar8[0x12];
          } while (iVar3 != -1);
        }
      }
    }
  }
  return (FRigidBodyState *)0x0;
}

// ProcessAsyncOutput @ 14831a520

void __thiscall FPhysicsReplicationCache::ProcessAsyncOutput(FPhysicsReplicationCache *this)

{
  int iVar1;
  FPhysicsReplicationCacheAsync *pFVar2;
  longlong lVar3;
  FPhysicsReplicationCacheAsync *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong *this_00;
  longlong lVar9;
  longlong lVar10;
  TPairInitializer<Chaos::FPhysicsObject_const_*_&,FRigidBodyState_&> local_res18;
  FRigidBodyState **local_60;
  longlong local_58;
  
  if (this->AsyncPhysicsReplicationCache == (FPhysicsReplicationCacheAsync *)0x0) {
    return;
  }
  do {
    while( true ) {
      pFVar2 = this->AsyncPhysicsReplicationCache;
      if (pFVar2->_padding_ == 0) {
        TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory>::Dequeue
                  ((TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory> *)
                   &pFVar2->_padding_,(FPhysicsReplicationCacheAsyncOutput **)&pFVar2->_padding_);
      }
      lVar3 = pFVar2->_padding_;
      pFVar2->_padding_ = 0;
      if (lVar3 == 0) {
        return;
      }
      pFVar4 = this->AsyncPhysicsReplicationCache;
      this_00 = &pFVar4->_padding_;
      if ((this_00 == (longlong *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      LOCK();
      bVar6 = (char)*this_00 == '\0';
      if (bVar6) {
        *(undefined1 *)this_00 = 1;
      }
      UNLOCK();
      if (!bVar6) {
        UE::FMutex::LockSlow((FMutex *)this_00);
      }
      lVar9 = *(longlong *)pFVar4->_padding_;
      LOCK();
      lVar10 = *this_00;
      *(char *)this_00 = (char)*this_00 + -1;
      UNLOCK();
      if ((lVar10 & 2) != 0) {
        UE::FMutex::WakeWaitingThread((FMutex *)this_00);
      }
      if ((lVar9 == 0) && (this->SolverFrame < *(int *)(lVar3 + 8))) break;
LAB_14831a604:
      (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2,lVar3);
    }
    if ((*(int *)(lVar3 + 0x18) != *(int *)(lVar3 + 0x28)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("AsyncOutput->ReplicationCache_Key_Marshal.Num() == AsyncOutput->ReplicationCache_Value_Marshal.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsReplicationCache.cpp"
                           ,0x6a,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar1 = *(int *)(lVar3 + 0x18);
    this->SolverFrame = *(int *)(lVar3 + 8);
    TSet<TTuple<Chaos::FPhysicsObject_const_*,FRigidBodyState>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FRigidBodyState,0>,FDefaultSetAllocator>
    ::Empty((TSet<TTuple<Chaos::FPhysicsObject_const_*,FRigidBodyState>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FRigidBodyState,0>,FDefaultSetAllocator>
             *)&this->ReplicationCache_External,iVar1);
    uVar8 = 0;
    if (iVar1 < 1) goto LAB_14831a604;
    lVar10 = 0;
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < *(int *)(lVar3 + 0x18)) {
        uVar7 = ~uVar8 >> 0x1f;
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
      local_res18.Value = *(FRigidBodyState **)(lVar10 + *(longlong *)(lVar3 + 0x10));
      uVar7 = 0;
      if ((int)uVar8 < *(int *)(lVar3 + 0x28)) {
        uVar7 = ~uVar8 >> 0x1f;
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
      local_60 = &local_res18.Value;
      local_58 = *(longlong *)(lVar3 + 0x20) + lVar9;
      TSet<TTuple<Chaos::FPhysicsObject_const_*,FRigidBodyState>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FRigidBodyState,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<Chaos::FPhysicsObject_const_*_&,FRigidBodyState_&>_>
                ((TSet<TTuple<Chaos::FPhysicsObject_const_*,FRigidBodyState>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FRigidBodyState,0>,FDefaultSetAllocator>
                  *)&this->ReplicationCache_External,&local_res18,(bool *)&local_60);
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x80;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < iVar1);
    (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2,lVar3);
  } while( true );
}

// RegisterForReplicationCache @ 14831aed0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPhysicsReplicationCache::RegisterForReplicationCache
          (FPhysicsReplicationCache *this,UPrimitiveComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSimCallbackInput *pFVar4;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if ((param_1 != (UPrimitiveComponent *)0x0) &&
     (this->AsyncPhysicsReplicationCache != (FPhysicsReplicationCacheAsync *)0x0)) {
    local_res10[0] = 0;
    local_18[0] = (**(code **)(*(longlong *)&param_1->field_0x260 + 0x18))
                            (&param_1->field_0x260,local_res10);
    if ((local_18[0] != 0) &&
       (pFVar4 = Chaos::ISimCallbackObject::GetProducerInputData_External
                           ((ISimCallbackObject *)this->AsyncPhysicsReplicationCache),
       pFVar4 != (FSimCallbackInput *)0x0)) {
      if ((((longlong *)pFVar4[1]._padding_ <= local_18) &&
          (local_18 < (longlong *)pFVar4[1]._padding_ + *(int *)&pFVar4[1].field_0xc)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar3 = pFVar4[1].NumSteps;
      if (iVar3 == *(int *)&pFVar4[1].field_0xc) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(pFVar4 + 1),(int *)&pFVar4[1].field_0xc);
      }
      pFVar4[1].NumSteps = iVar3 + 1;
      *(longlong *)((FScriptContainerElement *)pFVar4[1]._padding_ + (longlong)iVar3 * 8) =
           local_18[0];
    }
  }
  return;
}

// UnregisterForReplicationCache @ 148326350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPhysicsReplicationCache::UnregisterForReplicationCache
          (FPhysicsReplicationCache *this,UPrimitiveComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSimCallbackInput *pFVar4;
  uint uVar5;
  undefined8 local_res10;
  FPhysicsObject *local_res18 [2];
  FPhysicsObject *local_18 [2];
  
  if ((param_1 != (UPrimitiveComponent *)0x0) &&
     (this->AsyncPhysicsReplicationCache != (FPhysicsReplicationCacheAsync *)0x0)) {
    local_res10 = 0;
    local_res18[0] =
         (FPhysicsObject *)
         (**(code **)(*(longlong *)&param_1->field_0x260 + 0x18))
                   (&param_1->field_0x260,&local_res10);
    if (local_res18[0] != (FPhysicsObject *)0x0) {
      local_18[0] = local_res18[0];
      if (*(int *)&(this->ReplicationCache_External).field_0x8 !=
          *(int *)&(this->ReplicationCache_External).field_0x34) {
        uVar5 = ((uint)((ulonglong)local_res18[0] >> 0x14) & 0xffff ^
                (uint)((ulonglong)local_res18[0] >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        TSet<TTuple<Chaos::FPhysicsObject_const_*,FRigidBodyState>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FRigidBodyState,0>,FDefaultSetAllocator>
        ::RemoveImpl<Chaos::FPhysicsObject_const_*>
                  ((TSet<TTuple<Chaos::FPhysicsObject_const_*,FRigidBodyState>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FRigidBodyState,0>,FDefaultSetAllocator>
                    *)&this->ReplicationCache_External,uVar5 >> 0x10 ^ uVar5,local_res18);
      }
      pFVar4 = Chaos::ISimCallbackObject::GetProducerInputData_External
                         ((ISimCallbackObject *)this->AsyncPhysicsReplicationCache);
      if (pFVar4 != (FSimCallbackInput *)0x0) {
        if ((((FPhysicsObject **)pFVar4[2]._padding_ <= local_18) &&
            (local_18 < (FPhysicsObject **)pFVar4[2]._padding_ + *(int *)&pFVar4[2].field_0xc)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar3 = pFVar4[2].NumSteps;
        if (iVar3 == *(int *)&pFVar4[2].field_0xc) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)(pFVar4 + 2),(int *)&pFVar4[2].field_0xc);
        }
        pFVar4[2].NumSteps = iVar3 + 1;
        *(FPhysicsObject **)((FScriptContainerElement *)pFVar4[2]._padding_ + (longlong)iVar3 * 8) =
             local_18[0];
      }
    }
  }
  return;
}

