// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 7

// FVerseAnalyzer @ 14d3cd530

FVerseAnalyzer * __thiscall
TraceServices::FVerseAnalyzer::FVerseAnalyzer
          (FVerseAnalyzer *this,IAnalysisSession *param_1,FTimingProfilerProvider *param_2)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FVerseAnalyzer_TraceServices__6B_;
  (this->LastSampleStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastSampleStack).ArrayNum = 0;
  (this->LastSampleStack).ArrayMax = 0;
  *(undefined8 *)&this->Timers = 0;
  *(undefined8 *)&(this->Timers).field_0x8 = 0;
  *(undefined8 *)&(this->Timers).field_0x20 = 0;
  this->LastSampleTime = 0.0;
  this->NumSamples = 0;
  this->MaxStackSize = 0;
  this->TimingProfilerProvider = param_2;
  *(undefined4 *)&(this->Timers).field_0x28 = 0;
  *(undefined4 *)&(this->Timers).field_0x2c = 0x80;
  *(undefined4 *)&(this->Timers).field_0x34 = 0;
  *(undefined4 *)&(this->Timers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Timers).field_0x40 = 0;
  *(undefined4 *)&(this->Timers).field_0x48 = 0;
  this->UnknownTimerId = 0;
  this->BytecodeTimerId = 0;
  this->NativeTimerId = 0;
  this->NumVerseTimers = 0;
  return this;
}

// GetUnknownVerseTimerId @ 14d3e39d0

uint __thiscall TraceServices::FVerseAnalyzer::GetUnknownVerseTimerId(FVerseAnalyzer *this)

{
  IAnalysisSession *pIVar1;
  uint uVar2;
  longlong *plVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  if (this->UnknownTimerId == 0) {
    pIVar1 = this->Session;
    (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1);
    plVar3 = &this->TimingProfilerProvider->_padding_;
    local_18 = L"<unknown>";
    uStack_10 = 9;
    uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,3,&local_18);
    this->NumVerseTimers = this->NumVerseTimers + 1;
    this->UnknownTimerId = uVar2;
    (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1);
    return this->UnknownTimerId;
  }
  return this->UnknownTimerId;
}

// GetVerseBytecodeTimerId @ 14d3e3be0

uint __thiscall TraceServices::FVerseAnalyzer::GetVerseBytecodeTimerId(FVerseAnalyzer *this)

{
  IAnalysisSession *pIVar1;
  uint uVar2;
  longlong *plVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  if (this->BytecodeTimerId == 0) {
    pIVar1 = this->Session;
    (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1);
    plVar3 = &this->TimingProfilerProvider->_padding_;
    local_18 = L">bytecode";
    uStack_10 = 9;
    uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,3,&local_18);
    this->NumVerseTimers = this->NumVerseTimers + 1;
    this->BytecodeTimerId = uVar2;
    (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1);
    return this->BytecodeTimerId;
  }
  return this->BytecodeTimerId;
}

// GetVerseNativeTimerId @ 14d3e3c80

uint __thiscall TraceServices::FVerseAnalyzer::GetVerseNativeTimerId(FVerseAnalyzer *this)

{
  IAnalysisSession *pIVar1;
  uint uVar2;
  longlong *plVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  if (this->NativeTimerId == 0) {
    pIVar1 = this->Session;
    (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1);
    plVar3 = &this->TimingProfilerProvider->_padding_;
    local_18 = L">native";
    uStack_10 = 7;
    uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,3,&local_18);
    this->NumVerseTimers = this->NumVerseTimers + 1;
    this->NativeTimerId = uVar2;
    (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1);
    return this->NativeTimerId;
  }
  return this->NativeTimerId;
}

// OnAnalysisBegin @ 14d3e97a0

void __thiscall
TraceServices::FVerseAnalyzer::OnAnalysisBegin(FVerseAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"VerseVMSampler","StringEvent",0);
  (**(code **)*pFVar1)(pFVar1,1,"VerseVMSampler","SampleEvent",0);
  (**(code **)*pFVar1)(pFVar1,2,"VerseVMSampler","NativeSampleEvent",0);
  (**(code **)*pFVar1)(pFVar1,0,"Verse","DeclareString",0);
  (**(code **)*pFVar1)(pFVar1,1,"Verse","BytecodeSample",0);
  (**(code **)*pFVar1)(pFVar1,2,"Verse","NativeSample",0);
  return;
}

// OnAnalysisEnd @ 14d3eac50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TraceServices::FVerseAnalyzer::OnAnalysisEnd(FVerseAnalyzer *this)

{
  uint uVar1;
  IAnalysisSession *pIVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  if (this->NumSamples != 0) {
    pIVar2 = this->Session;
    (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2);
    plVar3 = (longlong *)(**(code **)(this->TimingProfilerProvider->_padding_ + 0xb8))();
    uVar5 = SUB84(this->LastSampleTime + __real_3f50624dd2f1a9fc,0);
    if (plVar3 != (longlong *)0x0) {
      uVar1 = (this->LastSampleStack).ArrayNum;
      if (0 < (int)uVar1) {
        uVar4 = (ulonglong)uVar1;
        do {
          (**(code **)(*plVar3 + 0x10))(plVar3,uVar5);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,uVar5);
    }
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,uVar5);
    (this->LastSampleStack).ArrayNum = 0;
    if ((this->LastSampleStack).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->LastSampleStack).AllocatorInstance,0,
                 &(this->LastSampleStack).ArrayMax);
    }
    (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2);
  }
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
           *)&this->Timers);
  if (4 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  return;
}

// OnEvent @ 14d3f8140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

bool __thiscall
TraceServices::FVerseAnalyzer::OnEvent
          (FVerseAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  IAnalysisSession *pIVar3;
  undefined1 *puVar4;
  IAnalysisSession *pIVar5;
  FTimingProfilerProvider *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  ulong64 uVar17;
  FArrayReader *this_00;
  uint *puVar18;
  longlong *plVar19;
  uint *puVar20;
  longlong lVar21;
  longlong *plVar22;
  ForAnyElementType FVar23;
  int iVar24;
  undefined1 *puVar25;
  ulonglong uVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  uint *puVar29;
  uint uVar30;
  IAnalysisSession **ppIVar31;
  FEventData *pFVar32;
  longlong lVar33;
  uint *puVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  char local_268 [8];
  ForAnyElementType local_260;
  undefined8 local_258;
  int local_250;
  uint local_24c;
  FEventData *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  uint local_238;
  uint local_234;
  longlong local_230;
  FString local_228;
  FLLMScope local_218 [2];
  IAnalysisSession **local_210;
  ForAnyElementType local_208;
  undefined8 local_200;
  int local_1f8;
  int local_1f4;
  undefined4 local_1f0;
  uint local_1ec;
  code *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  undefined8 local_1d0;
  TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> local_1c8;
  FCborWriter local_1b8;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  uint *local_188;
  uint *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  FArchiveState local_138;
  longlong local_a8;
  ForAnyElementType *local_a0;
  undefined8 local_98;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name65,L"Insights/FVerseAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_218,LLMScope_Name65,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)&local_1c8.Value,&LLMScope_Name65,true);
  if (param_1 == 0) {
    pFVar32 = param_3->EventData;
    local_24c = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(pFVar32,"Id",0);
    local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.Data.ArrayNum = 0;
    local_228.Data.ArrayMax = 0;
    UE::Trace::IAnalyzer::FEventData::GetString(pFVar32,"Name",&local_228);
    if (6 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    uVar14 = LogTraceServices._0_1_;
    puVar18 = TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
              ::Find((TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
                      *)&this->Timers,local_24c);
    if (puVar18 == (uint *)0x0) {
      pIVar3 = this->Session;
      (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3);
      local_198 = local_228.Data.AllocatorInstance.Data;
      pFVar28 = local_198;
      plVar19 = &this->TimingProfilerProvider->_padding_;
      uVar26 = (ulonglong)(local_228.Data.ArrayNum - 1);
      if (local_228.Data.ArrayNum == 0) {
        uVar26 = 0;
      }
      uStack_190 = (undefined4)uVar26;
      local_198._0_4_ = SUB84(local_228.Data.AllocatorInstance.Data,0);
      local_198._4_4_ = (undefined4)((ulonglong)local_228.Data.AllocatorInstance.Data >> 0x20);
      local_148 = (undefined4)local_198;
      uStack_144 = local_198._4_4_;
      uStack_13c = uStack_18c;
      local_198 = pFVar28;
      uStack_140 = uStack_190;
      local_234 = (**(code **)(*plVar19 + 0x28))(plVar19,CONCAT71((int7)(uVar26 >> 8),3),&local_148)
      ;
      this->NumVerseTimers = this->NumVerseTimers + 1;
      (**(code **)((longlong)*pIVar3 + 0xa8))(pIVar3);
      local_188 = &local_24c;
      local_180 = &local_234;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)&this->Timers,&local_1c8,(bool *)&local_188);
      FVar23.Data = local_228.Data.AllocatorInstance.Data;
    }
    else {
      local_234 = *puVar18;
      FVar23.Data = local_228.Data.AllocatorInstance.Data;
      if (2 < (byte)uVar14) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        FVar23.Data = local_228.Data.AllocatorInstance.Data;
      }
    }
  }
  else {
    if ((param_1 != 1) && (param_1 != 2)) goto LAB_14d3f8ef5;
    pFVar32 = param_3->EventData;
    local_248 = pFVar32;
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(pFVar32,"Cycles",0);
    dVar12 = __real_3f50624dd2f1a9fc;
    if (uVar17 == 0) {
      dVar9 = this->LastSampleTime + __real_3f50624dd2f1a9fc;
    }
    else {
      dVar9 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar17);
    }
    this_00 = UE::Trace::IAnalyzer::FEventData::GetArrayImpl(pFVar32,"Callstack");
    uVar15 = UE::Trace::IAnalyzer::FArrayReader::Num(this_00);
    puVar18 = UE::Trace::IAnalyzer::FArrayReader::GetImpl(this_00,0,local_268);
    puVar34 = (uint *)0x0;
    if (puVar18 == (uint *)0x0) {
LAB_14d3f8297:
      puVar18 = puVar34;
    }
    else {
      iVar24 = -(int)local_268[0];
      if (iVar24 < 0) {
        iVar24 = (int)local_268[0];
      }
      if (iVar24 != 4) goto LAB_14d3f8297;
    }
    if (((int)uVar15 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      uVar14 = (*pcVar8)();
      return (bool)uVar14;
    }
    local_260.Data = (FScriptContainerElement *)0x0;
    local_258 = 0;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if (0 < (int)uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar15,&local_260,0,(int *)((longlong)&local_258 + 4));
    }
    uVar30 = uVar15 - 1;
    if (-1 < (int)uVar30) {
      pFVar28 = (FScriptContainerElement *)(puVar18 + (int)uVar30);
      do {
        uVar16 = 0;
        if ((int)uVar30 < (int)uVar15) {
          uVar16 = ~uVar30 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        if (((local_260.Data <= pFVar28) &&
            (pFVar28 < local_260.Data + (longlong)local_258._4_4_ * 4)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        if ((int)local_258 == local_258._4_4_) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_260,(int *)((longlong)&local_258 + 4));
          local_258 = CONCAT44(local_258._4_4_,iVar24);
        }
        lVar21 = (longlong)(int)local_258;
        local_258 = CONCAT44(local_258._4_4_,(int)local_258 + 1);
        uVar16 = *(uint *)pFVar28;
        pFVar28 = pFVar28 + -4;
        uVar30 = uVar30 - 1;
        *(uint *)(local_260.Data + lVar21 * 4) = uVar16;
        pFVar32 = local_248;
      } while (-1 < (int)uVar30);
    }
    local_1f8 = UE::Trace::IAnalyzer::FEventData::GetValue<int>(pFVar32,"BytecodeOffset",0);
    local_1f4 = UE::Trace::IAnalyzer::FEventData::GetValue<int>(pFVar32,"Line",0);
    lVar21 = (longlong)(int)local_258;
    iVar24 = (this->LastSampleStack).ArrayNum;
    if (this->MaxStackSize < (int)local_258) {
      this->MaxStackSize = (int)local_258;
    }
    local_250 = iVar24;
    if (param_1 == 1) {
      if ((int)local_258 < 0x100) {
        if (6 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
      else if (2 < (byte)LogTraceServices._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
    }
    else if ((int)local_258 < 0x100) {
      if (6 < (byte)LogTraceServices._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
    }
    else if (2 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    dVar10 = this->LastSampleTime;
    if (dVar9 < this->LastSampleTime) {
      bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7674847103272616084>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\VerseTraceAnalysis.cpp"
                          ,0x94,"Time >= LastSampleTime");
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        uVar14 = (*pcVar8)();
        return (bool)uVar14;
      }
      if (2 < (byte)LogTraceServices._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
      dVar9 = this->LastSampleTime;
      dVar10 = dVar9;
    }
    dVar10 = dVar10 + dVar12;
    dVar11 = dVar9 - dVar12;
    if (dVar11 <= 0.0) {
      dVar11 = 0.0;
    }
    uVar15 = 0;
    puVar18 = puVar34;
    local_230 = lVar21;
    if ((dVar11 - dVar12 <= dVar10) &&
       (puVar29 = puVar34, puVar18 = (uint *)0x0, puVar20 = puVar34, 0 < iVar24)) {
      do {
        puVar18 = puVar20;
        if (local_230 <= (longlong)puVar29) break;
        uVar16 = (uint)puVar18;
        uVar30 = 0;
        if ((int)uVar16 < (this->LastSampleStack).ArrayNum) {
          uVar30 = ~uVar16 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        local_248 = (FEventData *)(this->LastSampleStack).AllocatorInstance.Data;
        uVar30 = uVar15;
        if ((int)uVar16 < (int)local_258) {
          uVar30 = ~uVar16 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        if (*(int *)(local_260.Data + (longlong)puVar29 * 4) !=
            *(int *)(local_248 + (longlong)puVar29 * 4)) break;
        puVar18 = (uint *)(ulonglong)(uVar16 + 1);
        puVar29 = (uint *)((longlong)puVar29 + 1);
        puVar20 = puVar18;
      } while ((longlong)puVar29 < (longlong)local_250);
    }
    pIVar3 = this->Session;
    ppIVar31 = &this->Session;
    (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3);
    plVar19 = (longlong *)(**(code **)(this->TimingProfilerProvider->_padding_ + 0xb8))();
    uVar30 = (uint)puVar18;
    if (plVar19 != (longlong *)0x0) {
      dVar12 = (dVar9 + this->LastSampleTime) * __real_3fe0000000000000;
      uVar36 = SUB84(dVar12,0);
      if (dVar12 <= dVar11) {
        uVar36 = SUB84(dVar11,0);
      }
      uVar35 = SUB84(dVar12,0);
      if (dVar10 <= dVar12) {
        uVar35 = SUB84(dVar10,0);
      }
      if ((int)uVar30 < local_250) {
        lVar21 = (longlong)(int)(local_250 - uVar30);
        local_248 = (FEventData *)&this->TimingProfilerProvider;
        local_210 = ppIVar31;
        do {
          (**(code **)(*plVar19 + 0x10))(plVar19,uVar35);
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      local_210 = &this->Session;
      local_248 = (FEventData *)&this->TimingProfilerProvider;
      if (this->NumSamples != 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19,uVar35);
      }
      local_1d8 = (longlong)(int)uVar30;
      pFVar32 = local_248;
      puVar29 = puVar18;
      if (local_1d8 < local_230) {
        do {
          lVar21 = local_1d8;
          uVar27 = (uint)puVar29;
          local_238 = 0xffffffff;
          uVar16 = uVar15;
          if ((int)uVar27 < (int)local_258) {
            uVar16 = ~uVar27 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            uVar14 = (*pcVar8)();
            return (bool)uVar14;
          }
          if (*(int *)&(this->Timers).field_0x8 != *(int *)&(this->Timers).field_0x34) {
            puVar4 = *(undefined1 **)&(this->Timers).field_0x40;
            puVar25 = &(this->Timers).field_0x38;
            if (puVar4 != (undefined1 *)0x0) {
              puVar25 = puVar4;
            }
            uVar16 = *(uint *)(puVar25 +
                              (ulonglong)
                              (*(int *)&(this->Timers).field_0x48 - 1U &
                              *(uint *)(local_260.Data + lVar21 * 4)) * 4);
            if (uVar16 != 0xffffffff) {
              do {
                puVar29 = (uint *)(*(longlong *)&this->Timers + (longlong)(int)uVar16 * 0x10);
                if (*puVar29 == *(uint *)(local_260.Data + lVar21 * 4)) {
                  puVar20 = puVar29 + 1;
                  if (puVar29 == (uint *)0x0) {
                    puVar20 = puVar34;
                  }
                  if (puVar20 != (uint *)0x0) {
                    local_238 = *puVar20;
                    goto LAB_14d3f88b8;
                  }
                  break;
                }
                uVar16 = puVar29[2];
              } while (uVar16 != 0xffffffff);
            }
          }
          if (this->UnknownTimerId == 0) {
            pIVar5 = this->Session;
            (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5);
            local_248 = (FEventData *)0x1507c09a0;
            plVar22 = &this->TimingProfilerProvider->_padding_;
            uStack_240 = 9;
            local_178 = 0x507c09a0;
            uStack_174 = 1;
            uStack_170 = 9;
            uStack_16c = uStack_23c;
            uVar16 = (**(code **)(*plVar22 + 0x28))(plVar22,3,&local_178);
            this->NumVerseTimers = this->NumVerseTimers + 1;
            this->UnknownTimerId = uVar16;
            (**(code **)((longlong)*pIVar5 + 0xa8))(pIVar5);
            lVar21 = local_1d8;
          }
          local_238 = this->UnknownTimerId;
LAB_14d3f88b8:
          (**(code **)(*plVar19 + 8))(plVar19,uVar36,&local_238);
          local_1d8 = lVar21 + 1;
          puVar29 = (uint *)(ulonglong)(uVar27 + 1);
        } while (local_1d8 < local_230);
        local_210 = &this->Session;
        pFVar32 = (FEventData *)&this->TimingProfilerProvider;
      }
      ppIVar31 = &this->Session;
      if (param_1 == 1) {
        local_208.Data = (FScriptContainerElement *)0x0;
        local_200 = 0;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0x20,&local_208,0,(int *)((longlong)&local_200 + 4));
        local_1d0 = 0;
        local_138._padding_ = 0;
        local_138.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        local_138.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        local_138.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
        local_138.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
        local_138._40_8_ = 0;
        local_138.ArSerializingDefaults = 0;
        local_138.ArPortFlags = 0;
        local_138.ArMaxSerializeSize = 0;
        local_138.ArUEVer.FileVersionUE4 = 0;
        local_138.ArUEVer.FileVersionUE5 = 0;
        local_138.ArLicenseeUEVer = 0;
        local_138.ArEngineVer.Major = 0;
        local_138.ArEngineVer.Minor = 0;
        local_138.ArEngineVer.Patch = 0;
        local_138.ArEngineVer._6_2_ = 0;
        local_138.ArEngineVer.Changelist = 0;
        local_138.CustomVersionContainer = (FCustomVersionContainer *)0x0;
        local_138.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        local_138.SavePackageData = (FArchiveSavePackageData *)0x0;
        local_138.SerializedProperty = (FProperty *)0x0;
        local_138.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        local_138.bCustomVersionsAreReset = false;
        local_138._129_7_ = 0;
        local_138.NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(&local_138);
        local_a8 = 0;
        local_138._padding_ =
             (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
        local_a0 = &local_208;
        local_98 = 0;
        FArchiveState::SetIsSaving(&local_138,true);
        (**(code **)(local_138._padding_ + 0x108))(&local_138,0);
        local_a8 = (longlong)(int)local_200;
        local_138._padding_ = (longlong)&___7FMemoryWriter__6B_;
        FCborWriter::FCborWriter(&local_1b8,(FArchive *)&local_138,BigEndian);
        FCborWriter::WriteContainerStart(&local_1b8,Map,2);
        FCborWriter::WriteValue(&local_1b8,"Offset",6);
        FCborWriter::WriteValue(&local_1b8,(longlong)local_1f8);
        FCborWriter::WriteValue(&local_1b8,"Line",4);
        FCborWriter::WriteValue(&local_1b8,(longlong)local_1f4);
        FCborWriter::~FCborWriter(&local_1b8);
        FArchive::~FArchive((FArchive *)&local_138);
        pFVar6 = this->TimingProfilerProvider;
        local_1e8 = *(code **)(pFVar6->_padding_ + 0x58);
        if (this->BytecodeTimerId == 0) {
          pIVar5 = this->Session;
          (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5);
          local_248 = (FEventData *)0x152b0f580;
          plVar22 = &this->TimingProfilerProvider->_padding_;
          uStack_240 = 9;
          local_168 = 0x52b0f580;
          uStack_164 = 1;
          uStack_160 = 9;
          uStack_15c = uStack_23c;
          uVar16 = (**(code **)(*plVar22 + 0x28))(plVar22,3,&local_168);
          this->NumVerseTimers = this->NumVerseTimers + 1;
          this->BytecodeTimerId = uVar16;
          (**(code **)((longlong)*pIVar5 + 0xa8))(pIVar5);
          ppIVar31 = local_210;
        }
        local_1f0 = (*local_1e8)(&pFVar6->_padding_,this->BytecodeTimerId,&local_208);
        (**(code **)(*plVar19 + 8))(plVar19,uVar36,&local_1f0);
        if (local_208.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data);
        }
      }
      else {
        if (this->NativeTimerId == 0) {
          pIVar5 = *ppIVar31;
          (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5);
          local_1e8 = (code *)0x152b0f598;
          uStack_1e0 = 7;
          local_158 = 0x52b0f598;
          uStack_154 = 1;
          uStack_150 = 7;
          uStack_14c = uStack_1dc;
          uVar16 = (**(code **)(*(longlong *)(*(longlong *)pFVar32 + 0x10) + 0x28))
                             ((longlong *)(*(longlong *)pFVar32 + 0x10),3,&local_158);
          this->NumVerseTimers = this->NumVerseTimers + 1;
          this->NativeTimerId = uVar16;
          (**(code **)((longlong)*pIVar5 + 0xa8))(pIVar5);
          ppIVar31 = local_210;
        }
        local_1ec = this->NativeTimerId;
        (**(code **)(*plVar19 + 8))(plVar19,uVar36,&local_1ec);
      }
    }
    (**(code **)((longlong)**ppIVar31 + 0x38))(*ppIVar31,SUB84(dVar9,0));
    (**(code **)((longlong)*pIVar3 + 0xa8))(pIVar3);
    if ((int)uVar30 < local_250) {
      uVar27 = local_250 - uVar30;
      uVar16 = uVar15;
      if (local_250 <= (this->LastSampleStack).ArrayNum) {
        uVar16 = ~(uVar27 | uVar30) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar13)) {
        pcVar8 = (code *)swi(3);
        uVar14 = (*pcVar8)();
        return (bool)uVar14;
      }
      if (uVar27 != 0) {
        pFVar28 = (this->LastSampleStack).AllocatorInstance.Data + (longlong)(int)uVar30 * 4;
        iVar24 = ((this->LastSampleStack).ArrayNum - uVar27) - uVar30;
        if (iVar24 != 0) {
          memmove(pFVar28,pFVar28 + (longlong)(int)uVar27 * 4,(longlong)iVar24 << 2);
        }
        piVar1 = &(this->LastSampleStack).ArrayNum;
        *piVar1 = *piVar1 - uVar27;
      }
    }
    lVar21 = local_230;
    lVar33 = (longlong)(int)uVar30;
    if (lVar33 < local_230) {
      pTVar2 = &this->LastSampleStack;
      do {
        uVar16 = (uint)puVar18;
        uVar30 = uVar15;
        if ((int)uVar16 < (int)local_258) {
          uVar30 = ~uVar16 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        pFVar7 = (pTVar2->AllocatorInstance).Data;
        pFVar28 = local_260.Data + lVar33 * 4;
        if (((pFVar7 <= pFVar28) &&
            (pFVar28 < pFVar7 + (longlong)(this->LastSampleStack).ArrayMax * 4)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        iVar24 = (this->LastSampleStack).ArrayNum;
        if (iVar24 == (this->LastSampleStack).ArrayMax) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar2->AllocatorInstance,&(this->LastSampleStack).ArrayMax);
        }
        (this->LastSampleStack).ArrayNum = iVar24 + 1;
        puVar18 = (uint *)(ulonglong)(uVar16 + 1);
        lVar33 = lVar33 + 1;
        *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar24 * 4) =
             *(undefined4 *)pFVar28;
      } while (lVar33 < lVar21);
    }
    this->NumSamples = this->NumSamples + 1;
    this->LastSampleTime = dVar9;
    FVar23.Data = local_260.Data;
  }
  if (FVar23.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar23.Data);
  }
LAB_14d3f8ef5:
  FMemScope::~FMemScope((FMemScope *)&local_1c8.Value);
  FLLMScope::~FLLMScope(local_218);
  return true;
}

