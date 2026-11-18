// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 2

// ForEachAllocation @ 14ac765f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FScaleTransformProperties::ForEachAllocation
          (FScaleTransformProperties *this,FEntityAllocation *param_1,
          TRead<UE::MovieScene::FRootInstanceHandle> param_2,
          TReadOptional<FMovieSceneSequenceID> param_3,TRead<FMovieScenePropertyBinding> param_4,
          TRead<FGuid> param_5,TReadOptional<double> param_6,TReadOptional<double> param_7,
          TReadOptional<double> param_8,TReadOptional<double> param_9,TReadOptional<double> param_10
          ,TReadOptional<double> param_11,TWriteOptional<double> param_12,
          TWriteOptional<double> param_13,TWriteOptional<double> param_14,
          TWriteOptional<double> param_15,TWriteOptional<double> param_16,
          TWriteOptional<double> param_17)

{
  float fVar1;
  undefined4 uVar2;
  FMovieSceneSequenceID FVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> FVar10;
  longlong lVar11;
  FMovieSceneSequenceID *pFVar12;
  ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> FVar13;
  double dVar14;
  undefined1 auStackY_158 [32];
  undefined1 local_128;
  undefined1 local_127 [7];
  TWriteOptional<double> local_120;
  int local_114;
  undefined8 *local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> local_e0;
  TReadOptional<FMovieSceneSequenceID> local_d8;
  FScaleTransformProperties *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  FEntityAllocation *local_98;
  TReadOptional<FMovieSceneSequenceID> local_90;
  longlong local_88;
  TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName> local_80;
  FMultiPropertyScaleValue local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_114 = 0;
  if (param_1->Size != 0) {
    local_110 = (undefined8 *)((longlong)param_4 + 8);
    local_88 = (longlong)param_2 - (longlong)param_3;
    local_c8 = (longlong)param_9 - (longlong)param_15;
    local_c0 = (longlong)param_10 - (longlong)param_15;
    local_108 = (longlong)param_16 - (longlong)param_15;
    local_120 = param_15;
    local_b8 = (longlong)param_11 - (longlong)param_15;
    local_100 = (longlong)param_17 - (longlong)param_15;
    local_b0 = (longlong)param_6 - (longlong)param_15;
    local_f8 = (longlong)param_12 - (longlong)param_15;
    local_a8 = (longlong)param_7 - (longlong)param_15;
    local_f0 = (longlong)param_13 - (longlong)param_15;
    local_a0 = (longlong)param_8 - (longlong)param_15;
    local_e8 = (longlong)param_14 - (longlong)param_15;
    local_d0 = this;
    local_98 = param_1;
    local_90 = param_3;
    do {
      uVar2 = *(undefined4 *)((longlong)param_3 + local_88);
      pFVar12 = &MovieSceneSequenceID::Root;
      if (local_90 != (TReadOptional<FMovieSceneSequenceID>)0x0) {
        pFVar12 = (FMovieSceneSequenceID *)param_3;
      }
      iVar4 = *(int *)param_5;
      iVar9 = *(int *)((longlong)param_5 + 4);
      uVar6 = *(undefined4 *)((longlong)param_5 + 8);
      uVar7 = *(undefined4 *)((longlong)param_5 + 0xc);
      FVar3.Value = pFVar12->Value;
      local_d8 = param_3;
      if ((((iVar9 == 0 && (int)((ulonglong)*(undefined8 *)((longlong)param_5 + 8) >> 0x20) == 0) &&
           (int)*(undefined8 *)((longlong)param_5 + 8) == 0) && iVar4 == 0) &&
         (bVar8 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_313004018097978997>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                             ,0x18b,"ObjectBindingID.IsValid()"), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_60.Values.ArrayMax = 2;
      local_60.Values.AllocatorInstance.SecondaryData =
           (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)0x0;
      local_60.Values.ArrayNum = 0;
      local_80._24_8_ = *local_110;
      local_80._0_4_ = uVar2;
      local_80._4_4_ = FVar3.Value;
      local_80._8_4_ = iVar4;
      local_80._12_4_ = iVar9;
      local_80._16_4_ = uVar6;
      local_80._20_4_ = uVar7;
      FVar10 = (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)
               TMapBase<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>_>
               ::Find((TMapBase<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>_>
                       *)&local_d0->EvaluatorSystem->PropertyScales,&local_80);
      if (FVar10 != (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)0x0) {
        if ((2 < *(int *)((longlong)FVar10 + 0x18)) &&
           (bVar8 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_313004018097979090>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                               ,0x12e,"MultiValue->Values.Num() <= 2"), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)&local_60 == FVar10)
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x96e,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar4 = *(int *)((longlong)FVar10 + 0x18);
        if (iVar4 != 0) {
          iVar9 = Core::Private::
                  ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<enum_ETemplateSectionPropertyScaleType,float>_>_>
                            (8,4,iVar4,
                             (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> *)
                             &local_60,&local_60.Values.ArrayNum,&local_60.Values.ArrayMax);
          if (*(ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> *)
               ((longlong)FVar10 + 0x10) !=
              (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)0x0) {
            FVar10 = *(ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> *)
                      ((longlong)FVar10 + 0x10);
          }
          FVar13 = (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)&local_60;
          if (local_60.Values.AllocatorInstance.SecondaryData !=
              (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)0x0) {
            FVar13 = local_60.Values.AllocatorInstance.SecondaryData;
          }
          memcpy((ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> *)
                 ((longlong)FVar13 + (longlong)iVar9 * 8),(void *)FVar10,(longlong)iVar4 << 3);
        }
      }
      iVar4 = local_60.Values.ArrayNum;
      FVar10 = (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)&local_60;
      if (local_60.Values.AllocatorInstance.SecondaryData !=
          (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)0x0) {
        FVar10 = local_60.Values.AllocatorInstance.SecondaryData;
      }
      local_e0 = (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)
                 ((longlong)FVar10 + (longlong)local_60.Values.ArrayNum * 8);
      while( true ) {
        if (local_60.Values.ArrayNum != iVar4) {
          local_128 = 0;
          `TCheckedPointerIterator<TTuple<enum_ETemplateSectionPropertyScaleType,float>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_128);
        }
        if (FVar10 == local_e0) break;
        fVar1 = *(float *)((longlong)FVar10 + 4);
        if (*(int *)FVar10 == 1) {
          if (param_12 != (TWriteOptional<double>)0x0) {
            if (param_6 == (TReadOptional<double>)0x0) {
              *(double *)((longlong)local_120 + local_f8) =
                   (double)fVar1 * *(double *)((longlong)local_120 + local_f8);
            }
            else {
              *(double *)((longlong)local_120 + local_f8) =
                   (*(double *)((longlong)local_120 + local_f8) -
                   (double)(float)*(double *)((longlong)local_120 + local_b0)) * (double)fVar1 +
                   (double)(float)*(double *)((longlong)local_120 + local_b0);
            }
          }
          if (param_13 != (TWriteOptional<double>)0x0) {
            if (param_7 == (TReadOptional<double>)0x0) {
              *(double *)((longlong)local_120 + local_f0) =
                   (double)fVar1 * *(double *)((longlong)local_120 + local_f0);
            }
            else {
              *(double *)((longlong)local_120 + local_f0) =
                   (*(double *)((longlong)local_120 + local_f0) -
                   (double)(float)*(double *)((longlong)local_120 + local_a8)) * (double)fVar1 +
                   (double)(float)*(double *)((longlong)local_120 + local_a8);
            }
          }
          if (param_14 != (TWriteOptional<double>)0x0) {
            lVar11 = local_e8;
            if (param_8 != (TReadOptional<double>)0x0) {
              dVar14 = *(double *)((longlong)local_120 + local_a0);
              goto LAB_14ac76aa3;
            }
LAB_14ac76ad3:
            *(double *)((longlong)local_120 + lVar11) =
                 (double)fVar1 * *(double *)((longlong)local_120 + lVar11);
          }
LAB_14ac76add:
          FVar10 = (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)
                   ((longlong)FVar10 + 8);
        }
        else if (*(int *)FVar10 == 2) {
          if (param_15 != (TWriteOptional<double>)0x0) {
            if (param_9 == (TReadOptional<double>)0x0) {
              *(double *)local_120 = (double)fVar1 * *(double *)local_120;
            }
            else {
              *(double *)local_120 =
                   (*(double *)local_120 -
                   (double)(float)*(double *)((longlong)local_120 + local_c8)) * (double)fVar1 +
                   (double)(float)*(double *)((longlong)local_120 + local_c8);
            }
          }
          if (param_16 != (TWriteOptional<double>)0x0) {
            if (param_10 == (TReadOptional<double>)0x0) {
              *(double *)((longlong)local_120 + local_108) =
                   (double)fVar1 * *(double *)((longlong)local_120 + local_108);
            }
            else {
              *(double *)((longlong)local_120 + local_108) =
                   (*(double *)((longlong)local_120 + local_108) -
                   (double)(float)*(double *)((longlong)local_120 + local_c0)) * (double)fVar1 +
                   (double)(float)*(double *)((longlong)local_120 + local_c0);
            }
          }
          if (param_17 == (TWriteOptional<double>)0x0) goto LAB_14ac76add;
          lVar11 = local_100;
          if (param_11 == (TReadOptional<double>)0x0) goto LAB_14ac76ad3;
          dVar14 = *(double *)((longlong)local_120 + local_b8);
LAB_14ac76aa3:
          FVar10 = (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)
                   ((longlong)FVar10 + 8);
          *(double *)((longlong)local_120 + lVar11) =
               (*(double *)((longlong)local_120 + lVar11) - (double)(float)dVar14) * (double)fVar1 +
               (double)(float)dVar14;
        }
        else {
          local_127[0] = 0;
          `UE::MovieScene::FScaleTransformProperties::ForEachAllocation'::__l10::<lambda_1>::
          operator()(local_127);
          FVar10 = (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)
                   ((longlong)FVar10 + 8);
        }
      }
      if (local_60.Values.AllocatorInstance.SecondaryData !=
          (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)0x0) {
        FMemory::Free((void *)local_60.Values.AllocatorInstance.SecondaryData);
      }
      local_114 = local_114 + 1;
      local_110 = (undefined8 *)((longlong)local_110 + 0x14);
      param_3 = (TReadOptional<FMovieSceneSequenceID>)((longlong)local_d8 + 4);
      param_5 = (TRead<FGuid>)((longlong)param_5 + 0x10);
      local_120 = (TWriteOptional<double>)((longlong)local_120 + 8);
    } while (local_114 < (int)(uint)local_98->Size);
  }
  return;
}

// operator() @ 15055a540

bool __thiscall
`UE::MovieScene::FScaleTransformProperties::ForEachAllocation'::__l10::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_313004018097978972>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_313004018097978972>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::FScaleTransformProperties::ForEachAllocation(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadOptional<FMovieSceneSequenceID>,UE::MovieScene::TRead<FMovieScenePropertyBinding>,UE::MovieScene::TRead<FGuid>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TWriteOptional<double>,UE::MovieScene::TWriteOptional<double>,UE::MovieScene::TWriteOptional<double>,UE::MovieScene::TWriteOptional<double>,UE::MovieScene::TWriteOptional<double>,UE::MovieScene::TWriteOptional<double>)const___ptr64'::`10'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

