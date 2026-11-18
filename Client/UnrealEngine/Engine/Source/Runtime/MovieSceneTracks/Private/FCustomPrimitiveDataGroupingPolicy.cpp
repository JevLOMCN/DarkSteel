// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// InitializeGroupKeys @ 1467a4a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FCustomPrimitiveDataGroupingPolicy::InitializeGroupKeys
          (FCustomPrimitiveDataGroupingPolicy *this,
          TEntityGroupingHandlerBase<UE::MovieScene::FCustomPrimitiveDataGroupingPolicy> *param_1,
          FEntityGroupBuilder *param_2,FEntityAllocationProxy *param_3,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_4,
          TWrite<UE::MovieScene::FEntityGroupID> param_5,TRead<UObject_*> param_6,
          TRead<FName> param_7)

{
  uint *puVar1;
  ushort uVar2;
  UObject *pUVar3;
  undefined1 *puVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  FMovieSceneTracksComponentTypes *pFVar8;
  FComponentMask *pFVar9;
  FEntityAllocation *pFVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FComponentHeader *pFVar15;
  undefined1 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  FComponentHeader *pFVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  undefined8 local_98;
  FWeakObjectPtr local_90;
  FWeakObjectPtr local_88;
  longlong local_80;
  int local_78;
  EComponentHeaderLockMode local_74;
  FComponentHeader *local_70;
  FEntityGroupID local_68;
  UObject *local_58;
  ulonglong local_50;
  uchar *local_48;
  TTuple<FObjectKey,FName> *local_40;
  undefined8 *local_38;
  
  pFVar8 = FMovieSceneTracksComponentTypes::Get();
  pFVar9 = FEntityAllocationProxy::GetAllocationType(param_3);
  uVar2 = (pFVar8->Tags).CustomPrimitiveData.Value;
  if (((uVar2 != 0xffff) && ((int)(uint)uVar2 < (pFVar9->Bits).NumBits)) &&
     ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1)
      != 0)) {
    pFVar10 = FEntityAllocationProxy::GetAllocation(param_3);
    pFVar19 = pFVar10->ComponentHeaders;
    uVar18 = (ulonglong)pFVar10->Size;
    pFVar15 = pFVar19 + pFVar10->NumComponents;
    for (; pFVar19 != pFVar15; pFVar19 = pFVar19 + 1) {
      local_70 = pFVar19;
      if ((TComponentTypeID<FName>)(pFVar19->ComponentType).Value == pFVar8->ScalarParameterName)
      goto LAB_1467a4b42;
    }
    pFVar19 = (FComponentHeader *)0x0;
    local_70 = (FComponentHeader *)0x0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Header",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0x2cd,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_1467a4b42:
    local_74 = pFVar10->LockMode;
    if (local_74 == Mutex) {
      AcquireSRWLockShared((PSRWLOCK)&pFVar19->ReadWriteLock);
    }
    LOCK();
    pFVar19->ScheduledAccessCount = (atomic<int>)((int)pFVar19->ScheduledAccessCount + 1);
    UNLOCK();
    local_48 = pFVar19->Components;
    uVar20 = 0;
    uVar22 = uVar20;
    local_50 = uVar18;
    if (uVar18 != 0) {
      do {
        pUVar3 = *(UObject **)((longlong)param_6 + uVar22 * 8);
        local_98 = *(longlong *)(local_48 + uVar22 * 8);
        local_88.ObjectIndex = 0;
        local_88.ObjectSerialNumber = 0;
        uVar12 = 0;
        uVar14 = 0;
        if (pUVar3 != (UObject *)0x0) {
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar3);
          }
          local_90.ObjectIndex = 0;
          local_90.ObjectSerialNumber = 0;
          local_58 = pUVar3;
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar3);
          }
          FWeakObjectPtr::operator=(&local_90,(FObjectPtr)&local_58);
          local_88 = local_90;
          uVar12 = local_90.ObjectIndex;
          uVar14 = local_90.ObjectSerialNumber;
        }
        lVar6 = local_98;
        local_80 = local_98;
        uVar13 = uVar12 - uVar14 ^ uVar14 >> 0xd;
        iVar21 = local_98._4_4_;
        local_98 = CONCAT44(local_98._4_4_,0xffffffff);
        uVar12 = (-0x61c88647 - uVar14) - uVar13 ^ uVar13 << 8;
        uVar17 = (uVar14 - uVar12) - uVar13 ^ uVar12 >> 0xd;
        uVar14 = (uVar13 - uVar17) - uVar12 ^ uVar17 >> 0xc;
        uVar12 = (uVar12 - uVar14) - uVar17 ^ uVar14 << 0x10;
        uVar13 = (uVar17 - uVar12) - uVar14 ^ uVar12 >> 5;
        uVar14 = (uVar14 - uVar13) - uVar12 ^ uVar13 >> 3;
        uVar12 = (uVar12 - uVar14) - uVar13 ^ uVar14 << 10;
        uVar14 = (uVar13 - uVar12) - uVar14 ^ uVar12 >> 0xf;
        uVar12 = ::GetTypeHash((FNameEntryId)(uint)lVar6);
        uVar14 = iVar21 + uVar14 * 0x40 + (uVar14 >> 2) + uVar12 + 0x9e3779b9 ^ uVar14;
        if (*(int *)&(param_1->GroupKeyToIndex).field_0x8 !=
            *(int *)&(param_1->GroupKeyToIndex).field_0x34) {
          puVar4 = *(undefined1 **)&(param_1->GroupKeyToIndex).field_0x40;
          puVar16 = &(param_1->GroupKeyToIndex).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar16 = puVar4;
          }
          iVar21 = *(int *)(puVar16 +
                           (ulonglong)(*(int *)&(param_1->GroupKeyToIndex).field_0x48 - 1U & uVar14)
                           * 4);
          if (iVar21 != -1) {
            do {
              piVar11 = (int *)((longlong)iVar21 * 0x1c + *(longlong *)&param_1->GroupKeyToIndex);
              if (((*piVar11 == local_88.ObjectIndex) && (piVar11[1] == local_88.ObjectSerialNumber)
                  ) && (*(longlong *)(piVar11 + 2) == local_80)) {
                if ((iVar21 != -1) && (piVar11 != (int *)0x0)) goto LAB_1467a4d49;
                break;
              }
              iVar21 = piVar11[5];
            } while (iVar21 != -1);
          }
        }
        local_40 = (TTuple<FObjectKey,FName> *)&local_88;
        local_38 = &local_98;
        TSet<TTuple<TTuple<FObjectKey,FName>,int>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,int,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TPairInitializer<TTuple<FObjectKey,FName>_const_&,int_&&>_>
                  ((TSet<TTuple<TTuple<FObjectKey,FName>,int>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,int,0>,FDefaultSetAllocator>
                    *)param_1,(uint)&local_78,
                   (TPairInitializer<TTuple<FObjectKey,FName>_const_&,int_&&> *)(ulonglong)uVar14,
                   (bool *)&local_40);
        piVar11 = (int *)((longlong)local_78 * 0x1c + *(longlong *)&param_1->GroupKeyToIndex);
LAB_1467a4d49:
        puVar1 = (uint *)(piVar11 + 4);
        if (piVar11[4] == -1) {
          uVar12 = FEntityGroupBuilder::AllocateGroupIndex(param_2);
          *puVar1 = uVar12;
          TMapBase<int,TTuple<FObjectKey,FName>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<FObjectKey,FName>,0>_>
          ::FindOrAddImpl<int_const_&,TTuple<FObjectKey,FName>_const_&>
                    ((TMapBase<int,TTuple<FObjectKey,FName>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<FObjectKey,FName>,0>_>
                      *)&param_1->IndexToGroupKey,uVar12,(int *)puVar1,
                     (TTuple<FObjectKey,FName> *)&local_88);
        }
        else {
          FEntityGroupBuilder::ReportUsedGroupIndex(param_2,piVar11[4]);
        }
        local_68.GroupIndex = *puVar1;
        local_68.PolicyKey.Index = (param_2->PolicyKey).Index;
        local_68._8_4_ = local_68._8_4_ & 0xffffff00;
        FEntityGroupBuilder::AddEntityToGroup
                  (param_2,(FMovieSceneEntityID *)((longlong)param_4 + (longlong)(int)uVar20 * 2),
                   &local_68);
        uVar20 = (ulonglong)((int)uVar20 + 1);
        uVar22 = uVar22 + 1;
        *(ulonglong *)param_5 = CONCAT44(local_68.GroupIndex,local_68.PolicyKey.Index);
        *(undefined4 *)((longlong)param_5 + 8) = local_68._8_4_;
        param_5 = (TWrite<UE::MovieScene::FEntityGroupID>)((longlong)param_5 + 0xc);
        pFVar19 = local_70;
      } while ((longlong)uVar22 < (longlong)local_50);
    }
    LOCK();
    pFVar19->ScheduledAccessCount = (atomic<int>)((int)pFVar19->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_74 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar19->ReadWriteLock);
    }
  }
  return;
}

