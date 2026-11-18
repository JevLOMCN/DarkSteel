// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 10

// StaticClass @ 146f82f90

UClass * __cdecl UGeneratedNavLinksProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeneratedNavLinksProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"GeneratedNavLinksProxy",
               &Z_Registration_Info_UClass_UGeneratedNavLinksProxy.InnerSingleton,
               StaticRegisterNativesUGeneratedNavLinksProxy,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGeneratedNavLinksProxy>,
               InternalVTableHelperCtorCaller<UGeneratedNavLinksProxy>,local_res8,
               UBaseGeneratedNavLinksProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeneratedNavLinksProxy.InnerSingleton;
}

// UGeneratedNavLinksProxy @ 146f958e0

UGeneratedNavLinksProxy * __thiscall
UGeneratedNavLinksProxy::UGeneratedNavLinksProxy
          (UGeneratedNavLinksProxy *this,FVTableHelper *param_1)

{
  UBaseGeneratedNavLinksProxy::UBaseGeneratedNavLinksProxy
            ((UBaseGeneratedNavLinksProxy *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INavLinkCustomInterface__;
  *(undefined8 *)&this->OnSmartLinkReached = 0;
  *(undefined8 *)&(this->OnSmartLinkReached).field_0x8 = 0;
  *(undefined8 *)&(this->OnSmartLinkReached).field_0x10 = 0;
  return this;
}

// UGeneratedNavLinksProxy @ 146f95920

UGeneratedNavLinksProxy * __thiscall
UGeneratedNavLinksProxy::UGeneratedNavLinksProxy
          (UGeneratedNavLinksProxy *this,FObjectInitializer *param_1)

{
  UBaseGeneratedNavLinksProxy::UBaseGeneratedNavLinksProxy
            ((UBaseGeneratedNavLinksProxy *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INavLinkCustomInterface__;
  *(undefined8 *)&this->OnSmartLinkReached = 0;
  *(undefined8 *)&(this->OnSmartLinkReached).field_0x8 = 0;
  *(undefined8 *)&(this->OnSmartLinkReached).field_0x10 = 0;
  return this;
}

// ~UGeneratedNavLinksProxy @ 146f96ee0

void __thiscall UGeneratedNavLinksProxy::~UGeneratedNavLinksProxy(UGeneratedNavLinksProxy *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INavLinkCustomInterface__;
  pvVar1 = *(void **)&(this->OnSmartLinkReached).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSmartLinkReached);
  UBaseGeneratedNavLinksProxy::~UBaseGeneratedNavLinksProxy((UBaseGeneratedNavLinksProxy *)this);
  return;
}

// GetPrivateStaticClass @ 146fb4070

UClass * __cdecl UGeneratedNavLinksProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeneratedNavLinksProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"GeneratedNavLinksProxy",
               &Z_Registration_Info_UClass_UGeneratedNavLinksProxy.InnerSingleton,
               StaticRegisterNativesUGeneratedNavLinksProxy,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGeneratedNavLinksProxy>,
               InternalVTableHelperCtorCaller<UGeneratedNavLinksProxy>,local_res8,
               UBaseGeneratedNavLinksProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeneratedNavLinksProxy.InnerSingleton;
}

// GetWorld @ 146fb5dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UGeneratedNavLinksProxy::GetWorld(UGeneratedNavLinksProxy *this)

{
  int iVar1;
  longlong lVar2;
  UEngine *this_00;
  UClass *pUVar3;
  UWorld *pUVar4;
  
  this_00 = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar3 = Z_Construct_UClass_UGameEngine_NoRegister();
    lVar2 = this_00->_padding_;
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      pUVar4 = UGameEngine::GetGameWorld((UGameEngine *)this_00);
      return pUVar4;
    }
  }
  pUVar4 = UObject::GetWorld((UObject *)this);
  return pUVar4;
}

// NotifySmartLinkReached @ 146fbca40

void __thiscall
UGeneratedNavLinksProxy::NotifySmartLinkReached
          (UGeneratedNavLinksProxy *this,UObject *param_1,TVector<double> *param_2)

{
  int iVar1;
  UClass *pUVar2;
  UFunction *pUVar3;
  UObject *pUVar4;
  UObject *local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UPathFollowingComponent::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      pUVar4 = *(UObject **)&param_1[4].field_0x8;
      if (pUVar4 != (UObject *)0x0) {
        pUVar2 = Z_Construct_UClass_AController_NoRegister();
        iVar1 = (int)pUVar2->_padding_;
        if ((((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar2->_padding_)) &&
            (pUVar4 = *(UObject **)&pUVar4[0x13].field_0x18,
            UE::GC::GIsIncrementalReachabilityPending != false)) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
      }
      local_20 = (param_2->field0_0x0)._s_0.X;
      dStack_18 = (param_2->field0_0x0)._s_0.Y;
      local_10 = (param_2->field0_0x0)._s_0.Z;
      local_28 = pUVar4;
      pUVar3 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_UGeneratedNavLinksProxy_ReceiveSmartLinkReached);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_28);
      local_20 = (param_2->field0_0x0)._s_0.X;
      dStack_18 = (param_2->field0_0x0)._s_0.Y;
      local_10 = (param_2->field0_0x0)._s_0.Z;
      local_28 = pUVar4;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSmartLinkReached,
                 &local_28);
    }
  }
  return;
}

// OnLinkMoveStarted @ 146fbcd10

bool __thiscall
UGeneratedNavLinksProxy::OnLinkMoveStarted
          (UGeneratedNavLinksProxy *this,UObject *param_1,TVector<double> *param_2)

{
  longlong *this_00;
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  UClass *pUVar5;
  UFunction *pUVar6;
  UObject *pUVar7;
  UObject *local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  this_00 = &this[-1]._padding_;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  if (param_1 != (UObject *)0x0) {
    pUVar5 = UPathFollowingComponent::StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) {
      pUVar7 = *(UObject **)&param_1[4].field_0x8;
      if (pUVar7 != (UObject *)0x0) {
        pUVar5 = Z_Construct_UClass_AController_NoRegister();
        iVar2 = (int)pUVar5->_padding_;
        if ((((iVar2 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar5->_padding_)) &&
            (pUVar7 = *(UObject **)&pUVar7[0x13].field_0x18,
            UE::GC::GIsIncrementalReachabilityPending != false)) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
      }
      local_28 = pUVar7;
      local_20 = dVar3;
      dStack_18 = dVar4;
      local_10 = dVar1;
      pUVar6 = UObject::FindFunctionChecked
                         ((UObject *)this_00,NAME_UGeneratedNavLinksProxy_ReceiveSmartLinkReached);
      (**(code **)(*this_00 + 0x260))(this_00,pUVar6,&local_28);
      local_28 = pUVar7;
      local_20 = dVar3;
      dStack_18 = dVar4;
      local_10 = dVar1;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28)
      ;
    }
  }
  return true;
}

// ReceiveSmartLinkReached @ 146fc6b50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGeneratedNavLinksProxy::ReceiveSmartLinkReached
          (UGeneratedNavLinksProxy *this,AActor *param_1,TVector<double> *param_2)

{
  UFunction *pUVar1;
  AActor *local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  local_20 = (param_2->field0_0x0)._s_0.X;
  dStack_18 = (param_2->field0_0x0)._s_0.Y;
  local_10 = (param_2->field0_0x0)._s_0.Z;
  local_28 = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UGeneratedNavLinksProxy_ReceiveSmartLinkReached);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return;
}

// StaticRegisterNativesUGeneratedNavLinksProxy @ 146fd36d0

void __cdecl UGeneratedNavLinksProxy::StaticRegisterNativesUGeneratedNavLinksProxy(void)

{
  return;
}

