// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 22

// AddComponent<FMovieSceneBlendChannelID,FMovieSceneBlendChannelID_const_&> @ 14659b190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::
AddComponent<FMovieSceneBlendChannelID,FMovieSceneBlendChannelID_const_&>
          (FEntityManager *this,FMovieSceneEntityID param_1,
          TComponentTypeID<FMovieSceneBlendChannelID> param_2,FMovieSceneBlendChannelID *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  FComponentHeader *pFVar5;
  bool bVar6;
  FMovieSceneBlendChannelID *pFVar7;
  FComponentHeader *this_00;
  FComponentHeader *pFVar8;
  FEntityInfo local_20;
  
  AddComponent(this,param_1,(FComponentTypeID)param_2);
  GetEntity(this,&local_20,param_1);
  if (local_20.Data.Allocation != (FEntityAllocation *)0x0) {
    this_00 = (local_20.Data.Allocation)->ComponentHeaders;
    pFVar8 = this_00 + (local_20.Data.Allocation)->NumComponents;
    for (; pFVar5 = (FComponentHeader *)0x0, this_00 != pFVar8; this_00 = this_00 + 1) {
      if ((TComponentTypeID<FMovieSceneBlendChannelID>)(this_00->ComponentType).Value == param_2) {
        pFVar5 = this_00;
        if (this_00 != (FComponentHeader *)0x0) goto LAB_14659b231;
        break;
      }
    }
    this_00 = pFVar5;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Header",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0x2db,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_14659b231:
    EVar3 = (local_20.Data.Allocation)->LockMode;
    if (EVar3 == Mutex) {
      AcquireSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
    }
    LOCK();
    paVar1 = &this_00->ScheduledAccessCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if ((aVar2 != (atomic<int>)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PreviousAccessCount == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x487,
                           L"Component header is still in use when it is being opened for write!"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar7 = FComponentHeader::GetValuePtr(this_00,local_20.Data.ComponentOffset);
    *pFVar7 = *param_3;
    if (this_00 != (FComponentHeader *)0x0) {
      pFVar8 = (FComponentHeader *)0x0;
      if ((FComponentHeader *)this_00->SerialNumber != (FComponentHeader *)0x0) {
        pFVar8 = (FComponentHeader *)this_00->SerialNumber;
      }
      this_00->SerialNumber = (ulong64)pFVar8;
      LOCK();
      this_00->ScheduledAccessCount = (atomic<int>)((int)this_00->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar3 == Mutex) {
        ReleaseSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
      }
    }
  }
  return;
}

// ReadComponent<unsigned_char> @ 1465fce90

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TReadOptional<unsigned_char>_> * __thiscall
UE::MovieScene::FEntityManager::ReadComponent<unsigned_char>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TReadOptional<unsigned_char>_> *__return_storage_ptr__,
          FMovieSceneEntityID param_1,TComponentTypeID<unsigned_char> param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TComponentLock<UE::MovieScene::TReadOptional<unsigned_char>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uStack_26;
  
  if ((param_1.Value == 0xffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x1a8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TReadOptional<unsigned_char>_> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_2 != (TComponentTypeID<unsigned_char>)0xffff) &&
     (uVar2 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8),
     (short)uVar2 != -1)) {
    lVar9 = (ulonglong)(uVar2 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((int)(uint)(ushort)param_2 < *(int *)(lVar9 + 0x30)) &&
       ((*(uint *)(lVar9 + (ulonglong)((ushort)param_2 >> 5) * 4) >> ((ushort)param_2 & 0x1f) & 1)
        != 0)) {
      uStack_26 = (ushort)(uVar2 >> 0x10);
      lVar9 = *(longlong *)(*(longlong *)&this->EntityAllocations + (ulonglong)(uVar2 & 0xffff) * 8)
      ;
      EVar5 = GetThreadingModel(this);
      lVar8 = *(longlong *)(lVar9 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar9 + 0xc) * 0x38 + lVar8;
      while( true ) {
        if (lVar8 == lVar9) {
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          return __return_storage_ptr__;
        }
        if (*(TComponentTypeID<unsigned_char> *)(lVar8 + 0x36) == param_2) break;
        lVar8 = lVar8 + 0x38;
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      if (EVar5 != NoThreading) {
        AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x20));
      }
      LOCK();
      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
      UNLOCK();
      if (*(longlong *)__return_storage_ptr__ != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)__return_storage_ptr__ + 0x30);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(int *)&__return_storage_ptr__->field_0x8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
        }
      }
      *(longlong *)__return_storage_ptr__ = lVar8;
      *(uint *)&__return_storage_ptr__->field_0x8 = (uint)(EVar5 != NoThreading);
      plVar7 = (longlong *)&__return_storage_ptr__->field_0x10;
      if (__return_storage_ptr__ ==
          (TComponentLock<UE::MovieScene::TReadOptional<unsigned_char>_> *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      *plVar7 = (ulonglong)uStack_26 + *(longlong *)(lVar8 + 0x18);
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// ReadComponent<UE::Math::TRotator<double>_> @ 1465fd010

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TReadOptional<UE::Math::TRotator<double>_>_> * __thiscall
UE::MovieScene::FEntityManager::ReadComponent<UE::Math::TRotator<double>_>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TReadOptional<UE::Math::TRotator<double>_>_>
          *__return_storage_ptr__,FMovieSceneEntityID param_1,
          TComponentTypeID<UE::Math::TRotator<double>_> param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TComponentLock<UE::MovieScene::TReadOptional<UE::Math::TRotator<double>_>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uStack_26;
  
  if ((param_1.Value == 0xffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x1a8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TReadOptional<UE::Math::TRotator<double>_>_> *)
             (*pcVar3)();
    return pTVar6;
  }
  if ((param_2 != (TComponentTypeID<UE::Math::TRotator<double>_>)0xffff) &&
     (uVar2 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8),
     (short)uVar2 != -1)) {
    lVar9 = (ulonglong)(uVar2 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((int)(uint)(ushort)param_2 < *(int *)(lVar9 + 0x30)) &&
       ((*(uint *)(lVar9 + (ulonglong)((ushort)param_2 >> 5) * 4) >> ((ushort)param_2 & 0x1f) & 1)
        != 0)) {
      uStack_26 = (ushort)(uVar2 >> 0x10);
      lVar9 = *(longlong *)(*(longlong *)&this->EntityAllocations + (ulonglong)(uVar2 & 0xffff) * 8)
      ;
      EVar5 = GetThreadingModel(this);
      lVar8 = *(longlong *)(lVar9 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar9 + 0xc) * 0x38 + lVar8;
      while( true ) {
        if (lVar8 == lVar9) {
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          return __return_storage_ptr__;
        }
        if (*(TComponentTypeID<UE::Math::TRotator<double>_> *)(lVar8 + 0x36) == param_2) break;
        lVar8 = lVar8 + 0x38;
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      if (EVar5 != NoThreading) {
        AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x20));
      }
      LOCK();
      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
      UNLOCK();
      if (*(longlong *)__return_storage_ptr__ != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)__return_storage_ptr__ + 0x30);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(int *)&__return_storage_ptr__->field_0x8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
        }
      }
      *(longlong *)__return_storage_ptr__ = lVar8;
      *(uint *)&__return_storage_ptr__->field_0x8 = (uint)(EVar5 != NoThreading);
      plVar7 = (longlong *)&__return_storage_ptr__->field_0x10;
      if (__return_storage_ptr__ ==
          (TComponentLock<UE::MovieScene::TReadOptional<UE::Math::TRotator<double>_>_> *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      *plVar7 = *(longlong *)(lVar8 + 0x18) + (ulonglong)uStack_26 * 0x18;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// ReadComponent<UE::MovieScene::FDoubleIntermediateVector> @ 1465fd1a0

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FDoubleIntermediateVector>_> *
__thiscall
UE::MovieScene::FEntityManager::ReadComponent<UE::MovieScene::FDoubleIntermediateVector>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FDoubleIntermediateVector>_>
          *__return_storage_ptr__,FMovieSceneEntityID param_1,
          TComponentTypeID<UE::MovieScene::FDoubleIntermediateVector> param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FDoubleIntermediateVector>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uStack_26;
  
  if ((param_1.Value == 0xffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x1a8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FDoubleIntermediateVector>_>
              *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_2 != (TComponentTypeID<UE::MovieScene::FDoubleIntermediateVector>)0xffff) &&
     (uVar2 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8),
     (short)uVar2 != -1)) {
    lVar9 = (ulonglong)(uVar2 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((int)(uint)(ushort)param_2 < *(int *)(lVar9 + 0x30)) &&
       ((*(uint *)(lVar9 + (ulonglong)((ushort)param_2 >> 5) * 4) >> ((ushort)param_2 & 0x1f) & 1)
        != 0)) {
      uStack_26 = (ushort)(uVar2 >> 0x10);
      lVar9 = *(longlong *)(*(longlong *)&this->EntityAllocations + (ulonglong)(uVar2 & 0xffff) * 8)
      ;
      EVar5 = GetThreadingModel(this);
      lVar8 = *(longlong *)(lVar9 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar9 + 0xc) * 0x38 + lVar8;
      while( true ) {
        if (lVar8 == lVar9) {
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          return __return_storage_ptr__;
        }
        if (*(TComponentTypeID<UE::MovieScene::FDoubleIntermediateVector> *)(lVar8 + 0x36) ==
            param_2) break;
        lVar8 = lVar8 + 0x38;
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      if (EVar5 != NoThreading) {
        AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x20));
      }
      LOCK();
      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
      UNLOCK();
      if (*(longlong *)__return_storage_ptr__ != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)__return_storage_ptr__ + 0x30);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(int *)&__return_storage_ptr__->field_0x8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
        }
      }
      *(longlong *)__return_storage_ptr__ = lVar8;
      *(uint *)&__return_storage_ptr__->field_0x8 = (uint)(EVar5 != NoThreading);
      plVar7 = (longlong *)&__return_storage_ptr__->field_0x10;
      if (__return_storage_ptr__ ==
          (TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FDoubleIntermediateVector>_>
           *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      *plVar7 = (ulonglong)uStack_26 * 0x20 + *(longlong *)(lVar8 + 0x18);
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// ReadComponent<UE::MovieScene::FFloatIntermediateVector> @ 1465fd330

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FFloatIntermediateVector>_> *
__thiscall
UE::MovieScene::FEntityManager::ReadComponent<UE::MovieScene::FFloatIntermediateVector>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FFloatIntermediateVector>_>
          *__return_storage_ptr__,FMovieSceneEntityID param_1,
          TComponentTypeID<UE::MovieScene::FFloatIntermediateVector> param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FFloatIntermediateVector>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uStack_26;
  
  if ((param_1.Value == 0xffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x1a8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FFloatIntermediateVector>_>
              *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_2 != (TComponentTypeID<UE::MovieScene::FFloatIntermediateVector>)0xffff) &&
     (uVar2 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8),
     (short)uVar2 != -1)) {
    lVar9 = (ulonglong)(uVar2 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((int)(uint)(ushort)param_2 < *(int *)(lVar9 + 0x30)) &&
       ((*(uint *)(lVar9 + (ulonglong)((ushort)param_2 >> 5) * 4) >> ((ushort)param_2 & 0x1f) & 1)
        != 0)) {
      uStack_26 = (ushort)(uVar2 >> 0x10);
      lVar9 = *(longlong *)(*(longlong *)&this->EntityAllocations + (ulonglong)(uVar2 & 0xffff) * 8)
      ;
      EVar5 = GetThreadingModel(this);
      lVar8 = *(longlong *)(lVar9 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar9 + 0xc) * 0x38 + lVar8;
      while( true ) {
        if (lVar8 == lVar9) {
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          return __return_storage_ptr__;
        }
        if (*(TComponentTypeID<UE::MovieScene::FFloatIntermediateVector> *)(lVar8 + 0x36) == param_2
           ) break;
        lVar8 = lVar8 + 0x38;
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      if (EVar5 != NoThreading) {
        AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x20));
      }
      LOCK();
      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
      UNLOCK();
      if (*(longlong *)__return_storage_ptr__ != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)__return_storage_ptr__ + 0x30);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(int *)&__return_storage_ptr__->field_0x8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
        }
      }
      *(longlong *)__return_storage_ptr__ = lVar8;
      *(uint *)&__return_storage_ptr__->field_0x8 = (uint)(EVar5 != NoThreading);
      plVar7 = (longlong *)&__return_storage_ptr__->field_0x10;
      if (__return_storage_ptr__ ==
          (TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FFloatIntermediateVector>_>
           *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      *plVar7 = (ulonglong)uStack_26 * 0x20 + *(longlong *)(lVar8 + 0x18);
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// ReadComponent<UE::MovieScene::FIntermediate3DTransform> @ 1465fd4c0

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediate3DTransform>_> *
__thiscall
UE::MovieScene::FEntityManager::ReadComponent<UE::MovieScene::FIntermediate3DTransform>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediate3DTransform>_>
          *__return_storage_ptr__,FMovieSceneEntityID param_1,
          TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediate3DTransform>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uStack_26;
  
  if ((param_1.Value == 0xffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x1a8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediate3DTransform>_>
              *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_2 != (TComponentTypeID<UE::MovieScene::FIntermediate3DTransform>)0xffff) &&
     (uVar2 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8),
     (short)uVar2 != -1)) {
    lVar9 = (ulonglong)(uVar2 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((int)(uint)(ushort)param_2 < *(int *)(lVar9 + 0x30)) &&
       ((*(uint *)(lVar9 + (ulonglong)((ushort)param_2 >> 5) * 4) >> ((ushort)param_2 & 0x1f) & 1)
        != 0)) {
      uStack_26 = (ushort)(uVar2 >> 0x10);
      lVar9 = *(longlong *)(*(longlong *)&this->EntityAllocations + (ulonglong)(uVar2 & 0xffff) * 8)
      ;
      EVar5 = GetThreadingModel(this);
      lVar8 = *(longlong *)(lVar9 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar9 + 0xc) * 0x38 + lVar8;
      while( true ) {
        if (lVar8 == lVar9) {
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          return __return_storage_ptr__;
        }
        if (*(TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> *)(lVar8 + 0x36) == param_2
           ) break;
        lVar8 = lVar8 + 0x38;
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      if (EVar5 != NoThreading) {
        AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x20));
      }
      LOCK();
      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
      UNLOCK();
      if (*(longlong *)__return_storage_ptr__ != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)__return_storage_ptr__ + 0x30);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(int *)&__return_storage_ptr__->field_0x8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
        }
      }
      *(longlong *)__return_storage_ptr__ = lVar8;
      *(uint *)&__return_storage_ptr__->field_0x8 = (uint)(EVar5 != NoThreading);
      plVar7 = (longlong *)&__return_storage_ptr__->field_0x10;
      if (__return_storage_ptr__ ==
          (TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediate3DTransform>_>
           *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      *plVar7 = *(longlong *)(lVar8 + 0x18) + (ulonglong)uStack_26 * 0x48;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// ReadComponent<UE::MovieScene::FIntermediateColor> @ 1465fd650

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateColor>_> * __thiscall
UE::MovieScene::FEntityManager::ReadComponent<UE::MovieScene::FIntermediateColor>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateColor>_>
          *__return_storage_ptr__,FMovieSceneEntityID param_1,
          TComponentTypeID<UE::MovieScene::FIntermediateColor> param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateColor>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uStack_26;
  
  if ((param_1.Value == 0xffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x1a8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateColor>_> *)
             (*pcVar3)();
    return pTVar6;
  }
  if ((param_2 != (TComponentTypeID<UE::MovieScene::FIntermediateColor>)0xffff) &&
     (uVar2 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8),
     (short)uVar2 != -1)) {
    lVar9 = (ulonglong)(uVar2 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((int)(uint)(ushort)param_2 < *(int *)(lVar9 + 0x30)) &&
       ((*(uint *)(lVar9 + (ulonglong)((ushort)param_2 >> 5) * 4) >> ((ushort)param_2 & 0x1f) & 1)
        != 0)) {
      uStack_26 = (ushort)(uVar2 >> 0x10);
      lVar9 = *(longlong *)(*(longlong *)&this->EntityAllocations + (ulonglong)(uVar2 & 0xffff) * 8)
      ;
      EVar5 = GetThreadingModel(this);
      lVar8 = *(longlong *)(lVar9 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar9 + 0xc) * 0x38 + lVar8;
      while( true ) {
        if (lVar8 == lVar9) {
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          return __return_storage_ptr__;
        }
        if (*(TComponentTypeID<UE::MovieScene::FIntermediateColor> *)(lVar8 + 0x36) == param_2)
        break;
        lVar8 = lVar8 + 0x38;
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      if (EVar5 != NoThreading) {
        AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x20));
      }
      LOCK();
      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
      UNLOCK();
      if (*(longlong *)__return_storage_ptr__ != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)__return_storage_ptr__ + 0x30);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(int *)&__return_storage_ptr__->field_0x8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
        }
      }
      *(longlong *)__return_storage_ptr__ = lVar8;
      *(uint *)&__return_storage_ptr__->field_0x8 = (uint)(EVar5 != NoThreading);
      plVar7 = (longlong *)&__return_storage_ptr__->field_0x10;
      if (__return_storage_ptr__ ==
          (TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateColor>_> *)0x0)
      {
        plVar7 = (longlong *)0x0;
      }
      *plVar7 = (ulonglong)uStack_26 * 0x20 + *(longlong *)(lVar8 + 0x18);
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// ReadComponent<UE::MovieScene::FObjectComponent> @ 1465fd7e0

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FObjectComponent>_> * __thiscall
UE::MovieScene::FEntityManager::ReadComponent<UE::MovieScene::FObjectComponent>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FObjectComponent>_>
          *__return_storage_ptr__,FMovieSceneEntityID param_1,
          TComponentTypeID<UE::MovieScene::FObjectComponent> param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FObjectComponent>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uStack_26;
  
  if ((param_1.Value == 0xffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x1a8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FObjectComponent>_> *)
             (*pcVar3)();
    return pTVar6;
  }
  if ((param_2 != (TComponentTypeID<UE::MovieScene::FObjectComponent>)0xffff) &&
     (uVar2 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8),
     (short)uVar2 != -1)) {
    lVar9 = (ulonglong)(uVar2 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((int)(uint)(ushort)param_2 < *(int *)(lVar9 + 0x30)) &&
       ((*(uint *)(lVar9 + (ulonglong)((ushort)param_2 >> 5) * 4) >> ((ushort)param_2 & 0x1f) & 1)
        != 0)) {
      uStack_26 = (ushort)(uVar2 >> 0x10);
      lVar9 = *(longlong *)(*(longlong *)&this->EntityAllocations + (ulonglong)(uVar2 & 0xffff) * 8)
      ;
      EVar5 = GetThreadingModel(this);
      lVar8 = *(longlong *)(lVar9 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar9 + 0xc) * 0x38 + lVar8;
      while( true ) {
        if (lVar8 == lVar9) {
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          return __return_storage_ptr__;
        }
        if (*(TComponentTypeID<UE::MovieScene::FObjectComponent> *)(lVar8 + 0x36) == param_2) break;
        lVar8 = lVar8 + 0x38;
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      if (EVar5 != NoThreading) {
        AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x20));
      }
      LOCK();
      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
      UNLOCK();
      if (*(longlong *)__return_storage_ptr__ != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)__return_storage_ptr__ + 0x30);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(int *)&__return_storage_ptr__->field_0x8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
        }
      }
      *(longlong *)__return_storage_ptr__ = lVar8;
      *(uint *)&__return_storage_ptr__->field_0x8 = (uint)(EVar5 != NoThreading);
      plVar7 = (longlong *)&__return_storage_ptr__->field_0x10;
      if (__return_storage_ptr__ ==
          (TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FObjectComponent>_> *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      *plVar7 = (ulonglong)uStack_26 * 0x10 + *(longlong *)(lVar8 + 0x18);
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// ReadComponent<FText> @ 1465fd970

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TReadOptional<FText>_> * __thiscall
UE::MovieScene::FEntityManager::ReadComponent<FText>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TReadOptional<FText>_> *__return_storage_ptr__,
          FMovieSceneEntityID param_1,TComponentTypeID<FText> param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TComponentLock<UE::MovieScene::TReadOptional<FText>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uStack_26;
  
  if ((param_1.Value == 0xffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x1a8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TReadOptional<FText>_> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_2 != (TComponentTypeID<FText>)0xffff) &&
     (uVar2 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8),
     (short)uVar2 != -1)) {
    lVar9 = (ulonglong)(uVar2 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((int)(uint)(ushort)param_2 < *(int *)(lVar9 + 0x30)) &&
       ((*(uint *)(lVar9 + (ulonglong)((ushort)param_2 >> 5) * 4) >> ((ushort)param_2 & 0x1f) & 1)
        != 0)) {
      uStack_26 = (ushort)(uVar2 >> 0x10);
      lVar9 = *(longlong *)(*(longlong *)&this->EntityAllocations + (ulonglong)(uVar2 & 0xffff) * 8)
      ;
      EVar5 = GetThreadingModel(this);
      lVar8 = *(longlong *)(lVar9 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar9 + 0xc) * 0x38 + lVar8;
      while( true ) {
        if (lVar8 == lVar9) {
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          return __return_storage_ptr__;
        }
        if (*(TComponentTypeID<FText> *)(lVar8 + 0x36) == param_2) break;
        lVar8 = lVar8 + 0x38;
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      if (EVar5 != NoThreading) {
        AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x20));
      }
      LOCK();
      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
      UNLOCK();
      if (*(longlong *)__return_storage_ptr__ != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)__return_storage_ptr__ + 0x30);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(int *)&__return_storage_ptr__->field_0x8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
        }
      }
      *(longlong *)__return_storage_ptr__ = lVar8;
      *(uint *)&__return_storage_ptr__->field_0x8 = (uint)(EVar5 != NoThreading);
      plVar7 = (longlong *)&__return_storage_ptr__->field_0x10;
      if (__return_storage_ptr__ == (TComponentLock<UE::MovieScene::TReadOptional<FText>_> *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      *plVar7 = (ulonglong)uStack_26 * 0x10 + *(longlong *)(lVar8 + 0x18);
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// ReadComponent<__int64> @ 1465fdb00

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TReadOptional<__int64>_> * __thiscall
UE::MovieScene::FEntityManager::ReadComponent<__int64>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TReadOptional<__int64>_> *__return_storage_ptr__,
          FMovieSceneEntityID param_1,TComponentTypeID<__int64> param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TComponentLock<UE::MovieScene::TReadOptional<__int64>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uStack_26;
  
  if ((param_1.Value == 0xffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x1a8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TReadOptional<__int64>_> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_2 != (TComponentTypeID<__int64>)0xffff) &&
     (uVar2 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8),
     (short)uVar2 != -1)) {
    lVar9 = (ulonglong)(uVar2 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((int)(uint)(ushort)param_2 < *(int *)(lVar9 + 0x30)) &&
       ((*(uint *)(lVar9 + (ulonglong)((ushort)param_2 >> 5) * 4) >> ((ushort)param_2 & 0x1f) & 1)
        != 0)) {
      uStack_26 = (ushort)(uVar2 >> 0x10);
      lVar9 = *(longlong *)(*(longlong *)&this->EntityAllocations + (ulonglong)(uVar2 & 0xffff) * 8)
      ;
      EVar5 = GetThreadingModel(this);
      lVar8 = *(longlong *)(lVar9 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar9 + 0xc) * 0x38 + lVar8;
      while( true ) {
        if (lVar8 == lVar9) {
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          return __return_storage_ptr__;
        }
        if (*(TComponentTypeID<__int64> *)(lVar8 + 0x36) == param_2) break;
        lVar8 = lVar8 + 0x38;
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      if (EVar5 != NoThreading) {
        AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x20));
      }
      LOCK();
      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
      UNLOCK();
      if (*(longlong *)__return_storage_ptr__ != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)__return_storage_ptr__ + 0x30);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(int *)&__return_storage_ptr__->field_0x8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
        }
      }
      *(longlong *)__return_storage_ptr__ = lVar8;
      *(uint *)&__return_storage_ptr__->field_0x8 = (uint)(EVar5 != NoThreading);
      plVar7 = (longlong *)&__return_storage_ptr__->field_0x10;
      if (__return_storage_ptr__ == (TComponentLock<UE::MovieScene::TReadOptional<__int64>_> *)0x0)
      {
        plVar7 = (longlong *)0x0;
      }
      *plVar7 = *(longlong *)(lVar8 + 0x18) + (ulonglong)uStack_26 * 8;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// ReadComponent<bool> @ 1465fdc80

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TReadOptional<bool>_> * __thiscall
UE::MovieScene::FEntityManager::ReadComponent<bool>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TReadOptional<bool>_> *__return_storage_ptr__,
          FMovieSceneEntityID param_1,TComponentTypeID<bool> param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TComponentLock<UE::MovieScene::TReadOptional<bool>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uStack_26;
  
  if ((param_1.Value == 0xffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x1a8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TReadOptional<bool>_> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_2 != (TComponentTypeID<bool>)0xffff) &&
     (uVar2 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8),
     (short)uVar2 != -1)) {
    lVar9 = (ulonglong)(uVar2 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((int)(uint)(ushort)param_2 < *(int *)(lVar9 + 0x30)) &&
       ((*(uint *)(lVar9 + (ulonglong)((ushort)param_2 >> 5) * 4) >> ((ushort)param_2 & 0x1f) & 1)
        != 0)) {
      uStack_26 = (ushort)(uVar2 >> 0x10);
      lVar9 = *(longlong *)(*(longlong *)&this->EntityAllocations + (ulonglong)(uVar2 & 0xffff) * 8)
      ;
      EVar5 = GetThreadingModel(this);
      lVar8 = *(longlong *)(lVar9 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar9 + 0xc) * 0x38 + lVar8;
      while( true ) {
        if (lVar8 == lVar9) {
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          return __return_storage_ptr__;
        }
        if (*(TComponentTypeID<bool> *)(lVar8 + 0x36) == param_2) break;
        lVar8 = lVar8 + 0x38;
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      if (EVar5 != NoThreading) {
        AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x20));
      }
      LOCK();
      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
      UNLOCK();
      if (*(longlong *)__return_storage_ptr__ != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)__return_storage_ptr__ + 0x30);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(int *)&__return_storage_ptr__->field_0x8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
        }
      }
      *(longlong *)__return_storage_ptr__ = lVar8;
      *(uint *)&__return_storage_ptr__->field_0x8 = (uint)(EVar5 != NoThreading);
      plVar7 = (longlong *)&__return_storage_ptr__->field_0x10;
      if (__return_storage_ptr__ == (TComponentLock<UE::MovieScene::TReadOptional<bool>_> *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      *plVar7 = (ulonglong)uStack_26 + *(longlong *)(lVar8 + 0x18);
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// WriteComponent<FMovieSceneBlendChannelID> @ 14675dac0

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TWriteOptional<FMovieSceneBlendChannelID>_> * __thiscall
UE::MovieScene::FEntityManager::WriteComponent<FMovieSceneBlendChannelID>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TWriteOptional<FMovieSceneBlendChannelID>_>
          *__return_storage_ptr__,FMovieSceneEntityID param_1,
          TComponentTypeID<FMovieSceneBlendChannelID> param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  code *pcVar5;
  bool bVar6;
  EEntityThreadingModel EVar7;
  TComponentLock<UE::MovieScene::TWriteOptional<FMovieSceneBlendChannelID>_> *pTVar8;
  FEntityAllocationWriteContext *pFVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  FEntityAllocationWriteContext local_30;
  
  if ((param_1.Value == 0xffff) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x1e4,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TComponentLock<UE::MovieScene::TWriteOptional<FMovieSceneBlendChannelID>_> *)
             (*pcVar5)();
    return pTVar8;
  }
  if ((param_2 != (TComponentTypeID<FMovieSceneBlendChannelID>)0xffff) &&
     (uVar3 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8),
     (short)uVar3 != -1)) {
    lVar11 = (ulonglong)(uVar3 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((int)(uint)(ushort)param_2 < *(int *)(lVar11 + 0x30)) &&
       ((*(uint *)(lVar11 + (ulonglong)((ushort)param_2 >> 5) * 4) >> ((ushort)param_2 & 0x1f) & 1)
        != 0)) {
      lVar11 = *(longlong *)
                (*(longlong *)&this->EntityAllocations + (ulonglong)(uVar3 & 0xffff) * 8);
      EVar7 = GetThreadingModel(this);
      lVar12 = *(longlong *)(lVar11 + 0x28);
      lVar11 = (ulonglong)*(ushort *)(lVar11 + 0xc) * 0x38 + lVar12;
      while( true ) {
        if (lVar12 == lVar11) {
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 1;
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
          return __return_storage_ptr__;
        }
        if (*(TComponentTypeID<FMovieSceneBlendChannelID> *)(lVar12 + 0x36) == param_2) break;
        lVar12 = lVar12 + 0x38;
      }
      pFVar9 = FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_30,this);
      uVar4 = pFVar9->SystemSerial;
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      *(undefined4 *)&__return_storage_ptr__->field_0x10 = 1;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
      if (EVar7 != NoThreading) {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar12 + 0x20));
      }
      LOCK();
      piVar1 = (int *)(lVar12 + 0x30);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((iVar2 != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("PreviousAccessCount == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                             ,0x487,
                             L"Component header is still in use when it is being opened for write!")
         , bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TComponentLock<UE::MovieScene::TWriteOptional<FMovieSceneBlendChannelID>_> *)
                 (*pcVar5)();
        return pTVar8;
      }
      lVar11 = *(longlong *)__return_storage_ptr__;
      if (lVar11 != 0) {
        uVar10 = *(ulonglong *)&__return_storage_ptr__->field_0x8;
        if (*(ulonglong *)&__return_storage_ptr__->field_0x8 < *(ulonglong *)(lVar11 + 0x28)) {
          uVar10 = *(ulonglong *)(lVar11 + 0x28);
        }
        *(ulonglong *)(lVar11 + 0x28) = uVar10;
        LOCK();
        *(int *)(*(longlong *)__return_storage_ptr__ + 0x30) =
             *(int *)(*(longlong *)__return_storage_ptr__ + 0x30) + -1;
        UNLOCK();
        if (*(int *)&__return_storage_ptr__->field_0x10 == 1) {
          ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
        }
      }
      *(longlong *)__return_storage_ptr__ = lVar12;
      *(ulong64 *)&__return_storage_ptr__->field_0x8 = uVar4;
      plVar13 = (longlong *)&__return_storage_ptr__->field_0x18;
      if (__return_storage_ptr__ ==
          (TComponentLock<UE::MovieScene::TWriteOptional<FMovieSceneBlendChannelID>_> *)0x0) {
        plVar13 = (longlong *)0x0;
      }
      *(uint *)&__return_storage_ptr__->field_0x10 = (uint)(EVar7 != NoThreading);
      *plVar13 = *(longlong *)(lVar12 + 0x18) + (longlong)(int)(uVar3 >> 0x10) * 4;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 1;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  return __return_storage_ptr__;
}

// AddComponent<double,float_&> @ 1467d2bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::AddComponent<double,float_&>
          (FEntityManager *this,FMovieSceneEntityID param_1,TComponentTypeID<double> param_2,
          float *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  FComponentHeader *pFVar5;
  bool bVar6;
  double *pdVar7;
  FComponentHeader *this_00;
  FComponentHeader *pFVar8;
  FEntityInfo local_20;
  
  AddComponent(this,param_1,(FComponentTypeID)param_2);
  GetEntity(this,&local_20,param_1);
  if (local_20.Data.Allocation != (FEntityAllocation *)0x0) {
    this_00 = (local_20.Data.Allocation)->ComponentHeaders;
    pFVar8 = this_00 + (local_20.Data.Allocation)->NumComponents;
    for (; pFVar5 = (FComponentHeader *)0x0, this_00 != pFVar8; this_00 = this_00 + 1) {
      if ((TComponentTypeID<double>)(this_00->ComponentType).Value == param_2) {
        pFVar5 = this_00;
        if (this_00 != (FComponentHeader *)0x0) goto LAB_1467d2c71;
        break;
      }
    }
    this_00 = pFVar5;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Header",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0x2db,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_1467d2c71:
    EVar3 = (local_20.Data.Allocation)->LockMode;
    if (EVar3 == Mutex) {
      AcquireSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
    }
    LOCK();
    paVar1 = &this_00->ScheduledAccessCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if ((aVar2 != (atomic<int>)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PreviousAccessCount == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x487,
                           L"Component header is still in use when it is being opened for write!"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pdVar7 = FComponentHeader::GetValuePtr(this_00,local_20.Data.ComponentOffset);
    *pdVar7 = (double)*param_3;
    if (this_00 != (FComponentHeader *)0x0) {
      pFVar8 = (FComponentHeader *)0x0;
      if ((FComponentHeader *)this_00->SerialNumber != (FComponentHeader *)0x0) {
        pFVar8 = (FComponentHeader *)this_00->SerialNumber;
      }
      this_00->SerialNumber = (ulong64)pFVar8;
      LOCK();
      this_00->ScheduledAccessCount = (atomic<int>)((int)this_00->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar3 == Mutex) {
        ReleaseSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
      }
    }
  }
  return;
}

// AddComponent<UE::MovieScene::FIntermediateColor,UE::MovieScene::FIntermediateColor> @ 1467d2d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::
AddComponent<UE::MovieScene::FIntermediateColor,UE::MovieScene::FIntermediateColor>
          (FEntityManager *this,FMovieSceneEntityID param_1,
          TComponentTypeID<UE::MovieScene::FIntermediateColor> param_2,FIntermediateColor *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FComponentHeader *pFVar8;
  bool bVar9;
  undefined4 *puVar10;
  FComponentHeader *this_00;
  FComponentHeader *pFVar11;
  FEntityInfo local_20;
  
  AddComponent(this,param_1,(FComponentTypeID)param_2);
  GetEntity(this,&local_20,param_1);
  if (local_20.Data.Allocation != (FEntityAllocation *)0x0) {
    this_00 = (local_20.Data.Allocation)->ComponentHeaders;
    pFVar11 = this_00 + (local_20.Data.Allocation)->NumComponents;
    for (; pFVar8 = (FComponentHeader *)0x0, this_00 != pFVar11; this_00 = this_00 + 1) {
      if ((TComponentTypeID<UE::MovieScene::FIntermediateColor>)(this_00->ComponentType).Value ==
          param_2) {
        pFVar8 = this_00;
        if (this_00 != (FComponentHeader *)0x0) goto LAB_1467d2dc1;
        break;
      }
    }
    this_00 = pFVar8;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Header",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0x2db,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_1467d2dc1:
    EVar3 = (local_20.Data.Allocation)->LockMode;
    if (EVar3 == Mutex) {
      AcquireSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
    }
    LOCK();
    paVar1 = &this_00->ScheduledAccessCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if ((aVar2 != (atomic<int>)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("PreviousAccessCount == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x487,
                           L"Component header is still in use when it is being opened for write!"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar10 = FComponentHeader::GetValuePtr(this_00,local_20.Data.ComponentOffset);
    uVar5 = *(undefined4 *)((longlong)&param_3->R + 4);
    uVar6 = *(undefined4 *)&param_3->G;
    uVar7 = *(undefined4 *)((longlong)&param_3->G + 4);
    *puVar10 = *(undefined4 *)&param_3->R;
    puVar10[1] = uVar5;
    puVar10[2] = uVar6;
    puVar10[3] = uVar7;
    uVar5 = *(undefined4 *)((longlong)&param_3->B + 4);
    uVar6 = *(undefined4 *)&param_3->A;
    uVar7 = *(undefined4 *)((longlong)&param_3->A + 4);
    puVar10[4] = *(undefined4 *)&param_3->B;
    puVar10[5] = uVar5;
    puVar10[6] = uVar6;
    puVar10[7] = uVar7;
    if (this_00 != (FComponentHeader *)0x0) {
      pFVar11 = (FComponentHeader *)0x0;
      if ((FComponentHeader *)this_00->SerialNumber != (FComponentHeader *)0x0) {
        pFVar11 = (FComponentHeader *)this_00->SerialNumber;
      }
      this_00->SerialNumber = (ulong64)pFVar11;
      LOCK();
      this_00->ScheduledAccessCount = (atomic<int>)((int)this_00->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar3 == Mutex) {
        ReleaseSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
      }
    }
  }
  return;
}

// AddComponent<FMovieSceneBlendChannelID,FMovieSceneBlendChannelID_&> @ 1467d2e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::AddComponent<FMovieSceneBlendChannelID,FMovieSceneBlendChannelID_&>
          (FEntityManager *this,FMovieSceneEntityID param_1,
          TComponentTypeID<FMovieSceneBlendChannelID> param_2,FMovieSceneBlendChannelID *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  FComponentHeader *pFVar5;
  bool bVar6;
  FMovieSceneBlendChannelID *pFVar7;
  FComponentHeader *this_00;
  FComponentHeader *pFVar8;
  FEntityInfo local_20;
  
  AddComponent(this,param_1,(FComponentTypeID)param_2);
  GetEntity(this,&local_20,param_1);
  if (local_20.Data.Allocation != (FEntityAllocation *)0x0) {
    this_00 = (local_20.Data.Allocation)->ComponentHeaders;
    pFVar8 = this_00 + (local_20.Data.Allocation)->NumComponents;
    for (; pFVar5 = (FComponentHeader *)0x0, this_00 != pFVar8; this_00 = this_00 + 1) {
      if ((TComponentTypeID<FMovieSceneBlendChannelID>)(this_00->ComponentType).Value == param_2) {
        pFVar5 = this_00;
        if (this_00 != (FComponentHeader *)0x0) goto LAB_1467d2f21;
        break;
      }
    }
    this_00 = pFVar5;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Header",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0x2db,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_1467d2f21:
    EVar3 = (local_20.Data.Allocation)->LockMode;
    if (EVar3 == Mutex) {
      AcquireSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
    }
    LOCK();
    paVar1 = &this_00->ScheduledAccessCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if ((aVar2 != (atomic<int>)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PreviousAccessCount == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x487,
                           L"Component header is still in use when it is being opened for write!"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar7 = FComponentHeader::GetValuePtr(this_00,local_20.Data.ComponentOffset);
    *pFVar7 = *param_3;
    if (this_00 != (FComponentHeader *)0x0) {
      pFVar8 = (FComponentHeader *)0x0;
      if ((FComponentHeader *)this_00->SerialNumber != (FComponentHeader *)0x0) {
        pFVar8 = (FComponentHeader *)this_00->SerialNumber;
      }
      this_00->SerialNumber = (ulong64)pFVar8;
      LOCK();
      this_00->ScheduledAccessCount = (atomic<int>)((int)this_00->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar3 == Mutex) {
        ReleaseSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
      }
    }
  }
  return;
}

// ReadComponent<short> @ 1467fc580

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TReadOptional<short>_> * __thiscall
UE::MovieScene::FEntityManager::ReadComponent<short>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TReadOptional<short>_> *__return_storage_ptr__,
          FMovieSceneEntityID param_1,TComponentTypeID<short> param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TComponentLock<UE::MovieScene::TReadOptional<short>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uStack_26;
  
  if ((param_1.Value == 0xffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x1a8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TReadOptional<short>_> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_2 != (TComponentTypeID<short>)0xffff) &&
     (uVar2 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8),
     (short)uVar2 != -1)) {
    lVar9 = (ulonglong)(uVar2 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((int)(uint)(ushort)param_2 < *(int *)(lVar9 + 0x30)) &&
       ((*(uint *)(lVar9 + (ulonglong)((ushort)param_2 >> 5) * 4) >> ((ushort)param_2 & 0x1f) & 1)
        != 0)) {
      uStack_26 = (ushort)(uVar2 >> 0x10);
      lVar9 = *(longlong *)(*(longlong *)&this->EntityAllocations + (ulonglong)(uVar2 & 0xffff) * 8)
      ;
      EVar5 = GetThreadingModel(this);
      lVar8 = *(longlong *)(lVar9 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar9 + 0xc) * 0x38 + lVar8;
      while( true ) {
        if (lVar8 == lVar9) {
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          return __return_storage_ptr__;
        }
        if (*(TComponentTypeID<short> *)(lVar8 + 0x36) == param_2) break;
        lVar8 = lVar8 + 0x38;
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      if (EVar5 != NoThreading) {
        AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x20));
      }
      LOCK();
      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
      UNLOCK();
      if (*(longlong *)__return_storage_ptr__ != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)__return_storage_ptr__ + 0x30);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(int *)&__return_storage_ptr__->field_0x8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
        }
      }
      *(longlong *)__return_storage_ptr__ = lVar8;
      *(uint *)&__return_storage_ptr__->field_0x8 = (uint)(EVar5 != NoThreading);
      plVar7 = (longlong *)&__return_storage_ptr__->field_0x10;
      if (__return_storage_ptr__ == (TComponentLock<UE::MovieScene::TReadOptional<short>_> *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      *plVar7 = *(longlong *)(lVar8 + 0x18) + (ulonglong)uStack_26 * 2;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// ReadComponent<UObject_*> @ 1467fc700

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TReadOptional<UObject_*>_> * __thiscall
UE::MovieScene::FEntityManager::ReadComponent<UObject_*>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TReadOptional<UObject_*>_> *__return_storage_ptr__,
          FMovieSceneEntityID param_1,TComponentTypeID<UObject_*> param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TComponentLock<UE::MovieScene::TReadOptional<UObject_*>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uStack_26;
  
  if ((param_1.Value == 0xffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x1a8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TReadOptional<UObject_*>_> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_2 != (TComponentTypeID<UObject_*>)0xffff) &&
     (uVar2 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8),
     (short)uVar2 != -1)) {
    lVar9 = (ulonglong)(uVar2 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((int)(uint)(ushort)param_2 < *(int *)(lVar9 + 0x30)) &&
       ((*(uint *)(lVar9 + (ulonglong)((ushort)param_2 >> 5) * 4) >> ((ushort)param_2 & 0x1f) & 1)
        != 0)) {
      uStack_26 = (ushort)(uVar2 >> 0x10);
      lVar9 = *(longlong *)(*(longlong *)&this->EntityAllocations + (ulonglong)(uVar2 & 0xffff) * 8)
      ;
      EVar5 = GetThreadingModel(this);
      lVar8 = *(longlong *)(lVar9 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar9 + 0xc) * 0x38 + lVar8;
      while( true ) {
        if (lVar8 == lVar9) {
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          return __return_storage_ptr__;
        }
        if (*(TComponentTypeID<UObject_*> *)(lVar8 + 0x36) == param_2) break;
        lVar8 = lVar8 + 0x38;
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      if (EVar5 != NoThreading) {
        AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x20));
      }
      LOCK();
      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
      UNLOCK();
      if (*(longlong *)__return_storage_ptr__ != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)__return_storage_ptr__ + 0x30);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(int *)&__return_storage_ptr__->field_0x8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
        }
      }
      *(longlong *)__return_storage_ptr__ = lVar8;
      *(uint *)&__return_storage_ptr__->field_0x8 = (uint)(EVar5 != NoThreading);
      plVar7 = (longlong *)&__return_storage_ptr__->field_0x10;
      if (__return_storage_ptr__ == (TComponentLock<UE::MovieScene::TReadOptional<UObject_*>_> *)0x0
         ) {
        plVar7 = (longlong *)0x0;
      }
      *plVar7 = *(longlong *)(lVar8 + 0x18) + (ulonglong)uStack_26 * 8;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// ReadComponent<UE::MovieScene::FEntityGroupID> @ 1467fc880

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FEntityGroupID>_> * __thiscall
UE::MovieScene::FEntityManager::ReadComponent<UE::MovieScene::FEntityGroupID>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FEntityGroupID>_>
          *__return_storage_ptr__,FMovieSceneEntityID param_1,
          TComponentTypeID<UE::MovieScene::FEntityGroupID> param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FEntityGroupID>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uStack_26;
  
  if ((param_1.Value == 0xffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x1a8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FEntityGroupID>_> *)
             (*pcVar3)();
    return pTVar6;
  }
  if ((param_2 != (TComponentTypeID<UE::MovieScene::FEntityGroupID>)0xffff) &&
     (uVar2 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8),
     (short)uVar2 != -1)) {
    lVar9 = (ulonglong)(uVar2 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((int)(uint)(ushort)param_2 < *(int *)(lVar9 + 0x30)) &&
       ((*(uint *)(lVar9 + (ulonglong)((ushort)param_2 >> 5) * 4) >> ((ushort)param_2 & 0x1f) & 1)
        != 0)) {
      uStack_26 = (ushort)(uVar2 >> 0x10);
      lVar9 = *(longlong *)(*(longlong *)&this->EntityAllocations + (ulonglong)(uVar2 & 0xffff) * 8)
      ;
      EVar5 = GetThreadingModel(this);
      lVar8 = *(longlong *)(lVar9 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar9 + 0xc) * 0x38 + lVar8;
      while( true ) {
        if (lVar8 == lVar9) {
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          return __return_storage_ptr__;
        }
        if (*(TComponentTypeID<UE::MovieScene::FEntityGroupID> *)(lVar8 + 0x36) == param_2) break;
        lVar8 = lVar8 + 0x38;
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      if (EVar5 != NoThreading) {
        AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x20));
      }
      LOCK();
      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
      UNLOCK();
      if (*(longlong *)__return_storage_ptr__ != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)__return_storage_ptr__ + 0x30);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(int *)&__return_storage_ptr__->field_0x8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
        }
      }
      *(longlong *)__return_storage_ptr__ = lVar8;
      *(uint *)&__return_storage_ptr__->field_0x8 = (uint)(EVar5 != NoThreading);
      plVar7 = (longlong *)&__return_storage_ptr__->field_0x10;
      if (__return_storage_ptr__ ==
          (TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FEntityGroupID>_> *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      *plVar7 = *(longlong *)(lVar8 + 0x18) + (ulonglong)uStack_26 * 0xc;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// ReadComponent<FMovieScenePropertyBinding> @ 1467fca10

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TReadOptional<FMovieScenePropertyBinding>_> * __thiscall
UE::MovieScene::FEntityManager::ReadComponent<FMovieScenePropertyBinding>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TReadOptional<FMovieScenePropertyBinding>_>
          *__return_storage_ptr__,FMovieSceneEntityID param_1,
          TComponentTypeID<FMovieScenePropertyBinding> param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TComponentLock<UE::MovieScene::TReadOptional<FMovieScenePropertyBinding>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uStack_26;
  
  if ((param_1.Value == 0xffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x1a8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TReadOptional<FMovieScenePropertyBinding>_> *)
             (*pcVar3)();
    return pTVar6;
  }
  if ((param_2 != (TComponentTypeID<FMovieScenePropertyBinding>)0xffff) &&
     (uVar2 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8),
     (short)uVar2 != -1)) {
    lVar9 = (ulonglong)(uVar2 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((int)(uint)(ushort)param_2 < *(int *)(lVar9 + 0x30)) &&
       ((*(uint *)(lVar9 + (ulonglong)((ushort)param_2 >> 5) * 4) >> ((ushort)param_2 & 0x1f) & 1)
        != 0)) {
      uStack_26 = (ushort)(uVar2 >> 0x10);
      lVar9 = *(longlong *)(*(longlong *)&this->EntityAllocations + (ulonglong)(uVar2 & 0xffff) * 8)
      ;
      EVar5 = GetThreadingModel(this);
      lVar8 = *(longlong *)(lVar9 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar9 + 0xc) * 0x38 + lVar8;
      while( true ) {
        if (lVar8 == lVar9) {
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          return __return_storage_ptr__;
        }
        if (*(TComponentTypeID<FMovieScenePropertyBinding> *)(lVar8 + 0x36) == param_2) break;
        lVar8 = lVar8 + 0x38;
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      if (EVar5 != NoThreading) {
        AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x20));
      }
      LOCK();
      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
      UNLOCK();
      if (*(longlong *)__return_storage_ptr__ != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)__return_storage_ptr__ + 0x30);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(int *)&__return_storage_ptr__->field_0x8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
        }
      }
      *(longlong *)__return_storage_ptr__ = lVar8;
      *(uint *)&__return_storage_ptr__->field_0x8 = (uint)(EVar5 != NoThreading);
      plVar7 = (longlong *)&__return_storage_ptr__->field_0x10;
      if (__return_storage_ptr__ ==
          (TComponentLock<UE::MovieScene::TReadOptional<FMovieScenePropertyBinding>_> *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      *plVar7 = *(longlong *)(lVar8 + 0x18) + (ulonglong)uStack_26 * 0x14;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// WriteComponentChecked<FMovieSceneBlendChannelID,FMovieSceneBlendChannelID_&> @ 146805be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::
WriteComponentChecked<FMovieSceneBlendChannelID,FMovieSceneBlendChannelID_&>
          (FEntityManager *this,FMovieSceneEntityID param_1,
          TComponentTypeID<FMovieSceneBlendChannelID> param_2,FMovieSceneBlendChannelID *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_28 [32];
  
  WriteComponent<FMovieSceneBlendChannelID>
            (this,(TComponentLock<UE::MovieScene::TWriteOptional<FMovieSceneBlendChannelID>_> *)
                  local_28,param_1,param_2);
  if ((FMovieSceneBlendChannelID *)local_28._24_8_ == (FMovieSceneBlendChannelID *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ComponentPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                       ,0x210,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(FMovieSceneBlendChannelID *)local_28._24_8_ = *param_3;
  if (local_28._0_8_ != 0) {
    if ((ulonglong)local_28._8_8_ < *(ulonglong *)(local_28._0_8_ + 0x28)) {
      local_28._8_8_ = *(ulonglong *)(local_28._0_8_ + 0x28);
    }
    *(undefined8 *)(local_28._0_8_ + 0x28) = local_28._8_8_;
    LOCK();
    *(int *)(local_28._0_8_ + 0x30) = *(int *)(local_28._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_28._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_28._0_8_ + 0x20));
    }
  }
  return;
}

// ContainsComponent @ 146822560

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FEntityManager::ContainsComponent(FEntityManager *this,FComponentTypeID param_1)

{
  FComponentMask *pFVar1;
  
  pFVar1 = GetAccumulatedMask(this);
  if (((param_1.Value != 0xffff) && ((int)(uint)param_1.Value < (pFVar1->Bits).NumBits)) &&
     ((*(uint *)(pFVar1->Bits).AllocatorInstance.InlineData[param_1.Value >> 5].Pad >>
       (param_1.Value & 0x1f) & 1) != 0)) {
    return true;
  }
  return false;
}

// operator() @ 1504f45c0

bool __thiscall
`UE::MovieScene::FEntityManager::ModifyGlobalIterationFilter'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5793603706242989279>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5793603706242989279>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::FEntityComponentFilter&___ptr64___cdecl_UE::MovieScene::FEntityManager::ModifyGlobalIterationFilter(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

