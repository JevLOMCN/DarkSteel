// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkAnimationCore
// Functions: 11

// StaticClass @ 14cfc1870

UClass * __cdecl ULiveLinkInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkAnimationCore",L"LiveLinkInstance",
               &Z_Registration_Info_UClass_ULiveLinkInstance.InnerSingleton,
               StaticRegisterNativesULiveLinkInstance,0x430,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkInstance>,
               InternalVTableHelperCtorCaller<ULiveLinkInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkInstance.InnerSingleton;
}

// ULiveLinkInstance @ 14cfc2820

ULiveLinkInstance * __thiscall
ULiveLinkInstance::ULiveLinkInstance(ULiveLinkInstance *this,FVTableHelper *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkInstance__6B_;
  (this->CurrentRetargetAsset).field0_0x0.DebugPtr = (ULiveLinkRetargetAsset *)0x0;
  return this;
}

// ULiveLinkInstance @ 14cfc2860

ULiveLinkInstance * __thiscall
ULiveLinkInstance::ULiveLinkInstance(ULiveLinkInstance *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkInstance__6B_;
  (this->CurrentRetargetAsset).field0_0x0.DebugPtr = (ULiveLinkRetargetAsset *)0x0;
  return this;
}

// ~ULiveLinkInstance @ 14cfc2a20

void __thiscall ULiveLinkInstance::~ULiveLinkInstance(ULiveLinkInstance *this)

{
  this->_padding_ = (longlong)&___7ULiveLinkInstance__6B_;
  UAnimInstance::~UAnimInstance((UAnimInstance *)this);
  return;
}

// CreateAnimInstanceProxy @ 14cfc48b0

FAnimInstanceProxy * __thiscall ULiveLinkInstance::CreateAnimInstanceProxy(ULiveLinkInstance *this)

{
  FAnimInstanceProxy *this_00;
  
  this_00 = ::operator_new(0x870);
  if (this_00 != (FAnimInstanceProxy *)0x0) {
    FAnimInstanceProxy::FAnimInstanceProxy(this_00,(UAnimInstance *)this);
    *(undefined ***)this_00 = &___7FLiveLinkInstanceProxy__6B_;
    FAnimNode_LiveLinkPose::FAnimNode_LiveLinkPose((FAnimNode_LiveLinkPose *)&this_00->field_0x808);
    return this_00;
  }
  return (FAnimInstanceProxy *)0x0;
}

// DestroyAnimInstanceProxy @ 14cfc4910

void __thiscall
ULiveLinkInstance::DestroyAnimInstanceProxy(ULiveLinkInstance *this,FAnimInstanceProxy *param_1)

{
  UAnimInstance::DestroyAnimInstanceProxy((UAnimInstance *)this,param_1);
  (this->CurrentRetargetAsset).field0_0x0.DebugPtr = (ULiveLinkRetargetAsset *)0x0;
  return;
}

// GetPrivateStaticClass @ 14cfc4ec0

UClass * __cdecl ULiveLinkInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkAnimationCore",L"LiveLinkInstance",
               &Z_Registration_Info_UClass_ULiveLinkInstance.InnerSingleton,
               StaticRegisterNativesULiveLinkInstance,0x430,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkInstance>,
               InternalVTableHelperCtorCaller<ULiveLinkInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkInstance.InnerSingleton;
}

// StaticRegisterNativesULiveLinkInstance @ 14cfc59f0

void __cdecl ULiveLinkInstance::StaticRegisterNativesULiveLinkInstance(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_ULiveLinkInstance_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEnableLiveLinkEvaluation @ 14cfc5cf0

void __cdecl
ULiveLinkInstance::execEnableLiveLinkEvaluation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  USkeletalMeshComponent *pUVar4;
  longlong lVar5;
  undefined1 uVar6;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar6 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1 != (UObject *)0x0) {
    bVar3 = IsInGameThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                           ,0x687,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&param_1->field_0x20);
    if (bVar3) {
      pUVar4 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)param_1);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar4);
    }
    lVar5 = *(longlong *)&param_1[0x19].field_0x8;
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*(longlong *)param_1 + 0x378))(param_1);
      *(longlong *)&param_1[0x19].field_0x8 = lVar5;
    }
    *(undefined1 *)(lVar5 + 0x830) = uVar6;
    uVar6 = uRam0000000000000830;
  }
  uRam0000000000000830 = uVar6;
  return;
}

// execSetRetargetAsset @ 14cfc60c0

void __cdecl ULiveLinkInstance::execSetRetargetAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UObject *pUVar3;
  bool bVar4;
  USkeletalMeshComponent *pUVar5;
  longlong lVar6;
  UObject *local_res8;
  
  lVar6 = 0;
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  if (param_1 != (UObject *)0x0) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                         ,0x687,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar4 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&param_1->field_0x20);
    if (bVar4) {
      pUVar5 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)param_1);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar5);
    }
    lVar6 = *(longlong *)&param_1[0x19].field_0x8;
    if (lVar6 == 0) {
      lVar6 = (**(code **)(*(longlong *)param_1 + 0x378))(param_1);
      *(longlong *)&param_1[0x19].field_0x8 = lVar6;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(UObject **)(lVar6 + 0x838) = pUVar3;
  return;
}

// execSetSubject @ 14cfc61f0

void __cdecl ULiveLinkInstance::execSetSubject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  USkeletalMeshComponent *pUVar5;
  longlong lVar6;
  undefined8 local_res8;
  
  local_res8 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1 != (UObject *)0x0) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                         ,0x687,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar4 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&param_1->field_0x20);
    if (bVar4) {
      pUVar5 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)param_1);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar5);
    }
    lVar6 = *(longlong *)&param_1[0x19].field_0x8;
    if (lVar6 == 0) {
      lVar6 = (**(code **)(*(longlong *)param_1 + 0x378))(param_1);
      *(longlong *)&param_1[0x19].field_0x8 = lVar6;
    }
    *(undefined8 *)(lVar6 + 0x828) = uVar3;
    return;
  }
  uRam0000000000000828 = local_res8;
  return;
}

