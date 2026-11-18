// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 70

// FindOrAddImpl<UObject_const_*_const_&> @ 1436f3ce0

TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<UObject_const_*_const_&>
          (TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,UObject **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UObject **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UObject *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UObject_const_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UObject_const_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 1436ff2b0

TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
       *this,UObject *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UObject *)*plVar2 == param_1) {
          pTVar4 = (TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *)(plVar2 + 1)
            ;
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *)0x0;
}

// Emplace<int_const_&,Chaos::TAABB<double,3>_const_&> @ 143710030

TAABB<double,3> * __thiscall
TMapBase<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
::Emplace<int_const_&,Chaos::TAABB<double,3>_const_&>
          (TMapBase<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
           *this,int *param_1,TAABB<double,3> *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x40 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar6);
  if (local_28.Pointer != (TSparseSetElement<TTuple<int,Chaos::TAABB<double,3>_>_> *)0x0) {
    *(int *)local_28.Pointer = *param_1;
    uVar4 = *(undefined8 *)&(param_2->MMin).field_0x8;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = *(undefined8 *)&param_2->MMin;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = uVar4;
    *(undefined8 *)((longlong)local_28.Pointer + 0x18) = *(undefined8 *)&(param_2->MMin).field_0x10;
    uVar4 = *(undefined8 *)&(param_2->MMax).field_0x8;
    *(undefined8 *)((longlong)local_28.Pointer + 0x20) = *(undefined8 *)&param_2->MMax;
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = uVar4;
    *(undefined8 *)((longlong)local_28.Pointer + 0x30) = *(undefined8 *)&(param_2->MMax).field_0x10;
    *(undefined4 *)((longlong)local_28.Pointer + 0x38) = 0xffffffff;
  }
  uVar3 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar5 = TSet<TTuple<int,Chaos::TAABB<double,3>_>,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<int,Chaos::TAABB<double,3>_>,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,local_28.Pointer,local_res8[0]);
  }
  return (TAABB<double,3> *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x40);
}

// EmplaceByHash<int_const_&> @ 143711610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TAABB<double,3> * __thiscall
TMapBase<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
::EmplaceByHash<int_const_&>
          (TMapBase<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_48 [3];
  undefined8 local_10;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar7 * 0x40 + 4 + lVar8);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,local_48,iVar7);
  uVar5 = _UNK_1508ffb58;
  uVar4 = ___xmm_ffefffffffffffffffefffffffffffff;
  uVar3 = __real_ffefffffffffffff;
  if (local_48[0].Pointer != (TSparseSetElement<TTuple<int,Chaos::TAABB<double,3>_>_> *)0x0) {
    *(int *)local_48[0].Pointer = *param_2;
    local_10 = uVar3;
    *(undefined8 *)((longlong)local_48[0].Pointer + 8) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)local_48[0].Pointer + 0x10) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)local_48[0].Pointer + 0x18) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)local_48[0].Pointer + 0x20) = uVar4;
    *(undefined8 *)((longlong)local_48[0].Pointer + 0x28) = uVar5;
    *(undefined8 *)((longlong)local_48[0].Pointer + 0x30) = uVar3;
    *(undefined4 *)((longlong)local_48[0].Pointer + 0x38) = 0xffffffff;
  }
  local_res8[0] = local_48[0].Index;
  bVar6 = TSet<TTuple<int,Chaos::TAABB<double,3>_>,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_48[0].Pointer,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar6) {
    TSet<TTuple<int,Chaos::TAABB<double,3>_>,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_48[0].Pointer,local_res8[0]);
  }
  return (TAABB<double,3> *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar8 * 0x40);
}

// FindByHash<void_const_*> @ 1437177d0

uint * __thiscall
TMapBase<void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>_>
::FindByHash<void_const_*>
          (TMapBase<void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>_>
           *this,uint param_1,void **param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(void **)(lVar2 + (longlong)iVar3 * 0x18) == *param_2) {
          puVar4 = (uint *)0x0;
          if (lVar1 != 0) {
            puVar4 = (uint *)(lVar1 + 8);
          }
          return puVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (uint *)0x0;
}

// FindByHash<void_const_*> @ 143717850

ulong64 * __thiscall
TMapBase<void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>_>
::FindByHash<void_const_*>
          (TMapBase<void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>_>
           *this,uint param_1,void **param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulong64 *puVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(void **)(lVar2 + (longlong)iVar3 * 0x18) == *param_2) {
          puVar4 = (ulong64 *)0x0;
          if (lVar1 != 0) {
            puVar4 = (ulong64 *)(lVar1 + 8);
          }
          return puVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (ulong64 *)0x0;
}

// Find @ 14376fcc0

TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
       *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)*plVar2 == param_1) {
          pTVar4 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                    *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                      *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0;
}

// FindChecked @ 14377afe0

TAABB<double,3> * __thiscall
TMapBase<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
::FindChecked(TMapBase<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TAABB<double,3> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TAABB<double,3> *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0xe];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TAABB<double,3> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TAABB<double,3> *)(*pcVar1)();
  return pTVar4;
}

// FindOrAddImpl<int_const_&> @ 143810960

TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
TMapBase<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>_>
::FindOrAddImpl<int_const_&>(void *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x60 + *(longlong *)this);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                    *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x16];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
          *)(*(longlong *)this + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<int_const_&> @ 143810a10

EUpdateClusterUnionPropertiesFlags * __thiscall
TMapBase<int,enum_Chaos::EUpdateClusterUnionPropertiesFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,enum_Chaos::EUpdateClusterUnionPropertiesFlags,0>_>
::FindOrAddImpl<int_const_&>(void *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)this);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (EUpdateClusterUnionPropertiesFlags *)(piVar2 + 1);
          }
          break;
        }
        iVar1 = piVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,enum_Chaos::EUpdateClusterUnionPropertiesFlags>,TDefaultMapHashableKeyFuncs<int,enum_Chaos::EUpdateClusterUnionPropertiesFlags,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (EUpdateClusterUnionPropertiesFlags *)
         (*(longlong *)this + (longlong)local_res8[0] * 0x10 + 4);
}

// FindOrAddImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&> @ 143810ac0

FClusterUnionChildToParentUpdate * __thiscall
TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,0>_>
::FindOrAddImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&>
          (TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,0>_>
           *this,uint param_1,TPBDRigidClusteredParticleHandleImp<double,3,1> **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  TPBDRigidClusteredParticleHandleImp<double,3,1> **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x90 + *(longlong *)&(this->Pairs).Elements);
        if ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (FClusterUnionChildToParentUpdate *)(plVar2 + 2);
          }
          break;
        }
        iVar1 = (int)plVar2[0x10];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TKeyInitializer<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&> *)
             (ulonglong)param_1,(bool *)&local_res20);
  return (FClusterUnionChildToParentUpdate *)
         (*(longlong *)&(this->Pairs).Elements + 0x10 + (longlong)local_res8[0] * 0x90);
}

// FindOrAddImpl<enum_Chaos::EClusterUnionGeometryOperation_const_&> @ 143810b80

TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<enum_Chaos::EClusterUnionGeometryOperation_const_&>
          (void *this,uint param_1,EClusterUnionGeometryOperation *param_2)

{
  undefined4 uVar1;
  EClusterUnionGeometryOperation *pEVar2;
  longlong lVar3;
  int local_res8 [6];
  EClusterUnionGeometryOperation *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar2 = (EClusterUnionGeometryOperation *)((longlong)(int)uVar1 * 0x20 + *(longlong *)this)
        ;
        if (*pEVar2 == *param_2) {
          if (pEVar2 != (EClusterUnionGeometryOperation *)0x0) {
            return (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                    *)(pEVar2 + 8);
          }
          break;
        }
        uVar1 = *(undefined4 *)(pEVar2 + 0x18);
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_Chaos::EClusterUnionGeometryOperation_const_&>_>
            (this,(uint)local_res8,
             (TKeyInitializer<Chaos::EClusterUnionGeometryOperation_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)this + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<enum_Chaos::EClusterUnionOperation_const_&> @ 143810c30

TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<enum_Chaos::EClusterUnionOperation_const_&>
          (void *this,uint param_1,EClusterUnionOperation *param_2)

{
  EClusterUnionOperation EVar1;
  EClusterUnionOperation *pEVar2;
  longlong lVar3;
  int local_res8 [6];
  EClusterUnionOperation *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    EVar1 = *(EClusterUnionOperation *)
             (lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (EVar1 != ~Add) {
      do {
        pEVar2 = (EClusterUnionOperation *)((longlong)(int)EVar1 * 0x20 + *(longlong *)this);
        if (*pEVar2 == *param_2) {
          if (pEVar2 != (EClusterUnionOperation *)0x0) {
            return (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                    *)(pEVar2 + 2);
          }
          break;
        }
        EVar1 = pEVar2[6];
      } while (EVar1 != ~Add);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_Chaos::EClusterUnionOperation_const_&>_>
            (this,(uint)local_res8,
             (TKeyInitializer<Chaos::EClusterUnionOperation_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)this + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 1438b05f0

FClusterUnionChildToParentUpdate * __thiscall
TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,0>_>
::Find(TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,0>_>
       *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FClusterUnionChildToParentUpdate *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x90 + *(longlong *)&(this->Pairs).Elements);
        if ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)*plVar2 == param_1) {
          pFVar4 = (FClusterUnionChildToParentUpdate *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FClusterUnionChildToParentUpdate *)(plVar2 + 2);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[0x10];
      } while (iVar1 != -1);
    }
  }
  return (FClusterUnionChildToParentUpdate *)0x0;
}

// Find @ 1438b06a0

FClusterUnionParticleProperties * __thiscall
TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>_>
::Find(TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>_>
       *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FClusterUnionParticleProperties *pFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(TPBDRigidParticleHandleImp<double,3,1> **)(lVar2 + (longlong)iVar3 * 0x18) == param_1)
        {
          pFVar5 = (FClusterUnionParticleProperties *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FClusterUnionParticleProperties *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FClusterUnionParticleProperties *)0x0;
}

// Find @ 1438b0750

int * __thiscall
TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
          (TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this,
          FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x14;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x14) == param_1) {
          piVar5 = (int *)0x0;
          if (lVar1 != 0) {
            piVar5 = (int *)(lVar1 + 8);
          }
          return piVar5;
        }
        iVar4 = *(int *)(lVar1 + 0xc);
      } while (iVar4 != -1);
    }
  }
  return (int *)0x0;
}

// Find @ 1438b07f0

TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
::Find(void *this,EClusterUnionGeometryOperation param_1)

{
  undefined4 uVar1;
  EClusterUnionGeometryOperation *pEVar2;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar4 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar4 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar4 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & (int)(char)param_1)
                             * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar2 = (EClusterUnionGeometryOperation *)((longlong)(int)uVar1 * 0x20 + *(longlong *)this)
        ;
        if (*pEVar2 == param_1) {
          pTVar3 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                    *)0x0;
          if (pEVar2 != (EClusterUnionGeometryOperation *)0x0) {
            pTVar3 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                      *)(pEVar2 + 8);
          }
          return pTVar3;
        }
        uVar1 = *(undefined4 *)(pEVar2 + 0x18);
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0;
}

// FindRef @ 1438b3770

TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
::FindRef(TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
          *this,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                *__return_storage_ptr__,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  
  pTVar3 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  if (pTVar3 == (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    __return_storage_ptr__->ArrayNum = 0;
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  _Src = *(void **)&pTVar3->field_0x8;
  iVar2 = *(int *)&pTVar3->field_0x10;
  __return_storage_ptr__->ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,piVar1);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  return __return_storage_ptr__;
}

// FindOrAddImpl<Chaos::FUniqueIdx_const_&> @ 143998d70

TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<Chaos::FUniqueIdx_const_&>
          (TMapBase<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FUniqueIdx *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FUniqueIdx *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == param_2->Idx) {
          if (piVar2 != (int *)0x0) {
            return (TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>
                    *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[6];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<Chaos::FUniqueIdx_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<Chaos::FUniqueIdx_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindChecked @ 1439cc4a0

TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>_>
              *this,FUniqueIdx *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  uint *puVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1->Idx) * 4)
    ;
    if (uVar3 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar6 == param_1->Idx) {
          if (puVar6 != (uint *)0x0) {
            return (TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_> *)(puVar6 + 2);
          }
          break;
        }
        uVar3 = puVar6[6];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindOrAddImpl<int_const_&> @ 143a28240

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x16];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,enum_Chaos::Softs::EDeformableConstraintType>_const_&> @ 143a282f0

FConstraintObjectParticleHandel * __thiscall
TMapBase<TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,enum_Chaos::Softs::EDeformableConstraintType>,Chaos::Softs::FConstraintObjectParticleHandel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,enum_Chaos::Softs::EDeformableConstraintType>,Chaos::Softs::FConstraintObjectParticleHandel,0>_>
::
FindOrAddImpl<TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,enum_Chaos::Softs::EDeformableConstraintType>_const_&>
          (void *this,uint param_1,
          TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,Chaos::Softs::EDeformableConstraintType>
          *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,Chaos::Softs::EDeformableConstraintType>
  *local_res20;
  
  iVar1 = TSet<TTuple<TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,enum_Chaos::Softs::EDeformableConstraintType>,Chaos::Softs::FConstraintObjectParticleHandel>,TDefaultMapHashableKeyFuncs<TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,enum_Chaos::Softs::EDeformableConstraintType>,Chaos::Softs::FConstraintObjectParticleHandel,0>,FDefaultSetAllocator>
          ::
          FindIndexByHash<TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,enum_Chaos::Softs::EDeformableConstraintType>_>
                    (this,param_1,param_2);
  if ((iVar1 != -1) && (lVar2 = (longlong)iVar1 * 0x38 + *(longlong *)this, lVar2 != 0)) {
    return (FConstraintObjectParticleHandel *)(lVar2 + 0x18);
  }
  local_res20 = param_2;
  TSet<TTuple<TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,enum_Chaos::Softs::EDeformableConstraintType>,Chaos::Softs::FConstraintObjectParticleHandel>,TDefaultMapHashableKeyFuncs<TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,enum_Chaos::Softs::EDeformableConstraintType>,Chaos::Softs::FConstraintObjectParticleHandel,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TKeyInitializer<TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,enum_Chaos::Softs::EDeformableConstraintType>_const_&>_>
            (this,(uint)local_res8,
             (TKeyInitializer<TTuple<TObjectPtr<UObject>_const_,TObjectPtr<UObject>_const_,Chaos::Softs::EDeformableConstraintType>_const_&>
              *)(ulonglong)param_1,(bool *)&local_res20);
  return (FConstraintObjectParticleHandel *)
         (*(longlong *)this + (longlong)local_res8[0] * 0x38 + 0x18);
}

// Find @ 143a66770

FTriboxNode * __thiscall
TMapBase<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>_>
::Find(TMapBase<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,Chaos::Private::FConvexOptimizer::FTriboxNode,0>_>
       *this,FImplicitObject *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FTriboxNode *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0xd0 + *(longlong *)&(this->Pairs).Elements);
        if ((FImplicitObject *)*plVar2 == param_1) {
          pFVar4 = (FTriboxNode *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FTriboxNode *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[0x19];
      } while (iVar1 != -1);
    }
  }
  return (FTriboxNode *)0x0;
}

// FindChecked @ 143a66ae0

TTuple<float,float,UE::Math::TVector<float>_> * __thiscall
TMapBase<int,TTuple<float,float,UE::Math::TVector<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<float,float,UE::Math::TVector<float>_>,0>_>
::FindChecked(TMapBase<int,TTuple<float,float,UE::Math::TVector<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<float,float,UE::Math::TVector<float>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTuple<float,float,UE::Math::TVector<float>_> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TTuple<float,float,UE::Math::TVector<float>_> *)(piVar5 + 1);
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TTuple<float,float,UE::Math::TVector<float>_> *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TTuple<float,float,UE::Math::TVector<float>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 143a66b80

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
::FindChecked(TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x16];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 143a66c20

int * __thiscall
TMapBase<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
::FindChecked(TMapBase<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
              *this,UObject *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(UObject **)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (int *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (int *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  piVar6 = (int *)(*pcVar3)();
  return piVar6;
}

// FindChecked @ 143a66cf0

TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1> * __thiscall
TMapBase<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>,0>_>
::FindChecked(TMapBase<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>,0>_>
              *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UObject *)*plVar6 == param_1) {
          if (plVar6 != (longlong *)0x0) {
            return (TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1> *)(plVar6 + 1);
          }
          break;
        }
        iVar3 = (int)plVar6[3];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 143a66dc0

TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_> *
__thiscall
TMapBase<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,0>_>
::FindChecked(TMapBase<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,0>_>
              *this,UObject *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(UObject **)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>
                    *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>
            *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>
            *)(*pcVar3)();
  return pTVar6;
}

// FindOrAddImpl<Chaos::FSingleParticlePhysicsProxy_*_const_&> @ 143aba700

FDirtyRigidParticleData * __thiscall
TMapBase<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>_>
::FindOrAddImpl<Chaos::FSingleParticlePhysicsProxy_*_const_&>
          (TMapBase<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>_>
           *this,uint param_1,FSingleParticlePhysicsProxy **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FSingleParticlePhysicsProxy **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0xb0 + *(longlong *)&(this->Pairs).Elements);
        if ((FSingleParticlePhysicsProxy *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (FDirtyRigidParticleData *)(plVar2 + 2);
          }
          break;
        }
        iVar1 = (int)plVar2[0x14];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData>,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<Chaos::FSingleParticlePhysicsProxy_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<Chaos::FSingleParticlePhysicsProxy_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FDirtyRigidParticleData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0xb0 + 0x10);
}

// Find @ 143b1d490

FDirtyRigidParticleData * __thiscall
TMapBase<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>_>
::Find(TMapBase<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>_>
       *this,FSingleParticlePhysicsProxy *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FDirtyRigidParticleData *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0xb0 + *(longlong *)&(this->Pairs).Elements);
        if ((FSingleParticlePhysicsProxy *)*plVar2 == param_1) {
          pFVar4 = (FDirtyRigidParticleData *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FDirtyRigidParticleData *)(plVar2 + 2);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[0x14];
      } while (iVar1 != -1);
    }
  }
  return (FDirtyRigidParticleData *)0x0;
}

// Find @ 143b63710

TPBDRigidParticleHandleImp<double,3,1> ** __thiscall
TMapBase<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>_>
::Find(TMapBase<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>_>
       *this,FImplicitObject *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  TPBDRigidParticleHandleImp<double,3,1> **ppTVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(FImplicitObject **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppTVar5 = (TPBDRigidParticleHandleImp<double,3,1> **)0x0;
          if (lVar1 != 0) {
            ppTVar5 = (TPBDRigidParticleHandleImp<double,3,1> **)(lVar1 + 8);
          }
          return ppTVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (TPBDRigidParticleHandleImp<double,3,1> **)0x0;
}

// Find @ 143c66360

DirtyGridHashEntry * __thiscall
TMapBase<int,Chaos::DirtyGridHashEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>_>
::Find(TMapBase<int,Chaos::DirtyGridHashEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>_>
       *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  DirtyGridHashEntry *pDVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x14;
        if (*(int *)(lVar2 + (longlong)iVar3 * 0x14) == param_1) {
          pDVar4 = (DirtyGridHashEntry *)0x0;
          if (lVar1 != 0) {
            pDVar4 = (DirtyGridHashEntry *)(lVar1 + 4);
          }
          return pDVar4;
        }
        iVar3 = *(int *)(lVar1 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return (DirtyGridHashEntry *)0x0;
}

// FindChecked @ 143c67320

FVelocityConstraint * __thiscall
TMapBase<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,0>_>
::FindChecked(TMapBase<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FVelocityConstraint *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x24;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x24) == param_1) {
          if (lVar1 != 0) {
            return (FVelocityConstraint *)(lVar1 + 4);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x1c);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FVelocityConstraint *)&DAT_00000004;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FVelocityConstraint *)(*pcVar3)();
  return pFVar6;
}

// Emplace<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_> @ 143c80e10

TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
::
Emplace<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
          (TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,TPBDRigidClusteredParticleHandleImp<double,3,1> **param_1,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>
  *pTVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar8);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  pTVar7 = (TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>
            *)0x0;
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    pTVar3 = *param_1;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = 0;
    *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)local_28.Pointer = pTVar3;
    *(FScriptContainerElement **)((longlong)local_28.Pointer + 8) =
         (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 0x10) = param_2->ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0x14) = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
    pTVar7 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  uVar6 = ((uint)(*(ulonglong *)pTVar7 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)pTVar7 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  bVar4 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,pTVar7,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,pTVar7,local_res8[0]);
  }
  return (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar8 * 0x20);
}

// EmplaceByHash<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&> @ 143c81e50

TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&>
          (TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,TPBDRigidClusteredParticleHandleImp<double,3,1> **param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>
  *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar6);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>
            *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// FindOrAddImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&> @ 143c830d0

TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&>
          (TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,TPBDRigidClusteredParticleHandleImp<double,3,1> **param_2)

{
  int iVar1;
  longlong *plVar2;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                    *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  pTVar3 = EmplaceByHash<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&>
                     (this,param_1,param_2);
  return pTVar3;
}

// Find @ 143c9a730

TPBDRigidParticleHandleImp<double,3,1> ** __thiscall
TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>_>
::Find(TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>_>
       *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  TPBDRigidParticleHandleImp<double,3,1> **ppTVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(TPBDRigidParticleHandleImp<double,3,1> **)(lVar2 + (longlong)iVar3 * 0x18) == param_1)
        {
          ppTVar5 = (TPBDRigidParticleHandleImp<double,3,1> **)0x0;
          if (lVar1 != 0) {
            ppTVar5 = (TPBDRigidParticleHandleImp<double,3,1> **)(lVar1 + 8);
          }
          return ppTVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (TPBDRigidParticleHandleImp<double,3,1> **)0x0;
}

// FindChecked @ 143c9a910

TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
              *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar4;
  
  pTVar3 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  if (pTVar3 != (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    return (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
           &pTVar3->field_0x8;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
             (*pcVar1)();
    return pTVar4;
  }
  return (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
         &DAT_00000008;
}

// FindChecked @ 143c9a970

UnionFindInfo * __thiscall
TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
::FindChecked(void *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UnionFindInfo *pUVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)this);
        if ((TPBDRigidParticleHandleImp<double,3,1> *)*plVar6 == param_1) {
          if (plVar6 != (longlong *)0x0) {
            return (UnionFindInfo *)(plVar6 + 1);
          }
          break;
        }
        iVar3 = (int)plVar6[3];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (UnionFindInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pUVar4 = (UnionFindInfo *)(*pcVar1)();
  return pUVar4;
}

// Remove @ 143ca7150

int __thiscall
TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
::Remove(TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
         *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  int iVar1;
  uint uVar2;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_res8 [4];
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    local_res8[0] = param_1;
    iVar1 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*>
                      (&this->Pairs,uVar2 >> 0x10 ^ uVar2,local_res8);
    return iVar1;
  }
  return 0;
}

// FindOrAddImpl<Chaos::FUniqueIdx> @ 143cda7a0

FPBDSolveCache * __thiscall
TMapBase<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache,0>_>
::FindOrAddImpl<Chaos::FUniqueIdx>
          (TMapBase<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache,0>_>
           *this,uint param_1,FUniqueIdx *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FUniqueIdx *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x90 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == param_2->Idx) {
          if (piVar2 != (int *)0x0) {
            return (FPBDSolveCache *)(piVar2 + 4);
          }
          break;
        }
        iVar1 = piVar2[0x20];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<Chaos::FUniqueIdx_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<Chaos::FUniqueIdx_&&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FPBDSolveCache *)
         (*(longlong *)&(this->Pairs).Elements + 0x10 + (longlong)local_res8[0] * 0x90);
}

// Find @ 143d50270

FTestModeParticleData * __thiscall
TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>_>
::Find(TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>_>
       *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FTestModeParticleData *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0xc0 + *(longlong *)&(this->Pairs).Elements);
        if ((TPBDRigidParticleHandleImp<double,3,1> *)*plVar2 == param_1) {
          pFVar4 = (FTestModeParticleData *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FTestModeParticleData *)(plVar2 + 2);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[0x16];
      } while (iVar1 != -1);
    }
  }
  return (FTestModeParticleData *)0x0;
}

// Find @ 143d50320

FPBDComplexColliderBoneData * __thiscall
TMapBase<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>_>
::Find(TMapBase<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>_>
       *this,FParticleRangeIndex param_1)

{
  FPBDComplexColliderBoneData *pFVar1;
  uint uVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = param_1.ParticleIndex;
  uVar6 = param_1.RangeId - uVar8 ^ uVar8 >> 0xd;
  uVar3 = (-0x61c88647 - uVar6) - uVar8 ^ uVar6 << 8;
  uVar2 = (uVar8 - uVar6) - uVar3 ^ uVar3 >> 0xd;
  uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 >> 0xc;
  uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 << 0x10;
  uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 >> 5;
  uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 >> 3;
  uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar7 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar2 - uVar3) - uVar6 ^ uVar3 >> 0xf)) * 4);
    if (iVar7 != -1) {
      do {
        puVar5 = (undefined8 *)((longlong)iVar7 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (((int)*puVar5 == param_1.RangeId) && ((uint)((ulonglong)*puVar5 >> 0x20) == uVar8)) {
          if (iVar7 == -1) {
            return (FPBDComplexColliderBoneData *)0x0;
          }
          pFVar1 = (FPBDComplexColliderBoneData *)0x0;
          if (puVar5 != (undefined8 *)0x0) {
            pFVar1 = (FPBDComplexColliderBoneData *)(puVar5 + 1);
          }
          return pFVar1;
        }
        iVar7 = *(int *)(puVar5 + 0xb);
      } while (iVar7 != -1);
    }
  }
  return (FPBDComplexColliderBoneData *)0x0;
}

// Find @ 143d50440

TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_> *
__thiscall
TMapBase<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>_>
::Find(TMapBase<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>_>
       *this,FSpatialAccelerationIdx *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>
  *pTVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    ((ulonglong)((this->Pairs).HashSize - 1) & (ulonglong)(ushort)*param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(FSpatialAccelerationIdx *)(lVar2 + (longlong)iVar3 * 0x18) == *param_1) {
          pTVar4 = (TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>
                    *)0x0;
          if (lVar1 != 0) {
            pTVar4 = (TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>
                      *)(lVar1 + 8);
          }
          return pTVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>
          *)0x0;
}

// FindChecked @ 143d52340

TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_> *
__thiscall
TMapBase<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>_>
::FindChecked(TMapBase<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>_>
              *this,FSpatialAccelerationIdx *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>
  *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    ((ulonglong)((this->Pairs).HashSize - 1) & (ulonglong)(ushort)*param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(FSpatialAccelerationIdx *)(lVar2 + (longlong)iVar5 * 0x18) == *param_1) {
          if (lVar1 != 0) {
            return (TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>
                    *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>
            *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>
            *)(*pcVar3)();
  return pTVar6;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 143d8c290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<int,Chaos::Softs::GIA::FIntersectionContourTriangleSection_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::GIA::FIntersectionContourTriangleSection_const_*,1>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<int,Chaos::Softs::GIA::FIntersectionContourTriangleSection_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::GIA::FIntersectionContourTriangleSection_const_*,1>_>
           *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint uVar15;
  ForElementType<unsigned_int> FVar16;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  int local_114;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<int,Chaos::Softs::GIA::FIntersectionContourTriangleSection_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::GIA::FIntersectionContourTriangleSection_const_*,1>_>
  *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  ulonglong uVar17;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar17 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar15 = 0;
  if (uVar11 == 0) goto LAB_143d8c54d;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar11);
  uVar12 = 1;
  if (3 < uVar11) {
    uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_120 = (undefined4)lVar4;
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar12 <= (int)local_50)) goto LAB_143d8c54d;
  local_50 = uVar12;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar12 != 0) {
    uVar11 = uVar12;
    if (uVar12 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar11 = 0;
        goto LAB_143d8c3aa;
      }
    }
    else {
LAB_143d8c3aa:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar11,4);
    }
    if (0 < (int)uVar12) {
      uVar14 = (ulonglong)uVar12;
      uVar10 = uVar17;
      do {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar8 = (longlong)(int)uVar12 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(FVar9.Data + uVar8 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    uVar10 = uVar17;
    if (local_70 != 0) {
      FVar16 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = local_78;
      }
      uVar11 = *(uint *)FVar16;
      uVar14 = uVar17;
      while (uVar11 == 0) {
        uStack_150 = (int)uVar14 + 0x20;
        uVar14 = (ulonglong)uStack_150;
        iVar7 = (int)uVar10;
        local_168 = iVar7 + 1;
        uVar10 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_143d8c4b2;
        uVar11 = ((uint *)((longlong)FVar16 + 4))[iVar7];
      }
      uStack_164 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_164 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_11c = (int)lVar4;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar10 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_143d8c4b2:
        uVar10 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_110 = (longlong *)local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar10 < (int)local_70) {
      do {
        iVar7 = (int)uVar10;
        uVar11 = local_50 - 1 & *(uint *)(*local_110 + (longlong)iVar7 * 0xc);
        lVar4 = *local_110 + (longlong)iVar7 * 0xc;
        *(uint *)(lVar4 + 8) = uVar11;
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(FVar9.Data + uVar10 * 4);
        *(int *)(FVar9.Data + uVar10 * 4) = iVar7;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar10 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_143d8c54d:
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = *(uint *)&(this->Pairs).Elements.field_0x28;
  uVar10 = uVar17;
  local_c8 = uVar15;
  uStack_dc = 1;
  if (uVar11 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar11;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_140.Array;
    }
    uVar12 = *puVar13;
    uVar14 = uVar17;
    local_c8 = 0;
    uVar15 = 0;
    while (uVar12 == 0) {
      iVar7 = (int)uVar17;
      local_c8 = (int)uVar14 + 0x20;
      uVar14 = (ulonglong)local_c8;
      uVar15 = iVar7 + 1;
      uVar17 = (ulonglong)uVar15;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_143d8c5cf;
      uVar12 = puVar13[(longlong)iVar7 + 1];
    }
    uStack_dc = -uVar12 & uVar12;
    uVar17 = (ulonglong)uStack_dc * 2 + 1;
    lVar4 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_118 = (int)lVar4;
    uVar12 = (local_c8 - 1) + local_118;
    if ((int)uVar11 < (int)uVar12) {
      uVar12 = uVar11;
    }
    uVar10 = (ulonglong)uVar12;
  }
LAB_143d8c5cf:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar10;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar15);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar15;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar11) {
    do {
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      uVar15 = *(uint *)(lVar4 + (longlong)(int)uVar10 * 0x18);
      if (local_98._8_4_ != local_64) {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        for (iVar7 = *(int *)(FVar9.Data + (ulonglong)(local_50 - 1 & uVar15) * 4); iVar7 != -1;
            iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0xc + 4)) {
          if (*(uint *)(local_98._0_8_ + (longlong)iVar7 * 0xc) == uVar15) goto LAB_143d8c72f;
        }
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      pFVar2 = (FScriptContainerElement *)(lVar4 + (longlong)(int)uVar10 * 0x18);
      if (((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)*piVar1 * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) =
           *(undefined4 *)pFVar2;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,&local_114,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_140.CurrentBitIndex * 0x18));
LAB_143d8c72f:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar10 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar7 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar7;
}

// EmplaceByHash<int_const_&> @ 143dd1980

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<int_const_&>
          (TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_> *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar6);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_> *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_> *)0x0) {
    *(int *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (TArray<int,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// EmplaceByHash<int> @ 143dd1ab0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<int>
          (TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_> *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar6);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_> *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_> *)0x0) {
    *(int *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (TArray<int,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// FindOrAddImpl<int> @ 143dd28a0

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<int>
          (TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x16];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 143dda8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_>::
GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_>
           *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar16;
  uint *puVar17;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  int local_114;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_> *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  ulonglong uVar15;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar15 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar14 = 0;
  if (uVar11 == 0) goto LAB_143ddab49;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar11);
  uVar12 = 1;
  if (3 < uVar11) {
    uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_120 = (undefined4)lVar4;
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar12 <= (int)local_50)) goto LAB_143ddab49;
  local_50 = uVar12;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar12 != 0) {
    uVar11 = uVar12;
    if (uVar12 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar11 = 0;
        goto LAB_143dda9b1;
      }
    }
    else {
LAB_143dda9b1:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar11,4);
    }
    if (0 < (int)uVar12) {
      uVar13 = (ulonglong)uVar12;
      uVar10 = uVar15;
      do {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar8 = (longlong)(int)uVar12 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(FVar9.Data + uVar8 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    uVar10 = uVar15;
    if (local_70 != 0) {
      FVar16 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = local_78;
      }
      uVar11 = *(uint *)FVar16;
      uVar13 = uVar15;
      while (uVar11 == 0) {
        uStack_150 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_150;
        iVar7 = (int)uVar10;
        local_168 = iVar7 + 1;
        uVar10 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_143ddaab2;
        uVar11 = ((uint *)((longlong)FVar16 + 4))[iVar7];
      }
      uStack_164 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_164 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_11c = (int)lVar4;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar10 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_143ddaab2:
        uVar10 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_110 = (longlong *)local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar10 < (int)local_70) {
      do {
        iVar7 = (int)uVar10;
        uVar11 = local_50 - 1 & *(uint *)(*local_110 + (longlong)iVar7 * 0xc);
        lVar4 = *local_110 + (longlong)iVar7 * 0xc;
        *(uint *)(lVar4 + 8) = uVar11;
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(FVar9.Data + uVar10 * 4);
        *(int *)(FVar9.Data + uVar10 * 4) = iVar7;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar10 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_143ddab49:
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar11 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar15;
  local_c8 = uVar14;
  uStack_dc = 1;
  if (uVar11 != 0) {
    puVar17 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar11;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)TStack_140.Array;
    }
    uVar12 = *puVar17;
    uVar13 = uVar15;
    local_c8 = 0;
    uVar14 = 0;
    while (uVar12 == 0) {
      iVar7 = (int)uVar15;
      local_c8 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)local_c8;
      uVar14 = iVar7 + 1;
      uVar15 = (ulonglong)uVar14;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_143ddabfe;
      uVar12 = puVar17[(longlong)iVar7 + 1];
    }
    uStack_dc = -uVar12 & uVar12;
    uVar15 = (ulonglong)uStack_dc * 2 + 1;
    lVar4 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_118 = (int)lVar4;
    uVar12 = (local_c8 - 1) + local_118;
    if ((int)uVar11 < (int)uVar12) {
      uVar12 = uVar11;
    }
    uVar10 = (ulonglong)uVar12;
  }
LAB_143ddabfe:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar10;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar14);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar14;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar11) {
    do {
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      uVar14 = *(uint *)(lVar4 + (longlong)(int)uVar10 * 0x18);
      if (local_98._8_4_ != local_64) {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        for (iVar7 = *(int *)(FVar9.Data + (ulonglong)(local_50 - 1 & uVar14) * 4); iVar7 != -1;
            iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0xc + 4)) {
          if (*(uint *)(local_98._0_8_ + (longlong)iVar7 * 0xc) == uVar14) goto LAB_143ddad5e;
        }
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      pFVar2 = (FScriptContainerElement *)(lVar4 + (longlong)(int)uVar10 * 0x18);
      if (((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)*piVar1 * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) =
           *(undefined4 *)pFVar2;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,&local_114,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_140.CurrentBitIndex * 0x18));
LAB_143ddad5e:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar10 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar7 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar7;
}

// FindChecked @ 143e21850

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TArray<int,TSizedDefaultAllocator<32>_> *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<int,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindOrAddImpl<IPhysicsProxyBase_*_const_&> @ 143f3a810

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<IPhysicsProxyBase_*_const_&>
          (TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,IPhysicsProxyBase **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  IPhysicsProxyBase **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((IPhysicsProxyBase *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<int,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<IPhysicsProxyBase_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<IPhysicsProxyBase_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20
            );
  return (TArray<int,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 143f6bea0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
       *this,IPhysicsProxyBase *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((IPhysicsProxyBase *)*plVar2 == param_1) {
          pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 143f6bf40

IEventHandler ** __thiscall
TMapBase<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
::Find(TMapBase<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
       *this,void *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  IEventHandler **ppIVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(void **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppIVar5 = (IEventHandler **)0x0;
          if (lVar1 != 0) {
            ppIVar5 = (IEventHandler **)(lVar1 + 8);
          }
          return ppIVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (IEventHandler **)0x0;
}

// FindChecked @ 143f6bff0

FFieldSystemMetaData ** __thiscall
TMapBase<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,0>_>
::FindChecked(void *this,EMetaType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FFieldSystemMetaData **ppFVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - ECommandData_ProcessingResolution &
                             param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EMetaType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (FFieldSystemMetaData **)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FFieldSystemMetaData **)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  ppFVar4 = (FFieldSystemMetaData **)(*pcVar1)();
  return ppFVar4;
}

// FindOrAddImpl<void_*_const_&> @ 143f80fd0

FLockDepthData * __thiscall
TMapBase<void_*,Chaos::FLockDepthData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::FLockDepthData,0>_>
::FindOrAddImpl<void_*_const_&>
          (TMapBase<void_*,Chaos::FLockDepthData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::FLockDepthData,0>_>
           *this,uint param_1,void **param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  void **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(void **)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_143f81062;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<void_*,Chaos::FLockDepthData>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FLockDepthData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<void_*_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<void_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_143f81062:
  return (FLockDepthData *)(lVar3 + 8);
}

// FindOrAddImpl<int_const_&> @ 143fd21f0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TArray<int,TSizedDefaultAllocator<32>_> *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[6];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<int,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<TTuple<int,int>_> @ 14400a9c0

int * __thiscall
TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
::FindOrAddImpl<TTuple<int,int>_>
          (TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
           *this,uint param_1,TTuple<int,int> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [2];
  TTuple<int,int> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x14;
        if ((*(int *)(lVar2 + (longlong)iVar3 * 0x14) == *(int *)param_2) &&
           (*(int *)(lVar1 + 4) == *(int *)&param_2->field_0x4)) {
          if ((iVar3 != -1) && (lVar1 != 0)) {
            return (int *)(lVar1 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0xc);
      } while (iVar3 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TTuple<int,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TTuple<int,int>_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<TTuple<int,int>_&&> *)(ulonglong)param_1
             ,(bool *)&local_res20);
  return (int *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x14 + 8);
}

// FindChecked @ 144035920

TBox<double> * __thiscall
TMapBase<int,UE::Math::TBox<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TBox<double>,0>_>
::FindChecked(TMapBase<int,UE::Math::TBox<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TBox<double>,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TBox<double> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x48;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x48) == param_1) {
          if (lVar1 != 0) {
            return (TBox<double> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x40);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar4) {
    return (TBox<double> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TBox<double> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 1440359c0

UnionFindInfo * __thiscall
TMapBase<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`FGeometryCollectionConnectionGraphGenerator::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
::FindChecked(void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UnionFindInfo *pUVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x14;
        if (*(int *)(*(longlong *)this + (longlong)iVar3 * 0x14) == param_1) {
          if (lVar5 != 0) {
            return (UnionFindInfo *)(lVar5 + 4);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0xc);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (UnionFindInfo *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pUVar4 = (UnionFindInfo *)(*pcVar1)();
  return pUVar4;
}

// FindChecked @ 144035a60

int * __thiscall
TMapBase<GeometryCollectionAlgo::FFaceEdge,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GeometryCollectionAlgo::FFaceEdge,int,0>_>
::FindChecked(TMapBase<GeometryCollectionAlgo::FFaceEdge,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GeometryCollectionAlgo::FFaceEdge,int,0>_>
              *this,FFaceEdge param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar12 = param_1.VertexIdx2;
  uVar10 = param_1.VertexIdx1 - uVar12 ^ uVar12 >> 0xd;
  uVar8 = (-0x61c88647 - uVar10) - uVar12 ^ uVar10 << 8;
  uVar7 = (uVar12 - uVar10) - uVar8 ^ uVar8 >> 0xd;
  uVar10 = (uVar10 - uVar7) - uVar8 ^ uVar7 >> 0xc;
  uVar8 = (uVar8 - uVar10) - uVar7 ^ uVar10 << 0x10;
  uVar7 = (uVar7 - uVar8) - uVar10 ^ uVar8 >> 5;
  uVar10 = (uVar10 - uVar7) - uVar8 ^ uVar7 >> 3;
  uVar8 = (uVar8 - uVar10) - uVar7 ^ uVar10 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar9 = (this->Pairs).Hash.SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar11 = *(int *)((longlong)FVar9 +
                     (ulonglong)
                     ((this->Pairs).HashSize - 1U & ((uVar7 - uVar8) - uVar10 ^ uVar8 >> 0xf)) * 4);
    if (iVar11 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        uVar3 = *(undefined8 *)(lVar2 + (longlong)iVar11 * 0x14);
        lVar1 = lVar2 + (longlong)iVar11 * 0x14;
        if (((int)uVar3 == param_1.VertexIdx1) && ((uint)((ulonglong)uVar3 >> 0x20) == uVar12)) {
          if ((iVar11 != -1) && (lVar1 != 0)) {
            return (int *)(lVar1 + 8);
          }
          break;
        }
        iVar11 = *(int *)(lVar1 + 0xc);
      } while (iVar11 != -1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar5) {
    return (int *)&DAT_00000008;
  }
  pcVar4 = (code *)swi(3);
  piVar6 = (int *)(*pcVar4)();
  return piVar6;
}

// Emplace<TTuple<FName,FName>_const_&,FManagedArrayCollection::FValueType> @ 14405e6a0

FValueType * __thiscall
TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
::Emplace<TTuple<FName,FName>_const_&,FManagedArrayCollection::FValueType>
          (TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
           *this,TTuple<FName,FName> *param_1,FValueType *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x40 + 4 + lVar8);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)local_28.Pointer = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = uVar3;
    FManagedArrayCollection::FValueType::FValueType
              ((FValueType *)((longlong)local_28.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x38) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  uVar3 = *(undefined8 *)((longlong)local_28.Pointer + 8);
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 * 0x40 + (int)((ulonglong)uVar3 >> 0x20) + (uVar6 >> 2) + 0x9e3779b9 + uVar7 ^ uVar6
  ;
  bVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (FValueType *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar8 * 0x40);
}

// Emplace<TTuple<FName,FName>,FManagedArrayCollection::FValueType> @ 14405e800

FValueType * __thiscall
TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
::Emplace<TTuple<FName,FName>,FManagedArrayCollection::FValueType>
          (TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
           *this,TTuple<FName,FName> *param_1,FValueType *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x40 + 4 + lVar8);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)local_28.Pointer = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = uVar3;
    FManagedArrayCollection::FValueType::FValueType
              ((FValueType *)((longlong)local_28.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x38) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  uVar3 = *(undefined8 *)((longlong)local_28.Pointer + 8);
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 * 0x40 + (int)((ulonglong)uVar3 >> 0x20) + (uVar6 >> 2) + 0x9e3779b9 + uVar7 ^ uVar6
  ;
  bVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (FValueType *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar8 * 0x40);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 144060250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FName,FManagedArrayCollection::FGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FManagedArrayCollection::FGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  uint *puVar19;
  longlong lVar20;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<FName,FManagedArrayCollection::FGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar10 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar13 == 0) goto LAB_144060506;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar12 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_120 = (undefined4)lVar11;
    uVar14 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_144060506;
  local_50 = uVar14;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar13 = 0;
        goto LAB_144060365;
      }
    }
    else {
LAB_144060365:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar16 = (ulonglong)uVar14;
      uVar12 = uVar10;
      do {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar8 = uVar12 & (longlong)(int)uVar14 - 1U;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(FVar9.Data + uVar8 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    if (local_70 != 0) {
      FVar18 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_78;
      }
      uVar13 = *(uint *)FVar18;
      uVar12 = uVar10;
      while (uVar13 == 0) {
        uStack_150 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uStack_150;
        iVar17 = (int)uVar10;
        local_168 = iVar17 + 1;
        uVar10 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_144060462;
        uVar13 = ((uint *)((longlong)FVar18 + 4))[iVar17];
      }
      uStack_164 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_164 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_11c = (int)lVar11;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar10 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_144060462:
        uVar10 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar10 < (int)local_70) {
      do {
        puVar15 = (undefined8 *)((longlong)(int)uVar10 * 0x10 + *(longlong *)local_114._4_8_);
        uVar4 = *puVar15;
        uVar13 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar13 = local_50 - 1 & uVar13 + (int)((ulonglong)uVar4 >> 0x20);
        *(uint *)((longlong)puVar15 + 0xc) = uVar13;
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar12 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar9.Data + uVar12 * 4);
        *(int *)(FVar9.Data + uVar12 * 4) = (int)uVar10;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar10 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_144060506:
  iVar17 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  local_c8 = iVar17;
  iStack_cc = 0;
  uStack_dc = 1;
  if (iVar3 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_140.Array;
    }
    uVar13 = *puVar19;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      local_c8 = local_c8 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_cc = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1440605ae;
      uVar13 = puVar19[lVar11 + 1];
    }
    uStack_dc = -uVar13 & uVar13;
    uVar10 = (ulonglong)uStack_dc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_118 = (int)lVar11;
    iStack_cc = local_c8 + -1 + local_118;
    if (iVar3 < iStack_cc) {
      iStack_cc = iVar3;
    }
  }
LAB_1440605ae:
  uStack_d0 = 0xffffffff;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,iVar17);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  iStack_e0 = iVar17;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = iStack_cc;
  if (iStack_cc < iVar3) {
    do {
      lVar20 = (longlong)TStack_140.CurrentBitIndex;
      lVar11 = *(longlong *)
                (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_140.CurrentBitIndex * 0x14)
      ;
      uVar13 = ::GetTypeHash((FNameEntryId)(uint)lVar11);
      if (local_98._8_4_ != local_64) {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        for (iVar17 = *(int *)(FVar9.Data +
                              (ulonglong)(local_50 - 1 & (int)((ulonglong)lVar11 >> 0x20) + uVar13)
                              * 4); iVar17 != -1;
            iVar17 = *(int *)(local_98._0_8_ + (longlong)iVar17 * 0x10 + 8)) {
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar17 * 0x10) == lVar11) goto LAB_14406072e;
        }
      }
      pFVar2 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar20 * 0x14);
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar2) && (pFVar2 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar17 = (*pcVar6)();
        return iVar17;
      }
      iVar17 = param_1->ArrayNum;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar17 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar17 * 8) =
           *(undefined8 *)pFVar2;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                 (FName *)local_114,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_140.CurrentBitIndex * 0x14));
LAB_14406072e:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar17 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar17;
}

// FindChecked @ 14408b6b0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
              *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  FName *pFVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar6 = (FName *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar6 == param_1) {
          if (pFVar6 != (FName *)0x0) {
            return (TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar6 + 1);
          }
          break;
        }
        uVar3 = pFVar6[3].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<FName,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// Find @ 1440e1320

TWeakPtr<Chaos::FBaseRewindHistory,1> * __thiscall
TMapBase<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,0>_>
::Find(TMapBase<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,0>_>
       *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TWeakPtr<Chaos::FBaseRewindHistory,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((TGeometryParticleHandleImp<double,3,1> *)*plVar2 == param_1) {
          pTVar4 = (TWeakPtr<Chaos::FBaseRewindHistory,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TWeakPtr<Chaos::FBaseRewindHistory,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TWeakPtr<Chaos::FBaseRewindHistory,1> *)0x0;
}

// FindChecked @ 1440e14e0

TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_> * __thiscall
TMapBase<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
::FindChecked(void *this,EMetaType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_> *pTVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - ECommandData_ProcessingResolution &
                             param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EMetaType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_> *)
                   (lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_> *)(*pcVar1)();
  return pTVar4;
}

// FindOrAddImpl<Chaos::TPBDRigidParticle<double,3>_*_const_&> @ 1440fb1a0

FGTParticleIndices * __thiscall
TMapBase<Chaos::TPBDRigidParticle<double,3>_*,FGeometryCollectionPhysicsProxy::FGTParticleIndices,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticle<double,3>_*,FGeometryCollectionPhysicsProxy::FGTParticleIndices,0>_>
::FindOrAddImpl<Chaos::TPBDRigidParticle<double,3>_*_const_&>
          (TMapBase<Chaos::TPBDRigidParticle<double,3>_*,FGeometryCollectionPhysicsProxy::FGTParticleIndices,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticle<double,3>_*,FGeometryCollectionPhysicsProxy::FGTParticleIndices,0>_>
           *this,uint param_1,TPBDRigidParticle<double,3> **param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  TPBDRigidParticle<double,3> **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(TPBDRigidParticle<double,3> **)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_1440fb232;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<Chaos::TPBDRigidParticle<double,3>_*,FGeometryCollectionPhysicsProxy::FGTParticleIndices>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticle<double,3>_*,FGeometryCollectionPhysicsProxy::FGTParticleIndices,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<Chaos::TPBDRigidParticle<double,3>_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<Chaos::TPBDRigidParticle<double,3>_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_1440fb232:
  return (FGTParticleIndices *)(lVar3 + 8);
}

// FindOrAddImpl<FGuid_const_&> @ 1440fb250

FDamageCollector * __thiscall
TMapBase<FGuid,FDamageCollector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDamageCollector,0>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,FDamageCollector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDamageCollector,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,FDamageCollector>,TDefaultMapHashableKeyFuncs<FGuid,FDamageCollector,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FGuid,FDamageCollector>,TDefaultMapHashableKeyFuncs<FGuid,FDamageCollector,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (FDamageCollector *)(lVar2 + 0x10);
}

// FindChecked @ 14411a540

FValueType * __thiscall
TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
::FindChecked(TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
              *this,TTuple<FName,FName> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FValueType *pFVar4;
  
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  if (pTVar3 != (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    return (FValueType *)&pTVar3->field_0x10;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FValueType *)(*pcVar1)();
    return pFVar4;
  }
  return (FValueType *)&DAT_00000010;
}

