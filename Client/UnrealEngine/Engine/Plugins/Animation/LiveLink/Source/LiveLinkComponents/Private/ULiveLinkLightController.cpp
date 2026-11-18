// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkComponents
// Functions: 10

// StaticClass @ 14d090960

UClass * __cdecl ULiveLinkLightController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkLightController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkComponents",L"LiveLinkLightController",
               &Z_Registration_Info_UClass_ULiveLinkLightController.InnerSingleton,
               StaticRegisterNativesULiveLinkLightController,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkLightController>,
               InternalVTableHelperCtorCaller<ULiveLinkLightController>,local_res8,
               ULiveLinkControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkLightController.InnerSingleton;
}

// ULiveLinkLightController @ 14d091e60

ULiveLinkLightController * __thiscall
ULiveLinkLightController::ULiveLinkLightController
          (ULiveLinkLightController *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkControllerBase__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x48,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined ***)this = &___7ULiveLinkLightController__6B_;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  return this;
}

// ULiveLinkLightController @ 14d091ed0

ULiveLinkLightController * __thiscall
ULiveLinkLightController::ULiveLinkLightController
          (ULiveLinkLightController *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkControllerBase__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x48,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined ***)this = &___7ULiveLinkLightController__6B_;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  return this;
}

// ~ULiveLinkLightController @ 14d092470

void __thiscall ULiveLinkLightController::~ULiveLinkLightController(ULiveLinkLightController *this)

{
  *(undefined ***)this = &___7ULiveLinkControllerBase__6B_;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetDesiredComponentClass @ 14d0938c0

TSubclassOf<UActorComponent> __thiscall
ULiveLinkLightController::GetDesiredComponentClass(ULiveLinkLightController *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ULightComponent_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UActorComponent>)in_RDX.field0_0x0;
}

// GetPrivateStaticClass @ 14d093bf0

UClass * __cdecl ULiveLinkLightController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkLightController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkComponents",L"LiveLinkLightController",
               &Z_Registration_Info_UClass_ULiveLinkLightController.InnerSingleton,
               StaticRegisterNativesULiveLinkLightController,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkLightController>,
               InternalVTableHelperCtorCaller<ULiveLinkLightController>,local_res8,
               ULiveLinkControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkLightController.InnerSingleton;
}

// IsRoleSupported @ 14d0942d0

bool __thiscall
ULiveLinkLightController::IsRoleSupported
          (ULiveLinkLightController *this,TSubclassOf<ULiveLinkRole> *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  
  pUVar4 = (param_1->Class).field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pUVar4 = (param_1->Class).field0_0x0.DebugPtr;
        goto LAB_14d09431a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14d09431a:
  pUVar3 = Z_Construct_UClass_ULiveLinkLightRole_NoRegister();
  return pUVar4 == pUVar3;
}

// PostLoad @ 14d094bb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULiveLinkLightController::PostLoad(ULiveLinkLightController *this)

{
  AActor *pAVar1;
  UActorComponent *local_res8 [4];
  
  UObject::PostLoad((UObject *)this);
  pAVar1 = ULiveLinkControllerBase::GetOuterActor((ULiveLinkControllerBase *)this);
  local_res8[0] = FComponentReference::GetComponent((FComponentReference *)&this->field_0x28,pAVar1)
  ;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res8[0] != (UActorComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x50,(FObjectPtr)local_res8);
  return;
}

// StaticRegisterNativesULiveLinkLightController @ 14d095600

void __cdecl ULiveLinkLightController::StaticRegisterNativesULiveLinkLightController(void)

{
  return;
}

// Tick @ 14d095640

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
ULiveLinkLightController::Tick
          (ULiveLinkLightController *this,float param_1,FLiveLinkSubjectFrameData *param_2)

{
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  UClass *pUVar6;
  UScriptStruct *pUVar7;
  longlong lVar8;
  AActor *pAVar9;
  USpotLightComponent *this_00;
  FLinearColor_u_0 local_18;
  
  lVar4 = (**(code **)((param_2->StaticData).WrappedStruct._padding_ + 0x10))(param_2);
  lVar5 = (**(code **)((param_2->StaticData).WrappedStruct._padding_ + 0x20))(param_2);
  if (lVar5 == 0) {
LAB_14d0956c8:
    lVar4 = 0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_)) goto LAB_14d0956c8;
    pUVar7 = FLiveLinkLightStaticData::StaticStruct();
    if (pUVar7 == (UScriptStruct *)0x0) goto LAB_14d0956c8;
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14d0956c8;
  }
  pFVar1 = &param_2->FrameData;
  lVar5 = (**(code **)((param_2->FrameData).WrappedStruct._padding_ + 0x10))(pFVar1);
  lVar8 = (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x20))(pFVar1);
  if (lVar8 != 0) {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar6->_padding_)) {
      pUVar7 = FLiveLinkLightFrameData::StaticStruct();
      if (pUVar7 != (UScriptStruct *)0x0) {
        iVar2 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar8 + 0x38) < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar7->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_14d09573f;
      }
    }
  }
  lVar5 = 0;
LAB_14d09573f:
  if ((lVar4 != 0) && (lVar5 != 0)) {
    pAVar9 = ULiveLinkControllerBase::GetOuterActor((ULiveLinkControllerBase *)this);
    this_00 = (USpotLightComponent *)
              FComponentReference::GetComponent((FComponentReference *)&this->field_0x28,pAVar9);
    if (this_00 != (USpotLightComponent *)0x0) {
      pUVar6 = Z_Construct_UClass_ULightComponent_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar6->_padding_)) {
        if (*(bool *)(lVar4 + 0x18) !=
            (bool)((byte)*(undefined4 *)((longlong)&this_00->_padding_ + 4) & 1)) {
          ULightComponent::SetUseTemperature((ULightComponent *)this_00,*(bool *)(lVar4 + 0x18));
        }
        if (*(char *)(lVar4 + 0x18) != '\0') {
          ULightComponent::SetTemperature((ULightComponent *)this_00,*(float *)(lVar5 + 0x100));
        }
        if (*(char *)(lVar4 + 0x19) != '\0') {
          ULightComponent::SetIntensity((ULightComponent *)this_00,*(float *)(lVar5 + 0x104));
        }
        if (*(char *)(lVar4 + 0x1a) != '\0') {
          local_18._s_0.R = FLinearColor::sRGBToLinearTable[*(byte *)(lVar5 + 0x10a)];
          local_18._s_0.G = FLinearColor::sRGBToLinearTable[*(byte *)(lVar5 + 0x109)];
          local_18._s_0.B = FLinearColor::sRGBToLinearTable[*(byte *)(lVar5 + 0x108)];
          local_18._s_0.A = (float)*(byte *)(lVar5 + 0x10b) * __real_3b808081;
          ULightComponent::SetLightColor
                    ((ULightComponent *)this_00,(FLinearColor *)&local_18._s_0,true);
        }
        pUVar6 = Z_Construct_UClass_UPointLightComponent_NoRegister();
        iVar2 = (int)pUVar6->_padding_;
        if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar6->_padding_)) {
          if (*(char *)(lVar4 + 0x1d) != '\0') {
            ULocalLightComponent::SetAttenuationRadius
                      ((ULocalLightComponent *)this_00,*(float *)(lVar5 + 0x114));
          }
          if (*(char *)(lVar4 + 0x1f) != '\0') {
            UPointLightComponent::SetSourceRadius
                      ((UPointLightComponent *)this_00,*(float *)(lVar5 + 0x118));
          }
          if (*(char *)(lVar4 + 0x20) != '\0') {
            UPointLightComponent::SetSoftSourceRadius
                      ((UPointLightComponent *)this_00,*(float *)(lVar5 + 0x11c));
          }
          if (*(char *)(lVar4 + 0x1e) != '\0') {
            UPointLightComponent::SetSourceLength
                      ((UPointLightComponent *)this_00,*(float *)(lVar5 + 0x120));
          }
          pUVar6 = Z_Construct_UClass_USpotLightComponent_NoRegister();
          iVar2 = (int)pUVar6->_padding_;
          if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar6->_padding_)) {
            if (*(char *)(lVar4 + 0x1b) != '\0') {
              USpotLightComponent::SetInnerConeAngle(this_00,*(float *)(lVar5 + 0x10c));
            }
            if (*(char *)(lVar4 + 0x1c) != '\0') {
              USpotLightComponent::SetOuterConeAngle(this_00,*(float *)(lVar5 + 0x110));
            }
          }
        }
      }
    }
  }
  return;
}

