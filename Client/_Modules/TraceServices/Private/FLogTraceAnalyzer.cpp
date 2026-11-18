// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 3

// FLogTraceAnalyzer @ 14d3cc920

/* WARNING: Enum "Type": Some values do not have unique names */

FLogTraceAnalyzer * __thiscall
TraceServices::FLogTraceAnalyzer::FLogTraceAnalyzer
          (FLogTraceAnalyzer *this,IAnalysisSession *param_1,FLogProvider *param_2)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FLogTraceAnalyzer_TraceServices__6B_;
  this->LogProvider = param_2;
  return this;
}

// OnAnalysisBegin @ 14d3e8b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FLogTraceAnalyzer::OnAnalysisBegin
          (FLogTraceAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"Logging","LogCategory",0);
  (**(code **)*pFVar1)(pFVar1,1,"Logging","LogMessageSpec",0);
  (**(code **)*pFVar1)(pFVar1,2,"Logging","LogMessage",0);
  return;
}

// OnEvent @ 14d3f2630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TraceServices::FLogTraceAnalyzer::OnEvent
          (FLogTraceAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  IAnalysisSession *pIVar1;
  FEventData *this_00;
  FLogProvider *pFVar2;
  IAnalysisSession *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  Type TVar7;
  code cVar8;
  uint uVar9;
  FArrayReader *this_01;
  uchar *puVar10;
  ulong64 uVar11;
  FLogMessageSpec *pFVar12;
  FLogCategoryInfo *pFVar13;
  wchar_t *pwVar14;
  size_t sVar15;
  FString *pFVar16;
  undefined8 uVar17;
  longlong *plVar18;
  ForAnyElementType FVar19;
  int iVar20;
  double dVar21;
  undefined1 auStackY_208 [32];
  char local_1d8 [8];
  code *local_1d0;
  FString local_1c8;
  FLLMScope local_1b8 [2];
  FLogMessageSpec *local_1b0;
  FString local_1a8;
  FString local_198;
  FMemScope local_188;
  FString local_180;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name32,L"Insights/FLogTraceAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_1b8,LLMScope_Name32,false,None,Default,true);
  FMemScope::FMemScope(&local_188,&LLMScope_Name32,true);
  pIVar1 = this->Session;
  (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1);
  this_00 = param_3->EventData;
  if (param_1 == 0) {
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                       (this_00,"CategoryPointer",0);
    plVar18 = &this->LogProvider->_padding_;
    local_1d0 = (code *)(**(code **)(*plVar18 + 0x28))(plVar18,uVar11);
    local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Data.ArrayNum = 0;
    local_1c8.Data.ArrayMax = 0;
    bVar5 = UE::Trace::IAnalyzer::FEventData::GetString(param_3->EventData,"Name",&local_1c8);
    if (!bVar5) {
      uVar9 = UE::Trace::IAnalyzer::FEventData::GetAttachmentSize(param_3->EventData);
      pwVar14 = (wchar_t *)UE::Trace::IAnalyzer::FEventData::GetAttachment(param_3->EventData);
      pFVar16 = ::FString::ConstructFromPtrSize(&local_180,pwVar14,uVar9 >> 1);
      if (&local_1c8 != pFVar16) {
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        local_1c8.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
        (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c8.Data.ArrayNum = (pFVar16->Data).ArrayNum;
        local_1c8.Data.ArrayMax = (pFVar16->Data).ArrayMax;
        (pFVar16->Data).ArrayNum = 0;
        (pFVar16->Data).ArrayMax = 0;
      }
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
    }
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_1c8.Data.ArrayNum != 0) {
      FVar19.Data = local_1c8.Data.AllocatorInstance.Data;
    }
    uVar17 = (**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar19.Data);
    pcVar4 = local_1d0;
    *(undefined8 *)local_1d0 = uVar17;
    cVar8 = (code)UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>
                            (this_00,"DefaultVerbosity",'\0');
    pcVar4[8] = cVar8;
    FVar19.Data = local_1c8.Data.AllocatorInstance.Data;
  }
  else {
    if (param_1 != 1) {
      if (param_1 != 2) goto LAB_14d3f2b40;
      local_1d0 = (code *)UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                                    (this_00,"LogPoint",0);
      local_1b0 = (FLogMessageSpec *)
                  UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
      this_01 = UE::Trace::IAnalyzer::FEventData::GetArrayImpl(param_3->EventData,"FormatArgs");
      uVar9 = UE::Trace::IAnalyzer::FArrayReader::Num(this_01);
      puVar10 = UE::Trace::IAnalyzer::FArrayReader::GetImpl(this_01,0,local_1d8);
      if (puVar10 == (uchar *)0x0) {
LAB_14d3f2773:
        puVar10 = (uchar *)0x0;
      }
      else {
        iVar20 = -(int)local_1d8[0];
        if (iVar20 < 0) {
          iVar20 = (int)local_1d8[0];
        }
        if (iVar20 != 1) goto LAB_14d3f2773;
      }
      if (((int)uVar9 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (puVar10 == (uchar *)0x0) {
        uVar9 = UE::Trace::IAnalyzer::FEventData::GetAttachmentSize(param_3->EventData);
        puVar10 = UE::Trace::IAnalyzer::FEventData::GetAttachment(param_3->EventData);
        if (((int)uVar9 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      pFVar2 = this->LogProvider;
      pcVar4 = *(code **)(pFVar2->_padding_ + 0x60);
      dVar21 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,(ulong64)local_1b0);
      (*pcVar4)(&pFVar2->_padding_,local_1d0,SUB84(dVar21,0),puVar10);
      goto LAB_14d3f2b40;
    }
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"LogPoint",0);
    pFVar12 = FLogProvider::GetMessageSpec(this->LogProvider,uVar11);
    local_1b0 = pFVar12;
    uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                       (this_00,"CategoryPointer",0);
    plVar18 = &this->LogProvider->_padding_;
    pFVar13 = (FLogCategoryInfo *)(**(code **)(*plVar18 + 0x28))(plVar18,uVar11);
    pFVar12->Category = pFVar13;
    iVar20 = UE::Trace::IAnalyzer::FEventData::GetValue<int>(this_00,"Line",0);
    pFVar12->Line = iVar20;
    TVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"Verbosity",'\0');
    pFVar12->Verbosity = TVar7;
    local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.Data.ArrayNum = 0;
    local_198.Data.ArrayMax = 0;
    bVar5 = UE::Trace::IAnalyzer::FEventData::GetString(this_00,"FileName",&local_198);
    if (bVar5) {
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_198.Data.ArrayNum != 0) {
        FVar19.Data = local_198.Data.AllocatorInstance.Data;
      }
      pwVar14 = (wchar_t *)(**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar19.Data)
      ;
      local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar12->File = pwVar14;
      local_1a8.Data.ArrayNum = 0;
      local_1a8.Data.ArrayMax = 0;
      UE::Trace::IAnalyzer::FEventData::GetString(this_00,"FormatString",&local_1a8);
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_1a8.Data.ArrayNum != 0) {
        FVar19.Data = local_1a8.Data.AllocatorInstance.Data;
      }
      pwVar14 = (wchar_t *)(**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar19.Data)
      ;
      pFVar12->FormatString = pwVar14;
      FVar19.Data = local_198.Data.AllocatorInstance.Data;
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        FVar19.Data = local_198.Data.AllocatorInstance.Data;
      }
    }
    else {
      puVar10 = UE::Trace::IAnalyzer::FEventData::GetAttachment(this_00);
      pIVar3 = this->Session;
      local_68.Data = (FScriptContainerElement *)0x0;
      local_1d0 = *(code **)((longlong)*pIVar3 + 0xd0);
      if (puVar10 == (uchar *)0x0) {
        local_60 = (FScriptContainerElement *)0x0;
        local_58 = 0;
      }
      else {
        sVar15 = strlen((char *)puVar10);
        local_58 = (int)sVar15;
        uVar9 = local_58 + 1;
        FVar19.Data = (FScriptContainerElement *)0x0;
        if (0x80 < uVar9) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar9,2);
          FVar19.Data = local_68.Data;
        }
        local_60 = local_168;
        if (FVar19.Data != (FScriptContainerElement *)0x0) {
          local_60 = FVar19.Data;
        }
        TStringConvert<char,wchar_t>::Convert<char>((wchar_t *)local_60,uVar9,(char *)puVar10,uVar9)
        ;
        pFVar12 = local_1b0;
      }
      pwVar14 = (wchar_t *)(*local_1d0)(pIVar3,local_60);
      pFVar12->File = pwVar14;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      pIVar3 = this->Session;
      pcVar4 = *(code **)((longlong)*pIVar3 + 0xd0);
      sVar15 = strlen((char *)puVar10);
      puVar10 = UE::Trace::IAnalyzer::FEventData::GetAttachment(this_00);
      pwVar14 = (wchar_t *)(*pcVar4)(pIVar3,puVar10 + sVar15 + 1);
      local_1b0->FormatString = pwVar14;
      FVar19.Data = local_198.Data.AllocatorInstance.Data;
    }
  }
  if (FVar19.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar19.Data);
  }
LAB_14d3f2b40:
  (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1);
  FMemScope::~FMemScope(&local_188);
  FLLMScope::~FLLMScope(local_1b8);
  return true;
}

