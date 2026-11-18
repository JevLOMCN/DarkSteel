// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// Execute_OnObjectBoundBySequencer @ 14605aa90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
IMovieSceneBindingEventReceiverInterface::Execute_OnObjectBoundBySequencer
          (UObject *param_1,UMovieSceneSequencePlayer *param_2,FMovieSceneObjectBindingID *param_3)

{
  bool bVar1;
  UClass *pUVar2;
  UMovieSceneSequencePlayer *pUVar3;
  UClass *pUVar4;
  UMovieSceneSequencePlayer **ppUVar5;
  code *pcVar6;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  UMovieSceneSequencePlayer *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  if ((param_1 == (UObject *)0x0) &&
     (bVar1 = ::FDebug::CheckVerifyFailedImpl2
                        ("O != 0",
                         "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\MovieScene\\UHT\\MovieSceneBindingEventReceiverInterface.gen.cpp"
                         ,0x25,L""), bVar1)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar4 = *(UClass **)&param_1->field_0x10;
  pUVar2 = UMovieSceneBindingEventReceiverInterface::StaticClass();
  bVar1 = UClass::ImplementsInterface(pUVar4,pUVar2);
  if ((!bVar1) &&
     (bVar1 = ::FDebug::CheckVerifyFailedImpl2
                        ("O->GetClass()->ImplementsInterface(UMovieSceneBindingEventReceiverInterface::StaticClass())"
                         ,
                         "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\MovieScene\\UHT\\MovieSceneBindingEventReceiverInterface.gen.cpp"
                         ,0x26,L""), bVar1)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0xffffffff00000000;
  pUVar3 = (UMovieSceneSequencePlayer *)
           UObject::FindFunction
                     (param_1,NAME_UMovieSceneBindingEventReceiverInterface_OnObjectBoundBySequencer
                     );
  if (pUVar3 == (UMovieSceneSequencePlayer *)0x0) {
    pUVar4 = UMovieSceneBindingEventReceiverInterface::StaticClass();
    param_1 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar4);
    if (param_1 == (UObject *)0x0) {
      return;
    }
    ppUVar5 = (UMovieSceneSequencePlayer **)&local_48;
    local_48 = (param_3->Guid).A;
    uStack_44 = (param_3->Guid).B;
    uStack_40 = (param_3->Guid).C;
    uStack_3c = (param_3->Guid).D;
    local_38._0_4_ = param_3->SequenceID;
    local_38._4_4_ = param_3->ResolveParentIndex;
    pcVar6 = *(code **)(*(longlong *)param_1 + 0x10);
    pUVar3 = param_2;
  }
  else {
    ppUVar5 = &local_28;
    local_20._0_4_ = (param_3->Guid).A;
    local_20._4_4_ = (param_3->Guid).B;
    uStack_18._0_4_ = (param_3->Guid).C;
    uStack_18._4_4_ = (param_3->Guid).D;
    local_10._0_4_ = param_3->SequenceID;
    local_10._4_4_ = param_3->ResolveParentIndex;
    pcVar6 = *(code **)(*(longlong *)param_1 + 0x260);
    local_28 = param_2;
  }
  (*pcVar6)(param_1,pUVar3,ppUVar5);
  return;
}

// Execute_OnObjectUnboundBySequencer @ 14605abd0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
IMovieSceneBindingEventReceiverInterface::Execute_OnObjectUnboundBySequencer
          (UObject *param_1,UMovieSceneSequencePlayer *param_2,FMovieSceneObjectBindingID *param_3)

{
  bool bVar1;
  UClass *pUVar2;
  UMovieSceneSequencePlayer *pUVar3;
  UClass *pUVar4;
  UMovieSceneSequencePlayer **ppUVar5;
  code *pcVar6;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  UMovieSceneSequencePlayer *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  if ((param_1 == (UObject *)0x0) &&
     (bVar1 = ::FDebug::CheckVerifyFailedImpl2
                        ("O != 0",
                         "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\MovieScene\\UHT\\MovieSceneBindingEventReceiverInterface.gen.cpp"
                         ,0x74,L""), bVar1)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar4 = *(UClass **)&param_1->field_0x10;
  pUVar2 = UMovieSceneBindingEventReceiverInterface::StaticClass();
  bVar1 = UClass::ImplementsInterface(pUVar4,pUVar2);
  if ((!bVar1) &&
     (bVar1 = ::FDebug::CheckVerifyFailedImpl2
                        ("O->GetClass()->ImplementsInterface(UMovieSceneBindingEventReceiverInterface::StaticClass())"
                         ,
                         "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\MovieScene\\UHT\\MovieSceneBindingEventReceiverInterface.gen.cpp"
                         ,0x75,L""), bVar1)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0xffffffff00000000;
  pUVar3 = (UMovieSceneSequencePlayer *)
           UObject::FindFunction
                     (param_1,
                      NAME_UMovieSceneBindingEventReceiverInterface_OnObjectUnboundBySequencer);
  if (pUVar3 == (UMovieSceneSequencePlayer *)0x0) {
    pUVar4 = UMovieSceneBindingEventReceiverInterface::StaticClass();
    param_1 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar4);
    if (param_1 == (UObject *)0x0) {
      return;
    }
    ppUVar5 = (UMovieSceneSequencePlayer **)&local_48;
    local_48 = (param_3->Guid).A;
    uStack_44 = (param_3->Guid).B;
    uStack_40 = (param_3->Guid).C;
    uStack_3c = (param_3->Guid).D;
    local_38._0_4_ = param_3->SequenceID;
    local_38._4_4_ = param_3->ResolveParentIndex;
    pcVar6 = *(code **)(*(longlong *)param_1 + 0x18);
    pUVar3 = param_2;
  }
  else {
    ppUVar5 = &local_28;
    local_20._0_4_ = (param_3->Guid).A;
    local_20._4_4_ = (param_3->Guid).B;
    uStack_18._0_4_ = (param_3->Guid).C;
    uStack_18._4_4_ = (param_3->Guid).D;
    local_10._0_4_ = param_3->SequenceID;
    local_10._4_4_ = param_3->ResolveParentIndex;
    pcVar6 = *(code **)(*(longlong *)param_1 + 0x260);
    local_28 = param_2;
  }
  (*pcVar6)(param_1,pUVar3,ppUVar5);
  return;
}

// OnObjectBoundBySequencer @ 14605c300

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IMovieSceneBindingEventReceiverInterface::OnObjectBoundBySequencer
          (IMovieSceneBindingEventReceiverInterface *this,UMovieSceneSequencePlayer *param_1,
          FMovieSceneObjectBindingID *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_OnObjectBoundBySequencer instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\MovieScene\\UHT\\MovieSceneBindingEventReceiverInterface.gen.cpp"
                     ,0x20,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnObjectUnboundBySequencer @ 14605c340

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IMovieSceneBindingEventReceiverInterface::OnObjectUnboundBySequencer
          (IMovieSceneBindingEventReceiverInterface *this,UMovieSceneSequencePlayer *param_1,
          FMovieSceneObjectBindingID *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_OnObjectUnboundBySequencer instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\MovieScene\\UHT\\MovieSceneBindingEventReceiverInterface.gen.cpp"
                     ,0x6f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// execOnObjectBoundBySequencer @ 14605edd0

void __cdecl
IMovieSceneBindingEventReceiverInterface::execOnObjectBoundBySequencer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_34 = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_18 = CONCAT44(uStack_34,local_38);
  local_28 = (undefined4)local_48;
  uStack_24 = local_48._4_4_;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,local_res8,&local_28);
  return;
}

// execOnObjectUnboundBySequencer @ 14605eed0

void __cdecl
IMovieSceneBindingEventReceiverInterface::execOnObjectUnboundBySequencer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_34 = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_18 = CONCAT44(uStack_34,local_38);
  local_28 = (undefined4)local_48;
  uStack_24 = local_48._4_4_;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,local_res8,&local_28);
  return;
}

