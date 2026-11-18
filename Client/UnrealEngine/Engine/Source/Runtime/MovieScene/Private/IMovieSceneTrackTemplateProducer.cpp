// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// Compile @ 1460b2060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EMovieSceneCompileResult __thiscall
IMovieSceneTrackTemplateProducer::Compile
          (IMovieSceneTrackTemplateProducer *this,FMovieSceneEvaluationTrack *param_1,
          FMovieSceneTrackCompilerArgs *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  longlong lVar5;
  uint uVar6;
  EMovieSceneCompletionMode EVar7;
  bool bVar8;
  EMovieSceneCompileResult EVar9;
  longlong *plVar10;
  FFrameNumber *pFVar11;
  FMovieSceneEvalTemplatePtr *pFVar12;
  FMovieSceneTrackCompilerArgs *pFVar13;
  undefined8 *puVar14;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  FMovieSceneTrackCompilerArgs *local_110;
  TRangeBound<FFrameNumber> local_108;
  undefined4 local_100;
  int iStack_fc;
  uint local_f8;
  int iStack_f4;
  TRangeBound<FFrameNumber> local_f0;
  TRangeBound<FFrameNumber> local_e8;
  TRangeBound<FFrameNumber> local_e0;
  UObject *local_d8;
  FMovieSceneEvaluationTrack *local_d0;
  FMovieSceneEvalTemplatePtr local_c8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_110 = param_2;
  local_d0 = param_1;
  plVar10 = (longlong *)(**(code **)(param_2->Track->_padding_ + 0x360))();
  puVar14 = (undefined8 *)*plVar10;
  lVar5 = plVar10[1];
  puVar1 = puVar14 + (int)lVar5;
  do {
    if ((int)plVar10[1] != (int)lVar5) {
      local_118[0] = 0;
      `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_118);
    }
    uVar6 = local_f8;
    if (puVar14 == puVar1) {
      return Success;
    }
    pUVar3 = (UObject *)*puVar14;
    local_f0.Type.Value = pUVar3[4].field_0x10;
    local_f0._1_3_ = *(undefined3 *)&pUVar3[4].field_0x11;
    local_f0.Value.Value = *(int *)&pUVar3[4].field_0x14;
    local_108.Type.Value = pUVar3[4].field_0x18;
    local_108._1_3_ = *(undefined3 *)&pUVar3[4].field_0x19;
    local_108.Value.Value = *(int *)&pUVar3[4].field_0x1c;
    if (local_f0.Type.Value == '\0') {
      iStack_fc = local_f0.Value.Value + 1;
      local_100 = CONCAT31(local_100._1_3_,1);
      local_f0.Value.Value = iStack_fc;
      local_f0._0_4_ = local_100;
    }
    if (local_108.Type.Value == '\x01') {
      iStack_f4 = local_108.Value.Value + 1;
      local_f8 = local_f8 & 0xffffff00;
      local_108 = (TRangeBound<FFrameNumber>)(CONCAT44(iStack_f4,uVar6) & 0xffffffffffffff00);
    }
    local_e8 = local_f0;
    local_e0 = local_108;
    if ((pUVar3[5].field_0x10 & 1) != 0) {
      pFVar13 = param_2;
      if ((local_f0.Type.Value.Value == '\x02') || (local_108.Type.Value.Value == '\x02')) {
LAB_1460b2193:
        (**(code **)((longlong)*this + 0x28))(this,&local_c8,pUVar3);
        param_2 = local_110;
        if ((local_c8._128_1_ & 1) != 0) {
          EVar7 = pUVar3[2].field_0x21;
          pFVar12 = &local_c8;
          if ((local_c8._128_1_ & 2) == 0) {
            pFVar12 = (FMovieSceneEvalTemplatePtr *)local_c8._0_8_;
          }
          if (EVar7 == ProjectDefault) {
            EVar7 = pFVar13->DefaultCompletionMode;
          }
          pFVar12->field_0x10 = EVar7;
          if (((local_c8._128_1_ & 1) == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("bIsValid",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                 ,0x97,
                                 L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            EVar9 = (*pcVar4)();
            return EVar9;
          }
          pFVar12 = &local_c8;
          if ((local_c8._128_1_ & 2) == 0) {
            pFVar12 = (FMovieSceneEvalTemplatePtr *)local_c8._0_8_;
          }
          local_d8 = pUVar3;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar12->field_0x14,(FObjectPtr)&local_d8);
          FMovieSceneEvaluationTrack::AddChildTemplate(local_d0,&local_c8);
          param_2 = local_110;
          if ((local_c8._128_1_ & 1) != 0) {
            pFVar12 = &local_c8;
            if ((local_c8._128_1_ & 2) == 0) {
              pFVar12 = (FMovieSceneEvalTemplatePtr *)local_c8._0_8_;
            }
            local_c8._128_1_ = local_c8._128_1_ & 0xfe;
            (*(code *)**(undefined8 **)pFVar12)(pFVar12,0);
            param_2 = local_110;
            if ((local_c8._128_1_ & 2) == 0) {
              FMemory::Free((void *)local_c8._0_8_);
              param_2 = local_110;
            }
          }
        }
      }
      else if (local_f0.Value.Value <= local_108.Value.Value) {
        pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_e0);
        iVar2 = pFVar11->Value;
        pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_e8);
        pFVar13 = local_110;
        if ((pFVar11->Value != iVar2) ||
           ((param_2 = local_110, local_e8.Type.Value != '\0' && (local_e0.Type.Value != '\0'))))
        goto LAB_1460b2193;
      }
    }
    puVar14 = puVar14 + 1;
  } while( true );
}

// GenerateTemplate @ 1460c8330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
IMovieSceneTrackTemplateProducer::GenerateTemplate
          (IMovieSceneTrackTemplateProducer *this,FMovieSceneTrackCompilerArgs *param_1)

{
  FMovieSceneTrackEvalOptions *pFVar1;
  EMovieSceneCompileResult EVar2;
  undefined8 *****pppppuVar3;
  undefined1 auStack_b8 [32];
  UMovieSceneTrack *local_98;
  undefined1 local_90 [48];
  undefined8 ****local_60 [6];
  byte local_30;
  uint local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FMovieSceneEvaluationTrack::FMovieSceneEvaluationTrack
            ((FMovieSceneEvaluationTrack *)local_90,&param_1->ObjectBindingId);
  local_20 = pFVar1->bEvaluateInPostroll * 2 | pFVar1->bEvaluateInPreroll | local_20 & 0xfffffffc;
  EVar2 = (**(code **)((longlong)*this + 0x18))(this,local_90,param_1);
  if (EVar2 == Unimplemented) {
    EVar2 = Compile(this,(FMovieSceneEvaluationTrack *)local_90,param_1);
  }
  if (EVar2 == Success) {
    local_98 = param_1->Track;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_98 != (UMovieSceneTrack *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_98);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_90 + 0x14),(FObjectPtr)&local_98);
    (**(code **)((longlong)*this + 0x20))(this,local_90,param_1);
    (**(code **)*param_1->Generator)(param_1->Generator,local_90,param_1->Track);
  }
  if ((local_30 & 1) != 0) {
    pppppuVar3 = local_60;
    if ((local_30 & 2) == 0) {
      pppppuVar3 = (undefined8 *****)local_60[0];
    }
    local_30 = local_30 & 0xfe;
    (*(code *)**pppppuVar3)(pppppuVar3,0);
    if ((local_30 & 2) == 0) {
      FMemory::Free(local_60[0]);
    }
  }
  DestructItems<FMovieSceneEvalTemplatePtr,int>
            ((FMovieSceneEvalTemplatePtr *)local_90._32_8_,local_90._40_4_);
  if ((FMovieSceneEvalTemplatePtr *)local_90._32_8_ != (FMovieSceneEvalTemplatePtr *)0x0) {
    FMemory::Free((void *)local_90._32_8_);
  }
  return;
}

// GenerateTrackTemplate @ 1460c8510

FMovieSceneEvaluationTrack * __thiscall
IMovieSceneTrackTemplateProducer::GenerateTrackTemplate
          (IMovieSceneTrackTemplateProducer *this,FMovieSceneEvaluationTrack *__return_storage_ptr__
          ,UMovieSceneTrack *param_1)

{
  code *pcVar1;
  UMovieSceneTrack *this_00;
  bool bVar2;
  char cVar3;
  FMovieSceneEvaluationTrack *pFVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UMovieSceneTrack *local_res8;
  IMovieSceneTemplateGenerator local_res10;
  FGuid local_58;
  FMovieSceneTrackCompilerArgs local_48;
  
  local_58.A = 0;
  local_58.B = 0;
  local_58.C = 0;
  local_58.D = 0;
  FMovieSceneEvaluationTrack::FMovieSceneEvaluationTrack(__return_storage_ptr__,&local_58);
  local_res10 = (IMovieSceneTemplateGenerator)
                &`IMovieSceneTrackTemplateProducer::GenerateTrackTemplate'::`2'::
                 FTemplateGeneratorStub::_vftable_;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMovieSceneTrack *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(__return_storage_ptr__->SourceTrack).WeakPtr,(FObjectPtr)&local_res8);
  local_48.ObjectBindingId.A = 0;
  local_48.ObjectBindingId.B = 0;
  local_48.Generator = &local_res10;
  local_48.ObjectBindingId.C = 0;
  local_48.ObjectBindingId.D = 0;
  local_48.Track = param_1;
  if (param_1 == (UMovieSceneTrack *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Track",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\IMovieSceneTrackTemplateProducer.cpp"
                       ,0x11,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneEvaluationTrack *)(*pcVar1)();
      return pFVar4;
    }
  }
  this_00 = local_48.Track;
  pUVar5 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
  pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar5);
  if (pUVar6 == (UObject *)0x0) {
    local_48.DefaultCompletionMode = RestoreState;
  }
  else {
    local_48.DefaultCompletionMode = pUVar6[2].field_0x18;
  }
  cVar3 = (**(code **)((longlong)*this + 0x18))(this,__return_storage_ptr__,&local_48);
  if (cVar3 == '\x02') {
    Compile(this,__return_storage_ptr__,&local_48);
  }
  return __return_storage_ptr__;
}

// ~IMovieSceneTrackTemplateProducer @ 14629ba50

void __thiscall
IMovieSceneTrackTemplateProducer::~IMovieSceneTrackTemplateProducer
          (IMovieSceneTrackTemplateProducer *this)

{
  *this = (IMovieSceneTrackTemplateProducer)&___7IMovieSceneTrackTemplateProducer__6B_;
  return;
}

// CustomCompile @ 1462ab7e0

EMovieSceneCompileResult __thiscall
IMovieSceneTrackTemplateProducer::CustomCompile
          (IMovieSceneTrackTemplateProducer *this,FMovieSceneEvaluationTrack *param_1,
          FMovieSceneTrackCompilerArgs *param_2)

{
  return Unimplemented;
}

// PostCompile @ 1462b7890

void __thiscall
IMovieSceneTrackTemplateProducer::PostCompile
          (IMovieSceneTrackTemplateProducer *this,FMovieSceneEvaluationTrack *param_1,
          FMovieSceneTrackCompilerArgs *param_2)

{
  return;
}

// _getUObject @ 1462bfc80

UObject * __thiscall
IMovieSceneTrackTemplateProducer::_getUObject(IMovieSceneTrackTemplateProducer *this)

{
  return (UObject *)0x0;
}

