// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// AddWaitingPackage @ 141edc500

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FEDLBootNotificationManager::AddWaitingPackage
          (FEDLBootNotificationManager *this,void *param_1,FName param_2,FName param_3,
          FPackageIndex param_4,bool param_5)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar5;
  FEDLBootObjectState *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FName local_a0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_98;
  TPairInitializer<FName_const_&,FEDLBootWaitingPackage_const_&> local_88;
  FString local_78;
  void *local_68;
  int local_60;
  FName *local_58;
  void **local_50;
  FString local_48;
  FString local_38;
  
  local_res18 = param_2;
  local_res20 = param_3;
  FLazyName::Resolve(&GLongCoreUObjectPackageName);
  if (local_res18 == (FName)local_88._4_8_) {
    return false;
  }
  lpCriticalSection = &this->EDLBootNotificationManagerLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((GIsInitialLoad == false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GIsInitialLoad",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x8e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((-1 < param_4.Index) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Import.IsImport()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x8f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  ::FName::ToString(&local_res20,&local_78);
  pTVar5 = &::FName::ToString(&local_res18,&local_48)->Data;
  iVar8 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  if ((pTVar5->ArrayNum != 0) || (iVar4 = 2, iVar8 == -1)) {
    iVar4 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_98,pTVar5,iVar8 + iVar4);
  ::FString::PathAppend((FString *)&local_98,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar8);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_98.ArrayNum != 0) {
    FVar7.Data = local_98.AllocatorInstance.Data;
  }
  ::FName::FName(&local_a8,(wchar_t *)FVar7.Data);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((local_a8 == (FName)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LongFName != NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x92,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_a0 = local_a8;
  pFVar6 = TMapBase<FName,FEDLBootObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>_>
           ::Find((TMapBase<FName,FEDLBootObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>_>
                   *)this,local_a8);
  if (pFVar6 == (FEDLBootObjectState *)0x0) {
    pFVar6 = TMapBase<FName,FEDLBootObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>_>
             ::Find((TMapBase<FName,FEDLBootObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>_>
                     *)this,local_res18);
    local_a0 = local_res18;
    if (pFVar6 != (FEDLBootObjectState *)0x0) goto LAB_141edc71d;
    if (!param_5) {
      ::FName::ToString(&local_a8,&local_38);
      UE::Logging::Private::BasicFatalLog
                (&`public:_bool___cdecl_FEDLBootNotificationManager::AddWaitingPackage(void*___ptr64,FName,FName,FPackageIndex,bool)___ptr64'
                  ::__l34::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        bVar2 = false;
        goto LAB_141edc754;
      }
    }
  }
  else {
LAB_141edc71d:
    if (pFVar6->LastNotifyRegistrationPhase != NRP_Finished) {
      local_58 = &local_a0;
      local_50 = &local_68;
      local_60 = param_4.Index;
      local_68 = param_1;
      TSet<TTuple<FName,FEDLBootWaitingPackage>,TDefaultMapHashableKeyFuncs<FName,FEDLBootWaitingPackage,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FEDLBootWaitingPackage_const_&>_>
                ((TSet<TTuple<FName,FEDLBootWaitingPackage>,TDefaultMapHashableKeyFuncs<FName,FEDLBootWaitingPackage,1>,FDefaultSetAllocator>
                  *)&this->PathToWaitingPackageNodes,&local_88,(bool *)&local_58);
      bVar2 = true;
      goto LAB_141edc754;
    }
  }
  bVar2 = false;
LAB_141edc754:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// ConstructWaitingBootObjects @ 141ee3470

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FEDLBootNotificationManager::ConstructWaitingBootObjects(FEDLBootNotificationManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName *_Dst;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FName FVar7;
  TMultiMap<FName,FEDLBootWaitingPackage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEDLBootWaitingPackage,1>_>
  *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  UObjectBase *pUVar15;
  UClass *pUVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  int *piVar19;
  UClass *pUVar20;
  char *pcVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  FScriptContainerElement *pFVar24;
  int iVar25;
  int iVar26;
  code *pcVar27;
  uint uVar28;
  uint *puVar30;
  int iVar31;
  uint uVar32;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  UClass *local_118;
  UClass *local_110;
  FName local_108;
  code *local_100;
  int local_f8;
  int local_f4;
  TMultiMap<FName,FEDLBootWaitingPackage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEDLBootWaitingPackage,1>_>
  *local_f0;
  uint uStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  uint local_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  TMultiMap<FName,FEDLBootWaitingPackage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEDLBootWaitingPackage,1>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FString local_90;
  FString local_80 [2];
  undefined4 local_54;
  int *piVar29;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_bool___cdecl_FEDLBootNotificationManager::ConstructWaitingBootObjects(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_bool___cdecl_FEDLBootNotificationManager::ConstructWaitingBootObjects(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_bool___cdecl_FEDLBootNotificationManager::ConstructWaitingBootObjects(void)___ptr64'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    `FEDLBootNotificationManager::ConstructWaitingBootObjects'::__l2::FFixedBootOrder::
    FFixedBootOrder(&`public:_bool___cdecl_FEDLBootNotificationManager::ConstructWaitingBootObjects(void)___ptr64'
                     ::__l2::FixedBootOrder);
    atexit(`FEDLBootNotificationManager::ConstructWaitingBootObjects'::__l2::
           _dynamic_atexit_destructor_for__FixedBootOrder__);
    _Init_thread_footer(&`public:_bool___cdecl_FEDLBootNotificationManager::ConstructWaitingBootObjects(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((GIsInitialLoad == false) || (bVar9 = IsInGameThread(), !bVar9)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("GIsInitialLoad && IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x139,L""), bVar9)) {
    pcVar27 = (code *)swi(3);
    uVar10 = (*pcVar27)();
    return (bool)uVar10;
  }
  lpCriticalSection = &this->EDLBootNotificationManagerLock;
  piVar29 = (int *)0x0;
  uVar28 = 0;
  local_100 = (code *)0x0;
  if (DAT_155016a90 == 0) {
    local_100 = (code *)0x0;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
  }
  else {
    bVar9 = false;
    do {
      if ((bVar9 || DAT_155016a90 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar27 = (code *)swi(3);
        uVar10 = (*pcVar27)();
        return (bool)uVar10;
      }
      _Dst = (FName *)(_FixedBootOrder + (longlong)(DAT_155016a90 + -1) * 8);
      local_108 = *_Dst;
      iVar12 = (DAT_155016a90 - (DAT_155016a90 + -1)) + -1;
      if (iVar12 != 0) {
        memmove(_Dst,_Dst + 1,(longlong)iVar12 << 3);
      }
      DAT_155016a90 = DAT_155016a90 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,(ForAnyElementType *)
                     &`public:_bool___cdecl_FEDLBootNotificationManager::ConstructWaitingBootObjects(void)___ptr64'
                      ::__l2::FixedBootOrder,DAT_155016a90,(int *)&DAT_155016a94);
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      FVar7 = local_108;
      uVar13 = ::GetTypeHash(local_108.ComparisonIndex.Value);
      if (*(int *)&(this->PathToState).field_0x8 != *(int *)&(this->PathToState).field_0x34) {
        puVar4 = *(undefined1 **)&(this->PathToState).field_0x40;
        puVar22 = &(this->PathToState).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar22 = puVar4;
        }
        iVar12 = *(int *)(puVar22 +
                         (ulonglong)
                         (*(int *)&(this->PathToState).field_0x48 - 1U & FVar7.Number + uVar13) * 4)
        ;
        if (iVar12 != -1) {
          do {
            lVar18 = *(longlong *)&this->PathToState + (longlong)iVar12 * 0x28;
            if (*(FName *)(*(longlong *)&this->PathToState + (longlong)iVar12 * 0x28) == FVar7) {
              piVar19 = (int *)(lVar18 + 8);
              if (lVar18 == 0) {
                piVar19 = piVar29;
              }
              if (piVar19 != (int *)0x0) {
                pcVar27 = *(code **)(piVar19 + 2);
                if (pcVar27 != (code *)0x0) {
                  piVar19[2] = 0;
                  piVar19[3] = 0;
                  goto LAB_141ee396e;
                }
                if ((byte)LogStreaming._0_1_ < 5) goto LAB_141ee36e8;
                ::FName::ToString(&local_108,&local_90);
                UE::Logging::Private::BasicLog<5>
                          (&`public:_bool___cdecl_FEDLBootNotificationManager::ConstructWaitingBootObjects(void)___ptr64'
                            ::__l37::LOG_Static,(FLogCategoryBase *)&LogStreaming);
                FVar17.Data = local_90.Data.AllocatorInstance.Data;
                goto LAB_141ee36de;
              }
              break;
            }
            iVar12 = *(int *)(lVar18 + 0x20);
          } while (iVar12 != -1);
        }
      }
      ::FName::ToString(&local_108,local_80);
      UE::Logging::Private::BasicFatalLog
                (&`public:_bool___cdecl_FEDLBootNotificationManager::ConstructWaitingBootObjects(void)___ptr64'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      FVar17.Data = local_80[0].Data.AllocatorInstance.Data;
LAB_141ee36de:
      if (FVar17.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar17.Data);
      }
LAB_141ee36e8:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      bVar9 = DAT_155016a90 == 0;
    } while (!bVar9);
  }
  bVar9 = false;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->EDLBootNotificationManagerLock);
  iVar12 = *(int *)&(this->PathToWaitingPackageNodes).field_0x28;
  puVar4 = &(this->PathToWaitingPackageNodes).field_0x10;
  local_f0 = &this->PathToWaitingPackageNodes;
  uStack_e4 = 1;
  local_d0 = 0;
  iStack_d4 = 0;
  if (iVar12 != 0) {
    puVar30 = *(uint **)&(this->PathToWaitingPackageNodes).field_0x20;
    if (puVar30 == (uint *)0x0) {
      puVar30 = (uint *)puVar4;
    }
    uVar13 = *puVar30;
    piVar19 = piVar29;
    local_d0 = 0;
    uVar28 = 0;
    while (uVar13 == 0) {
      iVar25 = (int)piVar29;
      local_d0 = (int)piVar19 + 0x20;
      piVar19 = (int *)(ulonglong)local_d0;
      uVar28 = iVar25 + 1;
      piVar29 = (int *)(ulonglong)uVar28;
      iStack_d4 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar28) goto LAB_141ee379f;
      uVar13 = puVar30[(longlong)iVar25 + 1];
    }
    uStack_e4 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_e4 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_f8 = (int)lVar18;
    iStack_d4 = (local_d0 - 1) + local_f8;
    if (iVar12 < iStack_d4) {
      iStack_d4 = iVar12;
    }
  }
LAB_141ee379f:
  uVar13 = *(uint *)&(this->PathToWaitingPackageNodes).field_0x28;
  uStack_cc = local_54;
  iStack_c8 = *(int *)&(this->PathToWaitingPackageNodes).field_0x8 -
              *(int *)&(this->PathToWaitingPackageNodes).field_0x34;
  uVar32 = uVar13 & 0xffffffe0;
  uStack_d8 = 0xffffffff;
  TStack_b8._padding_ = CONCAT44(uStack_e4,uVar28);
  TStack_b8.CurrentBitIndex = iStack_d4;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar25 = (int)uVar13 >> 5;
  TStack_b8._28_4_ = local_54;
  TStack_b8.BaseBitIndex = local_d0;
  uStack_98 = CONCAT44(uStack_c4,iStack_c8);
  uStack_e8 = uVar28;
  local_e0 = puVar4;
  local_c0 = local_f0;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar13 < 0) || (iVar12 < (int)uVar13)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar27 = (code *)swi(3);
    uVar10 = (*pcVar27)();
    return (bool)uVar10;
  }
  uVar28 = *(uint *)&(this->PathToWaitingPackageNodes).field_0x28;
  if (uVar13 != uVar28) {
    puVar22 = *(undefined1 **)&(this->PathToWaitingPackageNodes).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar4;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar25 * 4);
    while (uVar13 == 0) {
      lVar18 = (longlong)iVar25;
      uVar32 = uVar32 + 0x20;
      iVar25 = iVar25 + 1;
      uVar13 = uVar28;
      if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_141ee38a0;
      uVar13 = *(uint *)(puVar22 + lVar18 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_f4 = (int)lVar18;
    uVar13 = (uVar32 - 1) + local_f4;
    if ((int)uVar28 < (int)uVar13) {
      uVar13 = uVar28;
    }
  }
LAB_141ee38a0:
  do {
    pTVar8 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FEDLBootWaitingPackage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    pcVar27 = local_100;
    if (((TStack_b8.CurrentBitIndex == uVar13) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) &&
       (pTVar8 == &this->PathToWaitingPackageNodes)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->EDLBootNotificationManagerLock);
      if (pcVar27 == (code *)0x0) {
        iVar12 = (this->CDORecursives).ArrayNum;
        if (iVar12 == 0) {
          return false;
        }
        pFVar24 = (this->CDORecursives).AllocatorInstance.Data;
        local_118 = (UClass *)0x0;
        pFVar6 = pFVar24 + (longlong)iVar12 * 8;
LAB_141ee3a06:
        if ((this->CDORecursives).ArrayNum != iVar12) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        pUVar16 = local_118;
        if ((pFVar24 != pFVar6) && (pUVar16 = *(UClass **)pFVar24, pUVar16 != (UClass *)0x0)) {
          pFVar5 = (this->CDORecursiveStack).AllocatorInstance.Data;
          pUVar20 = pUVar16;
          do {
            for (pFVar14 = pFVar5;
                pFVar14 != pFVar5 + (longlong)(this->CDORecursiveStack).ArrayNum * 8;
                pFVar14 = pFVar14 + 8) {
              if (*(UClass **)pFVar14 == pUVar20) {
                pFVar24 = pFVar24 + 8;
                goto LAB_141ee3a06;
              }
            }
            pUVar20 = (UClass *)pUVar20->_padding_;
          } while (pUVar20 != (UClass *)0x0);
        }
        local_118 = pUVar16;
        if (local_118 == (UClass *)0x0) {
          FWindowsPlatformProcess::Sleep(__real_3a83126f);
          return true;
        }
        pFVar6 = (this->CDORecursives).AllocatorInstance.Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_118) &&
            ((FScriptContainerElement *)&local_118 <
             pFVar6 + (longlong)(this->CDORecursives).ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar27 = (code *)swi(3);
          uVar10 = (*pcVar27)();
          return (bool)uVar10;
        }
        iVar12 = (this->CDORecursives).ArrayNum;
        if (iVar12 != 0) {
          pFVar6 = (this->CDORecursives).AllocatorInstance.Data;
          iVar31 = 0;
          lVar18 = 0;
          bVar9 = *(UClass **)pFVar6 != local_118;
          iVar25 = 0;
          do {
            iVar26 = iVar25;
            do {
              lVar18 = lVar18 + 1;
              iVar26 = iVar26 + 1;
              if (iVar12 <= lVar18) break;
            } while (bVar9 == (*(UClass **)(pFVar6 + lVar18 * 8) != local_118));
            if (bVar9 != false) {
              if (iVar31 != iVar25) {
                memmove(pFVar6 + (longlong)iVar31 * 8,pFVar6 + (longlong)iVar25 * 8,
                        (longlong)(iVar26 - iVar25) << 3);
              }
              iVar31 = iVar31 + (iVar26 - iVar25);
            }
            bVar9 = (bool)(bVar9 ^ 1);
            iVar25 = iVar26;
          } while (lVar18 < iVar12);
          (this->CDORecursives).ArrayNum = iVar31;
        }
        pTVar1 = &this->CDORecursiveStack;
        pFVar6 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_118) &&
            ((FScriptContainerElement *)&local_118 <
             pFVar6 + (longlong)(this->CDORecursiveStack).ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar27 = (code *)swi(3);
          uVar10 = (*pcVar27)();
          return (bool)uVar10;
        }
        iVar12 = (this->CDORecursiveStack).ArrayNum;
        piVar29 = &(this->CDORecursiveStack).ArrayNum;
        piVar19 = &(this->CDORecursiveStack).ArrayMax;
        if (iVar12 == *piVar19) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,piVar19);
        }
        *piVar29 = iVar12 + 1;
        *(UClass **)((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_118;
        if ((local_118->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(local_118);
        }
        if ((*piVar29 < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar27 = (code *)swi(3);
          uVar10 = (*pcVar27)();
          return (bool)uVar10;
        }
        pUVar16 = *(UClass **)((pTVar1->AllocatorInstance).Data + (longlong)*piVar29 * 8 + -8);
        iVar12 = *piVar29 + -1;
        *piVar29 = iVar12;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar1->AllocatorInstance,iVar12,piVar19);
        if (pUVar16 == local_118) {
          return true;
        }
        iVar12 = 0x1aa;
        pcVar21 = "CDORecursiveStack.Pop() == OkToRun";
      }
      else {
LAB_141ee3d1e:
        pUVar15 = (UObjectBase *)(*pcVar27)();
        if ((pUVar15 == (UObjectBase *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("BootObject",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                ,0x16d,L""), bVar11)) {
          pcVar27 = (code *)swi(3);
          uVar10 = (*pcVar27)();
          return (bool)uVar10;
        }
        UObjectForceRegistration(pUVar15,true);
        if (!bVar9) {
          return true;
        }
        local_110 = CastChecked<UClass,UObject>((UObject *)pUVar15);
        pTVar1 = &this->CDORecursiveStack;
        if (local_110 != (UClass *)0x0) {
          pFVar6 = (pTVar1->AllocatorInstance).Data;
          pUVar16 = local_110;
          do {
            for (pFVar24 = pFVar6;
                pFVar24 != pFVar6 + (longlong)(this->CDORecursiveStack).ArrayNum * 8;
                pFVar24 = pFVar24 + 8) {
              if (*(UClass **)pFVar24 == pUVar16) {
                pTVar1 = &this->CDORecursives;
                pFVar6 = (pTVar1->AllocatorInstance).Data;
                if (((pFVar6 <= (FScriptContainerElement *)&local_110) &&
                    ((FScriptContainerElement *)&local_110 <
                     pFVar6 + (longlong)(this->CDORecursives).ArrayMax * 8)) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar9)) {
                  pcVar27 = (code *)swi(3);
                  uVar10 = (*pcVar27)();
                  return (bool)uVar10;
                }
                iVar12 = (this->CDORecursives).ArrayNum;
                piVar29 = &(this->CDORecursives).ArrayMax;
                if (iVar12 == *piVar29) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&pTVar1->AllocatorInstance,piVar29);
                }
                (this->CDORecursives).ArrayNum = iVar12 + 1;
                *(UClass **)((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_110;
                return true;
              }
            }
            pUVar16 = (UClass *)pUVar16->_padding_;
          } while (pUVar16 != (UClass *)0x0);
        }
        pFVar6 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_110) &&
            ((FScriptContainerElement *)&local_110 <
             pFVar6 + (longlong)(this->CDORecursiveStack).ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar27 = (code *)swi(3);
          uVar10 = (*pcVar27)();
          return (bool)uVar10;
        }
        iVar12 = (this->CDORecursiveStack).ArrayNum;
        piVar29 = &(this->CDORecursiveStack).ArrayMax;
        if (iVar12 == *piVar29) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,piVar29);
          (this->CDORecursiveStack).ArrayNum = iVar12;
        }
        (this->CDORecursiveStack).ArrayNum = iVar12 + 1;
        *(UClass **)((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_110;
        if ((local_110->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(local_110);
        }
        pUVar16 = TArray<UClass_*,TSizedDefaultAllocator<32>_>::Pop(pTVar1,Default);
        if (pUVar16 == local_110) {
          return true;
        }
        iVar12 = 0x184;
        pcVar21 = "CDORecursiveStack.Pop() == Class";
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar21,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,iVar12,L"");
      if (!bVar9) {
        return true;
      }
      pcVar27 = (code *)swi(3);
      uVar10 = (*pcVar27)();
      return (bool)uVar10;
    }
    lVar18 = *(longlong *)((longlong)TStack_b8.CurrentBitIndex * 0x20 + *(longlong *)pTVar8);
    uVar28 = ::GetTypeHash((FNameEntryId)(uint)lVar18);
    if (*(int *)&(this->PathToState).field_0x8 != *(int *)&(this->PathToState).field_0x34) {
      puVar22 = *(undefined1 **)&(this->PathToState).field_0x40;
      puVar23 = &(this->PathToState).field_0x38;
      if (puVar22 != (undefined1 *)0x0) {
        puVar23 = puVar22;
      }
      iVar12 = *(int *)(puVar23 +
                       (ulonglong)
                       (*(int *)&(this->PathToState).field_0x48 - 1U &
                       (int)((ulonglong)lVar18 >> 0x20) + uVar28) * 4);
      if (iVar12 != -1) {
        do {
          lVar2 = *(longlong *)&this->PathToState + (longlong)iVar12 * 0x28;
          if (*(longlong *)(*(longlong *)&this->PathToState + (longlong)iVar12 * 0x28) == lVar18) {
            piVar19 = (int *)(lVar2 + 8);
            if (lVar2 == 0) {
              piVar19 = (int *)0x0;
            }
            if ((piVar19 != (int *)0x0) &&
               (pcVar27 = *(code **)(piVar19 + 2), pcVar27 != (code *)0x0)) {
              piVar19[2] = 0;
              piVar19[3] = 0;
LAB_141ee396e:
              bVar9 = *piVar19 == 1;
              LeaveCriticalSection((LPCRITICAL_SECTION)&this->EDLBootNotificationManagerLock);
              goto LAB_141ee3d1e;
            }
            break;
          }
          iVar12 = *(int *)(lVar2 + 0x20);
        } while (iVar12 != -1);
      }
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  } while( true );
}

// FireCompletedCompiledInImports @ 141ef47e0

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

bool __thiscall
FEDLBootNotificationManager::FireCompletedCompiledInImports
          (FEDLBootNotificationManager *this,FAsyncLoadingThread *param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FName FVar4;
  longlong lVar5;
  code *pcVar6;
  FName *pFVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  TSet<TTuple<FName,FEDLBootWaitingPackage>,TDefaultMapHashableKeyFuncs<FName,FEDLBootWaitingPackage,1>,FDefaultSetAllocator>
  *pTVar8;
  FName FVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  FName *pFVar14;
  FName local_res20;
  FName local_98;
  FName *local_90;
  LPCRITICAL_SECTION local_88;
  FEventLoadNodePtr local_80 [2];
  TBaseKeyIterator<0> local_58;
  
  local_88 = (LPCRITICAL_SECTION)&this->EDLBootNotificationManagerLock;
  if (local_88 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_88);
  if (((!param_2) && (GIsInitialLoad == false)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("bFinalRun || GIsInitialLoad",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0x1d3,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  iVar2 = (this->PathsToFire).ArrayNum;
  pFVar14 = (FName *)(this->PathsToFire).AllocatorInstance.Data;
  local_90 = pFVar14 + iVar2;
  do {
    pFVar7 = local_90;
    if ((this->PathsToFire).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res20)
      ;
    }
    lpCriticalSection = local_88;
    if (pFVar14 == pFVar7) {
      piVar1 = &(this->PathsToFire).ArrayMax;
      (this->PathsToFire).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->PathsToFire).AllocatorInstance,0,piVar1);
      }
      LeaveCriticalSection(lpCriticalSection);
      return iVar2 != 0;
    }
    FVar4 = *pFVar14;
    local_res20 = FVar4;
    TSet<TTuple<FName,FEDLBootWaitingPackage>,TDefaultMapHashableKeyFuncs<FName,FEDLBootWaitingPackage,1>,FDefaultSetAllocator>
    ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
              (&local_58,
               (TSet<TTuple<FName,FEDLBootWaitingPackage>,TDefaultMapHashableKeyFuncs<FName,FEDLBootWaitingPackage,1>,FDefaultSetAllocator>
                *)&this->PathToWaitingPackageNodes,FVar4);
    FVar9 = local_58.Key;
    pTVar8 = local_58.Set;
    iVar13 = local_58.Index;
    iVar3 = local_58.NextIndex;
joined_r0x000141ef48df:
    if (iVar13 != -1) {
      lVar5 = *(longlong *)&pTVar8->Elements;
      local_80[0].Phase = ImportOrExport_Create;
      local_80[0].WaitingPackage.Package = *(FAsyncPackage **)((longlong)iVar13 * 0x20 + 8 + lVar5);
      local_80[0].ImportOrExportIndex.Index = *(int *)((longlong)iVar13 * 0x20 + 0x10 + lVar5);
      FAsyncPackage::FireNode(local_80[0].WaitingPackage.Package,local_80);
      if (iVar3 == -1) goto LAB_141ef4961;
      lVar5 = *(longlong *)&pTVar8->Elements;
      iVar13 = iVar3;
      do {
        iVar3 = *(int *)((longlong)iVar13 * 0x20 + 0x18 + lVar5);
        if (*(FName *)((longlong)iVar13 * 0x20 + lVar5) == FVar9) break;
        iVar13 = iVar3;
      } while (iVar3 != -1);
      goto joined_r0x000141ef48df;
    }
LAB_141ef4961:
    local_98 = FVar4;
    if (*(int *)&(this->PathToWaitingPackageNodes).field_0x8 !=
        *(int *)&(this->PathToWaitingPackageNodes).field_0x34) {
      uVar12 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      TSet<TTuple<FName,FEDLBootWaitingPackage>,TDefaultMapHashableKeyFuncs<FName,FEDLBootWaitingPackage,1>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FEDLBootWaitingPackage>,TDefaultMapHashableKeyFuncs<FName,FEDLBootWaitingPackage,1>,FDefaultSetAllocator>
                           *)&this->PathToWaitingPackageNodes,local_res20.Number + uVar12,&local_98)
      ;
    }
    pFVar14 = pFVar14 + 1;
  } while( true );
}

// NotifyRegistrationComplete @ 141f002f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FEDLBootNotificationManager::NotifyRegistrationComplete
          (FEDLBootNotificationManager *this,FAsyncLoadingThread *param_1)

{
  undefined1 *this_00;
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FName *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  FEDLBootNotificationManager *pFVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  FName *pFVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  FName local_e8;
  FEDLBootNotificationManager *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  FEDLBootNotificationManager *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FString local_80;
  FString local_70 [2];
  undefined4 local_44;
  
  if (this->bEnabled != false) {
    FireCompletedCompiledInImports(this,param_1,true);
    FlushAsyncLoading(-1);
    if (((GIsInitialLoad != false) || (bVar8 = IsInGameThread(), !bVar8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GIsInitialLoad && IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x104,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lpCriticalSection = &this->EDLBootNotificationManagerLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar4 = *(int *)&(this->PathToState).field_0x28;
    this_00 = &(this->PathToState).field_0x10;
    iStack_d8 = 0;
    local_c0 = 0;
    uStack_d4 = 1;
    iStack_c4 = 0;
    if (iVar4 != 0) {
      puVar13 = *(uint **)&(this->PathToState).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)this_00;
      }
      uVar14 = *puVar13;
      while (uVar14 == 0) {
        lVar9 = (longlong)iStack_d8;
        local_c0 = local_c0 + 0x20;
        iStack_d8 = iStack_d8 + 1;
        iStack_c4 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_141f0041f;
        uVar14 = puVar13[lVar9 + 1];
      }
      uStack_d4 = -uVar14 & uVar14;
      uVar3 = (ulonglong)uStack_d4 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res20 = (int)lVar9;
      iStack_c4 = local_c0 + -1 + local_res20;
      if (iVar4 < iStack_c4) {
        iStack_c4 = iVar4;
      }
    }
LAB_141f0041f:
    uVar14 = *(uint *)&(this->PathToState).field_0x28;
    uStack_bc = local_44;
    uVar15 = uVar14 & 0xffffffe0;
    iStack_b8 = *(int *)&(this->PathToState).field_0x8 - *(int *)&(this->PathToState).field_0x34;
    uStack_c8 = 0xffffffff;
    TStack_a8._padding_ = CONCAT44(uStack_d4,iStack_d8);
    TStack_a8.CurrentBitIndex = iStack_c4;
    TStack_a8.UnvisitedBitMask = 0xffffffff;
    iVar10 = (int)uVar14 >> 5;
    TStack_a8._28_4_ = local_44;
    TStack_a8.BaseBitIndex = local_c0;
    uStack_88 = CONCAT44(uStack_b4,iStack_b8);
    local_e0 = this;
    local_d0 = this_00;
    local_b0 = this;
    TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
    if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar5 = *(uint *)&(this->PathToState).field_0x28;
    if (uVar14 != uVar5) {
      puVar12 = *(undefined1 **)&(this->PathToState).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = this_00;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
      while (uVar14 == 0) {
        lVar9 = (longlong)iVar10;
        uVar15 = uVar15 + 0x20;
        iVar10 = iVar10 + 1;
        uVar14 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_141f00530;
        uVar14 = *(uint *)(puVar12 + lVar9 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar14 = (int)lVar9 + -1 + uVar15;
      if ((int)uVar5 < (int)uVar14) {
        uVar14 = uVar5;
      }
    }
LAB_141f00530:
    while( true ) {
      pFVar7 = local_b0;
      if (*(int *)&(local_b0->PathToState).field_0x8 - *(int *)&(local_b0->PathToState).field_0x34
          != (int)uStack_88) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FEDLBootObjectState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_a8.CurrentBitIndex == uVar14) &&
          (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)this_00)) && (pFVar7 == this))
      break;
      lVar9 = *(longlong *)&pFVar7->PathToState;
      pFVar2 = (FName *)(lVar9 + (longlong)TStack_a8.CurrentBitIndex * 0x28);
      if (((*(int *)(lVar9 + 0xc + (longlong)TStack_a8.CurrentBitIndex * 0x28) != 2) &&
          ((char)pFVar2[3].ComparisonIndex.Value == '\0')) && (GEventDrivenLoaderEnabled != false))
      {
        ::FName::ToString(pFVar2,&local_80);
        UE::Logging::Private::BasicFatalLog
                  (&`public:_void___cdecl_FEDLBootNotificationManager::NotifyRegistrationComplete(FAsyncLoadingThread&___ptr64)___ptr64'
                    ::__l20::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
      }
      TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
    }
    if (*(int *)&(this->PathToWaitingPackageNodes).field_0x8 !=
        *(int *)&(this->PathToWaitingPackageNodes).field_0x34) {
      UE::Logging::Private::BasicFatalLog
                (&`public:_void___cdecl_FEDLBootNotificationManager::NotifyRegistrationComplete(FAsyncLoadingThread&___ptr64)___ptr64'
                  ::__l45::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    if (GEventDrivenLoaderEnabled != false) {
      iVar4 = (this->PathsToFire).ArrayNum;
      if (iVar4 != 0) {
        pFVar11 = (FName *)(this->PathsToFire).AllocatorInstance.Data;
        pFVar2 = pFVar11 + iVar4;
        while( true ) {
          if ((this->PathsToFire).ArrayNum != iVar4) {
            `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (pFVar11 == pFVar2) break;
          local_e8 = *pFVar11;
          if (1 < (byte)LogStreaming._0_1_) {
            ::FName::ToString(&local_e8,local_70);
            UE::Logging::Private::BasicLog<2>
                      (&`public:_void___cdecl_FEDLBootNotificationManager::NotifyRegistrationComplete(FAsyncLoadingThread&___ptr64)___ptr64'
                        ::__l70::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
            }
          }
          pFVar11 = pFVar11 + 1;
        }
        UE::Logging::Private::BasicFatalLog
                  (&`public:_void___cdecl_FEDLBootNotificationManager::NotifyRegistrationComplete(FAsyncLoadingThread&___ptr64)___ptr64'
                    ::__l88::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      }
    }
    bVar8 = 1 < *(int *)&(this->PathToState).field_0x48;
    if (!bVar8) {
      TSet<TTuple<FName,FEDLBootObjectState>,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,FEDLBootObjectState>,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>,FDefaultSetAllocator>
                        *)this);
    }
    puVar12 = &(this->PathToState).field_0xc;
    *(undefined4 *)&(this->PathToState).field_0x8 = 0;
    if (*(int *)puVar12 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)this,0,(int *)puVar12);
    }
    *(undefined4 *)&(this->PathToState).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->PathToState).field_0x34 = 0;
    iVar4 = *(int *)&(this->PathToState).field_0x2c;
    *(undefined4 *)&(this->PathToState).field_0x28 = 0;
    if ((iVar4 < 0) || (0x80 < iVar4)) {
      *(undefined4 *)&(this->PathToState).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,0);
    }
    if (bVar8) {
      *(undefined4 *)&(this->PathToState).field_0x48 = 1;
      TSet<TTuple<FName,FEDLBootObjectState>,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,FEDLBootObjectState>,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>,FDefaultSetAllocator>
                *)this);
    }
    piVar1 = &(this->PathsToFire).ArrayMax;
    (this->PathsToFire).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->PathsToFire).AllocatorInstance,0,piVar1);
    }
    this->bEnabled = false;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// NotifyRegistrationEvent @ 141f007f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FEDLBootNotificationManager::NotifyRegistrationEvent
          (FEDLBootNotificationManager *this,FName param_1,FName param_2,
          ENotifyRegistrationType param_3,ENotifyRegistrationPhase param_4,
          _func___cdecl_UObject_ptr *param_5,bool param_6)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  FEDLBootObjectState *pFVar7;
  FEDLBootObjectState *pFVar8;
  FString *pFVar9;
  longlong lVar10;
  FName local_res10;
  FName local_res18 [2];
  undefined1 auStack_328 [32];
  FName *local_308;
  FName *local_300;
  longlong local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  undefined1 local_2d8 [24];
  bool local_2c0;
  undefined1 local_2b8 [8];
  FEDLBootObjectState *local_2b0;
  undefined1 *local_2a8;
  FName *local_2a0;
  undefined1 *local_298;
  FName local_290;
  FString local_288;
  FString local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_328;
  if ((this->bEnabled != false) && (GIsInitialLoad)) {
    local_res10 = param_1;
    local_res18[0] = param_2;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FEDLBootNotificationManager::NotifyRegistrationEvent(FName,FName,ENotifyRegistrationType,ENotifyRegistrationPhase,class_UObject*___ptr64_(__cdecl*)(void),bool)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FEDLBootNotificationManager::NotifyRegistrationEvent(FName,FName,ENotifyRegistrationType,ENotifyRegistrationPhase,class_UObject*___ptr64_(__cdecl*)(void),bool)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FEDLBootNotificationManager::NotifyRegistrationEvent(FName,FName,ENotifyRegistrationType,ENotifyRegistrationPhase,class_UObject*___ptr64_(__cdecl*)(void),bool)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_void___cdecl_FEDLBootNotificationManager::NotifyRegistrationEvent(FName,FName,ENotifyRegistrationType,ENotifyRegistrationPhase,class_UObject*___ptr64_(__cdecl*)(void),bool)___ptr64'
                      ::__l2::LongCoreUObjectPackageName,L"/Script/CoreUObject");
      _Init_thread_footer(&`public:_void___cdecl_FEDLBootNotificationManager::NotifyRegistrationEvent(FName,FName,ENotifyRegistrationType,ENotifyRegistrationPhase,class_UObject*___ptr64_(__cdecl*)(void),bool)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if ((local_res10 !=
         `public:_void___cdecl_FEDLBootNotificationManager::NotifyRegistrationEvent(FName,FName,ENotifyRegistrationType,ENotifyRegistrationPhase,class_UObject*___ptr64_(__cdecl*)(void),bool)___ptr64'
         ::__l2::LongCoreUObjectPackageName) && (param_3 != NRT_NoExportObject)) {
      local_268.Base = local_248;
      local_268.CurPos = local_248;
      local_268.bIsDynamic = false;
      local_268.bIsExternal = false;
      local_268.End = (wchar_t *)local_48;
      ::FName::AppendString(&local_res10,&local_268);
      if (((int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1) != 0) &&
         ((local_268.CurPos[-1] != L'/' && (local_268.CurPos[-1] != L'\\')))) {
        if (local_268.End < local_268.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,1);
        }
        *local_268.CurPos = L'/';
        local_268.CurPos = local_268.CurPos + 1;
      }
      ::FName::AppendString(local_res18,&local_268);
      pFVar6 = ::FName::FName(&local_290,
                              (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1),
                              local_268.Base,FNAME_Add);
      lpCriticalSection = &this->EDLBootNotificationManagerLock;
      local_2d8._0_8_ = *pFVar6;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar7 = TMapBase<FName,FEDLBootObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>_>
               ::Find((TMapBase<FName,FEDLBootObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>_>
                       *)this,local_res10);
      pFVar8 = TMapBase<FName,FEDLBootObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>_>
               ::Find((TMapBase<FName,FEDLBootObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>_>
                       *)this,(FName)local_2d8._0_8_);
      if (pFVar8 == (FEDLBootObjectState *)0x0) {
        local_2b0 = (FEDLBootObjectState *)local_2d8;
        local_2d8._12_4_ = param_4;
        local_2d8._16_8_ = param_5;
        local_2a8 = local_2d8 + 8;
        local_2c0 = param_6;
        local_2d8._8_4_ = param_3;
        TSet<TTuple<FName,FEDLBootObjectState>,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FEDLBootObjectState_const_&>_>
                  ((TSet<TTuple<FName,FEDLBootObjectState>,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>,FDefaultSetAllocator>
                    *)this,(TPairInitializer<FName_const_&,FEDLBootObjectState_const_&> *)local_2b8,
                   (bool *)&local_2b0);
        if (pFVar7 == (FEDLBootObjectState *)0x0) {
          local_2a0 = &local_res10;
          local_2d8._8_4_ = NRT_Package;
          local_298 = local_2d8 + 8;
          TSet<TTuple<FName,FEDLBootObjectState>,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FEDLBootObjectState_const_&>_>
                    ((TSet<TTuple<FName,FEDLBootObjectState>,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>,FDefaultSetAllocator>
                      *)this,(TPairInitializer<FName_const_&,FEDLBootObjectState_const_&> *)
                             (local_2b8 + 4),(bool *)&local_2a0);
        }
      }
      else {
        if (((int)param_4 <= (int)pFVar8->LastNotifyRegistrationPhase) &&
           (GEventDrivenLoaderEnabled != false)) {
          pFVar9 = ::FName::ToString((FName *)local_2d8,&local_288);
          if ((pFVar9->Data).ArrayNum == 0) {
            local_308 = (FName *)0x15060d16c;
          }
          else {
            local_308 = (FName *)(pFVar9->Data).AllocatorInstance.Data;
          }
          UE::Logging::Private::BasicFatalLog
                    (&`public:_void___cdecl_FEDLBootNotificationManager::NotifyRegistrationEvent(FName,FName,ENotifyRegistrationType,ENotifyRegistrationPhase,class_UObject*___ptr64_(__cdecl*)(void),bool)___ptr64'
                      ::__l23::LOG_Static,(FLogCategoryBase *)&LogStreaming);
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
        }
        if ((pFVar8->NotifyRegistrationType != param_3) && (GEventDrivenLoaderEnabled != false)) {
          pFVar9 = ::FName::ToString((FName *)local_2d8,&local_278);
          if ((pFVar9->Data).ArrayNum == 0) {
            local_308 = (FName *)0x15060d16c;
          }
          else {
            local_308 = (FName *)(pFVar9->Data).AllocatorInstance.Data;
          }
          UE::Logging::Private::BasicFatalLog
                    (&`public:_void___cdecl_FEDLBootNotificationManager::NotifyRegistrationEvent(FName,FName,ENotifyRegistrationType,ENotifyRegistrationPhase,class_UObject*___ptr64_(__cdecl*)(void),bool)___ptr64'
                      ::__l48::LOG_Static,(FLogCategoryBase *)&LogStreaming);
          if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.Data.AllocatorInstance.Data);
          }
        }
        pFVar8->LastNotifyRegistrationPhase = param_4;
        if (param_4 == NRP_Finished) {
          pFVar8->Register = (_func___cdecl_UObject_ptr *)0x0;
          pTVar2 = &this->PathsToFire;
          pFVar6 = (FName *)(pTVar2->AllocatorInstance).Data;
          if ((pFVar6 <= (FName *)local_2d8) &&
             (lVar10 = (longlong)(this->PathsToFire).ArrayMax, (FName *)local_2d8 < pFVar6 + lVar10)
             ) {
            local_2f0 = (longlong)(this->PathsToFire).ArrayNum;
            local_2e8 = 8;
            local_308 = (FName *)local_2d8;
            local_300 = pFVar6;
            local_2f8 = lVar10;
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
          iVar5 = (this->PathsToFire).ArrayNum;
          piVar1 = &(this->PathsToFire).ArrayMax;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->PathsToFire).ArrayNum = iVar5 + 1;
          pFVar6 = (FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 8);
          pFVar6->ComparisonIndex = (FNameEntryId)local_2d8._0_4_;
          pFVar6->Number = local_2d8._4_4_;
        }
        if (pFVar7 == (FEDLBootObjectState *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ExistingPackageState",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                             ,0xed,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else if (((int)pFVar7->LastNotifyRegistrationPhase < (int)param_4) &&
                (pFVar7->LastNotifyRegistrationPhase = param_4, param_4 == NRP_Finished)) {
          pTVar2 = &this->PathsToFire;
          pFVar6 = (FName *)(pTVar2->AllocatorInstance).Data;
          if ((pFVar6 <= &local_res10) &&
             (lVar10 = (longlong)(this->PathsToFire).ArrayMax, &local_res10 < pFVar6 + lVar10)) {
            local_2f0 = (longlong)(this->PathsToFire).ArrayNum;
            local_2e8 = 8;
            local_308 = &local_res10;
            local_300 = pFVar6;
            local_2f8 = lVar10;
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
          iVar5 = (this->PathsToFire).ArrayNum;
          piVar1 = &(this->PathsToFire).ArrayMax;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->PathsToFire).ArrayNum = iVar5 + 1;
          *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_res10;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
    }
  }
  return;
}

