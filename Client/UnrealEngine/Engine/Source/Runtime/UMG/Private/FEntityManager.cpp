// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// ReadComponent<UE::MovieScene::FIntermediateMargin> @ 1468f97e0

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateMargin>_> * __thiscall
UE::MovieScene::FEntityManager::ReadComponent<UE::MovieScene::FIntermediateMargin>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateMargin>_>
          *__return_storage_ptr__,FMovieSceneEntityID param_1,
          TComponentTypeID<UE::MovieScene::FIntermediateMargin> param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateMargin>_> *pTVar6;
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
    pTVar6 = (TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateMargin>_> *)
             (*pcVar3)();
    return pTVar6;
  }
  if ((param_2 != (TComponentTypeID<UE::MovieScene::FIntermediateMargin>)0xffff) &&
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
        if (*(TComponentTypeID<UE::MovieScene::FIntermediateMargin> *)(lVar8 + 0x36) == param_2)
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
          (TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateMargin>_> *)0x0
         ) {
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

// ReadComponent<UE::MovieScene::FIntermediateWidgetTransform> @ 1468f9970

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateWidgetTransform>_> *
__thiscall
UE::MovieScene::FEntityManager::ReadComponent<UE::MovieScene::FIntermediateWidgetTransform>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateWidgetTransform>_>
          *__return_storage_ptr__,FMovieSceneEntityID param_1,
          TComponentTypeID<UE::MovieScene::FIntermediateWidgetTransform> param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateWidgetTransform>_>
  *pTVar6;
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
    pTVar6 = (TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateWidgetTransform>_>
              *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_2 != (TComponentTypeID<UE::MovieScene::FIntermediateWidgetTransform>)0xffff) &&
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
        if (*(TComponentTypeID<UE::MovieScene::FIntermediateWidgetTransform> *)(lVar8 + 0x36) ==
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
          (TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediateWidgetTransform>_>
           *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      *plVar7 = (ulonglong)uStack_26 * 0x38 + *(longlong *)(lVar8 + 0x18);
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

