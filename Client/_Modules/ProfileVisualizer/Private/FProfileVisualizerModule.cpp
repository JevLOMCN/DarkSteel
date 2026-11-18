// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 3

// StartupModule @ 148d4bea0

void __thiscall FProfileVisualizerModule::StartupModule(FProfileVisualizerModule *this)

{
  code *pcVar1;
  bool bVar2;
  FName local_res10;
  TRawPtrProxy<FProfileVisualizerStyle::FStyle> local_res18;
  TRawPtrProxy<FDelayedVisualizerSpawner> local_res20;
  
  local_res18.Object = ::operator_new(0x400);
  if ((FSlateStyleSet *)local_res18.Object == (FSlateStyleSet *)0x0) {
    local_res18.Object = (FStyle *)0x0;
  }
  else {
    ::FName::FName(&local_res10,"ProfileVisualizerStyle");
    FSlateStyleSet::FSlateStyleSet((FSlateStyleSet *)local_res18.Object,&local_res10);
    ((FSlateStyleSet *)local_res18.Object)->_padding_ =
         (longlong)&___7FStyle_FProfileVisualizerStyle__6B_;
  }
  TSharedPtr<FProfileVisualizerStyle::FStyle,1>::operator=<FProfileVisualizerStyle::FStyle>
            (&FProfileVisualizerStyle::StyleInstance,&local_res18);
  if (FProfileVisualizerStyle::StyleInstance.Object == (FStyle *)0x0) {
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
  if (GDelayedVisualizerSpawner.Object == (FDelayedVisualizerSpawner *)0x0) {
    local_res20.Object = ::operator_new(0x40);
    if (local_res20.Object == (FDelayedVisualizerSpawner *)0x0) {
      local_res20.Object = (FDelayedVisualizerSpawner *)0x0;
    }
    else {
      FTickableGameObject::FTickableGameObject((FTickableGameObject *)local_res20.Object,NewObject);
      (local_res20.Object)->_padding_ = (longlong)&___7FDelayedVisualizerSpawner__6B_;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&(local_res20.Object)->DataLock,4000);
      ((local_res20.Object)->VisualizerDataToSpawn).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      ((local_res20.Object)->VisualizerDataToSpawn).ArrayNum = 0;
      ((local_res20.Object)->VisualizerDataToSpawn).ArrayMax = 0;
    }
    TSharedPtr<FDelayedVisualizerSpawner,1>::operator=<FDelayedVisualizerSpawner>
              (&GDelayedVisualizerSpawner,&local_res20);
  }
  return;
}

// ShutdownModule @ 148d4bfa0

void __thiscall FProfileVisualizerModule::ShutdownModule(FProfileVisualizerModule *this)

{
  code *pcVar1;
  bool bVar2;
  FSharedReferencer<1> local_20;
  undefined8 local_18;
  FSharedReferencer<1> local_10;
  
  if (FProfileVisualizerStyle::StyleInstance.Object != (FStyle *)0x0) {
    FSlateStyleRegistry::UnRegisterSlateStyle
              ((ISlateStyle *)FProfileVisualizerStyle::StyleInstance.Object);
    if ((FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController ==
         (TReferenceControllerBase<1> *)0x0) ||
       ((FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount != (atomic<int>)0x1)) {
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
    local_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FProfileVisualizerStyle::StyleInstance.Object = (FStyle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&FProfileVisualizerStyle::StyleInstance.SharedReferenceCount,&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
  }
  local_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  GDelayedVisualizerSpawner.Object = (FDelayedVisualizerSpawner *)0x0;
  local_18 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&GDelayedVisualizerSpawner.SharedReferenceCount,&local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  return;
}

// DisplayProfileVisualizer @ 148d4c060

void __thiscall
FProfileVisualizerModule::DisplayProfileVisualizer
          (FProfileVisualizerModule *this,TSharedPtr<FVisualizerEvent,1> *param_1,wchar_t *param_2,
          FText *param_3,FLinearColor *param_4)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

