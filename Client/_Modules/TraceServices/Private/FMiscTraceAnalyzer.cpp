// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 8

// FMiscTraceAnalyzer @ 14d3cc9f0

/* WARNING: Enum "Type": Some values do not have unique names */

FMiscTraceAnalyzer * __thiscall
TraceServices::FMiscTraceAnalyzer::FMiscTraceAnalyzer
          (FMiscTraceAnalyzer *this,IAnalysisSession *param_1,FThreadProvider *param_2,
          FLogProvider *param_3,FFrameProvider *param_4,FChannelProvider *param_5,
          FScreenshotProvider *param_6,FRegionProvider *param_7)

{
  IAnalysisSession *pIVar1;
  ulong64 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FMiscTraceAnalyzer_TraceServices__6B_;
  this->FrameProvider = param_4;
  this->ChannelProvider = param_5;
  this->LogProvider = param_3;
  this->ScreenshotProvider = param_6;
  this->RegionProvider = param_7;
  *(undefined8 *)&this->ThreadStateMap = 0;
  *(undefined8 *)&(this->ThreadStateMap).field_0x8 = 0;
  *(undefined8 *)&(this->ThreadStateMap).field_0x20 = 0;
  this->ThreadProvider = param_2;
  *(undefined4 *)&(this->ThreadStateMap).field_0x28 = 0;
  *(undefined4 *)&(this->ThreadStateMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ThreadStateMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ThreadStateMap).field_0x34 = 0;
  *(undefined8 *)&(this->ThreadStateMap).field_0x40 = 0;
  *(undefined4 *)&(this->ThreadStateMap).field_0x48 = 0;
  pIVar1 = this->Session;
  this->LastFrameCycle[0] = 0;
  this->LastFrameCycle[1] = 0;
  this->ScreenshotLogCategoryId = 0xffffffffffffffff;
  (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1);
  uVar2 = (**(code **)(this->LogProvider->_padding_ + 0x20))();
  plVar4 = &this->LogProvider->_padding_;
  this->ScreenshotLogCategoryId = uVar2;
  puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x28))(plVar4,uVar2);
  *puVar3 = L"Screenshot";
  (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1);
  return this;
}

// GetThreadState @ 14d3e31a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FThreadState * __thiscall
TraceServices::FMiscTraceAnalyzer::GetThreadState(FMiscTraceAnalyzer *this,uint param_1)

{
  TMap<unsigned_int,TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1>,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FThreadState *pFVar4;
  TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1> *pTVar5;
  undefined1 *puVar6;
  TPairInitializer<unsigned_int_const_&,TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1>_const_&>
  local_res8 [2];
  TReferenceControllerBase<1> *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1> **local_18;
  TReferenceControllerBase<1> **local_10;
  
  this_00 = &this->ThreadStateMap;
  local_res8[0].Value._0_4_ = param_1;
  if (*(int *)&(this->ThreadStateMap).field_0x8 != *(int *)&(this->ThreadStateMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ThreadStateMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ThreadStateMap).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->ThreadStateMap).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)((longlong)iVar3 * 0x20 + *(longlong *)&this_00->field_0x0) == param_1)
        goto LAB_14d3e32ae;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0);
      } while (iVar3 != -1);
    }
  }
  pTStack_20 = ::operator_new(0x20);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_28 = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFThreadState_FMiscTraceAnalyzer_TraceServices___00_SharedPointerInternals__6B_
    ;
    pTStack_20[1]._padding_ = 0;
    pTStack_20[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[1].WeakReferenceCount = (atomic<int>)0x0;
    local_28 = pTStack_20 + 1;
    if (local_28 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FThreadState *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  local_18 = &local_res8[0].Value;
  local_10 = &local_28;
  TSet<TTuple<unsigned_int,TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1>_const_&>_>
            ((TSet<TTuple<unsigned_int,TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1>,0>,FDefaultSetAllocator>
              *)this_00,local_res8,(bool *)&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
LAB_14d3e32ae:
  pTVar5 = TMapBase<unsigned_int,TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1>,0>_>
           ::FindChecked((TMapBase<unsigned_int,TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1>,0>_>
                          *)this_00,(uint)local_res8[0].Value);
  return pTVar5->Object;
}

// OnAnalysisBegin @ 14d3e8d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FMiscTraceAnalyzer::OnAnalysisBegin
          (FMiscTraceAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"Misc","RegisterGameThread",0);
  (**(code **)*pFVar1)(pFVar1,1,"Misc","CreateThread",0);
  (**(code **)*pFVar1)(pFVar1,2,"Misc","SetThreadGroup",0);
  (**(code **)*pFVar1)(pFVar1,3,"Misc","BeginThreadGroupScope",0);
  (**(code **)*pFVar1)(pFVar1,4,"Misc","EndThreadGroupScope",0);
  (**(code **)*pFVar1)(pFVar1,5,"Misc","BeginFrame",0);
  (**(code **)*pFVar1)(pFVar1,6,"Misc","EndFrame",0);
  (**(code **)*pFVar1)(pFVar1,7,"Misc","BeginGameFrame",0);
  (**(code **)*pFVar1)(pFVar1,8,"Misc","EndGameFrame",0);
  (**(code **)*pFVar1)(pFVar1,9,"Misc","BeginRenderFrame",0);
  (**(code **)*pFVar1)(pFVar1,10,"Misc","EndRenderFrame",0);
  (**(code **)*pFVar1)(pFVar1,0xb,"Trace","ChannelAnnounce",0);
  (**(code **)*pFVar1)(pFVar1,0xc,"Trace","ChannelToggle",0);
  (**(code **)*pFVar1)(pFVar1,0xd,"Misc","ScreenshotHeader",0);
  (**(code **)*pFVar1)(pFVar1,0xe,"Misc","ScreenshotChunk",0);
  (**(code **)*pFVar1)(pFVar1,0xf,"Misc","RegionBegin",0);
  (**(code **)*pFVar1)(pFVar1,0x10,"Misc","RegionBeginWithId",0);
  (**(code **)*pFVar1)(pFVar1,0x11,"Misc","RegionEnd",0);
  (**(code **)*pFVar1)(pFVar1,0x12,"Misc","RegionEndWithId",0);
  return;
}

// OnAnalysisEnd @ 14d3eaa90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TraceServices::FMiscTraceAnalyzer::OnAnalysisEnd(FMiscTraceAnalyzer *this)

{
  FRegionProvider *pFVar1;
  
  pFVar1 = this->RegionProvider;
  (**(code **)(pFVar1->_padding_ + 8))(&pFVar1->_padding_);
  (**(code **)(this->RegionProvider->_padding_ + 0x50))();
                    /* WARNING: Could not recover jumptable at 0x00014d3eaacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar1->_padding_ + 0x10))(&pFVar1->_padding_);
  return;
}

// OnChannelAnnounce @ 14d3eaf60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FMiscTraceAnalyzer::OnChannelAnnounce
          (FMiscTraceAnalyzer *this,FOnEventContext *param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uchar *puVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  bVar1 = UE::Trace::IAnalyzer::FEventData::GetString(param_1->EventData,"Name",&local_28);
  if (!bVar1) {
    uVar3 = UE::Trace::IAnalyzer::FEventData::GetAttachmentSize(param_1->EventData);
    puVar4 = UE::Trace::IAnalyzer::FEventData::GetAttachment(param_1->EventData);
    pFVar5 = ::FString::ConstructFromPtrSize(&local_18,(char *)puVar4,uVar3);
    if (&local_28 != pFVar5) {
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      local_28.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_28.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  uVar3 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_1->EventData,"Id",0);
  bVar1 = UE::Trace::IAnalyzer::FEventData::GetValue<bool>(param_1->EventData,"IsEnabled",false);
  bVar2 = UE::Trace::IAnalyzer::FEventData::GetValue<bool>(param_1->EventData,"ReadOnly",false);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  FChannelProvider::AnnounceChannel(this->ChannelProvider,(wchar_t *)FVar6.Data,uVar3,bVar2);
  FChannelProvider::UpdateChannel(this->ChannelProvider,uVar3,bVar1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// OnChannelToggle @ 14d3eb0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FMiscTraceAnalyzer::OnChannelToggle
          (FMiscTraceAnalyzer *this,FOnEventContext *param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_1->EventData,"Id",0);
  bVar1 = UE::Trace::IAnalyzer::FEventData::GetValue<bool>(param_1->EventData,"IsEnabled",false);
  FChannelProvider::UpdateChannel(this->ChannelProvider,uVar2,bVar1);
  return;
}

// OnEvent @ 14d3f3570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TraceServices::FMiscTraceAnalyzer::OnEvent
          (FMiscTraceAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  IAnalysisSession *pIVar4;
  FEventData *this_00;
  code *pcVar5;
  FFrameProvider *pFVar6;
  FLogProvider *this_01;
  FThreadProvider *this_02;
  FRegionProvider *pFVar7;
  double dVar8;
  FScreenshot *pFVar9;
  byte bVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  ushort uVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  byte *pbVar21;
  uchar *puVar22;
  FString *pFVar23;
  FLogMessageSpec *pFVar24;
  FLogCategoryInfo *pFVar25;
  wchar_t *pwVar26;
  size_t sVar27;
  FThreadState *pFVar28;
  IAnalysisSession *pIVar29;
  ulong64 uVar30;
  ulong64 uVar31;
  byte bVar32;
  ulonglong uVar33;
  longlong *plVar34;
  ForAnyElementType FVar35;
  ulonglong uVar36;
  ForAnyElementType FVar37;
  undefined1 auStackY_3c8 [32];
  TSharedPtr<TraceServices::FScreenshot,1> local_370;
  IAnalysisSession *local_360;
  FString local_358;
  FLLMScope local_348 [2];
  undefined8 local_340;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FMemScope local_2e8 [2];
  FScriptContainerElement *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  FString local_2c8;
  TStringView<wchar_t> local_2b8;
  TArrayView<unsigned_char_const_,int> local_2a8;
  FScriptContainerElement local_298 [256];
  ForAnyElementType local_198;
  FScriptContainerElement *local_190;
  int local_188;
  FScriptContainerElement local_178 [256];
  ForAnyElementType local_78;
  FScriptContainerElement *local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name107,L"Insights/FMiscTraceAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_348,LLMScope_Name107,false,None,Default,true);
  FMemScope::FMemScope(local_2e8,&LLMScope_Name107,true);
  pIVar4 = this->Session;
  (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4);
  this_00 = param_3->EventData;
  dVar8 = (double)(**(code **)((longlong)*this->Session + 0x40))();
  if (dVar8 == 0.0) {
    pIVar29 = this->Session;
    pcVar5 = *(code **)((longlong)*pIVar29 + 0x48);
    dVar8 = UE::Trace::IAnalyzer::FEventTime::GetBaseDateTimestamp(param_3->EventTime);
    (*pcVar5)(pIVar29,SUB84(dVar8,0));
  }
  switch(param_1) {
  case 0:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       (param_3->EventData,"ThreadId",0);
    if (uVar17 == 0) {
      uVar17 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
      FThreadProvider::AddGameThread(this->ThreadProvider,uVar17);
    }
    else {
      FThreadProvider::AddGameThread(this->ThreadProvider,uVar17 | 0x70000000);
    }
    break;
  case 1:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       (param_3->EventData,"CreatedThreadId",0);
    uVar16 = 0x70000000;
    if (uVar17 == 0) {
      uVar18 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar18 = 0x70000000;
    }
    uVar19 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"Priority",0);
    puVar22 = UE::Trace::IAnalyzer::FEventData::GetAttachment(this_00);
    plVar34 = &this->ThreadProvider->_padding_;
    (**(code **)(*plVar34 + 0x20))(plVar34,uVar17 | uVar18,puVar22,uVar19);
    uVar19 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       (param_3->EventData,"CurrentThreadId",0);
    if (uVar19 == 0) {
      uVar16 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    pFVar28 = GetThreadState(this,uVar19 | uVar16);
    iVar20 = (pFVar28->ThreadGroupStack).ArrayNum;
    if (iVar20 != 0) {
      this_02 = this->ThreadProvider;
      uVar16 = 0;
      if ((int)(iVar20 - 1U) < iVar20) {
        uVar16 = ~(iVar20 - 1U) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (bool)uVar13;
      }
      FThreadProvider::SetThreadGroup
                (this_02,uVar17 | uVar18,
                 *(wchar_t **)
                  ((pFVar28->ThreadGroupStack).AllocatorInstance.Data +
                  (longlong)(pFVar28->ThreadGroupStack).ArrayNum * 8 + -8));
    }
    break;
  case 2:
    pIVar29 = this->Session;
    local_360 = *(IAnalysisSession **)((longlong)*pIVar29 + 0xd0);
    puVar22 = UE::Trace::IAnalyzer::FEventData::GetAttachment(this_00);
    local_198.Data = (FScriptContainerElement *)0x0;
    if (puVar22 == (uchar *)0x0) {
      local_190 = (FScriptContainerElement *)0x0;
      local_188 = 0;
    }
    else {
      sVar27 = strlen((char *)puVar22);
      local_188 = (int)sVar27;
      uVar17 = local_188 + 1;
      FVar35.Data = (FScriptContainerElement *)0x0;
      if (0x80 < uVar17) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_198,0,uVar17,2);
        FVar35.Data = local_198.Data;
      }
      local_190 = local_298;
      if (FVar35.Data != (FScriptContainerElement *)0x0) {
        local_190 = FVar35.Data;
      }
      TStringConvert<char,wchar_t>::Convert<char>
                ((wchar_t *)local_190,uVar17,(char *)puVar22,uVar17);
    }
    pwVar26 = (wchar_t *)(*(code *)local_360)(pIVar29,local_190);
    if (local_198.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data);
    }
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       (param_3->EventData,"ThreadId",0);
    if (uVar17 == 0) {
      uVar16 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar16 = 0x70000000;
    }
    FThreadProvider::SetThreadGroup(this->ThreadProvider,uVar17 | uVar16,pwVar26);
    break;
  case 3:
    local_360 = this->Session;
    pcVar5 = *(code **)((longlong)*local_360 + 0xd0);
    puVar22 = UE::Trace::IAnalyzer::FEventData::GetAttachment(this_00);
    local_78.Data = (FScriptContainerElement *)0x0;
    if (puVar22 == (uchar *)0x0) {
      local_70 = (FScriptContainerElement *)0x0;
      local_68 = 0;
    }
    else {
      sVar27 = strlen((char *)puVar22);
      local_68 = (int)sVar27;
      uVar17 = local_68 + 1;
      FVar35.Data = (FScriptContainerElement *)0x0;
      if (0x80 < uVar17) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar17,2);
        FVar35.Data = local_78.Data;
      }
      local_70 = local_178;
      if (FVar35.Data != (FScriptContainerElement *)0x0) {
        local_70 = FVar35.Data;
      }
      TStringConvert<char,wchar_t>::Convert<char>((wchar_t *)local_70,uVar17,(char *)puVar22,uVar17)
      ;
    }
    local_340 = (*pcVar5)(local_360,local_70);
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       (param_3->EventData,"CurrentThreadId",0);
    if (uVar17 == 0) {
      uVar16 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar16 = 0x70000000;
    }
    pFVar28 = GetThreadState(this,uVar16 | uVar17);
    pFVar3 = (pFVar28->ThreadGroupStack).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_340) &&
        ((FScriptContainerElement *)&local_340 <
         pFVar3 + (longlong)(pFVar28->ThreadGroupStack).ArrayMax * 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    iVar20 = (pFVar28->ThreadGroupStack).ArrayNum;
    piVar2 = &(pFVar28->ThreadGroupStack).ArrayMax;
    if (iVar20 == *piVar2) {
      iVar20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)pFVar28,piVar2);
    }
    (pFVar28->ThreadGroupStack).ArrayNum = iVar20 + 1;
    *(undefined8 *)((pFVar28->ThreadGroupStack).AllocatorInstance.Data + (longlong)iVar20 * 8) =
         local_340;
    break;
  case 4:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       (param_3->EventData,"CurrentThreadId",0);
    if (uVar17 == 0) {
      uVar16 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar16 = 0x70000000;
    }
    pFVar28 = GetThreadState(this,uVar16 | uVar17);
    if (((pFVar28->ThreadGroupStack).ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    iVar20 = (pFVar28->ThreadGroupStack).ArrayNum;
    uVar17 = iVar20 - 1;
    pFVar3 = (pFVar28->ThreadGroupStack).AllocatorInstance.Data + (longlong)(int)uVar17 * 8;
    iVar20 = ~uVar17 + iVar20;
    if (iVar20 != 0) {
      memmove(pFVar3,pFVar3 + 8,(longlong)iVar20 << 3);
    }
    piVar2 = &(pFVar28->ThreadGroupStack).ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(ForAnyElementType *)pFVar28,(pFVar28->ThreadGroupStack).ArrayNum,
               &(pFVar28->ThreadGroupStack).ArrayMax);
    break;
  case 5:
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    bVar10 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"FrameType",'\0');
    if ((1 < bVar10) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("FrameType < TraceFrameType_Count",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\MiscTraceAnalysis.cpp"
                            ,0x7c,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    pFVar6 = this->FrameProvider;
    dVar8 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    FFrameProvider::BeginFrame(pFVar6,(uint)bVar10,dVar8);
    break;
  case 6:
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    bVar10 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"FrameType",'\0');
    if ((1 < bVar10) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("FrameType < TraceFrameType_Count",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\MiscTraceAnalysis.cpp"
                            ,0x85,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    pFVar6 = this->FrameProvider;
    dVar8 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    FFrameProvider::EndFrame(pFVar6,(uint)bVar10,dVar8);
    break;
  case 7:
  case 8:
  case 9:
  case 10:
    uVar33 = 0;
    bVar12 = 1 < (ushort)(param_1 - 7);
    pbVar21 = UE::Trace::IAnalyzer::FEventData::GetAttachment(this_00);
    uVar36 = uVar33;
    do {
      bVar10 = *pbVar21;
      pbVar21 = pbVar21 + 1;
      bVar32 = (byte)uVar33;
      uVar33 = uVar33 + 7;
      uVar36 = uVar36 | (ulonglong)(bVar10 & 0x7f) << (bVar32 & 0x3f);
    } while ((char)bVar10 < '\0');
    uVar30 = this->LastFrameCycle[bVar12] + uVar36;
    this->LastFrameCycle[bVar12] = uVar30;
    pFVar6 = this->FrameProvider;
    if ((param_1 - 7 & 0xfffd) == 0) {
      dVar8 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
      FFrameProvider::BeginFrame(pFVar6,(uint)bVar12,dVar8);
    }
    else {
      dVar8 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
      FFrameProvider::EndFrame(pFVar6,(uint)bVar12,dVar8);
    }
    break;
  case 0xb:
    local_358.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_358.Data.ArrayNum = 0;
    local_358.Data.ArrayMax = 0;
    bVar12 = UE::Trace::IAnalyzer::FEventData::GetString(param_3->EventData,"Name",&local_358);
    if (!bVar12) {
      uVar17 = UE::Trace::IAnalyzer::FEventData::GetAttachmentSize(param_3->EventData);
      puVar22 = UE::Trace::IAnalyzer::FEventData::GetAttachment(param_3->EventData);
      pFVar23 = ::FString::ConstructFromPtrSize(&local_2c8,(char *)puVar22,uVar17);
      if (&local_358 != pFVar23) {
        if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_358.Data.AllocatorInstance.Data);
        }
        local_358.Data.AllocatorInstance.Data = (pFVar23->Data).AllocatorInstance.Data;
        (pFVar23->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_358.Data.ArrayNum = (pFVar23->Data).ArrayNum;
        local_358.Data.ArrayMax = (pFVar23->Data).ArrayMax;
        (pFVar23->Data).ArrayNum = 0;
        (pFVar23->Data).ArrayMax = 0;
      }
      if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
      }
    }
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_3->EventData,"Id",0);
    bVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<bool>(param_3->EventData,"IsEnabled",false);
    bVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<bool>(param_3->EventData,"ReadOnly",false);
    FVar35.Data = (FScriptContainerElement *)L"";
    if (local_358.Data.ArrayNum != 0) {
      FVar35.Data = local_358.Data.AllocatorInstance.Data;
    }
    FChannelProvider::AnnounceChannel(this->ChannelProvider,(wchar_t *)FVar35.Data,uVar17,bVar11);
    FChannelProvider::UpdateChannel(this->ChannelProvider,uVar17,bVar12);
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
    break;
  case 0xc:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_3->EventData,"Id",0);
    bVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<bool>(param_3->EventData,"IsEnabled",false);
    FChannelProvider::UpdateChannel(this->ChannelProvider,uVar17,bVar12);
    break;
  case 0xd:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"Id",0);
    FScreenshotProvider::AddScreenshot(this->ScreenshotProvider,&local_370,uVar17);
    if ((local_370.Object == (FScreenshot *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    (local_370.Object)->Id = uVar17;
    if ((local_370.Object == (FScreenshot *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    UE::Trace::IAnalyzer::FEventData::GetString(this_00,"Name",&(local_370.Object)->Name);
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar8 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    if ((local_370.Object == (FScreenshot *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    (local_370.Object)->Timestamp = dVar8;
    uVar16 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"Width",0);
    if ((local_370.Object == (FScreenshot *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    (local_370.Object)->Width = uVar16;
    uVar16 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"Height",0);
    if ((local_370.Object == (FScreenshot *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    (local_370.Object)->Height = uVar16;
    uVar16 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"TotalChunkNum",0);
    if ((local_370.Object == (FScreenshot *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    (local_370.Object)->ChunkNum = uVar16;
    uVar16 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"Size",0);
    if ((local_370.Object == (FScreenshot *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    (local_370.Object)->Size = uVar16;
    if ((local_370.Object == (FScreenshot *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    pFVar9 = local_370.Object;
    pTVar1 = &(local_370.Object)->Data;
    if ((local_370.Object == (FScreenshot *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    uVar16 = (local_370.Object)->Size;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if ((pFVar9->Data).ArrayMax < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar16,&pTVar1->AllocatorInstance,(pFVar9->Data).ArrayNum,
                 &(pFVar9->Data).ArrayMax);
    }
    pFVar24 = FLogProvider::GetMessageSpec(this->LogProvider,uVar30);
    plVar34 = &this->LogProvider->_padding_;
    pFVar25 = (FLogCategoryInfo *)
              (**(code **)(*plVar34 + 0x28))(plVar34,this->ScreenshotLogCategoryId);
    pFVar24->Line = uVar17;
    pFVar24->File = (wchar_t *)0x0;
    pFVar24->FormatString = (wchar_t *)0x0;
    pFVar24->Category = pFVar25;
    pFVar24->Verbosity = Log;
    this_01 = this->LogProvider;
    if ((local_370.Object == (FScreenshot *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    local_2d8 = ((local_370.Object)->Name).Data.AllocatorInstance.Data;
    iVar20 = ((local_370.Object)->Name).Data.ArrayNum;
    iStack_2d0 = iVar20 + -1;
    if (iVar20 == 0) {
      iStack_2d0 = 0;
    }
    if ((local_370.Object == (FScreenshot *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    local_2b8._12_4_ = uStack_2cc;
    local_2b8.Size = iStack_2d0;
    local_2b8.DataPtr = (wchar_t *)local_2d8;
    FLogProvider::AppendMessage(this_01,uVar30,(local_370.Object)->Timestamp,&local_2b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_370.SharedReferenceCount.ReferenceController);
    break;
  case 0xe:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"Id",0);
    uVar14 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(this_00,"ChunkNum",0);
    uVar15 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(this_00,"Size",0);
    UE::Trace::IAnalyzer::FEventData::GetArrayView<unsigned_char>(this_00,&local_2a8,"Data");
    FScreenshotProvider::AddScreenshotChunk
              (this->ScreenshotProvider,uVar17,(uint)uVar14,uVar15,&local_2a8);
    break;
  case 0xf:
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    local_328.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_328.Data.ArrayNum = 0;
    local_328.Data.ArrayMax = 0;
    bVar12 = UE::Trace::IAnalyzer::FEventData::GetString(this_00,"RegionName",&local_328);
    if ((!bVar12) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("EventData.GetString(\"RegionName\", Name)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\MiscTraceAnalysis.cpp"
                            ,0x10f,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    local_338.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_338.Data.ArrayNum = 0;
    local_338.Data.ArrayMax = 0;
    UE::Trace::IAnalyzer::FEventData::GetString(this_00,"Category",&local_338);
    dVar8 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    pFVar7 = this->RegionProvider;
    (**(code **)(pFVar7->_padding_ + 8))(&pFVar7->_padding_);
    plVar34 = &this->RegionProvider->_padding_;
    FVar35.Data = local_338.Data.AllocatorInstance.Data;
    if (local_338.Data.ArrayNum < 2) {
      FVar35.Data = (FScriptContainerElement *)0x0;
    }
    FVar37.Data = (FScriptContainerElement *)L"";
    if (local_328.Data.ArrayNum != 0) {
      FVar37.Data = local_328.Data.AllocatorInstance.Data;
    }
    (**(code **)(*plVar34 + 0x30))(plVar34,FVar37.Data,dVar8,FVar35.Data);
    (**(code **)(pFVar7->_padding_ + 0x10))(&pFVar7->_padding_);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar8,0));
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
    break;
  case 0x10:
    pIVar29 = (IAnalysisSession *)
              UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"CycleAndId",0);
    local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.Data.ArrayNum = 0;
    local_308.Data.ArrayMax = 0;
    local_360 = pIVar29;
    bVar12 = UE::Trace::IAnalyzer::FEventData::GetString(this_00,"RegionName",&local_308);
    if ((!bVar12) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("EventData.GetString(\"RegionName\", Name)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\MiscTraceAnalysis.cpp"
                            ,0x121,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_318.Data.ArrayNum = 0;
    local_318.Data.ArrayMax = 0;
    UE::Trace::IAnalyzer::FEventData::GetString(this_00,"Category",&local_318);
    dVar8 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,(ulong64)pIVar29);
    pFVar7 = this->RegionProvider;
    (**(code **)(pFVar7->_padding_ + 8))(&pFVar7->_padding_);
    plVar34 = &this->RegionProvider->_padding_;
    FVar35.Data = (FScriptContainerElement *)L"";
    if (local_308.Data.ArrayNum != 0) {
      FVar35.Data = local_308.Data.AllocatorInstance.Data;
    }
    (**(code **)(*plVar34 + 0x38))(plVar34,FVar35.Data,local_360,SUB84(dVar8,0));
    (**(code **)(pFVar7->_padding_ + 0x10))(&pFVar7->_padding_);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar8,0));
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
    break;
  case 0x11:
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.Data.ArrayNum = 0;
    local_2f8.Data.ArrayMax = 0;
    UE::Trace::IAnalyzer::FEventData::GetString(this_00,"RegionName",&local_2f8);
    dVar8 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    pFVar7 = this->RegionProvider;
    (**(code **)(pFVar7->_padding_ + 8))(&pFVar7->_padding_);
    plVar34 = &this->RegionProvider->_padding_;
    FVar35.Data = (FScriptContainerElement *)L"";
    if (local_2f8.Data.ArrayNum != 0) {
      FVar35.Data = local_2f8.Data.AllocatorInstance.Data;
    }
    (**(code **)(*plVar34 + 0x40))(plVar34,FVar35.Data,dVar8);
    (**(code **)(pFVar7->_padding_ + 0x10))(&pFVar7->_padding_);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar8,0));
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    break;
  case 0x12:
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    uVar31 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"RegionId",0);
    dVar8 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    pFVar7 = this->RegionProvider;
    (**(code **)(pFVar7->_padding_ + 8))(&pFVar7->_padding_);
    plVar34 = &this->RegionProvider->_padding_;
    (**(code **)(*plVar34 + 0x48))(plVar34,uVar31,dVar8);
    (**(code **)(pFVar7->_padding_ + 0x10))(&pFVar7->_padding_);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar8,0));
  }
  (**(code **)((longlong)*pIVar4 + 0xa8))(pIVar4);
  FMemScope::~FMemScope(local_2e8);
  FLLMScope::~FLLMScope(local_348);
  return true;
}

// OnThreadInfo @ 14d3fad00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FMiscTraceAnalyzer::OnThreadInfo(FMiscTraceAnalyzer *this,FThreadInfo *param_1)

{
  IAnalysisSession *pIVar1;
  FThreadProvider *pFVar2;
  code *pcVar3;
  IAnalysisSession *pIVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  size_t sVar8;
  wchar_t *pwVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  undefined1 auStackY_1b8 [32];
  FLLMScope local_188 [2];
  FMemScope local_180;
  FString local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name88,L"Insights/FMiscTraceAnalyzer");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_188,LLMScope_Name88,false,None,Default,true);
  FMemScope::FMemScope(&local_180,&LLMScope_Name88,true);
  uVar5 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_1);
  pcVar7 = UE::Trace::IAnalyzer::FThreadInfo::GetName(param_1);
  ::FString::FString(&local_178,pcVar7);
  pIVar1 = this->Session;
  (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1);
  pFVar2 = this->ThreadProvider;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x20);
  iVar6 = UE::Trace::IAnalyzer::FThreadInfo::GetSortHint(param_1);
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_178.Data.ArrayNum != 0) {
    FVar11.Data = local_178.Data.AllocatorInstance.Data;
  }
  (*pcVar3)(&pFVar2->_padding_,uVar5,FVar11.Data,iVar6);
  pcVar7 = UE::Trace::IAnalyzer::FThreadInfo::GetGroupName(param_1);
  if (*pcVar7 != '\0') {
    pIVar4 = this->Session;
    local_68.Data = (FScriptContainerElement *)0x0;
    pcVar3 = *(code **)((longlong)*pIVar4 + 0xd0);
    sVar8 = strlen(pcVar7);
    local_58 = (int)sVar8;
    uVar10 = local_58 + 1;
    FVar11.Data = (FScriptContainerElement *)0x0;
    if (0x80 < uVar10) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar10,2);
      FVar11.Data = local_68.Data;
    }
    local_60 = local_168;
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      local_60 = FVar11.Data;
    }
    TStringConvert<char,wchar_t>::Convert<char>((wchar_t *)local_60,uVar10,pcVar7,uVar10);
    pwVar9 = (wchar_t *)(*pcVar3)(pIVar4,local_60);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    FThreadProvider::SetThreadGroup(this->ThreadProvider,uVar5,pwVar9);
  }
  (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_180);
  FLLMScope::~FLLMScope(local_188);
  return;
}

