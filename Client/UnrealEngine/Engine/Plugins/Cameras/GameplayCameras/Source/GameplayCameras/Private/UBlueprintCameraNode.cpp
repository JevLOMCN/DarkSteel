// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 15

// StaticClass @ 14d644140

UClass * __cdecl UBlueprintCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraNode",
               &Z_Registration_Info_UClass_UBlueprintCameraNode.InnerSingleton,
               StaticRegisterNativesUBlueprintCameraNode,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintCameraNode>,
               InternalVTableHelperCtorCaller<UBlueprintCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraNode.InnerSingleton;
}

// UBlueprintCameraNode @ 14d656810

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UBlueprintCameraNode * __thiscall
UBlueprintCameraNode::UBlueprintCameraNode(UBlueprintCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&___7UBlueprintCameraNode__6B_;
  (this->CameraNodeEvaluatorTemplate).field0_0x0.DebugPtr = (UBlueprintCameraNodeEvaluator *)0x0;
  (this->CameraNodeEvaluatorOverrides).BlendableParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayNum = 0;
  (this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayMax = 0;
  (this->CameraNodeEvaluatorOverrides).DataParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraNodeEvaluatorOverrides).DataParameters.ArrayNum = 0;
  (this->CameraNodeEvaluatorOverrides).DataParameters.ArrayMax = 0;
  (this->CameraNodeEvaluatorClass_DEPRECATED).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UBlueprintCameraNode @ 14d656870

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UBlueprintCameraNode * __thiscall
UBlueprintCameraNode::UBlueprintCameraNode(UBlueprintCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&___7UBlueprintCameraNode__6B_;
  (this->CameraNodeEvaluatorTemplate).field0_0x0.DebugPtr = (UBlueprintCameraNodeEvaluator *)0x0;
  (this->CameraNodeEvaluatorOverrides).BlendableParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayNum = 0;
  (this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayMax = 0;
  (this->CameraNodeEvaluatorOverrides).DataParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraNodeEvaluatorOverrides).DataParameters.ArrayNum = 0;
  (this->CameraNodeEvaluatorOverrides).DataParameters.ArrayMax = 0;
  (this->CameraNodeEvaluatorClass_DEPRECATED).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ~UBlueprintCameraNode @ 14d658180

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UBlueprintCameraNode::~UBlueprintCameraNode(UBlueprintCameraNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&___7UBlueprintCameraNode__6B_;
  pFVar1 = (this->CameraNodeEvaluatorOverrides).DataParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CameraNodeEvaluatorOverrides).BlendableParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ICustomCameraNodeParameterProvider__6B_;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// BeginDestroy @ 14d65c610

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBlueprintCameraNode::BeginDestroy(UBlueprintCameraNode *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UBlueprintCameraNode **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// GetCustomCameraNodeParameters @ 14d65fc20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraNode::GetCustomCameraNodeParameters
          (UBlueprintCameraNode *this,FCustomCameraNodeParameterInfos *param_1)

{
  FCustomCameraNodeBlendableParameter *pFVar1;
  int iVar2;
  UStruct *this_00;
  FProperty *pFVar3;
  uchar *puVar4;
  FCustomCameraNodeBlendableParameter *pFVar5;
  FCustomCameraNodeDataParameter *pFVar6;
  FCustomCameraNodeDataParameter *pFVar7;
  undefined1 local_res8 [8];
  
  if (this->_padding_ != 0) {
    pFVar5 = (FCustomCameraNodeBlendableParameter *)this->_padding_;
    iVar2 = (int)this->_padding_;
    this_00 = *(UStruct **)(this->_padding_ + 0x10);
    pFVar1 = pFVar5 + iVar2;
    while( true ) {
      if ((int)this->_padding_ != iVar2) {
        `TCheckedPointerIterator<FCustomCameraNodeBlendableParameter,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar1) break;
      pFVar3 = UStruct::FindPropertyByName(this_00,pFVar5->ParameterName);
      if (pFVar3 != (FProperty *)0x0) {
        puVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal
                           (pFVar3,(UObject *)this->_padding_,0);
        FCustomCameraNodeParameterInfos::AddBlendableParameter(param_1,pFVar5,puVar4);
      }
      pFVar5 = pFVar5 + 1;
    }
    iVar2 = (int)this->_padding_;
    pFVar6 = (FCustomCameraNodeDataParameter *)this->_padding_;
    pFVar7 = pFVar6 + iVar2;
    while( true ) {
      if ((int)this->_padding_ != iVar2) {
        `TCheckedPointerIterator<FCustomCameraNodeDataParameter,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar7) break;
      pFVar3 = UStruct::FindPropertyByName(this_00,pFVar6->ParameterName);
      if (pFVar3 != (FProperty *)0x0) {
        puVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal
                           (pFVar3,(UObject *)this->_padding_,0);
        FCustomCameraNodeParameterInfos::AddDataParameter(param_1,pFVar6,puVar4);
      }
      pFVar6 = pFVar6 + 1;
    }
  }
  return;
}

// GetPrivateStaticClass @ 14d6602e0

UClass * __cdecl UBlueprintCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraNode",
               &Z_Registration_Info_UClass_UBlueprintCameraNode.InnerSingleton,
               StaticRegisterNativesUBlueprintCameraNode,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintCameraNode>,
               InternalVTableHelperCtorCaller<UBlueprintCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraNode.InnerSingleton;
}

// OnBuild @ 14d663cd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraNode::OnBuild(UBlueprintCameraNode *this,FCameraObjectBuildContext *param_1)

{
  FCameraBuildLog *this_00;
  FText *pFVar1;
  FText local_18;
  
  if ((this->CameraNodeEvaluatorTemplate).field0_0x0.DebugPtr ==
      (UBlueprintCameraNodeEvaluator *)0x0) {
    this_00 = param_1->BuildLog;
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"BlueprintCameraNode",L"MissingBlueprintEvaluatorTemplate",
                        L"No evaluator Blueprint is set.");
    UE::Cameras::FCameraBuildLog::AddMessage(this_00,Error,(UObject *)this,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// OnBuildEvaluator @ 14d6656f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraNodeEvaluator * __thiscall
UBlueprintCameraNode::OnBuildEvaluator
          (UBlueprintCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x28,8);
  *(undefined4 *)&pFVar1->field_0x9 = 0;
  *(undefined2 *)&pFVar1->field_0xd = 0;
  pFVar1->field_0xf = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1->PrivateFlags = 7;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1[1]._padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FBlueprintCameraNodeEvaluator_Cameras_UE__6B_;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// OnPreBuild @ 14d668cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBlueprintCameraNode::OnPreBuild(UBlueprintCameraNode *this,FCameraBuildLog *param_1)

{
  FCustomCameraNodeParameters *pFVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  TArray<FCustomCameraNodeDataParameter,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  EClassCastFlags EVar6;
  TObjectPtr<UCameraVariableAsset>_u_0 TVar7;
  code *pcVar8;
  FName FVar9;
  undefined8 uVar10;
  TObjectPtr<UCameraVariableAsset>_u_0 TVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  ECameraVariableType EVar15;
  uint uVar16;
  int iVar17;
  UClass *pUVar18;
  UScriptStruct *pUVar19;
  UScriptStruct *pUVar20;
  longlong lVar21;
  FNameEntryId FVar22;
  ForElementType<unsigned_int> FVar23;
  ForElementType<FSetElementId> FVar24;
  int iVar25;
  FScriptContainerElement *pFVar26;
  ECameraVariableType EVar27;
  TObjectPtr<UObject_const_>_u_0 TVar28;
  ECameraContextDataType EVar29;
  FScriptContainerElement *pFVar30;
  ForAnyElementType FVar31;
  ECameraVariableType EVar32;
  FField *pFVar33;
  ForAnyElementType FVar34;
  UBlueprintCameraNode *pUVar35;
  undefined1 auStackY_298 [32];
  undefined1 uStack_248;
  undefined1 auStack_247 [7];
  ForAnyElementType FStack_240;
  undefined8 uStack_238;
  ForAnyElementType FStack_230;
  undefined8 uStack_228;
  TFieldIterator<FProperty> TStack_220;
  FCustomCameraNodeDataParameter FStack_208;
  FName FStack_1e8;
  FCustomCameraNodeBlendableParameter FStack_1e0;
  FName FStack_1b8;
  FName FStack_1b0;
  UBlueprintCameraNode *pUStack_1a8;
  FString FStack_1a0;
  undefined1 auStack_190 [8];
  TPairInitializer<FName_const_&,FCameraContextDataID_const_&> TStack_188;
  FName FStack_178;
  FString FStack_170;
  FScriptContainerElement *pFStack_160;
  FCameraContextDataID **ppFStack_158;
  FScriptContainerElement *pFStack_150;
  FScriptContainerElement *pFStack_148;
  FScriptContainerElement *pFStack_140;
  FScriptContainerElement *pFStack_138;
  undefined1 auStack_128 [32];
  ForElementType<unsigned_int> FStack_108;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined1 auStack_f0 [8];
  ForElementType<FSetElementId> FStack_e8;
  int iStack_e0;
  undefined1 auStack_d8 [32];
  ForElementType<unsigned_int> FStack_b8;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined1 auStack_a0 [8];
  ForElementType<FSetElementId> FStack_98;
  int iStack_90;
  undefined1 auStack_88 [32];
  ForElementType<unsigned_int> FStack_68;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined1 auStack_50 [8];
  ForElementType<FSetElementId> FStack_48;
  int iStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pFVar1 = &this->CameraNodeEvaluatorOverrides;
  pUStack_1a8 = this;
  if ((this->CameraNodeEvaluatorTemplate).field0_0x0.DebugPtr ==
      (UBlueprintCameraNodeEvaluator *)0x0) {
    if (((this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayNum != 0) ||
       ((this->CameraNodeEvaluatorOverrides).DataParameters.ArrayNum != 0)) {
      iVar17 = (this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayMax;
      (this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayNum = 0;
      if (iVar17 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)pFVar1,0,
                   &(this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayMax);
      }
      iVar17 = (this->CameraNodeEvaluatorOverrides).DataParameters.ArrayMax;
      (this->CameraNodeEvaluatorOverrides).DataParameters.ArrayNum = 0;
      if (iVar17 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&(this->CameraNodeEvaluatorOverrides).DataParameters.AllocatorInstance,0
                   ,&(this->CameraNodeEvaluatorOverrides).DataParameters.ArrayMax);
      }
    }
  }
  else {
    pFVar30 = (pFVar1->BlendableParameters).AllocatorInstance.Data;
    iVar17 = (this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayNum;
    pFVar26 = pFVar30 + 0x18;
    auStack_88._0_8_ = (FScriptContainerElement *)0x0;
    auStack_88._8_8_ = 0;
    FStack_68 = (ForElementType<unsigned_int>)0x0;
    EVar32 = Boolean;
    iStack_60 = 0;
    iStack_5c = 0x80;
    iStack_58 = -1;
    iStack_54 = 0;
    FStack_48 = (ForElementType<FSetElementId>)0x0;
    iStack_40 = 0;
    auStack_d8._0_8_ = (FScriptContainerElement *)0x0;
    auStack_d8._8_8_ = 0;
    FStack_b8 = (ForElementType<unsigned_int>)0x0;
    iStack_b0 = 0;
    iStack_ac = 0x80;
    iStack_a8 = -1;
    iStack_a4 = 0;
    FStack_98 = (ForElementType<FSetElementId>)0x0;
    iStack_90 = 0;
    while( true ) {
      if ((this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayNum != iVar17) {
        uStack_248 = 0;
        `TCheckedPointerIterator<FCustomCameraNodeBlendableParameter,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&uStack_248);
      }
      pFVar2 = pFVar26 + -0x18;
      if (pFVar2 == pFVar30 + (longlong)iVar17 * 0x28) break;
      if (*(FCameraContextDataID **)(pFVar26 + 8) != (FCameraContextDataID *)0x0) {
        ppFStack_158 = &TStack_188.Value;
        TStack_188.Value = *(FCameraContextDataID **)(pFVar26 + 8);
        pFStack_160 = pFVar2;
        TSet<TTuple<FName,UCameraVariableAsset_*>,TDefaultMapHashableKeyFuncs<FName,UCameraVariableAsset_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,UCameraVariableAsset_*_&&>_>
                  ((TSet<TTuple<FName,UCameraVariableAsset_*>,TDefaultMapHashableKeyFuncs<FName,UCameraVariableAsset_*,0>,FDefaultSetAllocator>
                    *)auStack_88,
                   (TPairInitializer<FName_const_&,UCameraVariableAsset_*_&&> *)auStack_190,
                   (bool *)&pFStack_160);
      }
      if (*(int *)pFVar26 != -1) {
        pFStack_150 = pFVar2;
        pFStack_148 = pFVar26;
        TSet<TTuple<FName,FCameraVariableID>,TDefaultMapHashableKeyFuncs<FName,FCameraVariableID,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FCameraVariableID_const_&>_>
                  ((TSet<TTuple<FName,FCameraVariableID>,TDefaultMapHashableKeyFuncs<FName,FCameraVariableID,0>,FDefaultSetAllocator>
                    *)auStack_d8,
                   (TPairInitializer<FName_const_&,FCameraVariableID_const_&> *)(auStack_190 + 4),
                   (bool *)&pFStack_150);
      }
      pFVar26 = pFVar26 + 0x28;
    }
    iVar17 = (this->CameraNodeEvaluatorOverrides).DataParameters.ArrayNum;
    pFVar26 = (this->CameraNodeEvaluatorOverrides).DataParameters.AllocatorInstance.Data;
    pFVar30 = pFVar26 + (longlong)iVar17 * 0x20;
    auStack_128._0_8_ = (FScriptContainerElement *)0x0;
    auStack_128._8_8_ = 0;
    FStack_108 = (ForElementType<unsigned_int>)0x0;
    iStack_100 = 0;
    iStack_fc = 0x80;
    iStack_f8 = -1;
    iStack_f4 = 0;
    FStack_e8 = (ForElementType<FSetElementId>)0x0;
    iStack_e0 = 0;
    while( true ) {
      if ((this->CameraNodeEvaluatorOverrides).DataParameters.ArrayNum != iVar17) {
        auStack_247[0] = 0;
        `TCheckedPointerIterator<FCustomCameraNodeDataParameter,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStack_247);
      }
      if (pFVar26 == pFVar30) break;
      if (*(int *)(pFVar26 + 0x18) != -1) {
        pFStack_140 = pFVar26;
        pFStack_138 = pFVar26 + 0x18;
        TSet<TTuple<FName,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<FName,FCameraContextDataID,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FCameraContextDataID_const_&>_>
                  ((TSet<TTuple<FName,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<FName,FCameraContextDataID,0>,FDefaultSetAllocator>
                    *)auStack_128,&TStack_188,(bool *)&pFStack_140);
      }
      pFVar26 = pFVar26 + 0x20;
    }
    FStack_240.Data = (FScriptContainerElement *)0x0;
    uStack_238 = 0;
    FStack_230.Data = (FScriptContainerElement *)0x0;
    uStack_228 = 0;
    TStack_220.Struct =
         (UStruct *)((this->CameraNodeEvaluatorTemplate).field0_0x0.DebugPtr)->_padding_;
    if (TStack_220.Struct == (UStruct *)0x0) {
      TStack_220.Field = (FField *)0x0;
    }
    else {
      TStack_220.Field = (TStack_220.Struct)->ChildProperties;
    }
    TStack_220.InterfaceIndex = -1;
    TStack_220.bIncludeSuper = true;
    TStack_220.bIncludeDeprecated = true;
    TStack_220.bIncludeInterface = false;
    TFieldIterator<FProperty>::IterateToNext(&TStack_220);
    pUVar35 = this;
    if (TStack_220.Field != (FField *)0x0) {
LAB_14d66f880:
      pFVar33 = TStack_220.Field;
      pUVar18 = FField::GetOwnerClass(TStack_220.Field);
      if ((((pUVar18->ClassFlags >> 0x12 & 1) != 0) &&
          (((ulonglong)pFVar33[1].ClassPrivate & 0x80800010000) == 0)) &&
         (((ulonglong)pFVar33[1].ClassPrivate & 1) != 0)) {
        TVar28.DebugPtr = (UObject *)0x0;
        EVar6 = pFVar33->ClassPrivate->CastFlags;
        EVar27 = EVar32;
        if ((EVar6 >> 0x11 & 1) != 0) {
LAB_14d66fa9b:
          FStack_1e0.ParameterName.ComparisonIndex.Value = 0;
          FStack_1e0.ParameterName.Number = 0;
          FStack_1e0.ParameterType = Boolean;
          FStack_1e0.BlendableStructType.field0_0x0.DebugPtr =
               (TObjectPtr<UScriptStruct_const_>_u_0)0x0;
          FStack_1e0.OverrideVariableID.Value = 0xffffffff;
          FStack_1e0.OverrideVariable.field0_0x0.DebugPtr =
               (TObjectPtr<UCameraVariableAsset>_u_0)0x0;
          bVar12 = IsThisNotNull(pFVar33,"FField::GetFName");
          if (bVar12) {
            FStack_1e8 = pFVar33->NamePrivate;
            FVar22.Value = FStack_1e8.ComparisonIndex.Value;
            EVar15 = FStack_1e8.Number;
          }
          else {
            FStack_1e8.ComparisonIndex.Value = 0;
            FStack_1e8.Number = 0;
            FVar22.Value = EVar32;
            EVar15 = EVar32;
          }
          FVar9 = FStack_1e8;
          FStack_1e0.ParameterName = FStack_1e8;
          FStack_1e0.ParameterType = EVar27;
          uVar13 = ::GetTypeHash(FVar22);
          TVar11 = FStack_1e0.OverrideVariable.field0_0x0;
          if (auStack_88._8_4_ != iStack_54) {
            FVar24 = (ForElementType<FSetElementId>)auStack_50;
            if (FStack_48 != (ForElementType<FSetElementId>)0x0) {
              FVar24 = FStack_48;
            }
            for (uVar13 = *(uint *)((longlong)FVar24 +
                                   (ulonglong)(iStack_40 - 1U & uVar13 + EVar15) * 4);
                uVar13 != 0xffffffff;
                uVar13 = *(uint *)(auStack_88._0_8_ + (longlong)(int)uVar13 * 0x18 + 0x10)) {
              if (*(FName *)(auStack_88._0_8_ + (longlong)(int)uVar13 * 0x18) == FVar9) {
                if (uVar13 != 0xffffffff) {
                  lVar21 = (longlong)(int)uVar13 * 0x18;
                  TVar7 = (TObjectPtr<UCameraVariableAsset>_u_0)
                          ((TObjectPtr<UCameraVariableAsset>_u_0 *)(auStack_88._0_8_ + lVar21 + 8))
                          ->DebugPtr;
                  if (((int)uVar13 < 0) || (iStack_60 <= (int)uVar13)) {
LAB_14d66fbc2:
                    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Elements.IsValidIndex(ElementIndex)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                        ,0x2ab,
                                        L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex"
                                       );
                    if (bVar12) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                  }
                  else {
                    FVar23 = (ForElementType<unsigned_int>)((longlong)auStack_88 + 0x10);
                    if (FStack_68 != (ForElementType<unsigned_int>)0x0) {
                      FVar23 = FStack_68;
                    }
                    uVar14 = uVar13;
                    if ((int)uVar13 < 0) {
                      uVar14 = uVar13 + 0x1f;
                    }
                    if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar14 >> 5) * 4) >>
                         (uVar13 & 0x1f) & 1) == 0) goto LAB_14d66fbc2;
                  }
                  uVar10 = auStack_88._0_8_;
                  FVar24 = (ForElementType<FSetElementId>)auStack_50;
                  if (FStack_48 != (ForElementType<FSetElementId>)0x0) {
                    FVar24 = FStack_48;
                  }
                  pFVar26 = (FScriptContainerElement *)
                            ((longlong)FVar24 +
                            (longlong)*(int *)(auStack_88._0_8_ + lVar21 + 0x14) * 4);
                  goto LAB_14d66fc10;
                }
                break;
              }
            }
          }
          goto LAB_14d66fca5;
        }
        if ((char)EVar6 < '\0') {
          EVar27 = Integer32;
          goto LAB_14d66fa9b;
        }
        if ((EVar6 >> 8 & 1) != 0) {
          EVar27 = Float;
          goto LAB_14d66fa9b;
        }
        if ((EVar6 >> 0x20 & 1) != 0) {
          EVar27 = Double;
          goto LAB_14d66fa9b;
        }
        if (((EVar6 >> 0x14 & 1) != 0) && (pFVar33 != (FField *)0x0)) {
          pUVar19 = TVariantStructure<UE::Math::TVector2<float>_>::Get();
          pUVar20 = (UScriptStruct *)pFVar33[2].Owner.Container.Field;
          if (pUVar20 == (UScriptStruct *)0x0) {
            bVar12 = pUVar19 == (UScriptStruct *)0x0;
          }
          else {
            bVar12 = pUVar20 == pUVar19;
          }
          if (bVar12) {
            EVar27 = Vector2f;
          }
          else {
            pUVar19 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
            pUVar20 = (UScriptStruct *)pFVar33[2].Owner.Container.Field;
            if (pUVar20 == (UScriptStruct *)0x0) {
              bVar12 = pUVar19 == (UScriptStruct *)0x0;
            }
            else {
              bVar12 = pUVar20 == pUVar19;
            }
            if (bVar12) {
              EVar27 = Vector2d;
            }
            else {
              pUVar19 = TVariantStructure<UE::Math::TVector<float>_>::Get();
              pUVar20 = (UScriptStruct *)pFVar33[2].Owner.Container.Field;
              if (pUVar20 == (UScriptStruct *)0x0) {
                bVar12 = pUVar19 == (UScriptStruct *)0x0;
              }
              else {
                bVar12 = pUVar20 == pUVar19;
              }
              if (bVar12) {
                EVar27 = Vector3f;
              }
              else {
                pUVar19 = TBaseStructure<UE::Math::TVector<double>_>::Get();
                pUVar20 = (UScriptStruct *)pFVar33[2].Owner.Container.Field;
                if (pUVar20 == (UScriptStruct *)0x0) {
                  bVar12 = pUVar19 == (UScriptStruct *)0x0;
                }
                else {
                  bVar12 = pUVar20 == pUVar19;
                }
                if (bVar12) {
                  EVar27 = Vector3d;
                }
                else {
                  pUVar19 = TVariantStructure<UE::Math::TVector4<float>_>::Get();
                  pUVar20 = (UScriptStruct *)pFVar33[2].Owner.Container.Field;
                  if (pUVar20 == (UScriptStruct *)0x0) {
                    bVar12 = pUVar19 == (UScriptStruct *)0x0;
                  }
                  else {
                    bVar12 = pUVar20 == pUVar19;
                  }
                  if (bVar12) {
                    EVar27 = Vector4f;
                  }
                  else {
                    pUVar19 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
                    pUVar20 = (UScriptStruct *)pFVar33[2].Owner.Container.Field;
                    if (pUVar20 == (UScriptStruct *)0x0) {
                      bVar12 = pUVar19 == (UScriptStruct *)0x0;
                    }
                    else {
                      bVar12 = pUVar20 == pUVar19;
                    }
                    if (bVar12) {
                      EVar27 = Vector4d;
                    }
                    else {
                      pUVar19 = TVariantStructure<UE::Math::TRotator<float>_>::Get();
                      pUVar20 = (UScriptStruct *)pFVar33[2].Owner.Container.Field;
                      if (pUVar20 == (UScriptStruct *)0x0) {
                        bVar12 = pUVar19 == (UScriptStruct *)0x0;
                      }
                      else {
                        bVar12 = pUVar20 == pUVar19;
                      }
                      if (bVar12) {
                        EVar27 = Rotator3f;
                      }
                      else {
                        pUVar19 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
                        pUVar20 = (UScriptStruct *)pFVar33[2].Owner.Container.Field;
                        if (pUVar20 == (UScriptStruct *)0x0) {
                          bVar12 = pUVar19 == (UScriptStruct *)0x0;
                        }
                        else {
                          bVar12 = pUVar20 == pUVar19;
                        }
                        if (bVar12) {
                          EVar27 = Rotator3d;
                        }
                        else {
                          pUVar19 = TVariantStructure<UE::Math::TTransform<float>_>::Get();
                          pUVar20 = (UScriptStruct *)pFVar33[2].Owner.Container.Field;
                          if (pUVar20 == (UScriptStruct *)0x0) {
                            bVar12 = pUVar19 == (UScriptStruct *)0x0;
                          }
                          else {
                            bVar12 = pUVar20 == pUVar19;
                          }
                          if (bVar12) {
                            EVar27 = Transform3f;
                          }
                          else {
                            pUVar20 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
                            TVar28 = (TObjectPtr<UObject_const_>_u_0)
                                     pFVar33[2].Owner.Container.Object;
                            if ((UScriptStruct *)TVar28.DebugPtr == (UScriptStruct *)0x0) {
                              bVar12 = pUVar20 == (UScriptStruct *)0x0;
                            }
                            else {
                              bVar12 = (UScriptStruct *)TVar28.DebugPtr == pUVar20;
                            }
                            if (!bVar12) {
                              EVar29 = Struct;
                              goto LAB_14d66ffd0;
                            }
                            EVar27 = Transform3d;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_14d66fa9b;
        }
        if ((EVar6 >> 0xd & 1) == 0) {
          if ((EVar6 >> 0xe & 1) == 0) {
            if (((EVar6 >> 0x30 & 1) == 0) || (pFVar33 == (FField *)0x0)) {
              if (((EVar6 >> 10 & 1) == 0) || (pFVar33 == (FField *)0x0)) {
                if (((EVar6 >> 0x10 & 1) == 0) || (pFVar33 == (FField *)0x0)) {
                  if (2 < (byte)LogCameraSystem._0_1_) {
                    FStack_178 = *(FName *)(((pUVar35->CameraNodeEvaluatorTemplate).field0_0x0.
                                            DebugPtr)->_padding_ + 0x18);
                    ::FName::ToString(&FStack_178,&FStack_170);
                    bVar12 = IsThisNotNull(pFVar33,"FField::GetName");
                    if (bVar12) {
                      ::FName::ToString(&pFVar33->NamePrivate,&FStack_1a0);
                    }
                    else {
                      ::FString::FString(&FStack_1a0,L"None");
                    }
                    UE::Logging::Private::BasicLog<3>
                              ((FStaticBasicLogRecord *)&PTR_u_Property___s__o_152ba2c20,
                               (FLogCategoryBase *)&LogCameraSystem);
                    if (FStack_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(FStack_1a0.Data.AllocatorInstance.Data);
                    }
                    if (FStack_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(FStack_170.Data.AllocatorInstance.Data);
                    }
                  }
                  goto LAB_14d670359;
                }
                TVar28 = (TObjectPtr<UObject_const_>_u_0)pFVar33[2].Owner.Container.Object;
                EVar29 = Object;
              }
              else {
                TVar28 = (TObjectPtr<UObject_const_>_u_0)pFVar33[2].Next;
                EVar29 = Class;
              }
            }
            else {
              TVar28 = (TObjectPtr<UObject_const_>_u_0)pFVar33[2].Next;
              EVar29 = Enum;
            }
          }
          else {
            EVar29 = String;
          }
        }
        else {
          EVar29 = Name;
          TVar28.DebugPtr = (UObject *)0x0;
        }
LAB_14d66ffd0:
        FStack_208.ParameterName.ComparisonIndex.Value = 0;
        FStack_208.ParameterName.Number = 0;
        FStack_208.ParameterType = Name;
        FStack_208.ParameterContainerType = None;
        FStack_208.ParameterTypeObject.field0_0x0.DebugPtr = (TObjectPtr<UObject_const_>_u_0)0x0;
        FStack_208.OverrideDataID.Value = 0xffffffff;
        bVar12 = IsThisNotNull(pFVar33,"FField::GetFName");
        if (bVar12) {
          FStack_1b8 = pFVar33->NamePrivate;
        }
        else {
          FStack_1b8.ComparisonIndex.Value = 0;
          FStack_1b8.Number = 0;
        }
        FStack_208.ParameterType = EVar29;
        FStack_208.ParameterName = FStack_1b8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UScriptStruct *)TVar28.DebugPtr != (UScriptStruct *)0x0)) {
          UE::GC::MarkAsReachable(TVar28.DebugPtr);
        }
        FVar9 = FStack_208.ParameterName;
        FStack_208.ParameterTypeObject.field0_0x0 = TVar28;
        FStack_1b0 = FStack_208.ParameterName;
        uVar13 = ::GetTypeHash(FStack_208.ParameterName.ComparisonIndex.Value);
        if (auStack_128._8_4_ != iStack_f4) {
          FVar24 = (ForElementType<FSetElementId>)auStack_f0;
          if (FStack_e8 != (ForElementType<FSetElementId>)0x0) {
            FVar24 = FStack_e8;
          }
          for (uVar13 = *(uint *)((longlong)FVar24 +
                                 (ulonglong)(iStack_e0 - 1U & FStack_1b0.Number + uVar13) * 4);
              uVar13 != 0xffffffff;
              uVar13 = *(uint *)(auStack_128._0_8_ + (longlong)(int)uVar13 * 0x14 + 0xc)) {
            if (*(FName *)(auStack_128._0_8_ + (longlong)(int)uVar13 * 0x14) == FVar9) {
              if (uVar13 != 0xffffffff) {
                lVar21 = (longlong)(int)uVar13 * 0x14;
                uVar14 = *(uint *)(auStack_128._0_8_ + lVar21 + 8);
                if (((int)uVar13 < 0) || (iStack_100 <= (int)uVar13)) {
LAB_14d6700fb:
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Elements.IsValidIndex(ElementIndex)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                      ,0x2ab,
                                      L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex"
                                     );
                  if (bVar12) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                else {
                  FVar23 = (ForElementType<unsigned_int>)((longlong)auStack_128 + 0x10);
                  if (FStack_108 != (ForElementType<unsigned_int>)0x0) {
                    FVar23 = FStack_108;
                  }
                  uVar16 = uVar13;
                  if ((int)uVar13 < 0) {
                    uVar16 = uVar13 + 0x1f;
                  }
                  if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar16 >> 5) * 4) >>
                       (uVar13 & 0x1f) & 1) == 0) goto LAB_14d6700fb;
                }
                uVar10 = auStack_128._0_8_;
                FVar24 = (ForElementType<FSetElementId>)auStack_f0;
                if (FStack_e8 != (ForElementType<FSetElementId>)0x0) {
                  FVar24 = FStack_e8;
                }
                pFVar26 = (FScriptContainerElement *)
                          ((longlong)FVar24 +
                          (longlong)*(int *)(auStack_128._0_8_ + lVar21 + 0x10) * 4);
                goto LAB_14d670145;
              }
              break;
            }
          }
        }
        goto LAB_14d6701b5;
      }
      goto LAB_14d670359;
    }
LAB_14d670378:
    FVar34.Data = FStack_230.Data;
    FVar31.Data = FStack_240.Data;
    iVar17 = (int)uStack_238;
    iVar25 = (int)uStack_228;
    if ((((int)uStack_238 != (this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayNum) ||
        (bVar12 = CompareItems<FCustomCameraNodeBlendableParameter,int>
                            ((FCustomCameraNodeBlendableParameter *)FStack_240.Data,
                             (FCustomCameraNodeBlendableParameter *)
                             (pFVar1->BlendableParameters).AllocatorInstance.Data,(int)uStack_238),
        !bVar12)) ||
       ((iVar25 != (this->CameraNodeEvaluatorOverrides).DataParameters.ArrayNum ||
        (bVar12 = CompareItems<FCustomCameraNodeDataParameter,int>
                            ((FCustomCameraNodeDataParameter *)FVar34.Data,
                             (FCustomCameraNodeDataParameter *)
                             (this->CameraNodeEvaluatorOverrides).DataParameters.AllocatorInstance.
                             Data,iVar25), !bVar12)))) {
      if (pFVar1 != (FCustomCameraNodeParameters *)&FStack_240) {
        iVar5 = (this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayMax;
        piVar3 = &(this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayMax;
        (this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayNum = iVar17;
        if ((iVar17 == 0) && (iVar5 == 0)) {
          *piVar3 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar17,iVar5,(ForAnyElementType *)pFVar1,iVar17,piVar3);
          ConstructItems<FCustomCameraNodeBlendableParameter,FCustomCameraNodeBlendableParameter,int>
                    ((pFVar1->BlendableParameters).AllocatorInstance.Data,
                     (FCustomCameraNodeBlendableParameter *)FVar31.Data,iVar17);
          FVar31.Data = FStack_240.Data;
          FVar34.Data = FStack_230.Data;
          iVar25 = (int)uStack_228;
        }
      }
      pTVar4 = &(this->CameraNodeEvaluatorOverrides).DataParameters;
      if (pTVar4 != (TArray<FCustomCameraNodeDataParameter,TSizedDefaultAllocator<32>_> *)
                    &FStack_230) {
        iVar17 = (this->CameraNodeEvaluatorOverrides).DataParameters.ArrayMax;
        piVar3 = &(this->CameraNodeEvaluatorOverrides).DataParameters.ArrayMax;
        (this->CameraNodeEvaluatorOverrides).DataParameters.ArrayNum = iVar25;
        if ((iVar25 == 0) && (iVar17 == 0)) {
          *piVar3 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar25,iVar17,&pTVar4->AllocatorInstance,iVar25,piVar3);
          ConstructItems<FCustomCameraNodeDataParameter,FCustomCameraNodeDataParameter,int>
                    ((pTVar4->AllocatorInstance).Data,(FCustomCameraNodeDataParameter *)FVar34.Data,
                     iVar25);
          FVar31.Data = FStack_240.Data;
          FVar34.Data = FStack_230.Data;
        }
      }
    }
    if ((FCustomCameraNodeDataParameter *)FVar34.Data != (FCustomCameraNodeDataParameter *)0x0) {
      FMemory::Free(FVar34.Data);
      FVar31.Data = FStack_240.Data;
    }
    if ((FCustomCameraNodeBlendableParameter *)FVar31.Data !=
        (FCustomCameraNodeBlendableParameter *)0x0) {
      FMemory::Free(FVar31.Data);
    }
    iStack_e0 = 0;
    if (FStack_e8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_e8);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FCameraContextDataID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FCameraContextDataID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FCameraContextDataID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)auStack_128);
    iStack_90 = 0;
    if (FStack_98 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_98);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FCameraVariableID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FCameraVariableID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FCameraVariableID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)auStack_d8);
    iStack_40 = 0;
    if (FStack_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_48);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UCameraVariableAsset_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UCameraVariableAsset_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UCameraVariableAsset_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)auStack_88);
  }
  return;
LAB_14d66fc10:
  uVar14 = *(uint *)pFVar26;
  if (uVar14 == 0xffffffff) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("NextElementIndex != INDEX_NONE",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                        ,0x2b5,L"Corrupt hash");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else if (uVar14 == uVar13) goto LAB_14d66fc59;
  pFVar26 = (FScriptContainerElement *)(auStack_88._0_8_ + (longlong)(int)uVar14 * 0x18 + 0x10);
  goto LAB_14d66fc10;
LAB_14d66fc59:
  *(uint *)pFVar26 = *(uint *)(uVar10 + lVar21 + 0x10);
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_88,uVar13,1);
  pFVar33 = TStack_220.Field;
  pUVar35 = pUStack_1a8;
  TVar11 = FStack_1e0.OverrideVariable.field0_0x0;
  if (((TVar7.DebugPtr != (UCameraVariableAsset *)0x0) &&
      (EVar15 = (**(code **)((TVar7.DebugPtr)->_padding_ + 0x2b0))(TVar7.DebugPtr),
      pFVar33 = TStack_220.Field, pUVar35 = pUStack_1a8,
      TVar11 = FStack_1e0.OverrideVariable.field0_0x0, EVar15 == EVar27)) &&
     (TVar11 = TVar7, UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
    pFVar33 = TStack_220.Field;
    pUVar35 = pUStack_1a8;
  }
LAB_14d66fca5:
  FStack_1e0.OverrideVariable.field0_0x0 = TVar11;
  FVar9 = FStack_1e0.ParameterName;
  FStack_1b0 = FStack_1e0.ParameterName;
  uVar13 = ::GetTypeHash(FStack_1e0.ParameterName.ComparisonIndex.Value);
  if (auStack_d8._8_4_ != iStack_a4) {
    FVar24 = (ForElementType<FSetElementId>)auStack_a0;
    if (FStack_98 != (ForElementType<FSetElementId>)0x0) {
      FVar24 = FStack_98;
    }
    for (uVar13 = *(uint *)((longlong)FVar24 +
                           (ulonglong)(iStack_90 - 1U & FStack_1b0.Number + uVar13) * 4);
        uVar13 != 0xffffffff;
        uVar13 = *(uint *)(auStack_d8._0_8_ + (longlong)(int)uVar13 * 0x14 + 0xc)) {
      if (*(FName *)(auStack_d8._0_8_ + (longlong)(int)uVar13 * 0x14) == FVar9) {
        if (uVar13 != 0xffffffff) {
          lVar21 = (longlong)(int)uVar13 * 0x14;
          uVar14 = *(uint *)(auStack_d8._0_8_ + lVar21 + 8);
          if (((int)uVar13 < 0) || (iStack_b0 <= (int)uVar13)) {
LAB_14d66fd81:
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Elements.IsValidIndex(ElementIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                ,0x2ab,
                                L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          else {
            FVar23 = (ForElementType<unsigned_int>)((longlong)auStack_d8 + 0x10);
            if (FStack_b8 != (ForElementType<unsigned_int>)0x0) {
              FVar23 = FStack_b8;
            }
            uVar16 = uVar13;
            if ((int)uVar13 < 0) {
              uVar16 = uVar13 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar16 >> 5) * 4) >> (uVar13 & 0x1f) &
                1) == 0) goto LAB_14d66fd81;
          }
          uVar10 = auStack_d8._0_8_;
          FVar24 = (ForElementType<FSetElementId>)auStack_a0;
          if (FStack_98 != (ForElementType<FSetElementId>)0x0) {
            FVar24 = FStack_98;
          }
          pFVar26 = (FScriptContainerElement *)
                    ((longlong)FVar24 + (longlong)*(int *)(auStack_d8._0_8_ + lVar21 + 0x10) * 4);
          goto LAB_14d66fdd0;
        }
        break;
      }
    }
  }
LAB_14d66fe46:
  if (((FStack_240.Data <= &FStack_1e0) &&
      (&FStack_1e0 <
       (FCustomCameraNodeBlendableParameter *)(FStack_240.Data + (longlong)uStack_238._4_4_ * 0x28))
      ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar17 = (int)uStack_238;
  if ((int)uStack_238 == uStack_238._4_4_) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&FStack_240,(int *)((longlong)&uStack_238 + 4));
  }
  FVar31.Data = FStack_240.Data;
  lVar21 = (longlong)iVar17;
  uStack_238 = CONCAT44(uStack_238._4_4_,iVar17 + 1);
  *(FName *)&FStack_240.Data[lVar21 * 0x28].field_0x0 = FStack_1e0.ParameterName;
  *(ECameraVariableType *)(FStack_240.Data + lVar21 * 0x28 + 8) = FStack_1e0.ParameterType;
  ((TObjectPtr<UScriptStruct_const_>_u_0 *)(FStack_240.Data + lVar21 * 0x28 + 0x10))->DebugPtr =
       (UScriptStruct *)FStack_1e0.BlendableStructType.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FStack_1e0.BlendableStructType.field0_0x0.DebugPtr !=
      (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FStack_1e0.BlendableStructType.field0_0x0);
  }
  *(uint *)&FVar31.Data[lVar21 * 0x28 + 0x18].field_0x0 = FStack_1e0.OverrideVariableID.Value;
  ((TObjectPtr<UCameraVariableAsset>_u_0 *)(FVar31.Data + lVar21 * 0x28 + 0x20))->DebugPtr =
       (UCameraVariableAsset *)FStack_1e0.OverrideVariable.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FStack_1e0.OverrideVariable.field0_0x0.DebugPtr != (TObjectPtr<UCameraVariableAsset>_u_0)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)FStack_1e0.OverrideVariable.field0_0x0);
  }
LAB_14d670359:
  TStack_220.Field = pFVar33->Next;
  TFieldIterator<FProperty>::IterateToNext(&TStack_220);
  if (TStack_220.Field == (FField *)0x0) goto LAB_14d670378;
  goto LAB_14d66f880;
LAB_14d66fdd0:
  uVar16 = *(uint *)pFVar26;
  if (uVar16 == 0xffffffff) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("NextElementIndex != INDEX_NONE",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                        ,0x2b5,L"Corrupt hash");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else if (uVar16 == uVar13) goto LAB_14d66fe1c;
  pFVar26 = (FScriptContainerElement *)(auStack_d8._0_8_ + ((longlong)(int)uVar16 * 5 + 3) * 4);
  goto LAB_14d66fdd0;
LAB_14d66fe1c:
  *(uint *)pFVar26 = *(uint *)(uVar10 + lVar21 + 0xc);
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_d8,uVar13,1);
  pFVar33 = TStack_220.Field;
  if (uVar14 != 0xffffffff) {
    FStack_1e0.OverrideVariableID.Value = uVar14;
  }
  goto LAB_14d66fe46;
LAB_14d670145:
  uVar16 = *(uint *)pFVar26;
  if (uVar16 == 0xffffffff) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("NextElementIndex != INDEX_NONE",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                        ,0x2b5,L"Corrupt hash");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else if (uVar16 == uVar13) goto LAB_14d67018e;
  pFVar26 = (FScriptContainerElement *)(auStack_128._0_8_ + ((longlong)(int)uVar16 * 5 + 3) * 4);
  goto LAB_14d670145;
LAB_14d67018e:
  *(uint *)pFVar26 = *(uint *)(uVar10 + lVar21 + 0xc);
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_128,uVar13,1);
  pFVar33 = TStack_220.Field;
  if (uVar14 != 0xffffffff) {
    FStack_208.OverrideDataID.Value = uVar14;
  }
LAB_14d6701b5:
  if (((FStack_230.Data <= &FStack_208) &&
      (&FStack_208 <
       (FCustomCameraNodeDataParameter *)(FStack_230.Data + (longlong)uStack_228._4_4_ * 0x20))) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar17 = (int)uStack_228;
  if ((int)uStack_228 == uStack_228._4_4_) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&FStack_230,(int *)((longlong)&uStack_228 + 4));
  }
  uStack_228 = CONCAT44(uStack_228._4_4_,iVar17 + 1);
  pFVar26 = FStack_230.Data + (longlong)iVar17 * 0x20;
  *(FName *)&pFVar26->field_0x0 = FStack_208.ParameterName;
  *(ECameraContextDataType *)(pFVar26 + 8) = FStack_208.ParameterType;
  *(ECameraContextDataContainerType *)(pFVar26 + 0xc) = FStack_208.ParameterContainerType;
  *(TObjectPtr<UObject_const_>_u_0 *)(pFVar26 + 0x10) = FStack_208.ParameterTypeObject.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FStack_208.ParameterTypeObject.field0_0x0.DebugPtr != (TObjectPtr<UObject_const_>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FStack_208.ParameterTypeObject.field0_0x0);
  }
  *(uint *)(pFVar26 + 0x18) = FStack_208.OverrideDataID.Value;
  goto LAB_14d670359;
}

// PostLoad @ 14d66f340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UBlueprintCameraNode::PostLoad(UBlueprintCameraNode *this)

{
  int iVar1;
  bool bVar2;
  FName FVar3;
  FName FVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UBlueprintCameraNodeEvaluator *pUVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  UCameraNode::PostLoad((UCameraNode *)this);
  pUVar7 = (this->CameraNodeEvaluatorClass_DEPRECATED).Class.field0_0x0.DebugPtr;
  if ((pUVar7 != (UClass *)0x0) &&
     (pUVar5 = UBlueprintCameraNodeEvaluator::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (pUVar7 = (this->CameraNodeEvaluatorClass_DEPRECATED).Class.field0_0x0.DebugPtr,
       pUVar7 != (UClass *)0x0)) {
      pUVar5 = (UClass *)0x0;
      local_a8.ComparisonIndex.Value = 0;
      local_a8.Number = 0;
      pUVar6 = UBlueprintCameraNodeEvaluator::StaticClass();
      FVar3 = local_a8;
      if (pUVar6 != (UClass *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar7->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          pUVar5 = (this->CameraNodeEvaluatorClass_DEPRECATED).Class.field0_0x0.DebugPtr;
        }
      }
      if (local_a8 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar7 = UBlueprintCameraNodeEvaluator::StaticClass();
      CheckIsClassChildOf_Internal(pUVar7,pUVar5);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar5);
      FVar4 = local_a8;
      local_98._48_8_ = (FObjectInstancingGraph *)0x0;
      local_98._56_8_ = (UPackage *)0x0;
      local_a8.ComparisonIndex = FVar3.ComparisonIndex.Value;
      local_a8.Number = FVar3.Number;
      local_98._16_4_ = local_a8.ComparisonIndex.Value;
      local_98._20_4_ = local_a8.Number;
      local_98._24_4_ = RF_Transactional;
      local_98._40_8_ = (UObject *)0x0;
      local_98[0x20] = false;
      local_a8 = FVar4;
      local_98._8_8_ = this;
      pUVar8 = (UBlueprintCameraNodeEvaluator *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar9 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 != (UBlueprintCameraNodeEvaluator *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      (this->CameraNodeEvaluatorTemplate).field0_0x0.DebugPtr = pUVar8;
      RebuildOverrides(this);
      (this->CameraNodeEvaluatorClass_DEPRECATED).Class.field0_0x0.DebugPtr = (UClass *)0x0;
    }
  }
  return;
}

// RebuildOverrides @ 14d66f590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBlueprintCameraNode::RebuildOverrides(UBlueprintCameraNode *this)

{
  FCustomCameraNodeParameters *pFVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  TArray<FCustomCameraNodeDataParameter,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  EClassCastFlags EVar6;
  TObjectPtr<UCameraVariableAsset>_u_0 TVar7;
  code *pcVar8;
  FName FVar9;
  undefined8 uVar10;
  TObjectPtr<UCameraVariableAsset>_u_0 TVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  ECameraVariableType EVar15;
  uint uVar16;
  int iVar17;
  UClass *pUVar18;
  UScriptStruct *pUVar19;
  UScriptStruct *pUVar20;
  longlong lVar21;
  FNameEntryId FVar22;
  ForElementType<unsigned_int> FVar23;
  ForElementType<FSetElementId> FVar24;
  int iVar25;
  FScriptContainerElement *pFVar26;
  ECameraVariableType EVar27;
  TObjectPtr<UObject_const_>_u_0 TVar28;
  ECameraContextDataType EVar29;
  FScriptContainerElement *pFVar30;
  ForAnyElementType FVar31;
  ECameraVariableType EVar32;
  FField *pFVar33;
  ForAnyElementType FVar34;
  UBlueprintCameraNode *pUVar35;
  undefined1 auStackY_298 [32];
  undefined1 local_248;
  undefined1 local_247 [7];
  ForAnyElementType local_240;
  undefined8 local_238;
  ForAnyElementType local_230;
  undefined8 local_228;
  TFieldIterator<FProperty> local_220;
  FCustomCameraNodeDataParameter local_208;
  FName local_1e8;
  FCustomCameraNodeBlendableParameter local_1e0;
  FName local_1b8;
  FName local_1b0;
  UBlueprintCameraNode *local_1a8;
  FString local_1a0;
  undefined1 local_190 [8];
  TPairInitializer<FName_const_&,FCameraContextDataID_const_&> local_188;
  FName local_178;
  FString local_170;
  FScriptContainerElement *local_160;
  FCameraContextDataID **local_158;
  FScriptContainerElement *local_150;
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  undefined1 local_128 [32];
  ForElementType<unsigned_int> local_108;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined1 local_f0 [8];
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  undefined1 local_d8 [32];
  ForElementType<unsigned_int> local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined1 local_a0 [8];
  ForElementType<FSetElementId> local_98;
  int local_90;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [8];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pFVar1 = &this->CameraNodeEvaluatorOverrides;
  local_1a8 = this;
  if ((this->CameraNodeEvaluatorTemplate).field0_0x0.DebugPtr ==
      (UBlueprintCameraNodeEvaluator *)0x0) {
    if (((this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayNum != 0) ||
       ((this->CameraNodeEvaluatorOverrides).DataParameters.ArrayNum != 0)) {
      iVar17 = (this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayMax;
      (this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayNum = 0;
      if (iVar17 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)pFVar1,0,
                   &(this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayMax);
      }
      iVar17 = (this->CameraNodeEvaluatorOverrides).DataParameters.ArrayMax;
      (this->CameraNodeEvaluatorOverrides).DataParameters.ArrayNum = 0;
      if (iVar17 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&(this->CameraNodeEvaluatorOverrides).DataParameters.AllocatorInstance,0
                   ,&(this->CameraNodeEvaluatorOverrides).DataParameters.ArrayMax);
      }
    }
  }
  else {
    pFVar30 = (pFVar1->BlendableParameters).AllocatorInstance.Data;
    iVar17 = (this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayNum;
    pFVar26 = pFVar30 + 0x18;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (ForElementType<unsigned_int>)0x0;
    EVar32 = Boolean;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = -1;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    local_d8._0_8_ = (FScriptContainerElement *)0x0;
    local_d8._8_8_ = 0;
    local_b8 = (ForElementType<unsigned_int>)0x0;
    local_b0 = 0;
    local_ac = 0x80;
    local_a8 = -1;
    local_a4 = 0;
    local_98 = (ForElementType<FSetElementId>)0x0;
    local_90 = 0;
    while( true ) {
      if ((this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayNum != iVar17) {
        local_248 = 0;
        `TCheckedPointerIterator<FCustomCameraNodeBlendableParameter,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_248);
      }
      pFVar2 = pFVar26 + -0x18;
      if (pFVar2 == pFVar30 + (longlong)iVar17 * 0x28) break;
      if (*(FCameraContextDataID **)(pFVar26 + 8) != (FCameraContextDataID *)0x0) {
        local_158 = &local_188.Value;
        local_188.Value = *(FCameraContextDataID **)(pFVar26 + 8);
        local_160 = pFVar2;
        TSet<TTuple<FName,UCameraVariableAsset_*>,TDefaultMapHashableKeyFuncs<FName,UCameraVariableAsset_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,UCameraVariableAsset_*_&&>_>
                  ((TSet<TTuple<FName,UCameraVariableAsset_*>,TDefaultMapHashableKeyFuncs<FName,UCameraVariableAsset_*,0>,FDefaultSetAllocator>
                    *)local_88,
                   (TPairInitializer<FName_const_&,UCameraVariableAsset_*_&&> *)local_190,
                   (bool *)&local_160);
      }
      if (*(int *)pFVar26 != -1) {
        local_150 = pFVar2;
        local_148 = pFVar26;
        TSet<TTuple<FName,FCameraVariableID>,TDefaultMapHashableKeyFuncs<FName,FCameraVariableID,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FCameraVariableID_const_&>_>
                  ((TSet<TTuple<FName,FCameraVariableID>,TDefaultMapHashableKeyFuncs<FName,FCameraVariableID,0>,FDefaultSetAllocator>
                    *)local_d8,
                   (TPairInitializer<FName_const_&,FCameraVariableID_const_&> *)(local_190 + 4),
                   (bool *)&local_150);
      }
      pFVar26 = pFVar26 + 0x28;
    }
    iVar17 = (this->CameraNodeEvaluatorOverrides).DataParameters.ArrayNum;
    pFVar26 = (this->CameraNodeEvaluatorOverrides).DataParameters.AllocatorInstance.Data;
    pFVar30 = pFVar26 + (longlong)iVar17 * 0x20;
    local_128._0_8_ = (FScriptContainerElement *)0x0;
    local_128._8_8_ = 0;
    local_108 = (ForElementType<unsigned_int>)0x0;
    local_100 = 0;
    local_fc = 0x80;
    local_f8 = -1;
    local_f4 = 0;
    local_e8 = (ForElementType<FSetElementId>)0x0;
    local_e0 = 0;
    while( true ) {
      if ((this->CameraNodeEvaluatorOverrides).DataParameters.ArrayNum != iVar17) {
        local_247[0] = 0;
        `TCheckedPointerIterator<FCustomCameraNodeDataParameter,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_247);
      }
      if (pFVar26 == pFVar30) break;
      if (*(int *)(pFVar26 + 0x18) != -1) {
        local_140 = pFVar26;
        local_138 = pFVar26 + 0x18;
        TSet<TTuple<FName,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<FName,FCameraContextDataID,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FCameraContextDataID_const_&>_>
                  ((TSet<TTuple<FName,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<FName,FCameraContextDataID,0>,FDefaultSetAllocator>
                    *)local_128,&local_188,(bool *)&local_140);
      }
      pFVar26 = pFVar26 + 0x20;
    }
    local_240.Data = (FScriptContainerElement *)0x0;
    local_238 = 0;
    local_230.Data = (FScriptContainerElement *)0x0;
    local_228 = 0;
    local_220.Struct =
         (UStruct *)((this->CameraNodeEvaluatorTemplate).field0_0x0.DebugPtr)->_padding_;
    if (local_220.Struct == (UStruct *)0x0) {
      local_220.Field = (FField *)0x0;
    }
    else {
      local_220.Field = (local_220.Struct)->ChildProperties;
    }
    local_220.InterfaceIndex = -1;
    local_220.bIncludeSuper = true;
    local_220.bIncludeDeprecated = true;
    local_220.bIncludeInterface = false;
    TFieldIterator<FProperty>::IterateToNext(&local_220);
    pUVar35 = this;
    if (local_220.Field != (FField *)0x0) {
LAB_14d66f880:
      pFVar33 = local_220.Field;
      pUVar18 = FField::GetOwnerClass(local_220.Field);
      if ((((pUVar18->ClassFlags >> 0x12 & 1) != 0) &&
          (((ulonglong)pFVar33[1].ClassPrivate & 0x80800010000) == 0)) &&
         (((ulonglong)pFVar33[1].ClassPrivate & 1) != 0)) {
        TVar28.DebugPtr = (UObject *)0x0;
        EVar6 = pFVar33->ClassPrivate->CastFlags;
        EVar27 = EVar32;
        if ((EVar6 >> 0x11 & 1) != 0) {
LAB_14d66fa9b:
          local_1e0.ParameterName.ComparisonIndex.Value = 0;
          local_1e0.ParameterName.Number = 0;
          local_1e0.ParameterType = Boolean;
          local_1e0.BlendableStructType.field0_0x0.DebugPtr =
               (TObjectPtr<UScriptStruct_const_>_u_0)0x0;
          local_1e0.OverrideVariableID.Value = 0xffffffff;
          local_1e0.OverrideVariable.field0_0x0.DebugPtr = (TObjectPtr<UCameraVariableAsset>_u_0)0x0
          ;
          bVar12 = IsThisNotNull(pFVar33,"FField::GetFName");
          if (bVar12) {
            local_1e8 = pFVar33->NamePrivate;
            FVar22.Value = local_1e8.ComparisonIndex.Value;
            EVar15 = local_1e8.Number;
          }
          else {
            local_1e8.ComparisonIndex.Value = 0;
            local_1e8.Number = 0;
            FVar22.Value = EVar32;
            EVar15 = EVar32;
          }
          FVar9 = local_1e8;
          local_1e0.ParameterName = local_1e8;
          local_1e0.ParameterType = EVar27;
          uVar13 = ::GetTypeHash(FVar22);
          TVar11 = local_1e0.OverrideVariable.field0_0x0;
          if (local_88._8_4_ != local_54) {
            FVar24 = (ForElementType<FSetElementId>)local_50;
            if (local_48 != (ForElementType<FSetElementId>)0x0) {
              FVar24 = local_48;
            }
            for (uVar13 = *(uint *)((longlong)FVar24 +
                                   (ulonglong)(local_40 - 1U & uVar13 + EVar15) * 4);
                uVar13 != 0xffffffff;
                uVar13 = *(uint *)(local_88._0_8_ + (longlong)(int)uVar13 * 0x18 + 0x10)) {
              if (*(FName *)(local_88._0_8_ + (longlong)(int)uVar13 * 0x18) == FVar9) {
                if (uVar13 != 0xffffffff) {
                  lVar21 = (longlong)(int)uVar13 * 0x18;
                  TVar7 = (TObjectPtr<UCameraVariableAsset>_u_0)
                          ((TObjectPtr<UCameraVariableAsset>_u_0 *)(local_88._0_8_ + lVar21 + 8))->
                          DebugPtr;
                  if (((int)uVar13 < 0) || (local_60 <= (int)uVar13)) {
LAB_14d66fbc2:
                    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Elements.IsValidIndex(ElementIndex)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                        ,0x2ab,
                                        L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex"
                                       );
                    if (bVar12) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                  }
                  else {
                    FVar23 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
                    if (local_68 != (ForElementType<unsigned_int>)0x0) {
                      FVar23 = local_68;
                    }
                    uVar14 = uVar13;
                    if ((int)uVar13 < 0) {
                      uVar14 = uVar13 + 0x1f;
                    }
                    if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar14 >> 5) * 4) >>
                         (uVar13 & 0x1f) & 1) == 0) goto LAB_14d66fbc2;
                  }
                  uVar10 = local_88._0_8_;
                  FVar24 = (ForElementType<FSetElementId>)local_50;
                  if (local_48 != (ForElementType<FSetElementId>)0x0) {
                    FVar24 = local_48;
                  }
                  pFVar26 = (FScriptContainerElement *)
                            ((longlong)FVar24 +
                            (longlong)*(int *)(local_88._0_8_ + lVar21 + 0x14) * 4);
                  goto LAB_14d66fc10;
                }
                break;
              }
            }
          }
          goto LAB_14d66fca5;
        }
        if ((char)EVar6 < '\0') {
          EVar27 = Integer32;
          goto LAB_14d66fa9b;
        }
        if ((EVar6 >> 8 & 1) != 0) {
          EVar27 = Float;
          goto LAB_14d66fa9b;
        }
        if ((EVar6 >> 0x20 & 1) != 0) {
          EVar27 = Double;
          goto LAB_14d66fa9b;
        }
        if (((EVar6 >> 0x14 & 1) != 0) && (pFVar33 != (FField *)0x0)) {
          pUVar19 = TVariantStructure<UE::Math::TVector2<float>_>::Get();
          pUVar20 = (UScriptStruct *)pFVar33[2].Owner.Container.Field;
          if (pUVar20 == (UScriptStruct *)0x0) {
            bVar12 = pUVar19 == (UScriptStruct *)0x0;
          }
          else {
            bVar12 = pUVar20 == pUVar19;
          }
          if (bVar12) {
            EVar27 = Vector2f;
          }
          else {
            pUVar19 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
            pUVar20 = (UScriptStruct *)pFVar33[2].Owner.Container.Field;
            if (pUVar20 == (UScriptStruct *)0x0) {
              bVar12 = pUVar19 == (UScriptStruct *)0x0;
            }
            else {
              bVar12 = pUVar20 == pUVar19;
            }
            if (bVar12) {
              EVar27 = Vector2d;
            }
            else {
              pUVar19 = TVariantStructure<UE::Math::TVector<float>_>::Get();
              pUVar20 = (UScriptStruct *)pFVar33[2].Owner.Container.Field;
              if (pUVar20 == (UScriptStruct *)0x0) {
                bVar12 = pUVar19 == (UScriptStruct *)0x0;
              }
              else {
                bVar12 = pUVar20 == pUVar19;
              }
              if (bVar12) {
                EVar27 = Vector3f;
              }
              else {
                pUVar19 = TBaseStructure<UE::Math::TVector<double>_>::Get();
                pUVar20 = (UScriptStruct *)pFVar33[2].Owner.Container.Field;
                if (pUVar20 == (UScriptStruct *)0x0) {
                  bVar12 = pUVar19 == (UScriptStruct *)0x0;
                }
                else {
                  bVar12 = pUVar20 == pUVar19;
                }
                if (bVar12) {
                  EVar27 = Vector3d;
                }
                else {
                  pUVar19 = TVariantStructure<UE::Math::TVector4<float>_>::Get();
                  pUVar20 = (UScriptStruct *)pFVar33[2].Owner.Container.Field;
                  if (pUVar20 == (UScriptStruct *)0x0) {
                    bVar12 = pUVar19 == (UScriptStruct *)0x0;
                  }
                  else {
                    bVar12 = pUVar20 == pUVar19;
                  }
                  if (bVar12) {
                    EVar27 = Vector4f;
                  }
                  else {
                    pUVar19 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
                    pUVar20 = (UScriptStruct *)pFVar33[2].Owner.Container.Field;
                    if (pUVar20 == (UScriptStruct *)0x0) {
                      bVar12 = pUVar19 == (UScriptStruct *)0x0;
                    }
                    else {
                      bVar12 = pUVar20 == pUVar19;
                    }
                    if (bVar12) {
                      EVar27 = Vector4d;
                    }
                    else {
                      pUVar19 = TVariantStructure<UE::Math::TRotator<float>_>::Get();
                      pUVar20 = (UScriptStruct *)pFVar33[2].Owner.Container.Field;
                      if (pUVar20 == (UScriptStruct *)0x0) {
                        bVar12 = pUVar19 == (UScriptStruct *)0x0;
                      }
                      else {
                        bVar12 = pUVar20 == pUVar19;
                      }
                      if (bVar12) {
                        EVar27 = Rotator3f;
                      }
                      else {
                        pUVar19 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
                        pUVar20 = (UScriptStruct *)pFVar33[2].Owner.Container.Field;
                        if (pUVar20 == (UScriptStruct *)0x0) {
                          bVar12 = pUVar19 == (UScriptStruct *)0x0;
                        }
                        else {
                          bVar12 = pUVar20 == pUVar19;
                        }
                        if (bVar12) {
                          EVar27 = Rotator3d;
                        }
                        else {
                          pUVar19 = TVariantStructure<UE::Math::TTransform<float>_>::Get();
                          pUVar20 = (UScriptStruct *)pFVar33[2].Owner.Container.Field;
                          if (pUVar20 == (UScriptStruct *)0x0) {
                            bVar12 = pUVar19 == (UScriptStruct *)0x0;
                          }
                          else {
                            bVar12 = pUVar20 == pUVar19;
                          }
                          if (bVar12) {
                            EVar27 = Transform3f;
                          }
                          else {
                            pUVar20 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
                            TVar28 = (TObjectPtr<UObject_const_>_u_0)
                                     pFVar33[2].Owner.Container.Object;
                            if ((UScriptStruct *)TVar28.DebugPtr == (UScriptStruct *)0x0) {
                              bVar12 = pUVar20 == (UScriptStruct *)0x0;
                            }
                            else {
                              bVar12 = (UScriptStruct *)TVar28.DebugPtr == pUVar20;
                            }
                            if (!bVar12) {
                              EVar29 = Struct;
                              goto LAB_14d66ffd0;
                            }
                            EVar27 = Transform3d;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_14d66fa9b;
        }
        if ((EVar6 >> 0xd & 1) == 0) {
          if ((EVar6 >> 0xe & 1) == 0) {
            if (((EVar6 >> 0x30 & 1) == 0) || (pFVar33 == (FField *)0x0)) {
              if (((EVar6 >> 10 & 1) == 0) || (pFVar33 == (FField *)0x0)) {
                if (((EVar6 >> 0x10 & 1) == 0) || (pFVar33 == (FField *)0x0)) {
                  if (2 < (byte)LogCameraSystem._0_1_) {
                    local_178 = *(FName *)(((pUVar35->CameraNodeEvaluatorTemplate).field0_0x0.
                                           DebugPtr)->_padding_ + 0x18);
                    ::FName::ToString(&local_178,&local_170);
                    bVar12 = IsThisNotNull(pFVar33,"FField::GetName");
                    if (bVar12) {
                      ::FName::ToString(&pFVar33->NamePrivate,&local_1a0);
                    }
                    else {
                      ::FString::FString(&local_1a0,L"None");
                    }
                    UE::Logging::Private::BasicLog<3>
                              ((FStaticBasicLogRecord *)&PTR_u_Property___s__o_152ba2c20,
                               (FLogCategoryBase *)&LogCameraSystem);
                    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
                    }
                    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_170.Data.AllocatorInstance.Data);
                    }
                  }
                  goto LAB_14d670359;
                }
                TVar28 = (TObjectPtr<UObject_const_>_u_0)pFVar33[2].Owner.Container.Object;
                EVar29 = Object;
              }
              else {
                TVar28 = (TObjectPtr<UObject_const_>_u_0)pFVar33[2].Next;
                EVar29 = Class;
              }
            }
            else {
              TVar28 = (TObjectPtr<UObject_const_>_u_0)pFVar33[2].Next;
              EVar29 = Enum;
            }
          }
          else {
            EVar29 = String;
          }
        }
        else {
          EVar29 = Name;
          TVar28.DebugPtr = (UObject *)0x0;
        }
LAB_14d66ffd0:
        local_208.ParameterName.ComparisonIndex.Value = 0;
        local_208.ParameterName.Number = 0;
        local_208.ParameterType = Name;
        local_208.ParameterContainerType = None;
        local_208.ParameterTypeObject.field0_0x0.DebugPtr = (TObjectPtr<UObject_const_>_u_0)0x0;
        local_208.OverrideDataID.Value = 0xffffffff;
        bVar12 = IsThisNotNull(pFVar33,"FField::GetFName");
        if (bVar12) {
          local_1b8 = pFVar33->NamePrivate;
        }
        else {
          local_1b8.ComparisonIndex.Value = 0;
          local_1b8.Number = 0;
        }
        local_208.ParameterType = EVar29;
        local_208.ParameterName = local_1b8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UScriptStruct *)TVar28.DebugPtr != (UScriptStruct *)0x0)) {
          UE::GC::MarkAsReachable(TVar28.DebugPtr);
        }
        FVar9 = local_208.ParameterName;
        local_208.ParameterTypeObject.field0_0x0 = TVar28;
        local_1b0 = local_208.ParameterName;
        uVar13 = ::GetTypeHash(local_208.ParameterName.ComparisonIndex.Value);
        if (local_128._8_4_ != local_f4) {
          FVar24 = (ForElementType<FSetElementId>)local_f0;
          if (local_e8 != (ForElementType<FSetElementId>)0x0) {
            FVar24 = local_e8;
          }
          for (uVar13 = *(uint *)((longlong)FVar24 +
                                 (ulonglong)(local_e0 - 1U & local_1b0.Number + uVar13) * 4);
              uVar13 != 0xffffffff;
              uVar13 = *(uint *)(local_128._0_8_ + (longlong)(int)uVar13 * 0x14 + 0xc)) {
            if (*(FName *)(local_128._0_8_ + (longlong)(int)uVar13 * 0x14) == FVar9) {
              if (uVar13 != 0xffffffff) {
                lVar21 = (longlong)(int)uVar13 * 0x14;
                uVar14 = *(uint *)(local_128._0_8_ + lVar21 + 8);
                if (((int)uVar13 < 0) || (local_100 <= (int)uVar13)) {
LAB_14d6700fb:
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Elements.IsValidIndex(ElementIndex)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                      ,0x2ab,
                                      L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex"
                                     );
                  if (bVar12) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                else {
                  FVar23 = (ForElementType<unsigned_int>)((longlong)local_128 + 0x10);
                  if (local_108 != (ForElementType<unsigned_int>)0x0) {
                    FVar23 = local_108;
                  }
                  uVar16 = uVar13;
                  if ((int)uVar13 < 0) {
                    uVar16 = uVar13 + 0x1f;
                  }
                  if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar16 >> 5) * 4) >>
                       (uVar13 & 0x1f) & 1) == 0) goto LAB_14d6700fb;
                }
                uVar10 = local_128._0_8_;
                FVar24 = (ForElementType<FSetElementId>)local_f0;
                if (local_e8 != (ForElementType<FSetElementId>)0x0) {
                  FVar24 = local_e8;
                }
                pFVar26 = (FScriptContainerElement *)
                          ((longlong)FVar24 +
                          (longlong)*(int *)(local_128._0_8_ + lVar21 + 0x10) * 4);
                goto LAB_14d670145;
              }
              break;
            }
          }
        }
        goto LAB_14d6701b5;
      }
      goto LAB_14d670359;
    }
LAB_14d670378:
    FVar34.Data = local_230.Data;
    FVar31.Data = local_240.Data;
    iVar17 = (int)local_238;
    iVar25 = (int)local_228;
    if ((((int)local_238 != (this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayNum) ||
        (bVar12 = CompareItems<FCustomCameraNodeBlendableParameter,int>
                            ((FCustomCameraNodeBlendableParameter *)local_240.Data,
                             (FCustomCameraNodeBlendableParameter *)
                             (pFVar1->BlendableParameters).AllocatorInstance.Data,(int)local_238),
        !bVar12)) ||
       ((iVar25 != (this->CameraNodeEvaluatorOverrides).DataParameters.ArrayNum ||
        (bVar12 = CompareItems<FCustomCameraNodeDataParameter,int>
                            ((FCustomCameraNodeDataParameter *)FVar34.Data,
                             (FCustomCameraNodeDataParameter *)
                             (this->CameraNodeEvaluatorOverrides).DataParameters.AllocatorInstance.
                             Data,iVar25), !bVar12)))) {
      if (pFVar1 != (FCustomCameraNodeParameters *)&local_240) {
        iVar5 = (this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayMax;
        piVar3 = &(this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayMax;
        (this->CameraNodeEvaluatorOverrides).BlendableParameters.ArrayNum = iVar17;
        if ((iVar17 == 0) && (iVar5 == 0)) {
          *piVar3 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar17,iVar5,(ForAnyElementType *)pFVar1,iVar17,piVar3);
          ConstructItems<FCustomCameraNodeBlendableParameter,FCustomCameraNodeBlendableParameter,int>
                    ((pFVar1->BlendableParameters).AllocatorInstance.Data,
                     (FCustomCameraNodeBlendableParameter *)FVar31.Data,iVar17);
          FVar31.Data = local_240.Data;
          FVar34.Data = local_230.Data;
          iVar25 = (int)local_228;
        }
      }
      pTVar4 = &(this->CameraNodeEvaluatorOverrides).DataParameters;
      if (pTVar4 != (TArray<FCustomCameraNodeDataParameter,TSizedDefaultAllocator<32>_> *)&local_230
         ) {
        iVar17 = (this->CameraNodeEvaluatorOverrides).DataParameters.ArrayMax;
        piVar3 = &(this->CameraNodeEvaluatorOverrides).DataParameters.ArrayMax;
        (this->CameraNodeEvaluatorOverrides).DataParameters.ArrayNum = iVar25;
        if ((iVar25 == 0) && (iVar17 == 0)) {
          *piVar3 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar25,iVar17,&pTVar4->AllocatorInstance,iVar25,piVar3);
          ConstructItems<FCustomCameraNodeDataParameter,FCustomCameraNodeDataParameter,int>
                    ((pTVar4->AllocatorInstance).Data,(FCustomCameraNodeDataParameter *)FVar34.Data,
                     iVar25);
          FVar31.Data = local_240.Data;
          FVar34.Data = local_230.Data;
        }
      }
    }
    if ((FCustomCameraNodeDataParameter *)FVar34.Data != (FCustomCameraNodeDataParameter *)0x0) {
      FMemory::Free(FVar34.Data);
      FVar31.Data = local_240.Data;
    }
    if ((FCustomCameraNodeBlendableParameter *)FVar31.Data !=
        (FCustomCameraNodeBlendableParameter *)0x0) {
      FMemory::Free(FVar31.Data);
    }
    local_e0 = 0;
    if (local_e8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FCameraContextDataID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FCameraContextDataID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FCameraContextDataID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_128);
    local_90 = 0;
    if (local_98 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FCameraVariableID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FCameraVariableID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FCameraVariableID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_d8);
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UCameraVariableAsset_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UCameraVariableAsset_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UCameraVariableAsset_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
  }
  return;
LAB_14d66fc10:
  uVar14 = *(uint *)pFVar26;
  if (uVar14 == 0xffffffff) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("NextElementIndex != INDEX_NONE",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                        ,0x2b5,L"Corrupt hash");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else if (uVar14 == uVar13) goto LAB_14d66fc59;
  pFVar26 = (FScriptContainerElement *)(local_88._0_8_ + (longlong)(int)uVar14 * 0x18 + 0x10);
  goto LAB_14d66fc10;
LAB_14d66fc59:
  *(uint *)pFVar26 = *(uint *)(uVar10 + lVar21 + 0x10);
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88,uVar13,1);
  pFVar33 = local_220.Field;
  pUVar35 = local_1a8;
  TVar11 = local_1e0.OverrideVariable.field0_0x0;
  if (((TVar7.DebugPtr != (UCameraVariableAsset *)0x0) &&
      (EVar15 = (**(code **)((TVar7.DebugPtr)->_padding_ + 0x2b0))(TVar7.DebugPtr),
      pFVar33 = local_220.Field, pUVar35 = local_1a8, TVar11 = local_1e0.OverrideVariable.field0_0x0
      , EVar15 == EVar27)) && (TVar11 = TVar7, UE::GC::GIsIncrementalReachabilityPending != false))
  {
    UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
    pFVar33 = local_220.Field;
    pUVar35 = local_1a8;
  }
LAB_14d66fca5:
  local_1e0.OverrideVariable.field0_0x0 = TVar11;
  FVar9 = local_1e0.ParameterName;
  local_1b0 = local_1e0.ParameterName;
  uVar13 = ::GetTypeHash(local_1e0.ParameterName.ComparisonIndex.Value);
  if (local_d8._8_4_ != local_a4) {
    FVar24 = (ForElementType<FSetElementId>)local_a0;
    if (local_98 != (ForElementType<FSetElementId>)0x0) {
      FVar24 = local_98;
    }
    for (uVar13 = *(uint *)((longlong)FVar24 +
                           (ulonglong)(local_90 - 1U & local_1b0.Number + uVar13) * 4);
        uVar13 != 0xffffffff;
        uVar13 = *(uint *)(local_d8._0_8_ + (longlong)(int)uVar13 * 0x14 + 0xc)) {
      if (*(FName *)(local_d8._0_8_ + (longlong)(int)uVar13 * 0x14) == FVar9) {
        if (uVar13 != 0xffffffff) {
          lVar21 = (longlong)(int)uVar13 * 0x14;
          uVar14 = *(uint *)(local_d8._0_8_ + lVar21 + 8);
          if (((int)uVar13 < 0) || (local_b0 <= (int)uVar13)) {
LAB_14d66fd81:
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Elements.IsValidIndex(ElementIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                ,0x2ab,
                                L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          else {
            FVar23 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
            if (local_b8 != (ForElementType<unsigned_int>)0x0) {
              FVar23 = local_b8;
            }
            uVar16 = uVar13;
            if ((int)uVar13 < 0) {
              uVar16 = uVar13 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar16 >> 5) * 4) >> (uVar13 & 0x1f) &
                1) == 0) goto LAB_14d66fd81;
          }
          uVar10 = local_d8._0_8_;
          FVar24 = (ForElementType<FSetElementId>)local_a0;
          if (local_98 != (ForElementType<FSetElementId>)0x0) {
            FVar24 = local_98;
          }
          pFVar26 = (FScriptContainerElement *)
                    ((longlong)FVar24 + (longlong)*(int *)(local_d8._0_8_ + lVar21 + 0x10) * 4);
          goto LAB_14d66fdd0;
        }
        break;
      }
    }
  }
LAB_14d66fe46:
  if (((local_240.Data <= &local_1e0) &&
      (&local_1e0 <
       (FCustomCameraNodeBlendableParameter *)(local_240.Data + (longlong)local_238._4_4_ * 0x28)))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar17 = (int)local_238;
  if ((int)local_238 == local_238._4_4_) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&local_240,(int *)((longlong)&local_238 + 4));
  }
  FVar31.Data = local_240.Data;
  lVar21 = (longlong)iVar17;
  local_238 = CONCAT44(local_238._4_4_,iVar17 + 1);
  *(FName *)&local_240.Data[lVar21 * 0x28].field_0x0 = local_1e0.ParameterName;
  *(ECameraVariableType *)(local_240.Data + lVar21 * 0x28 + 8) = local_1e0.ParameterType;
  ((TObjectPtr<UScriptStruct_const_>_u_0 *)(local_240.Data + lVar21 * 0x28 + 0x10))->DebugPtr =
       (UScriptStruct *)local_1e0.BlendableStructType.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1e0.BlendableStructType.field0_0x0.DebugPtr != (TObjectPtr<UScriptStruct_const_>_u_0)0x0
     )) {
    UE::GC::MarkAsReachable((UObject *)local_1e0.BlendableStructType.field0_0x0);
  }
  *(uint *)&FVar31.Data[lVar21 * 0x28 + 0x18].field_0x0 = local_1e0.OverrideVariableID.Value;
  ((TObjectPtr<UCameraVariableAsset>_u_0 *)(FVar31.Data + lVar21 * 0x28 + 0x20))->DebugPtr =
       (UCameraVariableAsset *)local_1e0.OverrideVariable.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1e0.OverrideVariable.field0_0x0.DebugPtr != (TObjectPtr<UCameraVariableAsset>_u_0)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_1e0.OverrideVariable.field0_0x0);
  }
LAB_14d670359:
  local_220.Field = pFVar33->Next;
  TFieldIterator<FProperty>::IterateToNext(&local_220);
  if (local_220.Field == (FField *)0x0) goto LAB_14d670378;
  goto LAB_14d66f880;
LAB_14d66fdd0:
  uVar16 = *(uint *)pFVar26;
  if (uVar16 == 0xffffffff) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("NextElementIndex != INDEX_NONE",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                        ,0x2b5,L"Corrupt hash");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else if (uVar16 == uVar13) goto LAB_14d66fe1c;
  pFVar26 = (FScriptContainerElement *)(local_d8._0_8_ + ((longlong)(int)uVar16 * 5 + 3) * 4);
  goto LAB_14d66fdd0;
LAB_14d66fe1c:
  *(uint *)pFVar26 = *(uint *)(uVar10 + lVar21 + 0xc);
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8,uVar13,1);
  pFVar33 = local_220.Field;
  if (uVar14 != 0xffffffff) {
    local_1e0.OverrideVariableID.Value = uVar14;
  }
  goto LAB_14d66fe46;
LAB_14d670145:
  uVar16 = *(uint *)pFVar26;
  if (uVar16 == 0xffffffff) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("NextElementIndex != INDEX_NONE",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                        ,0x2b5,L"Corrupt hash");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else if (uVar16 == uVar13) goto LAB_14d67018e;
  pFVar26 = (FScriptContainerElement *)(local_128._0_8_ + ((longlong)(int)uVar16 * 5 + 3) * 4);
  goto LAB_14d670145;
LAB_14d67018e:
  *(uint *)pFVar26 = *(uint *)(uVar10 + lVar21 + 0xc);
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_128,uVar13,1);
  pFVar33 = local_220.Field;
  if (uVar14 != 0xffffffff) {
    local_208.OverrideDataID.Value = uVar14;
  }
LAB_14d6701b5:
  if (((local_230.Data <= &local_208) &&
      (&local_208 <
       (FCustomCameraNodeDataParameter *)(local_230.Data + (longlong)local_228._4_4_ * 0x20))) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar17 = (int)local_228;
  if ((int)local_228 == local_228._4_4_) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&local_230,(int *)((longlong)&local_228 + 4));
  }
  local_228 = CONCAT44(local_228._4_4_,iVar17 + 1);
  pFVar26 = local_230.Data + (longlong)iVar17 * 0x20;
  *(FName *)&pFVar26->field_0x0 = local_208.ParameterName;
  *(ECameraContextDataType *)(pFVar26 + 8) = local_208.ParameterType;
  *(ECameraContextDataContainerType *)(pFVar26 + 0xc) = local_208.ParameterContainerType;
  *(TObjectPtr<UObject_const_>_u_0 *)(pFVar26 + 0x10) = local_208.ParameterTypeObject.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_208.ParameterTypeObject.field0_0x0.DebugPtr != (TObjectPtr<UObject_const_>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_208.ParameterTypeObject.field0_0x0);
  }
  *(uint *)(pFVar26 + 0x18) = local_208.OverrideDataID.Value;
  goto LAB_14d670359;
}

// StaticRegisterNativesUBlueprintCameraNode @ 14d6732d0

void __cdecl UBlueprintCameraNode::StaticRegisterNativesUBlueprintCameraNode(void)

{
  return;
}

// _getUObject @ 14d676460

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UObject * __thiscall UBlueprintCameraNode::_getUObject(UBlueprintCameraNode *this)

{
  return (UObject *)&this[-1].CameraNodeEvaluatorOverrides;
}

// _getUObject`adjustor{16}' @ 14d67646c

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UBlueprintCameraNode::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall UBlueprintCameraNode::_getUObject_adjustor_16__(UBlueprintCameraNode *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UBlueprintCameraNode *)
                       &this[-1].CameraNodeEvaluatorOverrides.DataParameters.ArrayNum);
  return (UObject *)pUVar1;
}

