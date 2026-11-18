// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// Run @ 14693fb80

void __thiscall
`UE::MovieScene::FMovieSceneUMGComponentTypes::FMovieSceneUMGComponentTypes'::__l2::
FWidgetMaterialHandleInitializer::Run
          (void *this,FEntityRange *param_1,FEntityAllocation *param_2,
          TArrayView<int_const_,int> *param_3)

{
  FName *pFVar1;
  EComponentHeaderLockMode EVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  FEntityAllocation *pFVar6;
  void *pvVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  FBuiltInComponentTypes *pFVar11;
  UClass *pUVar12;
  FName FVar13;
  FComponentHeader *pFVar14;
  longlong lVar15;
  EComponentHeaderLockMode EVar16;
  uint uVar17;
  FComponentHeader *pFVar18;
  int iVar19;
  undefined4 uStack_9c;
  TArrayView<FName_const_,int> local_98;
  FWidgetMaterialHandle local_88;
  FComponentHeader *local_78;
  undefined8 local_70;
  uchar *local_68;
  TComponentLock<UE::MovieScene::TWrite<FWidgetMaterialHandle>_> local_60;
  
  pFVar18 = param_2->ComponentHeaders;
  pFVar14 = pFVar18 + param_2->NumComponents;
  for (; pFVar18 != pFVar14; pFVar18 = pFVar18 + 1) {
    if ((pFVar18->ComponentType).Value == *(ushort *)((longlong)this + 8)) {
      if (pFVar18 != (FComponentHeader *)0x0) goto LAB_14693fc0b;
      goto LAB_14693fbe5;
    }
  }
  pFVar18 = (FComponentHeader *)0x0;
LAB_14693fbe5:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14693fc0b:
  EVar2 = param_2->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar18->ReadWriteLock);
  }
  LOCK();
  pFVar18->ScheduledAccessCount = (atomic<int>)((int)pFVar18->ScheduledAccessCount + 1);
  UNLOCK();
  puVar5 = pFVar18->Components;
  UE::MovieScene::FEntityAllocation::WriteComponents<FWidgetMaterialHandle>
            (param_1->Allocation,&local_60,
             *(TComponentTypeID<FWidgetMaterialHandle> *)((longlong)this + 10),
             (FEntityAllocationWriteContext)0x0);
  pFVar6 = param_1->Allocation;
  pFVar11 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_78 = pFVar6->ComponentHeaders;
  pFVar14 = local_78 + pFVar6->NumComponents;
  do {
    if (local_78 == pFVar14) {
LAB_14693fc83:
      local_70 = 0;
      local_78 = (FComponentHeader *)0x0;
      EVar16 = LockFree;
      local_68 = (uchar *)0x0;
LAB_14693fc9a:
      pFVar14 = local_78;
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4304535344969154413>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\MovieSceneUMGComponentTypes.cpp"
                         ,0x93,"BoundObjectComponents");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
LAB_14693fcd0:
      if (pFVar14 != (FComponentHeader *)0x0) {
        LOCK();
        pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar16 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
        }
      }
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
      pFVar18->ScheduledAccessCount = (atomic<int>)((int)pFVar18->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar2 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar18->ReadWriteLock);
      }
      return;
    }
    if ((TComponentTypeID<UObject_*>)(local_78->ComponentType).Value == pFVar11->BoundObject) {
      if (local_78 != (FComponentHeader *)0x0) {
        EVar16 = pFVar6->LockMode;
        if (EVar16 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&local_78->ReadWriteLock);
        }
        LOCK();
        local_78->ScheduledAccessCount = (atomic<int>)((int)local_78->ScheduledAccessCount + 1);
        UNLOCK();
        local_68 = local_78->Components;
        local_70 = CONCAT44(local_70._4_4_,EVar16);
        if (local_68 == (uchar *)0x0) goto LAB_14693fc9a;
        uVar17 = 0;
        pFVar14 = local_78;
        if (0 < param_1->Num) {
          lVar15 = 0;
          do {
            uVar10 = 0;
            if ((int)uVar17 < param_3->ArrayNum) {
              uVar10 = ~uVar17 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar19 = param_1->ComponentStartOffset + uVar17;
            iVar3 = *(int *)(lVar15 + (longlong)param_3->DataPtr);
            pvVar7 = *(void **)(local_68 + (longlong)iVar19 * 8);
            if (pvVar7 != (void *)0x0) {
              pUVar12 = Z_Construct_UClass_UWidget_NoRegister();
              iVar4 = (int)pUVar12->_padding_;
              if ((iVar4 <= *(int *)(*(longlong *)((longlong)pvVar7 + 0x10) + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)((longlong)pvVar7 + 0x10) + 0x30) +
                   (longlong)iVar4 * 8) == &pUVar12->_padding_)) {
                FVar13 = (FName)(puVar5 + (longlong)iVar3 * 0x20);
                uVar10 = (((FName *)((longlong)FVar13 + 0x18))->ComparisonIndex).Value;
                if (*(FName *)((longlong)FVar13 + 0x10) != (FName)0x0) {
                  FVar13 = *(FName *)((longlong)FVar13 + 0x10);
                }
                if (((int)uVar10 < 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InCount >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0xeb,L""), bVar9)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                local_98._12_4_ = uStack_9c;
                local_98.ArrayNum = uVar10;
                local_98.DataPtr = (FName *)FVar13;
                GetPropertyValueByPath
                          (&local_88,pvVar7,*(UStruct **)((longlong)pvVar7 + 0x10),&local_98,0);
                pFVar1 = (FName *)(local_60._24_8_ + (longlong)iVar19 * 0x10);
                *pFVar1 = local_88.TypeName;
                pFVar1[1] = (FName)local_88.Data;
              }
            }
            uVar17 = uVar17 + 1;
            lVar15 = lVar15 + 4;
          } while ((int)uVar17 < param_1->Num);
          pFVar14 = local_78;
          EVar16 = (EComponentHeaderLockMode)local_70;
        }
        goto LAB_14693fcd0;
      }
      goto LAB_14693fc83;
    }
    local_78 = local_78 + 1;
  } while( true );
}

