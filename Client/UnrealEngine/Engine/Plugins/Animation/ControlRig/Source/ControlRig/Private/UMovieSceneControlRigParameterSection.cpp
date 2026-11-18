// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 115

// StaticClass @ 14a379440

UClass * __cdecl UMovieSceneControlRigParameterSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneControlRigParameterSection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"MovieSceneControlRigParameterSection",
               &Z_Registration_Info_UClass_UMovieSceneControlRigParameterSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneControlRigParameterSection,0x470,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneControlRigParameterSection>,
               InternalVTableHelperCtorCaller<UMovieSceneControlRigParameterSection>,local_res8,
               UMovieSceneParameterSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneControlRigParameterSection.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14a3834c0

UObject * __cdecl
`UMovieSceneControlRigParameterSection::ImportEntityImpl'::__l11::<lambda_1>::<lambda_invoker_cdecl>
          (UObject *param_1)

{
  return (UObject *)0x0;
}

// ForEachParameter<FBoolParameterNameAndCurve> @ 14a399620

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::ForEachParameter<FBoolParameterNameAndCurve>
          (UMovieSceneControlRigParameterSection *this,
          TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_> *param_1,
          TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_38 [8];
  FScriptContainerElement *local_30;
  
  if (*(longlong *)param_2 != 0) {
    pFVar6 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    pFVar5 = pFVar6 + (longlong)iVar1 * 0x128;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FBoolParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_38);
      }
      if (pFVar6 == pFVar5) break;
      local_30 = pFVar6;
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar2 = *(code **)param_2;
      plVar4 = *(longlong **)&param_2->field_0x28;
      if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
        plVar4 = (longlong *)&param_2->field_0x10;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar2)(uVar3,&local_30);
      pFVar6 = pFVar6 + 0x128;
    }
    if (*(longlong *)param_2 != 0) {
      plVar4 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar4 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return;
}

// ForEachParameter<FEnumParameterNameAndCurve> @ 14a399700

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::ForEachParameter<FEnumParameterNameAndCurve>
          (UMovieSceneControlRigParameterSection *this,
          TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_> *param_1,
          TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_38 [8];
  FScriptContainerElement *local_30;
  
  if (*(longlong *)param_2 != 0) {
    pFVar6 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    pFVar5 = pFVar6 + (longlong)iVar1 * 0x130;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FEnumParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_38);
      }
      if (pFVar6 == pFVar5) break;
      local_30 = pFVar6;
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar2 = *(code **)param_2;
      plVar4 = *(longlong **)&param_2->field_0x28;
      if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
        plVar4 = (longlong *)&param_2->field_0x10;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar2)(uVar3,&local_30);
      pFVar6 = pFVar6 + 0x130;
    }
    if (*(longlong *)param_2 != 0) {
      plVar4 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar4 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return;
}

// ForEachParameter<FIntegerParameterNameAndCurve> @ 14a3997e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::ForEachParameter<FIntegerParameterNameAndCurve>
          (UMovieSceneControlRigParameterSection *this,
          TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_> *param_1,
          TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_38 [8];
  FScriptContainerElement *local_30;
  
  if (*(longlong *)param_2 != 0) {
    pFVar6 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    pFVar5 = pFVar6 + (longlong)iVar1 * 0x128;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FIntegerParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_38);
      }
      if (pFVar6 == pFVar5) break;
      local_30 = pFVar6;
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar2 = *(code **)param_2;
      plVar4 = *(longlong **)&param_2->field_0x28;
      if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
        plVar4 = (longlong *)&param_2->field_0x10;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar2)(uVar3,&local_30);
      pFVar6 = pFVar6 + 0x128;
    }
    if (*(longlong *)param_2 != 0) {
      plVar4 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar4 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return;
}

// ForEachParameter<FScalarParameterNameAndCurve> @ 14a3998c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::ForEachParameter<FScalarParameterNameAndCurve>
          (UMovieSceneControlRigParameterSection *this,
          TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_> *param_1,
          TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_38 [8];
  FScriptContainerElement *local_30;
  
  if (*(longlong *)param_2 != 0) {
    pFVar6 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    pFVar5 = pFVar6 + (longlong)iVar1 * 0x130;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FScalarParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_38);
      }
      if (pFVar6 == pFVar5) break;
      local_30 = pFVar6;
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar2 = *(code **)param_2;
      plVar4 = *(longlong **)&param_2->field_0x28;
      if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
        plVar4 = (longlong *)&param_2->field_0x10;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar2)(uVar3,&local_30);
      pFVar6 = pFVar6 + 0x130;
    }
    if (*(longlong *)param_2 != 0) {
      plVar4 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar4 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return;
}

// ForEachParameter<FTransformParameterNameAndCurves> @ 14a3999a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::ForEachParameter<FTransformParameterNameAndCurves>
          (UMovieSceneControlRigParameterSection *this,
          TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> *param_1,
          TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_38 [8];
  FScriptContainerElement *local_30;
  
  if (*(longlong *)param_2 != 0) {
    pFVar6 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    pFVar5 = pFVar6 + (longlong)iVar1 * 0xa70;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FTransformParameterNameAndCurves,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_38);
      }
      if (pFVar6 == pFVar5) break;
      local_30 = pFVar6;
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar2 = *(code **)param_2;
      plVar4 = *(longlong **)&param_2->field_0x28;
      if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
        plVar4 = (longlong *)&param_2->field_0x10;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar2)(uVar3,&local_30);
      pFVar6 = pFVar6 + 0xa70;
    }
    if (*(longlong *)param_2 != 0) {
      plVar4 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar4 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return;
}

// ForEachParameter<FVector2DParameterNameAndCurves> @ 14a399a80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::ForEachParameter<FVector2DParameterNameAndCurves>
          (UMovieSceneControlRigParameterSection *this,
          TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_> *param_1,
          TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_38 [8];
  FScriptContainerElement *local_30;
  
  if (*(longlong *)param_2 != 0) {
    pFVar6 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    pFVar5 = pFVar6 + (longlong)iVar1 * 600;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FVector2DParameterNameAndCurves,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_38);
      }
      if (pFVar6 == pFVar5) break;
      local_30 = pFVar6;
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar2 = *(code **)param_2;
      plVar4 = *(longlong **)&param_2->field_0x28;
      if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
        plVar4 = (longlong *)&param_2->field_0x10;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar2)(uVar3,&local_30);
      pFVar6 = pFVar6 + 600;
    }
    if (*(longlong *)param_2 != 0) {
      plVar4 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar4 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return;
}

// ForEachParameter<FVectorParameterNameAndCurves> @ 14a399b60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::ForEachParameter<FVectorParameterNameAndCurves>
          (UMovieSceneControlRigParameterSection *this,
          TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *param_1,
          TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_38 [8];
  FScriptContainerElement *local_30;
  
  if (*(longlong *)param_2 != 0) {
    pFVar6 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    pFVar5 = pFVar6 + (longlong)iVar1 * 0x380;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FVectorParameterNameAndCurves,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_38);
      }
      if (pFVar6 == pFVar5) break;
      local_30 = pFVar6;
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar2 = *(code **)param_2;
      plVar4 = *(longlong **)&param_2->field_0x28;
      if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
        plVar4 = (longlong *)&param_2->field_0x10;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar2)(uVar3,&local_30);
      pFVar6 = pFVar6 + 0x380;
    }
    if (*(longlong *)param_2 != 0) {
      plVar4 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar4 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return;
}

// UMovieSceneControlRigParameterSection @ 14a3b9890

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UMovieSceneControlRigParameterSection * __thiscall
UMovieSceneControlRigParameterSection::UMovieSceneControlRigParameterSection
          (UMovieSceneControlRigParameterSection *this,FVTableHelper *param_1)

{
  UMovieSceneParameterSection::UMovieSceneParameterSection
            ((UMovieSceneParameterSection *)this,param_1);
  IMovieSceneConstrainedSection::IMovieSceneConstrainedSection
            ((IMovieSceneConstrainedSection *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  *(undefined8 *)&this->OnSpaceChannelAdded = 0;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&___7UMovieSceneControlRigParameterSection__6B_;
  *(undefined8 *)&(this->OnSpaceChannelAdded).field_0x8 = 0;
  *(undefined8 *)&(this->OnSpaceChannelAdded).field_0x10 = 0;
  *(undefined8 *)&(this->OnSpaceChannelAdded).field_0x18 = 2;
  (this->ControlRig).field0_0x0.DebugPtr = (UControlRig *)0x0;
  (this->ControlRigClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ControlsMask).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControlsMask).ArrayNum = 0;
  (this->ControlsMask).ArrayMax = 0;
  *(undefined8 *)&(this->ControlNameMask).Elements = 0;
  *(undefined8 *)&(this->ControlNameMask).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ControlNameMask).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ControlNameMask).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ControlNameMask).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlNameMask).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControlNameMask).Elements.field_0x34 = 0;
  (this->ControlNameMask).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ControlNameMask).HashSize = 0;
  (this->TransformMask).Mask = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->Weight);
  *(undefined8 *)&this->ControlChannelMap = 0;
  *(undefined8 *)&(this->ControlChannelMap).field_0x8 = 0;
  *(undefined8 *)&(this->ControlChannelMap).field_0x20 = 0;
  *(undefined4 *)&(this->ControlChannelMap).field_0x28 = 0;
  *(undefined4 *)&(this->ControlChannelMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlChannelMap).field_0x34 = 0;
  *(undefined4 *)&(this->ControlChannelMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ControlChannelMap).field_0x40 = 0;
  *(undefined4 *)&(this->ControlChannelMap).field_0x48 = 0;
  (this->EnumParameterNamesAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnumParameterNamesAndCurves).ArrayNum = 0;
  (this->EnumParameterNamesAndCurves).ArrayMax = 0;
  (this->IntegerParameterNamesAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntegerParameterNamesAndCurves).ArrayNum = 0;
  (this->IntegerParameterNamesAndCurves).ArrayMax = 0;
  (this->SpaceChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpaceChannels).ArrayNum = 0;
  (this->SpaceChannels).ArrayMax = 0;
  (this->ConstraintsChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsChannels).ArrayNum = 0;
  (this->ConstraintsChannels).ArrayMax = 0;
  (this->OnOverrideAssetsChangedHandle).ID = 0;
  *(undefined8 *)&(this->ControlsToSet).Elements = 0;
  *(undefined8 *)&(this->ControlsToSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ControlsToSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ControlsToSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ControlsToSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlsToSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ControlsToSet).Elements.field_0x30 = 0xffffffff;
  (this->ControlsToSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ControlsToSet).HashSize = 0;
  (this->LastControlsUsedToReconstruct).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastControlsUsedToReconstruct).ArrayNum = 0;
  (this->LastControlsUsedToReconstruct).ArrayMax = 0;
  return this;
}

// UMovieSceneControlRigParameterSection @ 14a3b9a50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UMovieSceneControlRigParameterSection * __thiscall
UMovieSceneControlRigParameterSection::UMovieSceneControlRigParameterSection
          (UMovieSceneControlRigParameterSection *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FObjectInitializer *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UMovieSceneControlRigParameterSection *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> local_20;
  
  pFVar6 = FObjectInitializer::Get();
  UMovieSceneParameterSection::UMovieSceneParameterSection
            ((UMovieSceneParameterSection *)this,pFVar6);
  IMovieSceneConstrainedSection::IMovieSceneConstrainedSection
            ((IMovieSceneConstrainedSection *)&this->_padding_);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  *(undefined8 *)&this->OnSpaceChannelAdded = 0;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  *(undefined8 *)&(this->OnSpaceChannelAdded).field_0x8 = 0;
  this->_padding_ = (longlong)&___7UMovieSceneControlRigParameterSection__6B_;
  *(undefined8 *)&(this->OnSpaceChannelAdded).field_0x10 = 0;
  *(undefined8 *)&(this->OnSpaceChannelAdded).field_0x18 = 2;
  (this->ControlRig).field0_0x0.DebugPtr = (UControlRig *)0x0;
  (this->ControlRigClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ControlsMask).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControlsMask).ArrayNum = 0;
  (this->ControlsMask).ArrayMax = 0;
  *(undefined8 *)&(this->ControlNameMask).Elements = 0;
  *(undefined8 *)&(this->ControlNameMask).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ControlNameMask).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ControlNameMask).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ControlNameMask).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlNameMask).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControlNameMask).Elements.field_0x34 = 0;
  (this->ControlNameMask).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ControlNameMask).HashSize = 0;
  (this->TransformMask).Mask = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->Weight);
  *(undefined8 *)&this->ControlChannelMap = 0;
  *(undefined8 *)&(this->ControlChannelMap).field_0x8 = 0;
  *(undefined8 *)&(this->ControlChannelMap).field_0x20 = 0;
  *(undefined4 *)&(this->ControlChannelMap).field_0x28 = 0;
  *(undefined4 *)&(this->ControlChannelMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlChannelMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControlChannelMap).field_0x34 = 0;
  *(undefined8 *)&(this->ControlChannelMap).field_0x40 = 0;
  *(undefined4 *)&(this->ControlChannelMap).field_0x48 = 0;
  (this->EnumParameterNamesAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnumParameterNamesAndCurves).ArrayNum = 0;
  (this->EnumParameterNamesAndCurves).ArrayMax = 0;
  (this->IntegerParameterNamesAndCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntegerParameterNamesAndCurves).ArrayNum = 0;
  (this->IntegerParameterNamesAndCurves).ArrayMax = 0;
  (this->SpaceChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpaceChannels).ArrayNum = 0;
  (this->SpaceChannels).ArrayMax = 0;
  (this->ConstraintsChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsChannels).ArrayNum = 0;
  (this->ConstraintsChannels).ArrayMax = 0;
  (this->OnOverrideAssetsChangedHandle).ID = 0;
  *(undefined8 *)&(this->ControlsToSet).Elements = 0;
  *(undefined8 *)&(this->ControlsToSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ControlsToSet).Elements.field_0x20 = 0;
  this->bDoNotKey = false;
  *(undefined4 *)&(this->ControlsToSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ControlsToSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlsToSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControlsToSet).Elements.field_0x34 = 0;
  (this->ControlsToSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ControlsToSet).HashSize = 0;
  (this->LastControlsUsedToReconstruct).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastControlsUsedToReconstruct).ArrayNum = 0;
  (this->LastControlsUsedToReconstruct).ArrayMax = 0;
  (this->TransformMask).Mask = 0x1ff;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  (this->Weight).bHasDefaultValue = true;
  (this->Weight).DefaultValue = 1.0;
  pTVar7 = ::operator_new(0x68);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneFloatChannel>
              ((FMovieSceneChannelProxy *)(pTVar7 + 1),&this->Weight);
    pTVar10 = pTVar7 + 1;
    pTVar9 = pTVar7;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar8 = (UMovieSceneControlRigParameterSection *)(*pcVar4)();
        return pUVar8;
      }
      goto LAB_14a3b9d29;
    }
  }
  if (((pTVar10->_padding_ == 0) || (*(longlong *)&pTVar10->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar10->SharedReferenceCount + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar10->_padding_ = (longlong)pTVar10;
    if (pTVar9 != *(TReferenceControllerBase<1> **)&pTVar10->SharedReferenceCount) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar10->SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar10->SharedReferenceCount = pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_14a3b9d29:
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pTVar10;
  local_20.ReferenceController = pTVar9;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_28) {
    this->_padding_ = (longlong)pTVar10;
    local_28 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return this;
}

// ~UMovieSceneControlRigParameterSection @ 14a3bd120

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::~UMovieSceneControlRigParameterSection
          (UMovieSceneControlRigParameterSection *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&___7UMovieSceneControlRigParameterSection__6B_;
  pFVar1 = (this->LastControlsUsedToReconstruct).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ControlsToSet).HashSize = 0;
  FVar2 = (this->ControlsToSet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ControlsToSet).Elements);
  DestructItems<FConstraintAndActiveChannel,int>
            ((FConstraintAndActiveChannel *)(this->ConstraintsChannels).AllocatorInstance.Data,
             (this->ConstraintsChannels).ArrayNum);
  pFVar1 = (this->ConstraintsChannels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSpaceControlNameAndChannel,int>
            ((FSpaceControlNameAndChannel *)(this->SpaceChannels).AllocatorInstance.Data,
             (this->SpaceChannels).ArrayNum);
  pFVar1 = (this->SpaceChannels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FIntegerParameterNameAndCurve,int>
            ((FIntegerParameterNameAndCurve *)
             (this->IntegerParameterNamesAndCurves).AllocatorInstance.Data,
             (this->IntegerParameterNamesAndCurves).ArrayNum);
  pFVar1 = (this->IntegerParameterNamesAndCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FEnumParameterNameAndCurve,int>
            ((FEnumParameterNameAndCurve *)
             (this->EnumParameterNamesAndCurves).AllocatorInstance.Data,
             (this->EnumParameterNamesAndCurves).ArrayNum);
  pFVar1 = (this->EnumParameterNamesAndCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ControlChannelMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ControlChannelMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FChannelMapInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FChannelMapInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FChannelMapInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ControlChannelMap);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->Weight);
  (this->ControlNameMask).HashSize = 0;
  FVar2 = (this->ControlNameMask).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ControlNameMask).Elements);
  pFVar1 = (this->ControlsMask).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSpaceChannelAdded).field_0x8,*(int *)&(this->OnSpaceChannelAdded).field_0x10
            );
  pvVar3 = *(void **)&(this->OnSpaceChannelAdded).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSpaceChannelAdded);
  this->_padding_ = (longlong)&___7IMovieSceneConstrainedSection__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UMovieSceneParameterSection::~UMovieSceneParameterSection((UMovieSceneParameterSection *)this);
  return;
}

// operator() @ 14a3c0800

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FText * __thiscall
`UMovieSceneControlRigParameterSection::CacheChannelProxy'::__l8::<lambda_2>::operator()
          (void *this,FText *__return_storage_ptr__,FRigControlElement *param_1)

{
  FScriptContainerElement *_Src;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  uint uVar4;
  int iVar5;
  FText *pFVar6;
  FString *pFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  undefined1 local_res10 [8];
  FRigControlElement *local_res18 [2];
  FString local_68;
  FString local_58;
  FText local_48;
  
  local_res10 = (undefined1  [8])__return_storage_ptr__;
  local_res18[0] = param_1;
  pFVar6 = URigHierarchy::GetDisplayNameForUI
                     (*(URigHierarchy **)this,&local_48,(FRigBaseElement *)param_1,
                      *(EElementNameDisplayMode *)((longlong)this + 0x18));
  pFVar7 = FText::ToString(pFVar6);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  lVar10 = (longlong)local_68.Data.ArrayNum;
  _Src = (pFVar7->Data).AllocatorInstance.Data;
  if (local_68.Data.ArrayNum == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar10 * 2);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  pTVar1 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)((longlong)this + 8);
  iVar8 = local_68.Data.ArrayNum + -1;
  FVar11.Data = local_68.Data.AllocatorInstance.Data;
  if (local_68.Data.ArrayNum == 0) {
    iVar8 = 0;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar11.Data);
  iVar8 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (pTVar1,uVar4,&local_68);
  if (iVar8 != -1) {
    FVar11.Data = (FScriptContainerElement *)0x0;
    do {
      ::FString::PrintfImpl(&local_58,L"%s_%d");
      if ((ITextData *)FVar11.Data != (ITextData *)0x0) {
        FMemory::Free(FVar11.Data);
      }
      FVar11.Data = local_58.Data.AllocatorInstance.Data;
      pTVar1 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)
                ((longlong)this + 8);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0U) {
        FVar9.Data = local_58.Data.AllocatorInstance.Data;
      }
      local_48.TextData.Reference = (ITextData *)local_58.Data.AllocatorInstance.Data;
      iVar8 = local_58.Data.ArrayNum - 1;
      if (local_58.Data.ArrayNum == 0U) {
        iVar8 = 0;
      }
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Flags = local_58.Data.ArrayNum;
      local_48._12_4_ = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar9.Data);
      iVar5 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>(pTVar1,uVar4,(FString *)&local_48);
    } while (iVar5 != -1);
    ::FString::AssignRange(&local_68,(wchar_t *)FVar11.Data,iVar8);
    __return_storage_ptr__ = (FText *)local_res10;
    if ((ITextData *)FVar11.Data != (ITextData *)0x0) {
      FMemory::Free(FVar11.Data);
    }
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (*(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)((longlong)this + 8)
             ,(FString *)local_res10,(bool *)&local_68);
  FText::FromString(__return_storage_ptr__,&local_68);
  uVar4 = ((uint)((ulonglong)local_res18[0] >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_res18[0] >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  pFVar6 = TMapBase<FRigControlElement_const_*,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigControlElement_const_*,FText,0>_>
           ::FindOrAddImpl<FRigControlElement_const_*_const_&>
                     (*(TMapBase<FRigControlElement_const_*,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigControlElement_const_*,FText,0>_>
                        **)((longlong)this + 0x10),uVar4 >> 0x10 ^ uVar4,local_res18);
  pIVar2 = (__return_storage_ptr__->TextData).Reference;
  pIVar3 = (pFVar6->TextData).Reference;
  if (pIVar3 != pIVar2) {
    (pFVar6->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  pFVar6->Flags = __return_storage_ptr__->Flags;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AddBoolParameter @ 14a3da4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::AddBoolParameter
          (UMovieSceneControlRigParameterSection *this,FName param_1,TOptional<bool> param_2,
          bool param_3)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FName *pFVar10;
  FName *pFVar11;
  longlong lVar12;
  undefined6 in_register_00000082;
  FName local_res10;
  undefined1 auStack_1c8 [32];
  FName *local_1a8;
  FName *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  FName local_170;
  FMovieSceneBoolChannel local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  plVar2 = &this->_padding_;
  iVar3 = (int)this->_padding_;
  pFVar11 = (FName *)*plVar2;
  pFVar10 = pFVar11 + (longlong)iVar3 * 0x25;
  local_res10 = param_1;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      local_178[0] = 0;
      `TCheckedPointerIterator<FBoolParameterNameAndCurve_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_178);
    }
    if (pFVar11 == pFVar10) break;
    if (*pFVar11 == param_1) {
      return;
    }
    pFVar11 = pFVar11 + 0x25;
  }
  local_170 = param_1;
  FMovieSceneBoolChannel::FMovieSceneBoolChannel(&local_168);
  pFVar11 = (FName *)*plVar2;
  if ((pFVar11 <= &local_170) &&
     (lVar9 = (longlong)*(int *)((longlong)&this->_padding_ + 4),
     &local_170 < pFVar11 + lVar9 * 0x25)) {
    local_190 = (longlong)(int)this->_padding_;
    local_188 = 0x128;
    local_1a8 = &local_170;
    local_1a0 = pFVar11;
    local_198 = lVar9;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar7 = (uint)this->_padding_;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  if (uVar7 == *puVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x128,8,(ForAnyElementType *)plVar2,(int *)puVar1);
  }
  lVar9 = *plVar2;
  *(uint *)&this->_padding_ = uVar7 + 1;
  lVar12 = (longlong)(int)uVar7 * 0x128;
  *(FName *)(lVar9 + lVar12) = local_170;
  FMovieSceneBoolChannel::FMovieSceneBoolChannel
            ((FMovieSceneBoolChannel *)(lVar9 + lVar12 + 8),&local_168);
  FMovieSceneBoolChannel::~FMovieSceneBoolChannel(&local_168);
  iVar3 = (int)this->_padding_;
  uVar8 = 0;
  if ((int)uVar7 < iVar3) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (local_1a8 = (FName *)(longlong)(int)uVar7, local_1a0 = (FName *)(longlong)iVar3,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar9 = *plVar2;
  if (((undefined1 *)CONCAT62(in_register_00000082,param_2))[1] == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined1 *)CONCAT62(in_register_00000082,param_2);
  }
  *(undefined1 *)(lVar9 + lVar12 + 0x89) = 1;
  *(undefined1 *)(lVar9 + lVar12 + 0x88) = uVar6;
  if (*(int *)&(this->ControlNameMask).Elements.field_0x8 !=
      *(int *)&(this->ControlNameMask).Elements.field_0x34) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&this->ControlNameMask,(FName *)local_174,(bool *)&local_res10);
  }
  if (param_3) {
    (**(code **)(this->_padding_ + 0x3a8))(this);
  }
  return;
}

// AddColorParameter @ 14a3da800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::AddColorParameter
          (UMovieSceneControlRigParameterSection *this,FName param_1,
          TOptional<FLinearColor> *param_2,bool param_3)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  FColorParameterNameAndCurves *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FName *pFVar11;
  FName *pFVar12;
  float fVar13;
  FName local_res10;
  undefined1 auStack_548 [32];
  FColorParameterNameAndCurves *local_528;
  FColorParameterNameAndCurves *local_520;
  longlong local_518;
  longlong local_510;
  undefined8 local_508;
  undefined1 local_4f8 [4];
  undefined1 local_4f4 [4];
  FColorParameterNameAndCurves local_4f0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_548;
  plVar2 = &this->_padding_;
  iVar3 = (int)this->_padding_;
  pFVar11 = (FName *)*plVar2;
  pFVar12 = pFVar11 + (longlong)iVar3 * 0x95;
  local_res10 = param_1;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      local_4f8[0] = 0;
      `TCheckedPointerIterator<FColorParameterNameAndCurves_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_4f8);
    }
    if (pFVar11 == pFVar12) break;
    if (*pFVar11 == param_1) {
      return;
    }
    pFVar11 = pFVar11 + 0x95;
  }
  local_4f0._padding_ = (longlong)param_1;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_4f0.RedCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_4f0.GreenCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_4f0.BlueCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_4f0.AlphaCurve);
  pFVar4 = (FColorParameterNameAndCurves *)*plVar2;
  if ((pFVar4 <= &local_4f0) &&
     (lVar10 = (longlong)*(int *)((longlong)&this->_padding_ + 4), &local_4f0 < pFVar4 + lVar10)) {
    local_510 = (longlong)(int)this->_padding_;
    local_508 = 0x4a8;
    local_528 = &local_4f0;
    local_520 = pFVar4;
    local_518 = lVar10;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar8 = (uint)this->_padding_;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  if (uVar8 == *puVar1) {
    uVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x4a8,8,(ForAnyElementType *)plVar2,(int *)puVar1);
  }
  *(uint *)&this->_padding_ = uVar8 + 1;
  lVar10 = (longlong)(int)uVar8 * 0x4a8;
  FColorParameterNameAndCurves::FColorParameterNameAndCurves
            ((FColorParameterNameAndCurves *)(*plVar2 + lVar10),&local_4f0);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_4f0.AlphaCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_4f0.BlueCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_4f0.GreenCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_4f0.RedCurve);
  iVar3 = (int)this->_padding_;
  uVar9 = 0;
  if ((int)uVar8 < iVar3) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (local_528 = (FColorParameterNameAndCurves *)(longlong)(int)uVar8,
     local_520 = (FColorParameterNameAndCurves *)(longlong)iVar3,
     bVar7 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar7
     )) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar5 = *plVar2;
  if (param_2->bIsSet == false) {
    *(undefined1 *)(lVar5 + lVar10 + 0x9c) = 1;
    fVar13 = 0.0;
    *(undefined4 *)(lVar5 + lVar10 + 0x98) = 0;
    *(undefined1 *)(lVar5 + lVar10 + 0x1c4) = 1;
    *(undefined4 *)(lVar5 + lVar10 + 0x1c0) = 0;
    *(undefined1 *)(lVar5 + lVar10 + 0x2ec) = 1;
    *(undefined4 *)(lVar5 + lVar10 + 0x2e8) = 0;
  }
  else {
    *(float *)(lVar5 + lVar10 + 0x98) = (param_2->TypedValue).field0_0x0._s_0.R;
    *(undefined1 *)(lVar5 + lVar10 + 0x9c) = 1;
    if ((param_2->bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(float *)(lVar5 + lVar10 + 0x1c0) = (param_2->TypedValue).field0_0x0._s_0.G;
    *(undefined1 *)(lVar5 + lVar10 + 0x1c4) = 1;
    if ((param_2->bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(float *)(lVar5 + lVar10 + 0x2e8) = (param_2->TypedValue).field0_0x0._s_0.B;
    *(undefined1 *)(lVar5 + lVar10 + 0x2ec) = 1;
    if ((param_2->bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar13 = (param_2->TypedValue).field0_0x0._s_0.A;
  }
  *(undefined1 *)(lVar5 + lVar10 + 0x414) = 1;
  *(float *)(lVar5 + lVar10 + 0x410) = fVar13;
  if (*(int *)&(this->ControlNameMask).Elements.field_0x8 !=
      *(int *)&(this->ControlNameMask).Elements.field_0x34) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&this->ControlNameMask,(FName *)local_4f4,(bool *)&local_res10);
  }
  if (param_3) {
    (**(code **)(this->_padding_ + 0x3a8))(this);
  }
  return;
}

// AddConstraintChannel @ 14a3dab70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::AddConstraintChannel
          (UMovieSceneControlRigParameterSection *this,UTickableConstraint *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FMovieSceneBoolChannel *pFVar12;
  undefined1 auStack_1b8 [32];
  FMovieSceneBoolChannel *local_198;
  FMovieSceneBoolChannel *local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  FMovieSceneBoolChannel local_168;
  UTickableConstraint *local_48;
  ulonglong local_40;
  
  if (param_1 != (UTickableConstraint *)0x0) {
    local_40 = __security_cookie.value ^ (ulonglong)auStack_1b8;
    puVar3 = &this[-1].Weight.KeyHandles.field_0x18;
    cVar7 = (**(code **)(this->_padding_ + 0x10))(this,&param_1->ConstraintID);
    if (cVar7 == '\0') {
      plVar2 = &(this->Weight)._padding_;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FMovieSceneBoolChannel::FMovieSceneBoolChannel(&local_168);
      local_168._padding_ = (longlong)&___7FMovieSceneConstraintChannel__6B_;
      local_48 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      pFVar12 = (FMovieSceneBoolChannel *)*plVar2;
      if ((pFVar12 <= &local_168) &&
         (lVar11 = (longlong)*(int *)((longlong)&(this->Weight)._padding_ + 4),
         &local_168 < (FMovieSceneBoolChannel *)((longlong)pFVar12 + lVar11 * 0x128))) {
        local_180 = (longlong)(int)(this->Weight)._padding_;
        local_178 = 0x128;
        local_198 = &local_168;
        local_190 = pFVar12;
        local_188 = lVar11;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      uVar9 = (uint)(this->Weight)._padding_;
      puVar1 = (uint *)((longlong)&(this->Weight)._padding_ + 4);
      if (uVar9 == *puVar1) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x128,8,(ForAnyElementType *)plVar2,(int *)puVar1);
      }
      *(uint *)&(this->Weight)._padding_ = uVar9 + 1;
      lVar11 = (longlong)(int)uVar9 * 0x128;
      pFVar12 = (FMovieSceneBoolChannel *)(*plVar2 + lVar11);
      FMovieSceneBoolChannel::FMovieSceneBoolChannel(pFVar12,&local_168);
      pFVar12->_padding_ = (longlong)&___7FMovieSceneConstraintChannel__6B_;
      pFVar12[1]._padding_ = (longlong)local_48;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_48 != (UTickableConstraint *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_48);
      }
      FMovieSceneBoolChannel::~FMovieSceneBoolChannel(&local_168);
      iVar4 = (int)(this->Weight)._padding_;
      uVar10 = 0;
      if ((int)uVar9 < iVar4) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (local_198 = (FMovieSceneBoolChannel *)(longlong)(int)uVar9,
         local_190 = (FMovieSceneBoolChannel *)(longlong)iVar4,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *plVar2;
      (**(code **)(param_1->_padding_ + 0x170))(param_1,0,puVar3,0x10);
      plVar2 = &this->_padding_;
      bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar2);
      if (bVar8) {
        if (puVar3 == (undefined1 *)0x0) {
          this = (UMovieSceneControlRigParameterSection *)0x0;
        }
        TMulticastDelegate<void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
        ::Broadcast((TMulticastDelegate<void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
                     *)plVar2,(IMovieSceneConstrainedSection *)this,
                    (FMovieSceneConstraintChannel *)(lVar5 + lVar11));
      }
      (**(code **)(*(longlong *)puVar3 + 0x3a8))(puVar3);
    }
  }
  return;
}

// AddEnumParameter @ 14a3dddc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::AddEnumParameter
          (UMovieSceneControlRigParameterSection *this,FName param_1,UEnum *param_2,
          TOptional<unsigned_char> param_3,bool param_4)

{
  int *piVar1;
  TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FEnumParameterNameAndCurve *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FScriptContainerElement FVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FName *pFVar12;
  FName *pFVar13;
  undefined6 in_register_0000008a;
  FName local_res10 [2];
  undefined1 auStack_1c8 [32];
  FEnumParameterNameAndCurve *local_1a8;
  FEnumParameterNameAndCurve *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  FEnumParameterNameAndCurve local_170;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pTVar2 = &this->EnumParameterNamesAndCurves;
  iVar3 = (this->EnumParameterNamesAndCurves).ArrayNum;
  pFVar13 = (FName *)(pTVar2->AllocatorInstance).Data;
  pFVar12 = pFVar13 + (longlong)iVar3 * 0x26;
  local_res10[0] = param_1;
  while( true ) {
    if ((this->EnumParameterNamesAndCurves).ArrayNum != iVar3) {
      local_178[0] = 0;
      `TCheckedPointerIterator<FEnumParameterNameAndCurve_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_178);
    }
    if (pFVar13 == pFVar12) break;
    if (*pFVar13 == param_1) {
      return;
    }
    pFVar13 = pFVar13 + 0x26;
  }
  local_170._padding_ = (longlong)param_1;
  FMovieSceneByteChannel::FMovieSceneByteChannel(&local_170.ParameterCurve);
  pFVar4 = (FEnumParameterNameAndCurve *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= &local_170) &&
     (lVar11 = (longlong)(this->EnumParameterNamesAndCurves).ArrayMax, &local_170 < pFVar4 + lVar11)
     ) {
    local_190 = (longlong)(this->EnumParameterNamesAndCurves).ArrayNum;
    local_188 = 0x130;
    local_1a8 = &local_170;
    local_1a0 = pFVar4;
    local_198 = lVar11;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar9 = (this->EnumParameterNamesAndCurves).ArrayNum;
  piVar1 = &(this->EnumParameterNamesAndCurves).ArrayMax;
  if (uVar9 == *piVar1) {
    uVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x130,8,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->EnumParameterNamesAndCurves).ArrayNum = uVar9 + 1;
  lVar11 = (longlong)(int)uVar9 * 0x130;
  FEnumParameterNameAndCurve::FEnumParameterNameAndCurve
            ((FEnumParameterNameAndCurve *)((pTVar2->AllocatorInstance).Data + lVar11),&local_170);
  FMovieSceneByteChannel::~FMovieSceneByteChannel(&local_170.ParameterCurve);
  iVar3 = (this->EnumParameterNamesAndCurves).ArrayNum;
  uVar10 = 0;
  if ((int)uVar9 < iVar3) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (local_1a8 = (FEnumParameterNameAndCurve *)(longlong)(int)uVar9,
     local_1a0 = (FEnumParameterNameAndCurve *)(longlong)iVar3,
     bVar7 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar7
     )) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (((FScriptContainerElement *)CONCAT62(in_register_0000008a,param_3))[1] ==
      (FScriptContainerElement)0x0) {
    FVar8 = (FScriptContainerElement)0x0;
  }
  else {
    FVar8 = *(FScriptContainerElement *)CONCAT62(in_register_0000008a,param_3);
  }
  pFVar5[lVar11 + 0x89] = (FScriptContainerElement)0x1;
  pFVar5[lVar11 + 0x88] = FVar8;
  if (*(int *)&(this->ControlNameMask).Elements.field_0x8 !=
      *(int *)&(this->ControlNameMask).Elements.field_0x34) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&this->ControlNameMask,(FName *)local_174,(bool *)local_res10);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  *(UEnum **)(pFVar5 + lVar11 + 0xa0) = param_2;
  if (param_4) {
    (**(code **)(this->_padding_ + 0x3a8))(this);
  }
  return;
}

// AddEnumParameterKey @ 14a3de000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::AddEnumParameterKey
          (UMovieSceneControlRigParameterSection *this,FName param_1,FFrameNumber param_2,
          uchar param_3)

{
  int *piVar1;
  TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FEnumParameterNameAndCurve *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TRange<FFrameNumber> *pTVar9;
  longlong lVar10;
  FName *pFVar11;
  FName *pFVar12;
  FMovieSceneChannel *pFVar13;
  undefined1 auStack_218 [32];
  FEnumParameterNameAndCurve *local_1f8;
  FEnumParameterNameAndCurve *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined1 local_1c8 [4];
  TRange<FFrameNumber> local_1c4;
  undefined1 local_1b4 [4];
  TRange<FFrameNumber> local_1b0;
  TMovieSceneChannelData<unsigned_char> local_1a0;
  TRange<FFrameNumber> local_180;
  FEnumParameterNameAndCurve local_170;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_218;
  pTVar2 = &this->EnumParameterNamesAndCurves;
  iVar3 = (this->EnumParameterNamesAndCurves).ArrayNum;
  pFVar12 = (FName *)(pTVar2->AllocatorInstance).Data;
  pFVar11 = pFVar12 + (longlong)iVar3 * 0x26;
  while( true ) {
    if ((this->EnumParameterNamesAndCurves).ArrayNum != iVar3) {
      local_1c8[0] = 0;
      `TCheckedPointerIterator<FEnumParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1c8);
    }
    if (pFVar12 == pFVar11) goto LAB_14a3de082;
    if (*pFVar12 == param_1) break;
    pFVar12 = pFVar12 + 0x26;
  }
  pFVar13 = (FMovieSceneChannel *)(pFVar12 + 1);
  if (pFVar13 == (FMovieSceneChannel *)0x0) {
LAB_14a3de082:
    local_170._padding_ = (longlong)param_1;
    FMovieSceneByteChannel::FMovieSceneByteChannel(&local_170.ParameterCurve);
    pFVar4 = (FEnumParameterNameAndCurve *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar4 <= &local_170) &&
       (lVar10 = (longlong)(this->EnumParameterNamesAndCurves).ArrayMax,
       &local_170 < pFVar4 + lVar10)) {
      local_1e0 = (longlong)(this->EnumParameterNamesAndCurves).ArrayNum;
      local_1d8 = 0x130;
      local_1f8 = &local_170;
      local_1f0 = pFVar4;
      local_1e8 = lVar10;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar7 = (this->EnumParameterNamesAndCurves).ArrayNum;
    piVar1 = &(this->EnumParameterNamesAndCurves).ArrayMax;
    if (uVar7 == *piVar1) {
      uVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x130,8,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->EnumParameterNamesAndCurves).ArrayNum = uVar7 + 1;
    lVar10 = (longlong)(int)uVar7 * 0x130;
    FEnumParameterNameAndCurve::FEnumParameterNameAndCurve
              ((FEnumParameterNameAndCurve *)((pTVar2->AllocatorInstance).Data + lVar10),&local_170)
    ;
    FMovieSceneByteChannel::~FMovieSceneByteChannel(&local_170.ParameterCurve);
    iVar3 = (this->EnumParameterNamesAndCurves).ArrayNum;
    uVar8 = 0;
    if ((int)uVar7 < iVar3) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      local_1f8 = (FEnumParameterNameAndCurve *)(longlong)(int)uVar7;
      local_1f0 = (FEnumParameterNameAndCurve *)(longlong)iVar3;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar13 = (FMovieSceneChannel *)((pTVar2->AllocatorInstance).Data + lVar10 + 8);
    (**(code **)(this->_padding_ + 0x3a8))(this);
  }
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_1a0,pFVar13,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar13[1].KeyAddedEvent,
             (FKeyHandleLookupTable *)&pFVar13[1].KeyDeletedEvent.field_0x10);
  local_1a0.Values =
       (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pFVar13[1].KeyAddedEvent.field_0x18;
  if ((local_1a0._padding_ == 0) ||
     (local_1a0.Values == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  TMovieSceneChannelData<unsigned_char>::UpdateOrAddKey
            (&local_1a0,(FFrameNumber)(int)local_1b4,(uchar)param_2.Value);
  bVar6 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true);
  if (bVar6) {
    local_1b0.LowerBound = (TRangeBound<FFrameNumber>)this->_padding_;
    local_1b0.UpperBound = (TRangeBound<FFrameNumber>)this->_padding_;
    local_1c4.LowerBound.Type.Value = '\x01';
    pcVar5 = *(code **)(this->_padding_ + 0x2c8);
    local_1c4.UpperBound.Type.Value = '\x01';
    local_1c4.LowerBound.Value.Value = param_2.Value;
    local_1c4.UpperBound.Value.Value = param_2.Value;
    pTVar9 = TRange<FFrameNumber>::Hull(&local_180,&local_1c4,&local_1b0);
    (*pcVar5)(this,pTVar9);
  }
  return;
}

// AddIntegerParameter @ 14a3de890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::AddIntegerParameter
          (UMovieSceneControlRigParameterSection *this,FName param_1,TOptional<int> param_2,
          bool param_3)

{
  int *piVar1;
  TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FIntegerParameterNameAndCurve *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FName *pFVar11;
  undefined4 uVar12;
  FName *pFVar13;
  FName local_res10;
  undefined1 auStack_1c8 [32];
  FIntegerParameterNameAndCurve *local_1a8;
  FIntegerParameterNameAndCurve *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  FIntegerParameterNameAndCurve local_170;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pTVar2 = &this->IntegerParameterNamesAndCurves;
  iVar3 = (this->IntegerParameterNamesAndCurves).ArrayNum;
  pFVar13 = (FName *)(pTVar2->AllocatorInstance).Data;
  pFVar11 = pFVar13 + (longlong)iVar3 * 0x25;
  local_res10 = param_1;
  while( true ) {
    if ((this->IntegerParameterNamesAndCurves).ArrayNum != iVar3) {
      local_178[0] = 0;
      `TCheckedPointerIterator<FIntegerParameterNameAndCurve_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_178);
    }
    if (pFVar13 == pFVar11) break;
    if (*pFVar13 == param_1) {
      return;
    }
    pFVar13 = pFVar13 + 0x25;
  }
  local_170._padding_ = (longlong)param_1;
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&local_170.ParameterCurve);
  pFVar4 = (FIntegerParameterNameAndCurve *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= &local_170) &&
     (lVar10 = (longlong)(this->IntegerParameterNamesAndCurves).ArrayMax,
     &local_170 < pFVar4 + lVar10)) {
    local_190 = (longlong)(this->IntegerParameterNamesAndCurves).ArrayNum;
    local_188 = 0x128;
    local_1a8 = &local_170;
    local_1a0 = pFVar4;
    local_198 = lVar10;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar8 = (this->IntegerParameterNamesAndCurves).ArrayNum;
  piVar1 = &(this->IntegerParameterNamesAndCurves).ArrayMax;
  if (uVar8 == *piVar1) {
    uVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x128,8,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->IntegerParameterNamesAndCurves).ArrayNum = uVar8 + 1;
  lVar10 = (longlong)(int)uVar8 * 0x128;
  FIntegerParameterNameAndCurve::FIntegerParameterNameAndCurve
            ((FIntegerParameterNameAndCurve *)((pTVar2->AllocatorInstance).Data + lVar10),&local_170
            );
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&local_170.ParameterCurve);
  iVar3 = (this->IntegerParameterNamesAndCurves).ArrayNum;
  uVar12 = 0;
  uVar9 = 0;
  if ((int)uVar8 < iVar3) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (local_1a8 = (FIntegerParameterNameAndCurve *)(longlong)(int)uVar8,
     local_1a0 = (FIntegerParameterNameAndCurve *)(longlong)iVar3,
     bVar7 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar7
     )) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (*(char *)((longlong)param_2 + 4) != '\0') {
    uVar12 = *(undefined4 *)param_2;
  }
  pFVar5[lVar10 + 0x8c] = (FScriptContainerElement)0x1;
  *(undefined4 *)(pFVar5 + lVar10 + 0x88) = uVar12;
  if (*(int *)&(this->ControlNameMask).Elements.field_0x8 !=
      *(int *)&(this->ControlNameMask).Elements.field_0x34) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&this->ControlNameMask,(FName *)local_174,(bool *)&local_res10);
  }
  if (param_3) {
    (**(code **)(this->_padding_ + 0x3a8))(this);
  }
  return;
}

// AddIntegerParameterKey @ 14a3deab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::AddIntegerParameterKey
          (UMovieSceneControlRigParameterSection *this,FName param_1,FFrameNumber param_2,
          int param_3)

{
  int *piVar1;
  TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FIntegerParameterNameAndCurve *pFVar4;
  code *pcVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  TRange<FFrameNumber> *pTVar10;
  longlong lVar11;
  FName *pFVar12;
  FName *pFVar13;
  FMovieSceneChannel *pFVar14;
  UMovieSceneControlRigParameterSection *this_00;
  undefined1 auStack_228 [32];
  FIntegerParameterNameAndCurve *local_208;
  FIntegerParameterNameAndCurve *local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined1 local_1d8 [4];
  int local_1d4;
  UMovieSceneControlRigParameterSection *local_1d0;
  TRange<FFrameNumber> local_1c8;
  undefined1 local_1b8 [8];
  TMovieSceneChannelData<int> local_1b0;
  TRange<FFrameNumber> local_190;
  TRange<FFrameNumber> local_180;
  FIntegerParameterNameAndCurve local_170;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_228;
  pTVar2 = &this->IntegerParameterNamesAndCurves;
  iVar3 = (this->IntegerParameterNamesAndCurves).ArrayNum;
  pFVar13 = (FName *)(pTVar2->AllocatorInstance).Data;
  pFVar12 = pFVar13 + (longlong)iVar3 * 0x25;
  local_1d4 = param_3;
  local_1d0 = this;
  while( true ) {
    if ((this->IntegerParameterNamesAndCurves).ArrayNum != iVar3) {
      local_1d8[0] = 0;
      `TCheckedPointerIterator<FIntegerParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1d8);
    }
    if (pFVar13 == pFVar12) goto LAB_14a3deb3c;
    if (*pFVar13 == param_1) break;
    pFVar13 = pFVar13 + 0x25;
  }
  pFVar14 = (FMovieSceneChannel *)(pFVar13 + 1);
  this_00 = local_1d0;
  if (pFVar14 == (FMovieSceneChannel *)0x0) {
LAB_14a3deb3c:
    local_170._padding_ = (longlong)param_1;
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&local_170.ParameterCurve);
    pFVar4 = (FIntegerParameterNameAndCurve *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar4 <= &local_170) &&
       (lVar11 = (longlong)(this->IntegerParameterNamesAndCurves).ArrayMax,
       &local_170 < pFVar4 + lVar11)) {
      local_1f0 = (longlong)(this->IntegerParameterNamesAndCurves).ArrayNum;
      local_1e8 = 0x128;
      local_208 = &local_170;
      local_200 = pFVar4;
      local_1f8 = lVar11;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar8 = (this->IntegerParameterNamesAndCurves).ArrayNum;
    piVar1 = &(this->IntegerParameterNamesAndCurves).ArrayMax;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x128,8,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->IntegerParameterNamesAndCurves).ArrayNum = uVar8 + 1;
    lVar11 = (longlong)(int)uVar8 * 0x128;
    FIntegerParameterNameAndCurve::FIntegerParameterNameAndCurve
              ((FIntegerParameterNameAndCurve *)((pTVar2->AllocatorInstance).Data + lVar11),
               &local_170);
    FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&local_170.ParameterCurve);
    iVar3 = (this->IntegerParameterNamesAndCurves).ArrayNum;
    uVar9 = 0;
    if ((int)uVar8 < iVar3) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (local_208 = (FIntegerParameterNameAndCurve *)(longlong)(int)uVar8,
       local_200 = (FIntegerParameterNameAndCurve *)(longlong)iVar3,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = local_1d0;
    pFVar14 = (FMovieSceneChannel *)((pTVar2->AllocatorInstance).Data + lVar11 + 8);
    (**(code **)(local_1d0->_padding_ + 0x3a8))(local_1d0);
  }
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_1b0,pFVar14,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar14[1].KeyAddedEvent,
             (FKeyHandleLookupTable *)&pFVar14[1].KeyDeletedEvent.field_0x8);
  local_1b0.Values = (TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar14[1].KeyAddedEvent.field_0x18
  ;
  if (((local_1b0._padding_ == 0) ||
      (local_1b0.Values == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)&local_1b0,param_2,(FFrameNumber)0x0);
  pTVar6 = local_1b0.Values;
  if (uVar8 == 0xffffffff) {
    TMovieSceneChannelData<int>::AddKey(&local_1b0,param_2,local_1d4);
  }
  else {
    uVar9 = 0;
    if ((int)uVar8 < (local_1b0.Values)->ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (local_208 = (FIntegerParameterNameAndCurve *)(longlong)(int)uVar8,
       local_200 = (FIntegerParameterNameAndCurve *)(longlong)(local_1b0.Values)->ArrayNum,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(int *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar8 * 4) = local_1d4;
  }
  FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_1b0,(int)local_1b8);
  bVar7 = UMovieSceneSection::TryModify((UMovieSceneSection *)this_00,true);
  if (bVar7) {
    local_190.LowerBound = (TRangeBound<FFrameNumber>)this_00->_padding_;
    local_190.UpperBound = (TRangeBound<FFrameNumber>)this_00->_padding_;
    local_1c8.LowerBound.Type.Value = '\x01';
    pcVar5 = *(code **)(this_00->_padding_ + 0x2c8);
    local_1c8.UpperBound.Type.Value = '\x01';
    local_1c8.LowerBound.Value.Value = param_2.Value;
    local_1c8.UpperBound.Value.Value = param_2.Value;
    pTVar10 = TRange<FFrameNumber>::Hull(&local_180,&local_1c8,&local_190);
    (*pcVar5)(this_00,pTVar10);
  }
  return;
}

// AddScalarParameter @ 14a3e4800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::AddScalarParameter
          (UMovieSceneControlRigParameterSection *this,FName param_1,TOptional<float> param_2,
          bool param_3)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FName *pFVar9;
  FName *pFVar10;
  longlong lVar11;
  undefined4 uVar12;
  FName local_res10;
  undefined1 auStack_1c8 [32];
  FName *local_1a8;
  FName *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  FName local_170;
  FMovieSceneFloatChannel local_168;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  plVar2 = &this->_padding_;
  iVar3 = (int)this->_padding_;
  pFVar10 = (FName *)*plVar2;
  pFVar9 = pFVar10 + (longlong)iVar3 * 0x26;
  local_res10 = param_1;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      local_178[0] = 0;
      `TCheckedPointerIterator<FScalarParameterNameAndCurve_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_178);
    }
    if (pFVar10 == pFVar9) break;
    if (*pFVar10 == param_1) {
      return;
    }
    pFVar10 = pFVar10 + 0x26;
  }
  local_170 = param_1;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_168);
  pFVar10 = (FName *)*plVar2;
  if ((pFVar10 <= &local_170) &&
     (lVar8 = (longlong)*(int *)((longlong)&this->_padding_ + 4),
     &local_170 < pFVar10 + lVar8 * 0x26)) {
    local_190 = (longlong)(int)this->_padding_;
    local_188 = 0x130;
    local_1a8 = &local_170;
    local_1a0 = pFVar10;
    local_198 = lVar8;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar6 = (uint)this->_padding_;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  if (uVar6 == *puVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x130,8,(ForAnyElementType *)plVar2,(int *)puVar1);
  }
  lVar8 = *plVar2;
  *(uint *)&this->_padding_ = uVar6 + 1;
  lVar11 = (longlong)(int)uVar6 * 0x130;
  *(FName *)(lVar8 + lVar11) = local_170;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)(lVar8 + lVar11 + 8),&local_168);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_168);
  iVar3 = (int)this->_padding_;
  uVar7 = 0;
  if ((int)uVar6 < iVar3) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (local_1a8 = (FName *)(longlong)(int)uVar6, local_1a0 = (FName *)(longlong)iVar3,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar8 = *plVar2;
  if (*(char *)((longlong)param_2 + 4) == '\0') {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined4 *)param_2;
  }
  *(undefined1 *)(lVar8 + lVar11 + 0x9c) = 1;
  *(undefined4 *)(lVar8 + lVar11 + 0x98) = uVar12;
  if (*(int *)&(this->ControlNameMask).Elements.field_0x8 !=
      *(int *)&(this->ControlNameMask).Elements.field_0x34) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&this->ControlNameMask,(FName *)local_174,(bool *)&local_res10);
  }
  if (param_3) {
    (**(code **)(this->_padding_ + 0x3a8))(this);
  }
  return;
}

// AddSpaceChannel @ 14a3e4bb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::AddSpaceChannel
          (UMovieSceneControlRigParameterSection *this,FName param_1,bool param_2)

{
  int *piVar1;
  TArray<FSpaceControlNameAndChannel,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 uVar3;
  UControlRig *pUVar4;
  URigHierarchy *this_00;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  bool bVar10;
  int iVar11;
  UClass *pUVar12;
  UObject *pUVar13;
  undefined8 *puVar14;
  FChannelMapInfo *pFVar15;
  longlong lVar16;
  FRigElementKey *pFVar17;
  FRigElementKey *pFVar18;
  FName *pFVar19;
  FName *pFVar20;
  FName local_res10 [2];
  undefined1 local_res20 [8];
  FRigElementKey local_98;
  FRigElementKey local_88;
  FRigElementKey local_78;
  FRigElementKey local_68;
  FRigElementKey local_5c;
  FNameEntryId local_50;
  FNameEntryId FStack_4c;
  uint uStack_48;
  uint uStack_44;
  
  local_res10[0] = param_1;
  pUVar12 = UMovieSceneControlRigParameterTrack::StaticClass();
  pUVar13 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar12);
  if (pUVar13 != (UObject *)0x0) {
    puVar14 = (undefined8 *)(**(code **)(*(longlong *)pUVar13 + 0x360))(pUVar13);
    if (*(int *)(puVar14 + 1) != 0) {
      if ((*(int *)(puVar14 + 1) < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(UMovieSceneControlRigParameterSection **)*puVar14 == this) {
        pFVar15 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                  ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                          *)&this->ControlChannelMap,local_res10[0]);
        FVar6 = local_res10[0];
        if ((pFVar15 != (FChannelMapInfo *)0x0) && (pFVar15->ParentControlIndex == -1)) {
          pTVar2 = &this->SpaceChannels;
          pFVar19 = (FName *)(pTVar2->AllocatorInstance).Data;
          iVar11 = (this->SpaceChannels).ArrayNum;
          pFVar20 = pFVar19 + (longlong)iVar11 * 0x2a;
          while( true ) {
            if ((this->SpaceChannels).ArrayNum != iVar11) {
              `TCheckedPointerIterator<FSpaceControlNameAndChannel_const_,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(local_res20);
            }
            if (pFVar19 == pFVar20) break;
            if (*pFVar19 == FVar6) goto LAB_14a3e4e4a;
            pFVar19 = pFVar19 + 0x2a;
          }
          iVar11 = (this->SpaceChannels).ArrayNum;
          piVar1 = &(this->SpaceChannels).ArrayMax;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x150,8,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->SpaceChannels).ArrayNum = iVar11 + 1;
          pFVar19 = (FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x150);
          *pFVar19 = local_res10[0];
          FMovieSceneControlRigSpaceChannel::FMovieSceneControlRigSpaceChannel
                    ((FMovieSceneControlRigSpaceChannel *)(pFVar19 + 1));
          pUVar4 = (this->ControlRig).field0_0x0.DebugPtr;
          if ((pUVar4 != (UControlRig *)0x0) &&
             (lVar16 = (**(code **)(pUVar4->_padding_ + 0x3c8))(pUVar4,local_res10), lVar16 != 0)) {
            pFVar18 = (FRigElementKey *)(lVar16 + 0x10);
            this_00 = (((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).field0_0x0.
                      DebugPtr;
            URigHierarchy::GetActiveParent(this_00,&local_98,pFVar18,true);
            pFVar17 = URigHierarchy::GetDefaultParentKey(&local_68);
            FVar6.Number = local_98.Name.Number;
            FVar6.ComparisonIndex.Value = local_98.Name.ComparisonIndex.Value;
            if ((FVar6 == pFVar17->Name) && (local_98.Type == pFVar17->Type)) {
              local_88.Type = pFVar18->Type;
              local_88._1_3_ = *(undefined3 *)&pFVar18->field_0x1;
              local_88.Name.ComparisonIndex.Value = (pFVar18->Name).ComparisonIndex.Value;
              local_88.Name.Number = *(uint *)(lVar16 + 0x18);
              pFVar17 = URigHierarchy::GetDefaultParent(this_00,&local_5c,&local_88);
              uVar3._0_1_ = pFVar17->Type;
              uVar3._1_3_ = *(undefined3 *)&pFVar17->field_0x1;
              uVar3._4_4_ = (pFVar17->Name).ComparisonIndex;
              local_98._0_4_ = SUB84(uVar3,0);
              local_98.Name.Number = (pFVar17->Name).Number;
              local_98.Name.ComparisonIndex.Value = uVar3._4_4_;
            }
            local_78.Type = pFVar18->Type;
            local_78._1_3_ = *(undefined3 *)&pFVar18->field_0x1;
            local_78.Name.ComparisonIndex.Value = (pFVar18->Name).ComparisonIndex.Value;
            local_78.Name.Number = *(uint *)(lVar16 + 0x18);
            pFVar18 = URigHierarchy::GetFirstParent(this_00,(FRigElementKey *)&local_50,&local_78);
            FVar7.Number = local_98.Name.Number;
            FVar7.ComparisonIndex.Value = local_98.Name.ComparisonIndex.Value;
            if ((FVar7 != pFVar18->Name) || (local_98.Type != pFVar18->Type)) {
              FStack_4c.Value = local_98._0_4_;
              uStack_48 = local_98.Name.ComparisonIndex.Value;
              local_50.Value._0_1_ = 2;
              uStack_44 = local_98.Name.Number;
              FVar8.Number = local_98._0_4_;
              FVar8.ComparisonIndex.Value = local_50.Value;
              FVar9.Number = local_98.Name.Number;
              FVar9.ComparisonIndex.Value = local_98.Name.ComparisonIndex.Value;
              *(undefined1 *)&pFVar19[0x29].ComparisonIndex.Value = 1;
              pFVar19[0x27] = FVar8;
              pFVar19[0x28] = FVar9;
            }
          }
          bVar10 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                             ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                              &this->OnSpaceChannelAdded);
          if (bVar10) {
            TMulticastDelegate<void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
            ::Broadcast(&this->OnSpaceChannelAdded,this,local_res10,
                        (FMovieSceneControlRigSpaceChannel *)(pFVar19 + 1));
          }
        }
LAB_14a3e4e4a:
        if (param_2) {
          (**(code **)(this->_padding_ + 0x3a8))(this);
        }
      }
    }
  }
  return;
}

// AddTransformParameter @ 14a3e6cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::AddTransformParameter
          (UMovieSceneControlRigParameterSection *this,FName param_1,
          TOptional<FEulerTransform> *param_2,bool param_3)

{
  uint *puVar1;
  longlong *plVar2;
  double dVar3;
  undefined2 uVar4;
  int iVar5;
  FTransformParameterNameAndCurves *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FName *pFVar13;
  FName *pFVar14;
  FName local_res10;
  undefined1 auStack_b08 [32];
  FTransformParameterNameAndCurves *local_ae8;
  FTransformParameterNameAndCurves *local_ae0;
  longlong local_ad8;
  longlong local_ad0;
  undefined8 local_ac8;
  undefined1 local_ab8;
  char local_ab7;
  undefined1 local_ab4 [4];
  FTransformParameterNameAndCurves local_ab0;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_b08;
  plVar2 = &this->_padding_;
  iVar5 = (int)this->_padding_;
  pFVar13 = (FName *)*plVar2;
  pFVar14 = pFVar13 + (longlong)iVar5 * 0x14e;
  local_res10 = param_1;
  local_ab7 = param_3;
  while( true ) {
    if ((int)this->_padding_ != iVar5) {
      local_ab8 = 0;
      `TCheckedPointerIterator<FTransformParameterNameAndCurves_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_ab8);
    }
    if (pFVar13 == pFVar14) break;
    if (*pFVar13 == param_1) {
      return;
    }
    pFVar13 = pFVar13 + 0x14e;
  }
  local_ab0._padding_ = (longlong)param_1;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_ab0.Translation);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_ab0.Translation + 1);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_ab0.Translation + 2);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_ab0.Rotation);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_ab0.Rotation + 1);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_ab0.Rotation + 2);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_ab0.Scale);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_ab0.Scale + 1);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_ab0.Scale + 2);
  pFVar6 = (FTransformParameterNameAndCurves *)*plVar2;
  if ((pFVar6 <= &local_ab0) &&
     (lVar12 = (longlong)*(int *)((longlong)&this->_padding_ + 4), &local_ab0 < pFVar6 + lVar12)) {
    local_ad0 = (longlong)(int)this->_padding_;
    local_ac8 = 0xa70;
    local_ae8 = &local_ab0;
    local_ae0 = pFVar6;
    local_ad8 = lVar12;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar10 = (uint)this->_padding_;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  if (uVar10 == *puVar1) {
    uVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xa70,8,(ForAnyElementType *)plVar2,(int *)puVar1);
  }
  *(uint *)&this->_padding_ = uVar10 + 1;
  lVar12 = (longlong)(int)uVar10 * 0xa70;
  FTransformParameterNameAndCurves::FTransformParameterNameAndCurves
            ((FTransformParameterNameAndCurves *)(*plVar2 + lVar12),&local_ab0);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_ab0.Scale + 2);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_ab0.Scale + 1);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_ab0.Scale);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_ab0.Rotation + 2);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_ab0.Rotation + 1);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_ab0.Rotation);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_ab0.Translation + 2);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_ab0.Translation + 1);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_ab0.Translation);
  iVar5 = (int)this->_padding_;
  uVar11 = 0;
  if ((int)uVar10 < iVar5) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (local_ae8 = (FTransformParameterNameAndCurves *)(longlong)(int)uVar10,
     local_ae0 = (FTransformParameterNameAndCurves *)(longlong)iVar5,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar7 = *plVar2;
  if (param_2->bIsSet == false) {
    uVar4 = *(undefined2 *)((longlong)&this->_padding_ + 1);
    if (((char)((ushort)uVar4 >> 8) == '\0') || ((char)uVar4 != '\x02')) goto LAB_14a3e70fd;
    *(undefined1 *)(lVar7 + lVar12 + 0x9c) = 1;
    *(undefined4 *)(lVar7 + lVar12 + 0x98) = 0;
    *(undefined1 *)(lVar7 + lVar12 + 0x1c4) = 1;
    *(undefined4 *)(lVar7 + lVar12 + 0x1c0) = 0;
    *(undefined1 *)(lVar7 + lVar12 + 0x2ec) = 1;
    *(undefined4 *)(lVar7 + lVar12 + 0x2e8) = 0;
    *(undefined1 *)(lVar7 + lVar12 + 0x414) = 1;
    *(undefined4 *)(lVar7 + lVar12 + 0x410) = 0;
    *(undefined1 *)(lVar7 + lVar12 + 0x53c) = 1;
    *(undefined4 *)(lVar7 + lVar12 + 0x538) = 0;
    *(undefined1 *)(lVar7 + lVar12 + 0x664) = 1;
    *(undefined4 *)(lVar7 + lVar12 + 0x660) = 0;
    *(undefined1 *)(lVar7 + lVar12 + 0x78c) = 1;
    *(undefined4 *)(lVar7 + lVar12 + 0x788) = 0;
    *(undefined1 *)(lVar7 + lVar12 + 0x8b4) = 1;
    *(undefined4 *)(lVar7 + lVar12 + 0x8b0) = 0;
    *(undefined4 *)(lVar7 + lVar12 + 0x9d8) = 0;
  }
  else {
    dVar3 = (param_2->TypedValue).Location.field0_0x0._s_0.X;
    *(undefined1 *)(lVar7 + lVar12 + 0x9c) = 1;
    *(float *)(lVar7 + lVar12 + 0x98) = (float)dVar3;
    dVar3 = (param_2->TypedValue).Location.field0_0x0._s_0.Y;
    *(undefined1 *)(lVar7 + lVar12 + 0x1c4) = 1;
    *(float *)(lVar7 + lVar12 + 0x1c0) = (float)dVar3;
    dVar3 = (param_2->TypedValue).Location.field0_0x0._s_0.Z;
    *(undefined1 *)(lVar7 + lVar12 + 0x2ec) = 1;
    *(float *)(lVar7 + lVar12 + 0x2e8) = (float)dVar3;
    dVar3 = (param_2->TypedValue).Rotation.Roll;
    *(undefined1 *)(lVar7 + lVar12 + 0x414) = 1;
    *(float *)(lVar7 + lVar12 + 0x410) = (float)dVar3;
    dVar3 = (param_2->TypedValue).Rotation.Pitch;
    *(undefined1 *)(lVar7 + lVar12 + 0x53c) = 1;
    *(float *)(lVar7 + lVar12 + 0x538) = (float)dVar3;
    dVar3 = (param_2->TypedValue).Rotation.Yaw;
    *(undefined1 *)(lVar7 + lVar12 + 0x664) = 1;
    *(float *)(lVar7 + lVar12 + 0x660) = (float)dVar3;
    dVar3 = (param_2->TypedValue).Scale.field0_0x0._s_0.X;
    *(undefined1 *)(lVar7 + lVar12 + 0x78c) = 1;
    *(float *)(lVar7 + lVar12 + 0x788) = (float)dVar3;
    dVar3 = (param_2->TypedValue).Scale.field0_0x0._s_0.Y;
    *(undefined1 *)(lVar7 + lVar12 + 0x8b4) = 1;
    *(float *)(lVar7 + lVar12 + 0x8b0) = (float)dVar3;
    *(float *)(lVar7 + lVar12 + 0x9d8) = (float)(param_2->TypedValue).Scale.field0_0x0._s_0.Z;
  }
  *(undefined1 *)(lVar7 + lVar12 + 0x9dc) = 1;
LAB_14a3e70fd:
  if (*(int *)&(this->ControlNameMask).Elements.field_0x8 !=
      *(int *)&(this->ControlNameMask).Elements.field_0x34) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&this->ControlNameMask,(FName *)local_ab4,(bool *)&local_res10);
  }
  if (local_ab7 != '\0') {
    (**(code **)(this->_padding_ + 0x3a8))(this);
  }
  return;
}

// AddVector2DParameter @ 14a3e8330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::AddVector2DParameter
          (UMovieSceneControlRigParameterSection *this,FName param_1,
          TOptional<UE::Math::TVector2<double>_> *param_2,bool param_3)

{
  uint *puVar1;
  longlong *plVar2;
  double dVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FName *pFVar10;
  FName *pFVar11;
  longlong lVar12;
  float fVar13;
  FName local_res10;
  undefined1 auStack_2f8 [32];
  FName *local_2d8;
  FName *local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  undefined1 local_2a8 [4];
  undefined1 local_2a4 [4];
  FName local_2a0;
  FMovieSceneFloatChannel local_298;
  FMovieSceneFloatChannel local_170;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  plVar2 = &this->_padding_;
  iVar4 = (int)this->_padding_;
  pFVar11 = (FName *)*plVar2;
  pFVar10 = pFVar11 + (longlong)iVar4 * 0x4b;
  local_res10 = param_1;
  while( true ) {
    if ((int)this->_padding_ != iVar4) {
      local_2a8[0] = 0;
      `TCheckedPointerIterator<FVector2DParameterNameAndCurves_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_2a8);
    }
    if (pFVar11 == pFVar10) break;
    if (*pFVar11 == param_1) {
      return;
    }
    pFVar11 = pFVar11 + 0x4b;
  }
  local_2a0 = param_1;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_298);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_170);
  pFVar11 = (FName *)*plVar2;
  if ((pFVar11 <= &local_2a0) &&
     (lVar9 = (longlong)*(int *)((longlong)&this->_padding_ + 4),
     &local_2a0 < pFVar11 + lVar9 * 0x4b)) {
    local_2c0 = (longlong)(int)this->_padding_;
    local_2b8 = 600;
    local_2d8 = &local_2a0;
    local_2d0 = pFVar11;
    local_2c8 = lVar9;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar7 = (uint)this->_padding_;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  if (uVar7 == *puVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (600,8,(ForAnyElementType *)plVar2,(int *)puVar1);
  }
  lVar9 = *plVar2;
  *(uint *)&this->_padding_ = uVar7 + 1;
  lVar12 = (longlong)(int)uVar7 * 600;
  *(FName *)(lVar9 + lVar12) = local_2a0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)(lVar9 + lVar12 + 8),&local_298);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)(lVar9 + lVar12 + 0x130),&local_170);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_170);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_298);
  iVar4 = (int)this->_padding_;
  uVar8 = 0;
  if ((int)uVar7 < iVar4) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (local_2d8 = (FName *)(longlong)(int)uVar7, local_2d0 = (FName *)(longlong)iVar4,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar9 = *plVar2;
  if (param_2->bIsSet == false) {
    *(undefined1 *)(lVar9 + lVar12 + 0x9c) = 1;
    fVar13 = 0.0;
    *(undefined4 *)(lVar9 + lVar12 + 0x98) = 0;
  }
  else {
    dVar3 = (param_2->TypedValue).field0_0x0._s_0.X;
    *(undefined1 *)(lVar9 + lVar12 + 0x9c) = 1;
    *(float *)(lVar9 + lVar12 + 0x98) = (float)dVar3;
    if ((param_2->bIsSet == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar13 = (float)(param_2->TypedValue).field0_0x0._s_0.Y;
  }
  *(undefined1 *)(lVar9 + lVar12 + 0x1c4) = 1;
  *(float *)(lVar9 + lVar12 + 0x1c0) = fVar13;
  if (*(int *)&(this->ControlNameMask).Elements.field_0x8 !=
      *(int *)&(this->ControlNameMask).Elements.field_0x34) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&this->ControlNameMask,(FName *)local_2a4,(bool *)&local_res10);
  }
  if (param_3) {
    (**(code **)(this->_padding_ + 0x3a8))(this);
  }
  return;
}

// AddVectorParameter @ 14a3e86f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::AddVectorParameter
          (UMovieSceneControlRigParameterSection *this,FName param_1,
          TOptional<UE::Math::TVector<double>_> *param_2,bool param_3)

{
  uint *puVar1;
  longlong *plVar2;
  double dVar3;
  int iVar4;
  FName *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  FName local_res10;
  undefined1 auStack_418 [32];
  FName *local_3f8;
  FName *local_3f0;
  longlong local_3e8;
  longlong local_3e0;
  undefined8 local_3d8;
  FName local_3c8;
  FName local_3c0;
  FMovieSceneFloatChannel local_3b8;
  FMovieSceneFloatChannel local_290;
  FMovieSceneFloatChannel local_168;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_418;
  local_res10 = param_1;
  bVar7 = HasVectorParameter(this,param_1);
  if (!bVar7) {
    plVar2 = &this->_padding_;
    local_3c0 = param_1;
    FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_3b8);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_290);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_168);
    pFVar5 = (FName *)*plVar2;
    if ((pFVar5 <= &local_3c0) &&
       (lVar10 = (longlong)*(int *)((longlong)&this->_padding_ + 4),
       &local_3c0 < pFVar5 + lVar10 * 0x70)) {
      local_3e0 = (longlong)(int)this->_padding_;
      local_3d8 = 0x380;
      local_3f8 = &local_3c0;
      local_3f0 = pFVar5;
      local_3e8 = lVar10;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar8 = (uint)this->_padding_;
    puVar1 = (uint *)((longlong)&this->_padding_ + 4);
    if (uVar8 == *puVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x380,8,(ForAnyElementType *)plVar2,(int *)puVar1);
    }
    lVar10 = *plVar2;
    *(uint *)&this->_padding_ = uVar8 + 1;
    lVar11 = (longlong)(int)uVar8 * 0x380;
    *(FName *)(lVar10 + lVar11) = local_3c0;
    FMovieSceneFloatChannel::FMovieSceneFloatChannel
              ((FMovieSceneFloatChannel *)(lVar10 + lVar11 + 8),&local_3b8);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel
              ((FMovieSceneFloatChannel *)(lVar10 + lVar11 + 0x130),&local_290);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel
              ((FMovieSceneFloatChannel *)(lVar10 + lVar11 + 600),&local_168);
    FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_168);
    FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_290);
    FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_3b8);
    iVar4 = (int)this->_padding_;
    uVar9 = 0;
    if ((int)uVar8 < iVar4) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_3f8 = (FName *)(longlong)(int)uVar8;
      local_3f0 = (FName *)(longlong)iVar4;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar10 = *plVar2;
    if (param_2->bIsSet == false) {
      *(undefined1 *)(lVar10 + lVar11 + 0x9c) = 1;
      fVar12 = 0.0;
      *(undefined4 *)(lVar10 + lVar11 + 0x98) = 0;
      *(undefined1 *)(lVar10 + lVar11 + 0x1c4) = 1;
      *(undefined4 *)(lVar10 + lVar11 + 0x1c0) = 0;
    }
    else {
      dVar3 = (param_2->TypedValue).field0_0x0._s_0.X;
      *(undefined1 *)(lVar10 + lVar11 + 0x9c) = 1;
      *(float *)(lVar10 + lVar11 + 0x98) = (float)dVar3;
      if (param_2->bIsSet == false) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      dVar3 = (param_2->TypedValue).field0_0x0._s_0.Y;
      *(undefined1 *)(lVar10 + lVar11 + 0x1c4) = 1;
      *(float *)(lVar10 + lVar11 + 0x1c0) = (float)dVar3;
      if (param_2->bIsSet == false) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      fVar12 = (float)(param_2->TypedValue).field0_0x0._s_0.Z;
    }
    *(undefined1 *)(lVar10 + lVar11 + 0x2ec) = 1;
    *(float *)(lVar10 + lVar11 + 0x2e8) = fVar12;
    if (*(int *)&(this->ControlNameMask).Elements.field_0x8 !=
        *(int *)&(this->ControlNameMask).Elements.field_0x34) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (&this->ControlNameMask,&local_3c8,(bool *)&local_res10);
    }
    if (param_3) {
      (**(code **)(this->_padding_ + 0x3a8))(this);
    }
  }
  return;
}

// AutoSetTangents @ 14a3eb820

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::AutoSetTangents
          (UMovieSceneControlRigParameterSection *this,FName *param_1)

{
  UControlRig *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMovieSceneChannelProxy *this_00;
  UScriptStruct *pUVar5;
  FMovieSceneChannelEntry *pFVar6;
  FChannelMapInfo *pFVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  
  this_00 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this);
  pUVar5 = FMovieSceneFloatChannel::StaticStruct();
  pFVar6 = FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar5->_padding_);
  iVar9 = 0;
  if (pFVar6 == (FMovieSceneChannelEntry *)0x0) {
    pFVar14 = (FScriptContainerElement *)0x0;
  }
  else {
    iVar9 = (pFVar6->Channels).ArrayNum;
    pFVar14 = (pFVar6->Channels).AllocatorInstance.Data;
    if ((iVar9 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
           ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                   *)&this->ControlChannelMap,*param_1);
  if (pFVar7 != (FChannelMapInfo *)0x0) {
    pUVar1 = (this->ControlRig).field0_0x0.DebugPtr;
    uVar13 = pFVar7->ChannelIndex;
    lVar8 = (**(code **)(pUVar1->_padding_ + 0x3c8))(pUVar1,param_1);
    if (lVar8 != 0) {
      uVar12 = 0;
      uVar4 = 0;
      switch(*(undefined1 *)(lVar8 + 0x231)) {
      case 4:
      case 5:
      case 6:
        uVar11 = uVar4;
        if ((int)uVar13 < iVar9) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FMovieSceneFloatChannel::AutoSetTangents
                  (*(FMovieSceneFloatChannel **)(pFVar14 + (longlong)(int)uVar13 * 8),0.0);
        uVar11 = uVar13 + 1;
        if ((int)uVar11 < iVar9) {
          uVar4 = ~uVar11 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FMovieSceneFloatChannel::AutoSetTangents
                  (*(FMovieSceneFloatChannel **)(pFVar14 + (longlong)(int)uVar11 * 8),0.0);
        uVar13 = uVar13 + 2;
        if ((int)uVar13 < iVar9) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        break;
      case 7:
      case 8:
      case 9:
        uVar11 = uVar12;
        if ((int)uVar13 < iVar9) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FMovieSceneFloatChannel::AutoSetTangents
                  (*(FMovieSceneFloatChannel **)(pFVar14 + (longlong)(int)uVar13 * 8),0.0);
        uVar10 = uVar13 + 1;
        uVar11 = uVar4;
        if ((int)uVar10 < iVar9) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FMovieSceneFloatChannel::AutoSetTangents
                  (*(FMovieSceneFloatChannel **)(pFVar14 + (longlong)(int)uVar10 * 8),0.0);
        uVar10 = uVar13 + 2;
        uVar11 = uVar4;
        if ((int)uVar10 < iVar9) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FMovieSceneFloatChannel::AutoSetTangents
                  (*(FMovieSceneFloatChannel **)(pFVar14 + (longlong)(int)uVar10 * 8),0.0);
        uVar10 = uVar13 + 3;
        uVar11 = uVar4;
        if ((int)uVar10 < iVar9) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FMovieSceneFloatChannel::AutoSetTangents
                  (*(FMovieSceneFloatChannel **)(pFVar14 + (longlong)(int)uVar10 * 8),0.0);
        uVar10 = uVar13 + 4;
        uVar11 = uVar4;
        if ((int)uVar10 < iVar9) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FMovieSceneFloatChannel::AutoSetTangents
                  (*(FMovieSceneFloatChannel **)(pFVar14 + (longlong)(int)uVar10 * 8),0.0);
        uVar10 = uVar13 + 5;
        uVar11 = uVar4;
        if ((int)uVar10 < iVar9) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FMovieSceneFloatChannel::AutoSetTangents
                  (*(FMovieSceneFloatChannel **)(pFVar14 + (longlong)(int)uVar10 * 8),0.0);
        if ((*(char *)(lVar8 + 0x231) != '\a') && (*(char *)(lVar8 + 0x231) != '\t')) {
          return;
        }
        uVar11 = uVar13 + 6;
        if ((int)uVar11 < iVar9) {
          uVar4 = ~uVar11 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FMovieSceneFloatChannel::AutoSetTangents
                  (*(FMovieSceneFloatChannel **)(pFVar14 + (longlong)(int)uVar11 * 8),0.0);
        uVar11 = uVar13 + 7;
        uVar4 = uVar12;
        if ((int)uVar11 < iVar9) {
          uVar4 = ~uVar11 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FMovieSceneFloatChannel::AutoSetTangents
                  (*(FMovieSceneFloatChannel **)(pFVar14 + (longlong)(int)uVar11 * 8),0.0);
        uVar13 = uVar13 + 8;
        if ((int)uVar13 < iVar9) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        break;
      default:
        goto switchD_14a3eb8fd_default;
      }
      if ((uVar12 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FMovieSceneFloatChannel::AutoSetTangents
                (*(FMovieSceneFloatChannel **)(pFVar14 + (longlong)(int)uVar13 * 8),0.0);
    }
  }
switchD_14a3eb8fd_default:
  return;
}

// CacheChannelProxy @ 14a3ed010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EMovieSceneChannelProxyType __thiscall
UMovieSceneControlRigParameterSection::CacheChannelProxy
          (UMovieSceneControlRigParameterSection *this)

{
  int *piVar1;
  TMap<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
  *this_00;
  ERigControlType EVar2;
  int iVar3;
  UControlRig *pUVar4;
  FRigControlElement *pFVar5;
  FName FVar6;
  ITextData *pIVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  code *pcVar11;
  int iVar12;
  TRefCountPtr<ITextData> TVar13;
  bool bVar14;
  EMovieSceneChannelProxyType EVar15;
  FRigControlElement *pFVar16;
  longlong lVar17;
  UScriptStruct *pUVar18;
  FText *pFVar19;
  TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar20;
  TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar21;
  TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar22;
  TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar23;
  TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar24;
  FChannelMapInfo *pFVar25;
  TReferenceControllerBase<1> *pTVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong *plVar29;
  ForElementType<FMovieSceneChannelEntry> FVar30;
  undefined1 *puVar31;
  ulonglong uVar32;
  int iVar33;
  FScriptContainerElement *pFVar34;
  FName *pFVar35;
  FScriptContainerElement *pFVar36;
  FName *pFVar37;
  ForAnyElementType FVar38;
  longlong *plVar39;
  FName *pFVar40;
  TObjectPtr<URigHierarchy>_u_0 this_01;
  TReferenceControllerBase<1> *pTVar41;
  undefined1 auStackY_488 [32];
  int local_458;
  int local_454;
  int local_450;
  int local_44c;
  undefined1 local_448;
  undefined1 local_447;
  undefined1 local_446;
  undefined1 local_445;
  undefined1 local_444;
  undefined1 local_443;
  undefined1 local_442;
  undefined1 local_441;
  undefined1 local_440;
  undefined1 local_43f [7];
  FScriptContainerElement *local_438;
  int local_430;
  int local_42c;
  int local_428;
  int local_424;
  TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> local_420;
  uint local_410;
  TReferenceControllerBase<1> *local_408;
  FSharedReferencer<1> local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  TObjectPtr<URigHierarchy>_u_0 local_3c0;
  FText local_3b8;
  undefined1 local_3a8 [12];
  undefined1 local_39c [12];
  FScriptContainerElement *local_390;
  undefined1 local_388 [8];
  TPairInitializer<FName_const_&,FChannelMapInfo_&&> local_380;
  int local_370;
  undefined4 local_36c;
  undefined8 local_368;
  undefined1 local_360;
  undefined4 local_35c;
  int local_358;
  undefined8 local_354;
  void *local_348;
  undefined8 local_340;
  int local_338;
  int local_334;
  int local_330;
  undefined4 local_32c;
  undefined8 local_328;
  undefined1 local_320;
  undefined4 local_31c;
  int local_318;
  undefined8 local_314;
  void *local_308;
  undefined8 local_300;
  int local_2f8;
  int local_2f4;
  int local_2f0;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined1 local_2e0;
  undefined4 local_2dc;
  int local_2d8;
  undefined8 local_2d4;
  void *local_2c8;
  undefined8 local_2c0;
  int local_2b8;
  int local_2b4;
  int local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined1 local_2a0;
  undefined4 local_29c;
  int local_298;
  undefined8 local_294;
  void *local_288;
  undefined8 local_280;
  int local_278;
  int local_274;
  int local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined1 local_260;
  undefined4 local_25c;
  int local_258;
  undefined8 local_254;
  void *local_248;
  undefined8 local_240;
  int local_238;
  int local_234;
  int local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined1 local_220;
  undefined4 local_21c;
  int local_218;
  undefined8 local_214;
  void *local_208;
  undefined8 local_200;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined1 local_1e0;
  undefined4 local_1dc;
  int local_1d8;
  undefined8 local_1d4;
  void *local_1c8;
  undefined8 local_1c0;
  FScriptContainerElement *local_1b8;
  int *local_1b0;
  FScriptContainerElement *local_1a8;
  FChannelMapInfo **local_1a0;
  FScriptContainerElement *local_198;
  int *local_190;
  FScriptContainerElement *local_188;
  int *local_180;
  FName *local_178;
  int *local_170;
  FName *local_168;
  int *local_160;
  FScriptContainerElement *local_158;
  int *local_150;
  TObjectPtr<URigHierarchy>_u_0 local_148;
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_140;
  TSparseArray<TSparseSetElement<TTuple<FRigControlElement_const_*,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_138;
  undefined1 local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FText local_110;
  FMovieSceneChannelProxyData local_100;
  TSparseArray<TSparseSetElement<TTuple<FRigControlElement_const_*,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_d8;
  undefined1 local_a0 [8];
  undefined1 *local_98;
  int local_90;
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_488;
  ::FName::FName(&local_128,"UIMin");
  ::FName::FName(&local_120,"UIMax");
  iVar33 = 0;
  local_100.Entries.ArrayMax = 1;
  this_00 = &this->ControlChannelMap;
  local_100.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  local_100.Entries.ArrayNum = 0;
  bVar14 = 1 < *(int *)&(this->ControlChannelMap).field_0x48;
  if (!bVar14) {
    TSet<TTuple<FName,FChannelMapInfo>,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FChannelMapInfo>,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FChannelMapInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FChannelMapInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->ControlChannelMap).field_0x8);
  puVar31 = &(this->ControlChannelMap).field_0xc;
  *(undefined4 *)&(this->ControlChannelMap).field_0x8 = 0;
  if (*(int *)puVar31 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)this_00,0,(int *)puVar31);
  }
  *(undefined4 *)&(this->ControlChannelMap).field_0x34 = 0;
  *(undefined4 *)&(this->ControlChannelMap).field_0x28 = 0;
  *(undefined4 *)&(this->ControlChannelMap).field_0x30 = 0xffffffff;
  iVar3 = *(int *)&(this->ControlChannelMap).field_0x2c;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->ControlChannelMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ControlChannelMap).field_0x10,0);
  }
  if (bVar14) {
    *(undefined4 *)&(this->ControlChannelMap).field_0x48 = 1;
    TSet<TTuple<FName,FChannelMapInfo>,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FChannelMapInfo>,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  pUVar4 = (this->ControlRig).field0_0x0.DebugPtr;
  if (pUVar4 != (UControlRig *)0x0) {
    local_420.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_420.ArrayNum = 0;
    local_420.ArrayMax = 0;
    (**(code **)(pUVar4->_padding_ + 0x420))(pUVar4,&local_420);
    StoreLastControlsUsedToReconstruct(this,&local_420);
    if (0 < local_420.ArrayNum) {
      local_450 = 0;
      local_458 = 0;
      local_454 = 1;
      local_44c = 0;
      local_42c = 0;
      local_428 = 0;
      local_424 = 0;
      local_430 = 0;
      FMovieSceneBoolChannel::StaticStruct();
      FMovieSceneByteChannel::StaticStruct();
      FMovieSceneIntegerChannel::StaticStruct();
      ::FName::FName(&local_118,L"Space");
      uVar28 = (ulonglong)local_420.ArrayNum;
      local_130 = 0;
      local_410 = local_420.ArrayNum;
      this_01 = (TObjectPtr<URigHierarchy>_u_0)
                (((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).field0_0x0.DebugPtr;
      local_140 = &local_88;
      local_138 = &local_d8;
      local_d8._0_8_ = 0;
      local_d8._8_8_ = 0;
      local_d8._32_8_ = 0;
      local_d8._40_4_ = 0;
      local_d8._52_4_ = 0;
      local_98 = (undefined1 *)0x0;
      local_90 = 0;
      local_88._0_8_ = 0;
      local_88._8_8_ = 0;
      local_88._32_8_ = 0;
      local_88._40_4_ = 0;
      local_88._52_4_ = 0;
      local_48 = (void *)0x0;
      local_40 = 0;
      local_390 = local_420.AllocatorInstance.Data + uVar28 * 8;
      local_d8._44_4_ = 0x80;
      local_d8._48_4_ = 0xffffffff;
      local_88._44_4_ = 0x80;
      local_88._48_4_ = 0xffffffff;
      uVar32 = uVar28;
      FVar38.Data = local_420.AllocatorInstance.Data;
      local_3c0 = this_01;
      local_148 = this_01;
      while( true ) {
        pFVar34 = local_390;
        local_438 = FVar38.Data;
        if ((int)uVar28 != (int)uVar32) {
          local_448 = 0;
          `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_448);
        }
        if (FVar38.Data == pFVar34) break;
        pFVar5 = *(FRigControlElement **)FVar38.Data;
        bVar14 = URigHierarchy::IsAnimatable(this_01.DebugPtr,pFVar5);
        if (bVar14) {
          FText::FText(&local_3b8);
          bVar14 = URigHierarchy::ShouldBeGrouped(this_01.DebugPtr,pFVar5);
          if ((bVar14) &&
             (pFVar16 = (FRigControlElement *)
                        URigHierarchy::GetFirstParent(this_01.DebugPtr,(FRigBaseElement *)pFVar5),
             iVar33 = local_458, pFVar16 != (FRigControlElement *)0x0)) {
            lVar17 = (**(code **)(*(longlong *)pFVar16 + 0x10))(pFVar16);
            pUVar18 = FRigControlElement::StaticStruct();
            if (pUVar18 != (UScriptStruct *)0x0) {
              iVar33 = (int)pUVar18->_padding_;
              if ((*(int *)(lVar17 + 0x38) < iVar33) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar33 * 8)
                  != &pUVar18->_padding_)) {
                bVar14 = false;
              }
              else {
                bVar14 = true;
              }
              iVar33 = local_458;
              if (bVar14) {
                FVar10.ComparisonIndex.Value = *(uint *)&pFVar16->field_0x14;
                FVar10.Number = *(uint *)&pFVar16->field_0x18;
                TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                          (&this->ControlNameMask,FVar10);
                TVar13.Reference = local_3b8.TextData.Reference;
                uVar27 = ((uint)((ulonglong)pFVar16 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)pFVar16 >> 4)) * -0x7a143595;
                uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
                if (local_d8._8_4_ != local_d8._52_4_) {
                  puVar31 = local_a0;
                  if (local_98 != (undefined1 *)0x0) {
                    puVar31 = local_98;
                  }
                  iVar33 = *(int *)(puVar31 +
                                   (ulonglong)(local_90 - 1U & (uVar27 >> 0x10 ^ uVar27)) * 4);
                  while (iVar33 != -1) {
                    plVar29 = (longlong *)((longlong)iVar33 * 0x20 + local_d8._0_8_);
                    if ((FRigControlElement *)*plVar29 == pFVar16) {
                      plVar39 = plVar29 + 1;
                      if (plVar29 == (longlong *)0x0) {
                        plVar39 = (longlong *)0x0;
                      }
                      if (plVar39 != (longlong *)0x0) {
                        pIVar7 = (ITextData *)*plVar39;
                        if (local_3b8.TextData.Reference != pIVar7) {
                          local_3b8.TextData.Reference = pIVar7;
                          if (pIVar7 != (ITextData *)0x0) {
                            (**(code **)((longlong)*pIVar7 + 8))(pIVar7,local_3a8 + 4);
                          }
                          if (TVar13.Reference != (ITextData *)0x0) {
                            (**(code **)((longlong)*TVar13.Reference + 0x10))(TVar13.Reference);
                          }
                        }
                        local_3b8.Flags = *(uint *)(plVar39 + 1);
                        iVar33 = local_458;
                        goto LAB_14a3ed41c;
                      }
                      break;
                    }
                    iVar33 = (int)plVar29[3];
                  }
                }
                pFVar19 = `UMovieSceneControlRigParameterSection::CacheChannelProxy'::__l8::
                          <lambda_2>::operator()(&local_148,&local_110,pFVar16);
                FText::operator=(&local_3b8,pFVar19);
                iVar33 = local_458;
                if (local_110.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
                }
              }
            }
          }
LAB_14a3ed41c:
          FVar6.ComparisonIndex.Value = *(uint *)&pFVar5->field_0x14;
          FVar6.Number = *(uint *)&pFVar5->field_0x18;
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                    (&this->ControlNameMask,FVar6);
          switch((pFVar5->Settings).ControlType) {
          case Bool:
            pTVar21 = UMovieSceneParameterSection::GetBoolParameterNamesAndCurves
                                ((UMovieSceneParameterSection *)this);
            iVar3 = pTVar21->ArrayNum;
            pFVar34 = (pTVar21->AllocatorInstance).Data;
            pFVar36 = pFVar34 + (longlong)iVar3 * 0x128;
            while( true ) {
              if (pTVar21->ArrayNum != iVar3) {
                local_446 = 0;
                `TCheckedPointerIterator<FBoolParameterNameAndCurve,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_446);
              }
              iVar12 = local_42c;
              FVar38.Data = local_438;
              iVar33 = local_458;
              if (pFVar34 == pFVar36) goto switchD_14a3ed44f_default;
              if (*(longlong *)&pFVar5->field_0x14 == *(longlong *)pFVar34) break;
              pFVar34 = pFVar34 + 0x128;
            }
            local_380.Value._0_4_ = local_450;
            local_3f0 = 0;
            local_358 = local_458;
            local_1a0 = &local_380.Value;
            local_368 = 0;
            local_360 = 0;
            local_348 = (void *)0x0;
            local_340 = 0;
            local_380.Value._4_4_ = local_454;
            local_370 = local_42c;
            local_36c = 0xffffffff;
            local_35c = 0xffffffff;
            local_354 = 0xffffffffffffffff;
            local_1a8 = pFVar34;
            TSet<TTuple<FName,FChannelMapInfo>,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,FChannelMapInfo_&&>_>
                      ((TSet<TTuple<FName,FChannelMapInfo>,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>,FDefaultSetAllocator>
                        *)&this->ControlChannelMap,
                       (TPairInitializer<FName_const_&,FChannelMapInfo_&&> *)local_39c,
                       (bool *)&local_1a8);
            if (local_348 != (void *)0x0) {
              FMemory::Free(local_348);
            }
            FMovieSceneChannelProxyData::AddInternal<FMovieSceneBoolChannel>
                      (&local_100,(FMovieSceneBoolChannel *)(pFVar34 + 8));
            local_42c = iVar12 + 1;
            local_454 = local_454 + 1;
            local_450 = local_450 + 1;
            FVar38.Data = local_438;
            break;
          case Float:
            pTVar20 = UMovieSceneParameterSection::GetScalarParameterNamesAndCurves
                                ((UMovieSceneParameterSection *)this);
            iVar3 = pTVar20->ArrayNum;
            pFVar34 = (pTVar20->AllocatorInstance).Data;
            pFVar36 = pFVar34 + (longlong)iVar3 * 0x130;
            while( true ) {
              if (pTVar20->ArrayNum != iVar3) {
                local_447 = 0;
                `TCheckedPointerIterator<FScalarParameterNameAndCurve,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_447);
              }
              FVar38.Data = local_438;
              iVar33 = local_458;
              if (pFVar34 == pFVar36) goto switchD_14a3ed44f_default;
              if (*(longlong *)&pFVar5->field_0x14 == *(longlong *)pFVar34) break;
              pFVar34 = pFVar34 + 0x130;
            }
            local_338 = local_450;
            local_3e0 = 0;
            local_318 = local_458;
            local_1b0 = &local_338;
            local_328 = 0;
            local_320 = 0;
            local_308 = (void *)0x0;
            local_300 = 0;
            local_334 = local_454;
            local_330 = local_44c;
            local_32c = 0xffffffff;
            local_31c = 0xffffffff;
            local_314 = 0xffffffffffffffff;
            local_1b8 = pFVar34;
            TSet<TTuple<FName,FChannelMapInfo>,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,FChannelMapInfo_&&>_>
                      ((TSet<TTuple<FName,FChannelMapInfo>,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>,FDefaultSetAllocator>
                        *)&this->ControlChannelMap,
                       (TPairInitializer<FName_const_&,FChannelMapInfo_&&> *)(local_3a8 + 8),
                       (bool *)&local_1b8);
            if (local_308 != (void *)0x0) {
              FMemory::Free(local_308);
            }
            FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                      (&local_100,(FMovieSceneFloatChannel *)(pFVar34 + 8));
            local_44c = local_44c + 1;
            local_454 = local_454 + 1;
            local_450 = local_450 + 1;
            FVar38.Data = local_438;
            break;
          case Integer:
            if ((pFVar5->Settings).ControlEnum.field0_0x0.DebugPtr == (UEnum *)0x0) {
              iVar3 = (this->IntegerParameterNamesAndCurves).ArrayNum;
              pFVar34 = (this->IntegerParameterNamesAndCurves).AllocatorInstance.Data;
              pFVar36 = pFVar34 + (longlong)iVar3 * 0x128;
              while( true ) {
                if ((this->IntegerParameterNamesAndCurves).ArrayNum != iVar3) {
                  local_444 = 0;
                  `TCheckedPointerIterator<FIntegerParameterNameAndCurve,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_444);
                }
                iVar12 = local_424;
                FVar38.Data = local_438;
                iVar33 = local_458;
                if (pFVar34 == pFVar36) goto switchD_14a3ed44f_default;
                if (*(longlong *)&pFVar5->field_0x14 == *(longlong *)pFVar34) break;
                pFVar34 = pFVar34 + 0x128;
              }
              local_3f8 = 0;
              local_298 = local_458;
              local_180 = &local_2b8;
              local_2a8 = 0;
              local_2a0 = 0;
              local_288 = (void *)0x0;
              local_280 = 0;
              local_2b8 = local_450;
              local_2b4 = local_454;
              local_2b0 = local_424;
              local_2ac = 0xffffffff;
              local_29c = 0xffffffff;
              local_294 = 0xffffffffffffffff;
              local_188 = pFVar34;
              TSet<TTuple<FName,FChannelMapInfo>,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_const_&,FChannelMapInfo_&&>_>
                        ((TSet<TTuple<FName,FChannelMapInfo>,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>,FDefaultSetAllocator>
                          *)&this->ControlChannelMap,
                         (TPairInitializer<FName_const_&,FChannelMapInfo_&&> *)local_388,
                         (bool *)&local_188);
              if (local_288 != (void *)0x0) {
                FMemory::Free(local_288);
              }
              FMovieSceneChannelProxyData::AddInternal<FMovieSceneIntegerChannel>
                        (&local_100,(FMovieSceneIntegerChannel *)(pFVar34 + 8));
              local_424 = iVar12 + 1;
              local_454 = local_454 + 1;
              local_450 = local_450 + 1;
              FVar38.Data = local_438;
            }
            else {
              iVar3 = (this->EnumParameterNamesAndCurves).ArrayNum;
              pFVar34 = (this->EnumParameterNamesAndCurves).AllocatorInstance.Data;
              pFVar36 = pFVar34 + (longlong)iVar3 * 0x130;
              while( true ) {
                if ((this->EnumParameterNamesAndCurves).ArrayNum != iVar3) {
                  local_445 = 0;
                  `TCheckedPointerIterator<FEnumParameterNameAndCurve,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_445);
                }
                iVar12 = local_428;
                FVar38.Data = local_438;
                iVar33 = local_458;
                if (pFVar34 == pFVar36) goto switchD_14a3ed44f_default;
                if (*(longlong *)&pFVar5->field_0x14 == *(longlong *)pFVar34) break;
                pFVar34 = pFVar34 + 0x130;
              }
              local_3e8 = 0;
              local_2d8 = local_458;
              local_190 = &local_2f8;
              local_2e8 = 0;
              local_2e0 = 0;
              local_2c8 = (void *)0x0;
              local_2c0 = 0;
              local_2f8 = local_450;
              local_2f4 = local_454;
              local_2f0 = local_428;
              local_2ec = 0xffffffff;
              local_2dc = 0xffffffff;
              local_2d4 = 0xffffffffffffffff;
              local_198 = pFVar34;
              TSet<TTuple<FName,FChannelMapInfo>,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_const_&,FChannelMapInfo_&&>_>
                        ((TSet<TTuple<FName,FChannelMapInfo>,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>,FDefaultSetAllocator>
                          *)&this->ControlChannelMap,
                         (TPairInitializer<FName_const_&,FChannelMapInfo_&&> *)(local_39c + 4),
                         (bool *)&local_198);
              if (local_2c8 != (void *)0x0) {
                FMemory::Free(local_2c8);
              }
              FMovieSceneChannelProxyData::AddInternal<FMovieSceneByteChannel>
                        (&local_100,(FMovieSceneByteChannel *)(pFVar34 + 8));
              local_428 = iVar12 + 1;
              local_454 = local_454 + 1;
              local_450 = local_450 + 1;
              FVar38.Data = local_438;
            }
            break;
          case Vector2D:
            pTVar22 = UMovieSceneParameterSection::GetVector2DParameterNamesAndCurves
                                ((UMovieSceneParameterSection *)this);
            iVar3 = pTVar22->ArrayNum;
            pFVar34 = (pTVar22->AllocatorInstance).Data;
            pFVar36 = pFVar34 + (longlong)iVar3 * 600;
            while( true ) {
              if (pTVar22->ArrayNum != iVar3) {
                local_443 = 0;
                `TCheckedPointerIterator<FVector2DParameterNameAndCurves,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_443);
              }
              FVar38.Data = local_438;
              iVar33 = local_458;
              if (pFVar34 == pFVar36) goto switchD_14a3ed44f_default;
              if (*(longlong *)&pFVar5->field_0x14 == *(longlong *)pFVar34) break;
              pFVar34 = pFVar34 + 600;
            }
            local_278 = local_450;
            local_3d8 = 0;
            local_258 = local_458;
            local_150 = &local_278;
            local_268 = 0;
            local_260 = 0;
            local_248 = (void *)0x0;
            local_240 = 0;
            local_274 = local_454;
            local_270 = local_44c;
            local_26c = 0xffffffff;
            local_25c = 0xffffffff;
            local_254 = 0xffffffffffffffff;
            local_158 = pFVar34;
            TSet<TTuple<FName,FChannelMapInfo>,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,FChannelMapInfo_&&>_>
                      ((TSet<TTuple<FName,FChannelMapInfo>,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>,FDefaultSetAllocator>
                        *)&this->ControlChannelMap,
                       (TPairInitializer<FName_const_&,FChannelMapInfo_&&> *)local_3a8,
                       (bool *)&local_158);
            if (local_248 != (void *)0x0) {
              FMemory::Free(local_248);
            }
            FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                      (&local_100,(FMovieSceneFloatChannel *)(pFVar34 + 8));
            FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                      (&local_100,(FMovieSceneFloatChannel *)(pFVar34 + 0x130));
            local_44c = local_44c + 2;
            local_454 = local_454 + 2;
            local_450 = local_450 + 1;
            FVar38.Data = local_438;
            break;
          case Position:
          case Scale:
          case Rotator:
            pTVar23 = UMovieSceneParameterSection::GetVectorParameterNamesAndCurves
                                ((UMovieSceneParameterSection *)this);
            iVar3 = pTVar23->ArrayNum;
            pFVar40 = (FName *)(pTVar23->AllocatorInstance).Data;
            pFVar35 = pFVar40 + (longlong)iVar3 * 0x70;
            while( true ) {
              if (pTVar23->ArrayNum != iVar3) {
                local_442 = 0;
                `TCheckedPointerIterator<FVectorParameterNameAndCurves,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_442);
              }
              FVar38.Data = local_438;
              iVar33 = local_458;
              if (pFVar40 == pFVar35) goto switchD_14a3ed44f_default;
              FVar8.ComparisonIndex.Value = *(uint *)&pFVar5->field_0x14;
              FVar8.Number = *(uint *)&pFVar5->field_0x18;
              if (FVar8 == *pFVar40) break;
              pFVar40 = pFVar40 + 0x70;
            }
            local_238 = local_450;
            local_234 = local_454;
            local_218 = local_458;
            local_170 = &local_238;
            local_3d0 = 0;
            local_228 = 0;
            local_220 = 0;
            local_208 = (void *)0x0;
            local_200 = 0;
            local_230 = local_44c;
            local_22c = 0xffffffff;
            local_21c = 0xffffffff;
            local_214 = 0xffffffffffffffff;
            local_178 = pFVar40;
            TSet<TTuple<FName,FChannelMapInfo>,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,FChannelMapInfo_&&>_>
                      ((TSet<TTuple<FName,FChannelMapInfo>,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>,FDefaultSetAllocator>
                        *)&this->ControlChannelMap,
                       (TPairInitializer<FName_const_&,FChannelMapInfo_&&> *)(local_388 + 4),
                       (bool *)&local_178);
            if (local_208 != (void *)0x0) {
              FMemory::Free(local_208);
            }
            iVar33 = (this->SpaceChannels).ArrayNum;
            pFVar35 = (FName *)(this->SpaceChannels).AllocatorInstance.Data;
            FVar10 = *pFVar40;
            pFVar37 = pFVar35 + (longlong)iVar33 * 0x2a;
            while( true ) {
              if ((this->SpaceChannels).ArrayNum != iVar33) {
                local_441 = 0;
                `TCheckedPointerIterator<FSpaceControlNameAndChannel,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_441);
              }
              if (pFVar35 == pFVar37) goto LAB_14a3edb9d;
              if (*pFVar35 == FVar10) break;
              pFVar35 = pFVar35 + 0x2a;
            }
            pFVar25 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                      ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                              *)&this->ControlChannelMap,*pFVar40);
            if (pFVar25 != (FChannelMapInfo *)0x0) {
              pFVar25->SpaceChannelIndex = local_430;
              pFVar25->bDoesHaveSpace = true;
            }
            local_430 = local_430 + 1;
            FMovieSceneChannelProxyData::AddInternal<FMovieSceneControlRigSpaceChannel>
                      (&local_100,(FMovieSceneControlRigSpaceChannel *)(pFVar35 + 1));
LAB_14a3edb9d:
            FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                      (&local_100,(FMovieSceneFloatChannel *)(pFVar40 + 1));
            FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                      (&local_100,(FMovieSceneFloatChannel *)(pFVar40 + 0x26));
            FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                      (&local_100,(FMovieSceneFloatChannel *)(pFVar40 + 0x4b));
            local_454 = local_454 + 3;
            local_44c = local_44c + 3;
            local_450 = local_450 + 1;
            FVar38.Data = local_438;
            iVar33 = local_458;
            break;
          case Transform:
          case TransformNoScale:
          case EulerTransform:
            pTVar24 = UMovieSceneParameterSection::GetTransformParameterNamesAndCurves
                                ((UMovieSceneParameterSection *)this);
            iVar3 = pTVar24->ArrayNum;
            pFVar40 = (FName *)(pTVar24->AllocatorInstance).Data;
            pFVar35 = pFVar40 + (longlong)iVar3 * 0x14e;
            while( true ) {
              if (pTVar24->ArrayNum != iVar3) {
                local_440 = 0;
                `TCheckedPointerIterator<FTransformParameterNameAndCurves,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(&local_440);
              }
              FVar38.Data = local_438;
              iVar33 = local_458;
              if (pFVar40 == pFVar35) goto switchD_14a3ed44f_default;
              FVar9.ComparisonIndex.Value = *(uint *)&pFVar5->field_0x14;
              FVar9.Number = *(uint *)&pFVar5->field_0x18;
              if (FVar9 == *pFVar40) break;
              pFVar40 = pFVar40 + 0x14e;
            }
            local_1f8 = local_450;
            local_1f4 = local_454;
            local_1f0 = local_44c;
            local_1d8 = local_458;
            local_160 = &local_1f8;
            local_3c8 = 0;
            local_1e8 = 0;
            local_1e0 = 0;
            local_1c8 = (void *)0x0;
            local_1c0 = 0;
            local_1ec = 0xffffffff;
            local_1dc = 0xffffffff;
            local_1d4 = 0xffffffffffffffff;
            local_168 = pFVar40;
            TSet<TTuple<FName,FChannelMapInfo>,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,FChannelMapInfo_&&>_>
                      ((TSet<TTuple<FName,FChannelMapInfo>,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>,FDefaultSetAllocator>
                        *)&this->ControlChannelMap,&local_380,(bool *)&local_168);
            if (local_1c8 != (void *)0x0) {
              FMemory::Free(local_1c8);
            }
            iVar33 = (this->SpaceChannels).ArrayNum;
            pFVar35 = (FName *)(this->SpaceChannels).AllocatorInstance.Data;
            FVar10 = *pFVar40;
            pFVar37 = pFVar35 + (longlong)iVar33 * 0x2a;
            while( true ) {
              if ((this->SpaceChannels).ArrayNum != iVar33) {
                local_43f[0] = 0;
                `TCheckedPointerIterator<FSpaceControlNameAndChannel,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_43f);
              }
              if (pFVar35 == pFVar37) goto LAB_14a3edd6f;
              if (*pFVar35 == FVar10) break;
              pFVar35 = pFVar35 + 0x2a;
            }
            pFVar25 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                      ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                              *)&this->ControlChannelMap,*pFVar40);
            if (pFVar25 != (FChannelMapInfo *)0x0) {
              pFVar25->SpaceChannelIndex = local_430;
              pFVar25->bDoesHaveSpace = true;
            }
            local_430 = local_430 + 1;
            FMovieSceneChannelProxyData::AddInternal<FMovieSceneControlRigSpaceChannel>
                      (&local_100,(FMovieSceneControlRigSpaceChannel *)(pFVar35 + 1));
LAB_14a3edd6f:
            FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                      (&local_100,(FMovieSceneFloatChannel *)(pFVar40 + 1));
            FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                      (&local_100,(FMovieSceneFloatChannel *)(pFVar40 + 0x26));
            FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                      (&local_100,(FMovieSceneFloatChannel *)(pFVar40 + 0x4b));
            FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                      (&local_100,(FMovieSceneFloatChannel *)(pFVar40 + 0x70));
            FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                      (&local_100,(FMovieSceneFloatChannel *)(pFVar40 + 0x95));
            FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                      (&local_100,(FMovieSceneFloatChannel *)(pFVar40 + 0xba));
            EVar2 = (pFVar5->Settings).ControlType;
            if ((EVar2 == Transform) || (EVar2 == EulerTransform)) {
              FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                        (&local_100,(FMovieSceneFloatChannel *)(pFVar40 + 0xdf));
              FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                        (&local_100,(FMovieSceneFloatChannel *)(pFVar40 + 0x104));
              FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
                        (&local_100,(FMovieSceneFloatChannel *)(pFVar40 + 0x129));
              local_44c = local_44c + 9;
              local_454 = local_454 + 9;
              local_450 = local_450 + 1;
              FVar38.Data = local_438;
              iVar33 = local_458;
            }
            else {
              local_44c = local_44c + 6;
              local_454 = local_454 + 6;
              local_450 = local_450 + 1;
              FVar38.Data = local_438;
              iVar33 = local_458;
            }
          }
switchD_14a3ed44f_default:
          iVar33 = iVar33 + 1;
          this_01 = local_3c0;
          local_458 = iVar33;
          if (local_3b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_3b8.TextData.Reference + 0x10))();
            this_01 = local_3c0;
          }
        }
        uVar28 = local_420._8_8_ & 0xffffffff;
        FVar38.Data = FVar38.Data + 8;
        uVar32 = (ulonglong)local_410;
      }
      FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_100,&this->Weight);
      local_40 = 0;
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88);
      local_90 = 0;
      if (local_98 != (undefined1 *)0x0) {
        FMemory::Free(local_98);
      }
      TSparseArray<TSparseSetElement<TTuple<FRigControlElement_const_*,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FRigControlElement_const_*,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_d8);
    }
    if (local_420.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_420.AllocatorInstance.Data);
    }
  }
  pTVar26 = ::operator_new(0x68);
  if (pTVar26 == (TReferenceControllerBase<1> *)0x0) {
    pTVar26 = (TReferenceControllerBase<1> *)0x0;
    pTVar41 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar26->SharedReferenceCount = (atomic<int>)0x1;
    pTVar26->WeakReferenceCount = (atomic<int>)0x1;
    pTVar26->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    pTVar26[1]._padding_ = 0;
    pTVar26[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar26[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar26[2]._padding_ = 0;
    pTVar26[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar26[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar26[3]._padding_ = 0;
    pTVar26[3].SharedReferenceCount = (atomic<int>)0x2;
    pTVar26[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar26[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar26[5].WeakReferenceCount = (atomic<int>)0x0;
    if (local_100.Entries.AllocatorInstance.SecondaryData ==
        (ForElementType<FMovieSceneChannelEntry>)0x0) {
      memmove(pTVar26 + 4,&local_100,0x18);
    }
    if (*(void **)&pTVar26[5].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar26[5].SharedReferenceCount);
    }
    pTVar41 = pTVar26 + 1;
    *(ForElementType<FMovieSceneChannelEntry> *)&pTVar26[5].SharedReferenceCount =
         local_100.Entries.AllocatorInstance.SecondaryData;
    local_100.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0
    ;
    *(int *)&pTVar26[6]._padding_ = local_100.Entries.ArrayNum;
    *(int *)((longlong)&pTVar26[6]._padding_ + 4) = local_100.Entries.ArrayMax;
    local_100.Entries.ArrayNum = 0;
    local_100.Entries.ArrayMax = 1;
    if (pTVar41 == (TReferenceControllerBase<1> *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar14) {
        pcVar11 = (code *)swi(3);
        EVar15 = (*pcVar11)();
        return EVar15;
      }
      goto LAB_14a3ee05a;
    }
  }
  if (((pTVar41->_padding_ == 0) || (*(longlong *)&pTVar41->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar41->SharedReferenceCount + 8) < 1)) {
    if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar41->_padding_ = (longlong)pTVar41;
    if (pTVar26 != *(TReferenceControllerBase<1> **)&pTVar41->SharedReferenceCount) {
      if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar26->WeakReferenceCount = (atomic<int>)((int)pTVar26->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar29 = *(longlong **)&pTVar41->SharedReferenceCount;
      if (plVar29 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar29 + 0xc);
        iVar33 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar33 == 1) {
          (**(code **)(*plVar29 + 8))(plVar29,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar41->SharedReferenceCount = pTVar26;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
  }
LAB_14a3ee05a:
  if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_408 = pTVar41;
  local_400.ReferenceController = pTVar26;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_408) {
    this->_padding_ = (longlong)pTVar41;
    local_408 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_400);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_400.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
  FVar30 = (ForElementType<FMovieSceneChannelEntry>)&local_100;
  if (local_100.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar30 = local_100.Entries.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneChannelEntry,int>
            ((FMovieSceneChannelEntry *)FVar30,local_100.Entries.ArrayNum);
  if (local_100.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FMemory::Free((void *)local_100.Entries.AllocatorInstance.SecondaryData);
  }
  return Dynamic;
}

// CanCreateSpaceChannel @ 14a3f0480

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterSection::CanCreateSpaceChannel
          (UMovieSceneControlRigParameterSection *this,FName param_1)

{
  FChannelMapInfo *pFVar1;
  
  pFVar1 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
           ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                   *)&this->ControlChannelMap,param_1);
  if (pFVar1 != (FChannelMapInfo *)0x0) {
    return pFVar1->ParentControlIndex == -1;
  }
  return false;
}

// ChangeControlRotationOrder @ 14a3f04b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::ChangeControlRotationOrder
          (UMovieSceneControlRigParameterSection *this,FName *param_1,
          TOptional<EEulerRotationOrder> *param_2,TOptional<EEulerRotationOrder> *param_3,
          EMovieSceneKeyInterpolation param_4)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  code *pcVar3;
  FFrameTime FVar4;
  FFrameTime FVar5;
  FFrameTime FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FChannelMapInfo *pFVar10;
  FMovieSceneChannelProxy *this_00;
  UScriptStruct *pUVar11;
  FMovieSceneChannelEntry *pFVar12;
  longlong lVar13;
  TQuat<double> *pTVar14;
  TRotator<double> *pTVar15;
  int iVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  ulonglong uVar21;
  wchar_t *pwVar22;
  uint uVar23;
  uint uVar24;
  float in_XMM2_Da;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_1f8;
  undefined1 local_1e8;
  undefined1 local_1e7 [3];
  int local_1e4;
  uint local_1e0;
  FScriptContainerElement *local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8 [2];
  TSortedMap<FFrameNumber,FFrameNumber,TSizedDefaultAllocator<32>,TLess<FFrameNumber_const_&>_>
  local_1c0;
  TRotator<double> local_1b0;
  uint local_198;
  uint local_194;
  uint local_190;
  FFrameNumber local_18c;
  FFrameNumber local_188;
  TArray<FKeyHandle,TSizedDefaultAllocator<32>_> local_180;
  uint local_170;
  undefined4 uStack_16c;
  uint local_168;
  undefined4 uStack_164;
  uint local_160;
  undefined4 uStack_15c;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_14c;
  FScriptContainerElement *local_138;
  TQuat<double> local_128;
  TVector<double> local_108;
  TVector<double> local_f0;
  ForAnyElementType local_d8;
  ForAnyElementType FStack_d0;
  ForAnyElementType local_c8;
  ForAnyElementType FStack_c0;
  TRotator<double> local_b8;
  TRotator<double> local_a0;
  TQuat<double> local_88;
  TQuat<double> local_68;
  
  pwVar22 = (wchar_t *)param_3;
  pFVar10 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
            ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                    *)&this->ControlChannelMap,*param_1);
  if ((pFVar10 != (FChannelMapInfo *)0x0) &&
     ((this->ControlRig).field0_0x0.DebugPtr != (UControlRig *)0x0)) {
    iVar20 = pFVar10->ChannelIndex;
    this_00 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this);
    pUVar11 = FMovieSceneFloatChannel::StaticStruct();
    pFVar12 = FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar11->_padding_);
    if (pFVar12 == (FMovieSceneChannelEntry *)0x0) {
      pFVar19 = (FScriptContainerElement *)0x0;
      local_1d8 = (FScriptContainerElement *)0x0;
      iVar16 = 0;
      local_1e4 = 0;
    }
    else {
      iVar16 = (pFVar12->Channels).ArrayNum;
      pFVar19 = (pFVar12->Channels).AllocatorInstance.Data;
      local_1e4 = iVar16;
      local_1d8 = pFVar19;
      if (iVar16 < 0) {
        pwVar22 = L"";
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    lVar13 = (**(code **)(((this->ControlRig).field0_0x0.DebugPtr)->_padding_ + 0x3c8))();
    if ((lVar13 != 0) &&
       ((cVar2 = *(char *)(lVar13 + 0x231), cVar2 == '\x06' || ((byte)(cVar2 - 7U) < 3)))) {
      local_1c0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar8 = 3;
      if (cVar2 == '\x06') {
        iVar8 = 0;
      }
      local_1c0.Pairs.ArrayNum = 0;
      local_1c0.Pairs.ArrayMax = 0;
      uVar23 = iVar8 + iVar20;
      local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar21 = 0;
      local_1f8.ArrayNum = 0;
      local_1f8.ArrayMax = 0;
      local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198 = uVar23 + 1;
      local_180.ArrayNum = 0;
      local_180.ArrayMax = 0;
      local_194 = uVar23 + 2;
      local_1e0 = uVar23;
      if ((int)uVar23 < (int)(uVar23 + 3)) {
        pFVar19 = pFVar19 + (longlong)(int)uVar23 * 8;
        do {
          iVar20 = (int)uVar21;
          if (iVar20 < 0) {
            iVar8 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,-iVar20,&local_1f8.AllocatorInstance,&local_1f8.ArrayNum,
                               &local_1f8.ArrayMax);
            DefaultConstructItems<FFrameNumber,int>
                      (local_1f8.AllocatorInstance.Data + (longlong)iVar8 * 4,-iVar20);
          }
          else if (0 < iVar20) {
            local_1f8._8_8_ = local_1f8._8_8_ & 0xffffffff00000000;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,&local_1f8.AllocatorInstance,0,&local_1f8.ArrayMax);
          }
          TArray<FKeyHandle,TSizedDefaultAllocator<32>_>::SetNum(&local_180,0,Default);
          uVar24 = 0;
          if ((int)uVar23 < iVar16) {
            uVar24 = ~uVar23 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pwVar22 = (wchar_t *)&local_180;
          local_158[0] = 2;
          local_154 = 0;
          local_150 = 2;
          local_14c = 0;
          (**(code **)(**(longlong **)pFVar19 + 8))(*(longlong **)pFVar19,local_158,&local_1f8);
          iVar20 = local_1f8.ArrayNum;
          uVar21 = (ulonglong)local_1f8.ArrayNum;
          pFVar1 = local_1f8.AllocatorInstance.Data + uVar21 * 4;
          FVar18.Data = local_1f8.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar21 != iVar20) {
              local_1e8 = 0;
              `TCheckedPointerIterator<FFrameNumber_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_1e8);
              uVar21 = local_1f8._8_8_ & 0xffffffff;
            }
            if (FVar18.Data == pFVar1) break;
            TSortedMap<FFrameNumber,FFrameNumber,TSizedDefaultAllocator<32>,TLess<FFrameNumber_const_&>_>
            ::Emplace<FFrameNumber_const_&,FFrameNumber_const_&>
                      (&local_1c0,(FFrameNumber *)FVar18.Data,(FFrameNumber *)FVar18.Data);
            uVar21 = local_1f8._8_8_ & 0xffffffff;
            FVar18.Data = FVar18.Data + 4;
          }
          uVar23 = uVar23 + 1;
          pFVar19 = pFVar19 + 8;
          iVar16 = local_1e4;
        } while ((int)uVar23 < (int)(local_1e0 + 3));
      }
      uVar23 = local_1e0;
      TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::SetNum(&local_1f8,0,Default);
      uVar21 = local_1c0.Pairs._8_8_ & 0xffffffff;
      if (local_1c0.Pairs.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar21);
      }
      iVar20 = local_1f8.ArrayMax;
      local_1f8._8_8_ = local_1f8._8_8_ & 0xffffffff00000000;
      uVar24 = 0;
      if (iVar20 != local_1c0.Pairs.ArrayNum) {
        pwVar22 = (wchar_t *)&local_1f8;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_1c0.Pairs.ArrayNum,(ForAnyElementType *)pwVar22,0,&local_1f8.ArrayMax);
        uVar21 = local_1c0.Pairs._8_8_ & 0xffffffff;
        uVar24 = local_1f8.ArrayNum;
      }
      for (uVar17 = 0; (-1 < (int)uVar17 && ((int)uVar17 < (int)uVar21)); uVar17 = uVar17 + 1) {
        uVar9 = 0;
        if ((int)uVar17 < (int)uVar21) {
          uVar9 = ~uVar17 >> 0x1f;
        }
        if (uVar9 == 0) {
          pwVar22 = L"Array index out of bounds: %lld into an array of size %lld";
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar24 = local_1f8.ArrayNum;
        }
        pFVar19 = local_1c0.Pairs.AllocatorInstance.Data + (longlong)(int)uVar17 * 8;
        uVar9 = uVar24;
        if ((local_1f8.AllocatorInstance.Data <= pFVar19) &&
           (pFVar19 < local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayMax * 4)) {
          pwVar22 = 
          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
          ;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar9 = local_1f8.ArrayNum;
        }
        if (uVar9 == local_1f8.ArrayMax) {
          uVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_1f8.AllocatorInstance,&local_1f8.ArrayMax);
        }
        uVar24 = uVar9 + 1;
        local_1f8.ArrayNum = uVar24;
        *(int *)(local_1f8.AllocatorInstance.Data + (longlong)(int)uVar9 * 4) = *(int *)pFVar19;
        uVar21 = local_1c0.Pairs._8_8_ & 0xffffffff;
      }
      if (0 < (int)uVar24) {
        uVar17 = uVar24 - 1;
        local_1b0.Roll = 0.0;
        local_1b0.Pitch = 0.0;
        local_1b0.Yaw = 0.0;
        local_188.Value = *(int *)local_1f8.AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar17 < (int)uVar24) {
          uVar9 = ~uVar17 >> 0x1f;
        }
        local_190 = uVar24;
        if (uVar9 == 0) {
          pwVar22 = L"Array index out of bounds: %lld into an array of size %lld";
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_190 = local_1f8.ArrayNum;
        }
        iVar20 = local_1e4;
        uVar21 = (ulonglong)(int)local_190;
        lVar13 = (longlong)(int)uVar23;
        local_18c.Value = *(int *)(local_1f8.AllocatorInstance.Data + (longlong)(int)uVar17 * 4);
        local_138 = local_1f8.AllocatorInstance.Data + uVar21 * 4;
        FVar18.Data = local_1f8.AllocatorInstance.Data;
        uVar24 = local_190;
        while( true ) {
          pFVar19 = local_138;
          if (uVar24 != (uint)uVar21) {
            local_1e7[0] = 0;
            `TCheckedPointerIterator<FFrameNumber,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_1e7);
          }
          if (FVar18.Data == pFVar19) break;
          local_1c8[0] = 0.0;
          local_1d0 = 0.0;
          local_1cc = 0.0;
          uVar23 = (uint)((int)uVar23 < iVar20) & ~uVar23 >> 0x1f;
          if (uVar23 == 0) {
            pwVar22 = L"Array index out of bounds: %lld from an array of size %lld";
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          local_160 = *(uint *)FVar18.Data;
          uStack_15c = 0;
          FVar6.SubFrame = 0.0;
          FVar6.FrameNumber.Value = local_160;
          FMovieSceneFloatChannel::Evaluate
                    (*(FMovieSceneFloatChannel **)(local_1d8 + lVar13 * 8),FVar6,local_1c8);
          uVar24 = (uint)((int)local_198 < iVar20) & ~local_198 >> 0x1f;
          if (uVar24 == 0) {
            pwVar22 = L"Array index out of bounds: %lld from an array of size %lld";
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          local_170 = *(uint *)FVar18.Data;
          uStack_16c = 0;
          FVar4.SubFrame = 0.0;
          FVar4.FrameNumber.Value = local_170;
          FMovieSceneFloatChannel::Evaluate
                    (*(FMovieSceneFloatChannel **)(local_1d8 + (lVar13 + 1) * 8),FVar4,&local_1d0);
          uVar17 = (uint)((int)local_194 < iVar20) & ~local_194 >> 0x1f;
          if (uVar17 == 0) {
            pwVar22 = L"Array index out of bounds: %lld from an array of size %lld";
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          local_168 = *(uint *)FVar18.Data;
          uStack_164 = 0;
          FVar5.SubFrame = 0.0;
          FVar5.FrameNumber.Value = local_168;
          FMovieSceneFloatChannel::Evaluate
                    (*(FMovieSceneFloatChannel **)(local_1d8 + (lVar13 + 2) * 8),FVar5,&local_1cc);
          local_1b0.Pitch = (double)local_1d0;
          local_1b0.Yaw = (double)local_1cc;
          local_1b0.Roll = (double)local_1c8[0];
          if (param_2->bIsSet == false) {
            pTVar14 = UE::Math::TRotator<double>::Quaternion(&local_1b0,&local_68);
            local_128.X = pTVar14->X;
            local_128.Y = pTVar14->Y;
            local_128.Z = pTVar14->Z;
            local_128.W = pTVar14->W;
            local_d8.Data = (FScriptContainerElement *)local_128.X;
            FStack_d0.Data = (FScriptContainerElement *)local_128.Y;
            local_c8.Data = (FScriptContainerElement *)local_128.Z;
            FStack_c0.Data = (FScriptContainerElement *)local_128.W;
          }
          else {
            UE::Math::TRotator<double>::Euler(&local_1b0,&local_108);
            if ((param_2->bIsSet == false) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pwVar22 = (wchar_t *)&DAT_00000001;
            pTVar14 = AnimationCore::QuatFromEuler(&local_88,&local_108,param_2->TypedValue,true);
            local_128.X = pTVar14->X;
            local_128.Y = pTVar14->Y;
            local_128.Z = pTVar14->Z;
            local_128.W = pTVar14->W;
          }
          if (param_3->bIsSet == false) {
            pTVar15 = UE::Math::TRotator<double>::TRotator<double>(&local_a0,&local_128);
          }
          else {
            pwVar22 = (wchar_t *)&DAT_00000001;
            AnimationCore::EulerFromQuat(&local_f0,&local_128,param_3->TypedValue,true);
            pTVar15 = UE::Math::TRotator<double>::MakeFromEuler(&local_b8,&local_f0);
          }
          local_1b0.Pitch = pTVar15->Pitch;
          local_1b0.Yaw = pTVar15->Yaw;
          local_1b0.Roll = pTVar15->Roll;
          if (uVar23 == 0) {
            pwVar22 = L"Array index out of bounds: %lld from an array of size %lld";
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          AddKeyToChannel((FMovieSceneFloatChannel *)&stack0xfffffffffffffec0,
                          (FFrameNumber)(int)*(undefined8 *)(local_1d8 + lVar13 * 8),in_XMM2_Da,
                          (EMovieSceneKeyInterpolation)pwVar22);
          if (uVar24 == 0) {
            pwVar22 = L"Array index out of bounds: %lld from an array of size %lld";
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          AddKeyToChannel((FMovieSceneFloatChannel *)&stack0xfffffffffffffebc,
                          (FFrameNumber)(int)*(undefined8 *)(local_1d8 + (lVar13 + 1) * 8),
                          in_XMM2_Da,(EMovieSceneKeyInterpolation)pwVar22);
          if (uVar17 == 0) {
            pwVar22 = L"Array index out of bounds: %lld from an array of size %lld";
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          AddKeyToChannel((FMovieSceneFloatChannel *)&stack0xfffffffffffffeb8,
                          (FFrameNumber)(int)*(undefined8 *)(local_1d8 + (lVar13 + 2) * 8),
                          in_XMM2_Da,(EMovieSceneKeyInterpolation)pwVar22);
          FVar18.Data = FVar18.Data + 4;
          uVar21 = (ulonglong)local_190;
          uVar23 = local_1e0;
          uVar24 = local_1f8.ArrayNum;
        }
        FixRotationWinding(this,param_1,local_188,local_18c);
      }
      if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.AllocatorInstance.Data);
      }
      if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.AllocatorInstance.Data);
      }
      if (local_1c0.Pairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Pairs.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ClearAllParameters @ 14a3f1250

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::ClearAllParameters
          (UMovieSceneControlRigParameterSection *this)

{
  int *piVar1;
  longlong *plVar2;
  TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_> *this_01;
  TArray<FSpaceControlNameAndChannel,TSizedDefaultAllocator<32>_> *this_02;
  TArray<FConstraintAndActiveChannel,TSizedDefaultAllocator<32>_> *this_03;
  int iVar3;
  int iVar4;
  
  plVar2 = &this->_padding_;
  iVar3 = (int)this->_padding_;
  if (iVar3 < 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x128,8,-iVar3,(ForAnyElementType *)plVar2,(int *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
    DefaultConstructItems<FBoolParameterNameAndCurve,int>
              ((void *)((longlong)iVar4 * 0x128 + *plVar2),-iVar3);
  }
  else if (0 < iVar3) {
    TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              ((TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_> *)plVar2,0,iVar3);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x128,8,(ForAnyElementType *)plVar2,(int)this->_padding_,
               (int *)((longlong)&this->_padding_ + 4));
  }
  plVar2 = &this->_padding_;
  iVar3 = (int)this->_padding_;
  if (iVar3 < 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x130,8,-iVar3,(ForAnyElementType *)plVar2,(int *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
    DefaultConstructItems<FScalarParameterNameAndCurve,int>
              ((void *)((longlong)iVar4 * 0x130 + *plVar2),-iVar3);
  }
  else if (0 < iVar3) {
    TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              ((TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_> *)plVar2,0,iVar3);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x130,8,(ForAnyElementType *)plVar2,(int)this->_padding_,
               (int *)((longlong)&this->_padding_ + 4));
  }
  plVar2 = &this->_padding_;
  iVar3 = (int)this->_padding_;
  if (iVar3 < 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (600,8,-iVar3,(ForAnyElementType *)plVar2,(int *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
    DefaultConstructItems<FVector2DParameterNameAndCurves,int>
              ((void *)((longlong)iVar4 * 600 + *plVar2),-iVar3);
  }
  else if (0 < iVar3) {
    TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              ((TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)plVar2,0,iVar3
              );
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (600,8,(ForAnyElementType *)plVar2,(int)this->_padding_,
               (int *)((longlong)&this->_padding_ + 4));
  }
  plVar2 = &this->_padding_;
  iVar3 = (int)this->_padding_;
  if (iVar3 < 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x380,8,-iVar3,(ForAnyElementType *)plVar2,(int *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
    DefaultConstructItems<FVectorParameterNameAndCurves,int>
              ((void *)((longlong)iVar4 * 0x380 + *plVar2),-iVar3);
  }
  else if (0 < iVar3) {
    TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              ((TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)plVar2,0,iVar3);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x380,8,(ForAnyElementType *)plVar2,(int)this->_padding_,
               (int *)((longlong)&this->_padding_ + 4));
  }
  plVar2 = &this->_padding_;
  iVar3 = (int)this->_padding_;
  if (iVar3 < 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x4a8,8,-iVar3,(ForAnyElementType *)plVar2,(int *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
    DefaultConstructItems<FColorParameterNameAndCurves,int>
              ((void *)((longlong)iVar4 * 0x4a8 + *plVar2),-iVar3);
  }
  else if (0 < iVar3) {
    TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              ((TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)plVar2,0,iVar3);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x4a8,8,(ForAnyElementType *)plVar2,(int)this->_padding_,
               (int *)((longlong)&this->_padding_ + 4));
  }
  plVar2 = &this->_padding_;
  iVar3 = (int)this->_padding_;
  if (iVar3 < 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xa70,8,-iVar3,(ForAnyElementType *)plVar2,(int *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
    DefaultConstructItems<FTransformParameterNameAndCurves,int>
              ((void *)((longlong)iVar4 * 0xa70 + *plVar2),-iVar3);
  }
  else if (0 < iVar3) {
    TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              ((TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)plVar2,0,
               iVar3);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa70,8,(ForAnyElementType *)plVar2,(int)this->_padding_,
               (int *)((longlong)&this->_padding_ + 4));
  }
  this_00 = &this->EnumParameterNamesAndCurves;
  iVar3 = (this->EnumParameterNamesAndCurves).ArrayNum;
  piVar1 = &(this->EnumParameterNamesAndCurves).ArrayNum;
  if (iVar3 < 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x130,8,-iVar3,&this_00->AllocatorInstance,piVar1,
                       &(this->EnumParameterNamesAndCurves).ArrayMax);
    DefaultConstructItems<FEnumParameterNameAndCurve,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x130,-iVar3);
  }
  else if (0 < iVar3) {
    TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,0,iVar3);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x130,8,&this_00->AllocatorInstance,*piVar1,
               &(this->EnumParameterNamesAndCurves).ArrayMax);
  }
  this_01 = &this->IntegerParameterNamesAndCurves;
  iVar3 = (this->IntegerParameterNamesAndCurves).ArrayNum;
  piVar1 = &(this->IntegerParameterNamesAndCurves).ArrayNum;
  if (iVar3 < 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x128,8,-iVar3,&this_01->AllocatorInstance,piVar1,
                       &(this->IntegerParameterNamesAndCurves).ArrayMax);
    DefaultConstructItems<FIntegerParameterNameAndCurve,int>
              ((this_01->AllocatorInstance).Data + (longlong)iVar4 * 0x128,-iVar3);
  }
  else if (0 < iVar3) {
    TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_01,0,iVar3)
    ;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x128,8,&this_01->AllocatorInstance,*piVar1,
               &(this->IntegerParameterNamesAndCurves).ArrayMax);
  }
  this_02 = &this->SpaceChannels;
  iVar3 = (this->SpaceChannels).ArrayNum;
  piVar1 = &(this->SpaceChannels).ArrayNum;
  if (iVar3 < 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x150,8,-iVar3,&this_02->AllocatorInstance,piVar1,
                       &(this->SpaceChannels).ArrayMax);
    DefaultConstructItems<FSpaceControlNameAndChannel,int>
              ((this_02->AllocatorInstance).Data + (longlong)iVar4 * 0x150,-iVar3);
  }
  else if (0 < iVar3) {
    TArray<FSpaceControlNameAndChannel,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_02,0,iVar3);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x150,8,&this_02->AllocatorInstance,*piVar1,&(this->SpaceChannels).ArrayMax);
  }
  this_03 = &this->ConstraintsChannels;
  iVar3 = (this->ConstraintsChannels).ArrayNum;
  piVar1 = &(this->ConstraintsChannels).ArrayNum;
  if (iVar3 < 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x128,8,-iVar3,&this_03->AllocatorInstance,piVar1,
                       &(this->ConstraintsChannels).ArrayMax);
    DefaultConstructItems<FConstraintAndActiveChannel,int>
              ((this_03->AllocatorInstance).Data + (longlong)iVar4 * 0x128,-iVar3);
  }
  else if (0 < iVar3) {
    TArray<FConstraintAndActiveChannel,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_03,0,iVar3);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x128,8,&this_03->AllocatorInstance,*piVar1,&(this->ConstraintsChannels).ArrayMax);
  }
  return;
}

// ConvertMaskArrayToNameSet @ 14a3f56f0

/* WARNING: Removing unreachable block (ram,0x00014a3f57e9) */
/* WARNING: Removing unreachable block (ram,0x00014a3f5800) */
/* WARNING: Removing unreachable block (ram,0x00014a3f5813) */
/* WARNING: Removing unreachable block (ram,0x00014a3f5816) */
/* WARNING: Removing unreachable block (ram,0x00014a3f581a) */
/* WARNING: Removing unreachable block (ram,0x00014a3f584f) */
/* WARNING: Removing unreachable block (ram,0x00014a3f5850) */
/* WARNING: Removing unreachable block (ram,0x00014a3f585d) */
/* WARNING: Removing unreachable block (ram,0x00014a3f5867) */
/* WARNING: Removing unreachable block (ram,0x00014a3f586a) */
/* WARNING: Removing unreachable block (ram,0x00014a3f586e) */
/* WARNING: Removing unreachable block (ram,0x00014a3f589d) */
/* WARNING: Removing unreachable block (ram,0x00014a3f589e) */
/* WARNING: Removing unreachable block (ram,0x00014a3f58bb) */
/* WARNING: Removing unreachable block (ram,0x00014a3f58ca) */
/* WARNING: Removing unreachable block (ram,0x00014a3f591a) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::ConvertMaskArrayToNameSet
          (UMovieSceneControlRigParameterSection *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  int iVar3;
  UControlRig *pUVar4;
  bool bVar5;
  
  pUVar4 = (this->ControlRig).field0_0x0.DebugPtr;
  if ((pUVar4 != (UControlRig *)0x0) && (0 < (this->ControlsMask).ArrayNum)) {
    (**(code **)(pUVar4->_padding_ + 0x420))();
    if ((this->ControlsMask).ArrayNum == 0) {
      this_00 = &this->ControlNameMask;
      bVar5 = 1 < (this->ControlNameMask).HashSize;
      if (!bVar5) {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(this_00);
      }
      puVar1 = &(this->ControlNameMask).Elements.field_0xc;
      *(undefined4 *)&(this->ControlNameMask).Elements.field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->ControlNameMask).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->ControlNameMask).Elements.field_0x34 = 0;
      iVar3 = *(int *)&(this->ControlNameMask).Elements.field_0x2c;
      *(undefined4 *)&(this->ControlNameMask).Elements.field_0x28 = 0;
      if ((iVar3 < 0) || (0x80 < iVar3)) {
        *(undefined4 *)&(this->ControlNameMask).Elements.field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->ControlNameMask).Elements.field_0x10,0);
      }
      if (bVar5) {
        (this->ControlNameMask).HashSize = 1;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(this_00);
      }
    }
    piVar2 = &(this->ControlsMask).ArrayMax;
    (this->ControlsMask).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->ControlsMask).AllocatorInstance,0,piVar2);
    }
  }
  return;
}

// CopyVectorParameterCurvesToTransform @ 14a3ff1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterSection::CopyVectorParameterCurvesToTransform
          (UMovieSceneControlRigParameterSection *this,FName *param_1,ERigControlType param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  FTransformParameterNameAndCurves *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FName FVar9;
  ulonglong uVar10;
  uint uVar11;
  FName *pFVar12;
  FName *pFVar13;
  longlong lVar14;
  undefined1 auStack_b08 [32];
  FTransformParameterNameAndCurves *local_ae8;
  FTransformParameterNameAndCurves *local_ae0;
  longlong local_ad8;
  longlong local_ad0;
  undefined8 local_ac8;
  undefined1 local_ab8;
  undefined1 local_ab7 [3];
  uint local_ab4;
  FName *local_ab0;
  TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *local_aa8;
  FTransformParameterNameAndCurves local_aa0;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_b08;
  iVar3 = (int)this->_padding_;
  pFVar12 = (FName *)this->_padding_;
  FVar9 = *param_1;
  pFVar13 = pFVar12 + (longlong)iVar3 * 0x70;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      local_ab8 = 0;
      `TCheckedPointerIterator<FVectorParameterNameAndCurves_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_ab8);
    }
    if (pFVar12 == pFVar13) {
      return false;
    }
    if (*pFVar12 == FVar9) break;
    pFVar12 = pFVar12 + 0x70;
  }
  local_aa8 = UMovieSceneParameterSection::GetVectorParameterNamesAndCurves
                        ((UMovieSceneParameterSection *)this);
  local_ab4 = local_aa8->ArrayNum;
  uVar10 = (ulonglong)(int)local_ab4;
  pFVar12 = (FName *)(local_aa8->AllocatorInstance).Data;
  pFVar13 = pFVar12 + uVar10 * 0x70;
  local_ab0 = pFVar13;
  do {
    if (local_aa8->ArrayNum != (int)uVar10) {
      local_ab7[0] = 0;
      `TCheckedPointerIterator<FVectorParameterNameAndCurves,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_ab7);
    }
    if (pFVar12 == pFVar13) {
      return false;
    }
    FVar9 = *param_1;
    if (*pFVar12 == FVar9) {
      uVar11 = 0;
      if (0 < (int)this->_padding_) {
        lVar14 = 0;
        do {
          iVar3 = (int)this->_padding_;
          uVar8 = 0;
          if ((int)uVar11 < iVar3) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if (uVar8 == 0) {
            local_ae8 = (FTransformParameterNameAndCurves *)(longlong)(int)uVar11;
            local_ae0 = (FTransformParameterNameAndCurves *)(longlong)iVar3;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
          }
          FVar9 = *param_1;
          if (*(FName *)(lVar14 + this->_padding_) == FVar9) {
            if (uVar11 != 0xffffffff) goto LAB_14a3ff4c6;
            break;
          }
          uVar11 = uVar11 + 1;
          lVar14 = lVar14 + 0xa70;
        } while ((int)uVar11 < (int)this->_padding_);
      }
      plVar2 = &this->_padding_;
      local_aa0._padding_ = (longlong)FVar9;
      FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_aa0.Translation);
      FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_aa0.Translation + 1);
      FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_aa0.Translation + 2);
      FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_aa0.Rotation);
      FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_aa0.Rotation + 1);
      FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_aa0.Rotation + 2);
      FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_aa0.Scale);
      FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_aa0.Scale + 1);
      FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_aa0.Scale + 2);
      pFVar4 = (FTransformParameterNameAndCurves *)*plVar2;
      if ((pFVar4 <= &local_aa0) &&
         (lVar14 = (longlong)*(int *)((longlong)&this->_padding_ + 4), &local_aa0 < pFVar4 + lVar14)
         ) {
        local_ad0 = (longlong)(int)this->_padding_;
        local_ac8 = 0xa70;
        local_ae8 = &local_aa0;
        local_ae0 = pFVar4;
        local_ad8 = lVar14;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      uVar11 = (uint)this->_padding_;
      puVar1 = (uint *)((longlong)&this->_padding_ + 4);
      if (uVar11 == *puVar1) {
        uVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xa70,8,(ForAnyElementType *)plVar2,(int *)puVar1);
      }
      *(uint *)&this->_padding_ = uVar11 + 1;
      FTransformParameterNameAndCurves::FTransformParameterNameAndCurves
                ((FTransformParameterNameAndCurves *)(*plVar2 + (longlong)(int)uVar11 * 0xa70),
                 &local_aa0);
      FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_aa0.Scale + 2);
      FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_aa0.Scale + 1);
      FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_aa0.Scale);
      FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_aa0.Rotation + 2);
      FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_aa0.Rotation + 1);
      FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_aa0.Rotation);
      FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_aa0.Translation + 2);
      FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_aa0.Translation + 1);
      FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_aa0.Translation);
      pFVar13 = local_ab0;
      if (uVar11 != 0xffffffff) {
LAB_14a3ff4c6:
        iVar3 = (int)this->_padding_;
        uVar8 = 0;
        if ((int)uVar11 < iVar3) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_ae8 = (FTransformParameterNameAndCurves *)(longlong)(int)uVar11;
          local_ae0 = (FTransformParameterNameAndCurves *)(longlong)iVar3;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        lVar14 = (longlong)(int)uVar11 * 0xa70 + this->_padding_;
        if (param_2 == Position) {
          FMovieSceneFloatChannel::operator=
                    ((FMovieSceneFloatChannel *)(lVar14 + 8),
                     (FMovieSceneFloatChannel *)(pFVar12 + 1));
          FMovieSceneFloatChannel::operator=
                    ((FMovieSceneFloatChannel *)(lVar14 + 0x130),
                     (FMovieSceneFloatChannel *)(pFVar12 + 0x26));
          FMovieSceneFloatChannel::operator=
                    ((FMovieSceneFloatChannel *)(lVar14 + 600),
                     (FMovieSceneFloatChannel *)(pFVar12 + 0x4b));
          return true;
        }
        if (param_2 == Rotator) {
          FMovieSceneFloatChannel::operator=
                    ((FMovieSceneFloatChannel *)(lVar14 + 0x380),
                     (FMovieSceneFloatChannel *)(pFVar12 + 1));
          FMovieSceneFloatChannel::operator=
                    ((FMovieSceneFloatChannel *)(lVar14 + 0x4a8),
                     (FMovieSceneFloatChannel *)(pFVar12 + 0x26));
          FMovieSceneFloatChannel::operator=
                    ((FMovieSceneFloatChannel *)(lVar14 + 0x5d0),
                     (FMovieSceneFloatChannel *)(pFVar12 + 0x4b));
          return true;
        }
        pFVar13 = local_ab0;
        if (param_2 == Scale) {
          FMovieSceneFloatChannel::operator=
                    ((FMovieSceneFloatChannel *)(lVar14 + 0x6f8),
                     (FMovieSceneFloatChannel *)(pFVar12 + 1));
          FMovieSceneFloatChannel::operator=
                    ((FMovieSceneFloatChannel *)(lVar14 + 0x820),
                     (FMovieSceneFloatChannel *)(pFVar12 + 0x26));
          FMovieSceneFloatChannel::operator=
                    ((FMovieSceneFloatChannel *)(lVar14 + 0x948),
                     (FMovieSceneFloatChannel *)(pFVar12 + 0x4b));
          return true;
        }
      }
    }
    pFVar12 = pFVar12 + 0x70;
    uVar10 = (ulonglong)local_ab4;
  } while( true );
}

// EvaluateBoolParameter @ 14a4050d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TOptional<bool> __thiscall
UMovieSceneControlRigParameterSection::EvaluateBoolParameter
          (UMovieSceneControlRigParameterSection *this,FFrameTime *param_1,FName param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<bool> TVar4;
  FChannelMapInfo *pFVar5;
  FMovieSceneChannelProxy *this_00;
  UScriptStruct *pUVar6;
  FMovieSceneChannelEntry *pFVar7;
  uint uVar8;
  uint uVar9;
  FName in_R9;
  FScriptContainerElement *pFVar10;
  FFrameTime local_28 [2];
  
  *(undefined1 *)((longlong)&(param_1->FrameNumber).Value + 1) = 0;
  pFVar5 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
           ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                   *)&this->ControlChannelMap,in_R9);
  if (pFVar5 != (FChannelMapInfo *)0x0) {
    this_00 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this);
    pUVar6 = FMovieSceneBoolChannel::StaticStruct();
    pFVar7 = FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar6->_padding_);
    if (pFVar7 == (FMovieSceneChannelEntry *)0x0) {
      pFVar10 = (FScriptContainerElement *)0x0;
      uVar8 = 0;
    }
    else {
      uVar8 = (pFVar7->Channels).ArrayNum;
      pFVar10 = (pFVar7->Channels).AllocatorInstance.Data;
      if ((int)uVar8 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar4 = (TOptional<bool>)(*pcVar2)();
          return TVar4;
        }
      }
    }
    uVar1 = pFVar5->ChannelIndex;
    local_28[0].FrameNumber.Value._0_1_ = 0;
    uVar9 = 0;
    if ((int)uVar1 < (int)uVar8) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4 = (TOptional<bool>)(*pcVar2)();
        return TVar4;
      }
    }
    (**(code **)(**(longlong **)(pFVar10 + (longlong)(int)uVar1 * 8) + 0xa0))
              (*(longlong **)(pFVar10 + (longlong)(int)uVar1 * 8),*(undefined8 *)param_2,local_28);
    if (local_28 != param_1) {
      *(undefined1 *)&(param_1->FrameNumber).Value = (undefined1)local_28[0].FrameNumber.Value;
      *(undefined1 *)((longlong)&(param_1->FrameNumber).Value + 1) = 1;
    }
  }
  return SUB82(param_1,0);
}

// EvaluateColorParameter @ 14a405210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TOptional<FLinearColor> * __thiscall
UMovieSceneControlRigParameterSection::EvaluateColorParameter
          (UMovieSceneControlRigParameterSection *this,
          TOptional<FLinearColor> *__return_storage_ptr__,FFrameTime *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  FChannelMapInfo *pFVar3;
  FMovieSceneChannelProxy *this_00;
  UScriptStruct *pUVar4;
  FMovieSceneChannelEntry *pFVar5;
  TOptional<FLinearColor> *pTVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_28 [8];
  float fStack_20;
  float fStack_1c;
  
  __return_storage_ptr__->bIsSet = false;
  pFVar3 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
           ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                   *)&this->ControlChannelMap,param_2);
  if (pFVar3 != (FChannelMapInfo *)0x0) {
    this_00 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this);
    pUVar4 = FMovieSceneFloatChannel::StaticStruct();
    pFVar5 = FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar4->_padding_);
    uVar10 = 0;
    if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
      pFVar11 = (FScriptContainerElement *)0x0;
      uVar8 = uVar10;
    }
    else {
      uVar8 = (pFVar5->Channels).ArrayNum;
      pFVar11 = (pFVar5->Channels).AllocatorInstance.Data;
      if (((int)uVar8 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TOptional<FLinearColor> *)(*pcVar1)();
        return pTVar6;
      }
    }
    uVar9 = pFVar3->ChannelIndex;
    local_28 = (undefined1  [8])___xmm_3f800000000000000000000000000000;
    _fStack_20 = _UNK_150689648;
    uVar7 = uVar10;
    if ((int)uVar9 < (int)uVar8) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TOptional<FLinearColor> *)(*pcVar1)();
      return pTVar6;
    }
    FMovieSceneFloatChannel::Evaluate
              (*(FMovieSceneFloatChannel **)(pFVar11 + (longlong)(int)uVar9 * 8),*param_1,
               (float *)local_28);
    uVar9 = pFVar3->ChannelIndex + 1;
    if ((int)uVar9 < (int)uVar8) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TOptional<FLinearColor> *)(*pcVar1)();
      return pTVar6;
    }
    FMovieSceneFloatChannel::Evaluate
              (*(FMovieSceneFloatChannel **)(pFVar11 + (longlong)(int)uVar9 * 8),*param_1,
               (float *)(local_28 + 4));
    uVar9 = pFVar3->ChannelIndex + 2;
    uVar10 = 0;
    if ((int)uVar9 < (int)uVar8) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TOptional<FLinearColor> *)(*pcVar1)();
      return pTVar6;
    }
    FMovieSceneFloatChannel::Evaluate
              (*(FMovieSceneFloatChannel **)(pFVar11 + (longlong)(int)uVar9 * 8),*param_1,&fStack_20
              );
    uVar9 = pFVar3->ChannelIndex + 3;
    uVar10 = 0;
    if ((int)uVar9 < (int)uVar8) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TOptional<FLinearColor> *)(*pcVar1)();
      return pTVar6;
    }
    FMovieSceneFloatChannel::Evaluate
              (*(FMovieSceneFloatChannel **)(pFVar11 + (longlong)(int)uVar9 * 8),*param_1,&fStack_1c
              );
    if ((TOptional<FLinearColor> *)local_28 != __return_storage_ptr__) {
      *(undefined1 (*) [8])&(__return_storage_ptr__->TypedValue).field0_0x0 = local_28;
      *(undefined8 *)((longlong)&(__return_storage_ptr__->TypedValue).field0_0x0 + 8) = _fStack_20;
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// EvaluateEnumParameter @ 14a406cd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TOptional<unsigned_char> __thiscall
UMovieSceneControlRigParameterSection::EvaluateEnumParameter
          (UMovieSceneControlRigParameterSection *this,FFrameTime *param_1,FName param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<unsigned_char> TVar4;
  FChannelMapInfo *pFVar5;
  FMovieSceneChannelProxy *this_00;
  UScriptStruct *pUVar6;
  FMovieSceneChannelEntry *pFVar7;
  uint uVar8;
  uint uVar9;
  FName in_R9;
  FScriptContainerElement *pFVar10;
  FFrameTime local_28 [2];
  
  *(undefined1 *)((longlong)&(param_1->FrameNumber).Value + 1) = 0;
  pFVar5 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
           ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                   *)&this->ControlChannelMap,in_R9);
  if (pFVar5 != (FChannelMapInfo *)0x0) {
    this_00 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this);
    pUVar6 = FMovieSceneByteChannel::StaticStruct();
    pFVar7 = FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar6->_padding_);
    if (pFVar7 == (FMovieSceneChannelEntry *)0x0) {
      pFVar10 = (FScriptContainerElement *)0x0;
      uVar8 = 0;
    }
    else {
      uVar8 = (pFVar7->Channels).ArrayNum;
      pFVar10 = (pFVar7->Channels).AllocatorInstance.Data;
      if ((int)uVar8 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar4 = (TOptional<unsigned_char>)(*pcVar2)();
          return TVar4;
        }
      }
    }
    uVar1 = pFVar5->ChannelIndex;
    local_28[0].FrameNumber.Value._0_1_ = 0;
    uVar9 = 0;
    if ((int)uVar1 < (int)uVar8) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4 = (TOptional<unsigned_char>)(*pcVar2)();
        return TVar4;
      }
    }
    FMovieSceneByteChannel::Evaluate
              (*(FMovieSceneByteChannel **)(pFVar10 + (longlong)(int)uVar1 * 8),
               *(FFrameTime *)param_2,(uchar *)local_28);
    if (local_28 != param_1) {
      *(undefined1 *)&(param_1->FrameNumber).Value = (undefined1)local_28[0].FrameNumber.Value;
      *(undefined1 *)((longlong)&(param_1->FrameNumber).Value + 1) = 1;
    }
  }
  return SUB82(param_1,0);
}

// EvaluateIntegerParameter @ 14a406e00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TOptional<int> __thiscall
UMovieSceneControlRigParameterSection::EvaluateIntegerParameter
          (UMovieSceneControlRigParameterSection *this,FFrameTime *param_1,FName param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FChannelMapInfo *pFVar5;
  FMovieSceneChannelProxy *this_00;
  UScriptStruct *pUVar6;
  FMovieSceneChannelEntry *pFVar7;
  TOptional<int> TVar8;
  int iVar9;
  FName in_R9;
  FScriptContainerElement *pFVar10;
  long64 local_res8;
  FFrameTime local_28 [2];
  
  *(undefined1 *)&param_1->SubFrame = 0;
  pFVar5 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
           ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                   *)&this->ControlChannelMap,in_R9);
  if (pFVar5 != (FChannelMapInfo *)0x0) {
    this_00 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this);
    pUVar6 = FMovieSceneIntegerChannel::StaticStruct();
    pFVar7 = FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar6->_padding_);
    if (pFVar7 == (FMovieSceneChannelEntry *)0x0) {
      pFVar10 = (FScriptContainerElement *)0x0;
      iVar9 = 0;
    }
    else {
      iVar9 = (pFVar7->Channels).ArrayNum;
      pFVar10 = (pFVar7->Channels).AllocatorInstance.Data;
      if ((iVar9 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        TVar8 = (TOptional<int>)(*pcVar2)();
        return TVar8;
      }
    }
    uVar1 = pFVar5->ChannelIndex;
    uVar4 = 0;
    if ((int)uVar1 < iVar9) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      TVar8 = (TOptional<int>)(*pcVar2)();
      return TVar8;
    }
    local_res8 = 0;
    bVar3 = FMovieSceneIntegerChannel::Evaluate
                      (*(FMovieSceneIntegerChannel **)(pFVar10 + (longlong)(int)uVar1 * 8),
                       *(FFrameTime *)param_2,&local_res8);
    iVar9 = 0;
    if (bVar3) {
      iVar9 = (int)local_res8;
    }
    if (local_28 != param_1) {
      (param_1->FrameNumber).Value = iVar9;
      *(undefined1 *)&param_1->SubFrame = 1;
      return (TOptional<int>)param_1;
    }
  }
  return (TOptional<int>)param_1;
}

// EvaluateScalarParameter @ 14a406f50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TOptional<float> __thiscall
UMovieSceneControlRigParameterSection::EvaluateScalarParameter
          (UMovieSceneControlRigParameterSection *this,FFrameTime *param_1,FName param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FChannelMapInfo *pFVar4;
  FMovieSceneChannelProxy *this_00;
  UScriptStruct *pUVar5;
  FMovieSceneChannelEntry *pFVar6;
  TOptional<float> TVar7;
  uint uVar8;
  uint uVar9;
  FName in_R9;
  FScriptContainerElement *pFVar10;
  FFrameTime local_28 [2];
  
  *(undefined1 *)&param_1->SubFrame = 0;
  pFVar4 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
           ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                   *)&this->ControlChannelMap,in_R9);
  if (pFVar4 != (FChannelMapInfo *)0x0) {
    this_00 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this);
    pUVar5 = FMovieSceneFloatChannel::StaticStruct();
    pFVar6 = FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar5->_padding_);
    if (pFVar6 == (FMovieSceneChannelEntry *)0x0) {
      pFVar10 = (FScriptContainerElement *)0x0;
      uVar8 = 0;
    }
    else {
      uVar8 = (pFVar6->Channels).ArrayNum;
      pFVar10 = (pFVar6->Channels).AllocatorInstance.Data;
      if (((int)uVar8 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        TVar7 = (TOptional<float>)(*pcVar2)();
        return TVar7;
      }
    }
    uVar1 = pFVar4->ChannelIndex;
    local_28[0].FrameNumber.Value = 0;
    uVar9 = 0;
    if ((int)uVar1 < (int)uVar8) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      TVar7 = (TOptional<float>)(*pcVar2)();
      return TVar7;
    }
    FMovieSceneFloatChannel::Evaluate
              (*(FMovieSceneFloatChannel **)(pFVar10 + (longlong)(int)uVar1 * 8),
               *(FFrameTime *)param_2,(float *)local_28);
    if (local_28 != param_1) {
      (param_1->FrameNumber).Value = local_28[0].FrameNumber.Value;
      *(undefined1 *)&param_1->SubFrame = 1;
      return (TOptional<float>)param_1;
    }
  }
  return (TOptional<float>)param_1;
}

// EvaluateSpaceChannel @ 14a407090

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TOptional<FMovieSceneControlRigSpaceBaseKey> * __thiscall
UMovieSceneControlRigParameterSection::EvaluateSpaceChannel
          (UMovieSceneControlRigParameterSection *this,
          TOptional<FMovieSceneControlRigSpaceBaseKey> *__return_storage_ptr__,FFrameTime *param_1,
          FName param_2)

{
  FSpaceControlNameAndChannel *pFVar1;
  FMovieSceneControlRigSpaceBaseKey local_18;
  
  __return_storage_ptr__->bIsSet = false;
  pFVar1 = GetSpaceChannel(this,param_2);
  if (pFVar1 != (FSpaceControlNameAndChannel *)0x0) {
    local_18._0_4_ = local_18._0_4_ & 0xffffff00;
    local_18.ControlRigElement.Name.ComparisonIndex.Value = 0;
    local_18.ControlRigElement.Name.Number = 0;
    local_18.ControlRigElement._0_4_ = local_18.ControlRigElement._0_4_ & 0xffffff00;
    FMovieSceneControlRigSpaceChannel::Evaluate(&pFVar1->SpaceCurve,*param_1,&local_18);
    if ((TOptional<FMovieSceneControlRigSpaceBaseKey> *)&local_18 != __return_storage_ptr__) {
      (__return_storage_ptr__->TypedValue).SpaceType = local_18.SpaceType;
      *(int3 *)&(__return_storage_ptr__->TypedValue).field_0x1 = local_18._1_3_;
      (__return_storage_ptr__->TypedValue).ControlRigElement.Type = local_18.ControlRigElement.Type;
      *(int3 *)&(__return_storage_ptr__->TypedValue).ControlRigElement.field_0x1 =
           local_18.ControlRigElement._1_3_;
      (__return_storage_ptr__->TypedValue).ControlRigElement.Name = local_18.ControlRigElement.Name;
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// EvaluateTransformParameter @ 14a407110

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TOptional<FEulerTransform> * __thiscall
UMovieSceneControlRigParameterSection::EvaluateTransformParameter
          (UMovieSceneControlRigParameterSection *this,
          TOptional<FEulerTransform> *__return_storage_ptr__,FFrameTime *param_1,FName param_2)

{
  UControlRig *pUVar1;
  code *pcVar2;
  bool bVar3;
  FChannelMapInfo *pFVar4;
  FMovieSceneChannelProxy *this_00;
  UScriptStruct *pUVar5;
  FMovieSceneChannelEntry *pFVar6;
  TOptional<FEulerTransform> *pTVar7;
  longlong lVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FName local_res20;
  float local_e8 [4];
  float local_d8 [4];
  undefined8 local_c8;
  float local_c0 [2];
  TOptional<FEulerTransform> local_b8;
  
  __return_storage_ptr__->bIsSet = false;
  local_res20 = param_2;
  pFVar4 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
           ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                   *)&this->ControlChannelMap,param_2);
  if (pFVar4 == (FChannelMapInfo *)0x0) {
    return __return_storage_ptr__;
  }
  this_00 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this);
  pUVar5 = FMovieSceneFloatChannel::StaticStruct();
  pFVar6 = FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar5->_padding_);
  uVar13 = 0;
  if (pFVar6 == (FMovieSceneChannelEntry *)0x0) {
    pFVar10 = (FScriptContainerElement *)0x0;
    uVar9 = uVar13;
  }
  else {
    uVar9 = (pFVar6->Channels).ArrayNum;
    pFVar10 = (pFVar6->Channels).AllocatorInstance.Data;
    if ((int)uVar9 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TOptional<FEulerTransform> *)(*pcVar2)();
        return pTVar7;
      }
    }
  }
  uVar11 = pFVar4->ChannelIndex;
  local_c0[0] = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_e8[0] = 0.0;
  local_e8[1] = 0.0;
  local_e8[2] = 0.0;
  local_c8 = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  uVar12 = uVar13;
  if ((int)uVar11 < (int)uVar9) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  local_d8[0] = 0.0;
  local_d8[1] = 0.0;
  local_d8[2] = 0.0;
  if (uVar12 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TOptional<FEulerTransform> *)(*pcVar2)();
      return pTVar7;
    }
  }
  FMovieSceneFloatChannel::Evaluate
            (*(FMovieSceneFloatChannel **)(pFVar10 + (longlong)(int)uVar11 * 8),*param_1,local_e8);
  uVar11 = pFVar4->ChannelIndex + 1;
  if ((int)uVar11 < (int)uVar9) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TOptional<FEulerTransform> *)(*pcVar2)();
      return pTVar7;
    }
  }
  FMovieSceneFloatChannel::Evaluate
            (*(FMovieSceneFloatChannel **)(pFVar10 + (longlong)(int)uVar11 * 8),*param_1,
             local_e8 + 1);
  uVar12 = pFVar4->ChannelIndex + 2;
  uVar11 = 0;
  uVar13 = uVar11;
  if ((int)uVar12 < (int)uVar9) {
    uVar13 = ~uVar12 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TOptional<FEulerTransform> *)(*pcVar2)();
      return pTVar7;
    }
  }
  FMovieSceneFloatChannel::Evaluate
            (*(FMovieSceneFloatChannel **)(pFVar10 + (longlong)(int)uVar12 * 8),*param_1,
             local_e8 + 2);
  uVar12 = pFVar4->ChannelIndex + 3;
  uVar13 = uVar11;
  if ((int)uVar12 < (int)uVar9) {
    uVar13 = ~uVar12 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TOptional<FEulerTransform> *)(*pcVar2)();
      return pTVar7;
    }
  }
  FMovieSceneFloatChannel::Evaluate
            (*(FMovieSceneFloatChannel **)(pFVar10 + (longlong)(int)uVar12 * 8),*param_1,
             local_d8 + 2);
  uVar12 = pFVar4->ChannelIndex + 4;
  uVar13 = uVar11;
  if ((int)uVar12 < (int)uVar9) {
    uVar13 = ~uVar12 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TOptional<FEulerTransform> *)(*pcVar2)();
      return pTVar7;
    }
  }
  FMovieSceneFloatChannel::Evaluate
            (*(FMovieSceneFloatChannel **)(pFVar10 + (longlong)(int)uVar12 * 8),*param_1,local_d8);
  uVar13 = pFVar4->ChannelIndex + 5;
  if ((int)uVar13 < (int)uVar9) {
    uVar11 = ~uVar13 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TOptional<FEulerTransform> *)(*pcVar2)();
      return pTVar7;
    }
  }
  FMovieSceneFloatChannel::Evaluate
            (*(FMovieSceneFloatChannel **)(pFVar10 + (longlong)(int)uVar13 * 8),*param_1,
             local_d8 + 1);
  pUVar1 = (this->ControlRig).field0_0x0.DebugPtr;
  if (pUVar1 != (UControlRig *)0x0) {
    lVar8 = (**(code **)(pUVar1->_padding_ + 0x3c8))(pUVar1,&local_res20);
    if ((lVar8 != 0) && ((*(char *)(lVar8 + 0x231) == '\a' || (*(char *)(lVar8 + 0x231) == '\t'))))
    {
      uVar12 = pFVar4->ChannelIndex + 6;
      uVar11 = 0;
      uVar13 = uVar11;
      if ((int)uVar12 < (int)uVar9) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TOptional<FEulerTransform> *)(*pcVar2)();
          return pTVar7;
        }
      }
      FMovieSceneFloatChannel::Evaluate
                (*(FMovieSceneFloatChannel **)(pFVar10 + (longlong)(int)uVar12 * 8),*param_1,
                 (float *)&local_c8);
      uVar12 = pFVar4->ChannelIndex + 7;
      uVar13 = uVar11;
      if ((int)uVar12 < (int)uVar9) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TOptional<FEulerTransform> *)(*pcVar2)();
          return pTVar7;
        }
      }
      FMovieSceneFloatChannel::Evaluate
                (*(FMovieSceneFloatChannel **)(pFVar10 + (longlong)(int)uVar12 * 8),*param_1,
                 (float *)((longlong)&local_c8 + 4));
      uVar13 = pFVar4->ChannelIndex + 8;
      if ((int)uVar13 < (int)uVar9) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TOptional<FEulerTransform> *)(*pcVar2)();
          return pTVar7;
        }
      }
      FMovieSceneFloatChannel::Evaluate
                (*(FMovieSceneFloatChannel **)(pFVar10 + (longlong)(int)uVar13 * 8),*param_1,
                 local_c0);
    }
  }
  if (&local_b8 != __return_storage_ptr__) {
    (__return_storage_ptr__->TypedValue).Location.field0_0x0._s_0.X = (double)local_e8[0];
    (__return_storage_ptr__->TypedValue).Location.field0_0x0._s_0.Y = (double)local_e8[1];
    (__return_storage_ptr__->TypedValue).Location.field0_0x0._s_0.Z = (double)local_e8[2];
    (__return_storage_ptr__->TypedValue).Rotation.Pitch = (double)local_d8[0];
    (__return_storage_ptr__->TypedValue).Rotation.Yaw = (double)local_d8[1];
    (__return_storage_ptr__->TypedValue).Rotation.Roll = (double)local_d8[2];
    (__return_storage_ptr__->TypedValue).Scale.field0_0x0._s_0.X = (double)(float)local_c8;
    (__return_storage_ptr__->TypedValue).Scale.field0_0x0._s_0.Y = (double)local_c8._4_4_;
    (__return_storage_ptr__->TypedValue).Scale.field0_0x0._s_0.Z = (double)local_c0[0];
    __return_storage_ptr__->bIsSet = true;
  }
  return __return_storage_ptr__;
}

// EvaluateVector2DParameter @ 14a4076c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TOptional<UE::Math::TVector2<double>_> * __thiscall
UMovieSceneControlRigParameterSection::EvaluateVector2DParameter
          (UMovieSceneControlRigParameterSection *this,
          TOptional<UE::Math::TVector2<double>_> *__return_storage_ptr__,FFrameTime *param_1,
          FName param_2)

{
  code *pcVar1;
  bool bVar2;
  FChannelMapInfo *pFVar3;
  FMovieSceneChannelProxy *this_00;
  UScriptStruct *pUVar4;
  FMovieSceneChannelEntry *pFVar5;
  TOptional<UE::Math::TVector2<double>_> *pTVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  float local_res8 [2];
  
  __return_storage_ptr__->bIsSet = false;
  pFVar3 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
           ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                   *)&this->ControlChannelMap,param_2);
  if (pFVar3 != (FChannelMapInfo *)0x0) {
    this_00 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this);
    pUVar4 = FMovieSceneFloatChannel::StaticStruct();
    pFVar5 = FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar4->_padding_);
    if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
      pFVar10 = (FScriptContainerElement *)0x0;
      uVar7 = 0;
    }
    else {
      uVar7 = (pFVar5->Channels).ArrayNum;
      pFVar10 = (pFVar5->Channels).AllocatorInstance.Data;
      if (((int)uVar7 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TOptional<UE::Math::TVector2<double>_> *)(*pcVar1)();
        return pTVar6;
      }
    }
    uVar9 = pFVar3->ChannelIndex;
    local_res8[0] = 0.0;
    local_res8[1] = 0.0;
    uVar8 = 0;
    if ((int)uVar9 < (int)uVar7) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TOptional<UE::Math::TVector2<double>_> *)(*pcVar1)();
      return pTVar6;
    }
    FMovieSceneFloatChannel::Evaluate
              (*(FMovieSceneFloatChannel **)(pFVar10 + (longlong)(int)uVar9 * 8),*param_1,local_res8
              );
    uVar8 = pFVar3->ChannelIndex + 1;
    uVar9 = 0;
    if ((int)uVar8 < (int)uVar7) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TOptional<UE::Math::TVector2<double>_> *)(*pcVar1)();
      return pTVar6;
    }
    FMovieSceneFloatChannel::Evaluate
              (*(FMovieSceneFloatChannel **)(pFVar10 + (longlong)(int)uVar8 * 8),*param_1,
               local_res8 + 1);
    if ((TOptional<UE::Math::TVector2<double>_> *)&stack0xffffffffffffffc8 != __return_storage_ptr__
       ) {
      (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X = (double)local_res8[0];
      (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y = (double)local_res8[1];
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// EvaluateVectorParameter @ 14a407880

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TOptional<UE::Math::TVector<double>_> * __thiscall
UMovieSceneControlRigParameterSection::EvaluateVectorParameter
          (UMovieSceneControlRigParameterSection *this,
          TOptional<UE::Math::TVector<double>_> *__return_storage_ptr__,FFrameTime *param_1,
          FName param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FChannelMapInfo *pFVar4;
  FMovieSceneChannelProxy *this_00;
  UScriptStruct *pUVar5;
  FMovieSceneChannelEntry *pFVar6;
  TOptional<UE::Math::TVector<double>_> *pTVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  float local_48 [4];
  TOptional<UE::Math::TVector<double>_> local_38;
  
  __return_storage_ptr__->bIsSet = false;
  pFVar4 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
           ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                   *)&this->ControlChannelMap,param_2);
  if (pFVar4 != (FChannelMapInfo *)0x0) {
    this_00 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this);
    pUVar5 = FMovieSceneFloatChannel::StaticStruct();
    pFVar6 = FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar5->_padding_);
    if (pFVar6 == (FMovieSceneChannelEntry *)0x0) {
      pFVar10 = (FScriptContainerElement *)0x0;
      uVar8 = 0;
    }
    else {
      uVar8 = (pFVar6->Channels).ArrayNum;
      pFVar10 = (pFVar6->Channels).AllocatorInstance.Data;
      if (((int)uVar8 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TOptional<UE::Math::TVector<double>_> *)(*pcVar1)();
        return pTVar7;
      }
    }
    uVar3 = pFVar4->ChannelIndex;
    local_48[0] = 0.0;
    local_48[1] = 0.0;
    local_48[2] = 0.0;
    uVar9 = 0;
    if ((int)uVar3 < (int)uVar8) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TOptional<UE::Math::TVector<double>_> *)(*pcVar1)();
      return pTVar7;
    }
    FMovieSceneFloatChannel::Evaluate
              (*(FMovieSceneFloatChannel **)(pFVar10 + (longlong)(int)uVar3 * 8),*param_1,local_48);
    uVar9 = pFVar4->ChannelIndex + 1;
    uVar3 = 0;
    if ((int)uVar9 < (int)uVar8) {
      uVar3 = ~uVar9 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TOptional<UE::Math::TVector<double>_> *)(*pcVar1)();
      return pTVar7;
    }
    FMovieSceneFloatChannel::Evaluate
              (*(FMovieSceneFloatChannel **)(pFVar10 + (longlong)(int)uVar9 * 8),*param_1,
               local_48 + 1);
    uVar9 = pFVar4->ChannelIndex + 2;
    uVar3 = 0;
    if ((int)uVar9 < (int)uVar8) {
      uVar3 = ~uVar9 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TOptional<UE::Math::TVector<double>_> *)(*pcVar1)();
      return pTVar7;
    }
    FMovieSceneFloatChannel::Evaluate
              (*(FMovieSceneFloatChannel **)(pFVar10 + (longlong)(int)uVar9 * 8),*param_1,
               local_48 + 2);
    if (&local_38 != __return_storage_ptr__) {
      (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X = (double)local_48[0];
      (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y = (double)local_48[1];
      (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Z = (double)local_48[2];
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// FillControlNameMask @ 14a4093c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::FillControlNameMask
          (UMovieSceneControlRigParameterSection *this,bool param_1)

{
  undefined1 *puVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  longlong *plVar2;
  int iVar3;
  UControlRig *pUVar4;
  bool bVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  FName local_res18;
  longlong *local_28;
  undefined8 local_20;
  
  if ((this->ControlRig).field0_0x0.DebugPtr != (UControlRig *)0x0) {
    this_00 = &this->ControlNameMask;
    bVar5 = 1 < (this->ControlNameMask).HashSize;
    if (!bVar5) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(this_00);
    }
    puVar1 = &(this->ControlNameMask).Elements.field_0xc;
    *(undefined4 *)&(this->ControlNameMask).Elements.field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->ControlNameMask).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ControlNameMask).Elements.field_0x34 = 0;
    iVar3 = *(int *)&(this->ControlNameMask).Elements.field_0x2c;
    *(undefined4 *)&(this->ControlNameMask).Elements.field_0x28 = 0;
    if ((iVar3 < 0) || (0x80 < iVar3)) {
      *(undefined4 *)&(this->ControlNameMask).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->ControlNameMask).Elements.field_0x10,0);
    }
    if (bVar5) {
      (this->ControlNameMask).HashSize = 1;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(this_00);
    }
    if (!param_1) {
      pUVar4 = (this->ControlRig).field0_0x0.DebugPtr;
      local_28 = (longlong *)0x0;
      local_20 = 0;
      (**(code **)(pUVar4->_padding_ + 0x420))(pUVar4,&local_28);
      iVar3 = (int)local_20;
      plVar2 = local_28 + (int)local_20;
      plVar6 = local_28;
      while( true ) {
        if ((int)local_20 != iVar3) {
          `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (plVar6 == plVar2) break;
        if (*plVar6 != 0) {
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                    (this_00,&local_res18,(bool *)(*plVar6 + 0x14));
        }
        plVar6 = plVar6 + 1;
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
    }
    (**(code **)(this->_padding_ + 0x3a8))(this);
  }
  return;
}

// FindControlNameFromConstraintChannel @ 14a40a590

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FName * __thiscall
UMovieSceneControlRigParameterSection::FindControlNameFromConstraintChannel
          (UMovieSceneControlRigParameterSection *this,FMovieSceneConstraintChannel *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FName *pFVar9;
  FName FVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = (this->ConstraintsChannels).ArrayNum;
  uVar12 = (longlong)param_1 - (longlong)(this->ConstraintsChannels).AllocatorInstance.Data;
  if (uVar12 < (ulonglong)((longlong)iVar3 * 0x128)) {
    iVar13 = 0;
    uVar15 = (uint)(uVar12 / 0x128);
    uVar7 = 0;
    if ((int)uVar15 < iVar3) {
      uVar7 = ~uVar15 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FName *)(*pcVar5)();
      return pFVar9;
    }
    if ((this->ConstraintsChannels).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x128 !=
        (FScriptContainerElement *)0x0) {
      puVar1 = &(this->ControlChannelMap).field_0x10;
      iVar3 = *(int *)&(this->ControlChannelMap).field_0x28;
      uVar7 = 1;
      iVar16 = 0;
      iVar8 = 0;
      if (iVar3 != 0) {
        puVar18 = *(uint **)&(this->ControlChannelMap).field_0x20;
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)puVar1;
        }
        uVar14 = *puVar18;
        iVar16 = 0;
        while (uVar14 == 0) {
          lVar11 = (longlong)iVar13;
          iVar16 = iVar16 + 0x20;
          iVar13 = iVar13 + 1;
          iVar8 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14a40a6ee;
          uVar14 = puVar18[lVar11 + 1];
        }
        uVar7 = ~(uVar14 - 1) & uVar14;
        uVar12 = (ulonglong)uVar7 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_res10 = (int)lVar11;
        iVar8 = iVar16 + -1 + local_res10;
        if (iVar3 < iVar8) {
          iVar8 = iVar3;
        }
      }
LAB_14a40a6ee:
      uVar14 = *(uint *)&(this->ControlChannelMap).field_0x28;
      TStack_60._padding_ = CONCAT44(uVar7,iVar13);
      uVar7 = uVar14 & 0xffffffe0;
      TStack_60.CurrentBitIndex = iVar8;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar14 >> 5;
      TStack_60._28_4_ = local_9c;
      TStack_60.BaseBitIndex = iVar16;
      uStack_40 = CONCAT44(uStack_6c,
                           *(int *)&(this->ControlChannelMap).field_0x8 -
                           *(int *)&(this->ControlChannelMap).field_0x34);
      TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FName *)(*pcVar5)();
        return pFVar9;
      }
      uVar4 = *(uint *)&(this->ControlChannelMap).field_0x28;
      if (uVar14 != uVar4) {
        puVar17 = *(undefined1 **)&(this->ControlChannelMap).field_0x20;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = puVar1;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
        while (uVar14 == 0) {
          lVar11 = (longlong)iVar13;
          uVar7 = uVar7 + 0x20;
          iVar13 = iVar13 + 1;
          uVar14 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14a40a800;
          uVar14 = *(uint *)(puVar17 + lVar11 * 4 + 4);
        }
        uVar12 = (ulonglong)(~(uVar14 - 1) & uVar14) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar14 = (int)lVar11 + -1 + uVar7;
        if ((int)uVar4 < (int)uVar14) {
          uVar14 = uVar4;
        }
      }
LAB_14a40a800:
      while( true ) {
        if (*(int *)&(this->ControlChannelMap).field_0x8 -
            *(int *)&(this->ControlChannelMap).field_0x34 != (int)uStack_40) {
          `TSparseArray<TSparseSetElement<TTuple<FName,FChannelMapInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((TStack_60.CurrentBitIndex == uVar14) &&
           (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
        pFVar9 = (FName *)((longlong)TStack_60.CurrentBitIndex * 0x50 +
                          *(longlong *)&this->ControlChannelMap);
        FVar10 = pFVar9[7];
        FVar2 = (FName)((longlong)FVar10 + (longlong)(int)pFVar9[8].ComparisonIndex.Value * 4);
        for (; FVar10 != FVar2; FVar10 = (FName)((longlong)FVar10 + 4)) {
          if (*(int *)FVar10 == (int)(((longlong)(int)uVar15 * 0x128) / 0x128)) {
            return pFVar9;
          }
        }
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      }
    }
  }
  return &DummyName;
}

// FindControlNameFromSpaceChannel @ 14a40a8a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FName __thiscall
UMovieSceneControlRigParameterSection::FindControlNameFromSpaceChannel
          (UMovieSceneControlRigParameterSection *this,FMovieSceneControlRigSpaceChannel *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSpaceControlNameAndChannel *pFVar3;
  FName FVar4;
  undefined1 *in_R8;
  
  pFVar3 = UE::MovieScene::FindEntryWithinArrayByPtr<FSpaceControlNameAndChannel>
                     (&this->SpaceChannels,in_R8);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  if (pFVar3 != (FSpaceControlNameAndChannel *)0x0) {
    if ((FMovieSceneControlRigSpaceChannel *)in_R8 != &pFVar3->SpaceCurve) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSpaceChannel== &Space->SpaceCurve",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterSection.cpp"
                         ,0x573,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar4 = (FName)(*pcVar1)();
        return FVar4;
      }
    }
    FVar4 = pFVar3->ControlName;
  }
  param_1->_padding_ = (longlong)FVar4;
  return (FName)param_1;
}

// FixRotationWinding @ 14a40d7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::FixRotationWinding
          (UMovieSceneControlRigParameterSection *this,FName *param_1,FFrameNumber param_2,
          FFrameNumber param_3)

{
  char cVar1;
  UControlRig *pUVar2;
  FMovieSceneChannel *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FChannelMapInfo *pFVar7;
  FMovieSceneChannelProxy *this_00;
  UScriptStruct *pUVar8;
  FMovieSceneChannelEntry *pFVar9;
  longlong lVar10;
  FMovieSceneFloatValue *pFVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  char local_128;
  uint local_124;
  int local_120;
  FScriptContainerElement *local_118;
  longlong local_110;
  longlong local_108;
  TArrayView<FMovieSceneFloatValue,int> local_100;
  TArrayView<FMovieSceneFloatValue,int> local_f0;
  FMovieSceneChannelData local_e0;
  undefined1 *local_c8;
  FMovieSceneChannelData local_c0;
  undefined8 *local_a8;
  FMovieSceneChannelData local_a0;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_158;
  pFVar7 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
           ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                   *)&this->ControlChannelMap,*param_1);
  if ((pFVar7 != (FChannelMapInfo *)0x0) &&
     ((this->ControlRig).field0_0x0.DebugPtr != (UControlRig *)0x0)) {
    iVar6 = pFVar7->ChannelIndex;
    this_00 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this);
    pUVar8 = FMovieSceneFloatChannel::StaticStruct();
    pFVar9 = FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar8->_padding_);
    if (pFVar9 == (FMovieSceneChannelEntry *)0x0) {
      pFVar13 = (FScriptContainerElement *)0x0;
      iVar12 = 0;
      local_120 = 0;
    }
    else {
      iVar12 = (pFVar9->Channels).ArrayNum;
      pFVar13 = (pFVar9->Channels).AllocatorInstance.Data;
      local_120 = iVar12;
      if ((iVar12 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pUVar2 = (this->ControlRig).field0_0x0.DebugPtr;
    lVar10 = (**(code **)(pUVar2->_padding_ + 0x3c8))(pUVar2,param_1);
    if ((lVar10 != 0) &&
       ((cVar1 = *(char *)(lVar10 + 0x231), cVar1 == '\x06' || ((byte)(cVar1 - 7U) < 3)))) {
      local_110 = 3;
      lVar10 = 3;
      if (cVar1 == '\x06') {
        lVar10 = 0;
      }
      uVar15 = (int)lVar10 + iVar6;
      pFVar13 = pFVar13 + (lVar10 + iVar6) * 8;
      do {
        uVar16 = 0;
        uVar14 = (uint)((int)uVar15 < iVar12) & ~uVar15 >> 0x1f;
        local_124 = uVar15;
        local_118 = pFVar13;
        if (uVar14 == 0) {
          local_130 = (longlong)iVar12;
          local_138 = (longlong)(int)uVar15;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        fVar17 = 0.0;
        local_128 = '\0';
        lVar10 = 0;
        iVar6 = (**(code **)(**(longlong **)pFVar13 + 0x50))();
        local_108 = (longlong)iVar6;
        if (0 < local_108) {
          do {
            if (uVar14 == 0) {
              local_130 = (longlong)local_120;
              local_138 = (longlong)(int)uVar15;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            pFVar3 = *(FMovieSceneChannel **)pFVar13;
            FMovieSceneChannelData::FMovieSceneChannelData
                      (&local_e0,pFVar3,
                       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar3[1].KeyAddedEvent,
                       (FKeyHandleLookupTable *)&pFVar3[1].KeyDeletedEvent.field_0x8);
            local_c8 = &pFVar3[1].KeyAddedEvent.field_0x10;
            if (((local_e0.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
                (local_c8 == (undefined1 *)0x0)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Times && Values",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                                   ,0x122,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar6 = (local_e0.Times)->ArrayNum;
            pFVar13 = ((local_e0.Times)->AllocatorInstance).Data;
            if ((iVar6 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar15 = 0;
            if ((int)uVar16 < iVar6) {
              uVar15 = ~uVar16 >> 0x1f;
            }
            if (uVar15 == 0) {
              local_138 = (longlong)(int)uVar16;
              local_130 = (longlong)iVar6;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            uVar15 = local_124;
            iVar6 = *(int *)(pFVar13 + lVar10 * 4);
            if ((param_2.Value <= iVar6) && (iVar6 <= param_3.Value)) {
              if (uVar14 == 0) {
                local_130 = (longlong)local_120;
                local_138 = (longlong)(int)local_124;
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              pFVar3 = *(FMovieSceneChannel **)local_118;
              FMovieSceneChannelData::FMovieSceneChannelData
                        (&local_c0,pFVar3,
                         (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)
                         &pFVar3[1].KeyAddedEvent,
                         (FKeyHandleLookupTable *)&pFVar3[1].KeyDeletedEvent.field_0x8);
              local_a8 = (undefined8 *)&pFVar3[1].KeyAddedEvent.field_0x10;
              if (((local_c0.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
                  (local_a8 == (undefined8 *)0x0)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Times && Values",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                                     ,0x122,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_100.DataPtr = (FMovieSceneFloatValue *)*local_a8;
              iVar6 = *(int *)(local_a8 + 1);
              if ((iVar6 < 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_100.ArrayNum = iVar6;
              pFVar11 = TArrayView<FMovieSceneFloatValue,int>::operator[](&local_100,uVar16);
              local_80._0_4_ = pFVar11->Value;
              local_80._4_4_ = (pFVar11->Tangent).ArriveTangent;
              uStack_78._0_4_ = (pFVar11->Tangent).LeaveTangent;
              uStack_78._4_4_ = (pFVar11->Tangent).ArriveTangentWeight;
              local_70._0_4_ = (pFVar11->Tangent).LeaveTangentWeight;
              local_70._4_1_ = (pFVar11->Tangent).TangentWeightMode;
              local_70._5_1_ = (pFVar11->Tangent).UnserializedPaddingBytes[0];
              local_70._6_1_ = (pFVar11->Tangent).UnserializedPaddingBytes[1];
              local_70._7_1_ = (pFVar11->Tangent).UnserializedPaddingBytes[2];
              local_68._0_1_ = pFVar11->InterpMode;
              local_68._1_1_ = pFVar11->TangentMode;
              local_68._2_1_ = pFVar11->PaddingByte;
              local_68._3_1_ = pFVar11->UnserializedPaddingBytes[0];
              if (local_128 == '\x01') {
                FMath::WindRelativeAnglesDegrees(fVar17,(float *)&local_80);
                if (uVar14 == 0) {
                  local_130 = (longlong)local_120;
                  local_138 = (longlong)(int)uVar15;
                  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld");
                  if (bVar5) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
                pFVar3 = *(FMovieSceneChannel **)local_118;
                FMovieSceneChannelData::FMovieSceneChannelData
                          (&local_a0,pFVar3,
                           (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)
                           &pFVar3[1].KeyAddedEvent,
                           (FKeyHandleLookupTable *)&pFVar3[1].KeyDeletedEvent.field_0x8);
                local_88 = (undefined8 *)&pFVar3[1].KeyAddedEvent.field_0x10;
                if (((local_a0.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
                    (local_88 == (undefined8 *)0x0)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Times && Values",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                                       ,0x122,L""), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                local_f0.DataPtr = (FMovieSceneFloatValue *)*local_88;
                iVar6 = *(int *)(local_88 + 1);
                if ((iVar6 < 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InCount >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0xeb,L""), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                local_f0.ArrayNum = iVar6;
                pFVar11 = TArrayView<FMovieSceneFloatValue,int>::operator[](&local_f0,uVar16);
                pFVar11->Value = (float)local_80;
              }
              else {
                local_128 = '\x01';
              }
              fVar17 = (float)local_80;
            }
            uVar16 = uVar16 + 1;
            lVar10 = lVar10 + 1;
            pFVar13 = local_118;
            uVar15 = local_124;
          } while (lVar10 < local_108);
        }
        uVar15 = uVar15 + 1;
        pFVar13 = pFVar13 + 8;
        local_110 = local_110 + -1;
        iVar12 = local_120;
      } while (local_110 != 0);
    }
  }
  return;
}

// ForEachParameter @ 14a40ef20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::ForEachParameter
          (UMovieSceneControlRigParameterSection *this,TOptional<ERigControlType> param_1,
          TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *param_2)

{
  TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *pTVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined6 in_register_00000012;
  TFunction<void___cdecl(FBaseParameterNameAndValue_*)> local_38;
  
  if (((undefined1 *)CONCAT62(in_register_00000012,param_1))[1] == '\0') {
    local_38._0_8_ = *(undefined8 *)param_2;
    local_38._40_8_ = 0;
    if (local_38._0_8_ != 0) {
      puVar2 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar2)(puVar2,&local_38.field_0x10);
    }
    ForEachParameter(this,&local_38);
    if (*(longlong *)param_2 != 0) {
      plVar3 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar3 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  else {
    switch(*(undefined1 *)CONCAT62(in_register_00000012,param_1)) {
    case 0:
      pTVar1 = TFunction<void___cdecl(FBaseParameterNameAndValue_*)>::
               TFunction<void___cdecl(FBaseParameterNameAndValue_*)>(&local_38,param_2);
      ForEachParameter<FBoolParameterNameAndCurve>
                (this,(TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_> *)
                      &this->_padding_,pTVar1);
      break;
    case 1:
    case 10:
      pTVar1 = TFunction<void___cdecl(FBaseParameterNameAndValue_*)>::
               TFunction<void___cdecl(FBaseParameterNameAndValue_*)>(&local_38,param_2);
      ForEachParameter<FScalarParameterNameAndCurve>
                (this,(TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_> *)
                      &this->_padding_,pTVar1);
      break;
    case 2:
      pTVar1 = TFunction<void___cdecl(FBaseParameterNameAndValue_*)>::
               TFunction<void___cdecl(FBaseParameterNameAndValue_*)>(&local_38,param_2);
      ForEachParameter<FIntegerParameterNameAndCurve>
                (this,&this->IntegerParameterNamesAndCurves,pTVar1);
      pTVar1 = TFunction<void___cdecl(FBaseParameterNameAndValue_*)>::
               TFunction<void___cdecl(FBaseParameterNameAndValue_*)>(&local_38,param_2);
      ForEachParameter<FEnumParameterNameAndCurve>(this,&this->EnumParameterNamesAndCurves,pTVar1);
      break;
    case 3:
      pTVar1 = TFunction<void___cdecl(FBaseParameterNameAndValue_*)>::
               TFunction<void___cdecl(FBaseParameterNameAndValue_*)>(&local_38,param_2);
      ForEachParameter<FVector2DParameterNameAndCurves>
                (this,(TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)
                      &this->_padding_,pTVar1);
      break;
    case 4:
    case 5:
    case 6:
      pTVar1 = TFunction<void___cdecl(FBaseParameterNameAndValue_*)>::
               TFunction<void___cdecl(FBaseParameterNameAndValue_*)>(&local_38,param_2);
      ForEachParameter<FVectorParameterNameAndCurves>
                (this,(TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)
                      &this->_padding_,pTVar1);
      break;
    case 7:
    case 8:
    case 9:
      pTVar1 = TFunction<void___cdecl(FBaseParameterNameAndValue_*)>::
               TFunction<void___cdecl(FBaseParameterNameAndValue_*)>(&local_38,param_2);
      ForEachParameter<FTransformParameterNameAndCurves>
                (this,(TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)
                      &this->_padding_,pTVar1);
    }
    if (*(longlong *)param_2 != 0) {
      plVar3 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar3 = *(longlong **)&param_2->field_0x28;
      }
                    /* WARNING: Could not recover jumptable at 0x00014a40f0d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}

// ForEachParameter @ 14a40f110

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::ForEachParameter
          (UMovieSceneControlRigParameterSection *this,
          TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_88 [16];
  code *local_78 [2];
  longlong local_68 [3];
  longlong *local_50;
  longlong local_48 [2];
  
  puVar6 = (undefined8 *)&param_1->field_0x10;
  local_78[0] = *(code **)param_1;
  local_50 = (longlong *)0x0;
  if (local_78[0] != (code *)0x0) {
    puVar4 = puVar6;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar4)(puVar4,local_68);
  }
  ForEachParameter<FScalarParameterNameAndCurve>
            (this,(TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_> *)
                  &this->_padding_,(TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *)local_78
            );
  local_78[0] = *(code **)param_1;
  local_50 = (longlong *)0x0;
  if (local_78[0] != (code *)0x0) {
    puVar4 = puVar6;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar4)(puVar4,local_68);
  }
  ForEachParameter<FBoolParameterNameAndCurve>
            (this,(TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_> *)&this->_padding_
             ,(TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *)local_78);
  local_78[0] = *(code **)param_1;
  local_50 = (longlong *)0x0;
  if (local_78[0] != (code *)0x0) {
    puVar4 = puVar6;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar4)(puVar4,local_68);
  }
  ForEachParameter<FEnumParameterNameAndCurve>
            (this,&this->EnumParameterNamesAndCurves,
             (TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *)local_78);
  local_78[0] = *(code **)param_1;
  local_50 = (longlong *)0x0;
  if (local_78[0] != (code *)0x0) {
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,local_68);
  }
  ForEachParameter<FIntegerParameterNameAndCurve>
            (this,&this->IntegerParameterNamesAndCurves,
             (TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *)local_78);
  local_78[0] = *(code **)param_1;
  local_50 = (longlong *)0x0;
  if (local_78[0] != (code *)0x0) {
    puVar6 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,local_68);
  }
  ForEachParameter<FVector2DParameterNameAndCurves>
            (this,(TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)
                  &this->_padding_,(TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *)local_78
            );
  local_78[0] = *(code **)param_1;
  local_50 = (longlong *)0x0;
  if (local_78[0] != (code *)0x0) {
    puVar6 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,local_68);
  }
  ForEachParameter<FVectorParameterNameAndCurves>
            (this,(TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)
                  &this->_padding_,(TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *)local_78
            );
  local_78[0] = *(code **)param_1;
  local_50 = (longlong *)0x0;
  if (local_78[0] != (code *)0x0) {
    puVar6 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,local_68);
  }
  if (local_78[0] != (code *)0x0) {
    lVar7 = this->_padding_;
    iVar1 = (int)this->_padding_;
    lVar8 = (longlong)iVar1 * 0x4a8 + lVar7;
    while( true ) {
      if ((int)this->_padding_ != iVar1) {
        `TCheckedPointerIterator<FColorParameterNameAndCurves,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_88);
      }
      if (lVar7 == lVar8) break;
      local_48[0] = lVar7;
      UE::Core::Private::Function::CheckCallable(local_78[0]);
      pcVar2 = local_78[0];
      plVar5 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar5 = local_50;
      }
      uVar3 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar3,local_48);
      lVar7 = lVar7 + 0x4a8;
    }
    if (local_78[0] != (code *)0x0) {
      plVar5 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar5 = local_50;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  local_78[0] = *(code **)param_1;
  local_50 = (longlong *)0x0;
  if (local_78[0] != (code *)0x0) {
    puVar6 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,local_68);
  }
  ForEachParameter<FTransformParameterNameAndCurves>
            (this,(TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)
                  &this->_padding_,(TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *)local_78
            );
  if (*(longlong *)param_1 != 0) {
    plVar5 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

// GetActiveCategoryIndex @ 14a4108d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
UMovieSceneControlRigParameterSection::GetActiveCategoryIndex
          (UMovieSceneControlRigParameterSection *this,FName param_1)

{
  FChannelMapInfo *pFVar1;
  FName *pFVar2;
  
  pFVar1 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
           ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                   *)&this->ControlChannelMap,param_1);
  if (pFVar1 != (FChannelMapInfo *)0x0) {
    pFVar2 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                       (&this->ControlNameMask,param_1);
    if (pFVar2 == (FName *)0x0) {
      return pFVar1->CategoryIndex;
    }
  }
  return -1;
}

// GetChannelMetaData @ 14a411a60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlRigChannelMetaData * __thiscall
UMovieSceneControlRigParameterSection::GetChannelMetaData
          (UMovieSceneControlRigParameterSection *this,
          FControlRigChannelMetaData *__return_storage_ptr__,FMovieSceneChannel *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  uint uVar5;
  FControlRigChannelMetaData *pFVar6;
  FSpaceControlNameAndChannel *pFVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  FName *pFVar12;
  
  iVar1 = (int)this->_padding_;
  uVar8 = (longlong)param_1 - this->_padding_;
  if (uVar8 < (ulonglong)((longlong)iVar1 * 0xa70)) {
    uVar10 = (uint)(uVar8 / 0xa70);
    uVar5 = 0;
    if ((int)uVar10 < iVar1) {
      uVar5 = ~uVar10 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FControlRigChannelMetaData *)(*pcVar2)();
      return pFVar6;
    }
    pFVar12 = (FName *)(this->_padding_ + (longlong)(int)uVar10 * 0xa70);
    if (pFVar12 != (FName *)0x0) {
      uVar5 = (uint)(((longlong)(int)uVar10 * 0xa70) / 0xa70);
      if ((((int)uVar5 < 0) || (0xfffffe < (int)uVar5)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterSection.cpp"
                             ,0x65,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FControlRigChannelMetaData *)(*pcVar2)();
        return pFVar6;
      }
      __return_storage_ptr__->ControlName = *pFVar12;
      __return_storage_ptr__->Type = Parameter_Transform;
      __return_storage_ptr__->IndexWithinControl =
           (int)(((longlong)param_1 + (-8 - (longlong)pFVar12)) / 0x128);
      __return_storage_ptr__->EntitySystemID = uVar5 | 0x7000000;
      return __return_storage_ptr__;
    }
  }
  iVar1 = (int)this->_padding_;
  uVar8 = (longlong)param_1 - this->_padding_;
  uVar5 = 0;
  if (uVar8 < (ulonglong)((longlong)iVar1 * 0x380)) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar8;
    lVar9 = SUB168(ZEXT816(0x2492492492492493) * auVar3,8);
    uVar11 = (uint)((uVar8 - lVar9 >> 1) + lVar9 >> 9);
    uVar10 = uVar5;
    if ((int)uVar11 < iVar1) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FControlRigChannelMetaData *)(*pcVar2)();
      return pFVar6;
    }
    pFVar12 = (FName *)(this->_padding_ + (longlong)(int)uVar11 * 0x380);
    if (pFVar12 != (FName *)0x0) {
      uVar5 = (uint)(((longlong)(int)uVar11 * 0x380) / 0x380);
      if ((((int)uVar5 < 0) || (0xfffffe < (int)uVar5)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterSection.cpp"
                             ,0x65,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FControlRigChannelMetaData *)(*pcVar2)();
        return pFVar6;
      }
      __return_storage_ptr__->ControlName = *pFVar12;
      __return_storage_ptr__->Type = Parameter_Vector;
      __return_storage_ptr__->IndexWithinControl =
           (int)(((longlong)param_1 + (-8 - (longlong)pFVar12)) / 0x128);
      __return_storage_ptr__->EntitySystemID = uVar5 | 0x6000000;
      return __return_storage_ptr__;
    }
  }
  iVar1 = (this->EnumParameterNamesAndCurves).ArrayNum;
  uVar8 = (longlong)param_1 - (longlong)(this->EnumParameterNamesAndCurves).AllocatorInstance.Data;
  if (uVar8 < (ulonglong)((longlong)iVar1 * 0x130)) {
    uVar11 = (uint)(uVar8 / 0x130);
    uVar10 = uVar5;
    if ((int)uVar11 < iVar1) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FControlRigChannelMetaData *)(*pcVar2)();
      return pFVar6;
    }
    pFVar12 = (FName *)((this->EnumParameterNamesAndCurves).AllocatorInstance.Data +
                       (longlong)(int)uVar11 * 0x130);
    if (pFVar12 != (FName *)0x0) {
      if ((param_1 != (FMovieSceneChannel *)(pFVar12 + 1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Channel == &Enum->ParameterCurve",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterSection.cpp"
                             ,0xaea,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FControlRigChannelMetaData *)(*pcVar2)();
        return pFVar6;
      }
      lVar9 = (longlong)pFVar12 -
              (longlong)(this->EnumParameterNamesAndCurves).AllocatorInstance.Data;
      lVar9 = lVar9 / 0x26 + (lVar9 >> 0x3f);
      uVar5 = UE::MovieScene::EncodeControlRigEntityID
                        ((int)(lVar9 >> 3) - (int)(lVar9 >> 0x3f),EnumParameter);
      __return_storage_ptr__->ControlName = *pFVar12;
      __return_storage_ptr__->Type = Parameter_Enum;
      __return_storage_ptr__->IndexWithinControl = 0;
      __return_storage_ptr__->EntitySystemID = uVar5;
      return __return_storage_ptr__;
    }
  }
  iVar1 = (this->IntegerParameterNamesAndCurves).ArrayNum;
  uVar8 = (longlong)param_1 -
          (longlong)(this->IntegerParameterNamesAndCurves).AllocatorInstance.Data;
  if (uVar8 < (ulonglong)((longlong)iVar1 * 0x128)) {
    uVar11 = (uint)(uVar8 / 0x128);
    uVar10 = 0;
    if ((int)uVar11 < iVar1) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FControlRigChannelMetaData *)(*pcVar2)();
      return pFVar6;
    }
    pFVar12 = (FName *)((this->IntegerParameterNamesAndCurves).AllocatorInstance.Data +
                       (longlong)(int)uVar11 * 0x128);
    if (pFVar12 != (FName *)0x0) {
      if ((param_1 != (FMovieSceneChannel *)(pFVar12 + 1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Channel == &Integer->ParameterCurve",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterSection.cpp"
                             ,0xaf6,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FControlRigChannelMetaData *)(*pcVar2)();
        return pFVar6;
      }
      uVar5 = UE::MovieScene::EncodeControlRigEntityID
                        ((int)(((longlong)pFVar12 -
                               (longlong)
                               (this->IntegerParameterNamesAndCurves).AllocatorInstance.Data) /
                              0x128),IntegerParameter);
      __return_storage_ptr__->ControlName = *pFVar12;
      __return_storage_ptr__->Type = Parameter_Integer;
      __return_storage_ptr__->IndexWithinControl = 0;
      __return_storage_ptr__->EntitySystemID = uVar5;
      return __return_storage_ptr__;
    }
  }
  pFVar7 = UE::MovieScene::FindEntryWithinArrayByPtr<FSpaceControlNameAndChannel>
                     (&this->SpaceChannels,param_1);
  if (pFVar7 == (FSpaceControlNameAndChannel *)0x0) {
    iVar1 = (int)this->_padding_;
    uVar8 = (longlong)param_1 - this->_padding_;
    if (uVar8 < (ulonglong)((longlong)iVar1 * 0x128)) {
      uVar11 = (uint)(uVar8 / 0x128);
      uVar10 = uVar5;
      if ((int)uVar11 < iVar1) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FControlRigChannelMetaData *)(*pcVar2)();
        return pFVar6;
      }
      pFVar12 = (FName *)((longlong)(int)uVar11 * 0x128 + this->_padding_);
      if (pFVar12 != (FName *)0x0) {
        if ((param_1 != (FMovieSceneChannel *)(pFVar12 + 1)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Channel == &Bool->ParameterCurve",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterSection.cpp"
                               ,0xb0e,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FControlRigChannelMetaData *)(*pcVar2)();
          return pFVar6;
        }
        uVar5 = UE::MovieScene::EncodeControlRigEntityID
                          ((int)(((longlong)pFVar12 - this->_padding_) / 0x128),BoolParameter);
        __return_storage_ptr__->ControlName = *pFVar12;
        __return_storage_ptr__->Type = Parameter_Bool;
        __return_storage_ptr__->IndexWithinControl = 0;
        __return_storage_ptr__->EntitySystemID = uVar5;
        return __return_storage_ptr__;
      }
    }
    iVar1 = (int)this->_padding_;
    uVar8 = (longlong)param_1 - this->_padding_;
    if (uVar8 < (ulonglong)((longlong)iVar1 * 0x130)) {
      uVar11 = (uint)(uVar8 / 0x130);
      uVar10 = uVar5;
      if ((int)uVar11 < iVar1) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FControlRigChannelMetaData *)(*pcVar2)();
        return pFVar6;
      }
      pFVar12 = (FName *)((longlong)(int)uVar11 * 0x130 + this->_padding_);
      if (pFVar12 != (FName *)0x0) {
        if ((param_1 != (FMovieSceneChannel *)(pFVar12 + 1)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Channel == &Scalar->ParameterCurve",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterSection.cpp"
                               ,0xb1a,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FControlRigChannelMetaData *)(*pcVar2)();
          return pFVar6;
        }
        lVar9 = (longlong)pFVar12 - this->_padding_;
        lVar9 = lVar9 / 0x26 + (lVar9 >> 0x3f);
        uVar5 = UE::MovieScene::EncodeControlRigEntityID
                          ((int)(lVar9 >> 3) - (int)(lVar9 >> 0x3f),ScalarParameter);
        __return_storage_ptr__->ControlName = *pFVar12;
        __return_storage_ptr__->Type = Parameter_Scalar;
        __return_storage_ptr__->IndexWithinControl = 0;
        __return_storage_ptr__->EntitySystemID = uVar5;
        return __return_storage_ptr__;
      }
    }
    iVar1 = (int)this->_padding_;
    uVar8 = (longlong)param_1 - this->_padding_;
    if (uVar8 < (ulonglong)((longlong)iVar1 * 600)) {
      uVar10 = (uint)(uVar8 / 600);
      if ((int)uVar10 < iVar1) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FControlRigChannelMetaData *)(*pcVar2)();
        return pFVar6;
      }
      pFVar12 = (FName *)((longlong)(int)uVar10 * 600 + this->_padding_);
      if (pFVar12 != (FName *)0x0) {
        uVar5 = UE::MovieScene::EncodeControlRigEntityID
                          ((int)(((longlong)pFVar12 - this->_padding_) / 600),VectorParameter);
        __return_storage_ptr__->ControlName = *pFVar12;
        __return_storage_ptr__->Type = Parameter_Vector;
        __return_storage_ptr__->EntitySystemID = uVar5;
        __return_storage_ptr__->IndexWithinControl =
             (int)(((longlong)param_1 + (-8 - (longlong)pFVar12)) / 0x128);
        return __return_storage_ptr__;
      }
    }
    __return_storage_ptr__->Type = Num;
    (__return_storage_ptr__->ControlName).ComparisonIndex = 0;
    (__return_storage_ptr__->ControlName).Number = 0;
    __return_storage_ptr__->IndexWithinControl = -1;
    __return_storage_ptr__->EntitySystemID = 0xffffffff;
  }
  else {
    if (((FMovieSceneControlRigSpaceChannel *)param_1 != &pFVar7->SpaceCurve) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Channel == &Space->SpaceCurve",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterSection.cpp"
                           ,0xb02,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FControlRigChannelMetaData *)(*pcVar2)();
      return pFVar6;
    }
    lVar9 = (longlong)pFVar7 - (longlong)(this->SpaceChannels).AllocatorInstance.Data;
    lVar9 = lVar9 + SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar9),8);
    uVar5 = UE::MovieScene::EncodeControlRigEntityID
                      ((int)((ulonglong)lVar9 >> 8) - (int)(lVar9 >> 0x3f),Space);
    __return_storage_ptr__->ControlName = pFVar7->ControlName;
    __return_storage_ptr__->Type = Space;
    __return_storage_ptr__->IndexWithinControl = 0;
    __return_storage_ptr__->EntitySystemID = uVar5;
  }
  return __return_storage_ptr__;
}

// GetConstraintChannel @ 14a412400

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FConstraintAndActiveChannel * __thiscall
UMovieSceneControlRigParameterSection::GetConstraintChannel
          (UMovieSceneControlRigParameterSection *this,FGuid *param_1)

{
  longlong lVar1;
  UObject *pUVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  bool bVar10;
  FConstraintAndActiveChannel *pFVar11;
  uint uVar12;
  longlong lVar13;
  int local_38;
  int iStack_34;
  int iStack_2c;
  
  lVar1 = (this->Weight)._padding_;
  lVar9 = (this->Weight)._padding_;
  uVar5 = param_1->A;
  uVar6 = param_1->B;
  uVar7 = param_1->C;
  uVar8 = param_1->D;
  lVar13 = lVar1;
  do {
    if (lVar13 == (longlong)(int)lVar9 * 0x128 + lVar1) {
      return (FConstraintAndActiveChannel *)0x0;
    }
    pUVar2 = *(UObject **)(lVar13 + 0x120);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar2 != (UObject *)0x0) goto LAB_14a412484;
    }
    else if (pUVar2 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar2);
LAB_14a412484:
      pUVar2 = *(UObject **)(lVar13 + 0x120);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      if (((uVar8 == *(int *)&pUVar2[1].field_0x10 && uVar7 == *(int *)&pUVar2[1].field_0xc) &&
          uVar6 == *(int *)&pUVar2[1].field_0x8) && uVar5 == *(int *)&pUVar2[1].field_0x4) {
        uVar4 = (uint)((lVar13 - lVar1) / 0x128);
        if (uVar4 == 0xffffffff) {
          return (FConstraintAndActiveChannel *)0x0;
        }
        uVar12 = 0;
        if ((int)uVar4 < (int)(this->Weight)._padding_) {
          uVar12 = ~uVar4 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FConstraintAndActiveChannel *)(*pcVar3)();
          return pFVar11;
        }
        return (FConstraintAndActiveChannel *)
               ((longlong)(int)uVar4 * 0x128 + (this->Weight)._padding_);
      }
    }
    lVar13 = lVar13 + 0x128;
  } while( true );
}

// GetConstraintsChannels @ 14a412580

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FConstraintAndActiveChannel,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneControlRigParameterSection::GetConstraintsChannels
          (UMovieSceneControlRigParameterSection *this)

{
  return &this->ConstraintsChannels;
}

// GetConstraintsChannels @ 14a412590

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FConstraintAndActiveChannel,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneControlRigParameterSection::GetConstraintsChannels
          (UMovieSceneControlRigParameterSection *this)

{
  return (TArray<FConstraintAndActiveChannel,TSizedDefaultAllocator<32>_> *)
         &(this->Weight)._padding_;
}

// GetControlNameMask @ 14a412710

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterSection::GetControlNameMask
          (UMovieSceneControlRigParameterSection *this,FName *param_1)

{
  FName *pFVar1;
  
  pFVar1 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                     (&this->ControlNameMask,*param_1);
  return pFVar1 == (FName *)0x0;
}

// GetControlRig @ 14a413240

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UControlRig * __thiscall
UMovieSceneControlRigParameterSection::GetControlRig
          (UMovieSceneControlRigParameterSection *this,UWorld *param_1)

{
  UClass *pUVar1;
  UMovieSceneControlRigParameterTrack *this_00;
  UControlRig *pUVar2;
  
  if (param_1 == (UWorld *)0x0) {
    return (this->ControlRig).field0_0x0.DebugPtr;
  }
  pUVar1 = UMovieSceneControlRigParameterTrack::StaticClass();
  this_00 = (UMovieSceneControlRigParameterTrack *)
            UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  if (this_00 != (UMovieSceneControlRigParameterTrack *)0x0) {
    pUVar2 = UMovieSceneControlRigParameterTrack::GetGameWorldControlRig(this_00,param_1);
    return pUVar2;
  }
  return (UControlRig *)0x0;
}

// GetEnumParameterNamesAndCurves @ 14a413c90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneControlRigParameterSection::GetEnumParameterNamesAndCurves
          (UMovieSceneControlRigParameterSection *this)

{
  return &this->EnumParameterNamesAndCurves;
}

// GetEnumParameterNamesAndCurves @ 14a413ca0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneControlRigParameterSection::GetEnumParameterNamesAndCurves
          (UMovieSceneControlRigParameterSection *this)

{
  return &this->EnumParameterNamesAndCurves;
}

// GetFloatInterrogationKey @ 14a414090

FMovieSceneInterrogationKey __cdecl
UMovieSceneControlRigParameterSection::GetFloatInterrogationKey(void)

{
  FMovieSceneAnimTypeID in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMovieSceneAnimTypeID::Unique();
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(ulong64 *)in_RCX.ID = ::TypeID.ID;
  return (FMovieSceneInterrogationKey)(FMovieSceneAnimTypeID)in_RCX.ID;
}

// GetImplicitObjectOwner @ 14a414c80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UObject * __thiscall
UMovieSceneControlRigParameterSection::GetImplicitObjectOwner
          (UMovieSceneControlRigParameterSection *this)

{
  UControlRig *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  UMovieSceneTrack *this_00;
  UMovieScene *this_01;
  FMovieSceneSpawnable *pFVar4;
  FGuid FStack_18;
  
  pUVar1 = (this->ControlRig).field0_0x0.DebugPtr;
  if (pUVar1 != (UControlRig *)0x0) {
    return (UObject *)pUVar1;
  }
  pUVar3 = UMovieSceneTrack::StaticClass();
  this_00 = (UMovieSceneTrack *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3)
  ;
  if (this_00 != (UMovieSceneTrack *)0x0) {
    pUVar3 = Z_Construct_UClass_UMovieScene_NoRegister();
    this_01 = (UMovieScene *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar3)
    ;
    if (this_01 != (UMovieScene *)0x0) {
      FStack_18.A = 0;
      FStack_18.B = 0;
      FStack_18.C = 0;
      FStack_18.D = 0;
      bVar2 = UMovieScene::FindTrackBinding(this_01,this_00,&FStack_18);
      if (bVar2) {
        pFVar4 = UMovieScene::FindSpawnable(this_01,&FStack_18);
        if (pFVar4 != (FMovieSceneSpawnable *)0x0) {
          return (pFVar4->ObjectTemplate).field0_0x0.DebugPtr;
        }
        UMovieScene::FindPossessable(this_01,&FStack_18);
      }
    }
  }
  return (UObject *)0x0;
}

// GetIntegerParameterNamesAndCurves @ 14a4155f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneControlRigParameterSection::GetIntegerParameterNamesAndCurves
          (UMovieSceneControlRigParameterSection *this)

{
  return &this->IntegerParameterNamesAndCurves;
}

// GetIntegerParameterNamesAndCurves @ 14a415600

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneControlRigParameterSection::GetIntegerParameterNamesAndCurves
          (UMovieSceneControlRigParameterSection *this)

{
  return &this->IntegerParameterNamesAndCurves;
}

// GetPrivateStaticClass @ 14a417130

UClass * __cdecl UMovieSceneControlRigParameterSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneControlRigParameterSection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"MovieSceneControlRigParameterSection",
               &Z_Registration_Info_UClass_UMovieSceneControlRigParameterSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneControlRigParameterSection,0x470,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneControlRigParameterSection>,
               InternalVTableHelperCtorCaller<UMovieSceneControlRigParameterSection>,local_res8,
               UMovieSceneParameterSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneControlRigParameterSection.InnerSingleton;
}

// GetReferencedBindings @ 14a4172b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::GetReferencedBindings
          (UMovieSceneControlRigParameterSection *this,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ConstraintsChannels).ArrayNum;
  pFVar10 = (this->ConstraintsChannels).AllocatorInstance.Data;
  pFVar12 = pFVar10 + (longlong)iVar1 * 0x128;
  do {
    if ((this->ConstraintsChannels).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FConstraintAndActiveChannel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar12) {
      return;
    }
    pUVar2 = *(UObject **)(pFVar10 + 0x120);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar2 != (UObject *)0x0) goto LAB_14a417338;
    }
    else if (pUVar2 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar2);
LAB_14a417338:
      pUVar9 = Z_Construct_UClass_UTickableTransformConstraint_NoRegister();
      iVar8 = (int)pUVar9->_padding_;
      if ((iVar8 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar9->_padding_)) {
        lVar3 = *(longlong *)&pUVar2[3].field_0x20;
        if ((lVar3 != 0) &&
           (pFVar11 = (FScriptContainerElement *)(lVar3 + 0x2c),
           ((*(int *)(lVar3 + 0x38) != 0 || *(int *)(lVar3 + 0x34) != 0) ||
           *(int *)(lVar3 + 0x30) != 0) || *(int *)pFVar11 != 0)) {
          pFVar4 = (param_1->AllocatorInstance).Data;
          if ((pFVar4 <= pFVar11) && (pFVar11 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar8 = param_1->ArrayNum;
          if (iVar8 == param_1->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x410,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar8 + 1;
          uVar6 = *(undefined8 *)(lVar3 + 0x34);
          pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
          *(undefined8 *)pFVar4 = *(undefined8 *)pFVar11;
          *(undefined8 *)(pFVar4 + 8) = uVar6;
        }
        lVar3 = *(longlong *)&pUVar2[3].field_0x18;
        if ((lVar3 != 0) &&
           (pFVar11 = (FScriptContainerElement *)(lVar3 + 0x2c),
           ((*(int *)(lVar3 + 0x38) != 0 || *(int *)(lVar3 + 0x34) != 0) ||
           *(int *)(lVar3 + 0x30) != 0) || *(int *)pFVar11 != 0)) {
          pFVar4 = (param_1->AllocatorInstance).Data;
          if ((pFVar4 <= pFVar11) && (pFVar11 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar8 = param_1->ArrayNum;
          if (iVar8 == param_1->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x410,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar8 + 1;
          uVar6 = *(undefined8 *)(lVar3 + 0x34);
          pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
          *(undefined8 *)pFVar4 = *(undefined8 *)pFVar11;
          *(undefined8 *)(pFVar4 + 8) = uVar6;
        }
      }
    }
    pFVar10 = pFVar10 + 0x128;
  } while( true );
}

// GetSpaceChannel @ 14a419be0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FSpaceControlNameAndChannel * __thiscall
UMovieSceneControlRigParameterSection::GetSpaceChannel
          (UMovieSceneControlRigParameterSection *this,FName param_1)

{
  int iVar1;
  FSpaceControlNameAndChannel *pFVar2;
  FSpaceControlNameAndChannel *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->SpaceChannels).ArrayNum;
  pFVar3 = (FSpaceControlNameAndChannel *)(this->SpaceChannels).AllocatorInstance.Data;
  pFVar2 = pFVar3 + iVar1;
  while( true ) {
    if ((this->SpaceChannels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSpaceControlNameAndChannel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3->ControlName == param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FSpaceControlNameAndChannel *)0x0;
}

// GetSpaceChannels @ 14a419c60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FSpaceControlNameAndChannel,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneControlRigParameterSection::GetSpaceChannels(UMovieSceneControlRigParameterSection *this)

{
  return &this->SpaceChannels;
}

// GetSpaceChannels @ 14a419c70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FSpaceControlNameAndChannel,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneControlRigParameterSection::GetSpaceChannels(UMovieSceneControlRigParameterSection *this)

{
  return &this->SpaceChannels;
}

// GetTotalWeightValue @ 14a41a240

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

float __thiscall
UMovieSceneControlRigParameterSection::GetTotalWeightValue
          (UMovieSceneControlRigParameterSection *this,FFrameTime param_1)

{
  float fVar1;
  float local_res8 [2];
  
  fVar1 = UMovieSceneSection::EvaluateEasing((UMovieSceneSection *)this,param_1);
  if (((this->TransformMask).Mask & 0x200) != 0) {
    local_res8[0] = 1.0;
    FMovieSceneFloatChannel::Evaluate(&this->Weight,param_1,local_res8);
    fVar1 = fVar1 * local_res8[0];
  }
  return fVar1;
}

// GetTransformInterrogationKey @ 14a41a5c0

FMovieSceneInterrogationKey __cdecl
UMovieSceneControlRigParameterSection::GetTransformInterrogationKey(void)

{
  FMovieSceneAnimTypeID in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMovieSceneAnimTypeID::Unique();
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(ulong64 *)in_RCX.ID = ::TypeID.ID;
  return (FMovieSceneInterrogationKey)(FMovieSceneAnimTypeID)in_RCX.ID;
}

// GetVector2DInterrogationKey @ 14a41c010

FMovieSceneInterrogationKey __cdecl
UMovieSceneControlRigParameterSection::GetVector2DInterrogationKey(void)

{
  FMovieSceneAnimTypeID in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMovieSceneAnimTypeID::Unique();
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(ulong64 *)in_RCX.ID = ::TypeID.ID;
  return (FMovieSceneInterrogationKey)(FMovieSceneAnimTypeID)in_RCX.ID;
}

// GetVector4InterrogationKey @ 14a41c090

FMovieSceneInterrogationKey __cdecl
UMovieSceneControlRigParameterSection::GetVector4InterrogationKey(void)

{
  FMovieSceneAnimTypeID in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMovieSceneAnimTypeID::Unique();
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(ulong64 *)in_RCX.ID = ::TypeID.ID;
  return (FMovieSceneInterrogationKey)(FMovieSceneAnimTypeID)in_RCX.ID;
}

// GetVectorInterrogationKey @ 14a41c110

FMovieSceneInterrogationKey __cdecl
UMovieSceneControlRigParameterSection::GetVectorInterrogationKey(void)

{
  FMovieSceneAnimTypeID in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMovieSceneAnimTypeID::Unique();
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(ulong64 *)in_RCX.ID = ::TypeID.ID;
  return (FMovieSceneInterrogationKey)(FMovieSceneAnimTypeID)in_RCX.ID;
}

// HACK_FixMultipleParamsWithSameName @ 14a41c290

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::HACK_FixMultipleParamsWithSameName
          (UMovieSceneControlRigParameterSection *this)

{
  return;
}

// HandleOverrideAssetChanged @ 14a41c780

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::HandleOverrideAssetChanged
          (UMovieSceneControlRigParameterSection *this,UControlRigOverrideAsset *param_1)

{
  bool bVar1;
  
  if (param_1 != (UControlRigOverrideAsset *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FString::FString(&DisplayNameString,L"Settings->DisplayName");
      atexit(`UMovieSceneControlRigParameterSection::HandleOverrideAssetChanged'::__l5::
             _dynamic_atexit_destructor_for__DisplayNameString__);
      _Init_thread_footer(&::_TSS0);
    }
    bVar1 = FControlRigOverrideContainer::ContainsPathForAnySubject
                      (&param_1->Overrides,&DisplayNameString);
    if (bVar1) {
      (**(code **)(this->_padding_ + 0x3a8))(this);
    }
  }
  return;
}

// HandleOverrideAssetsChanged @ 14a41c830

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::HandleOverrideAssetsChanged
          (UMovieSceneControlRigParameterSection *this,UControlRig *param_1)

{
  return;
}

// HasBoolParameter @ 14a41ca30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterSection::HasBoolParameter
          (UMovieSceneControlRigParameterSection *this,FName param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (int)this->_padding_;
  pFVar3 = (FName *)this->_padding_;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x25;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<FBoolParameterNameAndCurve_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*pFVar3 == param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 0x25;
  }
  return false;
}

// HasColorParameter @ 14a41cab0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterSection::HasColorParameter
          (UMovieSceneControlRigParameterSection *this,FName param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (int)this->_padding_;
  pFVar3 = (FName *)this->_padding_;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x95;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<FColorParameterNameAndCurves_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*pFVar3 == param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 0x95;
  }
  return false;
}

// HasConstraintChannel @ 14a41cb30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterSection::HasConstraintChannel
          (UMovieSceneControlRigParameterSection *this,FGuid *param_1)

{
  UObject *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  int local_28;
  int iStack_24;
  int iStack_1c;
  
  lVar7 = (this->Weight)._padding_;
  uVar2 = param_1->A;
  uVar3 = param_1->B;
  uVar4 = param_1->C;
  uVar5 = param_1->D;
  lVar6 = (longlong)(int)(this->Weight)._padding_ * 0x128 + lVar7;
  for (; lVar7 != lVar6; lVar7 = lVar7 + 0x128) {
    pUVar1 = *(UObject **)(lVar7 + 0x120);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar1 != (UObject *)0x0) goto LAB_14a41cbb4;
    }
    else if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
LAB_14a41cbb4:
      pUVar1 = *(UObject **)(lVar7 + 0x120);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      if (((uVar5 == *(int *)&pUVar1[1].field_0x10 && uVar4 == *(int *)&pUVar1[1].field_0xc) &&
          uVar3 == *(int *)&pUVar1[1].field_0x8) && uVar2 == *(int *)&pUVar1[1].field_0x4)
      goto LAB_14a41cbfe;
    }
  }
  lVar7 = 0;
LAB_14a41cbfe:
  return lVar7 != 0;
}

// HasEnumParameter @ 14a41cd00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterSection::HasEnumParameter
          (UMovieSceneControlRigParameterSection *this,FName param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->EnumParameterNamesAndCurves).ArrayNum;
  pFVar3 = (FName *)(this->EnumParameterNamesAndCurves).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x26;
  while( true ) {
    if ((this->EnumParameterNamesAndCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FEnumParameterNameAndCurve_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*pFVar3 == param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 0x26;
  }
  return false;
}

// HasIntegerParameter @ 14a41cd80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterSection::HasIntegerParameter
          (UMovieSceneControlRigParameterSection *this,FName param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->IntegerParameterNamesAndCurves).ArrayNum;
  pFVar3 = (FName *)(this->IntegerParameterNamesAndCurves).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x25;
  while( true ) {
    if ((this->IntegerParameterNamesAndCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FIntegerParameterNameAndCurve_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*pFVar3 == param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 0x25;
  }
  return false;
}

// HasScalarParameter @ 14a41cea0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterSection::HasScalarParameter
          (UMovieSceneControlRigParameterSection *this,FName param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (int)this->_padding_;
  pFVar3 = (FName *)this->_padding_;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x26;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<FScalarParameterNameAndCurve_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*pFVar3 == param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 0x26;
  }
  return false;
}

// HasSpaceChannel @ 14a41cf70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterSection::HasSpaceChannel
          (UMovieSceneControlRigParameterSection *this,FName param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->SpaceChannels).ArrayNum;
  pFVar3 = (FName *)(this->SpaceChannels).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x2a;
  while( true ) {
    if ((this->SpaceChannels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSpaceControlNameAndChannel_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*pFVar3 == param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 0x2a;
  }
  return false;
}

// HasTransformParameter @ 14a41cff0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterSection::HasTransformParameter
          (UMovieSceneControlRigParameterSection *this,FName param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (int)this->_padding_;
  pFVar3 = (FName *)this->_padding_;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x14e;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<FTransformParameterNameAndCurves_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*pFVar3 == param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 0x14e;
  }
  return false;
}

// HasVector2DParameter @ 14a41d070

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterSection::HasVector2DParameter
          (UMovieSceneControlRigParameterSection *this,FName param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (int)this->_padding_;
  pFVar3 = (FName *)this->_padding_;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x4b;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<FVector2DParameterNameAndCurves_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*pFVar3 == param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 0x4b;
  }
  return false;
}

// HasVectorParameter @ 14a41d0f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterSection::HasVectorParameter
          (UMovieSceneControlRigParameterSection *this,FName param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (int)this->_padding_;
  pFVar3 = (FName *)this->_padding_;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x70;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<FVectorParameterNameAndCurves_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*pFVar3 == param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 0x70;
  }
  return false;
}

// ImportEntityImpl @ 14a41d170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::ImportEntityImpl
          (UMovieSceneControlRigParameterSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  TComponentTypeID<FGuid> TVar1;
  TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)> TVar2;
  EMovieSceneTransformChannel EVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  FBuiltInComponentTypes *pFVar8;
  FMovieSceneTracksComponentTypes *pFVar9;
  FControlRigComponentTypes *pFVar10;
  UClass *pUVar11;
  UMovieSceneControlRigParameterTrack *pUVar12;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
  *pTVar13;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  *pTVar14;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
  *this_00;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
  *this_01;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *this_02;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *pTVar15;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
  *this_03;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
  *pTVar16;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
  *this_04;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
  *pTVar17;
  TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
  *pTVar18;
  TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
  *pTVar19;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
  *pTVar20;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  *pTVar21;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *pTVar22;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *pTVar23;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *pTVar24;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *pTVar25;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *this_05;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *this_06;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *this_07;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *this_08;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *this_09;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *this_10;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
  *this_11;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
  *pTVar26;
  undefined1 uVar27;
  uint uVar28;
  FName *pFVar29;
  TOptional<FName>_u_0 TVar30;
  TOptional<FName>_u_0 TVar31;
  uint uVar32;
  FControlRigSourceData local_1e30;
  TEntityBuilderImpl<TIntegerSequence<int>_> local_1e28;
  TEntityBuilderImpl<TIntegerSequence<int>_> local_1e27;
  TEntityBuilderImpl<TIntegerSequence<int>_> local_1e26 [2];
  FAdd local_1e24;
  FAdd local_1e22;
  FAdd local_1e20 [2];
  uint local_1e1c;
  FMovieSceneTracksComponentTypes *local_1e18;
  UMovieSceneControlRigParameterSection *local_1e10;
  FWeakObjectPtr FStack_1e08;
  undefined1 local_1e00;
  undefined7 uStack_1dff;
  FMovieSceneFloatChannel *local_1df8;
  FMovieSceneFloatChannel *local_1df0;
  FMovieSceneFloatChannel *local_1de8;
  FMovieSceneFloatChannel *local_1de0;
  FMovieSceneFloatChannel *local_1dd8;
  FMovieSceneFloatChannel *local_1dd0;
  FMovieSceneFloatChannel *local_1dc8;
  FMovieSceneFloatChannel *local_1dc0;
  FMovieSceneFloatChannel *local_1db8;
  FMovieSceneFloatChannel *local_1db0;
  FMovieSceneFloatChannel *local_1da8;
  FMovieSceneFloatChannel *local_1da0;
  FMovieSceneFloatChannel *local_1d98;
  FMovieSceneFloatChannel *local_1d90;
  FMovieSceneFloatChannel *local_1d88;
  FMovieSceneFloatChannel *local_1d80;
  FMovieSceneFloatChannel *local_1d78;
  FMovieSceneFloatChannel *local_1d70;
  FMovieSceneFloatChannel *local_1d68;
  undefined **local_1d60;
  TAdd<UE::MovieScene::FControlRigSourceData> local_1d58;
  TAdd<FName> local_1d40;
  TComponentTypeID<UE::MovieScene::FControlRigSourceData> local_1d30;
  FControlRigSourceData local_1d28;
  bool local_1d20;
  FAdd local_1d18;
  FAdd local_1d16 [3];
  undefined1 local_1d10;
  undefined **local_1d08;
  TAdd<UE::MovieScene::FControlRigSourceData> local_1d00;
  TAdd<FName> local_1ce8;
  TComponentTypeID<FMovieSceneControlRigSpaceChannel_const_*> local_1cd8;
  FMovieSceneControlRigSpaceChannel *local_1cd0;
  bool local_1cc8;
  FAdd local_1cc0 [4];
  undefined1 local_1cb8;
  undefined **local_1cb0;
  TAdd<UE::MovieScene::FControlRigSourceData> local_1ca8;
  TAdd<FName> local_1c90;
  TComponentTypeID<UE::MovieScene::FSourceBoolChannel> local_1c80;
  FSourceBoolChannel local_1c78;
  bool local_1c70;
  FAdd local_1c68 [4];
  undefined1 local_1c60;
  undefined **local_1c58;
  TComponentTypeID<FGuid> local_1c50;
  FGuid local_1c4c;
  bool local_1c3c;
  TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)> local_1c38;
  code *local_1c30;
  bool local_1c28;
  TComponentTypeID<UE::MovieScene::FControlRigSourceData> local_1c20;
  FControlRigSourceData local_1c18;
  bool local_1c10;
  TComponentTypeID<UE::MovieScene::FBaseControlRigEvalData> local_1c08;
  UMovieSceneControlRigParameterSection *local_1c00;
  FWeakObjectPtr FStack_1bf8;
  undefined8 local_1bf0;
  bool local_1be8;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_1be0;
  FAdd local_1bc8;
  FAdd local_1bc6 [3];
  undefined1 local_1bc0;
  TComponentTypeID<UE::MovieScene::FSourceByteChannel> local_1bb8;
  FSourceByteChannel local_1bb0;
  bool local_1ba8;
  TComponentTypeID<UE::MovieScene::FSourceIntegerChannel> local_1ba0;
  FSourceIntegerChannel local_1b98;
  bool local_1b90;
  undefined1 local_1b88 [16];
  UMovieSceneControlRigParameterTrack *local_1b78;
  undefined1 local_1b70;
  bool local_1b68;
  undefined1 local_1b60 [16];
  UMovieSceneControlRigParameterTrack *local_1b50;
  undefined1 local_1b48;
  bool local_1b40;
  undefined1 local_1b38 [16];
  UMovieSceneControlRigParameterTrack *local_1b28;
  undefined1 local_1b20;
  bool local_1b18;
  undefined1 local_1b10 [16];
  UMovieSceneControlRigParameterTrack *local_1b00;
  undefined1 local_1af8;
  bool local_1af0;
  undefined1 local_1ae8 [16];
  UMovieSceneControlRigParameterTrack *local_1ad8;
  undefined1 local_1ad0;
  bool local_1ac8;
  FGuid local_1ac0;
  undefined4 local_1ab0;
  undefined1 local_1a98 [32];
  TAdd<FName> local_1a78;
  FAdd local_1a6c;
  FAdd local_1a6a;
  TAdd<UE::MovieScene::FSourceIntegerChannel> local_1a68;
  undefined1 local_1a48 [32];
  TAdd<FName> local_1a28;
  TAdd<FMovieSceneControlRigSpaceChannel_const_*> local_1a18;
  FAdd local_1a00;
  FAdd local_19fe [7];
  undefined1 local_19f0 [32];
  TAdd<FName> local_19d0;
  TAdd<UE::MovieScene::FSourceBoolChannel> local_19c0;
  FAdd local_19a8;
  FAdd local_19a6 [7];
  undefined1 local_1998 [32];
  TAdd<FName> local_1978;
  TAdd<UE::MovieScene::FControlRigSourceData> local_1968;
  FAdd local_1950;
  FAdd local_194e [3];
  TAdd<UE::MovieScene::FSourceByteChannel> local_1948;
  undefined1 local_1928 [32];
  TAdd<UObject_*_(__cdecl*)(UObject_*)> local_1908;
  TAdd<UE::MovieScene::FControlRigSourceData> local_18f0;
  TAdd<UE::MovieScene::FBaseControlRigEvalData> local_18d8;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_18b0;
  FAdd local_1898;
  FAdd local_1896;
  FAdd local_1894 [14];
  UMovieSceneControlRigParameterTrack *local_1878;
  undefined4 local_1864;
  undefined4 uStack_1860;
  UMovieSceneControlRigParameterTrack *local_1828;
  undefined4 local_1814;
  undefined4 uStack_1810;
  UMovieSceneControlRigParameterTrack *local_17d8;
  undefined4 local_17c4;
  undefined4 uStack_17c0;
  UMovieSceneControlRigParameterTrack *local_1788;
  undefined4 local_1774;
  undefined4 uStack_1770;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
  local_1740;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  local_16f0;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  local_1698;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
  local_1640;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_> local_15d0;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_> local_15a8;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_> local_1580;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  local_1558;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
  local_14b8;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
  local_1480;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
  local_1448;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
  local_1410;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
  local_13d8;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  local_13a0;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
  local_1368;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
  local_1330;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  local_12f8;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
  local_12c0;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
  local_1288;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  local_1250;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
  local_1218;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
  local_11e0;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  local_11a8;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
  local_1170;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
  local_1138;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  local_1100;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
  local_10c8;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_1078;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_1028;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_fd8;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
  local_f88;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_f30;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_ec8;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_e60;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_df8;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_d88;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_d18;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_c98;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_c18;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
  local_b98;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
  local_b10;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_a88;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_9f0;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
  local_958;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
  local_8b8;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_818;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_768;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_6a0;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_5c0;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_4c8;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_3b8;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
  local_290;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
  local_160;
  
  if ((!UE::MovieScene::GUseLegacyControlRigTemplate) &&
     (bVar6 = UMovieSceneEntitySystem::IsCustomSchedulingEnabled(), bVar6)) {
    if ((this[-1].ControlsToSet.Hash.SecondaryData.field_0x2 == '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendType.h"
                           ,0x4c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = this[-1].ControlsToSet.Hash.SecondaryData.field_0x1 == '\x01';
    local_1e1c = param_2->EntityID >> 0x18;
    uVar28 = param_2->EntityID & 0xffffff;
    pFVar8 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar9 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    local_1e18 = pFVar9;
    pFVar10 = UE::MovieScene::FControlRigComponentTypes::Get();
    UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_1ac0);
    pUVar11 = UMovieSceneControlRigParameterTrack::StaticClass();
    pUVar12 = (UMovieSceneControlRigParameterTrack *)
              UObjectBaseUtility::GetTypedOuter
                        ((UObjectBaseUtility *)&this[-1].Weight.KeyHandles.field_0x80,pUVar11);
    local_1e30.Track = pUVar12;
    if (pUVar12 == (UMovieSceneControlRigParameterTrack *)0x0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1112060693286228589>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterSection.cpp"
                         ,0x126d,"ControlRigSource.Track");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      EVar3 = (EMovieSceneTransformChannel)this->_padding_;
      switch(local_1e1c) {
      case 0:
        TVar1 = pFVar8->GenericObjectBinding;
        local_1e10 = (UMovieSceneControlRigParameterSection *)&this[-1].Weight.KeyHandles.field_0x80
        ;
        TVar2 = pFVar8->BoundObjectResolver;
        FStack_1e08.ObjectIndex = 0;
        FStack_1e08.ObjectSerialNumber = 0;
        local_1e00 = 1;
        if (((EVar3 >> 9 & 1) == 0) ||
           (bVar6 = FMovieSceneFloatChannel::HasAnyData((FMovieSceneFloatChannel *)&this->_padding_)
           , !bVar6)) {
          uVar27 = 0;
        }
        else {
          uVar27 = 1;
        }
        local_1bf0._1_7_ = uStack_1dff;
        local_1bf0._0_1_ = local_1e00;
        local_1c30 = `UMovieSceneControlRigParameterSection::ImportEntityImpl'::__l11::<lambda_1>::
                     <lambda_invoker_cdecl>;
        local_1c20 = pFVar10->ControlRigSource;
        local_1c08 = pFVar10->BaseControlRigEvalData;
        local_1ab0._0_3_ = CONCAT12(uVar27,pFVar8->WeightChannel);
        local_1be0._padding_._0_4_ = local_1ab0;
        local_1bc8.ComponentTypeID.Value = *(FComponentTypeID *)&pFVar8->EvalTime;
        local_1bc6[0].ComponentTypeID.Value = *(FComponentTypeID *)&pFVar8->EvalSeconds;
        local_1c58 = &
                     ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_23_U__TAdd_UFControlRigSourceData_MovieScene_UE___23_U__TAdd_UFBaseControlRigEvalData_MovieScene_UE___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_UFAdd_23_U823__MovieScene_UE__6B_
        ;
        local_1e24.ComponentTypeID.Value = (FComponentTypeID)(pFVar10->Tags).BaseControlRig.Value;
        local_1c4c.A = local_1ac0.A;
        local_1c4c.B = local_1ac0.B;
        local_1c4c.C = local_1ac0.C;
        local_1c4c.D = local_1ac0.D;
        local_1c3c = true;
        local_1c28 = true;
        local_1c10 = true;
        local_1be8 = true;
        local_1c00 = local_1e10;
        FStack_1bf8 = FStack_1e08;
        local_1be0.Payload.bIsSet = true;
        local_1bc0 = 0;
        local_1c50 = TVar1;
        local_1c38 = TVar2;
        local_1c18.Track = pUVar12;
        local_1be0.Payload.TypedValue.Source = (FMovieSceneFloatChannel *)&this->_padding_;
        UE::MovieScene::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
        ::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                  ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                    *)local_1928,(TAdd<FGuid> *)&local_1c50,
                   (TAdd<UObject_*_(__cdecl*)(UObject_*)> *)&local_1c38,
                   (TAdd<UE::MovieScene::FControlRigSourceData> *)&local_1c20,
                   (TAdd<UE::MovieScene::FBaseControlRigEvalData> *)&local_1c08,&local_1be0,
                   &local_1bc8,local_1bc6,&local_1e24,false);
        local_1928._0_8_ =
             &
             ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_23_U__TAdd_UFControlRigSourceData_MovieScene_UE___23_U__TAdd_UFBaseControlRigEvalData_MovieScene_UE___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_UFAdd_23_U823_U823__MovieScene_UE__6B_
        ;
        UE::MovieScene::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
        ::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                  (&local_1558,(TAdd<FGuid> *)(local_1928 + 8),&local_1908,&local_18f0,&local_18d8,
                   &local_18b0,&local_1898,&local_1896,local_1894,true);
        local_1558._padding_ =
             (longlong)
             &
             ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_23_U__TAdd_UFControlRigSourceData_MovieScene_UE___23_U__TAdd_UFBaseControlRigEvalData_MovieScene_UE___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_UFAdd_23_U823_U823__MovieScene_UE__6B_
        ;
        UE::MovieScene::FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_>
                  (param_3,(TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                            *)&local_1558);
        break;
      case 1:
        if (((int)(this->Weight).DefaultValue <= (int)uVar28) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_1b88._8_2_ = pFVar10->ControlRigSource;
        pFVar29 = (FName *)((ulonglong)uVar28 * 0x150 + *(longlong *)&(this->Weight).Values.ArrayNum
                           );
        local_1b70 = 1;
        local_1b68 = false;
        local_1b88._0_8_ =
             &
             ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
        ;
        local_1b78 = pUVar12;
        pTVar13 = UE::MovieScene::
                  TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
                  ::Add<FName,FName_const_&>
                            ((TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
                              *)local_1b88,&local_14b8,pFVar9->GenericParameterName,pFVar29);
        local_1cd8 = pFVar10->SpaceChannel;
        local_1cd0 = (FMovieSceneControlRigSpaceChannel *)(pFVar29 + 1);
        local_1d00.Payload.bIsSet = (bool)pTVar13->field_0x18;
        local_1cb8 = pTVar13->field_0x30;
        local_1d00._padding_._0_2_ = *(undefined2 *)&pTVar13->field_0x8;
        if (local_1d00.Payload.bIsSet != false) {
          local_1878 = *(UMovieSceneControlRigParameterTrack **)&pTVar13->field_0x10;
        }
        local_1ce8._padding_._0_2_ = *(undefined2 *)&pTVar13->field_0x20;
        TVar31 = (TOptional<FName>_u_0)0xffffffff;
        local_1864 = 0xffffffff;
        uStack_1860 = 0;
        if (*(int *)&pTVar13->field_0x24 != -1) {
          TVar31 = (TOptional<FName>_u_0)*(TOptional<FName>_u_0 *)&pTVar13->field_0x24;
        }
        local_1cc0[0].ComponentTypeID.Value =
             (FComponentTypeID)(pFVar10->Tags).ControlRigParameter.Value;
        if (local_1d00.Payload.bIsSet != false) {
          local_1d00.Payload.TypedValue.Track = local_1878;
        }
        local_1ce8.Payload.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
        if (TVar31.TypedValue.ComparisonIndex.Value.Value != 0xffffffff) {
          local_1ce8.Payload.field0_0x0 = TVar31;
        }
        local_1d08 = &
                     ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_PEBUFMovieSceneControlRigSpaceChannel___23_UFAdd_23__MovieScene_UE__6B_
        ;
        local_1e22.ComponentTypeID.Value = (FComponentTypeID)(pFVar10->Tags).Space.Value;
        local_1cc8 = true;
        UE::MovieScene::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
        ::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                  ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                    *)local_1a48,&local_1d00,&local_1ce8,
                   (TAdd<FMovieSceneControlRigSpaceChannel_const_*> *)&local_1cd8,local_1cc0,
                   &local_1e22,(bool)local_1cb8);
        local_1a48._0_8_ =
             &
             ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_PEBUFMovieSceneControlRigSpaceChannel___23_UFAdd_23_U623__MovieScene_UE__6B_
        ;
        UE::MovieScene::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
        ::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                  (&local_16f0,(TAdd<UE::MovieScene::FControlRigSourceData> *)(local_1a48 + 8),
                   &local_1a28,&local_1a18,&local_1a00,local_19fe,true);
        local_16f0._padding_ =
             (longlong)
             &
             ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_PEBUFMovieSceneControlRigSpaceChannel___23_UFAdd_23_U623__MovieScene_UE__6B_
        ;
        UE::MovieScene::FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_>
                  (param_3,(TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                            *)&local_16f0);
        break;
      case 2:
        if (((int)this->_padding_ <= (int)uVar28) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_1b60._8_2_ = pFVar10->ControlRigSource;
        pFVar29 = (FName *)((ulonglong)uVar28 * 0x128 + this->_padding_);
        local_1b48 = 1;
        local_1b40 = false;
        local_1b60._0_8_ =
             &
             ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
        ;
        local_1b50 = pUVar12;
        pTVar13 = UE::MovieScene::
                  TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
                  ::Add<FName,FName_const_&>
                            ((TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
                              *)local_1b60,&local_1480,pFVar9->GenericParameterName,pFVar29);
        local_1c80 = pFVar8->BoolChannel;
        local_1c78.Source = (FMovieSceneBoolChannel *)(pFVar29 + 1);
        local_1ca8.Payload.bIsSet = (bool)pTVar13->field_0x18;
        local_1c60 = pTVar13->field_0x30;
        local_1ca8._padding_._0_2_ = *(undefined2 *)&pTVar13->field_0x8;
        if (local_1ca8.Payload.bIsSet != false) {
          local_1828 = *(UMovieSceneControlRigParameterTrack **)&pTVar13->field_0x10;
        }
        local_1c90._padding_._0_2_ = *(undefined2 *)&pTVar13->field_0x20;
        TVar31 = (TOptional<FName>_u_0)0xffffffff;
        local_1814 = 0xffffffff;
        uStack_1810 = 0;
        if (*(int *)&pTVar13->field_0x24 != -1) {
          TVar31 = (TOptional<FName>_u_0)*(TOptional<FName>_u_0 *)&pTVar13->field_0x24;
        }
        local_1c68[0].ComponentTypeID.Value =
             (FComponentTypeID)(pFVar10->Tags).ControlRigParameter.Value;
        if (local_1ca8.Payload.bIsSet != false) {
          local_1ca8.Payload.TypedValue.Track = local_1828;
        }
        local_1c90.Payload.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
        if (TVar31.TypedValue.ComparisonIndex.Value.Value != 0xffffffff) {
          local_1c90.Payload.field0_0x0 = TVar31;
        }
        local_1cb0 = &
                     ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_UFSourceBoolChannel_MovieScene_UE___23_UFAdd_23__MovieScene_UE__6B_
        ;
        local_1e20[0].ComponentTypeID.Value =
             (FComponentTypeID)(pFVar9->Parameters).Bool.PropertyTag.Value;
        local_1c70 = true;
        UE::MovieScene::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
        ::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                  ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                    *)local_19f0,&local_1ca8,&local_1c90,
                   (TAdd<UE::MovieScene::FSourceBoolChannel> *)&local_1c80,local_1c68,local_1e20,
                   (bool)local_1c60);
        local_19f0._0_8_ =
             &
             ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_UFSourceBoolChannel_MovieScene_UE___23_UFAdd_23_U623__MovieScene_UE__6B_
        ;
        UE::MovieScene::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
        ::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                  (&local_1698,(TAdd<UE::MovieScene::FControlRigSourceData> *)(local_19f0 + 8),
                   &local_19d0,&local_19c0,&local_19a8,local_19a6,true);
        local_1698._padding_ =
             (longlong)
             &
             ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_UFSourceBoolChannel_MovieScene_UE___23_UFAdd_23_U623__MovieScene_UE__6B_
        ;
        UE::MovieScene::FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_>
                  (param_3,(TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                            *)&local_1698);
        break;
      case 3:
        if ((*(int *)&(this->Weight).Times.AllocatorInstance.Data <= (int)uVar28) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_1b38._8_2_ = pFVar10->ControlRigSource;
        pFVar29 = (FName *)((ulonglong)uVar28 * 0x130 +
                           *(longlong *)&(this->Weight).PreInfinityExtrap);
        local_1b20 = 1;
        local_1b18 = false;
        local_1b38._0_8_ =
             &
             ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
        ;
        local_1b28 = pUVar12;
        pTVar13 = UE::MovieScene::
                  TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
                  ::Add<FName,FName_const_&>
                            ((TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
                              *)local_1b38,&local_1448,pFVar9->GenericParameterName,pFVar29);
        local_1d10 = pTVar13->field_0x30;
        local_1d58.Payload.bIsSet = (bool)pTVar13->field_0x18;
        local_1d58._padding_._0_2_ = *(undefined2 *)&pTVar13->field_0x8;
        if (local_1d58.Payload.bIsSet != false) {
          local_17d8 = *(UMovieSceneControlRigParameterTrack **)&pTVar13->field_0x10;
        }
        local_1d40._padding_._0_2_ = *(undefined2 *)&pTVar13->field_0x20;
        local_17c4 = 0xffffffff;
        uStack_17c0 = 0;
        if (*(int *)&pTVar13->field_0x24 == -1) {
          TVar31 = (TOptional<FName>_u_0)0xffffffff;
        }
        else {
          TVar31 = (TOptional<FName>_u_0)*(TOptional<FName>_u_0 *)&pTVar13->field_0x24;
        }
        local_1d18.ComponentTypeID.Value =
             (FComponentTypeID)(pFVar10->Tags).ControlRigParameter.Value;
        if (local_1d58.Payload.bIsSet != false) {
          local_1788 = local_17d8;
        }
        local_1d40.Payload.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
        uStack_1770 = 0;
        local_1774 = 0xffffffff;
        TVar30 = (TOptional<FName>_u_0)0xffffffff;
        if (TVar31.TypedValue.ComparisonIndex.Value.Value != 0xffffffff) {
          TVar30 = TVar31;
        }
        local_1d16[0].ComponentTypeID.Value =
             (FComponentTypeID)(pFVar9->Parameters).Byte.PropertyTag.Value;
        if (local_1d58.Payload.bIsSet != false) {
          local_1d58.Payload.TypedValue.Track = local_1788;
        }
        local_1d20 = true;
        if (TVar30.TypedValue.ComparisonIndex.Value.Value != 0xffffffff) {
          local_1d40.Payload.field0_0x0 = TVar30;
        }
        local_1d30 = pFVar10->ControlRigSource;
        local_1d60 = &
                     ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U123_UFAdd_23_U523__MovieScene_UE__6B_
        ;
        local_1bb8 = pFVar8->ByteChannel;
        local_1bb0.Source = (FMovieSceneByteChannel *)(pFVar29 + 1);
        local_1ba8 = true;
        local_1d28.Track = pUVar12;
        UE::MovieScene::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
        ::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
                  ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
                    *)local_1998,&local_1d58,&local_1d40,
                   (TAdd<UE::MovieScene::FControlRigSourceData> *)&local_1d30,&local_1d18,local_1d16
                   ,(TAdd<UE::MovieScene::FSourceByteChannel> *)&local_1bb8,(bool)local_1d10);
        local_1998._0_8_ =
             &
             ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U123_UFAdd_23_U523_U__TAdd_UFSourceByteChannel_MovieScene_UE___23__MovieScene_UE__6B_
        ;
        UE::MovieScene::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
        ::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
                  (&local_1640,(TAdd<UE::MovieScene::FControlRigSourceData> *)(local_1998 + 8),
                   &local_1978,&local_1968,&local_1950,local_194e,&local_1948,true);
        local_1640._padding_ =
             (longlong)
             &
             ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U123_UFAdd_23_U523_U__TAdd_UFSourceByteChannel_MovieScene_UE___23__MovieScene_UE__6B_
        ;
        UE::MovieScene::FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>_>
                  (param_3,(TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
                            *)&local_1640);
        break;
      case 4:
        if ((*(int *)&(this->Weight).Values.AllocatorInstance.Data <= (int)uVar28) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_1b10._8_2_ = pFVar10->ControlRigSource;
        pFVar29 = (FName *)((ulonglong)uVar28 * 0x128 + *(longlong *)&(this->Weight).Times.ArrayNum)
        ;
        local_1af8 = 1;
        local_1af0 = false;
        local_1b10._0_8_ =
             &
             ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
        ;
        local_1b00 = pUVar12;
        pTVar19 = (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
                     ::Add<FName,FName_const_&>
                               ((TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
                                 *)local_1b10,&local_1410,pFVar9->GenericParameterName,pFVar29);
        pTVar20 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
                     ::AddTag(pTVar19,&local_13d8,
                              (FComponentTypeID)(pFVar10->Tags).ControlRigParameter.Value);
        pTVar14 = UE::MovieScene::
                  TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
                  ::AddTag(pTVar20,&local_13a0,
                           (FComponentTypeID)(pFVar9->Parameters).Integer.PropertyTag.Value);
        local_1ba0 = pFVar8->IntegerChannel;
        local_1b98.Source = (FMovieSceneIntegerChannel *)(pFVar29 + 1);
        local_1b90 = true;
        UE::MovieScene::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
        ::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
                  ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
                    *)local_1a98,(TAdd<UE::MovieScene::FControlRigSourceData> *)&pTVar14->field_0x8,
                   (TAdd<FName> *)&pTVar14->field_0x20,(FAdd *)&pTVar14->field_0x2c,
                   (FAdd *)&pTVar14->field_0x2e,
                   (TAdd<UE::MovieScene::FSourceIntegerChannel> *)&local_1ba0,
                   (bool)pTVar14->field_0x30);
        local_1a98._0_8_ =
             &
             ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAdd_UFSourceIntegerChannel_MovieScene_UE___23__MovieScene_UE__6B_
        ;
        UE::MovieScene::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
        ::
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
                  (&local_1740,(TAdd<UE::MovieScene::FControlRigSourceData> *)(local_1a98 + 8),
                   &local_1a78,&local_1a6c,&local_1a6a,&local_1a68,true);
        local_1740._padding_ =
             (longlong)
             &
             ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAdd_UFSourceIntegerChannel_MovieScene_UE___23__MovieScene_UE__6B_
        ;
        UE::MovieScene::FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>_>
                  (param_3,(TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
                            *)&local_1740);
        break;
      case 5:
        if (((int)this->_padding_ <= (int)uVar28) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_1ae8._8_2_ = pFVar10->ControlRigSource;
        pFVar29 = (FName *)((ulonglong)uVar28 * 0x130 + this->_padding_);
        local_1ad0 = 1;
        local_1ac8 = false;
        local_1ae8._0_8_ =
             &
             ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
        ;
        local_1ad8 = pUVar12;
        pTVar19 = (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
                     ::Add<FName,FName_const_&>
                               ((TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
                                 *)local_1ae8,&local_1368,pFVar9->GenericParameterName,pFVar29);
        pTVar20 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
                     ::AddTag(pTVar19,&local_1330,
                              (FComponentTypeID)(pFVar10->Tags).ControlRigParameter.Value);
        pTVar21 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
                     ::AddTag(pTVar20,&local_12f8,
                              (FComponentTypeID)(pFVar9->Parameters).Scalar.PropertyTag.Value);
        local_1df8 = (FMovieSceneFloatChannel *)(pFVar29 + 1);
        this_00 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                     ::Add<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                               (pTVar21,&local_10c8,pFVar8->FloatChannel[0],&local_1df8);
        this_01 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
                     ::AddTagConditional(this_00,&local_f88,
                                         (FComponentTypeID)(pFVar8->Tags).ExternalBlending.Value,
                                         bVar6);
        bVar6 = EnumHasAnyFlags<enum_EMovieSceneTransformChannel>(EVar3,Weight);
        if ((bVar6) &&
           (bVar6 = FMovieSceneFloatChannel::HasAnyData((FMovieSceneFloatChannel *)&this->_padding_)
           , bVar6)) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        local_1df0 = (FMovieSceneFloatChannel *)&this->_padding_;
        this_02 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
                     ::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
                               (this_01,&local_df8,pFVar8->WeightChannel,&local_1df0,bVar6);
        pTVar15 = UE::MovieScene::
                  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                  ::AddMutualComponents(this_02,&local_d88);
        UE::MovieScene::FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
                  (param_3,pTVar15);
        break;
      case 6:
        iVar4 = (int)this->_padding_;
        if ((int)uVar28 < iVar4) {
          if ((iVar4 <= (int)uVar28) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar29 = (FName *)((ulonglong)uVar28 * 600 + this->_padding_);
          pTVar18 = (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
                     *)UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int>_>::
                       Add<UE::MovieScene::FControlRigSourceData,UE::MovieScene::FControlRigSourceData_&>
                                 (&local_1e28,&local_15d0,pFVar10->ControlRigSource,&local_1e30);
          pFVar9 = local_1e18;
          pTVar19 = (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
                     *)UE::MovieScene::
                       TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
                       ::Add<FName,FName_const_&>
                                 (pTVar18,&local_12c0,local_1e18->GenericParameterName,pFVar29);
          pTVar20 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
                     *)UE::MovieScene::
                       TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
                       ::AddTag(pTVar19,&local_1288,
                                (FComponentTypeID)(pFVar10->Tags).ControlRigParameter.Value);
          pTVar21 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                     *)UE::MovieScene::
                       TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
                       ::AddTag(pTVar20,&local_1250,
                                (FComponentTypeID)(pFVar9->Parameters).Vector3.PropertyTag.Value);
          bVar7 = FMovieSceneFloatChannel::HasAnyData((FMovieSceneFloatChannel *)(pFVar29 + 1));
          local_1de8 = (FMovieSceneFloatChannel *)(pFVar29 + 1);
          pTVar22 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                     *)UE::MovieScene::
                       TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                       ::
                       AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                                 (pTVar21,&local_1078,pFVar8->FloatChannel[0],&local_1de8,bVar7);
          bVar7 = FMovieSceneFloatChannel::HasAnyData((FMovieSceneFloatChannel *)(pFVar29 + 0x26));
          local_1de0 = (FMovieSceneFloatChannel *)(pFVar29 + 0x26);
          pTVar23 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                     *)UE::MovieScene::
                       TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                       ::
                       AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                                 (pTVar22,&local_f30,pFVar8->FloatChannel[1],&local_1de0,bVar7);
          bVar7 = EnumHasAnyFlags<enum_EMovieSceneTransformChannel>(EVar3,Weight);
          if ((bVar7) &&
             (bVar7 = FMovieSceneFloatChannel::HasAnyData
                                ((FMovieSceneFloatChannel *)&this->_padding_), bVar7)) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          local_1dd8 = (FMovieSceneFloatChannel *)&this->_padding_;
          pTVar24 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                     *)UE::MovieScene::
                       TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                       ::
                       AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
                                 (pTVar23,&local_d18,pFVar8->WeightChannel,&local_1dd8,bVar7);
          this_03 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
                     *)UE::MovieScene::
                       TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                       ::AddTagConditional(pTVar24,&local_b98,
                                           (FComponentTypeID)(pFVar8->Tags).ExternalBlending.Value,
                                           bVar6);
          pTVar16 = UE::MovieScene::
                    TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
                    ::AddMutualComponents(this_03,&local_b10);
          UE::MovieScene::FImportedEntity::
          AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_>
                    (param_3,pTVar16);
        }
        else {
          uVar28 = uVar28 - iVar4;
          uVar32 = 0;
          if ((int)uVar28 < (int)this->_padding_) {
            uVar32 = ~uVar28 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar29 = (FName *)((longlong)(int)uVar28 * 0x380 + this->_padding_);
          pTVar18 = (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
                     *)UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int>_>::
                       Add<UE::MovieScene::FControlRigSourceData,UE::MovieScene::FControlRigSourceData_&>
                                 (&local_1e27,&local_15a8,pFVar10->ControlRigSource,&local_1e30);
          pFVar9 = local_1e18;
          pTVar19 = (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
                     *)UE::MovieScene::
                       TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
                       ::Add<FName,FName_const_&>
                                 (pTVar18,&local_1218,local_1e18->GenericParameterName,pFVar29);
          pTVar20 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
                     *)UE::MovieScene::
                       TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
                       ::AddTag(pTVar19,&local_11e0,
                                (FComponentTypeID)(pFVar10->Tags).ControlRigParameter.Value);
          pTVar21 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                     *)UE::MovieScene::
                       TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
                       ::AddTag(pTVar20,&local_11a8,
                                (FComponentTypeID)(pFVar9->Parameters).Vector3.PropertyTag.Value);
          bVar7 = FMovieSceneFloatChannel::HasAnyData((FMovieSceneFloatChannel *)(pFVar29 + 1));
          local_1dd0 = (FMovieSceneFloatChannel *)(pFVar29 + 1);
          pTVar22 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                     *)UE::MovieScene::
                       TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                       ::
                       AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                                 (pTVar21,&local_1028,pFVar8->FloatChannel[0],&local_1dd0,bVar7);
          bVar7 = FMovieSceneFloatChannel::HasAnyData((FMovieSceneFloatChannel *)(pFVar29 + 0x26));
          local_1dc8 = (FMovieSceneFloatChannel *)(pFVar29 + 0x26);
          pTVar23 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                     *)UE::MovieScene::
                       TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                       ::
                       AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                                 (pTVar22,&local_ec8,pFVar8->FloatChannel[1],&local_1dc8,bVar7);
          bVar7 = FMovieSceneFloatChannel::HasAnyData((FMovieSceneFloatChannel *)(pFVar29 + 0x4b));
          local_1dc0 = (FMovieSceneFloatChannel *)(pFVar29 + 0x4b);
          pTVar24 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                     *)UE::MovieScene::
                       TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                       ::
                       AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                                 (pTVar23,&local_c98,pFVar8->FloatChannel[2],&local_1dc0,bVar7);
          bVar7 = EnumHasAnyFlags<enum_EMovieSceneTransformChannel>(EVar3,Weight);
          if ((bVar7) &&
             (bVar7 = FMovieSceneFloatChannel::HasAnyData
                                ((FMovieSceneFloatChannel *)&this->_padding_), bVar7)) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          local_1db8 = (FMovieSceneFloatChannel *)&this->_padding_;
          pTVar25 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                     *)UE::MovieScene::
                       TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                       ::
                       AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
                                 (pTVar24,&local_a88,pFVar8->WeightChannel,&local_1db8,bVar7);
          this_04 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
                     *)UE::MovieScene::
                       TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                       ::AddTagConditional(pTVar25,&local_958,
                                           (FComponentTypeID)(pFVar8->Tags).ExternalBlending.Value,
                                           bVar6);
          pTVar17 = UE::MovieScene::
                    TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
                    ::AddMutualComponents(this_04,&local_8b8);
          UE::MovieScene::FImportedEntity::
          AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_>
                    (param_3,pTVar17);
        }
        break;
      case 7:
        if (((int)this->_padding_ <= (int)uVar28) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar29 = (FName *)((ulonglong)uVar28 * 0xa70 + this->_padding_);
        pTVar18 = (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
                   *)UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int>_>::
                     Add<UE::MovieScene::FControlRigSourceData,UE::MovieScene::FControlRigSourceData_&>
                               (local_1e26,&local_1580,pFVar10->ControlRigSource,&local_1e30);
        pTVar19 = (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
                     ::Add<FName,FName_const_&>
                               (pTVar18,&local_1170,pFVar9->GenericParameterName,pFVar29);
        pTVar20 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
                     ::AddTag(pTVar19,&local_1138,
                              (FComponentTypeID)(pFVar10->Tags).ControlRigParameter.Value);
        pTVar21 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
                     ::AddTag(pTVar20,&local_1100,
                              (FComponentTypeID)(pFVar9->Parameters).Transform.PropertyTag.Value);
        bVar7 = EnumHasAllFlags<enum_EMovieSceneTransformChannel>(EVar3,TranslationX);
        if ((bVar7) &&
           (bVar7 = FMovieSceneFloatChannel::HasAnyData((FMovieSceneFloatChannel *)(pFVar29 + 1)),
           bVar7)) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        local_1db0 = (FMovieSceneFloatChannel *)(pFVar29 + 1);
        pTVar22 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                     ::
                     AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                               (pTVar21,&local_fd8,pFVar8->FloatChannel[0],&local_1db0,bVar7);
        bVar7 = EnumHasAllFlags<enum_EMovieSceneTransformChannel>(EVar3,TranslationY);
        if ((bVar7) &&
           (bVar7 = FMovieSceneFloatChannel::HasAnyData((FMovieSceneFloatChannel *)(pFVar29 + 0x26))
           , bVar7)) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        local_1da8 = (FMovieSceneFloatChannel *)(pFVar29 + 0x26);
        pTVar23 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                     ::
                     AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                               (pTVar22,&local_e60,pFVar8->FloatChannel[1],&local_1da8,bVar7);
        bVar7 = EnumHasAllFlags<enum_EMovieSceneTransformChannel>(EVar3,TranslationZ);
        if ((bVar7) &&
           (bVar7 = FMovieSceneFloatChannel::HasAnyData((FMovieSceneFloatChannel *)(pFVar29 + 0x4b))
           , bVar7)) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        local_1da0 = (FMovieSceneFloatChannel *)(pFVar29 + 0x4b);
        pTVar24 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                     ::
                     AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                               (pTVar23,&local_c18,pFVar8->FloatChannel[2],&local_1da0,bVar7);
        bVar7 = EnumHasAllFlags<enum_EMovieSceneTransformChannel>(EVar3,RotationX);
        if ((bVar7) &&
           (bVar7 = FMovieSceneFloatChannel::HasAnyData((FMovieSceneFloatChannel *)(pFVar29 + 0x70))
           , bVar7)) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        local_1d98 = (FMovieSceneFloatChannel *)(pFVar29 + 0x70);
        pTVar25 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                     ::
                     AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                               (pTVar24,&local_9f0,pFVar8->FloatChannel[3],&local_1d98,bVar7);
        bVar7 = EnumHasAllFlags<enum_EMovieSceneTransformChannel>(EVar3,RotationY);
        if ((bVar7) &&
           (bVar7 = FMovieSceneFloatChannel::HasAnyData((FMovieSceneFloatChannel *)(pFVar29 + 0x95))
           , bVar7)) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        local_1d68 = (FMovieSceneFloatChannel *)(pFVar29 + 0x95);
        this_05 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                     ::
                     AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                               (pTVar25,&local_818,pFVar8->FloatChannel[4],&local_1d68,bVar7);
        bVar7 = EnumHasAllFlags<enum_EMovieSceneTransformChannel>(EVar3,RotationZ);
        if ((bVar7) &&
           (bVar7 = FMovieSceneFloatChannel::HasAnyData((FMovieSceneFloatChannel *)(pFVar29 + 0xba))
           , bVar7)) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        local_1d90 = (FMovieSceneFloatChannel *)(pFVar29 + 0xba);
        this_06 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                     ::
                     AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                               (this_05,&local_768,pFVar8->FloatChannel[5],&local_1d90,bVar7);
        bVar7 = EnumHasAllFlags<enum_EMovieSceneTransformChannel>(EVar3,ScaleX);
        if ((bVar7) &&
           (bVar7 = FMovieSceneFloatChannel::HasAnyData((FMovieSceneFloatChannel *)(pFVar29 + 0xdf))
           , bVar7)) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        local_1d88 = (FMovieSceneFloatChannel *)(pFVar29 + 0xdf);
        this_07 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                     ::
                     AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                               (this_06,&local_6a0,pFVar8->FloatChannel[6],&local_1d88,bVar7);
        bVar7 = EnumHasAllFlags<enum_EMovieSceneTransformChannel>(EVar3,ScaleY);
        if ((bVar7) &&
           (bVar7 = FMovieSceneFloatChannel::HasAnyData
                              ((FMovieSceneFloatChannel *)(pFVar29 + 0x104)), bVar7)) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        local_1d80 = (FMovieSceneFloatChannel *)(pFVar29 + 0x104);
        this_08 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                     ::
                     AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                               (this_07,&local_5c0,pFVar8->FloatChannel[7],&local_1d80,bVar7);
        bVar7 = EnumHasAllFlags<enum_EMovieSceneTransformChannel>(EVar3,ScaleZ);
        if ((bVar7) &&
           (bVar7 = FMovieSceneFloatChannel::HasAnyData
                              ((FMovieSceneFloatChannel *)(pFVar29 + 0x129)), bVar7)) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        local_1d78 = (FMovieSceneFloatChannel *)(pFVar29 + 0x129);
        this_09 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                     ::
                     AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
                               (this_08,&local_4c8,pFVar8->FloatChannel[8],&local_1d78,bVar7);
        bVar7 = EnumHasAnyFlags<enum_EMovieSceneTransformChannel>(EVar3,Weight);
        if ((bVar7) &&
           (bVar7 = FMovieSceneFloatChannel::HasAnyData((FMovieSceneFloatChannel *)&this->_padding_)
           , bVar7)) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        local_1d70 = (FMovieSceneFloatChannel *)&this->_padding_;
        this_10 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                     ::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
                               (this_09,&local_3b8,pFVar8->WeightChannel,&local_1d70,bVar7);
        this_11 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                     ::AddTagConditional(this_10,&local_290,
                                         (FComponentTypeID)(pFVar8->Tags).ExternalBlending.Value,
                                         bVar6);
        pTVar26 = UE::MovieScene::
                  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
                  ::AddMutualComponents(this_11,&local_160);
        UE::MovieScene::FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_>
                  (param_3,pTVar26);
      }
    }
  }
  return;
}

// IsBlendingHandledExternally @ 14a4252d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterSection::IsBlendingHandledExternally
          (UMovieSceneControlRigParameterSection *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendType.h"
                       ,0x4c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return *(char *)((longlong)&this->_padding_ + 1) == '\x01';
}

// IsDifferentThanLastControlsUsedToReconstruct @ 14a425390

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterSection::IsDifferentThanLastControlsUsedToReconstruct
          (UMovieSceneControlRigParameterSection *this,
          TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar1 = (this->LastControlsUsedToReconstruct).ArrayNum;
  if (param_1->ArrayNum == iVar1) {
    uVar8 = 0;
    if (0 < iVar1) {
      lVar9 = 0;
      lVar11 = 0;
      do {
        uVar10 = ~uVar8 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar7 = uVar10;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        lVar2 = *(longlong *)((param_1->AllocatorInstance).Data + lVar9 * 8);
        uVar7 = 0;
        if ((int)uVar8 < (this->LastControlsUsedToReconstruct).ArrayNum) {
          uVar7 = uVar10;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        if (*(longlong *)((this->LastControlsUsedToReconstruct).AllocatorInstance.Data + lVar11) !=
            *(longlong *)(lVar2 + 0x14)) goto LAB_14a425542;
        uVar7 = 0;
        if ((int)uVar8 < (this->LastControlsUsedToReconstruct).ArrayNum) {
          uVar7 = uVar10;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        pFVar3 = (this->LastControlsUsedToReconstruct).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar7 = uVar10;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        if (pFVar3[lVar11 + 8] !=
            *(FScriptContainerElement *)
             (*(longlong *)((param_1->AllocatorInstance).Data + lVar9 * 8) + 0x231))
        goto LAB_14a425542;
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
        lVar11 = lVar11 + 0xc;
      } while ((int)uVar8 < (this->LastControlsUsedToReconstruct).ArrayNum);
    }
    bVar5 = false;
  }
  else {
LAB_14a425542:
    bVar5 = true;
  }
  return bVar5;
}

// KeyWeightValue @ 14a428cf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::KeyWeightValue
          (UMovieSceneControlRigParameterSection *this,FFrameNumber param_1,
          EMovieSceneKeyInterpolation param_2,float param_3)

{
  EMovieSceneKeyInterpolation in_R9B;
  float in_XMM2_Da;
  
  AddKeyToChannel((FMovieSceneFloatChannel *)&stack0x00000008,(FFrameNumber)(int)&this->Weight,
                  in_XMM2_Da,in_R9B);
  FMovieSceneFloatChannel::AutoSetTangents(&this->Weight,0.0);
  return;
}

// KeyZeroValue @ 14a428d30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::KeyZeroValue
          (UMovieSceneControlRigParameterSection *this,FFrameNumber param_1,
          EMovieSceneKeyInterpolation param_2,bool param_3)

{
  undefined2 uVar1;
  UControlRig *pUVar2;
  FFrameNumber FVar3;
  undefined8 *puVar4;
  TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar5;
  ulonglong uVar6;
  TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong *plVar10;
  FMovieSceneFloatChannel *pFVar11;
  FScriptContainerElement *pFVar12;
  FMovieSceneFloatChannel *pFVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  float in_XMM2_Da;
  undefined1 local_98 [8];
  undefined1 local_90 [24];
  FScriptContainerElement *local_78;
  FScriptContainerElement *local_70;
  
  local_90._8_8_ = (longlong *)0x0;
  iVar15 = 0;
  if ((param_3) &&
     (pUVar2 = (this->ControlRig).field0_0x0.DebugPtr, iVar15 = 0, pUVar2 != (UControlRig *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(pUVar2->_padding_ + 0x438))(pUVar2,&stack0xffffffffffffff90)
    ;
    iVar15 = 0;
    if ((undefined8 *)&stack0xffffffffffffffa0 != puVar4) {
      local_90._8_8_ = *puVar4;
      *puVar4 = 0;
      iVar15 = *(int *)(puVar4 + 1);
      puVar4[1] = 0;
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
  }
  pTVar5 = UMovieSceneParameterSection::GetScalarParameterNamesAndCurves
                     ((UMovieSceneParameterSection *)this);
  pFVar12 = (pTVar5->AllocatorInstance).Data;
  local_98._0_4_ = pTVar5->ArrayNum;
  uVar6 = (ulonglong)(int)local_98._0_4_;
  pFVar13 = (FMovieSceneFloatChannel *)(pFVar12 + 8);
  pFVar14 = pFVar12 + uVar6 * 0x130;
  do {
    if (pTVar5->ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<FScalarParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&stack0x00000020);
    }
    if (pFVar12 == pFVar14) {
      pTVar7 = UMovieSceneParameterSection::GetVector2DParameterNamesAndCurves
                         ((UMovieSceneParameterSection *)this);
      pFVar12 = (pTVar7->AllocatorInstance).Data;
      local_98._0_4_ = pTVar7->ArrayNum;
      uVar6 = (ulonglong)(int)local_98._0_4_;
      pFVar13 = (FMovieSceneFloatChannel *)(pFVar12 + 0x130);
      pFVar14 = pFVar12 + uVar6 * 600;
      local_90._16_8_ = pFVar14;
      do {
        if (pTVar7->ArrayNum != (int)uVar6) {
          `TCheckedPointerIterator<FVector2DParameterNameAndCurves,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&stack0x00000020);
        }
        if (pFVar12 == pFVar14) {
          pTVar8 = UMovieSceneParameterSection::GetVectorParameterNamesAndCurves
                             ((UMovieSceneParameterSection *)this);
          pFVar12 = (pTVar8->AllocatorInstance).Data;
          local_98._0_4_ = pTVar8->ArrayNum;
          uVar6 = (ulonglong)(int)local_98._0_4_;
          pFVar13 = (FMovieSceneFloatChannel *)(pFVar12 + 0x130);
          pFVar14 = pFVar12 + uVar6 * 0x380;
          local_78 = pFVar14;
          do {
            if (pTVar8->ArrayNum != (int)uVar6) {
              `TCheckedPointerIterator<FVectorParameterNameAndCurves,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&stack0x00000020);
            }
            if (pFVar12 == pFVar14) {
              pTVar9 = UMovieSceneParameterSection::GetTransformParameterNamesAndCurves
                                 ((UMovieSceneParameterSection *)this);
              pFVar12 = (pTVar9->AllocatorInstance).Data;
              local_90._0_4_ = pTVar9->ArrayNum;
              uVar6 = (ulonglong)(int)local_90._0_4_;
              pFVar13 = (FMovieSceneFloatChannel *)(pFVar12 + 0x380);
              pFVar14 = pFVar12 + uVar6 * 0xa70;
              local_70 = pFVar14;
              do {
                if (pTVar9->ArrayNum != (int)uVar6) {
                  `TCheckedPointerIterator<FTransformParameterNameAndCurves,int,0>::operator!='::
                  __l2::<lambda_1>::operator()(&stack0x00000020);
                }
                if (pFVar12 == pFVar14) {
                  if ((longlong *)local_90._8_8_ != (longlong *)0x0) {
                    FMemory::Free((void *)local_90._8_8_);
                  }
                  return;
                }
                if (iVar15 == 0) {
LAB_14a429097:
                  FVar3.Value = (int)pFVar13;
                  AddKeyToChannel((FMovieSceneFloatChannel *)&stack0xffffffffffffff88,
                                  (FFrameNumber)(FVar3.Value + -0x378),in_XMM2_Da,param_3);
                  FMovieSceneFloatChannel::AutoSetTangents(pFVar13 + -3,0.0);
                  AddKeyToChannel((FMovieSceneFloatChannel *)(local_90 + 0x10),FVar3,in_XMM2_Da,
                                  param_3);
                  FMovieSceneFloatChannel::AutoSetTangents(pFVar13,0.0);
                  uVar1 = *(undefined2 *)((longlong)&this->_padding_ + 1);
                  if (((char)((ushort)uVar1 >> 8) == '\0') || ((char)uVar1 != '\x02')) {
                    pFVar11 = (FMovieSceneFloatChannel *)local_98;
                  }
                  else {
                    pFVar11 = (FMovieSceneFloatChannel *)(local_98 + 4);
                  }
                  AddKeyToChannel(pFVar11,(FFrameNumber)(int)(pFVar13 + 3),in_XMM2_Da,param_3);
                  FMovieSceneFloatChannel::AutoSetTangents(pFVar13 + 3,0.0);
                  AddKeyToChannel((FMovieSceneFloatChannel *)&stack0xffffffffffffff88,
                                  (FFrameNumber)(FVar3.Value + -0x250),in_XMM2_Da,param_3);
                  FMovieSceneFloatChannel::AutoSetTangents(pFVar13 + -2,0.0);
                  AddKeyToChannel((FMovieSceneFloatChannel *)(local_90 + 0x10),
                                  (FFrameNumber)(FVar3.Value + 0x128),in_XMM2_Da,param_3);
                  FMovieSceneFloatChannel::AutoSetTangents(pFVar13 + 1,0.0);
                  uVar1 = *(undefined2 *)((longlong)&this->_padding_ + 1);
                  if (((char)((ushort)uVar1 >> 8) == '\0') || ((char)uVar1 != '\x02')) {
                    pFVar11 = (FMovieSceneFloatChannel *)local_98;
                  }
                  else {
                    pFVar11 = (FMovieSceneFloatChannel *)(local_98 + 4);
                  }
                  AddKeyToChannel(pFVar11,(FFrameNumber)(int)(pFVar13 + 4),in_XMM2_Da,param_3);
                  FMovieSceneFloatChannel::AutoSetTangents(pFVar13 + 4,0.0);
                  AddKeyToChannel((FMovieSceneFloatChannel *)&stack0xffffffffffffff88,
                                  (FFrameNumber)(FVar3.Value + -0x128),in_XMM2_Da,param_3);
                  FMovieSceneFloatChannel::AutoSetTangents(pFVar13 + -1,0.0);
                  AddKeyToChannel((FMovieSceneFloatChannel *)(local_90 + 0x10),
                                  (FFrameNumber)(FVar3.Value + 0x250),in_XMM2_Da,param_3);
                  FMovieSceneFloatChannel::AutoSetTangents(pFVar13 + 2,0.0);
                  uVar1 = *(undefined2 *)((longlong)&this->_padding_ + 1);
                  if (((char)((ushort)uVar1 >> 8) == '\0') || ((char)uVar1 != '\x02')) {
                    pFVar11 = (FMovieSceneFloatChannel *)local_98;
                  }
                  else {
                    pFVar11 = (FMovieSceneFloatChannel *)(local_98 + 4);
                  }
                  AddKeyToChannel(pFVar11,(FFrameNumber)(int)(pFVar13 + 5),in_XMM2_Da,param_3);
                  FMovieSceneFloatChannel::AutoSetTangents(pFVar13 + 5,0.0);
                  pFVar14 = local_70;
                }
                else if ((longlong *)local_90._8_8_ !=
                         (longlong *)(local_90._8_8_ + (longlong)iVar15 * 8)) {
                  plVar10 = (longlong *)local_90._8_8_;
                  do {
                    if (*plVar10 == *(longlong *)pFVar12) goto LAB_14a429097;
                    plVar10 = plVar10 + 1;
                  } while (plVar10 != (longlong *)(local_90._8_8_ + (longlong)iVar15 * 8));
                }
                uVar6 = (ulonglong)(uint)local_90._0_4_;
                pFVar12 = pFVar12 + 0xa70;
                pFVar13 = (FMovieSceneFloatChannel *)&pFVar13[9]._padding_;
              } while( true );
            }
            if (iVar15 == 0) {
LAB_14a428f88:
              FVar3.Value = (int)pFVar13;
              AddKeyToChannel((FMovieSceneFloatChannel *)local_90,
                              (FFrameNumber)(FVar3.Value + -0x128),in_XMM2_Da,param_3);
              FMovieSceneFloatChannel::AutoSetTangents(pFVar13 + -1,0.0);
              AddKeyToChannel((FMovieSceneFloatChannel *)(local_98 + 4),FVar3,in_XMM2_Da,param_3);
              FMovieSceneFloatChannel::AutoSetTangents(pFVar13,0.0);
              AddKeyToChannel((FMovieSceneFloatChannel *)(local_90 + 0x10),
                              (FFrameNumber)(FVar3.Value + 0x128),in_XMM2_Da,param_3);
              FMovieSceneFloatChannel::AutoSetTangents(pFVar13 + 1,0.0);
              pFVar14 = local_78;
            }
            else if ((longlong *)local_90._8_8_ !=
                     (longlong *)(local_90._8_8_ + (longlong)iVar15 * 8)) {
              plVar10 = (longlong *)local_90._8_8_;
              do {
                if (*plVar10 == *(longlong *)pFVar12) goto LAB_14a428f88;
                plVar10 = plVar10 + 1;
              } while (plVar10 != (longlong *)(local_90._8_8_ + (longlong)iVar15 * 8));
            }
            uVar6 = (ulonglong)(uint)local_98._0_4_;
            pFVar12 = pFVar12 + 0x380;
            pFVar13 = (FMovieSceneFloatChannel *)&pFVar13[3]._padding_;
          } while( true );
        }
        if (iVar15 == 0) {
LAB_14a428eb0:
          AddKeyToChannel((FMovieSceneFloatChannel *)local_90,(FFrameNumber)((int)pFVar13 + -0x128),
                          in_XMM2_Da,param_3);
          FMovieSceneFloatChannel::AutoSetTangents(pFVar13 + -1,0.0);
          AddKeyToChannel((FMovieSceneFloatChannel *)(local_98 + 4),(FFrameNumber)(int)pFVar13,
                          in_XMM2_Da,param_3);
          FMovieSceneFloatChannel::AutoSetTangents(pFVar13,0.0);
          pFVar14 = (FScriptContainerElement *)local_90._16_8_;
        }
        else if ((longlong *)local_90._8_8_ != (longlong *)(local_90._8_8_ + (longlong)iVar15 * 8))
        {
          plVar10 = (longlong *)local_90._8_8_;
          do {
            if (*plVar10 == *(longlong *)pFVar12) goto LAB_14a428eb0;
            plVar10 = plVar10 + 1;
          } while (plVar10 != (longlong *)(local_90._8_8_ + (longlong)iVar15 * 8));
        }
        uVar6 = (ulonglong)(uint)local_98._0_4_;
        pFVar12 = pFVar12 + 600;
        pFVar13 = (FMovieSceneFloatChannel *)&pFVar13[2]._padding_;
      } while( true );
    }
    if (iVar15 == 0) {
LAB_14a428e10:
      AddKeyToChannel((FMovieSceneFloatChannel *)local_90,(FFrameNumber)(int)pFVar13,in_XMM2_Da,
                      param_3);
      FMovieSceneFloatChannel::AutoSetTangents(pFVar13,0.0);
    }
    else if ((longlong *)local_90._8_8_ != (longlong *)(local_90._8_8_ + (longlong)iVar15 * 8)) {
      plVar10 = (longlong *)local_90._8_8_;
      do {
        if (*plVar10 == *(longlong *)pFVar12) goto LAB_14a428e10;
        plVar10 = plVar10 + 1;
      } while (plVar10 != (longlong *)(local_90._8_8_ + (longlong)iVar15 * 8));
    }
    uVar6 = (ulonglong)(uint)local_98._0_4_;
    pFVar12 = pFVar12 + 0x130;
    pFVar13 = (FMovieSceneFloatChannel *)&pFVar13[1]._padding_;
  } while( true );
}

// MaskOutIfThereAreMaskedControls @ 14a42ce90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::MaskOutIfThereAreMaskedControls
          (UMovieSceneControlRigParameterSection *this,FName *param_1)

{
  FName local_res8 [4];
  
  if (*(int *)&(this->ControlNameMask).Elements.field_0x8 !=
      *(int *)&(this->ControlNameMask).Elements.field_0x34) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&this->ControlNameMask,local_res8,(bool *)param_1);
  }
  return;
}

// OnBindingIDsUpdated @ 14a42eaa0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::OnBindingIDsUpdated
          (UMovieSceneControlRigParameterSection *this,
          TMap<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>_>
          *param_1,FMovieSceneSequenceID param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_3)

{
  int iVar1;
  UTransformableHandle *pUVar2;
  FObjectPtr_u_0 FVar3;
  bool bVar4;
  UClass *pUVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FObjectPtr_u_0 local_res8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_48;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_38;
  
  iVar1 = (this->ConstraintsChannels).ArrayNum;
  pFVar6 = (this->ConstraintsChannels).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x128;
  do {
    if ((this->ConstraintsChannels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FConstraintAndActiveChannel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar6 == pFVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->SharedReferenceCount).ReferenceController);
      return;
    }
    local_res8 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(pFVar6 + 0x120))->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14a42eb27:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar5 = Z_Construct_UClass_UTickableTransformConstraint_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        FVar3 = local_res8;
        if ((bVar4) && (local_res8.Handle != (UObject *)0x0)) {
          pUVar2 = *(UTransformableHandle **)&local_res8.Handle[3].field_0x20;
          if (pUVar2 != (UTransformableHandle *)0x0) {
            local_48.Object = param_3->Object;
            local_48.SharedReferenceCount.ReferenceController =
                 (param_3->SharedReferenceCount).ReferenceController;
            if (local_48.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            UTransformableHandle::OnBindingIDsUpdated(pUVar2,param_1,param_2,&local_48);
          }
          pUVar2 = *(UTransformableHandle **)&FVar3.Handle[3].field_0x18;
          if (pUVar2 != (UTransformableHandle *)0x0) {
            local_38.Object = param_3->Object;
            local_38.SharedReferenceCount.ReferenceController =
                 (param_3->SharedReferenceCount).ReferenceController;
            if (local_38.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            UTransformableHandle::OnBindingIDsUpdated(pUVar2,param_1,param_2,&local_38);
          }
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_14a42eb27;
    }
    pFVar6 = pFVar6 + 0x128;
  } while( true );
}

// OnConstraintsChanged @ 14a42ec00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::OnConstraintsChanged
          (UMovieSceneControlRigParameterSection *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a42ec0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this[-1].Weight.KeyHandles.field_0x18 + 0x3a8))();
  return;
}

// OptimizeSection @ 14a4319c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::OptimizeSection
          (UMovieSceneControlRigParameterSection *this,FName *param_1,
          FKeyDataOptimizationParams *param_2)

{
  UControlRig *pUVar1;
  code *pcVar2;
  bool bVar3;
  FMovieSceneChannelProxy *pFVar4;
  UScriptStruct *pUVar5;
  FMovieSceneChannelEntry *pFVar6;
  FChannelMapInfo *pFVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *local_res20;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  
  pFVar4 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this);
  pUVar5 = FMovieSceneFloatChannel::StaticStruct();
  pFVar6 = FMovieSceneChannelProxy::FindEntry(pFVar4,(FName)pUVar5->_padding_);
  uVar18 = 0;
  if (pFVar6 == (FMovieSceneChannelEntry *)0x0) {
    pFVar15 = (FScriptContainerElement *)0x0;
    uVar12 = uVar18;
  }
  else {
    uVar12 = (pFVar6->Channels).ArrayNum;
    pFVar15 = (pFVar6->Channels).AllocatorInstance.Data;
    if (((int)uVar12 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar4 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this);
  pUVar5 = FMovieSceneBoolChannel::StaticStruct();
  pFVar6 = FMovieSceneChannelProxy::FindEntry(pFVar4,(FName)pUVar5->_padding_);
  if (pFVar6 == (FMovieSceneChannelEntry *)0x0) {
    local_res20 = (FScriptContainerElement *)0x0;
    uVar17 = uVar18;
  }
  else {
    local_res20 = (pFVar6->Channels).AllocatorInstance.Data;
    uVar17 = (pFVar6->Channels).ArrayNum;
    if (((int)uVar17 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar4 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this);
  pUVar5 = FMovieSceneIntegerChannel::StaticStruct();
  pFVar6 = FMovieSceneChannelProxy::FindEntry(pFVar4,(FName)pUVar5->_padding_);
  if (pFVar6 == (FMovieSceneChannelEntry *)0x0) {
    local_40 = (FScriptContainerElement *)0x0;
    uVar19 = uVar18;
  }
  else {
    local_40 = (pFVar6->Channels).AllocatorInstance.Data;
    uVar19 = (pFVar6->Channels).ArrayNum;
    if (((int)uVar19 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar4 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this);
  pUVar5 = FMovieSceneByteChannel::StaticStruct();
  pFVar6 = FMovieSceneChannelProxy::FindEntry(pFVar4,(FName)pUVar5->_padding_);
  if (pFVar6 == (FMovieSceneChannelEntry *)0x0) {
    local_48 = (FScriptContainerElement *)0x0;
    uVar16 = uVar18;
  }
  else {
    local_48 = (pFVar6->Channels).AllocatorInstance.Data;
    uVar16 = (pFVar6->Channels).ArrayNum;
    if (((int)uVar16 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
           ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                   *)&this->ControlChannelMap,*param_1);
  if (pFVar7 == (FChannelMapInfo *)0x0) {
    return;
  }
  uVar10 = pFVar7->ChannelIndex;
  lVar11 = (longlong)(int)uVar10;
  pUVar1 = (this->ControlRig).field0_0x0.DebugPtr;
  lVar8 = (**(code **)(pUVar1->_padding_ + 0x3c8))(pUVar1,param_1);
  if (lVar8 == 0) {
    return;
  }
  uVar14 = 0;
  uVar13 = 0;
  switch(*(undefined1 *)(lVar8 + 0x231)) {
  case 0:
    if ((int)uVar10 < (int)uVar17) {
      uVar14 = ~uVar10 >> 0x1f;
    }
    local_40 = local_res20;
    if ((uVar14 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    break;
  default:
    goto switchD_14a431bf1_caseD_1;
  case 2:
    if (*(longlong *)(lVar8 + 0x380) == 0) {
      if ((int)uVar10 < (int)uVar19) {
        uVar14 = ~uVar10 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      if ((int)uVar10 < (int)uVar16) {
        uVar14 = ~uVar10 >> 0x1f;
      }
      local_40 = local_48;
      if ((uVar14 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    break;
  case 4:
  case 5:
  case 6:
    if ((int)uVar10 < (int)uVar12) {
      uVar18 = ~uVar10 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(**(longlong **)(pFVar15 + lVar11 * 8) + 0x68))
              (*(longlong **)(pFVar15 + lVar11 * 8),param_2);
    uVar17 = uVar10 + 1;
    uVar18 = uVar13;
    if ((int)uVar17 < (int)uVar12) {
      uVar18 = ~uVar17 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(**(longlong **)(pFVar15 + (longlong)(int)uVar17 * 8) + 0x68))
              (*(longlong **)(pFVar15 + (longlong)(int)uVar17 * 8),param_2);
    uVar10 = uVar10 + 2;
    if ((int)uVar10 < (int)uVar12) {
      uVar13 = ~uVar10 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    goto LAB_14a431cec;
  case 7:
  case 8:
  case 9:
    uVar18 = uVar13;
    if ((int)uVar10 < (int)uVar12) {
      uVar18 = ~uVar10 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(**(longlong **)(pFVar15 + lVar11 * 8) + 0x68))
              (*(longlong **)(pFVar15 + lVar11 * 8),param_2);
    uVar17 = uVar10 + 1;
    uVar18 = uVar13;
    if ((int)uVar17 < (int)uVar12) {
      uVar18 = ~uVar17 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(**(longlong **)(pFVar15 + (longlong)(int)uVar17 * 8) + 0x68))
              (*(longlong **)(pFVar15 + (longlong)(int)uVar17 * 8),param_2);
    uVar17 = uVar10 + 2;
    uVar18 = uVar13;
    if ((int)uVar17 < (int)uVar12) {
      uVar18 = ~uVar17 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(**(longlong **)(pFVar15 + (longlong)(int)uVar17 * 8) + 0x68))
              (*(longlong **)(pFVar15 + (longlong)(int)uVar17 * 8),param_2);
    uVar17 = uVar10 + 3;
    uVar18 = uVar13;
    if ((int)uVar17 < (int)uVar12) {
      uVar18 = ~uVar17 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(**(longlong **)(pFVar15 + (longlong)(int)uVar17 * 8) + 0x68))
              (*(longlong **)(pFVar15 + (longlong)(int)uVar17 * 8),param_2);
    uVar17 = uVar10 + 4;
    uVar18 = uVar13;
    if ((int)uVar17 < (int)uVar12) {
      uVar18 = ~uVar17 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(**(longlong **)(pFVar15 + (longlong)(int)uVar17 * 8) + 0x68))
              (*(longlong **)(pFVar15 + (longlong)(int)uVar17 * 8),param_2);
    uVar18 = uVar10 + 5;
    if ((int)uVar18 < (int)uVar12) {
      uVar13 = ~uVar18 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(**(longlong **)(pFVar15 + (longlong)(int)uVar18 * 8) + 0x68))
              (*(longlong **)(pFVar15 + (longlong)(int)uVar18 * 8),param_2);
    if ((*(char *)(lVar8 + 0x231) != '\a') && (*(char *)(lVar8 + 0x231) != '\t')) {
      return;
    }
    uVar17 = uVar10 + 6;
    uVar18 = uVar14;
    if ((int)uVar17 < (int)uVar12) {
      uVar18 = ~uVar17 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(**(longlong **)(pFVar15 + (longlong)(int)uVar17 * 8) + 0x68))
              (*(longlong **)(pFVar15 + (longlong)(int)uVar17 * 8),param_2);
    uVar17 = uVar10 + 7;
    uVar18 = uVar14;
    if ((int)uVar17 < (int)uVar12) {
      uVar18 = ~uVar17 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(**(longlong **)(pFVar15 + (longlong)(int)uVar17 * 8) + 0x68))
              (*(longlong **)(pFVar15 + (longlong)(int)uVar17 * 8),param_2);
    uVar10 = uVar10 + 8;
    if ((int)uVar10 < (int)uVar12) {
      uVar14 = ~uVar10 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_14a431cec:
    plVar9 = *(longlong **)(pFVar15 + (longlong)(int)uVar10 * 8);
    goto LAB_14a43213f;
  }
  plVar9 = *(longlong **)(local_40 + lVar11 * 8);
LAB_14a43213f:
  (**(code **)(*plVar9 + 0x68))(plVar9,param_2);
switchD_14a431bf1_caseD_1:
  return;
}

// PopulateEvaluationFieldImpl @ 14a432bb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterSection::PopulateEvaluationFieldImpl
          (UMovieSceneControlRigParameterSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  
  iVar11 = FMovieSceneEntityComponentFieldBuilder::AddMetaData(param_3,param_2);
  lVar17 = this->_padding_;
  iVar14 = *(int *)&(this->Weight).Times.AllocatorInstance.Data;
  fVar1 = (this->Weight).DefaultValue;
  iVar2 = *(int *)&(this->Weight).Values.AllocatorInstance.Data;
  lVar20 = this->_padding_;
  lVar6 = this->_padding_;
  lVar7 = this->_padding_;
  lVar8 = this->_padding_;
  iVar12 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                     (param_3,(UObject *)&this[-1].Weight.KeyHandles.field_0x80,0);
  FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar12,iVar11);
  uVar16 = 0;
  if (0 < (int)fVar1) {
    do {
      uVar13 = 0;
      if ((int)uVar16 < (int)(this->Weight).DefaultValue) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      if ((0xfffffe < uVar16) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterSection.cpp"
                             ,0x65,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      iVar12 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                         (param_3,(UObject *)&this[-1].Weight.KeyHandles.field_0x80,
                          uVar16 | 0x1000000);
      FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar12,iVar11);
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)fVar1);
  }
  uVar16 = 0;
  lVar17 = (longlong)(int)lVar17;
  if (0 < lVar17) {
    lVar19 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar16 < (int)this->_padding_) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      lVar3 = this->_padding_;
      lVar4 = *(longlong *)(lVar3 + lVar19);
      uVar13 = ::GetTypeHash((FNameEntryId)(uint)lVar4);
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        plVar18 = &this->_padding_;
        if ((longlong *)this->_padding_ != (longlong *)0x0) {
          plVar18 = (longlong *)this->_padding_;
        }
        iVar12 = *(int *)((longlong)plVar18 +
                         (ulonglong)
                         ((int)this->_padding_ - 1U & (int)((ulonglong)lVar4 >> 0x20) + uVar13) * 4)
        ;
        if (iVar12 != -1) {
          do {
            if (*(longlong *)(this->_padding_ + (longlong)iVar12 * 0x10) == lVar4)
            goto LAB_14a432e8c;
            iVar12 = *(int *)(this->_padding_ + 8 + (longlong)iVar12 * 0x10);
          } while (iVar12 != -1);
        }
      }
      if ((*(int *)(lVar3 + 0x80 + lVar19) != 0) || (*(char *)(lVar3 + 0x89 + lVar19) == '\x01')) {
        if ((0xfffffe < uVar16) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterSection.cpp"
                               ,0x65,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        iVar12 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                           (param_3,(UObject *)&this[-1].Weight.KeyHandles.field_0x80,
                            uVar16 | 0x2000000);
        FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar12,iVar11);
      }
LAB_14a432e8c:
      uVar16 = uVar16 + 1;
      lVar19 = lVar19 + 0x128;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  uVar16 = 0;
  lVar17 = (longlong)iVar14;
  if (0 < iVar14) {
    lVar19 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar16 < *(int *)&(this->Weight).Times.AllocatorInstance.Data) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      lVar3 = *(longlong *)&(this->Weight).PreInfinityExtrap;
      lVar4 = *(longlong *)(lVar3 + lVar19);
      uVar13 = ::GetTypeHash((FNameEntryId)(uint)lVar4);
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        plVar18 = &this->_padding_;
        if ((longlong *)this->_padding_ != (longlong *)0x0) {
          plVar18 = (longlong *)this->_padding_;
        }
        iVar14 = *(int *)((longlong)plVar18 +
                         (ulonglong)
                         ((int)this->_padding_ - 1U & (int)((ulonglong)lVar4 >> 0x20) + uVar13) * 4)
        ;
        if (iVar14 != -1) {
          do {
            if (*(longlong *)(this->_padding_ + (longlong)iVar14 * 0x10) == lVar4)
            goto LAB_14a433008;
            iVar14 = *(int *)(this->_padding_ + 8 + (longlong)iVar14 * 0x10);
          } while (iVar14 != -1);
        }
      }
      if ((*(int *)(lVar3 + 0x80 + lVar19) != 0) || (*(char *)(lVar3 + 0x89 + lVar19) == '\x01')) {
        if ((0xfffffe < uVar16) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterSection.cpp"
                               ,0x65,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        iVar14 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                           (param_3,(UObject *)&this[-1].Weight.KeyHandles.field_0x80,
                            uVar16 | 0x3000000);
        FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar14,iVar11);
      }
LAB_14a433008:
      uVar16 = uVar16 + 1;
      lVar19 = lVar19 + 0x130;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  lVar17 = (longlong)iVar2;
  uVar16 = 0;
  if (0 < lVar17) {
    lVar19 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar16 < *(int *)&(this->Weight).Values.AllocatorInstance.Data) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      lVar3 = *(longlong *)&(this->Weight).Times.ArrayNum;
      lVar4 = *(longlong *)(lVar3 + lVar19);
      uVar13 = ::GetTypeHash((FNameEntryId)(uint)lVar4);
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        plVar18 = &this->_padding_;
        if ((longlong *)this->_padding_ != (longlong *)0x0) {
          plVar18 = (longlong *)this->_padding_;
        }
        iVar14 = *(int *)((longlong)plVar18 +
                         (ulonglong)
                         ((int)this->_padding_ - 1U & (int)((ulonglong)lVar4 >> 0x20) + uVar13) * 4)
        ;
        if (iVar14 != -1) {
          do {
            if (*(longlong *)(this->_padding_ + (longlong)iVar14 * 0x10) == lVar4)
            goto LAB_14a433178;
            iVar14 = *(int *)(this->_padding_ + 8 + (longlong)iVar14 * 0x10);
          } while (iVar14 != -1);
        }
      }
      if ((*(int *)(lVar3 + 0x80 + lVar19) != 0) || (*(char *)(lVar3 + 0x8c + lVar19) == '\x01')) {
        if ((0xfffffe < uVar16) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterSection.cpp"
                               ,0x65,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        iVar14 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                           (param_3,(UObject *)&this[-1].Weight.KeyHandles.field_0x80,
                            uVar16 | 0x4000000);
        FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar14,iVar11);
      }
LAB_14a433178:
      uVar16 = uVar16 + 1;
      lVar19 = lVar19 + 0x128;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  lVar17 = (longlong)(int)lVar20;
  uVar16 = 0;
  if (0 < lVar17) {
    lVar20 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar16 < (int)this->_padding_) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      lVar19 = this->_padding_;
      lVar3 = *(longlong *)(lVar19 + lVar20);
      uVar13 = ::GetTypeHash((FNameEntryId)(uint)lVar3);
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        plVar18 = &this->_padding_;
        if ((longlong *)this->_padding_ != (longlong *)0x0) {
          plVar18 = (longlong *)this->_padding_;
        }
        iVar14 = *(int *)((longlong)plVar18 +
                         (ulonglong)
                         ((int)this->_padding_ - 1U & (int)((ulonglong)lVar3 >> 0x20) + uVar13) * 4)
        ;
        if (iVar14 != -1) {
          do {
            if (*(longlong *)(this->_padding_ + (longlong)iVar14 * 0x10) == lVar3)
            goto LAB_14a4332ea;
            iVar14 = *(int *)(this->_padding_ + 8 + (longlong)iVar14 * 0x10);
          } while (iVar14 != -1);
        }
      }
      if ((*(int *)(lVar19 + 0x80 + lVar20) != 0) || (*(char *)(lVar19 + 0x9c + lVar20) == '\x01'))
      {
        if ((0xfffffe < uVar16) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterSection.cpp"
                               ,0x65,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        iVar14 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                           (param_3,(UObject *)&this[-1].Weight.KeyHandles.field_0x80,
                            uVar16 | 0x5000000);
        FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar14,iVar11);
      }
LAB_14a4332ea:
      uVar16 = uVar16 + 1;
      lVar20 = lVar20 + 0x130;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  lVar17 = (longlong)(int)lVar6;
  uVar16 = 0;
  if (0 < lVar17) {
    lVar20 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar16 < (int)this->_padding_) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      plVar18 = (longlong *)(this->_padding_ + lVar20);
      lVar6 = *plVar18;
      uVar13 = ::GetTypeHash((FNameEntryId)(uint)lVar6);
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        plVar15 = &this->_padding_;
        if ((longlong *)this->_padding_ != (longlong *)0x0) {
          plVar15 = (longlong *)this->_padding_;
        }
        iVar14 = *(int *)((longlong)plVar15 +
                         (ulonglong)
                         ((int)this->_padding_ - 1U & (int)((ulonglong)lVar6 >> 0x20) + uVar13) * 4)
        ;
        if (iVar14 != -1) {
          do {
            if (*(longlong *)(this->_padding_ + (longlong)iVar14 * 0x10) == lVar6)
            goto LAB_14a433468;
            iVar14 = *(int *)(this->_padding_ + 8 + (longlong)iVar14 * 0x10);
          } while (iVar14 != -1);
        }
      }
      if (((((int)plVar18[0x10] != 0) || (*(char *)((longlong)plVar18 + 0x9c) == '\x01')) ||
          ((int)plVar18[0x35] != 0)) || (*(char *)((longlong)plVar18 + 0x1c4) == '\x01')) {
        if ((0xfffffe < uVar16) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterSection.cpp"
                               ,0x65,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        iVar14 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                           (param_3,(UObject *)&this[-1].Weight.KeyHandles.field_0x80,
                            uVar16 | 0x6000000);
        FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar14,iVar11);
      }
LAB_14a433468:
      uVar16 = uVar16 + 1;
      lVar20 = lVar20 + 600;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  lVar17 = (longlong)(int)lVar7;
  uVar16 = 0;
  if (0 < lVar17) {
    lVar20 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar16 < (int)this->_padding_) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      plVar18 = (longlong *)(this->_padding_ + lVar20);
      lVar6 = *plVar18;
      uVar13 = ::GetTypeHash((FNameEntryId)(uint)lVar6);
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        plVar15 = &this->_padding_;
        if ((longlong *)this->_padding_ != (longlong *)0x0) {
          plVar15 = (longlong *)this->_padding_;
        }
        iVar14 = *(int *)((longlong)plVar15 +
                         (ulonglong)
                         ((int)this->_padding_ - 1U & (int)((ulonglong)lVar6 >> 0x20) + uVar13) * 4)
        ;
        if (iVar14 != -1) {
          do {
            if (*(longlong *)(this->_padding_ + (longlong)iVar14 * 0x10) == lVar6)
            goto LAB_14a433601;
            iVar14 = *(int *)(this->_padding_ + 8 + (longlong)iVar14 * 0x10);
          } while (iVar14 != -1);
        }
      }
      if (((((int)plVar18[0x10] != 0) || (*(char *)((longlong)plVar18 + 0x9c) == '\x01')) ||
          ((int)plVar18[0x35] != 0)) ||
         (((*(char *)((longlong)plVar18 + 0x1c4) == '\x01' || ((int)plVar18[0x5a] != 0)) ||
          (*(char *)((longlong)plVar18 + 0x2ec) == '\x01')))) {
        uVar13 = (int)this->_padding_ + uVar16;
        if ((((int)uVar13 < 0) || (0xfffffe < (int)uVar13)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterSection.cpp"
                               ,0x65,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        iVar14 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                           (param_3,(UObject *)&this[-1].Weight.KeyHandles.field_0x80,
                            uVar13 | 0x6000000);
        FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar14,iVar11);
      }
LAB_14a433601:
      uVar16 = uVar16 + 1;
      lVar20 = lVar20 + 0x380;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  lVar17 = (longlong)(int)lVar8;
  uVar16 = 0;
  if (0 < lVar17) {
    lVar20 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar16 < (int)this->_padding_) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      plVar18 = (longlong *)(this->_padding_ + lVar20);
      lVar6 = *plVar18;
      uVar13 = ::GetTypeHash((FNameEntryId)(uint)lVar6);
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        plVar15 = &this->_padding_;
        if ((longlong *)this->_padding_ != (longlong *)0x0) {
          plVar15 = (longlong *)this->_padding_;
        }
        iVar14 = *(int *)((longlong)plVar15 +
                         (ulonglong)
                         ((int)this->_padding_ - 1U & (int)((ulonglong)lVar6 >> 0x20) + uVar13) * 4)
        ;
        if (iVar14 != -1) {
          do {
            if (*(longlong *)(this->_padding_ + (longlong)iVar14 * 0x10) == lVar6)
            goto LAB_14a433812;
            iVar14 = *(int *)(this->_padding_ + 8 + (longlong)iVar14 * 0x10);
          } while (iVar14 != -1);
        }
      }
      if ((((((int)plVar18[0x10] != 0) || (*(char *)((longlong)plVar18 + 0x9c) == '\x01')) ||
           ((int)plVar18[0x35] != 0)) ||
          (((((*(char *)((longlong)plVar18 + 0x1c4) == '\x01' || ((int)plVar18[0x5a] != 0)) ||
             ((*(char *)((longlong)plVar18 + 0x2ec) == '\x01' ||
              (((int)plVar18[0x7f] != 0 || (*(char *)((longlong)plVar18 + 0x414) == '\x01')))))) ||
            ((int)plVar18[0xa4] != 0)) ||
           (((((*(char *)((longlong)plVar18 + 0x53c) == '\x01' || ((int)plVar18[0xc9] != 0)) ||
              (*(char *)((longlong)plVar18 + 0x664) == '\x01')) ||
             (((int)plVar18[0xee] != 0 || (*(char *)((longlong)plVar18 + 0x78c) == '\x01')))) ||
            (((int)plVar18[0x113] != 0 ||
             ((*(char *)((longlong)plVar18 + 0x8b4) == '\x01' || ((int)plVar18[0x138] != 0))))))))))
         || (*(char *)((longlong)plVar18 + 0x9dc) == '\x01')) {
        if ((0xfffffe < uVar16) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterSection.cpp"
                               ,0x65,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        iVar14 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                           (param_3,(UObject *)&this[-1].Weight.KeyHandles.field_0x80,
                            uVar16 | 0x7000000);
        FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar14,iVar11);
      }
LAB_14a433812:
      uVar16 = uVar16 + 1;
      lVar20 = lVar20 + 0xa70;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  return true;
}

// PostEditImport @ 14a433980

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::PostEditImport(UMovieSceneControlRigParameterSection *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  UMovieSceneParameterSection::PostEditImport((UMovieSceneParameterSection *)this);
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar3 = UMovieSceneControlRigParameterTrack::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      SetControlRig(this,*(UControlRig **)(lVar2 + 0x1c8));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a4339dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3a8))(this);
  return;
}

// PostLoad @ 14a434240

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::PostLoad(UMovieSceneControlRigParameterSection *this)

{
  longlong *this_00;
  int iVar1;
  longlong lVar2;
  TObjectPtr<UControlRig>_u_0 TVar3;
  bool bVar4;
  UClass *pUVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  TObjectPtr<UControlRig>_u_0 local_res8;
  
  UMovieSceneSignedObject::PostLoad((UMovieSceneSignedObject *)this);
  if ((this->ControlRig).field0_0x0.DebugPtr != (UControlRig *)0x0) {
    pFVar6 = (this->ConstraintsChannels).AllocatorInstance.Data;
    iVar1 = (this->ConstraintsChannels).ArrayNum;
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x128;
    while( true ) {
      if ((this->ConstraintsChannels).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FConstraintAndActiveChannel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar6 == pFVar7) break;
      local_res8 = (TObjectPtr<UControlRig>_u_0)
                   ((TObjectPtr<UControlRig>_u_0 *)(pFVar6 + 0x120))->DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14a4342d7:
        if (local_res8.DebugPtr != (UControlRig *)0x0) {
          pUVar5 = Z_Construct_UClass_UTickableTransformConstraint_NoRegister();
          bVar4 = FObjectPtr::IsA(&local_res8.ObjectPtr,pUVar5);
          if (((bVar4) && (local_res8.DebugPtr != (UControlRig *)0x0)) &&
             (this_00 = &(local_res8.DebugPtr)->_padding_, *this_00 != 0)) {
            pUVar5 = Z_Construct_UClass_UTransformableControlHandle_NoRegister();
            bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
            if ((bVar4) && (lVar2 = *this_00, lVar2 != 0)) {
              TVar3 = (TObjectPtr<UControlRig>_u_0)(this->ControlRig).field0_0x0.DebugPtr;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (TVar3.DebugPtr != (UControlRig *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
              }
              local_res8 = TVar3;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (TVar3.DebugPtr != (UControlRig *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
              }
              FSoftObjectPtr::operator=((FSoftObjectPtr *)(lVar2 + 0x68),(FObjectPtr)&local_res8);
            }
          }
        }
      }
      else if (local_res8.DebugPtr != (UControlRig *)0x0) {
        UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
        goto LAB_14a4342d7;
      }
      pFVar6 = pFVar6 + 0x128;
    }
  }
  return;
}

// PreSave @ 14a435520

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::PreSave
          (UMovieSceneControlRigParameterSection *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// ReconstructChannelProxy @ 14a437fe0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::ReconstructChannelProxy
          (UMovieSceneControlRigParameterSection *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_padding_ != &local_18) {
    this->_padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  UMovieSceneSignedObject::BroadcastChanged((UMovieSceneSignedObject *)this);
  return;
}

// RecreateWithThisControlRig @ 14a438230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::RecreateWithThisControlRig
          (UMovieSceneControlRigParameterSection *this,UControlRig *param_1,bool param_2)

{
  ERigElementType *pEVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ERigControlType EVar7;
  FRigControlElement *pFVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  undefined8 uVar15;
  double dVar16;
  longlong *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  bool bVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  longlong lVar30;
  FRigBaseElement *pFVar31;
  FName FVar32;
  UClass *pUVar33;
  UControlRig *pUVar34;
  longlong lVar35;
  FRigControlValue *pFVar36;
  TRotator<double> *pTVar37;
  ulonglong uVar38;
  ForElementType<FSetElementId> FVar39;
  FName *pFVar40;
  longlong *plVar41;
  FName FVar42;
  URigHierarchy *pUVar43;
  double dVar44;
  double dVar45;
  FNameEntryId FVar46;
  undefined1 auStack_2b8 [32];
  ERigControlValueType local_288;
  char local_287;
  FRigElementKey local_280;
  undefined1 local_274;
  undefined1 local_273;
  TPairInitializer<FName_const_&,FName_&&> local_270;
  URigHierarchy *local_260;
  undefined1 local_258 [8];
  FName FStack_250;
  undefined1 local_248 [16];
  UControlRig *local_238;
  undefined8 local_230;
  FName local_228;
  undefined1 local_220 [4];
  FName local_21c;
  longlong *local_210;
  double dStack_208;
  double local_200;
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined1 auStack_1d0 [16];
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  undefined1 local_198 [24];
  double dStack_180;
  undefined1 local_178 [16];
  TVector<double>_u_0 local_168;
  bool local_150;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
  local_108;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_287 = param_2;
  SetControlRig(this,param_1);
  pUVar34 = (this->ControlRig).field0_0x0.DebugPtr;
  lVar30 = (**(code **)(pUVar34->_padding_ + 0x3c0))(pUVar34,local_258);
  iVar27 = *(int *)(lVar30 + 8);
  if (local_258 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_258);
  }
  if ((0 < iVar27) && (iVar27 == (this->ControlsMask).ArrayNum)) {
    ConvertMaskArrayToNameSet(this);
  }
  pUVar34 = (this->ControlRig).field0_0x0.DebugPtr;
  local_210 = (longlong *)0x0;
  dStack_208 = 0.0;
  (**(code **)(pUVar34->_padding_ + 0x420))(pUVar34,&local_210);
  local_108.Elements._0_8_ = 0;
  local_108.Elements._8_8_ = 0;
  local_108.Elements._32_8_ = 0;
  local_108.Elements._40_4_ = 0;
  local_108.Elements._44_4_ = 0x80;
  local_108.Elements._48_4_ = 0xffffffff;
  local_108.Elements._52_4_ = 0;
  local_108.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_108.HashSize = 0;
  pUVar43 = (((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).field0_0x0.DebugPtr;
  local_258._0_4_ = FUE5MainStreamObjectVersion::GUID.A;
  local_258._4_4_ = FUE5MainStreamObjectVersion::GUID.B;
  FStack_250.ComparisonIndex.Value = FUE5MainStreamObjectVersion::GUID.C;
  FStack_250.Number = FUE5MainStreamObjectVersion::GUID.D;
  local_260 = pUVar43;
  iVar27 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,(FGuid *)local_258)
  ;
  if (iVar27 < 0x3f) {
    iVar27 = dStack_208._0_4_;
    plVar2 = local_210 + dStack_208._0_4_;
    plVar41 = local_210;
    while( true ) {
      if (dStack_208._0_4_ != iVar27) {
        `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_288);
      }
      if (plVar41 == plVar2) break;
      if (*(char *)(*plVar41 + 0x231) == '\x01') {
        pEVar1 = (ERigElementType *)(*plVar41 + 0x14);
        local_288 = 8;
        UFKControlRig::GetControlTargetName((FName *)&local_280,pEVar1);
        local_220[0] = 8;
        local_21c = (FName)local_280._0_8_;
        local_270.Value = (FName *)0x0;
        if ((FName)local_280._0_8_ != (FName)0x0) {
          iVar28 = URigHierarchy::GetIndex(pUVar43,(FRigElementKey *)local_220,true);
          pFVar31 = URigHierarchy::Get(pUVar43,iVar28);
          if (pFVar31 != (FRigBaseElement *)0x0) {
            local_288 = Current;
            local_258 = (undefined1  [8])pEVar1;
            FVar32 = UFKControlRig::GetControlName(&local_228,&local_280.Type);
            FStack_250 = FVar32;
            TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,FName_&&>_>
                      (&local_108,&local_270,(bool *)local_258);
          }
        }
      }
      plVar41 = plVar41 + 1;
    }
  }
  bVar26 = UControlRig::IsModularRig(param_1);
  if ((bVar26) &&
     (pUVar43 = (param_1->DynamicHierarchy).field0_0x0.DebugPtr, pUVar43 != (URigHierarchy *)0x0)) {
    bVar26 = pUVar43->bSuspendNameSpaceKeyWarnings;
    pUVar43->bSuspendNameSpaceKeyWarnings = true;
    local_258 = (undefined1  [8])
                UE::Core::Private::Function::
                TFunctionRefCaller<`UMovieSceneControlRigParameterSection::RecreateWithThisControlRig'::__l24::<lambda_1>,void,FBaseParameterNameAndValue_*>
                ::Call;
    local_230 = 0;
    local_248._8_8_ = this;
    local_248._0_8_ =
         &UE::Core::Private::Function::
          TFunction_OwnedObject<`UMovieSceneControlRigParameterSection::RecreateWithThisControlRig'::`24'::<lambda_1>,0,0>
          ::_vftable_;
    local_238 = param_1;
    ForEachParameter(this,(TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *)local_258);
    pUVar43->bSuspendNameSpaceKeyWarnings = bVar26;
  }
  local_270.Key._0_4_ = (this->ConstraintsChannels).ArrayNum;
  uVar38 = (ulonglong)(int)(uint)local_270.Key;
  FVar32 = (FName)(this->ConstraintsChannels).AllocatorInstance.Data;
  FVar42 = (FName)((longlong)FVar32 + uVar38 * 0x128);
  local_280._0_8_ = FVar42;
  while( true ) {
    if ((this->ConstraintsChannels).ArrayNum != (int)uVar38) {
      `TCheckedPointerIterator<FConstraintAndActiveChannel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_288);
    }
    if (FVar32 == FVar42) break;
    local_270.Value = *(FName **)((longlong)FVar32 + 0x120);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14a4384eb:
      if ((UObject *)local_270.Value != (UObject *)0x0) {
        pUVar33 = Z_Construct_UClass_UTickableTransformConstraint_NoRegister();
        bVar26 = FObjectPtr::IsA((FObjectPtr *)&local_270.Value,pUVar33);
        pFVar40 = local_270.Value;
        if ((bVar26) &&
           (FVar42 = (FName)local_280._0_8_, (UObject *)local_270.Value != (UObject *)0x0)) {
          if (*(longlong *)&((UObject *)((longlong)local_270.Value + 0x78))->field_0x20 != 0) {
            pUVar33 = Z_Construct_UClass_UTransformableControlHandle_NoRegister();
            bVar26 = FObjectPtr::IsA((FObjectPtr *)
                                     &((UObject *)((longlong)pFVar40 + 0x78))->field_0x20,pUVar33);
            if (((bVar26) &&
                (lVar30 = *(longlong *)&((UObject *)((longlong)pFVar40 + 0x78))->field_0x20,
                lVar30 != 0)) &&
               (pUVar34 = (UControlRig *)
                          TPersistentObjectPtr<FSoftObjectPath>::Get
                                    ((TPersistentObjectPtr<FSoftObjectPath> *)(lVar30 + 0x68)),
               pUVar34 != (UControlRig *)0x0)) {
              pUVar33 = Z_Construct_UClass_UControlRig_NoRegister();
              iVar27 = (int)pUVar33->_padding_;
              if ((((iVar27 <= *(int *)(pUVar34->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(pUVar34->_padding_ + 0x30) + (longlong)iVar27 * 8) ==
                    &pUVar33->_padding_)) && (bVar26 = UControlRig::IsModularRig(pUVar34), bVar26))
                 && (pUVar43 = (pUVar34->DynamicHierarchy).field0_0x0.DebugPtr,
                    pUVar43 != (URigHierarchy *)0x0)) {
                bVar26 = pUVar43->bSuspendNameSpaceKeyWarnings;
                pUVar43->bSuspendNameSpaceKeyWarnings = true;
                lVar35 = (**(code **)(pUVar34->_padding_ + 0x3c8))(pUVar34,lVar30 + 0x90);
                if ((lVar35 != 0) && (*(longlong *)(lVar35 + 0x14) != *(longlong *)(lVar30 + 0x90)))
                {
                  *(longlong *)(lVar30 + 0x90) = *(longlong *)(lVar35 + 0x14);
                }
                pUVar43->bSuspendNameSpaceKeyWarnings = bVar26;
              }
            }
          }
          FVar42 = (FName)local_280._0_8_;
          if (*(longlong *)&((UObject *)((longlong)pFVar40 + 0x78))->field_0x18 != 0) {
            pUVar33 = Z_Construct_UClass_UTransformableControlHandle_NoRegister();
            bVar26 = FObjectPtr::IsA((FObjectPtr *)
                                     &((UObject *)((longlong)pFVar40 + 0x78))->field_0x18,pUVar33);
            FVar42 = (FName)local_280._0_8_;
            if (((bVar26) &&
                (lVar30 = *(longlong *)&((UObject *)((longlong)pFVar40 + 0x78))->field_0x18,
                lVar30 != 0)) &&
               (pUVar34 = (UControlRig *)
                          TPersistentObjectPtr<FSoftObjectPath>::Get
                                    ((TPersistentObjectPtr<FSoftObjectPath> *)(lVar30 + 0x68)),
               FVar42 = (FName)local_280._0_8_, pUVar34 != (UControlRig *)0x0)) {
              pUVar33 = Z_Construct_UClass_UControlRig_NoRegister();
              iVar27 = (int)pUVar33->_padding_;
              FVar42 = (FName)local_280._0_8_;
              if ((((iVar27 <= *(int *)(pUVar34->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(pUVar34->_padding_ + 0x30) + (longlong)iVar27 * 8) ==
                    &pUVar33->_padding_)) &&
                  (bVar26 = UControlRig::IsModularRig(pUVar34), FVar42 = (FName)local_280._0_8_,
                  bVar26)) &&
                 (pUVar43 = (pUVar34->DynamicHierarchy).field0_0x0.DebugPtr,
                 pUVar43 != (URigHierarchy *)0x0)) {
                bVar26 = pUVar43->bSuspendNameSpaceKeyWarnings;
                pUVar43->bSuspendNameSpaceKeyWarnings = true;
                lVar35 = (**(code **)(pUVar34->_padding_ + 0x3c8))(pUVar34,lVar30 + 0x90);
                if ((lVar35 != 0) && (*(longlong *)(lVar35 + 0x14) != *(longlong *)(lVar30 + 0x90)))
                {
                  *(longlong *)(lVar30 + 0x90) = *(longlong *)(lVar35 + 0x14);
                }
                pUVar43->bSuspendNameSpaceKeyWarnings = bVar26;
                FVar42 = (FName)local_280._0_8_;
              }
            }
          }
        }
      }
    }
    else if ((UObject *)local_270.Value != (UObject *)0x0) {
      UE::GC::MarkAsReachable((UObject *)local_270.Value);
      goto LAB_14a4384eb;
    }
    uVar38 = (ulonglong)(uint)local_270.Key;
    FVar32 = (FName)((longlong)FVar32 + 0x128);
  }
  iVar27 = dStack_208._0_4_;
  uVar38 = (ulonglong)dStack_208._0_4_;
  plVar2 = local_210 + uVar38;
  plVar41 = local_210;
  pUVar43 = local_260;
  FVar46.Value = local_228.ComparisonIndex.Value;
LAB_14a438725:
  if ((int)uVar38 != iVar27) {
    `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::operator()
              (&local_288);
  }
  if (plVar41 == plVar2) {
    (**(code **)(this->_padding_ + 0x3a8))(this);
    local_108.HashSize = 0;
    if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_108.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_108.Elements);
    if (local_210 != (longlong *)0x0) {
      FMemory::Free(local_210);
    }
    return;
  }
  pFVar8 = (FRigControlElement *)*plVar41;
  bVar26 = URigHierarchy::IsAnimatable(pUVar43,pFVar8);
  if (!bVar26) goto switchD_14a43888e_default;
  URigHierarchy::GetPreviousName(pUVar43,&local_280);
  local_270.Value = (FName *)0x0;
  if (((FName)local_280._0_8_ != (FName)0x0) &&
     (FVar32.ComparisonIndex.Value = *(uint *)&pFVar8->field_0x14,
     FVar32.Number = *(uint *)&pFVar8->field_0x18, (FName)local_280._0_8_ != FVar32)) {
    local_280.Name.Number._0_1_ = (pFVar8->Settings).ControlType;
    local_280.Name.Number._1_1_ = 1;
    RenameParameterName(this,(FName *)&local_280,(FName *)&pFVar8->field_0x14,
                        (TOptional<ERigControlType>)((short)&local_280 + 8));
  }
  EVar7 = (pFVar8->Settings).ControlType;
  if ((EVar7 == Float) || (EVar7 == ScaleFloat)) {
    lVar30 = *(longlong *)&pFVar8->field_0x14;
    uVar29 = ::GetTypeHash((FNameEntryId)(uint)lVar30);
    pUVar43 = local_260;
    if (local_108.Elements._8_4_ != local_108.Elements._52_4_) {
      FVar39 = (ForElementType<FSetElementId>)&local_108.Hash;
      if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar39 = local_108.Hash.SecondaryData;
      }
      for (iVar28 = *(int *)((longlong)FVar39 +
                            (ulonglong)
                            (local_108.HashSize - 1U & (int)((ulonglong)lVar30 >> 0x20) + uVar29) *
                            4); iVar28 != -1;
          iVar28 = *(int *)(local_108.Elements._0_8_ + 0x10 + (longlong)iVar28 * 0x18)) {
        if (*(longlong *)(local_108.Elements._0_8_ + (longlong)iVar28 * 0x18) == lVar30) {
          if (((iVar28 != -1) &&
              (lVar30 = local_108.Elements._0_8_ + (longlong)iVar28 * 0x18, lVar30 != 0)) &&
             (pFVar40 = (FName *)(lVar30 + 8), pFVar40 != (FName *)0x0)) {
            local_280.Name.Number._2_1_ = (pFVar8->Settings).ControlType;
            local_280.Name.Number._3_1_ = 1;
            RenameParameterName(this,pFVar40,(FName *)&pFVar8->field_0x14,
                                (TOptional<ERigControlType>)((short)&local_280 + 10));
            pUVar43 = local_260;
          }
          break;
        }
      }
    }
  }
  EVar7 = (pFVar8->Settings).ControlType;
  switch(EVar7) {
  case Bool:
    if (local_287 != '\0') {
      local_288 = Current;
      pFVar36 = UControlRig::GetControlValue
                          ((this->ControlRig).field0_0x0.DebugPtr,(FRigControlValue *)local_198,
                           pFVar8,&local_288);
      FVar10.ComparisonIndex.Value = *(uint *)&pFVar8->field_0x14;
      FVar10.Number = *(uint *)&pFVar8->field_0x18;
      local_273 = 1;
      local_274 = *(undefined1 *)&(pFVar36->FloatStorage).Float00;
      AddBoolParameter(this,FVar10,SUB82(&local_274,0),false);
      uVar38 = (ulonglong)dStack_208 & 0xffffffff;
      plVar41 = plVar41 + 1;
      goto LAB_14a438725;
    }
    break;
  case Float:
  case ScaleFloat:
    bVar26 = local_287 != '\0';
    if (bVar26) {
      local_288 = Current;
      pFVar36 = UControlRig::GetControlValue
                          ((this->ControlRig).field0_0x0.DebugPtr,(FRigControlValue *)local_198,
                           pFVar8,&local_288);
      FVar46.Value = (uint)(pFVar36->FloatStorage).Float00;
    }
    local_21c.ComparisonIndex.Value._0_1_ = bVar26;
    if (bVar26) {
      local_220 = (undefined1  [4])FVar46.Value;
    }
    FVar9.ComparisonIndex.Value = *(uint *)&pFVar8->field_0x14;
    FVar9.Number = *(uint *)&pFVar8->field_0x18;
    AddScalarParameter(this,FVar9,(TOptional<float>)local_220,false);
    uVar38 = (ulonglong)dStack_208 & 0xffffffff;
    plVar41 = plVar41 + 1;
    goto LAB_14a438725;
  case Integer:
    if ((pFVar8->Settings).ControlEnum.field0_0x0.DebugPtr == (UEnum *)0x0) {
      if (local_287 != '\0') {
        local_288 = Current;
        pFVar36 = UControlRig::GetControlValue
                            ((this->ControlRig).field0_0x0.DebugPtr,(FRigControlValue *)local_198,
                             pFVar8,&local_288);
        FVar12.ComparisonIndex.Value = *(uint *)&pFVar8->field_0x14;
        FVar12.Number = *(uint *)&pFVar8->field_0x18;
        local_228.Number._0_1_ = 1;
        local_228.ComparisonIndex.Value = (uint)(pFVar36->FloatStorage).Float00;
        AddIntegerParameter(this,FVar12,(TOptional<int>)&local_228,false);
        uVar38 = (ulonglong)dStack_208 & 0xffffffff;
        plVar41 = plVar41 + 1;
        goto LAB_14a438725;
      }
    }
    else if (local_287 != '\0') {
      local_288 = Current;
      pFVar36 = UControlRig::GetControlValue
                          ((this->ControlRig).field0_0x0.DebugPtr,(FRigControlValue *)local_198,
                           pFVar8,&local_288);
      FVar11.ComparisonIndex.Value = *(uint *)&pFVar8->field_0x14;
      FVar11.Number = *(uint *)&pFVar8->field_0x18;
      local_270.Key._0_4_ = CONCAT22(local_270.Key._2_2_,0x100);
      local_270.Key._0_4_ =
           CONCAT31(local_270.Key._1_3_,*(undefined1 *)&(pFVar36->FloatStorage).Float00);
      AddEnumParameter(this,FVar11,(pFVar8->Settings).ControlEnum.field0_0x0.DebugPtr,
                       SUB82(&local_270,0),false);
      uVar38 = (ulonglong)dStack_208 & 0xffffffff;
      plVar41 = plVar41 + 1;
      goto LAB_14a438725;
    }
    break;
  case Vector2D:
    bVar26 = local_287 != '\0';
    plVar17 = local_210;
    dVar45 = dStack_208;
    if (bVar26) {
      local_288 = Current;
      pFVar36 = UControlRig::GetControlValue
                          ((this->ControlRig).field0_0x0.DebugPtr,(FRigControlValue *)local_198,
                           pFVar8,&local_288);
      auVar25 = _local_258;
      uVar3 = (pFVar36->FloatStorage).Float00;
      uVar5 = (pFVar36->FloatStorage).Float01;
      local_258._4_4_ = uVar5;
      local_258._0_4_ = uVar3;
      uVar15 = local_258;
      FStack_250.Number = auVar25._12_4_;
      local_258 = auVar25._0_8_;
      FStack_250.ComparisonIndex.Value = (uint)(pFVar36->FloatStorage).Float02;
      _local_258 = CONCAT88(FStack_250,uVar15);
      plVar17 = (longlong *)(double)(float)uVar3;
      dVar45 = (double)(float)uVar5;
    }
    local_248[0] = bVar26;
    if (bVar26) {
      FStack_250.ComparisonIndex.Value = SUB84(dVar45,0);
      local_258 = (undefined1  [8])plVar17;
      FStack_250.Number = (uint)((ulonglong)dVar45 >> 0x20);
    }
    FVar13.ComparisonIndex.Value = *(uint *)&pFVar8->field_0x14;
    FVar13.Number = *(uint *)&pFVar8->field_0x18;
    AddVector2DParameter(this,FVar13,(TOptional<UE::Math::TVector2<double>_> *)local_258,false);
    uVar38 = (ulonglong)dStack_208 & 0xffffffff;
    plVar41 = plVar41 + 1;
    goto LAB_14a438725;
  case Position:
  case Scale:
  case Rotator:
    goto switchD_14a43888e_caseD_4;
  case Transform:
  case TransformNoScale:
  case EulerTransform:
    bVar26 = false;
    if (local_287 == '\0') {
      uVar18 = local_168._s_0.Y;
      uVar19 = local_168._s_0.X;
      uVar15 = local_168._s_0.Z;
      dVar44 = (double)local_178._0_8_;
      dVar16 = dStack_180;
      dVar45 = (double)local_178._8_8_;
      dVar20 = (double)local_198._0_8_;
      dVar21 = (double)local_198._16_8_;
      dVar22 = (double)local_198._8_8_;
    }
    else {
      pUVar34 = (this->ControlRig).field0_0x0.DebugPtr;
      local_288 = Current;
      if (EVar7 == Transform) {
        pFVar36 = UControlRig::GetControlValue
                            (pUVar34,(FRigControlValue *)local_198,pFVar8,&local_288);
        fVar23 = (pFVar36->FloatStorage).Float20;
        fVar24 = (pFVar36->FloatStorage).Float21;
        dVar16 = (double)(pFVar36->FloatStorage).Float01;
        dVar45 = (double)(pFVar36->FloatStorage).Float03;
        dVar44 = (double)(pFVar36->FloatStorage).Float11;
        local_1d8 = (double)(pFVar36->FloatStorage).Float12;
        uVar15 = (undefined8)(pFVar36->FloatStorage).Float22;
        local_1e8._8_4_ = SUB84(dVar44,0);
        local_1e8._0_8_ = (double)(pFVar36->FloatStorage).Float10;
        local_1e8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        FStack_250.ComparisonIndex.Value = SUB84(dVar16,0);
        local_258 = (undefined1  [8])(double)(pFVar36->FloatStorage).Float00;
        FStack_250.Number = (uint)((ulonglong)dVar16 >> 0x20);
        local_248._8_4_ = SUB84(dVar45,0);
        local_248._0_8_ = (double)(pFVar36->FloatStorage).Float02;
        local_248._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
        UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_258,(TRotator<double> *)auStack_1d0)
        ;
        bVar26 = true;
        local_248._0_8_ = uVar15;
        uVar18 = (double)fVar24;
        uVar19 = (double)fVar23;
        dVar44 = (double)auStack_1d0._8_8_;
        dVar16 = (double)auStack_1d0._0_8_;
        dVar45 = dStack_1c0;
        dVar20 = (double)local_1e8._0_8_;
        dVar21 = local_1d8;
        dVar22 = (double)local_1e8._8_8_;
      }
      else if (EVar7 == EulerTransform) {
        pFVar36 = UControlRig::GetControlValue
                            (pUVar34,(FRigControlValue *)local_198,pFVar8,&local_288);
        dVar44 = (double)(pFVar36->FloatStorage).Float01;
        dVar16 = (double)(pFVar36->FloatStorage).Float00;
        dVar45 = (double)(pFVar36->FloatStorage).Float02;
        bVar26 = true;
        local_168._s_0.Z = (double)(pFVar36->FloatStorage).Float20;
        uVar18 = (double)(pFVar36->FloatStorage).Float13;
        uVar19 = (double)(pFVar36->FloatStorage).Float12;
        uVar15 = local_168._s_0.Z;
        dVar20 = (double)(pFVar36->FloatStorage).Float03;
        dVar21 = (double)(pFVar36->FloatStorage).Float11;
        dVar22 = (double)(pFVar36->FloatStorage).Float10;
      }
      else {
        pFVar36 = UControlRig::GetControlValue
                            (pUVar34,(FRigControlValue *)local_198,pFVar8,&local_288);
        auStack_1d0._8_8_ = (undefined8)(pFVar36->FloatStorage).Float00;
        dStack_1c0 = (double)(pFVar36->FloatStorage).Float01;
        local_1b8 = (double)(pFVar36->FloatStorage).Float02;
        local_1b0 = (double)(pFVar36->FloatStorage).Float03;
        dVar45 = (double)(pFVar36->FloatStorage).Float11;
        local_1d8 = (double)(pFVar36->FloatStorage).Float12;
        local_1e8._8_4_ = SUB84(dVar45,0);
        local_1e8._0_8_ = (double)(pFVar36->FloatStorage).Float10;
        local_1e8._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
        local_248._0_8_ = local_1d8;
        pTVar37 = UE::Math::TQuat<double>::Rotator
                            ((TQuat<double> *)(auStack_1d0 + 8),(TRotator<double> *)local_258);
        dVar45 = pTVar37->Roll;
        dVar16 = pTVar37->Pitch;
        dVar44 = pTVar37->Yaw;
        bVar26 = true;
        unique0x10000416 = SUB84(dVar16,0);
        local_198._16_8_ = local_1d8;
        unique0x1000041a = (int)((ulonglong)dVar16 >> 0x20);
        local_178._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
        local_178._0_12_ = *(undefined1 (*) [12])&pTVar37->Yaw;
        uVar18 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        uVar19 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        uVar15 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        dVar20 = (double)local_1e8._0_8_;
        dVar21 = local_1d8;
        dVar22 = (double)local_1e8._8_8_;
      }
    }
    if (bVar26 != false) {
      local_198._8_4_ = SUB84(dVar22,0);
      local_198._0_8_ = dVar20;
      local_198._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      unique0x100003ce = SUB84(dVar16,0);
      local_198._16_8_ = dVar21;
      unique0x100003d2 = (int)((ulonglong)dVar16 >> 0x20);
      local_178._8_4_ = SUB84(dVar45,0);
      local_178._0_8_ = dVar44;
      local_178._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
      local_168._8_4_ = (int)uVar18;
      local_168._s_0.X = (double)uVar19;
      local_168._12_4_ = (int)((ulonglong)uVar18 >> 0x20);
      local_168._s_0.Z = (double)uVar15;
    }
    FVar42.ComparisonIndex.Value = *(uint *)&pFVar8->field_0x14;
    FVar42.Number = *(uint *)&pFVar8->field_0x18;
    local_150 = bVar26;
    AddTransformParameter(this,FVar42,(TOptional<FEulerTransform> *)local_198,false);
  }
switchD_14a43888e_default:
  uVar38 = (ulonglong)dStack_208 & 0xffffffff;
  plVar41 = plVar41 + 1;
  goto LAB_14a438725;
switchD_14a43888e_caseD_4:
  bVar26 = local_287 != '\0';
  plVar17 = local_210;
  dVar45 = local_200;
  dVar16 = dStack_208;
  if (bVar26) {
    local_288 = Current;
    pFVar36 = UControlRig::GetControlValue
                        ((this->ControlRig).field0_0x0.DebugPtr,(FRigControlValue *)local_198,pFVar8
                         ,&local_288);
    auVar25 = _local_258;
    uVar4 = (pFVar36->FloatStorage).Float00;
    uVar6 = (pFVar36->FloatStorage).Float01;
    local_258._4_4_ = uVar6;
    local_258._0_4_ = uVar4;
    FStack_250 = auVar25._8_8_;
    dVar45 = (double)(pFVar36->FloatStorage).Float02;
    local_248._0_8_ = dVar45;
    plVar17 = (longlong *)(double)(float)uVar4;
    dVar16 = (double)(float)uVar6;
  }
  local_248[8] = bVar26;
  if (bVar26) {
    FStack_250.ComparisonIndex.Value = SUB84(dVar16,0);
    local_258 = (undefined1  [8])plVar17;
    FStack_250.Number = (uint)((ulonglong)dVar16 >> 0x20);
    local_248._0_8_ = dVar45;
  }
  FVar14.ComparisonIndex.Value = *(uint *)&pFVar8->field_0x14;
  FVar14.Number = *(uint *)&pFVar8->field_0x18;
  AddVectorParameter(this,FVar14,(TOptional<UE::Math::TVector<double>_> *)local_258,false);
  uVar38 = (ulonglong)dStack_208 & 0xffffffff;
  plVar41 = plVar41 + 1;
  goto LAB_14a438725;
}

// RemoveAllKeys @ 14a43c1e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::RemoveAllKeys
          (UMovieSceneControlRigParameterSection *this,bool param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar8;
  ulonglong uVar9;
  TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *pTVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_2f8;
  undefined8 local_2f0;
  ForAnyElementType local_2e8;
  int local_2e0 [2];
  undefined1 local_2d8;
  undefined1 local_2d7;
  undefined1 local_2d6;
  undefined1 local_2d5;
  undefined1 local_2d4 [4];
  TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> *local_2d0;
  undefined1 local_2c8 [4];
  undefined4 local_2c4;
  undefined1 local_2c0;
  undefined4 local_2bc;
  undefined1 local_2b8 [4];
  undefined4 local_2b4;
  undefined1 local_2b0;
  undefined4 local_2ac;
  undefined1 local_2a8 [4];
  undefined4 local_2a4;
  undefined1 local_2a0;
  undefined4 local_29c;
  undefined1 local_298 [4];
  undefined4 local_294;
  undefined1 local_290;
  undefined4 local_28c;
  undefined1 local_288 [4];
  undefined4 local_284;
  undefined1 local_280;
  undefined4 local_27c;
  undefined1 local_278 [4];
  undefined4 local_274;
  undefined1 local_270;
  undefined4 local_26c;
  undefined1 local_268 [4];
  undefined4 local_264;
  undefined1 local_260;
  undefined4 local_25c;
  undefined1 local_258 [4];
  undefined4 local_254;
  undefined1 local_250;
  undefined4 local_24c;
  undefined1 local_248 [4];
  undefined4 local_244;
  undefined1 local_240;
  undefined4 local_23c;
  undefined1 local_238 [4];
  undefined4 local_234;
  undefined1 local_230;
  undefined4 local_22c;
  undefined1 local_228 [4];
  undefined4 local_224;
  undefined1 local_220;
  undefined4 local_21c;
  undefined1 local_218 [4];
  undefined4 local_214;
  undefined1 local_210;
  undefined4 local_20c;
  undefined1 local_208 [4];
  undefined4 local_204;
  undefined1 local_200;
  undefined4 local_1fc;
  FScriptContainerElement *local_1f8;
  undefined8 local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  int iStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  int iStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  int iStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  int iStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  int iStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  int iStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  int iStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  
  local_2e8.Data = (FScriptContainerElement *)0x0;
  local_2e0[0] = 0;
  local_2e0[1] = 0;
  local_2f8.Data = (FScriptContainerElement *)0x0;
  local_2f0 = 0;
  if (param_1) {
    pFVar12 = (this->SpaceChannels).AllocatorInstance.Data;
    iVar5 = (this->SpaceChannels).ArrayNum;
    pFVar13 = pFVar12 + 8;
    pFVar14 = pFVar12 + (longlong)iVar5 * 0x150;
    while( true ) {
      if ((this->SpaceChannels).ArrayNum != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FSpaceControlNameAndChannel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar12 == pFVar14) break;
      if (local_2e0[0] < 0) {
        iVar11 = -local_2e0[0];
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar11,&local_2e8,local_2e0,local_2e0 + 1);
        DefaultConstructItems<FFrameNumber,int>(local_2e8.Data + (longlong)iVar4 * 4,iVar11);
      }
      else if (0 < local_2e0[0]) {
        local_2e0[0] = 0;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_2e8,0,local_2e0 + 1);
      }
      if ((int)local_2f0 < 0) {
        iVar11 = -(int)local_2f0;
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar11,&local_2f8,(int *)&local_2f0,(int *)((longlong)&local_2f0 + 4)
                          );
        DefaultConstructItems<FKeyHandle,int>(local_2f8.Data + (longlong)iVar4 * 4,iVar11);
      }
      else if (0 < (int)local_2f0) {
        local_2f0 = local_2f0 & 0xffffffff00000000;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_2f8,0,(int *)((longlong)&local_2f0 + 4));
      }
      local_2b8[0] = 2;
      local_2b4 = 0;
      local_2b0 = 2;
      local_2ac = 0;
      (**(code **)(*(longlong *)pFVar13 + 8))(pFVar13,local_2b8,&local_2e8);
      iVar4 = (int)local_2f0;
      pcVar2 = *(code **)(*(longlong *)pFVar13 + 0x28);
      local_1e8 = local_2f8.Data;
      if (((int)local_2f0 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iStack_1e0 = iVar4;
      local_118 = (undefined4)local_1e8;
      uStack_114 = local_1e8._4_4_;
      iStack_110 = iVar4;
      uStack_10c = uStack_1dc;
      (*pcVar2)(pFVar13,&local_118);
      pFVar12 = pFVar12 + 0x150;
      pFVar13 = pFVar13 + 0x150;
    }
  }
  pTVar6 = UMovieSceneParameterSection::GetBoolParameterNamesAndCurves
                     ((UMovieSceneParameterSection *)this);
  pFVar12 = (pTVar6->AllocatorInstance).Data;
  iVar5 = pTVar6->ArrayNum;
  pFVar13 = pFVar12 + 8;
  pFVar14 = pFVar12 + (longlong)iVar5 * 0x128;
  while( true ) {
    if (pTVar6->ArrayNum != iVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FBoolParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar12 == pFVar14) break;
    if (local_2e0[0] < 0) {
      iVar11 = -local_2e0[0];
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar11,&local_2e8,local_2e0,local_2e0 + 1);
      DefaultConstructItems<FFrameNumber,int>(local_2e8.Data + (longlong)iVar4 * 4,iVar11);
    }
    else if (0 < local_2e0[0]) {
      local_2e0[0] = 0;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_2e8,0,local_2e0 + 1);
    }
    if ((int)local_2f0 < 0) {
      iVar11 = -(int)local_2f0;
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar11,&local_2f8,(int *)&local_2f0,(int *)((longlong)&local_2f0 + 4));
      DefaultConstructItems<FKeyHandle,int>(local_2f8.Data + (longlong)iVar4 * 4,iVar11);
    }
    else if (0 < (int)local_2f0) {
      local_2f0 = local_2f0 & 0xffffffff00000000;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_2f8,0,(int *)((longlong)&local_2f0 + 4));
    }
    local_2a8[0] = 2;
    local_2a4 = 0;
    local_2a0 = 2;
    local_29c = 0;
    (**(code **)(*(longlong *)pFVar13 + 8))(pFVar13,local_2a8,&local_2e8);
    iVar4 = (int)local_2f0;
    pcVar2 = *(code **)(*(longlong *)pFVar13 + 0x28);
    local_1d8 = local_2f8.Data;
    if (((int)local_2f0 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iStack_1d0 = iVar4;
    local_108 = (undefined4)local_1d8;
    uStack_104 = local_1d8._4_4_;
    iStack_100 = iVar4;
    uStack_fc = uStack_1cc;
    (*pcVar2)(pFVar13,&local_108);
    pFVar12 = pFVar12 + 0x128;
    pFVar13 = pFVar13 + 0x128;
  }
  pFVar12 = (this->EnumParameterNamesAndCurves).AllocatorInstance.Data;
  iVar5 = (this->EnumParameterNamesAndCurves).ArrayNum;
  pFVar13 = pFVar12 + 8;
  pFVar14 = pFVar12 + (longlong)iVar5 * 0x130;
  while( true ) {
    if ((this->EnumParameterNamesAndCurves).ArrayNum != iVar5) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FEnumParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar12 == pFVar14) break;
    if (local_2e0[0] < 0) {
      iVar11 = -local_2e0[0];
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar11,&local_2e8,local_2e0,local_2e0 + 1);
      DefaultConstructItems<FFrameNumber,int>(local_2e8.Data + (longlong)iVar4 * 4,iVar11);
    }
    else if (0 < local_2e0[0]) {
      local_2e0[0] = 0;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_2e8,0,local_2e0 + 1);
    }
    if ((int)local_2f0 < 0) {
      iVar11 = -(int)local_2f0;
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar11,&local_2f8,(int *)&local_2f0,(int *)((longlong)&local_2f0 + 4));
      DefaultConstructItems<FKeyHandle,int>(local_2f8.Data + (longlong)iVar4 * 4,iVar11);
    }
    else if (0 < (int)local_2f0) {
      local_2f0 = local_2f0 & 0xffffffff00000000;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_2f8,0,(int *)((longlong)&local_2f0 + 4));
    }
    local_298[0] = 2;
    local_294 = 0;
    local_290 = 2;
    local_28c = 0;
    (**(code **)(*(longlong *)pFVar13 + 8))(pFVar13,local_298,&local_2e8);
    iVar4 = (int)local_2f0;
    pcVar2 = *(code **)(*(longlong *)pFVar13 + 0x28);
    local_1c8 = local_2f8.Data;
    if (((int)local_2f0 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iStack_1c0 = iVar4;
    local_f8 = (undefined4)local_1c8;
    uStack_f4 = local_1c8._4_4_;
    iStack_f0 = iVar4;
    uStack_ec = uStack_1bc;
    (*pcVar2)(pFVar13,&local_f8);
    pFVar12 = pFVar12 + 0x130;
    pFVar13 = pFVar13 + 0x130;
  }
  pFVar12 = (this->IntegerParameterNamesAndCurves).AllocatorInstance.Data;
  iVar5 = (this->IntegerParameterNamesAndCurves).ArrayNum;
  pFVar13 = pFVar12 + 8;
  pFVar14 = pFVar12 + (longlong)iVar5 * 0x128;
  while( true ) {
    if ((this->IntegerParameterNamesAndCurves).ArrayNum != iVar5) {
      local_2d8 = 0;
      `TCheckedPointerIterator<FIntegerParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_2d8);
    }
    if (pFVar12 == pFVar14) break;
    if (local_2e0[0] < 0) {
      iVar11 = -local_2e0[0];
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar11,&local_2e8,local_2e0,local_2e0 + 1);
      DefaultConstructItems<FFrameNumber,int>(local_2e8.Data + (longlong)iVar4 * 4,iVar11);
    }
    else if (0 < local_2e0[0]) {
      local_2e0[0] = 0;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_2e8,0,local_2e0 + 1);
    }
    if ((int)local_2f0 < 0) {
      iVar11 = -(int)local_2f0;
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar11,&local_2f8,(int *)&local_2f0,(int *)((longlong)&local_2f0 + 4));
      DefaultConstructItems<FKeyHandle,int>(local_2f8.Data + (longlong)iVar4 * 4,iVar11);
    }
    else if (0 < (int)local_2f0) {
      local_2f0 = local_2f0 & 0xffffffff00000000;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_2f8,0,(int *)((longlong)&local_2f0 + 4));
    }
    local_2c8[0] = 2;
    local_2c4 = 0;
    local_2c0 = 2;
    local_2bc = 0;
    (**(code **)(*(longlong *)pFVar13 + 8))(pFVar13,local_2c8,&local_2e8);
    iVar4 = (int)local_2f0;
    pcVar2 = *(code **)(*(longlong *)pFVar13 + 0x28);
    local_1b8 = local_2f8.Data;
    if (((int)local_2f0 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iStack_1b0 = iVar4;
    local_e8 = (undefined4)local_1b8;
    uStack_e4 = local_1b8._4_4_;
    iStack_e0 = iVar4;
    uStack_dc = uStack_1ac;
    (*pcVar2)(pFVar13,&local_e8);
    pFVar12 = pFVar12 + 0x128;
    pFVar13 = pFVar13 + 0x128;
  }
  pTVar7 = UMovieSceneParameterSection::GetScalarParameterNamesAndCurves
                     ((UMovieSceneParameterSection *)this);
  pFVar12 = (pTVar7->AllocatorInstance).Data;
  iVar5 = pTVar7->ArrayNum;
  pFVar13 = pFVar12 + 8;
  pFVar14 = pFVar12 + (longlong)iVar5 * 0x130;
  while( true ) {
    if (pTVar7->ArrayNum != iVar5) {
      local_2d7 = 0;
      `TCheckedPointerIterator<FScalarParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_2d7);
    }
    if (pFVar12 == pFVar14) break;
    if (local_2e0[0] < 0) {
      iVar11 = -local_2e0[0];
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar11,&local_2e8,local_2e0,local_2e0 + 1);
      DefaultConstructItems<FFrameNumber,int>(local_2e8.Data + (longlong)iVar4 * 4,iVar11);
    }
    else if (0 < local_2e0[0]) {
      local_2e0[0] = 0;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_2e8,0,local_2e0 + 1);
    }
    if ((int)local_2f0 < 0) {
      iVar11 = -(int)local_2f0;
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar11,&local_2f8,(int *)&local_2f0,(int *)((longlong)&local_2f0 + 4));
      DefaultConstructItems<FKeyHandle,int>(local_2f8.Data + (longlong)iVar4 * 4,iVar11);
    }
    else if (0 < (int)local_2f0) {
      local_2f0 = local_2f0 & 0xffffffff00000000;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_2f8,0,(int *)((longlong)&local_2f0 + 4));
    }
    local_288[0] = 2;
    local_284 = 0;
    local_280 = 2;
    local_27c = 0;
    (**(code **)(*(longlong *)pFVar13 + 8))(pFVar13,local_288,&local_2e8);
    iVar4 = (int)local_2f0;
    pcVar2 = *(code **)(*(longlong *)pFVar13 + 0x28);
    local_1a8 = local_2f8.Data;
    if (((int)local_2f0 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iStack_1a0 = iVar4;
    local_d8 = (undefined4)local_1a8;
    uStack_d4 = local_1a8._4_4_;
    iStack_d0 = iVar4;
    uStack_cc = uStack_19c;
    (*pcVar2)(pFVar13,&local_d8);
    pFVar12 = pFVar12 + 0x130;
    pFVar13 = pFVar13 + 0x130;
  }
  pTVar8 = UMovieSceneParameterSection::GetVector2DParameterNamesAndCurves
                     ((UMovieSceneParameterSection *)this);
  pFVar12 = (pTVar8->AllocatorInstance).Data;
  uVar9 = (ulonglong)pTVar8->ArrayNum;
  local_2d0 = (TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)
              CONCAT44(local_2d0._4_4_,pTVar8->ArrayNum);
  pFVar13 = pFVar12 + 0x130;
  pFVar14 = pFVar12 + uVar9 * 600;
  while( true ) {
    if (pTVar8->ArrayNum != (int)uVar9) {
      local_2d6 = 0;
      `TCheckedPointerIterator<FVector2DParameterNameAndCurves,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_2d6);
    }
    if (pFVar12 == pFVar14) break;
    if (local_2e0[0] < 0) {
      iVar4 = -local_2e0[0];
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar4,&local_2e8,local_2e0,local_2e0 + 1);
      DefaultConstructItems<FFrameNumber,int>(local_2e8.Data + (longlong)iVar5 * 4,iVar4);
    }
    else if (0 < local_2e0[0]) {
      local_2e0[0] = 0;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_2e8,0,local_2e0 + 1);
    }
    if ((int)local_2f0 < 0) {
      iVar4 = -(int)local_2f0;
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar4,&local_2f8,(int *)&local_2f0,(int *)((longlong)&local_2f0 + 4));
      DefaultConstructItems<FKeyHandle,int>(local_2f8.Data + (longlong)iVar5 * 4,iVar4);
    }
    else if (0 < (int)local_2f0) {
      local_2f0 = local_2f0 & 0xffffffff00000000;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_2f8,0,(int *)((longlong)&local_2f0 + 4));
    }
    local_278[0] = 2;
    local_274 = 0;
    local_270 = 2;
    local_26c = 0;
    (**(code **)(*(longlong *)(pFVar13 + -0x128) + 8))(pFVar13 + -0x128,local_278,&local_2e8);
    iVar5 = (int)local_2f0;
    pcVar2 = *(code **)(*(longlong *)(pFVar13 + -0x128) + 0x28);
    local_198 = local_2f8.Data;
    if (((int)local_2f0 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iStack_190 = iVar5;
    local_c8 = (undefined4)local_198;
    uStack_c4 = local_198._4_4_;
    iStack_c0 = iVar5;
    uStack_bc = uStack_18c;
    (*pcVar2)(pFVar13 + -0x128,&local_c8);
    if (local_2e0[0] < 0) {
      iVar4 = -local_2e0[0];
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar4,&local_2e8,local_2e0,local_2e0 + 1);
      DefaultConstructItems<FFrameNumber,int>(local_2e8.Data + (longlong)iVar5 * 4,iVar4);
    }
    else if (0 < local_2e0[0]) {
      local_2e0[0] = 0;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_2e8,0,local_2e0 + 1);
    }
    if ((int)local_2f0 < 0) {
      iVar4 = -(int)local_2f0;
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar4,&local_2f8,(int *)&local_2f0,(int *)((longlong)&local_2f0 + 4));
      DefaultConstructItems<FKeyHandle,int>(local_2f8.Data + (longlong)iVar5 * 4,iVar4);
    }
    else if (0 < (int)local_2f0) {
      local_2f0 = local_2f0 & 0xffffffff00000000;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_2f8,0,(int *)((longlong)&local_2f0 + 4));
    }
    local_268[0] = 2;
    local_264 = 0;
    local_260 = 2;
    local_25c = 0;
    (**(code **)(*(longlong *)pFVar13 + 8))(pFVar13,local_268,&local_2e8);
    iVar5 = (int)local_2f0;
    pcVar2 = *(code **)(*(longlong *)pFVar13 + 0x28);
    local_188 = local_2f8.Data;
    if (((int)local_2f0 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iStack_180 = iVar5;
    local_b8 = (undefined4)local_188;
    uStack_b4 = local_188._4_4_;
    iStack_b0 = iVar5;
    uStack_ac = uStack_17c;
    (*pcVar2)(pFVar13,&local_b8);
    uVar9 = (ulonglong)local_2d0 & 0xffffffff;
    pFVar12 = pFVar12 + 600;
    pFVar13 = pFVar13 + 600;
  }
  pTVar10 = UMovieSceneParameterSection::GetVectorParameterNamesAndCurves
                      ((UMovieSceneParameterSection *)this);
  pFVar12 = (pTVar10->AllocatorInstance).Data;
  uVar9 = (ulonglong)pTVar10->ArrayNum;
  local_2d0 = (TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)
              CONCAT44(local_2d0._4_4_,pTVar10->ArrayNum);
  pFVar13 = pFVar12 + 0x130;
  pFVar14 = pFVar12 + uVar9 * 0x380;
  while( true ) {
    if (pTVar10->ArrayNum != (int)uVar9) {
      local_2d5 = 0;
      `TCheckedPointerIterator<FVectorParameterNameAndCurves,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_2d5);
    }
    if (pFVar12 == pFVar14) break;
    if (local_2e0[0] < 0) {
      iVar4 = -local_2e0[0];
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar4,&local_2e8,local_2e0,local_2e0 + 1);
      DefaultConstructItems<FFrameNumber,int>(local_2e8.Data + (longlong)iVar5 * 4,iVar4);
    }
    else if (0 < local_2e0[0]) {
      local_2e0[0] = 0;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_2e8,0,local_2e0 + 1);
    }
    if ((int)local_2f0 < 0) {
      iVar4 = -(int)local_2f0;
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar4,&local_2f8,(int *)&local_2f0,(int *)((longlong)&local_2f0 + 4));
      DefaultConstructItems<FKeyHandle,int>(local_2f8.Data + (longlong)iVar5 * 4,iVar4);
    }
    else if (0 < (int)local_2f0) {
      local_2f0 = local_2f0 & 0xffffffff00000000;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_2f8,0,(int *)((longlong)&local_2f0 + 4));
    }
    local_258[0] = 2;
    local_254 = 0;
    local_250 = 2;
    local_24c = 0;
    (**(code **)(*(longlong *)(pFVar13 + -0x128) + 8))(pFVar13 + -0x128,local_258,&local_2e8);
    iVar5 = (int)local_2f0;
    pcVar2 = *(code **)(*(longlong *)(pFVar13 + -0x128) + 0x28);
    local_178 = local_2f8.Data;
    if (((int)local_2f0 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iStack_170 = iVar5;
    local_a8 = (undefined4)local_178;
    uStack_a4 = local_178._4_4_;
    iStack_a0 = iVar5;
    uStack_9c = uStack_16c;
    (*pcVar2)(pFVar13 + -0x128,&local_a8);
    if (local_2e0[0] < 0) {
      iVar4 = -local_2e0[0];
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar4,&local_2e8,local_2e0,local_2e0 + 1);
      DefaultConstructItems<FFrameNumber,int>(local_2e8.Data + (longlong)iVar5 * 4,iVar4);
    }
    else if (0 < local_2e0[0]) {
      local_2e0[0] = 0;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_2e8,0,local_2e0 + 1);
    }
    if ((int)local_2f0 < 0) {
      iVar4 = -(int)local_2f0;
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar4,&local_2f8,(int *)&local_2f0,(int *)((longlong)&local_2f0 + 4));
      DefaultConstructItems<FKeyHandle,int>(local_2f8.Data + (longlong)iVar5 * 4,iVar4);
    }
    else if (0 < (int)local_2f0) {
      local_2f0 = local_2f0 & 0xffffffff00000000;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_2f8,0,(int *)((longlong)&local_2f0 + 4));
    }
    local_248[0] = 2;
    local_244 = 0;
    local_240 = 2;
    local_23c = 0;
    (**(code **)(*(longlong *)pFVar13 + 8))(pFVar13,local_248,&local_2e8);
    iVar5 = (int)local_2f0;
    pcVar2 = *(code **)(*(longlong *)pFVar13 + 0x28);
    local_168 = local_2f8.Data;
    if (((int)local_2f0 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iStack_160 = iVar5;
    local_98 = (undefined4)local_168;
    uStack_94 = local_168._4_4_;
    iStack_90 = iVar5;
    uStack_8c = uStack_15c;
    (*pcVar2)(pFVar13,&local_98);
    if (local_2e0[0] < 0) {
      iVar4 = -local_2e0[0];
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar4,&local_2e8,local_2e0,local_2e0 + 1);
      DefaultConstructItems<FFrameNumber,int>(local_2e8.Data + (longlong)iVar5 * 4,iVar4);
    }
    else if (0 < local_2e0[0]) {
      local_2e0[0] = 0;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_2e8,0,local_2e0 + 1);
    }
    if ((int)local_2f0 < 0) {
      iVar4 = -(int)local_2f0;
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar4,&local_2f8,(int *)&local_2f0,(int *)((longlong)&local_2f0 + 4));
      DefaultConstructItems<FKeyHandle,int>(local_2f8.Data + (longlong)iVar5 * 4,iVar4);
    }
    else if (0 < (int)local_2f0) {
      local_2f0 = local_2f0 & 0xffffffff00000000;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_2f8,0,(int *)((longlong)&local_2f0 + 4));
    }
    local_238[0] = 2;
    local_234 = 0;
    local_230 = 2;
    local_22c = 0;
    (**(code **)(*(longlong *)(pFVar13 + 0x128) + 8))(pFVar13 + 0x128,local_238,&local_2e8);
    iVar5 = (int)local_2f0;
    pcVar2 = *(code **)(*(longlong *)(pFVar13 + 0x128) + 0x28);
    local_158 = local_2f8.Data;
    if (((int)local_2f0 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iStack_150 = iVar5;
    local_88 = (undefined4)local_158;
    uStack_84 = local_158._4_4_;
    iStack_80 = iVar5;
    uStack_7c = uStack_14c;
    (*pcVar2)(pFVar13 + 0x128,&local_88);
    uVar9 = (ulonglong)local_2d0 & 0xffffffff;
    pFVar12 = pFVar12 + 0x380;
    pFVar13 = pFVar13 + 0x380;
  }
  local_2d0 = UMovieSceneParameterSection::GetTransformParameterNamesAndCurves
                        ((UMovieSceneParameterSection *)this);
  uVar1 = local_2d0->ArrayNum;
  uVar9 = (ulonglong)(int)uVar1;
  pFVar12 = (local_2d0->AllocatorInstance).Data;
  pFVar13 = pFVar12 + 0x380;
  local_1f8 = pFVar12 + uVar9 * 0xa70;
  do {
    pFVar14 = local_1f8;
    if (local_2d0->ArrayNum != (int)uVar9) {
      local_2d4[0] = 0;
      `TCheckedPointerIterator<FTransformParameterNameAndCurves,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_2d4);
    }
    if (pFVar12 == pFVar14) {
      if (local_2f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data);
      }
      if (local_2e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data);
      }
      return;
    }
    lVar15 = 3;
    pFVar14 = pFVar13;
    do {
      if (local_2e0[0] < 0) {
        iVar4 = -local_2e0[0];
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar4,&local_2e8,local_2e0,local_2e0 + 1);
        DefaultConstructItems<FFrameNumber,int>(local_2e8.Data + (longlong)iVar5 * 4,iVar4);
      }
      else if (0 < local_2e0[0]) {
        local_2e0[0] = 0;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_2e8,0,local_2e0 + 1);
      }
      if ((int)local_2f0 < 0) {
        iVar4 = -(int)local_2f0;
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar4,&local_2f8,(int *)&local_2f0,(int *)((longlong)&local_2f0 + 4))
        ;
        DefaultConstructItems<FKeyHandle,int>(local_2f8.Data + (longlong)iVar5 * 4,iVar4);
      }
      else if (0 < (int)local_2f0) {
        local_2f0 = local_2f0 & 0xffffffff00000000;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_2f8,0,(int *)((longlong)&local_2f0 + 4));
      }
      local_228[0] = 2;
      local_224 = 0;
      local_220 = 2;
      local_21c = 0;
      (**(code **)(*(longlong *)(pFVar14 + -0x378) + 8))(pFVar14 + -0x378,local_228,&local_2e8);
      iVar5 = (int)local_2f0;
      pcVar2 = *(code **)(*(longlong *)(pFVar14 + -0x378) + 0x28);
      local_148 = local_2f8.Data;
      if (((int)local_2f0 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iStack_140 = iVar5;
      local_78 = (undefined4)local_148;
      uStack_74 = local_148._4_4_;
      iStack_70 = iVar5;
      uStack_6c = uStack_13c;
      (*pcVar2)(pFVar14 + -0x378,&local_78);
      if (local_2e0[0] < 0) {
        iVar4 = -local_2e0[0];
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar4,&local_2e8,local_2e0,local_2e0 + 1);
        DefaultConstructItems<FFrameNumber,int>(local_2e8.Data + (longlong)iVar5 * 4,iVar4);
      }
      else if (0 < local_2e0[0]) {
        local_2e0[0] = 0;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_2e8,0,local_2e0 + 1);
      }
      if ((int)local_2f0 < 0) {
        iVar4 = -(int)local_2f0;
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar4,&local_2f8,(int *)&local_2f0,(int *)((longlong)&local_2f0 + 4))
        ;
        DefaultConstructItems<FKeyHandle,int>(local_2f8.Data + (longlong)iVar5 * 4,iVar4);
      }
      else if (0 < (int)local_2f0) {
        local_2f0 = local_2f0 & 0xffffffff00000000;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_2f8,0,(int *)((longlong)&local_2f0 + 4));
      }
      local_218[0] = 2;
      local_214 = 0;
      local_210 = 2;
      local_20c = 0;
      (**(code **)(*(longlong *)pFVar14 + 8))(pFVar14,local_218,&local_2e8);
      iVar5 = (int)local_2f0;
      pcVar2 = *(code **)(*(longlong *)pFVar14 + 0x28);
      local_138 = local_2f8.Data;
      if (((int)local_2f0 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iStack_130 = iVar5;
      local_68 = (undefined4)local_138;
      uStack_64 = local_138._4_4_;
      iStack_60 = iVar5;
      uStack_5c = uStack_12c;
      (*pcVar2)(pFVar14,&local_68);
      if (local_2e0[0] < 0) {
        iVar4 = -local_2e0[0];
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar4,&local_2e8,local_2e0,local_2e0 + 1);
        DefaultConstructItems<FFrameNumber,int>(local_2e8.Data + (longlong)iVar5 * 4,iVar4);
      }
      else if (0 < local_2e0[0]) {
        local_2e0[0] = 0;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_2e8,0,local_2e0 + 1);
      }
      if ((int)local_2f0 < 0) {
        iVar4 = -(int)local_2f0;
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar4,&local_2f8,(int *)&local_2f0,(int *)((longlong)&local_2f0 + 4))
        ;
        DefaultConstructItems<FKeyHandle,int>(local_2f8.Data + (longlong)iVar5 * 4,iVar4);
      }
      else if (0 < (int)local_2f0) {
        local_2f0 = local_2f0 & 0xffffffff00000000;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_2f8,0,(int *)((longlong)&local_2f0 + 4));
      }
      local_208[0] = 2;
      local_204 = 0;
      local_200 = 2;
      local_1fc = 0;
      (**(code **)(*(longlong *)(pFVar14 + 0x378) + 8))(pFVar14 + 0x378,local_208,&local_2e8);
      iVar5 = (int)local_2f0;
      pcVar2 = *(code **)(*(longlong *)(pFVar14 + 0x378) + 0x28);
      local_128 = local_2f8.Data;
      if (((int)local_2f0 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iStack_120 = iVar5;
      local_58 = (undefined4)local_128;
      uStack_54 = local_128._4_4_;
      iStack_50 = iVar5;
      uStack_4c = uStack_11c;
      (*pcVar2)(pFVar14 + 0x378,&local_58);
      pFVar14 = pFVar14 + 0x128;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    pFVar12 = pFVar12 + 0xa70;
    pFVar13 = pFVar13 + 0xa70;
    uVar9 = (ulonglong)uVar1;
  } while( true );
}

// RemoveConstraintChannel @ 14a441e60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::RemoveConstraintChannel
          (UMovieSceneControlRigParameterSection *this,UTickableConstraint *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  UObject *pUVar3;
  UTickableConstraint *pUVar4;
  code *pcVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FMovieSceneBoolChannel *this_00;
  longlong lVar11;
  
  if ((char)this->_padding_ != '\x01') {
    lVar7 = (this->Weight)._padding_;
    lVar2 = (this->Weight)._padding_;
    for (lVar11 = lVar2; lVar11 != (longlong)(int)lVar7 * 0x128 + lVar2; lVar11 = lVar11 + 0x128) {
      pUVar3 = *(UObject **)(lVar11 + 0x120);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar3 != (UObject *)0x0) goto LAB_14a441ed4;
      }
      else if (pUVar3 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar3);
LAB_14a441ed4:
        pUVar4 = *(UTickableConstraint **)(lVar11 + 0x120);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar4 != (UTickableConstraint *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        if (pUVar4 == param_1) {
          plVar1 = &(this->Weight)._padding_;
          uVar6 = (uint)((lVar11 - lVar2) / 0x128);
          if ((int)uVar6 < 0) {
            return;
          }
          if ((int)(this->Weight)._padding_ <= (int)uVar6) {
            return;
          }
          uVar9 = 0;
          if ((int)uVar6 < (int)(this->Weight)._padding_) {
            uVar9 = ~uVar6 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          this_00 = (FMovieSceneBoolChannel *)(*plVar1 + (longlong)(int)uVar6 * 0x128);
          FMovieSceneBoolChannel::~FMovieSceneBoolChannel(this_00);
          iVar10 = (int)(this->Weight)._padding_ + ~uVar6;
          if (iVar10 != 0) {
            memmove(this_00,&this_00[1]._padding_,(longlong)iVar10 * 0x128);
          }
          iVar10 = (int)(this->Weight)._padding_ + -1;
          *(int *)&(this->Weight)._padding_ = iVar10;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x128,8,(ForAnyElementType *)plVar1,iVar10,
                     (int *)((longlong)&(this->Weight)._padding_ + 4));
          (**(code **)(*(longlong *)&this[-1].Weight.KeyHandles.field_0x18 + 0x3a8))();
          return;
        }
      }
    }
  }
  return;
}

// RemoveEnumParameter @ 14a4423c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterSection::RemoveEnumParameter
          (UMovieSceneControlRigParameterSection *this,FName param_1)

{
  int *piVar1;
  TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = 0;
  if (0 < (this->EnumParameterNamesAndCurves).ArrayNum) {
    pTVar2 = &this->EnumParameterNamesAndCurves;
    lVar8 = 0;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->EnumParameterNamesAndCurves).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(FName *)((pTVar2->AllocatorInstance).Data + lVar8) == param_1) {
        uVar6 = 0;
        if ((int)uVar9 < (this->EnumParameterNamesAndCurves).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x130;
        FMovieSceneByteChannel::~FMovieSceneByteChannel((FMovieSceneByteChannel *)(_Dst + 8));
        iVar7 = (this->EnumParameterNamesAndCurves).ArrayNum + ~uVar9;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 0x130,(longlong)iVar7 * 0x130);
        }
        piVar1 = &(this->EnumParameterNamesAndCurves).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x130,8,&pTVar2->AllocatorInstance,(this->EnumParameterNamesAndCurves).ArrayNum,
                   &(this->EnumParameterNamesAndCurves).ArrayMax);
        (**(code **)(this->_padding_ + 0x3a8))(this);
        return true;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x130;
    } while ((int)uVar9 < (this->EnumParameterNamesAndCurves).ArrayNum);
  }
  return false;
}

// RemoveIntegerParameter @ 14a442a50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterSection::RemoveIntegerParameter
          (UMovieSceneControlRigParameterSection *this,FName param_1)

{
  int *piVar1;
  TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = 0;
  if (0 < (this->IntegerParameterNamesAndCurves).ArrayNum) {
    pTVar2 = &this->IntegerParameterNamesAndCurves;
    lVar8 = 0;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->IntegerParameterNamesAndCurves).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(FName *)((pTVar2->AllocatorInstance).Data + lVar8) == param_1) {
        uVar6 = 0;
        if ((int)uVar9 < (this->IntegerParameterNamesAndCurves).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x128;
        FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel
                  ((FMovieSceneIntegerChannel *)(_Dst + 8));
        iVar7 = (this->IntegerParameterNamesAndCurves).ArrayNum + ~uVar9;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 0x128,(longlong)iVar7 * 0x128);
        }
        piVar1 = &(this->IntegerParameterNamesAndCurves).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x128,8,&pTVar2->AllocatorInstance,
                   (this->IntegerParameterNamesAndCurves).ArrayNum,
                   &(this->IntegerParameterNamesAndCurves).ArrayMax);
        (**(code **)(this->_padding_ + 0x3a8))(this);
        return true;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x128;
    } while ((int)uVar9 < (this->IntegerParameterNamesAndCurves).ArrayNum);
  }
  return false;
}

// RenameParameterName @ 14a44d5d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterSection::RenameParameterName
          (UMovieSceneControlRigParameterSection *this,FName *param_1,FName *param_2,
          TOptional<ERigControlType> param_3)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  FName *pFVar4;
  undefined6 in_register_0000008a;
  bool bVar5;
  FName *pFVar6;
  undefined1 local_res8 [8];
  
  FVar2 = *param_1;
  bVar5 = false;
  FVar3 = *param_2;
  if (*(char *)(CONCAT62(in_register_0000008a,param_3) + 1) == '\0') {
    iVar1 = (int)this->_padding_;
    pFVar6 = (FName *)this->_padding_;
    pFVar4 = pFVar6 + (longlong)iVar1 * 0x26;
    while( true ) {
      if ((int)this->_padding_ != iVar1) {
        `TCheckedPointerIterator<FScalarParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar6 == pFVar4) goto LAB_14a44d87c;
      if (*pFVar6 == FVar2) break;
      pFVar6 = pFVar6 + 0x26;
    }
    bVar5 = true;
    *pFVar6 = FVar3;
LAB_14a44d87c:
    iVar1 = (int)this->_padding_;
    pFVar6 = (FName *)this->_padding_;
    pFVar4 = pFVar6 + (longlong)iVar1 * 0x25;
    while( true ) {
      if ((int)this->_padding_ != iVar1) {
        `TCheckedPointerIterator<FBoolParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == pFVar4) goto LAB_14a44d8d2;
      if (*pFVar6 == FVar2) break;
      pFVar6 = pFVar6 + 0x25;
    }
    *pFVar6 = FVar3;
    if (bVar5 == false) {
      bVar5 = true;
    }
LAB_14a44d8d2:
    iVar1 = (this->EnumParameterNamesAndCurves).ArrayNum;
    pFVar6 = (FName *)(this->EnumParameterNamesAndCurves).AllocatorInstance.Data;
    pFVar4 = pFVar6 + (longlong)iVar1 * 0x26;
    while( true ) {
      if ((this->EnumParameterNamesAndCurves).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FEnumParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == pFVar4) goto LAB_14a44d928;
      if (*pFVar6 == FVar2) break;
      pFVar6 = pFVar6 + 0x26;
    }
    *pFVar6 = FVar3;
    if (bVar5 == false) {
      bVar5 = true;
    }
LAB_14a44d928:
    iVar1 = (this->IntegerParameterNamesAndCurves).ArrayNum;
    pFVar6 = (FName *)(this->IntegerParameterNamesAndCurves).AllocatorInstance.Data;
    pFVar4 = pFVar6 + (longlong)iVar1 * 0x25;
    while( true ) {
      if ((this->IntegerParameterNamesAndCurves).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FIntegerParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar6 == pFVar4) goto LAB_14a44d978;
      if (*pFVar6 == FVar2) break;
      pFVar6 = pFVar6 + 0x25;
    }
    *pFVar6 = FVar3;
    if (bVar5 == false) {
      bVar5 = true;
    }
LAB_14a44d978:
    iVar1 = (int)this->_padding_;
    pFVar6 = (FName *)this->_padding_;
    pFVar4 = pFVar6 + (longlong)iVar1 * 0x4b;
    while( true ) {
      if ((int)this->_padding_ != iVar1) {
        `TCheckedPointerIterator<FVector2DParameterNameAndCurves,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar4) goto LAB_14a44d9c8;
      if (*pFVar6 == FVar2) break;
      pFVar6 = pFVar6 + 0x4b;
    }
    *pFVar6 = FVar3;
    if (bVar5 == false) {
      bVar5 = true;
    }
LAB_14a44d9c8:
    iVar1 = (int)this->_padding_;
    pFVar6 = (FName *)this->_padding_;
    pFVar4 = pFVar6 + (longlong)iVar1 * 0x70;
    while( true ) {
      if ((int)this->_padding_ != iVar1) {
        `TCheckedPointerIterator<FVectorParameterNameAndCurves,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar6 == pFVar4) goto LAB_14a44da18;
      if (*pFVar6 == FVar2) break;
      pFVar6 = pFVar6 + 0x70;
    }
    *pFVar6 = FVar3;
    if (bVar5 == false) {
      bVar5 = true;
    }
LAB_14a44da18:
    iVar1 = (int)this->_padding_;
    pFVar6 = (FName *)this->_padding_;
    pFVar4 = pFVar6 + (longlong)iVar1 * 0x95;
    while( true ) {
      if ((int)this->_padding_ != iVar1) {
        `TCheckedPointerIterator<FColorParameterNameAndCurves,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar6 == pFVar4) goto LAB_14a44da68;
      if (*pFVar6 == FVar2) break;
      pFVar6 = pFVar6 + 0x95;
    }
    *pFVar6 = FVar3;
    if (bVar5 == false) {
      bVar5 = true;
    }
LAB_14a44da68:
    iVar1 = (int)this->_padding_;
    pFVar6 = (FName *)this->_padding_;
    pFVar4 = pFVar6 + (longlong)iVar1 * 0x14e;
    while( true ) {
      if ((int)this->_padding_ != iVar1) {
        `TCheckedPointerIterator<FTransformParameterNameAndCurves,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar4) goto LAB_14a44daba;
      if (*pFVar6 == FVar2) break;
      pFVar6 = pFVar6 + 0x14e;
    }
    *pFVar6 = FVar3;
    if (bVar5 == false) {
      bVar5 = true;
    }
  }
  else {
    switch(*(undefined1 *)CONCAT62(in_register_0000008a,param_3)) {
    case 0:
      iVar1 = (int)this->_padding_;
      pFVar6 = (FName *)this->_padding_;
      pFVar4 = pFVar6 + (longlong)iVar1 * 0x25;
      while( true ) {
        if ((int)this->_padding_ != iVar1) {
          `TCheckedPointerIterator<FBoolParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (pFVar6 == pFVar4) {
          return false;
        }
        if (*pFVar6 == FVar2) break;
        pFVar6 = pFVar6 + 0x25;
      }
      break;
    case 1:
    case 10:
      iVar1 = (int)this->_padding_;
      pFVar6 = (FName *)this->_padding_;
      pFVar4 = pFVar6 + (longlong)iVar1 * 0x26;
      while( true ) {
        if ((int)this->_padding_ != iVar1) {
          `TCheckedPointerIterator<FScalarParameterNameAndCurve,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar6 == pFVar4) {
          return false;
        }
        if (*pFVar6 == FVar2) break;
        pFVar6 = pFVar6 + 0x26;
      }
      break;
    case 2:
      iVar1 = (this->IntegerParameterNamesAndCurves).ArrayNum;
      pFVar6 = (FName *)(this->IntegerParameterNamesAndCurves).AllocatorInstance.Data;
      pFVar4 = pFVar6 + (longlong)iVar1 * 0x25;
      while( true ) {
        if ((this->IntegerParameterNamesAndCurves).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FIntegerParameterNameAndCurve,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar6 == pFVar4) goto LAB_14a44d6fe;
        if (*pFVar6 == FVar2) break;
        pFVar6 = pFVar6 + 0x25;
      }
      bVar5 = true;
      *pFVar6 = FVar3;
LAB_14a44d6fe:
      iVar1 = (this->EnumParameterNamesAndCurves).ArrayNum;
      pFVar6 = (FName *)(this->EnumParameterNamesAndCurves).AllocatorInstance.Data;
      pFVar4 = pFVar6 + (longlong)iVar1 * 0x26;
      while( true ) {
        if ((this->EnumParameterNamesAndCurves).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FEnumParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (pFVar6 == pFVar4) goto LAB_14a44daba;
        if (*pFVar6 == FVar2) break;
        pFVar6 = pFVar6 + 0x26;
      }
      *pFVar6 = FVar3;
      if (bVar5 == false) {
        bVar5 = true;
      }
      goto LAB_14a44dabf;
    case 3:
      iVar1 = (int)this->_padding_;
      pFVar6 = (FName *)this->_padding_;
      pFVar4 = pFVar6 + (longlong)iVar1 * 0x4b;
      while( true ) {
        if ((int)this->_padding_ != iVar1) {
          `TCheckedPointerIterator<FVector2DParameterNameAndCurves,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar6 == pFVar4) {
          return false;
        }
        if (*pFVar6 == FVar2) break;
        pFVar6 = pFVar6 + 0x4b;
      }
      break;
    case 4:
    case 5:
    case 6:
      iVar1 = (int)this->_padding_;
      pFVar6 = (FName *)this->_padding_;
      pFVar4 = pFVar6 + (longlong)iVar1 * 0x70;
      while( true ) {
        if ((int)this->_padding_ != iVar1) {
          `TCheckedPointerIterator<FVectorParameterNameAndCurves,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar6 == pFVar4) {
          return false;
        }
        if (*pFVar6 == FVar2) break;
        pFVar6 = pFVar6 + 0x70;
      }
      break;
    case 7:
    case 8:
    case 9:
      iVar1 = (int)this->_padding_;
      pFVar6 = (FName *)this->_padding_;
      pFVar4 = pFVar6 + (longlong)iVar1 * 0x14e;
      while( true ) {
        if ((int)this->_padding_ != iVar1) {
          `TCheckedPointerIterator<FTransformParameterNameAndCurves,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar6 == pFVar4) {
          return false;
        }
        if (*pFVar6 == FVar2) break;
        pFVar6 = pFVar6 + 0x14e;
      }
      break;
    default:
      goto switchD_14a44d620_default;
    }
    bVar5 = true;
    *pFVar6 = FVar3;
  }
  goto LAB_14a44dabf;
LAB_14a44daba:
  if (bVar5 == false) {
    return false;
  }
LAB_14a44dabf:
  (**(code **)(this->_padding_ + 0x3a8))(this);
switchD_14a44d620_default:
  return bVar5;
}

// ReplaceConstraint @ 14a44dd30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::ReplaceConstraint
          (UMovieSceneControlRigParameterSection *this,FName param_1,UTickableConstraint *param_2)

{
  longlong lVar1;
  UObject *pUVar2;
  FName FVar3;
  code *pcVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  
  lVar1 = (this->Weight)._padding_;
  lVar6 = (this->Weight)._padding_;
  lVar9 = lVar1;
  do {
    if (lVar9 == (longlong)(int)lVar6 * 0x128 + lVar1) {
      return;
    }
    pUVar2 = *(UObject **)(lVar9 + 0x120);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar2 != (UObject *)0x0) goto LAB_14a44dda4;
    }
    else if (pUVar2 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar2);
LAB_14a44dda4:
      pUVar2 = *(UObject **)(lVar9 + 0x120);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FVar3.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      FVar3.Number = *(uint *)&pUVar2->field_0x1c;
      if (FVar3 == param_1) {
        uVar5 = (uint)((lVar9 - lVar1) / 0x128);
        if (uVar5 == 0xffffffff) {
          return;
        }
        uVar8 = 0;
        if ((int)uVar5 < (int)(this->Weight)._padding_) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar1 = (this->Weight)._padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_2 != (UTickableConstraint *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        *(UTickableConstraint **)((longlong)(int)uVar5 * 0x128 + lVar1 + 0x120) = param_2;
        (**(code **)(*(longlong *)&this[-1].Weight.KeyHandles.field_0x18 + 0x3a8))();
        return;
      }
    }
    lVar9 = lVar9 + 0x128;
  } while( true );
}

// Serialize @ 14a457880

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::Serialize
          (UMovieSceneControlRigParameterSection *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  UMovieSceneParameterSection::Serialize((UMovieSceneParameterSection *)this,param_1);
  return;
}

// Serialize @ 14a4578c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::Serialize
          (UMovieSceneControlRigParameterSection *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FUE5MainStreamObjectVersion::GUID);
  UMovieSceneParameterSection::Serialize((UMovieSceneParameterSection *)this,pFVar1);
  return;
}

// SetBlendType @ 14a457db0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::SetBlendType
          (UMovieSceneControlRigParameterSection *this,EMovieSceneBlendType param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  ERigControlType EVar4;
  UControlRig *pUVar5;
  FRigControlElement *pFVar6;
  FName FVar7;
  URigHierarchy *pUVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [12];
  undefined8 uVar15;
  FMovieSceneBlendTypeField FVar16;
  bool bVar17;
  uint uVar18;
  undefined7 extraout_var;
  FMovieSceneChannelProxy *this_00;
  UScriptStruct *pUVar19;
  FMovieSceneChannelEntry *pFVar20;
  FChannelMapInfo *pFVar21;
  FRigControlValue *pFVar22;
  TVector<double> *pTVar23;
  ulonglong uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  undefined8 *puVar30;
  FScriptContainerElement *pFVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 in_XMM1 [16];
  undefined1 auVar34 [16];
  undefined4 uVar35;
  undefined4 uVar36;
  double dVar37;
  float fVar38;
  undefined1 local_res18 [8];
  ERigControlValueType local_res20 [8];
  ERigControlValueType local_630 [8];
  float local_628;
  uint local_624;
  undefined1 local_620 [12];
  undefined4 uStack_614;
  double local_610;
  undefined8 local_608;
  float local_600;
  undefined8 *local_5f8 [2];
  undefined8 local_5e8;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  TRotator<double> local_5c0;
  double local_5a8;
  double local_5a0;
  double local_598;
  undefined1 local_588 [16];
  double local_578;
  TRotator<double> local_570;
  TRotator<double> local_558;
  double local_540;
  double dStack_538;
  double local_530;
  ulonglong local_528;
  undefined1 local_518 [16];
  double local_508;
  float local_500;
  float fStack_4fc;
  float fStack_4f8;
  float fStack_4f4;
  float local_4f0;
  float fStack_4ec;
  float fStack_4e8;
  float fStack_4e4;
  float local_4e0;
  undefined1 local_4d8 [16];
  double local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  float local_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  undefined8 local_4a0;
  undefined8 uStack_498;
  float local_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  float local_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  TVector<double> local_470;
  TVector<double> local_458;
  TQuat<double> local_438;
  FRigControlValue local_418;
  FRigControlValue local_394;
  FRigControlValue local_310;
  FRigControlValue local_28c;
  FRigControlValue local_208;
  FRigControlValue local_184;
  FRigControlValue local_100;
  
  FVar16 = UMovieSceneSection::GetSupportedBlendTypes((UMovieSceneSection *)this);
  bVar17 = FMovieSceneBlendTypeField::Contains
                     ((FMovieSceneBlendTypeField *)CONCAT71(extraout_var,FVar16.BlendTypeField),
                      param_1);
  if (bVar17) {
    *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
    *(EMovieSceneBlendType *)((longlong)&this->_padding_ + 1) = param_1;
    if ((this->ControlRig).field0_0x0.DebugPtr != (UControlRig *)0x0) {
      this_00 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this);
      pUVar19 = FMovieSceneFloatChannel::StaticStruct();
      pFVar20 = FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar19->_padding_);
      if (pFVar20 == (FMovieSceneChannelEntry *)0x0) {
        pFVar31 = (FScriptContainerElement *)0x0;
        iVar25 = 0;
      }
      else {
        iVar25 = (pFVar20->Channels).ArrayNum;
        pFVar31 = (pFVar20->Channels).AllocatorInstance.Data;
        if ((iVar25 < 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pUVar5 = (this->ControlRig).field0_0x0.DebugPtr;
      (**(code **)(pUVar5->_padding_ + 0x3c0))(pUVar5,local_5f8);
      local_624 = (uint)local_5f8[1];
      uVar24 = (ulonglong)(int)local_624;
      puVar1 = local_5f8[0] + uVar24;
      puVar30 = local_5f8[0];
      while( true ) {
        if ((int)local_5f8[1] != (int)uVar24) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (puVar30 == puVar1) break;
        pFVar6 = (FRigControlElement *)*puVar30;
        bVar17 = URigHierarchy::IsAnimatable
                           ((((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).field0_0x0.
                            DebugPtr,pFVar6);
        if ((bVar17) &&
           (FVar7.ComparisonIndex.Value = *(uint *)&pFVar6->field_0x14,
           FVar7.Number = *(uint *)&pFVar6->field_0x18,
           pFVar21 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                     ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                             *)&this->ControlChannelMap,FVar7), pFVar21 != (FChannelMapInfo *)0x0))
        {
          EVar4 = (pFVar6->Settings).ControlType;
          uVar28 = pFVar21->ChannelIndex;
          lVar29 = (longlong)(int)uVar28;
          switch(EVar4) {
          case Float:
          case ScaleFloat:
            if (param_1 == Override) {
              local_res20[0] = Current;
              pFVar22 = UControlRig::GetControlValue
                                  ((this->ControlRig).field0_0x0.DebugPtr,&local_418,pFVar6,
                                   local_res20);
              fVar38 = (pFVar22->FloatStorage).Float00;
              uVar18 = 0;
              if ((int)uVar28 < iVar25) {
                uVar18 = ~uVar28 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar29 = *(longlong *)(pFVar31 + lVar29 * 8);
              *(float *)(lVar29 + 0x90) = fVar38;
LAB_14a458ec1:
              *(undefined1 *)(lVar29 + 0x94) = 1;
            }
            break;
          case Vector2D:
            if (param_1 == Override) {
              local_630[0] = Current;
              pFVar22 = UControlRig::GetControlValue
                                  ((this->ControlRig).field0_0x0.DebugPtr,&local_394,pFVar6,
                                   local_630);
              local_608._0_4_ = (pFVar22->FloatStorage).Float00;
              local_608._4_4_ = (pFVar22->FloatStorage).Float01;
              local_600 = (pFVar22->FloatStorage).Float02;
              uVar18 = 0;
              if ((int)uVar28 < iVar25) {
                uVar18 = ~uVar28 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar29 = *(longlong *)(pFVar31 + lVar29 * 8);
              uVar28 = uVar28 + 1;
              *(undefined4 *)(lVar29 + 0x90) = (undefined4)local_608;
              *(undefined1 *)(lVar29 + 0x94) = 1;
              uVar18 = 0;
              if ((int)uVar28 < iVar25) {
                uVar18 = ~uVar28 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              fVar38 = local_608._4_4_;
LAB_14a458eb2:
              lVar29 = *(longlong *)(pFVar31 + (longlong)(int)uVar28 * 8);
              *(float *)(lVar29 + 0x90) = fVar38;
              goto LAB_14a458ec1;
            }
            break;
          case Position:
          case Rotator:
            if (param_1 == Override) {
              pUVar5 = (this->ControlRig).field0_0x0.DebugPtr;
              if (EVar4 == Rotator) {
                pUVar8 = (pUVar5->DynamicHierarchy).field0_0x0.DebugPtr;
                if ((pUVar8->bUsePreferredEulerAngles == false) ||
                   ((pFVar6->Settings).bUsePreferredRotationOrder == false)) {
                  URigHierarchy::GetControlPreferredRotator(pUVar8,&local_570,pFVar6,false);
                  uVar32 = SUB84(local_570.Roll,0);
                  uVar33 = (undefined4)((ulonglong)local_570.Roll >> 0x20);
                  in_XMM1._8_8_ = 0;
                  in_XMM1._0_8_ = local_570.Pitch;
                  uVar35 = SUB84(local_570.Yaw,0);
                  uVar36 = (undefined4)((ulonglong)local_570.Yaw >> 0x20);
                }
                else {
                  pTVar23 = FRigPreferredEulerAngles::GetAngles
                                      (&pFVar6->PreferredEulerAngles,&local_470,false,
                                       (pFVar6->Settings).PreferredRotationOrder);
                  auVar3 = *(undefined1 (*) [16])&pTVar23->field0_0x0;
                  uVar32 = auVar3._0_4_;
                  uVar33 = auVar3._4_4_;
                  local_530 = *(double *)((longlong)&pTVar23->field0_0x0 + 0x10);
                  uVar35 = SUB84(local_530,0);
                  uVar36 = (undefined4)((ulonglong)local_530 >> 0x20);
                  auVar14._4_8_ = in_XMM1._8_8_;
                  auVar14._0_4_ = uVar33;
                  auVar34._0_8_ = auVar14._0_8_ << 0x20;
                  auVar34._8_4_ = auVar3._8_4_;
                  auVar34._12_4_ = auVar3._12_4_;
                  in_XMM1._8_8_ = auVar3._8_8_;
                  in_XMM1._0_8_ = (double)auVar34._8_8_;
                }
                uVar24._0_4_ = (float)(double)CONCAT44(uVar33,uVar32);
                uVar24._4_4_ = (float)in_XMM1._0_8_;
                fVar38 = (float)(double)CONCAT44(uVar36,uVar35);
              }
              else {
                local_630[1] = 1;
                pFVar22 = UControlRig::GetControlValue(pUVar5,&local_310,pFVar6,local_630 + 1);
                uVar24._0_4_ = (pFVar22->FloatStorage).Float00;
                uVar24._4_4_ = (pFVar22->FloatStorage).Float01;
                in_XMM1._8_8_ = 0;
                in_XMM1._0_8_ = (double)uVar24;
                fVar38 = (pFVar22->FloatStorage).Float02;
                local_528 = uVar24;
              }
              uVar18 = 0;
              if ((int)uVar28 < iVar25) {
                uVar18 = ~uVar28 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar29 = *(longlong *)(pFVar31 + lVar29 * 8);
              uVar26 = uVar28 + 1;
              *(float *)(lVar29 + 0x90) = (float)uVar24;
              *(undefined1 *)(lVar29 + 0x94) = 1;
              uVar18 = 0;
              if ((int)uVar26 < iVar25) {
                uVar18 = ~uVar26 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar28 = uVar28 + 2;
              lVar29 = *(longlong *)(pFVar31 + (longlong)(int)uVar26 * 8);
              *(float *)(lVar29 + 0x90) = uVar24._4_4_;
              *(undefined1 *)(lVar29 + 0x94) = 1;
              uVar18 = 0;
              if ((int)uVar28 < iVar25) {
                uVar18 = ~uVar28 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar29 = *(longlong *)(pFVar31 + (longlong)(int)uVar28 * 8);
              *(float *)(lVar29 + 0x90) = fVar38;
              goto LAB_14a458ec1;
            }
            break;
          case Scale:
            if (param_1 == Absolute) {
              uVar18 = 0;
              if ((int)uVar28 < iVar25) {
                uVar18 = ~uVar28 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar29 = *(longlong *)(pFVar31 + lVar29 * 8);
              uVar27 = uVar28 + 1;
              *(undefined1 *)(lVar29 + 0x94) = 1;
              *(undefined4 *)(lVar29 + 0x90) = 0x3f800000;
              uVar18 = 0;
              if ((int)uVar27 < iVar25) {
                uVar18 = ~uVar27 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar28 = uVar28 + 2;
LAB_14a45837a:
              lVar29 = *(longlong *)(pFVar31 + (longlong)(int)uVar27 * 8);
              *(undefined4 *)(lVar29 + 0x90) = 0x3f800000;
              *(undefined1 *)(lVar29 + 0x94) = 1;
              uVar18 = 0;
              if ((int)uVar28 < iVar25) {
                uVar18 = ~uVar28 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar29 = *(longlong *)(pFVar31 + (longlong)(int)uVar28 * 8);
              *(undefined1 *)(lVar29 + 0x94) = 1;
              *(undefined4 *)(lVar29 + 0x90) = 0x3f800000;
            }
            else if (param_1 == Additive) {
              uVar18 = 0;
              if ((int)uVar28 < iVar25) {
                uVar18 = ~uVar28 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar29 = *(longlong *)(pFVar31 + lVar29 * 8);
              uVar27 = uVar28 + 1;
              *(undefined1 *)(lVar29 + 0x94) = 1;
              *(undefined4 *)(lVar29 + 0x90) = 0;
              uVar18 = 0;
              if ((int)uVar27 < iVar25) {
                uVar18 = ~uVar27 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar28 = uVar28 + 2;
LAB_14a4584a9:
              lVar29 = *(longlong *)(pFVar31 + (longlong)(int)uVar27 * 8);
              *(undefined4 *)(lVar29 + 0x90) = 0;
              *(undefined1 *)(lVar29 + 0x94) = 1;
              uVar18 = 0;
              if ((int)uVar28 < iVar25) {
                uVar18 = ~uVar28 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar29 = *(longlong *)(pFVar31 + (longlong)(int)uVar28 * 8);
              *(undefined1 *)(lVar29 + 0x94) = 1;
              *(undefined4 *)(lVar29 + 0x90) = 0;
            }
            else if (param_1 == Override) {
              local_630[2] = 1;
              pFVar22 = UControlRig::GetControlValue
                                  ((this->ControlRig).field0_0x0.DebugPtr,&local_28c,pFVar6,
                                   local_630 + 2);
              local_5e8._0_4_ = (pFVar22->FloatStorage).Float00;
              local_5e8._4_4_ = (pFVar22->FloatStorage).Float01;
              local_628 = (pFVar22->FloatStorage).Float02;
              uVar18 = 0;
              if ((int)uVar28 < iVar25) {
                uVar18 = ~uVar28 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar29 = *(longlong *)(pFVar31 + lVar29 * 8);
              uVar26 = uVar28 + 1;
              *(undefined4 *)(lVar29 + 0x90) = (undefined4)local_5e8;
              *(undefined1 *)(lVar29 + 0x94) = 1;
              uVar18 = 0;
              if ((int)uVar26 < iVar25) {
                uVar18 = ~uVar26 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar28 = uVar28 + 2;
              lVar29 = *(longlong *)(pFVar31 + (longlong)(int)uVar26 * 8);
              *(undefined4 *)(lVar29 + 0x90) = local_5e8._4_4_;
              *(undefined1 *)(lVar29 + 0x94) = 1;
              uVar18 = 0;
              if ((int)uVar28 < iVar25) {
                uVar18 = ~uVar28 >> 0x1f;
              }
              fVar38 = local_628;
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , fVar38 = local_628, bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              goto LAB_14a458eb2;
            }
            break;
          case Transform:
          case TransformNoScale:
          case EulerTransform:
            pUVar5 = (this->ControlRig).field0_0x0.DebugPtr;
            if (EVar4 == TransformNoScale) {
              local_630[3] = 1;
              pFVar22 = UControlRig::GetControlValue(pUVar5,&local_208,pFVar6,local_630 + 3);
              local_4b0 = (pFVar22->FloatStorage).Float10;
              fStack_4ac = (pFVar22->FloatStorage).Float11;
              fStack_4a8 = (pFVar22->FloatStorage).Float12;
              fStack_4a4 = (pFVar22->FloatStorage).Float13;
              local_4c0._0_4_ = (pFVar22->FloatStorage).Float00;
              local_4c0._4_4_ = (pFVar22->FloatStorage).Float01;
              uStack_4b8._0_4_ = (pFVar22->FloatStorage).Float02;
              uStack_4b8._4_4_ = (pFVar22->FloatStorage).Float03;
              in_XMM1._4_4_ = fStack_4ac;
              in_XMM1._0_4_ = fStack_4ac;
              in_XMM1._8_4_ = fStack_4ac;
              in_XMM1._12_4_ = fStack_4ac;
              dVar13 = (double)local_4b0;
              dVar12 = (double)fStack_4a8;
              uVar11 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
              dVar37 = (double)fStack_4ac;
              uVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
              uVar15 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
            }
            else if (EVar4 == EulerTransform) {
              local_630[4] = 1;
              pFVar22 = UControlRig::GetControlValue(pUVar5,&local_184,pFVar6,local_630 + 4);
              local_500 = (pFVar22->FloatStorage).Float00;
              fStack_4fc = (pFVar22->FloatStorage).Float01;
              fStack_4f8 = (pFVar22->FloatStorage).Float02;
              fStack_4f4 = (pFVar22->FloatStorage).Float03;
              local_4e0 = (pFVar22->FloatStorage).Float20;
              local_4f0 = (pFVar22->FloatStorage).Float10;
              fStack_4ec = (pFVar22->FloatStorage).Float11;
              fStack_4e8 = (pFVar22->FloatStorage).Float12;
              fStack_4e4 = (pFVar22->FloatStorage).Float13;
              local_5c0.Pitch = (double)local_500;
              local_5c0.Yaw = (double)fStack_4fc;
              local_5c0.Roll = (double)fStack_4f8;
              local_5d8 = (double)fStack_4f4;
              dStack_5d0 = (double)local_4f0;
              local_5c8 = (double)fStack_4ec;
              local_5a8 = (double)fStack_4e8;
              in_XMM1 = ZEXT416((uint)local_4e0);
              local_598 = (double)local_4e0;
              local_5a0 = (double)fStack_4e4;
              UE::Math::TRotator<double>::Quaternion(&local_5c0,&local_438);
              dVar13 = local_5d8;
              dVar12 = local_5c8;
              uVar11 = local_5a8;
              dVar37 = dStack_5d0;
              uVar10 = local_598;
              uVar15 = local_5a0;
            }
            else {
              local_630[5] = 1;
              pFVar22 = UControlRig::GetControlValue(pUVar5,&local_100,pFVar6,local_630 + 5);
              local_490 = (pFVar22->FloatStorage).Float10;
              fStack_48c = (pFVar22->FloatStorage).Float11;
              fStack_488 = (pFVar22->FloatStorage).Float12;
              fStack_484 = (pFVar22->FloatStorage).Float13;
              local_480 = (pFVar22->FloatStorage).Float20;
              fStack_47c = (pFVar22->FloatStorage).Float21;
              fStack_478 = (pFVar22->FloatStorage).Float22;
              fStack_474 = (pFVar22->FloatStorage).Float23;
              local_4a0._0_4_ = (pFVar22->FloatStorage).Float00;
              local_4a0._4_4_ = (pFVar22->FloatStorage).Float01;
              uStack_498._0_4_ = (pFVar22->FloatStorage).Float02;
              uStack_498._4_4_ = (pFVar22->FloatStorage).Float03;
              uVar11 = (undefined8)local_480;
              dVar37 = (double)fStack_48c;
              dVar13 = (double)local_490;
              dVar12 = (double)fStack_488;
              in_XMM1._0_8_ = (double)fStack_47c;
              in_XMM1._8_8_ = 0;
              uVar10 = (undefined8)fStack_478;
              local_4d8._8_4_ = SUB84(in_XMM1._0_8_,0);
              local_4d8._0_8_ = uVar11;
              local_4d8._12_4_ = (int)((ulonglong)in_XMM1._0_8_ >> 0x20);
              local_518._8_4_ = SUB84(dVar37,0);
              local_518._0_8_ = dVar13;
              local_518._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
              uVar15 = in_XMM1._0_8_;
              local_508 = dVar12;
              local_4c8 = (double)uVar10;
            }
            if (param_1 == Override) {
              local_620._8_4_ = SUB84(dVar37,0);
              local_620._0_8_ = dVar13;
              uStack_614 = (int)((ulonglong)dVar37 >> 0x20);
              uVar18 = 0;
              if ((int)uVar28 < iVar25) {
                uVar18 = ~uVar28 >> 0x1f;
              }
              local_610 = dVar12;
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar29 = *(longlong *)(pFVar31 + lVar29 * 8);
              *(undefined1 *)(lVar29 + 0x94) = 1;
              *(float *)(lVar29 + 0x90) = (float)(double)local_620._0_8_;
              uVar18 = 0;
              if ((int)(uVar28 + 1) < iVar25) {
                uVar18 = ~(uVar28 + 1) >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar29 = *(longlong *)(pFVar31 + (longlong)(int)(uVar28 + 1) * 8);
              *(float *)(lVar29 + 0x90) = (float)stack0xfffffffffffff9e8;
              *(undefined1 *)(lVar29 + 0x94) = 1;
              uVar18 = 0;
              if ((int)(uVar28 + 2) < iVar25) {
                uVar18 = ~(uVar28 + 2) >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar29 = *(longlong *)(pFVar31 + (longlong)(int)(uVar28 + 2) * 8);
              *(float *)(lVar29 + 0x90) = (float)local_610;
              *(undefined1 *)(lVar29 + 0x94) = 1;
              local_540 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              dStack_538 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              pUVar8 = (((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).field0_0x0.
                       DebugPtr;
              local_530 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              if ((pUVar8->bUsePreferredEulerAngles == false) ||
                 ((pFVar6->Settings).bUsePreferredRotationOrder == false)) {
                URigHierarchy::GetControlPreferredRotator(pUVar8,&local_558,pFVar6,false);
                uVar32 = SUB84(local_558.Yaw,0);
                uVar33 = (undefined4)((ulonglong)local_558.Yaw >> 0x20);
                in_XMM1._8_8_ = 0;
                in_XMM1._0_8_ = local_558.Pitch;
                local_530 = local_558.Yaw;
                local_620._0_4_ = SUB84(local_558.Roll,0);
                local_620._4_4_ = (undefined4)((ulonglong)local_558.Roll >> 0x20);
                local_620._8_4_ = SUB84(local_558.Pitch,0);
                uStack_614 = (undefined4)((ulonglong)local_558.Pitch >> 0x20);
              }
              else {
                pTVar23 = FRigPreferredEulerAngles::GetAngles
                                    (&pFVar6->PreferredEulerAngles,&local_458,false,
                                     (pFVar6->Settings).PreferredRotationOrder);
                local_620._0_4_ = *(undefined4 *)&pTVar23->field0_0x0;
                local_620._4_4_ = *(undefined4 *)((longlong)&pTVar23->field0_0x0 + 4);
                local_620._8_4_ = *(undefined4 *)((longlong)&pTVar23->field0_0x0 + 8);
                uStack_614 = *(undefined4 *)((longlong)&pTVar23->field0_0x0 + 0xc);
                uVar2 = *(undefined8 *)((longlong)&pTVar23->field0_0x0 + 0x10);
                uVar32 = (undefined4)uVar2;
                uVar33 = (undefined4)((ulonglong)uVar2 >> 0x20);
              }
              local_610 = (double)CONCAT44(uVar33,uVar32);
              uVar18 = 0;
              if ((int)(uVar28 + 3) < iVar25) {
                uVar18 = ~(uVar28 + 3) >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar29 = *(longlong *)(pFVar31 + (longlong)(int)(uVar28 + 3) * 8);
              *(float *)(lVar29 + 0x90) = (float)(double)local_620._0_8_;
              *(undefined1 *)(lVar29 + 0x94) = 1;
              uVar18 = 0;
              if ((int)(uVar28 + 4) < iVar25) {
                uVar18 = ~(uVar28 + 4) >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar29 = *(longlong *)(pFVar31 + (longlong)(int)(uVar28 + 4) * 8);
              *(float *)(lVar29 + 0x90) = (float)stack0xfffffffffffff9e8;
              *(undefined1 *)(lVar29 + 0x94) = 1;
              uVar18 = 0;
              if ((int)(uVar28 + 5) < iVar25) {
                uVar18 = ~(uVar28 + 5) >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar29 = *(longlong *)(pFVar31 + (longlong)(int)(uVar28 + 5) * 8);
              *(float *)(lVar29 + 0x90) = (float)local_610;
              *(undefined1 *)(lVar29 + 0x94) = 1;
            }
            if ((pFVar6->Settings).ControlType != TransformNoScale) {
              if (param_1 == Absolute) {
                uVar26 = uVar28 + 6;
                uVar18 = 0;
                if ((int)uVar26 < iVar25) {
                  uVar18 = ~uVar26 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar27 = uVar28 + 7;
                lVar29 = *(longlong *)(pFVar31 + (longlong)(int)uVar26 * 8);
                *(undefined1 *)(lVar29 + 0x94) = 1;
                *(undefined4 *)(lVar29 + 0x90) = 0x3f800000;
                uVar18 = 0;
                if ((int)uVar27 < iVar25) {
                  uVar18 = ~uVar27 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar28 = uVar28 + 8;
                goto LAB_14a45837a;
              }
              if (param_1 == Additive) {
                uVar26 = uVar28 + 6;
                uVar18 = 0;
                if ((int)uVar26 < iVar25) {
                  uVar18 = ~uVar26 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar27 = uVar28 + 7;
                lVar29 = *(longlong *)(pFVar31 + (longlong)(int)uVar26 * 8);
                *(undefined1 *)(lVar29 + 0x94) = 1;
                *(undefined4 *)(lVar29 + 0x90) = 0;
                uVar18 = 0;
                if ((int)uVar27 < iVar25) {
                  uVar18 = ~uVar27 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar28 = uVar28 + 8;
                goto LAB_14a4584a9;
              }
              if (param_1 == Override) {
                uVar26 = uVar28 + 6;
                local_588._8_4_ = (int)uVar15;
                local_588._0_8_ = uVar11;
                local_588._12_4_ = (int)((ulonglong)uVar15 >> 0x20);
                uVar18 = 0;
                if ((int)uVar26 < iVar25) {
                  uVar18 = ~uVar26 >> 0x1f;
                }
                local_578 = (double)uVar10;
                if ((uVar18 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar27 = uVar28 + 7;
                lVar29 = *(longlong *)(pFVar31 + (longlong)(int)uVar26 * 8);
                *(float *)(lVar29 + 0x90) = (float)(double)local_588._0_8_;
                *(undefined1 *)(lVar29 + 0x94) = 1;
                uVar18 = 0;
                if ((int)uVar27 < iVar25) {
                  uVar18 = ~uVar27 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar28 = uVar28 + 8;
                lVar29 = *(longlong *)(pFVar31 + (longlong)(int)uVar27 * 8);
                *(float *)(lVar29 + 0x90) = (float)(double)local_588._8_8_;
                *(undefined1 *)(lVar29 + 0x94) = 1;
                uVar18 = 0;
                if ((int)uVar28 < iVar25) {
                  uVar18 = ~uVar28 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                fVar38 = (float)local_578;
                goto LAB_14a458eb2;
              }
            }
          }
        }
        puVar30 = puVar30 + 1;
        uVar24 = (ulonglong)local_624;
      }
      if (local_5f8[0] != (undefined8 *)0x0) {
        FMemory::Free(local_5f8[0]);
      }
    }
  }
  return;
}

// SetControlNameMask @ 14a4592a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::SetControlNameMask
          (UMovieSceneControlRigParameterSection *this,FName *param_1,bool param_2)

{
  FName local_res18 [2];
  
  if (!param_2) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&this->ControlNameMask,local_res18,(bool *)param_1);
                    /* WARNING: Could not recover jumptable at 0x00014a4592d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x3a8))(this);
    return;
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove(&this->ControlNameMask,*param_1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00014a4592ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3a8))(this);
  return;
}

// SetControlRig @ 14a459300

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::SetControlRig
          (UMovieSceneControlRigParameterSection *this,UControlRig *param_1)

{
  UControlRig *pUVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulong64 *puVar6;
  FDelegateHandle FVar7;
  uint uVar8;
  UClass *pUVar9;
  ForAnyElementType *this_00;
  longlong lVar10;
  FWeakObjectPtr local_res8;
  UMovieSceneControlRigParameterSection *local_res10;
  FWeakObjectPtr local_res18;
  <lambda_1> local_58;
  FDestructionSentinel local_50;
  
  pUVar1 = (this->ControlRig).field0_0x0.DebugPtr;
  if (pUVar1 != (UControlRig *)0x0) {
    uVar2 = (this->OnOverrideAssetsChangedHandle).ID;
    if (uVar2 != 0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pUVar1->OverrideAssetsChangedDelegate,(FWriteAccessScope *)&local_50);
      uVar8 = 0;
      if (0 < *(int *)&(pUVar1->OverrideAssetsChangedDelegate).field_0x10) {
        lVar10 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar8 < *(int *)&(pUVar1->OverrideAssetsChangedDelegate).field_0x10) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_00 = (ForAnyElementType *)
                    (*(longlong *)&(pUVar1->OverrideAssetsChangedDelegate).field_0x8 + lVar10);
          if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
             && (puVar6 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
                *puVar6 == uVar2)) {
            if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0)
               ) {
              (*(code *)**(undefined8 **)this_00->Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10)
              ;
              *(undefined4 *)&this_00[1].Data = 0;
            }
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar1->OverrideAssetsChangedDelegate,false);
            break;
          }
          uVar8 = uVar8 + 1;
          lVar10 = lVar10 + 0x10;
        } while ((int)uVar8 < *(int *)&(pUVar1->OverrideAssetsChangedDelegate).field_0x10);
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (UControlRig *)0x0)) {
    (this->ControlRig).field0_0x0.DebugPtr = param_1;
    if (param_1 == (UControlRig *)0x0) {
      pUVar9 = (UClass *)0x0;
    }
    else {
      pUVar9 = (UClass *)param_1->_padding_;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->ControlRig).field0_0x0.DebugPtr = param_1;
    pUVar9 = (UClass *)param_1->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->ControlRigClass).Class.field0_0x0.DebugPtr = pUVar9;
  if ((this->ControlRig).field0_0x0.DebugPtr != (UControlRig *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    local_res18 = local_res8;
    FVar7 = TMulticastDelegateRegistration<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>::
            AddLambda<_UMovieSceneControlRigParameterSection::SetControlRig_::__l8::<lambda_1>_>
                      ((TMulticastDelegateRegistration<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
                        *)&((this->ControlRig).field0_0x0.DebugPtr)->OverrideAssetsChangedDelegate,
                       &local_58);
                    /* WARNING: Load size is inaccurate */
    (this->OnOverrideAssetsChangedHandle).ID = *FVar7.ID;
  }
  return;
}

// StaticRegisterNativesUMovieSceneControlRigParameterSection @ 14a45c3f0

void __cdecl
UMovieSceneControlRigParameterSection::StaticRegisterNativesUMovieSceneControlRigParameterSection
          (void)

{
  return;
}

// StoreLastControlsUsedToReconstruct @ 14a45c670

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::StoreLastControlsUsedToReconstruct
          (UMovieSceneControlRigParameterSection *this,
          TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<TTuple<FName,ERigControlType>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  FScriptContainerElement FVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar11 = param_1->ArrayNum;
  pTVar2 = &this->LastControlsUsedToReconstruct;
  piVar1 = &(this->LastControlsUsedToReconstruct).ArrayNum;
  iVar8 = *piVar1;
  if (iVar8 < (int)uVar11) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,uVar11 - iVar8,&pTVar2->AllocatorInstance,piVar1,
                       &(this->LastControlsUsedToReconstruct).ArrayMax);
    DefaultConstructItems<TTuple<FName,enum_ERigControlType>,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0xc,uVar11 - iVar8);
  }
  else {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if ((int)uVar11 < iVar8) {
      uVar10 = iVar8 - uVar11;
      if (((int)(uVar10 | uVar11) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar10 != 0) {
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0xc;
        iVar8 = (*piVar1 - uVar11) - uVar10;
        if (iVar8 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar10 * 0xc,(longlong)iVar8 * 0xc);
        }
        *piVar1 = *piVar1 - uVar10;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,&pTVar2->AllocatorInstance,*piVar1,
                   &(this->LastControlsUsedToReconstruct).ArrayMax);
      }
    }
  }
  uVar11 = 0;
  if (0 < (this->LastControlsUsedToReconstruct).ArrayNum) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      uVar9 = ~uVar11 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar10 = uVar9;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)((param_1->AllocatorInstance).Data + lVar13) != 0) {
        uVar10 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar10 = uVar9;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar10 = 0;
        if ((int)uVar11 < *piVar1) {
          uVar10 = uVar9;
        }
        uVar4 = *(undefined8 *)(*(longlong *)((param_1->AllocatorInstance).Data + lVar13) + 0x14);
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined8 *)((pTVar2->AllocatorInstance).Data + lVar12) = uVar4;
        uVar10 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar10 = uVar9;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar3 = *(FScriptContainerElement *)
                 (*(longlong *)((param_1->AllocatorInstance).Data + lVar13) + 0x231);
        uVar10 = 0;
        if ((int)uVar11 < *piVar1) {
          uVar10 = uVar9;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (pTVar2->AllocatorInstance).Data[lVar12 + 8] = FVar3;
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 8;
      lVar12 = lVar12 + 0xc;
    } while ((int)uVar11 < (this->LastControlsUsedToReconstruct).ArrayNum);
  }
  return;
}

// UpdateOverrideAssetDelegates @ 14a464880

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterSection::UpdateOverrideAssetDelegates
          (UMovieSceneControlRigParameterSection *this)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  TObjectIterator<UControlRigOverrideAsset> local_28;
  
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = Z_Construct_UClass_UControlRigOverrideAsset_NoRegister();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UControlRigOverrideAsset>::Advance(&local_28);
    lVar6 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) + 0x180),this
              );
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// __VTableCtorCaller @ 14a468a10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UMovieSceneControlRigParameterSection::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneParameterSection *this;
  UMovieSceneParameterSection *pUVar3;
  
  pUVar3 = (UMovieSceneParameterSection *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UMovieSceneParameterSection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneParameterSection *)0x0) {
    UMovieSceneParameterSection::UMovieSceneParameterSection(this,param_1);
    IMovieSceneConstrainedSection::IMovieSceneConstrainedSection
              ((IMovieSceneConstrainedSection *)(this + 1));
    this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
    this[1]._padding_ = (longlong)&___7UMovieSceneControlRigParameterSection__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    FMovieSceneFloatChannel::FMovieSceneFloatChannel((FMovieSceneFloatChannel *)&this[1]._padding_);
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].BoolParameterNamesAndCurves.ArrayNum = 0;
    this[2].BoolParameterNamesAndCurves.ArrayMax = 0;
    this[2].ScalarParameterNamesAndCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].Vector2DParameterNamesAndCurves.ArrayNum = 0;
    this[2].Vector2DParameterNamesAndCurves.ArrayMax = 0;
    *(undefined4 *)&this[2].VectorParameterNamesAndCurves.AllocatorInstance.Data = 0;
    *(undefined4 *)((longlong)&this[2].VectorParameterNamesAndCurves.AllocatorInstance.Data + 4) =
         0x80;
    this[2].VectorParameterNamesAndCurves.ArrayNum = -1;
    this[2].VectorParameterNamesAndCurves.ArrayMax = 0;
    this[2].ColorParameterNamesAndCurves.ArrayNum = 0;
    this[2].ColorParameterNamesAndCurves.ArrayMax = 0;
    *(undefined4 *)&this[2].TransformParameterNamesAndCurves.AllocatorInstance.Data = 0;
    this[2].TransformParameterNamesAndCurves.ArrayNum = 0;
    this[2].TransformParameterNamesAndCurves.ArrayMax = 0;
    this[3]._padding_ = 0;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// _getUObject @ 14a468ea0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UObject * __thiscall
UMovieSceneControlRigParameterSection::_getUObject(UMovieSceneControlRigParameterSection *this)

{
  return (UObject *)&this[-1].Weight.KeyHandles.field_0x80;
}

// _getUObject`adjustor{104}' @ 14a468eb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMovieSceneControlRigParameterSection::_getUObject`adjustor{104}' (void)const __ptr64 */

UObject * __thiscall
UMovieSceneControlRigParameterSection::_getUObject_adjustor_104__
          (UMovieSceneControlRigParameterSection *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMovieSceneControlRigParameterSection *)&this[-1].bDoNotKey);
  return (UObject *)pUVar1;
}

