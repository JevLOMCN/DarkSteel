// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 3

// Get @ 148d7a610

TSharedPtr<ISlateStyle,1> * __cdecl
FProfileVisualizerStyle::Get(TSharedPtr<ISlateStyle,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  __return_storage_ptr__->Object = (ISlateStyle *)StyleInstance.Object;
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

// Initialize @ 148d7f330

void __cdecl FProfileVisualizerStyle::Initialize(void)

{
  code *pcVar1;
  bool bVar2;
  FName local_res8;
  TRawPtrProxy<FProfileVisualizerStyle::FStyle> local_res10 [3];
  
  local_res10[0].Object = ::operator_new(0x400);
  if ((FSlateStyleSet *)local_res10[0].Object == (FSlateStyleSet *)0x0) {
    local_res10[0].Object = (FStyle *)0x0;
  }
  else {
    ::FName::FName(&local_res8,"ProfileVisualizerStyle");
    FSlateStyleSet::FSlateStyleSet((FSlateStyleSet *)local_res10[0].Object,&local_res8);
    ((FSlateStyleSet *)local_res10[0].Object)->_padding_ =
         (longlong)&___7FStyle_FProfileVisualizerStyle__6B_;
  }
  TSharedPtr<FProfileVisualizerStyle::FStyle,1>::operator=<FProfileVisualizerStyle::FStyle>
            (&StyleInstance,local_res10);
  if (StyleInstance.Object == (FStyle *)0x0) {
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
  return;
}

// Shutdown @ 148d91930

void __cdecl FProfileVisualizerStyle::Shutdown(void)

{
  code *pcVar1;
  bool bVar2;
  FSharedReferencer<1> local_10 [2];
  
  if (StyleInstance.Object == (FStyle *)0x0) {
    return;
  }
  FSlateStyleRegistry::UnRegisterSlateStyle((ISlateStyle *)StyleInstance.Object);
  if ((StyleInstance.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
     || ((StyleInstance.SharedReferenceCount.ReferenceController)->SharedReferenceCount !=
         (atomic<int>)0x1)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2713369477856100301>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\ProfileVisualizerStyle.cpp"
                       ,0x33,"StyleInstance.IsUnique()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  StyleInstance.Object = (FStyle *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&StyleInstance.SharedReferenceCount,local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10[0].ReferenceController);
  return;
}

