// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// DestroyOutput @ 1467885a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FAttachmentHandler::DestroyOutput
          (FAttachmentHandler *this,FObjectKey param_1,FPreAnimAttachment *param_2,
          FEntityOutputAggregate param_3)

{
  int *piVar1;
  FName *pFVar2;
  UMovieSceneComponentAttachmentSystem *pUVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  UObject *pUVar10;
  TArray<TTuple<USceneComponent_*,UE::MovieScene::FPreAnimAttachment>,TSizedDefaultAllocator<32>_>
  *pTVar11;
  FWeakObjectPtr local_res10;
  USceneComponent *local_28;
  FWeakObjectPtr FStack_20;
  FName FStack_18;
  FNameEntryId FStack_10;
  uint uStack_c;
  
  local_res10.ObjectIndex = param_1.ObjectIndex;
  local_res10.ObjectSerialNumber = param_1.ObjectSerialNumber;
  pUVar10 = FWeakObjectPtr::Get(&local_res10);
  if ((param_3.bNeedsRestoration != false) && (pUVar10 != (UObject *)0x0)) {
    local_28 = CastChecked<USceneComponent,UObject>(pUVar10);
    pUVar3 = this->AttachmentSystem;
    FStack_20 = (param_2->OldAttachParent).WeakPtr;
    FStack_18 = param_2->OldAttachSocket;
    pTVar11 = &pUVar3->PendingAttachmentsToRestore;
    FStack_10.Value = *(uint *)&param_2->DetachParams;
    pFVar4 = (pTVar11->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 <
        pFVar4 + (longlong)(pUVar3->PendingAttachmentsToRestore).ArrayMax * 0x20)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (pUVar3->PendingAttachmentsToRestore).ArrayNum;
    piVar1 = &(pUVar3->PendingAttachmentsToRestore).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&pTVar11->AllocatorInstance,piVar1);
    }
    (pUVar3->PendingAttachmentsToRestore).ArrayNum = iVar9 + 1;
    pFVar5 = (pTVar11->AllocatorInstance).Data;
    pFVar4 = pFVar5 + (longlong)iVar9 * 0x20;
    *(USceneComponent **)pFVar4 = local_28;
    *(FWeakObjectPtr *)(pFVar4 + 8) = FStack_20;
    FVar7.Number = uStack_c;
    FVar7.ComparisonIndex.Value = FStack_10.Value;
    pFVar2 = (FName *)(pFVar5 + (longlong)iVar9 * 0x20 + 0x10);
    *pFVar2 = FStack_18;
    pFVar2[1] = FVar7;
  }
  return;
}

// UpdateOutput @ 1467c6820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FAttachmentHandler::UpdateOutput
          (FAttachmentHandler *this,FObjectKey param_1,
          TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *param_2,
          FPreAnimAttachment *param_3,FEntityOutputAggregate param_4)

{
  ushort uVar1;
  TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_> TVar2;
  TComponentTypeID<UE::MovieScene::FAttachmentComponent> TVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  FEntityManager *pFVar7;
  code *pcVar8;
  bool bVar9;
  EEntityThreadingModel EVar10;
  bool bVar11;
  USceneComponent *pUVar12;
  UClass *pUVar13;
  USceneComponent *pUVar14;
  FName *pFVar15;
  longlong lVar16;
  longlong lVar17;
  FWeakObjectPtr *pFVar18;
  FWeakObjectPtr *pFVar19;
  ushort uStackX_12;
  ushort uStack_6e;
  FWeakObjectPtr local_68;
  FMovieSceneEntityID *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  FMovieSceneEntityID *local_40;
  
  local_68.ObjectIndex = param_1.ObjectIndex;
  local_68.ObjectSerialNumber = param_1.ObjectSerialNumber;
  pUVar12 = (USceneComponent *)FWeakObjectPtr::Get(&local_68);
  if (pUVar12 != (USceneComponent *)0x0) {
    pUVar13 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar5 = (int)pUVar13->_padding_;
    if ((iVar5 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar13->_padding_)) {
      local_60 = param_2->DataPtr;
      local_40 = local_60 + param_2->ArrayNum;
      if (local_60 != local_40) {
        do {
          uVar1 = local_60->Value;
          pFVar7 = this->EntityManager;
          TVar2 = this->TrackComponents->AttachParent;
          if ((uVar1 == 0xffff) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Entity",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                                 ,0x1a8,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((TVar2 != (TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>)0xffff)
             && (uVar6 = *(uint *)(*(longlong *)&pFVar7->EntityLocations + (ulonglong)uVar1 * 8),
                (short)uVar6 != -1)) {
            lVar17 = (ulonglong)(uVar6 & 0xffff) * 0x38 +
                     *(longlong *)&pFVar7->EntityAllocationMasks;
            if (((int)(uint)(ushort)TVar2 < *(int *)(lVar17 + 0x30)) &&
               ((*(uint *)(lVar17 + (ulonglong)((ushort)TVar2 >> 5) * 4) >> ((ushort)TVar2 & 0x1f) &
                1) != 0)) {
              uStackX_12 = (ushort)(uVar6 >> 0x10);
              lVar17 = *(longlong *)
                        (*(longlong *)&pFVar7->EntityAllocations + (ulonglong)(uVar6 & 0xffff) * 8);
              EVar10 = FEntityManager::GetThreadingModel(pFVar7);
              pFVar18 = *(FWeakObjectPtr **)(lVar17 + 0x28);
              bVar9 = EVar10 != NoThreading;
              pFVar19 = pFVar18 + (ulonglong)*(ushort *)(lVar17 + 0xc) * 7;
              for (; pFVar18 != pFVar19; pFVar18 = pFVar18 + 7) {
                if (*(TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_> *)
                     ((longlong)&pFVar18[6].ObjectSerialNumber + 2) == TVar2) {
                  if (EVar10 != NoThreading) {
                    AcquireSRWLockShared((PSRWLOCK)(pFVar18 + 4));
                  }
                  LOCK();
                  pFVar18[6].ObjectIndex = pFVar18[6].ObjectIndex + 1;
                  UNLOCK();
                  pFVar19 = (FWeakObjectPtr *)((longlong)pFVar18[3] + (ulonglong)uStackX_12 * 8);
                  goto LAB_1467c6a0e;
                }
              }
            }
          }
          bVar9 = false;
          pFVar18 = (FWeakObjectPtr *)0x0;
          pFVar19 = pFVar18;
LAB_1467c6a0e:
          pFVar7 = this->EntityManager;
          TVar3 = this->TrackComponents->AttachComponent;
          if ((uVar1 == 0xffff) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Entity",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                                  ,0x1a8,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((TVar3 != (TComponentTypeID<UE::MovieScene::FAttachmentComponent>)0xffff) &&
             (uVar6 = *(uint *)(*(longlong *)&pFVar7->EntityLocations + (ulonglong)uVar1 * 8),
             (short)uVar6 != -1)) {
            lVar17 = (ulonglong)(uVar6 & 0xffff) * 0x38 +
                     *(longlong *)&pFVar7->EntityAllocationMasks;
            if (((int)(uint)(ushort)TVar3 < *(int *)(lVar17 + 0x30)) &&
               ((*(uint *)(lVar17 + (ulonglong)((ushort)TVar3 >> 5) * 4) >> ((ushort)TVar3 & 0x1f) &
                1) != 0)) {
              lVar17 = *(longlong *)
                        (*(longlong *)&pFVar7->EntityAllocations + (ulonglong)(uVar6 & 0xffff) * 8);
              EVar10 = FEntityManager::GetThreadingModel(pFVar7);
              lVar16 = *(longlong *)(lVar17 + 0x28);
              lVar17 = (ulonglong)*(ushort *)(lVar17 + 0xc) * 0x38 + lVar16;
              for (; lVar16 != lVar17; lVar16 = lVar16 + 0x38) {
                if (*(TComponentTypeID<UE::MovieScene::FAttachmentComponent> *)(lVar16 + 0x36) ==
                    TVar3) {
                  if (EVar10 != NoThreading) {
                    AcquireSRWLockShared((PSRWLOCK)(lVar16 + 0x20));
                  }
                  LOCK();
                  *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
                  UNLOCK();
                  uStack_6e = (ushort)(uVar6 >> 0x10);
                  uStack_50 = CONCAT44(uStack_50._4_4_,(uint)(EVar10 != NoThreading));
                  pFVar15 = (FName *)(*(longlong *)(lVar16 + 0x18) + (ulonglong)uStack_6e * 0x18);
                  goto LAB_1467c6b19;
                }
              }
            }
          }
          lVar16 = 0;
          local_48 = 0;
          local_58 = 0;
          uStack_50 = 0;
          pFVar15 = (FName *)0x0;
LAB_1467c6b19:
          if (((pFVar19 != (FWeakObjectPtr *)0x0) && (pFVar15 != (FName *)0x0)) &&
             (pUVar14 = (USceneComponent *)FWeakObjectPtr::Get(pFVar19),
             pUVar14 != (USceneComponent *)0x0)) {
            uVar4 = *(undefined2 *)((longlong)&pFVar15[2].ComparisonIndex.Value + 3);
            (param_3->DetachParams).DetachmentLocationRule = (char)uVar4;
            (param_3->DetachParams).DetachmentRotationRule = (char)((ushort)uVar4 >> 8);
            (param_3->DetachParams).DetachmentScaleRule =
                 *(EDetachmentRule *)((longlong)&pFVar15[2].Number + 1);
            FComponentAttachParams::ApplyAttach
                      ((FComponentAttachParams *)(pFVar15 + 2),pUVar12,pUVar14,pFVar15);
            if (lVar16 != 0) {
              LOCK();
              *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + -1;
              UNLOCK();
              if ((int)uStack_50 == 1) {
                ReleaseSRWLockShared((PSRWLOCK)(lVar16 + 0x20));
              }
            }
            if (pFVar18 == (FWeakObjectPtr *)0x0) {
              return;
            }
            LOCK();
            pFVar18[6].ObjectIndex = pFVar18[6].ObjectIndex + -1;
            UNLOCK();
            if (!bVar9) {
              return;
            }
            ReleaseSRWLockShared((PSRWLOCK)(pFVar18 + 4));
            return;
          }
          if (lVar16 != 0) {
            LOCK();
            *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + -1;
            UNLOCK();
            if ((int)uStack_50 == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(lVar16 + 0x20));
            }
          }
          if (pFVar18 != (FWeakObjectPtr *)0x0) {
            LOCK();
            pFVar18[6].ObjectIndex = pFVar18[6].ObjectIndex + -1;
            UNLOCK();
            if (bVar9) {
              ReleaseSRWLockShared((PSRWLOCK)(pFVar18 + 4));
            }
          }
          local_60 = local_60 + 1;
        } while (local_60 != local_40);
      }
    }
  }
  return;
}

