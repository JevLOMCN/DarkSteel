// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// DuplicateChildComponent<UE::MovieScene::FControlRigSourceData> @ 14a3939a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<UE::MovieScene::FControlRigSourceData>
          (FEntityFactories *this,TComponentTypeID<UE::MovieScene::FControlRigSourceData> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<UE::MovieScene::FControlRigSourceData> local_60;
  TComponentTypeID<UE::MovieScene::FControlRigSourceData> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &
             ___7__TDuplicateChildEntityInitializer_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FControlRigSourceData>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FControlRigSourceData> *)&local_68);
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

