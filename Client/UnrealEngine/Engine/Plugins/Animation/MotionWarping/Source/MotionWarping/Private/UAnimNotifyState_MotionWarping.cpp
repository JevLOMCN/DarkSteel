// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 19

// StaticClass @ 14cefeaf0

UClass * __cdecl UAnimNotifyState_MotionWarping::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"AnimNotifyState_MotionWarping",
               &Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_MotionWarping,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_MotionWarping>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_MotionWarping>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.InnerSingleton;
}

// UAnimNotifyState_MotionWarping @ 14cf03ea0

UAnimNotifyState_MotionWarping * __thiscall
UAnimNotifyState_MotionWarping::UAnimNotifyState_MotionWarping
          (UAnimNotifyState_MotionWarping *this,FVTableHelper *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimNotifyState_MotionWarping__6B_;
  (this->RootMotionModifier).field0_0x0.DebugPtr = (URootMotionModifier *)0x0;
  return this;
}

// UAnimNotifyState_MotionWarping @ 14cf03ed0

UAnimNotifyState_MotionWarping * __thiscall
UAnimNotifyState_MotionWarping::UAnimNotifyState_MotionWarping
          (UAnimNotifyState_MotionWarping *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  URootMotionModifier *pUVar4;
  FName local_res8;
  
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimNotifyState_MotionWarping__6B_;
  (this->RootMotionModifier).field0_0x0.DebugPtr = (URootMotionModifier *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"RootMotionModifier_SkewWarp");
  FVar1 = *pFVar2;
  pUVar3 = URootMotionModifier_SkewWarp::StaticClass();
  pUVar4 = (URootMotionModifier *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (URootMotionModifier *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->RootMotionModifier).field0_0x0.DebugPtr = pUVar4;
  return this;
}

// ~UAnimNotifyState_MotionWarping @ 14cf056c0

void __thiscall
UAnimNotifyState_MotionWarping::~UAnimNotifyState_MotionWarping
          (UAnimNotifyState_MotionWarping *this)

{
  this->_padding_ = (longlong)&___7UAnimNotifyState_MotionWarping__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  return;
}

// AddRootMotionModifier @ 14cf07760

URootMotionModifier * __thiscall
UAnimNotifyState_MotionWarping::AddRootMotionModifier
          (UAnimNotifyState_MotionWarping *this,UMotionWarpingComponent *param_1,
          UAnimSequenceBase *param_2,float param_3,float param_4)

{
  UFunction *this_00;
  UClass *pUVar1;
  UMotionWarpingComponent *local_38;
  UAnimSequenceBase *local_30;
  float local_28;
  float local_24;
  URootMotionModifier *local_20;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UAnimNotifyState_MotionWarping_AddRootMotionModifier);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_24 = param_4;
    local_20 = (URootMotionModifier *)0x0;
    local_38 = param_1;
    local_30 = param_2;
    local_28 = param_3;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_38);
  }
  else {
    local_20 = (URootMotionModifier *)
               (**(code **)(this->_padding_ + 0x318))(this,param_1,param_2,param_3,param_4);
  }
  return local_20;
}

// AddRootMotionModifier_Implementation @ 14cf07e50

URootMotionModifier * __thiscall
UAnimNotifyState_MotionWarping::AddRootMotionModifier_Implementation
          (UAnimNotifyState_MotionWarping *this,UMotionWarpingComponent *param_1,
          UAnimSequenceBase *param_2,float param_3,float param_4)

{
  URootMotionModifier *pUVar1;
  
  if ((param_1 != (UMotionWarpingComponent *)0x0) &&
     (pUVar1 = (this->RootMotionModifier).field0_0x0.DebugPtr, pUVar1 != (URootMotionModifier *)0x0)
     ) {
    pUVar1 = UMotionWarpingComponent::AddModifierFromTemplate
                       (param_1,pUVar1,param_2,param_3,param_4);
    return pUVar1;
  }
  return (URootMotionModifier *)0x0;
}

// GetPrivateStaticClass @ 14cf100b0

UClass * __cdecl UAnimNotifyState_MotionWarping::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"AnimNotifyState_MotionWarping",
               &Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_MotionWarping,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_MotionWarping>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_MotionWarping>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.InnerSingleton;
}

// OnBecomeRelevant @ 14cf12790

void __thiscall
UAnimNotifyState_MotionWarping::OnBecomeRelevant
          (UAnimNotifyState_MotionWarping *this,UMotionWarpingComponent *param_1,
          UAnimSequenceBase *param_2,float param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  UFunction *this_00;
  UClass *pUVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  UAnimNotifyState_MotionWarping *local_98;
  FName *local_90;
  FName local_88;
  UAnimNotifyState_MotionWarping *local_80;
  FName *local_78;
  FName local_70;
  UAnimNotifyState_MotionWarping *local_68;
  FName *local_60;
  UMotionWarpingComponent *local_58;
  UAnimSequenceBase *local_50;
  float local_48;
  float local_44;
  longlong local_40;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UAnimNotifyState_MotionWarping_AddRootMotionModifier);
  pUVar3 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar3->ClassFlags & CLASS_Native) == CLASS_None) {
    local_44 = param_4;
    local_40 = 0;
    local_58 = param_1;
    local_50 = param_2;
    local_48 = param_3;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_58);
    lVar4 = local_40;
  }
  else {
    lVar4 = (**(code **)(this->_padding_ + 0x318))(this,param_1,param_2,param_3,param_4);
  }
  if (lVar4 == 0) {
    return;
  }
  bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(lVar4 + 0x120));
  pcVar7 = &DAT_00000002;
  if (!bVar2) {
    pcVar5 = strstr("&UAnimNotifyState_MotionWarping::OnRootMotionModifierActivate","::");
    if (pcVar5 == (char *)0x0) {
LAB_14cf128ba:
      pcVar6 = &DAT_00000002;
LAB_14cf128bd:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      do {
        pcVar6 = pcVar5;
        pcVar5 = strstr(pcVar6 + 1,"::");
      } while (pcVar5 != (char *)0x0);
      if (pcVar6 == (char *)0x0) goto LAB_14cf128ba;
      pcVar6 = pcVar6 + 2;
      if (*pcVar6 == '0') goto LAB_14cf128bd;
    }
    ::FName::FName(&local_a0,pcVar6);
    local_b8 = local_a0;
    local_98 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UAnimNotifyState_MotionWarping *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar4 + 0x128),(FObjectPtr)&local_98);
    *(FName *)(lVar4 + 0x130) = local_b8;
    bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(lVar4 + 0x120));
    if (!bVar2) {
      local_90 = &local_b8;
      `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UMotionWarpingComponent_*,URootMotionModifier_*>
      ::__Internal_BindDynamic<UAnimNotifyState_MotionWarping_const_>'::__l2::<lambda_1>::operator()
                (&local_90);
    }
  }
  bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(lVar4 + 0x138));
  if (!bVar2) {
    pcVar5 = strstr("&UAnimNotifyState_MotionWarping::OnRootMotionModifierUpdate","::");
    if (pcVar5 == (char *)0x0) {
LAB_14cf129ba:
      pcVar6 = &DAT_00000002;
LAB_14cf129bd:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      do {
        pcVar6 = pcVar5;
        pcVar5 = strstr(pcVar6 + 1,"::");
      } while (pcVar5 != (char *)0x0);
      if (pcVar6 == (char *)0x0) goto LAB_14cf129ba;
      pcVar6 = pcVar6 + 2;
      if (*pcVar6 == '0') goto LAB_14cf129bd;
    }
    ::FName::FName(&local_88,pcVar6);
    local_b0 = local_88;
    local_80 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UAnimNotifyState_MotionWarping *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar4 + 0x140),(FObjectPtr)&local_80);
    *(FName *)(lVar4 + 0x148) = local_b0;
    bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(lVar4 + 0x138));
    if (!bVar2) {
      local_78 = &local_b0;
      `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UMotionWarpingComponent_*,URootMotionModifier_*>
      ::__Internal_BindDynamic<UAnimNotifyState_MotionWarping_const_>'::__l2::<lambda_1>::operator()
                (&local_78);
    }
  }
  bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(lVar4 + 0x150));
  if (bVar2) {
    return;
  }
  pcVar5 = strstr("&UAnimNotifyState_MotionWarping::OnRootMotionModifierDeactivate","::");
  if (pcVar5 != (char *)0x0) {
    do {
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if ((pcVar6 != (char *)0x0) && (pcVar7 = pcVar6 + 2, pcVar6[2] != '0')) goto LAB_14cf12ae8;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14cf12ae8:
  ::FName::FName(&local_70,pcVar7);
  local_a8 = local_70;
  local_68 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UAnimNotifyState_MotionWarping *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar4 + 0x158),(FObjectPtr)&local_68);
  *(FName *)(lVar4 + 0x160) = local_a8;
  bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(lVar4 + 0x150));
  if (!bVar2) {
    local_60 = &local_a8;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UMotionWarpingComponent_*,URootMotionModifier_*>
    ::__Internal_BindDynamic<UAnimNotifyState_MotionWarping_const_>'::__l2::<lambda_1>::operator()
              (&local_60);
  }
  return;
}

// OnRootMotionModifierActivate @ 14cf12e50

void __thiscall
UAnimNotifyState_MotionWarping::OnRootMotionModifierActivate
          (UAnimNotifyState_MotionWarping *this,UMotionWarpingComponent *param_1,
          URootMotionModifier *param_2)

{
  UFunction *pUVar1;
  UMotionWarpingComponent *local_18;
  URootMotionModifier *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UAnimNotifyState_MotionWarping_OnWarpBegin);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// OnRootMotionModifierDeactivate @ 14cf12ea0

void __thiscall
UAnimNotifyState_MotionWarping::OnRootMotionModifierDeactivate
          (UAnimNotifyState_MotionWarping *this,UMotionWarpingComponent *param_1,
          URootMotionModifier *param_2)

{
  UFunction *pUVar1;
  UMotionWarpingComponent *local_18;
  URootMotionModifier *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UAnimNotifyState_MotionWarping_OnWarpEnd);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// OnRootMotionModifierUpdate @ 14cf12ef0

void __thiscall
UAnimNotifyState_MotionWarping::OnRootMotionModifierUpdate
          (UAnimNotifyState_MotionWarping *this,UMotionWarpingComponent *param_1,
          URootMotionModifier *param_2)

{
  UFunction *pUVar1;
  UMotionWarpingComponent *local_18;
  URootMotionModifier *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UAnimNotifyState_MotionWarping_OnWarpUpdate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// OnWarpBegin @ 14cf135e0

void __thiscall
UAnimNotifyState_MotionWarping::OnWarpBegin
          (UAnimNotifyState_MotionWarping *this,UMotionWarpingComponent *param_1,
          URootMotionModifier *param_2)

{
  UFunction *pUVar1;
  UMotionWarpingComponent *local_18;
  URootMotionModifier *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UAnimNotifyState_MotionWarping_OnWarpBegin);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// OnWarpEnd @ 14cf13630

void __thiscall
UAnimNotifyState_MotionWarping::OnWarpEnd
          (UAnimNotifyState_MotionWarping *this,UMotionWarpingComponent *param_1,
          URootMotionModifier *param_2)

{
  UFunction *pUVar1;
  UMotionWarpingComponent *local_18;
  URootMotionModifier *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UAnimNotifyState_MotionWarping_OnWarpEnd);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// OnWarpUpdate @ 14cf13680

void __thiscall
UAnimNotifyState_MotionWarping::OnWarpUpdate
          (UAnimNotifyState_MotionWarping *this,UMotionWarpingComponent *param_1,
          URootMotionModifier *param_2)

{
  UFunction *pUVar1;
  UMotionWarpingComponent *local_18;
  URootMotionModifier *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UAnimNotifyState_MotionWarping_OnWarpUpdate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// StaticRegisterNativesUAnimNotifyState_MotionWarping @ 14cf1bcf0

void __cdecl
UAnimNotifyState_MotionWarping::StaticRegisterNativesUAnimNotifyState_MotionWarping(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddRootMotionModifier @ 14cf20960

void __cdecl
UAnimNotifyState_MotionWarping::execAddRootMotionModifier
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x318))
                    (param_1,local_res20,local_res18,local_res10[0],local_res8[0]);
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execOnRootMotionModifierActivate @ 14cf23ee0

void __cdecl
UAnimNotifyState_MotionWarping::execOnRootMotionModifierActivate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UFunction *pUVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_18;
  undefined8 local_10;
  
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
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_10 = local_res10;
  pUVar2 = UObject::FindFunctionChecked(param_1,NAME_UAnimNotifyState_MotionWarping_OnWarpBegin);
  (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar2,&local_18);
  return;
}

// execOnRootMotionModifierDeactivate @ 14cf23fe0

void __cdecl
UAnimNotifyState_MotionWarping::execOnRootMotionModifierDeactivate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UFunction *pUVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_18;
  undefined8 local_10;
  
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
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_10 = local_res10;
  pUVar2 = UObject::FindFunctionChecked(param_1,NAME_UAnimNotifyState_MotionWarping_OnWarpEnd);
  (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar2,&local_18);
  return;
}

// execOnRootMotionModifierUpdate @ 14cf240e0

void __cdecl
UAnimNotifyState_MotionWarping::execOnRootMotionModifierUpdate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UFunction *pUVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_18;
  undefined8 local_10;
  
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
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_10 = local_res10;
  pUVar2 = UObject::FindFunctionChecked(param_1,NAME_UAnimNotifyState_MotionWarping_OnWarpUpdate);
  (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar2,&local_18);
  return;
}

