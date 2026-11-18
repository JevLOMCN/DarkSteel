// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 10

// StaticStruct @ 1463ea220

UScriptStruct * __cdecl FAnimNode_CallFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_CallFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_CallFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CallFunction,(UObject *)pUVar1,
                         L"AnimNode_CallFunction");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_CallFunction.OuterSingleton;
}

// OnInitializeAnimInstance @ 1463ea440

void __thiscall
FAnimNode_CallFunction::OnInitializeAnimInstance
          (FAnimNode_CallFunction *this,FAnimInstanceProxy *param_1,UAnimInstance *param_2)

{
  (this->Counter).Counter = -1;
  (this->Counter).SkipFrames = 0;
  (this->Counter).LastSyncronizedFrame = 0xffffffffffffffff;
  this->CurrentWeight = 0.0;
  return;
}

// NeedsOnInitializeAnimInstance @ 1463ea460

bool __thiscall FAnimNode_CallFunction::NeedsOnInitializeAnimInstance(FAnimNode_CallFunction *this)

{
  return true;
}

// GatherDebugData @ 1463ea490

void __thiscall
FAnimNode_CallFunction::GatherDebugData(FAnimNode_CallFunction *this,FNodeDebugData *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::FString::FString(&local_18,L"CallFunction");
  FNodeDebugData::AddDebugItem(param_1,pFVar1,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->Source,param_1);
  return;
}

// Update_AnyThread @ 1463ea4e0

void __thiscall
FAnimNode_CallFunction::Update_AnyThread
          (FAnimNode_CallFunction *this,FAnimationUpdateContext *param_1)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  short sVar5;
  short sVar6;
  
  CallFunctionFromCallSite(this,OnUpdate,(FAnimationBaseContext *)param_1);
  sVar6 = (this->Counter).Counter;
  bVar3 = false;
  if ((sVar6 != -1) && ((this->Counter).LastSyncronizedFrame != 0xffffffffffffffff)) {
    if (sVar6 == *(short *)(param_1->_padding_ + 0x5b0)) goto LAB_1463ea575;
    sVar5 = (this->Counter).Counter + 1;
    sVar6 = 0;
    if (sVar5 != -1) {
      sVar6 = sVar5;
    }
    if (((sVar6 != -1) && (GFrameCounter != 0xffffffffffffffff)) &&
       (sVar6 == *(short *)(param_1->_padding_ + 0x5b0))) goto LAB_1463ea575;
  }
  this->CurrentWeight = 0.0;
  bVar3 = true;
  CallFunctionFromCallSite(this,OnBecomeRelevant,(FAnimationBaseContext *)param_1);
LAB_1463ea575:
  fVar4 = __real_3f7fff58;
  fVar1 = param_1->CurrentWeight;
  if ((__real_3f7fff58 < this->CurrentWeight || __real_3f7fff58 == this->CurrentWeight) &&
     (fVar1 < __real_3f7fff58)) {
    CallFunctionFromCallSite(this,OnStartedBlendingOut,(FAnimationBaseContext *)param_1);
  }
  if ((this->CurrentWeight <= __real_3727c5ac) && (__real_3727c5ac < fVar1)) {
    CallFunctionFromCallSite(this,OnStartedBlendingIn,(FAnimationBaseContext *)param_1);
  }
  if ((this->CurrentWeight <= fVar4 && fVar4 != this->CurrentWeight) && (fVar4 <= fVar1)) {
    CallFunctionFromCallSite(this,OnFinishedBlendingIn,(FAnimationBaseContext *)param_1);
  }
  FPoseLinkBase::Update((FPoseLinkBase *)&this->Source,param_1);
  if (bVar3) {
    CallFunctionFromCallSite(this,OnBecomeRelevantPostRecursion,(FAnimationBaseContext *)param_1);
  }
  CallFunctionFromCallSite(this,OnUpdatePostRecursion,(FAnimationBaseContext *)param_1);
  lVar2 = param_1->_padding_;
  (this->Counter).Counter = *(short *)(lVar2 + 0x5b0);
  (this->Counter).LastSyncronizedFrame = *(ulong64 *)(lVar2 + 0x5a8);
  sVar6 = *(short *)(lVar2 + 0x5b2);
  this->CurrentWeight = fVar1;
  (this->Counter).SkipFrames = sVar6;
  return;
}

// Evaluate_AnyThread @ 1463ea660

void __thiscall
FAnimNode_CallFunction::Evaluate_AnyThread(FAnimNode_CallFunction *this,FPoseContext *param_1)

{
  CallFunctionFromCallSite(this,OnEvaluate,(FAnimationBaseContext *)param_1);
  FPoseLink::Evaluate(&this->Source,param_1);
  CallFunctionFromCallSite(this,OnEvaluatePostRecursion,(FAnimationBaseContext *)param_1);
  return;
}

// Initialize_AnyThread @ 1463ea6b0

void __thiscall
FAnimNode_CallFunction::Initialize_AnyThread
          (FAnimNode_CallFunction *this,FAnimationInitializeContext *param_1)

{
  this->CurrentWeight = 0.0;
  CallFunctionFromCallSite(this,OnInitialize,(FAnimationBaseContext *)param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Source,param_1);
  CallFunctionFromCallSite(this,OnInitializePostRecursion,(FAnimationBaseContext *)param_1);
  return;
}

// CacheBones_AnyThread @ 1463ea700

void __thiscall
FAnimNode_CallFunction::CacheBones_AnyThread
          (FAnimNode_CallFunction *this,FAnimationCacheBonesContext *param_1)

{
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Source,param_1);
  return;
}

// CallFunctionFromCallSite @ 14641ee30

void __thiscall
FAnimNode_CallFunction::CallFunctionFromCallSite
          (FAnimNode_CallFunction *this,EAnimFunctionCallSite param_1,FAnimationBaseContext *param_2
          )

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  FAnimNodeFunctionRef *this_00;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (this->CallSite == param_1) {
    if (CachedId_Function.Index == -1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FName::FName(&AnimName_Function,"Function");
        _Init_thread_footer(&::_TSS1);
      }
      if (Z_Registration_Info_UScriptStruct_FAnimNode_CallFunction.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
        Z_Registration_Info_UScriptStruct_FAnimNode_CallFunction.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CallFunction,(UObject *)pUVar5,
                             L"AnimNode_CallFunction");
      }
      pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                         (&local_18,AnimName_Function,(FAnimNode_Base *)this,
                          Z_Registration_Info_UScriptStruct_FAnimNode_CallFunction.OuterSingleton);
      CachedId_Function.Id = pFVar6->Id;
      CachedId_Function.Index = pFVar6->Index;
    }
    iVar3 = CachedId_Function.Index;
    FVar2 = CachedId_Function.Id;
    if ((this->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NodeData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                           ,0x3e1,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_28.Id = FVar2;
    local_28.Index = iVar3;
    this_00 = FAnimNodeData::GetData
                        ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                         (UObject *)0x0);
    FAnimNodeFunctionRef::Call(this_00,param_2->AnimInstanceProxy->AnimInstanceObject,(void *)0x0);
  }
  return;
}

// GetFunction @ 14644a380

FAnimNodeFunctionRef * __thiscall FAnimNode_CallFunction::GetFunction(FAnimNode_CallFunction *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  FAnimNodeFunctionRef *pFVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_Function.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_Function,"Function");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_CallFunction.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_CallFunction.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CallFunction,(UObject *)pUVar5,
                           L"AnimNode_CallFunction");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_Function,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_CallFunction.OuterSingleton);
    CachedId_Function.Id = pFVar6->Id;
    CachedId_Function.Index = pFVar6->Index;
  }
  iVar3 = CachedId_Function.Index;
  FVar2 = CachedId_Function.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FAnimNodeFunctionRef *)(*pcVar1)();
    return pFVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pFVar7 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return pFVar7;
}

