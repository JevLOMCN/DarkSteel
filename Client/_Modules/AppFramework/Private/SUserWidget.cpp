// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 3

// operator_new @ 143062470

void * __cdecl SUserWidget::operator_new(ulong64 param_1)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Malloc(param_1,0);
  return pvVar1;
}

// operator_delete @ 143062480

void __cdecl SUserWidget::operator_delete(void *param_1)

{
  FLowLevelMemTracker *this;
  
  if (param_1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,param_1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,param_1);
  }
  return;
}

// Construct @ 1430a4c00

void __thiscall SUserWidget::Construct(SUserWidget *this,FArguments *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  EVerticalAlignment *pEVar5;
  FSlotBase *this_00;
  
  puVar1 = &this->field_0x268;
  *(EHorizontalAlignment *)puVar1 = param_1->_HAlign;
  pEVar5 = (EVerticalAlignment *)&this->field_0x26c;
  this_00 = (FSlotBase *)&this->field_0x238;
  if (puVar1 == (undefined1 *)0x0) {
    pEVar5 = (EVerticalAlignment *)&DAT_00000054;
  }
  *pEVar5 = param_1->_VAlign;
  if (puVar1 == (undefined1 *)0x0) {
    this_00 = (FSlotBase *)&DAT_00000020;
  }
  FSlotBase::DetatchParentFromContent(this_00);
  pTVar2 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar3 = (param_1->_Content).Widget.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this_00->Widget).SharedReferenceCount.ReferenceController;
  (this_00->Widget).Object = pSVar3;
  (this_00->Widget).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FSlotBase::AfterContentOrOwnerAssigned(this_00);
  return;
}

