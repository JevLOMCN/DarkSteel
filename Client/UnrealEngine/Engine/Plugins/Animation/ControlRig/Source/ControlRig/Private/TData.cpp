// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// AddTo @ 14a3e5ed0

void __thiscall
TBlendableToken<FControlRigTrackTokenFloat>::TData<float>::AddTo
          (TData<float> *this,TMaskedBlendable<float,1> *param_1,float param_2,
          EMovieSceneBlendType param_3,int param_4,
          TMovieSceneInitialValueStore<FControlRigTrackTokenFloat> *param_5)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_4 != -1) {
    iVar1 = param_4;
  }
  UE::MovieScene::BlendValue<float,float,FControlRigTrackTokenFloat,1>
            (param_1,this->Data,0,param_2,param_3,iVar1,param_5);
  return;
}

// AddTo @ 14a3e5f20

void __thiscall
TBlendableToken<FControlRigTrackTokenVector2D>::TData<UE::MovieScene::TMultiChannelValue<float,2>_>
::AddTo(TData<UE::MovieScene::TMultiChannelValue<float,2>_> *this,TMaskedBlendable<float,2> *param_1
       ,float param_2,EMovieSceneBlendType param_3,int param_4,
       TMovieSceneInitialValueStore<FControlRigTrackTokenVector2D> *param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined8 local_28;
  uint local_20;
  
  if (param_4 != -1) {
    UE::MovieScene::BlendValue<float,FControlRigTrackTokenVector2D,2>
              (param_1,&this->Data,param_2,param_3,param_4,param_5);
    return;
  }
  uVar3 = 0;
  local_28 = *(undefined8 *)(this->Data).Channels;
  local_20 = (this->Data).Mask;
  do {
    if (1 < (byte)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < N",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                         ,0x77,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((local_20 >> (uVar3 & 0x1f) & 1) != 0) {
      if (1 < (byte)uVar3) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < N && IsSet(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                           ,0x5d,L"Attempting to access an invalid channel.");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      UE::MovieScene::BlendValue<float,float,FControlRigTrackTokenVector2D,2>
                (param_1,*(float *)((longlong)&local_28 + (ulonglong)(uVar3 & 0xff) * 4),uVar3,
                 param_2,param_3,-1,param_5);
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 2);
  return;
}

// AddTo @ 14a3e6050

void __thiscall
TBlendableToken<FControlRigTrackTokenVector>::TData<UE::MovieScene::TMultiChannelValue<float,3>_>::
AddTo(TData<UE::MovieScene::TMultiChannelValue<float,3>_> *this,TMaskedBlendable<float,3> *param_1,
     float param_2,EMovieSceneBlendType param_3,int param_4,
     TMovieSceneInitialValueStore<FControlRigTrackTokenVector> *param_5)

{
  TMultiChannelValue<float,3> local_18;
  
  if (param_4 == -1) {
    local_18.Channels._0_8_ = *(undefined8 *)(this->Data).Channels;
    local_18._8_8_ = *(undefined8 *)((this->Data).Channels + 2);
    UE::MovieScene::BlendValue<float,FControlRigTrackTokenVector,3>
              (param_1,&local_18,param_2,param_3,-1,param_5);
    return;
  }
  UE::MovieScene::BlendValue<float,FControlRigTrackTokenVector,3>
            (param_1,&this->Data,param_2,param_3,param_4,param_5);
  return;
}

// AddTo @ 14a3e60b0

void __thiscall
TBlendableToken<FControlRigTrackTokenTransform>::TData<UE::MovieScene::TMultiChannelValue<float,9>_>
::AddTo(TData<UE::MovieScene::TMultiChannelValue<float,9>_> *this,TMaskedBlendable<float,9> *param_1
       ,float param_2,EMovieSceneBlendType param_3,int param_4,
       TMovieSceneInitialValueStore<FControlRigTrackTokenTransform> *param_5)

{
  TMultiChannelValue<float,9> local_38;
  
  if (param_4 == -1) {
    local_38.Channels._0_8_ = *(undefined8 *)(this->Data).Channels;
    local_38.Channels._8_8_ = *(undefined8 *)((this->Data).Channels + 2);
    local_38.Channels._16_8_ = *(undefined8 *)((this->Data).Channels + 4);
    local_38.Channels._24_8_ = *(undefined8 *)((this->Data).Channels + 6);
    local_38._32_8_ = *(undefined8 *)((this->Data).Channels + 8);
    UE::MovieScene::BlendValue<float,FControlRigTrackTokenTransform,9>
              (param_1,&local_38,param_2,param_3,-1,param_5);
    return;
  }
  UE::MovieScene::BlendValue<float,FControlRigTrackTokenTransform,9>
            (param_1,&this->Data,param_2,param_3,param_4,param_5);
  return;
}

