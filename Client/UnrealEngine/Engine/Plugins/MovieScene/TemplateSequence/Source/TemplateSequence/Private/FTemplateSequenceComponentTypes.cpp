// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 2

// FTemplateSequenceComponentTypes @ 14ac6fb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTemplateSequenceComponentTypes * __thiscall
UE::MovieScene::FTemplateSequenceComponentTypes::FTemplateSequenceComponentTypes
          (FTemplateSequenceComponentTypes *this)

{
  TComponentTypeID<UE::MovieScene::FTemplateSequenceComponentData> TVar1;
  TComponentTypeID<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> TVar2;
  TComponentTypeID<FGuid> TVar3;
  FComponentTypeID FVar4;
  FComponentRegistry *this_00;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined6 extraout_var_01;
  undefined6 extraout_var_02;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar5;
  undefined1 auStack_98 [32];
  wchar_t local_78 [4];
  undefined **local_70;
  TComponentTypeID<UE::MovieScene::FTemplateSequenceComponentData> local_68;
  TComponentTypeID<UE::MovieScene::FTemplateSequenceComponentData> local_66;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_60 [8];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this->TemplateSequence = (TComponentTypeID<UE::MovieScene::FTemplateSequenceComponentData>)0xffff;
  this->PropertyScale =
       (TComponentTypeID<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>)0xffff;
  this->PropertyScaleReverseBindingLookup = (TComponentTypeID<FGuid>)0xffff;
  this->Tags = (FComponentTypeID)0xffff;
  this_00 = UMovieSceneEntitySystemLinker::GetComponents();
  local_70 = (undefined **)0x0;
  local_68._0_1_ = 0;
  TVar1 = FComponentRegistry::NewComponentType<UE::MovieScene::FTemplateSequenceComponentData>
                    (this_00,local_78,(FNewComponentTypeParams *)L"Template Sequence");
  local_70 = (undefined **)0x0;
  local_68._0_1_ = 0;
  this->TemplateSequence =
       *(TComponentTypeID<UE::MovieScene::FTemplateSequenceComponentData> *)
        CONCAT62(extraout_var,TVar1);
  TVar2 = FComponentRegistry::
          NewComponentType<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
                    (this_00,local_78,(FNewComponentTypeParams *)L"Template Sequence Property Scale"
                    );
  local_70 = (undefined **)0x0;
  local_68 = (TComponentTypeID<UE::MovieScene::FTemplateSequenceComponentData>)
             ((ushort)(byte)local_68._1_1_ << 8);
  this->PropertyScale =
       *(TComponentTypeID<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> *)
        CONCAT62(extraout_var_00,TVar2);
  TVar3 = FComponentRegistry::NewComponentType<FGuid>
                    (this_00,local_78,
                     (FNewComponentTypeParams *)L"Property Scale Reverse Binding Lookup");
  local_68 = this->TemplateSequence;
  this->PropertyScaleReverseBindingLookup =
       *(TComponentTypeID<FGuid> *)CONCAT62(extraout_var_01,TVar3);
  local_70 = &
             ___7__TDuplicateChildEntityInitializer_UFTemplateSequenceComponentData_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_66 = local_68;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequenceComponentData>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_60,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequenceComponentData> *)
             &local_70);
  FEntityFactories::DefineChildComponent
            (&this_00->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_60);
  if ((local_20 & 1) != 0) {
    pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_60;
    if ((local_20 & 2) == 0) {
      pTVar5 = local_60[0];
    }
    local_20 = local_20 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar5->Data).Pad
                 )->Data).Pad)(pTVar5,0);
    if ((local_20 & 2) == 0) {
      FMemory::Free(local_60[0]);
    }
  }
  local_68 = *(TComponentTypeID<UE::MovieScene::FTemplateSequenceComponentData> *)
              &this->PropertyScale;
  local_70 = &
             ___7__TDuplicateChildEntityInitializer_UFTemplateSequencePropertyScaleComponentData_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_66 = local_68;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_60,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
              *)&local_70);
  FEntityFactories::DefineChildComponent
            (&this_00->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_60);
  if ((local_20 & 1) != 0) {
    pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_60;
    if ((local_20 & 2) == 0) {
      pTVar5 = local_60[0];
    }
    local_20 = local_20 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar5->Data).Pad
                 )->Data).Pad)(pTVar5,0);
    if ((local_20 & 2) == 0) {
      FMemory::Free(local_60[0]);
    }
  }
  FVar4 = FComponentRegistry::NewTag(this_00,local_78,0x20);
  (this->Tags).IsPropertyScaled.Value = *(ushort *)CONCAT62(extraout_var_02,FVar4.Value);
  return this;
}

// Get @ 14ac76e00

FTemplateSequenceComponentTypes * __cdecl UE::MovieScene::FTemplateSequenceComponentTypes::Get(void)

{
  TUniquePtr<UE::MovieScene::FTemplateSequenceComponentTypes,TDefaultDelete<UE::MovieScene::FTemplateSequenceComponentTypes>_>
  TVar1;
  FTemplateSequenceComponentTypes *pFVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::MovieScene::FTemplateSequenceComponentTypes::Get'::__l2::
             _dynamic_atexit_destructor_for__GTemplateSequenceComponentTypes__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (GTemplateSequenceComponentTypes.Ptr == (FTemplateSequenceComponentTypes *)0x0) {
    pFVar2 = ::operator_new(8);
    if (pFVar2 == (FTemplateSequenceComponentTypes *)0x0) {
      pFVar2 = (FTemplateSequenceComponentTypes *)0x0;
    }
    else {
      pFVar2 = FTemplateSequenceComponentTypes(pFVar2);
    }
    TVar1.Ptr = GTemplateSequenceComponentTypes.Ptr;
    if (GTemplateSequenceComponentTypes.Ptr != pFVar2) {
      GTemplateSequenceComponentTypes.Ptr = pFVar2;
      ::operator_delete(TVar1.Ptr,8);
    }
  }
  return GTemplateSequenceComponentTypes.Ptr;
}

