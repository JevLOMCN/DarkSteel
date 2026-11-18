// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 3

// WriteComponents<UE::MovieScene::FIntermediateMargin> @ 1468fd150

TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateMargin>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<UE::MovieScene::FIntermediateMargin>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateMargin>_>
          *__return_storage_ptr__,TComponentTypeID<UE::MovieScene::FIntermediateMargin> param_1,
          FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateMargin>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FIntermediateMargin>)(pFVar8->ComponentType).Value ==
        param_1) goto LAB_1468fd1b9;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateMargin>_> *)
             (*pcVar4)();
    return pTVar6;
  }
LAB_1468fd1b9:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateMargin>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<UE::MovieScene::FIntermediateWidgetTransform> @ 1468fd230

TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateWidgetTransform>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<UE::MovieScene::FIntermediateWidgetTransform>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateWidgetTransform>_>
          *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FIntermediateWidgetTransform> param_1,
          FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateWidgetTransform>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FIntermediateWidgetTransform>)
        (pFVar8->ComponentType).Value == param_1) goto LAB_1468fd299;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateWidgetTransform>_>
              *)(*pcVar4)();
    return pTVar6;
  }
LAB_1468fd299:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateWidgetTransform>_>
              *)(*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

// WriteComponents<FWidgetMaterialHandle> @ 1468fd310

TComponentLock<UE::MovieScene::TWrite<FWidgetMaterialHandle>_> * __thiscall
UE::MovieScene::FEntityAllocation::WriteComponents<FWidgetMaterialHandle>
          (FEntityAllocation *this,
          TComponentLock<UE::MovieScene::TWrite<FWidgetMaterialHandle>_> *__return_storage_ptr__,
          TComponentTypeID<FWidgetMaterialHandle> param_1,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TComponentLock<UE::MovieScene::TWrite<FWidgetMaterialHandle>_> *pTVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  
  pFVar8 = this->ComponentHeaders;
  pFVar7 = pFVar8 + this->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((TComponentTypeID<FWidgetMaterialHandle>)(pFVar8->ComponentType).Value == param_1)
    goto LAB_1468fd379;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<FWidgetMaterialHandle>_> *)(*pcVar4)();
    return pTVar6;
  }
LAB_1468fd379:
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
    pTVar6 = (TComponentLock<UE::MovieScene::TWrite<FWidgetMaterialHandle>_> *)(*pcVar4)();
    return pTVar6;
  }
  *(uchar **)&__return_storage_ptr__->field_0x18 = pFVar8->Components;
  return __return_storage_ptr__;
}

