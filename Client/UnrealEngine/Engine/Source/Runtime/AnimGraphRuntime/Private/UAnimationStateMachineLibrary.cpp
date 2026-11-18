// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 29

// StaticClass @ 1463eca90

UClass * __cdecl UAnimationStateMachineLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationStateMachineLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"AnimationStateMachineLibrary",
               &Z_Registration_Info_UClass_UAnimationStateMachineLibrary.InnerSingleton,
               StaticRegisterNativesUAnimationStateMachineLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationStateMachineLibrary>,
               InternalVTableHelperCtorCaller<UAnimationStateMachineLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationStateMachineLibrary.InnerSingleton;
}

// UAnimationStateMachineLibrary @ 146407740

UAnimationStateMachineLibrary * __thiscall
UAnimationStateMachineLibrary::UAnimationStateMachineLibrary
          (UAnimationStateMachineLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimationStateMachineLibrary__6B_;
  return this;
}

// UAnimationStateMachineLibrary @ 146407770

UAnimationStateMachineLibrary * __thiscall
UAnimationStateMachineLibrary::UAnimationStateMachineLibrary
          (UAnimationStateMachineLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimationStateMachineLibrary__6B_;
  return this;
}

// ~UAnimationStateMachineLibrary @ 1464096f0

void __thiscall
UAnimationStateMachineLibrary::~UAnimationStateMachineLibrary(UAnimationStateMachineLibrary *this)

{
  *(undefined ***)this = &___7UAnimationStateMachineLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14640e590

void __thiscall
`UAnimationStateMachineLibrary::GetRelevantAnimTimeRemaining'::__l2::<lambda_1>::operator()
          (void *this,FAnimNode_StateResult *param_1)

{
  int iVar1;
  FAnimInstanceProxy *this_00;
  float *pfVar2;
  int iVar3;
  FAnimationUpdateContext *this_01;
  IAnimClassInterface *pIVar4;
  longlong lVar5;
  FAnimNode_StateMachine *this_02;
  float fVar6;
  
  this_01 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)this);
  if (this_01 != (FAnimationUpdateContext *)0x0) {
    pIVar4 = FAnimationBaseContext::GetAnimClass((FAnimationBaseContext *)this_01);
    lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4);
    iVar1 = *(int *)(lVar5 + 8);
    lVar5 = this_01->_padding_;
    iVar3 = FAnimNode_StateResult::GetStateIndex(param_1);
    this_00 = (FAnimInstanceProxy *)this_01->_padding_;
    this_02 = FAnimInstanceProxy::GetStateMachineInstance(this_00,(iVar1 - (int)lVar5) + -1);
    if (this_02 != (FAnimNode_StateMachine *)0x0) {
      pfVar2 = *(float **)((longlong)this + 8);
      fVar6 = FAnimNode_StateMachine::GetRelevantAnimTimeRemaining(this_02,this_00,iVar3);
      *pfVar2 = fVar6;
    }
  }
  return;
}

// operator() @ 14640e620

void __thiscall
`UAnimationStateMachineLibrary::GetRelevantAnimTimeRemainingFraction'::__l2::<lambda_1>::operator()
          (void *this,FAnimNode_StateResult *param_1)

{
  int iVar1;
  FAnimInstanceProxy *this_00;
  float *pfVar2;
  int iVar3;
  FAnimationUpdateContext *this_01;
  IAnimClassInterface *pIVar4;
  longlong lVar5;
  FAnimNode_StateMachine *this_02;
  float fVar6;
  
  this_01 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)this);
  if (this_01 != (FAnimationUpdateContext *)0x0) {
    pIVar4 = FAnimationBaseContext::GetAnimClass((FAnimationBaseContext *)this_01);
    lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4);
    iVar1 = *(int *)(lVar5 + 8);
    lVar5 = this_01->_padding_;
    iVar3 = FAnimNode_StateResult::GetStateIndex(param_1);
    this_00 = (FAnimInstanceProxy *)this_01->_padding_;
    this_02 = FAnimInstanceProxy::GetStateMachineInstance(this_00,(iVar1 - (int)lVar5) + -1);
    if (this_02 != (FAnimNode_StateMachine *)0x0) {
      pfVar2 = *(float **)((longlong)this + 8);
      fVar6 = FAnimNode_StateMachine::GetRelevantAnimTimeRemainingFraction(this_02,this_00,iVar3);
      *pfVar2 = fVar6;
    }
  }
  return;
}

// operator() @ 14640e6b0

void __thiscall
`UAnimationStateMachineLibrary::IsStateBlendingIn'::__l2::<lambda_1>::operator()
          (void *this,FAnimNode_StateResult *param_1)

{
  int iVar1;
  FAnimInstanceProxy *this_00;
  int iVar2;
  FAnimationUpdateContext *this_01;
  IAnimClassInterface *pIVar3;
  longlong lVar4;
  FAnimNode_StateMachine *pFVar5;
  float fVar6;
  
  this_01 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)this);
  if (this_01 != (FAnimationUpdateContext *)0x0) {
    pIVar3 = FAnimationBaseContext::GetAnimClass((FAnimationBaseContext *)this_01);
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3);
    iVar1 = *(int *)(lVar4 + 8);
    lVar4 = this_01->_padding_;
    iVar2 = FAnimNode_StateResult::GetStateIndex(param_1);
    this_00 = (FAnimInstanceProxy *)this_01->_padding_;
    pFVar5 = FAnimInstanceProxy::GetStateMachineInstance(this_00,(iVar1 - (int)lVar4) + -1);
    if (pFVar5 != (FAnimNode_StateMachine *)0x0) {
      iVar1 = pFVar5->CurrentState;
      fVar6 = FAnimInstanceProxy::GetRecordedStateWeight
                        (this_00,pFVar5->StateMachineIndexInClass,iVar2);
      if ((fVar6 < __real_3f800000) && (iVar1 == iVar2)) {
        **(undefined1 **)((longlong)this + 8) = 1;
      }
    }
  }
  return;
}

// operator() @ 14640e750

void __thiscall
`UAnimationStateMachineLibrary::IsStateBlendingOut'::__l2::<lambda_1>::operator()
          (void *this,FAnimNode_StateResult *param_1)

{
  int iVar1;
  FAnimInstanceProxy *this_00;
  int iVar2;
  FAnimationUpdateContext *this_01;
  IAnimClassInterface *pIVar3;
  longlong lVar4;
  FAnimNode_StateMachine *pFVar5;
  float fVar6;
  
  this_01 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)this);
  if (this_01 != (FAnimationUpdateContext *)0x0) {
    pIVar3 = FAnimationBaseContext::GetAnimClass((FAnimationBaseContext *)this_01);
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3);
    iVar1 = *(int *)(lVar4 + 8);
    lVar4 = this_01->_padding_;
    iVar2 = FAnimNode_StateResult::GetStateIndex(param_1);
    this_00 = (FAnimInstanceProxy *)this_01->_padding_;
    pFVar5 = FAnimInstanceProxy::GetStateMachineInstance(this_00,(iVar1 - (int)lVar4) + -1);
    if (pFVar5 != (FAnimNode_StateMachine *)0x0) {
      iVar1 = pFVar5->CurrentState;
      fVar6 = FAnimInstanceProxy::GetRecordedStateWeight
                        (this_00,pFVar5->StateMachineIndexInClass,iVar2);
      if ((0.0 < fVar6) && (iVar1 != iVar2)) {
        **(undefined1 **)((longlong)this + 8) = 1;
      }
    }
  }
  return;
}

// operator() @ 14640f0c0

void __thiscall
`UAnimationStateMachineLibrary::SetState'::__l2::<lambda_1>::operator()
          (void *this,FAnimNode_StateMachine *param_1)

{
  int iVar1;
  TObjectPtr<UCurveFloat>_u_0 TVar2;
  TObjectPtr<UBlendProfile>_u_0 TVar3;
  FAnimationUpdateContext *pFVar4;
  FAnimationTransitionBetweenStates local_48;
  
  pFVar4 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)this);
  if (pFVar4 != (FAnimationUpdateContext *)0x0) {
    iVar1 = param_1->CurrentState;
    local_48.NextState =
         FAnimNode_StateMachine::GetStateIndex(param_1,*(FName *)((longlong)this + 8));
    if ((iVar1 != -1) && (local_48.NextState != -1)) {
      local_48.bAllowInertializationForSelfTransitions = '\0';
      local_48.CrossfadeDuration = *(float *)((longlong)this + 0x10);
      local_48.BlendMode = *(EAlphaBlendOption *)((longlong)this + 0x20);
      TVar2 = (TObjectPtr<UCurveFloat>_u_0)
              ((TObjectPtr<UCurveFloat>_u_0 *)((longlong)this + 0x28))->DebugPtr;
      local_48._padding_ = 0;
      local_48.MinTimeBeforeReentry = -1.0;
      local_48.StartNotify = -1;
      local_48.EndNotify = -1;
      local_48.InterruptNotify = -1;
      local_48.PreviousState = iVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.DebugPtr != (UCurveFloat *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      TVar3 = (TObjectPtr<UBlendProfile>_u_0)
              ((TObjectPtr<UBlendProfile>_u_0 *)((longlong)this + 0x18))->DebugPtr;
      local_48.CustomCurve.field0_0x0 = TVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.DebugPtr != (UBlendProfile *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
      }
      local_48.LogicType.Value = *(uchar *)((longlong)this + 0x14);
      local_48.BlendProfile.field0_0x0 = TVar3;
      FAnimNode_StateMachine::TransitionToState
                (param_1,pFVar4,&local_48,(FAnimationPotentialTransition *)0x0);
    }
  }
  return;
}

// ConvertToAnimationStateMachine @ 146421610

void __cdecl
UAnimationStateMachineLibrary::ConvertToAnimationStateMachine
          (FAnimNodeReference *param_1,FAnimationStateMachineReference *param_2,
          EAnimNodeReferenceConversionResult *param_3)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  FAnimNode_Base *pFVar4;
  UScriptStruct *pUVar5;
  
  pUVar5 = param_1->AnimNodeStruct;
  if (pUVar5 != (UScriptStruct *)0x0) {
    pUVar3 = FAnimNode_StateMachine::StaticStruct();
    if (pUVar3 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar5->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        *param_3 = Succeeded;
        pFVar4 = param_1->AnimNode;
        pUVar5 = param_1->AnimNodeStruct;
        goto LAB_146421686;
      }
    }
  }
  *param_3 = Failed;
  pFVar4 = (FAnimNode_Base *)0x0;
  pUVar5 = (UScriptStruct *)0x0;
LAB_146421686:
  *(FAnimNode_Base **)param_2 = pFVar4;
  *(UScriptStruct **)&param_2->field_0x8 = pUVar5;
  return;
}

// ConvertToAnimationStateResult @ 1464216b0

void __cdecl
UAnimationStateMachineLibrary::ConvertToAnimationStateResult
          (FAnimNodeReference *param_1,FAnimationStateResultReference *param_2,
          EAnimNodeReferenceConversionResult *param_3)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  FAnimNode_Base *pFVar4;
  UScriptStruct *pUVar5;
  
  pUVar5 = param_1->AnimNodeStruct;
  if (pUVar5 != (UScriptStruct *)0x0) {
    pUVar3 = FAnimNode_StateResult::StaticStruct();
    if (pUVar3 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar5->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        *param_3 = Succeeded;
        pFVar4 = param_1->AnimNode;
        pUVar5 = param_1->AnimNodeStruct;
        goto LAB_146421726;
      }
    }
  }
  *param_3 = Failed;
  pFVar4 = (FAnimNode_Base *)0x0;
  pUVar5 = (UScriptStruct *)0x0;
LAB_146421726:
  *(FAnimNode_Base **)param_2 = pFVar4;
  *(UScriptStruct **)&param_2->field_0x8 = pUVar5;
  return;
}

// GetPrivateStaticClass @ 14644cfa0

UClass * __cdecl UAnimationStateMachineLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationStateMachineLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"AnimationStateMachineLibrary",
               &Z_Registration_Info_UClass_UAnimationStateMachineLibrary.InnerSingleton,
               StaticRegisterNativesUAnimationStateMachineLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationStateMachineLibrary>,
               InternalVTableHelperCtorCaller<UAnimationStateMachineLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationStateMachineLibrary.InnerSingleton;
}

// GetRelevantAnimTimeRemaining @ 14644e880

/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl
UAnimationStateMachineLibrary::GetRelevantAnimTimeRemaining
          (FAnimUpdateContext *param_1,FAnimationStateResultReference *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  float local_res8 [2];
  FAnimUpdateContext *local_18;
  float *local_10;
  
  local_10 = local_res8;
  local_res8[0] = __real_7f7fffff;
  local_18 = param_1;
  if (((*(longlong *)param_2 != 0) && (lVar2 = *(longlong *)&param_2->field_0x8, lVar2 != 0)) &&
     (pUVar4 = FAnimNode_StateResult::StaticStruct(), pUVar4 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(FAnimNode_StateResult **)param_2 != (FAnimNode_StateResult *)0x0)) {
      `UAnimationStateMachineLibrary::GetRelevantAnimTimeRemaining'::__l2::<lambda_1>::operator()
                (&local_18,*(FAnimNode_StateResult **)param_2);
      return local_res8[0];
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_StateResult>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_StateResult&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return local_res8[0];
}

// GetRelevantAnimTimeRemainingFraction @ 14644e950

/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl
UAnimationStateMachineLibrary::GetRelevantAnimTimeRemainingFraction
          (FAnimUpdateContext *param_1,FAnimationStateResultReference *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  float local_res8 [2];
  FAnimUpdateContext *local_18;
  float *local_10;
  
  local_10 = local_res8;
  local_res8[0] = __real_3f800000;
  local_18 = param_1;
  if (((*(longlong *)param_2 != 0) && (lVar2 = *(longlong *)&param_2->field_0x8, lVar2 != 0)) &&
     (pUVar4 = FAnimNode_StateResult::StaticStruct(), pUVar4 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(FAnimNode_StateResult **)param_2 != (FAnimNode_StateResult *)0x0)) {
      `UAnimationStateMachineLibrary::GetRelevantAnimTimeRemainingFraction'::__l2::<lambda_1>::
      operator()(&local_18,*(FAnimNode_StateResult **)param_2);
      return local_res8[0];
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_StateResult>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_StateResult&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return local_res8[0];
}

// GetState @ 14644fa00

/* WARNING: Enum "Type": Some values do not have unique names */

FName __cdecl
UAnimationStateMachineLibrary::GetState
          (FAnimUpdateContext *param_1,FAnimationStateMachineReference *param_2)

{
  int iVar1;
  longlong lVar2;
  FAnimNode_StateMachine *this;
  bool bVar3;
  uint uVar4;
  UScriptStruct *pUVar5;
  FAnimationUpdateContext *pFVar6;
  FBakedAnimationState *pFVar7;
  longlong *in_R8;
  
  *(undefined8 *)param_1 = 0;
  if (((*in_R8 != 0) && (lVar2 = in_R8[1], lVar2 != 0)) &&
     (pUVar5 = FAnimNode_StateMachine::StaticStruct(), pUVar5 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (this = (FAnimNode_StateMachine *)*in_R8, this != (FAnimNode_StateMachine *)0x0))
    {
      pFVar6 = FAnimUpdateContext::GetContext((FAnimUpdateContext *)param_2);
      if (pFVar6 == (FAnimationUpdateContext *)0x0) {
        return (FName)param_1;
      }
      pFVar7 = FAnimNode_StateMachine::GetStateInfo(this,this->CurrentState);
      uVar4 = (pFVar7->StateName).Number;
      *(uint *)&param_1->field_0x0 = (pFVar7->StateName).ComparisonIndex.Value;
      *(uint *)&param_1->field_0x4 = uVar4;
      return (FName)param_1;
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_StateMachine>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_StateMachine&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return (FName)param_1;
}

// IsStateBlendingIn @ 14645b2a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UAnimationStateMachineLibrary::IsStateBlendingIn
          (FAnimUpdateContext *param_1,FAnimationStateResultReference *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  undefined1 local_res8 [8];
  FAnimUpdateContext *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_res8[0] = 0;
  local_18 = param_1;
  if (((*(longlong *)param_2 != 0) && (lVar2 = *(longlong *)&param_2->field_0x8, lVar2 != 0)) &&
     (pUVar4 = FAnimNode_StateResult::StaticStruct(), pUVar4 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(FAnimNode_StateResult **)param_2 != (FAnimNode_StateResult *)0x0)) {
      `UAnimationStateMachineLibrary::IsStateBlendingIn'::__l2::<lambda_1>::operator()
                (&local_18,*(FAnimNode_StateResult **)param_2);
      return (bool)local_res8[0];
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_StateResult>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_StateResult&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return (bool)local_res8[0];
}

// IsStateBlendingOut @ 14645b360

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UAnimationStateMachineLibrary::IsStateBlendingOut
          (FAnimUpdateContext *param_1,FAnimationStateResultReference *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  undefined1 local_res8 [8];
  FAnimUpdateContext *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_res8[0] = 0;
  local_18 = param_1;
  if (((*(longlong *)param_2 != 0) && (lVar2 = *(longlong *)&param_2->field_0x8, lVar2 != 0)) &&
     (pUVar4 = FAnimNode_StateResult::StaticStruct(), pUVar4 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(FAnimNode_StateResult **)param_2 != (FAnimNode_StateResult *)0x0)) {
      `UAnimationStateMachineLibrary::IsStateBlendingOut'::__l2::<lambda_1>::operator()
                (&local_18,*(FAnimNode_StateResult **)param_2);
      return (bool)local_res8[0];
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_StateResult>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_StateResult&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return (bool)local_res8[0];
}

// SetState @ 14646b2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAnimationStateMachineLibrary::SetState
          (FAnimUpdateContext *param_1,FAnimationStateMachineReference *param_2,FName param_3,
          float param_4,TEnumAsByte<ETransitionLogicType::Type> param_5,UBlendProfile *param_6,
          EAlphaBlendOption param_7,UCurveFloat *param_8)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  FAnimUpdateContext *local_38;
  FName local_30;
  float local_28;
  uchar local_24;
  UBlendProfile *local_20;
  EAlphaBlendOption local_18;
  UCurveFloat *local_10;
  
  local_24 = param_5.Value;
  local_20 = param_6;
  local_18 = param_7;
  local_10 = param_8;
  local_38 = param_1;
  local_30 = param_3;
  local_28 = param_4;
  if ((*(longlong *)param_2 != 0) && (lVar2 = *(longlong *)&param_2->field_0x8, lVar2 != 0)) {
    pUVar4 = FAnimNode_StateMachine::StaticStruct();
    if (pUVar4 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (*(FAnimNode_StateMachine **)param_2 != (FAnimNode_StateMachine *)0x0)) {
        `UAnimationStateMachineLibrary::SetState'::__l2::<lambda_1>::operator()
                  (&local_38,*(FAnimNode_StateMachine **)param_2);
        return;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_StateMachine>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_StateMachine&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return;
}

// StaticRegisterNativesUAnimationStateMachineLibrary @ 14646e590

void __cdecl UAnimationStateMachineLibrary::StaticRegisterNativesUAnimationStateMachineLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UAnimationStateMachineLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConvertToAnimationStateMachine @ 14647e010

void __cdecl
UAnimationStateMachineLibrary::execConvertToAnimationStateMachine
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FAnimNodeReference *pFVar1;
  FAnimationStateMachineReference *pFVar2;
  FProperty *pFVar3;
  FAnimNodeReference *pFVar4;
  FAnimationStateMachineReference *pFVar5;
  EAnimNodeReferenceConversionResult *pEVar6;
  EAnimNodeReferenceConversionResult local_res10 [8];
  FAnimNodeReference local_28;
  FAnimationStateMachineReference local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar1 = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pFVar4 = &local_28;
  if (pFVar1 != (FAnimNodeReference *)0x0) {
    pFVar4 = pFVar1;
  }
  local_18._0_8_ = 0;
  local_18._8_8_ = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = (FAnimationStateMachineReference *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Failed;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_18;
  if (pFVar2 != (FAnimationStateMachineReference *)0x0) {
    pFVar5 = pFVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EAnimNodeReferenceConversionResult *)0x0) {
    pEVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ConvertToAnimationStateMachine(pFVar4,pFVar5,pEVar6);
  return;
}

// execConvertToAnimationStateMachinePure @ 14647e160

void __cdecl
UAnimationStateMachineLibrary::execConvertToAnimationStateMachinePure
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  uchar uVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar *puVar10;
  undefined8 uVar11;
  uchar local_res10 [8];
  uchar local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  puVar9 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar10 = local_48;
  if (puVar9 != (uchar *)0x0) {
    puVar10 = puVar9;
  }
  local_38 = 0;
  uStack_30 = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  puVar9 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar8 = (uchar *)&local_38;
  if (puVar9 != (uchar *)0x0) {
    puVar8 = puVar9;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar9 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = *(longlong *)(puVar10 + 8);
  if (lVar4 != 0) {
    pUVar6 = FAnimNode_StateMachine::StaticStruct();
    if (pUVar6 != (UScriptStruct *)0x0) {
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        local_28 = *(undefined8 *)puVar10;
        uVar7 = '\x01';
        uVar11 = *(undefined8 *)(puVar10 + 8);
        goto LAB_14647e2d3;
      }
    }
  }
  uVar7 = '\0';
  local_28 = 0;
  uVar11 = 0;
LAB_14647e2d3:
  *(undefined8 *)puVar8 = local_28;
  *(undefined8 *)(puVar8 + 8) = uVar11;
  *puVar9 = uVar7;
  return;
}

// execConvertToAnimationStateResult @ 14647e300

void __cdecl
UAnimationStateMachineLibrary::execConvertToAnimationStateResult
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FAnimNodeReference *pFVar1;
  FAnimationStateResultReference *pFVar2;
  FProperty *pFVar3;
  FAnimNodeReference *pFVar4;
  FAnimationStateResultReference *pFVar5;
  EAnimNodeReferenceConversionResult *pEVar6;
  EAnimNodeReferenceConversionResult local_res10 [8];
  FAnimNodeReference local_28;
  FAnimationStateResultReference local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar1 = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pFVar4 = &local_28;
  if (pFVar1 != (FAnimNodeReference *)0x0) {
    pFVar4 = pFVar1;
  }
  local_18._0_8_ = 0;
  local_18._8_8_ = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = (FAnimationStateResultReference *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Failed;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_18;
  if (pFVar2 != (FAnimationStateResultReference *)0x0) {
    pFVar5 = pFVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EAnimNodeReferenceConversionResult *)0x0) {
    pEVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ConvertToAnimationStateResult(pFVar4,pFVar5,pEVar6);
  return;
}

// execConvertToAnimationStateResultPure @ 14647e450

void __cdecl
UAnimationStateMachineLibrary::execConvertToAnimationStateResultPure
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  uchar uVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar *puVar10;
  undefined8 uVar11;
  uchar local_res10 [8];
  uchar local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  puVar9 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar10 = local_48;
  if (puVar9 != (uchar *)0x0) {
    puVar10 = puVar9;
  }
  local_38 = 0;
  uStack_30 = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  puVar9 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar8 = (uchar *)&local_38;
  if (puVar9 != (uchar *)0x0) {
    puVar8 = puVar9;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar9 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = *(longlong *)(puVar10 + 8);
  if (lVar4 != 0) {
    pUVar6 = FAnimNode_StateResult::StaticStruct();
    if (pUVar6 != (UScriptStruct *)0x0) {
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        local_28 = *(undefined8 *)puVar10;
        uVar7 = '\x01';
        uVar11 = *(undefined8 *)(puVar10 + 8);
        goto LAB_14647e5c3;
      }
    }
  }
  uVar7 = '\0';
  local_28 = 0;
  uVar11 = 0;
LAB_14647e5c3:
  *(undefined8 *)puVar8 = local_28;
  *(undefined8 *)(puVar8 + 8) = uVar11;
  *puVar9 = uVar7;
  return;
}

// execGetRelevantAnimTimeRemaining @ 1464826b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAnimationStateMachineLibrary::execGetRelevantAnimTimeRemaining
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  uchar *puVar3;
  FProperty *pFVar4;
  longlong lVar5;
  bool bVar6;
  UScriptStruct *pUVar7;
  uchar *puVar8;
  longlong *plVar9;
  undefined4 local_res10 [2];
  uchar local_48 [8];
  longlong *plStack_40;
  longlong local_38 [2];
  uchar *local_28;
  undefined4 *local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  plStack_40 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar8 = local_48;
  if (puVar3 != (uchar *)0x0) {
    puVar8 = puVar3;
  }
  local_38[0] = 0;
  local_38[1] = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0] = 0x7f7fffff;
  local_28 = puVar8;
  plVar9 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20 = local_res10;
  if ((*plVar9 != 0) && (lVar5 = plVar9[1], lVar5 != 0)) {
    pUVar7 = FAnimNode_StateResult::StaticStruct();
    if (pUVar7 != (UScriptStruct *)0x0) {
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) && ((FAnimNode_StateResult *)*plVar9 != (FAnimNode_StateResult *)0x0)) {
        `UAnimationStateMachineLibrary::GetRelevantAnimTimeRemaining'::__l2::<lambda_1>::operator()
                  (&local_28,(FAnimNode_StateResult *)*plVar9);
        goto LAB_146482819;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_StateResult>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_StateResult&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_146482819:
  *(undefined4 *)param_3 = local_res10[0];
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_40 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_40 + 8))(plStack_40,1);
    }
  }
  return;
}

// execGetRelevantAnimTimeRemainingFraction @ 146482870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAnimationStateMachineLibrary::execGetRelevantAnimTimeRemainingFraction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  uchar *puVar3;
  FProperty *pFVar4;
  longlong lVar5;
  bool bVar6;
  UScriptStruct *pUVar7;
  uchar *puVar8;
  longlong *plVar9;
  undefined4 local_res10 [2];
  uchar local_48 [8];
  longlong *plStack_40;
  longlong local_38 [2];
  uchar *local_28;
  undefined4 *local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  plStack_40 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar8 = local_48;
  if (puVar3 != (uchar *)0x0) {
    puVar8 = puVar3;
  }
  local_38[0] = 0;
  local_38[1] = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0] = 0x3f800000;
  local_28 = puVar8;
  plVar9 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20 = local_res10;
  if ((*plVar9 != 0) && (lVar5 = plVar9[1], lVar5 != 0)) {
    pUVar7 = FAnimNode_StateResult::StaticStruct();
    if (pUVar7 != (UScriptStruct *)0x0) {
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) && ((FAnimNode_StateResult *)*plVar9 != (FAnimNode_StateResult *)0x0)) {
        `UAnimationStateMachineLibrary::GetRelevantAnimTimeRemainingFraction'::__l2::<lambda_1>::
        operator()(&local_28,(FAnimNode_StateResult *)*plVar9);
        goto LAB_1464829d9;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_StateResult>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_StateResult&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_1464829d9:
  *(undefined4 *)param_3 = local_res10[0];
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_40 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_40 + 8))(plStack_40,1);
    }
  }
  return;
}

// execGetState @ 146483060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAnimationStateMachineLibrary::execGetState(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FAnimUpdateContext *pFVar3;
  FProperty *pFVar4;
  longlong lVar5;
  FAnimNode_StateMachine *this;
  bool bVar6;
  UScriptStruct *pUVar7;
  FAnimationUpdateContext *pFVar8;
  FBakedAnimationState *pFVar9;
  FAnimUpdateContext *this_00;
  longlong *plVar10;
  FName local_res10;
  undefined1 local_38 [8];
  longlong *plStack_30;
  longlong local_28 [2];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38 = (undefined1  [8])0x0;
  plStack_30 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  pFVar3 = (FAnimUpdateContext *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  this_00 = (FAnimUpdateContext *)local_38;
  if (pFVar3 != (FAnimUpdateContext *)0x0) {
    this_00 = pFVar3;
  }
  local_28[0] = 0;
  local_28[1] = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  plVar10 = local_28;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar10 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*plVar10 != 0) && (lVar5 = plVar10[1], lVar5 != 0)) {
    pUVar7 = FAnimNode_StateMachine::StaticStruct();
    if (pUVar7 != (UScriptStruct *)0x0) {
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) &&
         (this = (FAnimNode_StateMachine *)*plVar10, this != (FAnimNode_StateMachine *)0x0)) {
        pFVar8 = FAnimUpdateContext::GetContext(this_00);
        if (pFVar8 != (FAnimationUpdateContext *)0x0) {
          pFVar9 = FAnimNode_StateMachine::GetStateInfo(this,this->CurrentState);
          local_res10 = pFVar9->StateName;
        }
        goto LAB_1464831d3;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_StateMachine>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_StateMachine&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_1464831d3:
  *(FName *)param_3 = local_res10;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_30 + 8))(plStack_30,1);
    }
  }
  return;
}

// execIsStateBlendingIn @ 1464834b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAnimationStateMachineLibrary::execIsStateBlendingIn(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  uchar *puVar3;
  FProperty *pFVar4;
  longlong lVar5;
  bool bVar6;
  UScriptStruct *pUVar7;
  uchar *puVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  uchar local_48 [8];
  longlong *plStack_40;
  longlong local_38 [2];
  uchar *local_28;
  undefined1 *local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  plStack_40 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar8 = local_48;
  if (puVar3 != (uchar *)0x0) {
    puVar8 = puVar3;
  }
  local_38[0] = 0;
  local_38[1] = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0] = 0;
  local_28 = puVar8;
  plVar9 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20 = local_res10;
  if ((*plVar9 != 0) && (lVar5 = plVar9[1], lVar5 != 0)) {
    pUVar7 = FAnimNode_StateResult::StaticStruct();
    if (pUVar7 != (UScriptStruct *)0x0) {
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) && ((FAnimNode_StateResult *)*plVar9 != (FAnimNode_StateResult *)0x0)) {
        `UAnimationStateMachineLibrary::IsStateBlendingIn'::__l2::<lambda_1>::operator()
                  (&local_28,(FAnimNode_StateResult *)*plVar9);
        goto LAB_146483616;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_StateResult>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_StateResult&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_146483616:
  *(undefined1 *)param_3 = local_res10[0];
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_40 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_40 + 8))(plStack_40,1);
    }
  }
  return;
}

// execIsStateBlendingOut @ 146483670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAnimationStateMachineLibrary::execIsStateBlendingOut
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  uchar *puVar3;
  FProperty *pFVar4;
  longlong lVar5;
  bool bVar6;
  UScriptStruct *pUVar7;
  uchar *puVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  uchar local_48 [8];
  longlong *plStack_40;
  longlong local_38 [2];
  uchar *local_28;
  undefined1 *local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  plStack_40 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar8 = local_48;
  if (puVar3 != (uchar *)0x0) {
    puVar8 = puVar3;
  }
  local_38[0] = 0;
  local_38[1] = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0] = 0;
  local_28 = puVar8;
  plVar9 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20 = local_res10;
  if ((*plVar9 != 0) && (lVar5 = plVar9[1], lVar5 != 0)) {
    pUVar7 = FAnimNode_StateResult::StaticStruct();
    if (pUVar7 != (UScriptStruct *)0x0) {
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) && ((FAnimNode_StateResult *)*plVar9 != (FAnimNode_StateResult *)0x0)) {
        `UAnimationStateMachineLibrary::IsStateBlendingOut'::__l2::<lambda_1>::operator()
                  (&local_28,(FAnimNode_StateResult *)*plVar9);
        goto LAB_1464837d6;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_StateResult>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_StateResult&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_1464837d6:
  *(undefined1 *)param_3 = local_res10[0];
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_40 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_40 + 8))(plStack_40,1);
    }
  }
  return;
}

// execSetState @ 146487a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAnimationStateMachineLibrary::execSetState(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  int iVar3;
  uchar *puVar4;
  FProperty *pFVar5;
  longlong lVar6;
  bool bVar7;
  UScriptStruct *pUVar8;
  uchar *puVar9;
  longlong *plVar10;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  uchar local_78 [8];
  longlong *plStack_70;
  longlong local_68 [2];
  uchar *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  plStack_70 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  puVar4 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar9 = local_78;
  if (puVar4 != (uchar *)0x0) {
    puVar9 = puVar4;
  }
  local_68[0] = 0;
  local_68[1] = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  local_90 = 0;
  plVar10 = local_68;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar10 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_88 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res20[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_80 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_48 = local_98[0];
  local_58 = puVar9;
  local_50 = local_90;
  local_44 = local_res10[0];
  local_40 = local_88;
  local_38 = local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_30 = local_80;
  if ((*plVar10 != 0) && (lVar6 = plVar10[1], lVar6 != 0)) {
    pUVar8 = FAnimNode_StateMachine::StaticStruct();
    if (pUVar8 != (UScriptStruct *)0x0) {
      iVar3 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar6 + 0x38) < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar8->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((bVar7) && ((FAnimNode_StateMachine *)*plVar10 != (FAnimNode_StateMachine *)0x0)) {
        `UAnimationStateMachineLibrary::SetState'::__l2::<lambda_1>::operator()
                  (&local_58,(FAnimNode_StateMachine *)*plVar10);
        goto LAB_146487d40;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_StateMachine>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_StateMachine&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_146487d40:
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_70 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plStack_70 + 8))(plStack_70,1);
    }
  }
  return;
}

