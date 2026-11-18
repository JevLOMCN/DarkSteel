// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// operator() @ 14bbaa220

void __thiscall
`FDS_AchievementService::GetAchievementTabList'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,FDS_AchievementBaseTableRow *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  
  if (param_3 != (FDS_AchievementBaseTableRow *)0x0) {
    uVar1 = param_3->AchievementGroupId;
    if (AchievementGroupMap._8_4_ != AchievementGroupMap._52_4_) {
      lVar11 = 0x154cf7868;
      if (AchievementGroupMap._64_8_ != 0) {
        lVar11 = AchievementGroupMap._64_8_;
      }
      lVar10 = (ulonglong)(AchievementGroupMap._72_4_ - 1 & uVar1) * 4;
      iVar12 = *(int *)(lVar10 + lVar11);
      if (iVar12 != -1) {
        while (*(uint *)((longlong)iVar12 * 0x20 + AchievementGroupMap._0_8_) != uVar1) {
          iVar12 = *(int *)((longlong)iVar12 * 0x20 + 0x18 + AchievementGroupMap._0_8_);
          if (iVar12 == -1) {
            return;
          }
        }
        lVar11 = 0x154cf7868;
        if (AchievementGroupMap._64_8_ != 0) {
          lVar11 = AchievementGroupMap._64_8_;
        }
        uVar2 = *(uint *)(lVar10 + lVar11);
        while (uVar2 != 0xffffffff) {
          puVar9 = (uint *)((longlong)(int)uVar2 * 0x20 + AchievementGroupMap._0_8_);
          if (*puVar9 == uVar1) {
            if (puVar9 != (uint *)0x0) goto LAB_14bbaa30f;
            goto LAB_14bbaa2e9;
          }
          uVar2 = puVar9[6];
        }
        puVar9 = (uint *)0x0;
LAB_14bbaa2e9:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_14bbaa30f:
        plVar3 = *(longlong **)(puVar9 + 2);
        plVar8 = plVar3;
        if (plVar3 != plVar3 + (int)puVar9[4]) {
          while ((FDS_AchievementBaseTableRow *)*plVar8 != param_3) {
            plVar8 = plVar8 + 1;
            if (plVar8 == plVar3 + (int)puVar9[4]) {
              return;
            }
          }
          iVar12 = (int)((longlong)plVar8 - (longlong)plVar3 >> 3);
          if ((-1 < iVar12) && (1 < (longlong)param_2)) {
            lVar10 = (longlong)param_2 + -1;
            lVar11 = (longlong)iVar12 * 8;
            do {
              iVar12 = iVar12 + 1;
              lVar11 = lVar11 + 8;
              if ((-1 < iVar12) && (iVar12 < (int)puVar9[4])) {
                if ((iVar12 < 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar7 = param_1->ArrayNum;
                lVar4 = *(longlong *)(puVar9 + 2);
                if (iVar7 == param_1->ArrayMax) {
                  iVar7 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar7 + 1;
                *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) =
                     *(undefined8 *)(lVar4 + lVar11);
              }
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
        }
      }
    }
  }
  return;
}

// GetAchievementGroupList @ 14bbbb350

TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_AchievementService::GetAchievementGroupList(int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  int *piVar7;
  
  if ((AchievementGroupMap._8_4_ != AchievementGroupMap._52_4_) ||
     (InitAchievementGroupMap(), AchievementGroupMap._8_4_ != AchievementGroupMap._52_4_)) {
    lVar6 = 0x154cf7868;
    if (AchievementGroupMap._64_8_ != 0) {
      lVar6 = AchievementGroupMap._64_8_;
    }
    lVar1 = (ulonglong)(AchievementGroupMap._72_4_ - 1 & param_1) * 4;
    for (iVar2 = *(int *)(lVar1 + lVar6); iVar2 != -1;
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + AchievementGroupMap._0_8_)) {
      if (*(int *)((longlong)iVar2 * 0x20 + AchievementGroupMap._0_8_) == param_1) {
        lVar6 = 0x154cf7868;
        if (AchievementGroupMap._64_8_ != 0) {
          lVar6 = AchievementGroupMap._64_8_;
        }
        iVar2 = *(int *)(lVar1 + lVar6);
        goto joined_r0x00014bbbb3ef;
      }
    }
  }
  return (TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)0x0;
joined_r0x00014bbbb3ef:
  if (iVar2 == -1) {
    piVar7 = (int *)0x0;
LAB_14bbbb409:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)
               (*pcVar3)();
      return pTVar5;
    }
LAB_14bbbb42f:
    return (TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(piVar7 + 2);
  }
  piVar7 = (int *)((longlong)iVar2 * 0x20 + AchievementGroupMap._0_8_);
  if (*piVar7 == param_1) {
    if (piVar7 != (int *)0x0) goto LAB_14bbbb42f;
    goto LAB_14bbbb409;
  }
  iVar2 = piVar7[6];
  goto joined_r0x00014bbbb3ef;
}

// GetAchievementGroupMap @ 14bbbb450

TMap<int,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>_>
* __cdecl FDS_AchievementService::GetAchievementGroupMap(void)

{
  if (AchievementGroupMap._8_4_ == AchievementGroupMap._52_4_) {
    InitAchievementGroupMap();
  }
  return &AchievementGroupMap;
}

// GetAchievementTabList @ 14bbbb480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_AchievementService::GetAchievementTabList
          (TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,EDS_AchievementCategory param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  code *pcVar4;
  FWeakObjectPtr *pFVar5;
  bool bVar6;
  int iVar7;
  UDS_LogManager *pUVar8;
  UDS_AchievementDataSet *this;
  UObject *pUVar9;
  UDS_AchievementData *this_00;
  FDS_AchievementBaseTableRow *pFVar10;
  ForAnyElementType FVar11;
  TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  longlong lVar14;
  ForAnyElementType this_01;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7;
  FIdentityFunctor local_1a6;
  FIdentityFunctor local_1a5 [5];
  TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_1a0;
  uint local_190;
  FWeakObjectPtr local_188;
  TArray<TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_180;
  FWeakObjectPtr *local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &__return_storage_ptr__->ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.ArrayNum = 0;
  local_1a0.ArrayMax = 0;
  TDS_DataSetGetter<UDS_AchievementDataSet>::Get((ulong64)&local_188);
  bVar6 = TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> *)&local_188,(void *)0x0
                    );
  if (bVar6) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) goto LAB_14bbbb75e;
    pUVar8 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"FDS_AchievementService::GetAchievementTabList",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar8,1,Warning,local_168.Ptr,0x44,L"achievementDataSet is nullptr.");
    local_180.AllocatorInstance.Data = (FScriptContainerElement *)local_168._padding_;
  }
  else {
    this = (UDS_AchievementDataSet *)FWeakObjectPtr::Get(&local_188);
    UDS_AchievementDataSet::GetAchievementDataList(this,&local_180,param_1);
    if (AchievementGroupMap._8_4_ == AchievementGroupMap._52_4_) {
      InitAchievementGroupMap();
    }
    local_190 = local_180.ArrayNum;
    uVar13 = (ulonglong)(int)local_190;
    local_170 = (FWeakObjectPtr *)(local_180.AllocatorInstance.Data + uVar13 * 8);
    this_01.Data = local_180.AllocatorInstance.Data;
    while( true ) {
      pFVar5 = local_170;
      if (local_180.ArrayNum != (int)uVar13) {
        local_1a8 = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_1a8);
      }
      if ((FWeakObjectPtr *)this_01.Data == pFVar5) break;
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
      cVar3 = pUVar9[2].field_0x14;
      if ((cVar3 != '\0') && (cVar3 != '\x03')) {
        this_00 = (UDS_AchievementData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
        pFVar10 = UDS_AchievementData::GetAchievementBaseTableRow(this_00);
        if ((pFVar10 != (FDS_AchievementBaseTableRow *)0x0) && (pFVar10->IsVisible != false)) {
          if (cVar3 == '\x02') {
            iVar7 = *piVar1;
            if (iVar7 == *piVar2) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&__return_storage_ptr__->AllocatorInstance,piVar2);
            }
            *piVar1 = iVar7 + 1;
            FVar11.Data = (__return_storage_ptr__->AllocatorInstance).Data;
          }
          else {
            if (cVar3 != '\x01') goto LAB_14bbbb691;
            iVar7 = local_1a0.ArrayNum;
            if (local_1a0.ArrayNum == local_1a0.ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_1a0.AllocatorInstance,&local_1a0.ArrayMax);
            }
            local_1a0.ArrayNum = iVar7 + 1;
            FVar11.Data = local_1a0.AllocatorInstance.Data;
          }
          *(FDS_AchievementBaseTableRow **)(FVar11.Data + (longlong)iVar7 * 8) = pFVar10;
          if (param_2) {
            iVar7 = DS_CommonDataHelper::AchievementNextListCount();
            `FDS_AchievementService::GetAchievementTabList'::__l2::<lambda_1>::operator()
                      (&local_1a7,&local_1a0,iVar7,pFVar10);
          }
        }
      }
LAB_14bbbb691:
      this_01.Data = this_01.Data + 8;
      uVar13 = (ulonglong)local_190;
    }
    AlgoImpl::
    IntroSortInternal<FDS_AchievementBaseTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_AchievementBaseTableRow_const_*,_FDS_AchievementService::GetAchievementTabList_::__l2::<lambda_2>_>_>
              ((FDS_AchievementBaseTableRow **)(__return_storage_ptr__->AllocatorInstance).Data,
               *piVar1,local_1a6,(<lambda_2> *)&local_1a6);
    AlgoImpl::
    IntroSortInternal<FDS_AchievementBaseTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_AchievementBaseTableRow_const_*,_FDS_AchievementService::GetAchievementTabList_::__l2::<lambda_3>_>_>
              ((FDS_AchievementBaseTableRow **)local_1a0.AllocatorInstance.Data,local_1a0.ArrayNum,
               local_1a5[0],(<lambda_3> *)local_1a5);
    if ((__return_storage_ptr__ == &local_1a0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)
                (*pcVar4)();
      return pTVar12;
    }
    lVar14 = (longlong)local_1a0.ArrayNum;
    if (local_1a0.ArrayNum != 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,local_1a0.ArrayNum,&__return_storage_ptr__->AllocatorInstance,piVar1,
                         piVar2);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8,
             local_1a0.AllocatorInstance.Data,lVar14 << 3);
    }
  }
  if ((FWeakObjectPtr *)local_180.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
    FMemory::Free(local_180.AllocatorInstance.Data);
  }
LAB_14bbbb75e:
  if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitAchievementGroupMap @ 14bbc00f0

void __cdecl FDS_AchievementService::InitAchievementGroupMap(void)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  uint *puVar10;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  TPairInitializer<int_&,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_&&>
  local_res18;
  ForAnyElementType local_68;
  undefined4 local_60;
  int local_5c;
  TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_58;
  uint *local_48;
  ForAnyElementType *local_40;
  
  bVar6 = 1 < (int)AchievementGroupMap._72_4_;
  if (!bVar6) {
    TSet<TTuple<int,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&AchievementGroupMap);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&AchievementGroupMap,0,AchievementGroupMap._8_4_);
  AchievementGroupMap._8_4_ = 0;
  if (AchievementGroupMap._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&AchievementGroupMap,0,
               (int *)&AchievementGroupMap.field_0xc);
  }
  AchievementGroupMap._48_4_ = 0xffffffff;
  AchievementGroupMap._52_4_ = 0;
  AchievementGroupMap._40_4_ = 0;
  if (0x80 < (uint)AchievementGroupMap._44_4_) {
    AchievementGroupMap._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&AchievementGroupMap.field_0x10,0);
  }
  if (bVar6) {
    AchievementGroupMap._72_4_ = 1;
    TSet<TTuple<int,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&AchievementGroupMap);
  }
  FDS_AchievementBaseTableRow::GetAll(&local_58);
  iVar5 = local_58.ArrayNum;
  pFVar1 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
  FVar9.Data = local_58.AllocatorInstance.Data;
LAB_14bbc01e1:
  do {
    if (local_58.ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDS_AchievementBaseTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar9.Data == pFVar1) {
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return;
    }
    lVar3 = *(longlong *)FVar9.Data;
    if (lVar3 != 0) {
      local_res10[0] = *(uint *)(lVar3 + 0x24);
      if (AchievementGroupMap._8_4_ != AchievementGroupMap._52_4_) {
        lVar8 = 0x154cf7868;
        if (AchievementGroupMap._64_8_ != 0) {
          lVar8 = AchievementGroupMap._64_8_;
        }
        for (iVar2 = *(int *)(lVar8 + (ulonglong)(AchievementGroupMap._72_4_ - 1 & local_res10[0]) *
                                      4); iVar2 != -1;
            iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + AchievementGroupMap._0_8_)) {
          if (*(uint *)((longlong)iVar2 * 0x20 + AchievementGroupMap._0_8_) == local_res10[0]) {
            lVar8 = 0x154cf7868;
            if (AchievementGroupMap._64_8_ != 0) {
              lVar8 = AchievementGroupMap._64_8_;
            }
            uVar7 = *(uint *)(lVar8 + (ulonglong)(AchievementGroupMap._72_4_ - 1 & local_res10[0]) *
                                      4);
            puVar10 = (uint *)0x0;
            if (uVar7 == 0xffffffff) goto LAB_14bbc034a;
            goto LAB_14bbc0330;
          }
        }
      }
      local_68.Data = (FScriptContainerElement *)0x0;
      local_60 = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_68,1,&local_5c);
      *(longlong *)local_68.Data = lVar3;
      local_48 = local_res10;
      local_40 = &local_68;
      TSet<TTuple<int,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<int_&,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_&&>_>
                ((TSet<TTuple<int,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&AchievementGroupMap,&local_res18,(bool *)&local_48);
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
    }
    FVar9.Data = FVar9.Data + 8;
  } while( true );
  while (uVar7 = puVar10[6], puVar10 = (uint *)0x0, uVar7 != 0xffffffff) {
LAB_14bbc0330:
    puVar10 = (uint *)((longlong)(int)uVar7 * 0x20 + AchievementGroupMap._0_8_);
    if (*puVar10 == local_res10[0]) {
      if (puVar10 != (uint *)0x0) goto LAB_14bbc0370;
      break;
    }
  }
LAB_14bbc034a:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14bbc0370:
  uVar7 = puVar10[4];
  if (uVar7 == puVar10[5]) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(puVar10 + 2),(int *)(puVar10 + 5));
  }
  FVar9.Data = FVar9.Data + 8;
  puVar10[4] = uVar7 + 1;
  *(longlong *)(*(longlong *)(puVar10 + 2) + (longlong)(int)uVar7 * 8) = lVar3;
  goto LAB_14bbc01e1;
}

// IsGroupAchievement @ 14bbc49f0

bool __cdecl FDS_AchievementService::IsGroupAchievement(int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  int *piVar7;
  
  if ((AchievementGroupMap._8_4_ != AchievementGroupMap._52_4_) ||
     (InitAchievementGroupMap(), AchievementGroupMap._8_4_ != AchievementGroupMap._52_4_)) {
    lVar6 = 0x154cf7868;
    if (AchievementGroupMap._64_8_ != 0) {
      lVar6 = AchievementGroupMap._64_8_;
    }
    lVar1 = (ulonglong)(AchievementGroupMap._72_4_ - 1 & param_1) * 4;
    for (iVar2 = *(int *)(lVar1 + lVar6); iVar2 != -1;
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + AchievementGroupMap._0_8_)) {
      if (*(int *)((longlong)iVar2 * 0x20 + AchievementGroupMap._0_8_) == param_1) {
        lVar6 = 0x154cf7868;
        if (AchievementGroupMap._64_8_ != 0) {
          lVar6 = AchievementGroupMap._64_8_;
        }
        iVar2 = *(int *)(lVar1 + lVar6);
        goto joined_r0x00014bbc4a8f;
      }
    }
  }
  return false;
joined_r0x00014bbc4a8f:
  if (iVar2 == -1) {
    piVar7 = (int *)0x0;
LAB_14bbc4aa9:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
LAB_14bbc4acf:
    return 1 < piVar7[4];
  }
  piVar7 = (int *)((longlong)iVar2 * 0x20 + AchievementGroupMap._0_8_);
  if (*piVar7 == param_1) {
    if (piVar7 != (int *)0x0) goto LAB_14bbc4acf;
    goto LAB_14bbc4aa9;
  }
  iVar2 = piVar7[6];
  goto joined_r0x00014bbc4a8f;
}

// OnOpenRewardPopup @ 14bbcb4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_AchievementService::OnOpenRewardPopup
          (UDS_UserWidget *param_1,AchievementCompleteAllResponse *param_2)

{
  code *pcVar1;
  UDS_LogManager *pUVar2;
  UDS_M_ResultUI *this;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  UDS_UserWidget *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FDS_AchievementService::OnOpenRewardPopup",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x147,L"InWidget is nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    this = NewObject<UDS_M_ResultUI>((UObject *)param_1);
    UDS_M_ResultUI::Init(this,param_2);
    pcVar1 = *(code **)(this->_padding_ + 0x2e8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_158.ObjectIndex = 0;
    local_158.ObjectSerialNumber = 0;
    local_150 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_150);
    (*pcVar1)(this,local_158);
  }
  server_msg_twoway::AchievementCompleteAllResponse::~AchievementCompleteAllResponse(param_2);
  return;
}

// OnOpenRewardPopup @ 14bbcb650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_AchievementService::OnOpenRewardPopup
          (UDS_UserWidget *param_1,AchievementCompleteResponse *param_2)

{
  code *pcVar1;
  UDS_LogManager *pUVar2;
  UDS_M_ResultUI *this;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  UDS_UserWidget *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FDS_AchievementService::OnOpenRewardPopup",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x13a,L"InWidget is nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    this = NewObject<UDS_M_ResultUI>((UObject *)param_1);
    UDS_M_ResultUI::Init(this,param_2);
    pcVar1 = *(code **)(this->_padding_ + 0x2e8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_158.ObjectIndex = 0;
    local_158.ObjectSerialNumber = 0;
    local_150 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_150);
    (*pcVar1)(this,local_158);
  }
  server_msg_twoway::AchievementCompleteResponse::~AchievementCompleteResponse(param_2);
  return;
}

// ProcessError @ 14bbce730

bool __cdecl FDS_AchievementService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  EDS_ErrorCode EVar1;
  long64 lVar2;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  EVar1 = param_1->ErrorCode;
  if (EVar1 == AchievementAlreadyComplete) {
    lVar2 = 0x50927;
  }
  else if (EVar1 == AchievementNotCompletableCondition) {
    lVar2 = 0x50928;
  }
  else if (EVar1 == AchievementPartiallyCompleted) {
    lVar2 = 0x50929;
  }
  else {
    if (EVar1 != AchievementRewardPaymentInventoryFull) {
      return false;
    }
    lVar2 = 0x5092a;
  }
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(lVar2,Alert_System_01,&local_28);
  return true;
}

// ReciveAchievementComplete @ 14bbd6120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_AchievementService::ReciveAchievementComplete(ServerMessagesTwoway *param_1)

{
  UDS_LogManager *pUVar1;
  AchievementCompleteResponseDefaultTypeInternal *pAVar2;
  undefined1 auStackY_1b8 [32];
  AchievementCompleteResponse local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x53fc) {
    pAVar2 = (AchievementCompleteResponseDefaultTypeInternal *)
             (param_1->_impl_).ServerMessageTwoway_.pongres_;
  }
  else {
    pAVar2 = &server_msg_twoway::_AchievementCompleteResponse_default_instance_;
  }
  server_msg_twoway::AchievementCompleteResponse::AchievementCompleteResponse
            (&local_178,(Arena *)0x0,&pAVar2->_instance);
  local_178._padding_ = (longlong)&___7AchievementCompleteResponse_server_msg_twoway__6B_;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_AchievementService::ReciveAchievementComplete",0x31,Yes);
    UDS_LogManager::PrintLog
              (pUVar1,1,Display,local_138.Ptr,0xdc,L"ReciveAchievementCompletedId: %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  server_msg_twoway::AchievementCompleteResponse::~AchievementCompleteResponse(&local_178);
  return;
}

// ReciveAchievementCompleteAll @ 14bbd6230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_AchievementService::ReciveAchievementCompleteAll(ServerMessagesTwoway *param_1)

{
  UDS_LogManager *pUVar1;
  undefined4 uVar2;
  longlong lVar3;
  AchievementCompleteAllResponseDefaultTypeInternal *pAVar4;
  undefined1 auStackY_1d8 [32];
  AchievementCompleteAllResponse local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x53fd) {
    pAVar4 = (AchievementCompleteAllResponseDefaultTypeInternal *)
             (param_1->_impl_).ServerMessageTwoway_.pongres_;
  }
  else {
    pAVar4 = &server_msg_twoway::_AchievementCompleteAllResponse_default_instance_;
  }
  server_msg_twoway::AchievementCompleteAllResponse::AchievementCompleteAllResponse
            (&local_198,(Arena *)0x0,&pAVar4->_instance);
  local_198._padding_ = (longlong)&___7AchievementCompleteAllResponse_server_msg_twoway__6B_;
  uVar2 = local_198._impl_.achievement_ids_.soo_rep_.field0_0x0.long_rep.size;
  if ((local_198._impl_.achievement_ids_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
    uVar2 = (uint)local_198._impl_.achievement_ids_.soo_rep_.field0_0x0.long_rep.elements_int & 3;
  }
  if (0 < (int)uVar2) {
    lVar3 = 0;
    do {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_AchievementService::ReciveAchievementCompleteAll",0x34,Yes);
        UDS_LogManager::PrintLog
                  (pUVar1,1,Display,local_148.Ptr,0x121,L"ReciveAchievementCompletedId: %d");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uVar2);
  }
  server_msg_twoway::AchievementCompleteAllResponse::~AchievementCompleteAllResponse(&local_198);
  return;
}

// ReciveAchievementCompleteAll_Error @ 14bbd63c0

bool __cdecl
FDS_AchievementService::ReciveAchievementCompleteAll_Error
          (FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  EDS_ErrorCode EVar1;
  long64 lVar2;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if ((param_1->ErrorCode == AchievementPartiallyCompleted) ||
     (param_1->ErrorCode == AchievementRewardPaymentInventoryFull)) {
    ReciveAchievementCompleteAll((ServerMessagesTwoway *)param_2);
  }
  EVar1 = param_1->ErrorCode;
  if (EVar1 == AchievementAlreadyComplete) {
    lVar2 = 0x50927;
  }
  else if (EVar1 == AchievementNotCompletableCondition) {
    lVar2 = 0x50928;
  }
  else if (EVar1 == AchievementPartiallyCompleted) {
    lVar2 = 0x50929;
  }
  else {
    if (EVar1 != AchievementRewardPaymentInventoryFull) {
      return false;
    }
    lVar2 = 0x5092a;
  }
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(lVar2,Alert_System_01,&local_28);
  return true;
}

// ReciveAchievementComplete_Error @ 14bbd6450

bool __cdecl
FDS_AchievementService::ReciveAchievementComplete_Error
          (FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  EDS_ErrorCode EVar1;
  long64 lVar2;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if ((param_1->ErrorCode == AchievementPartiallyCompleted) ||
     (param_1->ErrorCode == AchievementRewardPaymentInventoryFull)) {
    ReciveAchievementComplete((ServerMessagesTwoway *)param_2);
  }
  EVar1 = param_1->ErrorCode;
  if (EVar1 == AchievementAlreadyComplete) {
    lVar2 = 0x50927;
  }
  else if (EVar1 == AchievementNotCompletableCondition) {
    lVar2 = 0x50928;
  }
  else if (EVar1 == AchievementPartiallyCompleted) {
    lVar2 = 0x50929;
  }
  else {
    if (EVar1 != AchievementRewardPaymentInventoryFull) {
      return false;
    }
    lVar2 = 0x5092a;
  }
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(lVar2,Alert_System_01,&local_28);
  return true;
}

// RequestAchievementComplete @ 14bbd9990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_AchievementService::RequestAchievementComplete(int *param_1)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UDS_NetworkManager *this;
  Arena *pAVar9;
  undefined1 auStackY_1d8 [32];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_198;
  FDestructionSentinel local_188;
  undefined1 *local_170;
  FDestructionSentinel local_168;
  undefined1 *local_150;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pUVar4 = UDS_LogManager::GetInst();
  if (pUVar4 != (UDS_LogManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_AchievementService::RequestAchievementComplete",0x32,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Display,local_138.Ptr,0xc4,L"RequestAchievementComplete. %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  pTVar5 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_148);
  local_198.Object = pTVar5->Object;
  local_198.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  if (local_198.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar2 = local_198.Object;
  if (((local_198.Object)->clientMsg)._impl_._oneof_case_[0] != 0x53fc) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_198.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x53fc;
    pAVar9 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::
             DefaultConstruct<client_msg_twoway::AchievementCompleteRequest>(pAVar9);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
  }
  pMVar6 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar6 != (Message *)0x0) {
    *(int *)&pMVar6[1].field_0x8 = *param_1;
    *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 1;
    if (local_198.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_198.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_198.Object)->SuccessDel,(FWriteAccessScope *)&local_188);
    local_170 = &(pFVar2->SuccessDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_170);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[3] = ReciveAchievementComplete;
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
    if (local_198.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_198.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_198.Object)->FailDel,(FWriteAccessScope *)&local_168);
    local_150 = &(pFVar2->FailDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_150);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[3] = ReciveAchievementComplete_Error;
    }
    if (local_168.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
    }
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_198);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  return;
}

// RequestAchievementCompleteAll @ 14bbd9c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_AchievementService::RequestAchievementCompleteAll
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  FDS_ClientMessage_Twoway *pFVar4;
  bool bVar5;
  uint uVar6;
  UDS_LogManager *pUVar7;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar8;
  Message *pMVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  UDS_NetworkManager *this;
  Arena *pAVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  undefined1 auStackY_208 [32];
  undefined1 local_1c8 [8];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_1c0;
  FDestructionSentinel local_1b0;
  undefined1 *local_198;
  FDestructionSentinel local_190;
  undefined1 *local_178;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pFVar15 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  uVar14 = 0;
  pFVar1 = pFVar15 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_1c8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1c8);
    }
    if (pFVar15 == pFVar1) break;
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_AchievementService::RequestAchievementCompleteAll",0x35,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Display,local_158.Ptr,0x100,L"RequestAchievementComplete: %d");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    pFVar15 = pFVar15 + 4;
  }
  pTVar8 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_170);
  local_1c0.Object = pTVar8->Object;
  local_1c0.SharedReferenceCount.ReferenceController =
       (pTVar8->SharedReferenceCount).ReferenceController;
  if (local_1c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_170.SharedReferenceCount.ReferenceController);
  if (local_1c0.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar4 = local_1c0.Object;
  if (((local_1c0.Object)->clientMsg)._impl_._oneof_case_[0] != 0x53fd) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_1c0.Object)->clientMsg);
    (pFVar4->clientMsg)._impl_._oneof_case_[0] = 0x53fd;
    pAVar12 = (Arena *)((pFVar4->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar4->clientMsg)._padding_ & 1) != 0) {
      pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
    }
    pMVar9 = google::protobuf::Arena::
             DefaultConstruct<client_msg_twoway::AchievementCompleteAllRequest>(pAVar12);
    (pFVar4->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar9;
  }
  pMVar9 = (pFVar4->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar9 != (Message *)0x0) {
    iVar2 = param_1->ArrayNum;
    if (0 < (longlong)iVar2) {
      uVar16 = uVar14;
      do {
        uVar13 = (uint)uVar14;
        uVar6 = 0;
        if ((int)uVar13 < param_1->ArrayNum) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        google::protobuf::RepeatedField<int>::Add
                  ((RepeatedField<int> *)(pMVar9 + 1),
                   *(int *)((param_1->AllocatorInstance).Data + uVar16 * 4));
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar16 = uVar16 + 1;
      } while ((longlong)uVar16 < (longlong)iVar2);
    }
    if (local_1c0.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar4 = local_1c0.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_1c0.Object)->SuccessDel,(FWriteAccessScope *)&local_1b0);
    local_198 = &(pFVar4->SuccessDel).field_0x8;
    puVar10 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_198);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar10[3] = ReciveAchievementCompleteAll;
    }
    if (local_1b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b0.Accessor,&local_1b0);
    }
    if (local_1c0.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar4 = local_1c0.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_1c0.Object)->FailDel,(FWriteAccessScope *)&local_190);
    local_178 = &(pFVar4->FailDel).field_0x8;
    puVar10 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_178);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar10[3] = ReciveAchievementCompleteAll_Error;
    }
    if (local_190.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
    }
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_1c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.SharedReferenceCount.ReferenceController);
  return;
}

