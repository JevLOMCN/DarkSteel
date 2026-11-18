// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 7

// FConcurrentInstanceCounterManager @ 14b2a63f0

FConcurrentInstanceCounterManager * __thiscall
Metasound::FConcurrentInstanceCounterManager::FConcurrentInstanceCounterManager
          (FConcurrentInstanceCounterManager *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined8 *)&this->StatsMap = 0;
  *(undefined8 *)&(this->StatsMap).field_0x8 = 0;
  *(undefined8 *)&(this->StatsMap).field_0x20 = 0;
  *(undefined4 *)&(this->StatsMap).field_0x28 = 0;
  *(undefined4 *)&(this->StatsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StatsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StatsMap).field_0x34 = 0;
  *(undefined8 *)&(this->StatsMap).field_0x40 = 0;
  *(undefined4 *)&(this->StatsMap).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->MapCritSec,4000);
  ::FString::FString(&this->CategoryName,param_1);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// Decrement @ 14b2af090

void __thiscall
Metasound::FConcurrentInstanceCounterManager::Decrement
          (FConcurrentInstanceCounterManager *this,FTopLevelAssetPath *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TCounter<__int64,0,__int64,0> *pTVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  FStats *pFVar5;
  atomic<unsigned_int> aVar6;
  
  lpCriticalSection = &this->MapCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar5 = GetOrAddStats(this,param_1);
  if (((pFVar5->TraceCounter).Ptr == (TCounter<__int64,0,__int64,0> *)0x0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1382814220445286324>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundInstanceCounter.cpp"
                         ,0x4c,"TraceCounter"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar1 = (pFVar5->TraceCounter).Ptr;
  pTVar1->Value = pTVar1->Value + -1;
  if (-1 < CountersChannel->Enabled) {
    if (pTVar1->CounterId == (atomic<unsigned_int>)0x0) {
      uVar4 = FCountersTrace::OutputInitCounter
                        (pTVar1->CounterName,TraceCounterType_Int,pTVar1->CounterFlags & 0xf);
      LOCK();
      if (pTVar1->CounterId == (atomic<unsigned_int>)0x0) {
        aVar6._2_2_ = 0;
        aVar6._0_2_ = uVar4;
        pTVar1->CounterId = aVar6;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue(SUB42(pTVar1->CounterId,0),pTVar1->Value);
  }
                    /* WARNING: Could not recover jumptable at 0x00014b2af157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetCountForPath @ 14b2b1020

long64 __thiscall
Metasound::FConcurrentInstanceCounterManager::GetCountForPath
          (FConcurrentInstanceCounterManager *this,FTopLevelAssetPath *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats> *pTVar3;
  long64 lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lpCriticalSection = &this->MapCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar3 = TSet<TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats,0>,FDefaultSetAllocator>
                   *)this,param_1);
  plVar6 = (longlong *)0x0;
  plVar5 = (longlong *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats> *)
                0x0) {
    plVar5 = plVar6;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 == 0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1382814220445286318>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundInstanceCounter.cpp"
                         ,0x52,"TraceCounter");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        lVar4 = (*pcVar1)();
        return lVar4;
      }
    }
    plVar6 = *(longlong **)*plVar5;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return (long64)plVar6;
}

// GetOrAddStats @ 14b2b1340

FStats * __thiscall
Metasound::FConcurrentInstanceCounterManager::GetOrAddStats
          (FConcurrentInstanceCounterManager *this,FTopLevelAssetPath *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  FName FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats> *pTVar10;
  FStats *pFVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  undefined1 *puVar14;
  ForAnyElementType FVar15;
  int iVar16;
  int local_res8;
  FString local_58;
  FTopLevelAssetPath *local_48;
  undefined8 **local_40;
  undefined8 *local_38 [2];
  FString local_28;
  
  lpCriticalSection = &this->MapCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar1 = param_1->AssetName;
  uVar7 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar2 = param_1->PackageName;
  uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar8 = uVar8 + FVar2.Number;
  if (*(int *)&(this->StatsMap).field_0x8 != *(int *)&(this->StatsMap).field_0x34) {
    puVar14 = *(undefined1 **)&(this->StatsMap).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->StatsMap).field_0x38;
    }
    iVar16 = *(int *)(puVar14 +
                     (ulonglong)
                     (*(int *)&(this->StatsMap).field_0x48 - 1U &
                     (uVar8 * 0x40 + uVar7 + FVar1.Number + -0x61c88647 + (uVar8 >> 2) ^ uVar8)) * 4
                     );
    if (iVar16 != -1) {
      lVar3 = *(longlong *)&this->StatsMap;
      do {
        lVar9 = (longlong)iVar16;
        if ((*(FName *)(lVar3 + lVar9 * 0x28) == param_1->PackageName) &&
           (*(FName *)(lVar3 + 8 + lVar9 * 0x28) == param_1->AssetName)) {
          if (iVar16 != -1) {
            pTVar10 = TSet<TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats,0>,FDefaultSetAllocator>
                              *)this,param_1);
            if ((pTVar10 ==
                 (TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats> *)
                 0x0) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Pair != nullptr",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                             ,0x288,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              pFVar11 = (FStats *)(*pcVar4)();
              return pFVar11;
            }
            pFVar11 = (FStats *)&pTVar10->field_0x10;
            goto LAB_14b2b157d;
          }
          break;
        }
        iVar16 = *(int *)(lVar3 + 0x20 + lVar9 * 0x28);
      } while (iVar16 != -1);
    }
  }
  FTopLevelAssetPath::ToString(param_1,&local_28);
  ::FString::PrintfImpl(&local_58,L"%s - %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar15.Data = local_58.Data.AllocatorInstance.Data;
  }
  puVar12 = ::operator_new(0x18);
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    puVar12[1] = FVar15.Data;
    *(undefined4 *)(puVar12 + 2) = 0;
    *(undefined1 *)((longlong)puVar12 + 0x14) = 0;
    *puVar12 = 0;
    uVar6 = FCountersTrace::OutputInitCounter
                      ((wchar_t *)FVar15.Data,TraceCounterType_Int,TraceCounterDisplayHint_None);
    LOCK();
    *(uint *)(puVar12 + 2) = (uint)uVar6;
    UNLOCK();
    if (*(int *)(puVar12 + 2) == 0) {
      pwVar13 = FCountersTrace::AllocAndCopyCounterName((wchar_t *)FVar15.Data);
      *(byte *)((longlong)puVar12 + 0x14) = *(byte *)((longlong)puVar12 + 0x14) | 0x20;
      puVar12[1] = pwVar13;
    }
  }
  local_38[0] = puVar12;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  local_40 = local_38;
  local_48 = param_1;
  TSet<TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FTopLevelAssetPath_const_&,Metasound::FConcurrentInstanceCounterManager::FStats_&&>_>
            ((TSet<TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FTopLevelAssetPath_const_&,Metasound::FConcurrentInstanceCounterManager::FStats_&&>
                      *)&local_res8,(bool *)&local_48);
  puVar12 = local_38[0];
  pFVar11 = (FStats *)(*(longlong *)&this->StatsMap + ((longlong)local_res8 * 5 + 2) * 8);
  if (local_38[0] != (undefined8 *)0x0) {
    if ((*(byte *)((longlong)local_38[0] + 0x14) & 0x20) != 0) {
      FCountersTrace::FreeCounterName((wchar_t *)local_38[0][1]);
    }
    ::operator_delete(puVar12,0x18);
  }
LAB_14b2b157d:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar11;
}

// GetPeakCountForPath @ 14b2b15c0

long64 __thiscall
Metasound::FConcurrentInstanceCounterManager::GetPeakCountForPath
          (FConcurrentInstanceCounterManager *this,FTopLevelAssetPath *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats> *pTVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  lpCriticalSection = &this->MapCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = TSet<TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats,0>,FDefaultSetAllocator>
                     *)this,param_1);
    puVar3 = (undefined1 *)0x0;
    puVar2 = &pTVar1->field_0x10;
    if (pTVar1 == (TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats> *
                  )0x0) {
      puVar2 = puVar3;
    }
    if (puVar2 != (undefined1 *)0x0) {
      puVar3 = *(undefined1 **)(puVar2 + 8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (long64)puVar3;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Increment @ 14b2b17c0

void __thiscall
Metasound::FConcurrentInstanceCounterManager::Increment
          (FConcurrentInstanceCounterManager *this,FTopLevelAssetPath *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TCounter<__int64,0,__int64,0> *pTVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  FStats *pFVar5;
  atomic<unsigned_int> aVar6;
  longlong lVar7;
  
  lpCriticalSection = &this->MapCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar5 = GetOrAddStats(this,param_1);
  if (((pFVar5->TraceCounter).Ptr == (TCounter<__int64,0,__int64,0> *)0x0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1382814220445286332>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundInstanceCounter.cpp"
                         ,0x44,"TraceCounter"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar1 = (pFVar5->TraceCounter).Ptr;
  pTVar1->Value = pTVar1->Value + 1;
  if (-1 < CountersChannel->Enabled) {
    if (pTVar1->CounterId == (atomic<unsigned_int>)0x0) {
      uVar4 = FCountersTrace::OutputInitCounter
                        (pTVar1->CounterName,TraceCounterType_Int,pTVar1->CounterFlags & 0xf);
      LOCK();
      if (pTVar1->CounterId == (atomic<unsigned_int>)0x0) {
        aVar6._2_2_ = 0;
        aVar6._0_2_ = uVar4;
        pTVar1->CounterId = aVar6;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue(SUB42(pTVar1->CounterId,0),pTVar1->Value);
  }
  if (((pFVar5->TraceCounter).Ptr == (TCounter<__int64,0,__int64,0> *)0x0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1382814220445286318>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundInstanceCounter.cpp"
                         ,0x52,"TraceCounter"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar7 = ((pFVar5->TraceCounter).Ptr)->Value;
  if (lVar7 < pFVar5->PeakCount) {
    lVar7 = pFVar5->PeakCount;
  }
  pFVar5->PeakCount = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00014b2b18d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// VisitStats @ 14b2ba6c0

void __thiscall
Metasound::FConcurrentInstanceCounterManager::VisitStats
          (FConcurrentInstanceCounterManager *this,
          TFunctionRef<void___cdecl(FTopLevelAssetPath_const_&,__int64)> *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  TFunctionRef<void___cdecl(FTopLevelAssetPath_const_&,__int64)> *pTVar7;
  FConcurrentInstanceCounterManager *pFVar8;
  bool bVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  TFunctionRef<void___cdecl(FTopLevelAssetPath_const_&,__int64)> *local_res10;
  int local_res18;
  int local_res20;
  undefined8 local_b8;
  LPCRITICAL_SECTION local_b0;
  FConcurrentInstanceCounterManager *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  FConcurrentInstanceCounterManager *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_b0 = (LPCRITICAL_SECTION)&this->MapCritSec;
  local_res10 = param_1;
  if (local_b0 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_b0);
  iVar3 = *(int *)&(this->StatsMap).field_0x28;
  puVar2 = &(this->StatsMap).field_0x10;
  iStack_a0 = 0;
  uStack_9c = 1;
  local_88 = 0;
  iStack_8c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->StatsMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar2;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar10 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14b2ba78e;
      uVar11 = puVar14[lVar10 + 1];
    }
    uStack_9c = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_8c = local_88 + -1 + local_res18;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_14b2ba78e:
  uVar11 = *(uint *)&(this->StatsMap).field_0x28;
  uVar15 = uVar11 & 0xffffffe0;
  iStack_80 = *(int *)&(this->StatsMap).field_0x8 - *(int *)&(this->StatsMap).field_0x34;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = this;
  local_98 = puVar2;
  iStack_84 = iStack_8c;
  local_78 = this;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar7 = local_res10;
  uVar4 = *(uint *)&(this->StatsMap).field_0x28;
  if (uVar11 != uVar4) {
    puVar13 = *(undefined1 **)&(this->StatsMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14b2ba8b0;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    uVar11 = local_res20 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14b2ba8b0:
  while( true ) {
    pFVar8 = local_78;
    if (*(int *)&(local_78->StatsMap).field_0x8 - *(int *)&(local_78->StatsMap).field_0x34 !=
        (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar11) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pFVar8 == this))
    break;
    lVar5 = *(longlong *)&pFVar8->StatsMap;
    lVar10 = lVar5 + (longlong)TStack_70.CurrentBitIndex * 0x28;
    if ((*(longlong *)(lVar5 + 0x10 + (longlong)TStack_70.CurrentBitIndex * 0x28) == 0) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1382814220445286318>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundInstanceCounter.cpp"
                           ,0x52,"TraceCounter"), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_b8 = **(undefined8 **)(lVar10 + 0x10);
    (**(code **)pTVar7)(*(undefined8 *)&pTVar7->field_0x8,lVar10,&local_b8);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
                    /* WARNING: Could not recover jumptable at 0x00014b2ba979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(local_b0);
  return;
}

