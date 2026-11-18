// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 113

// HandleDroppedRecord<5> @ 1442f1dc0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationWriter::HandleDroppedRecord<5>
          (FReplicationWriter *this,EReplicatedObjectState param_1,FRecordInfo *param_2,
          FReplicationInfo *param_3,FReplicationRecord *param_4)

{
  undefined1 *puVar1;
  FReplicationInfo_u_8 *pFVar2;
  undefined4 uVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  FReplicatedObjectData *pFVar7;
  FReplicationInfo *pFVar8;
  uint *puVar9;
  uint uVar10;
  FRecordInfo *pFVar11;
  FScriptContainerElement *pFVar12;
  uint *puVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  FNetBitArrayView local_80;
  FNetBitArrayView local_70;
  FNetBitArrayView local_60 [2];
  
  if (param_1 < Destroyed) {
    uVar19 = param_2->Index;
    lVar16 = 0;
    pFVar2 = &param_3->field1_0x8;
    if (param_2->HasChangeMask == 0) {
      uVar17 = 1;
    }
    else {
      uVar17 = (uint)(pFVar2->_s_1).ChangeMaskBitCount;
    }
    pFVar11 = param_2;
    if (0x40 < uVar17) {
      pFVar11 = (FRecordInfo *)(param_2->ChangeMaskOrPtr).ChangeMaskOrPointer;
    }
    FNetBitArrayView::FNetBitArrayView(&local_80,(uint *)pFVar11,uVar17);
    uVar15 = 0;
    if (param_2->HasChangeMask != 0) {
      uVar17 = local_80.WordCount;
      if ((param_2->NextIndex != 0xffff) &&
         (pFVar14 = (this->ReplicationRecord).RecordInfos.Storage.AllocatorInstance.Data +
                    ((ulonglong)
                     ((((uint)param_2->NextIndex - (uint)(this->ReplicationRecord).FrontIndex) +
                      0xffff) % 0xffff) + (ulonglong)(this->ReplicationRecord).RecordInfos.Tail &
                    (ulonglong)(this->ReplicationRecord).RecordInfos.IndexMask) * 0x10,
         pFVar14 != (FScriptContainerElement *)0x0)) {
        uVar18 = (ulonglong)local_80.WordCount;
        do {
          if ((*(uint *)(pFVar14 + 8) & 0x2000000) != 0) {
            uVar17 = *(uint *)&param_3->field1_0x8 & 0xffff;
            pFVar12 = pFVar14;
            if (0x40 < uVar17) {
              pFVar12 = *(FScriptContainerElement **)pFVar14;
            }
            FNetBitArrayView::FNetBitArrayView(local_60,(uint *)pFVar12,uVar17);
            if (((local_80.Storage == local_60[0].Storage) ||
                (local_80.BitCount != local_60[0].BitCount)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x64b,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar18 = (ulonglong)local_80.WordCount;
            puVar9 = local_80.Storage;
            puVar13 = local_60[0].Storage;
            if (local_80.WordCount != 0) {
              do {
                *puVar9 = *puVar9 & ~*puVar13;
                uVar18 = uVar18 - 1;
                puVar9 = puVar9 + 1;
                puVar13 = puVar13 + 1;
              } while (uVar18 != 0);
              uVar18 = (ulonglong)local_80.WordCount;
            }
          }
          uVar17 = (uint)uVar18;
        } while ((*(ushort *)(pFVar14 + 0xc) != 0xffff) &&
                (pFVar14 = (this->ReplicationRecord).RecordInfos.Storage.AllocatorInstance.Data +
                           ((ulonglong)
                            ((((uint)*(ushort *)(pFVar14 + 0xc) -
                              (uint)(this->ReplicationRecord).FrontIndex) + 0xffff) % 0xffff) +
                            (ulonglong)(this->ReplicationRecord).RecordInfos.Tail &
                           (ulonglong)(this->ReplicationRecord).RecordInfos.IndexMask) * 0x10,
                pFVar14 != (FScriptContainerElement *)0x0));
      }
      if (uVar17 != 0) {
        do {
          if (local_80.Storage[uVar15] != 0) {
            lVar16 = 1;
            break;
          }
          uVar10 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar10;
        } while (uVar10 < uVar17);
      }
    }
    uVar15 = param_2->HasAttachments;
    if (((pFVar2->Value >> 0x1c & 1) != 0 || lVar16 != 0) || uVar15 != 0) {
      if ((char)lVar16 != '\0') {
        uVar17 = (uint)pFVar2->Value & 0xffff;
        if (0x40 < uVar17) {
          param_3 = (FReplicationInfo *)(param_3->ChangeMaskOrPtr).ChangeMaskOrPointer;
        }
        FNetBitArrayView::FNetBitArrayView(&local_70,(uint *)param_3,uVar17);
        if (((local_70.Storage == local_80.Storage) || (local_70.BitCount != local_80.BitCount)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x64b,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_70.WordCount != 0) {
          uVar18 = (ulonglong)local_70.WordCount;
          do {
            uVar17 = *local_80.Storage;
            local_80.Storage = local_80.Storage + 1;
            *local_70.Storage = *local_70.Storage | uVar17;
            local_70.Storage = local_70.Storage + 1;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
      }
      if (param_1 < PendingDestroy) {
        MarkObjectDirty(this,uVar19,"DroppedCreated");
        uVar18 = lVar16 << 0x17 | pFVar2->Value;
        uVar18 = (pFVar2->Value ^ uVar18) & 0xffffffffff7fffff ^ uVar18;
        uVar15 = uVar15 << 0x18 | uVar18;
        pFVar2->Value = (uVar15 ^ uVar18) & 0xfffffffffeffffff ^ uVar15;
        if (((this->SchedulingPriorities).ArrayNum <= (int)uVar19) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar5 = __real_3f800000;
        pFVar14 = (this->SchedulingPriorities).AllocatorInstance.Data;
        *(float *)(pFVar14 + (ulonglong)uVar19 * 4) =
             *(float *)(pFVar14 + (ulonglong)uVar19 * 4) + __real_3f800000;
        if ((*(uint *)pFVar2 >> 0x16 & 1) != 0) {
          pFVar7 = FNetRefHandleManager::GetReplicatedObjectData(this->NetRefHandleManager,uVar19);
          uVar19 = pFVar7->SubObjectRootIndex;
          pFVar8 = GetReplicationInfo(this,uVar19);
          if (((byte)((uint)*(undefined4 *)&pFVar8->field1_0x8 >> 0x10) & 0x1f) < 10) {
            MarkObjectDirty(this,uVar19,"DroppedCreated2");
            (pFVar8->field1_0x8).Value = (pFVar8->field1_0x8).Value | 0x200000;
            uVar17 = 0;
            if ((int)uVar19 < (this->SchedulingPriorities).ArrayNum) {
              uVar17 = ~uVar19 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar14 = (this->SchedulingPriorities).AllocatorInstance.Data;
            *(float *)(pFVar14 + (longlong)(int)uVar19 * 4) =
                 *(float *)(pFVar14 + (longlong)(int)uVar19 * 4) + fVar5;
          }
          else {
            bVar6 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<7868239365963515429>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                               ,0x625,
                               "SubObjectOwnerReplicationInfo.GetState() < EReplicatedObjectState::PendingDestroy"
                              );
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
      }
    }
  }
  return;
}

// HandleDroppedRecord<11> @ 1442f2270

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationWriter::HandleDroppedRecord<11>
          (FReplicationWriter *this,EReplicatedObjectState param_1,FRecordInfo *param_2,
          FReplicationInfo *param_3,FReplicationRecord *param_4)

{
  undefined1 *puVar1;
  FNetBitArray *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FReplicatedObjectData *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  FReplicationInfo *pFVar9;
  FRecordInfo *pFVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  FReplicationInfo_u_8 *pFVar14;
  EReplicatedObjectState local_res10 [8];
  uint local_res18 [2];
  FReplicatedObjectData *local_98;
  FNetBitArrayView local_90;
  FNetBitArrayView local_80;
  uint *local_70;
  EReplicatedObjectState *local_68;
  FNetBitArrayView local_60;
  FNetBitArrayView local_50;
  uint *local_40;
  EReplicatedObjectState *local_38;
  
  local_res18[0] = param_2->Index;
  local_res10[0] = param_1;
  if ((param_1 != WaitOnDestroyConfirmation) && (param_1 != CancelPendingDestroy)) {
    local_70 = local_res18;
    local_68 = local_res10;
    `UE::Net::Private::FReplicationWriter::HandleDroppedRecord<11>'::__l2::<lambda_1>::operator()
              (&local_70);
  }
  if (local_res10[0] == CancelPendingDestroy) {
    pFVar14 = &param_3->field1_0x8;
    if ((param_2->WroteDestroySubObject == 0) || ((*(uint *)pFVar14 >> 0x1d & 1) == 0)) {
      pFVar9 = param_3;
      if (0x40 < (*(uint *)pFVar14 & 0xffff)) {
        pFVar9 = (FReplicationInfo *)(param_3->ChangeMaskOrPtr).ChangeMaskOrPointer;
      }
      FNetBitArrayView::FNetBitArrayView(&local_50,(uint *)pFVar9,*(uint *)pFVar14 & 0xffff);
      uVar7 = 0;
      uVar13 = uVar7;
      if (local_50.WordCount != 0) {
        do {
          if (local_50.Storage[uVar13] != 0) {
            uVar7 = 0x800000;
            break;
          }
          uVar8 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar8;
        } while (uVar8 < local_50.WordCount);
      }
      pFVar14 = &param_3->field1_0x8;
      uVar13 = ((uVar7 | pFVar14->Value) ^ pFVar14->Value) & 0xffffffffff7fffff ^
               (uVar7 | pFVar14->Value);
      pFVar14->Value = uVar13;
      FNetBitArray::SetBitValue
                (&this->ObjectsWithDirtyChanges,local_res18[0],(bool)((byte)(uVar13 >> 0x17) & 1));
      FNetBitArray::ClearBit(&this->ObjectsPendingDestroy,local_res18[0]);
      SetState(this,local_res18[0],Created);
    }
    else {
      pFVar6 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                         (this->NetRefHandleManager,local_res18[0]);
      if (((pFVar6->SubObjectRootIndex == 0) || ((*(byte *)&pFVar6->field9_0x32 & 4) == 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ObjectData.IsOwnedSubObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                             ,0x648,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (0x40 < (*(uint *)pFVar14 & 0xffff)) {
        param_3 = (FReplicationInfo *)(param_3->ChangeMaskOrPtr).ChangeMaskOrPointer;
      }
      FNetBitArrayView::FNetBitArrayView(&local_60,(uint *)param_3,*(uint *)pFVar14 & 0xffff);
      uVar7 = 0;
      uVar13 = uVar7;
      if (local_60.WordCount != 0) {
        do {
          if (local_60.Storage[uVar13] != 0) {
            uVar7 = 0x800000;
            break;
          }
          uVar8 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar8;
        } while (uVar8 < local_60.WordCount);
      }
      pFVar14->Value = (uVar7 | pFVar14->Value & 0x800000) ^ pFVar14->Value & 0xffffffffdf7fffff;
      FNetBitArray::ClearBit(&this->ObjectsPendingDestroy,local_res18[0]);
      SetState(this,local_res18[0],Created);
      this_00 = &this->ObjectsWithDirtyChanges;
      FNetBitArray::SetBitValue(this_00,local_res18[0],(bool)((byte)(*(uint *)pFVar14 >> 0x17) & 1))
      ;
      uVar8 = pFVar6->SubObjectRootIndex;
      lVar11 = (longlong)(int)uVar8;
      uVar12 = 0;
      if ((int)uVar8 < (this->ReplicatedObjects).ArrayNum) {
        uVar12 = ~uVar8 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->ReplicatedObjects).AllocatorInstance.Data;
      uVar13 = *(ulonglong *)(pFVar2 + lVar11 * 0x10 + 8);
      if (((byte)(uVar13 >> 0x10) & 0x1f) < 10) {
        uVar7 = pFVar14->Value >> 2 | uVar13;
        uVar7 = (uVar13 ^ uVar7) & 0xffffffffffdfffff ^ uVar7;
        *(ulonglong *)(pFVar2 + lVar11 * 0x10 + 8) = uVar7;
        if ((bValidateObjectsWithDirtyChanges != false) && ((uVar7 >> 0x10 & 0x1f) == 0)) {
          local_98 = pFVar6;
          `UE::Net::Private::FReplicationWriter::HandleDroppedRecord<11>'::__l19::<lambda_2>::
          operator()(&local_98);
        }
        bVar4 = FNetBitArray::GetBit(this_00,pFVar6->SubObjectRootIndex);
        if ((bVar4) || ((*(uint *)(pFVar2 + lVar11 * 0x10 + 8) >> 0x15 & 1) != 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        FNetBitArray::SetBitValue(this_00,pFVar6->SubObjectRootIndex,bVar4);
      }
    }
  }
  else if (param_2->WroteTearOff == 0) {
    if ((param_2->WroteDestroySubObject == 0) || ((*(uint *)&param_3->field1_0x8 >> 0x1d & 1) == 0))
    {
      FNetBitArray::SetBit(&this->ObjectsPendingDestroy,local_res18[0]);
      FNetBitArray::ClearBit(&this->ObjectsWithDirtyChanges,local_res18[0]);
      (param_3->field1_0x8).Value = (param_3->field1_0x8).Value & 0xffffffffff7fffff;
      SetState(this,local_res18[0],PendingDestroy);
    }
    else {
      pFVar6 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                         (this->NetRefHandleManager,local_res18[0]);
      if (((pFVar6->SubObjectRootIndex == 0) || ((*(byte *)&pFVar6->field9_0x32 & 4) == 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ObjectData.IsOwnedSubObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                             ,0x69c,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar8 = pFVar6->SubObjectRootIndex;
      uVar12 = 0;
      if ((int)uVar8 < (this->ReplicatedObjects).ArrayNum) {
        uVar12 = ~uVar8 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->ReplicatedObjects).AllocatorInstance.Data;
      if (((byte)((uint)*(undefined4 *)(pFVar2 + (longlong)(int)uVar8 * 0x10 + 8) >> 0x10) & 0x1f) <
          10) {
        MarkObjectDirty(this,pFVar6->SubObjectRootIndex,"DroppedWaitOnDestroy2");
        pFVar2 = pFVar2 + (longlong)(int)uVar8 * 0x10 + 8;
        *(ulonglong *)pFVar2 = *(ulonglong *)pFVar2 | 0x200000;
        SetState(this,local_res18[0],SubObjectPendingDestroy);
        FNetBitArray::SetBit(&this->ObjectsWithDirtyChanges,local_res18[0]);
        FNetBitArray::SetBit(&this->ObjectsPendingDestroy,local_res18[0]);
      }
    }
  }
  else {
    if ((*(uint *)&param_3->field1_0x8 >> 0x1c & 1) == 0) {
      local_40 = local_res18;
      local_38 = local_res10;
      `UE::Net::Private::FReplicationWriter::HandleDroppedRecord<11>'::__l26::<lambda_3>::operator()
                (&local_40);
    }
    SetState(this,local_res18[0],PendingTearOff);
    if (param_2->HasChangeMask != 0) {
      uVar8 = *(uint *)&param_3->field1_0x8 & 0xffff;
      pFVar9 = param_3;
      if (0x40 < uVar8) {
        pFVar9 = (FReplicationInfo *)(param_3->ChangeMaskOrPtr).ChangeMaskOrPointer;
      }
      FNetBitArrayView::FNetBitArrayView(&local_90,(uint *)pFVar9,uVar8);
      uVar8 = *(uint *)&param_3->field1_0x8 & 0xffff;
      pFVar10 = param_2;
      if (0x40 < uVar8) {
        pFVar10 = (FRecordInfo *)(param_2->ChangeMaskOrPtr).ChangeMaskOrPointer;
      }
      FNetBitArrayView::FNetBitArrayView(&local_80,(uint *)pFVar10,uVar8);
      if (((local_90.Storage == local_80.Storage) || (local_90.BitCount != local_80.BitCount)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x64b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_90.WordCount != 0) {
        uVar13 = (ulonglong)local_90.WordCount;
        do {
          uVar8 = *local_80.Storage;
          local_80.Storage = local_80.Storage + 1;
          *local_90.Storage = *local_90.Storage | uVar8;
          local_90.Storage = local_90.Storage + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      (param_3->field1_0x8).Value = (param_3->field1_0x8).Value | 0x800000;
    }
    uVar13 = (ulonglong)(*(uint *)&param_2->field_0x8 >> 2) | (param_3->field1_0x8).Value;
    (param_3->field1_0x8).Value =
         (uVar13 ^ (param_3->field1_0x8).Value) & 0xfffffffffeffffff ^ uVar13;
    MarkObjectDirty(this,local_res18[0],"DroppedWaitOnDestroy");
    uVar12 = local_res18[0];
    uVar8 = uVar12;
    if ((*(uint *)&param_3->field1_0x8 >> 0x16 & 1) != 0) {
      pFVar6 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                         (this->NetRefHandleManager,local_res18[0]);
      uVar8 = pFVar6->SubObjectRootIndex;
      if (uVar8 == 0) {
        bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7868239365963515527>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                           ,0x687,
                           "ObjectData.SubObjectRootIndex != FNetRefHandleManager::InvalidInternalIndex"
                          );
        uVar8 = uVar12;
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        MarkObjectDirty(this,uVar8,"DroppedWaitOnDestroy2");
        uVar12 = pFVar6->SubObjectRootIndex;
        uVar5 = 0;
        if ((int)uVar12 < (this->ReplicatedObjects).ArrayNum) {
          uVar5 = ~uVar12 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->ReplicatedObjects).AllocatorInstance.Data;
        uVar13 = *(ulonglong *)(pFVar2 + (longlong)(int)uVar12 * 0x10 + 8);
        if (((byte)(uVar13 >> 0x10) & 0x1f) < 10) {
          *(ulonglong *)(pFVar2 + (longlong)(int)uVar12 * 0x10 + 8) = uVar13 | 0x200000;
        }
        else {
          bVar4 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7868239365963515533>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                             ,0x68d,"OwnerInfo.GetState() < EReplicatedObjectState::PendingDestroy")
          ;
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
    }
    uVar12 = 0;
    if ((int)uVar8 < (this->SchedulingPriorities).ArrayNum) {
      uVar12 = ~uVar8 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->SchedulingPriorities).AllocatorInstance.Data;
    *(float *)(pFVar2 + (longlong)(int)uVar8 * 4) =
         *(float *)(pFVar2 + (longlong)(int)uVar8 * 4) + __real_3f800000;
  }
  return;
}

// FReplicationWriter @ 1442f69e0

FReplicationWriter * __thiscall
UE::Net::Private::FReplicationWriter::FReplicationWriter(FReplicationWriter *this)

{
  TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_> *this_00;
  TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_> *this_01;
  TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
  *this_02;
  undefined1 *puVar1;
  uint uVar2;
  FNetDebugName *pFVar3;
  
  (this->Parameters).SmallObjectBitThreshold = 0xa0;
  (this->Parameters).MaxInternalNetRefIndex = 0;
  (this->Parameters).MaxReplicationWriterObjectCount = 0;
  (this->Parameters).PacketSendWindowSize = 0;
  (this->Parameters).ConnectionId = 0;
  (this->Parameters).ReplicationSystem = (UReplicationSystem *)0x0;
  (this->Parameters).bAllowSendingAttachmentsToObjectsNotInScope = false;
  (this->Parameters).bAllowReceivingAttachmentsFromRemoteObjectsNotInScope = false;
  (this->Parameters).bAllowDelayingAttachmentsWithUnresolvedReferences = false;
  (this->ReplicationRecord).RecordInfos.Head = 0;
  (this->ReplicationRecord).RecordInfos.Tail = 0;
  (this->ReplicationRecord).RecordInfos.IndexMask = 0;
  (this->ReplicationRecord).RecordInfos.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReplicationRecord).RecordInfos.Storage.ArrayNum = 0;
  (this->ReplicationRecord).RecordInfos.Storage.ArrayMax = 0;
  (this->Parameters).MaxFailedSmallObjectCount = 10;
  (this->Parameters).NumBitsUsedForBatchSize = 0x10;
  (this->Parameters).NumBitsUsedForHugeObjectBatchSize = 0x20;
  TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
  ::SetCapacity(&(this->ReplicationRecord).RecordInfos,0x400);
  this_00 = &(this->ReplicationRecord).Record;
  this_00->Head = 0;
  this_00->Tail = 0;
  (this->ReplicationRecord).Record.IndexMask = 0;
  (this->ReplicationRecord).Record.Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicationRecord).Record.Storage.ArrayNum = 0;
  (this->ReplicationRecord).Record.Storage.ArrayMax = 0;
  TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_>::SetCapacity(this_00,0x100);
  this_01 = &(this->ReplicationRecord).AttachmentRecords;
  this_01->Head = 0;
  this_01->Tail = 0;
  (this->ReplicationRecord).AttachmentRecords.IndexMask = 0;
  (this->ReplicationRecord).AttachmentRecords.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReplicationRecord).AttachmentRecords.Storage.ArrayNum = 0;
  (this->ReplicationRecord).AttachmentRecords.Storage.ArrayMax = 0;
  TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_>::SetCapacity(this_01,0x40);
  this_02 = &(this->ReplicationRecord).SubObjectRecords;
  this_02->Head = 0;
  this_02->Tail = 0;
  (this->ReplicationRecord).SubObjectRecords.IndexMask = 0;
  (this->ReplicationRecord).SubObjectRecords.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReplicationRecord).SubObjectRecords.Storage.ArrayNum = 0;
  (this->ReplicationRecord).SubObjectRecords.Storage.ArrayMax = 0;
  TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
  ::SetCapacity(this_02,0x80);
  (this->ReplicationRecord).FrontIndex = 0;
  (this->ReplicatedObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicatedObjects).ArrayNum = 0;
  (this->ReplicatedObjects).ArrayMax = 0;
  (this->ReplicatedObjectsRecordInfoLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicatedObjectsRecordInfoLists).ArrayNum = 0;
  (this->ReplicatedObjectsRecordInfoLists).ArrayMax = 0;
  (this->SchedulingPriorities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SchedulingPriorities).ArrayNum = 0;
  (this->SchedulingPriorities).ArrayMax = 0;
  (this->ObjectsPendingDestroy).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectsPendingDestroy).Storage.ArrayNum = 0;
  (this->ObjectsPendingDestroy).Storage.ArrayMax = 0;
  (this->ObjectsPendingDestroy).BitCount = 0;
  (this->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectsWithDirtyChanges).Storage.ArrayNum = 0;
  (this->ObjectsWithDirtyChanges).Storage.ArrayMax = 0;
  (this->ObjectsWithDirtyChanges).BitCount = 0;
  (this->ObjectsInScope).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectsInScope).Storage.ArrayNum = 0;
  (this->ObjectsInScope).Storage.ArrayMax = 0;
  (this->ObjectsInScope).BitCount = 0;
  *(undefined8 *)&(this->Attachments).ObjectToQueue = 0;
  *(undefined8 *)&(this->Attachments).ObjectToQueue.field_0x8 = 0;
  *(undefined8 *)&(this->Attachments).ObjectToQueue.field_0x20 = 0;
  *(undefined4 *)&(this->Attachments).ObjectToQueue.field_0x28 = 0;
  *(undefined4 *)&(this->Attachments).ObjectToQueue.field_0x2c = 0x80;
  *(undefined4 *)&(this->Attachments).ObjectToQueue.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Attachments).ObjectToQueue.field_0x34 = 0;
  *(undefined8 *)&(this->Attachments).ObjectToQueue.field_0x40 = 0;
  *(undefined4 *)&(this->Attachments).ObjectToQueue.field_0x48 = 0;
  (this->Attachments).SpecialQueues[0].Ptr = (FNetObjectAttachmentSendQueue *)0x0;
  (this->Attachments).SpecialQueues[1].Ptr = (FNetObjectAttachmentSendQueue *)0x0;
  (this->Attachments).SpecialQueues[2].Ptr = (FNetObjectAttachmentSendQueue *)0x0;
  this->ReplicationSystemInternal = (FReplicationSystemInternal *)0x0;
  this->NetRefHandleManager = (FNetRefHandleManager *)0x0;
  this->ReplicationBridge = (UObjectReplicationBridge *)0x0;
  this->BaselineManager = (FDeltaCompressionBaselineManager *)0x0;
  this->ObjectReferenceCache = (FObjectReferenceCache *)0x0;
  this->ReplicationFiltering = (FReplicationFiltering *)0x0;
  this->ReplicationConditionals = (FReplicationConditionals *)0x0;
  this->PartialNetObjectAttachmentHandler = (UPartialNetObjectAttachmentHandler *)0x0;
  this->NetObjectBlobHandler = (UNetObjectBlobHandler *)0x0;
  this->NetExports = (FNetExports *)0x0;
  this->NetTypeStats = (FNetTypeStats *)0x0;
  (this->WriteContext).ObjectsWrittenThisPacket.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WriteContext).ObjectsWrittenThisPacket.Storage.ArrayNum = 0;
  (this->WriteContext).ObjectsWrittenThisPacket.Storage.ArrayMax = 0;
  (this->WriteContext).ObjectsWrittenThisPacket.BitCount = 0;
  (this->WriteContext).DependentObjectsPendingSend.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->WriteContext).DependentObjectsPendingSend.ArrayNum = 0;
  (this->WriteContext).DependentObjectsPendingSend.ArrayMax = 0x20;
  (this->WriteContext).bIsValid = 0;
  (this->WriteContext).NumWrittenPacketsInThisBatch = 0;
  (this->WriteContext).MaxPacketsToSend = 1;
  (this->WriteContext).WriteMode = Full;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->WriteContext).Stats,4000);
  (this->WriteContext).Stats.Stats.HugeObjectWaitingForAckTimeInSeconds = 0.0;
  (this->WriteContext).Stats.Stats.HugeObjectStallingTimeInSeconds = 0.0;
  (this->WriteContext).Stats.Stats.ScheduledForReplicationRootObjectCount = 0;
  (this->WriteContext).Stats.Stats.ReplicatedRootObjectCount = 0;
  (this->WriteContext).Stats.Stats.ReplicatedObjectCount = 0;
  (this->WriteContext).Stats.Stats.ReplicatedDestructionInfoCount = 0;
  (this->WriteContext).Stats.Stats.DeltaCompressedObjectCount = 0;
  (this->WriteContext).Stats.Stats.ReplicatedObjectStatesMaskedOut = 0;
  (this->WriteContext).Stats.Stats.ActiveHugeObjectCount = 0;
  (this->WriteContext).Stats.Stats.HugeObjectsWaitingForAckCount = 0;
  (this->WriteContext).Stats.Stats.HugeObjectsStallingCount = 0;
  (this->WriteContext).Stats.Stats.ReplicatingConnectionCount = 0;
  (this->HugeObjectSendQueue).Stats.StartSendingTime = 0;
  (this->HugeObjectSendQueue).Stats.EndSendingTime = 0;
  (this->HugeObjectSendQueue).Stats.StartStallTime = 0;
  (this->HugeObjectSendQueue).TraceCollector = (FNetTraceCollector *)0x0;
  pFVar3 = CreatePersistentNetDebugName(L"HugeObjectState",0x10);
  (this->HugeObjectSendQueue).DebugName = pFVar3;
  *(undefined8 *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements = 0;
  *(undefined8 *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x34 = 0;
  (this->HugeObjectSendQueue).RootObjectsInTransit.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->HugeObjectSendQueue).RootObjectsInTransit.HashSize = 0;
  (this->HugeObjectSendQueue).SendContexts._padding_ =
       (longlong)
       &___7__TDoubleLinkedList_UFHugeObjectContext_FReplicationWriter_Private_Net_UE____6B_;
  (this->HugeObjectSendQueue).SendContexts.HeadNode = (TDoubleLinkedListNode *)0x0;
  (this->HugeObjectSendQueue).SendContexts.TailNode = (TDoubleLinkedListNode *)0x0;
  (this->HugeObjectSendQueue).SendContexts.ListSize = 0;
  uVar2 = FNetTrace::TraceName(((this->HugeObjectSendQueue).DebugName)->Name);
  ((this->HugeObjectSendQueue).DebugName)->DebugNameId = uVar2;
  this->StreamDebugFeatures = None;
  this->bReplicationEnabled = false;
  this->bHighPrioCreate = false;
  *(undefined8 *)&this->CannotSendInfos = 0;
  *(undefined8 *)&(this->CannotSendInfos).field_0x8 = 0;
  *(undefined8 *)&(this->CannotSendInfos).field_0x20 = 0;
  *(undefined4 *)&(this->CannotSendInfos).field_0x28 = 0;
  *(undefined4 *)&(this->CannotSendInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->CannotSendInfos).field_0x34 = 0;
  *(undefined4 *)&(this->CannotSendInfos).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CannotSendInfos).field_0x40 = 0;
  *(undefined4 *)&(this->CannotSendInfos).field_0x48 = 0;
  return this;
}

// ~FReplicationWriter @ 1442f9030

void __thiscall UE::Net::Private::FReplicationWriter::~FReplicationWriter(FReplicationWriter *this)

{
  TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  TArray<UE::Net::Private::FReplicationWriter::FReplicationInfo,TSizedDefaultAllocator<32>_> *pTVar4
  ;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this_00;
  ushort uVar5;
  int iVar6;
  TDoubleLinkedListNode *pTVar7;
  FNetRefHandleManager *pFVar8;
  void *pvVar9;
  ForElementType<FSetElementId> FVar10;
  ForElementType<unsigned_int> FVar11;
  code *pcVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  ushort *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  <lambda_1> local_res8;
  FReplicationWriter *local_res10;
  TReplicationRecordHelper local_58;
  
  pTVar1 = &(this->ReplicationRecord).Record;
  pTVar4 = &this->ReplicatedObjects;
  local_58.ReplicationInfosRecordInfoLists = &this->ReplicatedObjectsRecordInfoLists;
  local_58.ReplicationRecord = &this->ReplicationRecord;
  uVar14 = (this->ReplicationRecord).Record.Head - (this->ReplicationRecord).Record.Tail;
  local_58.ReplicationInfos = pTVar4;
  if (uVar14 != 0) {
    uVar17 = (ulonglong)uVar14;
    do {
      if ((pTVar1->Head == (this->ReplicationRecord).Record.Tail) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Record.Count()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationRecord.h"
                              ,0xc5,L""), bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((pTVar1->Head == (this->ReplicationRecord).Record.Tail) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset < Count()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                              ,0x4c,L""), bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar14 = (this->ReplicationRecord).Record.Tail;
      uVar5 = *(ushort *)
               ((this->ReplicationRecord).Record.Storage.AllocatorInstance.Data +
               (ulonglong)((this->ReplicationRecord).Record.IndexMask & uVar14) * 2);
      if (pTVar1->Head == uVar14) {
        bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_1638566698149740322>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                            ,0xde,"Count() > 0");
        if (bVar13) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      else {
        (this->ReplicationRecord).Record.Tail = uVar14 + 1;
      }
      if (uVar5 != 0) {
        local_res8.__this = this;
        TReplicationRecordHelper::
        Process<_UE::Net::Private::FReplicationWriter::DiscardAllRecords_::__l7::<lambda_1>_>
                  (&local_58,(uint)uVar5,&local_res8);
      }
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  local_res10 = this;
  for (pTVar7 = (this->HugeObjectSendQueue).SendContexts.HeadNode;
      pTVar7 != (TDoubleLinkedListNode *)0x0; pTVar7 = pTVar7->NextNode) {
    `UE::Net::Private::FReplicationWriter::FreeHugeObjectSendQueue'::__l2::<lambda_1>::operator()
              (&local_res10,&pTVar7->Value);
  }
  TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext>::Empty
            (&(this->HugeObjectSendQueue).SendContexts);
  this_00 = &(this->HugeObjectSendQueue).RootObjectsInTransit;
  bVar13 = 1 < (this->HugeObjectSendQueue).RootObjectsInTransit.HashSize;
  if (!bVar13) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements(this_00)
    ;
  }
  puVar2 = &(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0xc;
  *(undefined4 *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x34 = 0;
  iVar6 = *(int *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x2c;
  *(undefined4 *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x28 = 0;
  if ((iVar6 < 0) || (0x80 < iVar6)) {
    *(undefined4 *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x10,0);
  }
  if (bVar13) {
    (this->HugeObjectSendQueue).RootObjectsInTransit.HashSize = 1;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  iVar6 = (this->ReplicatedObjects).ArrayNum;
  if (iVar6 != 0) {
    if ((iVar6 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar14 = 0;
    pFVar3 = (pTVar4->AllocatorInstance).Data + 8;
    *(ulonglong *)pFVar3 = *(ulonglong *)pFVar3 & 0xffffffffffe0ffff;
    lVar19 = (longlong)(this->ReplicatedObjects).ArrayNum;
    if (0 < lVar19) {
      lVar18 = 0;
      do {
        uVar15 = 0;
        if ((int)uVar14 < (this->ReplicatedObjects).ArrayNum) {
          uVar15 = ~uVar14 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar3 = (this->ReplicatedObjects).AllocatorInstance.Data;
        uVar17 = *(ulonglong *)(pFVar3 + lVar18 + 8);
        if ((uVar17 >> 0x10 & 0x1f) != 0) {
          if (0x40 < (ushort)uVar17) {
            FGlobalChangeMaskAllocator::Free
                      (&s_DefaultChangeMaskAllocator,*(void **)(pFVar3 + lVar18));
          }
          pFVar8 = this->NetRefHandleManager;
          puVar16 = TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_>::operator[]
                              ((TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_> *)
                               &pFVar8->ReplicatedObjectRefCount,uVar14);
          if ((*puVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ReplicatedObjectRefCount[InternalIndex] > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                                  ,0x137,L""), bVar13)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          puVar16 = TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_>::operator[]
                              ((TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_> *)
                               &pFVar8->ReplicatedObjectRefCount,uVar14);
          *puVar16 = *puVar16 - 1;
        }
        uVar14 = uVar14 + 1;
        lVar18 = lVar18 + 0x10;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
  }
  *(undefined4 *)&(this->CannotSendInfos).field_0x48 = 0;
  pvVar9 = *(void **)&(this->CannotSendInfos).field_0x40;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CannotSendInfos);
  FNetTrace::DestroyTraceCollector((this->HugeObjectSendQueue).TraceCollector);
  (this->HugeObjectSendQueue).SendContexts._padding_ =
       (longlong)
       &___7__TDoubleLinkedList_UFHugeObjectContext_FReplicationWriter_Private_Net_UE____6B_;
  (this->HugeObjectSendQueue).TraceCollector = (FNetTraceCollector *)0x0;
  TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext>::Empty
            (&(this->HugeObjectSendQueue).SendContexts);
  (this->HugeObjectSendQueue).RootObjectsInTransit.HashSize = 0;
  FVar10 = (this->HugeObjectSendQueue).RootObjectsInTransit.Hash.SecondaryData;
  if (FVar10 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this_00->Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->WriteContext).Stats);
  FVar11 = (this->WriteContext).DependentObjectsPendingSend.AllocatorInstance.SecondaryData;
  if (FVar11 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  pFVar3 = (this->WriteContext).ObjectsWrittenThisPacket.Storage.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FNetObjectAttachmentsWriter::~FNetObjectAttachmentsWriter(&this->Attachments);
  pFVar3 = (this->ObjectsInScope).Storage.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ObjectsPendingDestroy).Storage.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SchedulingPriorities).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ReplicatedObjectsRecordInfoLists).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ReplicatedObjects).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
  ::
  ~TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
            (&(this->ReplicationRecord).SubObjectRecords);
  TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_>::
  ~TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_>
            (&(this->ReplicationRecord).AttachmentRecords);
  TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_>::
  ~TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_>
            (&(this->ReplicationRecord).Record);
  TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
  ::
  ~TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
            (&(this->ReplicationRecord).RecordInfos);
  return;
}

// operator() @ 1442f9690

void __thiscall
`UE::Net::Private::FReplicationWriter::FreeHugeObjectSendQueue'::__l2::<lambda_1>::operator()
          (void *this,FHugeObjectContext *param_1)

{
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> FVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> FVar6;
  uint uVar7;
  undefined1 local_res10 [8];
  
  FVar6 = (param_1->BatchRecord).ObjectReplicationRecords.AllocatorInstance.SecondaryData;
  iVar2 = (param_1->BatchRecord).ObjectReplicationRecords.ArrayNum;
  if (FVar6 == (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0) {
    FVar6 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
            &param_1->BatchRecord;
  }
  FVar1 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
          ((longlong)FVar6 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((param_1->BatchRecord).ObjectReplicationRecords.ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationWriter::FObjectRecord_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar6 == FVar1) break;
    lVar3 = *(longlong *)this;
    uVar7 = *(uint *)((longlong)FVar6 + 8) & 0xfffff;
    if (*(int *)(lVar3 + 0xc0) <= (int)uVar7) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (((*(uint *)((longlong)FVar6 + 8) & 0x2000000) != 0) &&
       (0x40 < *(ushort *)(*(longlong *)(lVar3 + 0xb8) + 8 + (ulonglong)uVar7 * 0x10))) {
      UE::Net::Private::FGlobalChangeMaskAllocator::Free
                (&UE::Net::Private::s_DefaultChangeMaskAllocator,*(void **)FVar6);
    }
    FVar6 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
            ((longlong)FVar6 + 0x18);
  }
  return;
}

// operator() @ 1442f9790

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
`UE::Net::Private::FReplicationWriter::UpdateScope'::__l2::<lambda_1>::operator()
          (void *this,uint param_1)

{
  FReplicationInfo_u_8 *pFVar1;
  code *pcVar2;
  bool bVar3;
  FReplicationInfo *pFVar4;
  FNetBitArrayView *pFVar5;
  ulonglong uVar6;
  FReplicatedObjectData *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  byte local_res8 [8];
  uint local_res10 [2];
  FReplicatedObjectData *local_res18;
  uint *local_a8;
  byte *local_a0;
  uint *local_98;
  byte *local_90;
  FReplicatedObjectData *local_88;
  longlong local_80;
  TArrayView<unsigned_int_const_,int> local_78;
  FNetBitArrayView local_68;
  FNetBitArrayView local_58;
  FNetBitArrayView local_48;
  
  local_res10[0] = param_1;
  pFVar4 = UE::Net::Private::FReplicationWriter::GetReplicationInfo
                     (*(FReplicationWriter **)this,param_1);
  local_res8[0] = (byte)(*(uint *)&pFVar4->field1_0x8 >> 0x10) & 0x1f;
  pFVar1 = &pFVar4->field1_0x8;
  if ((*(uint *)&pFVar4->field1_0x8 & 0x1f0000) == 0) {
    UE::Net::Private::FReplicationWriter::StartReplication
              (*(FReplicationWriter **)this,local_res10[0]);
    return;
  }
  if (local_res8[0] == 6) {
    UE::Net::FNetBitArray::ClearBit((FNetBitArray *)(*(longlong *)this + 0xe8),local_res10[0]);
    pFVar1->Value = pFVar1->Value & 0xffffffd7ffffffff | 0x1000000000;
    UE::Net::Private::FReplicationWriter::SetState
              (*(FReplicationWriter **)this,local_res10[0],Created);
    pFVar1->Value = pFVar1->Value & 0xffffffffdfffffff;
    if (0x40 < (pFVar1->_s_1).ChangeMaskBitCount) {
      pFVar4 = (FReplicationInfo *)(pFVar4->ChangeMaskOrPtr).ChangeMaskOrPointer;
    }
    pFVar5 = UE::Net::FNetBitArrayView::FNetBitArrayView
                       (&local_68,(uint *)pFVar4,(uint)(pFVar1->_s_1).ChangeMaskBitCount);
    uVar6 = 0;
    if (pFVar5->WordCount != 0) {
      do {
        if (pFVar5->Storage[uVar6] != 0) goto LAB_1442f9923;
        uVar8 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar8;
      } while (uVar8 < pFVar5->WordCount);
    }
  }
  else {
    if (local_res8[0] != 4) {
      if ((local_res8[0] - 9 & 0xfd) == 0) {
        UE::Net::FNetBitArray::ClearBit((FNetBitArray *)(*(longlong *)this + 0xe8),local_res10[0]);
        UE::Net::Private::FReplicationWriter::SetState
                  (*(FReplicationWriter **)this,local_res10[0],CancelPendingDestroy);
        return;
      }
      if ((local_res8[0] != 8) && (local_res8[0] != 10)) {
        bVar3 = UE::Net::FNetBitArray::GetBit
                          ((FNetBitArray *)(*(longlong *)this + 0x100),local_res10[0]);
        if (bVar3) {
          local_a8 = local_res10;
          local_a0 = local_res8;
          ``UE::Net::Private::FReplicationWriter::UpdateScope'::__l2::<lambda_1>::operator()'::__l43
          ::<lambda_3>::operator()(&local_a8);
        }
        if ((*(uint *)pFVar1 >> 0x17 & 1) == 0) {
          return;
        }
        local_98 = local_res10;
        local_90 = local_res8;
        ``UE::Net::Private::FReplicationWriter::UpdateScope'::__l2::<lambda_1>::operator()'::__l43::
        <lambda_4>::operator()(&local_98);
        return;
      }
      UE::Net::Private::FReplicationWriter::SetState
                (*(FReplicationWriter **)this,local_res10[0],WaitOnDestroyConfirmation);
      UE::Net::Private::FReplicationWriter::SetState
                (*(FReplicationWriter **)this,local_res10[0],CancelPendingDestroy);
      UE::Net::Private::FReplicationWriter::SetState
                (*(FReplicationWriter **)this,local_res10[0],
                 (EReplicatedObjectState)((uint)*(undefined4 *)pFVar1 >> 0x1b) &
                 AttachmentToObjectNotInScope | WaitOnCreateConfirmation);
      pFVar1->Value = pFVar1->Value & 0xffffffffdfffffff;
      if (0x40 < (pFVar1->_s_1).ChangeMaskBitCount) {
        pFVar4 = (FReplicationInfo *)(pFVar4->ChangeMaskOrPtr).ChangeMaskOrPointer;
      }
      pFVar5 = UE::Net::FNetBitArrayView::FNetBitArrayView
                         (&local_48,(uint *)pFVar4,(uint)(pFVar1->_s_1).ChangeMaskBitCount);
      uVar6 = 0;
      if (pFVar5->WordCount != 0) {
        uVar9 = uVar6;
        do {
          if (pFVar5->Storage[uVar9] != 0) {
            uVar6 = 0x800000;
            break;
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 < pFVar5->WordCount);
      }
      uVar6 = pFVar1->Value | uVar6;
      uVar6 = (pFVar1->Value ^ uVar6) & 0xffffffffff7fffff ^ uVar6;
      pFVar1->Value = uVar6;
      UE::Net::FNetBitArray::SetBitValue
                ((FNetBitArray *)(*(longlong *)this + 0x100),local_res10[0],
                 (bool)((byte)(uVar6 >> 0x17) & 1));
      UE::Net::FNetBitArray::ClearBit((FNetBitArray *)(*(longlong *)this + 0xe8),local_res10[0]);
      if (local_res8[0] == 8) {
        pFVar7 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                           (*(FNetRefHandleManager **)(*(longlong *)this + 0x1a0),local_res10[0]);
        lVar11 = *(longlong *)this;
        uVar8 = pFVar7->SubObjectRootIndex;
        uVar10 = 0;
        if ((int)uVar8 < *(int *)(lVar11 + 0xc0)) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar11 = (longlong)(int)uVar8 * 0x10 + *(longlong *)(lVar11 + 0xb8);
        if (9 < ((byte)(*(uint *)(lVar11 + 8) >> 0x10) & 0x1f)) {
          return;
        }
        if ((UE::Net::Private::bValidateObjectsWithDirtyChanges != false) &&
           ((*(uint *)(lVar11 + 8) & 0x1f0000) == 0)) {
          local_res18 = pFVar7;
          ``UE::Net::Private::FReplicationWriter::UpdateScope'::__l2::<lambda_1>::operator()'::__l27
          ::<lambda_1>::operator()(&local_res18);
        }
        if ((*(uint *)(lVar11 + 8) >> 0x1c & 1) != 0) {
          local_88 = pFVar7;
          local_80 = lVar11;
          ``UE::Net::Private::FReplicationWriter::UpdateScope'::__l2::<lambda_1>::operator()'::__l27
          ::<lambda_2>::operator()(&local_88);
        }
        uVar6 = pFVar1->Value >> 2 | *(ulonglong *)(lVar11 + 8);
        *(ulonglong *)(lVar11 + 8) =
             (uVar6 ^ *(ulonglong *)(lVar11 + 8)) & 0xffffffffffdfffff ^ uVar6;
        lVar11 = *(longlong *)this;
        bVar3 = UE::Net::FNetBitArray::GetBit
                          ((FNetBitArray *)(lVar11 + 0x100),pFVar7->SubObjectRootIndex);
        if ((bVar3) || ((*(uint *)pFVar1 & 0x800000) != 0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        UE::Net::FNetBitArray::SetBitValue
                  ((FNetBitArray *)(lVar11 + 0x100),pFVar7->SubObjectRootIndex,bVar3);
        return;
      }
      if ((*(uint *)pFVar1 >> 0x16 & 1) != 0) {
        return;
      }
      bVar3 = false;
      UE::Net::Private::FNetRefHandleManager::GetSubObjects
                (*(FNetRefHandleManager **)(*(longlong *)this + 0x1a0),&local_78,local_res10[0]);
      puVar12 = local_78.DataPtr;
      if (local_78.DataPtr == local_78.DataPtr + local_78.ArrayNum) {
        return;
      }
      do {
        uVar8 = *puVar12;
        pFVar4 = UE::Net::Private::FReplicationWriter::GetReplicationInfo
                           (*(FReplicationWriter **)this,uVar8);
        if (((byte)((uint)*(undefined4 *)&pFVar4->field1_0x8 >> 0x10) & 0x1f) == 10) {
          UE::Net::Private::FReplicationWriter::SetState
                    (*(FReplicationWriter **)this,uVar8,SubObjectPendingDestroy);
          (pFVar4->field1_0x8).Value = (pFVar4->field1_0x8).Value | 0x20000000;
          lVar11 = *(longlong *)(*(longlong *)this + 0x100);
          if ((*(uint *)(*(longlong *)this + 0x110) <= uVar8) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < BitCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x2a2,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          bVar3 = true;
          *(uint *)(lVar11 + (ulonglong)(uVar8 >> 5) * 4) =
               *(uint *)(lVar11 + (ulonglong)(uVar8 >> 5) * 4) | 1 << (uVar8 & 0x1f);
        }
        puVar12 = puVar12 + 1;
        if (puVar12 == local_78.DataPtr + local_78.ArrayNum) {
          if (!bVar3) {
            return;
          }
          UE::Net::FNetBitArray::SetBit((FNetBitArray *)(*(longlong *)this + 0x100),local_res10[0]);
          pFVar1->Value = pFVar1->Value | 0x200000;
          return;
        }
      } while( true );
    }
    UE::Net::FNetBitArray::ClearBit((FNetBitArray *)(*(longlong *)this + 0xe8),local_res10[0]);
    uVar8 = (uint)pFVar1->Value & 0xffff;
    pFVar1->Value = pFVar1->Value & 0xffffffd7dfffffff | 0x1000000000;
    if (0x40 < uVar8) {
      pFVar4 = (FReplicationInfo *)(pFVar4->ChangeMaskOrPtr).ChangeMaskOrPointer;
    }
    pFVar5 = UE::Net::FNetBitArrayView::FNetBitArrayView(&local_58,(uint *)pFVar4,uVar8);
    uVar6 = 0;
    if (pFVar5->WordCount != 0) {
      do {
        if (pFVar5->Storage[uVar6] != 0) goto LAB_1442f9923;
        uVar8 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar8;
      } while (uVar8 < pFVar5->WordCount);
    }
  }
  uVar6 = 0;
LAB_1442f9875:
  uVar6 = pFVar1->Value | uVar6;
  uVar6 = (pFVar1->Value ^ uVar6) & 0xffffffffff7fffff ^ uVar6;
  pFVar1->Value = uVar6;
  UE::Net::FNetBitArray::SetBitValue
            ((FNetBitArray *)(*(longlong *)this + 0x100),local_res10[0],
             (bool)((byte)(uVar6 >> 0x17) & 1));
  return;
LAB_1442f9923:
  uVar6 = 0x800000;
  goto LAB_1442f9875;
}

// operator() @ 1442f9cf0

void __thiscall
`UE::Net::Private::FReplicationWriter::HandleDiscardedRecord'::__l6::<lambda_1>::operator()
          (void *this,FHugeObjectContext *param_1)

{
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> FVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> FVar7;
  uint uVar8;
  FReplicationInfo *pFVar9;
  undefined1 local_res8 [8];
  
  UE::Net::Private::FReplicationWriter::GetReplicationInfo
            (*(FReplicationWriter **)this,param_1->RootObjectInternalIndex);
  FVar7 = (param_1->BatchRecord).ObjectReplicationRecords.AllocatorInstance.SecondaryData;
  iVar3 = (param_1->BatchRecord).ObjectReplicationRecords.ArrayNum;
  if (FVar7 == (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0) {
    FVar7 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
            &param_1->BatchRecord;
  }
  FVar1 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
          ((longlong)FVar7 + (longlong)iVar3 * 0x18);
  while( true ) {
    if ((param_1->BatchRecord).ObjectReplicationRecords.ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationWriter::FObjectRecord_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar7 == FVar1) break;
    lVar4 = *(longlong *)this;
    uVar8 = *(uint *)((longlong)FVar7 + 8) & 0xfffff;
    if (*(int *)(lVar4 + 0xc0) <= (int)uVar8) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar9 = (FReplicationInfo *)((ulonglong)uVar8 * 0x10 + *(longlong *)(lVar4 + 0xb8));
    uVar2 = (pFVar9->field1_0x8)._s_1.ChangeMaskBitCount;
    UE::Net::Private::FReplicationWriter::HandleDiscardedRecord
              (*(FReplicationWriter **)this,(FRecordInfo *)FVar7,pFVar9,
               (FReplicationRecord *)((longlong)FVar7 + 0x10));
    if (((*(uint *)((longlong)FVar7 + 8) & 0x2000000) != 0) && (0x40 < uVar2)) {
      UE::Net::Private::FGlobalChangeMaskAllocator::Free
                (&UE::Net::Private::s_DefaultChangeMaskAllocator,*(void **)FVar7);
    }
    FVar7 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
            ((longlong)FVar7 + 0x18);
  }
  return;
}

// operator() @ 1442f9e10

void __thiscall
`UE::Net::Private::FReplicationWriter::HandleDeliveredRecord'::__l80::<lambda_1>::operator()
          (void *this,FHugeObjectContext *param_1)

{
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> FVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> FVar7;
  uint uVar8;
  FReplicationInfo *pFVar9;
  undefined1 local_res8 [8];
  
  UE::Net::Private::FReplicationWriter::GetReplicationInfo
            (*(FReplicationWriter **)this,param_1->RootObjectInternalIndex);
  FVar7 = (param_1->BatchRecord).ObjectReplicationRecords.AllocatorInstance.SecondaryData;
  iVar3 = (param_1->BatchRecord).ObjectReplicationRecords.ArrayNum;
  if (FVar7 == (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0) {
    FVar7 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
            &param_1->BatchRecord;
  }
  FVar1 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
          ((longlong)FVar7 + (longlong)iVar3 * 0x18);
  while( true ) {
    if ((param_1->BatchRecord).ObjectReplicationRecords.ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationWriter::FObjectRecord_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar7 == FVar1) break;
    lVar4 = *(longlong *)this;
    uVar8 = *(uint *)((longlong)FVar7 + 8) & 0xfffff;
    if (*(int *)(lVar4 + 0xc0) <= (int)uVar8) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar9 = (FReplicationInfo *)((ulonglong)uVar8 * 0x10 + *(longlong *)(lVar4 + 0xb8));
    uVar2 = (pFVar9->field1_0x8)._s_1.ChangeMaskBitCount;
    UE::Net::Private::FReplicationWriter::HandleDeliveredRecord
              (*(FReplicationWriter **)this,(FRecordInfo *)FVar7,pFVar9,
               (FReplicationRecord *)((longlong)FVar7 + 0x10));
    if (((*(uint *)((longlong)FVar7 + 8) & 0x2000000) != 0) && (0x40 < uVar2)) {
      UE::Net::Private::FGlobalChangeMaskAllocator::Free
                (&UE::Net::Private::s_DefaultChangeMaskAllocator,*(void **)FVar7);
    }
    FVar7 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
            ((longlong)FVar7 + 0x18);
  }
  UE::Net::Private::FNetExports::AcknowledgeBatchExports
            (*(FNetExports **)(*(longlong *)this + 0x1e0),&param_1->BatchExports);
  return;
}

// operator() @ 1442f9f50

bool __thiscall
`UE::Net::Private::FReplicationWriter::WriteRootObjectsPendingDestroy'::__l31::<lambda_3>::
operator()(void *this)

{
  longlong lVar1;
  ulong64 uVar2;
  code *pcVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  FReplicationInfo *pFVar18;
  FNetBitArrayView local_60 [2];
  
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (local_60,*(uint **)(*(longlong *)(*(longlong *)this + 0x1a0) + 0x168),
             *(uint *)(*(longlong *)(*(longlong *)this + 0x1a0) + 0x178));
  uVar5 = local_60[0].BitCount;
  puVar4 = local_60[0].Storage;
  iVar14 = 0;
  uVar16 = local_60[0].BitCount + 0x1f >> 5;
  uVar13 = uVar5;
  if (local_60[0].Storage == (uint *)0x0) {
    if (local_60[0].BitCount != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData != nullptr || InBitCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x6b9,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      goto LAB_1442f9fca;
    }
LAB_1442f9fda:
    uVar15 = 0;
    iVar14 = 0;
  }
  else {
LAB_1442f9fca:
    if (uVar5 == 0) goto LAB_1442f9fda;
    uVar17 = *puVar4;
    uVar15 = 0;
    if (uVar17 != 0) goto LAB_1442f9ff1;
  }
  do {
    uVar17 = 0;
    uVar9 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar9;
    if (uVar16 <= uVar9) goto LAB_1442fa01c;
    uVar17 = puVar4[uVar15];
    iVar14 = iVar14 + 0x20;
  } while (uVar17 == 0);
LAB_1442f9ff1:
  iVar12 = 0;
  if (uVar17 != 0) {
    for (; (uVar17 >> iVar12 & 1) == 0; iVar12 = iVar12 + 1) {
    }
  }
  iVar10 = 0x20;
  if (uVar17 != 0) {
    iVar10 = iVar12;
  }
  if ((uint)(iVar10 + iVar14) < uVar5) {
    uVar13 = iVar10 + iVar14;
  }
  uVar17 = uVar17 & uVar17 - 1;
LAB_1442fa01c:
  uVar15 = (ulonglong)uVar13;
  if (((local_60[0].Storage == (uint *)0x0) && (local_60[0].BitCount != 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData != nullptr || InBitCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x6b9,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  uVar8 = (ulonglong)(local_60[0].BitCount >> 5);
  uVar13 = local_60[0].BitCount;
  do {
    uVar11 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar11;
    uVar9 = local_60[0].BitCount;
    if (local_60[0].BitCount + 0x1f >> 5 <= uVar11) goto LAB_1442fa098;
    uVar11 = local_60[0].Storage[uVar8];
    uVar13 = uVar13 + 0x20;
  } while (uVar11 == 0);
  iVar14 = 0;
  if (uVar11 != 0) {
    for (; (uVar11 >> iVar14 & 1) == 0; iVar14 = iVar14 + 1) {
    }
  }
  iVar12 = 0x20;
  if (uVar11 != 0) {
    iVar12 = iVar14;
  }
  uVar13 = iVar12 + (uVar13 & 0xffffffe0);
  if (uVar13 < local_60[0].BitCount) {
    uVar9 = uVar13;
  }
LAB_1442fa098:
  do {
    uVar13 = (uint)uVar15;
    if ((puVar4 != local_60[0].Storage) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("this->Data == It.Data",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x6cb,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    if (uVar13 == uVar9) {
      return true;
    }
    lVar1 = *(longlong *)this;
    uVar11 = 0;
    if ((int)uVar13 < *(int *)(lVar1 + 0xc0)) {
      uVar11 = ~uVar13 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    pFVar18 = (FReplicationInfo *)((longlong)(int)uVar13 * 0x10 + *(longlong *)(lVar1 + 0xb8));
    uVar2 = (pFVar18->field1_0x8).Value;
    if (((byte)(uVar2 >> 0x10) & 0x1f) == 6) {
      uVar11 = UE::Net::Private::FReplicationWriter::GetFlushStatus
                         (*(FReplicationWriter **)this,uVar13,pFVar18,(uint)(uVar2 >> 0x23) & 7);
      if (uVar11 != 0) {
        return false;
      }
      UE::Net::Private::FReplicationWriter::SetState
                (*(FReplicationWriter **)this,uVar13,PendingTearOff);
      lVar1 = *(longlong *)(*(longlong *)this + 0x100);
      if ((*(uint *)(*(longlong *)this + 0x110) <= uVar13) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2a2,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      *(uint *)(lVar1 + (uVar15 >> 5) * 4) =
           *(uint *)(lVar1 + (uVar15 >> 5) * 4) | 1 << (uVar13 & 0x1f);
    }
    uVar8 = uVar15 >> 5;
    while (uVar17 == 0) {
      uVar13 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar13;
      if (uVar16 <= uVar13) {
        uVar15 = (ulonglong)uVar5;
        goto LAB_1442fa098;
      }
      uVar13 = (int)uVar15 + 0x20;
      uVar15 = (ulonglong)uVar13;
      uVar17 = puVar4[uVar8];
    }
    iVar14 = 0;
    if (uVar17 != 0) {
      for (; (uVar17 >> iVar14 & 1) == 0; iVar14 = iVar14 + 1) {
      }
    }
    iVar12 = 0x20;
    if (uVar17 != 0) {
      iVar12 = iVar14;
    }
    uVar13 = iVar12 + (uVar13 & 0xffffffe0);
    uVar11 = uVar5;
    if (uVar13 < uVar5) {
      uVar11 = uVar13;
    }
    uVar15 = (ulonglong)uVar11;
    uVar17 = uVar17 & uVar17 - 1;
  } while( true );
}

// ApplyFilterToChangeMask @ 1442fb650

void __thiscall
UE::Net::Private::FReplicationWriter::ApplyFilterToChangeMask
          (FReplicationWriter *this,uint param_1,uint param_2,FReplicationInfo *param_3,
          FReplicationProtocol *param_4,uchar *param_5,bool param_6)

{
  FReplicationInfo_u_8 *pFVar1;
  bool bVar2;
  uint uVar3;
  FReplicationInfo *pFVar4;
  uint *puVar5;
  uint *puVar6;
  FNetBitArrayView local_18;
  
  puVar6 = (uint *)0x0;
  puVar5 = puVar6;
  if ((param_4->ProtocolTraits & HasConditionalChangeMask) != None) {
    puVar5 = (uint *)(param_5 + param_4->InternalChangeMasksOffset);
  }
  pFVar1 = &param_3->field1_0x8;
  pFVar4 = param_3;
  if (0x40 < (param_3->field1_0x8)._s_1.ChangeMaskBitCount) {
    pFVar4 = (FReplicationInfo *)(param_3->ChangeMaskOrPtr).ChangeMaskOrPointer;
  }
  bVar2 = FReplicationConditionals::ApplyConditionalsToChangeMask
                    (this->ReplicationConditionals,(this->Parameters).ConnectionId,param_6,param_1,
                     param_2,(uint *)pFVar4,puVar5,param_4);
  if (bVar2) {
    if (0x40 < (*(uint *)pFVar1 & 0xffff)) {
      param_3 = (FReplicationInfo *)(param_3->ChangeMaskOrPtr).ChangeMaskOrPointer;
    }
    FNetBitArrayView::FNetBitArrayView(&local_18,(uint *)param_3,*(uint *)pFVar1 & 0xffff);
    puVar5 = puVar6;
    if (local_18.WordCount != 0) {
      do {
        if (local_18.Storage[(longlong)puVar5] != 0) {
          puVar6 = (uint *)0x800000;
          break;
        }
        uVar3 = (int)puVar5 + 1;
        puVar5 = (uint *)(ulonglong)uVar3;
      } while (uVar3 < local_18.WordCount);
    }
    pFVar1->Value = pFVar1->Value & 0xffffffffff7fffff;
    pFVar1->Value = pFVar1->Value | (ulonglong)puVar6;
  }
  return;
}

// AreAllReliableAttachmentsSentAndAcked @ 1442fb730

bool __thiscall
UE::Net::Private::FReplicationWriter::AreAllReliableAttachmentsSentAndAcked
          (FReplicationWriter *this)

{
  bool bVar1;
  
  bVar1 = FNetBlobManager::HasAnyUnprocessedReliableAttachments
                    (&this->ReplicationSystemInternal->NetBlobManager);
  if (!bVar1) {
    bVar1 = FNetObjectAttachmentsWriter::AreAllObjectsReliableSentAndAcked(&this->Attachments);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// BeginWrite @ 1442fb780

EWriteResult __thiscall
UE::Net::Private::FReplicationWriter::BeginWrite
          (FReplicationWriter *this,FBeginWriteParameters *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  EDataStreamWriteMode EVar3;
  uint uVar4;
  int iVar5;
  FNetRefHandleManager *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  EWriteResult EVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  byte bVar15;
  bool bVar16;
  uint local_res8 [2];
  FScheduleObjectInfo *local_res18 [2];
  <lambda_1> local_58;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3725,"FReplicationWriter_PrepareWrite",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
               ,0xe8d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3725);
  }
  if (((this->WriteContext).bIsValid != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!WriteContext.bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                         ,0xe90,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    EVar10 = (*pcVar7)();
    return EVar10;
  }
  uVar13 = 0;
  EVar10 = NoData;
  if ((this->bReplicationEnabled != false) &&
     ((this->ReplicationRecord).RecordInfos.Tail - (this->ReplicationRecord).RecordInfos.Head !=
      -0xffff)) {
    (this->WriteContext).bHasDestroyedObjectsToSend = 0;
    (this->WriteContext).bHasOOBAttachmentsToSend = 0;
    (this->WriteContext).bHasHugeObjectToSend = 0;
    (this->WriteContext).bHasUpdatedObjectsToSend = 0;
    (this->WriteContext).ScheduledObjectCount = 0;
    EVar3 = param_1->WriteMode;
    (this->WriteContext).WriteMode = EVar3;
    if (EVar3 == PostTickDispatch) {
      bVar8 = FNetObjectAttachmentsWriter::HasUnsentUnreliableAttachments
                        (&this->Attachments,OutOfBand,0);
      if (!bVar8) goto LAB_1442fbb58;
      (this->WriteContext).bHasOOBAttachmentsToSend = 0;
      puVar1 = &(this->WriteContext).field_0xd4;
      *(uint *)puVar1 = *(uint *)puVar1 | (uint)bVar8 << 4;
    }
    else {
      uVar4 = (this->ObjectsWithDirtyChanges).Storage.ArrayNum;
      pFVar11 = (this->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data;
      uVar12 = uVar13;
      if (uVar4 != 0) {
        do {
          if (*(int *)pFVar11 != 0) {
            bVar15 = 1;
            goto LAB_1442fb8c5;
          }
          uVar12 = uVar12 + 1;
          pFVar11 = pFVar11 + 4;
        } while (uVar12 < uVar4);
      }
      bVar15 = 0;
LAB_1442fb8c5:
      uVar4 = (this->ObjectsPendingDestroy).Storage.ArrayNum;
      pFVar11 = (this->ObjectsPendingDestroy).Storage.AllocatorInstance.Data;
      if (uVar4 != 0) {
        do {
          if (*(int *)pFVar11 != 0) {
            bVar14 = 1;
            goto LAB_1442fb8ed;
          }
          uVar13 = uVar13 + 1;
          pFVar11 = pFVar11 + 4;
        } while (uVar13 < uVar4);
      }
      bVar14 = 0;
LAB_1442fb8ed:
      bVar8 = FNetObjectAttachmentsWriter::HasUnsentAttachments(&this->Attachments,OutOfBand,0);
      bVar9 = FNetObjectAttachmentsWriter::HasUnsentAttachments(&this->Attachments,HugeObject,0);
      if (((!bVar9 && !bVar8) && bVar14 == 0) && bVar15 == 0) goto LAB_1442fbb58;
      (this->WriteContext).bHasDestroyedObjectsToSend = 0;
      (this->WriteContext).bHasHugeObjectToSend = 0;
      (this->WriteContext).bHasUpdatedObjectsToSend = 0;
      pFVar6 = this->NetRefHandleManager;
      *(uint *)&(this->WriteContext).field_0xd4 =
           (((uint)((bVar9 || bVar8) | bVar15) | (uint)bVar8 << 2) * 2 | (uint)bVar14) * 2 |
           (uint)bVar9 << 3 | *(uint *)&(this->WriteContext).field_0xd4 & 0xffffffef;
      local_res18[0] = FMemory::Malloc((ulonglong)pFVar6->CurrentMaxInternalNetRefIndex << 3,0);
      (this->WriteContext).ScheduledObjectInfos = local_res18[0];
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1144,"FReplicationWriter_ScheduleObjects",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                   ,0x478);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1144);
      }
      pFVar11 = (this->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data;
      local_res8[0] = 0;
      if (((this->ObjectsWithDirtyChanges).BitCount == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2b7,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        EVar10 = (*pcVar7)();
        return EVar10;
      }
      *(uint *)pFVar11 = *(uint *)pFVar11 & 0xfffffffe;
      local_58.ScheduledObjectIndices = local_res18;
      pFVar6 = this->NetRefHandleManager;
      local_58.ScheduledObjectCount = local_res8;
      local_58.__this = this;
      if (((this->ObjectsWithDirtyChanges).BitCount != (pFVar6->SubObjectInternalIndices).BitCount)
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("A.GetNumBits() == B.GetNumBits()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x555,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        EVar10 = (*pcVar7)();
        return EVar10;
      }
      FNetBitArrayHelper::
      ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UE::Net::Private::FReplicationWriter::ScheduleObjects_::__l2::<lambda_1>_&>
                ((uint *)(this->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data,
                 (uint *)(pFVar6->SubObjectInternalIndices).Storage.AllocatorInstance.Data,
                 (this->ObjectsWithDirtyChanges).Storage.ArrayNum,
                 (this->ObjectsWithDirtyChanges).BitCount,FNetBitArrayBase::AndNotOp,&local_58);
      uVar13 = local_res8[0];
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      (this->WriteContext).ScheduledObjectCount = uVar13;
    }
    piVar2 = &(this->WriteContext).DependentObjectsPendingSend.ArrayMax;
    iVar5 = *piVar2;
    (this->WriteContext).DependentObjectsPendingSend.ArrayNum = 0;
    if (iVar5 < 0) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,0,&(this->WriteContext).DependentObjectsPendingSend.AllocatorInstance,0,piVar2)
      ;
    }
    (this->WriteContext).SortedObjectCount = 0;
    (this->WriteContext).CurrentIndex = 0;
    (this->WriteContext).FailedToWriteSmallObjectCount = 0;
    (this->WriteContext).WrittenDestroyObjectCount = 0;
    (this->WriteContext).NumWrittenPacketsInThisBatch = 0;
    uVar13 = param_1->MaxPackets;
    (this->WriteContext).bIsInReplicationRecordStarvation = 0;
    (this->WriteContext).bIsOOBPacket = 0;
    (this->WriteContext).MaxPacketsToSend = uVar13;
    FNetSendStats::Reset(&(this->WriteContext).Stats);
    (this->WriteContext).bIsValid = 1;
    (this->WriteContext).Stats.Stats.ScheduledForReplicationRootObjectCount =
         (this->WriteContext).ScheduledObjectCount;
    EVar10 = HasMoreData;
  }
LAB_1442fbb58:
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar10;
}

// CanQueueHugeObject @ 1442fbe50

bool __thiscall UE::Net::Private::FReplicationWriter::CanQueueHugeObject(FReplicationWriter *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 1;
  if (1 < GReplicationWriterMaxHugeObjectsInTransit) {
    iVar2 = GReplicationWriterMaxHugeObjectsInTransit;
  }
  if (*(int *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x8 -
      *(int *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x34 <= iVar2) {
    bVar1 = FNetObjectAttachmentsWriter::CanSendMoreReliableAttachments
                      (&this->Attachments,HugeObject,0);
    return bVar1;
  }
  return false;
}

// CanSendObject @ 1442fbeb0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FReplicationWriter::CanSendObject(FReplicationWriter *this,uint param_1)

{
  FDependentObjectInfo FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FReplicationInfo *pFVar6;
  FCannotSendInfo *pFVar7;
  FReplicationInfo *pFVar8;
  byte bVar9;
  uint uVar10;
  uint *puVar11;
  FDependentObjectInfo *pFVar12;
  FHugeObjectSendQueue *local_res18;
  LARGE_INTEGER local_178;
  LARGE_INTEGER local_170;
  FScriptContainerElement *local_168;
  FDependentObjectInfo local_160;
  FDependentObjectInfo *local_158;
  LARGE_INTEGER local_150;
  LARGE_INTEGER local_148;
  LARGE_INTEGER local_140;
  TArrayView<unsigned_int_const_,int> local_138;
  TArrayView<UE::Net::Private::FDependentObjectInfo_const_,int> local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FNetBitArrayView local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [2];
  
  pFVar6 = GetReplicationInfo(this,param_1);
  bVar9 = (byte)((uint)*(undefined4 *)&pFVar6->field1_0x8 >> 0x10) & 0x1f;
  if ((bVar9 == 4) || ((bVar9 - 9 & 0xfd) == 0)) {
    pFVar7 = ShouldWarnIfCannotSend(this,pFVar6,param_1);
    if (pFVar7 == (FCannotSendInfo *)0x0) {
      return false;
    }
    if ((byte)LogIris._0_1_ < 3) {
      return false;
    }
    QueryPerformanceCounter(&local_140);
    FNetRefHandleManager::PrintObjectFromIndex(this->NetRefHandleManager,local_58,param_1);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    local_118.Data.AllocatorInstance.Data = local_58[0].Data.AllocatorInstance.Data;
  }
  else {
    bVar4 = FHugeObjectSendQueue::IsObjectInQueue(&this->HugeObjectSendQueue,param_1,false);
    if ((!bVar4) || ((*(uint *)&pFVar6->field1_0x8 >> 0x16 & 1) != 0)) {
      if ((*(uint *)&pFVar6->field1_0x8 >> 0x15 & 1) != 0) {
        FNetRefHandleManager::GetSubObjects(this->NetRefHandleManager,&local_138,param_1);
        for (puVar11 = local_138.DataPtr; puVar11 != local_138.DataPtr + local_138.ArrayNum;
            puVar11 = puVar11 + 1) {
          uVar10 = *puVar11;
          bVar4 = CanSendObject(this,uVar10);
          if (!bVar4) {
            pFVar7 = ShouldWarnIfCannotSend(this,pFVar6,param_1);
            if (pFVar7 == (FCannotSendInfo *)0x0) {
              return false;
            }
            if ((byte)LogIris._0_1_ < 3) {
              return false;
            }
            FNetRefHandleManager::PrintObjectFromIndex(this->NetRefHandleManager,&local_f8,uVar10);
            QueryPerformanceCounter(&local_170);
            FNetRefHandleManager::PrintObjectFromIndex(this->NetRefHandleManager,&local_108,param_1)
            ;
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            local_118.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
              local_118.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
            }
            goto LAB_1442fc637;
          }
        }
      }
      local_res18 = &this->HugeObjectSendQueue;
      FNetBitArrayView::FNetBitArrayView
                (&local_e8,
                 (uint *)(this->NetRefHandleManager->ObjectsWithDependentObjectsInternalIndices).
                         Storage.AllocatorInstance.Data,
                 (this->NetRefHandleManager->ObjectsWithDependentObjectsInternalIndices).BitCount);
      bVar4 = FNetBitArrayView::GetBit(&local_e8,param_1);
      if (bVar4) {
        FNetRefHandleManager::GetDependentObjectInfos(this->NetRefHandleManager,&local_128,param_1);
        local_158 = local_128.DataPtr + local_128.ArrayNum;
        pFVar12 = local_128.DataPtr;
        if (local_128.DataPtr != local_158) {
          do {
            FVar1 = *pFVar12;
            uVar10 = FVar1.NetRefIndex;
            local_168 = (this->WriteContext).ObjectsWrittenThisPacket.Storage.AllocatorInstance.Data
            ;
            local_160 = FVar1;
            if (((this->WriteContext).ObjectsWrittenThisPacket.BitCount <= uVar10) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2c1,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            if (((*(uint *)(local_168 + (ulonglong)((uint)((ulonglong)FVar1 >> 5) & 0x7ffffff) * 4)
                  >> (uVar10 & 0x1f) & 1) == 0) ||
               (bVar4 = FHugeObjectSendQueue::IsObjectInQueue(local_res18,uVar10,false), bVar4)) {
              pFVar8 = GetReplicationInfo(this,uVar10);
              bVar9 = (byte)((uint)*(undefined4 *)&pFVar8->field1_0x8 >> 0x10) & 0x1f;
              if ((bVar9 == 3) || (bVar9 == 4)) {
                bVar4 = CanSendObject(this,uVar10);
                if (!bVar4) {
                  if (5 < (byte)LogIris._0_1_) {
                    FNetRefHandleManager::PrintObjectFromIndex
                              (this->NetRefHandleManager,&local_88,uVar10);
                    FNetRefHandleManager::PrintObjectFromIndex
                              (this->NetRefHandleManager,&local_98,param_1);
                    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_98.Data.AllocatorInstance.Data);
                    }
                    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_88.Data.AllocatorInstance.Data);
                    }
                  }
                  pFVar7 = ShouldWarnIfCannotSend(this,pFVar6,param_1);
                  if (pFVar7 == (FCannotSendInfo *)0x0) {
                    return false;
                  }
                  if ((byte)LogIris._0_1_ < 3) {
                    return false;
                  }
                  FNetRefHandleManager::PrintObjectFromIndex
                            (this->NetRefHandleManager,&local_68,uVar10);
                  QueryPerformanceCounter(&local_148);
                  FNetRefHandleManager::PrintObjectFromIndex
                            (this->NetRefHandleManager,&local_78,param_1);
                  Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                  local_118.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
                  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_78.Data.AllocatorInstance.Data);
                    local_118.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
                  }
                  goto LAB_1442fc637;
                }
                if (local_160.SchedulingHint == ScheduleBeforeParent) {
                  pFVar2 = (this->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data;
                  if (((this->ObjectsWithDirtyChanges).BitCount <= uVar10) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index < BitCount",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                         ,0x2c1,L""), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    uVar5 = (*pcVar3)();
                    return (bool)uVar5;
                  }
                  if ((*(uint *)(pFVar2 + (((ulonglong)FVar1 & 0xffffffff) >> 5) * 4) >>
                       (uVar10 & 0x1f) & 1) != 0) {
                    if (5 < (byte)LogIris._0_1_) {
                      FNetRefHandleManager::PrintObjectFromIndex
                                (this->NetRefHandleManager,&local_c8,uVar10);
                      FNetRefHandleManager::PrintObjectFromIndex
                                (this->NetRefHandleManager,&local_d8,param_1);
                      Logging::Private::BasicLog<6>
                                ((FStaticBasicLogRecord *)&PTR_u_ReplicationWrit_150bb5d40,
                                 (FLogCategoryBase *)&LogIris);
                      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
                      }
                      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
                      }
                    }
                    pFVar7 = ShouldWarnIfCannotSend(this,pFVar6,param_1);
                    if (pFVar7 == (FCannotSendInfo *)0x0) {
                      return false;
                    }
                    if ((byte)LogIris._0_1_ < 3) {
                      return false;
                    }
                    FNetRefHandleManager::PrintObjectFromIndex
                              (this->NetRefHandleManager,&local_a8,uVar10);
                    QueryPerformanceCounter(&local_150);
                    FNetRefHandleManager::PrintObjectFromIndex
                              (this->NetRefHandleManager,&local_b8,param_1);
                    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                    local_118.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
                    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                      local_118.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
                    }
                    goto LAB_1442fc637;
                  }
                }
              }
            }
            pFVar12 = pFVar12 + 1;
          } while (pFVar12 != local_158);
        }
      }
      return true;
    }
    pFVar7 = ShouldWarnIfCannotSend(this,pFVar6,param_1);
    if (pFVar7 == (FCannotSendInfo *)0x0) {
      return false;
    }
    if ((byte)LogIris._0_1_ < 3) {
      return false;
    }
    QueryPerformanceCounter(&local_178);
    FNetRefHandleManager::PrintObjectFromIndex(this->NetRefHandleManager,&local_118,param_1);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
LAB_1442fc637:
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  return false;
}

// CollectAndAppendExports @ 1442fcd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::FReplicationWriter::CollectAndAppendExports
          (FReplicationWriter *this,FNetSerializationContext *param_1,uchar *param_2,
          FReplicationProtocol *param_3)

{
  FNetExportContext *pFVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> FVar4;
  longlong lVar5;
  ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> FVar6;
  undefined1 auStack_468 [32];
  FNetReferenceCollector local_448;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_468;
  pFVar1 = param_1->ExportContext;
  if (pFVar1 != (FNetExportContext *)0x0) {
    local_448.ReferenceInfos.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0;
    local_448.ReferenceInfos.ArrayNum = 0;
    local_448.ReferenceInfos.ArrayMax = 0x20;
    local_448.Traits = OnlyCollectReferencesThatCanBeExported;
    FReplicationProtocolOperationsInternal::CollectReferences(param_1,&local_448,param_2,param_3);
    lVar5 = (longlong)local_448.ReferenceInfos.ArrayNum;
    FVar4 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)&local_448;
    if (local_448.ReferenceInfos.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
      FVar4 = local_448.ReferenceInfos.AllocatorInstance.SecondaryData;
    }
    if ((local_448.ReferenceInfos.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar6 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)
            (lVar5 * 0x20 + (longlong)FVar4);
    for (; FVar4 != FVar6;
        FVar4 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)
                ((longlong)FVar4 + 0x20)) {
      FObjectReferenceCache::AddPendingExport
                (this->ObjectReferenceCache,pFVar1,(FNetObjectReference *)((longlong)FVar4 + 8));
    }
    if (local_448.ReferenceInfos.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
      FMemory::Free((void *)local_448.ReferenceInfos.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// CommitBatchRecord @ 1442fd580

void __thiscall
UE::Net::Private::FReplicationWriter::CommitBatchRecord
          (FReplicationWriter *this,FBatchRecord *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> FVar3;
  undefined1 local_res10 [8];
  
  FVar3 = (param_1->ObjectReplicationRecords).AllocatorInstance.SecondaryData;
  piVar1 = &(param_1->ObjectReplicationRecords).ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0) {
    param_1 = (FBatchRecord *)FVar3;
  }
  FVar3 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
          ((longlong)param_1 + (longlong)iVar2 * 0x18);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<UE::Net::Private::FReplicationWriter::FObjectRecord_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)param_1 == FVar3)
    break;
    CommitObjectRecord(this,*(uint *)((longlong)param_1 + 8) & 0xfffff,(FObjectRecord *)param_1);
    param_1 = (FBatchRecord *)((longlong)param_1 + 0x18);
  }
  return;
}

// CommitObjectDestroyRecord @ 1442fd610

void __thiscall
UE::Net::Private::FReplicationWriter::CommitObjectDestroyRecord
          (FReplicationWriter *this,uint param_1,FObjectRecord *param_2,FSubObjectRecord *param_3)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  ulong64 uVar7;
  FScriptContainerElement *pFVar8;
  
  uVar6 = 0;
  if ((int)param_1 < (this->ReplicatedObjectsRecordInfoLists).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->ReplicatedObjectsRecordInfoLists).AllocatorInstance.Data +
           (longlong)(int)param_1 * 4;
  uVar5 = FReplicationRecord::PushInfo(&this->ReplicationRecord,&param_2->Record);
  if ((BADTYPE)(param_2->Record).HasSubObjectRecord) {
    uVar7 = (ulonglong)
            ((this->ReplicationRecord).SubObjectRecords.Head -
            (this->ReplicationRecord).SubObjectRecords.Tail) + 1;
    if ((ulonglong)(longlong)(this->ReplicationRecord).SubObjectRecords.Storage.ArrayNum < uVar7) {
      TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
      ::SetCapacity(&(this->ReplicationRecord).SubObjectRecords,uVar7);
    }
    uVar6 = (this->ReplicationRecord).SubObjectRecords.Head;
    uVar2 = (this->ReplicationRecord).SubObjectRecords.IndexMask;
    pFVar8 = (this->ReplicationRecord).SubObjectRecords.Storage.AllocatorInstance.Data;
    (this->ReplicationRecord).SubObjectRecords.Head = uVar6 + 1;
    FReplicationRecord::FSubObjectRecord::FSubObjectRecord
              ((FSubObjectRecord *)(pFVar8 + (ulonglong)(uVar2 & uVar6) * 0x10),param_3);
  }
  if ((*(ushort *)pFVar1 == 0xffff) ||
     (pFVar8 = (this->ReplicationRecord).RecordInfos.Storage.AllocatorInstance.Data +
               ((ulonglong)
                ((((uint)*(ushort *)pFVar1 - (uint)(this->ReplicationRecord).FrontIndex) + 0xffff) %
                0xffff) + (ulonglong)(this->ReplicationRecord).RecordInfos.Tail &
               (ulonglong)(this->ReplicationRecord).RecordInfos.IndexMask) * 0x10,
     pFVar8 == (FScriptContainerElement *)0x0)) {
    *(ushort *)(pFVar1 + 2) = uVar5;
  }
  else {
    *(ushort *)(pFVar8 + 0xc) = uVar5;
  }
  *(ushort *)pFVar1 = uVar5;
  return;
}

// CommitObjectRecord @ 1442fd750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::FReplicationWriter::CommitObjectRecord
          (FReplicationWriter *this,uint param_1,FObjectRecord *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  ushort uVar7;
  ulonglong *puVar8;
  ulong64 uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_68;
  uVar11 = 0;
  local_38._4_4_ = 1;
  local_38._0_4_ = 0;
  local_30 = 2;
  local_2c = 3;
  puVar8 = &local_38;
  do {
    uVar5 = *puVar8;
    puVar8 = (ulonglong *)((longlong)puVar8 + 4);
    uVar11 = uVar11 << 0x10 | (ulonglong)(ushort)(param_2->AttachmentRecord).Sequences[(uint)uVar5];
  } while (puVar8 != local_28);
  iVar2 = (this->ReplicatedObjectsRecordInfoLists).ArrayNum;
  uVar12 = 0;
  if ((int)param_1 < iVar2) {
    uVar12 = ~param_1 >> 0x1f;
  }
  if (uVar12 == 0) {
    local_48 = (longlong)(int)param_1;
    local_40 = (longlong)iVar2;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar1 = (this->ReplicatedObjectsRecordInfoLists).AllocatorInstance.Data +
           (longlong)(int)param_1 * 4;
  uVar7 = FReplicationRecord::PushInfo(&this->ReplicationRecord,&param_2->Record);
  if ((param_2->Record).HasAttachments != 0) {
    uVar9 = (ulonglong)
            ((this->ReplicationRecord).AttachmentRecords.Head -
            (this->ReplicationRecord).AttachmentRecords.Tail) + 1;
    if ((ulonglong)(longlong)(this->ReplicationRecord).AttachmentRecords.Storage.ArrayNum < uVar9) {
      TResizableCircularQueue<unsigned___int64,TSizedDefaultAllocator<32>_>::SetCapacity
                (&(this->ReplicationRecord).AttachmentRecords,uVar9);
    }
    uVar12 = (this->ReplicationRecord).AttachmentRecords.Head;
    uVar3 = (this->ReplicationRecord).AttachmentRecords.IndexMask;
    (this->ReplicationRecord).AttachmentRecords.Head = uVar12 + 1;
    *(ulonglong *)
     ((this->ReplicationRecord).AttachmentRecords.Storage.AllocatorInstance.Data +
     (ulonglong)(uVar3 & uVar12) * 8) = uVar11;
  }
  if ((*(ushort *)pFVar1 == 0xffff) ||
     (pFVar10 = (this->ReplicationRecord).RecordInfos.Storage.AllocatorInstance.Data +
                ((ulonglong)
                 ((((uint)*(ushort *)pFVar1 - (uint)(this->ReplicationRecord).FrontIndex) + 0xffff)
                 % 0xffff) + (ulonglong)(this->ReplicationRecord).RecordInfos.Tail &
                (ulonglong)(this->ReplicationRecord).RecordInfos.IndexMask) * 0x10,
     pFVar10 == (FScriptContainerElement *)0x0)) {
    *(ushort *)(pFVar1 + 2) = uVar7;
  }
  else {
    *(ushort *)(pFVar10 + 0xc) = uVar7;
  }
  *(ushort *)pFVar1 = uVar7;
  return;
}

// CreateObjectRecord @ 1442fe0c0

void __thiscall
UE::Net::Private::FReplicationWriter::CreateObjectRecord
          (FReplicationWriter *this,FNetBitArrayView *param_1,FReplicationInfo *param_2,
          FBatchObjectInfo *param_3,FObjectRecord *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  uint uVar5;
  FObjectRecord *_Dst;
  uint uVar6;
  uint uVar7;
  uint local_c;
  
  uVar1 = *(undefined8 *)(param_3->AttachmentRecord).ReliableReplicationRecord.Sequences;
  *(undefined8 *)(param_4->AttachmentRecord).Sequences = uVar1;
  uVar5 = ((param_4->Record).Index ^ param_3->InternalIndex) & 0xfffff ^
          *(uint *)&(param_4->Record).field_0x8;
  *(uint *)&(param_4->Record).field_0x8 = uVar5;
  if (param_3->AttachmentType == HugeObject) {
    uVar6 = 2;
  }
  else {
    uVar6 = *(uint *)&param_2->field1_0x8 >> 0x10;
  }
  uVar7 = 0;
  if (0x3ff < (ushort)((ushort)((ulonglong)uVar1 >> 0x30) | (ushort)((ulonglong)uVar1 >> 0x10) |
                       (ushort)uVar1 | (ushort)((ulonglong)uVar1 >> 0x20))) {
    uVar7 = 0x4000000;
  }
  uVar7 = ((uVar6 & 0x1f) << 0x14 ^ uVar5 & 0xfe0fffff) & 0xf9ffffff |
          -(uint)(param_1 != (FNetBitArrayView *)0x0) & 0x2000000 | uVar7;
  *(uint *)&(param_4->Record).field_0x8 = uVar7;
  uVar7 = (*(int *)&param_3->field_0x20 << 0x15 ^ uVar7) & 0x8000000 ^ uVar7;
  *(uint *)&(param_4->Record).field_0x8 = uVar7;
  uVar6 = ((*(uint *)&param_2->field1_0x8 >> 0x1d & 1) << 0x1c ^ uVar7 & 0xefffffff) & 0x7fffffff;
  *(uint *)&(param_4->Record).field_0x8 = uVar6;
  uVar5 = 2;
  if (ZPULL(*(undefined4 *)&param_3->field_0x20,3,1) != 0) {
    uVar5 = *(undefined4 *)&param_3->field_0x20;
  }
  *(uint *)&(param_4->Record).field_0x8 = (uVar5 << 0x1d ^ uVar6) & 0x60000000 ^ uVar6;
  if (param_1 == (FNetBitArrayView *)0x0) {
    (param_4->Record).ChangeMaskOrPtr.ChangeMaskOrPointer = 0;
  }
  else {
    if (0x40 < param_1->BitCount) {
      pvVar4 = FGlobalChangeMaskAllocator::Alloc
                         (&s_DefaultChangeMaskAllocator,(param_1->BitCount + 0x1f >> 5) << 2,4);
      (param_4->Record).ChangeMaskOrPtr.ChangeMaskOrPointer = (ulong64)pvVar4;
    }
    local_c = param_1->BitCount;
    uVar5 = local_c + 0x1f >> 5;
    if (local_c < 0x41) {
      _Dst = (FObjectRecord *)&stack0xfffffffffffffff4;
      if (local_c != 0) {
        _Dst = param_4;
      }
    }
    else {
      _Dst = (FObjectRecord *)(param_4->Record).ChangeMaskOrPtr.ChangeMaskOrPointer;
    }
    if ((_Dst == (FObjectRecord *)param_1->Storage) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x5d8,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((uVar5 != 0) && (param_1->WordCount != 0)) {
      memcpy(_Dst,param_1->Storage,(ulonglong)uVar5 << 2);
    }
  }
  return;
}

// Deinit @ 1442fe730

void __thiscall UE::Net::Private::FReplicationWriter::Deinit(FReplicationWriter *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->NetRefHandleManager->OnMaxInternalNetRefIndexIncreased,this);
  return;
}

// DiscardAllRecords @ 1443014b0

void __thiscall UE::Net::Private::FReplicationWriter::DiscardAllRecords(FReplicationWriter *this)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  <lambda_1> local_res8;
  TReplicationRecordHelper local_28;
  
  local_28.ReplicationInfos = &this->ReplicatedObjects;
  local_28.ReplicationInfosRecordInfoLists = &this->ReplicatedObjectsRecordInfoLists;
  local_28.ReplicationRecord = &this->ReplicationRecord;
  uVar4 = (this->ReplicationRecord).Record.Head - (this->ReplicationRecord).Record.Tail;
  if (uVar4 != 0) {
    uVar5 = (ulonglong)uVar4;
    do {
      if (((this->ReplicationRecord).Record.Head == (this->ReplicationRecord).Record.Tail) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Record.Count()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationRecord.h"
                             ,0xc5,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((this->ReplicationRecord).Record.Head == (this->ReplicationRecord).Record.Tail) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset < Count()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                             ,0x4c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = (this->ReplicationRecord).Record.Tail;
      uVar1 = *(ushort *)
               ((this->ReplicationRecord).Record.Storage.AllocatorInstance.Data +
               (ulonglong)(uVar4 & (this->ReplicationRecord).Record.IndexMask) * 2);
      if ((this->ReplicationRecord).Record.Head == uVar4) {
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1638566698149740322>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                           ,0xde,"Count() > 0");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        (this->ReplicationRecord).Record.Tail = uVar4 + 1;
      }
      if (uVar1 != 0) {
        local_res8.__this = this;
        TReplicationRecordHelper::
        Process<_UE::Net::Private::FReplicationWriter::DiscardAllRecords_::__l7::<lambda_1>_>
                  (&local_28,(uint)uVar1,&local_res8);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

// EndWrite @ 144301a30

void __thiscall UE::Net::Private::FReplicationWriter::EndWrite(FReplicationWriter *this)

{
  int *piVar1;
  FReplicationStats *pFVar2;
  ulong64 *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FReplicationSystemImpl *pFVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  double dVar13;
  LARGE_INTEGER local_res8;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3813,"FReplicationWriter_FinishWrite",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
               ,0xee5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3813);
  }
  if ((this->WriteContext).bIsValid != 0) {
    iVar6 = *(int *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x34;
    iVar7 = *(int *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x8;
    if (iVar7 != iVar6) {
      (this->WriteContext).Stats.Stats.ActiveHugeObjectCount = iVar7 - iVar6;
      if ((this->HugeObjectSendQueue).Stats.EndSendingTime != 0) {
        QueryPerformanceCounter(&local_res8);
        dVar13 = (double)(local_res8.QuadPart - (this->HugeObjectSendQueue).Stats.EndSendingTime) *
                 FGenericPlatformTime::SecondsPerCycle64;
        piVar1 = &(this->WriteContext).Stats.Stats.HugeObjectsWaitingForAckCount;
        *piVar1 = *piVar1 + 1;
        (this->WriteContext).Stats.Stats.HugeObjectWaitingForAckTimeInSeconds =
             dVar13 + (this->WriteContext).Stats.Stats.HugeObjectWaitingForAckTimeInSeconds;
      }
      if ((this->HugeObjectSendQueue).Stats.StartStallTime != 0) {
        QueryPerformanceCounter(&local_res8);
        dVar13 = (double)(local_res8.QuadPart - (this->HugeObjectSendQueue).Stats.StartStallTime) *
                 FGenericPlatformTime::SecondsPerCycle64;
        piVar1 = &(this->WriteContext).Stats.Stats.HugeObjectsStallingCount;
        *piVar1 = *piVar1 + 1;
        (this->WriteContext).Stats.Stats.HugeObjectStallingTimeInSeconds =
             dVar13 + (this->WriteContext).Stats.Stats.HugeObjectStallingTimeInSeconds;
      }
    }
    FNetSendStats::Accumulate
              (&(((((this->Parameters).ReplicationSystem)->Impl).Ptr)->ReplicationSystemInternal).
                SendStats,&(this->WriteContext).Stats);
    uVar10 = (this->WriteContext).ScheduledObjectCount - (this->WriteContext).CurrentIndex;
    uVar11 = (this->WriteContext).DependentObjectsPendingSend.ArrayNum;
    pFVar9 = (((this->Parameters).ReplicationSystem)->Impl).Ptr;
    pFVar2 = &(pFVar9->ReplicationSystemInternal).TickReplicationStats;
    pFVar2->PendingObjectCount = pFVar2->PendingObjectCount + (ulonglong)uVar10;
    puVar3 = &(pFVar9->ReplicationSystemInternal).TickReplicationStats.PendingDependentObjectCount;
    *puVar3 = *puVar3 + (ulonglong)uVar11;
    puVar3 = &(pFVar9->ReplicationSystemInternal).TickReplicationStats.HugeObjectSendQueue;
    *puVar3 = *puVar3 + (ulonglong)
                        (uint)(*(int *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.
                                        field_0x8 -
                              *(int *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.
                                       field_0x34);
    uVar8 = (pFVar9->ReplicationSystemInternal).TickReplicationStats.MaxPendingObjectCount;
    if (uVar10 < uVar8) {
      uVar10 = uVar8;
    }
    uVar8 = (pFVar9->ReplicationSystemInternal).TickReplicationStats.MaxPendingDependentObjectCount;
    (pFVar9->ReplicationSystemInternal).TickReplicationStats.MaxPendingObjectCount = uVar10;
    if (uVar11 < uVar8) {
      uVar11 = uVar8;
    }
    uVar8 = (pFVar9->ReplicationSystemInternal).TickReplicationStats.MaxHugeObjectSendQueue;
    (pFVar9->ReplicationSystemInternal).TickReplicationStats.MaxPendingDependentObjectCount = uVar11
    ;
    uVar11 = *(int *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x8 -
             *(int *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x34;
    if (uVar11 < uVar8) {
      uVar11 = uVar8;
    }
    puVar4 = &(pFVar9->ReplicationSystemInternal).TickReplicationStats.SampleCount;
    *puVar4 = *puVar4 + 1;
    (pFVar9->ReplicationSystemInternal).TickReplicationStats.MaxHugeObjectSendQueue = uVar11;
    FMemory::Free((this->WriteContext).ScheduledObjectInfos);
    (this->WriteContext).bIsValid = 0;
    (this->WriteContext).ScheduledObjectInfos = (FScheduleObjectInfo *)0x0;
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// FreeHugeObjectSendQueue @ 144302e10

void __thiscall
UE::Net::Private::FReplicationWriter::FreeHugeObjectSendQueue(FReplicationWriter *this)

{
  undefined1 *puVar1;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this_00;
  int iVar2;
  TDoubleLinkedListNode *pTVar3;
  bool bVar4;
  FReplicationWriter *local_res8;
  
  local_res8 = this;
  for (pTVar3 = (this->HugeObjectSendQueue).SendContexts.HeadNode;
      pTVar3 != (TDoubleLinkedListNode *)0x0; pTVar3 = pTVar3->NextNode) {
    `UE::Net::Private::FReplicationWriter::FreeHugeObjectSendQueue'::__l2::<lambda_1>::operator()
              (&local_res8,&pTVar3->Value);
  }
  TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext>::Empty
            (&(this->HugeObjectSendQueue).SendContexts);
  this_00 = &(this->HugeObjectSendQueue).RootObjectsInTransit;
  bVar4 = 1 < (this->HugeObjectSendQueue).RootObjectsInTransit.HashSize;
  if (!bVar4) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements(this_00)
    ;
  }
  puVar1 = &(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0xc;
  *(undefined4 *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x2c;
  *(undefined4 *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x10,0);
  }
  if (bVar4) {
    (this->HugeObjectSendQueue).RootObjectsInTransit.HashSize = 1;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  return;
}

// GetDefaultFlushFlags @ 1443036f0

uint __thiscall UE::Net::Private::FReplicationWriter::GetDefaultFlushFlags(FReplicationWriter *this)

{
  return 2;
}

// GetFlushStatus @ 144303790

uint __thiscall
UE::Net::Private::FReplicationWriter::GetFlushStatus
          (FReplicationWriter *this,uint param_1,FReplicationInfo *param_2,uint param_3)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FReplicationInfo *pFVar6;
  FScriptContainerElement *pFVar7;
  uint *puVar8;
  TArrayView<unsigned_int_const_,int> local_28;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar4 = 0;
  if ((param_3 & 1) != 0) {
    if ((*(uint *)&param_2->field1_0x8 >> 0x17 & 1) == 0) {
      uVar4 = 0;
      if ((int)param_1 < (this->ReplicatedObjectsRecordInfoLists).ArrayNum) {
        uVar4 = ~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      uVar1 = *(ushort *)
               ((this->ReplicatedObjectsRecordInfoLists).AllocatorInstance.Data +
               (longlong)(int)param_1 * 4 + 2);
      if (uVar1 != 0xffff) {
        for (pFVar7 = (this->ReplicationRecord).RecordInfos.Storage.AllocatorInstance.Data +
                      ((ulonglong)
                       ((((uint)uVar1 - (uint)(this->ReplicationRecord).FrontIndex) + 0xffff) %
                       0xffff) + (ulonglong)(this->ReplicationRecord).RecordInfos.Tail &
                      (ulonglong)(this->ReplicationRecord).RecordInfos.IndexMask) * 0x10;
            pFVar7 != (FScriptContainerElement *)0x0;
            pFVar7 = (this->ReplicationRecord).RecordInfos.Storage.AllocatorInstance.Data +
                     ((ulonglong)
                      ((((uint)*(ushort *)(pFVar7 + 0xc) -
                        (uint)(this->ReplicationRecord).FrontIndex) + 0xffff) % 0xffff) +
                      (ulonglong)(this->ReplicationRecord).RecordInfos.Tail &
                     (ulonglong)(this->ReplicationRecord).RecordInfos.IndexMask) * 0x10) {
          if ((*(uint *)(pFVar7 + 8) & 0x2000000) != 0) goto LAB_1443038d0;
          if (*(ushort *)(pFVar7 + 0xc) == 0xffff) break;
        }
      }
      bVar3 = FHugeObjectSendQueue::IsObjectInQueue(&this->HugeObjectSendQueue,param_1,true);
      uVar4 = 0;
      if (!bVar3) goto LAB_1443038d5;
    }
LAB_1443038d0:
    uVar4 = 1;
  }
LAB_1443038d5:
  if (((param_3 & 2) != 0) &&
     (bVar3 = FNetObjectAttachmentsWriter::IsAllReliableSentAndAcked
                        (&this->Attachments,Normal,param_1), !bVar3)) {
    uVar4 = uVar4 | 2;
  }
  if ((((param_3 & 4) != 0) && (((uint)(param_2->field1_0x8).Value & 0x10400000) == 0x10400000)) &&
     (((byte)((param_2->field1_0x8).Value >> 0x10) & 0x1f) == 0xb)) {
    uVar4 = uVar4 | 4;
  }
  if (((*(uint *)&param_2->field1_0x8 >> 0x16 & 1) == 0) && (uVar4 != param_3)) {
    FNetRefHandleManager::GetSubObjects(this->NetRefHandleManager,&local_28,param_1);
    for (puVar8 = local_28.DataPtr; puVar8 != local_28.DataPtr + local_28.ArrayNum;
        puVar8 = puVar8 + 1) {
      uVar5 = *puVar8;
      pFVar6 = GetReplicationInfo(this,uVar5);
      uVar5 = GetFlushStatus(this,uVar5,pFVar6,param_3);
      uVar4 = uVar4 | uVar5;
      if (uVar4 == param_3) {
        return uVar4;
      }
    }
  }
  return uVar4;
}

// GetInitialChangeMask @ 144303a30

void __thiscall
UE::Net::Private::FReplicationWriter::GetInitialChangeMask
          (FReplicationWriter *this,uint *param_1,FReplicationProtocol *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint local_c [3];
  
  local_c[0] = param_2->ChangeMaskBitCount;
  uVar1 = local_c[0] + 0x1f >> 5;
  _Dst = local_c;
  if (local_c[0] != 0) {
    _Dst = param_1;
  }
  memset(_Dst,0xff,(ulonglong)uVar1 << 2);
  if (local_c[0] != 0) {
    _Dst[uVar1 - 1] = _Dst[uVar1 - 1] & 0xffffffffU >> (-(char)local_c[0] & 0x1fU);
  }
  return;
}

// GetObjectsRequiringPriorityUpdate @ 144303c60

FNetBitArray * __thiscall
UE::Net::Private::FReplicationWriter::GetObjectsRequiringPriorityUpdate(FReplicationWriter *this)

{
  return &this->ObjectsWithDirtyChanges;
}

// GetReplicationInfo @ 144304680

FReplicationInfo * __thiscall
UE::Net::Private::FReplicationWriter::GetReplicationInfo(FReplicationWriter *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FReplicationInfo *pFVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->ReplicatedObjects).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FReplicationInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FReplicationInfo *)
         ((this->ReplicatedObjects).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10);
}

// GetReplicationInfo @ 144304700

FReplicationInfo * __thiscall
UE::Net::Private::FReplicationWriter::GetReplicationInfo(FReplicationWriter *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FReplicationInfo *pFVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->ReplicatedObjects).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FReplicationInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FReplicationInfo *)
         ((this->ReplicatedObjects).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10);
}

// HandleDeliveredRecord @ 144304c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationWriter::HandleDeliveredRecord
          (FReplicationWriter *this,FRecordInfo *param_1,FReplicationInfo *param_2,
          FReplicationRecord *param_3)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FRecordInfo *pFVar8;
  FReplicationInfo *pFVar9;
  FReplicatedObjectData *pFVar10;
  uint uVar11;
  byte bVar12;
  uint *puVar13;
  EReplicatedObjectState EVar14;
  ulonglong uVar15;
  byte bVar16;
  FReplicationWriter *local_res10;
  TArrayView<unsigned_int_const_,int> local_48;
  code *local_38;
  FReplicationWriter **local_30;
  
  puVar1 = &param_1->field_0x8;
  uVar15 = (param_2->field1_0x8).Value;
  bVar12 = ZPULL(*(undefined4 *)puVar1,0x14,5);
  uVar11 = param_1->Index;
  bVar16 = (byte)(uVar15 >> 0x10) & 0x1f;
  if ((uVar15 & 0x1f0000) == 0) {
    if (2 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7868239365963515068>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                       ,0x4bc,"false");
    if (!bVar4) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_1->NewBaselineIndex != 2) {
    if ((((uVar15 >> 4 ^ (ulonglong)(uint)*(undefined4 *)puVar1) & 0x60000000) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RecordInfo.NewBaselineIndex == Info.PendingBaselineIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                           ,0x4c3,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar15 = (param_2->field1_0x8).Value >> 0x1f;
    if (((byte)uVar15 & 3) != 2) {
      FDeltaCompressionBaselineManager::DestroyBaseline
                (this->BaselineManager,(this->Parameters).ConnectionId,uVar11,(uint)uVar15 & 3);
    }
    uVar15 = ((ulonglong)*(uint *)&param_1->field_0x8 & 0xffffffffe0000000) * 4 & 0x180000000 ^
             (param_2->field1_0x8).Value & 0xfffffffc7fffffff | 0x400000000;
    (param_2->field1_0x8).Value = uVar15;
  }
  if (bVar12 == 1) {
    if ((uVar11 != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsObjectIndexForOOBAttachment(InternalIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                           ,0x51b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FNetObjectAttachmentsWriter::ProcessPacketDeliveryStatus
              (&this->Attachments,Delivered,OutOfBand,0,param_3);
    return;
  }
  if (bVar12 == 2) {
    if ((uVar11 != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsObjectIndexForOOBAttachment(InternalIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                           ,0x522,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FNetObjectAttachmentsWriter::ProcessPacketDeliveryStatus
              (&this->Attachments,Delivered,HugeObject,0,param_3);
    local_30 = &local_res10;
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Net::Private::FReplicationWriter::HandleDeliveredRecord'::__l80::<lambda_1>,void,UE::Net::Private::FReplicationWriter::FHugeObjectContext_const_&>
               ::Call;
    local_res10 = this;
    FHugeObjectSendQueue::AckObjects
              (&this->HugeObjectSendQueue,
               (TFunctionRef<void___cdecl(UE::Net::Private::FReplicationWriter::FHugeObjectContext_const_&)>
                *)&local_38);
    return;
  }
  if (bVar12 == 4) {
    if (bVar16 == 4) {
      if ((uVar15 >> 0x1a & 1) == 0) {
        if (param_1->WroteTearOff == 0) {
          SetState(this,uVar11,Created);
          if (((*(uint *)&param_2->field1_0x8 >> 0x1c & 1) != 0) ||
             (bVar4 = FNetBitArray::GetBit(&this->ObjectsPendingDestroy,uVar11), bVar4)) {
            EVar14 = WaitOnFlush;
            goto LAB_144304f24;
          }
        }
        else {
          if ((uVar15 >> 0x16 & 1) != 0) {
            pFVar10 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                                (this->NetRefHandleManager,uVar11);
            uVar7 = pFVar10->SubObjectRootIndex;
            if ((uVar7 != 0) && ((*(byte *)&pFVar10->field9_0x32 & 4) != 0)) {
              uVar6 = 0;
              if ((int)uVar7 < (this->ReplicatedObjects).ArrayNum) {
                uVar6 = ~uVar7 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar2 = (this->ReplicatedObjects).AllocatorInstance.Data;
              if ((byte)(((byte)((uint)*(undefined4 *)(pFVar2 + (longlong)(int)uVar7 * 0x10 + 8) >>
                                0x10) & 0x1f) - 1) < 9) {
                MarkObjectDirty(this,pFVar10->SubObjectRootIndex,
                                "HandleDeliveredRecordSubObjectTearOff");
                pFVar2 = pFVar2 + (longlong)(int)uVar7 * 0x10 + 8;
                *(ulonglong *)pFVar2 = *(ulonglong *)pFVar2 | 0x200000;
              }
            }
          }
          SetState(this,uVar11,PendingTearOff);
          SetState(this,uVar11,Destroyed);
          StopReplication(this,uVar11);
        }
      }
      else {
        EVar14 = PermanentlyDestroyed;
LAB_144304f24:
        SetState(this,uVar11,EVar14);
      }
    }
    (param_2->field1_0x8).Value = (param_2->field1_0x8).Value | 0x8000000;
  }
  else if (bVar12 == 0xb) {
    SetState(this,uVar11,Destroyed);
    StopReplication(this,uVar11);
    if (bVar16 == 9) {
      StartReplication(this,uVar11);
      FNetBitArray::SetBit(&this->ObjectsInScope,uVar11);
    }
  }
  if (param_1->HasAttachments != 0) {
    FNetObjectAttachmentsWriter::ProcessPacketDeliveryStatus
              (&this->Attachments,Delivered,Normal,uVar11,param_3);
  }
  uVar15 = (param_2->field1_0x8).Value;
  if (((byte)(uVar15 >> 0x10) & 0x1f) != 6) {
    return;
  }
  bVar4 = false;
  if (((param_1->HasChangeMask != 0) || ((uVar15 >> 0x17 & 1) != 0)) && ((uVar15 >> 0x23 & 1) != 0))
  {
    if ((uVar15 >> 0x17 & 1) == 0) {
      pFVar8 = FReplicationRecord::GetInfoForIndex(&this->ReplicationRecord,param_1->NextIndex);
      bVar5 = HasInFlightStateChanges(this,pFVar8);
      if ((!bVar5) &&
         (bVar5 = FHugeObjectSendQueue::IsObjectInQueue(&this->HugeObjectSendQueue,uVar11,true),
         !bVar5)) goto LAB_144304fc3;
    }
    bVar4 = true;
  }
LAB_144304fc3:
  if (((param_1->HasAttachments != 0) || ((*(uint *)&param_2->field1_0x8 >> 0x18 & 1) != 0)) &&
     (((param_2->field1_0x8).Value & 0x1000000000) != 0)) {
    bVar5 = FNetObjectAttachmentsWriter::IsAllReliableSentAndAcked(&this->Attachments,Normal,uVar11)
    ;
    bVar4 = (bool)(bVar4 | !bVar5);
  }
  if (!bVar4) {
    if ((*(uint *)&param_2->field1_0x8 >> 0x16 & 1) == 0) {
      FNetRefHandleManager::GetSubObjects(this->NetRefHandleManager,&local_48,uVar11);
      for (puVar13 = local_48.DataPtr; puVar13 != local_48.DataPtr + local_48.ArrayNum;
          puVar13 = puVar13 + 1) {
        uVar7 = *puVar13;
        pFVar9 = GetReplicationInfo(this,uVar7);
        uVar7 = GetFlushStatus(this,uVar7,pFVar9,(uint)((param_2->field1_0x8).Value >> 0x23) & 7);
        if (uVar7 != 0) {
          return;
        }
      }
    }
    if ((*(uint *)&param_2->field1_0x8 >> 0x1c & 1) == 0) {
      SetPendingDestroyOrSubObjectPendingDestroyState(this,uVar11,param_2);
    }
    else {
      SetState(this,uVar11,PendingTearOff);
      FNetBitArray::SetBit(&this->ObjectsWithDirtyChanges,uVar11);
      if ((*(uint *)&param_2->field1_0x8 >> 0x16 & 1) != 0) {
        pFVar10 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                            (this->NetRefHandleManager,uVar11);
        uVar11 = pFVar10->SubObjectRootIndex;
        if ((uVar11 != 0) && ((*(byte *)&pFVar10->field9_0x32 & 4) != 0)) {
          uVar7 = 0;
          if ((int)uVar11 < (this->ReplicatedObjects).ArrayNum) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (this->ReplicatedObjects).AllocatorInstance.Data;
          MarkObjectDirty(this,pFVar10->SubObjectRootIndex,"HandleDeliveredRecordTearOff");
          pFVar2 = pFVar2 + (longlong)(int)uVar11 * 0x10 + 8;
          *(ulonglong *)pFVar2 = *(ulonglong *)pFVar2 | 0x200000;
        }
      }
    }
  }
  return;
}

// HandleDiscardedRecord @ 144305240

void __thiscall
UE::Net::Private::FReplicationWriter::HandleDiscardedRecord
          (FReplicationWriter *this,FRecordInfo *param_1,FReplicationInfo *param_2,
          FReplicationRecord *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FReplicationWriter *local_res10 [3];
  code *local_18;
  FReplicationWriter **local_10;
  
  uVar3 = param_1->ReplicatedObjectState;
  if ((uVar3 != 1) && (uVar3 == 2)) {
    if (param_1->Index != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsObjectIndexForOOBAttachment(InternalIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                         ,0x58b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FNetObjectAttachmentsWriter::ProcessPacketDeliveryStatus
              (&this->Attachments,Discard,HugeObject,0,param_3);
    local_10 = local_res10;
    local_18 = Core::Private::Function::
               TFunctionRefCaller<`UE::Net::Private::FReplicationWriter::HandleDiscardedRecord'::__l6::<lambda_1>,void,UE::Net::Private::FReplicationWriter::FHugeObjectContext_const_&>
               ::Call;
    local_res10[0] = this;
    FHugeObjectSendQueue::AckObjects
              (&this->HugeObjectSendQueue,
               (TFunctionRef<void___cdecl(UE::Net::Private::FReplicationWriter::FHugeObjectContext_const_&)>
                *)&local_18);
  }
  return;
}

// HandleDroppedRecord @ 1443052f0

void __thiscall
UE::Net::Private::FReplicationWriter::HandleDroppedRecord
          (FReplicationWriter *this,FRecordInfo *param_1,FReplicationInfo *param_2,
          FReplicationRecord *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  ENetObjectAttachmentType EVar4;
  uint uVar5;
  EReplicatedObjectState EVar6;
  
  uVar5 = param_1->Index;
  EVar6 = (EReplicatedObjectState)(*(uint *)&param_2->field1_0x8 >> 0x10) & 0x1f;
  if (((*(uint *)&param_2->field1_0x8 & 0x1f0000) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentState != EReplicatedObjectState::Invalid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                         ,0x6bd,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (ZPULL(*(undefined4 *)&param_1->field_0x8,0x1d,2) != 2) {
    if (((((param_2->field1_0x8).Value >> 4 ^ (ulonglong)(uint)*(undefined4 *)&param_1->field_0x8) &
         0x60000000) != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("RecordInfo.NewBaselineIndex == Info.PendingBaselineIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                           ,0x6c4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FDeltaCompressionBaselineManager::LostBaseline
              (this->BaselineManager,(this->Parameters).ConnectionId,uVar5,param_1->NewBaselineIndex
              );
    (param_2->field1_0x8).Value = (param_2->field1_0x8).Value & 0xfffffffdffffffff | 0x400000000;
  }
  switch(param_1->ReplicatedObjectState) {
  case 1:
    if ((uVar5 != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsObjectIndexForOOBAttachment(InternalIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                           ,0x6ea,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar4 = OutOfBand;
    uVar5 = 0;
    goto LAB_144305434;
  case 2:
    if ((uVar5 != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsObjectIndexForOOBAttachment(InternalIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                           ,0x6f1,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = 0;
    EVar4 = HugeObject;
    goto LAB_144305434;
  case 4:
    HandleDroppedRecord<4>(this,EVar6,param_1,param_2,param_3);
    break;
  case 5:
  case 6:
    HandleDroppedRecord<5>(this,EVar6,param_1,param_2,param_3);
    break;
  case 9:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                       ,0x6e4,L"%s");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    break;
  case 0xb:
    HandleDroppedRecord<11>(this,EVar6,param_1,param_2,param_3);
  }
  if (param_1->HasAttachments != 0) {
    EVar4 = Normal;
LAB_144305434:
    FNetObjectAttachmentsWriter::ProcessPacketDeliveryStatus
              (&this->Attachments,Lost,EVar4,uVar5,param_3);
  }
  return;
}

// HandleObjectBatchFailure @ 144305580

EWriteObjectRetryMode __thiscall
UE::Net::Private::FReplicationWriter::HandleObjectBatchFailure
          (FReplicationWriter *this,EWriteObjectStatus param_1,FBatchInfo *param_2,
          FBitStreamInfo *param_3)

{
  int *piVar1;
  ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo> FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  EWriteObjectRetryMode EVar6;
  UPartialNetObjectAttachmentHandlerConfig *pUVar7;
  int iVar8;
  uint uVar9;
  uchar *puVar10;
  bool bVar11;
  undefined1 local_res18 [8];
  FBitStreamInfo *local_res20;
  
  bVar11 = -1 < CpuChannel->Enabled;
  local_res20 = param_3;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3660,"FReplicationWriter_HandleObjectBatchFailure",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
               ,0xe4c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3660);
  }
  FVar2 = (param_2->ObjectInfos).AllocatorInstance.SecondaryData;
  piVar1 = &(param_2->ObjectInfos).ArrayNum;
  iVar8 = *piVar1;
  if (FVar2 != (ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo>)0x0) {
    param_2 = (FBatchInfo *)FVar2;
  }
  puVar10 = (uchar *)((longlong)param_2 + 8);
  while( true ) {
    if (*piVar1 != iVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationWriter::FBatchObjectInfo_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo> *)(puVar10 + -8) ==
        (ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo> *)
        ((longlong)param_2 + (longlong)iVar8 * 0x28)) break;
    if (((*(uint *)(puVar10 + 0x18) & 8) != 0) &&
       (uVar9 = *(uint *)(puVar10 + 0x18) & 3, uVar9 != 2)) {
      FDeltaCompressionBaselineManager::LostBaseline
                (this->BaselineManager,(this->Parameters).ConnectionId,*(uint *)puVar10,uVar9);
    }
    uVar9 = *(uint *)puVar10;
    if (uVar9 != 0) {
      pFVar3 = (this->WriteContext).ObjectsWrittenThisPacket.Storage.AllocatorInstance.Data;
      if (((this->WriteContext).ObjectsWrittenThisPacket.BitCount <= uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2b7,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      *(uint *)(pFVar3 + (ulonglong)(uVar9 >> 5) * 4) =
           *(uint *)(pFVar3 + (ulonglong)(uVar9 >> 5) * 4) & ~(1 << (uVar9 & 0x1f));
    }
    puVar10 = puVar10 + 0x28;
  }
  if (param_1 - NoInstanceProtocol < 2) {
    EVar6 = TrySmallObject;
    goto LAB_1443057d4;
  }
  uVar9 = (local_res20->ReplicationCapacity - local_res20->BatchStartPos) +
          local_res20->ReplicationStartPos;
  if (uVar9 < (this->Parameters).SmallObjectBitThreshold) {
    EVar6 = Abort;
    goto LAB_1443057d4;
  }
  iVar8 = 1;
  if (1 < GReplicationWriterMaxHugeObjectsInTransit) {
    iVar8 = GReplicationWriterMaxHugeObjectsInTransit;
  }
  if (iVar8 < *(int *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x8 -
              *(int *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x34) {
LAB_144305767:
    if (-1 < CpuChannel->Enabled) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId3703,
                 "FReplicationWriter_BlockedByHugeOBjectAlreadyBeingSent",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                 ,0xe77);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3703);
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    EVar6 = SplitHugeObject;
    bVar5 = FNetObjectAttachmentsWriter::CanSendMoreReliableAttachments
                      (&this->Attachments,HugeObject,0);
    if ((!bVar5) ||
       (this->PartialNetObjectAttachmentHandler == (UPartialNetObjectAttachmentHandler *)0x0))
    goto LAB_144305767;
    pUVar7 = UPartialNetObjectAttachmentHandler::GetConfig(this->PartialNetObjectAttachmentHandler);
    if (pUVar7->BitCountSplitThreshold < uVar9) goto LAB_1443057d4;
  }
  uVar9 = (this->WriteContext).MaxPacketsToSend;
  if (((uVar9 == 0) || ((this->WriteContext).NumWrittenPacketsInThisBatch < uVar9 - 1)) ||
     (EVar6 = TrySmallObject,
     (this->Parameters).MaxFailedSmallObjectCount <=
     (this->WriteContext).FailedToWriteSmallObjectCount)) {
    EVar6 = Abort;
  }
LAB_1443057d4:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar6;
}

// HandleObjectBatchSuccess @ 144305810

uint __thiscall
UE::Net::Private::FReplicationWriter::HandleObjectBatchSuccess
          (FReplicationWriter *this,FBatchInfo *param_1,FBatchRecord *param_2)

{
  FReplicationInfo_u_8 *pFVar1;
  FObjectRecord *pFVar2;
  longlong lVar3;
  uint *puVar4;
  float fVar5;
  ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo> FVar6;
  FNetRefHandleManager *pFVar7;
  undefined1 *puVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  int *piVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ForElementType<unsigned_int> FVar17;
  ForElementType<unsigned_int> FVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint *puVar22;
  undefined1 *puVar23;
  int *piVar24;
  ForElementType<unsigned_int> FVar25;
  longlong lVar26;
  FReplicationInfo *pFVar27;
  EReplicatedObjectState EVar28;
  uchar *puVar29;
  float fVar30;
  undefined1 local_res10 [8];
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> local_res18;
  int local_res20;
  uint local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  uint local_a8;
  undefined1 local_a0 [16];
  uint local_90;
  FReplicationInfo_u_8 *local_88;
  EBatchInfoType local_80;
  uchar *local_78;
  int *local_70;
  ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo> local_68;
  EBatchInfoType *local_60;
  
  local_a8 = 0;
  local_ac = 0;
  piVar24 = &(param_1->ObjectInfos).ArrayNum;
  local_res20 = 0;
  local_90 = *piVar24;
  uVar19 = (ulonglong)local_90;
  local_60 = &param_1->Type;
  local_80 = *local_60;
  local_b4 = 0;
  local_b0 = 0;
  local_res18 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)param_2;
  local_70 = piVar24;
  if ((int)local_90 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar19);
  }
  piVar11 = &(param_2->ObjectReplicationRecords).ArrayMax;
  if (*piVar11 < (int)local_90) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>_>
              (0x18,8,local_90,
               (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> *)param_2,
               (param_2->ObjectReplicationRecords).ArrayNum,piVar11);
    local_90 = *piVar24;
    uVar19 = (ulonglong)local_90;
  }
  FVar6 = (param_1->ObjectInfos).AllocatorInstance.SecondaryData;
  piVar11 = piVar24;
  if (FVar6 != (ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo>)0x0) {
    param_1 = (FBatchInfo *)FVar6;
    piVar11 = local_70;
  }
  local_70 = piVar11;
  puVar29 = (uchar *)((longlong)param_1 + 0xc);
  local_68 = (ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo>)
             ((longlong)param_1 + (longlong)(int)uVar19 * 0x28);
  do {
    FVar6 = local_68;
    local_78 = puVar29;
    if (*piVar24 != (int)uVar19) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationWriter::FBatchObjectInfo_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo>)param_1 == FVar6) {
      if (local_80 != Internal) {
        if ((*local_60 == Object) && ((local_res20 != 0 || (local_b4 != 0)))) {
          piVar24 = &(this->WriteContext).Stats.Stats.ReplicatedRootObjectCount;
          *piVar24 = *piVar24 + 1;
        }
        piVar24 = &(this->WriteContext).Stats.Stats.ReplicatedObjectCount;
        *piVar24 = *piVar24 + local_res20;
        piVar24 = &(this->WriteContext).Stats.Stats.DeltaCompressedObjectCount;
        *piVar24 = *piVar24 + local_b0;
      }
      *(int *)((longlong)param_2 + 400) = local_ac;
      return local_a8;
    }
    uVar15 = *(uint *)((longlong)param_1 + 8);
    uVar14 = 0;
    if ((int)uVar15 < (this->ReplicatedObjects).ArrayNum) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar15 = (*pcVar10)();
      return uVar15;
    }
    uVar14 = *(uint *)((longlong)param_1 + 0x20);
    pFVar27 = (FReplicationInfo *)
              ((this->ReplicatedObjects).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10);
    pFVar1 = &pFVar27->field1_0x8;
    local_88 = pFVar1;
    if ((uVar14 & 4) == 0) {
      if ((*(uint *)pFVar1 >> 0x1c & 1) == 0) {
        if ((char)uVar14 < '\0') goto LAB_1443059b5;
      }
      else {
        if ((uVar14 & 0x40) == 0) {
          EVar28 = WaitOnFlush;
        }
        else {
          SetState(this,*(uint *)((longlong)param_1 + 8),PendingTearOff);
LAB_1443059b5:
          EVar28 = WaitOnDestroyConfirmation;
        }
        SetState(this,*(uint *)((longlong)param_1 + 8),EVar28);
        local_88 = pFVar1;
      }
    }
    else {
      SetState(this,*(uint *)((longlong)param_1 + 8),WaitOnCreateConfirmation);
    }
    if ((*(int *)(puVar29 + 8) != 0) ||
       (0x3ff < (ushort)(*(ushort *)(puVar29 + 6) | *(ushort *)(puVar29 + 4) |
                         *(ushort *)(puVar29 + 2) | *(ushort *)puVar29))) {
      FNetObjectAttachmentsWriter::CommitReplicationRecord
                (&this->Attachments,*(ENetObjectAttachmentType *)((longlong)param_1 + 0x18),
                 *(uint *)((longlong)param_1 + 8),(FCommitRecord *)((longlong)param_1 + 0xc));
    }
    uVar15 = *(uint *)((longlong)param_1 + 0x20);
    local_b4 = local_b4 + (uVar15 >> 4 & 1);
    if ((uVar15 & 8) == 0) {
      if (((*(int *)((longlong)param_1 + 0x14) != 0) ||
          (0x3ff < (ushort)(*(ushort *)((longlong)param_1 + 0x12) |
                            *(ushort *)((longlong)param_1 + 0x10) |
                            *(ushort *)((longlong)param_1 + 0xe) |
                           *(ushort *)((longlong)param_1 + 0xc)))) || ((uVar15 & 0xc0) != 0)) {
        iVar16 = *(int *)((ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> *)
                         ((longlong)param_2 + 0x188))->InlineData;
        if (iVar16 == *(int *)((longlong)param_2 + 0x18c)) {
          iVar16 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>_>
                             (0x818,(ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>
                                     *)param_2,(int *)((longlong)param_2 + 0x18c));
        }
        *(int *)((ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> *)
                ((longlong)param_2 + 0x188))->InlineData = iVar16 + 1;
        if (*(ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> *)
             ((longlong)param_2 + 0x180) !=
            (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0) {
          param_2 = (FBatchRecord *)
                    *(ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> *)
                     ((longlong)param_2 + 0x180);
        }
        pFVar2 = (FObjectRecord *)((longlong)param_2 + (longlong)iVar16 * 0x18);
        DefaultConstructItems<UE::Net::Private::FReplicationWriter::FObjectRecord,int>(pFVar2,1);
        CreateObjectRecord(this,(FNetBitArrayView *)0x0,pFVar27,(FBatchObjectInfo *)param_1,pFVar2);
      }
    }
    else {
      local_a0._12_4_ = *(uint *)pFVar1 & 0xffff;
      local_a0._8_4_ = local_a0._12_4_ + 0x1f >> 5;
      if ((uint)local_a0._12_4_ < 0x41) {
        local_a0._0_8_ = pFVar27;
        if (local_a0._12_4_ != 0) goto LAB_144305a5e;
        local_a0._0_8_ = local_a0 + 0xc;
      }
      else {
        local_a0._0_8_ = (pFVar27->ChangeMaskOrPtr).ChangeMaskOrPointer;
LAB_144305a5e:
        if (((FReplicationInfo *)local_a0._0_8_ == (FReplicationInfo *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Storage != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x5a6,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          uVar15 = (*pcVar10)();
          return uVar15;
        }
      }
      if (((local_a0._12_4_ != 0) &&
          ((*(uint *)((longlong)
                      &((FChangeMaskStorageOrPointer *)local_a0._0_8_)->ChangeMaskOrPointer +
                     (ulonglong)(local_a0._8_4_ - 1) * 4) &
           ~(0xffffffffU >> (-(char)local_a0._12_4_ & 0x1fU))) != 0)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(BitCount == 0) || ((Storage[WordCount - 1] & ~GetLastWordMask()) == 0u)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x5a7,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        uVar15 = (*pcVar10)();
        return uVar15;
      }
      iVar16 = *(int *)((longlong)param_2 + 0x188);
      if (iVar16 == *(int *)((longlong)param_2 + 0x18c)) {
        iVar16 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>_>
                           (0x818,(ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>
                                   *)param_2,(int *)((longlong)param_2 + 0x18c));
      }
      *(int *)((longlong)param_2 + 0x188) = iVar16 + 1;
      if (*(ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> *)
           ((longlong)param_2 + 0x180) !=
          (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0) {
        param_2 = (FBatchRecord *)
                  *(ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> *)
                   ((longlong)param_2 + 0x180);
      }
      pFVar2 = (FObjectRecord *)((longlong)param_2 + (longlong)iVar16 * 0x18);
      DefaultConstructItems<UE::Net::Private::FReplicationWriter::FObjectRecord,int>(pFVar2,1);
      CreateObjectRecord(this,(FNetBitArrayView *)local_a0,pFVar27,(FBatchObjectInfo *)param_1,
                         pFVar2);
      memset((void *)local_a0._0_8_,0,(ulonglong)(uint)local_a0._8_4_ << 2);
      local_res20 = local_res20 + 1;
      if ((pFVar1->Value & 0x180000000) != 0x100000000) {
        local_b0 = local_b0 + 1;
      }
    }
    pFVar7 = this->NetRefHandleManager;
    if (*(int *)&(pFVar7->SubObjects).DependencyInfos.field_0x8 !=
        *(int *)&(pFVar7->SubObjects).DependencyInfos.field_0x34) {
      puVar8 = *(undefined1 **)&(pFVar7->SubObjects).DependencyInfos.field_0x40;
      puVar23 = &(pFVar7->SubObjects).DependencyInfos.field_0x38;
      if (puVar8 != (undefined1 *)0x0) {
        puVar23 = puVar8;
      }
      iVar16 = *(int *)(puVar23 +
                       (ulonglong)
                       (*(int *)&(pFVar7->SubObjects).DependencyInfos.field_0x48 - 1U &
                       *(uint *)((longlong)param_1 + 8)) * 4);
      if (iVar16 != -1) {
        lVar26 = *(longlong *)&(pFVar7->SubObjects).DependencyInfos;
        do {
          lVar3 = lVar26 + (longlong)iVar16 * 0x28;
          if (*(uint *)(lVar26 + (longlong)iVar16 * 0x28) == *(uint *)((longlong)param_1 + 8)) {
            lVar26 = lVar3 + 4;
            if (lVar3 == 0) {
              lVar26 = 0;
            }
            if ((lVar26 != 0) && (*(int *)(lVar26 + 0x14) != -1)) {
              puVar22 = (uint *)((longlong)*(int *)(lVar26 + 0x14) * 0x50 +
                                *(longlong *)&(pFVar7->SubObjects).DependentObjectInfosStorage);
              uVar15 = puVar22[0x12];
              if (*(uint **)(puVar22 + 0x10) != (uint *)0x0) {
                puVar22 = *(uint **)(puVar22 + 0x10);
              }
              if (((int)uVar15 < 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar12)) {
                pcVar10 = (code *)swi(3);
                uVar15 = (*pcVar10)();
                return uVar15;
              }
              goto LAB_144305c72;
            }
            break;
          }
          iVar16 = *(int *)(lVar3 + 0x20);
        } while (iVar16 != -1);
      }
    }
    puVar22 = (uint *)0x0;
    uVar15 = 0;
LAB_144305c72:
    puVar4 = puVar22 + (longlong)(int)uVar15 * 2;
    for (; puVar22 != puVar4; puVar22 = puVar22 + 2) {
      uVar15 = *puVar22;
      pFVar9 = (this->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data;
      local_b8 = uVar15;
      if (((this->ObjectsWithDirtyChanges).BitCount <= uVar15) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < BitCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x2c1,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        uVar15 = (*pcVar10)();
        return uVar15;
      }
      uVar14 = local_b8;
      if ((*(uint *)(pFVar9 + (ulonglong)(uVar15 >> 5) * 4) >> (uVar15 & 0x1f) & 1) != 0) {
        pFVar9 = (this->WriteContext).ObjectsWrittenThisPacket.Storage.AllocatorInstance.Data;
        if (((this->WriteContext).ObjectsWrittenThisPacket.BitCount <= local_b8) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < BitCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x2c1,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          uVar15 = (*pcVar10)();
          return uVar15;
        }
        if ((*(uint *)(pFVar9 + (ulonglong)(uVar14 >> 5) * 4) >> (uVar14 & 0x1f) & 1) == 0) {
          FVar18 = (this->WriteContext).DependentObjectsPendingSend.AllocatorInstance.SecondaryData;
          FVar25 = (ForElementType<unsigned_int>)&(this->WriteContext).DependentObjectsPendingSend;
          FVar17 = FVar18;
          if (FVar18 == (ForElementType<unsigned_int>)0x0) {
            FVar17 = FVar25;
          }
          if ((ulonglong)FVar17 <= &local_b8) {
            if (FVar18 == (ForElementType<unsigned_int>)0x0) {
              FVar18 = FVar25;
            }
            if ((&local_b8 <
                 (uint *)((longlong)FVar18 +
                         (longlong)(this->WriteContext).DependentObjectsPendingSend.ArrayMax * 4))
               && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar12)) {
              pcVar10 = (code *)swi(3);
              uVar15 = (*pcVar10)();
              return uVar15;
            }
          }
          iVar16 = (this->WriteContext).DependentObjectsPendingSend.ArrayNum;
          piVar24 = &(this->WriteContext).DependentObjectsPendingSend.ArrayMax;
          if (iVar16 == *piVar24) {
            iVar16 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                               (0x404,(ForElementType<unsigned_int> *)FVar25,piVar24);
          }
          (this->WriteContext).DependentObjectsPendingSend.ArrayNum = iVar16 + 1;
          FVar18 = (this->WriteContext).DependentObjectsPendingSend.AllocatorInstance.SecondaryData;
          if (FVar18 != (ForElementType<unsigned_int>)0x0) {
            FVar25 = FVar18;
          }
          *(uint *)((longlong)FVar25 + (longlong)iVar16 * 4) = local_b8;
          lVar26 = (longlong)(int)local_b8;
          uVar15 = 0;
          if ((int)local_b8 < (this->SchedulingPriorities).ArrayNum) {
            uVar15 = ~local_b8 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            uVar15 = (*pcVar10)();
            return uVar15;
          }
          fVar5 = *(float *)((this->SchedulingPriorities).AllocatorInstance.Data + lVar26 * 4);
          uVar15 = *(uint *)((longlong)param_1 + 8);
          uVar14 = 0;
          if ((int)uVar15 < (this->SchedulingPriorities).ArrayNum) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            uVar15 = (*pcVar10)();
            return uVar15;
          }
          fVar30 = *(float *)((this->SchedulingPriorities).AllocatorInstance.Data +
                             (longlong)(int)uVar15 * 4);
          lVar26 = (longlong)(int)local_b8;
          if (fVar30 <= fVar5) {
            fVar30 = fVar5;
          }
          uVar15 = 0;
          if ((int)local_b8 < (this->SchedulingPriorities).ArrayNum) {
            uVar15 = ~local_b8 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            uVar15 = (*pcVar10)();
            return uVar15;
          }
          *(float *)((this->SchedulingPriorities).AllocatorInstance.Data + lVar26 * 4) = fVar30;
        }
      }
      pFVar1 = local_88;
    }
    uVar15 = *(uint *)((longlong)param_1 + 0x20);
    if ((((uVar15 >> 1 | uVar15) >> 3 | uVar15 >> 1 | uVar15) & 8) != 0) {
      local_a8 = local_a8 + 1;
    }
    pFVar1->Value = pFVar1->Value & 0xffffffffff7fffff;
    uVar19 = ((ulonglong)*(uint *)((longlong)param_1 + 0x20) & 0xffffffffffffffe0) << 0x10;
    local_ac = local_ac + (uVar15 >> 8 & 1);
    uVar19 = (pFVar1->Value ^ uVar19) & 0xffffffffffdfffff ^ uVar19;
    pFVar1->Value = uVar19;
    uVar20 = (ulonglong)*(uchar *)((longlong)param_1 + 0x1c) << 0x18;
    uVar20 = (uVar19 ^ uVar20) & 0xfffffffffeffffff ^ uVar20;
    pFVar1->Value = uVar20;
    uVar15 = *(uint *)((longlong)param_1 + 0x20);
    if (((uVar15 & 8) != 0) && (((byte)uVar15 & 3) != 2)) {
      pFVar1->Value =
           (uVar20 ^ (ulonglong)uVar15 << 0x21) & 0xfffffff9ffffffff ^ (ulonglong)uVar15 << 0x21;
    }
    if ((*(uchar *)((longlong)param_1 + 0x1c) == '\0') &&
       ((*(uchar *)((longlong)param_1 + 0x20) & 0x20) == 0)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    uVar15 = *(uint *)((longlong)param_1 + 8);
    pFVar9 = (this->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data;
    if (((this->ObjectsWithDirtyChanges).BitCount <= uVar15) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < BitCount",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                            ,0x2ac,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      uVar15 = (*pcVar10)();
      return uVar15;
    }
    uVar21 = 1 << ((byte)uVar15 & 0x1f);
    uVar14 = 0;
    if (bVar12) {
      uVar14 = uVar21;
    }
    *(uint *)(pFVar9 + (ulonglong)(uVar15 >> 5) * 4) =
         uVar14 | ~uVar21 & *(uint *)(pFVar9 + (ulonglong)(uVar15 >> 5) * 4);
    if (!bVar12) {
      uVar15 = *(uint *)((longlong)param_1 + 8);
      uVar14 = 0;
      if ((int)uVar15 < (this->SchedulingPriorities).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        uVar15 = (*pcVar10)();
        return uVar15;
      }
      *(undefined4 *)
       ((this->SchedulingPriorities).AllocatorInstance.Data + (longlong)(int)uVar15 * 4) = 0;
    }
    if ((pFVar1->Value & 0x8000000000) != 0) {
      if (*(int *)&(this->CannotSendInfos).field_0x8 != *(int *)&(this->CannotSendInfos).field_0x34)
      {
        puVar8 = *(undefined1 **)&(this->CannotSendInfos).field_0x40;
        puVar23 = &(this->CannotSendInfos).field_0x38;
        if (puVar8 != (undefined1 *)0x0) {
          puVar23 = puVar8;
        }
        iVar16 = *(int *)(puVar23 +
                         (ulonglong)
                         (*(int *)&(this->CannotSendInfos).field_0x48 - 1U &
                         *(uint *)((longlong)param_1 + 8)) * 4);
        if (iVar16 != -1) {
          do {
            if (*(uint *)((longlong)iVar16 * 0x20 + *(longlong *)&this->CannotSendInfos) ==
                *(uint *)((longlong)param_1 + 8)) {
              if (iVar16 != -1) goto LAB_1443061b1;
              goto LAB_14430618b;
            }
            iVar16 = *(int *)((longlong)iVar16 * 0x20 + 0x18 + *(longlong *)&this->CannotSendInfos);
          } while (iVar16 != -1);
        }
      }
      iVar16 = -1;
LAB_14430618b:
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PairId.IsValidId()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x556,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        uVar15 = (*pcVar10)();
        return uVar15;
      }
LAB_1443061b1:
      TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo,0>,FDefaultSetAllocator>
                       *)&this->CannotSendInfos,iVar16);
      pFVar1->Value = pFVar1->Value & 0xffffff7fffffffff;
    }
    param_1 = (FBatchInfo *)((longlong)param_1 + 0x28);
    puVar29 = local_78 + 0x28;
    uVar19 = (ulonglong)local_90;
    piVar24 = local_70;
    param_2 = (FBatchRecord *)local_res18;
  } while( true );
}

// HasDataToSend @ 144306270

bool __thiscall
UE::Net::Private::FReplicationWriter::HasDataToSend(FReplicationWriter *this,FWriteContext *param_1)

{
  undefined1 *puVar1;
  
  return (bool)((param_1->bHasHugeObjectToSend | param_1->bHasOOBAttachmentsToSend |
                 param_1->bHasUpdatedObjectsToSend | param_1->bHasDestroyedObjectsToSend) &
                (byte)(*(uint *)&(this->WriteContext).field_0xd4 >> 6) & 1);
}

// HasInFlightStateChanges @ 1443062b0

bool __thiscall
UE::Net::Private::FReplicationWriter::HasInFlightStateChanges
          (FReplicationWriter *this,uint param_1,FReplicationInfo *param_2)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  
  uVar5 = 0;
  if ((int)param_1 < (this->ReplicatedObjectsRecordInfoLists).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar1 = *(ushort *)
           ((this->ReplicatedObjectsRecordInfoLists).AllocatorInstance.Data +
           (longlong)(int)param_1 * 4 + 2);
  if (uVar1 != 0xffff) {
    for (pFVar6 = (this->ReplicationRecord).RecordInfos.Storage.AllocatorInstance.Data +
                  ((ulonglong)
                   ((((uint)uVar1 - (uint)(this->ReplicationRecord).FrontIndex) + 0xffff) % 0xffff)
                   + (ulonglong)(this->ReplicationRecord).RecordInfos.Tail &
                  (ulonglong)(this->ReplicationRecord).RecordInfos.IndexMask) * 0x10;
        pFVar6 != (FScriptContainerElement *)0x0;
        pFVar6 = (this->ReplicationRecord).RecordInfos.Storage.AllocatorInstance.Data +
                 ((ulonglong)
                  ((((uint)*(ushort *)(pFVar6 + 0xc) - (uint)(this->ReplicationRecord).FrontIndex) +
                   0xffff) % 0xffff) + (ulonglong)(this->ReplicationRecord).RecordInfos.Tail &
                 (ulonglong)(this->ReplicationRecord).RecordInfos.IndexMask) * 0x10) {
      if ((*(uint *)(pFVar6 + 8) & 0x2000000) != 0) {
        return true;
      }
      if (*(ushort *)(pFVar6 + 0xc) == 0xffff) {
        return false;
      }
    }
  }
  return false;
}

// HasInFlightStateChanges @ 1443063d0

bool __thiscall
UE::Net::Private::FReplicationWriter::HasInFlightStateChanges
          (FReplicationWriter *this,FRecordInfo *param_1)

{
  while( true ) {
    if (param_1 == (FRecordInfo *)0x0) {
      return false;
    }
    if (param_1->HasChangeMask != 0) break;
    if (param_1->NextIndex == 0xffff) {
      return false;
    }
    param_1 = (FRecordInfo *)
              ((this->ReplicationRecord).RecordInfos.Storage.AllocatorInstance.Data +
              ((ulonglong)
               ((((uint)param_1->NextIndex - (uint)(this->ReplicationRecord).FrontIndex) + 0xffff) %
               0xffff) + (ulonglong)(this->ReplicationRecord).RecordInfos.Tail &
              (ulonglong)(this->ReplicationRecord).RecordInfos.IndexMask) * 0x10);
  }
  return true;
}

// Init @ 144306a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationWriter::Init(FReplicationWriter *this,FReplicationParameters *param_1)

{
  UReplicationSystem *pUVar1;
  FReplicationSystemImpl *pFVar2;
  UObjectReplicationBridge *pUVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  bool bVar11;
  FReplicationInfo *pFVar12;
  uint uVar13;
  
  uVar13 = param_1->MaxReplicationWriterObjectCount;
  uVar5 = param_1->PacketSendWindowSize;
  uVar6 = param_1->ConnectionId;
  (this->Parameters).MaxInternalNetRefIndex = param_1->MaxInternalNetRefIndex;
  (this->Parameters).MaxReplicationWriterObjectCount = uVar13;
  (this->Parameters).PacketSendWindowSize = uVar5;
  (this->Parameters).ConnectionId = uVar6;
  bVar11 = param_1->bAllowSendingAttachmentsToObjectsNotInScope;
  bVar7 = param_1->bAllowReceivingAttachmentsFromRemoteObjectsNotInScope;
  bVar8 = param_1->bAllowDelayingAttachmentsWithUnresolvedReferences;
  uVar9 = param_1->field_0x1b;
  uVar13 = param_1->SmallObjectBitThreshold;
  (this->Parameters).ReplicationSystem = param_1->ReplicationSystem;
  (this->Parameters).bAllowSendingAttachmentsToObjectsNotInScope = bVar11;
  (this->Parameters).bAllowReceivingAttachmentsFromRemoteObjectsNotInScope = bVar7;
  (this->Parameters).bAllowDelayingAttachmentsWithUnresolvedReferences = bVar8;
  (this->Parameters).field_0x1b = uVar9;
  (this->Parameters).SmallObjectBitThreshold = uVar13;
  uVar13 = param_1->NumBitsUsedForBatchSize;
  uVar5 = param_1->NumBitsUsedForHugeObjectBatchSize;
  uVar10 = *(undefined4 *)&param_1->field_0x2c;
  (this->Parameters).MaxFailedSmallObjectCount = param_1->MaxFailedSmallObjectCount;
  (this->Parameters).NumBitsUsedForBatchSize = uVar13;
  (this->Parameters).NumBitsUsedForHugeObjectBatchSize = uVar5;
  *(undefined4 *)&(this->Parameters).field_0x2c = uVar10;
  if (5 < (byte)LogIris._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  pUVar1 = (this->Parameters).ReplicationSystem;
  uVar13 = (this->Parameters).MaxReplicationWriterObjectCount;
  pFVar2 = (pUVar1->Impl).Ptr;
  this->ReplicationSystemInternal = &pFVar2->ReplicationSystemInternal;
  this->NetRefHandleManager = &(pFVar2->ReplicationSystemInternal).NetRefHandleManager;
  pUVar3 = (((pUVar1->Impl).Ptr)->ReplicationSystemInternal).ReplicationBridge;
  this->BaselineManager = &(pFVar2->ReplicationSystemInternal).DeltaCompressionBaselineManager;
  this->ObjectReferenceCache = &(pFVar2->ReplicationSystemInternal).ObjectReferenceCache;
  this->ReplicationFiltering = &(pFVar2->ReplicationSystemInternal).Filtering;
  this->ReplicationConditionals = &(pFVar2->ReplicationSystemInternal).Conditionals;
  this->ReplicationBridge = pUVar3;
  this->PartialNetObjectAttachmentHandler =
       (UPartialNetObjectAttachmentHandler *)
       (pFVar2->ReplicationSystemInternal).NetBlobManager.PartialNetObjectAttachmentHandler.Object;
  this->NetObjectBlobHandler =
       (UNetObjectBlobHandler *)
       (pFVar2->ReplicationSystemInternal).NetBlobManager.NetObjectBlobHandler.Object;
  this->NetTypeStats = &(pFVar2->ReplicationSystemInternal).TypeStats;
  if (uVar13 == 0) {
    uVar13 = (this->Parameters).MaxInternalNetRefIndex;
  }
  TArray<UE::Net::Private::FReplicationWriter::FReplicationInfo,TSizedDefaultAllocator<32>_>::
  SetNumZeroed(&this->ReplicatedObjects,uVar13,Default);
  TArray<UE::Net::Private::FReplicationRecord::FRecordInfoList,TSizedDefaultAllocator<32>_>::
  SetNumZeroed(&this->ReplicatedObjectsRecordInfoLists,uVar13,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->SchedulingPriorities,uVar13,Default);
  uVar13 = (this->Parameters).MaxInternalNetRefIndex;
  FNetBitArray::SetNumBits(&this->ObjectsPendingDestroy,uVar13);
  FNetBitArray::SetNumBits(&this->ObjectsWithDirtyChanges,uVar13);
  FNetBitArray::SetNumBits(&this->ObjectsInScope,uVar13);
  FNetBitArray::SetNumBits(&(this->WriteContext).ObjectsWrittenThisPacket,uVar13);
  TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::
  AddRaw<UE::Net::Private::FReplicationWriter>
            ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
              *)&this->NetRefHandleManager->OnMaxInternalNetRefIndexIncreased,
             (FReplicationWriter *)&stack0x00000008,(pmf_8a57c27f)this);
  pFVar12 = GetReplicationInfo(this,0);
  (pFVar12->ChangeMaskOrPtr).ChangeMaskOrPointer = 0;
  (pFVar12->field1_0x8).Value = 0x10000;
  if ((this->ReplicatedObjectsRecordInfoLists).ArrayNum < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(undefined4 *)(this->ReplicatedObjectsRecordInfoLists).AllocatorInstance.Data = 0xffffffff;
  this->bReplicationEnabled = false;
  return;
}

// InternalUpdateDirtyChangeMasks @ 144307af0

/* WARNING: Enum "EFlushFlags": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationWriter::InternalUpdateDirtyChangeMasks
          (FReplicationWriter *this,FChangeMaskCache *param_1,EFlushFlags param_2,bool param_3)

{
  int iVar1;
  ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo> FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TArray<UE::Net::Private::FChangeMaskCache::FCachedInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  FNetBitArrayView *pFVar10;
  ForElementType<unsigned_int> FVar11;
  uint *puVar12;
  uint *puVar13;
  FReplicationInfo *pFVar14;
  FReplicationInfo *pFVar15;
  uint uVar16;
  undefined1 local_res20 [8];
  FNetBitArrayView local_68;
  FNetBitArrayView local_58;
  FNetBitArrayView local_48;
  
  FVar2 = (param_1->Indices).AllocatorInstance.SecondaryData;
  iVar1 = (param_1->Indices).ArrayNum;
  FVar11 = (param_1->Storage).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<unsigned_int>)0x0) {
    FVar11 = (ForElementType<unsigned_int>)&param_1->Storage;
  }
  pTVar5 = &param_1->Indices;
  if (FVar2 != (ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>)0x0) {
    param_1 = (FChangeMaskCache *)FVar2;
  }
  FVar2 = (ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>)
          ((longlong)param_1 + (longlong)iVar1 * 8);
  do {
    while( true ) {
      if (pTVar5->ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UE::Net::Private::FChangeMaskCache::FCachedInfo_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if ((ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>)param_1 == FVar2) {
        return;
      }
      uVar16 = *(uint *)param_1;
      uVar7 = 0;
      if ((int)uVar16 < (this->ReplicatedObjects).ArrayNum) {
        uVar7 = ~uVar16 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar15 = (FReplicationInfo *)
                ((this->ReplicatedObjects).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x10);
      if ((*(uint *)&pFVar15->field1_0x8 >> 0x10 & 0x1f) != 0) break;
LAB_144307f67:
      param_1 = (FChangeMaskCache *)((longlong)param_1 + 8);
    }
    uVar16 = *(uint *)param_1;
    pFVar3 = (this->ObjectsInScope).Storage.AllocatorInstance.Data;
    if (((this->ObjectsInScope).BitCount <= uVar16) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar16 = 1 << ((byte)uVar16 & 0x1f) & *(uint *)(pFVar3 + (ulonglong)(uVar16 >> 5) * 4);
    if (uVar16 != 0) {
      MarkObjectDirty(this,*(uint *)param_1,"UpdateDirtyChangeMasks");
    }
    if ((*(uint *)((longlong)param_1 + 4) & 0x1000000) != 0) {
      (pFVar15->field1_0x8).Value = (pFVar15->field1_0x8).Value | 0x200000;
      goto LAB_144307f67;
    }
    if ((param_3) || ((*(uint *)&pFVar15->field1_0x8 >> 0x1c & 1) != 0)) {
      if (((*(uint *)&pFVar15->field1_0x8 >> 0x1d & 1) != 0) &&
         (bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7868239365963514871>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                             ,0x3f7,
                             "(!MarkForTearOff && !Info.TearOff) || !Info.SubObjectPendingDestroy"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((param_3) && (((byte)((uint)*(undefined4 *)&pFVar15->field1_0x8 >> 0x10) & 0x1f) == 10)) {
        SetState(this,*(uint *)param_1,WaitOnFlush);
        uVar7 = GetFlushStatus(this,*(uint *)param_1,pFVar15,
                               (EFlushFlags)((pFVar15->field1_0x8).Value >> 0x23) & FlushFlags_All |
                               param_2);
        (pFVar15->field1_0x8).Value =
             ((ulonglong)uVar7 << 0x23 ^ (pFVar15->field1_0x8).Value) & 0xffffffc7ffffffff ^
             (ulonglong)uVar7 << 0x23;
      }
    }
    uVar8 = (ulonglong)param_3 << 0x1c | (pFVar15->field1_0x8).Value;
    uVar8 = ((pFVar15->field1_0x8).Value ^ uVar8) & 0xffffffffefffffff ^ uVar8;
    uVar9 = (ulonglong)param_2 << 0x23 | uVar8;
    uVar9 = (uVar9 ^ uVar8) & 0xffffffc7ffffffff ^ uVar9;
    (pFVar15->field1_0x8).Value = uVar9;
    if ((*(uint *)((longlong)param_1 + 4) & 0x2000000) != 0) {
      uVar7 = (uint)uVar9 & 0xffff;
      pFVar14 = pFVar15;
      if (0x40 < uVar7) {
        pFVar14 = (FReplicationInfo *)(pFVar15->ChangeMaskOrPtr).ChangeMaskOrPointer;
      }
      FNetBitArrayView::FNetBitArrayView(&local_68,(uint *)pFVar14,uVar7);
      FNetBitArrayView::FNetBitArrayView
                (&local_58,
                 (uint *)((longlong)FVar11 +
                         (ulonglong)(*(uint *)((longlong)param_1 + 4) & 0xffffff) * 4),uVar7);
      if (((local_68.Storage == local_58.Storage) || (local_68.BitCount != local_58.BitCount)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x64b,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_68.WordCount != 0) {
        uVar8 = (ulonglong)local_68.WordCount;
        puVar12 = local_68.Storage;
        puVar13 = local_58.Storage;
        do {
          uVar7 = *puVar13;
          puVar13 = puVar13 + 1;
          *puVar12 = *puVar12 | uVar7;
          puVar12 = puVar12 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      uVar9 = (ulonglong)(-(uint)(uVar16 != 0) & 0x800000) |
              (pFVar15->field1_0x8).Value & 0xffffffffff7fffff;
      (pFVar15->field1_0x8).Value = uVar9;
    }
    if (((!param_3) || (uVar16 != 0)) || (7 < ((byte)(uVar9 >> 0x10) & 0x1f))) goto LAB_144307f67;
    MarkObjectDirty(this,*(uint *)param_1,"TearOffObjectNotInScope");
    uVar16 = *(uint *)&pFVar15->field1_0x8 & 0xffff;
    pFVar14 = pFVar15;
    if (0x40 < uVar16) {
      pFVar14 = (FReplicationInfo *)(pFVar15->ChangeMaskOrPtr).ChangeMaskOrPointer;
    }
    pFVar10 = FNetBitArrayView::FNetBitArrayView(&local_48,(uint *)pFVar14,uVar16);
    uVar8 = 0;
    if (pFVar10->WordCount != 0) {
      do {
        if (pFVar10->Storage[uVar8] != 0) {
          uVar8 = 0x800000;
          goto LAB_144307e93;
        }
        uVar16 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar16;
      } while (uVar16 < pFVar10->WordCount);
    }
    uVar8 = 0;
LAB_144307e93:
    uVar9 = (pFVar15->field1_0x8).Value;
    (pFVar15->field1_0x8).Value = uVar9 & 0xffffffffff7fffff | uVar8;
    if ((uVar9 & 0x400000) == 0) goto LAB_144307f67;
    uVar7 = FNetRefHandleManager::GetRootObjectInternalIndexOfSubObject
                      (this->NetRefHandleManager,*(uint *)param_1);
    uVar16 = 0;
    if ((int)uVar7 < (this->ReplicatedObjects).ArrayNum) {
      uVar16 = ~uVar7 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->ReplicatedObjects).AllocatorInstance.Data;
    if (8 < (byte)(((byte)((uint)*(undefined4 *)(pFVar3 + (longlong)(int)uVar7 * 0x10 + 8) >> 0x10)
                   & 0x1f) - 1)) goto LAB_144307f67;
    MarkObjectDirty(this,uVar7,"TearOffObjectNotInScopeRoot");
    pFVar3 = pFVar3 + (longlong)(int)uVar7 * 0x10 + 8;
    *(ulonglong *)pFVar3 = *(ulonglong *)pFVar3 | 0x200000;
    param_1 = (FChangeMaskCache *)((longlong)param_1 + 8);
  } while( true );
}

// InvalidateBaseline @ 144307fb0

void __thiscall
UE::Net::Private::FReplicationWriter::InvalidateBaseline
          (FReplicationWriter *this,uint param_1,FReplicationInfo *param_2)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  
  uVar4 = 0;
  if ((int)param_1 < (this->ReplicatedObjectsRecordInfoLists).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = *(ushort *)
           ((this->ReplicatedObjectsRecordInfoLists).AllocatorInstance.Data +
           (longlong)(int)param_1 * 4 + 2);
  if (uVar1 != 0xffff) {
    for (pFVar5 = (this->ReplicationRecord).RecordInfos.Storage.AllocatorInstance.Data +
                  ((ulonglong)
                   ((((uint)uVar1 - (uint)(this->ReplicationRecord).FrontIndex) + 0xffff) % 0xffff)
                   + (ulonglong)(this->ReplicationRecord).RecordInfos.Tail &
                  (ulonglong)(this->ReplicationRecord).RecordInfos.IndexMask) * 0x10;
        pFVar5 != (FScriptContainerElement *)0x0;
        pFVar5 = (this->ReplicationRecord).RecordInfos.Storage.AllocatorInstance.Data +
                 ((ulonglong)
                  ((((uint)*(ushort *)(pFVar5 + 0xc) - (uint)(this->ReplicationRecord).FrontIndex) +
                   0xffff) % 0xffff) + (ulonglong)(this->ReplicationRecord).RecordInfos.Tail &
                 (ulonglong)(this->ReplicationRecord).RecordInfos.IndexMask) * 0x10) {
      *(uint *)(pFVar5 + 8) = *(uint *)(pFVar5 + 8) & 0xdfffffff;
      *(uint *)(pFVar5 + 8) = *(uint *)(pFVar5 + 8) | 0x40000000;
      if (*(ushort *)(pFVar5 + 0xc) == 0xffff) break;
    }
  }
  (param_2->field1_0x8).Value = (param_2->field1_0x8).Value & 0xfffffffd7fffffff;
  (param_2->field1_0x8).Value = (param_2->field1_0x8).Value | 0x500000000;
  return;
}

// IsActiveHugeObject @ 1443080f0

bool __thiscall
UE::Net::Private::FReplicationWriter::IsActiveHugeObject(FReplicationWriter *this,uint param_1)

{
  bool bVar1;
  
  bVar1 = FHugeObjectSendQueue::IsObjectInQueue(&this->HugeObjectSendQueue,param_1,false);
  return bVar1;
}

// IsObjectPartOfActiveHugeObject @ 144308c70

bool __thiscall
UE::Net::Private::FReplicationWriter::IsObjectPartOfActiveHugeObject
          (FReplicationWriter *this,uint param_1)

{
  bool bVar1;
  
  bVar1 = FHugeObjectSendQueue::IsObjectInQueue(&this->HugeObjectSendQueue,param_1,true);
  return bVar1;
}

// IsReplicationEnabled @ 144308c90

bool __thiscall UE::Net::Private::FReplicationWriter::IsReplicationEnabled(FReplicationWriter *this)

{
  return this->bReplicationEnabled;
}

// IsWriteObjectSuccess @ 144309180

bool __thiscall
UE::Net::Private::FReplicationWriter::IsWriteObjectSuccess
          (FReplicationWriter *this,EWriteObjectStatus param_1)

{
  return param_1 < BitStreamOverflow;
}

// LexToString @ 1443091a0

wchar_t * __cdecl UE::Net::Private::FReplicationWriter::LexToString(EReplicatedObjectState param_1)

{
  if (param_1 < Count) {
    return Names[param_1];
  }
  return L"";
}

// MarkObjectDirty @ 144309330

void __thiscall
UE::Net::Private::FReplicationWriter::MarkObjectDirty
          (FReplicationWriter *this,uint param_1,char *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint local_res10 [2];
  char *local_res18;
  uint *local_18;
  char **local_10;
  
  local_res10[0] = param_1;
  local_res18 = param_2;
  if (bValidateObjectsWithDirtyChanges) {
    uVar4 = 0;
    if ((int)param_1 < (this->ReplicatedObjects).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (8 < (byte)(((byte)((uint)*(undefined4 *)
                                  ((this->ReplicatedObjects).AllocatorInstance.Data +
                                  (longlong)(int)param_1 * 0x10 + 8) >> 0x10) & 0x1f) - 1)) {
      local_18 = local_res10;
      local_10 = &local_res18;
      bVar3 = `UE::Net::Private::FReplicationWriter::MarkObjectDirty'::__l6::<lambda_1>::operator()
                        (&local_18);
      if (!bVar3) {
        return;
      }
    }
  }
  uVar4 = local_res10[0];
  pFVar1 = (this->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data;
  if (((this->ObjectsWithDirtyChanges).BitCount <= local_res10[0]) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2a2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = pFVar1 + (ulonglong)(uVar4 >> 5) * 4;
  *(uint *)pFVar1 = *(uint *)pFVar1 | 1 << (uVar4 & 0x1f);
  return;
}

// NotifyDestroyedObjectPendingEndReplication @ 144309e80

void __thiscall
UE::Net::Private::FReplicationWriter::NotifyDestroyedObjectPendingEndReplication
          (FReplicationWriter *this,uint param_1)

{
  FReplicationInfo *pFVar1;
  
  pFVar1 = GetReplicationInfo(this,param_1);
  if (((byte)((uint)*(undefined4 *)&pFVar1->field1_0x8 >> 0x10) & 0x1f) == 3) {
    StopReplication(this,param_1);
  }
  return;
}

// OnMaxInternalNetRefIndexIncreased @ 14430a010

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationWriter::OnMaxInternalNetRefIndexIncreased
          (FReplicationWriter *this,uint param_1)

{
  if ((this->Parameters).MaxReplicationWriterObjectCount == 0) {
    TArray<UE::Net::Private::FReplicationWriter::FReplicationInfo,TSizedDefaultAllocator<32>_>::
    SetNumZeroed(&this->ReplicatedObjects,param_1,Default);
    TArray<UE::Net::Private::FReplicationRecord::FRecordInfoList,TSizedDefaultAllocator<32>_>::
    SetNumZeroed(&this->ReplicatedObjectsRecordInfoLists,param_1,Default);
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&this->SchedulingPriorities,param_1,Default);
  }
  FNetBitArray::SetNumBits(&this->ObjectsPendingDestroy,param_1);
  FNetBitArray::SetNumBits(&this->ObjectsWithDirtyChanges,param_1);
  FNetBitArray::SetNumBits(&this->ObjectsInScope,param_1);
  FNetBitArray::SetNumBits(&(this->WriteContext).ObjectsWrittenThisPacket,param_1);
  return;
}

// PatchupObjectChangeMaskWithInflightChanges @ 14430a220

bool __thiscall
UE::Net::Private::FReplicationWriter::PatchupObjectChangeMaskWithInflightChanges
          (FReplicationWriter *this,uint param_1,FReplicationInfo *param_2)

{
  FReplicationInfo_u_8 *pFVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint *puVar6;
  FScriptContainerElement *pFVar7;
  uint *puVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  uint uVar11;
  ulonglong uVar12;
  FNetBitArrayView local_48;
  FNetBitArrayView local_38;
  
  bVar10 = false;
  uVar11 = 0;
  if ((int)param_1 < (this->ReplicatedObjectsRecordInfoLists).ArrayNum) {
    uVar11 = ~param_1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar1 = &param_2->field1_0x8;
  pFVar9 = (this->ReplicatedObjectsRecordInfoLists).AllocatorInstance.Data;
  uVar11 = *(uint *)&param_2->field1_0x8 & 0xffff;
  if (0x40 < uVar11) {
    param_2 = (FReplicationInfo *)(param_2->ChangeMaskOrPtr).ChangeMaskOrPointer;
  }
  FNetBitArrayView::FNetBitArrayView(&local_48,(uint *)param_2,uVar11);
  uVar2 = *(ushort *)(pFVar9 + (longlong)(int)param_1 * 4 + 2);
  if (uVar2 != 0xffff) {
    pFVar9 = (this->ReplicationRecord).RecordInfos.Storage.AllocatorInstance.Data +
             ((ulonglong)
              ((((uint)uVar2 - (uint)(this->ReplicationRecord).FrontIndex) + 0xffff) % 0xffff) +
              (ulonglong)(this->ReplicationRecord).RecordInfos.Tail &
             (ulonglong)(this->ReplicationRecord).RecordInfos.IndexMask) * 0x10;
    do {
      if (pFVar9 == (FScriptContainerElement *)0x0) {
        return bVar10;
      }
      if ((*(uint *)(pFVar9 + 8) & 0x2000000) != 0) {
        bVar10 = true;
        uVar11 = *(uint *)pFVar1 & 0xffff;
        pFVar7 = pFVar9;
        if (0x40 < uVar11) {
          pFVar7 = *(FScriptContainerElement **)pFVar9;
        }
        FNetBitArrayView::FNetBitArrayView(&local_38,(uint *)pFVar7,uVar11);
        if (((local_48.Storage == local_38.Storage) || (local_48.BitCount != local_38.BitCount)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x64b,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (local_48.WordCount != 0) {
          uVar12 = (ulonglong)local_48.WordCount;
          puVar6 = local_48.Storage;
          puVar8 = local_38.Storage;
          do {
            uVar11 = *puVar8;
            puVar8 = puVar8 + 1;
            *puVar6 = *puVar6 | uVar11;
            puVar6 = puVar6 + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      }
      if (*(ushort *)(pFVar9 + 0xc) == 0xffff) {
        return bVar10;
      }
      pFVar9 = (this->ReplicationRecord).RecordInfos.Storage.AllocatorInstance.Data +
               ((ulonglong)
                ((((uint)*(ushort *)(pFVar9 + 0xc) - (uint)(this->ReplicationRecord).FrontIndex) +
                 0xffff) % 0xffff) + (ulonglong)(this->ReplicationRecord).RecordInfos.Tail &
               (ulonglong)(this->ReplicationRecord).RecordInfos.IndexMask) * 0x10;
    } while( true );
  }
  return false;
}

// PrepareAndSendHugeObjectPayload @ 14430acc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EWriteStatus __thiscall
UE::Net::Private::FReplicationWriter::PrepareAndSendHugeObjectPayload
          (FReplicationWriter *this,FNetSerializationContext *param_1,uint param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  UPartialNetObjectAttachmentHandler *this_00;
  FNetDebugName *pFVar4;
  FNetBitStreamWriter *this_01;
  code *pcVar5;
  int iVar6;
  wchar_t *pwVar7;
  FNetRefHandle_u_0 FVar8;
  wchar_t *pwVar9;
  FNetRefHandle_u_0 FVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  FNetSerializationContext *pFVar13;
  FNetSerializationContext *pFVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  EWriteObjectStatus EVar18;
  EWriteStatus EVar19;
  UPartialNetObjectAttachmentHandlerConfig *pUVar20;
  FNetSerializationContext *pFVar21;
  FNetTraceCollector *pFVar22;
  int iVar23;
  FNetSerializationContext *pFVar24;
  longlong lVar25;
  ForElementType<FSetElementId> FVar26;
  ForElementType<FNetTracePacketContentEvent> FVar27;
  FName FVar28;
  FNetTraceCollector *pFVar29;
  uint uVar30;
  bool bVar31;
  undefined1 auStackY_1208 [32];
  uint local_11d8 [2];
  uint local_11d0;
  uint local_11cc;
  EWriteObjectStatus local_11c8;
  FHeader local_11c4;
  uint local_11c0;
  TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> local_11b8;
  TRefCountPtr<UE::Net::FRawDataNetBlob> local_11a8;
  ForAnyElementType local_11a0;
  uint local_1198 [2];
  FNetTraceCollector *local_1190;
  FNetBitStreamWriter local_1188;
  FNetBitStreamWriter *local_1168;
  undefined1 local_1160 [8];
  FNetExportContext local_1158;
  FNetSerializationContext *local_1148;
  FNetExportContext *local_1140;
  LARGE_INTEGER local_1138;
  FHugeObjectContext *local_1130;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_1128;
  LARGE_INTEGER local_1120;
  EWriteObjectStatus *local_1118;
  FReplicationWriter *local_1110;
  uint *local_1108;
  FScriptContainerElement *local_10f8;
  uint uStack_10f0;
  undefined4 uStack_10ec;
  FNetTraceCollector *local_10e8;
  int iStack_10e0;
  undefined4 uStack_10dc;
  FScriptContainerElement *local_10d8;
  undefined8 uStack_10d0;
  FString local_10c8;
  TArrayView<TRefCountPtr<UE::Net::FNetBlob>_const_,int> local_10b8;
  FString local_10a8;
  FString local_1098;
  FString local_1088;
  FString local_1078;
  FHugeObjectContext local_1068;
  FBatchRecord local_a78;
  FBatchInfo local_8e0;
  FNetSerializationContext local_648;
  FBatchInfo local_2d8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1208;
  bVar31 = -1 < CpuChannel->Enabled;
  local_11d8[0] = param_2;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2937,"FReplicationWriter_PrepareAndSendHugeObjectPayload",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
               ,0xb79);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2937);
  }
  local_1128 = &(this->HugeObjectSendQueue).RootObjectsInTransit;
  iVar23 = 1;
  if (1 < GReplicationWriterMaxHugeObjectsInTransit) {
    iVar23 = GReplicationWriterMaxHugeObjectsInTransit;
  }
  if ((iVar23 < *(int *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x8 -
                *(int *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x34) ||
     (bVar15 = FHugeObjectSendQueue::IsObjectInQueue(&this->HugeObjectSendQueue,local_11d8[0],false)
     , bVar15)) {
    local_1108 = local_11d8;
    local_1110 = this;
    `UE::Net::Private::FReplicationWriter::PrepareAndSendHugeObjectPayload'::__l5::<lambda_1>::
    operator()(&local_1110);
    EVar19 = Skipped;
    goto LAB_14430bbcf;
  }
  pFVar29 = (FNetTraceCollector *)0x0;
  EVar19 = Skipped;
  local_11a0.Data = (FScriptContainerElement *)0x0;
  local_1198[0] = 0;
  local_1198[1] = 0;
  pUVar20 = UPartialNetObjectAttachmentHandler::GetConfig(this->PartialNetObjectAttachmentHandler);
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,*(int *)((longlong)&pUVar20->_padding_ + 4) * (int)pUVar20->_padding_ + 0x1fU >> 5,
             &local_11a0,(int *)local_1198,(int *)(local_1198 + 1));
  FNetBitStreamWriter::FNetBitStreamWriter(&local_1188);
  local_11c8 = local_1198[0] * 4;
  FNetBitStreamWriter::InitBytes(&local_1188,local_11a0.Data,local_11c8);
  lVar25 = 6;
  pFVar13 = param_1;
  pFVar14 = &local_648;
  do {
    pFVar24 = pFVar14;
    pFVar21 = pFVar13;
    FVar28 = (pFVar21->ErrorContext).Error;
    pwVar7 = (pFVar21->ReadJournal).Entries[0].Name;
    FVar8 = (pFVar21->ReadJournal).Entries[0].NetRefHandle.field0_0x0;
    (pFVar24->ErrorContext).ObjectHandle.field0_0x0 =
         (pFVar21->ErrorContext).ObjectHandle.field0_0x0;
    (pFVar24->ErrorContext).Error = FVar28;
    uVar16 = (pFVar21->ReadJournal).Entries[0].BitOffset;
    uVar11 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[0].field_0x14;
    pwVar9 = (pFVar21->ReadJournal).Entries[1].Name;
    (pFVar24->ReadJournal).Entries[0].Name = pwVar7;
    (pFVar24->ReadJournal).Entries[0].NetRefHandle.field0_0x0 = FVar8;
    FVar8 = (pFVar21->ReadJournal).Entries[1].NetRefHandle.field0_0x0;
    uVar17 = (pFVar21->ReadJournal).Entries[1].BitOffset;
    uVar12 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[1].field_0x14;
    (pFVar24->ReadJournal).Entries[0].BitOffset = uVar16;
    *(undefined4 *)&(pFVar24->ReadJournal).Entries[0].field_0x14 = uVar11;
    (pFVar24->ReadJournal).Entries[1].Name = pwVar9;
    pwVar7 = (pFVar21->ReadJournal).Entries[2].Name;
    FVar10 = (pFVar21->ReadJournal).Entries[2].NetRefHandle.field0_0x0;
    (pFVar24->ReadJournal).Entries[1].NetRefHandle.field0_0x0 = FVar8;
    (pFVar24->ReadJournal).Entries[1].BitOffset = uVar17;
    *(undefined4 *)&(pFVar24->ReadJournal).Entries[1].field_0x14 = uVar12;
    uVar16 = (pFVar21->ReadJournal).Entries[2].BitOffset;
    uVar11 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[2].field_0x14;
    pwVar9 = (pFVar21->ReadJournal).Entries[3].Name;
    (pFVar24->ReadJournal).Entries[2].Name = pwVar7;
    (pFVar24->ReadJournal).Entries[2].NetRefHandle.field0_0x0 = FVar10;
    FVar8 = (pFVar21->ReadJournal).Entries[3].NetRefHandle.field0_0x0;
    uVar17 = (pFVar21->ReadJournal).Entries[3].BitOffset;
    uVar12 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[3].field_0x14;
    (pFVar24->ReadJournal).Entries[2].BitOffset = uVar16;
    *(undefined4 *)&(pFVar24->ReadJournal).Entries[2].field_0x14 = uVar11;
    (pFVar24->ReadJournal).Entries[3].Name = pwVar9;
    pwVar7 = (pFVar21->ReadJournal).Entries[4].Name;
    FVar10 = (pFVar21->ReadJournal).Entries[4].NetRefHandle.field0_0x0;
    (pFVar24->ReadJournal).Entries[3].NetRefHandle.field0_0x0 = FVar8;
    (pFVar24->ReadJournal).Entries[3].BitOffset = uVar17;
    *(undefined4 *)&(pFVar24->ReadJournal).Entries[3].field_0x14 = uVar12;
    (pFVar24->ReadJournal).Entries[4].Name = pwVar7;
    (pFVar24->ReadJournal).Entries[4].NetRefHandle.field0_0x0 = FVar10;
    lVar25 = lVar25 + -1;
    pFVar13 = (FNetSerializationContext *)&(pFVar21->ReadJournal).Entries[4].BitOffset;
    pFVar14 = (FNetSerializationContext *)&(pFVar24->ReadJournal).Entries[4].BitOffset;
  } while (lVar25 != 0);
  uVar11 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[4].field_0x14;
  pwVar7 = (pFVar21->ReadJournal).Entries[5].Name;
  FVar8 = (pFVar21->ReadJournal).Entries[5].NetRefHandle.field0_0x0;
  uVar16 = (pFVar21->ReadJournal).Entries[5].BitOffset;
  uVar12 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[5].field_0x14;
  (pFVar24->ReadJournal).Entries[4].BitOffset = (pFVar21->ReadJournal).Entries[4].BitOffset;
  *(undefined4 *)&(pFVar24->ReadJournal).Entries[4].field_0x14 = uVar11;
  (pFVar24->ReadJournal).Entries[5].Name = pwVar7;
  pwVar7 = (pFVar21->ReadJournal).Entries[6].Name;
  FVar10 = (pFVar21->ReadJournal).Entries[6].NetRefHandle.field0_0x0;
  (pFVar24->ReadJournal).Entries[5].NetRefHandle.field0_0x0 = FVar8;
  (pFVar24->ReadJournal).Entries[5].BitOffset = uVar16;
  *(undefined4 *)&(pFVar24->ReadJournal).Entries[5].field_0x14 = uVar12;
  uVar16 = (pFVar21->ReadJournal).Entries[6].BitOffset;
  uVar11 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[6].field_0x14;
  pwVar9 = (pFVar21->ReadJournal).Entries[7].Name;
  (pFVar24->ReadJournal).Entries[6].Name = pwVar7;
  (pFVar24->ReadJournal).Entries[6].NetRefHandle.field0_0x0 = FVar10;
  FVar8 = (pFVar21->ReadJournal).Entries[7].NetRefHandle.field0_0x0;
  uVar17 = (pFVar21->ReadJournal).Entries[7].BitOffset;
  uVar12 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[7].field_0x14;
  (pFVar24->ReadJournal).Entries[6].BitOffset = uVar16;
  *(undefined4 *)&(pFVar24->ReadJournal).Entries[6].field_0x14 = uVar11;
  (pFVar24->ReadJournal).Entries[7].Name = pwVar9;
  pwVar7 = (pFVar21->ReadJournal).Entries[8].Name;
  FVar10 = (pFVar21->ReadJournal).Entries[8].NetRefHandle.field0_0x0;
  uVar16 = (pFVar21->ReadJournal).Entries[8].BitOffset;
  uVar11 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[8].field_0x14;
  (pFVar24->ReadJournal).Entries[7].NetRefHandle.field0_0x0 = FVar8;
  (pFVar24->ReadJournal).Entries[7].BitOffset = uVar17;
  *(undefined4 *)&(pFVar24->ReadJournal).Entries[7].field_0x14 = uVar12;
  (pFVar24->ReadJournal).Entries[8].Name = pwVar7;
  (pFVar24->ReadJournal).Entries[8].NetRefHandle.field0_0x0 = FVar10;
  (pFVar24->ReadJournal).Entries[8].BitOffset = uVar16;
  *(undefined4 *)&(pFVar24->ReadJournal).Entries[8].field_0x14 = uVar11;
  local_648.BitStreamWriter = &local_1188;
  pFVar22 = (this->HugeObjectSendQueue).TraceCollector;
  local_648.BitStreamReader = (FNetBitStreamReader *)0x0;
  if (pFVar22 == (FNetTraceCollector *)0x0) {
    if ((GNetTraceRuntimeVerbosity == 0) || (GNetTraceRuntimeVerbosity == 0)) {
      (this->HugeObjectSendQueue).TraceCollector = (FNetTraceCollector *)0x0;
    }
    else {
      pFVar22 = FNetTrace::CreateTraceCollector();
      (this->HugeObjectSendQueue).TraceCollector = pFVar22;
    }
  }
  else {
    FNetTraceCollector::Reset(pFVar22);
  }
  local_648.TraceCollector = (this->HugeObjectSendQueue).TraceCollector;
  local_11c0 = local_1188.BufferBitPosition - local_1188.BufferBitStartOffset;
  local_11c4.ObjectCount = 0;
  FNetObjectBlob::SerializeHeader(&local_648,&local_11c4);
  FNetBitStreamWriter::WriteBits(local_648.BitStreamWriter,this->StreamDebugFeatures,2);
  local_8e0.ParentInternalIndex = local_11d8[0];
  local_1068.RootObjectInternalIndex = 0;
  local_1068.BatchRecord.ObjectReplicationRecords.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0;
  local_1068.BatchRecord.ObjectReplicationRecords.ArrayNum = 0;
  local_1068.BatchRecord.ObjectReplicationRecords.ArrayMax = 0x10;
  local_1068.BatchRecord.BatchCount = 0;
  local_1068.BatchExports.HandlesExportedInCurrentBatch.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetRefHandle>)0x0;
  local_11cc = ((byte)~param_1->bIsInitState & 1) * 2 + 9;
  local_1068.BatchExports.HandlesExportedInCurrentBatch.ArrayMax = 0x20;
  local_1068.BatchExports.NetTokensExportedInCurrentBatch.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetToken>)0x0;
  local_1068.BatchExports.NetTokensExportedInCurrentBatch.ArrayNum = 0;
  local_1068.BatchExports.NetTokensExportedInCurrentBatch.ArrayMax = 0x20;
  local_1068.BatchExports.ReferencesPendingExportInCurrentBatch.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetObjectReference>)0x0;
  local_1068.BatchExports.ReferencesPendingExportInCurrentBatch.ArrayNum = 0;
  local_1068.BatchExports.ReferencesPendingExportInCurrentBatch.ArrayMax = 0x20;
  local_1068.BatchExports.NetTokensPendingExportInCurrentBatch.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetToken>)0x0;
  local_1068.BatchExports.NetTokensPendingExportInCurrentBatch.ArrayNum = 0;
  local_1068.BatchExports.NetTokensPendingExportInCurrentBatch.ArrayMax = 0x20;
  local_1068.Blobs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1068.Blobs.ArrayNum = 0;
  local_1068.Blobs.ArrayMax = 0;
  local_8e0.ObjectInfos.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo>)0x0;
  local_8e0.ObjectInfos.ArrayNum = 0;
  local_8e0.ObjectInfos.ArrayMax = 0x10;
  local_8e0.Type = Internal;
  local_1068.BatchExports.HandlesExportedInCurrentBatch.ArrayNum = 0;
  Core::Private::
  ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
            (8,8,0,(ForElementType<UE::Net::FNetRefHandle> *)&local_1068.BatchExports,0,
             &local_1068.BatchExports.HandlesExportedInCurrentBatch.ArrayMax);
  local_1068.BatchExports.NetTokensExportedInCurrentBatch.ArrayNum = 0;
  if (local_1068.BatchExports.NetTokensExportedInCurrentBatch.ArrayMax != 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
              (4,4,0,&local_1068.BatchExports.NetTokensExportedInCurrentBatch.AllocatorInstance,0,
               &local_1068.BatchExports.NetTokensExportedInCurrentBatch.ArrayMax);
  }
  local_1068.BatchExports.ReferencesPendingExportInCurrentBatch.ArrayNum = 0;
  if (local_1068.BatchExports.ReferencesPendingExportInCurrentBatch.ArrayMax != 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_>
              (0x10,8,0,&local_1068.BatchExports.ReferencesPendingExportInCurrentBatch.
                         AllocatorInstance,0,
               &local_1068.BatchExports.ReferencesPendingExportInCurrentBatch.ArrayMax);
  }
  local_1068.BatchExports.NetTokensPendingExportInCurrentBatch.ArrayNum = 0;
  if (local_1068.BatchExports.NetTokensPendingExportInCurrentBatch.ArrayMax != 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
              (4,4,0,&local_1068.BatchExports.NetTokensPendingExportInCurrentBatch.AllocatorInstance
               ,0,&local_1068.BatchExports.NetTokensPendingExportInCurrentBatch.ArrayMax);
  }
  local_1158.AcknowledgedExports = &this->NetExports->AcknowledgedExports;
  uVar16 = 0xffffffff;
  local_1158.BatchExports = &local_1068.BatchExports;
  pFVar22 = pFVar29;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar22 = local_648.TraceCollector;
  }
  local_1148 = &local_648;
  local_1140 = local_648.ExportContext;
  local_648.ExportContext = &local_1158;
  local_1168 = local_648.BitStreamWriter;
  local_11d0 = 0xffffffff;
  local_1190 = pFVar22;
  if (pFVar22 != (FNetTraceCollector *)0x0) {
    uVar16 = (local_648.BitStreamWriter)->BufferBitPosition;
    if ((local_648.BitStreamWriter)->OverflowBitCount != 0) {
      uVar16 = 0;
    }
    uVar16 = FNetTrace::BeginPacketContentEvent(pFVar22,NameId,uVar16);
    local_11d0 = uVar16;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      HugeObjectState = CreatePersistentNetDebugName(L"HugeObjectState",0xf);
      _Init_thread_footer(&::_TSS0);
    }
    uVar17 = FNetTrace::TraceName(HugeObjectState);
    FVar27 = (pFVar22->Events).AllocatorInstance.SecondaryData;
    if (FVar27 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar27 = (ForElementType<FNetTracePacketContentEvent>)&pFVar22->Events;
    }
    *(uint *)((longlong)FVar27 + (ulonglong)uVar16 * 0x10) = uVar17;
  }
  EVar18 = WriteObjectInBatch(this,&local_648,local_11d8[0],local_11cc,&local_8e0);
  uVar17 = 0;
  if (EVar18 == BitStreamOverflow) {
    HandleObjectBatchFailure(this,BitStreamOverflow,&local_8e0,&this->WriteBitStreamInfo);
    FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this->NetRefHandleManager,local_11d8[0]);
    if (1 < (byte)LogIris._0_1_) {
      FNetRefHandleManager::PrintObjectFromIndex
                (this->NetRefHandleManager,&local_1088,local_11d8[0]);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_1088.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1088.Data.AllocatorInstance.Data);
      }
    }
    bVar15 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<7868239365963516867>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                        ,0xbc3,"false");
    FVar28 = NetError_ObjectStateTooLarge;
    if (bVar15) {
      pcVar5 = (code *)swi(3);
      EVar19 = (*pcVar5)();
      return EVar19;
    }
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar28);
    EVar19 = Abort;
LAB_14430b394:
    if (local_11d0 != 0xffffffff) {
      uVar16 = local_1168->BufferBitPosition;
      if (local_1168->OverflowBitCount != 0) {
        uVar16 = uVar17;
      }
      FNetTrace::EndPacketContentEvent(local_1190,local_11d0,uVar16);
    }
    local_1148->ExportContext = local_1140;
  }
  else {
    if (InvalidState < EVar18) {
      HandleObjectBatchFailure(this,EVar18,&local_8e0,&this->WriteBitStreamInfo);
      if (5 < (byte)LogIris._0_1_) {
        FNetRefHandleManager::PrintObjectFromIndex
                  (this->NetRefHandleManager,&local_1078,local_11d8[0]);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_1078.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1078.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14430b394;
    }
    if (uVar16 != 0xffffffff) {
      uVar30 = local_1168->BufferBitPosition;
      if (local_1168->OverflowBitCount != 0) {
        uVar30 = uVar17;
      }
      FNetTrace::EndPacketContentEvent(local_1190,uVar16,uVar30);
    }
    local_1148->ExportContext = local_1140;
    if (*(int *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x8 ==
        *(int *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x34) {
      QueryPerformanceCounter(&local_1138);
      (this->HugeObjectSendQueue).Stats.StartSendingTime = (ulong64)local_1138;
    }
    local_1068.RootObjectInternalIndex = local_11d8[0];
    HandleObjectBatchSuccess(this,&local_8e0,&local_1068.BatchRecord);
    uVar16 = local_1188.BufferBitPosition - local_1188.BufferBitStartOffset;
    local_11c4.ObjectCount = local_1068.BatchRecord.BatchCount;
    if ((local_1188.OverflowBitCount != 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Writer.IsOverflown()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetBitStreamUtil.h"
                            ,0x18,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      EVar19 = (*pcVar5)();
      return EVar19;
    }
    FNetBitStreamWriter::Seek(&local_1188,local_11c0);
    FNetObjectBlob::SerializeHeader(&local_648,&local_11c4);
    if ((uVar16 < local_1188.BufferBitPosition - local_1188.BufferBitStartOffset) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Writer.GetPosBits() <= OriginalPos",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetBitStreamUtil.h"
                            ,0x21,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      EVar19 = (*pcVar5)();
      return EVar19;
    }
    FNetBitStreamWriter::Seek(&local_1188,uVar16);
    FNetBitStreamWriter::CommitWrites(&local_1188);
    local_11c0 = (local_1188.BufferBitPosition - local_1188.BufferBitStartOffset) + 0x1f >> 5;
    if ((local_1198[0] < local_11c0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("StorageWordsWritten <= (uint32)HugeObjectPayload.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                            ,0xbec,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      EVar19 = (*pcVar5)();
      return EVar19;
    }
    local_10f8 = local_11a0.Data;
    uStack_10f0 = local_11c0;
    uStack_10d0 = CONCAT44(uStack_10ec,local_11c0);
    local_10d8 = local_11a0.Data;
    UNetObjectBlobHandler::CreateNetObjectBlob
              (this->NetObjectBlobHandler,(TArrayView<unsigned_int_const_,int> *)local_1160,
               (uint)&local_10d8);
    this_00 = this->PartialNetObjectAttachmentHandler;
    pFVar4 = (this->HugeObjectSendQueue).DebugName;
    local_11b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_11b8.ArrayNum = 0;
    local_11b8.ArrayMax = 0;
    local_11a8.Reference = (FRawDataNetBlob *)local_1160;
    if (local_1160 != (undefined1  [8])0x0) {
      *(int *)((longlong)local_1160 + 0x28) = (int)*(longlong *)((longlong)local_1160 + 0x28) + 1;
    }
    bVar15 = UPartialNetObjectAttachmentHandler::SplitRawDataNetBlob
                       (this_00,&local_11a8,&local_11b8,pFVar4);
    if (local_11a8.Reference != (FRawDataNetBlob *)0x0) {
      FNetBlob::Release((FNetBlob *)local_11a8.Reference);
    }
    if (bVar15) {
      local_1190 = (FNetTraceCollector *)local_11b8.AllocatorInstance.Data;
      iVar23 = local_11b8.ArrayNum;
      if ((local_11b8.ArrayNum < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        EVar19 = (*pcVar5)();
        return EVar19;
      }
      local_10e8 = local_1190;
      iStack_10e0 = iVar23;
      local_10b8._12_4_ = uStack_10dc;
      local_10b8.ArrayNum = iVar23;
      local_10b8.DataPtr = (TRefCountPtr<UE::Net::FNetBlob> *)local_1190;
      bVar15 = FNetObjectAttachmentsWriter::Enqueue(&this->Attachments,HugeObject,0,&local_10b8);
      if (!bVar15) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("bEnqueueSuccess",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                            ,0xbfb,L"");
        if (bVar15) {
          pcVar5 = (code *)swi(3);
          EVar19 = (*pcVar5)();
          return EVar19;
        }
        FVar28 = GNetError_InternalError;
        if (1 < (byte)LogIris._0_1_) {
          FNetRefHandleManager::PrintObjectFromIndex
                    (this->NetRefHandleManager,&local_10a8,local_11d8[0]);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
LAB_14430b90b:
          FVar28 = GNetError_InternalError;
          if (local_10a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_10a8.Data.AllocatorInstance.Data);
            FVar28 = GNetError_InternalError;
          }
        }
        goto LAB_14430b91c;
      }
      DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
                ((TRefCountPtr<UE::Net::FNetBlob> *)local_1068.Blobs.AllocatorInstance.Data,
                 local_1068.Blobs.ArrayNum);
      if ((FNetTraceCollector *)local_1068.Blobs.AllocatorInstance.Data != (FNetTraceCollector *)0x0
         ) {
        FMemory::Free(local_1068.Blobs.AllocatorInstance.Data);
      }
      iVar23 = *(int *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x8;
      iVar3 = *(int *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x34;
      local_1068.Blobs.AllocatorInstance.Data = local_11b8.AllocatorInstance.Data;
      iVar6 = 1;
      if (1 < GReplicationWriterMaxHugeObjectsInTransit) {
        iVar6 = GReplicationWriterMaxHugeObjectsInTransit;
      }
      local_11b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1068.Blobs.ArrayNum = local_11b8.ArrayNum;
      local_1068.Blobs.ArrayMax = local_11b8.ArrayMax;
      local_11b8.ArrayNum = 0;
      local_11b8.ArrayMax = 0;
      if (iVar6 < iVar23 - iVar3) {
LAB_14430b89e:
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("bHugeObjectWasEnqueued",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                            ,0xc06,L"");
        if (bVar15) {
          pcVar5 = (code *)swi(3);
          EVar19 = (*pcVar5)();
          return EVar19;
        }
        FVar28 = GNetError_InternalError;
        if (1 < (byte)LogIris._0_1_) {
          FNetRefHandleManager::PrintObjectFromIndex
                    (this->NetRefHandleManager,&local_1098,local_11d8[0]);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          local_10a8.Data.AllocatorInstance.Data = local_1098.Data.AllocatorInstance.Data;
          goto LAB_14430b90b;
        }
        goto LAB_14430b91c;
      }
      if (iVar23 != iVar3) {
        FVar26 = (this->HugeObjectSendQueue).RootObjectsInTransit.Hash.SecondaryData;
        if (FVar26 == (ForElementType<FSetElementId>)0x0) {
          FVar26 = (ForElementType<FSetElementId>)
                   &(this->HugeObjectSendQueue).RootObjectsInTransit.Hash;
        }
        iVar23 = *(int *)((longlong)FVar26 +
                         (ulonglong)
                         ((this->HugeObjectSendQueue).RootObjectsInTransit.HashSize - 1U &
                         local_1068.RootObjectInternalIndex) * 4);
        if (iVar23 != -1) {
          lVar25 = *(longlong *)&(this->HugeObjectSendQueue).RootObjectsInTransit.Elements;
          do {
            lVar2 = lVar25 + (longlong)iVar23 * 0xc;
            if (*(uint *)(lVar25 + (longlong)iVar23 * 0xc) == local_1068.RootObjectInternalIndex) {
              if (lVar2 != 0) {
                local_1130 = &local_1068;
                `UE::Net::Private::FReplicationWriter::FHugeObjectSendQueue::EnqueueHugeObject'::
                __l8::<lambda_1>::operator()(&local_1130);
                goto LAB_14430b89e;
              }
              break;
            }
            iVar23 = *(int *)(lVar2 + 4);
          } while (iVar23 != -1);
        }
      }
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
      Emplace<unsigned_int_const_&>(local_1128,&local_11cc,(bool *)&local_1068);
      TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext>::AddTail
                (&(this->HugeObjectSendQueue).SendContexts,&local_1068);
      this_01 = param_1->BitStreamWriter;
      pFVar22 = pFVar29;
      if (GNetTraceRuntimeVerbosity != 0) {
        pFVar22 = param_1->TraceCollector;
      }
      local_11d0 = 0xffffffff;
      local_11a8.Reference = (FRawDataNetBlob *)&this_01->BufferBitPosition;
      if (pFVar22 != (FNetTraceCollector *)0x0) {
        uVar16 = *(uint *)local_11a8.Reference;
        if (this_01->OverflowBitCount != 0) {
          uVar16 = 0;
        }
        local_11d0 = FNetTrace::BeginPacketContentEvent(pFVar22,NameId,uVar16);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          Batch = CreatePersistentNetDebugName(L"Batch",5);
          _Init_thread_footer(&::_TSS0);
        }
        uVar16 = FNetTrace::TraceName(Batch);
        FVar27 = (pFVar22->Events).AllocatorInstance.SecondaryData;
        if (FVar27 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar27 = (ForElementType<FNetTracePacketContentEvent>)&pFVar22->Events;
        }
        *(uint *)((longlong)FVar27 + (ulonglong)local_11d0 * 0x10) = uVar16;
      }
      local_11cc = this_01->BufferBitPosition - this_01->BufferBitStartOffset;
      local_2d8.ObjectInfos.AllocatorInstance.SecondaryData =
           (ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo>)0x0;
      local_2d8.ObjectInfos.ArrayNum = 0;
      local_2d8.ObjectInfos.ArrayMax = 0x10;
      local_2d8.ParentInternalIndex = 0;
      local_2d8.Type = HugeObject;
      local_11c8 = WriteObjectInBatch(this,param_1,0,6,&local_2d8);
      uVar30 = *(uint *)&(local_11a8.Reference)->_padding_ - local_11cc;
      uVar16 = this_01->BufferBitStartOffset;
      if ((local_11c8 < BitStreamOverflow) && (uVar30 != uVar16)) {
        local_a78.ObjectReplicationRecords.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0;
        local_a78.ObjectReplicationRecords.ArrayNum = 0;
        local_a78.ObjectReplicationRecords.ArrayMax = 0x10;
        local_a78.BatchCount = 0;
        HandleObjectBatchSuccess(this,&local_2d8,&local_a78);
        CommitBatchRecord(this,&local_a78);
        bVar15 = FNetObjectAttachmentsWriter::HasUnsentAttachments(&this->Attachments,HugeObject,0);
        (this->WriteContext).bHasHugeObjectToSend = 0;
        puVar1 = &(this->WriteContext).field_0xd4;
        *(uint *)puVar1 = *(uint *)puVar1 | (uint)bVar15 << 3;
        if (!bVar15) {
          QueryPerformanceCounter(&local_1120);
          (this->HugeObjectSendQueue).Stats.EndSendingTime = (ulong64)local_1120;
        }
        pFVar29 = (FNetTraceCollector *)&DAT_00000001;
        if (local_a78.ObjectReplicationRecords.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0) {
          FMemory::Free((void *)local_a78.ObjectReplicationRecords.AllocatorInstance.SecondaryData);
        }
      }
      else {
        HandleObjectBatchFailure(this,local_11c8,&local_2d8,&this->WriteBitStreamInfo);
        if ((uVar30 != uVar16) && (local_11c8 != BitStreamOverflow)) {
          local_1118 = &local_11c8;
          `UE::Net::Private::FReplicationWriter::PrepareAndSendHugeObjectPayload'::__l148::
          <lambda_4>::operator()(&local_1118);
        }
        (this->WriteContext).bHasHugeObjectToSend = 1;
      }
      EVar19 = (EWriteStatus)pFVar29;
      if (local_2d8.ObjectInfos.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo>)0x0) {
        FMemory::Free((void *)local_2d8.ObjectInfos.AllocatorInstance.SecondaryData);
      }
      if (this_01->OverflowBitCount != 0) {
        FNetBitStreamWriter::Seek(this_01,local_11cc);
      }
      if (local_11d0 != 0xffffffff) {
        uVar16 = this_01->BufferBitPosition;
        if (this_01->OverflowBitCount != 0) {
          uVar16 = uVar17;
        }
        FNetTrace::EndPacketContentEvent(pFVar22,local_11d0,uVar16);
      }
    }
    else {
      FVar28 = NetError_ObjectStateTooLarge;
      if (1 < (byte)LogIris._0_1_) {
        FNetRefHandleManager::PrintObjectFromIndex
                  (this->NetRefHandleManager,&local_10c8,local_11d8[0]);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        FVar28 = NetError_ObjectStateTooLarge;
        if (local_10c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_10c8.Data.AllocatorInstance.Data);
          FVar28 = NetError_ObjectStateTooLarge;
        }
      }
LAB_14430b91c:
      FNetSerializationContext::SetBitStreamOverflow(param_1);
      FNetErrorContext::SetError(&param_1->ErrorContext,FVar28);
      EVar19 = Abort;
    }
    DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
              ((TRefCountPtr<UE::Net::FNetBlob> *)local_11b8.AllocatorInstance.Data,
               local_11b8.ArrayNum);
    if ((FNetTraceCollector *)local_11b8.AllocatorInstance.Data != (FNetTraceCollector *)0x0) {
      FMemory::Free(local_11b8.AllocatorInstance.Data);
    }
    if (local_1160 != (undefined1  [8])0x0) {
      FNetBlob::Release((FNetBlob *)local_1160);
    }
  }
  if (local_8e0.ObjectInfos.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo>)0x0) {
    FMemory::Free((void *)local_8e0.ObjectInfos.AllocatorInstance.SecondaryData);
  }
  DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
            ((TRefCountPtr<UE::Net::FNetBlob> *)local_1068.Blobs.AllocatorInstance.Data,
             local_1068.Blobs.ArrayNum);
  if ((FNetTraceCollector *)local_1068.Blobs.AllocatorInstance.Data != (FNetTraceCollector *)0x0) {
    FMemory::Free(local_1068.Blobs.AllocatorInstance.Data);
  }
  if (local_1068.BatchExports.NetTokensPendingExportInCurrentBatch.AllocatorInstance.SecondaryData
      != (ForElementType<UE::Net::FNetToken>)0x0) {
    FMemory::Free((void *)local_1068.BatchExports.NetTokensPendingExportInCurrentBatch.
                          AllocatorInstance.SecondaryData);
  }
  if (local_1068.BatchExports.ReferencesPendingExportInCurrentBatch.AllocatorInstance.SecondaryData
      != (ForElementType<UE::Net::FNetObjectReference>)0x0) {
    FMemory::Free((void *)local_1068.BatchExports.ReferencesPendingExportInCurrentBatch.
                          AllocatorInstance.SecondaryData);
  }
  if (local_1068.BatchExports.NetTokensExportedInCurrentBatch.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Net::FNetToken>)0x0) {
    FMemory::Free((void *)local_1068.BatchExports.NetTokensExportedInCurrentBatch.AllocatorInstance.
                          SecondaryData);
  }
  if (local_1068.BatchExports.HandlesExportedInCurrentBatch.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Net::FNetRefHandle>)0x0) {
    FMemory::Free((void *)local_1068.BatchExports.HandlesExportedInCurrentBatch.AllocatorInstance.
                          SecondaryData);
  }
  if (local_1068.BatchRecord.ObjectReplicationRecords.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0) {
    FMemory::Free((void *)local_1068.BatchRecord.ObjectReplicationRecords.AllocatorInstance.
                          SecondaryData);
  }
  FNetBitStreamWriter::~FNetBitStreamWriter(&local_1188);
  if (local_11a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_11a0.Data);
  }
LAB_14430bbcf:
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar19;
}

// PrintObjectInfo @ 14430bca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UE::Net::Private::FReplicationWriter::PrintObjectInfo
          (FReplicationWriter *this,FString *__return_storage_ptr__,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  void *pvVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_4b8 [32];
  wchar_t *local_498;
  double local_490;
  ulonglong local_488;
  FString *local_478;
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [512];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_4b8;
  iVar1 = (this->ReplicatedObjects).ArrayNum;
  local_490 = (double)(longlong)iVar1;
  uVar8 = 0;
  if ((int)param_1 < iVar1) {
    uVar8 = ~param_1 >> 0x1f;
  }
  local_478 = __return_storage_ptr__;
  if (uVar8 == 0) {
    local_498 = (wchar_t *)(longlong)(int)param_1;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
  }
  pFVar2 = (this->ReplicatedObjects).AllocatorInstance.Data;
  local_468.Base = local_448;
  iVar1 = (this->SchedulingPriorities).ArrayNum;
  local_490 = (double)(longlong)iVar1;
  local_468.CurPos = local_448;
  local_468.End = (wchar_t *)local_48;
  lVar10 = (longlong)(int)param_1;
  local_468.bIsDynamic = false;
  local_468.bIsExternal = false;
  uVar9 = *(ulonglong *)(pFVar2 + lVar10 * 0x10 + 8);
  uVar8 = 0;
  if ((int)param_1 < iVar1) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (local_498 = (wchar_t *)lVar10,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
  bVar7 = (byte)((ulonglong)*(undefined8 *)(pFVar2 + lVar10 * 0x10 + 8) >> 0x10) & 0x1f;
  if (bVar7 < 0xe) {
    local_498 = Names[bVar7];
  }
  else {
    local_498 = L"";
  }
  local_490 = (double)*(float *)((this->SchedulingPriorities).AllocatorInstance.Data + lVar10 * 4);
  local_488 = (ulonglong)((uint)(uVar9 >> 0x1f) & 3);
  TStringBuilderBase<wchar_t>::AppendfImpl
            (&local_468,
             L"Status info: 0x%llx (%s) | %s | SchedulingPriority: %f | LastAckedBaselineIndex: %u | Flags"
            );
  if ((*(uint *)(pFVar2 + lVar10 * 0x10 + 8) >> 0x17 & 1) != 0) {
    if (local_468.End < local_468.CurPos + 0x15) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,0x15);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_468.CurPos,L" | HasDirtyChangeMask",0x2a);
    local_468.CurPos = (wchar_t *)((longlong)pvVar6 + 0x2a);
  }
  if ((*(uint *)(pFVar2 + lVar10 * 0x10 + 8) >> 0x15 & 1) != 0) {
    if (local_468.End < local_468.CurPos + 0x15) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,0x15);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_468.CurPos,L" | HasDirtySubObjects",0x2a);
    local_468.CurPos = (wchar_t *)((longlong)pvVar6 + 0x2a);
  }
  if ((*(uint *)(pFVar2 + lVar10 * 0x10 + 8) >> 0x18 & 1) != 0) {
    if (local_468.End < local_468.CurPos + 0x11) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,0x11);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_468.CurPos,L" | HasAttachments",0x22);
    local_468.CurPos = (wchar_t *)((longlong)pvVar6 + 0x22);
  }
  if ((*(uint *)(pFVar2 + lVar10 * 0x10 + 8) >> 0x1b & 1) != 0) {
    if (local_468.End < local_468.CurPos + 0x16) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,0x16);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_468.CurPos,L" | IsCreationConfirmed",0x2c);
    local_468.CurPos = (wchar_t *)((longlong)pvVar6 + 0x2c);
  }
  if ((*(uint *)(pFVar2 + lVar10 * 0x10 + 8) >> 0x1c & 1) != 0) {
    if (local_468.End < local_468.CurPos + 10) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,10);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_468.CurPos,L" | TearOff",0x14);
    local_468.CurPos = (wchar_t *)((longlong)pvVar6 + 0x14);
  }
  if ((*(uint *)(pFVar2 + lVar10 * 0x10 + 8) >> 0x1d & 1) != 0) {
    if (local_468.End < local_468.CurPos + 0x1a) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,0x1a);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_468.CurPos,L" | SubObjectPendingDestroy",0x34);
    local_468.CurPos = (wchar_t *)((longlong)pvVar6 + 0x34);
  }
  if ((*(uint *)(pFVar2 + lVar10 * 0x10 + 8) >> 0x1e & 1) != 0) {
    if (local_468.End < local_468.CurPos + 0x1c) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,0x1c);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_468.CurPos,L" | IsDeltaCompressionEnabled",0x38);
    local_468.CurPos = (wchar_t *)((longlong)pvVar6 + 0x38);
  }
  if ((*(ulonglong *)(pFVar2 + lVar10 * 0x10 + 8) & 0x4000000000) != 0) {
    if (local_468.End < local_468.CurPos + 0x17) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,0x17);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_468.CurPos,L" | HasDirtyConditionals",0x2e);
    local_468.CurPos = (wchar_t *)((longlong)pvVar6 + 0x2e);
  }
  pFVar2 = (this->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data;
  if (((this->ObjectsWithDirtyChanges).BitCount <= param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
  uVar9 = (ulonglong)(param_1 >> 5);
  uVar8 = 1 << ((byte)param_1 & 0x1f);
  if ((*(uint *)(pFVar2 + uVar9 * 4) & uVar8) != 0) {
    if (local_468.End < local_468.CurPos + 0x13) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,0x13);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_468.CurPos,L" | IsInDirtyChanges",0x26);
    local_468.CurPos = (wchar_t *)((longlong)pvVar6 + 0x26);
  }
  pFVar2 = (this->ObjectsPendingDestroy).Storage.AllocatorInstance.Data;
  if (((this->ObjectsPendingDestroy).BitCount <= param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
  if ((*(uint *)(pFVar2 + uVar9 * 4) & uVar8) != 0) {
    if (local_468.End < local_468.CurPos + 0x15) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,0x15);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_468.CurPos,L" | IsInPendingDestroy",0x2a);
    local_468.CurPos = (wchar_t *)((longlong)pvVar6 + 0x2a);
  }
  pFVar2 = (this->ObjectsInScope).Storage.AllocatorInstance.Data;
  if (((this->ObjectsInScope).BitCount <= param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
  if ((*(uint *)(pFVar2 + uVar9 * 4) & uVar8) != 0) {
    if (local_468.End < local_468.CurPos + 0xc) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,0xc);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_468.CurPos,L" | IsInScope",0x18);
    local_468.CurPos = (wchar_t *)((longlong)pvVar6 + 0x18);
  }
  bVar4 = FHugeObjectSendQueue::IsObjectInQueue(&this->HugeObjectSendQueue,param_1,false);
  if (bVar4) {
    if (local_468.End < local_468.CurPos + 0x15) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,0x15);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_468.CurPos,L" | IsActiveHugeObject",0x2a);
    local_468.CurPos = (wchar_t *)((longlong)pvVar6 + 0x2a);
  }
  if (local_468.End < local_468.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_468,1);
  }
  *local_468.CurPos = L'\0';
  ::FString::FString(local_478,local_468.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
  return local_478;
}

// ProcessDeliveryNotification @ 14430c2d0

void __thiscall
UE::Net::Private::FReplicationWriter::ProcessDeliveryNotification
          (FReplicationWriter *this,EPacketDeliveryStatus param_1)

{
  FReplicationRecord *this_00;
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  <lambda_1> local_res8 [2];
  <lambda_2> local_res18;
  <lambda_3> local_res20;
  TReplicationRecordHelper local_38;
  
  this_00 = &this->ReplicationRecord;
  bVar2 = s_ValidateReplicationRecord
                    (this_00,this->NetRefHandleManager->MaxActiveObjectCount + 1,true);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("s_ValidateReplicationRecord(&ReplicationRecord, NetRefHandleManager->GetMaxActiveObjectCount() + 1U, true)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                       ,0x704,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = FReplicationRecord::PopRecord(this_00);
  if (uVar3 != 0) {
    local_38.ReplicationInfos = &this->ReplicatedObjects;
    local_38.ReplicationInfosRecordInfoLists = &this->ReplicatedObjectsRecordInfoLists;
    uVar4 = (uint)uVar3;
    local_38.ReplicationRecord = this_00;
    if (param_1 == Delivered) {
      local_res8[0].__this = this;
      TReplicationRecordHelper::
      Process<_UE::Net::Private::FReplicationWriter::ProcessDeliveryNotification_::__l15::<lambda_1>_>
                (&local_38,uVar4,local_res8);
      return;
    }
    if (param_1 == Lost) {
      local_res18.__this = this;
      TReplicationRecordHelper::
      Process<_UE::Net::Private::FReplicationWriter::ProcessDeliveryNotification_::__l19::<lambda_2>_>
                (&local_38,uVar4,&local_res18);
      return;
    }
    if (param_1 == Discard) {
      local_res20.__this = this;
      TReplicationRecordHelper::
      Process<_UE::Net::Private::FReplicationWriter::ProcessDeliveryNotification_::__l23::<lambda_3>_>
                (&local_38,uVar4,&local_res20);
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                       ,0x72a,L"Unknown packet delivery status %u");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// QueueNetObjectAttachments @ 14430d2e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FReplicationWriter::QueueNetObjectAttachments
          (FReplicationWriter *this,uint param_1,uint param_2,
          TArrayView<TRefCountPtr<UE::Net::FNetBlob>_const_,int> *param_3,
          ENetObjectAttachmentSendPolicyFlags param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FReplicationInfo *pFVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  ENetObjectAttachmentType EVar9;
  undefined1 local_res20 [8];
  TArrayView<TRefCountPtr<UE::Net::FNetBlob>_const_,int> local_38;
  
  if (param_3->ArrayNum < 1) {
    `UE::Net::Private::FReplicationWriter::QueueNetObjectAttachments'::__l5::<lambda_1>::operator()
              (local_res20);
    return false;
  }
  uVar7 = param_1;
  if (param_2 != 0) {
    uVar7 = param_2;
  }
  pFVar1 = (this->ObjectsInScope).Storage.AllocatorInstance.Data;
  if (((this->ObjectsInScope).BitCount <= uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  EVar9 = OutOfBand;
  uVar8 = 1 << ((byte)uVar7 & 0x1f) & *(uint *)(pFVar1 + (ulonglong)(uVar7 >> 5) * 4);
  if ((uVar8 == 0) && ((this->Parameters).bAllowSendingAttachmentsToObjectsNotInScope == false)) {
    if ((2 < (byte)LogIris._0_1_) && (bWarnAboutDroppedAttachmentsToObjectsNotInScope != false)) {
      if ((param_3->ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      return false;
    }
  }
  else {
    if ((param_4 & ScheduleAsOOB) != None) {
      pFVar5 = GetReplicationInfo(this,uVar7);
      bVar6 = (byte)((uint)*(undefined4 *)&pFVar5->field1_0x8 >> 0x10) & 0x1f;
      if ((bVar6 < 4) || (9 < bVar6)) {
        if ((byte)LogIris._0_1_ < 3) {
          return false;
        }
        if (bWarnAboutDroppedAttachmentsToObjectsNotInScope == false) {
          return false;
        }
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        return false;
      }
    }
    if ((uVar8 == 0) ||
       (((param_4 & ScheduleAsOOB) != None &&
        ((uVar8 == 0 || (uVar7 = 0, (param_4 & ScheduleAsOOB) != None)))))) {
      uVar7 = 0;
    }
    else {
      EVar9 = Normal;
    }
    local_38.DataPtr = param_3->DataPtr;
    local_38.ArrayNum = param_3->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_3->field_0xc;
    bVar3 = FNetObjectAttachmentsWriter::Enqueue(&this->Attachments,EVar9,uVar7,&local_38);
    if (bVar3) {
      if (uVar7 != 0) {
        pFVar5 = GetReplicationInfo(this,uVar7);
        (pFVar5->field1_0x8).Value = (pFVar5->field1_0x8).Value | 0x1000000;
        MarkObjectDirty(this,uVar7,"QueueAttachment");
        if (param_1 != uVar7) {
          MarkObjectDirty(this,param_1,"QueueAttachment2");
          pFVar5 = GetReplicationInfo(this,param_1);
          (pFVar5->field1_0x8).Value = (pFVar5->field1_0x8).Value | 0x200000;
        }
      }
      return true;
    }
  }
  return false;
}

// ScheduleDependentObjects @ 14430f7b0

void __thiscall
UE::Net::Private::FReplicationWriter::ScheduleDependentObjects
          (FReplicationWriter *this,uint param_1,float param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,FScheduleObjectInfo *param_4,
          uint *param_5)

{
  float fVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint *puVar6;
  bool bVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  FDependentObjectInfo *pFVar11;
  uint uVar12;
  float fVar13;
  TArrayView<UE::Net::Private::FDependentObjectInfo_const_,int> local_88;
  FNetBitArrayView local_78 [5];
  
  FNetRefHandleManager::GetDependentObjectInfos(this->NetRefHandleManager,&local_88,param_1);
  uVar5 = __real_7f800000;
  pFVar11 = local_88.DataPtr;
  do {
    if (pFVar11 == local_88.DataPtr + local_88.ArrayNum) {
      return;
    }
    uVar2 = pFVar11->NetRefIndex;
    pFVar3 = (this->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data;
    if (((this->ObjectsWithDirtyChanges).BitCount <= uVar2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar12 = 1 << ((byte)uVar2 & 0x1f);
    fVar13 = param_2;
    if ((*(uint *)(pFVar3 + (ulonglong)(uVar2 >> 5) * 4) & uVar12) != 0) {
      uVar10 = ~uVar2 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar2 < (this->ReplicatedObjects).ArrayNum) {
        uVar8 = uVar10;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((pFVar11->SchedulingHint == ScheduleBeforeParent) ||
         ((pFVar11->SchedulingHint == ScheduleBeforeParentIfInitialState &&
          ((bVar9 = (byte)((uint)*(undefined4 *)
                                  ((this->ReplicatedObjects).AllocatorInstance.Data +
                                  (longlong)(int)uVar2 * 0x10 + 8) >> 0x10) & 0x1f, bVar9 == 3 ||
           (bVar9 == 4)))))) {
        uVar8 = 0;
        if ((int)uVar2 < param_3->ArrayNum) {
          uVar8 = uVar10;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar1 = *(float *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar2 * 4);
        fVar13 = (float)nextafterf(param_2,uVar5);
        if (fVar13 <= fVar1) {
          fVar13 = fVar1;
        }
        uVar8 = 0;
        if ((int)uVar2 < param_3->ArrayNum) {
          uVar8 = uVar10;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(float *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar2 * 4) = fVar13;
        uVar8 = *param_5;
        param_4[uVar8].SortKey = fVar13;
        param_4[uVar8].Index = uVar2;
        *param_5 = *param_5 + 1;
      }
    }
    FNetBitArrayView::FNetBitArrayView
              (local_78,(uint *)(this->NetRefHandleManager->
                                ObjectsWithDependentObjectsInternalIndices).Storage.
                                AllocatorInstance.Data,
               (this->NetRefHandleManager->ObjectsWithDependentObjectsInternalIndices).BitCount);
    puVar6 = local_78[0].Storage;
    if ((local_78[0].BitCount <= uVar2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((puVar6[uVar2 >> 5] & uVar12) != 0) {
      ScheduleDependentObjects(this,uVar2,fVar13,param_3,param_4,param_5);
    }
    pFVar11 = pFVar11 + 1;
  } while( true );
}

// ScheduleObjects @ 14430fae0

uint __thiscall
UE::Net::Private::FReplicationWriter::ScheduleObjects
          (FReplicationWriter *this,FScheduleObjectInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  FNetRefHandleManager *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  uint local_res8 [2];
  FScheduleObjectInfo *local_res10;
  <lambda_1> local_28;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1144,"FReplicationWriter_ScheduleObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
               ,0x478);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1144);
  }
  pFVar1 = (this->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data;
  local_res8[0] = 0;
  local_res10 = param_1;
  if (((this->ObjectsWithDirtyChanges).BitCount == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  *(uint *)pFVar1 = *(uint *)pFVar1 & 0xfffffffe;
  local_28.ScheduledObjectIndices = &local_res10;
  pFVar2 = this->NetRefHandleManager;
  local_28.ScheduledObjectCount = local_res8;
  local_28.__this = this;
  if (((this->ObjectsWithDirtyChanges).BitCount != (pFVar2->SubObjectInternalIndices).BitCount) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.GetNumBits() == B.GetNumBits()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x555,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  FNetBitArrayHelper::
  ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UE::Net::Private::FReplicationWriter::ScheduleObjects_::__l2::<lambda_1>_&>
            ((uint *)(this->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data,
             (uint *)(pFVar2->SubObjectInternalIndices).Storage.AllocatorInstance.Data,
             (this->ObjectsWithDirtyChanges).Storage.ArrayNum,
             (this->ObjectsWithDirtyChanges).BitCount,FNetBitArrayBase::AndNotOp,&local_28);
  uVar5 = local_res8[0];
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return uVar5;
}

// SerializeObjectStateDelta @ 144311ac0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationWriter::SerializeObjectStateDelta
          (FReplicationWriter *this,FNetSerializationContext *param_1,uint param_2,
          FReplicationInfo *param_3,FReplicatedObjectData *param_4,uchar *param_5,
          FDeltaCompressionBaseline *param_6,uint param_7)

{
  FNetBitStreamWriter *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  FNetTraceCollector *pFVar6;
  
  this_00 = param_1->BitStreamWriter;
  FNetBitStreamWriter::WriteBits(this_00,(uint)((param_3->field1_0x8).Value >> 0x1f) & 3,2);
  if (((param_3->field1_0x8).Value & 0x180000000) == 0x100000000) {
    FNetBitStreamWriter::WriteBits(this_00,param_7,2);
    if (0x40 < (param_3->field1_0x8)._s_1.ChangeMaskBitCount) {
      param_3 = (FReplicationInfo *)(param_3->ChangeMaskOrPtr).ChangeMaskOrPointer;
    }
    FReplicationProtocolOperations::SerializeWithMask
              (param_1,(uint *)param_3,param_5,param_4->Protocol);
    return;
  }
  if ((param_6->StateBuffer == (uchar *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentBaseline.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                         ,0x8d9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((param_7 != 2) && (param_7 != (0xffffffffU - (*(int *)&param_3->field1_0x8 >> 0x1f) & 1))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CreatedBaselineIndex == FDeltaCompressionBaselineManager::InvalidBaselineIndex || CreatedBaselineIndex == (Info.LastAckedBaselineIndex + 1) % FDeltaCompressionBaselineManager::MaxBaselineCount"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                         ,0x8da,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FNetBitStreamWriter::WriteBits(this_00,(uint)(param_7 != 2),1);
  uVar3 = 0xffffffff;
  pFVar6 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar6 = param_1->TraceCollector;
  }
  if (pFVar6 != (FNetTraceCollector *)0x0) {
    uVar3 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar3 = 0;
    }
    uVar3 = FNetTrace::BeginPacketContentEvent(pFVar6,NameId,uVar3);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      DeltaCompressed = CreatePersistentNetDebugName(L"DeltaCompressed",0xf);
      _Init_thread_footer(&::_TSS0);
    }
    uVar4 = FNetTrace::TraceName(DeltaCompressed);
    FVar5 = (pFVar6->Events).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar5 = (ForElementType<FNetTracePacketContentEvent>)&pFVar6->Events;
    }
    *(uint *)((longlong)FVar5 + (ulonglong)uVar3 * 0x10) = uVar4;
  }
  if (0x40 < (param_3->field1_0x8)._s_1.ChangeMaskBitCount) {
    param_3 = (FReplicationInfo *)(param_3->ChangeMaskOrPtr).ChangeMaskOrPointer;
  }
  FReplicationProtocolOperations::SerializeWithMaskDelta
            (param_1,(uint *)param_3,param_5,param_6->StateBuffer,param_4->Protocol);
  if (uVar3 != 0xffffffff) {
    uVar4 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar4 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar6,uVar3,uVar4);
  }
  return;
}

// SetNetExports @ 144313840

void __thiscall
UE::Net::Private::FReplicationWriter::SetNetExports(FReplicationWriter *this,FNetExports *param_1)

{
  this->NetExports = param_1;
  return;
}

// SetNetObjectListsSize @ 144313850

void __thiscall
UE::Net::Private::FReplicationWriter::SetNetObjectListsSize(FReplicationWriter *this,uint param_1)

{
  FNetBitArray::SetNumBits(&this->ObjectsPendingDestroy,param_1);
  FNetBitArray::SetNumBits(&this->ObjectsWithDirtyChanges,param_1);
  FNetBitArray::SetNumBits(&this->ObjectsInScope,param_1);
  FNetBitArray::SetNumBits(&(this->WriteContext).ObjectsWrittenThisPacket,param_1);
  return;
}

// SetPendingDestroyOrSubObjectPendingDestroyState @ 144314180

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationWriter::SetPendingDestroyOrSubObjectPendingDestroyState
          (FReplicationWriter *this,uint param_1,FReplicationInfo *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FReplicatedObjectData *pFVar8;
  FReplicationInfo *pFVar9;
  uint *puVar10;
  ulonglong uVar11;
  TArrayView<unsigned_int_const_,int> local_38;
  
  if (((param_2->field1_0x8).Value >> 0x16 & 1) == 0) {
    if (((param_2->field1_0x8).Value >> 0x15 & 1) != 0) {
      FNetRefHandleManager::GetSubObjects(this->NetRefHandleManager,&local_38,param_1);
      for (puVar10 = local_38.DataPtr; puVar10 != local_38.DataPtr + local_38.ArrayNum;
          puVar10 = puVar10 + 1) {
        uVar7 = *puVar10;
        pFVar9 = GetReplicationInfo(this,uVar7);
        if (((byte)((uint)*(undefined4 *)&pFVar9->field1_0x8 >> 0x10) & 0x1f) == 8) {
          SetState(this,uVar7,PendingDestroy);
          (pFVar9->field1_0x8).Value = (pFVar9->field1_0x8).Value & 0xffffffffdfffffff;
          pFVar2 = (this->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data;
          if (((this->ObjectsWithDirtyChanges).BitCount <= uVar7) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < BitCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x2b7,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(uint *)(pFVar2 + (ulonglong)(uVar7 >> 5) * 4) =
               *(uint *)(pFVar2 + (ulonglong)(uVar7 >> 5) * 4) & ~(1 << (uVar7 & 0x1f));
        }
      }
    }
  }
  else {
    pFVar8 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this->NetRefHandleManager,param_1)
    ;
    uVar7 = pFVar8->SubObjectRootIndex;
    if ((uVar7 != 0) && ((*(byte *)&pFVar8->field9_0x32 & 4) != 0)) {
      uVar6 = 0;
      if ((int)uVar7 < (this->ReplicatedObjects).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->ReplicatedObjects).AllocatorInstance.Data;
      if (((*(uint *)(pFVar2 + (longlong)(int)uVar7 * 0x10 + 8) >> 0x10 & 0x1f) != 0) &&
         (bVar5 = FNetBitArray::GetBit(&this->ObjectsPendingDestroy,pFVar8->SubObjectRootIndex),
         !bVar5)) {
        MarkObjectDirty(this,pFVar8->SubObjectRootIndex,
                        "SetPendingDestroyOrSubObjectPendingDestroyState");
        pFVar2 = pFVar2 + (longlong)(int)uVar7 * 0x10 + 8;
        *(ulonglong *)pFVar2 = *(ulonglong *)pFVar2 | 0x200000;
        SetState(this,param_1,SubObjectPendingDestroy);
        MarkObjectDirty(this,param_1,"SetPendingDestroyOrSubObjectPendingDestroyState2");
        FNetBitArray::SetBit(&this->ObjectsPendingDestroy,param_1);
        uVar3 = (param_2->field1_0x8).Value;
        uVar11 = uVar3 | 0x20000000;
        (param_2->field1_0x8).Value = uVar11;
        if (bAllowSendStateWithEndReplicationForSubObjects == false) {
          uVar11 = uVar3 & 0xfffffffffe7fffff | 0x20000000;
          (param_2->field1_0x8).Value = uVar11;
        }
        if ((uVar11 >> 0x1c & 1) == 0) {
          return;
        }
        uVar7 = GetFlushStatus(this,param_1,param_2,(uint)(uVar11 >> 0x23) & 7);
        if (uVar7 == 0) {
          return;
        }
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7868239365963514588>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                           ,0x2dc,
                           "!Info.TearOff || (GetFlushStatus(InternalIndex, Info, Info.FlushFlags) == FlushFlags_None)"
                          );
        if (!bVar5) {
          return;
        }
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  pFVar2 = (this->ObjectsPendingDestroy).Storage.AllocatorInstance.Data;
  if (((this->ObjectsPendingDestroy).BitCount <= param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2a2,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar1 = (ulonglong)(param_1 >> 5) * 4;
  *(uint *)(pFVar2 + lVar1) = *(uint *)(pFVar2 + lVar1) | 1 << (param_1 & 0x1f);
  pFVar2 = (this->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data;
  if (((this->ObjectsWithDirtyChanges).BitCount <= param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(uint *)(pFVar2 + lVar1) = *(uint *)(pFVar2 + lVar1) & ~(1 << (param_1 & 0x1f));
  SetState(this,param_1,PendingDestroy);
  (param_2->field1_0x8).Value = (param_2->field1_0x8).Value & 0xffffffffff7fffff;
  return;
}

// SetReplicationEnabled @ 144314860

void __thiscall
UE::Net::Private::FReplicationWriter::SetReplicationEnabled(FReplicationWriter *this,bool param_1)

{
  this->bReplicationEnabled = param_1;
  return;
}

// SetState @ 144314910

void __thiscall
UE::Net::Private::FReplicationWriter::SetState
          (FReplicationWriter *this,uint param_1,EReplicatedObjectState param_2)

{
  uint uVar1;
  FReplicationInfo *pFVar2;
  uint local_res10 [2];
  EReplicatedObjectState local_res18 [8];
  byte local_res20 [8];
  EReplicatedObjectState *local_48;
  byte *local_40;
  FReplicationWriter *local_38;
  FReplicationInfo *local_30;
  FReplicationInfo *local_28;
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  pFVar2 = GetReplicationInfo(this,param_1);
  uVar1 = *(uint *)&pFVar2->field1_0x8;
  local_res20[0] = (byte)(uVar1 >> 0x10) & 0x1f;
  local_38 = this;
  local_28 = pFVar2;
  switch(local_res18[0]) {
  case Invalid:
    if ((1 < (byte)(local_res20[0] - 0xc)) && (local_res20[0] != 3)) {
      local_48 = local_res18;
      local_40 = local_res20;
      local_30 = (FReplicationInfo *)local_res10;
      `UE::Net::Private::FReplicationWriter::SetState'::__l16::<lambda_12>::operator()(&local_48);
    }
    break;
  default:
    local_48 = local_res18;
    local_40 = local_res20;
    local_30 = (FReplicationInfo *)local_res10;
    `UE::Net::Private::FReplicationWriter::SetState'::__l4::<lambda_13>::operator()(&local_48);
    break;
  case PendingCreate:
    if ((uVar1 & 0x1b0000) != 0) {
      local_48 = local_res18;
      local_40 = local_res20;
      local_30 = (FReplicationInfo *)local_res10;
      `UE::Net::Private::FReplicationWriter::SetState'::__l5::<lambda_1>::operator()(&local_48);
    }
    break;
  case WaitOnCreateConfirmation:
    if ((local_res20[0] != 3) && (local_res20[0] != 9)) {
      local_48 = local_res18;
      local_40 = local_res20;
      local_30 = (FReplicationInfo *)local_res10;
      `UE::Net::Private::FReplicationWriter::SetState'::__l6::<lambda_2>::operator()(&local_48);
    }
    break;
  case Created:
    if ((9 < local_res20[0]) || ((600U >> local_res20[0] & 1) == 0)) {
      local_48 = local_res18;
      local_40 = local_res20;
      local_30 = (FReplicationInfo *)local_res10;
      `UE::Net::Private::FReplicationWriter::SetState'::__l7::<lambda_3>::operator()(&local_48);
    }
    break;
  case WaitOnFlush:
    if ((uVar1 & 0x1f0000) == 0) {
      local_48 = local_res18;
      local_40 = local_res20;
      local_30 = (FReplicationInfo *)local_res10;
      `UE::Net::Private::FReplicationWriter::SetState'::__l10::<lambda_6>::operator()(&local_48);
    }
    break;
  case PendingTearOff:
    if ((3 < (byte)(local_res20[0] - 4)) && (local_res20[0] != 0xb)) {
      local_48 = local_res18;
      local_40 = local_res20;
      local_30 = (FReplicationInfo *)local_res10;
      `UE::Net::Private::FReplicationWriter::SetState'::__l8::<lambda_4>::operator()(&local_48);
    }
    break;
  case SubObjectPendingDestroy:
    if ((((10 < local_res20[0]) || ((0x530U >> local_res20[0] & 1) == 0)) && (local_res20[0] != 6))
       && (local_res20[0] != 0xb)) {
      local_48 = local_res18;
      local_40 = local_res20;
      local_30 = (FReplicationInfo *)local_res10;
      `UE::Net::Private::FReplicationWriter::SetState'::__l9::<lambda_5>::operator()(&local_48);
    }
    break;
  case CancelPendingDestroy:
    if ((local_res20[0] - 9 & 0xfd) != 0) {
      local_48 = local_res18;
      local_40 = local_res20;
      local_30 = (FReplicationInfo *)local_res10;
      `UE::Net::Private::FReplicationWriter::SetState'::__l13::<lambda_9>::operator()(&local_48);
    }
    break;
  case PendingDestroy:
    if ((uVar1 & 0x1f0000) == 0) {
      local_48 = local_res18;
      local_40 = local_res20;
      local_38 = (FReplicationWriter *)local_res10;
      local_30 = pFVar2;
      `UE::Net::Private::FReplicationWriter::SetState'::__l11::<lambda_7>::operator()(&local_48);
    }
    break;
  case WaitOnDestroyConfirmation:
    if (local_res20[0] < 7) {
      local_48 = local_res18;
      local_40 = local_res20;
      local_30 = (FReplicationInfo *)local_res10;
      `UE::Net::Private::FReplicationWriter::SetState'::__l12::<lambda_8>::operator()(&local_48);
    }
    break;
  case Destroyed:
    if (((local_res20[0] - 7 & 0xf9) != 0) || (local_res20[0] == 0xd)) {
      local_48 = local_res18;
      local_40 = local_res20;
      local_30 = (FReplicationInfo *)local_res10;
      `UE::Net::Private::FReplicationWriter::SetState'::__l14::<lambda_10>::operator()(&local_48);
    }
    break;
  case PermanentlyDestroyed:
    if ((uVar1 & 0x1b0000) != 0) {
      local_48 = local_res18;
      local_40 = local_res20;
      local_30 = (FReplicationInfo *)local_res10;
      `UE::Net::Private::FReplicationWriter::SetState'::__l15::<lambda_11>::operator()(&local_48);
    }
  }
  (pFVar2->field1_0x8).Value =
       ((ulonglong)local_res18[0] << 0x10 ^ (pFVar2->field1_0x8).Value) & 0xffffffffffe0ffff ^
       (ulonglong)local_res18[0] << 0x10;
  return;
}

// SetupReplicationInfoForAttachmentsToObjectsNotInScope @ 144314df0

void __thiscall
UE::Net::Private::FReplicationWriter::SetupReplicationInfoForAttachmentsToObjectsNotInScope
          (FReplicationWriter *this)

{
  code *pcVar1;
  bool bVar2;
  FReplicationInfo *pFVar3;
  
  pFVar3 = GetReplicationInfo(this,0);
  (pFVar3->ChangeMaskOrPtr).ChangeMaskOrPointer = 0;
  (pFVar3->field1_0x8).Value = 0x10000;
  if ((this->ReplicatedObjectsRecordInfoLists).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)(this->ReplicatedObjectsRecordInfoLists).AllocatorInstance.Data = 0xffffffff;
  return;
}

// ShouldWarnIfCannotSend @ 144314e70

FCannotSendInfo * __thiscall
UE::Net::Private::FReplicationWriter::ShouldWarnIfCannotSend
          (FReplicationWriter *this,FReplicationInfo *param_1,uint param_2)

{
  FCannotSendInfo *pFVar1;
  TMap<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo,0>_>
  *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  FCannotSendInfo *pFVar6;
  longlong lVar7;
  FCannotSendInfo *pFVar8;
  uint local_res18 [2];
  TKeyInitializer<unsigned_int_const_&> local_res20;
  uint *local_18;
  LARGE_INTEGER local_10;
  
  if (0 < GReplicationWriterCannotSendWarningInterval) {
    this_00 = &this->CannotSendInfos;
    local_res18[0] = param_2;
    if (((param_1->field1_0x8).Value & 0x8000000000) != 0) {
      pFVar8 = (FCannotSendInfo *)0x0;
      pFVar6 = pFVar8;
      if (*(int *)&(this->CannotSendInfos).field_0x8 != *(int *)&(this->CannotSendInfos).field_0x34)
      {
        puVar5 = *(undefined1 **)&(this->CannotSendInfos).field_0x40;
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &(this->CannotSendInfos).field_0x38;
        }
        uVar4 = *(uint *)(puVar5 + (ulonglong)
                                   (*(int *)&(this->CannotSendInfos).field_0x48 - 1U & param_2) * 4)
        ;
        if (uVar4 != 0xffffffff) {
          do {
            pFVar6 = (FCannotSendInfo *)
                     ((longlong)(int)uVar4 * 0x20 + *(longlong *)&this_00->field_0x0);
            if ((uint)pFVar6->StartCycles == param_2) {
              if (pFVar6 != (FCannotSendInfo *)0x0) goto LAB_144314f20;
              break;
            }
            uVar4 = pFVar6[1].SuppressWarningCounter;
            pFVar6 = pFVar8;
          } while (uVar4 != 0xffffffff);
        }
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FCannotSendInfo *)(*pcVar2)();
        return pFVar6;
      }
LAB_144314f20:
      pFVar1 = pFVar6 + 1;
      *(int *)&pFVar1->StartCycles = (int)pFVar1->StartCycles + -1;
      if ((int)pFVar1->StartCycles == 0) {
        pFVar8 = (FCannotSendInfo *)&pFVar6->SuppressWarningCounter;
      }
      return pFVar8;
    }
    local_18 = local_res18;
    TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo,0>,FDefaultSetAllocator>
                *)this_00,&local_res20,(bool *)&local_18);
    lVar7 = *(longlong *)&this_00->field_0x0 + (longlong)(int)local_res20.Key * 0x20;
    *(int *)(lVar7 + 0x10) = GReplicationWriterCannotSendWarningInterval;
    QueryPerformanceCounter(&local_10);
    *(LARGE_INTEGER *)(lVar7 + 8) = local_10;
    (param_1->field1_0x8).Value = (param_1->field1_0x8).Value | 0x8000000000;
  }
  return (FCannotSendInfo *)0x0;
}

// SortScheduledObjects @ 1443152c0

uint __thiscall
UE::Net::Private::FReplicationWriter::SortScheduledObjects
          (FReplicationWriter *this,FScheduleObjectInfo *param_1,uint param_2,uint param_3)

{
  FScheduleObjectInfo *pFVar1;
  FScheduleObjectInfo *pFVar2;
  code *pcVar3;
  <lambda_1> <Var4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  FScheduleObjectInfo *pFVar12;
  FScheduleObjectInfo *pFVar13;
  FScheduleObjectInfo local_res10 [2];
  uint local_res20;
  FScheduleObjectInfo local_48 [2];
  
  local_res20 = param_3;
  if (((param_2 == 0) || (param_2 < param_3)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScheduledObjectCount > 0 && StartIndex <= ScheduledObjectCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                         ,0x4a1,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1189,"FReplicationWriter_SortScheduledObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
               ,0x4a5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1189);
  }
  pFVar1 = param_1 + param_3;
  pFVar2 = param_1 + param_2;
  pFVar12 = pFVar2;
  if (pFVar1 + 0x80 < pFVar2) {
    pFVar12 = pFVar1 + 0x80;
  }
  if (pFVar1 != pFVar12) {
    uVar8 = (longlong)pFVar12 - (longlong)pFVar1 >> 3;
    lVar10 = (longlong)pFVar12 - (longlong)pFVar1 >> 4;
    if (0 < lVar10) {
      lVar11 = (longlong)(uVar8 - 1) >> 1;
      do {
        local_res10[0] = pFVar1[lVar10 + -1];
        lVar10 = lVar10 + -1;
        lVar9 = lVar10;
        while (lVar9 < lVar11) {
          lVar7 = lVar9 * 2 + 1;
          if (pFVar1[lVar9 * 2 + 2].SortKey < pFVar1[lVar7].SortKey ||
              pFVar1[lVar9 * 2 + 2].SortKey == pFVar1[lVar7].SortKey) {
            lVar7 = lVar9 * 2 + 2;
          }
          pFVar1[lVar9] = pFVar1[lVar7];
          lVar9 = lVar7;
        }
        if ((lVar9 == lVar11) && ((uVar8 & 1) == 0)) {
          pFVar1[lVar9] = pFVar1[uVar8 - 1];
          lVar9 = uVar8 - 1;
        }
        if (lVar10 < lVar9) {
          do {
            lVar7 = lVar9 + -1 >> 1;
            if (pFVar1[lVar7].SortKey <= local_res10[0].SortKey) break;
            pFVar1[lVar9] = pFVar1[lVar7];
            lVar9 = lVar7;
          } while (lVar10 < lVar7);
        }
        pFVar1[lVar9] = local_res10[0];
      } while (0 < lVar10);
    }
    if (pFVar12 < pFVar2) {
      <Var4 = local_res20._0_1_;
      pFVar13 = pFVar12;
      do {
        if (pFVar1->SortKey < pFVar13->SortKey) {
          local_res10[0] = *pFVar13;
          *pFVar13 = *pFVar1;
          std::
          _Pop_heap_hole_by_index<UE::Net::Private::FReplicationWriter::FScheduleObjectInfo_*,UE::Net::Private::FReplicationWriter::FScheduleObjectInfo,_UE::Net::Private::FReplicationWriter::SortScheduledObjects_::__l10::<lambda_1>_>
                    (pFVar1,0,uVar8,local_res10,<Var4);
        }
        pFVar13 = pFVar13 + 1;
      } while (pFVar13 < pFVar2);
    }
    param_3 = local_res20;
    if (1 < (longlong)uVar8) {
      <Var4 = local_res20._0_1_;
      pFVar12 = pFVar12 + -1;
      do {
        local_48[0] = *pFVar12;
        *pFVar12 = *pFVar1;
        std::
        _Pop_heap_hole_by_index<UE::Net::Private::FReplicationWriter::FScheduleObjectInfo_*,UE::Net::Private::FReplicationWriter::FScheduleObjectInfo,_UE::Net::Private::FReplicationWriter::SortScheduledObjects_::__l10::<lambda_1>_>
                  (pFVar1,0,(longlong)pFVar12 - (longlong)pFVar1 >> 3,local_48,<Var4);
        pFVar12 = pFVar12 + -1;
        param_3 = local_res20;
      } while (0xf < (longlong)((8 - (longlong)pFVar1) + (longlong)pFVar12 & 0xfffffffffffffff8U));
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  uVar6 = 0x80;
  if (param_2 - param_3 < 0x80) {
    uVar6 = param_2 - param_3;
  }
  return uVar6;
}

// StopAllReplication @ 144315c40

void __thiscall UE::Net::Private::FReplicationWriter::StopAllReplication(FReplicationWriter *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  FNetRefHandleManager *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar2 = (this->ReplicatedObjects).ArrayNum;
  if (iVar2 != 0) {
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar9 = 0;
    pFVar1 = (this->ReplicatedObjects).AllocatorInstance.Data + 8;
    *(ulonglong *)pFVar1 = *(ulonglong *)pFVar1 & 0xffffffffffe0ffff;
    lVar10 = (longlong)(this->ReplicatedObjects).ArrayNum;
    if (0 < lVar10) {
      lVar11 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->ReplicatedObjects).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar1 = (this->ReplicatedObjects).AllocatorInstance.Data;
        uVar3 = *(ulonglong *)(pFVar1 + lVar11 + 8);
        if ((uVar3 >> 0x10 & 0x1f) != 0) {
          if (0x40 < (ushort)uVar3) {
            FGlobalChangeMaskAllocator::Free
                      (&s_DefaultChangeMaskAllocator,*(void **)(pFVar1 + lVar11));
          }
          pFVar4 = this->NetRefHandleManager;
          puVar8 = TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_>::operator[]
                             ((TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_> *)
                              &pFVar4->ReplicatedObjectRefCount,uVar9);
          if ((*puVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ReplicatedObjectRefCount[InternalIndex] > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                                 ,0x137,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar8 = TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_>::operator[]
                             ((TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_> *)
                              &pFVar4->ReplicatedObjectRefCount,uVar9);
          *puVar8 = *puVar8 - 1;
        }
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 0x10;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  return;
}

// StopReplication @ 144315df0

void __thiscall
UE::Net::Private::FReplicationWriter::StopReplication(FReplicationWriter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FNetRefHandleManager *pFVar2;
  code *pcVar3;
  bool bVar4;
  FReplicationInfo *pFVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  pFVar5 = GetReplicationInfo(this,param_1);
  SetState(this,param_1,Invalid);
  if (0x40 < (pFVar5->field1_0x8)._s_1.ChangeMaskBitCount) {
    FGlobalChangeMaskAllocator::Free
              (&s_DefaultChangeMaskAllocator,(void *)(pFVar5->ChangeMaskOrPtr).ChangeMaskOrPointer);
  }
  (pFVar5->field1_0x8).Value = (pFVar5->field1_0x8).Value & 0xfffffffff7ffffff;
  pFVar1 = (this->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data;
  if ((this->ObjectsWithDirtyChanges).BitCount <= param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar9 = (ulonglong)(param_1 >> 5);
  uVar8 = param_1 & 0x1f;
  *(uint *)(pFVar1 + uVar9 * 4) = *(uint *)(pFVar1 + uVar9 * 4) & ~(1 << uVar8);
  pFVar1 = (this->ObjectsPendingDestroy).Storage.AllocatorInstance.Data;
  if ((this->ObjectsPendingDestroy).BitCount <= param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(uint *)(pFVar1 + uVar9 * 4) = *(uint *)(pFVar1 + uVar9 * 4) & ~(1 << uVar8);
  pFVar1 = (this->ObjectsInScope).Storage.AllocatorInstance.Data;
  if ((this->ObjectsInScope).BitCount <= param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(uint *)(pFVar1 + uVar9 * 4) = *(uint *)(pFVar1 + uVar9 * 4) & ~(1 << uVar8);
  pFVar2 = this->NetRefHandleManager;
  puVar6 = TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_>::operator[]
                     ((TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_> *)
                      &pFVar2->ReplicatedObjectRefCount,param_1);
  if (*puVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReplicatedObjectRefCount[InternalIndex] > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                       ,0x137,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar6 = TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_>::operator[]
                     ((TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_> *)
                      &pFVar2->ReplicatedObjectRefCount,param_1);
  *puVar6 = *puVar6 - 1;
  FNetObjectAttachmentsWriter::DropAllAttachments(&this->Attachments,Normal,param_1);
  if (((byte)((pFVar5->field1_0x8).Value >> 0x21) & 3) != 2) {
    FDeltaCompressionBaselineManager::DestroyBaseline
              (this->BaselineManager,(this->Parameters).ConnectionId,param_1,
               (uint)((pFVar5->field1_0x8).Value >> 0x21) & 3);
  }
  uVar7 = (uint)((pFVar5->field1_0x8).Value >> 0x1f);
  uVar8 = uVar7 & 3;
  if ((((uint)((pFVar5->field1_0x8).Value >> 0x21) & 3) != uVar8) && (uVar8 != 2)) {
    FDeltaCompressionBaselineManager::DestroyBaseline
              (this->BaselineManager,(this->Parameters).ConnectionId,param_1,uVar7 & 3);
  }
  uVar9 = (pFVar5->field1_0x8).Value;
  (pFVar5->field1_0x8).Value = uVar9 & 0xfffffffd7fffffff | 0x500000000;
  if ((uVar9 & 0x8000000000) != 0) {
    TMapBase<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo,0>_>
    ::Remove((TMapBase<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo,0>_>
              *)&this->CannotSendInfos,param_1);
    (pFVar5->field1_0x8).Value = (pFVar5->field1_0x8).Value & 0xffffff7fffffffff;
  }
  return;
}

// Update @ 144316f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationWriter::Update(FReplicationWriter *this,FUpdateParameters *param_1)

{
  ulong64 uVar1;
  bool local_res10 [24];
  
  if (param_1->UpdateType == PostTickFlush) {
    local_res10[0] = false;
    if (GMaxUnsentOrderedUnreliableAttachmentAtEndOfTick == 0) {
      FNetObjectAttachmentsWriter::DropUnreliableAttachments
                (&this->Attachments,OutOfBand,0,local_res10);
      return;
    }
    if (0 < GMaxUnsentOrderedUnreliableAttachmentAtEndOfTick) {
      uVar1 = FNetObjectAttachmentsWriter::GetUnreliableAttachmentCount
                        (&this->Attachments,OutOfBand,0);
      if (((ulonglong)(longlong)GMaxUnsentOrderedUnreliableAttachmentAtEndOfTick <= uVar1) &&
         (FNetObjectAttachmentsWriter::DropUnreliableAttachments
                    (&this->Attachments,OutOfBand,0,local_res10), 2 < (byte)LogIris._0_1_)) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
    }
  }
  return;
}

// UpdateDirtyGlobalLifetimeConditionals @ 1443171c0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationWriter::UpdateDirtyGlobalLifetimeConditionals
          (FReplicationWriter *this,TArrayView<unsigned_int,int> *param_1)

{
  uint *puVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FReplicatedObjectData *pFVar9;
  uint *puVar10;
  
  puVar10 = param_1->DataPtr;
  puVar1 = puVar10 + param_1->ArrayNum;
  while( true ) {
    if (puVar10 == puVar1) {
      return;
    }
    uVar2 = *puVar10;
    pFVar3 = (this->ObjectsInScope).Storage.AllocatorInstance.Data;
    if (((this->ObjectsInScope).BitCount <= uVar2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar7)) break;
    if ((*(uint *)(pFVar3 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
      uVar8 = 0;
      if ((int)uVar2 < (this->ReplicatedObjects).ArrayNum) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (this->ReplicatedObjects).AllocatorInstance.Data;
      uVar4 = *(ulonglong *)(pFVar3 + (longlong)(int)uVar2 * 0x10 + 8);
      if ((byte)(((byte)(uVar4 >> 0x10) & 0x1f) - 1) < 9) {
        if ((uVar4 >> 0x16 & 1) == 0) {
          MarkObjectDirty(this,uVar2,"UpdateDirtyGlobalLifetimeConditionals2");
          pFVar3 = pFVar3 + (longlong)(int)uVar2 * 0x10 + 8;
          *(ulonglong *)pFVar3 = *(ulonglong *)pFVar3 | 0x4000200000;
        }
        else {
          pFVar9 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                             (this->NetRefHandleManager,uVar2);
          uVar2 = pFVar9->SubObjectRootIndex;
          if ((uVar2 != 0) && ((*(byte *)&pFVar9->field9_0x32 & 4) != 0)) {
            uVar8 = 0;
            if ((int)uVar2 < (this->ReplicatedObjects).ArrayNum) {
              uVar8 = ~uVar2 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (this->ObjectsInScope).Storage.AllocatorInstance.Data;
            pFVar3 = (this->ReplicatedObjects).AllocatorInstance.Data;
            if (((this->ObjectsInScope).BitCount <= uVar2) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2c1,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (((*(uint *)(pFVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) &&
               ((byte)(((byte)((uint)*(undefined4 *)(pFVar3 + (longlong)(int)uVar2 * 0x10 + 8) >>
                              0x10) & 0x1f) - 1) < 9)) {
              MarkObjectDirty(this,uVar2,"UpdateDirtyGlobalLifetimeConditionals");
              pFVar3 = pFVar3 + (longlong)(int)uVar2 * 0x10 + 8;
              *(ulonglong *)pFVar3 = *(ulonglong *)pFVar3 | 0x4000200000;
            }
          }
        }
      }
    }
    puVar10 = puVar10 + 1;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// UpdatePriorities @ 1443176a0

void __thiscall
UE::Net::Private::FReplicationWriter::UpdatePriorities(FReplicationWriter *this,float *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1094,"FReplicationWriter_UpdatePriorities",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
               ,0x446);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1094);
  }
  uVar2 = (this->ObjectsWithDirtyChanges).Storage.ArrayNum;
  uVar3 = (this->ObjectsWithDirtyChanges).BitCount;
  uVar10 = 0;
  pFVar12 = (this->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data;
  uVar11 = 0;
  if (uVar2 != 0) {
    do {
      uVar9 = 0xffffffff;
      if (uVar11 == uVar2 - 1) {
        uVar9 = 0xffffffff >> (-(char)uVar3 & 0x1fU);
      }
      uVar8 = uVar10;
      for (uVar9 = uVar9 & *(uint *)pFVar12; uVar9 != 0; uVar9 = uVar9 >> 1) {
        if ((uVar9 & 1) != 0) {
          fVar1 = param_1[uVar8];
          uVar7 = 0;
          if ((int)uVar8 < (this->SchedulingPriorities).ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->SchedulingPriorities).AllocatorInstance.Data;
          *(float *)(pFVar4 + (longlong)(int)uVar8 * 4) =
               fVar1 + *(float *)(pFVar4 + (longlong)(int)uVar8 * 4);
        }
        uVar8 = uVar8 + 1;
      }
      uVar11 = uVar11 + 1;
      pFVar12 = pFVar12 + 4;
      uVar10 = uVar10 + 0x20;
    } while (uVar11 < uVar2);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// UpdateScope @ 144317b30

void __thiscall
UE::Net::Private::FReplicationWriter::UpdateScope
          (FReplicationWriter *this,FNetBitArrayView *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  <lambda_2> local_res8;
  <lambda_1> local_res10;
  FNetBitArrayView local_48;
  FNetBitArrayView local_38;
  <lambda_3> local_28;
  <lambda_4> local_18;
  
  local_res8.__this = this;
  local_res10.__this = this;
  FNetBitArrayView::FNetBitArrayView
            (&local_48,(uint *)(this->ObjectsInScope).Storage.AllocatorInstance.Data,
             (this->ObjectsInScope).BitCount);
  FNetBitArrayView::FNetBitArrayView
            (&local_38,
             (uint *)(this->NetRefHandleManager->SubObjectInternalIndices).Storage.AllocatorInstance
                     .Data,(this->NetRefHandleManager->SubObjectInternalIndices).BitCount);
  local_28.SubObjects.Storage = local_38.Storage;
  local_28.SubObjects.WordCount = local_38.WordCount;
  local_28.SubObjects.BitCount = local_38.BitCount;
  if (param_1->BitCount != local_48.BitCount) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("A.GetNumBits() == B.GetNumBits()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x67e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FNetBitArrayHelper::
  ForAllExclusiveBitsByPredicate<_UE::Net::Private::FReplicationWriter::UpdateScope_::__l2::<lambda_1>_&,_UE::Net::Private::FReplicationWriter::UpdateScope_::__l2::<lambda_2>_&,_UE::Net::Private::FReplicationWriter::UpdateScope_::__l2::<lambda_3>_&>
            (param_1->Storage,local_48.Storage,param_1->WordCount,param_1->BitCount,&local_res10,
             &local_res8,&local_28);
  local_18.SubObjects.Storage = local_38.Storage;
  local_18.SubObjects.WordCount = local_38.WordCount;
  local_18.SubObjects.BitCount = local_38.BitCount;
  if (param_1->BitCount != local_48.BitCount) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("A.GetNumBits() == B.GetNumBits()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x67e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FNetBitArrayHelper::
  ForAllExclusiveBitsByPredicate<_UE::Net::Private::FReplicationWriter::UpdateScope_::__l2::<lambda_1>_&,_UE::Net::Private::FReplicationWriter::UpdateScope_::__l2::<lambda_2>_&,_UE::Net::Private::FReplicationWriter::UpdateScope_::__l2::<lambda_4>_&>
            (param_1->Storage,local_48.Storage,param_1->WordCount,param_1->BitCount,&local_res10,
             &local_res8,&local_18);
  if ((local_48.Storage == param_1->Storage) || (local_48.BitCount != param_1->BitCount)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x5d8,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((local_48.WordCount != 0) && (param_1->WordCount != 0)) {
    memcpy(local_48.Storage,param_1->Storage,(ulonglong)local_48.WordCount << 2);
  }
  if (((this->ObjectsInScope).Storage.AllocatorInstance.Data ==
       (this->ObjectsPendingDestroy).Storage.AllocatorInstance.Data) ||
     ((this->ObjectsInScope).BitCount != (this->ObjectsPendingDestroy).BitCount)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x539,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar1 = (this->ObjectsInScope).Storage.ArrayNum;
  pFVar2 = (this->ObjectsPendingDestroy).Storage.AllocatorInstance.Data;
  pFVar3 = (this->ObjectsInScope).Storage.AllocatorInstance.Data;
  if (uVar1 != 0) {
    uVar7 = (ulonglong)uVar1;
    pFVar6 = pFVar3;
    do {
      *(uint *)pFVar6 = *(uint *)pFVar6 & ~*(uint *)(pFVar6 + ((longlong)pFVar2 - (longlong)pFVar3))
      ;
      uVar7 = uVar7 - 1;
      pFVar6 = pFVar6 + 4;
    } while (uVar7 != 0);
  }
  return;
}

// UpdateStreamDebugFeatures @ 144317d60

void __thiscall
UE::Net::Private::FReplicationWriter::UpdateStreamDebugFeatures(FReplicationWriter *this)

{
  UReplicationSystem *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->Parameters).ReplicationSystem;
  this->StreamDebugFeatures = None;
  if ((pUVar1 != (UReplicationSystem *)0x0) && (pUVar1->bIsServer != 0)) {
    bVar2 = bDebugBatchSizePerObjectEnabled != false;
    this->StreamDebugFeatures = (uint)bVar2;
    this->StreamDebugFeatures = -(uint)(bDebugSentinelsEnabled != false) & Sentinels | (uint)bVar2;
  }
  return;
}

// Write @ 144318290

/* WARNING: Enum "Type": Some values do not have unique names */

EWriteResult __thiscall
UE::Net::Private::FReplicationWriter::Write
          (FReplicationWriter *this,FNetSerializationContext *param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  UReplicationSystem *pUVar5;
  FNetBitStreamWriter *this_00;
  FNetTypeStats *pFVar6;
  FNetTraceCollector *this_01;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  EWriteResult EVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  FNetTraceCollector *pFVar19;
  ForElementType<FNetTracePacketContentEvent> FVar20;
  ulong64 uVar21;
  bool bVar22;
  uint local_res8;
  short local_88;
  FInternalNetSerializationContext local_70;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3899,"FReplicationWriter_Write",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
               ,0xf3b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3899);
  }
  puVar1 = &(this->WriteContext).field_0xd4;
  uVar3 = *(undefined4 *)puVar1;
  EVar11 = NoData;
  uVar16 = 0;
  if ((((this->WriteContext).bHasOOBAttachmentsToSend | ZPULL(uVar3,3,1) |
        (this->WriteContext).bHasUpdatedObjectsToSend |
       (this->WriteContext).bHasDestroyedObjectsToSend) & (byte)((uint)uVar3 >> 6) & 1) != 0) {
    (this->WriteContext).WrittenBatchCount = 0;
    (this->WriteContext).FailedToWriteSmallObjectCount = 0;
    if (((this->WriteContext).WriteMode == PostTickDispatch) ||
       ((uVar12 = (this->WriteContext).MaxPacketsToSend, uVar10 = uVar16, uVar12 != 0 &&
        (uVar12 <= (this->WriteContext).NumWrittenPacketsInThisBatch)))) {
      uVar10 = 0x20;
    }
    pUVar5 = (this->Parameters).ReplicationSystem;
    *(uint *)&(this->WriteContext).field_0xd4 =
         (uint)(((this->ReplicationRecord).RecordInfos.Tail -
                (this->ReplicationRecord).RecordInfos.Head) + 0xffff <
               (uint)GReplicationWriterReplicationRecordStarvationThreshold) | uVar3 & 0xffffffde |
         uVar10;
    this_00 = param_1->BitStreamWriter;
    FInternalNetSerializationContext::FInternalNetSerializationContext(&local_70,pUVar5);
    param_1->LocalConnectionId = (this->Parameters).ConnectionId;
    param_1->InternalContext = &local_70;
    pFVar6 = this->NetTypeStats;
    if ((pFVar6->bIsInParallelPhase != false) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsInParallelPhase",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.h"
                           ,0xc6,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      EVar11 = (*pcVar8)();
      return EVar11;
    }
    pFVar19 = (FNetTraceCollector *)0x0;
    if (pFVar6->bIsEnabled != false) {
      pFVar19 = (FNetTraceCollector *)pFVar6->ParentStatsContext;
    }
    param_1->NetStatsContext = (FNetStatsContext *)pFVar19;
    (this->WriteBitStreamInfo).ReplicationStartPos =
         this_00->BufferBitPosition - this_00->BufferBitStartOffset;
    uVar10 = 0;
    uVar12 = uVar10;
    if (this_00->OverflowBitCount == 0) {
      uVar12 = this_00->BufferBitCapacity - this_00->BufferBitPosition;
    }
    (this->WriteBitStreamInfo).ReplicationCapacity = uVar12;
    pUVar5 = (this->Parameters).ReplicationSystem;
    this->StreamDebugFeatures = None;
    if ((pUVar5 != (UReplicationSystem *)0x0) && (pUVar5->bIsServer != 0)) {
      bVar9 = bDebugBatchSizePerObjectEnabled != false;
      this->StreamDebugFeatures = (uint)bVar9;
      this->StreamDebugFeatures = -(uint)(bDebugSentinelsEnabled != false) & Sentinels | (uint)bVar9
      ;
    }
    pFVar19 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar19 = param_1->TraceCollector;
    }
    local_res8 = 0xffffffff;
    if (pFVar19 != (FNetTraceCollector *)0x0) {
      uVar12 = this_00->BufferBitPosition;
      if (this_00->OverflowBitCount != 0) {
        uVar12 = uVar10;
      }
      local_res8 = FNetTrace::BeginPacketContentEvent(pFVar19,NameId,uVar12);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ReplicationData = CreatePersistentNetDebugName(L"ReplicationData",0xf);
        _Init_thread_footer(&::_TSS0);
      }
      uVar12 = FNetTrace::TraceName(ReplicationData);
      FVar20 = (pFVar19->Events).AllocatorInstance.SecondaryData;
      if (FVar20 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar20 = (ForElementType<FNetTracePacketContentEvent>)&pFVar19->Events;
      }
      *(uint *)((longlong)FVar20 + (ulonglong)local_res8 * 0x10) = uVar12;
    }
    uVar12 = this_00->BufferBitPosition;
    uVar4 = this_00->BufferBitStartOffset;
    FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,this->StreamDebugFeatures,2);
    uVar17 = this_00->BufferBitPosition;
    uVar18 = this_00->BufferBitStartOffset;
    local_88 = (short)(this->ReplicationRecord).RecordInfos.Head -
               (short)(this->ReplicationRecord).RecordInfos.Tail;
    FNetBitStreamWriter::WriteBits(this_00,0,0x10);
    uVar13 = WriteRootObjectsPendingDestroy(this,param_1);
    EVar11 = NoData;
    if (this_00->OverflowBitCount == 0) {
      uVar14 = WriteOOBAttachments(this,param_1);
      uVar15 = WriteObjects(this,param_1);
      puVar1 = &(this->WriteContext).field_0xd4;
      uVar15 = uVar14 + uVar13 + uVar15;
      EVar11 = Ok;
      if (((((this->WriteContext).bHasUpdatedObjectsToSend |
             (this->WriteContext).bHasDestroyedObjectsToSend |
             (this->WriteContext).bHasOOBAttachmentsToSend |
            (this->WriteContext).bHasHugeObjectToSend) & (byte)((uint)*(undefined4 *)puVar1 >> 6) &
           1) != 0) &&
         ((((this->WriteContext).bHasHugeObjectToSend != 0 ||
           ((ZPULL(*(undefined4 *)puVar1,4,1) != 0 && (bVar9 = CanSendObject(this,0), bVar9)))) ||
          (((this->WriteContext).bIsInReplicationRecordStarvation == 0 &&
           ((uVar14 = (this->WriteContext).MaxPacketsToSend, uVar14 == 0 ||
            ((this->WriteContext).NumWrittenPacketsInThisBatch < uVar14 - 1)))))))) {
        EVar11 = HasMoreData;
      }
      if ((this_00->OverflowBitCount == 0) && (uVar15 != 0)) {
        uVar14 = this_00->BufferBitPosition - this_00->BufferBitStartOffset;
        FNetBitStreamWriter::Seek(this_00,uVar17 - uVar18);
        FNetBitStreamWriter::WriteBits(this_00,uVar13 + (this->WriteContext).WrittenBatchCount,0x10)
        ;
        if ((uVar14 < this_00->BufferBitPosition - this_00->BufferBitStartOffset) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Writer.GetPosBits() <= OriginalPos",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetBitStreamUtil.h"
                               ,0x21,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          EVar11 = (*pcVar8)();
          return EVar11;
        }
        FNetBitStreamWriter::Seek(this_00,uVar14);
        uVar17 = (this->ReplicationRecord).RecordInfos.Head;
        uVar21 = (ulonglong)
                 ((this->ReplicationRecord).Record.Head - (this->ReplicationRecord).Record.Tail) + 1
        ;
        uVar18 = (this->ReplicationRecord).RecordInfos.Tail;
        if ((ulonglong)(longlong)(this->ReplicationRecord).Record.Storage.ArrayNum < uVar21) {
          TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_>::SetCapacity
                    (&(this->ReplicationRecord).Record,uVar21);
        }
        uVar13 = (this->ReplicationRecord).Record.Head;
        uVar14 = (this->ReplicationRecord).Record.IndexMask;
        (this->ReplicationRecord).Record.Head = uVar13 + 1;
        *(short *)((this->ReplicationRecord).Record.Storage.AllocatorInstance.Data +
                  (ulonglong)(uVar14 & uVar13) * 2) = ((short)uVar17 - (short)uVar18) - local_88;
        bVar9 = s_ValidateReplicationRecord
                          (&this->ReplicationRecord,
                           this->NetRefHandleManager->MaxActiveObjectCount + 1,false);
        if ((!bVar9) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("s_ValidateReplicationRecord(&ReplicationRecord, NetRefHandleManager->GetMaxActiveObjectCount() + 1U, false)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                               ,0xf9c,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          EVar11 = (*pcVar8)();
          return EVar11;
        }
        this_01 = (this->HugeObjectSendQueue).TraceCollector;
        if (this_01 != (FNetTraceCollector *)0x0) {
          uVar17 = this_00->BufferBitPosition;
          if (this_00->OverflowBitCount != 0) {
            uVar17 = uVar16;
          }
          FNetTrace::FoldTraceCollector(param_1->TraceCollector,this_01,uVar17,0);
          FNetTraceCollector::Reset(this_01);
        }
        puVar2 = &(this->WriteContext).NumWrittenPacketsInThisBatch;
        *puVar2 = *puVar2 + 1;
      }
      else {
        FNetBitStreamWriter::DoOverflow(this_00);
        EVar11 = NoData;
        if ((5 < (byte)LogIris._0_1_) && (EVar11 = NoData, uVar15 != 0)) {
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
      }
      lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        NetTraceNameId_4019 =
             CreatePersistentNetDebugName(L"ReplicationWriter.WrittenObjectCount",0x24);
        _Init_thread_footer(&::_TSS0);
      }
      uVar16 = FNetTrace::TraceName(NetTraceNameId_4019);
      FNetTrace::TracePacketStatsCounter
                (((this->Parameters).ReplicationSystem)->Id,(this->Parameters).ConnectionId,uVar16,
                 uVar15);
      if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        NetTraceNameId_4020 =
             CreatePersistentNetDebugName(L"ReplicationWriter.WrittenBatchCount",0x23);
        _Init_thread_footer(&::_TSS1);
      }
      uVar16 = (this->WriteContext).WrittenBatchCount;
      uVar17 = FNetTrace::TraceName(NetTraceNameId_4020);
      FNetTrace::TracePacketStatsCounter
                (((this->Parameters).ReplicationSystem)->Id,(this->Parameters).ConnectionId,uVar17,
                 uVar16);
      if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        NetTraceNameId_4021 =
             CreatePersistentNetDebugName(L"ReplicationWriter.FailedToWriteSmallObjectCount",0x2f);
        _Init_thread_footer(&::_TSS2);
      }
      uVar16 = (this->WriteContext).FailedToWriteSmallObjectCount;
      uVar17 = FNetTrace::TraceName(NetTraceNameId_4021);
      FNetTrace::TracePacketStatsCounter
                (((this->Parameters).ReplicationSystem)->Id,(this->Parameters).ConnectionId,uVar17,
                 uVar16);
      if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
        NetTraceNameId_4022 =
             CreatePersistentNetDebugName
                       (L"ReplicationWriter.RemainingObjectsPendingWriteCount",0x33);
        _Init_thread_footer(&::_TSS3);
      }
      uVar16 = (this->WriteContext).ScheduledObjectCount;
      uVar17 = (this->WriteContext).CurrentIndex;
      uVar18 = FNetTrace::TraceName(NetTraceNameId_4022);
      FNetTrace::TracePacketStatsCounter
                (((this->Parameters).ReplicationSystem)->Id,(this->Parameters).ConnectionId,uVar18,
                 uVar16 - uVar17);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
        NetTraceNameId_4023 =
             CreatePersistentNetDebugName(L"ReplicationWriter.ScheduledObjectCount",0x26);
        _Init_thread_footer(&::_TSS4);
      }
      uVar16 = (this->WriteContext).ScheduledObjectCount;
      uVar17 = FNetTrace::TraceName(NetTraceNameId_4023);
      FNetTrace::TracePacketStatsCounter
                (((this->Parameters).ReplicationSystem)->Id,(this->Parameters).ConnectionId,uVar17,
                 uVar16);
    }
    if (this_00->OverflowBitCount != 0) {
      FNetBitStreamWriter::Seek(this_00,uVar12 - uVar4);
    }
    if (local_res8 != 0xffffffff) {
      uVar16 = this_00->BufferBitPosition;
      if (this_00->OverflowBitCount != 0) {
        uVar16 = uVar10;
      }
      FNetTrace::EndPacketContentEvent(pFVar19,local_res8,uVar16);
    }
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar11;
}

// WriteDestructionInfo @ 144318b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000144318d9e) */
/* WARNING: Removing unreachable block (ram,0x000144318df4) */
/* WARNING: Removing unreachable block (ram,0x000144318e31) */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

EWriteStatus __thiscall
UE::Net::Private::FReplicationWriter::WriteDestructionInfo
          (FReplicationWriter *this,FNetSerializationContext *param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  FNetBitStreamWriter *this_00;
  FBatchExports *pFVar4;
  FInternalNetSerializationContext *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  EWriteStatus EVar9;
  FReplicationInfo *pFVar10;
  ForElementType<FNetTracePacketContentEvent> FVar11;
  EWriteStatus EVar12;
  FNetTraceCollector *pFVar13;
  bool bVar14;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8;
  uint local_b4;
  FNetRefHandle_u_0 *local_b0;
  uint local_a8;
  uint local_a4;
  FNetExportRollbackScope local_a0;
  FNetTraceCollector *local_88;
  undefined8 local_80;
  uint local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  FObjectRecord local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3238,"FReplicationWriter_WriteDestructionInfo",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
               ,0xca6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3238);
  }
  if ((GReplicationWriterMaxDestroyObjectsPerFrame < 1) ||
     ((this->WriteContext).WrittenDestroyObjectCount <
      (uint)GReplicationWriterMaxDestroyObjectsPerFrame)) {
    EVar9 = Skipped;
    pFVar13 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar13 = param_1->TraceCollector;
    }
    this_00 = param_1->BitStreamWriter;
    local_b4 = 0xffffffff;
    local_88 = pFVar13;
    if (pFVar13 != (FNetTraceCollector *)0x0) {
      EVar12 = this_00->BufferBitPosition;
      if (this_00->OverflowBitCount != 0) {
        EVar12 = EVar9;
      }
      local_b4 = FNetTrace::BeginPacketContentEvent(pFVar13,NameId,EVar12);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        Batch = CreatePersistentNetDebugName(L"Batch",5);
        _Init_thread_footer(&::_TSS0);
      }
      uVar8 = FNetTrace::TraceName(Batch);
      FVar11 = (pFVar13->Events).AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar11 = (ForElementType<FNetTracePacketContentEvent>)&pFVar13->Events;
      }
      *(uint *)((longlong)FVar11 + (ulonglong)local_b4 * 0x10) = uVar8;
    }
    local_a4 = this_00->BufferBitPosition - this_00->BufferBitStartOffset;
    if (param_1->ExportContext == (FNetExportContext *)0x0) {
      local_a0.StartNumNetHandleExports = 0;
      local_a0.StartNumNetTokenExports = 0;
      local_a0.StartNumPendingExports = 0;
      local_a0.StartNumNetTokensPendingExports = 0;
    }
    else {
      pFVar4 = param_1->ExportContext->BatchExports;
      local_a0.StartNumNetTokenExports = (pFVar4->NetTokensExportedInCurrentBatch).ArrayNum;
      local_a0.StartNumNetHandleExports = (pFVar4->HandlesExportedInCurrentBatch).ArrayNum;
      local_a0.StartNumNetTokensPendingExports =
           (pFVar4->NetTokensPendingExportInCurrentBatch).ArrayNum;
      local_a0.StartNumPendingExports = (pFVar4->ReferencesPendingExportInCurrentBatch).ArrayNum;
    }
    local_a0.Context = param_1;
    local_b0 = (FNetRefHandle_u_0 *)
               FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                         (this->NetRefHandleManager,param_2);
    local_b8 = 1;
    FNetBitStreamWriter::WriteBits(this_00,1,1);
    pFVar5 = param_1->InternalContext;
    if (pFVar5 == (FInternalNetSerializationContext *)0x0) {
      local_a8 = 0;
    }
    else {
      local_a8 = *(uint *)&pFVar5->field_0x30 & 2;
      pFVar5->bInlineObjectReferenceExports = 1;
    }
    bVar7 = WriteNetRefHandleDestructionInfo
                      (this,param_1,(FNetRefHandle)*(FNetRefHandle_u_0 *)&local_b0->_s_0);
    if (bVar7) {
      if ((this->StreamDebugFeatures & Sentinels) != None) {
        WriteSentinelBits(this_00,8);
      }
      if (this_00->OverflowBitCount == 0) {
        SetState(this,param_2,WaitOnCreateConfirmation);
        pFVar10 = GetReplicationInfo(this,param_2);
        local_80 = 0;
        local_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        local_58.AttachmentRecord.Sequences[0] = (FSequence)0x0;
        local_58.AttachmentRecord.Sequences[1] = (FSequence)0x0;
        local_58.AttachmentRecord.Sequences[2] = (FSequence)0x0;
        local_58.AttachmentRecord.Sequences[3] = (FSequence)0x0;
        local_b0 = (FNetRefHandle_u_0 *)&pFVar10->field1_0x8;
        local_68 = 0;
        uStack_60 = 0;
        local_58.Record.ChangeMaskOrPtr.ChangeMaskOrPointer = 0;
        uVar8 = ((*(uint *)local_b0 >> 0x10 & 0x1f) << 0x14 ^
                (local_58.Record._8_4_ & 0xfe000000 | param_2 & 0xfffff)) & 0xf1ffffff;
        local_58.Record._8_4_ =
             (((int)(local_b0->Value >> 0x1d) << 0x1c ^ uVar8) & 0x10000000 ^ uVar8) & 0x1fffffff |
             0x40000000;
        local_78 = param_2;
        CommitObjectRecord(this,param_2,&local_58);
        local_b0->Value = local_b0->Value & 0xffffffffff7fffff;
        local_b0->Value = local_b0->Value & 0xfffffffffedfffff;
        FNetBitArray::ClearBit(&this->ObjectsWithDirtyChanges,param_2);
        if ((local_b0->Value & 0x8000000000) != 0) {
          TMapBase<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo,0>_>
          ::Remove((TMapBase<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo,0>_>
                    *)&this->CannotSendInfos,param_2);
          local_b0->Value = local_b0->Value & 0xffffff7fffffffff;
        }
        iVar3 = (this->SchedulingPriorities).ArrayNum;
        uVar8 = 0;
        if ((int)param_2 < iVar3) {
          uVar8 = ~param_2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (local_c8 = (longlong)(int)param_2, local_c0 = (longlong)iVar3,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(undefined4 *)
         ((this->SchedulingPriorities).AllocatorInstance.Data + (longlong)(int)param_2 * 4) = 0;
        piVar1 = &(this->WriteContext).Stats.Stats.ReplicatedDestructionInfoCount;
        *piVar1 = *piVar1 + 1;
        puVar2 = &(this->WriteContext).WrittenBatchCount;
        *puVar2 = *puVar2 + 1;
        puVar2 = &(this->WriteContext).WrittenDestroyObjectCount;
        *puVar2 = *puVar2 + 1;
      }
      EVar9 = Written;
      if (this_00->OverflowBitCount != 0) {
        EVar9 = Abort;
      }
    }
    else {
      FNetBitStreamWriter::DoOverflow(this_00);
    }
    if (pFVar5 != (FInternalNetSerializationContext *)0x0) {
      pFVar5->bInlineObjectReferenceExports = 0;
      *(uint *)&pFVar5->field_0x30 = *(uint *)&pFVar5->field_0x30 | local_a8;
    }
    if (((param_1->ErrorContext).Error != (FName)0x0) ||
       (bVar7 = FNetSerializationContext::IsBitStreamOverflown(param_1), bVar7)) {
      FNetExportRollbackScope::Rollback(&local_a0);
    }
    if (this_00->OverflowBitCount != 0) {
      FNetBitStreamWriter::Seek(this_00,local_a4);
    }
    if (local_b4 != 0xffffffff) {
      uVar8 = this_00->BufferBitPosition;
      if (this_00->OverflowBitCount != 0) {
        uVar8 = 0;
      }
      FNetTrace::EndPacketContentEvent(local_88,local_b4,uVar8);
    }
  }
  else {
    EVar9 = Skipped;
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar9;
}

// WriteNetRefHandleDestructionInfo @ 144319020

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FReplicationWriter::WriteNetRefHandleDestructionInfo
          (FReplicationWriter *this,FNetSerializationContext *param_1,FNetRefHandle param_2)

{
  UObjectReplicationBridge *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FName *pFVar8;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  ulonglong *puVar10;
  FNetTraceCollector *this_00;
  FName FVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  FNetTraceCollector *pFVar14;
  FName local_res8;
  FNetRefHandle_u_0 local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  FVar11 = (FName)param_1->BitStreamWriter;
  pFVar14 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar14 = param_1->TraceCollector;
  }
  uVar5 = 0xffffffff;
  local_res8 = FVar11;
  local_res18[0] = param_2.field0_0x0;
  if (pFVar14 != (FNetTraceCollector *)0x0) {
    uVar5 = *(uint *)((longlong)FVar11 + 0x10);
    if (*(uint *)((longlong)FVar11 + 0x18) != 0) {
      uVar5 = 0;
    }
    uVar5 = FNetTrace::BeginPacketContentEvent(pFVar14,NameId,uVar5);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      DestructionInfo = CreatePersistentNetDebugName(L"DestructionInfo",0xf);
      _Init_thread_footer(&::_TSS0);
    }
    uVar6 = FNetTrace::TraceName(DestructionInfo);
    FVar9 = (pFVar14->Events).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar9 = (ForElementType<FNetTracePacketContentEvent>)&pFVar14->Events;
    }
    *(uint *)((longlong)FVar9 + (ulonglong)uVar5 * 0x10) = uVar6;
  }
  pUVar1 = this->ReplicationBridge;
  uVar12 = local_res18[0].Value & 0x3fffffffffffff;
  if (*(int *)&(pUVar1->StaticObjectsPendingDestroy).field_0x8 !=
      *(int *)&(pUVar1->StaticObjectsPendingDestroy).field_0x34) {
    puVar13 = *(undefined1 **)&(pUVar1->StaticObjectsPendingDestroy).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(pUVar1->StaticObjectsPendingDestroy).field_0x38;
    }
    iVar7 = *(int *)(puVar13 +
                    ((uVar12 >> 0x20) * 0x17 + uVar12 &
                    (ulonglong)(*(int *)&(pUVar1->StaticObjectsPendingDestroy).field_0x48 - 1)) * 4)
    ;
    if (iVar7 != -1) {
      do {
        puVar10 = (ulonglong *)
                  ((longlong)iVar7 * 0x30 + *(longlong *)&pUVar1->StaticObjectsPendingDestroy);
        if ((*puVar10 & 0x3fffffffffffff) == uVar12) {
          this_00 = (FNetTraceCollector *)(puVar10 + 1);
          if (puVar10 == (ulonglong *)0x0) {
            this_00 = (FNetTraceCollector *)0x0;
          }
          if (this_00 != (FNetTraceCollector *)0x0) {
            if (6 < (byte)LogIris._0_1_) {
              if ((((FNetToken_u_0 *)((FNetRefHandle *)this_00->NestingStack + 1))->Value & 0xfffff)
                  == 0) {
                FNetRefHandle::ToString((FNetRefHandle *)this_00,&local_98);
              }
              else if ((((FNetRefHandle *)this_00->NestingStack)->field0_0x0).Value == 0) {
                local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                ::FString::PrintfImpl(&local_78,L"NetToken (Auth:%u TypeId=%u Index=%u)");
                if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_98.Data.AllocatorInstance.Data);
                }
                local_98.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
                local_98.Data.ArrayNum = local_78.Data.ArrayNum;
                local_98.Data.ArrayMax = local_78.Data.ArrayMax;
              }
              else {
                FNetToken::ToString((FNetToken *)((FNetRefHandle *)this_00->NestingStack + 1),
                                    &local_88);
                FNetRefHandle::ToString((FNetRefHandle *)this_00,&local_68);
                ::FString::AppendfImpl(&local_88,L" : %s");
                if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_68.Data.AllocatorInstance.Data);
                }
                local_98.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
                local_98.Data.ArrayNum = local_88.Data.ArrayNum;
                local_98.Data.ArrayMax = local_88.Data.ArrayMax;
              }
              FNetRefHandle::ToString((FNetRefHandle *)&local_res18[0]._s_0,&local_58);
              Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              FVar11 = local_res8;
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
                FVar11 = local_res8;
              }
            }
            WriteFullNetObjectReference(param_1,(FNetObjectReference *)this_00);
            uVar6 = FNetObjectFactoryRegistry::GetNumBits(7);
            FNetBitStreamWriter::WriteBits
                      (param_1->BitStreamWriter,
                       (uint)*(byte *)((FNetRefHandle *)this_00->NestingStack + 3),uVar6 + 1);
            goto LAB_1443193a0;
          }
          break;
        }
        iVar7 = (int)puVar10[5];
      } while (iVar7 != -1);
    }
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7868239365963517178>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                     ,0xcfa,"Info");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar8 = ::FName::FName(&local_res8,L"DestructionInfoNotFound");
  FNetErrorContext::SetError(&param_1->ErrorContext,*pFVar8);
  if (1 < (byte)LogIris._0_1_) {
    FNetRefHandle::ToString((FNetRefHandle *)&local_res18[0]._s_0,&local_48);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
LAB_1443193a0:
  if (((param_1->ErrorContext).Error != (FName)0x0) ||
     (bVar3 = FNetSerializationContext::IsBitStreamOverflown(param_1), bVar3)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (uVar5 != 0xffffffff) {
    uVar6 = *(uint *)((longlong)FVar11 + 0x10);
    if (*(uint *)((longlong)FVar11 + 0x18) != 0) {
      uVar6 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar14,uVar5,uVar6);
  }
  return bVar3;
}

// WriteNetRefHandleId @ 144319450

void __thiscall
UE::Net::Private::FReplicationWriter::WriteNetRefHandleId
          (FReplicationWriter *this,FNetSerializationContext *param_1,FNetRefHandle param_2)

{
  FNetBitStreamWriter *pFVar1;
  uint uVar2;
  FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&> local_28;
  
  pFVar1 = param_1->BitStreamWriter;
  FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&>::
  FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&>
            (&local_28,(ulonglong)param_2.field0_0x0 & 0x3fffffffffffff,pFVar1,
             param_1->TraceCollector,2);
  WritePackedUint64(pFVar1,(ulonglong)param_2.field0_0x0 & 0x3fffffffffffff);
  if (local_28.EventIndex != 0xffffffff) {
    uVar2 = (local_28.Stream)->BufferBitPosition;
    if ((local_28.Stream)->OverflowBitCount != 0) {
      uVar2 = 0;
    }
    FNetTrace::EndPacketContentEvent(local_28.Collector,local_28.EventIndex,uVar2);
  }
  return;
}

// WriteOOBAttachments @ 1443194e0

uint __thiscall
UE::Net::Private::FReplicationWriter::WriteOOBAttachments
          (FReplicationWriter *this,FNetSerializationContext *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  FNetRefHandle_u_0 local_res8;
  LARGE_INTEGER local_res18 [2];
  
  uVar5 = (uint)param_1;
  if ((this->WriteContext).WriteMode == PostTickDispatch) {
    if ((this->WriteContext).bHasOOBAttachmentsToSend == 0) {
      return 0;
    }
    bVar2 = CanSendObject(this,0);
    if (!bVar2) {
      return 0;
    }
    if ((this->ReplicationRecord).RecordInfos.Tail - (this->ReplicationRecord).RecordInfos.Head ==
        -0xffff) {
      return 0;
    }
    bVar2 = -1 < CpuChannel->Enabled;
    if (bVar2) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId3346,"FReplicationWriter_WriteOOBAttachments",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                 ,0xd12);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3346);
    }
    WriteObjectBatch(this,(FNetSerializationContext *)&local_res8._s_0,uVar5,0);
    if (local_res8.Value._0_4_ == -1) {
LAB_144319631:
      if (bVar2) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return 0;
    }
    bVar3 = FNetObjectAttachmentsWriter::HasUnsentUnreliableAttachments
                      (&this->Attachments,OutOfBand,0);
  }
  else {
    uVar4 = 0;
    if (((this->WriteContext).bHasHugeObjectToSend != 0) &&
       (uVar4 = 0,
       (this->ReplicationRecord).RecordInfos.Tail - (this->ReplicationRecord).RecordInfos.Head !=
       -0xffff)) {
      bVar2 = -1 < CpuChannel->Enabled;
      if (bVar2) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId3361,"FReplicationWriter_WriteHugeObjectAttachments",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                   ,0xd21);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3361);
      }
      WriteObjectBatch(this,(FNetSerializationContext *)&local_res8._s_0,uVar5,0);
      if (local_res8.Value._0_4_ == -1) goto LAB_144319631;
      bVar3 = FNetObjectAttachmentsWriter::HasUnsentAttachments(&this->Attachments,HugeObject,0);
      (this->WriteContext).bHasHugeObjectToSend = 0;
      puVar1 = &(this->WriteContext).field_0xd4;
      *(uint *)puVar1 = *(uint *)puVar1 | (uint)bVar3 << 3;
      if (!bVar3) {
        QueryPerformanceCounter(local_res18);
        (this->HugeObjectSendQueue).Stats.EndSendingTime = (ulong64)local_res18[0];
      }
      uVar4 = local_res8.Value._4_4_;
      if (bVar2) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if ((this->WriteContext).bHasOOBAttachmentsToSend == 0) {
      return uVar4;
    }
    bVar2 = CanSendObject(this,0);
    if (!bVar2) {
      return uVar4;
    }
    if ((this->ReplicationRecord).RecordInfos.Tail - (this->ReplicationRecord).RecordInfos.Head ==
        -0xffff) {
      return uVar4;
    }
    bVar2 = -1 < CpuChannel->Enabled;
    if (bVar2) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId3380,"FReplicationWriter_WriteOOBAttachments",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                 ,0xd34);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3380);
    }
    WriteObjectBatch(this,(FNetSerializationContext *)&local_res8._s_0,uVar5,0);
    if (local_res8.Value._0_4_ == -1) goto LAB_144319757;
    bVar3 = FNetObjectAttachmentsWriter::HasUnsentAttachments(&this->Attachments,OutOfBand,0);
    local_res8.Value._4_4_ = uVar4 + local_res8.Value._4_4_;
  }
  (this->WriteContext).bHasOOBAttachmentsToSend = 0;
  puVar1 = &(this->WriteContext).field_0xd4;
  *(uint *)puVar1 = *(uint *)puVar1 | (uint)bVar3 << 4;
  uVar4 = local_res8.Value._4_4_;
LAB_144319757:
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return uVar4;
}

// WriteObjectBatch @ 14431baf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FWriteBatchResult __thiscall
UE::Net::Private::FReplicationWriter::WriteObjectBatch
          (FReplicationWriter *this,FNetSerializationContext *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> FVar2;
  FNetBitStreamWriter *this_00;
  FBatchExports *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  EWriteStatus EVar7;
  uint uVar8;
  EWriteObjectStatus EVar9;
  uint uVar10;
  EWriteObjectRetryMode EVar11;
  FReplicationInfo *pFVar12;
  FWriteBatchResult FVar13;
  ForElementType<FNetTracePacketContentEvent> FVar14;
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> FVar15;
  undefined4 in_register_00000084;
  FNetSerializationContext *this_01;
  ulonglong uVar16;
  bool bVar17;
  uint in_stack_00000028;
  undefined1 auStackY_4f8 [32];
  uint local_4c4;
  undefined1 local_4bc [4];
  FNetTraceCollector *local_4b8;
  FNetExportRollbackScope local_4b0;
  FWriteBatchResult local_498;
  FNetBitStreamWriter *local_490;
  FBatchRecord local_488;
  FBatchInfo local_2f0;
  ulonglong local_58;
  
  this_01 = (FNetSerializationContext *)CONCAT44(in_register_00000084,param_2);
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  bVar17 = -1 < CpuChannel->Enabled;
  local_498 = (FWriteBatchResult)param_1;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3135,"FReplicationWriter_WriteObjectBatch",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
               ,0xc3f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3135);
  }
  pFVar12 = GetReplicationInfo(this,param_3);
  if ((*(uint *)&pFVar12->field1_0x8 >> 0x1a & 1) != 0) {
    EVar7 = WriteDestructionInfo(this,this_01,param_3);
    *(EWriteStatus *)&(param_1->ErrorContext).ObjectHandle.field0_0x0 = EVar7;
    *(uint *)((longlong)&(param_1->ErrorContext).ObjectHandle.field0_0x0 + 4) =
         (uint)(EVar7 == Written);
    if (!bVar17) {
      return (FWriteBatchResult)param_1;
    }
    FCpuProfilerTrace::OutputEndEvent();
    return (FWriteBatchResult)param_1;
  }
  this_00 = this_01->BitStreamWriter;
  local_4b8 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    local_4b8 = this_01->TraceCollector;
  }
  local_4c4 = 0xffffffff;
  local_490 = this_00;
  if (local_4b8 != (FNetTraceCollector *)0x0) {
    uVar8 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar8 = 0;
    }
    local_4c4 = FNetTrace::BeginPacketContentEvent(local_4b8,NameId,uVar8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      Batch = CreatePersistentNetDebugName(L"Batch",5);
      _Init_thread_footer(&::_TSS0);
    }
    uVar8 = FNetTrace::TraceName(Batch);
    FVar14 = (local_4b8->Events).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar14 = (ForElementType<FNetTracePacketContentEvent>)&local_4b8->Events;
    }
    *(uint *)((longlong)FVar14 + (ulonglong)local_4c4 * 0x10) = uVar8;
  }
  uVar8 = this_00->BufferBitPosition - this_00->BufferBitStartOffset;
  if (this_01->ExportContext == (FNetExportContext *)0x0) {
    local_4b0.StartNumNetHandleExports = 0;
    local_4b0.StartNumNetTokenExports = 0;
    local_4b0.StartNumPendingExports = 0;
    local_4b0.StartNumNetTokensPendingExports = 0;
  }
  else {
    pFVar3 = this_01->ExportContext->BatchExports;
    local_4b0.StartNumNetTokenExports = (pFVar3->NetTokensExportedInCurrentBatch).ArrayNum;
    local_4b0.StartNumNetHandleExports = (pFVar3->HandlesExportedInCurrentBatch).ArrayNum;
    local_4b0.StartNumNetTokensPendingExports =
         (pFVar3->NetTokensPendingExportInCurrentBatch).ArrayNum;
    local_4b0.StartNumPendingExports = (pFVar3->ReferencesPendingExportInCurrentBatch).ArrayNum;
  }
  (this->WriteBitStreamInfo).BatchStartPos = uVar8;
  local_2f0.ObjectInfos.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo>)0x0;
  local_2f0.ObjectInfos.ArrayNum = 0;
  local_2f0.ObjectInfos.ArrayMax = 0x10;
  if (param_3 == 0) {
    local_2f0.Type = OOBAttachment - ((in_stack_00000028 & 4) != 0);
  }
  else {
    local_2f0.Type = Object;
  }
  local_4b0.Context = this_01;
  local_2f0.ParentInternalIndex = param_3;
  EVar9 = WriteObjectInBatch(this,this_01,param_3,in_stack_00000028,&local_2f0);
  if (EVar9 < BitStreamOverflow) {
    local_488.ObjectReplicationRecords.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0;
    local_488.ObjectReplicationRecords.ArrayNum = 0;
    local_488.ObjectReplicationRecords.ArrayMax = 0x10;
    local_488.BatchCount = 0;
    uVar10 = HandleObjectBatchSuccess(this,&local_2f0,&local_488);
    iVar5 = local_488.ObjectReplicationRecords.ArrayNum;
    puVar1 = &(this->WriteContext).WrittenBatchCount;
    *puVar1 = *puVar1 + local_488.BatchCount;
    uVar16 = (ulonglong)local_488.ObjectReplicationRecords.ArrayNum;
    FVar15 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)&local_488;
    if (local_488.ObjectReplicationRecords.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0) {
      FVar15 = local_488.ObjectReplicationRecords.AllocatorInstance.SecondaryData;
    }
    FVar2 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
            ((longlong)FVar15 + uVar16 * 0x18);
    while( true ) {
      if ((uint)uVar16 != iVar5) {
        `TCheckedPointerIterator<UE::Net::Private::FReplicationWriter::FObjectRecord_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_4bc);
      }
      this_00 = local_490;
      param_1 = (FNetSerializationContext *)local_498;
      if (FVar15 == FVar2) break;
      CommitObjectRecord(this,*(uint *)((longlong)FVar15 + 8) & 0xfffff,(FObjectRecord *)FVar15);
      uVar16 = (ulonglong)(uint)local_488.ObjectReplicationRecords.ArrayNum;
      FVar15 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
               ((longlong)FVar15 + 0x18);
    }
    *(undefined4 *)local_498 = 1;
    *(uint *)((longlong)local_498 + 4) = uVar10;
    if (local_488.ObjectReplicationRecords.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0) {
      FMemory::Free((void *)local_488.ObjectReplicationRecords.AllocatorInstance.SecondaryData);
    }
    if (local_2f0.ObjectInfos.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo>)0x0) {
      FMemory::Free((void *)local_2f0.ObjectInfos.AllocatorInstance.SecondaryData);
    }
    if (((this_01->ErrorContext).Error != (FName)0x0) ||
       (bVar6 = FNetSerializationContext::IsBitStreamOverflown(this_01), bVar6)) {
      FNetExportRollbackScope::Rollback(&local_4b0);
    }
    if (this_00->OverflowBitCount != 0) {
      FNetBitStreamWriter::Seek(this_00,uVar8);
    }
  }
  else {
    EVar11 = HandleObjectBatchFailure(this,EVar9,&local_2f0,&this->WriteBitStreamInfo);
    FNetBitStreamWriter::Seek(this_00,uVar8);
    FNetExportRollbackScope::Rollback(&local_4b0);
    if (EVar11 == Abort) {
      *(undefined4 *)&(param_1->ErrorContext).ObjectHandle.field0_0x0 = 0xffffffff;
      *(undefined4 *)((longlong)&(param_1->ErrorContext).ObjectHandle.field0_0x0 + 4) = 0;
    }
    else {
      if (EVar11 != TrySmallObject) {
        if ((EVar11 != SplitHugeObject) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                               ,0xc8d,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          FVar13 = (FWriteBatchResult)(*pcVar4)();
          return FVar13;
        }
        if (local_2f0.ObjectInfos.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo>)0x0) {
          FMemory::Free((void *)local_2f0.ObjectInfos.AllocatorInstance.SecondaryData);
        }
        if ((((local_4b0.Context)->ErrorContext).Error != (FName)0x0) ||
           (bVar6 = FNetSerializationContext::IsBitStreamOverflown(local_4b0.Context), bVar6)) {
          FNetExportRollbackScope::Rollback(&local_4b0);
        }
        if (this_00->OverflowBitCount != 0) {
          FNetBitStreamWriter::Seek(this_00,uVar8);
        }
        if (local_4c4 != 0xffffffff) {
          uVar8 = this_00->BufferBitPosition;
          if (this_00->OverflowBitCount != 0) {
            uVar8 = 0;
          }
          FNetTrace::EndPacketContentEvent(local_4b8,local_4c4,uVar8);
        }
        EVar7 = PrepareAndSendHugeObjectPayload(this,this_01,param_3);
        if (EVar7 == Written) {
          puVar1 = &(this->WriteContext).WrittenBatchCount;
          *puVar1 = *puVar1 + 1;
        }
        *(EWriteStatus *)&(param_1->ErrorContext).ObjectHandle.field0_0x0 = EVar7;
        *(uint *)((longlong)&(param_1->ErrorContext).ObjectHandle.field0_0x0 + 4) =
             (uint)(EVar7 == Written);
        goto LAB_14431bfd3;
      }
      puVar1 = &(this->WriteContext).FailedToWriteSmallObjectCount;
      *puVar1 = *puVar1 + 1;
      (param_1->ErrorContext).ObjectHandle.field0_0x0.Value = 0;
    }
    if (local_2f0.ObjectInfos.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo>)0x0) {
      FMemory::Free((void *)local_2f0.ObjectInfos.AllocatorInstance.SecondaryData);
    }
    if (((this_01->ErrorContext).Error != (FName)0x0) ||
       (bVar6 = FNetSerializationContext::IsBitStreamOverflown(this_01), bVar6)) {
      FNetExportRollbackScope::Rollback(&local_4b0);
    }
    if (this_00->OverflowBitCount != 0) {
      FNetBitStreamWriter::Seek(this_00,uVar8);
    }
  }
  if (local_4c4 != 0xffffffff) {
    uVar8 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar8 = 0;
    }
    FNetTrace::EndPacketContentEvent(local_4b8,local_4c4,uVar8);
  }
LAB_14431bfd3:
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FWriteBatchResult)param_1;
}

// WriteObjectInBatch @ 14431c060

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

EWriteObjectStatus __thiscall
UE::Net::Private::FReplicationWriter::WriteObjectInBatch
          (FReplicationWriter *this,FNetSerializationContext *param_1,uint param_2,uint param_3,
          FBatchInfo *param_4)

{
  uint *puVar1;
  int *piVar2;
  FNetStatsContext *pFVar3;
  FNetExportContext *pFVar4;
  FBatchExports *pFVar5;
  FDependentObjectInfo FVar6;
  FScriptContainerElement *pFVar7;
  FNetBitStreamWriter *pFVar8;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  code *pcVar10;
  bool bVar11;
  EWriteObjectStatus EVar12;
  uint uVar13;
  uint uVar14;
  LARGE_INTEGER LVar15;
  FReplicatedObjectData *pFVar16;
  FNetTypeStatsData *pFVar17;
  byte bVar18;
  ForElementType<FNetTracePacketContentEvent> FVar19;
  uint uVar20;
  uint uVar21;
  FNetTraceCollector *pFVar22;
  int iVar23;
  FDependentObjectInfo *pFVar24;
  ulonglong uVar25;
  LARGE_INTEGER local_78;
  LARGE_INTEGER local_70;
  LARGE_INTEGER local_68;
  LARGE_INTEGER local_60;
  LARGE_INTEGER local_58;
  FDependentObjectInfo *local_50;
  TArrayView<UE::Net::Private::FDependentObjectInfo_const_,int> local_48;
  
  pFVar3 = param_1->NetStatsContext;
  LVar15.QuadPart = 0;
  if (pFVar3 != (FNetStatsContext *)0x0) {
    QueryPerformanceCounter(&local_78);
    LVar15 = local_78;
  }
  pFVar16 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this->NetRefHandleManager,param_2);
  uVar25 = (pFVar16->RefHandle).field0_0x0.Value & 0x3fffffffffffff;
  if ((GNetTraceRuntimeVerbosity < 3) ||
     (pFVar16 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                          (this->NetRefHandleManager,param_2),
     (pFVar16->RefHandle).field0_0x0.Value == 0)) {
    uVar21 = 0xffffffff;
  }
  else {
    pFVar16 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                        (this->NetRefHandleManager,param_2);
    if (((pFVar16->RefHandle).field0_0x0.Value < 0x40000000000000) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ReplicationSystemId != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                            ,0x2b,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      EVar12 = (*pcVar10)();
      return EVar12;
    }
    uVar21 = (uint)((pFVar16->RefHandle).field0_0x0.Value >> 0x36) - 1;
  }
  pFVar4 = param_1->ExportContext;
  if (pFVar4 != (FNetExportContext *)0x0) {
    pFVar5 = pFVar4->BatchExports;
    piVar2 = &(pFVar5->ReferencesPendingExportInCurrentBatch).ArrayMax;
    (pFVar5->ReferencesPendingExportInCurrentBatch).ArrayNum = 0;
    if (*piVar2 != 0) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_>
                (0x10,8,0,&(pFVar5->ReferencesPendingExportInCurrentBatch).AllocatorInstance,0,
                 piVar2);
    }
    pFVar5 = pFVar4->BatchExports;
    piVar2 = &(pFVar5->NetTokensPendingExportInCurrentBatch).ArrayMax;
    (pFVar5->NetTokensPendingExportInCurrentBatch).ArrayNum = 0;
    if (*piVar2 != 0) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
                (4,4,0,&(pFVar5->NetTokensPendingExportInCurrentBatch).AllocatorInstance,0,piVar2);
    }
  }
  EVar12 = WriteObjectAndSubObjects(this,param_1,param_2,param_3,param_4);
  if (EVar12 < BitStreamOverflow) {
    if (pFVar3 != (FNetStatsContext *)0x0) {
      pFVar16 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                          (pFVar3->NetRefHandleManager,param_2);
      if ((pFVar3->bShouldIncludeSubObjectWithRoot == false) || (pFVar16->SubObjectRootIndex == 0))
      {
        bVar11 = true;
      }
      else {
        bVar11 = false;
      }
      pFVar17 = FNetStatsContext::GetTypeStatsData(pFVar3,pFVar16,bVar11);
      QueryPerformanceCounter(&local_60);
      pFVar17->Values[4].Time = pFVar17->Values[4].Time + (local_60.QuadPart - (longlong)LVar15);
      puVar1 = &pFVar17->Values[4].Count;
      *puVar1 = *puVar1 + (uint)bVar11;
    }
    if (uVar21 != 0xffffffff) {
      QueryPerformanceCounter(&local_58);
      FNetTrace::TraceObjectWritten(uVar21,uVar25,local_58.QuadPart - (longlong)LVar15);
    }
    uVar21 = param_4->ParentInternalIndex;
    FNetRefHandleManager::GetDependentObjectInfos(this->NetRefHandleManager,&local_48,param_2);
    local_50 = local_48.DataPtr + local_48.ArrayNum;
    pFVar24 = local_48.DataPtr;
    if (local_48.DataPtr != local_50) {
      do {
        FVar6 = *pFVar24;
        uVar20 = FVar6.NetRefIndex;
        uVar13 = 0;
        if ((int)uVar20 < (this->ReplicatedObjects).ArrayNum) {
          uVar13 = ~uVar20 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          EVar12 = (*pcVar10)();
          return EVar12;
        }
        bVar18 = (byte)((uint)*(undefined4 *)
                               ((this->ReplicatedObjects).AllocatorInstance.Data +
                               (longlong)(int)uVar20 * 0x10 + 8) >> 0x10) & 0x1f;
        if ((bVar18 == 3) || (bVar18 == 4)) {
          pFVar7 = (this->WriteContext).ObjectsWrittenThisPacket.Storage.AllocatorInstance.Data;
          if (((this->WriteContext).ObjectsWrittenThisPacket.BitCount <= uVar20) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < BitCount",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                  ,0x2c1,L""), bVar11)) {
            pcVar10 = (code *)swi(3);
            EVar12 = (*pcVar10)();
            return EVar12;
          }
          if ((*(uint *)(pFVar7 + (((ulonglong)FVar6 & 0xffffffff) >> 5) * 4) >> (uVar20 & 0x1f) & 1
              ) == 0) {
            uVar13 = 0xffffffff;
            pFVar22 = (FNetTraceCollector *)0x0;
            if (2 < GNetTraceRuntimeVerbosity) {
              pFVar22 = param_1->TraceCollector;
            }
            pFVar8 = param_1->BitStreamWriter;
            if (pFVar22 != (FNetTraceCollector *)0x0) {
              uVar13 = pFVar8->BufferBitPosition;
              if (pFVar8->OverflowBitCount != 0) {
                uVar13 = 0;
              }
              uVar13 = FNetTrace::BeginPacketContentEvent(pFVar22,NameId,uVar13);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                DependentObjectData = CreatePersistentNetDebugName(L"DependentObjectData",0x13);
                _Init_thread_footer(&::_TSS0);
              }
              uVar14 = FNetTrace::TraceName(DependentObjectData);
              FVar9 = (pFVar22->Events).AllocatorInstance.SecondaryData;
              FVar19 = (ForElementType<FNetTracePacketContentEvent>)&pFVar22->Events;
              if (FVar9 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
                FVar19 = FVar9;
              }
              *(uint *)((longlong)FVar19 + (ulonglong)uVar13 * 0x10) = uVar14;
            }
            param_4->ParentInternalIndex = uVar20;
            EVar12 = WriteObjectInBatch(this,param_1,uVar20,param_3,param_4);
            if (InvalidState < EVar12) {
              param_4->ParentInternalIndex = uVar21;
              if (uVar13 == 0xffffffff) {
                return EVar12;
              }
              uVar21 = pFVar8->BufferBitPosition;
              if (pFVar8->OverflowBitCount != 0) {
                uVar21 = 0;
              }
              FNetTrace::EndPacketContentEvent(pFVar22,uVar13,uVar21);
              return EVar12;
            }
            if (uVar13 != 0xffffffff) {
              uVar20 = pFVar8->BufferBitPosition;
              if (pFVar8->OverflowBitCount != 0) {
                uVar20 = 0;
              }
              FNetTrace::EndPacketContentEvent(pFVar22,uVar13,uVar20);
            }
          }
        }
        pFVar24 = pFVar24 + 1;
      } while (pFVar24 != local_50);
    }
    EVar12 = Success;
    param_4->ParentInternalIndex = uVar21;
  }
  else {
    if (pFVar3 != (FNetStatsContext *)0x0) {
      QueryPerformanceCounter(&local_70);
      pFVar16 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                          (pFVar3->NetRefHandleManager,param_2);
      if ((pFVar3->bShouldIncludeSubObjectWithRoot == false) || (pFVar16->SubObjectRootIndex == 0))
      {
        iVar23 = 1;
      }
      else {
        iVar23 = 0;
      }
      pFVar17 = FNetStatsContext::GetTypeStatsData(pFVar3,pFVar16,SUB41(iVar23,0));
      pFVar17->Values[4].Time = pFVar17->Values[4].Time + (local_70.QuadPart - (longlong)LVar15);
      puVar1 = &pFVar17->Values[4].Count;
      *puVar1 = *puVar1 + iVar23;
      pFVar17->Values[5].Time = pFVar17->Values[5].Time + (local_70.QuadPart - (longlong)LVar15);
      puVar1 = &pFVar17->Values[5].Count;
      *puVar1 = *puVar1 + iVar23;
    }
    if (uVar21 != 0xffffffff) {
      QueryPerformanceCounter(&local_68);
      FNetTrace::TraceObjectWritten(uVar21,uVar25,local_68.QuadPart - (longlong)LVar15);
    }
  }
  return EVar12;
}

// WriteObjects @ 14431c5c0

uint __thiscall
UE::Net::Private::FReplicationWriter::WriteObjects
          (FReplicationWriter *this,FNetSerializationContext *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  longlong lVar3;
  FNetBitStreamWriter *pFVar4;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ForElementType<unsigned_int> FVar13;
  ForElementType<FNetTracePacketContentEvent> FVar14;
  uint uVar15;
  FNetTraceCollector *pFVar16;
  FScheduleObjectInfo *pFVar17;
  uint uVar18;
  ForElementType<unsigned_int> FVar19;
  uint local_res18;
  uint local_res20;
  uint local_78;
  uint local_74;
  uint local_70;
  FScheduleObjectInfo *local_68;
  FNetRefHandle_u_0 local_60;
  FNetRefHandle_u_0 local_58;
  FName local_50 [2];
  
  local_70 = (this->WriteContext).ScheduledObjectCount;
  uVar18 = 0;
  local_res20 = 0;
  pFVar17 = (this->WriteContext).ScheduledObjectInfos;
  uVar10 = (this->WriteContext).CurrentIndex;
  uVar11 = (this->WriteContext).SortedObjectCount;
  uVar15 = 0;
  local_68 = pFVar17;
  if ((this->WriteContext).bIsInReplicationRecordStarvation != 0 ||
      (this->WriteContext).bHasUpdatedObjectsToSend != 1) {
LAB_14431ca22:
    if ((uVar10 != local_70) || ((this->WriteContext).DependentObjectsPendingSend.ArrayNum != 0)) {
      uVar18 = 4;
    }
    (this->WriteContext).CurrentIndex = uVar10;
    (this->WriteContext).SortedObjectCount = uVar11;
    (this->WriteContext).bHasUpdatedObjectsToSend = uVar18 >> 2;
    memset((this->WriteContext).ObjectsWrittenThisPacket.Storage.AllocatorInstance.Data,0,
           (longlong)(this->WriteContext).ObjectsWrittenThisPacket.Storage.ArrayNum << 2);
    return uVar15;
  }
  bVar9 = true;
  pFVar16 = (FNetTraceCollector *)0x0;
  local_res18 = uVar10;
  local_78 = uVar11;
LAB_14431c648:
  uVar15 = local_res20;
  if (uVar10 < local_70) {
    if (uVar11 <= uVar10) {
      uVar10 = SortScheduledObjects(this,pFVar17,local_70,uVar10);
      local_78 = local_78 + uVar10;
      uVar10 = local_res18;
      uVar11 = local_78;
    }
    do {
      if (0 < (this->WriteContext).DependentObjectsPendingSend.ArrayNum) {
        FVar19 = (ForElementType<unsigned_int>)&(this->WriteContext).DependentObjectsPendingSend;
        do {
          pFVar4 = param_1->BitStreamWriter;
          pFVar16 = (FNetTraceCollector *)0x0;
          if (2 < GNetTraceRuntimeVerbosity) {
            pFVar16 = param_1->TraceCollector;
          }
          uVar10 = 0xffffffff;
          if (pFVar16 != (FNetTraceCollector *)0x0) {
            uVar10 = pFVar4->BufferBitPosition;
            if (pFVar4->OverflowBitCount != 0) {
              uVar10 = uVar18;
            }
            uVar10 = FNetTrace::BeginPacketContentEvent(pFVar16,NameId,uVar10);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              DependentObjectData = CreatePersistentNetDebugName(L"DependentObjectData",0x13);
              _Init_thread_footer(&::_TSS0);
            }
            uVar11 = FNetTrace::TraceName(DependentObjectData);
            FVar5 = (pFVar16->Events).AllocatorInstance.SecondaryData;
            FVar14 = (ForElementType<FNetTracePacketContentEvent>)&pFVar16->Events;
            if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar14 = FVar5;
            }
            *(uint *)((longlong)FVar14 + (ulonglong)uVar10 * 0x10) = uVar11;
          }
          if (((this->WriteContext).DependentObjectsPendingSend.ArrayNum < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return uVar10;
          }
          iVar12 = (this->WriteContext).DependentObjectsPendingSend.ArrayNum;
          FVar13 = (this->WriteContext).DependentObjectsPendingSend.AllocatorInstance.SecondaryData;
          uVar11 = iVar12 - 1;
          lVar3 = (longlong)(int)uVar11 * 4;
          if (FVar13 == (ForElementType<unsigned_int>)0x0) {
            uVar15 = *(uint *)((((TArray<unsigned_int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                                  *)FVar19)->AllocatorInstance).InlineData + lVar3);
            FVar13 = FVar19;
          }
          else {
            uVar15 = *(uint *)((longlong)FVar13 + lVar3);
          }
          iVar12 = ~uVar11 + iVar12;
          if (iVar12 != 0) {
            memmove((void *)((longlong)FVar13 + lVar3),(void *)((longlong)FVar13 + lVar3 + 4),
                    (longlong)iVar12 << 2);
          }
          piVar2 = &(this->WriteContext).DependentObjectsPendingSend.ArrayNum;
          *piVar2 = *piVar2 + -1;
          Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,(ForElementType<unsigned_int> *)FVar19,
                     (this->WriteContext).DependentObjectsPendingSend.ArrayNum,
                     &(this->WriteContext).DependentObjectsPendingSend.ArrayMax);
          uVar11 = uVar18;
          if ((int)uVar15 < (this->ReplicatedObjects).ArrayNum) {
            uVar11 = ~uVar15 >> 0x1f;
          }
          local_74 = uVar15;
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return uVar10;
          }
          if ((*(uint *)((this->ReplicatedObjects).AllocatorInstance.Data +
                        (longlong)(int)uVar15 * 0x10 + 8) >> 0x10 & 0x1f) == 0) {
            local_50[0] = (FName)&local_74;
            `UE::Net::Private::FReplicationWriter::WriteObjects'::__l11::<lambda_3>::operator()
                      (local_50);
          }
          uVar11 = local_74;
          pFVar6 = (this->WriteContext).ObjectsWrittenThisPacket.Storage.AllocatorInstance.Data;
          if (((this->WriteContext).ObjectsWrittenThisPacket.BitCount <= local_74) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < BitCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x2c1,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return uVar10;
          }
          if (((*(uint *)(pFVar6 + (ulonglong)(uVar11 >> 5) * 4) >> (uVar11 & 0x1f) & 1) == 0) &&
             (bVar8 = CanSendObject(this,uVar11), bVar8)) {
            WriteObjectBatch(this,(FNetSerializationContext *)&local_60._s_0,(uint)param_1,uVar11);
            if (local_60.Value._0_4_ == 1) {
              local_res20 = local_res20 + local_60.Value._4_4_;
            }
            if (local_60.Value._0_4_ == -1) {
              FVar13 = (this->WriteContext).DependentObjectsPendingSend.AllocatorInstance.
                       SecondaryData;
              if (FVar13 == (ForElementType<unsigned_int>)0x0) {
                FVar13 = FVar19;
              }
              if ((((ulonglong)FVar13 <= &local_74) &&
                  (&local_74 <
                   (uint *)((longlong)FVar13 +
                           (longlong)(this->WriteContext).DependentObjectsPendingSend.ArrayMax * 4))
                  ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar9)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return uVar10;
              }
              iVar12 = (this->WriteContext).DependentObjectsPendingSend.ArrayNum;
              piVar2 = &(this->WriteContext).DependentObjectsPendingSend.ArrayMax;
              if (iVar12 == *piVar2) {
                iVar12 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                                   (0x404,(ForElementType<unsigned_int> *)FVar19,piVar2);
              }
              (this->WriteContext).DependentObjectsPendingSend.ArrayNum = iVar12 + 1;
              FVar13 = (this->WriteContext).DependentObjectsPendingSend.AllocatorInstance.
                       SecondaryData;
              if (FVar13 != (ForElementType<unsigned_int>)0x0) {
                FVar19 = FVar13;
              }
              *(uint *)((longlong)FVar19 + (longlong)iVar12 * 4) = local_74;
              bVar9 = false;
              if (uVar10 == 0xffffffff) {
                pFVar16 = (FNetTraceCollector *)(ulonglong)local_res20;
                pFVar17 = local_68;
                uVar10 = local_res18;
                uVar11 = local_78;
              }
              else {
                uVar11 = pFVar4->BufferBitPosition;
                if (pFVar4->OverflowBitCount != 0) {
                  uVar11 = 0;
                }
                FNetTrace::EndPacketContentEvent(pFVar16,uVar10,uVar11);
                pFVar16 = (FNetTraceCollector *)(ulonglong)local_res20;
                pFVar17 = local_68;
                uVar10 = local_res18;
                uVar11 = local_78;
              }
              goto LAB_14431c946;
            }
          }
          if (uVar10 != 0xffffffff) {
            uVar11 = pFVar4->BufferBitPosition;
            if (pFVar4->OverflowBitCount != 0) {
              uVar11 = 0;
            }
            FNetTrace::EndPacketContentEvent(pFVar16,uVar10,uVar11);
          }
        } while (0 < (this->WriteContext).DependentObjectsPendingSend.ArrayNum);
        pFVar16 = (FNetTraceCollector *)(ulonglong)local_res20;
        pFVar17 = local_68;
        uVar10 = local_res18;
        uVar11 = local_78;
      }
LAB_14431c946:
      if (uVar11 <= uVar10) goto LAB_14431cbec;
      uVar11 = pFVar17[uVar10].Index;
      pFVar6 = (this->WriteContext).ObjectsWrittenThisPacket.Storage.AllocatorInstance.Data;
      if (((this->WriteContext).ObjectsWrittenThisPacket.BitCount <= uVar11) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L""), uVar10 = local_res18, bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return uVar10;
      }
      if (((*(uint *)(pFVar6 + (ulonglong)(uVar11 >> 5) * 4) >> (uVar11 & 0x1f) & 1) == 0) &&
         (bVar8 = CanSendObject(this,uVar11), uVar10 = local_res18, bVar8)) {
        WriteObjectBatch(this,(FNetSerializationContext *)&local_58._s_0,(uint)param_1,uVar11);
        if (local_58.Value._0_4_ == 1) {
          local_res20 = (int)pFVar16 + local_58.Value._4_4_;
          pFVar16 = (FNetTraceCollector *)(ulonglong)local_res20;
        }
        uVar11 = local_78;
        uVar15 = local_res20;
        if (local_58.Value._0_4_ == -1) break;
      }
      uVar10 = uVar10 + 1;
      pFVar17 = local_68;
      uVar11 = local_78;
      local_res18 = uVar10;
    } while( true );
  }
  goto LAB_14431ca22;
LAB_14431cbec:
  uVar15 = local_res20;
  if (!bVar9) goto LAB_14431ca22;
  goto LAB_14431c648;
}

// WriteObjectsPendingDestroy @ 14431cc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014431d29a) */
/* WARNING: Removing unreachable block (ram,0x00014431d2e8) */
/* WARNING: Removing unreachable block (ram,0x00014431d327) */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
UE::Net::Private::FReplicationWriter::WriteObjectsPendingDestroy
          (FReplicationWriter *this,FNetSerializationContext *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  FNetSerializationContext *pFVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FReplicationInfo *pFVar10;
  FNetRefHandle_u_0 *pFVar11;
  ulonglong uVar12;
  byte bVar13;
  FScriptContainerElement *pFVar14;
  ForElementType<FNetTracePacketContentEvent> FVar15;
  ulong64 uVar16;
  uint *puVar17;
  uint *puVar18;
  longlong lVar19;
  FReplicationInfo *pFVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint *puVar25;
  FScriptContainerElement *pFVar26;
  FNetTraceCollector *pFVar27;
  FNetBitStreamWriter *this_00;
  undefined1 auStackY_198 [32];
  uint uStack_158;
  char cStack_154;
  char cStack_153;
  uint uStack_150;
  uint uStack_14c;
  uint auStack_148 [2];
  FNetBitStreamWriter *pFStack_140;
  ForAnyElementType FStack_138;
  undefined8 uStack_130;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint *puStack_118;
  uint *puStack_110;
  FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&> FStack_108;
  int iStack_f0;
  FReplicationWriter *pFStack_e8;
  uint *puStack_e0;
  FNetSerializationContext *pFStack_d8;
  FNetTraceCollector *pFStack_d0;
  TArrayView<unsigned_int_const_,int> TStack_c8;
  TArrayView<unsigned_int_const_,int> TStack_b8;
  FReplicationWriter *pFStack_a8;
  uint *puStack_a0;
  FReplicationInfo *pFStack_98;
  FString FStack_90;
  FRecordInfo FStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this_00 = param_1->BitStreamWriter;
  uVar9 = 0;
  pFVar27 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar27 = param_1->TraceCollector;
  }
  puVar25 = &this_00->BufferBitPosition;
  puVar18 = &this_00->OverflowBitCount;
  uStack_124 = 0xffffffff;
  pFStack_140 = this_00;
  puStack_118 = puVar18;
  puStack_110 = puVar25;
  pFStack_d8 = param_1;
  pFStack_d0 = pFVar27;
  if (pFVar27 != (FNetTraceCollector *)0x0) {
    uVar6 = *puVar25;
    if (*puVar18 != 0) {
      uVar6 = 0;
    }
    uStack_124 = FNetTrace::BeginPacketContentEvent(pFVar27,NameId,uVar6);
    uVar12 = (ulonglong)uStack_124;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      RootObjectsPendingDestroy = CreatePersistentNetDebugName(L"RootObjectsPendingDestroy",0x19);
      _Init_thread_footer(&::_TSS0);
    }
    uVar6 = FNetTrace::TraceName(RootObjectsPendingDestroy);
    FVar15 = (pFVar27->Events).AllocatorInstance.SecondaryData;
    if (FVar15 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar15 = (ForElementType<FNetTracePacketContentEvent>)&pFVar27->Events;
    }
    *(uint *)((longlong)FVar15 + uVar12 * 0x10) = uVar6;
  }
  uStack_120 = *puVar25 - this_00->BufferBitStartOffset;
  uStack_150 = 0;
  FNetBitStreamWriter::WriteBits(this_00,0,0x10);
  if ((*puVar18 == 0) &&
     ((this->WriteContext).bIsInReplicationRecordStarvation == 0 &&
      (this->WriteContext).bIsOOBPacket == 0)) {
    uStack_14c = 0xffff;
    if (0 < GReplicationWriterMaxDestroyObjectsPerFrame) {
      uVar6 = (this->WriteContext).WrittenDestroyObjectCount;
      if ((uint)GReplicationWriterMaxDestroyObjectsPerFrame < uVar6) goto LAB_14431d6f7;
      uStack_14c = GReplicationWriterMaxDestroyObjectsPerFrame - uVar6;
    }
    cStack_154 = '\x01';
    uStack_158 = 0;
    uVar6 = uStack_14c;
LAB_14431cdc0:
    uVar7 = (this->ObjectsPendingDestroy).Storage.ArrayNum;
    uStack_158 = uStack_158 + 1;
    uVar23 = uStack_158 & 0xffffffe0;
    uVar21 = -1 << ((byte)uStack_158 & 0x1f);
    uVar12 = (ulonglong)(uStack_158 >> 5);
    if (uStack_158 >> 5 < uVar7) {
      pFVar14 = (this->ObjectsPendingDestroy).Storage.AllocatorInstance.Data + uVar12 * 4;
      while( true ) {
        uVar22 = uVar21 & *(uint *)pFVar14;
        uVar21 = 0xffffffff;
        if (uVar22 != 0) break;
        uVar22 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar22;
        pFVar14 = pFVar14 + 4;
        uVar23 = uVar23 + 0x20;
        if (uVar7 <= uVar22) goto LAB_14431ce0f;
      }
      iStack_f0 = 0;
      if (uVar22 != 0) {
        for (; (uVar22 >> iStack_f0 & 1) == 0; iStack_f0 = iStack_f0 + 1) {
        }
      }
      iVar8 = 0x20;
      if (uVar22 != 0) {
        iVar8 = iStack_f0;
      }
      uStack_158 = 0xffffffff;
      if (iVar8 + uVar23 < (this->ObjectsPendingDestroy).BitCount) {
        uStack_158 = iVar8 + uVar23;
      }
      if ((uStack_158 == 0xffffffff) || (uVar6 <= uVar9)) goto LAB_14431d629;
      pFVar10 = GetReplicationInfo(this,uStack_158);
      pFVar11 = (FNetRefHandle_u_0 *)
                FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                          (this->NetRefHandleManager,uStack_158);
      if (((*(int *)(pFVar11 + 5) == 0) || ((*(byte *)((longlong)pFVar11 + 0x32) & 4) == 0)) &&
         ((uVar12 = (pFVar10->field1_0x8).Value, (uVar12 >> 0x1b & 1) != 0 &&
          (bVar13 = (byte)(uVar12 >> 0x10) & 0x1f, (bVar13 - 7 & 0xfb) != 0)))) {
        if (bVar13 == 6) {
          uVar7 = GetFlushStatus(this,uStack_158,pFVar10,(uint)(uVar12 >> 0x23) & 7);
          if (uVar7 != 0) goto LAB_14431cdc0;
          if ((*(uint *)&pFVar10->field1_0x8 >> 0x1c & 1) == 0) {
            SetPendingDestroyOrSubObjectPendingDestroyState(this,uStack_158,pFVar10);
          }
          else {
            pFStack_e8 = this;
            bVar4 = `UE::Net::Private::FReplicationWriter::WriteRootObjectsPendingDestroy'::__l31::
                    <lambda_3>::operator()(&pFStack_e8);
            if (bVar4) {
              SetState(this,uStack_158,PendingTearOff);
              uVar9 = uStack_158;
              pFVar14 = (this->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data;
              if (((this->ObjectsWithDirtyChanges).BitCount <= uStack_158) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index < BitCount",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                     ,0x2a2,L""), bVar4)) {
                pcVar2 = (code *)swi(3);
                uVar9 = (*pcVar2)();
                return uVar9;
              }
              uVar12 = (ulonglong)(uVar9 >> 5);
              *(uint *)(pFVar14 + uVar12 * 4) =
                   *(uint *)(pFVar14 + uVar12 * 4) | 1 << (uVar9 & 0x1f);
              (pFVar10->field1_0x8).Value = (pFVar10->field1_0x8).Value | 0x200000;
            }
          }
        }
        FNetRefHandleManager::GetSubObjects(this->NetRefHandleManager,&TStack_c8,uStack_158);
        puVar18 = TStack_c8.DataPtr + TStack_c8.ArrayNum;
        for (puVar17 = TStack_c8.DataPtr; puVar17 != puVar18; puVar17 = puVar17 + 1) {
          auStack_148[0] = *puVar17;
          lVar19 = (longlong)(int)auStack_148[0];
          uVar9 = 0;
          if ((int)auStack_148[0] < (this->ReplicatedObjects).ArrayNum) {
            uVar9 = ~auStack_148[0] >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar9 = (*pcVar2)();
            return uVar9;
          }
          pFVar20 = (FReplicationInfo *)
                    ((this->ReplicatedObjects).AllocatorInstance.Data + lVar19 * 0x10);
          uVar12 = (pFVar20->field1_0x8).Value;
          bVar13 = (byte)(uVar12 >> 0x10);
          if ((uVar12 & 0x1f0000) != 0) {
            if ((bVar13 & 0x1f) == 6) {
              uVar9 = GetFlushStatus(this,auStack_148[0],pFVar20,(uint)(uVar12 >> 0x23) & 7);
              if (uVar9 == 0) {
                if ((*(uint *)&pFVar20->field1_0x8 >> 0x1c & 1) != 0) {
                  puStack_e0 = auStack_148;
                  ``UE::Net::Private::FReplicationWriter::WriteRootObjectsPendingDestroy'::__l2::
                  <lambda_2>::operator()'::__l15::<lambda_1>::operator()(&puStack_e0);
                }
                SetPendingDestroyOrSubObjectPendingDestroyState(this,auStack_148[0],pFVar20);
              }
              goto LAB_14431d0a7;
            }
            if ((((bVar13 & 0x1f) - 8 & 0xfd) != 0) || ((uVar12 >> 0x1b & 1) == 0))
            goto LAB_14431d0a7;
          }
        }
        if (((byte)((uint)*(undefined4 *)&pFVar10->field1_0x8 >> 0x10) & 0x1f) == 10) {
          bVar4 = FHugeObjectSendQueue::IsObjectInQueue(&this->HugeObjectSendQueue,uStack_158,true);
          pFVar3 = pFStack_d8;
          this_00 = pFStack_140;
          if (bVar4) {
            if (5 < (byte)LogIris._0_1_) {
              FNetRefHandleManager::PrintObjectFromIndex
                        (this->NetRefHandleManager,&FStack_90,uStack_158);
              Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
              if (FStack_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_90.Data.AllocatorInstance.Data);
              }
            }
LAB_14431d0a7:
            cStack_154 = '\0';
            this_00 = pFStack_140;
            uVar9 = uStack_150;
            uVar6 = uStack_14c;
          }
          else {
            FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&>::
            FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&>
                      (&FStack_108,pFVar11->Value & 0x3fffffffffffff,pFStack_140,
                       pFStack_d8->TraceCollector,1);
            uVar6 = *puVar25 - this_00->BufferBitStartOffset;
            uStack_128 = uVar6;
            WriteNetRefHandleId(this,pFVar3,(FNetRefHandle)*(FNetRefHandle_u_0 *)&pFVar11->_s_0);
            uVar9 = uStack_158;
            if ((pFVar11->Value == 0) || ((pFVar11->Value & 1) != 0)) {
              pFVar14 = (this->NetRefHandleManager->DestroyedStartupObjectInternalIndices).Storage.
                        AllocatorInstance.Data;
              if (((this->NetRefHandleManager->DestroyedStartupObjectInternalIndices).BitCount <=
                   uStack_158) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index < BitCount",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                     ,0x2c1,L""), bVar4)) {
                pcVar2 = (code *)swi(3);
                uVar9 = (*pcVar2)();
                return uVar9;
              }
              if ((*(uint *)(pFVar14 + (ulonglong)(uVar9 >> 5) * 4) >> (uVar9 & 0x1f) & 1) != 0)
              goto LAB_14431d1ef;
              cStack_153 = '\0';
            }
            else {
LAB_14431d1ef:
              cStack_153 = '\x01';
            }
            FNetBitStreamWriter::WriteBits(this_00,(uint)(cStack_153 != '\0'),1);
            if (*puStack_118 != 0) {
              FNetBitStreamWriter::Seek(this_00,uVar6);
              uVar9 = uStack_150;
              if (FStack_108.EventIndex != 0xffffffff) {
                uVar9 = (FStack_108.Stream)->BufferBitPosition;
                if ((FStack_108.Stream)->OverflowBitCount != 0) {
                  uVar9 = 0;
                }
                FNetTrace::EndPacketContentEvent(FStack_108.Collector,FStack_108.EventIndex,uVar9);
                uVar9 = uStack_150;
              }
              goto LAB_14431d629;
            }
            SetState(this,uStack_158,WaitOnDestroyConfirmation);
            uVar12 = (pFVar10->field1_0x8).Value;
            uVar24 = uVar12 & 0xffffffffff7fffff;
            (pFVar10->field1_0x8).Value = uVar24;
            uStack_5c = 0;
            uStack_58 = 0;
            uStack_54 = 0;
            uStack_70 = 0;
            uStack_68 = 0;
            FStack_138.Data = (FScriptContainerElement *)0x0;
            uStack_130 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_60 = uStack_158;
            FStack_80.ChangeMaskOrPtr.ChangeMaskOrPointer = 0;
            uVar9 = (((uint)(uVar24 >> 0x10) & 0x1f) << 0x14 ^
                    ((FStack_80._8_4_ ^ uStack_158) & 0xfffff ^ FStack_80._8_4_) & 0xfe0fffff) &
                    0xf1ffffff;
            FStack_80._8_4_ =
                 (((int)(uVar12 >> 0x1d) << 0x1c ^ uVar9) & 0x10000000 ^ uVar9) & 0x1fffffff |
                 0x40000000;
            FNetRefHandleManager::GetSubObjects(this->NetRefHandleManager,&TStack_b8,uStack_158);
            puVar25 = TStack_b8.DataPtr + TStack_b8.ArrayNum;
            for (puVar18 = TStack_b8.DataPtr; puVar18 != puVar25; puVar18 = puVar18 + 1) {
              uVar9 = *puVar18;
              pFVar10 = GetReplicationInfo(this,uVar9);
              if ((*(uint *)&pFVar10->field1_0x8 >> 0x10 & 0x1f) != 0) {
                SetState(this,uVar9,WaitOnDestroyConfirmation);
                (pFVar10->field1_0x8).Value = (pFVar10->field1_0x8).Value & 0xffffffffdf7fffff;
                iVar8 = (int)uStack_130;
                if ((int)uStack_130 == uStack_130._4_4_) {
                  iVar8 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&FStack_138,(int *)((longlong)&uStack_130 + 4));
                }
                uStack_130 = CONCAT44(uStack_130._4_4_,iVar8 + 1);
                pFVar14 = FStack_138.Data + (longlong)iVar8 * 4;
                uVar9 = (*(uint *)(FStack_138.Data + (longlong)iVar8 * 4) ^ uVar9) & 0xfffff ^
                        *(uint *)pFVar14;
                *(uint *)pFVar14 = uVar9;
                *(uint *)pFVar14 =
                     ((*(uint *)&pFVar10->field1_0x8 >> 0x10 & 0xff) << 0x14 ^ uVar9) & 0x1f00000 ^
                     uVar9;
              }
            }
            lVar19 = (longlong)(int)uStack_158;
            FStack_80._8_4_ =
                 -(uint)((int)uStack_130 != 0) & 0x80000000 | FStack_80._8_4_ & 0x7fffffff;
            uVar9 = 0;
            if ((int)uStack_158 < (this->ReplicatedObjectsRecordInfoLists).ArrayNum) {
              uVar9 = ~uStack_158 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar9 = (*pcVar2)();
              return uVar9;
            }
            pFVar14 = (this->ReplicatedObjectsRecordInfoLists).AllocatorInstance.Data + lVar19 * 4;
            uVar5 = FReplicationRecord::PushInfo(&this->ReplicationRecord,&FStack_80);
            if ((BADTYPE)FStack_80.HasSubObjectRecord) {
              uVar16 = (ulonglong)
                       ((this->ReplicationRecord).SubObjectRecords.Head -
                       (this->ReplicationRecord).SubObjectRecords.Tail) + 1;
              if ((ulonglong)(longlong)(this->ReplicationRecord).SubObjectRecords.Storage.ArrayNum <
                  uVar16) {
                TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
                ::SetCapacity(&(this->ReplicationRecord).SubObjectRecords,uVar16);
              }
              _Src.Data = FStack_138.Data;
              uVar9 = (this->ReplicationRecord).SubObjectRecords.Head;
              pFVar26 = (this->ReplicationRecord).SubObjectRecords.Storage.AllocatorInstance.Data +
                        (ulonglong)((this->ReplicationRecord).SubObjectRecords.IndexMask & uVar9) *
                        0x10;
              (this->ReplicationRecord).SubObjectRecords.Head = uVar9 + 1;
              *(undefined8 *)&pFVar26->field_0x0 = 0;
              lVar19 = (longlong)(int)uStack_130;
              *(int *)&pFVar26[8].field_0x0 = (int)uStack_130;
              if ((int)uStack_130 == 0) {
                *(int *)(pFVar26 + 0xc) = 0;
                uVar6 = uStack_128;
              }
              else {
                Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,(int)uStack_130,0,(ForAnyElementType *)pFVar26,(int)uStack_130,
                           (int *)(pFVar26 + 0xc));
                memcpy(*(void **)&pFVar26->field_0x0,_Src.Data,lVar19 << 2);
                uVar6 = uStack_128;
              }
            }
            if ((*(ushort *)pFVar14 == 0xffff) ||
               (pFVar26 = (this->ReplicationRecord).RecordInfos.Storage.AllocatorInstance.Data +
                          ((ulonglong)
                           ((((uint)*(ushort *)pFVar14 - (uint)(this->ReplicationRecord).FrontIndex)
                            + 0xffff) % 0xffff) +
                           (ulonglong)(this->ReplicationRecord).RecordInfos.Tail &
                          (ulonglong)(this->ReplicationRecord).RecordInfos.IndexMask) * 0x10,
               pFVar26 == (FScriptContainerElement *)0x0)) {
              *(ushort *)(pFVar14 + 2) = uVar5;
            }
            else {
              *(ushort *)(pFVar26 + 0xc) = uVar5;
            }
            uVar9 = uStack_150 + 1;
            *(ushort *)pFVar14 = uVar5;
            uStack_150 = uVar9;
            if (FStack_138.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_138.Data);
            }
            this_00 = pFStack_140;
            if (*puStack_118 != 0) {
              FNetBitStreamWriter::Seek(pFStack_140,uVar6);
            }
            puVar25 = puStack_110;
            uVar6 = uStack_14c;
            if (FStack_108.EventIndex != 0xffffffff) {
              uVar6 = (FStack_108.Stream)->BufferBitPosition;
              if ((FStack_108.Stream)->OverflowBitCount != 0) {
                uVar6 = 0;
              }
              FNetTrace::EndPacketContentEvent(FStack_108.Collector,FStack_108.EventIndex,uVar6);
              puVar25 = puStack_110;
              uVar6 = uStack_14c;
            }
          }
        }
        else {
          puStack_a0 = &uStack_158;
          pFStack_a8 = this;
          pFStack_98 = pFVar10;
          `UE::Net::Private::FReplicationWriter::WriteRootObjectsPendingDestroy'::__l42::<lambda_4>
          ::operator()(&pFStack_a8);
          this_00 = pFStack_140;
          uVar9 = uStack_150;
          uVar6 = uStack_14c;
        }
      }
      goto LAB_14431cdc0;
    }
LAB_14431ce0f:
    uStack_158 = 0xffffffff;
LAB_14431d629:
    uVar7 = 0;
    uVar6 = this_00->BufferBitPosition - this_00->BufferBitStartOffset;
    if ((this_00->OverflowBitCount != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Writer.IsOverflown()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetBitStreamUtil.h"
                           ,0x18,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return uVar9;
    }
    FNetBitStreamWriter::Seek(this_00,uStack_120);
    FNetBitStreamWriter::WriteBits(this_00,uVar9,0x10);
    if ((uVar6 < this_00->BufferBitPosition - this_00->BufferBitStartOffset) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Writer.GetPosBits() <= OriginalPos",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetBitStreamUtil.h"
                           ,0x21,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return uVar9;
    }
    FNetBitStreamWriter::Seek(this_00,uVar6);
    if (((cStack_154 == '\0') || (this_00->OverflowBitCount != 0)) || (0xfffe < uVar9)) {
      uVar7 = 2;
    }
    puVar25 = &(this->WriteContext).WrittenDestroyObjectCount;
    *puVar25 = *puVar25 + uVar9;
    (this->WriteContext).bHasDestroyedObjectsToSend = uVar7 >> 1;
    pFVar27 = pFStack_d0;
  }
LAB_14431d6f7:
  if (uStack_124 != 0xffffffff) {
    uVar6 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar6 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar27,uStack_124,uVar6);
  }
  return uVar9;
}

// WriteRootObjectsPendingDestroy @ 14431cc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014431d29a) */
/* WARNING: Removing unreachable block (ram,0x00014431d2e8) */
/* WARNING: Removing unreachable block (ram,0x00014431d327) */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
UE::Net::Private::FReplicationWriter::WriteRootObjectsPendingDestroy
          (FReplicationWriter *this,FNetSerializationContext *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  FNetSerializationContext *pFVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FReplicationInfo *pFVar10;
  FNetRefHandle_u_0 *pFVar11;
  ulonglong uVar12;
  byte bVar13;
  FScriptContainerElement *pFVar14;
  ForElementType<FNetTracePacketContentEvent> FVar15;
  ulong64 uVar16;
  uint *puVar17;
  uint *puVar18;
  longlong lVar19;
  FReplicationInfo *pFVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint *puVar25;
  FScriptContainerElement *pFVar26;
  FNetTraceCollector *pFVar27;
  FNetBitStreamWriter *this_00;
  undefined1 auStackY_198 [32];
  uint local_158;
  char local_154;
  char local_153;
  uint local_150;
  uint local_14c;
  uint local_148 [2];
  FNetBitStreamWriter *local_140;
  ForAnyElementType local_138;
  undefined8 local_130;
  uint local_128;
  uint local_124;
  uint local_120;
  uint *local_118;
  uint *local_110;
  FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&> local_108;
  int local_f0;
  FReplicationWriter *local_e8;
  uint *local_e0;
  FNetSerializationContext *local_d8;
  FNetTraceCollector *local_d0;
  TArrayView<unsigned_int_const_,int> local_c8;
  TArrayView<unsigned_int_const_,int> local_b8;
  FReplicationWriter *local_a8;
  uint *local_a0;
  FReplicationInfo *local_98;
  FString local_90;
  FRecordInfo local_80;
  undefined8 local_70;
  undefined8 local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this_00 = param_1->BitStreamWriter;
  uVar9 = 0;
  pFVar27 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar27 = param_1->TraceCollector;
  }
  puVar25 = &this_00->BufferBitPosition;
  puVar18 = &this_00->OverflowBitCount;
  local_124 = 0xffffffff;
  local_140 = this_00;
  local_118 = puVar18;
  local_110 = puVar25;
  local_d8 = param_1;
  local_d0 = pFVar27;
  if (pFVar27 != (FNetTraceCollector *)0x0) {
    uVar6 = *puVar25;
    if (*puVar18 != 0) {
      uVar6 = 0;
    }
    local_124 = FNetTrace::BeginPacketContentEvent(pFVar27,NameId,uVar6);
    uVar12 = (ulonglong)local_124;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      RootObjectsPendingDestroy = CreatePersistentNetDebugName(L"RootObjectsPendingDestroy",0x19);
      _Init_thread_footer(&::_TSS0);
    }
    uVar6 = FNetTrace::TraceName(RootObjectsPendingDestroy);
    FVar15 = (pFVar27->Events).AllocatorInstance.SecondaryData;
    if (FVar15 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar15 = (ForElementType<FNetTracePacketContentEvent>)&pFVar27->Events;
    }
    *(uint *)((longlong)FVar15 + uVar12 * 0x10) = uVar6;
  }
  local_120 = *puVar25 - this_00->BufferBitStartOffset;
  local_150 = 0;
  FNetBitStreamWriter::WriteBits(this_00,0,0x10);
  if ((*puVar18 == 0) &&
     ((this->WriteContext).bIsInReplicationRecordStarvation == 0 &&
      (this->WriteContext).bIsOOBPacket == 0)) {
    local_14c = 0xffff;
    if (0 < GReplicationWriterMaxDestroyObjectsPerFrame) {
      uVar6 = (this->WriteContext).WrittenDestroyObjectCount;
      if ((uint)GReplicationWriterMaxDestroyObjectsPerFrame < uVar6) goto LAB_14431d6f7;
      local_14c = GReplicationWriterMaxDestroyObjectsPerFrame - uVar6;
    }
    local_154 = '\x01';
    local_158 = 0;
    uVar6 = local_14c;
LAB_14431cdc0:
    uVar7 = (this->ObjectsPendingDestroy).Storage.ArrayNum;
    local_158 = local_158 + 1;
    uVar23 = local_158 & 0xffffffe0;
    uVar21 = -1 << ((byte)local_158 & 0x1f);
    uVar12 = (ulonglong)(local_158 >> 5);
    if (local_158 >> 5 < uVar7) {
      pFVar14 = (this->ObjectsPendingDestroy).Storage.AllocatorInstance.Data + uVar12 * 4;
      while( true ) {
        uVar22 = uVar21 & *(uint *)pFVar14;
        uVar21 = 0xffffffff;
        if (uVar22 != 0) break;
        uVar22 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar22;
        pFVar14 = pFVar14 + 4;
        uVar23 = uVar23 + 0x20;
        if (uVar7 <= uVar22) goto LAB_14431ce0f;
      }
      local_f0 = 0;
      if (uVar22 != 0) {
        for (; (uVar22 >> local_f0 & 1) == 0; local_f0 = local_f0 + 1) {
        }
      }
      iVar8 = 0x20;
      if (uVar22 != 0) {
        iVar8 = local_f0;
      }
      local_158 = 0xffffffff;
      if (iVar8 + uVar23 < (this->ObjectsPendingDestroy).BitCount) {
        local_158 = iVar8 + uVar23;
      }
      if ((local_158 == 0xffffffff) || (uVar6 <= uVar9)) goto LAB_14431d629;
      pFVar10 = GetReplicationInfo(this,local_158);
      pFVar11 = (FNetRefHandle_u_0 *)
                FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                          (this->NetRefHandleManager,local_158);
      if (((*(int *)(pFVar11 + 5) == 0) || ((*(byte *)((longlong)pFVar11 + 0x32) & 4) == 0)) &&
         ((uVar12 = (pFVar10->field1_0x8).Value, (uVar12 >> 0x1b & 1) != 0 &&
          (bVar13 = (byte)(uVar12 >> 0x10) & 0x1f, (bVar13 - 7 & 0xfb) != 0)))) {
        if (bVar13 == 6) {
          uVar7 = GetFlushStatus(this,local_158,pFVar10,(uint)(uVar12 >> 0x23) & 7);
          if (uVar7 != 0) goto LAB_14431cdc0;
          if ((*(uint *)&pFVar10->field1_0x8 >> 0x1c & 1) == 0) {
            SetPendingDestroyOrSubObjectPendingDestroyState(this,local_158,pFVar10);
          }
          else {
            local_e8 = this;
            bVar4 = `UE::Net::Private::FReplicationWriter::WriteRootObjectsPendingDestroy'::__l31::
                    <lambda_3>::operator()(&local_e8);
            if (bVar4) {
              SetState(this,local_158,PendingTearOff);
              uVar9 = local_158;
              pFVar14 = (this->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data;
              if (((this->ObjectsWithDirtyChanges).BitCount <= local_158) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index < BitCount",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                     ,0x2a2,L""), bVar4)) {
                pcVar2 = (code *)swi(3);
                uVar9 = (*pcVar2)();
                return uVar9;
              }
              uVar12 = (ulonglong)(uVar9 >> 5);
              *(uint *)(pFVar14 + uVar12 * 4) =
                   *(uint *)(pFVar14 + uVar12 * 4) | 1 << (uVar9 & 0x1f);
              (pFVar10->field1_0x8).Value = (pFVar10->field1_0x8).Value | 0x200000;
            }
          }
        }
        FNetRefHandleManager::GetSubObjects(this->NetRefHandleManager,&local_c8,local_158);
        puVar18 = local_c8.DataPtr + local_c8.ArrayNum;
        for (puVar17 = local_c8.DataPtr; puVar17 != puVar18; puVar17 = puVar17 + 1) {
          local_148[0] = *puVar17;
          lVar19 = (longlong)(int)local_148[0];
          uVar9 = 0;
          if ((int)local_148[0] < (this->ReplicatedObjects).ArrayNum) {
            uVar9 = ~local_148[0] >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar9 = (*pcVar2)();
            return uVar9;
          }
          pFVar20 = (FReplicationInfo *)
                    ((this->ReplicatedObjects).AllocatorInstance.Data + lVar19 * 0x10);
          uVar12 = (pFVar20->field1_0x8).Value;
          bVar13 = (byte)(uVar12 >> 0x10);
          if ((uVar12 & 0x1f0000) != 0) {
            if ((bVar13 & 0x1f) == 6) {
              uVar9 = GetFlushStatus(this,local_148[0],pFVar20,(uint)(uVar12 >> 0x23) & 7);
              if (uVar9 == 0) {
                if ((*(uint *)&pFVar20->field1_0x8 >> 0x1c & 1) != 0) {
                  local_e0 = local_148;
                  ``UE::Net::Private::FReplicationWriter::WriteRootObjectsPendingDestroy'::__l2::
                  <lambda_2>::operator()'::__l15::<lambda_1>::operator()(&local_e0);
                }
                SetPendingDestroyOrSubObjectPendingDestroyState(this,local_148[0],pFVar20);
              }
              goto LAB_14431d0a7;
            }
            if ((((bVar13 & 0x1f) - 8 & 0xfd) != 0) || ((uVar12 >> 0x1b & 1) == 0))
            goto LAB_14431d0a7;
          }
        }
        if (((byte)((uint)*(undefined4 *)&pFVar10->field1_0x8 >> 0x10) & 0x1f) == 10) {
          bVar4 = FHugeObjectSendQueue::IsObjectInQueue(&this->HugeObjectSendQueue,local_158,true);
          pFVar3 = local_d8;
          this_00 = local_140;
          if (bVar4) {
            if (5 < (byte)LogIris._0_1_) {
              FNetRefHandleManager::PrintObjectFromIndex
                        (this->NetRefHandleManager,&local_90,local_158);
              Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
              if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_90.Data.AllocatorInstance.Data);
              }
            }
LAB_14431d0a7:
            local_154 = '\0';
            this_00 = local_140;
            uVar9 = local_150;
            uVar6 = local_14c;
          }
          else {
            FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&>::
            FNetTraceEventScope<UE::Net::FNetBitStreamWriter_&>
                      (&local_108,pFVar11->Value & 0x3fffffffffffff,local_140,
                       local_d8->TraceCollector,1);
            uVar6 = *puVar25 - this_00->BufferBitStartOffset;
            local_128 = uVar6;
            WriteNetRefHandleId(this,pFVar3,(FNetRefHandle)*(FNetRefHandle_u_0 *)&pFVar11->_s_0);
            uVar9 = local_158;
            if ((pFVar11->Value == 0) || ((pFVar11->Value & 1) != 0)) {
              pFVar14 = (this->NetRefHandleManager->DestroyedStartupObjectInternalIndices).Storage.
                        AllocatorInstance.Data;
              if (((this->NetRefHandleManager->DestroyedStartupObjectInternalIndices).BitCount <=
                   local_158) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index < BitCount",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                     ,0x2c1,L""), bVar4)) {
                pcVar2 = (code *)swi(3);
                uVar9 = (*pcVar2)();
                return uVar9;
              }
              if ((*(uint *)(pFVar14 + (ulonglong)(uVar9 >> 5) * 4) >> (uVar9 & 0x1f) & 1) != 0)
              goto LAB_14431d1ef;
              local_153 = '\0';
            }
            else {
LAB_14431d1ef:
              local_153 = '\x01';
            }
            FNetBitStreamWriter::WriteBits(this_00,(uint)(local_153 != '\0'),1);
            if (*local_118 != 0) {
              FNetBitStreamWriter::Seek(this_00,uVar6);
              uVar9 = local_150;
              if (local_108.EventIndex != 0xffffffff) {
                uVar9 = (local_108.Stream)->BufferBitPosition;
                if ((local_108.Stream)->OverflowBitCount != 0) {
                  uVar9 = 0;
                }
                FNetTrace::EndPacketContentEvent(local_108.Collector,local_108.EventIndex,uVar9);
                uVar9 = local_150;
              }
              goto LAB_14431d629;
            }
            SetState(this,local_158,WaitOnDestroyConfirmation);
            uVar12 = (pFVar10->field1_0x8).Value;
            uVar24 = uVar12 & 0xffffffffff7fffff;
            (pFVar10->field1_0x8).Value = uVar24;
            local_5c = 0;
            uStack_58 = 0;
            uStack_54 = 0;
            local_70 = 0;
            local_68 = 0;
            local_138.Data = (FScriptContainerElement *)0x0;
            local_130 = 0;
            local_50 = 0;
            uStack_48 = 0;
            local_60 = local_158;
            local_80.ChangeMaskOrPtr.ChangeMaskOrPointer = 0;
            uVar9 = (((uint)(uVar24 >> 0x10) & 0x1f) << 0x14 ^
                    ((local_80._8_4_ ^ local_158) & 0xfffff ^ local_80._8_4_) & 0xfe0fffff) &
                    0xf1ffffff;
            local_80._8_4_ =
                 (((int)(uVar12 >> 0x1d) << 0x1c ^ uVar9) & 0x10000000 ^ uVar9) & 0x1fffffff |
                 0x40000000;
            FNetRefHandleManager::GetSubObjects(this->NetRefHandleManager,&local_b8,local_158);
            puVar25 = local_b8.DataPtr + local_b8.ArrayNum;
            for (puVar18 = local_b8.DataPtr; puVar18 != puVar25; puVar18 = puVar18 + 1) {
              uVar9 = *puVar18;
              pFVar10 = GetReplicationInfo(this,uVar9);
              if ((*(uint *)&pFVar10->field1_0x8 >> 0x10 & 0x1f) != 0) {
                SetState(this,uVar9,WaitOnDestroyConfirmation);
                (pFVar10->field1_0x8).Value = (pFVar10->field1_0x8).Value & 0xffffffffdf7fffff;
                iVar8 = (int)local_130;
                if ((int)local_130 == local_130._4_4_) {
                  iVar8 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_138,(int *)((longlong)&local_130 + 4));
                }
                local_130 = CONCAT44(local_130._4_4_,iVar8 + 1);
                pFVar14 = local_138.Data + (longlong)iVar8 * 4;
                uVar9 = (*(uint *)(local_138.Data + (longlong)iVar8 * 4) ^ uVar9) & 0xfffff ^
                        *(uint *)pFVar14;
                *(uint *)pFVar14 = uVar9;
                *(uint *)pFVar14 =
                     ((*(uint *)&pFVar10->field1_0x8 >> 0x10 & 0xff) << 0x14 ^ uVar9) & 0x1f00000 ^
                     uVar9;
              }
            }
            lVar19 = (longlong)(int)local_158;
            local_80._8_4_ = -(uint)((int)local_130 != 0) & 0x80000000 | local_80._8_4_ & 0x7fffffff
            ;
            uVar9 = 0;
            if ((int)local_158 < (this->ReplicatedObjectsRecordInfoLists).ArrayNum) {
              uVar9 = ~local_158 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar9 = (*pcVar2)();
              return uVar9;
            }
            pFVar14 = (this->ReplicatedObjectsRecordInfoLists).AllocatorInstance.Data + lVar19 * 4;
            uVar5 = FReplicationRecord::PushInfo(&this->ReplicationRecord,&local_80);
            if ((BADTYPE)local_80.HasSubObjectRecord) {
              uVar16 = (ulonglong)
                       ((this->ReplicationRecord).SubObjectRecords.Head -
                       (this->ReplicationRecord).SubObjectRecords.Tail) + 1;
              if ((ulonglong)(longlong)(this->ReplicationRecord).SubObjectRecords.Storage.ArrayNum <
                  uVar16) {
                TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FSubObjectRecord,TSizedDefaultAllocator<32>_>
                ::SetCapacity(&(this->ReplicationRecord).SubObjectRecords,uVar16);
              }
              _Src.Data = local_138.Data;
              uVar9 = (this->ReplicationRecord).SubObjectRecords.Head;
              pFVar26 = (this->ReplicationRecord).SubObjectRecords.Storage.AllocatorInstance.Data +
                        (ulonglong)((this->ReplicationRecord).SubObjectRecords.IndexMask & uVar9) *
                        0x10;
              (this->ReplicationRecord).SubObjectRecords.Head = uVar9 + 1;
              *(undefined8 *)&pFVar26->field_0x0 = 0;
              lVar19 = (longlong)(int)local_130;
              *(int *)&pFVar26[8].field_0x0 = (int)local_130;
              if ((int)local_130 == 0) {
                *(int *)(pFVar26 + 0xc) = 0;
                uVar6 = local_128;
              }
              else {
                Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,(int)local_130,0,(ForAnyElementType *)pFVar26,(int)local_130,
                           (int *)(pFVar26 + 0xc));
                memcpy(*(void **)&pFVar26->field_0x0,_Src.Data,lVar19 << 2);
                uVar6 = local_128;
              }
            }
            if ((*(ushort *)pFVar14 == 0xffff) ||
               (pFVar26 = (this->ReplicationRecord).RecordInfos.Storage.AllocatorInstance.Data +
                          ((ulonglong)
                           ((((uint)*(ushort *)pFVar14 - (uint)(this->ReplicationRecord).FrontIndex)
                            + 0xffff) % 0xffff) +
                           (ulonglong)(this->ReplicationRecord).RecordInfos.Tail &
                          (ulonglong)(this->ReplicationRecord).RecordInfos.IndexMask) * 0x10,
               pFVar26 == (FScriptContainerElement *)0x0)) {
              *(ushort *)(pFVar14 + 2) = uVar5;
            }
            else {
              *(ushort *)(pFVar26 + 0xc) = uVar5;
            }
            uVar9 = local_150 + 1;
            *(ushort *)pFVar14 = uVar5;
            local_150 = uVar9;
            if (local_138.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.Data);
            }
            this_00 = local_140;
            if (*local_118 != 0) {
              FNetBitStreamWriter::Seek(local_140,uVar6);
            }
            puVar25 = local_110;
            uVar6 = local_14c;
            if (local_108.EventIndex != 0xffffffff) {
              uVar6 = (local_108.Stream)->BufferBitPosition;
              if ((local_108.Stream)->OverflowBitCount != 0) {
                uVar6 = 0;
              }
              FNetTrace::EndPacketContentEvent(local_108.Collector,local_108.EventIndex,uVar6);
              puVar25 = local_110;
              uVar6 = local_14c;
            }
          }
        }
        else {
          local_a0 = &local_158;
          local_a8 = this;
          local_98 = pFVar10;
          `UE::Net::Private::FReplicationWriter::WriteRootObjectsPendingDestroy'::__l42::<lambda_4>
          ::operator()(&local_a8);
          this_00 = local_140;
          uVar9 = local_150;
          uVar6 = local_14c;
        }
      }
      goto LAB_14431cdc0;
    }
LAB_14431ce0f:
    local_158 = 0xffffffff;
LAB_14431d629:
    uVar7 = 0;
    uVar6 = this_00->BufferBitPosition - this_00->BufferBitStartOffset;
    if ((this_00->OverflowBitCount != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Writer.IsOverflown()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetBitStreamUtil.h"
                           ,0x18,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return uVar9;
    }
    FNetBitStreamWriter::Seek(this_00,local_120);
    FNetBitStreamWriter::WriteBits(this_00,uVar9,0x10);
    if ((uVar6 < this_00->BufferBitPosition - this_00->BufferBitStartOffset) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Writer.GetPosBits() <= OriginalPos",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetBitStreamUtil.h"
                           ,0x21,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return uVar9;
    }
    FNetBitStreamWriter::Seek(this_00,uVar6);
    if (((local_154 == '\0') || (this_00->OverflowBitCount != 0)) || (0xfffe < uVar9)) {
      uVar7 = 2;
    }
    puVar25 = &(this->WriteContext).WrittenDestroyObjectCount;
    *puVar25 = *puVar25 + uVar9;
    (this->WriteContext).bHasDestroyedObjectsToSend = uVar7 >> 1;
    pFVar27 = local_d0;
  }
LAB_14431d6f7:
  if (local_124 != 0xffffffff) {
    uVar6 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar6 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar27,local_124,uVar6);
  }
  return uVar9;
}

// WriteSentinel @ 14431d790

void __thiscall
UE::Net::Private::FReplicationWriter::WriteSentinel
          (FReplicationWriter *this,FNetBitStreamWriter *param_1,wchar_t *param_2)

{
  if ((this->StreamDebugFeatures & Sentinels) != None) {
    WriteSentinelBits(param_1,8);
    return;
  }
  return;
}

// WriteStreamDebugFeatures @ 14431d7b0

void __thiscall
UE::Net::Private::FReplicationWriter::WriteStreamDebugFeatures
          (FReplicationWriter *this,FNetSerializationContext *param_1)

{
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,this->StreamDebugFeatures,2);
  return;
}

// operator() @ 1504b8db0

bool __thiscall
`UE::Net::Private::FReplicationWriter::WriteObjectAndSubObjects'::__l122::<lambda_10>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963516452>);
  if (bVar2) {
    UE::Net::FNetRefHandle::ToString(*(FNetRefHandle **)((longlong)this + 8),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963516452>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b8e4c;
    }
  }
  bVar2 = false;
LAB_1504b8e4c:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b8e90

bool __thiscall
`UE::Net::Private::FReplicationWriter::SetState'::__l14::<lambda_10>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514260>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)((longlong)this + 0x10) + 0x1a0),&local_18,
               **(uint **)((longlong)this + 0x18));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963514260>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b8f78;
    }
  }
  bVar2 = false;
LAB_1504b8f78:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b8fb0

bool __thiscall
`UE::Net::Private::FReplicationWriter::WriteObjectAndSubObjects'::__l269::<lambda_11>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963516696>);
  if (bVar2) {
    UE::Net::FNetRefHandle::ToString(*(FNetRefHandle **)((longlong)this + 0x10),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963516696>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b9042;
    }
  }
  bVar2 = false;
LAB_1504b9042:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b9080

bool __thiscall
`UE::Net::Private::FReplicationWriter::SetState'::__l15::<lambda_11>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514265>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)((longlong)this + 0x10) + 0x1a0),&local_18,
               **(uint **)((longlong)this + 0x18));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963514265>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b9168;
    }
  }
  bVar2 = false;
LAB_1504b9168:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b91a0

bool __thiscall
`UE::Net::Private::FReplicationWriter::SetState'::__l16::<lambda_12>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514270>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)((longlong)this + 0x10) + 0x1a0),&local_18,
               **(uint **)((longlong)this + 0x18));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963514270>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b9288;
    }
  }
  bVar2 = false;
LAB_1504b9288:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b92c0

bool __thiscall
`UE::Net::Private::FReplicationWriter::SetState'::__l4::<lambda_13>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_48;
  FString local_38;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514275>);
  if (bVar4) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)((longlong)this + 0x10) + 0x1a0),&local_38,
               **(uint **)((longlong)this + 0x18));
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_48,(uint)**(byte **)this);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963514275>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504b93f7;
    }
  }
  bVar4 = false;
LAB_1504b93f7:
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504b9450

bool __thiscall
`UE::Net::Private::FReplicationWriter::HandleDroppedRecord<11>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963515451>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7868239365963515451>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b9810

bool __thiscall
`UE::Net::Private::FReplicationWriter::StartReplication'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514357>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7868239365963514357>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b9ab0

bool __thiscall
`UE::Net::Private::FReplicationWriter::WriteObjectAndSubObjects'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963516150>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7868239365963516150>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b9c70

bool __thiscall
`UE::Net::Private::FReplicationWriter::PrepareAndSendHugeObjectPayload'::__l5::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963516798>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)this + 0x1a0),&local_18,
               **(uint **)((longlong)this + 8));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963516798>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b9ce5;
    }
  }
  bVar2 = false;
LAB_1504b9ce5:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b9d20

bool __thiscall
`UE::Net::Private::FReplicationWriter::QueueNetObjectAttachments'::__l5::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514147>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963514147>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504ba090

bool __thiscall
`UE::Net::Private::FReplicationWriter::SetState'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514214>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)((longlong)this + 0x10) + 0x1a0),&local_18,
               **(uint **)((longlong)this + 0x18));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963514214>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ba178;
    }
  }
  bVar2 = false;
LAB_1504ba178:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504ba390

bool __thiscall
`UE::Net::Private::FReplicationWriter::MarkObjectDirty'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963518092>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963518092>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bb270

bool __thiscall
`UE::Net::Private::FReplicationWriter::SetState'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514219>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)((longlong)this + 0x10) + 0x1a0),&local_18,
               **(uint **)((longlong)this + 0x18));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963514219>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bb358;
    }
  }
  bVar2 = false;
LAB_1504bb358:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bb5c0

bool __thiscall
`UE::Net::Private::FReplicationWriter::HandleDroppedRecord<11>'::__l19::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963515479>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963515479>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bb780

bool __thiscall
`UE::Net::Private::FReplicationWriter::StartReplication'::__l39::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514439>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)((longlong)this + 8) + 0x1a0),&local_18,
               **(uint **)((longlong)this + 0x10));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963514439>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bb819;
    }
  }
  bVar2 = false;
LAB_1504bb819:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bb890

bool __thiscall
`UE::Net::Private::FReplicationWriter::SetState'::__l7::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514224>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)((longlong)this + 0x10) + 0x1a0),&local_18,
               **(uint **)((longlong)this + 0x18));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963514224>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bb978;
    }
  }
  bVar2 = false;
LAB_1504bb978:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bba50

bool __thiscall
`UE::Net::Private::FReplicationWriter::WriteObjectAndSubObjects'::__l24::<lambda_3>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963516230>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)this + 0x1a0),&local_18,
               **(uint **)((longlong)this + 8));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963516230>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bbadc;
    }
  }
  bVar2 = false;
LAB_1504bbadc:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bbb10

bool __thiscall
`UE::Net::Private::FReplicationWriter::HandleDroppedRecord<11>'::__l26::<lambda_3>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963515501>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7868239365963515501>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bbbf0

bool __thiscall
`UE::Net::Private::FReplicationWriter::WriteObjects'::__l11::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963517300>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963517300>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bbc40

bool __thiscall
`UE::Net::Private::FReplicationWriter::SetState'::__l8::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514229>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)((longlong)this + 0x10) + 0x1a0),&local_28,
               **(uint **)((longlong)this + 0x18));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963514229>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bbd48;
    }
  }
  bVar2 = false;
LAB_1504bbd48:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bbd80

bool __thiscall
`UE::Net::Private::FReplicationWriter::WriteRootObjectsPendingDestroy'::__l42::<lambda_4>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963515918>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)this + 0x1a0),&local_28,
               **(uint **)((longlong)this + 8));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963515918>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bbe6a;
    }
  }
  bVar2 = false;
LAB_1504bbe6a:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bbf20

bool __thiscall
`UE::Net::Private::FReplicationWriter::PrepareAndSendHugeObjectPayload'::__l148::<lambda_4>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963516961>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963516961>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bbf70

bool __thiscall
`UE::Net::Private::FReplicationWriter::SetState'::__l9::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514234>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)((longlong)this + 0x10) + 0x1a0),&local_18,
               **(uint **)((longlong)this + 0x18));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963514234>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bc058;
    }
  }
  bVar2 = false;
LAB_1504bc058:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bc090

bool __thiscall
`UE::Net::Private::FReplicationWriter::WriteObjectAndSubObjects'::__l30::<lambda_5>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963516270>);
  if (bVar2) {
    UE::Net::FNetRefHandle::ToString(*(FNetRefHandle **)((longlong)this + 8),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963516270>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bc12c;
    }
  }
  bVar2 = false;
LAB_1504bc12c:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bc170

bool __thiscall
`UE::Net::Private::FReplicationWriter::SetState'::__l10::<lambda_6>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514239>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)((longlong)this + 0x10) + 0x1a0),&local_18,
               **(uint **)((longlong)this + 0x18));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963514239>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bc258;
    }
  }
  bVar2 = false;
LAB_1504bc258:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bc290

bool __thiscall
`UE::Net::Private::FReplicationWriter::SetState'::__l11::<lambda_7>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514245>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7868239365963514245>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bc350

bool __thiscall
`UE::Net::Private::FReplicationWriter::SetState'::__l12::<lambda_8>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514250>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)((longlong)this + 0x10) + 0x1a0),&local_18,
               **(uint **)((longlong)this + 0x18));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963514250>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bc438;
    }
  }
  bVar2 = false;
LAB_1504bc438:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bc470

bool __thiscall
`UE::Net::Private::FReplicationWriter::WriteObjectAndSubObjects'::__l90::<lambda_9>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963516423>);
  if (bVar2) {
    UE::Net::FNetRefHandle::ToString(*(FNetRefHandle **)((longlong)this + 8),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963516423>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bc50c;
    }
  }
  bVar2 = false;
LAB_1504bc50c:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bc550

bool __thiscall
`UE::Net::Private::FReplicationWriter::SetState'::__l13::<lambda_9>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514255>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)((longlong)this + 0x10) + 0x1a0),&local_18,
               **(uint **)((longlong)this + 0x18));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963514255>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bc638;
    }
  }
  bVar2 = false;
LAB_1504bc638:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

