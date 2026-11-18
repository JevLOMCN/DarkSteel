// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 6

// TVisitWithLambda<Audio::Quartz::IMetronomeEventListener> @ 14653c510

TVisitWithLambda<Audio::Quartz::IMetronomeEventListener> * __thiscall
Audio::Quartz::PrivateDefs::
TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::TVisitWithLambda<Audio::Quartz::IMetronomeEventListener>::
TVisitWithLambda<Audio::Quartz::IMetronomeEventListener>
          (TVisitWithLambda<Audio::Quartz::IMetronomeEventListener> *this,
          TFunction<void___cdecl(Audio::Quartz::IMetronomeEventListener_&)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVisitWithLambda_VIMetronomeEventListener_Quartz_Audio_____TVisitorPatternBase_VIMetronomeEventListener_Quartz_Audio__VICommandListener_23_VIQueueCommandListener_23__PrivateDefs_Quartz_Audio__6B_
  ;
  *(undefined8 *)&this->Lambda = *(undefined8 *)param_1;
  *(undefined8 *)&(this->Lambda).field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_1->field_0x14;
  uVar2 = *(undefined4 *)&param_1->field_0x18;
  uVar3 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->Lambda).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->Lambda).field_0x14 = uVar1;
  *(undefined4 *)&(this->Lambda).field_0x18 = uVar2;
  *(undefined4 *)&(this->Lambda).field_0x1c = uVar3;
  *(undefined8 *)&(this->Lambda).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)&this->Lambda != 0) {
    *(undefined8 *)param_1 = 0;
    return this;
  }
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return this;
}

// TVisitWithLambda<Audio::Quartz::IQuartzClock> @ 14653c590

TVisitWithLambda<Audio::Quartz::IQuartzClock> * __thiscall
Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::
TVisitWithLambda<Audio::Quartz::IQuartzClock>::TVisitWithLambda<Audio::Quartz::IQuartzClock>
          (TVisitWithLambda<Audio::Quartz::IQuartzClock> *this,
          TFunction<void___cdecl(Audio::Quartz::IQuartzClock_&)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVisitWithLambda_VIQuartzClock_Quartz_Audio_____TVisitorPatternBase_VIQuartzClock_Quartz_Audio___PrivateDefs_Quartz_Audio__6B_
  ;
  *(undefined8 *)&this->Lambda = *(undefined8 *)param_1;
  *(undefined8 *)&(this->Lambda).field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_1->field_0x14;
  uVar2 = *(undefined4 *)&param_1->field_0x18;
  uVar3 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->Lambda).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->Lambda).field_0x14 = uVar1;
  *(undefined4 *)&(this->Lambda).field_0x18 = uVar2;
  *(undefined4 *)&(this->Lambda).field_0x1c = uVar3;
  *(undefined8 *)&(this->Lambda).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)&this->Lambda != 0) {
    *(undefined8 *)param_1 = 0;
    return this;
  }
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return this;
}

// ~TVisitWithLambda<Audio::Quartz::IMetronomeEventListener> @ 1465403a0

void __thiscall
Audio::Quartz::PrivateDefs::
TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::TVisitWithLambda<Audio::Quartz::IMetronomeEventListener>::
~TVisitWithLambda<Audio::Quartz::IMetronomeEventListener>
          (TVisitWithLambda<Audio::Quartz::IMetronomeEventListener> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Lambda != 0) {
    plVar1 = *(longlong **)&(this->Lambda).field_0x28;
    plVar2 = (longlong *)&(this->Lambda).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001465403b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// ~TVisitWithLambda<Audio::Quartz::IQuartzClock> @ 1465403d0

void __thiscall
Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::
TVisitWithLambda<Audio::Quartz::IQuartzClock>::~TVisitWithLambda<Audio::Quartz::IQuartzClock>
          (TVisitWithLambda<Audio::Quartz::IQuartzClock> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Lambda != 0) {
    plVar1 = *(longlong **)&(this->Lambda).field_0x28;
    plVar2 = (longlong *)&(this->Lambda).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001465403e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// Visit @ 14657cff0

void __thiscall
Audio::Quartz::PrivateDefs::
TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::TVisitWithLambda<Audio::Quartz::IMetronomeEventListener>::Visit
          (TVisitWithLambda<Audio::Quartz::IMetronomeEventListener> *this,
          IMetronomeEventListener *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(void **)&this->Lambda != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->Lambda);
    plVar1 = *(longlong **)&(this->Lambda).field_0x28;
    pcVar2 = *(code **)&this->Lambda;
    plVar4 = (longlong *)&(this->Lambda).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,param_1);
  }
  return;
}

// Visit @ 14657d050

void __thiscall
Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::
TVisitWithLambda<Audio::Quartz::IQuartzClock>::Visit
          (TVisitWithLambda<Audio::Quartz::IQuartzClock> *this,IQuartzClock *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(void **)&this->Lambda != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->Lambda);
    plVar1 = *(longlong **)&(this->Lambda).field_0x28;
    pcVar2 = *(code **)&this->Lambda;
    plVar4 = (longlong *)&(this->Lambda).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,param_1);
  }
  return;
}

