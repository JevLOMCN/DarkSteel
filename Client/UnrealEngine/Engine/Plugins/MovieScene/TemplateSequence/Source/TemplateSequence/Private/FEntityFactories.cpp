// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 2

// DuplicateChildComponent<UE::MovieScene::FTemplateSequenceComponentData> @ 14ac67100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::
DuplicateChildComponent<UE::MovieScene::FTemplateSequenceComponentData>
          (FEntityFactories *this,
          TComponentTypeID<UE::MovieScene::FTemplateSequenceComponentData> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<UE::MovieScene::FTemplateSequenceComponentData> local_60;
  TComponentTypeID<UE::MovieScene::FTemplateSequenceComponentData> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &
             ___7__TDuplicateChildEntityInitializer_UFTemplateSequenceComponentData_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequenceComponentData>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequenceComponentData> *)
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

// DuplicateChildComponent<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> @ 14ac671a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::
DuplicateChildComponent<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
          (FEntityFactories *this,
          TComponentTypeID<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> local_60;
  TComponentTypeID<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &
             ___7__TDuplicateChildEntityInitializer_UFTemplateSequencePropertyScaleComponentData_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
              *)&local_68);
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

