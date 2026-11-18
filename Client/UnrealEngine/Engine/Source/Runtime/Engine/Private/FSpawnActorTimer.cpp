// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// Get @ 147bde7f0

FSpawnActorTimer * __cdecl FSpawnActorTimer::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FSpawnActorTimer::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// IncrementFrameCount @ 147bee7d0

void __thiscall FSpawnActorTimer::IncrementFrameCount(FSpawnActorTimer *this)

{
  if (this->bIsRecordingSpawnActorTimes != false) {
    this->FrameCount = this->FrameCount + 1;
  }
  return;
}

// OutputSpawnTimings @ 147bf65c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSpawnActorTimer::OutputSpawnTimings(FSpawnActorTimer *this)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  ForElementType<FSetElementId> FVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FName *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined1 auStack_178 [32];
  longlong *local_158;
  FScriptContainerElement *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  ForAnyElementType local_120;
  undefined8 local_118;
  undefined1 local_110 [4];
  int local_10c;
  longlong local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  longlong lStack_f0;
  TPairInitializer<FName_const_&,int_const_&> local_e8;
  int *local_d8;
  FString local_d0;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (4 < (byte)LogSpawnActorTimer._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSpawnActorTimer);
  }
  iVar5 = (this->SpawnActorInfos).ArrayNum;
  pFVar16 = (this->SpawnActorInfos).AllocatorInstance.Data;
  pFVar18 = pFVar16 + (longlong)iVar5 * 0x10;
  local_120.Data = (FScriptContainerElement *)0x0;
  local_118 = 0;
  local_b8.Elements._0_8_ = 0;
  local_b8.Elements._8_8_ = 0;
  local_b8.Elements._32_8_ = 0;
  local_b8.Elements._40_4_ = 0;
  local_b8.Elements._44_4_ = 0x80;
  local_b8.Elements._48_4_ = 0xffffffff;
  local_b8.Elements._52_4_ = 0;
  local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b8.HashSize = 0;
LAB_147bf6670:
  do {
    if ((this->SpawnActorInfos).ArrayNum != iVar5) {
      local_128[0] = 0;
      `TCheckedPointerIterator<FSpawnActorTimingInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_128);
    }
    if (pFVar16 == pFVar18) {
      iVar5 = (int)local_118;
      pFVar16 = local_120.Data + 0x10;
      pFVar17 = (FName *)(local_120.Data + (longlong)(int)local_118 * 0x20);
      while( true ) {
        if ((int)local_118 != iVar5) {
          `TCheckedPointerIterator<`FSpawnActorTimer::OutputSpawnTimings'::__l2::FSpawnActorAggregateStats,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_110);
        }
        if ((FName *)(pFVar16 + -0x10) == pFVar17) break;
        if (4 < (byte)LogSpawnActorTimer._0_1_) {
          uVar6 = *(undefined4 *)(pFVar16 + -8);
          plVar4 = *(longlong **)pFVar16;
          ::FName::ToString((FName *)(pFVar16 + -0x10),&local_d0);
          local_150 = (FScriptContainerElement *)CONCAT44(local_150._4_4_,uVar6);
          local_158 = plVar4;
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSpawnActorTimer);
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
        }
        pFVar16 = pFVar16 + 0x20;
      }
      if ((4 < (byte)LogSpawnActorTimer._0_1_) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSpawnActorTimer),
         4 < (byte)LogSpawnActorTimer._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSpawnActorTimer);
      }
      if (4 < (byte)LogSpawnActorTimer._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSpawnActorTimer);
      }
      local_b8.HashSize = 0;
      if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_b8.Elements);
      if (local_120.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data);
      }
      return;
    }
    lVar15 = *(longlong *)pFVar16;
    uVar10 = ::GetTypeHash((FNameEntryId)(uint)lVar15);
    if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
      FVar14 = (ForElementType<FSetElementId>)&local_b8.Hash;
      if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar14 = local_b8.Hash.SecondaryData;
      }
      iVar11 = *(int *)((longlong)FVar14 +
                       (ulonglong)
                       (local_b8.HashSize - 1U & (int)((ulonglong)lVar15 >> 0x20) + uVar10) * 4);
      while (iVar11 != -1) {
        lVar1 = local_b8.Elements._0_8_ + (longlong)iVar11 * 0x14;
        if (*(longlong *)(local_b8.Elements._0_8_ + (longlong)iVar11 * 0x14) == lVar15) {
          puVar13 = (uint *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar13 = (uint *)0x0;
          }
          if (puVar13 != (uint *)0x0) {
            uVar10 = *puVar13;
            uVar12 = 0;
            if ((int)uVar10 < (int)local_118) {
              uVar12 = ~uVar10 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (local_158 = (longlong *)(longlong)(int)uVar10,
               local_150 = (FScriptContainerElement *)(longlong)(int)local_118,
               bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar8.Data = local_120.Data;
            lVar15 = (longlong)(int)uVar10 * 0x20;
            if ((*(longlong *)(local_120.Data + lVar15) != *(longlong *)pFVar16) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AggStat.ClassName == Info.ClassName",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SpawnActorTimer.cpp"
                                   ,0x57,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(int *)(FVar8.Data + lVar15 + 8) = *(int *)(FVar8.Data + lVar15 + 8) + 1;
            dVar2 = *(double *)(pFVar16 + 8);
            dVar3 = *(double *)(FVar8.Data + lVar15 + 0x10);
            *(double *)(FVar8.Data + lVar15 + 0x10) = dVar2 + dVar3;
            *(double *)(FVar8.Data + lVar15 + 0x18) =
                 (dVar2 + dVar3) / (double)*(int *)(FVar8.Data + lVar15 + 8);
            pFVar16 = pFVar16 + 0x10;
            goto LAB_147bf6670;
          }
          break;
        }
        iVar11 = *(int *)(lVar1 + 0xc);
      }
    }
    local_108 = *(longlong *)pFVar16;
    local_f8 = *(longlong *)(pFVar16 + 8);
    uStack_100 = 1;
    lStack_f0 = local_f8;
    if (local_120.Data <= (FScriptContainerElement *)&local_108) {
      if ((FScriptContainerElement *)&local_108 < local_120.Data + (longlong)local_118._4_4_ * 0x20)
      {
        local_140 = (longlong)(int)local_118;
        local_138 = 0x20;
        local_158 = &local_108;
        local_150 = local_120.Data;
        local_148 = (longlong)local_118._4_4_;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    iVar11 = (int)local_118;
    if ((int)local_118 == local_118._4_4_) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_120,(int *)((longlong)&local_118 + 4));
    }
    local_118 = CONCAT44(local_118._4_4_,iVar11 + 1);
    *(longlong *)(local_120.Data + (longlong)iVar11 * 0x20) = local_108;
    *(longlong *)(local_120.Data + (longlong)iVar11 * 0x20 + 8) = CONCAT44(uStack_fc,uStack_100);
    *(longlong *)(local_120.Data + (longlong)iVar11 * 0x20 + 0x10) = local_f8;
    *(longlong *)(local_120.Data + (longlong)iVar11 * 0x20 + 0x10 + 8) = lStack_f0;
    local_d8 = &local_10c;
    local_10c = iVar11;
    local_e8.Value = (int *)pFVar16;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,int_const_&>_>
              (&local_b8,&local_e8,(bool *)&local_e8.Value);
    pFVar16 = pFVar16 + 0x10;
  } while( true );
}

// ReportSpawnActor @ 147bfd760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSpawnActorTimer::ReportSpawnActor
          (FSpawnActorTimer *this,FName param_1,FName param_2,double param_3,
          ESpawnActorTimingType param_4)

{
  int *piVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSpawnActorTimingInfo *pFVar6;
  FName local_res18 [2];
  FName local_58;
  FName FStack_50;
  FName local_48;
  FName FStack_40;
  FName *local_38;
  FName *local_30;
  FString local_28 [2];
  
  if ((this->bIsRecordingSpawnActorTimes != false) && (param_2 != (FName)0x0)) {
    local_res18[0] = param_2;
    if (param_4 == FinishSpawning) {
      pFVar6 = TMapBase<FName,FSpawnActorTimingInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpawnActorTimingInfo,0>_>
               ::Find((TMapBase<FName,FSpawnActorTimingInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpawnActorTimingInfo,0>_>
                       *)&this->IncompleteSpawnActorMap,param_2);
      if (pFVar6 != (FSpawnActorTimingInfo *)0x0) {
        local_48 = pFVar6->ClassName;
        pFVar2 = (FName *)(this->SpawnActorInfos).AllocatorInstance.Data;
        FStack_40 = (FName)(pFVar6->SpawnTime + param_3);
        if (((pFVar2 <= &local_48) &&
            (&local_48 < pFVar2 + (longlong)(this->SpawnActorInfos).ArrayMax * 2)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->SpawnActorInfos).ArrayNum;
        piVar1 = &(this->SpawnActorInfos).ArrayMax;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->SpawnActorInfos).AllocatorInstance,piVar1);
        }
        (this->SpawnActorInfos).ArrayNum = iVar5 + 1;
        pFVar2 = (FName *)((this->SpawnActorInfos).AllocatorInstance.Data + (longlong)iVar5 * 0x10);
        *pFVar2 = local_48;
        pFVar2[1] = FStack_40;
        TSet<TTuple<FName,FSpawnActorTimingInfo>,TDefaultMapHashableKeyFuncs<FName,FSpawnActorTimingInfo,0>,FDefaultSetAllocator>
        ::Remove((TSet<TTuple<FName,FSpawnActorTimingInfo>,TDefaultMapHashableKeyFuncs<FName,FSpawnActorTimingInfo,0>,FDefaultSetAllocator>
                  *)&this->IncompleteSpawnActorMap,local_res18[0]);
      }
    }
    else {
      local_58 = param_1;
      FStack_50 = (FName)param_3;
      if (param_4 != SpawnActorDeferred) {
        pFVar2 = (FName *)(this->SpawnActorInfos).AllocatorInstance.Data;
        if (((pFVar2 <= &local_58) &&
            (&local_58 < pFVar2 + (longlong)(this->SpawnActorInfos).ArrayMax * 2)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->SpawnActorInfos).ArrayNum;
        piVar1 = &(this->SpawnActorInfos).ArrayMax;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->SpawnActorInfos).AllocatorInstance,piVar1);
        }
        (this->SpawnActorInfos).ArrayNum = iVar5 + 1;
        pFVar2 = (FName *)((this->SpawnActorInfos).AllocatorInstance.Data + (longlong)iVar5 * 0x10);
        *pFVar2 = local_58;
        pFVar2[1] = FStack_50;
        return;
      }
      pFVar6 = TMapBase<FName,FSpawnActorTimingInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpawnActorTimingInfo,0>_>
               ::Find((TMapBase<FName,FSpawnActorTimingInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpawnActorTimingInfo,0>_>
                       *)&this->IncompleteSpawnActorMap,param_2);
      if (pFVar6 == (FSpawnActorTimingInfo *)0x0) {
        local_38 = local_res18;
        local_30 = &local_58;
        TSet<TTuple<FName,FSpawnActorTimingInfo>,TDefaultMapHashableKeyFuncs<FName,FSpawnActorTimingInfo,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FSpawnActorTimingInfo_const_&>_>
                  ((TSet<TTuple<FName,FSpawnActorTimingInfo>,TDefaultMapHashableKeyFuncs<FName,FSpawnActorTimingInfo,0>,FDefaultSetAllocator>
                    *)&this->IncompleteSpawnActorMap,
                   (TPairInitializer<FName_const_&,FSpawnActorTimingInfo_const_&> *)&stack0x00000008
                   ,(bool *)&local_38);
        return;
      }
      if (2 < (byte)LogSpawnActorTimer._0_1_) {
        ::FName::ToString(local_res18,local_28);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSpawnActorTimer);
        if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
          return;
        }
      }
    }
  }
  return;
}

// SpawnActorTimerCmdFunc @ 147c021e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSpawnActorTimer::SpawnActorTimerCmdFunc(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  FSpawnActorTimer *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  FString local_28;
  FString local_18;
  
  if (param_1->ArrayNum == 1) {
    pFVar3 = (param_1->AllocatorInstance).Data;
    pFVar7 = ::FString::FString(&local_28,L"start");
    pwVar11 = L"";
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    if (*(int *)(pFVar3 + 8) == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = *(wchar_t **)pFVar3;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (iVar6 == 0) {
      pFVar8 = Get();
      if ((pFVar8->bIsRecordingSpawnActorTimes == false) &&
         (pFVar8->bIsRecordingSpawnActorTimes = true, 4 < (byte)LogSpawnActorTimer._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSpawnActorTimer);
        return;
      }
    }
    else {
      if ((param_1->ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      pFVar7 = ::FString::FString(&local_18,L"stop");
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      if (*(int *)(pFVar3 + 8) != 0) {
        pwVar11 = *(wchar_t **)pFVar3;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar11,pwVar10);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if ((iVar6 == 0) && (pFVar8 = Get(), pFVar8->bIsRecordingSpawnActorTimes != false)) {
        OutputSpawnTimings(pFVar8);
        piVar1 = &(pFVar8->SpawnActorInfos).ArrayMax;
        (pFVar8->SpawnActorInfos).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&(pFVar8->SpawnActorInfos).AllocatorInstance,0,piVar1);
        }
        bVar5 = 1 < *(int *)&(pFVar8->IncompleteSpawnActorMap).field_0x48;
        if (!bVar5) {
          TSet<TTuple<FName,FSpawnActorTimingInfo>,TDefaultMapHashableKeyFuncs<FName,FSpawnActorTimingInfo,0>,FDefaultSetAllocator>
          ::UnhashElements((TSet<TTuple<FName,FSpawnActorTimingInfo>,TDefaultMapHashableKeyFuncs<FName,FSpawnActorTimingInfo,0>,FDefaultSetAllocator>
                            *)&pFVar8->IncompleteSpawnActorMap);
        }
        puVar2 = &(pFVar8->IncompleteSpawnActorMap).field_0xc;
        *(undefined4 *)&(pFVar8->IncompleteSpawnActorMap).field_0x8 = 0;
        if (*(int *)puVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)&pFVar8->IncompleteSpawnActorMap,0,(int *)puVar2)
          ;
        }
        *(undefined4 *)&(pFVar8->IncompleteSpawnActorMap).field_0x30 = 0xffffffff;
        *(undefined4 *)&(pFVar8->IncompleteSpawnActorMap).field_0x34 = 0;
        iVar6 = *(int *)&(pFVar8->IncompleteSpawnActorMap).field_0x2c;
        *(undefined4 *)&(pFVar8->IncompleteSpawnActorMap).field_0x28 = 0;
        if ((iVar6 < 0) || (0x80 < iVar6)) {
          *(undefined4 *)&(pFVar8->IncompleteSpawnActorMap).field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(pFVar8->IncompleteSpawnActorMap).field_0x10,0);
        }
        if (bVar5) {
          *(undefined4 *)&(pFVar8->IncompleteSpawnActorMap).field_0x48 = 1;
          TSet<TTuple<FName,FSpawnActorTimingInfo>,TDefaultMapHashableKeyFuncs<FName,FSpawnActorTimingInfo,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<FName,FSpawnActorTimingInfo>,TDefaultMapHashableKeyFuncs<FName,FSpawnActorTimingInfo,0>,FDefaultSetAllocator>
                    *)&pFVar8->IncompleteSpawnActorMap);
        }
        pFVar8->FrameCount = 0;
        pFVar8->bIsRecordingSpawnActorTimes = false;
      }
    }
  }
  return;
}

// Start @ 147c02410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSpawnActorTimer::Start(FSpawnActorTimer *this)

{
  if ((this->bIsRecordingSpawnActorTimes == false) &&
     (this->bIsRecordingSpawnActorTimes = true, 4 < (byte)LogSpawnActorTimer._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSpawnActorTimer);
    return;
  }
  return;
}

// Stop @ 147c038a0

void __thiscall FSpawnActorTimer::Stop(FSpawnActorTimer *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  
  if (this->bIsRecordingSpawnActorTimes != false) {
    OutputSpawnTimings(this);
    piVar1 = &(this->SpawnActorInfos).ArrayMax;
    (this->SpawnActorInfos).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->SpawnActorInfos).AllocatorInstance,0,piVar1);
    }
    bVar4 = 1 < *(int *)&(this->IncompleteSpawnActorMap).field_0x48;
    if (!bVar4) {
      TSet<TTuple<FName,FSpawnActorTimingInfo>,TDefaultMapHashableKeyFuncs<FName,FSpawnActorTimingInfo,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,FSpawnActorTimingInfo>,TDefaultMapHashableKeyFuncs<FName,FSpawnActorTimingInfo,0>,FDefaultSetAllocator>
                        *)&this->IncompleteSpawnActorMap);
    }
    puVar2 = &(this->IncompleteSpawnActorMap).field_0xc;
    *(undefined4 *)&(this->IncompleteSpawnActorMap).field_0x8 = 0;
    if (*(int *)puVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)&this->IncompleteSpawnActorMap,0,(int *)puVar2);
    }
    *(undefined4 *)&(this->IncompleteSpawnActorMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->IncompleteSpawnActorMap).field_0x34 = 0;
    iVar3 = *(int *)&(this->IncompleteSpawnActorMap).field_0x2c;
    *(undefined4 *)&(this->IncompleteSpawnActorMap).field_0x28 = 0;
    if ((iVar3 < 0) || (0x80 < iVar3)) {
      *(undefined4 *)&(this->IncompleteSpawnActorMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->IncompleteSpawnActorMap).field_0x10
                 ,0);
    }
    if (bVar4) {
      *(undefined4 *)&(this->IncompleteSpawnActorMap).field_0x48 = 1;
      TSet<TTuple<FName,FSpawnActorTimingInfo>,TDefaultMapHashableKeyFuncs<FName,FSpawnActorTimingInfo,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,FSpawnActorTimingInfo>,TDefaultMapHashableKeyFuncs<FName,FSpawnActorTimingInfo,0>,FDefaultSetAllocator>
                *)&this->IncompleteSpawnActorMap);
    }
    this->FrameCount = 0;
    this->bIsRecordingSpawnActorTimes = false;
  }
  return;
}

