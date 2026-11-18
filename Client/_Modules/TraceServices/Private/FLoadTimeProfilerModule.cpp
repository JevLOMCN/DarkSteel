// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 5

// GetModuleInfo @ 14d4905c0

void __thiscall
TraceServices::FLoadTimeProfilerModule::GetModuleInfo
          (FLoadTimeProfilerModule *this,FModuleInfo *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LoadTimeProfilerModuleName,"TraceModule_LoadTimeProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  param_1->Name = LoadTimeProfilerModuleName;
  param_1->DisplayName = L"Asset Loading";
  return;
}

// GetLoggers @ 14d490650

void __thiscall
TraceServices::FLoadTimeProfilerModule::GetLoggers
          (FLoadTimeProfilerModule *this,
          TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *local_18;
  wchar_t *local_10;
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_18 = L"LoadTime";
  if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(wchar_t **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_10 = L"PlatformFile";
  if (pFVar1 <= (FScriptContainerElement *)&local_10) {
    if ((FScriptContainerElement *)&local_10 < pFVar1 + (longlong)param_1->ArrayMax * 8) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(wchar_t **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_10;
  return;
}

// OnAnalysisBegin @ 14d4907c0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
TraceServices::FLoadTimeProfilerModule::OnAnalysisBegin
          (FLoadTimeProfilerModule *this,IAnalysisSession *param_1)

{
  code *pcVar1;
  bool bVar2;
  IEditableCounterProvider *pIVar3;
  FAsyncLoadingTraceAnalyzer *pFVar4;
  FAsyncLoadingTraceAnalyzer *pFVar5;
  FAsyncLoadingTraceAnalyzer *pFVar6;
  FPlatformFileTraceAnalyzer *this_00;
  FAsyncLoadingTraceAnalyzer *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  FLoadTimeProfilerProvider *pFVar10;
  FFileActivityProvider *pFVar11;
  FName local_res10;
  FName local_res18 [2];
  FLoadTimeProfilerProvider *local_78;
  FAsyncLoadingTraceAnalyzer *local_70;
  FFileActivityProvider *local_68;
  FAsyncLoadingTraceAnalyzer *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  pIVar3 = EditCounterProvider(param_1);
  pFVar4 = ::operator_new(0x288);
  pFVar7 = (FAsyncLoadingTraceAnalyzer *)0x0;
  pwVar9 = (wchar_t *)&DAT_00000008;
  pFVar11 = (FFileActivityProvider *)&DAT_00000010;
  if (pFVar4 == (FAsyncLoadingTraceAnalyzer *)0x0) {
    pFVar10 = (FLoadTimeProfilerProvider *)&DAT_00000010;
    pwVar8 = (wchar_t *)&DAT_00000008;
    pFVar4 = pFVar7;
  }
  else {
    pFVar4->FormatBuffer[0] = L'\x01';
    pFVar4->FormatBuffer[1] = L'\0';
    pFVar4->FormatBuffer[2] = L'\x01';
    pFVar4->FormatBuffer[3] = L'\0';
    pFVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFLoadTimeProfilerProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FLoadTimeProfilerProvider::FLoadTimeProfilerProvider
              ((FLoadTimeProfilerProvider *)(pFVar4->FormatBuffer + 4),param_1,pIVar3);
    pFVar10 = (FLoadTimeProfilerProvider *)(pFVar4->FormatBuffer + 4);
    if ((pFVar10 == (FLoadTimeProfilerProvider *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pwVar8 = pFVar4->FormatBuffer;
    LOCK();
    *(int *)pwVar8 = *(int *)pwVar8 + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  local_58 = 0;
  uStack_50 = 0;
  pcVar1 = *(code **)((longlong)*param_1 + 0xf0);
  if (pFVar4 != (FAsyncLoadingTraceAnalyzer *)0x0) {
    LOCK();
    *(int *)pwVar8 = *(int *)pwVar8 + 1;
    UNLOCK();
  }
  local_78 = pFVar10;
  local_70 = pFVar4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::Name,"LoadTimeProfilerProvider");
    _Init_thread_footer(&::_TSS0);
  }
  local_res10 = ::Name;
  (*pcVar1)(param_1,&local_res10,&local_78,&local_58);
  pcVar1 = *(code **)((longlong)*param_1 + 0xe8);
  pFVar5 = ::operator_new(0x40270);
  pFVar6 = pFVar7;
  if (pFVar5 != (FAsyncLoadingTraceAnalyzer *)0x0) {
    if ((pFVar10 == (FLoadTimeProfilerProvider *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar6 = FAsyncLoadingTraceAnalyzer::FAsyncLoadingTraceAnalyzer(pFVar5,param_1,pFVar10);
  }
  (*pcVar1)(param_1,pFVar6);
  pFVar5 = ::operator_new(0xb8);
  pFVar6 = pFVar7;
  if (pFVar5 != (FAsyncLoadingTraceAnalyzer *)0x0) {
    pFVar5->FormatBuffer[0] = L'\x01';
    pFVar5->FormatBuffer[1] = L'\0';
    pFVar5->FormatBuffer[2] = L'\x01';
    pFVar5->FormatBuffer[3] = L'\0';
    pFVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFileActivityProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FFileActivityProvider::FFileActivityProvider
              ((FFileActivityProvider *)(pFVar5->FormatBuffer + 4),param_1);
    pFVar11 = (FFileActivityProvider *)(pFVar5->FormatBuffer + 4);
    if ((pFVar11 == (FFileActivityProvider *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pwVar9 = pFVar5->FormatBuffer;
    LOCK();
    *(int *)pwVar9 = *(int *)pwVar9 + 1;
    UNLOCK();
    pFVar6 = pFVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  local_48 = 0;
  uStack_40 = 0;
  pcVar1 = *(code **)((longlong)*param_1 + 0xf0);
  if (pFVar6 != (FAsyncLoadingTraceAnalyzer *)0x0) {
    LOCK();
    *(int *)pwVar9 = *(int *)pwVar9 + 1;
    UNLOCK();
  }
  local_68 = pFVar11;
  local_60 = pFVar6;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::Name,"FileActivityProvider");
    _Init_thread_footer(&::_TSS0);
  }
  local_res18[0] = ::Name;
  (*pcVar1)(param_1,local_res18,&local_68,&local_48);
  pcVar1 = *(code **)((longlong)*param_1 + 0xe8);
  this_00 = ::operator_new(0x1f8);
  if (this_00 != (FPlatformFileTraceAnalyzer *)0x0) {
    if ((pFVar11 == (FFileActivityProvider *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar7 = (FAsyncLoadingTraceAnalyzer *)
             FPlatformFileTraceAnalyzer::FPlatformFileTraceAnalyzer(this_00,param_1,pFVar11);
  }
  (*pcVar1)(param_1,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// GenerateReports @ 14d490b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TraceServices::FLoadTimeProfilerModule::GenerateReports
          (FLoadTimeProfilerModule *this,IAnalysisSession *param_1,wchar_t *param_2,wchar_t *param_3
          )

{
  code *pcVar1;
  double dVar2;
  int iVar3;
  bool bVar4;
  IBookmarkProvider *pIVar5;
  longlong *plVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar7;
  IUntypedTable *pIVar8;
  IUntypedTable *pIVar9;
  IUntypedTable *pIVar10;
  IFileManager *pIVar11;
  TReferenceControllerBase<1> *pTVar12;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  uint uVar18;
  double dVar19;
  undefined4 uVar20;
  undefined1 auStackY_2b8 [32];
  double local_278;
  double local_270;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_228;
  FString local_218;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_208;
  longlong *local_1f8;
  TReferenceControllerBase<1> *local_1f0;
  FString local_1e8;
  FString local_1d8;
  ForAnyElementType local_1c8;
  int local_1c0;
  int local_1bc;
  ForAnyElementType local_1b8;
  int local_1b0;
  int local_1ac;
  double *local_1a8;
  double *local_1a0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_198;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_188;
  FName local_178;
  FName local_170;
  longlong **local_168;
  IBookmarkProvider *local_160;
  FString local_158;
  code *local_148;
  ForAnyElementType *local_140;
  code *local_138;
  longlong ***local_130;
  FString local_128;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_118;
  ulonglong local_78;
  
  dVar2 = __real_ffefffffffffffff;
  dVar19 = __real_7fefffffffffffff;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  uVar20 = SUB84(__real_7fefffffffffffff,0);
  local_270 = __real_ffefffffffffffff;
  local_278 = __real_7fefffffffffffff;
  pIVar5 = ReadBookmarkProvider(param_1);
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Data.ArrayNum = 0;
  local_1d8.Data.ArrayMax = 0;
  local_160 = pIVar5;
  FParse::Value(param_2,L"-BeginCaptureBookmark=",&local_1d8,true,(wchar_t **)0x0);
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Data.ArrayNum = 0;
  local_1e8.Data.ArrayMax = 0;
  FParse::Value(param_2,L"-EndCaptureBookmark=",&local_1e8,true,(wchar_t **)0x0);
  FVar16.Data = local_1d8.Data.AllocatorInstance.Data;
  lVar17 = (longlong)local_1d8.Data.ArrayNum;
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1c0 = local_1d8.Data.ArrayNum;
  pcVar1 = *(code **)((longlong)*pIVar5 + 0x28);
  if (local_1d8.Data.ArrayNum == 0) {
    local_1bc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1d8.Data.ArrayNum,0,&local_1c8,local_1d8.Data.ArrayNum,&local_1bc);
    memcpy(local_1c8.Data,FVar16.Data,lVar17 * 2);
  }
  FVar16.Data = local_1e8.Data.AllocatorInstance.Data;
  lVar17 = (longlong)local_1e8.Data.ArrayNum;
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0 = local_1e8.Data.ArrayNum;
  if (local_1e8.Data.ArrayNum == 0) {
    local_1ac = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1e8.Data.ArrayNum,0,&local_1b8,local_1e8.Data.ArrayNum,&local_1ac);
    memcpy(local_1b8.Data,FVar16.Data,lVar17 * 2);
  }
  local_1a8 = &local_270;
  local_1a0 = &local_278;
  local_140 = &local_1c8;
  local_148 = UE::Core::Private::Function::
              TFunctionRefCaller<`TraceServices::FLoadTimeProfilerModule::GenerateReports'::__l2::<lambda_1>,void,TraceServices::FBookmark_const_&>
              ::Call;
  (*pcVar1)(pIVar5,0,uVar20);
  if (local_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  if (local_1c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data);
  }
  if (local_270 == dVar2) {
    local_270 = 0.0;
  }
  if (local_278 == dVar19) {
    local_278 = (double)(**(code **)((longlong)*param_1 + 0x30))(param_1);
  }
  lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar17 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::Name,"LoadTimeProfilerProvider");
    _Init_thread_footer(&::_TSS0);
  }
  local_178 = ::Name;
  plVar6 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,&local_178);
  pTVar7 = &::FString::FString(&local_128,param_3)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_268,pTVar7,0x12 - (uint)(pTVar7->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_268,L"LoadTimeProfiler",0x10);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (plVar6 != (longlong *)0x0) {
    pIVar8 = (IUntypedTable *)(**(code **)(*plVar6 + 0x48))(plVar6,local_270,SUB84(local_278,0));
    iVar3 = local_268.ArrayNum;
    FVar16.Data = local_268.AllocatorInstance.Data;
    local_258.Data.ArrayNum = local_268.ArrayNum;
    local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar18 = (0xe - (uint)(local_268.ArrayNum != 0)) + local_268.ArrayNum;
    if ((int)uVar18 < local_268.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar18,0,(ForAnyElementType *)&local_258,local_268.ArrayNum,
               &local_258.Data.ArrayMax);
    if (iVar3 != 0) {
      memcpy(local_258.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar3 * 2);
    }
    ::FString::PathAppend(&local_258,L"Packages.csv",0xc);
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_258.Data.ArrayNum != 0) {
      FVar16.Data = local_258.Data.AllocatorInstance.Data;
    }
    Table2Csv(pIVar8,(wchar_t *)FVar16.Data);
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
    pIVar9 = (IUntypedTable *)(**(code **)(*plVar6 + 0x50))(plVar6,local_270,SUB84(local_278,0));
    iVar3 = local_268.ArrayNum;
    FVar16.Data = local_268.AllocatorInstance.Data;
    local_248.Data.ArrayNum = local_268.ArrayNum;
    local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar18 = (0xd - (uint)(local_268.ArrayNum != 0)) + local_268.ArrayNum;
    if ((int)uVar18 < local_268.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar18,0,(ForAnyElementType *)&local_248,local_268.ArrayNum,
               &local_248.Data.ArrayMax);
    if (iVar3 != 0) {
      memcpy(local_248.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar3 * 2);
    }
    ::FString::PathAppend(&local_248,L"Exports.csv",0xb);
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_248.Data.ArrayNum != 0) {
      FVar16.Data = local_248.Data.AllocatorInstance.Data;
    }
    Table2Csv(pIVar9,(wchar_t *)FVar16.Data);
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    pIVar10 = (IUntypedTable *)(**(code **)(*plVar6 + 0x58))(plVar6,local_270,SUB84(local_278,0));
    iVar3 = local_268.ArrayNum;
    FVar16.Data = local_268.AllocatorInstance.Data;
    local_238.Data.ArrayNum = local_268.ArrayNum;
    local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar18 = (0xe - (uint)(local_268.ArrayNum != 0)) + local_268.ArrayNum;
    if ((int)uVar18 < local_268.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar18,0,(ForAnyElementType *)&local_238,local_268.ArrayNum,
               &local_238.Data.ArrayMax);
    if (iVar3 != 0) {
      memcpy(local_238.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar3 * 2);
    }
    ::FString::PathAppend(&local_238,L"Requests.csv",0xc);
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_238.Data.ArrayNum != 0) {
      FVar16.Data = local_238.Data.AllocatorInstance.Data;
    }
    Table2Csv(pIVar10,(wchar_t *)FVar16.Data);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    if (pIVar10 != (IUntypedTable *)0x0) {
      (**(code **)*pIVar10)(pIVar10,1);
    }
    if (pIVar9 != (IUntypedTable *)0x0) {
      (**(code **)*pIVar9)(pIVar9,1);
    }
    if (pIVar8 != (IUntypedTable *)0x0) {
      (**(code **)*pIVar8)(pIVar8,1);
    }
  }
  if ((*(int *)(lVar17 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::Name,"FileActivityProvider");
    _Init_thread_footer(&::_TSS0);
  }
  local_170 = ::Name;
  plVar6 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1);
  iVar3 = local_268.ArrayNum;
  FVar16.Data = local_268.AllocatorInstance.Data;
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  local_268.ArrayNum = iVar3;
  if (plVar6 != (longlong *)0x0) {
    local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.ArrayNum = local_268.ArrayNum;
    if (iVar3 == 0) {
      local_228.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,0,&local_228.AllocatorInstance,iVar3,&local_228.ArrayMax);
      memcpy(local_228.AllocatorInstance.Data,FVar16.Data,(longlong)iVar3 * 2);
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_198,&local_228,0x12 - (uint)(local_228.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_198,L"FileActivity.csv",0x10);
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_198.ArrayNum != 0) {
      FVar16.Data = local_198.AllocatorInstance.Data;
    }
    pIVar8 = (IUntypedTable *)(**(code **)(*plVar6 + 0x28))(plVar6);
    Table2Csv(pIVar8,(wchar_t *)FVar16.Data);
    if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.AllocatorInstance.Data);
    }
    if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.AllocatorInstance.Data);
    }
  }
  if (local_270 <= 0.0) {
    dVar19 = (double)(**(code **)((longlong)*param_1 + 0x30))(param_1);
    uVar20 = SUB84(local_278,0);
    if (dVar19 <= local_278) goto LAB_14d491304;
  }
  pIVar11 = IFileManager::Get();
  iVar3 = local_268.ArrayNum;
  FVar16.Data = local_268.AllocatorInstance.Data;
  local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.Data.ArrayNum = local_268.ArrayNum;
  pcVar1 = *(code **)((longlong)*pIVar11 + 0x20);
  uVar18 = (0x14 - (uint)(local_268.ArrayNum != 0)) + local_268.ArrayNum;
  if ((int)uVar18 < local_268.ArrayNum) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar18,0,(ForAnyElementType *)&local_218,local_268.ArrayNum,
             &local_218.Data.ArrayMax);
  if (iVar3 != 0) {
    memcpy(local_218.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar3 * 2);
  }
  ::FString::PathAppend(&local_218,L"CaptureSummary.txt",0x12);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_218.Data.ArrayNum != 0) {
    FVar16.Data = local_218.Data.AllocatorInstance.Data;
  }
  plVar6 = (longlong *)(*pcVar1)(pIVar11,FVar16.Data,0);
  pTVar12 = ::operator_new(0x18);
  pTVar14 = pTVar15;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFArchive__U__DefaultDeleter_VFArchive___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar12[1]._padding_ = (longlong)plVar6;
    pTVar14 = pTVar12;
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_158,L"Capture start: %f\r\nCapture end: %f\r\nCapture duration: %f");
  if ((plVar6 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(*plVar6 + 0x188);
  FVar16.Data = local_158.Data.AllocatorInstance.Data;
  if (local_158.Data.ArrayNum == 0) {
    FVar16.Data = (FScriptContainerElement *)L"";
  }
  pTVar13 = StringCast<char,128,wchar_t>(&local_118,(wchar_t *)FVar16.Data);
  (*pcVar1)(plVar6,pTVar13->Ptr);
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  uVar20 = SUB84(local_278,0);
LAB_14d491304:
  FVar16.Data = local_268.AllocatorInstance.Data;
  dVar19 = local_270;
  local_208.ArrayNum = local_268.ArrayNum;
  local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_268.ArrayNum == 0) {
    local_208.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_268.ArrayNum,0,&local_208.AllocatorInstance,local_268.ArrayNum,
               &local_208.ArrayMax);
    memcpy(local_208.AllocatorInstance.Data,FVar16.Data,(longlong)local_268.ArrayNum * 2);
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_188,&local_208,0xf - (uint)(local_208.ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_188,L"Bookmarks.csv",0xd);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_188.ArrayNum != 0) {
    FVar16.Data = local_188.AllocatorInstance.Data;
  }
  pIVar11 = IFileManager::Get();
  plVar6 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,FVar16.Data,0);
  local_1f8 = plVar6;
  pTVar14 = ::operator_new(0x18);
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    pTVar14->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14->WeakReferenceCount = (atomic<int>)0x1;
    pTVar14->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFArchive__U__DefaultDeleter_VFArchive___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar14[1]._padding_ = (longlong)plVar6;
    pTVar15 = pTVar14;
  }
  local_1f0 = pTVar15;
  if ((local_1f8 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(*local_1f8 + 0x188))(local_1f8,"Name, Timestamp\n",0x10);
  local_168 = &local_1f8;
  local_130 = &local_168;
  local_138 = UE::Core::Private::Function::
              TFunctionRefCaller<`TraceServices::BookmarksToCsv'::__l2::<lambda_1>,void,TraceServices::FBookmark_const_&>
              ::Call;
  (**(code **)((longlong)*local_160 + 0x28))(local_160,dVar19,uVar20,&local_138);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1f0);
  if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
  if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.AllocatorInstance.Data);
  }
  if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14d496cd0

void __thiscall
`TraceServices::FLoadTimeProfilerModule::GenerateReports'::__l2::<lambda_1>::operator()
          (void *this,FBookmark *param_1)

{
  int iVar1;
  
  if ((__real_ffefffffffffffff == **(double **)((longlong)this + 0x20)) &&
     (1 < *(int *)((longlong)this + 8))) {
    iVar1 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)this,param_1->Text);
    if (iVar1 == 0) {
      **(double **)((longlong)this + 0x20) = param_1->Time;
    }
  }
  if ((__real_7fefffffffffffff == **(double **)((longlong)this + 0x28)) &&
     (1 < *(int *)((longlong)this + 0x18))) {
    iVar1 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)((longlong)this + 0x10),param_1->Text);
    if (iVar1 == 0) {
      **(double **)((longlong)this + 0x28) = param_1->Time;
    }
  }
  return;
}

