// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 7

// LockComponentData @ 1466a5f30

TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
* __cdecl UE::MovieScene::
          TUnpackMultiComponentData<TIntegerSequence<int,0,1,2>,UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
          ::LockComponentData(TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
                              *__return_storage_ptr__,FEntityAllocation *param_1,
                             FOptionalReadAccess *param_2,FEntityAllocationWriteContext param_3)

{
  FComponentHeader *pFVar1;
  FComponentHeader *pFVar2;
  FComponentHeader *pFVar3;
  FComponentHeader *pFVar4;
  EComponentHeaderLockMode EVar5;
  FComponentHeader *pFVar6;
  FComponentHeader *pFVar7;
  EComponentHeaderLockMode local_res8;
  uchar *local_res10;
  EComponentHeaderLockMode EStack_50;
  
  pFVar4 = param_1->ComponentHeaders;
  pFVar7 = (FComponentHeader *)0x0;
  pFVar3 = pFVar4 + param_1->NumComponents;
  for (; pFVar4 != pFVar3; pFVar4 = pFVar4 + 1) {
    if ((pFVar4->ComponentType).Value == *(ushort *)(param_2 + 2)) {
      local_res8 = param_1->LockMode;
      if (local_res8 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar4->ReadWriteLock);
      }
      LOCK();
      pFVar4->ScheduledAccessCount = (atomic<int>)((int)pFVar4->ScheduledAccessCount + 1);
      UNLOCK();
      local_res10 = pFVar4->Components;
      goto LAB_1466a5fa1;
    }
  }
  local_res10 = (uchar *)0x0;
  local_res8 = LockFree;
  pFVar4 = pFVar7;
LAB_1466a5fa1:
  pFVar3 = param_1->ComponentHeaders;
  pFVar6 = pFVar3 + param_1->NumComponents;
  for (; pFVar3 != pFVar6; pFVar3 = pFVar3 + 1) {
    if ((pFVar3->ComponentType).Value == *(ushort *)(param_2 + 1)) {
      EVar5 = param_1->LockMode;
      if (EVar5 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar3->ReadWriteLock);
      }
      LOCK();
      pFVar3->ScheduledAccessCount = (atomic<int>)((int)pFVar3->ScheduledAccessCount + 1);
      UNLOCK();
      pFVar6 = (FComponentHeader *)pFVar3->Components;
      goto LAB_1466a5fe6;
    }
  }
  EStack_50 = LockFree;
  pFVar3 = pFVar7;
  pFVar6 = pFVar7;
  EVar5 = EStack_50;
LAB_1466a5fe6:
  pFVar2 = param_1->ComponentHeaders;
  pFVar1 = pFVar2 + param_1->NumComponents;
  do {
    if (pFVar2 == pFVar1) {
      EStack_50 = LockFree;
      pFVar2 = pFVar7;
LAB_1466a6022:
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x38 = local_res8;
      *(uchar **)&__return_storage_ptr__->field_0x40 = local_res10;
      *(FComponentHeader **)__return_storage_ptr__ = pFVar2;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x8 = EStack_50;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x10 = pFVar7;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x18 = pFVar3;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x20 = EVar5;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x28 = pFVar6;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x30 = pFVar4;
      return __return_storage_ptr__;
    }
    if ((pFVar2->ComponentType).Value == *(ushort *)param_2) {
      EStack_50 = param_1->LockMode;
      if (EStack_50 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar2->ReadWriteLock);
      }
      LOCK();
      pFVar2->ScheduledAccessCount = (atomic<int>)((int)pFVar2->ScheduledAccessCount + 1);
      UNLOCK();
      pFVar7 = (FComponentHeader *)pFVar2->Components;
      goto LAB_1466a6022;
    }
    pFVar2 = pFVar2 + 1;
  } while( true );
}

// LockComponentData @ 1467a5e40

TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FString>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<__int64>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<bool>_>_>
* __cdecl UE::MovieScene::
          TUnpackMultiComponentData<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,double,double,double,double,double,double,double,double,double,FString,__int64,bool>
          ::LockComponentData(TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FString>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<__int64>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<bool>_>_>
                              *__return_storage_ptr__,FEntityAllocation *param_1,
                             FOptionalReadAccess *param_2,FEntityAllocationWriteContext param_3)

{
  FOptionalReadAccess *pFVar1;
  TComponentLock<UE::MovieScene::TReadOptional<double>_> *pTVar2;
  TComponentLock<UE::MovieScene::TReadOptional<double>_> *pTVar3;
  TComponentLock<UE::MovieScene::TReadOptional<double>_> *pTVar4;
  TComponentLock<UE::MovieScene::TReadOptional<double>_> *pTVar5;
  FComponentHeader *pFVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  TOptionalReadAccess<double> local_res10 [2];
  FOptionalReadAccess *local_res18;
  EComponentHeaderLockMode local_130;
  EComponentHeaderLockMode local_12c;
  EComponentHeaderLockMode local_128;
  EComponentHeaderLockMode local_124;
  EComponentHeaderLockMode local_120;
  EComponentHeaderLockMode local_11c;
  EComponentHeaderLockMode local_118;
  EComponentHeaderLockMode local_114;
  FComponentHeader *local_110;
  FComponentHeader *local_108;
  FComponentHeader *local_100;
  FComponentHeader *local_f8;
  FComponentHeader *local_f0;
  FComponentHeader *local_e8;
  uchar *local_e0;
  uchar *local_d8;
  uchar *local_d0;
  uchar *local_c8;
  uchar *local_c0;
  uchar *local_b8;
  uchar *local_b0;
  uchar *local_a8;
  TComponentLock<UE::MovieScene::TReadOptional<double>_> local_a0;
  TComponentLock<UE::MovieScene::TReadOptional<double>_> local_88;
  TComponentLock<UE::MovieScene::TReadOptional<double>_> local_70;
  TComponentLock<UE::MovieScene::TReadOptional<double>_> local_58;
  
  pFVar8 = param_1->ComponentHeaders;
  pFVar7 = pFVar8 + param_1->NumComponents;
  for (; local_res18 = param_2, pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((pFVar8->ComponentType).Value == *(ushort *)(param_2 + 0xb)) {
      local_114 = param_1->LockMode;
      if (local_114 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
      }
      LOCK();
      pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + 1);
      UNLOCK();
      local_a8 = pFVar8->Components;
      goto LAB_1467a5ebf;
    }
  }
  local_a8 = (uchar *)0x0;
  local_a0._16_8_ = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_114 = LockFree;
  pFVar8 = (FComponentHeader *)0x0;
LAB_1467a5ebf:
  pFVar7 = param_1->ComponentHeaders;
  pFVar6 = pFVar7 + param_1->NumComponents;
  for (; pFVar7 != pFVar6; pFVar7 = pFVar7 + 1) {
    if ((pFVar7->ComponentType).Value == *(ushort *)(local_res18 + 10)) {
      local_118 = param_1->LockMode;
      if (local_118 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar7->ReadWriteLock);
      }
      LOCK();
      pFVar7->ScheduledAccessCount = (atomic<int>)((int)pFVar7->ScheduledAccessCount + 1);
      UNLOCK();
      local_b0 = pFVar7->Components;
      goto LAB_1467a5f0c;
    }
  }
  local_b0 = (uchar *)0x0;
  local_118 = LockFree;
  pFVar7 = (FComponentHeader *)0x0;
LAB_1467a5f0c:
  local_e8 = param_1->ComponentHeaders;
  pFVar6 = local_e8 + param_1->NumComponents;
  for (; local_e8 != pFVar6; local_e8 = local_e8 + 1) {
    if ((local_e8->ComponentType).Value == *(ushort *)(local_res18 + 9)) {
      local_11c = param_1->LockMode;
      if (local_11c == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_e8->ReadWriteLock);
      }
      LOCK();
      local_e8->ScheduledAccessCount = (atomic<int>)((int)local_e8->ScheduledAccessCount + 1);
      UNLOCK();
      local_b8 = local_e8->Components;
      goto LAB_1467a5f5f;
    }
  }
  local_e8 = (FComponentHeader *)0x0;
  local_11c = LockFree;
  local_b8 = (uchar *)0x0;
LAB_1467a5f5f:
  local_f0 = param_1->ComponentHeaders;
  pFVar6 = local_f0 + param_1->NumComponents;
  for (; local_f0 != pFVar6; local_f0 = local_f0 + 1) {
    if ((local_f0->ComponentType).Value == *(ushort *)(local_res18 + 8)) {
      local_120 = param_1->LockMode;
      if (local_120 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_f0->ReadWriteLock);
      }
      LOCK();
      local_f0->ScheduledAccessCount = (atomic<int>)((int)local_f0->ScheduledAccessCount + 1);
      UNLOCK();
      local_c0 = local_f0->Components;
      goto LAB_1467a5fb1;
    }
  }
  local_f0 = (FComponentHeader *)0x0;
  local_120 = LockFree;
  local_c0 = (uchar *)0x0;
LAB_1467a5fb1:
  local_f8 = param_1->ComponentHeaders;
  pFVar6 = local_f8 + param_1->NumComponents;
  for (; local_f8 != pFVar6; local_f8 = local_f8 + 1) {
    if ((local_f8->ComponentType).Value == *(ushort *)(local_res18 + 7)) {
      local_124 = param_1->LockMode;
      if (local_124 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_f8->ReadWriteLock);
      }
      LOCK();
      local_f8->ScheduledAccessCount = (atomic<int>)((int)local_f8->ScheduledAccessCount + 1);
      UNLOCK();
      local_c8 = local_f8->Components;
      goto LAB_1467a6001;
    }
  }
  local_f8 = (FComponentHeader *)0x0;
  local_124 = LockFree;
  local_c8 = (uchar *)0x0;
LAB_1467a6001:
  local_100 = param_1->ComponentHeaders;
  pFVar6 = local_100 + param_1->NumComponents;
  for (; local_100 != pFVar6; local_100 = local_100 + 1) {
    if ((local_100->ComponentType).Value == *(ushort *)(local_res18 + 6)) {
      local_128 = param_1->LockMode;
      if (local_128 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_100->ReadWriteLock);
      }
      LOCK();
      local_100->ScheduledAccessCount = (atomic<int>)((int)local_100->ScheduledAccessCount + 1);
      UNLOCK();
      local_d0 = local_100->Components;
      goto LAB_1467a6051;
    }
  }
  local_100 = (FComponentHeader *)0x0;
  local_128 = LockFree;
  local_d0 = (uchar *)0x0;
LAB_1467a6051:
  local_108 = param_1->ComponentHeaders;
  pFVar6 = local_108 + param_1->NumComponents;
  for (; local_108 != pFVar6; local_108 = local_108 + 1) {
    if ((local_108->ComponentType).Value == *(ushort *)(local_res18 + 5)) {
      local_12c = param_1->LockMode;
      if (local_12c == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_108->ReadWriteLock);
      }
      LOCK();
      local_108->ScheduledAccessCount = (atomic<int>)((int)local_108->ScheduledAccessCount + 1);
      UNLOCK();
      local_d8 = local_108->Components;
      goto LAB_1467a60a2;
    }
  }
  local_108 = (FComponentHeader *)0x0;
  local_12c = LockFree;
  local_d8 = (uchar *)0x0;
LAB_1467a60a2:
  local_110 = param_1->ComponentHeaders;
  pFVar6 = local_110 + param_1->NumComponents;
  do {
    if (local_110 == pFVar6) {
      local_110 = (FComponentHeader *)0x0;
      local_130 = LockFree;
      local_e0 = (uchar *)0x0;
LAB_1467a60f1:
      local_res10[0]._0_2_ = *(undefined2 *)(local_res18 + 3);
      local_res10[0]._2_2_ = 0x7fff;
      pTVar2 = TOptionalReadAccess<double>::LockComponentData(local_res10,&local_a0,param_1,param_3)
      ;
      pFVar1 = local_res18;
      local_res10[0]._2_2_ = 0x7fff;
      local_res10[0]._0_2_ = *(undefined2 *)(local_res18 + 2);
      pTVar3 = TOptionalReadAccess<double>::LockComponentData(local_res10,&local_58,param_1,param_3)
      ;
      local_res10[0]._0_2_ = *(undefined2 *)(pFVar1 + 1);
      local_res10[0]._2_2_ = 0x7fff;
      pTVar4 = TOptionalReadAccess<double>::LockComponentData(local_res10,&local_70,param_1,param_3)
      ;
      pFVar1 = local_res18;
      local_res18 = (FOptionalReadAccess *)CONCAT44(local_res18._4_4_,0x7fff0000);
      local_res18 = (FOptionalReadAccess *)CONCAT62(local_res18._2_6_,*(undefined2 *)pFVar1);
      pTVar5 = TOptionalReadAccess<double>::LockComponentData
                         ((TOptionalReadAccess<double> *)&local_res18,&local_88,param_1,param_3);
      *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)pTVar5;
      *(undefined4 *)&__return_storage_ptr__->field_0x8 = *(undefined4 *)&pTVar5->field_0x8;
      *(undefined8 *)pTVar5 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&pTVar5->field_0x10;
      *(undefined8 *)&pTVar5->field_0x10 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = *(undefined8 *)pTVar4;
      *(undefined4 *)&__return_storage_ptr__->field_0x20 = *(undefined4 *)&pTVar4->field_0x8;
      *(undefined8 *)pTVar4 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x28 = *(undefined8 *)&pTVar4->field_0x10;
      *(undefined8 *)&pTVar4->field_0x10 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x30 = *(undefined8 *)pTVar3;
      *(undefined4 *)&__return_storage_ptr__->field_0x38 = *(undefined4 *)&pTVar3->field_0x8;
      *(undefined8 *)pTVar3 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x40 = *(undefined8 *)&pTVar3->field_0x10;
      *(undefined8 *)&pTVar3->field_0x10 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x48 = *(undefined8 *)pTVar2;
      *(undefined4 *)&__return_storage_ptr__->field_0x50 = *(undefined4 *)&pTVar2->field_0x8;
      *(undefined8 *)pTVar2 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x58 = *(undefined8 *)&pTVar2->field_0x10;
      *(undefined8 *)&pTVar2->field_0x10 = 0;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x60 = local_110;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x68 = local_130;
      *(uchar **)&__return_storage_ptr__->field_0x70 = local_e0;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x78 = local_108;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x80 = local_12c;
      *(uchar **)&__return_storage_ptr__->field_0x88 = local_d8;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x90 = local_100;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x98 = local_128;
      *(uchar **)&__return_storage_ptr__->field_0xa0 = local_d0;
      *(FComponentHeader **)&__return_storage_ptr__->field_0xa8 = local_f8;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0xb0 = local_124;
      *(uchar **)&__return_storage_ptr__->field_0xb8 = local_c8;
      *(FComponentHeader **)&__return_storage_ptr__->field_0xc0 = local_f0;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0xc8 = local_120;
      *(uchar **)&__return_storage_ptr__->field_0xd0 = local_c0;
      *(FComponentHeader **)&__return_storage_ptr__->field_0xd8 = local_e8;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0xe0 = local_11c;
      *(uchar **)&__return_storage_ptr__->field_0xe8 = local_b8;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0xf8 = local_118;
      *(uchar **)&__return_storage_ptr__->field_0x100 = local_b0;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x110 = local_114;
      *(uchar **)&__return_storage_ptr__->field_0x118 = local_a8;
      *(FComponentHeader **)&__return_storage_ptr__->field_0xf0 = pFVar7;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x108 = pFVar8;
      if (local_88._0_8_ != 0) {
        LOCK();
        *(int *)(local_88._0_8_ + 0x30) = *(int *)(local_88._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_88._8_4_ == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_88._0_8_ + 0x20));
        }
      }
      if (local_70._0_8_ != 0) {
        LOCK();
        *(int *)(local_70._0_8_ + 0x30) = *(int *)(local_70._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_70._8_4_ == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_70._0_8_ + 0x20));
        }
      }
      if (local_58._0_8_ != 0) {
        LOCK();
        *(int *)(local_58._0_8_ + 0x30) = *(int *)(local_58._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_58._8_4_ == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_58._0_8_ + 0x20));
        }
      }
      if (local_a0._0_8_ != 0) {
        LOCK();
        *(int *)(local_a0._0_8_ + 0x30) = *(int *)(local_a0._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_a0._8_4_ == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_a0._0_8_ + 0x20));
        }
      }
      return __return_storage_ptr__;
    }
    if ((local_110->ComponentType).Value == *(ushort *)(local_res18 + 4)) {
      local_130 = param_1->LockMode;
      if (local_130 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_110->ReadWriteLock);
      }
      LOCK();
      local_110->ScheduledAccessCount = (atomic<int>)((int)local_110->ScheduledAccessCount + 1);
      UNLOCK();
      local_e0 = local_110->Components;
      goto LAB_1467a60f1;
    }
    local_110 = local_110 + 1;
  } while( true );
}

// ResolvePreLockedComponentData @ 1467baa70

TMultiComponentData<UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<FString>,UE::MovieScene::TReadOptional<__int64>,UE::MovieScene::TReadOptional<bool>_>
* __cdecl UE::MovieScene::
          TUnpackMultiComponentData<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,double,double,double,double,double,double,double,double,double,FString,__int64,bool>
          ::ResolvePreLockedComponentData
                    (TMultiComponentData<UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<FString>,UE::MovieScene::TReadOptional<__int64>,UE::MovieScene::TReadOptional<bool>_>
                     *__return_storage_ptr__,FEntityAllocation *param_1,FOptionalReadAccess *param_2
                    ,TRelativePtr<void,unsigned_int> *param_3,FEntityAllocationWriteContext param_4)

{
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar *puVar10;
  uchar *puVar11;
  uchar *puVar12;
  
  puVar1 = (uchar *)0x0;
  puVar10 = puVar1;
  if (param_3[0xb].Offset != 0xffffffff) {
    puVar10 = param_1->ComponentData + param_3[0xb].Offset;
  }
  puVar3 = puVar1;
  if (param_3[10].Offset != 0xffffffff) {
    puVar3 = param_1->ComponentData + param_3[10].Offset;
  }
  puVar12 = puVar1;
  if (param_3[9].Offset != 0xffffffff) {
    puVar12 = param_1->ComponentData + param_3[9].Offset;
  }
  puVar9 = puVar1;
  if (param_3[8].Offset != 0xffffffff) {
    puVar9 = param_1->ComponentData + param_3[8].Offset;
  }
  puVar11 = puVar1;
  if (param_3[7].Offset != 0xffffffff) {
    puVar11 = param_1->ComponentData + param_3[7].Offset;
  }
  puVar4 = puVar1;
  if (param_3[6].Offset != 0xffffffff) {
    puVar4 = param_1->ComponentData + param_3[6].Offset;
  }
  puVar5 = puVar1;
  if (param_3[5].Offset != 0xffffffff) {
    puVar5 = param_1->ComponentData + param_3[5].Offset;
  }
  puVar2 = puVar1;
  if (param_3[4].Offset != 0xffffffff) {
    puVar2 = param_1->ComponentData + param_3[4].Offset;
  }
  puVar8 = puVar1;
  if (param_3[3].Offset != 0xffffffff) {
    puVar8 = param_1->ComponentData + param_3[3].Offset;
  }
  puVar7 = puVar1;
  if (param_3[2].Offset != 0xffffffff) {
    puVar7 = param_1->ComponentData + param_3[2].Offset;
  }
  puVar6 = puVar1;
  if (param_3[1].Offset != 0xffffffff) {
    puVar6 = param_1->ComponentData + param_3[1].Offset;
  }
  if (param_3->Offset != 0xffffffff) {
    puVar1 = param_1->ComponentData + param_3->Offset;
  }
  *(uchar **)&__return_storage_ptr__->Data = puVar1;
  *(uchar **)&(__return_storage_ptr__->Data).field_0x8 = puVar6;
  *(uchar **)&(__return_storage_ptr__->Data).field_0x10 = puVar7;
  *(uchar **)&(__return_storage_ptr__->Data).field_0x18 = puVar8;
  *(uchar **)&(__return_storage_ptr__->Data).field_0x20 = puVar2;
  *(uchar **)&(__return_storage_ptr__->Data).field_0x28 = puVar5;
  *(uchar **)&(__return_storage_ptr__->Data).field_0x30 = puVar4;
  *(uchar **)&(__return_storage_ptr__->Data).field_0x38 = puVar11;
  *(uchar **)&(__return_storage_ptr__->Data).field_0x40 = puVar9;
  *(uchar **)&(__return_storage_ptr__->Data).field_0x48 = puVar12;
  *(uchar **)&(__return_storage_ptr__->Data).field_0x50 = puVar3;
  *(uchar **)&(__return_storage_ptr__->Data).field_0x58 = puVar10;
  return __return_storage_ptr__;
}

// LockComponentData @ 14683fbf0

TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>_>
* __cdecl UE::MovieScene::
          TUnpackMultiComponentData<TIntegerSequence<int,0,1,2,3,4,5>,FMaterialParameterInfo,FMaterialParameterInfo,FMaterialParameterInfo,FName,FName,FName>
          ::LockComponentData(TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>_>
                              *__return_storage_ptr__,FEntityAllocation *param_1,
                             FOptionalReadAccess *param_2,FEntityAllocationWriteContext param_3)

{
  FComponentHeader *pFVar1;
  FComponentHeader *pFVar2;
  FComponentHeader *pFVar3;
  FComponentHeader *pFVar4;
  FComponentHeader *pFVar5;
  FComponentHeader *pFVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  EComponentHeaderLockMode local_res10;
  EComponentHeaderLockMode local_res18;
  EComponentHeaderLockMode local_88;
  EComponentHeaderLockMode local_84;
  EComponentHeaderLockMode local_80;
  EComponentHeaderLockMode EStack_70;
  uchar *local_60;
  uchar *local_58;
  uchar *local_50;
  uchar *local_48;
  uchar *local_40;
  
  pFVar2 = param_1->ComponentHeaders;
  pFVar5 = pFVar2 + param_1->NumComponents;
  for (; pFVar2 != pFVar5; pFVar2 = pFVar2 + 1) {
    if ((pFVar2->ComponentType).Value == *(ushort *)(param_2 + 5)) {
      local_80 = param_1->LockMode;
      if (local_80 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar2->ReadWriteLock);
      }
      LOCK();
      pFVar2->ScheduledAccessCount = (atomic<int>)((int)pFVar2->ScheduledAccessCount + 1);
      UNLOCK();
      local_40 = pFVar2->Components;
      goto LAB_14683fc5c;
    }
  }
  local_40 = (uchar *)0x0;
  local_80 = LockFree;
  pFVar2 = (FComponentHeader *)0x0;
LAB_14683fc5c:
  pFVar5 = param_1->ComponentHeaders;
  pFVar4 = pFVar5 + param_1->NumComponents;
  for (; pFVar5 != pFVar4; pFVar5 = pFVar5 + 1) {
    if ((pFVar5->ComponentType).Value == *(ushort *)(param_2 + 4)) {
      local_84 = param_1->LockMode;
      if (local_84 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar5->ReadWriteLock);
      }
      LOCK();
      pFVar5->ScheduledAccessCount = (atomic<int>)((int)pFVar5->ScheduledAccessCount + 1);
      UNLOCK();
      local_48 = pFVar5->Components;
      goto LAB_14683fca0;
    }
  }
  local_48 = (uchar *)0x0;
  local_84 = LockFree;
  pFVar5 = (FComponentHeader *)0x0;
LAB_14683fca0:
  pFVar4 = param_1->ComponentHeaders;
  pFVar7 = pFVar4 + param_1->NumComponents;
  for (; pFVar4 != pFVar7; pFVar4 = pFVar4 + 1) {
    if ((pFVar4->ComponentType).Value == *(ushort *)(param_2 + 3)) {
      local_88 = param_1->LockMode;
      if (local_88 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar4->ReadWriteLock);
      }
      LOCK();
      pFVar4->ScheduledAccessCount = (atomic<int>)((int)pFVar4->ScheduledAccessCount + 1);
      UNLOCK();
      local_50 = pFVar4->Components;
      goto LAB_14683fceb;
    }
  }
  local_50 = (uchar *)0x0;
  local_88 = LockFree;
  pFVar4 = (FComponentHeader *)0x0;
LAB_14683fceb:
  pFVar7 = param_1->ComponentHeaders;
  pFVar8 = pFVar7 + param_1->NumComponents;
  for (; pFVar7 != pFVar8; pFVar7 = pFVar7 + 1) {
    if ((pFVar7->ComponentType).Value == *(ushort *)(param_2 + 2)) {
      local_res18 = param_1->LockMode;
      if (local_res18 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar7->ReadWriteLock);
      }
      LOCK();
      pFVar7->ScheduledAccessCount = (atomic<int>)((int)pFVar7->ScheduledAccessCount + 1);
      UNLOCK();
      local_58 = pFVar7->Components;
      goto LAB_14683fd33;
    }
  }
  local_58 = (uchar *)0x0;
  local_res18 = LockFree;
  pFVar7 = (FComponentHeader *)0x0;
LAB_14683fd33:
  pFVar8 = param_1->ComponentHeaders;
  pFVar3 = pFVar8 + param_1->NumComponents;
  for (; pFVar8 != pFVar3; pFVar8 = pFVar8 + 1) {
    if ((pFVar8->ComponentType).Value == *(ushort *)(param_2 + 1)) {
      local_res10 = param_1->LockMode;
      if (local_res10 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
      }
      LOCK();
      pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + 1);
      UNLOCK();
      local_60 = pFVar8->Components;
      goto LAB_14683fd81;
    }
  }
  local_60 = (uchar *)0x0;
  local_res10 = LockFree;
  pFVar8 = (FComponentHeader *)0x0;
LAB_14683fd81:
  pFVar6 = (FComponentHeader *)0x0;
  pFVar3 = param_1->ComponentHeaders;
  pFVar1 = pFVar3 + param_1->NumComponents;
  do {
    if (pFVar3 == pFVar1) {
      EStack_70 = LockFree;
      pFVar3 = pFVar6;
LAB_14683fdc3:
      *(uchar **)&__return_storage_ptr__->field_0x28 = local_60;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x38 = local_res18;
      *(uchar **)&__return_storage_ptr__->field_0x40 = local_58;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x50 = local_88;
      *(uchar **)&__return_storage_ptr__->field_0x58 = local_50;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x68 = local_84;
      *(uchar **)&__return_storage_ptr__->field_0x70 = local_48;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x80 = local_80;
      *(uchar **)&__return_storage_ptr__->field_0x88 = local_40;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x78 = pFVar2;
      *(FComponentHeader **)__return_storage_ptr__ = pFVar3;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x8 = EStack_70;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x10 = pFVar6;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x18 = pFVar8;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x20 = local_res10;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x30 = pFVar7;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x48 = pFVar4;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x60 = pFVar5;
      return __return_storage_ptr__;
    }
    if ((pFVar3->ComponentType).Value == *(ushort *)param_2) {
      EStack_70 = param_1->LockMode;
      if (EStack_70 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar3->ReadWriteLock);
      }
      LOCK();
      pFVar3->ScheduledAccessCount = (atomic<int>)((int)pFVar3->ScheduledAccessCount + 1);
      UNLOCK();
      pFVar6 = (FComponentHeader *)pFVar3->Components;
      goto LAB_14683fdc3;
    }
    pFVar3 = pFVar3 + 1;
  } while( true );
}

// LockComponentData @ 14683ff80

TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
* __cdecl UE::MovieScene::
          TUnpackMultiComponentData<TIntegerSequence<int,0,1,2,3>,double,double,double,double>::
          LockComponentData(TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
                            *__return_storage_ptr__,FEntityAllocation *param_1,
                           FOptionalReadAccess *param_2,FEntityAllocationWriteContext param_3)

{
  FComponentHeader *pFVar1;
  FComponentHeader *pFVar2;
  FComponentHeader *pFVar3;
  FComponentHeader *pFVar4;
  FComponentHeader *pFVar5;
  FComponentHeader *pFVar6;
  EComponentHeaderLockMode EVar7;
  EComponentHeaderLockMode local_res8;
  EComponentHeaderLockMode local_res10;
  uchar *local_res18;
  uchar *local_68;
  uchar *local_60;
  EComponentHeaderLockMode EStack_50;
  
  pFVar2 = param_1->ComponentHeaders;
  pFVar6 = (FComponentHeader *)0x0;
  pFVar5 = pFVar2 + param_1->NumComponents;
  for (; pFVar2 != pFVar5; pFVar2 = pFVar2 + 1) {
    if ((pFVar2->ComponentType).Value == *(ushort *)(param_2 + 3)) {
      local_res10 = param_1->LockMode;
      if (local_res10 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar2->ReadWriteLock);
      }
      LOCK();
      pFVar2->ScheduledAccessCount = (atomic<int>)((int)pFVar2->ScheduledAccessCount + 1);
      UNLOCK();
      local_60 = pFVar2->Components;
      goto LAB_14683ffef;
    }
  }
  local_60 = (uchar *)0x0;
  local_res10 = LockFree;
  pFVar2 = pFVar6;
LAB_14683ffef:
  pFVar5 = param_1->ComponentHeaders;
  pFVar3 = pFVar5 + param_1->NumComponents;
  for (; pFVar5 != pFVar3; pFVar5 = pFVar5 + 1) {
    if ((pFVar5->ComponentType).Value == *(ushort *)(param_2 + 2)) {
      local_res8 = param_1->LockMode;
      if (local_res8 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar5->ReadWriteLock);
      }
      LOCK();
      pFVar5->ScheduledAccessCount = (atomic<int>)((int)pFVar5->ScheduledAccessCount + 1);
      UNLOCK();
      local_68 = pFVar5->Components;
      goto LAB_14684003e;
    }
  }
  local_68 = (uchar *)0x0;
  local_res8 = LockFree;
  pFVar5 = pFVar6;
LAB_14684003e:
  pFVar3 = param_1->ComponentHeaders;
  pFVar4 = pFVar3 + param_1->NumComponents;
  for (; pFVar3 != pFVar4; pFVar3 = pFVar3 + 1) {
    if ((pFVar3->ComponentType).Value == *(ushort *)(param_2 + 1)) {
      EVar7 = param_1->LockMode;
      if (EVar7 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar3->ReadWriteLock);
      }
      LOCK();
      pFVar3->ScheduledAccessCount = (atomic<int>)((int)pFVar3->ScheduledAccessCount + 1);
      UNLOCK();
      local_res18 = pFVar3->Components;
      goto LAB_14684008b;
    }
  }
  local_res18 = (uchar *)0x0;
  EStack_50 = LockFree;
  pFVar3 = pFVar6;
  EVar7 = EStack_50;
LAB_14684008b:
  pFVar4 = param_1->ComponentHeaders;
  pFVar1 = pFVar4 + param_1->NumComponents;
  do {
    if (pFVar4 == pFVar1) {
      EStack_50 = LockFree;
      pFVar4 = pFVar6;
LAB_1468400c6:
      *(uchar **)&__return_storage_ptr__->field_0x28 = local_res18;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x38 = local_res8;
      *(uchar **)&__return_storage_ptr__->field_0x40 = local_68;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x50 = local_res10;
      *(uchar **)&__return_storage_ptr__->field_0x58 = local_60;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x48 = pFVar2;
      *(FComponentHeader **)__return_storage_ptr__ = pFVar4;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x8 = EStack_50;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x10 = pFVar6;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x18 = pFVar3;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x20 = EVar7;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x30 = pFVar5;
      return __return_storage_ptr__;
    }
    if ((pFVar4->ComponentType).Value == *(ushort *)param_2) {
      EStack_50 = param_1->LockMode;
      if (EStack_50 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar4->ReadWriteLock);
      }
      LOCK();
      pFVar4->ScheduledAccessCount = (atomic<int>)((int)pFVar4->ScheduledAccessCount + 1);
      UNLOCK();
      pFVar6 = (FComponentHeader *)pFVar4->Components;
      goto LAB_1468400c6;
    }
    pFVar4 = pFVar4 + 1;
  } while( true );
}

// LockComponentData @ 1468401e0

TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>_>
* __cdecl UE::MovieScene::
          TUnpackMultiComponentData<TIntegerSequence<int,0,1,2,3>,FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>
          ::LockComponentData(TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>_>
                              *__return_storage_ptr__,FEntityAllocation *param_1,
                             FOptionalReadAccess *param_2,FEntityAllocationWriteContext param_3)

{
  FComponentHeader *pFVar1;
  FComponentHeader *pFVar2;
  FComponentHeader *pFVar3;
  FComponentHeader *pFVar4;
  FComponentHeader *pFVar5;
  FComponentHeader *pFVar6;
  EComponentHeaderLockMode EVar7;
  EComponentHeaderLockMode local_res8;
  EComponentHeaderLockMode local_res10;
  uchar *local_res18;
  uchar *local_68;
  uchar *local_60;
  EComponentHeaderLockMode EStack_50;
  
  pFVar2 = param_1->ComponentHeaders;
  pFVar6 = (FComponentHeader *)0x0;
  pFVar5 = pFVar2 + param_1->NumComponents;
  for (; pFVar2 != pFVar5; pFVar2 = pFVar2 + 1) {
    if ((pFVar2->ComponentType).Value == *(ushort *)(param_2 + 3)) {
      local_res10 = param_1->LockMode;
      if (local_res10 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar2->ReadWriteLock);
      }
      LOCK();
      pFVar2->ScheduledAccessCount = (atomic<int>)((int)pFVar2->ScheduledAccessCount + 1);
      UNLOCK();
      local_60 = pFVar2->Components;
      goto LAB_14684024f;
    }
  }
  local_60 = (uchar *)0x0;
  local_res10 = LockFree;
  pFVar2 = pFVar6;
LAB_14684024f:
  pFVar5 = param_1->ComponentHeaders;
  pFVar3 = pFVar5 + param_1->NumComponents;
  for (; pFVar5 != pFVar3; pFVar5 = pFVar5 + 1) {
    if ((pFVar5->ComponentType).Value == *(ushort *)(param_2 + 2)) {
      local_res8 = param_1->LockMode;
      if (local_res8 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar5->ReadWriteLock);
      }
      LOCK();
      pFVar5->ScheduledAccessCount = (atomic<int>)((int)pFVar5->ScheduledAccessCount + 1);
      UNLOCK();
      local_68 = pFVar5->Components;
      goto LAB_14684029e;
    }
  }
  local_68 = (uchar *)0x0;
  local_res8 = LockFree;
  pFVar5 = pFVar6;
LAB_14684029e:
  pFVar3 = param_1->ComponentHeaders;
  pFVar4 = pFVar3 + param_1->NumComponents;
  for (; pFVar3 != pFVar4; pFVar3 = pFVar3 + 1) {
    if ((pFVar3->ComponentType).Value == *(ushort *)(param_2 + 1)) {
      EVar7 = param_1->LockMode;
      if (EVar7 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar3->ReadWriteLock);
      }
      LOCK();
      pFVar3->ScheduledAccessCount = (atomic<int>)((int)pFVar3->ScheduledAccessCount + 1);
      UNLOCK();
      local_res18 = pFVar3->Components;
      goto LAB_1468402eb;
    }
  }
  local_res18 = (uchar *)0x0;
  EStack_50 = LockFree;
  pFVar3 = pFVar6;
  EVar7 = EStack_50;
LAB_1468402eb:
  pFVar4 = param_1->ComponentHeaders;
  pFVar1 = pFVar4 + param_1->NumComponents;
  do {
    if (pFVar4 == pFVar1) {
      EStack_50 = LockFree;
      pFVar4 = pFVar6;
LAB_146840326:
      *(uchar **)&__return_storage_ptr__->field_0x28 = local_res18;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x38 = local_res8;
      *(uchar **)&__return_storage_ptr__->field_0x40 = local_68;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x50 = local_res10;
      *(uchar **)&__return_storage_ptr__->field_0x58 = local_60;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x48 = pFVar2;
      *(FComponentHeader **)__return_storage_ptr__ = pFVar4;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x8 = EStack_50;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x10 = pFVar6;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x18 = pFVar3;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x20 = EVar7;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x30 = pFVar5;
      return __return_storage_ptr__;
    }
    if ((pFVar4->ComponentType).Value == *(ushort *)param_2) {
      EStack_50 = param_1->LockMode;
      if (EStack_50 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar4->ReadWriteLock);
      }
      LOCK();
      pFVar4->ScheduledAccessCount = (atomic<int>)((int)pFVar4->ScheduledAccessCount + 1);
      UNLOCK();
      pFVar6 = (FComponentHeader *)pFVar4->Components;
      goto LAB_146840326;
    }
    pFVar4 = pFVar4 + 1;
  } while( true );
}

// LockComponentData @ 146840440

TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>_>
* __cdecl UE::MovieScene::
          TUnpackMultiComponentData<TIntegerSequence<int,0,1,2>,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>
          ::LockComponentData(TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>_>
                              *__return_storage_ptr__,FEntityAllocation *param_1,
                             FOptionalReadAccess *param_2,FEntityAllocationWriteContext param_3)

{
  FComponentHeader *pFVar1;
  FComponentHeader *pFVar2;
  FComponentHeader *pFVar3;
  FComponentHeader *pFVar4;
  EComponentHeaderLockMode EVar5;
  FComponentHeader *pFVar6;
  FComponentHeader *pFVar7;
  EComponentHeaderLockMode local_res8;
  uchar *local_res10;
  EComponentHeaderLockMode EStack_50;
  
  pFVar4 = param_1->ComponentHeaders;
  pFVar7 = (FComponentHeader *)0x0;
  pFVar3 = pFVar4 + param_1->NumComponents;
  for (; pFVar4 != pFVar3; pFVar4 = pFVar4 + 1) {
    if ((pFVar4->ComponentType).Value == *(ushort *)(param_2 + 2)) {
      local_res8 = param_1->LockMode;
      if (local_res8 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar4->ReadWriteLock);
      }
      LOCK();
      pFVar4->ScheduledAccessCount = (atomic<int>)((int)pFVar4->ScheduledAccessCount + 1);
      UNLOCK();
      local_res10 = pFVar4->Components;
      goto LAB_1468404b1;
    }
  }
  local_res10 = (uchar *)0x0;
  local_res8 = LockFree;
  pFVar4 = pFVar7;
LAB_1468404b1:
  pFVar3 = param_1->ComponentHeaders;
  pFVar6 = pFVar3 + param_1->NumComponents;
  for (; pFVar3 != pFVar6; pFVar3 = pFVar3 + 1) {
    if ((pFVar3->ComponentType).Value == *(ushort *)(param_2 + 1)) {
      EVar5 = param_1->LockMode;
      if (EVar5 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar3->ReadWriteLock);
      }
      LOCK();
      pFVar3->ScheduledAccessCount = (atomic<int>)((int)pFVar3->ScheduledAccessCount + 1);
      UNLOCK();
      pFVar6 = (FComponentHeader *)pFVar3->Components;
      goto LAB_1468404f6;
    }
  }
  EStack_50 = LockFree;
  pFVar3 = pFVar7;
  pFVar6 = pFVar7;
  EVar5 = EStack_50;
LAB_1468404f6:
  pFVar2 = param_1->ComponentHeaders;
  pFVar1 = pFVar2 + param_1->NumComponents;
  do {
    if (pFVar2 == pFVar1) {
      EStack_50 = LockFree;
      pFVar2 = pFVar7;
LAB_146840532:
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x38 = local_res8;
      *(uchar **)&__return_storage_ptr__->field_0x40 = local_res10;
      *(FComponentHeader **)__return_storage_ptr__ = pFVar2;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x8 = EStack_50;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x10 = pFVar7;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x18 = pFVar3;
      *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x20 = EVar5;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x28 = pFVar6;
      *(FComponentHeader **)&__return_storage_ptr__->field_0x30 = pFVar4;
      return __return_storage_ptr__;
    }
    if ((pFVar2->ComponentType).Value == *(ushort *)param_2) {
      EStack_50 = param_1->LockMode;
      if (EStack_50 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar2->ReadWriteLock);
      }
      LOCK();
      pFVar2->ScheduledAccessCount = (atomic<int>)((int)pFVar2->ScheduledAccessCount + 1);
      UNLOCK();
      pFVar7 = (FComponentHeader *)pFVar2->Components;
      goto LAB_146840532;
    }
    pFVar2 = pFVar2 + 1;
  } while( true );
}

