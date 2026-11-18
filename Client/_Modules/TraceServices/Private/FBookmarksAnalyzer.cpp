// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 3

// FBookmarksAnalyzer @ 14d3cbd90

FBookmarksAnalyzer * __thiscall
TraceServices::FBookmarksAnalyzer::FBookmarksAnalyzer
          (FBookmarksAnalyzer *this,IAnalysisSession *param_1,IEditableBookmarkProvider *param_2,
          IEditableLogProvider *param_3)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FBookmarksAnalyzer_TraceServices__6B_;
  this->EditableBookmarkProvider = param_2;
  this->EditableLogProvider = param_3;
  this->BookmarkLogCategoryId = 0xffffffffffffffff;
  if (param_3 != (IEditableLogProvider *)0x0) {
    (**(code **)((longlong)*param_1 + 0xa0))(param_1);
    uVar1 = (**(code **)((longlong)*this->EditableLogProvider + 0x20))();
    this->BookmarkLogCategoryId = uVar1;
    puVar2 = (undefined8 *)
             (**(code **)((longlong)*this->EditableLogProvider + 0x28))
                       (this->EditableLogProvider,uVar1);
    *puVar2 = L"LogBookmark";
    *(undefined1 *)(puVar2 + 1) = 7;
    (**(code **)((longlong)*param_1 + 0xa8))(param_1);
  }
  return this;
}

// OnAnalysisBegin @ 14d3e84b0

void __thiscall
TraceServices::FBookmarksAnalyzer::OnAnalysisBegin
          (FBookmarksAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"Misc","BookmarkSpec",0);
  (**(code **)*pFVar1)(pFVar1,1,"Misc","Bookmark",0);
  return;
}

// OnEvent @ 14d3ef460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
TraceServices::FBookmarksAnalyzer::OnEvent
          (FBookmarksAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  IAnalysisSession *pIVar1;
  FEventData *this_00;
  IEditableLogProvider *pIVar2;
  IAnalysisSession *pIVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  ulong64 uVar7;
  FArrayReader *this_01;
  uchar *puVar8;
  ForAnyElementType FVar9;
  code *pcVar10;
  undefined8 uVar11;
  size_t sVar12;
  int iVar13;
  ForAnyElementType FVar14;
  double dVar15;
  undefined1 auStackY_1f8 [32];
  char local_1b8 [4];
  uint local_1b4;
  code *local_1b0;
  FLLMScope local_1a8 [2];
  FString local_1a0;
  FString local_190;
  FMemScope local_180;
  FScriptContainerElement local_178 [256];
  ForAnyElementType local_78;
  FScriptContainerElement *local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name43,L"Insights/FBookmarksAnalyzer");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_1a8,LLMScope_Name43,false,None,Default,true);
  FMemScope::FMemScope(&local_180,&LLMScope_Name43,true);
  pIVar1 = this->Session;
  (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1);
  this_00 = param_3->EventData;
  if (param_1 == 0) {
    FVar9.Data = (FScriptContainerElement *)
                 UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                           (this_00,"BookmarkPoint",0);
    local_1a0.Data.AllocatorInstance.Data = FVar9.Data;
    local_1b4 = UE::Trace::IAnalyzer::FEventData::GetValue<int>(this_00,"Line",0);
    local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_190.Data.ArrayNum = 0;
    local_190.Data.ArrayMax = 0;
    bVar4 = UE::Trace::IAnalyzer::FEventData::GetString(this_00,"FileName",&local_190);
    if (bVar4) {
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_190.Data.ArrayNum != 0) {
        FVar14.Data = local_190.Data.AllocatorInstance.Data;
      }
      pcVar10 = (code *)(**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar14.Data);
      local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a0.Data.ArrayNum = 0;
      local_1a0.Data.ArrayMax = 0;
      UE::Trace::IAnalyzer::FEventData::GetString(this_00,"FormatString",&local_1a0);
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_1a0.Data.ArrayNum != 0) {
        FVar14.Data = local_1a0.Data.AllocatorInstance.Data;
      }
      uVar11 = (**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar14.Data);
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
    }
    else {
      puVar8 = UE::Trace::IAnalyzer::FEventData::GetAttachment(this_00);
      pIVar3 = this->Session;
      local_78.Data = (FScriptContainerElement *)0x0;
      local_1b0 = *(code **)((longlong)*pIVar3 + 0xd0);
      if (puVar8 == (uchar *)0x0) {
        local_70 = (FScriptContainerElement *)0x0;
        local_68 = 0;
      }
      else {
        sVar12 = strlen((char *)puVar8);
        local_68 = (int)sVar12;
        uVar6 = local_68 + 1;
        FVar9.Data = (FScriptContainerElement *)0x0;
        if (0x80 < uVar6) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar6,2);
          FVar9.Data = local_78.Data;
        }
        local_70 = local_178;
        if (FVar9.Data != (FScriptContainerElement *)0x0) {
          local_70 = FVar9.Data;
        }
        TStringConvert<char,wchar_t>::Convert<char>((wchar_t *)local_70,uVar6,(char *)puVar8,uVar6);
      }
      local_1b0 = (code *)(*local_1b0)(pIVar3,local_70);
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      pIVar3 = this->Session;
      pcVar10 = *(code **)((longlong)*pIVar3 + 0xd0);
      sVar12 = strlen((char *)puVar8);
      puVar8 = UE::Trace::IAnalyzer::FEventData::GetAttachment(this_00);
      uVar11 = (*pcVar10)(pIVar3,puVar8 + sVar12 + 1);
      pcVar10 = local_1b0;
      FVar9.Data = local_1a0.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*this->EditableBookmarkProvider + 0x20))
              (this->EditableBookmarkProvider,FVar9.Data,uVar11,pcVar10);
    pIVar2 = this->EditableLogProvider;
    if (pIVar2 != (IEditableLogProvider *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,FVar9.Data,this->BookmarkLogCategoryId,uVar11);
    }
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    goto LAB_14d3ef886;
  }
  if (param_1 != 1) goto LAB_14d3ef886;
  local_1b0 = (code *)UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                                (this_00,"BookmarkPoint",0);
  uVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
  dVar15 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar7);
  this_01 = UE::Trace::IAnalyzer::FEventData::GetArrayImpl(param_3->EventData,"FormatArgs");
  local_1b4 = UE::Trace::IAnalyzer::FArrayReader::Num(this_01);
  puVar8 = UE::Trace::IAnalyzer::FArrayReader::GetImpl(this_01,0,local_1b8);
  if (puVar8 == (uchar *)0x0) {
LAB_14d3ef5ab:
    puVar8 = (uchar *)0x0;
  }
  else {
    iVar13 = -(int)local_1b8[0];
    if (iVar13 < 0) {
      iVar13 = (int)local_1b8[0];
    }
    if (iVar13 != 1) goto LAB_14d3ef5ab;
  }
  if ((int)local_1b4 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar10 = (code *)swi(3);
      uVar5 = (*pcVar10)();
      return (bool)uVar5;
    }
  }
  if (puVar8 == (uchar *)0x0) {
    uVar6 = UE::Trace::IAnalyzer::FEventData::GetAttachmentSize(param_3->EventData);
    puVar8 = UE::Trace::IAnalyzer::FEventData::GetAttachment(param_3->EventData);
    if ((int)uVar6 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar10 = (code *)swi(3);
        uVar5 = (*pcVar10)();
        return (bool)uVar5;
      }
    }
  }
  uVar6 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"CallstackId",0);
  pcVar10 = local_1b0;
  (**(code **)((longlong)*this->EditableBookmarkProvider + 0x30))
            (this->EditableBookmarkProvider,local_1b0,SUB84(dVar15,0),uVar6);
  pIVar2 = this->EditableLogProvider;
  if (pIVar2 != (IEditableLogProvider *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x60))(pIVar2,pcVar10,SUB84(dVar15,0),puVar8);
  }
LAB_14d3ef886:
  (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1);
  FMemScope::~FMemScope(&local_180);
  FLLMScope::~FLLMScope(local_1a8);
  return true;
}

