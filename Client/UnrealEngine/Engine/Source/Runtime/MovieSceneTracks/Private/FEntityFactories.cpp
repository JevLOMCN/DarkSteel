// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// DuplicateChildComponent<UE::MovieScene::FAttachmentComponent> @ 1465b6ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<UE::MovieScene::FAttachmentComponent>
          (FEntityFactories *this,TComponentTypeID<UE::MovieScene::FAttachmentComponent> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<UE::MovieScene::FAttachmentComponent> local_60;
  TComponentTypeID<UE::MovieScene::FAttachmentComponent> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &
             ___7__TDuplicateChildEntityInitializer_UFAttachmentComponent_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FAttachmentComponent>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FAttachmentComponent> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<FConstraintComponentData> @ 1465b6b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<FConstraintComponentData>
          (FEntityFactories *this,TComponentTypeID<FConstraintComponentData> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<FConstraintComponentData> local_60;
  TComponentTypeID<FConstraintComponentData> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &___7__TDuplicateChildEntityInitializer_UFConstraintComponentData___MovieScene_UE__6B_;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FConstraintComponentData>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<FConstraintComponentData> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<FMovieSceneObjectBindingID> @ 1465b6bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<FMovieSceneObjectBindingID>
          (FEntityFactories *this,TComponentTypeID<FMovieSceneObjectBindingID> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<FMovieSceneObjectBindingID> local_60;
  TComponentTypeID<FMovieSceneObjectBindingID> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &
             ___7__TDuplicateChildEntityInitializer_UFMovieSceneObjectBindingID___MovieScene_UE__6B_
  ;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneObjectBindingID>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<FMovieSceneObjectBindingID> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<FMovieSceneSkeletalAnimationComponentData> @ 1465b6c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<FMovieSceneSkeletalAnimationComponentData>
          (FEntityFactories *this,
          TComponentTypeID<FMovieSceneSkeletalAnimationComponentData> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<FMovieSceneSkeletalAnimationComponentData> local_60;
  TComponentTypeID<FMovieSceneSkeletalAnimationComponentData> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &
             ___7__TDuplicateChildEntityInitializer_UFMovieSceneSkeletalAnimationComponentData___MovieScene_UE__6B_
  ;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneSkeletalAnimationComponentData>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<FMovieSceneSkeletalAnimationComponentData> *)
             &local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<FPerlinNoiseParams> @ 1465b6d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<FPerlinNoiseParams>
          (FEntityFactories *this,TComponentTypeID<FPerlinNoiseParams> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<FPerlinNoiseParams> local_60;
  TComponentTypeID<FPerlinNoiseParams> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &___7__TDuplicateChildEntityInitializer_UFPerlinNoiseParams___MovieScene_UE__6B_;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FPerlinNoiseParams>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<FPerlinNoiseParams> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

