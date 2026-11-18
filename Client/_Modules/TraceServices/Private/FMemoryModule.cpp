// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 3

// GetModuleInfo @ 14d491ff0

void __thiscall
TraceServices::FMemoryModule::GetModuleInfo(FMemoryModule *this,FModuleInfo *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&MemoryModuleName,"TraceModule_Memory");
      _Init_thread_footer(&::_TSS0);
    }
  }
  param_1->Name = MemoryModuleName;
  param_1->DisplayName = L"Memory";
  return;
}

// GetLoggers @ 14d492080

void __thiscall
TraceServices::FMemoryModule::GetLoggers
          (FMemoryModule *this,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *local_18 [2];
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_18[0] = L"Memory";
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(wchar_t **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// OnAnalysisBegin @ 14d492140

void __thiscall
TraceServices::FMemoryModule::OnAnalysisBegin(FMemoryModule *this,IAnalysisSession *param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FMemoryAnalyzer *this_00;
  FMetadataAnalysis *pFVar4;
  FModuleAnalyzer *this_01;
  FCallstacksAnalyzer *this_02;
  FMetadataAnalysis *pFVar5;
  FAllocationsAnalyzer *this_03;
  FMetadataAnalysis *pFVar6;
  IAnalysisSession **ppIVar7;
  FAllocationsProvider *pFVar8;
  FMemoryProvider *pFVar9;
  FCallstacksProvider *pFVar10;
  atomic<int> *paVar11;
  TReferenceControllerBase<1> *local_res10;
  TReferenceControllerBase<1> *local_res18;
  TReferenceControllerBase<1> *local_res20;
  FMetadataProvider *local_e0;
  FMetadataProvider *local_d8;
  TReferenceControllerBase<1> *local_d0;
  FAllocationsProvider *local_c8;
  FMetadataAnalysis *local_c0;
  FMemoryProvider *local_b8;
  TReferenceControllerBase<1> *local_b0;
  FCallstacksProvider *local_a8;
  TReferenceControllerBase<1> *local_a0;
  FMetadataAnalysis *local_98;
  TReferenceControllerBase<1> *local_90;
  FMetadataAnalysis *local_88;
  FMetadataAnalysis *local_80;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_res18 = ::operator_new(0x100);
  pFVar6 = (FMetadataAnalysis *)0x0;
  pFVar8 = (FAllocationsProvider *)&DAT_00000010;
  ppIVar7 = (IAnalysisSession **)&DAT_00000008;
  if (local_res18 == (TReferenceControllerBase<1> *)0x0) {
    local_res18 = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = (FMemoryProvider *)&DAT_00000010;
    paVar11 = (atomic<int> *)&DAT_00000008;
  }
  else {
    local_res18->SharedReferenceCount = (atomic<int>)0x1;
    local_res18->WeakReferenceCount = (atomic<int>)0x1;
    local_res18->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMemoryProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FMemoryProvider::FMemoryProvider((FMemoryProvider *)(local_res18 + 1),param_1);
    pFVar9 = (FMemoryProvider *)(local_res18 + 1);
    if ((pFVar9 == (FMemoryProvider *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    paVar11 = &local_res18->SharedReferenceCount;
    LOCK();
    *paVar11 = (atomic<int>)((int)*paVar11 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res18);
  local_58 = 0;
  uStack_50 = 0;
  pcVar1 = *(code **)((longlong)*param_1 + 0xf0);
  local_b0 = local_res18;
  if (local_res18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar11 = (atomic<int>)((int)*paVar11 + 1);
    UNLOCK();
  }
  local_b8 = pFVar9;
  FVar3 = GetMemoryProviderName();
  (*pcVar1)(param_1,FVar3,&local_b8,&local_58);
  pcVar1 = *(code **)((longlong)*param_1 + 0xe8);
  this_00 = ::operator_new(0x20);
  pFVar4 = pFVar6;
  if (this_00 != (FMemoryAnalyzer *)0x0) {
    pFVar4 = (FMetadataAnalysis *)FMemoryAnalyzer::FMemoryAnalyzer(this_00,param_1,pFVar9);
  }
  (*pcVar1)(param_1,pFVar4);
  pcVar1 = *(code **)((longlong)*param_1 + 0xe8);
  this_01 = ::operator_new(0x20);
  pFVar4 = pFVar6;
  if (this_01 != (FModuleAnalyzer *)0x0) {
    pFVar4 = (FMetadataAnalysis *)FModuleAnalyzer::FModuleAnalyzer(this_01,param_1);
  }
  (*pcVar1)(param_1,pFVar4);
  local_res20 = ::operator_new(0xf0);
  if (local_res20 == (TReferenceControllerBase<1> *)0x0) {
    local_res20 = (TReferenceControllerBase<1> *)0x0;
    pFVar10 = (FCallstacksProvider *)&DAT_00000010;
    paVar11 = (atomic<int> *)&DAT_00000008;
  }
  else {
    local_res20->SharedReferenceCount = (atomic<int>)0x1;
    local_res20->WeakReferenceCount = (atomic<int>)0x1;
    local_res20->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCallstacksProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FCallstacksProvider::FCallstacksProvider((FCallstacksProvider *)(local_res20 + 1),param_1);
    pFVar10 = (FCallstacksProvider *)(local_res20 + 1);
    if ((pFVar10 == (FCallstacksProvider *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    paVar11 = &local_res20->SharedReferenceCount;
    LOCK();
    *paVar11 = (atomic<int>)((int)*paVar11 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res20);
  local_48 = 0;
  uStack_40 = 0;
  pcVar1 = *(code **)((longlong)*param_1 + 0xf0);
  if (local_res20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar11 = (atomic<int>)((int)*paVar11 + 1);
    UNLOCK();
  }
  local_a8 = pFVar10;
  local_a0 = local_res20;
  FVar3 = GetCallstacksProviderName();
  (*pcVar1)(param_1,FVar3,&local_a8,&local_48);
  pcVar1 = *(code **)((longlong)*param_1 + 0xe8);
  this_02 = ::operator_new(0x18);
  pFVar4 = pFVar6;
  if (this_02 != (FCallstacksAnalyzer *)0x0) {
    pFVar4 = (FMetadataAnalysis *)FCallstacksAnalyzer::FCallstacksAnalyzer(this_02,param_1,pFVar10);
  }
  (*pcVar1)(param_1,pFVar4);
  local_res10 = ::operator_new(0x1c0);
  if (local_res10 == (TReferenceControllerBase<1> *)0x0) {
    local_e0 = (FMetadataProvider *)&DAT_00000010;
    local_res10 = (TReferenceControllerBase<1> *)0x0;
    paVar11 = (atomic<int> *)&DAT_00000008;
  }
  else {
    local_res10->SharedReferenceCount = (atomic<int>)0x1;
    local_res10->WeakReferenceCount = (atomic<int>)0x1;
    local_res10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMetadataProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FMetadataProvider::FMetadataProvider((FMetadataProvider *)(local_res10 + 1),param_1);
    local_e0 = (FMetadataProvider *)(local_res10 + 1);
    if ((local_e0 == (FMetadataProvider *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    paVar11 = &local_res10->SharedReferenceCount;
    LOCK();
    *paVar11 = (atomic<int>)((int)*paVar11 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res10);
  pcVar1 = *(code **)((longlong)*param_1 + 0xf0);
  local_98 = (FMetadataAnalysis *)&local_e0->_padding_;
  if (local_e0 == (FMetadataProvider *)0x0) {
    local_98 = pFVar6;
  }
  local_90 = local_res10;
  if (local_res10 == (TReferenceControllerBase<1> *)0x0) {
    local_d0 = local_res10;
    local_d8 = local_e0;
  }
  else {
    LOCK();
    *paVar11 = (atomic<int>)((int)*paVar11 + 1);
    UNLOCK();
    local_d8 = local_e0;
    LOCK();
    *paVar11 = (atomic<int>)((int)*paVar11 + 1);
    UNLOCK();
    local_d0 = local_res10;
  }
  FVar3 = GetMetadataProviderName();
  (*pcVar1)(param_1,FVar3,&local_d8,&local_98);
  pcVar1 = *(code **)((longlong)*param_1 + 0xe8);
  pFVar5 = ::operator_new(0x68);
  pFVar4 = pFVar6;
  if (pFVar5 != (FMetadataAnalysis *)0x0) {
    pFVar4 = FMetadataAnalysis::FMetadataAnalysis(pFVar5,param_1,local_e0);
  }
  (*pcVar1)(param_1,pFVar4);
  if ((local_e0 == (FMetadataProvider *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar5 = ::operator_new(0x350);
  pFVar4 = pFVar6;
  if (pFVar5 != (FMetadataAnalysis *)0x0) {
    *(undefined4 *)&pFVar5->Session = 1;
    *(undefined4 *)((longlong)&pFVar5->Session + 4) = 1;
    pFVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAllocationsProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FAllocationsProvider::FAllocationsProvider
              ((FAllocationsProvider *)&pFVar5->MetadataProvider,param_1,local_e0);
    pFVar8 = (FAllocationsProvider *)&pFVar5->MetadataProvider;
    if ((pFVar8 == (FAllocationsProvider *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    ppIVar7 = &pFVar5->Session;
    LOCK();
    *(int *)ppIVar7 = *(int *)ppIVar7 + 1;
    UNLOCK();
    pFVar4 = pFVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  pcVar1 = *(code **)((longlong)*param_1 + 0xf0);
  local_88 = (FMetadataAnalysis *)&pFVar8->_padding_;
  if (pFVar8 == (FAllocationsProvider *)0x0) {
    local_88 = pFVar6;
  }
  if (pFVar4 != (FMetadataAnalysis *)0x0) {
    LOCK();
    *(int *)ppIVar7 = *(int *)ppIVar7 + 1;
    UNLOCK();
    LOCK();
    *(int *)ppIVar7 = *(int *)ppIVar7 + 1;
    UNLOCK();
  }
  local_c8 = pFVar8;
  local_c0 = pFVar4;
  local_80 = pFVar4;
  FVar3 = GetAllocationsProviderName();
  (*pcVar1)(param_1,FVar3,&local_c8,&local_88);
  pcVar1 = *(code **)((longlong)*param_1 + 0xe8);
  this_03 = ::operator_new(0x40);
  if (this_03 != (FAllocationsAnalyzer *)0x0) {
    if ((local_e0 == (FMetadataProvider *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((pFVar8 == (FAllocationsProvider *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar6 = (FMetadataAnalysis *)
             FAllocationsAnalyzer::FAllocationsAnalyzer(this_03,param_1,pFVar8,local_e0);
  }
  (*pcVar1)(param_1,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res18);
  return;
}

