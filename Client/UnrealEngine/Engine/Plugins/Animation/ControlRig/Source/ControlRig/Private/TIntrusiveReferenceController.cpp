// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 20

// DestroyObject @ 14a24faa0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FControlRigObjectBinding,1>::DestroyObject
          (TIntrusiveReferenceController<FControlRigObjectBinding,1> *this)

{
  FControlRigObjectBinding::~FControlRigObjectBinding
            ((FControlRigObjectBinding *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a3008e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRigBone,1>::DestroyObject
          (TIntrusiveReferenceController<FRigBone,1> *this)

{
  void *pvVar1;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FRigBone__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x150);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FRigElement__6B_;
  return;
}

// DestroyObject @ 14a300920

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRigControl,1>::DestroyObject
          (TIntrusiveReferenceController<FRigControl,1> *this)

{
  void *pvVar1;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FRigControl__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x340);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FRigElement__6B_;
  return;
}

// DestroyObject @ 14a300960

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRigCurve,1>::DestroyObject
          (TIntrusiveReferenceController<FRigCurve,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FRigElement__6B_;
  return;
}

// DestroyObject @ 14a300980

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRigSpace,1>::DestroyObject
          (TIntrusiveReferenceController<FRigSpace,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FRigElement__6B_;
  return;
}

// DestroyObject @ 14a402e40

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TAnonTaskWrapper<UE::MovieScene::FApplyControlRigParameterValuesTask>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TAnonTaskWrapper<UE::MovieScene::FApplyControlRigParameterValuesTask>,1>
                *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 14a402e60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FEvaluateBaseControlRigs,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FEvaluateBaseControlRigs,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>,1>
                *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 14a402e80

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FEvaluateControlRigSpaceChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FEvaluateControlRigSpaceChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>,1>
                *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 14a402ea0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FGatherControlRigParameterValues,UE::MovieScene::TReadAccess<UE::MovieScene::FAccumulatedControlEntryIndex>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TOptionalReadAccess<FMovieSceneControlRigSpaceBaseKey>,UE::MovieScene::TOptionalReadAccess<bool>,UE::MovieScene::TOptionalReadAccess<unsigned_char>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FGatherControlRigParameterValues,UE::MovieScene::TReadAccess<UE::MovieScene::FAccumulatedControlEntryIndex>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TOptionalReadAccess<FMovieSceneControlRigSpaceBaseKey>,UE::MovieScene::TOptionalReadAccess<bool>,UE::MovieScene::TOptionalReadAccess<unsigned_char>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>,1>
                *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 14a402ec0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FResetDoNotKey,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TReadAccess<UE::MovieScene::FBaseControlRigEvalData>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FResetDoNotKey,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TReadAccess<UE::MovieScene::FBaseControlRigEvalData>_>,1>
                *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 14a402ee0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAnimNode_ControlRig_ExternalSource,1>::
DestroyObject(TIntrusiveReferenceController<FAnimNode_ControlRig_ExternalSource,1> *this)

{
  FAnimNode_ControlRig_ExternalSource::~FAnimNode_ControlRig_ExternalSource
            ((FAnimNode_ControlRig_ExternalSource *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a402ef0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FControlRigAnimTypeIDs,1>::DestroyObject
          (TIntrusiveReferenceController<FControlRigAnimTypeIDs,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14a402f50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::FControlRigInitialValueProcessor,1>::DestroyObject
          (TIntrusiveReferenceController<UE::MovieScene::FControlRigInitialValueProcessor,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7IInitialValueProcessor_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 14a402f70

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>
                *this)

{
  UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs::
  ~FPreAnimatedBufferPairs((FPreAnimatedBufferPairs *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a402f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedControlRigParameterStorage,1>::
DestroyObject(TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedControlRigParameterStorage,1>
              *this)

{
  UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>::
  ~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14a402f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedControlRigStorage,1>::DestroyObject
          (TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedControlRigStorage,1> *this)

{
  UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::
  ~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14a402fa0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TControlRigParameterActuatorFloat,1>::
DestroyObject(TIntrusiveReferenceController<TControlRigParameterActuatorFloat,1> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IMovieSceneBlendingActuator__6B_;
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014a402fe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14a403000

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TControlRigParameterActuatorTransform,1>::
DestroyObject(TIntrusiveReferenceController<TControlRigParameterActuatorTransform,1> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IMovieSceneBlendingActuator__6B_;
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014a403047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14a403060

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TControlRigParameterActuatorVector2D,1>::
DestroyObject(TIntrusiveReferenceController<TControlRigParameterActuatorVector2D,1> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IMovieSceneBlendingActuator__6B_;
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014a4030a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14a4030c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TControlRigParameterActuatorVector,1>::
DestroyObject(TIntrusiveReferenceController<TControlRigParameterActuatorVector,1> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IMovieSceneBlendingActuator__6B_;
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014a403107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

