// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// CreateMutation @ 14a400b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FControlRigAccumulationEntryIndexMutation::CreateMutation
          (FControlRigAccumulationEntryIndexMutation *this,FEntityManager *param_1,
          FComponentMask *param_2)

{
  FControlRigComponentTypes *pFVar1;
  
  pFVar1 = FControlRigComponentTypes::Get();
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&pFVar1->AccumulatedControlEntryIndex);
  return;
}

// InitializeAllocation @ 14a4207f0

void __thiscall
UE::MovieScene::FControlRigAccumulationEntryIndexMutation::InitializeAllocation
          (FControlRigAccumulationEntryIndexMutation *this,FEntityAllocation *param_1,
          FComponentMask *param_2)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  uint uVar3;
  FAccumulatedControlRigValues *this_00;
  FName FVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FControlRigComponentTypes *pFVar10;
  FMovieSceneTracksComponentTypes *pFVar11;
  uint *puVar12;
  FComponentHeader *pFVar13;
  FComponentHeader *pFVar14;
  FComponentHeader *pFVar15;
  longlong lVar16;
  undefined4 uStackX_20;
  undefined2 uStackX_24;
  FWeakObjectPtr FStack_b0;
  FObjectKey FStack_a8;
  FComponentHeader *pFStack_a0;
  longlong lStack_98;
  uchar *puStack_90;
  UObject *pUStack_88;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FAccumulatedControlEntryIndex>_> TStack_80;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FControlRigSourceData>_> TStack_60;
  
  pFVar14 = (FComponentHeader *)0x0;
  pFVar10 = FControlRigComponentTypes::Get();
  pFVar11 = FMovieSceneTracksComponentTypes::Get();
  pFStack_a0 = param_1->ComponentHeaders;
  pFVar13 = pFStack_a0 + param_1->NumComponents;
  for (; pFStack_a0 != pFVar13; pFStack_a0 = pFStack_a0 + 1) {
    pFVar15 = pFStack_a0;
    if ((TComponentTypeID<FName>)(pFStack_a0->ComponentType).Value == pFVar11->GenericParameterName)
    goto LAB_14a435b61;
  }
  pFStack_a0 = (FComponentHeader *)0x0;
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar15 = pFVar14;
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14a435b61:
  EVar2 = param_1->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
  }
  LOCK();
  pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + 1);
  UNLOCK();
  puStack_90 = pFVar15->Components;
  FEntityAllocation::WriteComponents<UE::MovieScene::FControlRigSourceData>
            (param_1,&TStack_60,pFVar10->ControlRigSource,(FEntityAllocationWriteContext)0x0);
  uVar1 = (pFVar11->Parameters).Bool.PropertyTag.Value;
  if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    uVar1 = (pFVar11->Parameters).Byte.PropertyTag.Value;
    if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
       ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1
        ) == 0)) {
      uVar1 = (pFVar11->Parameters).Integer.PropertyTag.Value;
      if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
         ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) &
          1) == 0)) {
        uVar1 = (pFVar11->Parameters).Scalar.PropertyTag.Value;
        if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
           ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f)
            & 1) == 0)) {
          uVar1 = (pFVar11->Parameters).Vector3.PropertyTag.Value;
          if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
             ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >>
               (uVar1 & 0x1f) & 1) == 0)) {
            uVar1 = (pFVar11->Parameters).Transform.PropertyTag.Value;
            if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
               ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >>
                 (uVar1 & 0x1f) & 1) == 0)) {
              uVar1 = (pFVar10->Tags).Space.Value;
              if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
                 ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >>
                   (uVar1 & 0x1f) & 1) == 0)) goto LAB_14a435e8a;
              lVar16 = 0;
            }
            else {
              lVar16 = 6;
            }
          }
          else {
            lVar16 = 5;
          }
        }
        else {
          lVar16 = 4;
        }
      }
      else {
        lVar16 = 3;
      }
    }
    else {
      lVar16 = 2;
    }
  }
  else {
    lVar16 = 1;
  }
  FEntityAllocation::WriteComponents<UE::MovieScene::FAccumulatedControlEntryIndex>
            (param_1,&TStack_80,pFVar10->AccumulatedControlEntryIndex,
             (FEntityAllocationWriteContext)0x0);
  uVar1 = param_1->Size;
  if (uVar1 != 0) {
    lStack_98 = 0;
    do {
      FStack_a8.ObjectIndex = 0;
      FStack_a8.ObjectSerialNumber = 0;
      this_00 = this->AccumulatedValues;
      FVar4 = *(FName *)(puStack_90 + (longlong)pFVar14 * 8);
      pUVar5 = *(UObject **)(TStack_60._24_8_ + (longlong)pFVar14 * 8);
      if (pUVar5 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar5);
        }
        FStack_b0.ObjectIndex = 0;
        FStack_b0.ObjectSerialNumber = 0;
        pUStack_88 = pUVar5;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=(&FStack_b0,(FObjectPtr)&pUStack_88);
        FStack_a8.ObjectIndex = FStack_b0.ObjectIndex;
        FStack_a8.ObjectSerialNumber = FStack_b0.ObjectSerialNumber;
      }
      puVar12 = (uint *)TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                        ::Find((TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                                *)this_00,&FStack_a8);
      if (puVar12 == (uint *)0x0) {
        uStackX_20 = 0xffffffff;
      }
      else {
        uVar3 = *puVar12;
        uVar8 = 0;
        if ((int)uVar3 < (this_00->ValuesArray).ArrayNum) {
          uVar8 = ~uVar3 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = FControlRigParameterValueHeader::Add_GetIndex
                          ((FControlRigParameterValueHeader *)
                           ((this_00->ValuesArray).AllocatorInstance.Data +
                           (longlong)(int)uVar3 * 0x88 + lVar16 * 0x10 + 8),FVar4);
        uStackX_20 = CONCAT22((short)iVar9,(short)*puVar12);
        uStackX_24 = CONCAT11(uStackX_24._1_1_,(char)lVar16);
      }
      pFVar14 = (FComponentHeader *)((longlong)&pFVar14->_padding_ + 1);
      *(undefined4 *)(TStack_80._24_8_ + lStack_98) = uStackX_20;
      *(undefined2 *)(TStack_80._24_8_ + 4 + lStack_98) = uStackX_24;
      lStack_98 = lStack_98 + 6;
      pFVar15 = pFStack_a0;
    } while ((longlong)pFVar14 < (longlong)(ulonglong)uVar1);
  }
  if (TStack_80._0_8_ != 0) {
    if ((ulonglong)TStack_80._8_8_ < *(ulonglong *)(TStack_80._0_8_ + 0x28)) {
      TStack_80._8_8_ = *(ulonglong *)(TStack_80._0_8_ + 0x28);
    }
    *(undefined8 *)(TStack_80._0_8_ + 0x28) = TStack_80._8_8_;
    LOCK();
    *(int *)(TStack_80._0_8_ + 0x30) = *(int *)(TStack_80._0_8_ + 0x30) + -1;
    UNLOCK();
    if (TStack_80._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(TStack_80._0_8_ + 0x20));
    }
  }
LAB_14a435e8a:
  if (TStack_60._0_8_ != 0) {
    if ((ulonglong)TStack_60._8_8_ < *(ulonglong *)(TStack_60._0_8_ + 0x28)) {
      TStack_60._8_8_ = *(ulonglong *)(TStack_60._0_8_ + 0x28);
    }
    *(undefined8 *)(TStack_60._0_8_ + 0x28) = TStack_60._8_8_;
    LOCK();
    *(int *)(TStack_60._0_8_ + 0x30) = *(int *)(TStack_60._0_8_ + 0x30) + -1;
    UNLOCK();
    if (TStack_60._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(TStack_60._0_8_ + 0x20));
    }
  }
  LOCK();
  pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar2 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
  }
  return;
}

// InitializeUnmodifiedAllocation @ 14a423dc0

void __thiscall
UE::MovieScene::FControlRigAccumulationEntryIndexMutation::InitializeUnmodifiedAllocation
          (FControlRigAccumulationEntryIndexMutation *this,FEntityAllocation *param_1,
          FComponentMask *param_2)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  uint uVar3;
  FAccumulatedControlRigValues *this_00;
  FName FVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FControlRigComponentTypes *pFVar10;
  FMovieSceneTracksComponentTypes *pFVar11;
  uint *puVar12;
  FComponentHeader *pFVar13;
  FComponentHeader *pFVar14;
  FComponentHeader *pFVar15;
  longlong lVar16;
  undefined4 uStackX_20;
  undefined2 uStackX_24;
  FWeakObjectPtr FStack_b0;
  FObjectKey FStack_a8;
  FComponentHeader *pFStack_a0;
  longlong lStack_98;
  uchar *puStack_90;
  UObject *pUStack_88;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FAccumulatedControlEntryIndex>_> TStack_80;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FControlRigSourceData>_> TStack_60;
  
  pFVar14 = (FComponentHeader *)0x0;
  pFVar10 = FControlRigComponentTypes::Get();
  pFVar11 = FMovieSceneTracksComponentTypes::Get();
  pFStack_a0 = param_1->ComponentHeaders;
  pFVar13 = pFStack_a0 + param_1->NumComponents;
  for (; pFStack_a0 != pFVar13; pFStack_a0 = pFStack_a0 + 1) {
    pFVar15 = pFStack_a0;
    if ((TComponentTypeID<FName>)(pFStack_a0->ComponentType).Value == pFVar11->GenericParameterName)
    goto LAB_14a435b61;
  }
  pFStack_a0 = (FComponentHeader *)0x0;
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar15 = pFVar14;
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14a435b61:
  EVar2 = param_1->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
  }
  LOCK();
  pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + 1);
  UNLOCK();
  puStack_90 = pFVar15->Components;
  FEntityAllocation::WriteComponents<UE::MovieScene::FControlRigSourceData>
            (param_1,&TStack_60,pFVar10->ControlRigSource,(FEntityAllocationWriteContext)0x0);
  uVar1 = (pFVar11->Parameters).Bool.PropertyTag.Value;
  if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    uVar1 = (pFVar11->Parameters).Byte.PropertyTag.Value;
    if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
       ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1
        ) == 0)) {
      uVar1 = (pFVar11->Parameters).Integer.PropertyTag.Value;
      if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
         ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) &
          1) == 0)) {
        uVar1 = (pFVar11->Parameters).Scalar.PropertyTag.Value;
        if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
           ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f)
            & 1) == 0)) {
          uVar1 = (pFVar11->Parameters).Vector3.PropertyTag.Value;
          if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
             ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >>
               (uVar1 & 0x1f) & 1) == 0)) {
            uVar1 = (pFVar11->Parameters).Transform.PropertyTag.Value;
            if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
               ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >>
                 (uVar1 & 0x1f) & 1) == 0)) {
              uVar1 = (pFVar10->Tags).Space.Value;
              if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
                 ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >>
                   (uVar1 & 0x1f) & 1) == 0)) goto LAB_14a435e8a;
              lVar16 = 0;
            }
            else {
              lVar16 = 6;
            }
          }
          else {
            lVar16 = 5;
          }
        }
        else {
          lVar16 = 4;
        }
      }
      else {
        lVar16 = 3;
      }
    }
    else {
      lVar16 = 2;
    }
  }
  else {
    lVar16 = 1;
  }
  FEntityAllocation::WriteComponents<UE::MovieScene::FAccumulatedControlEntryIndex>
            (param_1,&TStack_80,pFVar10->AccumulatedControlEntryIndex,
             (FEntityAllocationWriteContext)0x0);
  uVar1 = param_1->Size;
  if (uVar1 != 0) {
    lStack_98 = 0;
    do {
      FStack_a8.ObjectIndex = 0;
      FStack_a8.ObjectSerialNumber = 0;
      this_00 = this->AccumulatedValues;
      FVar4 = *(FName *)(puStack_90 + (longlong)pFVar14 * 8);
      pUVar5 = *(UObject **)(TStack_60._24_8_ + (longlong)pFVar14 * 8);
      if (pUVar5 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar5);
        }
        FStack_b0.ObjectIndex = 0;
        FStack_b0.ObjectSerialNumber = 0;
        pUStack_88 = pUVar5;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=(&FStack_b0,(FObjectPtr)&pUStack_88);
        FStack_a8.ObjectIndex = FStack_b0.ObjectIndex;
        FStack_a8.ObjectSerialNumber = FStack_b0.ObjectSerialNumber;
      }
      puVar12 = (uint *)TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                        ::Find((TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                                *)this_00,&FStack_a8);
      if (puVar12 == (uint *)0x0) {
        uStackX_20 = 0xffffffff;
      }
      else {
        uVar3 = *puVar12;
        uVar8 = 0;
        if ((int)uVar3 < (this_00->ValuesArray).ArrayNum) {
          uVar8 = ~uVar3 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = FControlRigParameterValueHeader::Add_GetIndex
                          ((FControlRigParameterValueHeader *)
                           ((this_00->ValuesArray).AllocatorInstance.Data +
                           (longlong)(int)uVar3 * 0x88 + lVar16 * 0x10 + 8),FVar4);
        uStackX_20 = CONCAT22((short)iVar9,(short)*puVar12);
        uStackX_24 = CONCAT11(uStackX_24._1_1_,(char)lVar16);
      }
      pFVar14 = (FComponentHeader *)((longlong)&pFVar14->_padding_ + 1);
      *(undefined4 *)(TStack_80._24_8_ + lStack_98) = uStackX_20;
      *(undefined2 *)(TStack_80._24_8_ + 4 + lStack_98) = uStackX_24;
      lStack_98 = lStack_98 + 6;
      pFVar15 = pFStack_a0;
    } while ((longlong)pFVar14 < (longlong)(ulonglong)uVar1);
  }
  if (TStack_80._0_8_ != 0) {
    if ((ulonglong)TStack_80._8_8_ < *(ulonglong *)(TStack_80._0_8_ + 0x28)) {
      TStack_80._8_8_ = *(ulonglong *)(TStack_80._0_8_ + 0x28);
    }
    *(undefined8 *)(TStack_80._0_8_ + 0x28) = TStack_80._8_8_;
    LOCK();
    *(int *)(TStack_80._0_8_ + 0x30) = *(int *)(TStack_80._0_8_ + 0x30) + -1;
    UNLOCK();
    if (TStack_80._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(TStack_80._0_8_ + 0x20));
    }
  }
LAB_14a435e8a:
  if (TStack_60._0_8_ != 0) {
    if ((ulonglong)TStack_60._8_8_ < *(ulonglong *)(TStack_60._0_8_ + 0x28)) {
      TStack_60._8_8_ = *(ulonglong *)(TStack_60._0_8_ + 0x28);
    }
    *(undefined8 *)(TStack_60._0_8_ + 0x28) = TStack_60._8_8_;
    LOCK();
    *(int *)(TStack_60._0_8_ + 0x30) = *(int *)(TStack_60._0_8_ + 0x30) + -1;
    UNLOCK();
    if (TStack_60._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(TStack_60._0_8_ + 0x20));
    }
  }
  LOCK();
  pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar2 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
  }
  return;
}

// ProcessAllocation @ 14a435ac0

void __thiscall
UE::MovieScene::FControlRigAccumulationEntryIndexMutation::ProcessAllocation
          (FControlRigAccumulationEntryIndexMutation *this,FEntityAllocation *param_1,
          FComponentMask *param_2)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  uint uVar3;
  FAccumulatedControlRigValues *this_00;
  FName FVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FControlRigComponentTypes *pFVar10;
  FMovieSceneTracksComponentTypes *pFVar11;
  uint *puVar12;
  FComponentHeader *pFVar13;
  FComponentHeader *pFVar14;
  FComponentHeader *pFVar15;
  longlong lVar16;
  undefined4 local_res20;
  undefined2 local_res24;
  FWeakObjectPtr local_b0;
  FObjectKey local_a8;
  FComponentHeader *local_a0;
  longlong local_98;
  uchar *local_90;
  UObject *local_88;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FAccumulatedControlEntryIndex>_> local_80;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FControlRigSourceData>_> local_60;
  
  pFVar14 = (FComponentHeader *)0x0;
  pFVar10 = FControlRigComponentTypes::Get();
  pFVar11 = FMovieSceneTracksComponentTypes::Get();
  local_a0 = param_1->ComponentHeaders;
  pFVar13 = local_a0 + param_1->NumComponents;
  for (; local_a0 != pFVar13; local_a0 = local_a0 + 1) {
    pFVar15 = local_a0;
    if ((TComponentTypeID<FName>)(local_a0->ComponentType).Value == pFVar11->GenericParameterName)
    goto LAB_14a435b61;
  }
  local_a0 = (FComponentHeader *)0x0;
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar15 = pFVar14;
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14a435b61:
  EVar2 = param_1->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
  }
  LOCK();
  pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + 1);
  UNLOCK();
  local_90 = pFVar15->Components;
  FEntityAllocation::WriteComponents<UE::MovieScene::FControlRigSourceData>
            (param_1,&local_60,pFVar10->ControlRigSource,(FEntityAllocationWriteContext)0x0);
  uVar1 = (pFVar11->Parameters).Bool.PropertyTag.Value;
  if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    uVar1 = (pFVar11->Parameters).Byte.PropertyTag.Value;
    if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
       ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1
        ) == 0)) {
      uVar1 = (pFVar11->Parameters).Integer.PropertyTag.Value;
      if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
         ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) &
          1) == 0)) {
        uVar1 = (pFVar11->Parameters).Scalar.PropertyTag.Value;
        if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
           ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f)
            & 1) == 0)) {
          uVar1 = (pFVar11->Parameters).Vector3.PropertyTag.Value;
          if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
             ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >>
               (uVar1 & 0x1f) & 1) == 0)) {
            uVar1 = (pFVar11->Parameters).Transform.PropertyTag.Value;
            if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
               ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >>
                 (uVar1 & 0x1f) & 1) == 0)) {
              uVar1 = (pFVar10->Tags).Space.Value;
              if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
                 ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >>
                   (uVar1 & 0x1f) & 1) == 0)) goto LAB_14a435e8a;
              lVar16 = 0;
            }
            else {
              lVar16 = 6;
            }
          }
          else {
            lVar16 = 5;
          }
        }
        else {
          lVar16 = 4;
        }
      }
      else {
        lVar16 = 3;
      }
    }
    else {
      lVar16 = 2;
    }
  }
  else {
    lVar16 = 1;
  }
  FEntityAllocation::WriteComponents<UE::MovieScene::FAccumulatedControlEntryIndex>
            (param_1,&local_80,pFVar10->AccumulatedControlEntryIndex,
             (FEntityAllocationWriteContext)0x0);
  uVar1 = param_1->Size;
  if (uVar1 != 0) {
    local_98 = 0;
    do {
      local_a8.ObjectIndex = 0;
      local_a8.ObjectSerialNumber = 0;
      this_00 = this->AccumulatedValues;
      FVar4 = *(FName *)(local_90 + (longlong)pFVar14 * 8);
      pUVar5 = *(UObject **)(local_60._24_8_ + (longlong)pFVar14 * 8);
      if (pUVar5 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar5);
        }
        local_b0.ObjectIndex = 0;
        local_b0.ObjectSerialNumber = 0;
        local_88 = pUVar5;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_88);
        local_a8.ObjectIndex = local_b0.ObjectIndex;
        local_a8.ObjectSerialNumber = local_b0.ObjectSerialNumber;
      }
      puVar12 = (uint *)TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                        ::Find((TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                                *)this_00,&local_a8);
      if (puVar12 == (uint *)0x0) {
        local_res20 = 0xffffffff;
      }
      else {
        uVar3 = *puVar12;
        uVar8 = 0;
        if ((int)uVar3 < (this_00->ValuesArray).ArrayNum) {
          uVar8 = ~uVar3 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = FControlRigParameterValueHeader::Add_GetIndex
                          ((FControlRigParameterValueHeader *)
                           ((this_00->ValuesArray).AllocatorInstance.Data +
                           (longlong)(int)uVar3 * 0x88 + lVar16 * 0x10 + 8),FVar4);
        local_res20 = CONCAT22((short)iVar9,(short)*puVar12);
        local_res24 = CONCAT11(local_res24._1_1_,(char)lVar16);
      }
      pFVar14 = (FComponentHeader *)((longlong)&pFVar14->_padding_ + 1);
      *(undefined4 *)(local_80._24_8_ + local_98) = local_res20;
      *(undefined2 *)(local_80._24_8_ + 4 + local_98) = local_res24;
      local_98 = local_98 + 6;
      pFVar15 = local_a0;
    } while ((longlong)pFVar14 < (longlong)(ulonglong)uVar1);
  }
  if (local_80._0_8_ != 0) {
    if ((ulonglong)local_80._8_8_ < *(ulonglong *)(local_80._0_8_ + 0x28)) {
      local_80._8_8_ = *(ulonglong *)(local_80._0_8_ + 0x28);
    }
    *(undefined8 *)(local_80._0_8_ + 0x28) = local_80._8_8_;
    LOCK();
    *(int *)(local_80._0_8_ + 0x30) = *(int *)(local_80._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_80._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_80._0_8_ + 0x20));
    }
  }
LAB_14a435e8a:
  if (local_60._0_8_ != 0) {
    if ((ulonglong)local_60._8_8_ < *(ulonglong *)(local_60._0_8_ + 0x28)) {
      local_60._8_8_ = *(ulonglong *)(local_60._0_8_ + 0x28);
    }
    *(undefined8 *)(local_60._0_8_ + 0x28) = local_60._8_8_;
    LOCK();
    *(int *)(local_60._0_8_ + 0x30) = *(int *)(local_60._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_60._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_60._0_8_ + 0x20));
    }
  }
  LOCK();
  pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar2 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
  }
  return;
}

