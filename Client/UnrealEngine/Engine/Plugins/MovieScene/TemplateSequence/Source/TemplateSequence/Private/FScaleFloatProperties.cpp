// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 2

// ForEachAllocation @ 14ac762a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FScaleFloatProperties::ForEachAllocation
          (FScaleFloatProperties *this,FEntityAllocation *param_1,
          TRead<UE::MovieScene::FRootInstanceHandle> param_2,
          TReadOptional<FMovieSceneSequenceID> param_3,TRead<FMovieScenePropertyBinding> param_4,
          TRead<FGuid> param_5,TReadOptional<double> param_6,TWrite<double> param_7)

{
  uchar *puVar1;
  undefined4 uVar2;
  FMovieSceneSequenceID FVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> FVar11;
  ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> FVar12;
  FMovieSceneSequenceID *pFVar13;
  longlong lVar14;
  TWrite<double> TVar15;
  TReadOptional<FMovieSceneSequenceID> TVar16;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8;
  undefined1 local_c7 [3];
  int local_c4;
  undefined8 *local_c0;
  ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> local_b8;
  TReadOptional<FMovieSceneSequenceID> local_b0;
  FScaleFloatProperties *local_a8;
  longlong local_a0;
  TReadOptional<FMovieSceneSequenceID> local_98;
  FEntityAllocation *local_90;
  TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName> local_88;
  FMultiPropertyScaleValue local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_c4 = 0;
  if (param_1->Size != 0) {
    lVar14 = (longlong)param_2 - (longlong)param_3;
    local_c0 = (undefined8 *)((longlong)param_4 + 8);
    local_a0 = (longlong)param_6 - (longlong)param_7;
    TVar15 = param_7;
    TVar16 = param_3;
    local_a8 = this;
    local_98 = param_3;
    local_90 = param_1;
    do {
      pFVar13 = &MovieSceneSequenceID::Root;
      uVar2 = *(undefined4 *)((longlong)param_3 + lVar14);
      if (TVar16 != (TReadOptional<FMovieSceneSequenceID>)0x0) {
        pFVar13 = (FMovieSceneSequenceID *)param_3;
      }
      iVar4 = *(int *)param_5;
      iVar10 = *(int *)((longlong)param_5 + 4);
      uVar6 = *(undefined4 *)((longlong)param_5 + 8);
      uVar7 = *(undefined4 *)((longlong)param_5 + 0xc);
      FVar3.Value = pFVar13->Value;
      local_b0 = param_3;
      if ((((iVar10 == 0 && (int)((ulonglong)*(undefined8 *)((longlong)param_5 + 8) >> 0x20) == 0)
           && (int)*(undefined8 *)((longlong)param_5 + 8) == 0) && iVar4 == 0) &&
         (bVar9 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_313004018097978937>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                             ,0x1c7,"ObjectBindingID.IsValid()"), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_68.Values.ArrayMax = 2;
      local_68.Values.AllocatorInstance.SecondaryData =
           (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)0x0;
      local_68.Values.ArrayNum = 0;
      local_88._24_8_ = *local_c0;
      local_88._0_4_ = uVar2;
      local_88._4_4_ = FVar3.Value;
      local_88._8_4_ = iVar4;
      local_88._12_4_ = iVar10;
      local_88._16_4_ = uVar6;
      local_88._20_4_ = uVar7;
      FVar11 = (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)
               TMapBase<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>_>
               ::Find((TMapBase<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>_>
                       *)&local_a8->EvaluatorSystem->PropertyScales,&local_88);
      if (FVar11 != (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)0x0) {
        if ((2 < *(int *)((longlong)FVar11 + 0x18)) &&
           (bVar9 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_313004018097979090>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                               ,0x12e,"MultiValue->Values.Num() <= 2"), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)&local_68 == FVar11)
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x96e,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar4 = *(int *)((longlong)FVar11 + 0x18);
        if (iVar4 != 0) {
          iVar10 = Core::Private::
                   ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<enum_ETemplateSectionPropertyScaleType,float>_>_>
                             (8,4,iVar4,
                              (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> *)
                              &local_68,&local_68.Values.ArrayNum,&local_68.Values.ArrayMax);
          if (*(ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> *)
               ((longlong)FVar11 + 0x10) !=
              (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)0x0) {
            FVar11 = *(ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> *)
                      ((longlong)FVar11 + 0x10);
          }
          FVar12 = (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)&local_68;
          if (local_68.Values.AllocatorInstance.SecondaryData !=
              (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)0x0) {
            FVar12 = local_68.Values.AllocatorInstance.SecondaryData;
          }
          memcpy((ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> *)
                 ((longlong)FVar12 + (longlong)iVar10 * 8),(void *)FVar11,(longlong)iVar4 << 3);
        }
      }
      iVar4 = local_68.Values.ArrayNum;
      lVar8 = local_a0;
      FVar11 = (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)&local_68;
      if (local_68.Values.AllocatorInstance.SecondaryData !=
          (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)0x0) {
        FVar11 = local_68.Values.AllocatorInstance.SecondaryData;
      }
      local_b8 = (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)
                 ((longlong)FVar11 + (longlong)local_68.Values.ArrayNum * 8);
      FVar12 = local_b8;
      while( true ) {
        if (local_68.Values.ArrayNum != iVar4) {
          local_c8 = 0;
          `TCheckedPointerIterator<TTuple<enum_ETemplateSectionPropertyScaleType,float>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_c8);
          FVar12 = local_b8;
        }
        TVar16 = local_98;
        if (FVar11 == FVar12) break;
        if (*(int *)FVar11 == 0) {
          if (param_7 == (TWrite<double>)0x0) {
LAB_14ac76544:
            FVar11 = (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)
                     ((longlong)FVar11 + 8);
          }
          else {
            puVar1 = (uchar *)((longlong)FVar11 + 4);
            if (param_6 == (TReadOptional<double>)0x0) {
              *(double *)TVar15 = (double)*(float *)puVar1 * *(double *)TVar15;
              goto LAB_14ac76544;
            }
            FVar11 = (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)
                     ((longlong)FVar11 + 8);
            *(double *)TVar15 =
                 (*(double *)TVar15 - (double)(float)*(double *)(lVar8 + (longlong)TVar15)) *
                 (double)*(float *)puVar1 + (double)(float)*(double *)(lVar8 + (longlong)TVar15);
          }
        }
        else {
          local_c7[0] = 0;
          `UE::MovieScene::FScaleFloatProperties::ForEachAllocation'::__l10::<lambda_1>::operator()
                    (local_c7);
          FVar11 = (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)
                   ((longlong)FVar11 + 8);
          FVar12 = local_b8;
        }
      }
      if (local_68.Values.AllocatorInstance.SecondaryData !=
          (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)0x0) {
        FMemory::Free((void *)local_68.Values.AllocatorInstance.SecondaryData);
      }
      TVar15 = (TWrite<double>)((longlong)TVar15 + 8);
      local_c4 = local_c4 + 1;
      param_3 = (TReadOptional<FMovieSceneSequenceID>)((longlong)local_b0 + 4);
      local_c0 = (undefined8 *)((longlong)local_c0 + 0x14);
      param_5 = (TRead<FGuid>)((longlong)param_5 + 0x10);
    } while (local_c4 < (int)(uint)local_90->Size);
  }
  return;
}

// operator() @ 15055a500

bool __thiscall
`UE::MovieScene::FScaleFloatProperties::ForEachAllocation'::__l10::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_313004018097978922>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_313004018097978922>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::FScaleFloatProperties::ForEachAllocation(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadOptional<FMovieSceneSequenceID>,UE::MovieScene::TRead<FMovieScenePropertyBinding>,UE::MovieScene::TRead<FGuid>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TWrite<double>)const___ptr64'::`10'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

