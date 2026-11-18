// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 1

// operator=<FTemplateSequenceSpawnRegister> @ 14ac65240

TSharedPtr<FMovieSceneSpawnRegister,1> * __thiscall
TSharedPtr<FMovieSceneSpawnRegister,1>::operator=<FTemplateSequenceSpawnRegister>
          (TSharedPtr<FMovieSceneSpawnRegister,1> *this,
          TRawPtrProxy<FTemplateSequenceSpawnRegister> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FTemplateSequenceSpawnRegister *pFVar4;
  FTemplateSequenceSpawnRegister *pFVar5;
  longlong *plVar6;
  FSharedReferencer<1> FVar7;
  TSharedPtr<FMovieSceneSpawnRegister,1> local_18;
  
  pFVar4 = param_1->Object;
  local_18.Object = (FMovieSceneSpawnRegister *)pFVar4;
  FVar7.ReferenceController = ::operator_new(0x18);
  if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFTemplateSequenceSpawnRegister__U__DefaultDeleter_VFTemplateSequenceSpawnRegister___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    FVar7.ReferenceController[1]._padding_ = (longlong)pFVar4;
  }
  pFVar5 = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
  if ((pFVar5 != (FTemplateSequenceSpawnRegister *)0x0) &&
     (((puVar1 = &pFVar5->field_0x10, *(longlong *)&pFVar5->field_0x8 == 0 ||
       (*(longlong *)puVar1 == 0)) || (*(int *)(*(longlong *)puVar1 + 8) < 1)))) {
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FTemplateSequenceSpawnRegister **)&pFVar5->field_0x8 = pFVar5;
    if (FVar7.ReferenceController != *(TReferenceControllerBase<1> **)puVar1) {
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar6 = *(longlong **)puVar1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *(TReferenceControllerBase<1> **)puVar1 = FVar7.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  if (this != &local_18) {
    this->Object = (FMovieSceneSpawnRegister *)pFVar4;
    local_18.Object = (FMovieSceneSpawnRegister *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
    FVar7.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return this;
}

