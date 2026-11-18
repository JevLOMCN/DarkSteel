// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// FPreAnimatedEvaluationHookCaptureSources @ 146181950

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedEvaluationHookCaptureSources * __thiscall
UE::MovieScene::FPreAnimatedEvaluationHookCaptureSources::FPreAnimatedEvaluationHookCaptureSources
          (FPreAnimatedEvaluationHookCaptureSources *this,FPreAnimatedStateExtension *param_1)

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
  *(undefined ***)this = &___7FPreAnimatedEvaluationHookCaptureSources_MovieScene_UE__6B_;
  *(FPreAnimatedStateExtension **)&this->field_0x58 = param_1;
  return this;
}

// BeginTrackingCaptureSource @ 146195670

/* WARNING: Enum "Type": Some values do not have unique names */

EPreAnimatedCaptureSourceState __thiscall
UE::MovieScene::FPreAnimatedEvaluationHookCaptureSources::BeginTrackingCaptureSource
          (FPreAnimatedEvaluationHookCaptureSources *this,UObject *param_1,
          FMovieSceneSequenceID param_2,FPreAnimatedStateMetaData *param_3)

{
  EPreAnimatedCaptureSourceState EVar1;
  FWeakObjectPtr local_res10;
  UObject *local_res20;
  FPreAnimatedEvalHookKeyType local_28;
  
  local_28.Hook.ObjectIndex = 0;
  local_28.Hook.ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable(param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    local_28.Hook = (FObjectKey)local_res10;
  }
  local_28.RootInstanceHandle = param_3->RootInstanceHandle;
  local_28.SequenceID.Value = param_2.Value;
  EVar1 = TPreAnimatedCaptureSources<UE::MovieScene::FPreAnimatedEvalHookKeyType>::
          BeginTrackingCaptureSource
                    ((TPreAnimatedCaptureSources<UE::MovieScene::FPreAnimatedEvalHookKeyType> *)this
                     ,&local_28,param_3);
  return EVar1;
}

// StopTrackingCaptureSource @ 1461d5750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedEvaluationHookCaptureSources::StopTrackingCaptureSource
          (FPreAnimatedEvaluationHookCaptureSources *this,UObject *param_1,
          FRootInstanceHandle param_2,FMovieSceneSequenceID param_3)

{
  FPreAnimatedStateExtension *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<UE::MovieScene::FPreAnimatedStateMetaData> FVar4;
  ForElementType<UE::MovieScene::FPreAnimatedStateMetaData> FVar5;
  uint uVar6;
  longlong lVar7;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  FPreAnimatedEvalHookKeyType local_48;
  
  local_48.Hook.ObjectIndex = 0;
  local_48.Hook.ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable(param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    local_48.Hook = (FObjectKey)local_res8;
  }
  local_48.RootInstanceHandle = param_2;
  local_48.SequenceID.Value = param_3.Value;
  FVar4 = (ForElementType<UE::MovieScene::FPreAnimatedStateMetaData>)
          TMapBase<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
          ::Find((TMapBase<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
                  *)&this->field_0x8,&local_48);
  if (FVar4 != (ForElementType<UE::MovieScene::FPreAnimatedStateMetaData>)0x0) {
    uVar6 = *(int *)((longlong)FVar4 + 0x20) - 1;
    if (-1 < (int)uVar6) {
      lVar7 = (longlong)(int)uVar6 * 0x14;
      do {
        this_00 = *(FPreAnimatedStateExtension **)&this->field_0x58;
        uVar3 = 0;
        if ((int)uVar6 < *(int *)((longlong)FVar4 + 0x20)) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FVar5 = FVar4;
        if (*(ForElementType<UE::MovieScene::FPreAnimatedStateMetaData> *)((longlong)FVar4 + 0x18)
            != (ForElementType<UE::MovieScene::FPreAnimatedStateMetaData>)0x0) {
          FVar5 = *(ForElementType<UE::MovieScene::FPreAnimatedStateMetaData> *)
                   ((longlong)FVar4 + 0x18);
        }
        FPreAnimatedStateExtension::RemoveMetaData
                  (this_00,(FPreAnimatedStateMetaData *)((longlong)FVar5 + lVar7));
        lVar7 = lVar7 + -0x14;
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
    TSet<TTuple<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::Remove((TSet<TTuple<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
              *)&this->field_0x8,&local_48);
  }
  return;
}

