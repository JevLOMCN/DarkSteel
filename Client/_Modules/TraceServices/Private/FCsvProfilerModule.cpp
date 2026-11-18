// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 4

// GetModuleInfo @ 14d492bb0

void __thiscall
TraceServices::FCsvProfilerModule::GetModuleInfo(FCsvProfilerModule *this,FModuleInfo *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&CsvProfilerModuleName,"TraceModule_CsvProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  param_1->Name = CsvProfilerModuleName;
  param_1->DisplayName = L"CsvProfiler";
  return;
}

// OnAnalysisBegin @ 14d492c40

void __thiscall
TraceServices::FCsvProfilerModule::OnAnalysisBegin
          (FCsvProfilerModule *this,IAnalysisSession *param_1)

{
  code *pcVar1;
  bool bVar2;
  IFrameProvider *pIVar3;
  IThreadProvider *pIVar4;
  FCsvProfilerAnalyzer *pFVar5;
  FCsvProfilerAnalyzer *this_00;
  FCsvProfilerAnalyzer *pFVar6;
  IAnalysisSession **ppIVar7;
  FCsvProfilerProvider *pFVar8;
  FName local_res10;
  IEditableCounterProvider *local_res18;
  FCsvProfilerProvider *local_58;
  FCsvProfilerAnalyzer *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  pIVar3 = ReadFrameProvider(param_1);
  pIVar4 = ReadThreadProvider(param_1);
  local_res18 = EditCounterProvider(param_1);
  pFVar5 = ::operator_new(0xe8);
  pFVar6 = (FCsvProfilerAnalyzer *)0x0;
  if (pFVar5 == (FCsvProfilerAnalyzer *)0x0) {
    pFVar8 = (FCsvProfilerProvider *)&DAT_00000010;
    ppIVar7 = (IAnalysisSession **)&DAT_00000008;
    pFVar5 = pFVar6;
  }
  else {
    *(undefined4 *)&pFVar5->Session = 1;
    *(undefined4 *)((longlong)&pFVar5->Session + 4) = 1;
    pFVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCsvProfilerProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FCsvProfilerProvider::FCsvProfilerProvider
              ((FCsvProfilerProvider *)&pFVar5->CsvProfilerProvider,param_1);
    pFVar8 = (FCsvProfilerProvider *)&pFVar5->CsvProfilerProvider;
    if (pFVar8 == (FCsvProfilerProvider *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    ppIVar7 = &pFVar5->Session;
    LOCK();
    *(int *)ppIVar7 = *(int *)ppIVar7 + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  local_48 = 0;
  uStack_40 = 0;
  pcVar1 = *(code **)((longlong)*param_1 + 0xf0);
  if (pFVar5 != (FCsvProfilerAnalyzer *)0x0) {
    LOCK();
    *(int *)ppIVar7 = *(int *)ppIVar7 + 1;
    UNLOCK();
  }
  local_58 = pFVar8;
  local_50 = pFVar5;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"CsvProfilerProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res10 = ::Name;
  (*pcVar1)(param_1,&local_res10,&local_58,&local_48);
  pcVar1 = *(code **)((longlong)*param_1 + 0xe8);
  this_00 = ::operator_new(0x1c0);
  if (this_00 != (FCsvProfilerAnalyzer *)0x0) {
    if (pFVar8 == (FCsvProfilerProvider *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar6 = FCsvProfilerAnalyzer::FCsvProfilerAnalyzer
                       (this_00,param_1,pFVar8,local_res18,pIVar3,pIVar4);
  }
  (*pcVar1)(param_1,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return;
}

// GenerateReports @ 14d492e50

void __thiscall
TraceServices::FCsvProfilerModule::GenerateReports
          (FCsvProfilerModule *this,IAnalysisSession *param_1,wchar_t *param_2,wchar_t *param_3)

{
  FName local_res10 [2];
  wchar_t *local_res20;
  longlong *local_28;
  wchar_t **local_20;
  code *local_18;
  longlong **local_10;
  
  local_res20 = param_3;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"CsvProfilerProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res10[0] = ::Name;
  local_28 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res10);
  if (local_28 != (longlong *)0x0) {
    local_20 = &local_res20;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::FCsvProfilerModule::GenerateReports'::__l5::<lambda_1>,void,TraceServices::FCaptureInfo_const_&>
               ::Call;
    (**(code **)(*local_28 + 0x20))(local_28,&local_18);
  }
  return;
}

// operator() @ 14d496d60

void __thiscall
`TraceServices::FCsvProfilerModule::GenerateReports'::__l5::<lambda_1>::operator()
          (void *this,FCaptureInfo *param_1)

{
  wchar_t *_Str;
  int iVar1;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar2;
  size_t sVar3;
  IUntypedTable *pIVar4;
  int iVar5;
  ForAnyElementType FVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  _Str = param_1->Filename;
  pTVar2 = &::FString::FString(&local_18,(wchar_t *)**(undefined8 **)((longlong)this + 8))->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_28,pTVar2,0xd - (uint)(pTVar2->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_28,L"CsvProfiler",0xb);
  sVar3 = wcslen(_Str);
  iVar1 = (int)sVar3;
  if ((local_28.ArrayNum != 0) || (iVar5 = 2, iVar1 == -1)) {
    iVar5 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_38,&local_28,iVar5 + iVar1);
  ::FString::PathAppend((FString *)&local_38,_Str,iVar1);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_38.ArrayNum != 0) {
    FVar6.Data = local_38.AllocatorInstance.Data;
  }
  pIVar4 = (IUntypedTable *)
           (**(code **)(**(longlong **)this + 0x28))(*(longlong **)this,param_1->Id);
  TraceServices::Table2Csv(pIVar4,(wchar_t *)FVar6.Data);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

