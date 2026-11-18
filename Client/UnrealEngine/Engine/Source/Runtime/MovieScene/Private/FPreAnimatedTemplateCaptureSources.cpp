// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// FPreAnimatedTemplateCaptureSources @ 146181a80

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedTemplateCaptureSources * __thiscall
UE::MovieScene::FPreAnimatedTemplateCaptureSources::FPreAnimatedTemplateCaptureSources
          (FPreAnimatedTemplateCaptureSources *this,FPreAnimatedStateExtension *param_1)

{
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x34 = 0x80;
  *(undefined4 *)&this->field_0x3c = 0;
  *(undefined4 *)&this->field_0x38 = 0xffffffff;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined4 *)&this->field_0x50 = 0;
  *(undefined ***)this = &___7FPreAnimatedTemplateCaptureSources_MovieScene_UE__6B_;
  *(FPreAnimatedStateExtension **)&this->field_0x58 = param_1;
  return this;
}

// BeginTrackingCaptureSource @ 146195720

/* WARNING: Enum "Type": Some values do not have unique names */

EPreAnimatedCaptureSourceState __thiscall
UE::MovieScene::FPreAnimatedTemplateCaptureSources::BeginTrackingCaptureSource
          (FPreAnimatedTemplateCaptureSources *this,FMovieSceneEvaluationKey *param_1,
          FPreAnimatedStateMetaData *param_2)

{
  EPreAnimatedCaptureSourceState EVar1;
  FPreAnimatedEvaluationKeyType local_18;
  
  local_18.EvaluationKey.SectionIndex = param_1->SectionIndex;
  local_18.EvaluationKey.SequenceID.Value = (param_1->SequenceID).Value;
  local_18.EvaluationKey.TrackIdentifier.Value = (param_1->TrackIdentifier).Value;
  local_18.RootInstanceHandle = param_2->RootInstanceHandle;
  EVar1 = TPreAnimatedCaptureSources<UE::MovieScene::FPreAnimatedEvaluationKeyType>::
          BeginTrackingCaptureSource
                    ((TPreAnimatedCaptureSources<UE::MovieScene::FPreAnimatedEvaluationKeyType> *)
                     this,&local_18,param_2);
  return EVar1;
}

// StopTrackingCaptureSource @ 1461d58c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedTemplateCaptureSources::StopTrackingCaptureSource
          (FPreAnimatedTemplateCaptureSources *this,FMovieSceneEvaluationKey *param_1,
          FRootInstanceHandle param_2)

{
  FPreAnimatedStateExtension *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  FPreAnimatedEvaluationKeyType local_38;
  
  local_38.EvaluationKey.SectionIndex = param_1->SectionIndex;
  local_38.EvaluationKey.SequenceID.Value = (param_1->SequenceID).Value;
  local_38.EvaluationKey.TrackIdentifier.Value = (param_1->TrackIdentifier).Value;
  if (*(int *)&this->field_0x10 != *(int *)&this->field_0x3c) {
    puVar5 = *(undefined1 **)&this->field_0x48;
    if (*(undefined1 **)&this->field_0x48 == (undefined1 *)0x0) {
      puVar5 = &this->field_0x40;
    }
    uVar6 = *(uint *)(puVar5 + (ulonglong)
                               (*(int *)&this->field_0x50 - 1U &
                               (~local_38.EvaluationKey.TrackIdentifier.Value ^
                                (uint)param_2 & 0xffff ^ local_38.EvaluationKey.SectionIndex ^
                               local_38.EvaluationKey.SequenceID.Value)) * 4);
    if (uVar6 != 0xffffffff) {
      while ((((puVar4 = (uint *)((longlong)(int)uVar6 * 0x40 + *(longlong *)&this->field_0x8),
               puVar4[1] != local_38.EvaluationKey.TrackIdentifier.Value ||
               (*puVar4 != local_38.EvaluationKey.SequenceID.Value)) ||
              (puVar4[2] != local_38.EvaluationKey.SectionIndex)) ||
             (((short)puVar4[3] != param_2._0_2_ || ((short)(puVar4[3] >> 0x10) != param_2._2_2_))))
            ) {
        uVar6 = puVar4[0xe];
        if (uVar6 == 0xffffffff) {
          return;
        }
      }
      if (uVar6 != 0xffffffff) {
        puVar8 = puVar4 + 4;
        if (puVar4 == (uint *)0x0) {
          puVar8 = (uint *)0x0;
        }
        if (puVar8 != (uint *)0x0) {
          uVar6 = puVar8[8] - 1;
          local_38.RootInstanceHandle = param_2;
          if (-1 < (int)uVar6) {
            lVar7 = (longlong)(int)uVar6 * 0x14;
            do {
              this_00 = *(FPreAnimatedStateExtension **)&this->field_0x58;
              uVar3 = 0;
              if ((int)uVar6 < (int)puVar8[8]) {
                uVar3 = ~uVar6 >> 0x1f;
              }
              if ((uVar3 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              puVar4 = *(uint **)(puVar8 + 6);
              if (*(uint **)(puVar8 + 6) == (uint *)0x0) {
                puVar4 = puVar8;
              }
              FPreAnimatedStateExtension::RemoveMetaData
                        (this_00,(FPreAnimatedStateMetaData *)((longlong)puVar4 + lVar7));
              lVar7 = lVar7 + -0x14;
              uVar6 = uVar6 - 1;
            } while (-1 < (int)uVar6);
          }
          TMapBase<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
          ::Remove((TMapBase<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
                    *)&this->field_0x8,&local_38);
        }
      }
    }
  }
  return;
}

