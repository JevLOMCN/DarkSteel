// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 3

// Get @ 14f0d79e0

TSharedPtr<FSlateStyleSet,1> * __cdecl
FSynthSlateStyleSet::Get(TSharedPtr<FSlateStyleSet,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  __return_storage_ptr__->Object = StyleInstance.Object;
  FVar2 = StyleInstance.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       StyleInstance.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// Initialize @ 14f0e72c0

void __cdecl FSynthSlateStyleSet::Initialize(void)

{
  code *pcVar1;
  bool bVar2;
  FSlateStyleSet *pFVar3;
  IPluginManager *pIVar4;
  longlong *plVar5;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar6;
  FName local_res8;
  TRawPtrProxy<FSlateStyleSet> local_res10;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_58;
  wchar_t *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  void *local_28 [2];
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (StyleInstance.Object != (FSlateStyleSet *)0x0) {
    return;
  }
  pFVar3 = ::operator_new(0x400);
  local_res10.Object = (FSlateStyleSet *)0x0;
  if (pFVar3 != (FSlateStyleSet *)0x0) {
    ::FName::FName(&local_res8,"SynthesisStyle");
    local_res10.Object = FSlateStyleSet::FSlateStyleSet(pFVar3,&local_res8);
  }
  TSharedPtr<FSlateStyleSet,1>::operator=<FSlateStyleSet>(&StyleInstance,&local_res10);
  if (StyleInstance.Object == (FSlateStyleSet *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = StyleInstance.Object;
  pcVar1 = *(code **)((StyleInstance.Object)->_padding_ + 0xc0);
  pIVar4 = IPluginManager::Get();
  uStack_40 = 9;
  local_48 = L"Synthesis";
  local_38 = 0x507b8300;
  uStack_34 = 1;
  uStack_30 = 9;
  uStack_2c = uStack_3c;
  plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x70))(pIVar4,local_18);
  if (*plVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar6 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
           (**(code **)(*(longlong *)*plVar5 + 0x20))((longlong *)*plVar5,local_28);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_58,pTVar6,0xb - (uint)(pTVar6->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_58,L"Resources",9);
  (*pcVar1)(pFVar3,&local_58);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if (StyleInstance.Object == (FSlateStyleSet *)0x0) {
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
  FSlateStyleRegistry::RegisterSlateStyle((ISlateStyle *)StyleInstance.Object);
  return;
}

// Shutdown @ 14f103310

void __cdecl FSynthSlateStyleSet::Shutdown(void)

{
  code *pcVar1;
  bool bVar2;
  FSharedReferencer<1> local_10 [2];
  
  if (StyleInstance.Object == (FSlateStyleSet *)0x0) {
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
  FSlateStyleRegistry::UnRegisterSlateStyle((ISlateStyle *)StyleInstance.Object);
  if ((StyleInstance.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
     || ((StyleInstance.SharedReferenceCount.ReferenceController)->SharedReferenceCount !=
         (atomic<int>)0x1)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5506168358602538976>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\UI\\SynthSlateStyle.cpp"
                       ,0x20,"StyleInstance.IsUnique()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  StyleInstance.Object = (FSlateStyleSet *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&StyleInstance.SharedReferenceCount,local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10[0].ReferenceController);
  return;
}

