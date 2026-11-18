// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 5

// FMemoryAnalyzer @ 14d3cc940

FMemoryAnalyzer * __thiscall
TraceServices::FMemoryAnalyzer::FMemoryAnalyzer
          (FMemoryAnalyzer *this,IAnalysisSession *param_1,FMemoryProvider *param_2)

{
  code *pcVar1;
  bool bVar2;
  FMemoryAnalyzer *pFVar3;
  
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FMemoryAnalyzer_TraceServices__6B_;
  this->Provider = param_2;
  this->Sample = 0;
  if (param_2 == (FMemoryProvider *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Provider != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\MemoryAnalysis.cpp"
                       ,0x10,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMemoryAnalyzer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// ~FMemoryAnalyzer @ 14d3d0e40

void __thiscall TraceServices::FMemoryAnalyzer::~FMemoryAnalyzer(FMemoryAnalyzer *this)

{
  this->_padding_ = (longlong)&___7FMemoryAnalyzer_TraceServices__6B_;
  return;
}

// OnAnalysisBegin @ 14d3e8bf0

void __thiscall
TraceServices::FMemoryAnalyzer::OnAnalysisBegin(FMemoryAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"LLM","TagsSpec",0);
  (**(code **)*pFVar1)(pFVar1,2,"LLM","TrackerSpec",0);
  (**(code **)*pFVar1)(pFVar1,1,"LLM","TagSetSpec",0);
  (**(code **)*pFVar1)(pFVar1,3,"LLM","TagValue",0);
  return;
}

// OnAnalysisEnd @ 14d3ea9f0

void __thiscall TraceServices::FMemoryAnalyzer::OnAnalysisEnd(FMemoryAnalyzer *this)

{
  FMemoryProvider *pFVar1;
  
  pFVar1 = this->Provider;
  if (pFVar1 != (FMemoryProvider *)0x0) {
    (**(code **)(pFVar1->_padding_ + 8))(&pFVar1->_padding_);
    FMemoryProvider::OnAnalysisCompleted(this->Provider);
    (**(code **)(pFVar1->_padding_ + 0x10))(&pFVar1->_padding_);
  }
  return;
}

// OnEvent @ 14d3f2be0

bool __thiscall
TraceServices::FMemoryAnalyzer::OnEvent
          (FMemoryAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  FEventData *this_00;
  FMemoryProvider *pFVar1;
  IAnalysisSession *pIVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong64 uVar10;
  FArrayReader *pFVar11;
  FArrayReader *this_01;
  ForAnyElementType FVar12;
  uint *puVar13;
  undefined8 *puVar14;
  long64 lVar15;
  long64 lVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  double dVar20;
  char local_res8 [8];
  ForAnyElementType local_b0;
  undefined8 local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  FLLMScope local_90 [2];
  ulonglong local_88;
  undefined8 local_80;
  FString local_78;
  FMemScope local_68;
  FString local_60;
  FString local_50 [2];
  
  if (this->Provider == (FMemoryProvider *)0x0) {
    return false;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name49,L"Insights/FMemoryAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_90,LLMScope_Name49,false,None,Default,true);
  FMemScope::FMemScope(&local_68,&LLMScope_Name49,true);
  this_00 = param_3->EventData;
  if (param_1 == 0) {
    lVar15 = UE::Trace::IAnalyzer::FEventData::GetValue<__int64>(this_00,"TagId",0);
    lVar16 = UE::Trace::IAnalyzer::FEventData::GetValue<__int64>(this_00,"ParentId",0);
    bVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"TagSetId",'\0');
    FTraceAnalyzerUtils::LegacyAttachmentString<wchar_t>(local_50,"Name",param_3);
    pFVar1 = this->Provider;
    (**(code **)(pFVar1->_padding_ + 8))(&pFVar1->_padding_);
    FMemoryProvider::AddTagSpec(this->Provider,lVar15,local_50,lVar16,(uint)bVar4);
    (**(code **)(pFVar1->_padding_ + 0x10))(&pFVar1->_padding_);
    local_60.Data.AllocatorInstance.Data = local_50[0].Data.AllocatorInstance.Data;
  }
  else if (param_1 == 1) {
    bVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"TagSetId",'\0');
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    UE::Trace::IAnalyzer::FEventData::GetString(this_00,"Name",&local_78);
    pFVar1 = this->Provider;
    (**(code **)(pFVar1->_padding_ + 8))(&pFVar1->_padding_);
    FMemoryProvider::AddTagSetSpec(this->Provider,(uint)bVar4,&local_78);
    (**(code **)(pFVar1->_padding_ + 0x10))(&pFVar1->_padding_);
    local_60.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
  }
  else if (param_1 == 2) {
    bVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"TrackerId",'\0');
    FTraceAnalyzerUtils::LegacyAttachmentString<char>(&local_60,"Name",param_3);
    pFVar1 = this->Provider;
    (**(code **)(pFVar1->_padding_ + 8))(&pFVar1->_padding_);
    FMemoryProvider::AddTrackerSpec(this->Provider,(uint)bVar4,&local_60);
    (**(code **)(pFVar1->_padding_ + 0x10))(&pFVar1->_padding_);
  }
  else {
    if (param_1 != 3) goto LAB_14d3f31ea;
    bVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"TrackerId",'\0');
    uVar10 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar20 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar10);
    pFVar11 = UE::Trace::IAnalyzer::FEventData::GetArrayImpl(this_00,"Tags");
    this_01 = UE::Trace::IAnalyzer::FEventData::GetArrayImpl(this_00,"Values");
    uVar7 = UE::Trace::IAnalyzer::FArrayReader::Num(pFVar11);
    uVar19 = (ulonglong)uVar7;
    FVar12.Data = (FScriptContainerElement *)
                  UE::Trace::IAnalyzer::TArrayReader<__int64>::GetData
                            ((TArrayReader<__int64> *)pFVar11);
    puVar17 = (undefined8 *)0x0;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8 = 0;
    if (FVar12.Data == (FScriptContainerElement *)0x0) {
      pFVar11 = UE::Trace::IAnalyzer::FEventData::GetArrayImpl(this_00,"Tags");
      uVar8 = UE::Trace::IAnalyzer::FArrayReader::Num(pFVar11);
      if ((uVar8 != uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Tags32.Num() == TagsCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\MemoryAnalysis.cpp"
                             ,100,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      puVar13 = UE::Trace::IAnalyzer::TArrayReader<unsigned_int>::GetData
                          ((TArrayReader<unsigned_int> *)pFVar11);
      local_60.Data.AllocatorInstance.Data = local_b0.Data;
      if (puVar13 == (uint *)0x0) goto LAB_14d3f31e0;
      if ((int)uVar7 < 0) goto LAB_14d3f3234;
      if (local_a8._4_4_ < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar7,&local_b0,(int)local_a8,(int *)((longlong)&local_a8 + 4));
      }
      uVar18 = uVar19;
      FVar12.Data = local_b0.Data;
      if (uVar7 != 0) {
        do {
          local_88 = (ulonglong)*puVar13;
          if (((local_b0.Data <= (FScriptContainerElement *)&local_88) &&
              ((FScriptContainerElement *)&local_88 < local_b0.Data + (longlong)local_a8._4_4_ * 8))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          iVar9 = (int)local_a8;
          if ((int)local_a8 == local_a8._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_b0,(int *)((longlong)&local_a8 + 4));
          }
          puVar13 = puVar13 + 1;
          local_a8 = CONCAT44(local_a8._4_4_,iVar9 + 1);
          *(ulonglong *)(local_b0.Data + (longlong)iVar9 * 8) = local_88;
          uVar18 = uVar18 - 1;
          FVar12.Data = local_b0.Data;
        } while (uVar18 != 0);
      }
    }
    uVar8 = UE::Trace::IAnalyzer::FArrayReader::Num(this_01);
    if ((uVar8 != uVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Samples.Num() == TagsCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\MemoryAnalysis.cpp"
                           ,0x72,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    puVar14 = UE::Trace::IAnalyzer::FArrayReader::GetImpl(this_01,0,local_res8);
    if (puVar14 == (undefined8 *)0x0) {
LAB_14d3f2ef1:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SamplesData != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\MemoryAnalysis.cpp"
                         ,0x74,L"");
      puVar14 = puVar17;
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    else {
      iVar9 = -(int)local_res8[0];
      if (iVar9 < 0) {
        iVar9 = (int)local_res8[0];
      }
      if (iVar9 != 8) goto LAB_14d3f2ef1;
    }
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_98 = 0;
    if ((int)uVar7 < 0) {
LAB_14d3f3234:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar19);
    }
    if (0 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar7,&local_a0,0,(int *)((longlong)&local_98 + 4));
      puVar17 = (undefined8 *)(local_98 & 0xffffffff);
    }
    if (uVar7 != 0) {
      while( true ) {
        local_80 = *puVar14;
        iVar9 = (int)puVar17;
        if ((local_a0.Data <= (FScriptContainerElement *)&local_80) &&
           ((FScriptContainerElement *)&local_80 < local_a0.Data + (longlong)local_98._4_4_ * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          iVar9 = (int)local_98;
        }
        if (iVar9 == local_98._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_a0,(int *)((longlong)&local_98 + 4));
        }
        local_98 = CONCAT44(local_98._4_4_,iVar9 + 1U);
        puVar14 = puVar14 + 1;
        *(undefined8 *)(local_a0.Data + (longlong)iVar9 * 8) = local_80;
        uVar19 = uVar19 - 1;
        if (uVar19 == 0) break;
        puVar17 = (undefined8 *)(ulonglong)(iVar9 + 1U);
      }
    }
    pFVar1 = this->Provider;
    this->Sample = this->Sample + 1;
    (**(code **)(pFVar1->_padding_ + 8))(&pFVar1->_padding_);
    FMemoryProvider::AddTagSnapshot
              (this->Provider,(uint)bVar4,dVar20,(long64 *)FVar12.Data,
               (FMemoryTagSample *)local_a0.Data,uVar7);
    (**(code **)(pFVar1->_padding_ + 0x10))(&pFVar1->_padding_);
    pIVar2 = this->Session;
    (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar20,0));
    (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2);
    local_60.Data.AllocatorInstance.Data = local_b0.Data;
    if (local_a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data);
      local_60.Data.AllocatorInstance.Data = local_b0.Data;
    }
  }
LAB_14d3f31e0:
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
LAB_14d3f31ea:
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(local_90);
  return true;
}

