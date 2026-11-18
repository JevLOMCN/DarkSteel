// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// CreateAccelerationPerBucket_Threaded @ 143d49cd0

TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
 __thiscall
Chaos::FDefaultCollectionFactory::CreateAccelerationPerBucket_Threaded
          (FDefaultCollectionFactory *this,
          TConstParticleView<Chaos::FSpatialAccelerationCache> *param_1,ushort param_2,bool param_3,
          bool param_4,bool param_5)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
  TVar3;
  TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> *this_00;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *pTVar4;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *this_01;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *this_02;
  int iVar5;
  undefined6 in_register_00000082;
  TConstParticleView<Chaos::FSpatialAccelerationCache> *pTVar6;
  undefined7 in_register_00000089;
  bool in_stack_00000038;
  
  pTVar6 = (TConstParticleView<Chaos::FSpatialAccelerationCache> *)
           CONCAT62(in_register_00000082,param_2);
  if ((CONCAT71(in_register_00000089,param_3) & 0xffff) == 0) {
    if (BroadPhaseConfig.BroadphaseType != 0) {
      if ((BroadPhaseConfig.BroadphaseType - 1U & 0xfffffffd) == 0) {
        pTVar4 = (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                  *)0x0;
        iVar5 = BroadPhaseConfig.IterationsPerTimeSlice;
        if (param_4) {
          iVar5 = 0;
        }
        if (param_5) {
          this_02 = ::operator_new(0x1e0);
          if (this_02 ==
              (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
               *)0x0) goto LAB_143d49ec6;
          bVar2 = false;
        }
        else {
          bVar2 = AccelerationStructureUseDirtyTreeInsteadOfGrid == 1;
          this_02 = ::operator_new(0x1e0);
          if (this_02 ==
              (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
               *)0x0) goto LAB_143d49ec6;
          param_5 = false;
        }
        pTVar4 = TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                 ::
                 TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_><Chaos::TConstParticleView<Chaos::FSpatialAccelerationCache>_>
                           (this_02,pTVar6,BroadPhaseConfig.MaxChildrenInLeaf,
                            BroadPhaseConfig.MaxTreeDepth,(double)BroadPhaseConfig.MaxPayloadSize,
                            iVar5,param_5,bVar2,in_stack_00000038);
        goto LAB_143d49ec6;
      }
      if ((BroadPhaseConfig.BroadphaseType - 2U & 0xfffffffd) == 0) {
        this_01 = ::operator_new(0x1d8);
        pTVar4 = (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                  *)0x0;
        if (this_01 !=
            (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
             *)0x0) {
          pTVar4 = (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                    *)TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                      ::
                      TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_><Chaos::TConstParticleView<Chaos::FSpatialAccelerationCache>_>
                                (this_01,pTVar6,BroadPhaseConfig.AABBMaxChildrenInLeaf,
                                 BroadPhaseConfig.AABBMaxTreeDepth,
                                 (double)BroadPhaseConfig.MaxPayloadSize,0,false,false,true);
        }
        goto LAB_143d49ec6;
      }
      goto LAB_143d49d42;
    }
LAB_143d49d77:
    this_00 = ::operator_new(200);
    if (this_00 != (TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
      pTVar4 = (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                *)TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>::
                  TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3><Chaos::TConstParticleView<Chaos::FSpatialAccelerationCache>_>
                            (this_00,pTVar6,false,0.0,BroadPhaseConfig.BVNumCells,
                             (double)BroadPhaseConfig.MaxPayloadSize);
      goto LAB_143d49ec6;
    }
  }
  else {
    if (((uint)CONCAT71(in_register_00000089,param_3) & 0xffff) == 1) {
LAB_143d49d42:
      if ((1 < BroadPhaseConfig.BroadphaseType - 3U) &&
         (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7803858562110718140>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                             ,0xbc,
                             "BroadPhaseConfig.BroadphaseType == FBroadPhaseConfig::TreeAndGrid || BroadPhaseConfig.BroadphaseType == FBroadPhaseConfig::TreeOfGridAndGrid"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar3.Ptr = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
                    (*pcVar1)();
        return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                )TVar3.Ptr;
      }
      goto LAB_143d49d77;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                       ,0xc1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)(*pcVar1)();
      return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
              )TVar3.Ptr;
    }
  }
  pTVar4 = (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
            *)0x0;
LAB_143d49ec6:
  (param_1->SOAViews).AllocatorInstance.Data = (FScriptContainerElement *)pTVar4;
  return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
          )(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)param_1;
}

// CreateEmptyCollection @ 143d49ef0

TUniquePtr<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_>_>
 __thiscall Chaos::FDefaultCollectionFactory::CreateEmptyCollection(FDefaultCollectionFactory *this)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *in_RDX;
  longlong *plVar4;
  ushort uVar5;
  ushort uVar6;
  undefined1 local_res10 [8];
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined1 uVar7;
  undefined8 *local_58;
  void *local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  plVar4 = (longlong *)0x0;
  local_50 = (void *)0x0;
  local_48 = 0;
  uVar5 = (2 < BroadPhaseConfig.BroadphaseType) + 1;
  local_40 = 0;
  plVar2 = ::operator_new(0x180);
  if (plVar2 != (longlong *)0x0) {
    *(undefined4 *)(plVar2 + 1) = 0;
    *(undefined2 *)((longlong)plVar2 + 0xc) = 0x301;
    *(undefined2 *)(plVar2 + 2) = 0x100;
    *plVar2 = (longlong)
              &
              ___7__TSpatialAccelerationCollection_V__TAABBTree_VFAccelerationStructureHandle_Chaos__U__TAABBTreeLeafArray_VFAccelerationStructureHandle_Chaos___00N_2__00NU__TDefaultAABBTreeStorageTraits_VFAccelerationStructureHandle_Chaos___2__Chaos__V__TBoundingVolume_VFAccelerationStructureHandle_Chaos__N_02_2_V__TAABBTree_VFAccelerationStructureHandle_Chaos__V__TBoundingVolume_VFAccelerationStructureHandle_Chaos__N_02_2__00NU__TDefaultAABBTreeStorageTraits_VFAccelerationStructureHandle_Chaos___2__2__Chaos__6B_
    ;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    plVar2[8] = 0;
    plVar2[9] = 0;
    plVar2[10] = 0;
    plVar2[0xb] = 0;
    plVar2[0xc] = 0;
    plVar2[0xd] = 0;
    plVar2[0xe] = 0;
    plVar2[0xf] = 0;
    plVar2[0x10] = 0;
    plVar2[0x11] = 0;
    plVar2[0x12] = 0;
    plVar2[0x13] = 0;
    plVar2[0x14] = 0;
    plVar2[0x15] = 0;
    plVar2[0x16] = 0;
    plVar2[0x17] = 0;
    plVar2[0x18] = 0;
    plVar2[0x19] = 0;
    plVar2[0x1a] = 0;
    plVar2[0x1b] = 0;
    plVar2[0x1c] = 0;
    plVar2[0x1d] = 0;
    plVar2[0x1e] = 0;
    plVar2[0x1f] = 0;
    plVar2[0x20] = 0;
    plVar2[0x21] = 0;
    plVar2[0x22] = 0;
    plVar2[0x23] = 0;
    plVar2[0x24] = 0;
    plVar2[0x25] = 0;
    plVar2[0x26] = 0;
    plVar2[0x27] = 0;
    plVar2[0x28] = 0;
    plVar2[0x29] = 0;
    plVar2[0x2a] = 0;
    plVar2[0x2b] = 0;
    plVar2[0x2c] = 0;
    plVar2[0x2d] = 0;
    plVar2[0x2e] = 0;
    plVar4 = plVar2;
  }
  uVar6 = 0;
  do {
    pcVar1 = *(code **)(*plVar4 + 0xe0);
    uVar3 = (**(code **)((longlong)*this + 0x10))(this,&local_res20,&local_50,uVar6,1,0,0);
    uVar7 = 0;
    (*pcVar1)(plVar4,local_res10,uVar3,uVar6,0);
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
    }
    if ((AccelerationStructureSplitStaticAndDynamic == 1) ||
       (AccelerationStructureIsolateQueryOnlyObjects == 1)) {
      pcVar1 = *(code **)(*plVar4 + 0xe0);
      uVar3 = (**(code **)((longlong)*this + 0x10))
                        (this,&local_58,&local_50,uVar6,CONCAT11(uVar7,1),
                         AccelerationStructureUseDynamicTree != 0,1);
      uVar7 = 0;
      (*pcVar1)(plVar4,&local_res18,uVar3,uVar6,1);
      if (local_58 != (undefined8 *)0x0) {
        (**(code **)*local_58)(local_58,1);
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < uVar5);
  if ((AccelerationStructureIsolateQueryOnlyObjects != 0) && (uVar5 == 1)) {
    pcVar1 = *(code **)(*plVar4 + 0xe0);
    uVar3 = (**(code **)((longlong)*this + 0x10))
                      (this,&local_res18,&local_50,0,CONCAT11(uVar7,1),0,0);
    uVar7 = 0;
    (*pcVar1)(plVar4,local_res10,uVar3,0,2);
    if (local_res18 != (undefined8 *)0x0) {
      (**(code **)*local_res18)(local_res18,1);
    }
    if (AccelerationStructureSplitStaticAndDynamic == 1) {
      pcVar1 = *(code **)(*plVar4 + 0xe0);
      uVar3 = (**(code **)((longlong)*this + 0x10))
                        (this,&local_res18,&local_50,0,CONCAT11(uVar7,1),
                         AccelerationStructureUseDynamicTree != 0,0);
      (*pcVar1)(plVar4,local_res10,uVar3,0,3);
      if (local_res18 != (undefined8 *)0x0) {
        (**(code **)*local_res18)(local_res18,1);
      }
    }
  }
  in_RDX->_padding_ = (longlong)plVar4;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return (TUniquePtr<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_>_>
          )in_RDX;
}

// GetActiveBucketsMask @ 143d54290

uchar __thiscall
Chaos::FDefaultCollectionFactory::GetActiveBucketsMask(FDefaultCollectionFactory *this)

{
  uchar uVar1;
  
  uVar1 = '\x01';
  if (2 < BroadPhaseConfig.BroadphaseType) {
    uVar1 = '\x03';
  }
  return uVar1;
}

// IsBucketTimeSliced @ 143d59b50

bool __thiscall
Chaos::FDefaultCollectionFactory::IsBucketTimeSliced(FDefaultCollectionFactory *this,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 == 0) {
    if (BroadPhaseConfig.BroadphaseType == 0) {
      return false;
    }
    if (BroadPhaseConfig.BroadphaseType - 1U < 4) {
      return true;
    }
  }
  else if (param_1 != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                       ,0x99,L"");
    goto LAB_143d59b86;
  }
  if (BroadPhaseConfig.BroadphaseType - 3U < 2) {
    return false;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7803858562110718100>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                     ,0x94,
                     "BroadPhaseConfig.BroadphaseType == FBroadPhaseConfig::TreeAndGrid || BroadPhaseConfig.BroadphaseType == FBroadPhaseConfig::TreeOfGridAndGrid"
                    );
LAB_143d59b86:
  if (bVar2 == false) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// Serialize @ 143d6d480

void __thiscall
Chaos::FDefaultCollectionFactory::Serialize
          (FDefaultCollectionFactory *this,
          TUniquePtr<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_>_>
          *param_1,FChaosArchive *param_2)

{
  TUniquePtr<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_>_>
  *pTVar1;
  ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *pIVar2;
  undefined8 *local_res18 [2];
  
  if ((param_2->_padding_ & 1) == 0) {
    pIVar2 = param_1->Ptr;
  }
  else {
    pTVar1 = (TUniquePtr<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_>_>
              *)(**(code **)*this)(this,local_res18);
    if (param_1 != pTVar1) {
      pIVar2 = param_1->Ptr;
      param_1->Ptr = pTVar1->Ptr;
      pTVar1->Ptr = (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)
                    0x0;
      if (pIVar2 != (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)
                    0x0) {
        (**(code **)pIVar2->_padding_)(pIVar2,1);
      }
    }
    if (local_res18[0] != (undefined8 *)0x0) {
      (**(code **)*local_res18[0])(local_res18[0],1);
    }
    pIVar2 = param_1->Ptr;
  }
                    /* WARNING: Could not recover jumptable at 0x000143d6d4f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pIVar2->_padding_ + 0xd0))(pIVar2,param_2);
  return;
}

