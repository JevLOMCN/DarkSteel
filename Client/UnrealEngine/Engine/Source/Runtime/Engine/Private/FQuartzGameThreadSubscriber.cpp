// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// operator== @ 147342a20

bool __thiscall
Audio::FQuartzGameThreadSubscriber::operator==
          (FQuartzGameThreadSubscriber *this,FQuartzGameThreadSubscriber *param_1)

{
  bool bVar1;
  
  bVar1 = (this->Offset).OffsetInMilliseconds.bIsSet;
  if ((((bVar1 == (param_1->Offset).OffsetInMilliseconds.bIsSet) &&
       (((bVar1 == false ||
         ((param_1->Offset).OffsetInMilliseconds.TypedValue ==
          (this->Offset).OffsetInMilliseconds.TypedValue)) &&
        (bVar1 = (this->Offset).OffsetAsDuration.bIsSet,
        bVar1 == (param_1->Offset).OffsetAsDuration.bIsSet)))) &&
      ((bVar1 == false ||
       ((*(char *)&(this->Offset).OffsetAsDuration.TypedValue ==
         *(char *)&(param_1->Offset).OffsetAsDuration.TypedValue &&
        (*(double *)&(param_1->Offset).OffsetAsDuration.TypedValue.field_0x8 ==
         *(double *)&(this->Offset).OffsetAsDuration.TypedValue.field_0x8)))))) &&
     ((this->Queue).Object == (param_1->Queue).Object)) {
    return true;
  }
  return false;
}

// FinalizeOffset @ 14734d050

int __thiscall
Audio::FQuartzGameThreadSubscriber::FinalizeOffset
          (FQuartzGameThreadSubscriber *this,FQuartzClockTickRate *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  EQuartzCommandQuantization EVar5;
  double dVar6;
  
  this->bOffsetConvertedToFrames = true;
  if (((this->Offset).OffsetInMilliseconds.bIsSet != false) &&
     ((this->Offset).OffsetAsDuration.bIsSet != false)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(OffsetInMilliseconds.IsSet() && OffsetAsDuration.IsSet())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzSubscription.cpp"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  if ((this->Offset).OffsetInMilliseconds.bIsSet != false) {
    iVar4 = (int)((this->Offset).OffsetInMilliseconds.TypedValue * __real_408f400000000000 *
                 param_1->SampleRate);
    this->OffsetInAudioFrames = iVar4;
    return iVar4;
  }
  if ((this->Offset).OffsetAsDuration.bIsSet == false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2677017514612883689>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzSubscription.cpp"
                       ,0xe9,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    this->OffsetInAudioFrames = 0;
    return 0;
  }
  dVar2 = *(double *)&(this->Offset).OffsetAsDuration.TypedValue.field_0x8;
  EVar5 = (EQuartzCommandQuantization)*(undefined8 *)&(this->Offset).OffsetAsDuration.TypedValue;
  if (EVar5 == None) {
    this->OffsetInAudioFrames = 0;
    return 0;
  }
  dVar6 = FQuartzClockTickRate::GetFramesPerDuration(param_1,EVar5);
  iVar4 = (int)(dVar6 * dVar2);
  this->OffsetInAudioFrames = iVar4;
  return iVar4;
}

// GetOffsetAsAudioFrames @ 14734f950

int __thiscall
Audio::FQuartzGameThreadSubscriber::GetOffsetAsAudioFrames(FQuartzGameThreadSubscriber *this)

{
  undefined1 local_res8 [32];
  
  if (this->bOffsetConvertedToFrames == false) {
    `Audio::FQuartzGameThreadSubscriber::GetOffsetAsAudioFrames'::__l2::<lambda_1>::operator()
              (local_res8);
    return this->OffsetInAudioFrames;
  }
  return this->OffsetInAudioFrames;
}

// PushEvent @ 147353290

void __thiscall
Audio::FQuartzGameThreadSubscriber::PushEvent
          (FQuartzGameThreadSubscriber *this,FQuartzMetronomeDelegateData *param_1)

{
  atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
  *paVar1;
  code *pcVar2;
  bool bVar3;
  TVisitWithLambda<Audio::Quartz::IMetronomeEventListener> *this_00;
  atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
  aVar4;
  atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
  aVar5;
  TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>
  TVar6;
  TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>
  TVar7;
  longlong *plVar8;
  code *local_a8;
  longlong local_98 [3];
  longlong *local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  FName local_48;
  longlong lStack_40;
  code *local_38 [2];
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  longlong *local_10;
  
  paVar1 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
            *)(this->Queue).Object;
  if (paVar1 == (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
                 *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1281049780729938712>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.cpp"
                       ,0x318,"Queue.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    local_78 = param_1->_padding_;
    lStack_70 = param_1->_padding_;
    aVar4 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
             )0x0;
    local_a8 = (code *)0x0;
    local_68 = param_1->_padding_;
    lStack_60 = param_1->_padding_;
    local_58._0_4_ = param_1->Bar;
    local_58._4_4_ = param_1->Beat;
    lStack_50._0_4_ = param_1->BeatFraction;
    lStack_50._4_1_ = param_1->Quantization;
    lStack_50._5_1_ = param_1->field_0x2d;
    lStack_50._6_2_ = param_1->_padding_;
    local_48 = param_1->ClockName;
    lStack_40 = *(longlong *)&param_1->FrameOffset;
    local_80 = FMemory::Malloc(0x48,8);
    *local_80 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FQuartzGameThreadSubscriber::PushEvent'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_80[1] = local_78;
    local_80[2] = lStack_70;
    local_80[3] = local_68;
    local_80[4] = lStack_60;
    local_80[5] = local_58;
    local_80[6] = lStack_50;
    *(FName *)(local_80 + 7) = local_48;
    local_80[8] = lStack_40;
    if (local_80 + 1 != (longlong *)0x0) {
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Audio::FQuartzGameThreadSubscriber::PushEvent'::__l5::<lambda_1>,void,Audio::Quartz::IMetronomeEventListener_&>
                 ::Call;
    }
    this_00 = ::operator_new(0x40);
    if (this_00 != (TVisitWithLambda<Audio::Quartz::IMetronomeEventListener> *)0x0) {
      local_38[0] = local_a8;
      local_10 = local_80;
      local_80 = (longlong *)0x0;
      local_28 = local_98[0];
      uStack_20 = local_98[1];
      local_18 = local_98[2];
      if (local_a8 != (code *)0x0) {
        local_a8 = (code *)0x0;
      }
      aVar4 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
               )Quartz::PrivateDefs::
                TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
                ::TVisitWithLambda<Audio::Quartz::IMetronomeEventListener>::
                TVisitWithLambda<Audio::Quartz::IMetronomeEventListener>
                          (this_00,(TFunction<void___cdecl(Audio::Quartz::IMetronomeEventListener_&)>
                                    *)local_38);
    }
    aVar5 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
             )FMemory::Malloc(0x10,8);
    *(atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
      *)aVar5 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
                 )0x0;
    *(atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
      *)((longlong)aVar5 + 8) = aVar4;
    TVar6.Head = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
                  )*(TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>
                     *)paVar1;
    do {
      *(atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
        *)aVar5 = TVar6.Head;
      LOCK();
      TVar7.Head = *paVar1;
      bVar3 = TVar6.Head == TVar7.Head;
      if (bVar3) {
        *paVar1 = aVar5;
        TVar7.Head = TVar6.Head;
      }
      UNLOCK();
      TVar6.Head = TVar7.Head;
    } while (!bVar3);
    if (local_a8 != (code *)0x0) {
      plVar8 = local_98;
      if (local_80 != (longlong *)0x0) {
        plVar8 = local_80;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  return;
}

// PushEvent @ 147353450

void __thiscall
Audio::FQuartzGameThreadSubscriber::PushEvent
          (FQuartzGameThreadSubscriber *this,FQuartzQuantizedCommandDelegateData *param_1)

{
  longlong lVar1;
  atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
  *paVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  TVisitWithLambda<Audio::Quartz::ICommandListener> *this_00;
  atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
  aVar9;
  atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
  aVar10;
  TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>
  TVar11;
  TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>
  TVar12;
  longlong *plVar13;
  code *local_78;
  longlong local_68 [3];
  longlong *local_50;
  code *local_48 [2];
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  
  paVar2 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
            *)(this->Queue).Object;
  if (paVar2 == (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
                 *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1281049780729938695>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.cpp"
                       ,0x307,"Queue.IsValid()");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    lVar4 = param_1->_padding_;
    lVar5 = param_1->_padding_;
    aVar9 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
             )0x0;
    local_78 = (code *)0x0;
    lVar6 = param_1->_padding_;
    lVar7 = param_1->_padding_;
    lVar1 = *(longlong *)&param_1->CommandType;
    local_50 = FMemory::Malloc(0x30,8);
    *local_50 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FQuartzGameThreadSubscriber::PushEvent'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_50[1] = lVar4;
    local_50[2] = lVar5;
    local_50[3] = lVar6;
    local_50[4] = lVar7;
    local_50[5] = lVar1;
    if (local_50 + 1 != (longlong *)0x0) {
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Audio::FQuartzGameThreadSubscriber::PushEvent'::__l5::<lambda_1>,void,Audio::Quartz::ICommandListener_&>
                 ::Call;
    }
    this_00 = ::operator_new(0x40);
    if (this_00 != (TVisitWithLambda<Audio::Quartz::ICommandListener> *)0x0) {
      local_48[0] = local_78;
      local_20 = local_50;
      local_50 = (longlong *)0x0;
      local_38 = local_68[0];
      uStack_30 = local_68[1];
      local_28 = local_68[2];
      if (local_78 != (code *)0x0) {
        local_78 = (code *)0x0;
      }
      aVar9 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
               )Quartz::PrivateDefs::
                TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
                ::TVisitWithLambda<Audio::Quartz::ICommandListener>::
                TVisitWithLambda<Audio::Quartz::ICommandListener>
                          (this_00,(TFunction<void___cdecl(Audio::Quartz::ICommandListener_&)> *)
                                   local_48);
    }
    aVar10 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
              )FMemory::Malloc(0x10,8);
    *(atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
      *)aVar10 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
                  )0x0;
    *(atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
      *)((longlong)aVar10 + 8) = aVar9;
    TVar11.Head = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
                   )*(TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>
                      *)paVar2;
    do {
      *(atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
        *)aVar10 = TVar11.Head;
      LOCK();
      TVar12.Head = *paVar2;
      bVar8 = TVar11.Head == TVar12.Head;
      if (bVar8) {
        *paVar2 = aVar10;
        TVar12.Head = TVar11.Head;
      }
      UNLOCK();
      TVar11.Head = TVar12.Head;
    } while (!bVar8);
    if (local_78 != (code *)0x0) {
      plVar13 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar13 = local_50;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (this->bHasBeenNotifiedOfAboutToStart == false) {
      this->bHasBeenNotifiedOfAboutToStart = param_1->DelegateSubType == CommandOnAboutToStart;
    }
  }
  return;
}

// PushEvent @ 147353610

void __thiscall
Audio::FQuartzGameThreadSubscriber::PushEvent
          (FQuartzGameThreadSubscriber *this,FQuartzQueueCommandData *param_1)

{
  FQuartzQueueCommandData *this_00;
  atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
  *paVar1;
  code *pcVar2;
  bool bVar3;
  TVisitWithLambda<Audio::Quartz::IQueueCommandListener> *this_01;
  atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
  aVar4;
  atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
  aVar5;
  TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>
  TVar6;
  TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>
  TVar7;
  longlong *plVar8;
  code *local_f8;
  longlong local_e8 [3];
  longlong *local_d0;
  code *local_c8 [2];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong *local_a0;
  FQuartzQueueCommandData local_98;
  
  paVar1 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
            *)(this->Queue).Object;
  if (paVar1 == (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
                 *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1281049780729938723>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.cpp"
                       ,0x323,"Queue.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    FQuartzQueueCommandData::FQuartzQueueCommandData(&local_98,param_1);
    aVar4 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
             )0x0;
    local_f8 = (code *)0x0;
    local_d0 = FMemory::Malloc(0x98,8);
    this_00 = (FQuartzQueueCommandData *)(local_d0 + 1);
    *local_d0 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FQuartzGameThreadSubscriber::PushEvent'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    FQuartzQueueCommandData::FQuartzQueueCommandData(this_00,&local_98);
    if (this_00 != (FQuartzQueueCommandData *)0x0) {
      local_f8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Audio::FQuartzGameThreadSubscriber::PushEvent'::__l5::<lambda_1>,void,Audio::Quartz::IQueueCommandListener_&>
                 ::Call;
    }
    this_01 = ::operator_new(0x40);
    if (this_01 != (TVisitWithLambda<Audio::Quartz::IQueueCommandListener> *)0x0) {
      local_c8[0] = local_f8;
      local_a0 = local_d0;
      local_d0 = (longlong *)0x0;
      local_b8 = local_e8[0];
      uStack_b0 = local_e8[1];
      local_a8 = local_e8[2];
      if (local_f8 != (code *)0x0) {
        local_f8 = (code *)0x0;
      }
      aVar4 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
               )Quartz::PrivateDefs::
                TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
                ::TVisitWithLambda<Audio::Quartz::IQueueCommandListener>::
                TVisitWithLambda<Audio::Quartz::IQueueCommandListener>
                          (this_01,(TFunction<void___cdecl(Audio::Quartz::IQueueCommandListener_&)>
                                    *)local_c8);
    }
    aVar5 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
             )FMemory::Malloc(0x10,8);
    *(atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
      *)aVar5 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
                 )0x0;
    *(atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
      *)((longlong)aVar5 + 8) = aVar4;
    TVar6.Head = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
                  )*(TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>
                     *)paVar1;
    do {
      *(atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
        *)aVar5 = TVar6.Head;
      LOCK();
      TVar7.Head = *paVar1;
      bVar3 = TVar6.Head == TVar7.Head;
      if (bVar3) {
        *paVar1 = aVar5;
        TVar7.Head = TVar6.Head;
      }
      UNLOCK();
      TVar6.Head = TVar7.Head;
    } while (!bVar3);
    if (local_f8 != (code *)0x0) {
      plVar8 = local_e8;
      if (local_d0 != (longlong *)0x0) {
        plVar8 = local_d0;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>
              ((FQuartzGameThreadSubscriber *)
               local_98.AudioComponentCommandInfo.AnticipatoryBoundary.GameThreadSubscribers.
               AllocatorInstance.Data,
               local_98.AudioComponentCommandInfo.AnticipatoryBoundary.GameThreadSubscribers.
               ArrayNum);
    if ((FQuartzGameThreadSubscriber *)
        local_98.AudioComponentCommandInfo.AnticipatoryBoundary.GameThreadSubscribers.
        AllocatorInstance.Data != (FQuartzGameThreadSubscriber *)0x0) {
      FMemory::Free(local_98.AudioComponentCommandInfo.AnticipatoryBoundary.GameThreadSubscribers.
                    AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.AudioComponentCommandInfo.Subscriber.Queue.SharedReferenceCount.
               ReferenceController);
  }
  return;
}

// operator() @ 150506300

bool __thiscall
`Audio::FQuartzGameThreadSubscriber::GetOffsetAsAudioFrames'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<1281049780729938740>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1281049780729938740>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

