// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 11

// WriteComponents<UObject_*_(__cdecl*)(UObject_*)> @ 14608d0c0

TComponentLock<UE::MovieScene::TWrite<UObject_*_(__cdecl*)(UObject_*)>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<UObject_*_(__cdecl*)(UObject_*)>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<UObject_*_(__cdecl*)(UObject_*)>_>
          *__return_storage_ptr__,TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)> param_1,
          FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<UObject_*_(__cdecl*)(UObject_*)>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)>)(pFVar8->ComponentType).Value == param_1)
    goto LAB_14608d129;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UObject_*_(__cdecl*)(UObject_*)>_> *)(*pcVar4)()
    ;
    return pTVar6;
  }
LAB_14608d129:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UObject_*_(__cdecl*)(UObject_*)>_> *)(*pcVar4)()
    ;
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<UObject_*> @ 14608d1a0

TComponentLock<UE::MovieScene::TWrite<UObject_*>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<UObject_*>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<UObject_*>_> *__return_storage_ptr__,
          TComponentTypeID<UObject_*> param_1,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<UObject_*>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<UObject_*>)(pFVar8->ComponentType).Value == param_1) goto LAB_14608d209;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UObject_*>_> *)(*pcVar4)();
    return pTVar6;
  }
LAB_14608d209:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UObject_*>_> *)(*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<FGuid> @ 14608d280

TComponentLock<UE::MovieScene::TWrite<FGuid>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<FGuid>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<FGuid>_> *__return_storage_ptr__,
          TComponentTypeID<FGuid> param_1,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<FGuid>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<FGuid>)(pFVar8->ComponentType).Value == param_1) goto LAB_14608d2e9;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<FGuid>_> *)(*pcVar4)();
    return pTVar6;
  }
LAB_14608d2e9:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<FGuid>_> *)(*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<FObjectKey> @ 14608d360

TComponentLock<UE::MovieScene::TWrite<FObjectKey>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<FObjectKey>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<FObjectKey>_> *__return_storage_ptr__,
          TComponentTypeID<FObjectKey> param_1,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<FObjectKey>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<FObjectKey>)(pFVar8->ComponentType).Value == param_1) goto LAB_14608d3c9;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<FObjectKey>_> *)(*pcVar4)();
    return pTVar6;
  }
LAB_14608d3c9:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<FObjectKey>_> *)(*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<FTrackInstanceInputComponent> @ 14608d440

TComponentLock<UE::MovieScene::TWrite<FTrackInstanceInputComponent>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<FTrackInstanceInputComponent>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<FTrackInstanceInputComponent>_>
          *__return_storage_ptr__,TComponentTypeID<FTrackInstanceInputComponent> param_1,
          FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<FTrackInstanceInputComponent>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<FTrackInstanceInputComponent>)(pFVar8->ComponentType).Value == param_1)
    goto LAB_14608d4a9;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<FTrackInstanceInputComponent>_> *)(*pcVar4)();
    return pTVar6;
  }
LAB_14608d4a9:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<FTrackInstanceInputComponent>_> *)(*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<UE::MovieScene::FEntityGroupID> @ 146117960

TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FEntityGroupID>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<UE::MovieScene::FEntityGroupID>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FEntityGroupID>_>
          *__return_storage_ptr__,TComponentTypeID<UE::MovieScene::FEntityGroupID> param_1,
          FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FEntityGroupID>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FEntityGroupID>)(pFVar8->ComponentType).Value == param_1)
    goto LAB_1461179c9;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FEntityGroupID>_> *)(*pcVar4)();
    return pTVar6;
  }
LAB_1461179c9:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FEntityGroupID>_> *)(*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// GetComponentHeaderChecked @ 14613a5a0

FComponentHeader * __thiscall
UE::MovieScene::FEntityAllocation::GetComponentHeaderChecked
          (FEntityAllocation *this,FComponentTypeID param_1)

{
  code *pcVar1;
  bool bVar2;
  FComponentHeader *pFVar3;
  FComponentHeader *pFVar4;
  
  pFVar3 = this->ComponentHeaders;
  pFVar4 = pFVar3 + this->NumComponents;
  for (; pFVar3 != pFVar4; pFVar3 = pFVar3 + 1) {
    if ((pFVar3->ComponentType).Value == param_1.Value) {
      return pFVar3;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2db,L"");
  if (!bVar2) {
    return (FComponentHeader *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FComponentHeader *)(*pcVar1)();
  return pFVar3;
}

// ReadComponentsErased @ 14614b610

TComponentLock<UE::MovieScene::FReadErased> * __thiscall
UE::MovieScene::FEntityAllocation::ReadComponentsErased
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::FReadErased> *__return_storage_ptr__,
          FComponentTypeID param_1)

{
  EComponentHeaderLockMode EVar1;
  code *pcVar2;
  bool bVar3;
  TComponentLock<UE::MovieScene::FReadErased> *pTVar4;
  FComponentHeader *pFVar5;
  FComponentHeader *pFVar6;
  
  pFVar5 = this->ComponentHeaders;
  pFVar6 = pFVar5 + this->NumComponents;
  for (; pFVar5 != pFVar6; pFVar5 = pFVar5 + 1) {
    if ((pFVar5->ComponentType).Value == param_1.Value) goto LAB_14614b678;
  }
  pFVar5 = (FComponentHeader *)0x0;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TComponentLock<UE::MovieScene::FReadErased> *)(*pcVar2)();
    return pTVar4;
  }
LAB_14614b678:
  EVar1 = this->LockMode;
  *(FComponentHeader **)__return_storage_ptr__ = pFVar5;
  *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x8 = EVar1;
  if (EVar1 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar5->ReadWriteLock);
  }
  LOCK();
  pFVar5->ScheduledAccessCount = (atomic<int>)((int)pFVar5->ScheduledAccessCount + 1);
  UNLOCK();
  *(uchar **)&__return_storage_ptr__->field_0x10 = pFVar5->Components;
  *(uint *)&__return_storage_ptr__->field_0x18 = (uint)pFVar5->Sizeof;
  return __return_storage_ptr__;
}

// TryReadComponentsErased @ 146159540

TComponentLock<UE::MovieScene::FReadErasedOptional> * __thiscall
UE::MovieScene::FEntityAllocation::TryReadComponentsErased
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::FReadErasedOptional> *__return_storage_ptr__,
          FComponentTypeID param_1)

{
  int *piVar1;
  byte bVar2;
  EComponentHeaderLockMode EVar3;
  FComponentHeader *pFVar4;
  FComponentHeader *pFVar5;
  undefined8 *puVar6;
  undefined4 uStack_c;
  
  pFVar5 = this->ComponentHeaders;
  pFVar4 = pFVar5 + this->NumComponents;
  do {
    if (pFVar5 == pFVar4) {
LAB_146159584:
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
      return __return_storage_ptr__;
    }
    if ((pFVar5->ComponentType).Value == param_1.Value) {
      if (pFVar5 != (FComponentHeader *)0x0) {
        EVar3 = this->LockMode;
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
        *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
        if (EVar3 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar5->ReadWriteLock);
        }
        LOCK();
        pFVar5->ScheduledAccessCount = (atomic<int>)((int)pFVar5->ScheduledAccessCount + 1);
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
        *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x8 = EVar3;
        *(FComponentHeader **)__return_storage_ptr__ = pFVar5;
        puVar6 = (undefined8 *)&__return_storage_ptr__->field_0x10;
        if (__return_storage_ptr__ == (TComponentLock<UE::MovieScene::FReadErasedOptional> *)0x0) {
          puVar6 = (undefined8 *)0x0;
        }
        bVar2 = pFVar5->Sizeof;
        *puVar6 = pFVar5->Components;
        puVar6[1] = CONCAT44(uStack_c,(uint)bVar2);
        return __return_storage_ptr__;
      }
      goto LAB_146159584;
    }
    pFVar5 = pFVar5 + 1;
  } while( true );
}

// TryWriteComponentsErased @ 146159f10

TComponentLock<UE::MovieScene::FWriteErasedOptional> * __thiscall
UE::MovieScene::FEntityAllocation::TryWriteComponentsErased
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::FWriteErasedOptional> *__return_storage_ptr__,
          FComponentTypeID param_1,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  byte bVar3;
  EComponentHeaderLockMode EVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  TComponentLock<UE::MovieScene::FWriteErasedOptional> *pTVar8;
  ulonglong uVar9;
  FComponentHeader *pFVar10;
  FComponentHeader *pFVar11;
  undefined8 *puVar12;
  undefined4 uStack_1c;
  
  pFVar11 = this->ComponentHeaders;
  pFVar10 = pFVar11 + this->NumComponents;
  do {
    if (pFVar11 == pFVar10) {
LAB_146159f56:
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      *(undefined4 *)&__return_storage_ptr__->field_0x10 = 1;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
      *(undefined4 *)&__return_storage_ptr__->field_0x20 = 0;
      return __return_storage_ptr__;
    }
    if ((pFVar11->ComponentType).Value == param_1.Value) {
      if (pFVar11 != (FComponentHeader *)0x0) {
        EVar4 = this->LockMode;
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
        *(undefined4 *)&__return_storage_ptr__->field_0x10 = 1;
        *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
        *(undefined4 *)&__return_storage_ptr__->field_0x20 = 0;
        if (EVar4 == Mutex) {
          AcquireSRWLockExclusive((PSRWLOCK)&pFVar11->ReadWriteLock);
        }
        LOCK();
        paVar1 = &pFVar11->ScheduledAccessCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        if ((aVar2 != (atomic<int>)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("PreviousAccessCount == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                               ,0x487,
                               L"Component header is still in use when it is being opened for write!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar8 = (TComponentLock<UE::MovieScene::FWriteErasedOptional> *)(*pcVar6)();
          return pTVar8;
        }
        lVar5 = *(longlong *)__return_storage_ptr__;
        if (lVar5 != 0) {
          uVar9 = *(ulonglong *)&__return_storage_ptr__->field_0x8;
          if (*(ulonglong *)&__return_storage_ptr__->field_0x8 < *(ulonglong *)(lVar5 + 0x28)) {
            uVar9 = *(ulonglong *)(lVar5 + 0x28);
          }
          *(ulonglong *)(lVar5 + 0x28) = uVar9;
          LOCK();
          *(int *)(*(longlong *)__return_storage_ptr__ + 0x30) =
               *(int *)(*(longlong *)__return_storage_ptr__ + 0x30) + -1;
          UNLOCK();
          if (*(int *)&__return_storage_ptr__->field_0x10 == 1) {
            ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
          }
        }
        *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x10 = EVar4;
        *(FComponentHeader **)__return_storage_ptr__ = pFVar11;
        puVar12 = (undefined8 *)&__return_storage_ptr__->field_0x18;
        if (__return_storage_ptr__ == (TComponentLock<UE::MovieScene::FWriteErasedOptional> *)0x0) {
          puVar12 = (undefined8 *)0x0;
        }
        *(ulong64 *)&__return_storage_ptr__->field_0x8 = param_2.SystemSerial;
        bVar3 = pFVar11->Sizeof;
        *puVar12 = pFVar11->Components;
        puVar12[1] = CONCAT44(uStack_1c,(uint)bVar3);
        return __return_storage_ptr__;
      }
      goto LAB_146159f56;
    }
    pFVar11 = pFVar11 + 1;
  } while( true );
}

// WriteComponentsErased @ 146160d90

TComponentLock<UE::MovieScene::FWriteErased> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponentsErased
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::FWriteErased> *__return_storage_ptr__,
          FComponentTypeID param_1,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::FWriteErased> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((pFVar8->ComponentType).Value == param_1.Value) goto LAB_146160df9;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::FWriteErased> *)(*pcVar4)();
    return pTVar6;
  }
LAB_146160df9:
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
    pTVar6 = (TComponentLock<UE::MovieScene::FWriteErased> *)(*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  *(uint *)&__return_storage_ptr__->field_0x20 = (uint)pFVar8->Sizeof;
  return __return_storage_ptr__;
}

