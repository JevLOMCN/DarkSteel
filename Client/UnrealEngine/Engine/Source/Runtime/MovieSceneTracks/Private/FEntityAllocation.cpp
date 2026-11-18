// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 27

// ReadComponents<double> @ 1465fde00

TComponentLock<UE::MovieScene::TRead<double>_> * __thiscall
UE::MovieScene::FEntityAllocation::ReadComponents<double>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TRead<double>_> *__return_storage_ptr__,
          TComponentTypeID<double> param_1)

{
  EComponentHeaderLockMode EVar1;
  code *pcVar2;
  bool bVar3;
  TComponentLock<UE::MovieScene::TRead<double>_> *pTVar4;
  FComponentHeader *pFVar5;
  FComponentHeader *pFVar6;
  
  pFVar5 = this->ComponentHeaders;
  pFVar6 = pFVar5 + this->NumComponents;
  for (; pFVar5 != pFVar6; pFVar5 = pFVar5 + 1) {
    if ((TComponentTypeID<double>)(pFVar5->ComponentType).Value == param_1) goto LAB_1465fde68;
  }
  pFVar5 = (FComponentHeader *)0x0;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TComponentLock<UE::MovieScene::TRead<double>_> *)(*pcVar2)();
    return pTVar4;
  }
LAB_1465fde68:
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
  return __return_storage_ptr__;
}

// ReadComponents<UObject_*> @ 1465fdeb0

TComponentLock<UE::MovieScene::TRead<UObject_*>_> * __thiscall
UE::MovieScene::FEntityAllocation::ReadComponents<UObject_*>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TRead<UObject_*>_> *__return_storage_ptr__,
          TComponentTypeID<UObject_*> param_1)

{
  EComponentHeaderLockMode EVar1;
  code *pcVar2;
  bool bVar3;
  TComponentLock<UE::MovieScene::TRead<UObject_*>_> *pTVar4;
  FComponentHeader *pFVar5;
  FComponentHeader *pFVar6;
  
  pFVar5 = this->ComponentHeaders;
  pFVar6 = pFVar5 + this->NumComponents;
  for (; pFVar5 != pFVar6; pFVar5 = pFVar5 + 1) {
    if ((TComponentTypeID<UObject_*>)(pFVar5->ComponentType).Value == param_1) goto LAB_1465fdf18;
  }
  pFVar5 = (FComponentHeader *)0x0;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TComponentLock<UE::MovieScene::TRead<UObject_*>_> *)(*pcVar2)();
    return pTVar4;
  }
LAB_1465fdf18:
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
  return __return_storage_ptr__;
}

// ReadComponents<UE::MovieScene::FVariantPropertyTypeIndex> @ 1465fdf60

TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FVariantPropertyTypeIndex>_> * __thiscall
UE::MovieScene::FEntityAllocation::ReadComponents<UE::MovieScene::FVariantPropertyTypeIndex>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FVariantPropertyTypeIndex>_>
          *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FVariantPropertyTypeIndex> param_1)

{
  EComponentHeaderLockMode EVar1;
  code *pcVar2;
  bool bVar3;
  TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FVariantPropertyTypeIndex>_> *pTVar4;
  FComponentHeader *pFVar5;
  FComponentHeader *pFVar6;
  
  pFVar5 = this->ComponentHeaders;
  pFVar6 = pFVar5 + this->NumComponents;
  for (; pFVar5 != pFVar6; pFVar5 = pFVar5 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FVariantPropertyTypeIndex>)(pFVar5->ComponentType).Value
        == param_1) goto LAB_1465fdfc8;
  }
  pFVar5 = (FComponentHeader *)0x0;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FVariantPropertyTypeIndex>_> *)
             (*pcVar2)();
    return pTVar4;
  }
LAB_1465fdfc8:
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
  return __return_storage_ptr__;
}

// TryReadComponents<unsigned_short> @ 14660b1a0

TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_> * __thiscall
UE::MovieScene::FEntityAllocation::TryReadComponents<unsigned_short>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_> *__return_storage_ptr__,
          TComponentTypeID<unsigned_short> param_1)

{
  int *piVar1;
  EComponentHeaderLockMode EVar2;
  FComponentHeader *pFVar3;
  FComponentHeader *pFVar4;
  undefined8 *puVar5;
  
  pFVar4 = this->ComponentHeaders;
  pFVar3 = pFVar4 + this->NumComponents;
  do {
    if (pFVar4 == pFVar3) {
LAB_14660b1e4:
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      return __return_storage_ptr__;
    }
    if ((TComponentTypeID<unsigned_short>)(pFVar4->ComponentType).Value == param_1) {
      if (pFVar4 != (FComponentHeader *)0x0) {
        EVar2 = this->LockMode;
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
        if (EVar2 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar4->ReadWriteLock);
        }
        LOCK();
        pFVar4->ScheduledAccessCount = (atomic<int>)((int)pFVar4->ScheduledAccessCount + 1);
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
        *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x8 = EVar2;
        *(FComponentHeader **)__return_storage_ptr__ = pFVar4;
        puVar5 = (undefined8 *)&__return_storage_ptr__->field_0x10;
        if (__return_storage_ptr__ ==
            (TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_> *)0x0) {
          puVar5 = (undefined8 *)0x0;
        }
        *puVar5 = pFVar4->Components;
        return __return_storage_ptr__;
      }
      goto LAB_14660b1e4;
    }
    pFVar4 = pFVar4 + 1;
  } while( true );
}

// TryReadComponents<double> @ 14660b280

TComponentLock<UE::MovieScene::TReadOptional<double>_> * __thiscall
UE::MovieScene::FEntityAllocation::TryReadComponents<double>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *__return_storage_ptr__,
          TComponentTypeID<double> param_1)

{
  int *piVar1;
  EComponentHeaderLockMode EVar2;
  FComponentHeader *pFVar3;
  FComponentHeader *pFVar4;
  undefined8 *puVar5;
  
  pFVar4 = this->ComponentHeaders;
  pFVar3 = pFVar4 + this->NumComponents;
  do {
    if (pFVar4 == pFVar3) {
LAB_14660b2c4:
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      return __return_storage_ptr__;
    }
    if ((TComponentTypeID<double>)(pFVar4->ComponentType).Value == param_1) {
      if (pFVar4 != (FComponentHeader *)0x0) {
        EVar2 = this->LockMode;
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
        if (EVar2 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar4->ReadWriteLock);
        }
        LOCK();
        pFVar4->ScheduledAccessCount = (atomic<int>)((int)pFVar4->ScheduledAccessCount + 1);
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
        *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x8 = EVar2;
        *(FComponentHeader **)__return_storage_ptr__ = pFVar4;
        puVar5 = (undefined8 *)&__return_storage_ptr__->field_0x10;
        if (__return_storage_ptr__ == (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)0x0)
        {
          puVar5 = (undefined8 *)0x0;
        }
        *puVar5 = pFVar4->Components;
        return __return_storage_ptr__;
      }
      goto LAB_14660b2c4;
    }
    pFVar4 = pFVar4 + 1;
  } while( true );
}

// TryReadComponents<TSharedPtr<FTrackInstancePropertyBindings,1>_> @ 14660b360

TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_> *
__thiscall
UE::MovieScene::FEntityAllocation::TryReadComponents<TSharedPtr<FTrackInstancePropertyBindings,1>_>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
          *__return_storage_ptr__,
          TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_> param_1)

{
  int *piVar1;
  EComponentHeaderLockMode EVar2;
  FComponentHeader *pFVar3;
  FComponentHeader *pFVar4;
  undefined8 *puVar5;
  
  pFVar4 = this->ComponentHeaders;
  pFVar3 = pFVar4 + this->NumComponents;
  do {
    if (pFVar4 == pFVar3) {
LAB_14660b3a4:
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      return __return_storage_ptr__;
    }
    if ((TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_>)
        (pFVar4->ComponentType).Value == param_1) {
      if (pFVar4 != (FComponentHeader *)0x0) {
        EVar2 = this->LockMode;
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
        if (EVar2 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar4->ReadWriteLock);
        }
        LOCK();
        pFVar4->ScheduledAccessCount = (atomic<int>)((int)pFVar4->ScheduledAccessCount + 1);
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
        *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x8 = EVar2;
        *(FComponentHeader **)__return_storage_ptr__ = pFVar4;
        puVar5 = (undefined8 *)&__return_storage_ptr__->field_0x10;
        if (__return_storage_ptr__ ==
            (TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
             *)0x0) {
          puVar5 = (undefined8 *)0x0;
        }
        *puVar5 = pFVar4->Components;
        return __return_storage_ptr__;
      }
      goto LAB_14660b3a4;
    }
    pFVar4 = pFVar4 + 1;
  } while( true );
}

// WriteComponents<unsigned_char> @ 14660b690

TComponentLock<UE::MovieScene::TWrite<unsigned_char>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<unsigned_char>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<unsigned_char>_> *__return_storage_ptr__,
          TComponentTypeID<unsigned_char> param_1,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<unsigned_char>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<unsigned_char>)(pFVar8->ComponentType).Value == param_1)
    goto LAB_14660b6f9;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<unsigned_char>_> *)(*pcVar4)();
    return pTVar6;
  }
LAB_14660b6f9:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<unsigned_char>_> *)(*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<double> @ 14660b770

TComponentLock<UE::MovieScene::TWrite<double>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<double>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<double>_> *__return_storage_ptr__,
          TComponentTypeID<double> param_1,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<double>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<double>)(pFVar8->ComponentType).Value == param_1) goto LAB_14660b7d9;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<double>_> *)(*pcVar4)();
    return pTVar6;
  }
LAB_14660b7d9:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<double>_> *)(*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<UE::Math::TRotator<double>_> @ 14660b850

TComponentLock<UE::MovieScene::TWrite<UE::Math::TRotator<double>_>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<UE::Math::TRotator<double>_>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<UE::Math::TRotator<double>_>_>
          *__return_storage_ptr__,TComponentTypeID<UE::Math::TRotator<double>_> param_1,
          FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<UE::Math::TRotator<double>_>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<UE::Math::TRotator<double>_>)(pFVar8->ComponentType).Value == param_1)
    goto LAB_14660b8b9;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::Math::TRotator<double>_>_> *)(*pcVar4)();
    return pTVar6;
  }
LAB_14660b8b9:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::Math::TRotator<double>_>_> *)(*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> @ 14660b930

TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_> *
__thiscall
UE::MovieScene::FEntityAllocation::
WriteComponents<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
          *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> param_1,
          FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
  *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>)
        (pFVar8->ComponentType).Value == param_1) goto LAB_14660b999;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
              *)(*pcVar4)();
    return pTVar6;
  }
LAB_14660b999:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
              *)(*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<UE::MovieScene::FDoubleIntermediateVector> @ 14660ba10

TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FDoubleIntermediateVector>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<UE::MovieScene::FDoubleIntermediateVector>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FDoubleIntermediateVector>_>
          *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FDoubleIntermediateVector> param_1,
          FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FDoubleIntermediateVector>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FDoubleIntermediateVector>)(pFVar8->ComponentType).Value
        == param_1) goto LAB_14660ba79;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FDoubleIntermediateVector>_> *)
             (*pcVar4)();
    return pTVar6;
  }
LAB_14660ba79:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FDoubleIntermediateVector>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<UE::MovieScene::FFloatIntermediateVector> @ 14660baf0

TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FFloatIntermediateVector>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<UE::MovieScene::FFloatIntermediateVector>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FFloatIntermediateVector>_>
          *__return_storage_ptr__,TComponentTypeID<UE::MovieScene::FFloatIntermediateVector> param_1
          ,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FFloatIntermediateVector>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FFloatIntermediateVector>)(pFVar8->ComponentType).Value ==
        param_1) goto LAB_14660bb59;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FFloatIntermediateVector>_> *)
             (*pcVar4)();
    return pTVar6;
  }
LAB_14660bb59:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FFloatIntermediateVector>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<UE::MovieScene::FInitialValueIndex> @ 14660bbd0

TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FInitialValueIndex>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<UE::MovieScene::FInitialValueIndex>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FInitialValueIndex>_>
          *__return_storage_ptr__,TComponentTypeID<UE::MovieScene::FInitialValueIndex> param_1,
          FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FInitialValueIndex>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FInitialValueIndex>)(pFVar8->ComponentType).Value ==
        param_1) goto LAB_14660bc39;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FInitialValueIndex>_> *)
             (*pcVar4)();
    return pTVar6;
  }
LAB_14660bc39:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FInitialValueIndex>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<UE::MovieScene::FIntermediate3DTransform> @ 14660bcb0

TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediate3DTransform>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<UE::MovieScene::FIntermediate3DTransform>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediate3DTransform>_>
          *__return_storage_ptr__,TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> param_1
          ,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediate3DTransform>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FIntermediate3DTransform>)(pFVar8->ComponentType).Value ==
        param_1) goto LAB_14660bd19;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediate3DTransform>_> *)
             (*pcVar4)();
    return pTVar6;
  }
LAB_14660bd19:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediate3DTransform>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<UE::MovieScene::FIntermediateColor> @ 14660bd90

TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateColor>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<UE::MovieScene::FIntermediateColor>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateColor>_>
          *__return_storage_ptr__,TComponentTypeID<UE::MovieScene::FIntermediateColor> param_1,
          FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateColor>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FIntermediateColor>)(pFVar8->ComponentType).Value ==
        param_1) goto LAB_14660bdf9;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateColor>_> *)
             (*pcVar4)();
    return pTVar6;
  }
LAB_14660bdf9:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateColor>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<UE::MovieScene::FObjectComponent> @ 14660be70

TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectComponent>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<UE::MovieScene::FObjectComponent>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectComponent>_>
          *__return_storage_ptr__,TComponentTypeID<UE::MovieScene::FObjectComponent> param_1,
          FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectComponent>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FObjectComponent>)(pFVar8->ComponentType).Value == param_1
       ) goto LAB_14660bed9;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectComponent>_> *)
             (*pcVar4)();
    return pTVar6;
  }
LAB_14660bed9:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectComponent>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata> @ 14660bf50

TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_> *
__thiscall
UE::MovieScene::FEntityAllocation::
WriteComponents<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
          *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata> param_1,
          FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
  *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>)
        (pFVar8->ComponentType).Value == param_1) goto LAB_14660bfb9;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
              *)(*pcVar4)();
    return pTVar6;
  }
LAB_14660bfb9:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
              *)(*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<FString> @ 14660c030

TComponentLock<UE::MovieScene::TWrite<FString>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<FString>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<FString>_> *__return_storage_ptr__,
          TComponentTypeID<FString> param_1,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<FString>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<FString>)(pFVar8->ComponentType).Value == param_1) goto LAB_14660c099;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<FString>_> *)(*pcVar4)();
    return pTVar6;
  }
LAB_14660c099:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<FString>_> *)(*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<FText> @ 14660c110

TComponentLock<UE::MovieScene::TWrite<FText>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<FText>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<FText>_> *__return_storage_ptr__,
          TComponentTypeID<FText> param_1,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<FText>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<FText>)(pFVar8->ComponentType).Value == param_1) goto LAB_14660c179;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<FText>_> *)(*pcVar4)();
    return pTVar6;
  }
LAB_14660c179:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<FText>_> *)(*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<__int64> @ 14660c1f0

TComponentLock<UE::MovieScene::TWrite<__int64>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<__int64>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<__int64>_> *__return_storage_ptr__,
          TComponentTypeID<__int64> param_1,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<__int64>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<__int64>)(pFVar8->ComponentType).Value == param_1) goto LAB_14660c259;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<__int64>_> *)(*pcVar4)();
    return pTVar6;
  }
LAB_14660c259:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<__int64>_> *)(*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<bool> @ 14660c2d0

TComponentLock<UE::MovieScene::TWrite<bool>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<bool>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<bool>_> *__return_storage_ptr__,
          TComponentTypeID<bool> param_1,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<bool>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<bool>)(pFVar8->ComponentType).Value == param_1) goto LAB_14660c339;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<bool>_> *)(*pcVar4)();
    return pTVar6;
  }
LAB_14660c339:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<bool>_> *)(*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// TryReadComponents<FMaterialParameterInfo> @ 1468051b0

TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_> * __thiscall
UE::MovieScene::FEntityAllocation::TryReadComponents<FMaterialParameterInfo>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>
          *__return_storage_ptr__,TComponentTypeID<FMaterialParameterInfo> param_1)

{
  int *piVar1;
  EComponentHeaderLockMode EVar2;
  FComponentHeader *pFVar3;
  FComponentHeader *pFVar4;
  undefined8 *puVar5;
  
  pFVar4 = this->ComponentHeaders;
  pFVar3 = pFVar4 + this->NumComponents;
  do {
    if (pFVar4 == pFVar3) {
LAB_1468051f4:
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      return __return_storage_ptr__;
    }
    if ((TComponentTypeID<FMaterialParameterInfo>)(pFVar4->ComponentType).Value == param_1) {
      if (pFVar4 != (FComponentHeader *)0x0) {
        EVar2 = this->LockMode;
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
        if (EVar2 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar4->ReadWriteLock);
        }
        LOCK();
        pFVar4->ScheduledAccessCount = (atomic<int>)((int)pFVar4->ScheduledAccessCount + 1);
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
        *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x8 = EVar2;
        *(FComponentHeader **)__return_storage_ptr__ = pFVar4;
        puVar5 = (undefined8 *)&__return_storage_ptr__->field_0x10;
        if (__return_storage_ptr__ ==
            (TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_> *)0x0) {
          puVar5 = (undefined8 *)0x0;
        }
        *puVar5 = pFVar4->Components;
        return __return_storage_ptr__;
      }
      goto LAB_1468051f4;
    }
    pFVar4 = pFVar4 + 1;
  } while( true );
}

// TryReadComponents<FName> @ 146805290

TComponentLock<UE::MovieScene::TReadOptional<FName>_> * __thiscall
UE::MovieScene::FEntityAllocation::TryReadComponents<FName>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TReadOptional<FName>_> *__return_storage_ptr__,
          TComponentTypeID<FName> param_1)

{
  int *piVar1;
  EComponentHeaderLockMode EVar2;
  FComponentHeader *pFVar3;
  FComponentHeader *pFVar4;
  undefined8 *puVar5;
  
  pFVar4 = this->ComponentHeaders;
  pFVar3 = pFVar4 + this->NumComponents;
  do {
    if (pFVar4 == pFVar3) {
LAB_1468052d4:
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      return __return_storage_ptr__;
    }
    if ((TComponentTypeID<FName>)(pFVar4->ComponentType).Value == param_1) {
      if (pFVar4 != (FComponentHeader *)0x0) {
        EVar2 = this->LockMode;
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
        if (EVar2 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar4->ReadWriteLock);
        }
        LOCK();
        pFVar4->ScheduledAccessCount = (atomic<int>)((int)pFVar4->ScheduledAccessCount + 1);
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
        *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x8 = EVar2;
        *(FComponentHeader **)__return_storage_ptr__ = pFVar4;
        puVar5 = (undefined8 *)&__return_storage_ptr__->field_0x10;
        if (__return_storage_ptr__ == (TComponentLock<UE::MovieScene::TReadOptional<FName>_> *)0x0)
        {
          puVar5 = (undefined8 *)0x0;
        }
        *puVar5 = pFVar4->Components;
        return __return_storage_ptr__;
      }
      goto LAB_1468052d4;
    }
    pFVar4 = pFVar4 + 1;
  } while( true );
}

// TryWriteComponents<UE::MovieScene::FHierarchicalBlendTarget> @ 146805370

TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FHierarchicalBlendTarget>_> *
__thiscall
UE::MovieScene::FEntityAllocation::TryWriteComponents<UE::MovieScene::FHierarchicalBlendTarget>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FHierarchicalBlendTarget>_>
          *__return_storage_ptr__,TComponentTypeID<UE::MovieScene::FHierarchicalBlendTarget> param_1
          ,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FHierarchicalBlendTarget>_> *pTVar7;
  ulonglong uVar8;
  FComponentHeader *pFVar9;
  FComponentHeader *pFVar10;
  undefined8 *puVar11;
  
  pFVar10 = this->ComponentHeaders;
  pFVar9 = pFVar10 + this->NumComponents;
  do {
    if (pFVar10 == pFVar9) {
LAB_1468053b6:
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      *(undefined4 *)&__return_storage_ptr__->field_0x10 = 1;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
      return __return_storage_ptr__;
    }
    if ((TComponentTypeID<UE::MovieScene::FHierarchicalBlendTarget>)(pFVar10->ComponentType).Value
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
          pTVar7 = (TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FHierarchicalBlendTarget>_>
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
            (TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FHierarchicalBlendTarget>_>
             *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        *(ulong64 *)&__return_storage_ptr__->field_0x8 = param_2.SystemSerial;
        *puVar11 = pFVar10->Components;
        return __return_storage_ptr__;
      }
      goto LAB_1468053b6;
    }
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// TryReadComponents<short> @ 14689b400

TComponentLock<UE::MovieScene::TReadOptional<short>_> * __thiscall
UE::MovieScene::FEntityAllocation::TryReadComponents<short>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TReadOptional<short>_> *__return_storage_ptr__,
          TComponentTypeID<short> param_1)

{
  int *piVar1;
  EComponentHeaderLockMode EVar2;
  FComponentHeader *pFVar3;
  FComponentHeader *pFVar4;
  undefined8 *puVar5;
  
  pFVar4 = this->ComponentHeaders;
  pFVar3 = pFVar4 + this->NumComponents;
  do {
    if (pFVar4 == pFVar3) {
LAB_14689b444:
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      return __return_storage_ptr__;
    }
    if ((TComponentTypeID<short>)(pFVar4->ComponentType).Value == param_1) {
      if (pFVar4 != (FComponentHeader *)0x0) {
        EVar2 = this->LockMode;
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
        if (EVar2 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar4->ReadWriteLock);
        }
        LOCK();
        pFVar4->ScheduledAccessCount = (atomic<int>)((int)pFVar4->ScheduledAccessCount + 1);
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
        *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x8 = EVar2;
        *(FComponentHeader **)__return_storage_ptr__ = pFVar4;
        puVar5 = (undefined8 *)&__return_storage_ptr__->field_0x10;
        if (__return_storage_ptr__ == (TComponentLock<UE::MovieScene::TReadOptional<short>_> *)0x0)
        {
          puVar5 = (undefined8 *)0x0;
        }
        *puVar5 = pFVar4->Components;
        return __return_storage_ptr__;
      }
      goto LAB_14689b444;
    }
    pFVar4 = pFVar4 + 1;
  } while( true );
}

// TryWriteComponents<unsigned_short> @ 14689b4e0

TComponentLock<UE::MovieScene::TWriteOptional<unsigned_short>_> * __thiscall
UE::MovieScene::FEntityAllocation::TryWriteComponents<unsigned_short>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWriteOptional<unsigned_short>_> *__return_storage_ptr__,
          TComponentTypeID<unsigned_short> param_1,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TComponentLock<UE::MovieScene::TWriteOptional<unsigned_short>_> *pTVar7;
  ulonglong uVar8;
  FComponentHeader *pFVar9;
  FComponentHeader *pFVar10;
  undefined8 *puVar11;
  
  pFVar10 = this->ComponentHeaders;
  pFVar9 = pFVar10 + this->NumComponents;
  do {
    if (pFVar10 == pFVar9) {
LAB_14689b526:
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      *(undefined4 *)&__return_storage_ptr__->field_0x10 = 1;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
      return __return_storage_ptr__;
    }
    if ((TComponentTypeID<unsigned_short>)(pFVar10->ComponentType).Value == param_1) {
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
          pTVar7 = (TComponentLock<UE::MovieScene::TWriteOptional<unsigned_short>_> *)(*pcVar5)();
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
            (TComponentLock<UE::MovieScene::TWriteOptional<unsigned_short>_> *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        *(ulong64 *)&__return_storage_ptr__->field_0x8 = param_2.SystemSerial;
        *puVar11 = pFVar10->Components;
        return __return_storage_ptr__;
      }
      goto LAB_14689b526;
    }
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// WriteComponents<unsigned_short> @ 14689b630

TComponentLock<UE::MovieScene::TWrite<unsigned_short>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<unsigned_short>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<unsigned_short>_> *__return_storage_ptr__,
          TComponentTypeID<unsigned_short> param_1,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<unsigned_short>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<unsigned_short>)(pFVar8->ComponentType).Value == param_1)
    goto LAB_14689b699;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<unsigned_short>_> *)(*pcVar4)();
    return pTVar6;
  }
LAB_14689b699:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<unsigned_short>_> *)(*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

