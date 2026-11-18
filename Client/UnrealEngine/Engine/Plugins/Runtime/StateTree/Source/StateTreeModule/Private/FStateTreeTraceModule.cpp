// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// GetLoggers @ 14d4be430

void __thiscall
FStateTreeTraceModule::GetLoggers
          (FStateTreeTraceModule *this,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *local_18 [2];
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_18[0] = L"StateTree";
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

// GetModuleInfo @ 14d4be530

void __thiscall
FStateTreeTraceModule::GetModuleInfo(FStateTreeTraceModule *this,FModuleInfo *param_1)

{
  param_1->Name = ModuleName;
  param_1->DisplayName = L"StateTree";
  return;
}

// OnAnalysisBegin @ 14d4c56e0

void __thiscall
FStateTreeTraceModule::OnAnalysisBegin(FStateTreeTraceModule *this,IAnalysisSession *param_1)

{
  IAnalysisSession IVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  atomic<int> *paVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  pTVar4 = ::operator_new(0xa0);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    paVar6 = (atomic<int> *)&DAT_00000008;
    pTVar4 = pTVar7;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFStateTreeTraceProvider___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = (longlong)&___7FStateTreeTraceProvider__6B_;
    *(IAnalysisSession **)&pTVar4[1].SharedReferenceCount = param_1;
    pTVar4[2]._padding_ = 0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[4]._padding_ = 0;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[4].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar4[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar4[5]._padding_ + 4) = 0;
    pTVar4[6]._padding_ = 0;
    pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[7]._padding_ = 0;
    pTVar4[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[8]._padding_ = 0;
    pTVar4[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[9]._padding_ = 0;
    pTVar4[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[9].WeakReferenceCount = (atomic<int>)0x0;
    if ((pTVar8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    paVar6 = &pTVar4->SharedReferenceCount;
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  IVar1 = *param_1;
  local_28 = 0;
  uStack_20 = 0;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  local_38 = pTVar8;
  local_30 = pTVar4;
  (**(code **)((longlong)IVar1 + 0xf0))
            (param_1,&FStateTreeTraceProvider::ProviderName,&local_38,&local_28);
  pcVar2 = *(code **)((longlong)*param_1 + 0xe8);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    if ((pTVar8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(IAnalysisSession **)&pTVar5->SharedReferenceCount = param_1;
    pTVar5->_padding_ = (longlong)&___7FStateTreeTraceAnalyzer__6B_;
    pTVar5[1]._padding_ = (longlong)pTVar8;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7 = pTVar5;
  }
  (*pcVar2)(param_1,pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

