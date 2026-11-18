// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// EmitResults @ 145c55c90

void __thiscall
UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults
          (FStatState *this,FQueue param_1,FGPUStat *param_2,FEndOfPipeStats *param_3,
          FCsvProfiler *param_4)

{
  TOptional<FCsvDeclaredStat> *this_00;
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  uchar auVar4 [8];
  double dVar5;
  bool bVar6;
  bool bVar7;
  double dVar8;
  int *piVar9;
  bool bVar10;
  int iVar11;
  TStatId TVar12;
  int *piVar13;
  FScriptContainerElement *pFVar14;
  FCsvDeclaredStat *pFVar15;
  uint uVar16;
  int iVar17;
  ForAnyElementType FVar18;
  byte bStackX_11;
  char cStackX_12;
  FName local_d8;
  int *local_d0;
  int *local_c8;
  FName local_c0;
  FName local_b8;
  FStatMessage local_b0;
  FStatMessage local_a0;
  FStatMessage local_90;
  FString local_80;
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [40];
  
  dVar8 = __real_408f400000000000;
  local_d8 = (FName)((ulonglong)local_d8 & 0xffffffff00000000);
  auVar4 = (uchar  [8])
           ((double)(this->Inclusive).BusyCycles * FGenericPlatformTime::SecondsPerCycle64 *
           __real_408f400000000000);
  TVar12 = FGPUStat::GetStatId(param_2,(FQueue)SUB84(local_70,0),(EType)param_1.field0_0x0);
  local_d8 = *(FName *)(TVar12.StatIdPtr)->Name;
  if (((local_d8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_b0.NameAndInfo.Number = local_d8.Number & 0xffff8fff | 0x8000;
    local_c0 = local_d8;
    local_b0.StatData.Pad = auVar4;
    local_b0.NameAndInfo.Index.Value = local_d8.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage((FThreadStats *)param_3,&local_b0);
    FStatsTrace::Set(&local_c0,(double)auVar4);
    if (*(int *)&param_3->field_0x44 == 0) {
      FThreadStats::Flush((FThreadStats *)param_3,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats((FThreadStats *)param_3,false,false);
    }
  }
  auVar4 = (uchar  [8])
           ((double)(this->Inclusive).IdleCycles * FGenericPlatformTime::SecondsPerCycle64 * dVar8);
  TVar12 = FGPUStat::GetStatId(param_2,(FQueue)SUB84(local_68,0),(EType)param_1.field0_0x0);
  local_d8 = *(FName *)(TVar12.StatIdPtr)->Name;
  if (((local_d8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_a0.NameAndInfo.Number = local_d8.Number & 0xffff8fff | 0x8000;
    local_b8 = local_d8;
    local_a0.StatData.Pad = auVar4;
    local_a0.NameAndInfo.Index.Value = local_d8.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage((FThreadStats *)param_3,&local_a0);
    FStatsTrace::Set(&local_b8,(double)auVar4);
    if (*(int *)&param_3->field_0x44 == 0) {
      FThreadStats::Flush((FThreadStats *)param_3,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats((FThreadStats *)param_3,false,false);
    }
  }
  auVar4 = (uchar  [8])
           ((double)(this->Inclusive).WaitCycles * FGenericPlatformTime::SecondsPerCycle64 * dVar8);
  TVar12 = FGPUStat::GetStatId(param_2,(FQueue)SUB84(local_60,0),(EType)param_1.field0_0x0);
  local_d8 = *(FName *)(TVar12.StatIdPtr)->Name;
  if (((local_d8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_90.NameAndInfo.Number = local_d8.Number & 0xffff8fff | 0x8000;
    local_90.StatData.Pad = auVar4;
    local_90.NameAndInfo.Index.Value = local_d8.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage((FThreadStats *)param_3,&local_90);
    FStatsTrace::Set(&local_d8,(double)auVar4);
    if (*(int *)&param_3->field_0x44 == 0) {
      FThreadStats::Flush((FThreadStats *)param_3,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats((FThreadStats *)param_3,false,false);
    }
  }
  if (((param_4 != (FCsvProfiler *)0x0) && (param_1.field0_0x0._0_1_ == '\0')) &&
     (cStackX_12 = param_1.field0_0x0._2_1_, cStackX_12 == '\0')) {
    this_00 = &param_2->CsvStat;
    if ((param_2->CsvStat).bIsSet == false) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
           ::__l8::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
                               ::__l8::_thread_safe_static_guard_0__),
         `public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
         ::__l8::_thread_safe_static_guard_0__ == -1)) {
        atexit(`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults'::__l8::
               _dynamic_atexit_destructor_for__CsvGPUCategories__);
        _Init_thread_footer(&`public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
                             ::__l8::_thread_safe_static_guard_0__);
      }
      bStackX_11 = param_1.field0_0x0._1_1_;
      uVar16 = bStackX_11 + 1;
      if (`public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
          ::__l8::CsvGPUCategories.ArrayNum <= (int)(uint)bStackX_11) {
        if (`public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
            ::__l8::CsvGPUCategories.ArrayNum < (int)uVar16) {
          iVar17 = uVar16 - `public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
                            ::__l8::CsvGPUCategories.ArrayNum;
          iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,8,iVar17,
                              &`public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
                               ::__l8::CsvGPUCategories.AllocatorInstance,
                              &`public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
                               ::__l8::CsvGPUCategories.ArrayNum,
                              &`public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
                               ::__l8::CsvGPUCategories.ArrayMax);
          memset(`public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
                 ::__l8::CsvGPUCategories.AllocatorInstance.Data + (longlong)iVar11 * 8,0,
                 (longlong)iVar17 << 3);
        }
        else if ((int)uVar16 <
                 `public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
                 ::__l8::CsvGPUCategories.ArrayNum) {
          iVar11 = `public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
                   ::__l8::CsvGPUCategories.ArrayNum - uVar16;
          if ((iVar11 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (iVar11 != 0) {
            pFVar1 = `public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
                     ::__l8::CsvGPUCategories.AllocatorInstance.Data + (ulonglong)uVar16 * 8;
            DestructItems<TUniquePtr<FCsvCategory,TDefaultDelete<FCsvCategory>_>,int>
                      ((TUniquePtr<FCsvCategory,TDefaultDelete<FCsvCategory>_> *)pFVar1,iVar11);
            iVar17 = (`public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
                      ::__l8::CsvGPUCategories.ArrayNum - iVar11) - uVar16;
            if (iVar17 != 0) {
              memmove(pFVar1,pFVar1 + (longlong)iVar11 * 8,(longlong)iVar17 << 3);
            }
            `public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
            ::__l8::CsvGPUCategories.ArrayNum =
                 `public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
                 ::__l8::CsvGPUCategories.ArrayNum - iVar11;
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&`public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
                            ::__l8::CsvGPUCategories.AllocatorInstance,
                       `public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
                       ::__l8::CsvGPUCategories.ArrayNum,
                       &`public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
                        ::__l8::CsvGPUCategories.ArrayMax);
          }
        }
        if ((`public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
             ::__l8::CsvGPUCategories.ArrayNum <= (int)(uint)bStackX_11) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar1 = `public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
               ::__l8::CsvGPUCategories.AllocatorInstance.Data + (ulonglong)bStackX_11 * 8;
      if (*(longlong *)
           (`public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
            ::__l8::CsvGPUCategories.AllocatorInstance.Data + (ulonglong)bStackX_11 * 8) == 0) {
        if (bStackX_11 == 0) {
          piVar13 = ::operator_new(0x18);
          if (piVar13 == (int *)0x0) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13[2] = 0;
            piVar13[3] = 0;
            piVar13[4] = 0;
            piVar13[5] = 0;
            ::FString::operator=((FString *)(piVar13 + 2),L"GPU");
            iVar11 = FCsvProfiler::RegisterCategory((FString *)(piVar13 + 2),true,false);
            *piVar13 = iVar11;
          }
          pFVar14 = (FScriptContainerElement *)&local_c8;
          bVar7 = false;
          bVar6 = false;
          bVar10 = true;
          local_c8 = piVar13;
        }
        else {
          ::FString::PrintfImpl(&local_80,L"GPU%d");
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_80.Data.ArrayNum != 0) {
            FVar18.Data = local_80.Data.AllocatorInstance.Data;
          }
          piVar13 = ::operator_new(0x18);
          if (piVar13 == (int *)0x0) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13[2] = 0;
            piVar13[3] = 0;
            piVar13[4] = 0;
            piVar13[5] = 0;
            ::FString::operator=((FString *)(piVar13 + 2),(wchar_t *)FVar18.Data);
            iVar11 = FCsvProfiler::RegisterCategory((FString *)(piVar13 + 2),true,false);
            *piVar13 = iVar11;
          }
          pFVar14 = (FScriptContainerElement *)&local_d0;
          bVar7 = true;
          bVar6 = true;
          bVar10 = false;
          local_d0 = piVar13;
        }
        if (pFVar1 != pFVar14) {
          pvVar2 = *(void **)pFVar1;
          *(int **)pFVar1 = piVar13;
          *(undefined8 *)pFVar14 = 0;
          if (pvVar2 != (void *)0x0) {
            if (*(void **)((longlong)pvVar2 + 8) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)pvVar2 + 8));
            }
            ::operator_delete(pvVar2,0x18);
          }
        }
        piVar9 = local_c8;
        piVar13 = local_d0;
        if ((bVar10) && (local_c8 != (int *)0x0)) {
          if (*(void **)(local_c8 + 2) != (void *)0x0) {
            FMemory::Free(*(void **)(local_c8 + 2));
          }
          ::operator_delete(piVar9,0x18);
        }
        if ((bVar6) && (piVar13 != (int *)0x0)) {
          if (*(void **)(piVar13 + 2) != (void *)0x0) {
            FMemory::Free(*(void **)(piVar13 + 2));
          }
          ::operator_delete(piVar13,0x18);
        }
        if ((bVar7) && (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
      }
      uVar16 = **(uint **)pFVar1;
      ::FName::FName((FName *)this_00,param_2->StatName);
      (param_2->CsvStat).TypedValue.CategoryIndex = uVar16;
      FCsvProfilerTrace::OutputDeclaredStat((FName *)this_00,uVar16);
      (param_2->CsvStat).bIsSet = true;
    }
    dVar5 = (double)((this->Exclusive).WaitCycles + (this->Exclusive).BusyCycles) *
            FGenericPlatformTime::SecondsPerCycle64;
    pFVar15 = TOptional<FCsvDeclaredStat>::operator->(this_00);
    uVar16 = pFVar15->CategoryIndex;
    pFVar15 = TOptional<FCsvDeclaredStat>::operator->(this_00);
    FCsvProfiler::RecordEndOfPipeCustomStat(&pFVar15->Name,uVar16,dVar5 * dVar8,Set);
  }
  return;
}

