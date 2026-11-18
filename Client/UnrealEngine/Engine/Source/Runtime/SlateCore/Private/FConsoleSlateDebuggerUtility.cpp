// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// FindWindowId @ 14243e1a0

ulong64 __cdecl FConsoleSlateDebuggerUtility::FindWindowId(SWidget *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  SWidget *pSVar5;
  bool bVar6;
  
  if (param_1 == (SWidget *)0x0) {
    return 0;
  }
  do {
    cVar3 = (**(code **)(param_1->_padding_ + 0x208))();
    if (cVar3 != '\0') {
      return param_1->UniqueIdentifier;
    }
    pSVar5 = (SWidget *)0x0;
    pTVar1 = (param_1->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar1->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          return 0;
        }
        LOCK();
        aVar4 = pTVar1->SharedReferenceCount;
        bVar6 = aVar2 == aVar4;
        if (bVar6) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar4;
      } while (!bVar6);
      pSVar5 = (param_1->ParentWidgetPtr).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    param_1 = pSVar5;
  } while (pSVar5 != (SWidget *)0x0);
  return 0;
}

// FindWindowId @ 14243e230

ulong64 __cdecl FConsoleSlateDebuggerUtility::FindWindowId(SWidget *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  SWidget *pSVar5;
  bool bVar6;
  
  if (param_1 == (SWidget *)0x0) {
    return 0;
  }
  do {
    cVar3 = (**(code **)(param_1->_padding_ + 0x208))();
    if (cVar3 != '\0') {
      return param_1->UniqueIdentifier;
    }
    pSVar5 = (SWidget *)0x0;
    pTVar1 = (param_1->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar1->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          return 0;
        }
        LOCK();
        aVar4 = pTVar1->SharedReferenceCount;
        bVar6 = aVar2 == aVar4;
        if (bVar6) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar4;
      } while (!bVar6);
      pSVar5 = (param_1->ParentWidgetPtr).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    param_1 = pSVar5;
  } while (pSVar5 != (SWidget *)0x0);
  return 0;
}

// GetId @ 14243ee30

ulong64 __cdecl FConsoleSlateDebuggerUtility::GetId(SWidget *param_1)

{
  return param_1->UniqueIdentifier;
}

// GetId @ 14243ee40

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __cdecl FConsoleSlateDebuggerUtility::GetId(SWindow *param_1)

{
  return param_1->_padding_;
}

// GetId @ 14243ee50

ulong64 __cdecl FConsoleSlateDebuggerUtility::GetId(SWidget *param_1)

{
  if (param_1 != (SWidget *)0x0) {
    return param_1->UniqueIdentifier;
  }
  return 0;
}

// GetId @ 14243ee70

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __cdecl FConsoleSlateDebuggerUtility::GetId(SWindow *param_1)

{
  if (param_1 != (SWindow *)0x0) {
    return param_1->_padding_;
  }
  return 0;
}

