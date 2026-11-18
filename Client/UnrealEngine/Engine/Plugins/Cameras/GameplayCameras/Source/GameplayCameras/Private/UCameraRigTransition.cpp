// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 10

// StaticClass @ 14d570890

UClass * __cdecl UCameraRigTransition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigTransition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigTransition",
               &Z_Registration_Info_UClass_UCameraRigTransition.InnerSingleton,
               StaticRegisterNativesUCameraRigTransition,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCameraRigTransition>,
               InternalVTableHelperCtorCaller<UCameraRigTransition>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigTransition.InnerSingleton;
}

// UCameraRigTransition @ 14d58f7d0

UCameraRigTransition * __thiscall
UCameraRigTransition::UCameraRigTransition(UCameraRigTransition *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->Conditions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Conditions).ArrayNum = 0;
  (this->Conditions).ArrayMax = 0;
  (this->Blend).field0_0x0.DebugPtr = (UBlendCameraNode *)0x0;
  this->InitialOrientation = None;
  this->bOverrideInitialOrientation = false;
  this->bAllowCameraRigMerging = false;
  return this;
}

// UCameraRigTransition @ 14d58f820

UCameraRigTransition * __thiscall
UCameraRigTransition::UCameraRigTransition(UCameraRigTransition *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->Conditions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Conditions).ArrayNum = 0;
  (this->Conditions).ArrayMax = 0;
  (this->Blend).field0_0x0.DebugPtr = (UBlendCameraNode *)0x0;
  this->InitialOrientation = None;
  this->bOverrideInitialOrientation = false;
  this->bAllowCameraRigMerging = false;
  return this;
}

// ~UCameraRigTransition @ 14d591cb0

void __thiscall UCameraRigTransition::~UCameraRigTransition(UCameraRigTransition *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  pFVar1 = (this->Conditions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IObjectTreeGraphObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AllConditionsMatch @ 14d599060

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UCameraRigTransition::AllConditionsMatch
          (UCameraRigTransition *this,FCameraRigTransitionConditionMatchParams *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->Conditions).AllocatorInstance.Data;
  iVar2 = (this->Conditions).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Conditions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UCameraRigTransitionCondition>_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    plVar3 = *(longlong **)pFVar5;
    if ((plVar3 != (longlong *)0x0) &&
       (cVar4 = (**(code **)(*plVar3 + 0x2b0))(plVar3,param_1), cVar4 == '\0')) {
      return false;
    }
    pFVar5 = pFVar5 + 8;
  }
  return true;
}

// Build @ 14d59afe0

void __thiscall
UCameraRigTransition::Build(UCameraRigTransition *this,FCameraObjectBuildContext *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UCameraNode *this_00;
  longlong *plVar3;
  FCameraBuildLog *pFVar4;
  FText *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FText local_28;
  
  this_00 = (UCameraNode *)(this->Blend).field0_0x0.DebugPtr;
  if (this_00 == (UCameraNode *)0x0) {
    pFVar4 = param_1->BuildLog;
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"CameraRigTransition",L"NullBlendError",
                        L"No blend defined on transition. To make a straight-cut transition, use the Pop blend."
                       );
    UE::Cameras::FCameraBuildLog::AddMessage(pFVar4,Error,(UObject *)this,pFVar5);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  else {
    UCameraNode::Build(this_00,param_1);
  }
  pFVar6 = (this->Conditions).AllocatorInstance.Data;
  iVar2 = (this->Conditions).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Conditions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UCameraRigTransitionCondition>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    plVar3 = *(longlong **)pFVar6;
    if (plVar3 == (longlong *)0x0) {
      pFVar4 = param_1->BuildLog;
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_28,L"CameraRigTransition",L"NullConditionError",
                          L"Found an invalid transition condition.");
      UE::Cameras::FCameraBuildLog::AddMessage(pFVar4,Error,(UObject *)this,pFVar5);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
      pFVar6 = pFVar6 + 8;
    }
    else {
      (**(code **)(*plVar3 + 0x2b8))(plVar3,param_1);
      pFVar6 = pFVar6 + 8;
    }
  }
  return;
}

// GetPrivateStaticClass @ 14d5a99a0

UClass * __cdecl UCameraRigTransition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigTransition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigTransition",
               &Z_Registration_Info_UClass_UCameraRigTransition.InnerSingleton,
               StaticRegisterNativesUCameraRigTransition,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCameraRigTransition>,
               InternalVTableHelperCtorCaller<UCameraRigTransition>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigTransition.InnerSingleton;
}

// PostLoad @ 14d5c4810

void __thiscall UCameraRigTransition::PostLoad(UCameraRigTransition *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UCameraRigTransition **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// StaticRegisterNativesUCameraRigTransition @ 14d5d0de0

void __cdecl UCameraRigTransition::StaticRegisterNativesUCameraRigTransition(void)

{
  return;
}

// _getUObject @ 14d5d7550

UObject * __thiscall UCameraRigTransition::_getUObject(UCameraRigTransition *this)

{
  return (UObject *)&this[-1]._padding_;
}

