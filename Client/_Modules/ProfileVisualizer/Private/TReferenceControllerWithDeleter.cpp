// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 3

// DestroyObject @ 148d72d20

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FVisualizerEvent,SharedPointerInternals::DefaultDeleter<FVisualizerEvent>,1>
::DestroyObject(TReferenceControllerWithDeleter<FVisualizerEvent,SharedPointerInternals::DefaultDeleter<FVisualizerEvent>,1>
                *this)

{
  FVisualizerEvent *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FVisualizerEvent *)0x0) {
    DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
              ((TSharedPtr<FVisualizerEvent,1> *)(pFVar1->Children).AllocatorInstance.Data,
               (pFVar1->Children).ArrayNum);
    pFVar2 = (pFVar1->Children).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->ParentEvent).SharedReferenceCount.ReferenceController);
    pFVar2 = (pFVar1->EventName).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x58);
    return;
  }
  return;
}

// DestroyObject @ 148d72d80

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDelayedVisualizerSpawner,SharedPointerInternals::DefaultDeleter<FDelayedVisualizerSpawner>,1>
::DestroyObject(TReferenceControllerWithDeleter<FDelayedVisualizerSpawner,SharedPointerInternals::DefaultDeleter<FDelayedVisualizerSpawner>,1>
                *this)

{
  FDelayedVisualizerSpawner *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FDelayedVisualizerSpawner *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d72d91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148d72da0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FProfileVisualizerStyle::FStyle,SharedPointerInternals::DefaultDeleter<FProfileVisualizerStyle::FStyle>,1>
::DestroyObject(TReferenceControllerWithDeleter<FProfileVisualizerStyle::FStyle,SharedPointerInternals::DefaultDeleter<FProfileVisualizerStyle::FStyle>,1>
                *this)

{
  FStyle *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FStyle *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d72db1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

