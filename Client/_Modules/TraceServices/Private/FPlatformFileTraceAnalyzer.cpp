// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 3

// FPlatformFileTraceAnalyzer @ 14d3cccd0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

FPlatformFileTraceAnalyzer * __thiscall
TraceServices::FPlatformFileTraceAnalyzer::FPlatformFileTraceAnalyzer
          (FPlatformFileTraceAnalyzer *this,IAnalysisSession *param_1,FFileActivityProvider *param_2
          )

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FPlatformFileTraceAnalyzer_TraceServices__6B_;
  *(undefined8 *)&this->OpenFilesMap = 0;
  *(undefined8 *)&(this->OpenFilesMap).field_0x8 = 0;
  *(undefined8 *)&(this->OpenFilesMap).field_0x20 = 0;
  this->FileActivityProvider = param_2;
  *(undefined4 *)&(this->OpenFilesMap).field_0x28 = 0;
  *(undefined4 *)&(this->OpenFilesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->OpenFilesMap).field_0x34 = 0;
  *(undefined4 *)&(this->OpenFilesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OpenFilesMap).field_0x40 = 0;
  *(undefined4 *)&(this->OpenFilesMap).field_0x48 = 0;
  *(undefined8 *)&this->PendingOpenMap = 0;
  *(undefined8 *)&(this->PendingOpenMap).field_0x8 = 0;
  *(undefined8 *)&(this->PendingOpenMap).field_0x20 = 0;
  *(undefined4 *)&(this->PendingOpenMap).field_0x28 = 0;
  *(undefined4 *)&(this->PendingOpenMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingOpenMap).field_0x34 = 0;
  *(undefined4 *)&(this->PendingOpenMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PendingOpenMap).field_0x40 = 0;
  *(undefined4 *)&(this->PendingOpenMap).field_0x48 = 0;
  *(undefined8 *)&this->PendingReOpenMap = 0;
  *(undefined8 *)&(this->PendingReOpenMap).field_0x8 = 0;
  *(undefined8 *)&(this->PendingReOpenMap).field_0x20 = 0;
  *(undefined4 *)&(this->PendingReOpenMap).field_0x28 = 0;
  *(undefined4 *)&(this->PendingReOpenMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingReOpenMap).field_0x34 = 0;
  *(undefined4 *)&(this->PendingReOpenMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PendingReOpenMap).field_0x40 = 0;
  *(undefined4 *)&(this->PendingReOpenMap).field_0x48 = 0;
  *(undefined8 *)&this->PendingCloseMap = 0;
  *(undefined8 *)&(this->PendingCloseMap).field_0x8 = 0;
  *(undefined8 *)&(this->PendingCloseMap).field_0x20 = 0;
  *(undefined4 *)&(this->PendingCloseMap).field_0x28 = 0;
  *(undefined4 *)&(this->PendingCloseMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingCloseMap).field_0x34 = 0;
  *(undefined4 *)&(this->PendingCloseMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PendingCloseMap).field_0x40 = 0;
  *(undefined4 *)&(this->PendingCloseMap).field_0x48 = 0;
  *(undefined8 *)&this->ActiveReadsMap = 0;
  *(undefined8 *)&(this->ActiveReadsMap).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveReadsMap).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveReadsMap).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveReadsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveReadsMap).field_0x34 = 0;
  *(undefined4 *)&(this->ActiveReadsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActiveReadsMap).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveReadsMap).field_0x48 = 0;
  *(undefined8 *)&this->ActiveWritesMap = 0;
  *(undefined8 *)&(this->ActiveWritesMap).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveWritesMap).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveWritesMap).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveWritesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveWritesMap).field_0x34 = 0;
  *(undefined4 *)&(this->ActiveWritesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActiveWritesMap).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveWritesMap).field_0x48 = 0;
  return this;
}

// OnAnalysisBegin @ 14d3e93a0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
TraceServices::FPlatformFileTraceAnalyzer::OnAnalysisBegin
          (FPlatformFileTraceAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"PlatformFile","BeginOpen",0);
  (**(code **)*pFVar1)(pFVar1,1,"PlatformFile","EndOpen",0);
  (**(code **)*pFVar1)(pFVar1,2,"PlatformFile","BeginReOpen",0);
  (**(code **)*pFVar1)(pFVar1,3,"PlatformFile","EndReOpen",0);
  (**(code **)*pFVar1)(pFVar1,4,"PlatformFile","BeginClose",0);
  (**(code **)*pFVar1)(pFVar1,5,"PlatformFile","EndClose",0);
  (**(code **)*pFVar1)(pFVar1,6,"PlatformFile","BeginRead",0);
  (**(code **)*pFVar1)(pFVar1,7,"PlatformFile","EndRead",0);
  (**(code **)*pFVar1)(pFVar1,8,"PlatformFile","BeginWrite",0);
  (**(code **)*pFVar1)(pFVar1,9,"PlatformFile","EndWrite",0);
  return;
}

// OnEvent @ 14d3f5a20

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

bool __thiscall
TraceServices::FPlatformFileTraceAnalyzer::OnEvent
          (FPlatformFileTraceAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  IAnalysisSession *pIVar1;
  FEventData *this_00;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulong64 *puVar5;
  uint *puVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  FPendingActivity *pFVar9;
  TSet<TTuple<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
  *this_01;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  bool bVar12;
  double dVar13;
  undefined1 local_res8 [24];
  TKeyInitializer<unsigned___int64_const_&> local_res20;
  ulong64 local_78;
  undefined4 *local_70;
  undefined1 local_68 [16];
  FMemScope local_58 [4];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name47,L"Insights/FPlatformFileTraceAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope((FLLMScope *)(local_res8 + 8),LLMScope_Name47,false,None,Default,true);
  FMemScope::FMemScope(local_58,&LLMScope_Name47,true);
  pIVar1 = this->Session;
  (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1);
  this_00 = param_3->EventData;
  switch(param_1) {
  case 0:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar7);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar13,0));
    uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                      (param_3->EventData,"ThreadId",0);
    if (uVar4 == 0) {
      local_res8._0_4_ = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      local_res8._0_4_ = 0x70000000;
    }
    local_res8._0_4_ = local_res8._0_4_ | uVar4;
    FTraceAnalyzerUtils::LegacyAttachmentString<wchar_t>((FString *)local_68,"Path",param_3);
    pFVar10 = (FScriptContainerElement *)L"";
    if (local_68._8_4_ != 0) {
      pFVar10 = (FScriptContainerElement *)local_68._0_8_;
    }
    uVar4 = FFileActivityProvider::GetFileIndex(this->FileActivityProvider,(wchar_t *)pFVar10);
    local_70 = (undefined4 *)local_res8;
    TSet<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
                *)&this->PendingOpenMap,(TKeyInitializer<unsigned_int_const_&> *)&local_res20,
               (bool *)&local_70);
    lVar11 = (longlong)(int)local_res20.Key;
    lVar2 = *(longlong *)&this->PendingOpenMap;
    uVar7 = FFileActivityProvider::BeginActivity
                      (this->FileActivityProvider,uVar4,FileActivityType_Open,local_res8._0_4_,0,0,
                       dVar13);
    *(ulong64 *)(lVar11 * 0x20 + 8 + lVar2) = uVar7;
    *(uint *)(lVar11 * 0x20 + 0x10 + lVar2) = uVar4;
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
    break;
  case 1:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar7);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar13,0));
    local_res20.Key =
         (ulong64 *)
         UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"FileHandle",0);
    uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                      (param_3->EventData,"ThreadId",0);
    if (uVar4 == 0) {
      uVar3 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar3 = 0x70000000;
    }
    pFVar9 = TMapBase<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>_>
             ::Find((TMapBase<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>_>
                     *)&this->PendingOpenMap,uVar4 | uVar3);
    if (pFVar9 != (FPendingActivity *)0x0) {
      bVar12 = local_res20.Key != (ulong64 *)0xffffffffffffffff;
      puVar6 = &pFVar9->FileIndex;
      if (bVar12) {
        local_68._0_8_ = &local_res20;
        local_68._8_8_ = puVar6;
        TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
                  ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                    *)&this->OpenFilesMap,
                   (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)local_res8,
                   (bool *)local_68);
      }
      FFileActivityProvider::EndActivity
                (this->FileActivityProvider,*puVar6,pFVar9->ActivityIndex,0,dVar13,!bVar12);
      FFileActivityProvider::SetActivityFileHandle
                (this->FileActivityProvider,*puVar6,pFVar9->ActivityIndex,(ulong64)local_res20.Key);
      TSet<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
      ::Remove((TSet<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
                *)&this->PendingOpenMap,uVar4 | uVar3);
    }
    break;
  case 2:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar7);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar13,0));
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"OldFileHandle",0);
    local_res8._0_4_ =
         UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_3->EventData,"ThreadId",0);
    if (local_res8._0_4_ == 0) {
      uVar4 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar4 = 0x70000000;
    }
    local_res8._0_4_ = local_res8._0_4_ | uVar4;
    puVar6 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
             ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                     *)&this->OpenFilesMap,uVar7);
    if (puVar6 != (uint *)0x0) {
      uVar4 = *puVar6;
      local_70 = (undefined4 *)local_res8;
      TSet<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
                ((TSet<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
                  *)&this->PendingReOpenMap,(TKeyInitializer<unsigned_int_const_&> *)&local_res20,
                 (bool *)&local_70);
      lVar11 = (longlong)(int)local_res20.Key;
      lVar2 = *(longlong *)&this->PendingReOpenMap;
      uVar7 = FFileActivityProvider::BeginActivity
                        (this->FileActivityProvider,uVar4,FileActivityType_ReOpen,local_res8._0_4_,0
                         ,0,dVar13);
      *(ulong64 *)(lVar11 * 0x20 + 8 + lVar2) = uVar7;
      *(uint *)(lVar11 * 0x20 + 0x10 + lVar2) = uVar4;
    }
    break;
  case 3:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar7);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar13,0));
    local_res20.Key =
         (ulong64 *)
         UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"NewFileHandle",0);
    uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                      (param_3->EventData,"ThreadId",0);
    if (uVar4 == 0) {
      uVar3 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar3 = 0x70000000;
    }
    pFVar9 = TMapBase<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>_>
             ::Find((TMapBase<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>_>
                     *)&this->PendingReOpenMap,uVar4 | uVar3);
    if (pFVar9 != (FPendingActivity *)0x0) {
      bVar12 = local_res20.Key != (ulong64 *)0xffffffffffffffff;
      puVar6 = &pFVar9->FileIndex;
      if (bVar12) {
        local_68._0_8_ = &local_res20;
        local_68._8_8_ = puVar6;
        TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
                  ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                    *)&this->OpenFilesMap,
                   (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)local_res8,
                   (bool *)local_68);
      }
      FFileActivityProvider::EndActivity
                (this->FileActivityProvider,*puVar6,pFVar9->ActivityIndex,0,dVar13,!bVar12);
      FFileActivityProvider::SetActivityFileHandle
                (this->FileActivityProvider,*puVar6,pFVar9->ActivityIndex,(ulong64)local_res20.Key);
      TSet<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
      ::Remove((TSet<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
                *)&this->PendingReOpenMap,uVar4 | uVar3);
    }
    break;
  case 4:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar7);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar13,0));
    puVar5 = (ulong64 *)
             UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"FileHandle",0);
    local_res8._0_4_ =
         UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_3->EventData,"ThreadId",0);
    if (local_res8._0_4_ == 0) {
      uVar4 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar4 = 0x70000000;
    }
    local_res8._0_4_ = local_res8._0_4_ | uVar4;
    puVar6 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
             ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                     *)&this->OpenFilesMap,(ulong64)puVar5);
    if (puVar6 == (uint *)0x0) {
      uVar4 = FFileActivityProvider::GetUnknownFileIndex(this->FileActivityProvider);
    }
    else {
      uVar4 = *puVar6;
      local_res20.Key = puVar5;
      if (*(int *)&(this->OpenFilesMap).field_0x8 != *(int *)&(this->OpenFilesMap).field_0x34) {
        TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
        ::RemoveImpl<unsigned___int64>
                  ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                    *)&this->OpenFilesMap,(int)((ulonglong)puVar5 >> 0x20) * 0x17 + (int)puVar5,
                   (ulong64 *)&local_res20);
      }
    }
    local_70 = (undefined4 *)local_res8;
    TSet<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
                *)&this->PendingCloseMap,(TKeyInitializer<unsigned_int_const_&> *)&local_res20,
               (bool *)&local_70);
    lVar11 = (longlong)(int)local_res20.Key;
    lVar2 = *(longlong *)&this->PendingCloseMap;
    uVar7 = FFileActivityProvider::BeginActivity
                      (this->FileActivityProvider,uVar4,FileActivityType_Close,local_res8._0_4_,0,0,
                       dVar13);
    *(ulong64 *)(lVar11 * 0x20 + 8 + lVar2) = uVar7;
    FFileActivityProvider::SetActivityFileHandle
              (this->FileActivityProvider,uVar4,uVar7,(ulong64)puVar5);
    *(uint *)(lVar11 * 0x20 + 0x10 + lVar2) = uVar4;
    break;
  case 5:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar7);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar13,0));
    uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                      (param_3->EventData,"ThreadId",0);
    if (uVar4 == 0) {
      uVar3 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar3 = 0x70000000;
    }
    pFVar9 = TMapBase<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>_>
             ::Find((TMapBase<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>_>
                     *)&this->PendingCloseMap,uVar4 | uVar3);
    if (pFVar9 != (FPendingActivity *)0x0) {
      FFileActivityProvider::EndActivity
                (this->FileActivityProvider,pFVar9->FileIndex,pFVar9->ActivityIndex,0,dVar13,false);
      TSet<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
      ::Remove((TSet<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
                *)&this->PendingCloseMap,uVar4 | uVar3);
    }
    break;
  case 6:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar7);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar13,0));
    local_70 = (undefined4 *)
               UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"ReadHandle",0);
    local_78 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"FileHandle",0);
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Offset",0);
    uVar8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Size",0);
    uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                      (param_3->EventData,"ThreadId",0);
    if (uVar4 == 0) {
      uVar3 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar3 = 0x70000000;
    }
    puVar6 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
             ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                     *)&this->OpenFilesMap,local_78);
    if (puVar6 == (uint *)0x0) {
      local_res8._0_4_ = FFileActivityProvider::GetUnknownFileIndex(this->FileActivityProvider);
      local_68._0_8_ = &local_78;
      local_68._8_8_ = local_res8;
      TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
                ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                  *)&this->OpenFilesMap,
                 (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)&local_res20,
                 (bool *)local_68);
    }
    else {
      local_res8._0_4_ = *puVar6;
    }
    uVar7 = FFileActivityProvider::BeginActivity
                      (this->FileActivityProvider,local_res8._0_4_,FileActivityType_Read,
                       uVar4 | uVar3,uVar7,uVar8,dVar13);
    FFileActivityProvider::SetActivityFileHandle
              (this->FileActivityProvider,local_res8._0_4_,uVar7,local_78);
    FFileActivityProvider::SetActivityReadWriteHandle
              (this->FileActivityProvider,local_res8._0_4_,uVar7,(ulong64)local_70);
    local_68._0_8_ = &local_70;
    TSet<TTuple<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
              ((TSet<TTuple<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
                *)&this->ActiveReadsMap,&local_res20,(bool *)local_68);
    lVar2 = *(longlong *)&this->ActiveReadsMap;
    *(undefined4 *)((longlong)(int)local_res20.Key * 0x20 + 0x10 + lVar2) = local_res8._0_4_;
    *(ulong64 *)((longlong)(int)local_res20.Key * 0x20 + 8 + lVar2) = uVar7;
    break;
  case 7:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar7);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar13,0));
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"ReadHandle",0);
    uVar8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"SizeRead",0);
    uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                      (param_3->EventData,"ThreadId",0);
    if (uVar4 == 0) {
      UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    pFVar9 = TMapBase<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>_>
             ::Find((TMapBase<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>_>
                     *)&this->ActiveReadsMap,uVar7);
    if (pFVar9 == (FPendingActivity *)0x0) break;
    FFileActivityProvider::EndActivity
              (this->FileActivityProvider,pFVar9->FileIndex,pFVar9->ActivityIndex,uVar8,dVar13,false
              );
    FFileActivityProvider::CheckActivityReadWriteHandle
              (this->FileActivityProvider,pFVar9->FileIndex,pFVar9->ActivityIndex,uVar7);
    this_01 = (TSet<TTuple<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
               *)&this->ActiveReadsMap;
    goto LAB_14d3f6517;
  case 8:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar7);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar13,0));
    local_70 = (undefined4 *)
               UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"WriteHandle",0)
    ;
    local_78 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"FileHandle",0);
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Offset",0);
    uVar8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Size",0);
    uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                      (param_3->EventData,"ThreadId",0);
    if (uVar4 == 0) {
      uVar3 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar3 = 0x70000000;
    }
    puVar6 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
             ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                     *)&this->OpenFilesMap,local_78);
    if (puVar6 == (uint *)0x0) {
      local_res8._0_4_ = FFileActivityProvider::GetUnknownFileIndex(this->FileActivityProvider);
      local_68._0_8_ = &local_78;
      local_68._8_8_ = local_res8;
      TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
                ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                  *)&this->OpenFilesMap,
                 (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)&local_res20,
                 (bool *)local_68);
    }
    else {
      local_res8._0_4_ = *puVar6;
    }
    uVar7 = FFileActivityProvider::BeginActivity
                      (this->FileActivityProvider,local_res8._0_4_,FileActivityType_Write,
                       uVar4 | uVar3,uVar7,uVar8,dVar13);
    FFileActivityProvider::SetActivityFileHandle
              (this->FileActivityProvider,local_res8._0_4_,uVar7,local_78);
    FFileActivityProvider::SetActivityReadWriteHandle
              (this->FileActivityProvider,local_res8._0_4_,uVar7,(ulong64)local_70);
    local_68._0_8_ = &local_70;
    TSet<TTuple<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
              ((TSet<TTuple<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
                *)&this->ActiveWritesMap,&local_res20,(bool *)local_68);
    lVar2 = *(longlong *)&this->ActiveWritesMap;
    *(undefined4 *)((longlong)(int)local_res20.Key * 0x20 + 0x10 + lVar2) = local_res8._0_4_;
    *(ulong64 *)((longlong)(int)local_res20.Key * 0x20 + 8 + lVar2) = uVar7;
    break;
  case 9:
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar7);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar13,0));
    uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"WriteHandle",0);
    uVar8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"SizeWritten",0);
    uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                      (param_3->EventData,"ThreadId",0);
    if (uVar4 == 0) {
      UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    pFVar9 = TMapBase<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>_>
             ::Find((TMapBase<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>_>
                     *)&this->ActiveWritesMap,uVar7);
    if (pFVar9 == (FPendingActivity *)0x0) break;
    FFileActivityProvider::EndActivity
              (this->FileActivityProvider,pFVar9->FileIndex,pFVar9->ActivityIndex,uVar8,dVar13,false
              );
    FFileActivityProvider::CheckActivityReadWriteHandle
              (this->FileActivityProvider,pFVar9->FileIndex,pFVar9->ActivityIndex,uVar7);
    this_01 = (TSet<TTuple<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
               *)&this->ActiveWritesMap;
LAB_14d3f6517:
    TSet<TTuple<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>,FDefaultSetAllocator>
    ::Remove(this_01,uVar7);
  }
  (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1);
  FMemScope::~FMemScope(local_58);
  FLLMScope::~FLLMScope((FLLMScope *)(local_res8 + 8));
  return true;
}

