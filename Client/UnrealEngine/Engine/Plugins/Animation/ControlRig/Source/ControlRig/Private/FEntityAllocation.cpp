// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// TryWriteComponents<double> @ 14a3b32e0

TComponentLock<UE::MovieScene::TWriteOptional<double>_> * __thiscall
UE::MovieScene::FEntityAllocation::TryWriteComponents<double>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWriteOptional<double>_> *__return_storage_ptr__,
          TComponentTypeID<double> param_1,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TComponentLock<UE::MovieScene::TWriteOptional<double>_> *pTVar7;
  ulonglong uVar8;
  FComponentHeader *pFVar9;
  FComponentHeader *pFVar10;
  undefined8 *puVar11;
  
  pFVar10 = this->ComponentHeaders;
  pFVar9 = pFVar10 + this->NumComponents;
  do {
    if (pFVar10 == pFVar9) {
LAB_14a3b3326:
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      *(undefined4 *)&__return_storage_ptr__->field_0x10 = 1;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
      return __return_storage_ptr__;
    }
    if ((TComponentTypeID<double>)(pFVar10->ComponentType).Value == param_1) {
      if (pFVar10 != (FComponentHeader *)0x0) {
        EVar3 = this->LockMode;
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
        *(undefined4 *)&__return_storage_ptr__->field_0x10 = 1;
        *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
        if (EVar3 == Mutex) {
          AcquireSRWLockExclusive((PSRWLOCK)&pFVar10->ReadWriteLock);
        }
        LOCK();
        paVar1 = &pFVar10->ScheduledAccessCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        if ((aVar2 != (atomic<int>)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("PreviousAccessCount == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                               ,0x487,
                               L"Component header is still in use when it is being opened for write!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar7 = (TComponentLock<UE::MovieScene::TWriteOptional<double>_> *)(*pcVar5)();
          return pTVar7;
        }
        lVar4 = *(longlong *)__return_storage_ptr__;
        if (lVar4 != 0) {
          uVar8 = *(ulonglong *)&__return_storage_ptr__->field_0x8;
          if (*(ulonglong *)&__return_storage_ptr__->field_0x8 < *(ulonglong *)(lVar4 + 0x28)) {
            uVar8 = *(ulonglong *)(lVar4 + 0x28);
          }
          *(ulonglong *)(lVar4 + 0x28) = uVar8;
          LOCK();
          *(int *)(*(longlong *)__return_storage_ptr__ + 0x30) =
               *(int *)(*(longlong *)__return_storage_ptr__ + 0x30) + -1;
          UNLOCK();
          if (*(int *)&__return_storage_ptr__->field_0x10 == 1) {
            ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
          }
        }
        *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x10 = EVar3;
        *(FComponentHeader **)__return_storage_ptr__ = pFVar10;
        puVar11 = (undefined8 *)&__return_storage_ptr__->field_0x18;
        if (__return_storage_ptr__ == (TComponentLock<UE::MovieScene::TWriteOptional<double>_> *)0x0
           ) {
          puVar11 = (undefined8 *)0x0;
        }
        *(ulong64 *)&__return_storage_ptr__->field_0x8 = param_2.SystemSerial;
        *puVar11 = pFVar10->Components;
        return __return_storage_ptr__;
      }
      goto LAB_14a3b3326;
    }
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// TryWriteComponents<UE::MovieScene::FFloatIntermediateVector> @ 14a3b3430

TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FFloatIntermediateVector>_> *
__thiscall
UE::MovieScene::FEntityAllocation::TryWriteComponents<UE::MovieScene::FFloatIntermediateVector>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FFloatIntermediateVector>_>
          *__return_storage_ptr__,TComponentTypeID<UE::MovieScene::FFloatIntermediateVector> param_1
          ,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FFloatIntermediateVector>_> *pTVar7;
  ulonglong uVar8;
  FComponentHeader *pFVar9;
  FComponentHeader *pFVar10;
  undefined8 *puVar11;
  
  pFVar10 = this->ComponentHeaders;
  pFVar9 = pFVar10 + this->NumComponents;
  do {
    if (pFVar10 == pFVar9) {
LAB_14a3b3476:
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      *(undefined4 *)&__return_storage_ptr__->field_0x10 = 1;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
      return __return_storage_ptr__;
    }
    if ((TComponentTypeID<UE::MovieScene::FFloatIntermediateVector>)(pFVar10->ComponentType).Value
        == param_1) {
      if (pFVar10 != (FComponentHeader *)0x0) {
        EVar3 = this->LockMode;
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
        *(undefined4 *)&__return_storage_ptr__->field_0x10 = 1;
        *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
        if (EVar3 == Mutex) {
          AcquireSRWLockExclusive((PSRWLOCK)&pFVar10->ReadWriteLock);
        }
        LOCK();
        paVar1 = &pFVar10->ScheduledAccessCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        if ((aVar2 != (atomic<int>)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("PreviousAccessCount == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                               ,0x487,
                               L"Component header is still in use when it is being opened for write!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar7 = (TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FFloatIntermediateVector>_>
                    *)(*pcVar5)();
          return pTVar7;
        }
        lVar4 = *(longlong *)__return_storage_ptr__;
        if (lVar4 != 0) {
          uVar8 = *(ulonglong *)&__return_storage_ptr__->field_0x8;
          if (*(ulonglong *)&__return_storage_ptr__->field_0x8 < *(ulonglong *)(lVar4 + 0x28)) {
            uVar8 = *(ulonglong *)(lVar4 + 0x28);
          }
          *(ulonglong *)(lVar4 + 0x28) = uVar8;
          LOCK();
          *(int *)(*(longlong *)__return_storage_ptr__ + 0x30) =
               *(int *)(*(longlong *)__return_storage_ptr__ + 0x30) + -1;
          UNLOCK();
          if (*(int *)&__return_storage_ptr__->field_0x10 == 1) {
            ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
          }
        }
        *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x10 = EVar3;
        *(FComponentHeader **)__return_storage_ptr__ = pFVar10;
        puVar11 = (undefined8 *)&__return_storage_ptr__->field_0x18;
        if (__return_storage_ptr__ ==
            (TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FFloatIntermediateVector>_>
             *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        *(ulong64 *)&__return_storage_ptr__->field_0x8 = param_2.SystemSerial;
        *puVar11 = pFVar10->Components;
        return __return_storage_ptr__;
      }
      goto LAB_14a3b3476;
    }
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// TryWriteComponents<UE::MovieScene::FIntermediate3DTransform> @ 14a3b3580

TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FIntermediate3DTransform>_> *
__thiscall
UE::MovieScene::FEntityAllocation::TryWriteComponents<UE::MovieScene::FIntermediate3DTransform>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FIntermediate3DTransform>_>
          *__return_storage_ptr__,TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> param_1
          ,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FIntermediate3DTransform>_> *pTVar7;
  ulonglong uVar8;
  FComponentHeader *pFVar9;
  FComponentHeader *pFVar10;
  undefined8 *puVar11;
  
  pFVar10 = this->ComponentHeaders;
  pFVar9 = pFVar10 + this->NumComponents;
  do {
    if (pFVar10 == pFVar9) {
LAB_14a3b35c6:
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      *(undefined4 *)&__return_storage_ptr__->field_0x10 = 1;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
      return __return_storage_ptr__;
    }
    if ((TComponentTypeID<UE::MovieScene::FIntermediate3DTransform>)(pFVar10->ComponentType).Value
        == param_1) {
      if (pFVar10 != (FComponentHeader *)0x0) {
        EVar3 = this->LockMode;
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
        *(undefined4 *)&__return_storage_ptr__->field_0x10 = 1;
        *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
        if (EVar3 == Mutex) {
          AcquireSRWLockExclusive((PSRWLOCK)&pFVar10->ReadWriteLock);
        }
        LOCK();
        paVar1 = &pFVar10->ScheduledAccessCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        if ((aVar2 != (atomic<int>)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("PreviousAccessCount == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                               ,0x487,
                               L"Component header is still in use when it is being opened for write!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar7 = (TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FIntermediate3DTransform>_>
                    *)(*pcVar5)();
          return pTVar7;
        }
        lVar4 = *(longlong *)__return_storage_ptr__;
        if (lVar4 != 0) {
          uVar8 = *(ulonglong *)&__return_storage_ptr__->field_0x8;
          if (*(ulonglong *)&__return_storage_ptr__->field_0x8 < *(ulonglong *)(lVar4 + 0x28)) {
            uVar8 = *(ulonglong *)(lVar4 + 0x28);
          }
          *(ulonglong *)(lVar4 + 0x28) = uVar8;
          LOCK();
          *(int *)(*(longlong *)__return_storage_ptr__ + 0x30) =
               *(int *)(*(longlong *)__return_storage_ptr__ + 0x30) + -1;
          UNLOCK();
          if (*(int *)&__return_storage_ptr__->field_0x10 == 1) {
            ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
          }
        }
        *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x10 = EVar3;
        *(FComponentHeader **)__return_storage_ptr__ = pFVar10;
        puVar11 = (undefined8 *)&__return_storage_ptr__->field_0x18;
        if (__return_storage_ptr__ ==
            (TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FIntermediate3DTransform>_>
             *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        *(ulong64 *)&__return_storage_ptr__->field_0x8 = param_2.SystemSerial;
        *puVar11 = pFVar10->Components;
        return __return_storage_ptr__;
      }
      goto LAB_14a3b35c6;
    }
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// WriteComponents<UE::MovieScene::FAccumulatedControlEntryIndex> @ 14a3b42f0

TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FAccumulatedControlEntryIndex>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<UE::MovieScene::FAccumulatedControlEntryIndex>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FAccumulatedControlEntryIndex>_>
          *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FAccumulatedControlEntryIndex> param_1,
          FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FAccumulatedControlEntryIndex>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FAccumulatedControlEntryIndex>)
        (pFVar8->ComponentType).Value == param_1) goto LAB_14a3b4359;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FAccumulatedControlEntryIndex>_>
              *)(*pcVar4)();
    return pTVar6;
  }
LAB_14a3b4359:
  EVar3 = this->LockMode;
  *(FComponentHeader **)__return_storage_ptr__ = pFVar8;
  *(ulong64 *)&__return_storage_ptr__->field_0x8 = param_2.SystemSerial;
  *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x10 = EVar3;
  if (EVar3 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  paVar1 = &pFVar8->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviousAccessCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x487,
                         L"Component header is still in use when it is being opened for write!"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FAccumulatedControlEntryIndex>_>
              *)(*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<UE::MovieScene::FBaseControlRigEvalData> @ 14a3b43d0

TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FBaseControlRigEvalData>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<UE::MovieScene::FBaseControlRigEvalData>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FBaseControlRigEvalData>_>
          *__return_storage_ptr__,TComponentTypeID<UE::MovieScene::FBaseControlRigEvalData> param_1,
          FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FBaseControlRigEvalData>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FBaseControlRigEvalData>)(pFVar8->ComponentType).Value ==
        param_1) goto LAB_14a3b4439;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FBaseControlRigEvalData>_> *)
             (*pcVar4)();
    return pTVar6;
  }
LAB_14a3b4439:
  EVar3 = this->LockMode;
  *(FComponentHeader **)__return_storage_ptr__ = pFVar8;
  *(ulong64 *)&__return_storage_ptr__->field_0x8 = param_2.SystemSerial;
  *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x10 = EVar3;
  if (EVar3 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  paVar1 = &pFVar8->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviousAccessCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x487,
                         L"Component header is still in use when it is being opened for write!"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FBaseControlRigEvalData>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<UE::MovieScene::FControlRigSourceData> @ 14a3b44b0

TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FControlRigSourceData>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<UE::MovieScene::FControlRigSourceData>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FControlRigSourceData>_>
          *__return_storage_ptr__,TComponentTypeID<UE::MovieScene::FControlRigSourceData> param_1,
          FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FControlRigSourceData>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FControlRigSourceData>)(pFVar8->ComponentType).Value ==
        param_1) goto LAB_14a3b4519;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FControlRigSourceData>_> *)
             (*pcVar4)();
    return pTVar6;
  }
LAB_14a3b4519:
  EVar3 = this->LockMode;
  *(FComponentHeader **)__return_storage_ptr__ = pFVar8;
  *(ulong64 *)&__return_storage_ptr__->field_0x8 = param_2.SystemSerial;
  *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x10 = EVar3;
  if (EVar3 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  paVar1 = &pFVar8->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviousAccessCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x487,
                         L"Component header is still in use when it is being opened for write!"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FControlRigSourceData>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

