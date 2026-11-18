// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 5

// FModuleAnalyzer @ 14d3ccaf0

FModuleAnalyzer * __thiscall
TraceServices::FModuleAnalyzer::FModuleAnalyzer(FModuleAnalyzer *this,IAnalysisSession *param_1)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FModuleAnalyzer_TraceServices__6B_;
  this->Provider = (IModuleAnalysisProvider *)0x0;
  this->ModuleBaseShift = '\0';
  return this;
}

// GetBaseAddress @ 14d3dffc0

ulong64 __thiscall
TraceServices::FModuleAnalyzer::GetBaseAddress(FModuleAnalyzer *this,FEventData *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  
  if (this->ModuleBaseShift == '\0') {
    uVar2 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(param_1,"Base",0);
    return uVar2;
  }
  uVar1 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_1,"Base",0);
  return (ulonglong)uVar1 << (this->ModuleBaseShift & 0x3f);
}

// OnAnalysisBegin @ 14d3e8fa0

void __thiscall
TraceServices::FModuleAnalyzer::OnAnalysisBegin(FModuleAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"Diagnostics","ModuleInit",0);
  (**(code **)*pFVar1)(pFVar1,1,"Diagnostics","ModuleLoad",0);
  (**(code **)*pFVar1)(pFVar1,2,"Diagnostics","ModuleUnload",0);
  return;
}

// OnAnalysisEnd @ 14d3eaae0

void __thiscall TraceServices::FModuleAnalyzer::OnAnalysisEnd(FModuleAnalyzer *this)

{
  if (this->Provider != (IModuleAnalysisProvider *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d3eaaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->Provider + 0x68))();
    return;
  }
  return;
}

// OnEvent @ 14d3f4620

/* WARNING: Removing unreachable block (ram,0x00014d3f489c) */

bool __thiscall
TraceServices::FModuleAnalyzer::OnEvent
          (FModuleAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  IModuleAnalysisProvider *pIVar1;
  code *pcVar2;
  IAnalysisSession *pIVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulong64 uVar8;
  FArrayReader *this_00;
  uchar *puVar9;
  FName FVar10;
  FLLMScope local_res10 [2];
  FMemScope local_88 [2];
  TSharedPtr<TraceServices::IModuleAnalysisProvider,1> local_78;
  TStringView<wchar_t> local_68;
  TStringView<char> local_58;
  undefined1 *local_48;
  TReferenceControllerBase<1> *local_40;
  IModuleAnalysisProvider *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name56,L"Insights/FModuleAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name56,false,None,Default,true);
  FMemScope::FMemScope(local_88,&LLMScope_Name56,true);
  if (param_1 == 0) {
    uVar6 = UE::Trace::IAnalyzer::FEventData::GetValue<int>
                      (param_3->EventData,"ModuleBaseShift",0x10);
    if (((uVar6 != (uVar6 & 0xff)) || ((int)uVar6 < 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4))
    {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    this->ModuleBaseShift = (uchar)uVar6;
    local_58.DataPtr = (char *)0x0;
    local_58.Size = 0;
    bVar4 = UE::Trace::IAnalyzer::FEventData::GetString(param_3->EventData,"SymbolFormat",&local_58)
    ;
    if (bVar4) {
      if ((this->Provider != (IModuleAnalysisProvider *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Provider == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\ModuleAnalysis.cpp"
                             ,0x42,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      CreateModuleProvider(&local_78,this->Session,&local_58);
      if (local_78.Object != (IModuleAnalysisProvider *)0x0) {
        pIVar3 = this->Session;
        pcVar2 = *(code **)((longlong)*pIVar3 + 0xf0);
        local_48 = &(local_78.Object)->field_0x8;
        local_40 = local_78.SharedReferenceCount.ReferenceController;
        if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_38 = local_78.Object;
        pTStack_30 = local_78.SharedReferenceCount.ReferenceController;
        if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FVar10 = GetModuleProviderName();
        (*pcVar2)(pIVar3,FVar10,&local_38,&local_48);
        this->Provider = local_78.Object;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
  }
  else if (param_1 == 1) {
    if (this->Provider != (IModuleAnalysisProvider *)0x0) {
      local_68.DataPtr = (wchar_t *)0x0;
      local_68.Size = 0;
      bVar4 = UE::Trace::IAnalyzer::FEventData::GetString(param_3->EventData,"Name",&local_68);
      if (bVar4) {
        uVar8 = GetBaseAddress(this,param_3->EventData);
        uVar6 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                          (param_3->EventData,"Size",0);
        this_00 = UE::Trace::IAnalyzer::FEventData::GetArrayImpl(param_3->EventData,"ImageId");
        pIVar1 = this->Provider;
        pcVar2 = *(code **)(*(longlong *)pIVar1 + 0x58);
        uVar7 = UE::Trace::IAnalyzer::FArrayReader::Num(this_00);
        puVar9 = UE::Trace::IAnalyzer::TArrayReader<unsigned_char>::GetData
                           ((TArrayReader<unsigned_char> *)this_00);
        (*pcVar2)(pIVar1,&local_68,uVar8,uVar6,puVar9,uVar7);
      }
    }
  }
  else if ((param_1 == 2) && (this->Provider != (IModuleAnalysisProvider *)0x0)) {
    if (this->ModuleBaseShift == '\0') {
      uVar8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                        (param_3->EventData,"Base",0);
      (**(code **)(*(longlong *)this->Provider + 0x60))(this->Provider,uVar8);
    }
    else {
      uVar6 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_3->EventData,"Base",0);
      (**(code **)(*(longlong *)this->Provider + 0x60))
                (this->Provider,(ulonglong)uVar6 << (this->ModuleBaseShift & 0x3f));
    }
  }
  FMemScope::~FMemScope(local_88);
  FLLMScope::~FLLMScope(local_res10);
  return true;
}

