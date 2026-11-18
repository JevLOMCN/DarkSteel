// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FinishTicking @ 1488c0190

void __thiscall FTickableObjectBase::FTickableStatics::FinishTicking(FTickableStatics *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (this->bIsTickingObjects == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsTickingObjects",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tickable.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->bNeedsCleanup == false) {
    this->bIsTickingObjects = false;
    return;
  }
  iVar7 = (this->TickableObjects).ArrayNum;
  lVar4 = (longlong)iVar7;
  if (iVar7 != 0) {
    pFVar1 = (this->TickableObjects).AllocatorInstance.Data;
    iVar9 = 0;
    bVar3 = *(longlong *)pFVar1 != 0;
    lVar6 = 0;
    iVar7 = 0;
    do {
      lVar6 = lVar6 + 1;
      iVar8 = iVar7 + 1;
      if (lVar6 < lVar4) {
        pFVar5 = pFVar1 + lVar6 * 0x10;
        do {
          if (bVar3 != (*(longlong *)pFVar5 != 0)) break;
          iVar8 = iVar8 + 1;
          lVar6 = lVar6 + 1;
          pFVar5 = pFVar5 + 0x10;
        } while (lVar6 < lVar4);
      }
      if (bVar3 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar1 + (longlong)iVar9 * 0x10,pFVar1 + (longlong)iVar7 * 0x10,
                  (longlong)(iVar8 - iVar7) << 4);
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < lVar4);
    (this->TickableObjects).ArrayNum = iVar9;
  }
  this->bIsTickingObjects = false;
  this->bNeedsCleanup = false;
  return;
}

// QueueTickableObjectForAdd @ 1488d3ea0

void __thiscall
FTickableObjectBase::FTickableStatics::QueueTickableObjectForAdd
          (FTickableStatics *this,FTickableObjectBase *param_1,ETickableTickType param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  TPairInitializer<FTickableObjectBase_*_const_&,ETickableTickType_const_&> local_res8;
  ETickableTickType local_res18 [8];
  ETickableTickType **local_18;
  ETickableTickType *local_10;
  
  local_res8.Value = (ETickableTickType *)param_1;
  local_res18[0] = param_2;
  if (param_2 == Never) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewTickType != ETickableTickType::Never",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tickable.cpp"
                       ,0xc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lpCriticalSection = &this->NewTickableObjectsCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  TSet<TTuple<FTickableObjectBase_*,enum_ETickableTickType>,TDefaultMapHashableKeyFuncs<FTickableObjectBase_*,enum_ETickableTickType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FTickableObjectBase_*_const_&,enum_ETickableTickType_const_&>_>
            (&this->NewTickableObjects,&local_res8,(bool *)&local_18);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SetTickTypeForTickableObject @ 1488df5c0

void __thiscall
FTickableObjectBase::FTickableStatics::SetTickTypeForTickableObject
          (FTickableStatics *this,FTickableObjectBase *param_1,ETickableTickType param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement FVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  TPairInitializer<FTickableObjectBase_*_const_&,ETickableTickType_const_&> local_res8;
  FScriptContainerElement local_res18 [8];
  FTickableObjectBase *local_res20;
  ETickableTickType **local_48;
  FScriptContainerElement *local_40;
  
  local_res8.Value = (ETickableTickType *)param_1;
  local_res18[0] = (FScriptContainerElement)param_2;
  if ((this == (FTickableStatics *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  lpCriticalSection = &this->NewTickableObjectsCritical;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar6 = (this->TickableObjects).AllocatorInstance.Data;
  for (pFVar11 = pFVar6; pFVar11 != pFVar6 + (longlong)(this->TickableObjects).ArrayNum * 0x10;
      pFVar11 = pFVar11 + 0x10) {
    if (*(FTickableObjectBase **)pFVar11 == (FTickableObjectBase *)local_res8.Value) {
      uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar6 >> 4);
      goto LAB_1488df697;
    }
  }
  uVar10 = 0xffffffff;
LAB_1488df697:
  if (local_res18[0] == (FScriptContainerElement)0x2) {
    local_res20 = (FTickableObjectBase *)local_res8.Value;
    if (*(int *)&(this->NewTickableObjects).field_0x8 !=
        *(int *)&(this->NewTickableObjects).field_0x34) {
      uVar7 = ((uint)((ulonglong)local_res8.Value >> 0x14) & 0xffff ^
              (uint)((ulonglong)local_res8.Value >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      TSet<TTuple<FTickableObjectBase_*,enum_ETickableTickType>,TDefaultMapHashableKeyFuncs<FTickableObjectBase_*,enum_ETickableTickType,0>,FDefaultSetAllocator>
      ::RemoveImpl<FTickableObjectBase_const_*>
                (&this->NewTickableObjects,uVar7 >> 0x10 ^ uVar7,&local_res20);
    }
    if (uVar10 != 0xffffffff) {
      iVar8 = (this->TickableObjects).ArrayNum;
      uVar7 = ~uVar10 >> 0x1f;
      if (this->bIsTickingObjects == false) {
        uVar5 = 0;
        if ((int)uVar10 < iVar8) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar6 = (this->TickableObjects).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
        iVar8 = (this->TickableObjects).ArrayNum + ~uVar10;
        if (iVar8 != 0) {
          memmove(pFVar6,pFVar6 + 0x10,(longlong)iVar8 << 4);
        }
        piVar1 = &(this->TickableObjects).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->TickableObjects).AllocatorInstance,
                   (this->TickableObjects).ArrayNum,&(this->TickableObjects).ArrayMax);
      }
      else {
        uVar5 = 0;
        if ((int)uVar10 < iVar8) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined8 *)
         ((this->TickableObjects).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10) = 0;
        this->bNeedsCleanup = true;
      }
    }
  }
  else if (uVar10 == 0xffffffff) {
    local_48 = &local_res8.Value;
    local_40 = local_res18;
    TSet<TTuple<FTickableObjectBase_*,enum_ETickableTickType>,TDefaultMapHashableKeyFuncs<FTickableObjectBase_*,enum_ETickableTickType,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FTickableObjectBase_*_const_&,enum_ETickableTickType_const_&>_>
              (&this->NewTickableObjects,&local_res8,(bool *)&local_48);
  }
  else {
    uVar7 = ((uint)((ulonglong)local_res8.Value >> 0x14) & 0xffff ^
            (uint)((ulonglong)local_res8.Value >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    if (*(int *)&(this->NewTickableObjects).field_0x8 !=
        *(int *)&(this->NewTickableObjects).field_0x34) {
      puVar9 = *(undefined1 **)&(this->NewTickableObjects).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->NewTickableObjects).field_0x38;
      }
      iVar8 = *(int *)(puVar9 + (ulonglong)
                                (*(int *)&(this->NewTickableObjects).field_0x48 - 1U &
                                (uVar7 >> 0x10 ^ uVar7)) * 4);
      if (iVar8 != -1) {
        do {
          if (*(FTickableObjectBase **)
               (*(longlong *)&this->NewTickableObjects + (longlong)iVar8 * 0x18) ==
              (FTickableObjectBase *)local_res8.Value) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!NewTickableObjects.Contains(InTickable)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tickable.cpp"
                               ,0x32,L"");
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            break;
          }
          iVar8 = *(int *)(*(longlong *)&this->NewTickableObjects + 0x10 + (longlong)iVar8 * 0x18);
        } while (iVar8 != -1);
      }
    }
    FVar3 = local_res18[0];
    if (local_res18[0] == (FScriptContainerElement)0x3) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6156321622899818443>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tickable.cpp"
                         ,0x35,"NewTickType != ETickableTickType::NewObject");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      uVar7 = 0;
      if ((int)uVar10 < (this->TickableObjects).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->TickableObjects).AllocatorInstance.Data[(longlong)(int)uVar10 * 0x10 + 8] = FVar3;
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (this != (FTickableStatics *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  return;
}

// StartTicking @ 1488e1de0

void __thiscall FTickableObjectBase::FTickableStatics::StartTicking(FTickableStatics *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  TMap<FTickableObjectBase_*,ETickableTickType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTickableObjectBase_*,ETickableTickType,0>_>
  *this_00;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  longlong *plVar6;
  LPCRITICAL_SECTION lpCriticalSection_00;
  TMap<FTickableObjectBase_*,ETickableTickType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTickableObjectBase_*,ETickableTickType,0>_>
  *pTVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  longlong *local_e8;
  char cStack_e0;
  undefined7 uStack_df;
  LPCRITICAL_SECTION local_d8;
  TMap<FTickableObjectBase_*,ETickableTickType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTickableObjectBase_*,ETickableTickType,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMap<FTickableObjectBase_*,ETickableTickType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTickableObjectBase_*,ETickableTickType,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  if ((this->bIsTickingObjects != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsTickingObjects",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tickable.cpp"
                         ,0x45,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lpCriticalSection = &this->NewTickableObjectsCritical;
  local_d8 = (LPCRITICAL_SECTION)lpCriticalSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar1 = &(this->NewTickableObjects).field_0x10;
  iStack_c8 = 0;
  iVar10 = *(int *)&(this->NewTickableObjects).field_0x28;
  this_00 = &this->NewTickableObjects;
  local_b0 = 0;
  uStack_c4 = 1;
  iStack_b4 = 0;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(this->NewTickableObjects).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar12 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_1488e1eee;
      uVar14 = puVar17[lVar12 + 1];
    }
    uStack_c4 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_c4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iStack_b4 = local_res18 + -1 + local_b0;
    if (iVar10 < iStack_b4) {
      iStack_b4 = iVar10;
    }
  }
LAB_1488e1eee:
  uVar14 = *(uint *)&(this->NewTickableObjects).field_0x28;
  uStack_ac = local_54;
  iStack_a8 = *(int *)&(this->NewTickableObjects).field_0x8 -
              *(int *)&(this->NewTickableObjects).field_0x34;
  uVar18 = uVar14 & 0xffffffe0;
  uStack_b8 = 0xffffffff;
  TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
  TStack_98.CurrentBitIndex = iStack_b4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = local_b0;
  uStack_78 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = this_00;
  local_c0 = puVar1;
  local_a0 = this_00;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar10 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->NewTickableObjects).field_0x28;
  if (uVar14 != uVar4) {
    puVar16 = *(undefined1 **)&(this->NewTickableObjects).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar15;
      uVar18 = uVar18 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1488e2000;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    uVar14 = local_res20 + -1 + uVar18;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_1488e2000:
  do {
    pTVar7 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FTickableObjectBase_*,enum_ETickableTickType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_98.CurrentBitIndex == uVar14) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == this_00))
    {
      bVar8 = 1 < *(int *)&(this->NewTickableObjects).field_0x48;
      if (!bVar8) {
        TSet<TTuple<FTickableObjectBase_*,enum_ETickableTickType>,TDefaultMapHashableKeyFuncs<FTickableObjectBase_*,enum_ETickableTickType,0>,FDefaultSetAllocator>
        ::UnhashElements(this_00);
      }
      lpCriticalSection_00 = local_d8;
      puVar1 = &(this->NewTickableObjects).field_0xc;
      *(undefined4 *)&(this->NewTickableObjects).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->NewTickableObjects).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->NewTickableObjects).field_0x34 = 0;
      iVar10 = *(int *)&(this->NewTickableObjects).field_0x2c;
      *(undefined4 *)&(this->NewTickableObjects).field_0x28 = 0;
      if ((iVar10 < 0) || (0x80 < iVar10)) {
        *(undefined4 *)&(this->NewTickableObjects).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NewTickableObjects).field_0x10,0)
        ;
      }
      if (bVar8) {
        *(undefined4 *)&(this->NewTickableObjects).field_0x48 = 1;
        TSet<TTuple<FTickableObjectBase_*,enum_ETickableTickType>,TDefaultMapHashableKeyFuncs<FTickableObjectBase_*,enum_ETickableTickType,0>,FDefaultSetAllocator>
        ::Rehash(this_00);
      }
      this->bIsTickingObjects = true;
      if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection_00);
      }
      return;
    }
    lVar12 = *(longlong *)pTVar7;
    plVar6 = *(longlong **)(lVar12 + (longlong)TStack_98.CurrentBitIndex * 0x18);
    cVar9 = (char)*(undefined4 *)(lVar12 + (longlong)TStack_98.CurrentBitIndex * 0x18 + 8);
    pFVar11 = (this->TickableObjects).AllocatorInstance.Data;
    pFVar13 = pFVar11 + (longlong)(this->TickableObjects).ArrayNum * 0x10;
    for (; pFVar11 != pFVar13; pFVar11 = pFVar11 + 0x10) {
      if (*(longlong **)pFVar11 == plVar6) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!TickableObjects.Contains(NewTickableObject)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tickable.cpp"
                           ,0x4f,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        break;
      }
    }
    if (cVar9 == '\x03') {
      cVar9 = (**(code **)(*plVar6 + 8))(plVar6);
    }
    if (cVar9 != '\x02') {
      pFVar11 = (this->TickableObjects).AllocatorInstance.Data;
      local_e8 = plVar6;
      cStack_e0 = cVar9;
      if (((pFVar11 <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 <
           pFVar11 + (longlong)(this->TickableObjects).ArrayMax * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = (this->TickableObjects).ArrayNum;
      piVar2 = &(this->TickableObjects).ArrayMax;
      if (iVar10 == *piVar2) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this->TickableObjects).AllocatorInstance,piVar2);
      }
      (this->TickableObjects).ArrayNum = iVar10 + 1;
      pFVar11 = (this->TickableObjects).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
      *(longlong **)pFVar11 = local_e8;
      *(ulonglong *)(pFVar11 + 8) = CONCAT71(uStack_df,cStack_e0);
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  } while( true );
}

