// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// CreateMutation @ 14a400cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FRemoveInvalidControlRigAccumulationComponents::CreateMutation
          (FRemoveInvalidControlRigAccumulationComponents *this,FEntityManager *param_1,
          FComponentMask *param_2)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  TComponentTypeID<UE::MovieScene::FAccumulatedControlEntryIndex> TVar2;
  FControlRigComponentTypes *pFVar3;
  
  pFVar3 = FControlRigComponentTypes::Get();
  TVar2 = pFVar3->AccumulatedControlEntryIndex;
  if ((int)(uint)(ushort)TVar2 < (param_2->Bits).NumBits) {
    pTVar1 = (param_2->Bits).AllocatorInstance.InlineData + ((ushort)TVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad & ~(1 << (TVar2._0_1_ & 0x1f));
  }
  return;
}

// MarkAllocation @ 14a42c6f0

void __thiscall
UE::MovieScene::FRemoveInvalidControlRigAccumulationComponents::MarkAllocation
          (FRemoveInvalidControlRigAccumulationComponents *this,FEntityAllocation *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  uint *puVar1;
  ushort uVar2;
  EComponentHeaderLockMode EVar3;
  uchar *puVar4;
  UObject *pUVar5;
  FAccumulatedControlRigValues *this_00;
  ForElementType<unsigned_int> FVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FControlRigComponentTypes *pFVar10;
  int *piVar11;
  ForElementType<unsigned_int> FVar12;
  FComponentHeader *pFVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  FComponentHeader *pFVar17;
  longlong lVar18;
  FWeakObjectPtr local_res20;
  FObjectKey local_58;
  FComponentHeader *local_50;
  UObject *local_40;
  
  pFVar10 = FControlRigComponentTypes::Get();
  pFVar13 = param_1->ComponentHeaders;
  pFVar17 = pFVar13 + param_1->NumComponents;
  for (; pFVar13 != pFVar17; pFVar13 = pFVar13 + 1) {
    local_50 = pFVar13;
    if ((TComponentTypeID<UE::MovieScene::FControlRigSourceData>)(pFVar13->ComponentType).Value ==
        pFVar10->ControlRigSource) goto LAB_14a42c782;
  }
  pFVar13 = (FComponentHeader *)0x0;
  local_50 = (FComponentHeader *)0x0;
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14a42c782:
  EVar3 = param_1->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
  }
  LOCK();
  pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + 1);
  UNLOCK();
  uVar2 = param_1->Size;
  puVar4 = pFVar13->Components;
  iVar16 = 0;
  if ((ulonglong)uVar2 != 0) {
    uVar14 = 1;
    lVar18 = 0;
    do {
      pUVar5 = *(UObject **)(puVar4 + lVar18 * 8);
      this_00 = this->AccumulatedValues;
      local_58.ObjectIndex = 0;
      local_58.ObjectSerialNumber = 0;
      if (pUVar5 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar5);
        }
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        local_40 = pUVar5;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_40);
        local_58.ObjectIndex = local_res20.ObjectIndex;
        local_58.ObjectSerialNumber = local_res20.ObjectSerialNumber;
      }
      piVar11 = TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                ::Find((TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                        *)this_00,&local_58);
      if (piVar11 == (int *)0x0) {
        iVar15 = (iVar16 - param_2->NumBits) + 1;
        if (0 < iVar15) {
          iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(param_2,iVar15);
          TBitArray<FDefaultBitArrayAllocator>::SetRange(param_2,iVar9,iVar15,false);
        }
        if (((iVar16 < 0) || (param_2->NumBits <= iVar16)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar6 = (param_2->AllocatorInstance).SecondaryData;
        FVar12 = (ForElementType<unsigned_int>)param_2;
        if (FVar6 != (ForElementType<unsigned_int>)0x0) {
          FVar12 = FVar6;
        }
        iVar15 = iVar16;
        if (iVar16 < 0) {
          iVar15 = iVar16 + 0x1f;
        }
        puVar1 = (uint *)((longlong)FVar12 + (longlong)(iVar15 >> 5) * 4);
        *puVar1 = *puVar1 | uVar14;
      }
      iVar16 = iVar16 + 1;
      uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      lVar18 = lVar18 + 1;
      pFVar13 = local_50;
    } while (lVar18 < (longlong)(ulonglong)uVar2);
  }
  LOCK();
  pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
                    /* WARNING: Could not recover jumptable at 0x00014a42c91e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
    return;
  }
  return;
}

