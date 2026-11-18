// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// FControlRigComponentTypes @ 14a3b5970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FControlRigComponentTypes * __thiscall
UE::MovieScene::FControlRigComponentTypes::FControlRigComponentTypes
          (FControlRigComponentTypes *this)

{
  TComponentTypeID<UE::MovieScene::FControlRigSourceData> TVar1;
  TComponentTypeID<UE::MovieScene::FBaseControlRigEvalData> TVar2;
  TComponentTypeID<FMovieSceneControlRigSpaceChannel_const_*> TVar3;
  TComponentTypeID<FMovieSceneControlRigSpaceBaseKey> TVar4;
  FComponentTypeID FVar5;
  TComponentTypeID<UE::MovieScene::FAccumulatedControlEntryIndex> TVar6;
  FComponentRegistry *this_00;
  FBuiltInComponentTypes *pFVar7;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined6 extraout_var_01;
  undefined6 extraout_var_02;
  undefined6 extraout_var_03;
  undefined6 extraout_var_04;
  undefined6 extraout_var_05;
  undefined6 extraout_var_06;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar8;
  undefined1 auStack_a8 [32];
  FComponentTypeID local_88;
  FComponentTypeID local_86 [7];
  undefined1 local_78 [8];
  undefined8 local_70;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this->ControlRigSource = (TComponentTypeID<UE::MovieScene::FControlRigSourceData>)0xffff;
  this->BaseControlRigEvalData = (TComponentTypeID<UE::MovieScene::FBaseControlRigEvalData>)0xffff;
  this->AccumulatedControlEntryIndex =
       (TComponentTypeID<UE::MovieScene::FAccumulatedControlEntryIndex>)0xffff;
  this->SpaceChannel = (TComponentTypeID<FMovieSceneControlRigSpaceChannel_const_*>)0xffff;
  (this->Tags).IgnoredBaseControlRig.Value = 0xffff;
  this->SpaceResult = (TComponentTypeID<FMovieSceneControlRigSpaceBaseKey>)0xffff;
  (this->Tags).BaseControlRig = 0xffff;
  (this->Tags).ControlRigParameter = 0xffff;
  (this->Tags).Space = 0xffff;
  this_00 = UMovieSceneEntitySystemLinker::GetComponents();
  pFVar7 = FBuiltInComponentTypes::Get();
  local_70 = (FComponentTypeID *)CONCAT71(local_70._1_7_,4);
  local_78 = (undefined1  [8])0x0;
  TVar1 = FComponentRegistry::NewComponentType<UE::MovieScene::FControlRigSourceData>
                    (this_00,(wchar_t *)&local_88,(FNewComponentTypeParams *)L"Control Rig Source");
  TVar1 = *(TComponentTypeID<UE::MovieScene::FControlRigSourceData> *)CONCAT62(extraout_var,TVar1);
  this->ControlRigSource = TVar1;
  local_70._0_4_ = CONCAT22(TVar1,TVar1);
  local_78 = (undefined1  [8])
             &
             ___7__TDuplicateChildEntityInitializer_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__6B_
  ;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FControlRigSourceData>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_68,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FControlRigSourceData> *)local_78);
  FEntityFactories::DefineChildComponent
            (&this_00->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_68);
  if ((local_28 & 1) != 0) {
    pTVar8 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_68;
    if ((local_28 & 2) == 0) {
      pTVar8 = local_68[0];
    }
    local_28 = local_28 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar8->Data).Pad
                 )->Data).Pad)(pTVar8,0);
    if ((local_28 & 2) == 0) {
      FMemory::Free(local_68[0]);
    }
  }
  local_88.Value = *(ushort *)&pFVar7->EvalSeconds;
  local_78 = (undefined1  [8])&local_88;
  local_70 = local_86;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_00->Factories,(FComponentTypeID)*(ushort *)&this->ControlRigSource,
             (initializer_list<UE::MovieScene::FComponentTypeID> *)local_78);
  local_78 = (undefined1  [8])0x0;
  local_70 = (FComponentTypeID *)((ulonglong)local_70 & 0xffffffffffffff00);
  TVar2 = FComponentRegistry::NewComponentType<UE::MovieScene::FBaseControlRigEvalData>
                    (this_00,(wchar_t *)&local_88,
                     (FNewComponentTypeParams *)L"Base Control Rig Eval Data");
  local_78 = (undefined1  [8])0x0;
  local_70 = (FComponentTypeID *)((ulonglong)local_70 & 0xffffffffffffff00);
  this->BaseControlRigEvalData =
       *(TComponentTypeID<UE::MovieScene::FBaseControlRigEvalData> *)CONCAT62(extraout_var_00,TVar2)
  ;
  TVar3 = FComponentRegistry::NewComponentType<FMovieSceneControlRigSpaceChannel_const_*>
                    (this_00,(wchar_t *)&local_88,(FNewComponentTypeParams *)L"Space Channel");
  local_78 = (undefined1  [8])0x0;
  local_70 = (FComponentTypeID *)((ulonglong)local_70 & 0xffffffffffffff00);
  this->SpaceChannel =
       *(TComponentTypeID<FMovieSceneControlRigSpaceChannel_const_*> *)
        CONCAT62(extraout_var_01,TVar3);
  TVar4 = FComponentRegistry::NewComponentType<FMovieSceneControlRigSpaceBaseKey>
                    (this_00,(wchar_t *)&local_88,(FNewComponentTypeParams *)L"Space Result");
  this->SpaceResult =
       *(TComponentTypeID<FMovieSceneControlRigSpaceBaseKey> *)CONCAT62(extraout_var_02,TVar4);
  local_88.Value = *(ushort *)&pFVar7->EvalTime;
  local_78 = (undefined1  [8])&local_88;
  local_70 = local_86;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_00->Factories,(FComponentTypeID)*(ushort *)&this->SpaceChannel,
             (initializer_list<UE::MovieScene::FComponentTypeID> *)local_78);
  local_88.Value = *(ushort *)&this->SpaceResult;
  local_78 = (undefined1  [8])&local_88;
  local_70 = local_86;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_00->Factories,(FComponentTypeID)*(ushort *)&this->SpaceChannel,
             (initializer_list<UE::MovieScene::FComponentTypeID> *)local_78);
  FVar5 = FComponentRegistry::NewTag(this_00,(wchar_t *)&local_88,0x38);
  (this->Tags).BaseControlRig.Value = *(ushort *)CONCAT62(extraout_var_03,FVar5.Value);
  FVar5 = FComponentRegistry::NewTag(this_00,(wchar_t *)&local_88,0x60);
  (this->Tags).Space.Value = *(ushort *)CONCAT62(extraout_var_04,FVar5.Value);
  FVar5 = FComponentRegistry::NewTag(this_00,(wchar_t *)&local_88,0x88);
  local_78 = (undefined1  [8])0x0;
  local_70 = (FComponentTypeID *)((ulonglong)local_70 & 0xffffffffffffff00);
  (this->Tags).ControlRigParameter.Value = *(ushort *)CONCAT62(extraout_var_05,FVar5.Value);
  TVar6 = FComponentRegistry::NewComponentType<UE::MovieScene::FAccumulatedControlEntryIndex>
                    (this_00,(wchar_t *)&local_88,
                     (FNewComponentTypeParams *)L"Accumulated Control Entry Index");
  FVar5.Value = (this->Tags).BaseControlRig.Value;
  local_78 = (undefined1  [8])&local_88;
  this->AccumulatedControlEntryIndex =
       *(TComponentTypeID<UE::MovieScene::FAccumulatedControlEntryIndex> *)
        CONCAT62(extraout_var_06,TVar6);
  local_88.Value = *(ushort *)&this->BaseControlRigEvalData;
  local_70 = local_86;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_00->Factories,FVar5,
             (initializer_list<UE::MovieScene::FComponentTypeID> *)local_78);
  return this;
}

// Destroy @ 14a402670

void __cdecl UE::MovieScene::FControlRigComponentTypes::Destroy(void)

{
  TUniquePtr<UE::MovieScene::FControlRigComponentTypes,TDefaultDelete<UE::MovieScene::FControlRigComponentTypes>_>
  TVar1;
  
  TVar1.Ptr = GControlRigComponentTypes.Ptr;
  if (GControlRigComponentTypes.Ptr != (FControlRigComponentTypes *)0x0) {
    GControlRigComponentTypes.Ptr = (FControlRigComponentTypes *)0x0;
    ::operator_delete(TVar1.Ptr,0x12);
  }
  GControlRigComponentTypesDestroyed = true;
  return;
}

// Get @ 14a410720

FControlRigComponentTypes * __cdecl UE::MovieScene::FControlRigComponentTypes::Get(void)

{
  code *pcVar1;
  TUniquePtr<UE::MovieScene::FControlRigComponentTypes,TDefaultDelete<UE::MovieScene::FControlRigComponentTypes>_>
  TVar2;
  bool bVar3;
  FControlRigComponentTypes *pFVar4;
  
  if (GControlRigComponentTypes.Ptr == (FControlRigComponentTypes *)0x0) {
    if (GControlRigComponentTypesDestroyed) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GControlRigComponentTypesDestroyed",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigComponentTypes.cpp"
                         ,0x19,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FControlRigComponentTypes *)(*pcVar1)();
        return pFVar4;
      }
    }
    pFVar4 = ::operator_new(0x12);
    if (pFVar4 == (FControlRigComponentTypes *)0x0) {
      pFVar4 = (FControlRigComponentTypes *)0x0;
    }
    else {
      pFVar4 = FControlRigComponentTypes(pFVar4);
    }
    TVar2.Ptr = GControlRigComponentTypes.Ptr;
    if (GControlRigComponentTypes.Ptr != pFVar4) {
      GControlRigComponentTypes.Ptr = pFVar4;
      ::operator_delete(TVar2.Ptr,0x12);
    }
  }
  return GControlRigComponentTypes.Ptr;
}

