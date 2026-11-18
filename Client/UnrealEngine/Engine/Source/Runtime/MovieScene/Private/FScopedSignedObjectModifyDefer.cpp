// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// FScopedSignedObjectModifyDefer @ 1461fd140

FScopedSignedObjectModifyDefer * __thiscall
UE::MovieScene::FScopedSignedObjectModifyDefer::FScopedSignedObjectModifyDefer
          (FScopedSignedObjectModifyDefer *this,bool param_1)

{
  GScopedSignedObjectDeferCount = GScopedSignedObjectDeferCount + 1;
  this->bForceFlush = param_1;
  return this;
}

// ~FScopedSignedObjectModifyDefer @ 1461ff730

void __thiscall
UE::MovieScene::FScopedSignedObjectModifyDefer::~FScopedSignedObjectModifyDefer
          (FScopedSignedObjectModifyDefer *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FWeakReferencer<1> FVar4;
  FWeakReferencer<1> FVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  FVar5.ReferenceController =
       GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController;
  GScopedSignedObjectDeferCount = GScopedSignedObjectDeferCount - 1;
  if ((GScopedSignedObjectDeferCount != 0) && (this->bForceFlush == false)) {
    return;
  }
  if (((GDeferredSignedObjectChangeHandler.Object == (IDeferredSignedObjectChangeHandler *)0x0) ||
      (GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController ==
       (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController)->
           SharedReferenceCount < 1)) goto LAB_1461ff7d8;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  FVar4.ReferenceController = FVar5.ReferenceController;
  if (GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
LAB_1461ff797:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    FVar5.ReferenceController = FVar4.ReferenceController;
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    aVar2 = (GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController)->
            SharedReferenceCount;
    do {
      FVar4.ReferenceController = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1461ff797;
      LOCK();
      aVar3 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    FVar4.ReferenceController = FVar5.ReferenceController;
    pTVar6 = (TReferenceControllerBase<1> *)GDeferredSignedObjectChangeHandler.Object;
    if (GDeferredSignedObjectChangeHandler.Object == (IDeferredSignedObjectChangeHandler *)0x0)
    goto LAB_1461ff797;
  }
  (**(code **)(pTVar6->_padding_ + 8))(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
LAB_1461ff7d8:
  SignalScopedSignedObjectModifyFlush();
  return;
}

