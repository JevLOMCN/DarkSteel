// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// AddLatentAction @ 146205160

void __thiscall
FMovieSceneLatentActionManager::AddLatentAction
          (FMovieSceneLatentActionManager *this,
          TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *param_1)

{
  int *piVar1;
  TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  
  if ((*(int *)&param_1->field_0x8 != 0) && (*(longlong **)param_1 != (longlong *)0x0)) {
    lVar6 = (**(code **)(**(longlong **)param_1 + 0x10))();
    if (lVar6 != 0) goto LAB_1462051b4;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Delegate.GetUObject() != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequenceTickManager.cpp"
                     ,499,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1462051b4:
  pTVar2 = (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
           (this->LatentActions).AllocatorInstance.Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->LatentActions).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->LatentActions).ArrayNum;
  piVar1 = &(this->LatentActions).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->LatentActions).ArrayNum = iVar5 + 1;
  TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
             ((this->LatentActions).AllocatorInstance.Data + (longlong)iVar5 * 0x10),param_1);
  if ((*(int *)&param_1->field_0x8 != 0) && (*(undefined8 **)param_1 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)param_1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)param_1,0,0,0x10);
    *(undefined4 *)&param_1->field_0x8 = 0;
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// ClearLatentActions @ 14620b380

void __thiscall
FMovieSceneLatentActionManager::ClearLatentActions
          (FMovieSceneLatentActionManager *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UObject *pUVar5;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  if ((param_1 == (UObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequenceTickManager.cpp"
                         ,0x1f9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar1 = (this->LatentActions).ArrayNum;
  this_00 = (this->LatentActions).AllocatorInstance.Data;
  pFVar6 = this_00 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->LatentActions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar6) break;
    if (((*(int *)&this_00[8].field_0x0 != 0) &&
        (*(longlong **)&this_00->field_0x0 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)&this_00->field_0x0 + 0x38))(), cVar4 != '\0')) {
      pUVar5 = (UObject *)0x0;
      if ((*(int *)&this_00[8].field_0x0 != 0) &&
         (*(longlong **)&this_00->field_0x0 != (longlong *)0x0)) {
        pUVar5 = (UObject *)(**(code **)(**(longlong **)&this_00->field_0x0 + 0x10))();
      }
      if (((pUVar5 == param_1) && (*(int *)&this_00[8].field_0x0 != 0)) &&
         (*(undefined8 **)&this_00->field_0x0 != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)&this_00->field_0x0)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)this_00,0,0,0x10);
        *(undefined4 *)&this_00[8].field_0x0 = 0;
      }
    }
    this_00 = this_00 + 0x10;
  }
  return;
}

// ClearLatentActions @ 14620b480

void __thiscall
FMovieSceneLatentActionManager::ClearLatentActions(FMovieSceneLatentActionManager *this)

{
  int *piVar1;
  int iVar2;
  TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *pTVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  
  if ((this->bIsRunningLatentActions == false) ||
     (bVar4 = `FMovieSceneLatentActionManager::ClearLatentActions'::__l3::<lambda_1>::operator()
                        (local_res8), bVar4)) {
    pTVar3 = (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
             (this->LatentActions).AllocatorInstance.Data;
    iVar2 = (this->LatentActions).ArrayNum;
    piVar1 = &(this->LatentActions).ArrayMax;
    if (-1 < (this->LatentActions).ArrayMax) {
      DestructItems<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,int>
                (pTVar3,iVar2);
      (this->LatentActions).ArrayNum = 0;
      return;
    }
    DestructItems<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,int>
              (pTVar3,iVar2);
    (this->LatentActions).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  return;
}

// RunLatentActions @ 146233120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneLatentActionManager::RunLatentActions
          (FMovieSceneLatentActionManager *this,TFunctionRef<void___cdecl(void)> *param_1)

{
  int *piVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  UClass *pUVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  undefined1 auStackY_e8 [32];
  undefined1 local_b8;
  bool local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined1 local_b2;
  ulonglong local_b0;
  UObject *local_a8;
  TFunctionRef<void___cdecl(void)> *local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (this->bIsRunningLatentActions == false) {
    this->bIsRunningLatentActions = true;
    local_b7 = false;
    iVar6 = (this->LatentActions).ArrayNum;
    local_a0 = param_1;
    iVar14 = UE::MovieScene::GMovieSceneMaxLatentActionLoops;
    while (0 < iVar6) {
      uVar13 = 0;
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      uVar16 = uVar13;
      do {
        uVar12 = (uint)uVar13;
        uVar9 = 0;
        if ((int)uVar12 < iVar6) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar15 = (this->LatentActions).AllocatorInstance.Data + uVar16;
        local_b6 = 0;
        if (((*(int *)(pFVar15 + 8) == 0) || (*(longlong **)pFVar15 == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(**(longlong **)pFVar15 + 0x38))(), cVar5 == '\0')) {
          uVar9 = 0;
          if ((int)uVar12 < (this->LatentActions).ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          pFVar15 = (this->LatentActions).AllocatorInstance.Data + uVar16;
          local_b2 = 0;
          if ((*(int *)&pFVar15[8].field_0x0 != 0) &&
             (*(undefined8 **)&pFVar15->field_0x0 != (undefined8 *)0x0)) {
            (**(code **)**(undefined8 **)&pFVar15->field_0x0)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)pFVar15,0,0,0x10);
            *(undefined4 *)&pFVar15[8].field_0x0 = 0;
          }
          if (*(void **)&pFVar15->field_0x0 != (void *)0x0) {
            FMemory::Free(*(void **)&pFVar15->field_0x0);
          }
          iVar6 = ((this->LatentActions).ArrayNum - uVar12) + -1;
          if (iVar6 != 0) {
            memmove(pFVar15,pFVar15 + 0x10,(longlong)iVar6 << 4);
          }
          piVar1 = &(this->LatentActions).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(ForAnyElementType *)this,(this->LatentActions).ArrayNum,
                     &(this->LatentActions).ArrayMax);
        }
        else {
          local_b5 = 0;
          if ((*(int *)(pFVar15 + 8) == 0) || (*(longlong **)pFVar15 == (longlong *)0x0)) {
            local_b0 = 0;
          }
          else {
            uVar7 = (**(code **)(**(longlong **)pFVar15 + 0x10))();
            local_b0 = uVar7;
            if (uVar7 != 0) {
              uVar9 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
              uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
              if (local_98._8_4_ != local_64) {
                FVar10 = (ForElementType<FSetElementId>)local_60;
                if (local_58 != (ForElementType<FSetElementId>)0x0) {
                  FVar10 = local_58;
                }
                for (iVar6 = *(int *)((longlong)FVar10 +
                                     (ulonglong)(local_50 - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
                    iVar6 != -1; iVar6 = *(int *)(local_98._0_8_ + (longlong)iVar6 * 0x10 + 8)) {
                  if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar6 * 0x10) == uVar7)
                  goto LAB_1462334b2;
                }
              }
              pUVar8 = UMovieSceneSequencePlayer::StaticClass();
              iVar6 = (int)pUVar8->_padding_;
              if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x38) < iVar6) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x30) + (longlong)iVar6 * 8) !=
                  &pUVar8->_padding_)) {
LAB_146233385:
                local_b4 = 0;
                if ((*(int *)(pFVar15 + 8) != 0) && (*(longlong **)pFVar15 != (longlong *)0x0)) {
                  (**(code **)(**(longlong **)pFVar15 + 0x68))();
                }
                uVar9 = 0;
                if ((int)uVar12 < (this->LatentActions).ArrayNum) {
                  uVar9 = ~uVar12 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar15 = (this->LatentActions).AllocatorInstance.Data + uVar16;
                local_b3 = 0;
                if ((*(int *)&pFVar15[8].field_0x0 != 0) &&
                   (*(undefined8 **)&pFVar15->field_0x0 != (undefined8 *)0x0)) {
                  (**(code **)**(undefined8 **)&pFVar15->field_0x0)();
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            ((ForAnyElementType *)pFVar15,0,0,0x10);
                  *(undefined4 *)&pFVar15[8].field_0x0 = 0;
                }
                if (*(void **)&pFVar15->field_0x0 != (void *)0x0) {
                  FMemory::Free(*(void **)&pFVar15->field_0x0);
                }
                iVar6 = ((this->LatentActions).ArrayNum - uVar12) + -1;
                if (iVar6 != 0) {
                  memmove(pFVar15,pFVar15 + 0x10,(longlong)iVar6 << 4);
                }
                piVar1 = &(this->LatentActions).ArrayNum;
                *piVar1 = *piVar1 + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,(ForAnyElementType *)this,(this->LatentActions).ArrayNum,
                           &(this->LatentActions).ArrayMax);
              }
              else {
                uVar2 = *(ushort *)(uVar7 + 0x210);
                if ((UE::MovieScene::GGlobalPlayerUpdateFlags.NumBits <= (int)(uint)uVar2) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pTVar11 = &UE::MovieScene::GGlobalPlayerUpdateFlags;
                if (UE::MovieScene::GGlobalPlayerUpdateFlags.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  pTVar11 = (TBitArray<FDefaultBitArrayAllocator> *)
                            UE::MovieScene::GGlobalPlayerUpdateFlags.AllocatorInstance.SecondaryData
                  ;
                }
                if ((*(uint *)((longlong)pTVar11 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) &
                    1) == 0) goto LAB_146233385;
                uVar13 = (ulonglong)(uVar12 + 1);
                uVar16 = uVar16 + 0x10;
              }
              TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::
              Emplace<UObject_*_const_&>
                        ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)
                         local_98,&local_a8,(bool *)&local_b0);
              goto LAB_14623358b;
            }
          }
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6187304322972254764>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequenceTickManager.cpp"
                             ,0x22c,"BoundObject");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
LAB_1462334b2:
          uVar13 = (ulonglong)(uVar12 + 1);
          uVar16 = uVar16 + 0x10;
        }
LAB_14623358b:
        iVar6 = (this->LatentActions).ArrayNum;
      } while ((int)uVar13 < iVar6);
      (**(code **)local_a0)(*(undefined8 *)&local_a0->field_0x8);
      iVar14 = iVar14 + -1;
      if (iVar14 < 1) {
        local_b8 = 0;
        bVar4 = `FMovieSceneLatentActionManager::RunLatentActions'::__l23::<lambda_1>::operator()
                          (&local_b8);
        if (!bVar4) {
          local_50 = 0;
          if (local_58 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_58);
          }
          bVar4 = local_98._12_4_ != 0;
          local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
          if (bVar4) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
          }
          local_68 = 0xffffffff;
          local_64 = 0;
          local_70 = 0;
          if (0x80 < local_6c) {
            local_6c = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
          }
          if (local_78 != (void *)0x0) {
            FMemory::Free(local_78);
          }
          if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98._0_8_);
          }
          break;
        }
      }
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      bVar4 = local_98._12_4_ != 0;
      local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
      if (bVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      iVar6 = (this->LatentActions).ArrayNum;
    }
    this->bIsRunningLatentActions = local_b7;
  }
  return;
}

// operator() @ 1504e70f0

bool __thiscall
`FMovieSceneLatentActionManager::ClearLatentActions'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6187304322972254728>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6187304322972254728>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e73e0

bool __thiscall
`FMovieSceneLatentActionManager::RunLatentActions'::__l23::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6187304322972254790>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6187304322972254790>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

