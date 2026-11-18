// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 6

// FOldGpuProfilerAnalyzer @ 14d3ccc50

FOldGpuProfilerAnalyzer * __thiscall
TraceServices::FOldGpuProfilerAnalyzer::FOldGpuProfilerAnalyzer
          (FOldGpuProfilerAnalyzer *this,FAnalysisSession *param_1,FTimingProfilerProvider *param_2)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FOldGpuProfilerAnalyzer_TraceServices__6B_;
  *(undefined8 *)&this->EventTypeMap = 0;
  *(undefined8 *)&(this->EventTypeMap).field_0x8 = 0;
  *(undefined8 *)&(this->EventTypeMap).field_0x20 = 0;
  this->TimingProfilerProvider = param_2;
  *(undefined4 *)&(this->EventTypeMap).field_0x28 = 0;
  *(undefined4 *)&(this->EventTypeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EventTypeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EventTypeMap).field_0x34 = 0;
  *(undefined8 *)&(this->EventTypeMap).field_0x40 = 0;
  *(undefined4 *)&(this->EventTypeMap).field_0x48 = 0;
  this->MinTime = 2.2250738585072014e-308;
  this->MinTime2 = 2.2250738585072014e-308;
  this->NumFrames = 0;
  this->NumFramesWithErrors = 0;
  return this;
}

// OnAnalysisBegin @ 14d3e9280

void __thiscall
TraceServices::FOldGpuProfilerAnalyzer::OnAnalysisBegin
          (FOldGpuProfilerAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"GpuProfiler","EventSpec",0);
  (**(code **)*pFVar1)(pFVar1,1,"GpuProfiler","Frame",0);
  (**(code **)*pFVar1)(pFVar1,2,"GpuProfiler","Frame2",0);
  return;
}

// OnAnalysisEnd @ 14d3eab10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TraceServices::FOldGpuProfilerAnalyzer::OnAnalysisEnd(FOldGpuProfilerAnalyzer *this)

{
  if ((this->NumFramesWithErrors != 0) && (1 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if (((this->NumFrames != 0) ||
      (0 < *(int *)&(this->EventTypeMap).field_0x8 - *(int *)&(this->EventTypeMap).field_0x34)) &&
     (4 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    return;
  }
  return;
}

// OnEvent @ 14d3f54f0

bool __thiscall
TraceServices::FOldGpuProfilerAnalyzer::OnEvent
          (FOldGpuProfilerAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  FLLMScope local_res10 [2];
  FMemScope local_18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name61,L"Insights/FOldGpuProfilerAnalyzer");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name61,false,None,Default,true);
  FMemScope::FMemScope(local_18,&LLMScope_Name61,true);
  if (param_1 == 0) {
    OnEventSpec(this,param_3);
  }
  else if (param_1 == 1) {
    OnFrame(this,param_3,0);
  }
  else if (param_1 == 2) {
    OnFrame(this,param_3,1);
  }
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res10);
  return true;
}

// OnEventSpec @ 14d3f9c50

void __thiscall
TraceServices::FOldGpuProfilerAnalyzer::OnEventSpec
          (FOldGpuProfilerAnalyzer *this,FOnEventContext *param_1)

{
  FEventData *this_00;
  FAnalysisSession *pFVar1;
  code *pcVar2;
  FTimingProfilerProvider *pFVar3;
  uint uVar4;
  uint uVar5;
  FArrayReader *this_01;
  wchar_t *_Str;
  uint *puVar6;
  size_t sVar7;
  int iVar8;
  TPairInitializer<unsigned___int64_&&,unsigned_int_const_&> local_res8;
  ulonglong local_res18;
  wchar_t *local_48;
  uint **ppuStack_40;
  
  this_00 = param_1->EventData;
  uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"EventType",0);
  this_01 = UE::Trace::IAnalyzer::FEventData::GetArrayImpl(this_00,"Name");
  uVar5 = UE::Trace::IAnalyzer::FArrayReader::Num(this_01);
  _Str = UE::Trace::IAnalyzer::FArrayReader::GetImpl(this_01,0,(schar *)&local_res8);
  if (_Str != (wchar_t *)0x0) {
    iVar8 = -(int)(char)local_res8.Key;
    if (iVar8 < 0) {
      iVar8 = (int)(char)local_res8.Key;
    }
    if (iVar8 == 2) {
      if ((0 < (int)uVar5) && (_Str[(longlong)(int)uVar5 + -1] == L'\0')) {
        uVar5 = uVar5 - 1;
      }
      goto LAB_14d3f9cdb;
    }
  }
  _Str = (wchar_t *)0x0;
  uVar5 = 0;
LAB_14d3f9cdb:
  puVar6 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)&this->EventTypeMap,(ulonglong)uVar4);
  pFVar1 = this->Session;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0xa0);
  local_48 = _Str;
  if (puVar6 == (uint *)0x0) {
    (*pcVar2)();
    pFVar3 = this->TimingProfilerProvider;
    pcVar2 = *(code **)(pFVar3->_padding_ + 0x80);
    if (uVar5 == 0xffffffff) {
      sVar7 = wcslen(_Str);
      uVar5 = (uint)sVar7;
    }
    ppuStack_40 = (uint **)CONCAT44(ppuStack_40._4_4_,uVar5);
    local_res8.Value._0_4_ = (*pcVar2)(&pFVar3->_padding_,&local_48);
    (**(code **)(pFVar1->_padding_ + 0xa8))(pFVar1);
    local_48 = (wchar_t *)&local_res18;
    ppuStack_40 = &local_res8.Value;
    local_res18 = (ulonglong)uVar4;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_&&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)&this->EventTypeMap,&local_res8,(bool *)&local_48);
  }
  else {
    (*pcVar2)(pFVar1);
    pFVar3 = this->TimingProfilerProvider;
    pcVar2 = *(code **)(pFVar3->_padding_ + 0x38);
    if (uVar5 == 0xffffffff) {
      sVar7 = wcslen(_Str);
      uVar5 = (uint)sVar7;
    }
    ppuStack_40 = (uint **)CONCAT44(ppuStack_40._4_4_,uVar5);
    (*pcVar2)(&pFVar3->_padding_,*puVar6,&local_48);
    (**(code **)(pFVar1->_padding_ + 0xa8))(pFVar1);
  }
  return;
}

// OnFrame @ 14d3f9e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FOldGpuProfilerAnalyzer::OnFrame
          (FOldGpuProfilerAnalyzer *this,FOnEventContext *param_1,uint param_2)

{
  double dVar1;
  FEventData *this_00;
  code *pcVar2;
  byte bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pTVar9;
  bool bVar10;
  uint uVar11;
  undefined4 uVar12;
  FArrayReader *this_01;
  uint *puVar13;
  byte bVar14;
  longlong *plVar15;
  int iVar16;
  undefined1 *puVar17;
  FAnalysisSession *pFVar18;
  undefined1 *puVar19;
  uint *puVar20;
  ulonglong uVar21;
  uint *puVar22;
  int iVar23;
  longlong lVar24;
  double *pdVar25;
  ulong64 uVar26;
  double dVar27;
  char local_res8 [8];
  FOnEventContext *local_res10;
  char local_res18;
  TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *local_res20;
  undefined1 auStack_128 [32];
  uint local_108;
  uint local_104;
  ulong64 local_100;
  TPairInitializer<unsigned___int64_&&,unsigned_int_const_&> local_f8;
  ulonglong local_e8;
  double *local_e0;
  uint *local_d8;
  FAnalysisSession *local_d0;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong *local_b8;
  TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  **local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  pFVar18 = this->Session;
  this_00 = param_1->EventData;
  local_res10 = param_1;
  local_d0 = pFVar18;
  (**(code **)(pFVar18->_padding_ + 0xa0))(pFVar18);
  if (param_2 == 0) {
    local_res20 = FTimingProfilerProvider::EditGpuTimeline(this->TimingProfilerProvider);
  }
  else {
    local_res20 = FTimingProfilerProvider::EditGpu2Timeline(this->TimingProfilerProvider);
  }
  lVar24 = 0x68;
  if (param_2 != 0) {
    lVar24 = 0x70;
  }
  pdVar25 = (double *)((longlong)&this->_padding_ + lVar24);
  local_e0 = pdVar25;
  this_01 = UE::Trace::IAnalyzer::FEventData::GetArrayImpl(this_00,"Data");
  puVar13 = UE::Trace::IAnalyzer::FArrayReader::GetImpl(this_01,0,local_res8);
  if (puVar13 != (uint *)0x0) {
    iVar16 = -(int)local_res8[0];
    if (iVar16 < 0) {
      iVar16 = (int)local_res8[0];
    }
    if (iVar16 == 1) goto LAB_14d3f9ec9;
  }
  puVar13 = (uint *)0x0;
LAB_14d3f9ec9:
  uVar11 = UE::Trace::IAnalyzer::FArrayReader::Num(this_01);
  puVar20 = (uint *)((ulonglong)uVar11 + (longlong)puVar13);
  local_d8 = puVar20;
  local_f8.Value =
       (uint *)UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                         (this_00,"CalibrationBias",0);
  local_100 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                        (this_00,"TimestampBase",0);
  local_104 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                        (this_00,"RenderingFrameNumber",0);
  pTVar9 = local_res20;
  this->NumFrames = this->NumFrames + 1;
  dVar7 = __real_0010000000000000;
  dVar6 = __real_40ac200000000000;
  dVar5 = __real_3eb0c6f7a0b5ed8d;
  iVar16 = 0;
  local_res18 = '\0';
  dVar27 = 0.0;
  iVar23 = iVar16;
  if (puVar13 < puVar20) {
    do {
      uVar21 = 0;
      bVar14 = 0;
      do {
        puVar20 = puVar13;
        puVar22 = (uint *)((longlong)puVar20 + 1);
        bVar3 = bVar14 & 0x3f;
        bVar14 = bVar14 + 7;
        uVar21 = uVar21 | (ulonglong)((byte)*puVar20 & 0x7f) << bVar3;
        puVar13 = puVar22;
      } while ((char)(byte)*puVar20 < '\0');
      uVar26 = local_100 + (uVar21 >> 1);
      local_100 = uVar26;
      dVar27 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(local_res10->EventTime,0);
      dVar27 = dVar27 + (double)((longlong)local_f8.Value + uVar26) * dVar5;
      iVar16 = iVar23;
      if (0.0 <= dVar27) {
        dVar1 = *pdVar25;
        dVar4 = dVar27;
        if ((dVar1 + dVar6 < dVar27) && (dVar1 != dVar7)) {
          local_res18 = '\x01';
          dVar4 = dVar1;
        }
        dVar27 = dVar1;
        if (dVar1 <= dVar4) {
          dVar27 = dVar4;
        }
        *pdVar25 = dVar27;
        if ((uVar21 & 1) == 0) {
          (**(code **)(pTVar9->_padding_ + 0x10))();
          iVar16 = iVar23 + -1;
          if (iVar23 == 0) {
            iVar16 = iVar23;
          }
        }
        else {
          uVar21 = (ulonglong)*puVar22;
          if (*(int *)&(this->EventTypeMap).field_0x8 != *(int *)&(this->EventTypeMap).field_0x34) {
            puVar19 = *(undefined1 **)&(this->EventTypeMap).field_0x40;
            puVar17 = &(this->EventTypeMap).field_0x38;
            if (puVar19 != (undefined1 *)0x0) {
              puVar17 = puVar19;
            }
            iVar16 = *(int *)(puVar17 +
                             (ulonglong)(*(int *)&(this->EventTypeMap).field_0x48 - 1U & *puVar22) *
                             4);
            if (iVar16 != -1) {
              do {
                if (*(ulonglong *)(*(longlong *)&this->EventTypeMap + (longlong)iVar16 * 0x18) ==
                    uVar21) {
                  if (iVar16 != -1) {
                    puVar13 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                              ::FindChecked((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                                             *)&this->EventTypeMap,uVar21);
                    local_108 = *puVar13;
                    lVar24 = pTVar9->_padding_;
                    puVar19 = auStack_128;
                    goto LAB_14d3fa144;
                  }
                  break;
                }
                iVar16 = *(int *)(*(longlong *)&this->EventTypeMap + 0x10 + (longlong)iVar16 * 0x18)
                ;
              } while (iVar16 != -1);
            }
          }
          local_c8 = L"<unknown>";
          plVar15 = &this->TimingProfilerProvider->_padding_;
          uStack_c0 = 9;
          local_a8 = 0x507c09a0;
          uStack_a4 = 1;
          uStack_a0 = 9;
          uStack_9c = uStack_bc;
          uVar12 = (**(code **)(*plVar15 + 0x80))(plVar15,&local_a8);
          local_res20 = (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                         *)CONCAT44(local_res20._4_4_,uVar12);
          local_b8 = &local_e8;
          local_b0 = &local_res20;
          local_e8 = uVar21;
          TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<unsigned___int64_&&,unsigned_int_const_&>_>
                    ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                      *)&this->EventTypeMap,&local_f8,(bool *)&local_b8);
          lVar24 = pTVar9->_padding_;
          puVar19 = (undefined1 *)register0x00000020;
LAB_14d3fa144:
          (**(code **)(lVar24 + 8))(&pTVar9->_padding_,dVar27,puVar19 + 0x20);
          puVar13 = (uint *)((longlong)puVar20 + 5);
          pdVar25 = local_e0;
          iVar16 = iVar23 + 1;
        }
      }
      else {
        local_res18 = '\x01';
        puVar13 = (uint *)((longlong)puVar20 + 5);
        if ((uVar21 & 1) == 0) {
          puVar13 = puVar22;
        }
      }
      pFVar18 = local_d0;
      puVar20 = local_d8;
      iVar23 = iVar16;
    } while (puVar13 < local_d8);
  }
  cVar8 = local_res18;
  if ((puVar13 != puVar20) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("BufferPtr == BufferEnd",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\OldGpuProfilerTraceAnalysis.cpp"
                          ,0xcd,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((iVar16 != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentDepth == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\OldGpuProfilerTraceAnalysis.cpp"
                          ,0xce,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((cVar8 != '\0') &&
      (this->NumFramesWithErrors = this->NumFramesWithErrors + 1, this->NumFramesWithErrors < 0x65))
     && (1 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  (**(code **)(this->Session->_padding_ + 0x38))(this->Session,dVar27);
                    /* WARNING: Could not recover jumptable at 0x00014d3fa2b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar18->_padding_ + 0xa8))(pFVar18);
  return;
}

