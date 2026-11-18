// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 31

// StaticClass @ 14a0448f0

UClass * __cdecl UWN_TODReactNightPolicyComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_TODReactNightPolicyComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_TODReactNightPolicyComponent",
               &Z_Registration_Info_UClass_UWN_TODReactNightPolicyComponent.InnerSingleton,
               StaticRegisterNativesUWN_TODReactNightPolicyComponent,0x198,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_TODReactNightPolicyComponent>,
               InternalVTableHelperCtorCaller<UWN_TODReactNightPolicyComponent>,local_res8,
               UWN_TODReactPolicyComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_TODReactNightPolicyComponent.InnerSingleton;
}

// UWN_TODReactNightPolicyComponent @ 14a047400

UWN_TODReactNightPolicyComponent * __thiscall
UWN_TODReactNightPolicyComponent::UWN_TODReactNightPolicyComponent
          (UWN_TODReactNightPolicyComponent *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UWN_TODReactComponent::UWN_TODReactComponent((UWN_TODReactComponent *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xbf800000;
  this->_padding_ = -0x4010000000000000;
  this->_padding_ = -0x4010000000000000;
  this->_padding_ = -0x4010000000000000;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->IntensityByTimeCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->LightContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LightContexts).ArrayNum = 0;
  (this->LightContexts).ArrayMax = 0;
  (this->MeshContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshContexts).ArrayNum = 0;
  (this->MeshContexts).ArrayMax = 0;
  (this->NiagaraContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NiagaraContexts).ArrayNum = 0;
  (this->NiagaraContexts).ArrayMax = 0;
  this->LightIntensity = -1.0;
  FVar1 = FLinearColor::White;
  this->EmissiveIntensity = -1.0;
  (this->LightColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FLinearColor::White;
  this->bCachedIsNight = true;
  this->bIsNight = true;
  this->bWasNiagaraMaterialParamsValid = true;
  (this->EmissiveColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->MaterialParameterCollection).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
  return this;
}

// ~UWN_TODReactNightPolicyComponent @ 14a048410

void __thiscall
UWN_TODReactNightPolicyComponent::~UWN_TODReactNightPolicyComponent
          (UWN_TODReactNightPolicyComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  DestructItems<FWN_NiagaraContext,int>
            ((FWN_NiagaraContext *)(this->NiagaraContexts).AllocatorInstance.Data,
             (this->NiagaraContexts).ArrayNum);
  pFVar1 = (this->NiagaraContexts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWN_MeshContext,int>
            ((FWN_MeshContext *)(this->MeshContexts).AllocatorInstance.Data,
             (this->MeshContexts).ArrayNum);
  pFVar1 = (this->MeshContexts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWN_LightContext,int>
            ((FWN_LightContext *)(this->LightContexts).AllocatorInstance.Data,
             (this->LightContexts).ArrayNum);
  pFVar1 = (this->LightContexts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UWN_TODReactPolicyComponent::_vftable__for__UObject__;
  this->_padding_ =
       (longlong)&UWN_TODReactPolicyComponent::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ =
       (longlong)&UWN_TODReactPolicyComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  UWN_TODReactComponent::~UWN_TODReactComponent((UWN_TODReactComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14a04b660

UClass * __cdecl UWN_TODReactNightPolicyComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_TODReactNightPolicyComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_TODReactNightPolicyComponent",
               &Z_Registration_Info_UClass_UWN_TODReactNightPolicyComponent.InnerSingleton,
               StaticRegisterNativesUWN_TODReactNightPolicyComponent,0x198,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_TODReactNightPolicyComponent>,
               InternalVTableHelperCtorCaller<UWN_TODReactNightPolicyComponent>,local_res8,
               UWN_TODReactPolicyComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_TODReactNightPolicyComponent.InnerSingleton;
}

// StaticRegisterNativesUWN_TODReactNightPolicyComponent @ 14a04bab0

void __cdecl
UWN_TODReactNightPolicyComponent::StaticRegisterNativesUWN_TODReactNightPolicyComponent(void)

{
  return;
}

// CalculateInterpolatedValue<float> @ 14a04dc20

void __thiscall
UWN_TODReactNightPolicyComponent::CalculateInterpolatedValue<float>
          (UWN_TODReactNightPolicyComponent *this,float param_1,float param_2,double param_3,
          float *param_4)

{
  *param_4 = (float)((double)(param_2 - param_1) * param_3 + (double)param_1);
  return;
}

// CalculateInterpolatedValue<UE::Math::TVector2<float>_> @ 14a04dc50

void __thiscall
UWN_TODReactNightPolicyComponent::CalculateInterpolatedValue<UE::Math::TVector2<float>_>
          (UWN_TODReactNightPolicyComponent *this,TVector2<float> param_1,TVector2<float> param_2,
          double param_3,TVector2<float> *param_4)

{
  TVector2<float>_u_0 TVar1;
  float local_res10;
  float fStackX_14;
  float local_res18;
  float fStackX_1c;
  
  local_res18 = param_2.field0_0x0._0_4_;
  local_res10 = param_1.field0_0x0._0_4_;
  fStackX_1c = param_2.field0_0x0._4_4_;
  fStackX_14 = param_1.field0_0x0._4_4_;
  TVar1._s_0.Y = (fStackX_1c - fStackX_14) * (float)param_3 + fStackX_14;
  TVar1._s_0.X = (local_res18 - local_res10) * (float)param_3 + local_res10;
  param_4->field0_0x0 = TVar1;
  return;
}

// CalculateInterpolatedValue<UE::Math::TVector4<float>_> @ 14a04dcb0

void __thiscall
UWN_TODReactNightPolicyComponent::CalculateInterpolatedValue<UE::Math::TVector4<float>_>
          (UWN_TODReactNightPolicyComponent *this,TVector4<float> *param_1,TVector4<float> *param_2,
          double param_3,TVector4<float> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = (param_2->field0_0x0)._s_0.Y;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_2->field0_0x0)._s_0.Z;
  fVar4 = (param_1->field0_0x0)._s_0.Z;
  fVar5 = (param_2->field0_0x0)._s_0.W;
  fVar6 = (param_1->field0_0x0)._s_0.W;
  fVar7 = (param_1->field0_0x0)._s_0.Y;
  fVar8 = (param_1->field0_0x0)._s_0.Z;
  fVar9 = (param_1->field0_0x0)._s_0.W;
  (param_4->field0_0x0)._s_0.X =
       (float)((double)((param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) * param_3) +
       (param_1->field0_0x0)._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (float)((double)(fVar1 - fVar2) * param_3) + fVar7;
  (param_4->field0_0x0)._s_0.Z = (float)((double)(fVar3 - fVar4) * param_3) + fVar8;
  (param_4->field0_0x0)._s_0.W = (float)((double)(fVar5 - fVar6) * param_3) + fVar9;
  return;
}

// CalculateInterpolatedValue<UE::Math::TVector<float>_> @ 14a04dd60

void __thiscall
UWN_TODReactNightPolicyComponent::CalculateInterpolatedValue<UE::Math::TVector<float>_>
          (UWN_TODReactNightPolicyComponent *this,TVector<float> *param_1,TVector<float> *param_2,
          double param_3,TVector<float> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = (param_2->field0_0x0)._s_0.Y;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_2->field0_0x0)._s_0.Z;
  fVar4 = (param_1->field0_0x0)._s_0.Z;
  fVar7 = (float)param_3;
  fVar5 = (param_1->field0_0x0)._s_0.Y;
  fVar6 = (param_1->field0_0x0)._s_0.Z;
  (param_4->field0_0x0)._s_0.X =
       ((param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) * fVar7 +
       (param_1->field0_0x0)._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (fVar1 - fVar2) * fVar7 + fVar5;
  (param_4->field0_0x0)._s_0.Z = (fVar3 - fVar4) * fVar7 + fVar6;
  return;
}

// CalculateInterpolatedValue<FLinearColor> @ 14a04ddc0

void __thiscall
UWN_TODReactNightPolicyComponent::CalculateInterpolatedValue<FLinearColor>
          (UWN_TODReactNightPolicyComponent *this,FLinearColor *param_1,FLinearColor *param_2,
          double param_3,FLinearColor *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = (param_2->field0_0x0)._s_0.A;
  fVar2 = (param_1->field0_0x0)._s_0.A;
  fVar3 = (param_2->field0_0x0)._s_0.G;
  fVar4 = (param_1->field0_0x0)._s_0.G;
  fVar10 = (float)param_3;
  fVar5 = (param_2->field0_0x0)._s_0.B;
  fVar6 = (param_1->field0_0x0)._s_0.B;
  fVar7 = (param_1->field0_0x0)._s_0.G;
  fVar8 = (param_1->field0_0x0)._s_0.B;
  fVar9 = (param_1->field0_0x0)._s_0.A;
  (param_4->field0_0x0)._s_0.R =
       ((param_2->field0_0x0)._s_0.R - (param_1->field0_0x0)._s_0.R) * fVar10 +
       (param_1->field0_0x0)._s_0.R;
  (param_4->field0_0x0)._s_0.G = (fVar3 - fVar4) * fVar10 + fVar7;
  (param_4->field0_0x0)._s_0.B = (fVar5 - fVar6) * fVar10 + fVar8;
  (param_4->field0_0x0)._s_0.A = (fVar1 - fVar2) * fVar10 + fVar9;
  return;
}

// ExtractComponentFromOwningActor<ULightComponent> @ 14a04ea60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

ULightComponent * __thiscall
UWN_TODReactNightPolicyComponent::ExtractComponentFromOwningActor<ULightComponent>
          (UWN_TODReactNightPolicyComponent *this,FComponentReference *param_1)

{
  UStruct *pUVar1;
  FObjectPropertyBase *pFVar2;
  size_t sVar3;
  ULightComponent *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  int iVar7;
  TStringView<wchar_t> local_18;
  
  pUVar6 = (UObject *)this->_padding_;
  if (pUVar6 == (UObject *)0x0) {
    if ((this->_padding_ & 0x30) == 0) {
      return (ULightComponent *)0x0;
    }
    if (this->_padding_ == 0) {
      return (ULightComponent *)0x0;
    }
    if (param_1->_padding_ == 0) {
      return (ULightComponent *)0x0;
    }
    pUVar1 = *(UStruct **)(this->_padding_ + 0x10);
    if (pUVar1 == (UStruct *)0x0) {
      return (ULightComponent *)0x0;
    }
    pFVar2 = FindFProperty<FObjectPropertyBase>(pUVar1,(FName)param_1->_padding_,Default);
    if (pFVar2 == (FObjectPropertyBase *)0x0) {
      return (ULightComponent *)0x0;
    }
    pUVar6 = (UObject *)0x0;
  }
  else {
    if ((FName)param_1->_padding_ == (FName)0x0) {
      if ((int)param_1->_padding_ < 2) {
        return (ULightComponent *)0x0;
      }
      iVar7 = 0;
      if ((int)param_1->_padding_ == 0) {
        local_18.DataPtr = L"";
LAB_14a04ead8:
        sVar3 = wcslen(local_18.DataPtr);
        iVar7 = (int)sVar3;
      }
      else {
        local_18.DataPtr = (wchar_t *)param_1->_padding_;
        if (local_18.DataPtr != (wchar_t *)0x0) goto LAB_14a04ead8;
      }
      local_18.Size = iVar7;
      pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
      pUVar4 = (ULightComponent *)StaticFindObject(pUVar5,pUVar6,&local_18,None);
      goto LAB_14a04eb91;
    }
    pFVar2 = FindFProperty<FObjectPropertyBase>
                       (*(UStruct **)&pUVar6->field_0x10,(FName)param_1->_padding_,Default);
    if (pFVar2 == (FObjectPropertyBase *)0x0) {
      return (ULightComponent *)0x0;
    }
  }
  pUVar4 = (ULightComponent *)(**(code **)(pFVar2->_padding_ + 0x208))(pFVar2,pUVar6,0);
  if (pUVar4 != (ULightComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar7 = (int)pUVar5->_padding_;
    if ((iVar7 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar5->_padding_)) goto LAB_14a04eb91;
  }
  pUVar4 = (ULightComponent *)0x0;
LAB_14a04eb91:
  if (pUVar4 != (ULightComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_ULightComponent_NoRegister();
    iVar7 = (int)pUVar5->_padding_;
    if ((iVar7 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar5->_padding_)) {
      return pUVar4;
    }
  }
  return (ULightComponent *)0x0;
}

// ExtractComponentFromOwningActor<UMeshComponent> @ 14a04ebd0

UMeshComponent * __thiscall
UWN_TODReactNightPolicyComponent::ExtractComponentFromOwningActor<UMeshComponent>
          (UWN_TODReactNightPolicyComponent *this,FComponentReference *param_1)

{
  UStruct *pUVar1;
  FObjectPropertyBase *pFVar2;
  size_t sVar3;
  UMeshComponent *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  int iVar7;
  TStringView<wchar_t> local_18;
  
  pUVar6 = (UObject *)this->_padding_;
  if (pUVar6 == (UObject *)0x0) {
    if ((this->_padding_ & 0x30) == 0) {
      return (UMeshComponent *)0x0;
    }
    if (this->_padding_ == 0) {
      return (UMeshComponent *)0x0;
    }
    if (param_1->_padding_ == 0) {
      return (UMeshComponent *)0x0;
    }
    pUVar1 = *(UStruct **)(this->_padding_ + 0x10);
    if (pUVar1 == (UStruct *)0x0) {
      return (UMeshComponent *)0x0;
    }
    pFVar2 = FindFProperty<FObjectPropertyBase>(pUVar1,(FName)param_1->_padding_,Default);
    if (pFVar2 == (FObjectPropertyBase *)0x0) {
      return (UMeshComponent *)0x0;
    }
    pUVar6 = (UObject *)0x0;
  }
  else {
    if ((FName)param_1->_padding_ == (FName)0x0) {
      if ((int)param_1->_padding_ < 2) {
        return (UMeshComponent *)0x0;
      }
      iVar7 = 0;
      if ((int)param_1->_padding_ == 0) {
        local_18.DataPtr = L"";
LAB_14a04ec48:
        sVar3 = wcslen(local_18.DataPtr);
        iVar7 = (int)sVar3;
      }
      else {
        local_18.DataPtr = (wchar_t *)param_1->_padding_;
        if (local_18.DataPtr != (wchar_t *)0x0) goto LAB_14a04ec48;
      }
      local_18.Size = iVar7;
      pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
      pUVar4 = (UMeshComponent *)StaticFindObject(pUVar5,pUVar6,&local_18,None);
      goto LAB_14a04ed01;
    }
    pFVar2 = FindFProperty<FObjectPropertyBase>
                       (*(UStruct **)&pUVar6->field_0x10,(FName)param_1->_padding_,Default);
    if (pFVar2 == (FObjectPropertyBase *)0x0) {
      return (UMeshComponent *)0x0;
    }
  }
  pUVar4 = (UMeshComponent *)(**(code **)(pFVar2->_padding_ + 0x208))(pFVar2,pUVar6,0);
  if (pUVar4 != (UMeshComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar7 = (int)pUVar5->_padding_;
    if ((iVar7 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar5->_padding_)) goto LAB_14a04ed01;
  }
  pUVar4 = (UMeshComponent *)0x0;
LAB_14a04ed01:
  if (pUVar4 != (UMeshComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_UMeshComponent_NoRegister();
    iVar7 = (int)pUVar5->_padding_;
    if ((iVar7 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar5->_padding_)) {
      return pUVar4;
    }
  }
  return (UMeshComponent *)0x0;
}

// ExtractComponentFromOwningActor<UNiagaraComponent> @ 14a04ed40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraComponent * __thiscall
UWN_TODReactNightPolicyComponent::ExtractComponentFromOwningActor<UNiagaraComponent>
          (UWN_TODReactNightPolicyComponent *this,FComponentReference *param_1)

{
  UStruct *pUVar1;
  FObjectPropertyBase *pFVar2;
  size_t sVar3;
  UNiagaraComponent *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  int iVar7;
  TStringView<wchar_t> local_18;
  
  pUVar6 = (UObject *)this->_padding_;
  if (pUVar6 == (UObject *)0x0) {
    if ((this->_padding_ & 0x30) == 0) {
      return (UNiagaraComponent *)0x0;
    }
    if (this->_padding_ == 0) {
      return (UNiagaraComponent *)0x0;
    }
    if (param_1->_padding_ == 0) {
      return (UNiagaraComponent *)0x0;
    }
    pUVar1 = *(UStruct **)(this->_padding_ + 0x10);
    if (pUVar1 == (UStruct *)0x0) {
      return (UNiagaraComponent *)0x0;
    }
    pFVar2 = FindFProperty<FObjectPropertyBase>(pUVar1,(FName)param_1->_padding_,Default);
    if (pFVar2 == (FObjectPropertyBase *)0x0) {
      return (UNiagaraComponent *)0x0;
    }
    pUVar6 = (UObject *)0x0;
  }
  else {
    if ((FName)param_1->_padding_ == (FName)0x0) {
      if ((int)param_1->_padding_ < 2) {
        return (UNiagaraComponent *)0x0;
      }
      iVar7 = 0;
      if ((int)param_1->_padding_ == 0) {
        local_18.DataPtr = L"";
LAB_14a04edb8:
        sVar3 = wcslen(local_18.DataPtr);
        iVar7 = (int)sVar3;
      }
      else {
        local_18.DataPtr = (wchar_t *)param_1->_padding_;
        if (local_18.DataPtr != (wchar_t *)0x0) goto LAB_14a04edb8;
      }
      local_18.Size = iVar7;
      pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
      pUVar4 = (UNiagaraComponent *)StaticFindObject(pUVar5,pUVar6,&local_18,None);
      goto LAB_14a04ee71;
    }
    pFVar2 = FindFProperty<FObjectPropertyBase>
                       (*(UStruct **)&pUVar6->field_0x10,(FName)param_1->_padding_,Default);
    if (pFVar2 == (FObjectPropertyBase *)0x0) {
      return (UNiagaraComponent *)0x0;
    }
  }
  pUVar4 = (UNiagaraComponent *)(**(code **)(pFVar2->_padding_ + 0x208))(pFVar2,pUVar6,0);
  if (pUVar4 != (UNiagaraComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar7 = (int)pUVar5->_padding_;
    if ((iVar7 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar5->_padding_)) goto LAB_14a04ee71;
  }
  pUVar4 = (UNiagaraComponent *)0x0;
LAB_14a04ee71:
  if (pUVar4 != (UNiagaraComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
    iVar7 = (int)pUVar5->_padding_;
    if ((iVar7 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar5->_padding_)) {
      return pUVar4;
    }
  }
  return (UNiagaraComponent *)0x0;
}

// UWN_TODReactNightPolicyComponent @ 14a04fa60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWN_TODReactNightPolicyComponent * __thiscall
UWN_TODReactNightPolicyComponent::UWN_TODReactNightPolicyComponent
          (UWN_TODReactNightPolicyComponent *this)

{
  byte *pbVar1;
  longlong lVar2;
  FLinearColor FVar3;
  void *pvVar4;
  FObjectInitializer *pFVar5;
  TObjectPtr<UCurveFloat>_u_0 TVar6;
  ulonglong uVar7;
  undefined8 local_res8;
  FString local_18;
  
  pFVar5 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar5);
  this->_padding_ = (longlong)&UWN_TODReactComponent::_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&UWN_TODReactComponent::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UWN_TODReactComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  uVar7 = (ulonglong)_tls_index;
  this->_padding_ = -0x4010000000000000;
  this->_padding_ = -0x4010000000000000;
  this->_padding_ = -0x4010000000000000;
  (this->IntensityByTimeCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->LightContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LightContexts).ArrayNum = 0;
  (this->LightContexts).ArrayMax = 0;
  (this->MeshContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshContexts).ArrayNum = 0;
  (this->MeshContexts).ArrayMax = 0;
  (this->NiagaraContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NiagaraContexts).ArrayNum = 0;
  (this->NiagaraContexts).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar4 = ThreadLocalStoragePointer;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)&this->_padding_ = 0xbf800000;
  this->LightIntensity = -1.0;
  FVar3 = FLinearColor::White;
  lVar2 = *(longlong *)((longlong)pvVar4 + uVar7 * 8);
  this->EmissiveIntensity = -1.0;
  (this->LightColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  FVar3 = FLinearColor::White;
  this->bCachedIsNight = true;
  this->bIsNight = true;
  this->bWasNiagaraMaterialParamsValid = true;
  (this->EmissiveColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  (this->MaterialParameterCollection).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
  if (*(int *)(lVar2 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FGCObject::RegisterGCObject((FGCObject *)&intensityByTimeCurveRef);
      intensityByTimeCurveRef.Object.field0_0x0 = (TObjectPtr<UCurveFloat>_u_0)(FObjectPtr)0x0;
      intensityByTimeCurveRef._padding_ =
           (longlong)&___7__FObjectFinder_VUCurveFloat___ConstructorHelpers__6B_;
      ConstructorHelpers::CheckIfIsInConstructor
                (
                L"/Script/Engine.CurveFloat\'/Engine/Tutorial/ContentIntroCurve.ContentIntroCurve\'"
                );
      ::FString::FString(&local_18,
                         L"/Script/Engine.CurveFloat\'/Engine/Tutorial/ContentIntroCurve.ContentIntroCurve\'"
                        );
      ConstructorHelpers::StripObjectClass(&local_18,true);
      TVar6.DebugPtr = ConstructorHelpersInternal::FindOrLoadObject<UCurveFloat>(&local_18,0);
      if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
         (TVar6.DebugPtr == (UCurveFloat *)0x0)) {
        intensityByTimeCurveRef.Object.field0_0x0 =
             (TObjectPtr<UCurveFloat>_u_0)(TObjectPtr<UCurveFloat>_u_0)TVar6.DebugPtr;
        if (TVar6.DebugPtr == (UCurveFloat *)0x0) {
          ConstructorHelpers::FailedToFind
                    (
                    L"/Script/Engine.CurveFloat\'/Engine/Tutorial/ContentIntroCurve.ContentIntroCurve\'"
                    );
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
        intensityByTimeCurveRef.Object.field0_0x0 =
             (TObjectPtr<UCurveFloat>_u_0)(TObjectPtr<UCurveFloat>_u_0)TVar6.DebugPtr;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      atexit(`UWN_TODReactNightPolicyComponent::UWN_TODReactNightPolicyComponent'::__l2::
             _dynamic_atexit_destructor_for__intensityByTimeCurveRef__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (intensityByTimeCurveRef.Object.field0_0x0 != (UCurveFloat *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)intensityByTimeCurveRef.Object.field0_0x0);
    }
    (this->IntensityByTimeCurve).field0_0x0.ObjectPtr.field0_0x0 =
         (FObjectPtr_u_0)intensityByTimeCurveRef.Object.field0_0x0;
    return this;
  }
  if (2 < (byte)Env._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&Env);
  }
  return this;
}

// BackupLightDayReactSettings @ 14a0501b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
UWN_TODReactNightPolicyComponent::BackupLightDayReactSettings
          (UWN_TODReactNightPolicyComponent *this)

{
  int iVar1;
  undefined8 uVar2;
  ULightComponent *this_00;
  FLinearColor *pFVar3;
  FComponentReference *pFVar4;
  FComponentReference *pFVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  FLinearColor local_28;
  
  pFVar4 = (FComponentReference *)(this->LightContexts).AllocatorInstance.Data;
  iVar1 = (this->LightContexts).ArrayNum;
  puVar6 = (undefined8 *)((longlong)&pFVar4[1]._padding_ + 4);
  pFVar5 = (FComponentReference *)((longlong)pFVar4 + (longlong)iVar1 * 0x58);
  while( true ) {
    if ((this->LightContexts).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FWN_LightContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) break;
    this_00 = ExtractComponentFromOwningActor<ULightComponent>(this,pFVar4);
    if (this_00 != (ULightComponent *)0x0) {
      *(undefined4 *)((longlong)puVar6 + -4) = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
      pFVar3 = ULightComponentBase::GetLightColor((ULightComponentBase *)this_00,&local_28);
      uVar2 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
      *puVar6 = *(undefined8 *)&pFVar3->field0_0x0;
      puVar6[1] = uVar2;
    }
    pFVar4 = (FComponentReference *)&pFVar4[2]._padding_;
    puVar6 = puVar6 + 0xb;
  }
  return;
}

// BackupMeshDayReactSettings @ 14a050250

void __thiscall
UWN_TODReactNightPolicyComponent::BackupMeshDayReactSettings
          (UWN_TODReactNightPolicyComponent *this,bool param_1)

{
  int iVar1;
  UMeshComponent *pUVar2;
  FComponentReference *pFVar3;
  FComponentReference *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->MeshContexts).ArrayNum;
  pFVar3 = (FComponentReference *)(this->MeshContexts).AllocatorInstance.Data;
  pFVar4 = (FComponentReference *)((longlong)pFVar3 + (longlong)iVar1 * 0x90);
  while( true ) {
    if ((this->MeshContexts).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FWN_MeshContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    pUVar2 = ExtractComponentFromOwningActor<UMeshComponent>(this,pFVar3);
    if (pUVar2 != (UMeshComponent *)0x0) {
      GetParametersFromMeshComponent
                (this,pUVar2,
                 (TMap<int,FWN_MeshDayReactSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_MeshDayReactSetting,0>_>
                  *)&pFVar3[1]._padding_,param_1);
    }
    pFVar3 = (FComponentReference *)&pFVar3[3]._padding_;
  }
  return;
}

// BlendLightComponents @ 14a050470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
UWN_TODReactNightPolicyComponent::BlendLightComponents
          (UWN_TODReactNightPolicyComponent *this,double param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  ULightComponent *this_00;
  FLinearColor *pFVar4;
  FComponentReference *pFVar5;
  FComponentReference *pFVar6;
  float fVar7;
  float fVar8;
  undefined1 local_res8 [8];
  FLinearColor_u_0 local_38 [2];
  
  iVar1 = (this->LightContexts).ArrayNum;
  pFVar5 = (FComponentReference *)(this->LightContexts).AllocatorInstance.Data;
  pFVar6 = (FComponentReference *)((longlong)pFVar5 + (longlong)iVar1 * 0x58);
  while( true ) {
    if ((this->LightContexts).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FWN_LightContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar6) break;
    this_00 = ExtractComponentFromOwningActor<ULightComponent>(this,pFVar5);
    if (this_00 != (ULightComponent *)0x0) {
      if ((char)pFVar5[1]._padding_ == '\0') {
        fVar7 = this->LightIntensity;
      }
      else {
        fVar7 = *(float *)((longlong)&pFVar5[1]._padding_ + 4);
      }
      ULightComponent::SetIntensity
                (this_00,(float)((double)(fVar7 - *(float *)&pFVar5[1]._padding_) * param_1 +
                                (double)*(float *)&pFVar5[1]._padding_));
      fVar7 = *(float *)((longlong)&pFVar5[1]._padding_ + 4);
      fVar2 = (float)pFVar5[1].OtherActor.WeakPtr.ObjectIndex;
      fVar3 = (float)pFVar5[1].OtherActor.WeakPtr.ObjectSerialNumber;
      fVar8 = (float)param_1;
      pFVar4 = (FLinearColor *)&pFVar5[1]._padding_;
      if ((char)pFVar5[1]._padding_ == '\0') {
        pFVar4 = &this->LightColor;
      }
      local_38[0]._0_4_ = ((pFVar4->field0_0x0)._s_0.R - fVar7) * fVar8 + fVar7;
      local_38[0]._4_4_ = ((pFVar4->field0_0x0)._s_0.G - fVar2) * fVar8 + fVar2;
      local_38[0]._8_4_ = ((pFVar4->field0_0x0)._s_0.B - fVar3) * fVar8 + fVar3;
      local_38[0]._12_4_ =
           ((pFVar4->field0_0x0)._s_0.A - *(float *)&pFVar5[2]._padding_) * fVar8 +
           *(float *)&pFVar5[2]._padding_;
      ULightComponent::SetLightColor(this_00,(FLinearColor *)&local_38[0]._s_0,true);
    }
    pFVar5 = (FComponentReference *)&pFVar5[2]._padding_;
  }
  return;
}

// BlendMeshComponents @ 14a0505e0

void __thiscall
UWN_TODReactNightPolicyComponent::BlendMeshComponents
          (UWN_TODReactNightPolicyComponent *this,double param_1)

{
  float fVar1;
  uint uVar2;
  UMaterialParameterCollection *pUVar3;
  UMaterialParameterCollection *pUVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  UMeshComponent *pUVar15;
  UMaterialInstanceDynamic *this_00;
  UClass *pUVar16;
  FWN_MeshDayReactSetting *pFVar17;
  FName *pFVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  uint uVar21;
  FComponentReference *pFVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  undefined1 local_res8 [8];
  uint local_res18;
  FLinearColor_u_0 local_c8;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  FComponentReference *local_a8;
  FName local_a0;
  FName local_98 [2];
  FLinearColor_u_0 local_88 [5];
  
  pFVar19 = (this->MeshContexts).AllocatorInstance.Data;
  uVar2 = (this->MeshContexts).ArrayNum;
  uVar20 = (ulonglong)(int)uVar2;
  pFVar23 = pFVar19 + 0x74;
  pFVar22 = (FComponentReference *)(pFVar19 + uVar20 * 0x90);
  local_a8 = pFVar22;
  do {
    if ((this->MeshContexts).ArrayNum != (int)uVar20) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FWN_MeshContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if ((FComponentReference *)(pFVar23 + -0x74) == pFVar22) {
      return;
    }
    pUVar15 = ExtractComponentFromOwningActor<UMeshComponent>
                        (this,(FComponentReference *)(pFVar23 + -0x74));
    if (pUVar15 != (UMeshComponent *)0x0) {
      iVar13 = (**(code **)(pUVar15->_padding_ + 0x810))(pUVar15);
      uVar20 = 0;
      local_res18 = 0;
      if (0 < iVar13) {
LAB_14a0506b0:
        uVar25 = (uint)uVar20;
        this_00 = (UMaterialInstanceDynamic *)
                  (**(code **)(pUVar15->_padding_ + 0x690))(pUVar15,uVar20);
        if ((this_00 != (UMaterialInstanceDynamic *)0x0) &&
           (*(int *)(pFVar23 + -0x2c) != *(int *)pFVar23)) {
          pFVar19 = *(FScriptContainerElement **)(pFVar23 + 0xc);
          if (pFVar19 == (FScriptContainerElement *)0x0) {
            pFVar19 = pFVar23 + 4;
          }
          iVar14 = *(int *)(pFVar19 + (*(int *)(pFVar23 + 0x14) - 1 & uVar20) * 4);
          if (iVar14 != -1) {
            do {
              if (*(uint *)(*(longlong *)(pFVar23 + -0x34) + (longlong)iVar14 * 0x30) == uVar25) {
                pUVar16 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
                iVar14 = (int)pUVar16->_padding_;
                if (((iVar14 <= *(int *)(this_00->_padding_ + 0x38)) &&
                    ((longlong *)
                     *(undefined1 **)
                      (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
                     &pUVar16->_padding_)) ||
                   (this_00 = (UMaterialInstanceDynamic *)
                              (**(code **)(pUVar15->_padding_ + 0x6d8))(pUVar15,uVar20,this_00,0),
                   this_00 != (UMaterialInstanceDynamic *)0x0)) {
                  pFVar17 = TMapBase<int,FWN_MeshDayReactSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_MeshDayReactSetting,0>_>
                            ::FindChecked((TMapBase<int,FWN_MeshDayReactSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_MeshDayReactSetting,0>_>
                                           *)(pFVar23 + -0x34),uVar25);
                  if (pFVar23[-0x4c] == (FScriptContainerElement)0x0) {
                    fVar27 = this->EmissiveIntensity;
                  }
                  else {
                    fVar27 = *(float *)(pFVar23 + -0x48);
                  }
                  fVar1 = (pFVar17->DayReactSetting).EmissiveIntensity;
                  pFVar18 = ::FName::FName(&local_a0,L"EmissiveIntensity");
                  UMaterialInstanceDynamic::SetScalarParameterValue
                            (this_00,*pFVar18,
                             (float)((double)(fVar27 - fVar1) * param_1 + (double)fVar1));
                  pFVar19 = pFVar23 + -0x44;
                  if (pFVar23[-0x4c] == (FScriptContainerElement)0x0) {
                    pFVar19 = (FScriptContainerElement *)&this->EmissiveColor;
                  }
                  fVar27 = *(float *)&pFVar19->field_0x0;
                  fVar1 = *(float *)(pFVar19 + 4);
                  fVar6 = *(float *)(pFVar19 + 8);
                  fVar7 = *(float *)(pFVar19 + 0xc);
                  fVar8 = (pFVar17->DayReactSetting).EmissiveColor.field0_0x0._s_0.R;
                  fVar9 = (pFVar17->DayReactSetting).EmissiveColor.field0_0x0._s_0.G;
                  fVar10 = (pFVar17->DayReactSetting).EmissiveColor.field0_0x0._s_0.B;
                  fVar11 = (pFVar17->DayReactSetting).EmissiveColor.field0_0x0._s_0.A;
                  fVar28 = (float)param_1;
                  pFVar18 = ::FName::FName(local_98,L"EmissiveColor");
                  local_c8._s_0.R = (fVar27 - fVar8) * fVar28 + fVar8;
                  local_c8._s_0.G = (fVar1 - fVar9) * fVar28 + fVar9;
                  local_c8._s_0.B = (fVar6 - fVar10) * fVar28 + fVar10;
                  local_c8._s_0.A = (fVar7 - fVar11) * fVar28 + fVar11;
                  UMaterialInstanceDynamic::SetVectorParameterValue
                            (this_00,*pFVar18,(FLinearColor *)&local_c8._s_0);
                  if ((((this->MaterialParameterCollection).field0_0x0.DebugPtr !=
                        (UMaterialParameterCollection *)0x0) &&
                      (pUVar3 = (pFVar17->DayReactParams).field0_0x0.DebugPtr,
                      pUVar3 != (UMaterialParameterCollection *)0x0)) &&
                     (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0)) {
                    uVar21 = 0;
                    if ((((this->MaterialParameterCollection).field0_0x0.DebugPtr)->ScalarParameters
                        ).ArrayNum < 1) goto LAB_14a050ab8;
                    lVar24 = 0;
                    goto LAB_14a0508c0;
                  }
                }
                break;
              }
              iVar14 = *(int *)(*(longlong *)(pFVar23 + -0x34) + 0x28 + (longlong)iVar14 * 0x30);
            } while (iVar14 != -1);
          }
        }
        goto LAB_14a050d39;
      }
    }
LAB_14a050d59:
    uVar20 = (ulonglong)uVar2;
    pFVar23 = pFVar23 + 0x90;
  } while( true );
  while( true ) {
    uVar26 = ~uVar21 >> 0x1f;
    uVar25 = 0;
    if ((int)uVar21 < (pUVar3->ScalarParameters).ArrayNum) {
      uVar25 = uVar26;
    }
    if ((uVar25 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar19 = (pUVar3->ScalarParameters).AllocatorInstance.Data;
    pUVar3 = (this->MaterialParameterCollection).field0_0x0.DebugPtr;
    uVar25 = 0;
    if ((int)uVar21 < (pUVar3->ScalarParameters).ArrayNum) {
      uVar25 = uVar26;
    }
    if ((uVar25 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar25 = local_res18;
    if (*(longlong *)((pUVar3->ScalarParameters).AllocatorInstance.Data + lVar24) !=
        *(longlong *)(pFVar19 + lVar24)) break;
    pUVar3 = (this->MaterialParameterCollection).field0_0x0.DebugPtr;
    uVar25 = 0;
    if ((int)uVar21 < (pUVar3->ScalarParameters).ArrayNum) {
      uVar25 = uVar26;
    }
    if ((uVar25 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar4 = (pFVar17->DayReactParams).field0_0x0.DebugPtr;
    fVar27 = *(float *)((pUVar3->ScalarParameters).AllocatorInstance.Data + lVar24 + 0x18);
    uVar25 = 0;
    if ((int)uVar21 < (pUVar4->ScalarParameters).ArrayNum) {
      uVar25 = uVar26;
    }
    if ((uVar25 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar3 = (pFVar17->DayReactParams).field0_0x0.DebugPtr;
    fVar1 = *(float *)((pUVar4->ScalarParameters).AllocatorInstance.Data + lVar24 + 0x18);
    uVar25 = 0;
    if ((int)uVar21 < (pUVar3->ScalarParameters).ArrayNum) {
      uVar25 = uVar26;
    }
    if ((uVar25 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UMaterialInstanceDynamic::SetScalarParameterValue
              (this_00,*(FName *)((pUVar3->ScalarParameters).AllocatorInstance.Data + lVar24),
               (float)((double)(fVar27 - fVar1) * param_1 + (double)fVar1));
    uVar21 = uVar21 + 1;
    lVar24 = lVar24 + 0x1c;
    uVar25 = local_res18;
    if ((((this->MaterialParameterCollection).field0_0x0.DebugPtr)->ScalarParameters).ArrayNum <=
        (int)uVar21) break;
LAB_14a0508c0:
    pUVar3 = (pFVar17->DayReactParams).field0_0x0.DebugPtr;
    uVar25 = local_res18;
    if ((pUVar3->ScalarParameters).ArrayNum + -1 < (int)uVar21) break;
  }
LAB_14a050ab8:
  uVar21 = 0;
  if (0 < (((this->MaterialParameterCollection).field0_0x0.DebugPtr)->VectorParameters).ArrayNum) {
    lVar24 = 0;
    do {
      pUVar3 = (pFVar17->DayReactParams).field0_0x0.DebugPtr;
      uVar25 = local_res18;
      if ((pUVar3->VectorParameters).ArrayNum + -1 < (int)uVar21) break;
      uVar26 = ~uVar21 >> 0x1f;
      uVar25 = 0;
      if ((int)uVar21 < (pUVar3->VectorParameters).ArrayNum) {
        uVar25 = uVar26;
      }
      if ((uVar25 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar19 = (pUVar3->VectorParameters).AllocatorInstance.Data;
      pUVar3 = (this->MaterialParameterCollection).field0_0x0.DebugPtr;
      uVar25 = 0;
      if ((int)uVar21 < (pUVar3->VectorParameters).ArrayNum) {
        uVar25 = uVar26;
      }
      if ((uVar25 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar25 = local_res18;
      if (*(longlong *)((pUVar3->VectorParameters).AllocatorInstance.Data + lVar24) !=
          *(longlong *)(pFVar19 + lVar24)) break;
      pUVar3 = (this->MaterialParameterCollection).field0_0x0.DebugPtr;
      uVar25 = 0;
      if ((int)uVar21 < (pUVar3->VectorParameters).ArrayNum) {
        uVar25 = uVar26;
      }
      if ((uVar25 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar4 = (pFVar17->DayReactParams).field0_0x0.DebugPtr;
      pFVar19 = (pUVar3->VectorParameters).AllocatorInstance.Data + lVar24 + 0x18;
      fVar27 = *(float *)pFVar19;
      fVar1 = *(float *)(pFVar19 + 4);
      fVar6 = *(float *)(pFVar19 + 8);
      fVar7 = *(float *)(pFVar19 + 0xc);
      uVar25 = 0;
      if ((int)uVar21 < (pUVar4->VectorParameters).ArrayNum) {
        uVar25 = uVar26;
      }
      if ((uVar25 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar3 = (pFVar17->DayReactParams).field0_0x0.DebugPtr;
      pFVar19 = (pUVar4->VectorParameters).AllocatorInstance.Data + lVar24 + 0x18;
      uVar25 = 0;
      if ((int)uVar21 < (pUVar3->VectorParameters).ArrayNum) {
        uVar25 = uVar26;
      }
      local_b8 = (fVar27 - *(float *)pFVar19) * fVar28 + *(float *)pFVar19;
      fStack_b4 = (fVar1 - *(float *)(pFVar19 + 4)) * fVar28 + *(float *)(pFVar19 + 4);
      fStack_b0 = (fVar6 - *(float *)(pFVar19 + 8)) * fVar28 + *(float *)(pFVar19 + 8);
      fStack_ac = (fVar7 - *(float *)(pFVar19 + 0xc)) * fVar28 + *(float *)(pFVar19 + 0xc);
      if ((uVar25 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_88[0]._0_8_ = CONCAT44(fStack_b4,local_b8);
      local_88[0]._8_8_ = CONCAT44(fStack_ac,fStack_b0);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (this_00,*(FName *)((pUVar3->VectorParameters).AllocatorInstance.Data + lVar24),
                 (FLinearColor *)&local_88[0]._s_0);
      uVar21 = uVar21 + 1;
      lVar24 = lVar24 + 0x28;
      uVar25 = local_res18;
    } while ((int)uVar21 <
             (((this->MaterialParameterCollection).field0_0x0.DebugPtr)->VectorParameters).ArrayNum)
    ;
  }
LAB_14a050d39:
  local_res18 = uVar25 + 1;
  uVar20 = (ulonglong)local_res18;
  pFVar22 = local_a8;
  if (iVar13 <= (int)local_res18) goto LAB_14a050d59;
  goto LAB_14a0506b0;
}

// BlendNiagaraComponents @ 14a050da0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UWN_TODReactNightPolicyComponent::BlendNiagaraComponents
          (UWN_TODReactNightPolicyComponent *this,double param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  UNiagaraComponent *this_00;
  ulonglong uVar5;
  FName *pFVar6;
  FName *pFVar7;
  FComponentReference *pFVar8;
  longlong *plVar9;
  FComponentReference *pFVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_res8;
  float local_res20;
  float fStackX_24;
  float fStack_a4;
  FLinearColor_u_0 local_88;
  TVector2<double>_u_0 local_78;
  TVector4<double>_u_0 local_68;
  
  pFVar10 = (FComponentReference *)(this->NiagaraContexts).AllocatorInstance.Data;
  uVar2 = (this->NiagaraContexts).ArrayNum;
  uVar5 = (ulonglong)(int)uVar2;
  plVar9 = &pFVar10[1]._padding_;
  pFVar8 = (FComponentReference *)((longlong)pFVar10 + uVar5 * 0x38);
  while( true ) {
    if ((this->NiagaraContexts).ArrayNum != (int)uVar5) {
      `TCheckedPointerIterator<FWN_NiagaraContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar10 == pFVar8) {
      return;
    }
    this_00 = ExtractComponentFromOwningActor<UNiagaraComponent>(this,pFVar10);
    if (this_00 != (UNiagaraComponent *)0x0) break;
LAB_14a051117:
    uVar5 = (ulonglong)uVar2;
    pFVar10 = (FComponentReference *)&pFVar10[1]._padding_;
    plVar9 = plVar9 + 7;
  }
  lVar4 = *plVar9;
  pFVar6 = (FName *)((FComponentReference *)(plVar9 + -1))->_padding_;
  pFVar7 = pFVar6 + (longlong)(int)lVar4 * 0x10;
LAB_14a050e30:
  do {
    if ((int)*plVar9 != (int)lVar4) {
      `TCheckedPointerIterator<FWN_NiagaraUserParamEntry,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar6 == pFVar7) goto LAB_14a051117;
    cVar1 = (char)pFVar6[1].ComparisonIndex.Value;
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        UNiagaraComponent::SetVariableFloat
                  (this_00,*pFVar6,
                   (float)((double)((float)pFVar6[2].ComparisonIndex.Value - (float)pFVar6[1].Number
                                   ) * param_1 + (double)(float)pFVar6[1].Number));
        pFVar6 = pFVar6 + 0x10;
        goto LAB_14a050e30;
      }
      if (cVar1 == '\x02') {
        uVar3 = *(undefined8 *)&pFVar6[3].Number;
        local_res8._0_4_ = (float)uVar3;
        local_res8._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
        local_res20 = (float)*(undefined8 *)&pFVar6[2].Number;
        fStackX_24 = (float)((ulonglong)*(undefined8 *)&pFVar6[2].Number >> 0x20);
        local_78._s_0.X = (double)(((float)local_res8 - local_res20) * (float)param_1 + local_res20)
        ;
        local_78._s_0.Y = (double)((local_res8._4_4_ - fStackX_24) * (float)param_1 + fStackX_24);
        local_res8 = uVar3;
        UNiagaraComponent::SetVariableVec2(this_00,*pFVar6,(TVector2<double> *)&local_78._s_0);
        pFVar6 = pFVar6 + 0x10;
        goto LAB_14a050e30;
      }
      if (cVar1 == '\x03') {
        fVar11 = (float)*(undefined8 *)&pFVar6[4].Number;
        fVar12 = (float)param_1;
        fStack_a4 = (float)((ulonglong)*(undefined8 *)&pFVar6[4].Number >> 0x20);
        local_68._s_0.X =
             (double)(((float)pFVar6[6].ComparisonIndex.Value - fVar11) * fVar12 + fVar11);
        local_68._s_0.Y = (double)(((float)pFVar6[6].Number - fStack_a4) * fVar12 + fStack_a4);
        local_68._s_0.Z =
             (double)(((float)pFVar6[7].ComparisonIndex.Value - (float)pFVar6[5].Number) * fVar12 +
                     (float)pFVar6[5].Number);
        UNiagaraComponent::SetVariableVec3(this_00,*pFVar6,(TVector<double> *)&local_68._s_0);
        pFVar6 = pFVar6 + 0x10;
        goto LAB_14a050e30;
      }
      if (cVar1 == '\x04') {
        fVar11 = (float)pFVar6[8].ComparisonIndex.Value;
        fVar12 = (float)pFVar6[9].ComparisonIndex.Value;
        local_68._s_0.X =
             (double)((float)((double)((float)pFVar6[10].ComparisonIndex.Value - fVar11) * param_1)
                     + fVar11);
        local_68._s_0.Y =
             (double)((float)((double)((float)pFVar6[10].Number - (float)pFVar6[8].Number) * param_1
                             ) + (float)pFVar6[8].Number);
        local_68._s_0.Z =
             (double)((float)((double)((float)pFVar6[0xb].ComparisonIndex.Value - fVar12) * param_1)
                     + fVar12);
        local_68._s_0.W =
             (double)((float)((double)((float)pFVar6[0xb].Number - (float)pFVar6[9].Number) *
                             param_1) + (float)pFVar6[9].Number);
        UNiagaraComponent::SetVariableVec4(this_00,*pFVar6,(TVector4<double> *)&local_68._s_0);
        pFVar6 = pFVar6 + 0x10;
        goto LAB_14a050e30;
      }
      if (cVar1 == '\x05') {
        fVar11 = (float)pFVar6[0xc].ComparisonIndex.Value;
        fVar12 = (float)pFVar6[0xd].ComparisonIndex.Value;
        fVar13 = (float)param_1;
        local_88._s_0.R = ((float)pFVar6[0xe].ComparisonIndex.Value - fVar11) * fVar13 + fVar11;
        local_88._s_0.G =
             ((float)pFVar6[0xe].Number - (float)pFVar6[0xc].Number) * fVar13 +
             (float)pFVar6[0xc].Number;
        local_88._s_0.B = ((float)pFVar6[0xf].ComparisonIndex.Value - fVar12) * fVar13 + fVar12;
        local_88._s_0.A =
             ((float)pFVar6[0xf].Number - (float)pFVar6[0xd].Number) * fVar13 +
             (float)pFVar6[0xd].Number;
        UNiagaraComponent::SetVariableLinearColor(this_00,*pFVar6,(FLinearColor *)&local_88._s_0);
      }
    }
    pFVar6 = pFVar6 + 0x10;
  } while( true );
}

// CheckAllComponentsValid @ 14a052360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UWN_TODReactNightPolicyComponent::CheckAllComponentsValid(UWN_TODReactNightPolicyComponent *this)

{
  int iVar1;
  FString *pFVar2;
  ULightComponent *pUVar3;
  UMeshComponent *pUVar4;
  UNiagaraComponent *pUVar5;
  bool bVar6;
  FComponentReference *pFVar7;
  ForAnyElementType FVar8;
  FComponentReference *pFVar9;
  FName local_res8;
  int local_res10;
  FString local_58;
  FString local_48;
  
  bVar6 = true;
  if (this->_padding_ == 0) {
    pFVar2 = ::FString::FString(&local_48,L"INVALID OWNER");
    FVar8.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar1 = (pFVar2->Data).ArrayNum;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
    local_res10 = iVar1;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      local_res10 = iVar1;
    }
  }
  else {
    local_res8 = *(FName *)(this->_padding_ + 0x18);
    ::FName::ToString(&local_res8,&local_58);
    FVar8.Data = local_58.Data.AllocatorInstance.Data;
    local_res10 = local_58.Data.ArrayNum;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
  }
  iVar1 = (this->LightContexts).ArrayNum;
  pFVar7 = (FComponentReference *)(this->LightContexts).AllocatorInstance.Data;
  pFVar9 = (FComponentReference *)((longlong)pFVar7 + (longlong)iVar1 * 0x58);
  while( true ) {
    if ((this->LightContexts).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FWN_LightContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar7 == pFVar9) break;
    pUVar3 = ExtractComponentFromOwningActor<ULightComponent>(this,pFVar7);
    if (pUVar3 == (ULightComponent *)0x0) {
      if (1 < (byte)Env._0_1_) {
        local_res8 = (FName)this->_padding_;
        ::FName::ToString(&local_res8,&local_58);
        ::FName::ToString((FName *)pFVar7,&local_48);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&Env);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      bVar6 = false;
    }
    pFVar7 = (FComponentReference *)&pFVar7[2]._padding_;
  }
  iVar1 = (this->MeshContexts).ArrayNum;
  pFVar7 = (FComponentReference *)(this->MeshContexts).AllocatorInstance.Data;
  pFVar9 = (FComponentReference *)((longlong)pFVar7 + (longlong)iVar1 * 0x90);
  while( true ) {
    if ((this->MeshContexts).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FWN_MeshContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar7 == pFVar9) break;
    pUVar4 = ExtractComponentFromOwningActor<UMeshComponent>(this,pFVar7);
    if (pUVar4 == (UMeshComponent *)0x0) {
      if (1 < (byte)Env._0_1_) {
        local_res8 = (FName)this->_padding_;
        ::FName::ToString(&local_res8,&local_58);
        ::FName::ToString((FName *)pFVar7,&local_48);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&Env);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      bVar6 = false;
    }
    pFVar7 = (FComponentReference *)&pFVar7[3]._padding_;
  }
  iVar1 = (this->NiagaraContexts).ArrayNum;
  pFVar7 = (FComponentReference *)(this->NiagaraContexts).AllocatorInstance.Data;
  pFVar9 = (FComponentReference *)((longlong)pFVar7 + (longlong)iVar1 * 0x38);
  while( true ) {
    if ((this->NiagaraContexts).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FWN_NiagaraContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar7 == pFVar9) break;
    pUVar5 = ExtractComponentFromOwningActor<UNiagaraComponent>(this,pFVar7);
    if (pUVar5 == (UNiagaraComponent *)0x0) {
      if (1 < (byte)Env._0_1_) {
        local_res8 = (FName)this->_padding_;
        ::FName::ToString(&local_res8,&local_58);
        ::FName::ToString((FName *)pFVar7,&local_48);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&Env);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      bVar6 = false;
    }
    pFVar7 = (FComponentReference *)&pFVar7[1]._padding_;
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  return bVar6;
}

// CheckMaterialParametersDaySetting @ 14a0531d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWN_TODReactNightPolicyComponent::CheckMaterialParametersDaySetting
          (UWN_TODReactNightPolicyComponent *this)

{
  FScriptContainerElement *pFVar1;
  UMaterialParameterCollection *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FWN_MeshDayReactSetting *pFVar7;
  FString *pFVar8;
  int iVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  FName local_res20;
  FString local_e8;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  iVar9 = (this->MeshContexts).ArrayNum;
  uVar10 = 0;
  if (iVar9 != 0) {
    if ((iVar9 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (this->MeshContexts).AllocatorInstance.Data;
    if (*(int *)(pFVar1 + 0x48) != *(int *)(pFVar1 + 0x74)) {
      pFVar6 = *(FScriptContainerElement **)(pFVar1 + 0x80);
      if (*(FScriptContainerElement **)(pFVar1 + 0x80) == (FScriptContainerElement *)0x0) {
        pFVar6 = pFVar1 + 0x78;
      }
      iVar9 = *(int *)pFVar6;
      if (iVar9 != -1) {
        while (*(int *)(*(longlong *)(pFVar1 + 0x40) + (longlong)iVar9 * 0x30) != 0) {
          iVar9 = *(int *)(*(longlong *)(pFVar1 + 0x40) + 0x28 + (longlong)iVar9 * 0x30);
          if (iVar9 == -1) {
            return;
          }
        }
        if (((this->MeshContexts).ArrayNum < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar7 = TMapBase<int,FWN_MeshDayReactSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_MeshDayReactSetting,0>_>
                 ::FindChecked((TMapBase<int,FWN_MeshDayReactSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_MeshDayReactSetting,0>_>
                                *)((this->MeshContexts).AllocatorInstance.Data + 0x40),0);
        if ((((this->MaterialParameterCollection).field0_0x0.DebugPtr !=
              (UMaterialParameterCollection *)0x0) ||
            ((pUVar2 = (pFVar7->DayReactParams).field0_0x0.DebugPtr,
             pUVar2 != (UMaterialParameterCollection *)0x0 &&
             (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)))) &&
           ((pUVar2 = (this->MaterialParameterCollection).field0_0x0.DebugPtr,
            (pUVar2->ScalarParameters).ArrayNum != 0 ||
            (((pUVar2->VectorParameters).ArrayNum != 0 ||
             ((pUVar2 = (pFVar7->DayReactParams).field0_0x0.DebugPtr,
              pUVar2 != (UMaterialParameterCollection *)0x0 &&
              (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)))))))) {
          if (this->_padding_ == 0) {
            pFVar8 = ::FString::FString(local_60,L"INVALID OWNER");
            FVar11.Data = (pFVar8->Data).AllocatorInstance.Data;
            (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar8->Data).ArrayNum = 0;
            (pFVar8->Data).ArrayMax = 0;
            if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
            }
          }
          else {
            local_res20 = *(FName *)(this->_padding_ + 0x18);
            ::FName::ToString(&local_res20,&local_e8);
            FVar11.Data = local_e8.Data.AllocatorInstance.Data;
            local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_e8.Data.ArrayNum = 0;
            local_e8.Data.ArrayMax = 0;
          }
          pUVar2 = (this->MaterialParameterCollection).field0_0x0.DebugPtr;
          if ((((pUVar2->ScalarParameters).ArrayNum == 0) &&
              ((pUVar2->VectorParameters).ArrayNum == 0)) ||
             ((pUVar2 = (pFVar7->DayReactParams).field0_0x0.DebugPtr,
              pUVar2 != (UMaterialParameterCollection *)0x0 &&
              (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)))) {
            if (0 < (((this->MaterialParameterCollection).field0_0x0.DebugPtr)->ScalarParameters).
                    ArrayNum) {
              lVar12 = 0;
              do {
                pUVar2 = (pFVar7->DayReactParams).field0_0x0.DebugPtr;
                iVar9 = (pUVar2->ScalarParameters).ArrayNum;
                if (iVar9 + -1 < (int)uVar10) {
                  if (2 < (byte)Env._0_1_) {
                    local_d0 = (FName)this->_padding_;
                    ::FName::ToString(&local_d0,&local_a0);
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&Env);
                    local_b0.Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
LAB_14a053593:
                    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                    }
                  }
                  break;
                }
                uVar5 = 0;
                if ((int)uVar10 < iVar9) {
                  uVar5 = ~uVar10 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar1 = (pUVar2->ScalarParameters).AllocatorInstance.Data;
                pUVar2 = (this->MaterialParameterCollection).field0_0x0.DebugPtr;
                uVar5 = 0;
                if ((int)uVar10 < (pUVar2->ScalarParameters).ArrayNum) {
                  uVar5 = ~uVar10 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (*(longlong *)((pUVar2->ScalarParameters).AllocatorInstance.Data + lVar12) !=
                    *(longlong *)(pFVar1 + lVar12)) {
                  if (2 < (byte)Env._0_1_) {
                    local_d8 = (FName)this->_padding_;
                    ::FName::ToString(&local_d8,&local_b0);
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&Env);
                    goto LAB_14a053593;
                  }
                  break;
                }
                uVar10 = uVar10 + 1;
                lVar12 = lVar12 + 0x1c;
              } while ((int)uVar10 <
                       (((this->MaterialParameterCollection).field0_0x0.DebugPtr)->ScalarParameters)
                       .ArrayNum);
            }
            uVar10 = 0;
            if (0 < (((this->MaterialParameterCollection).field0_0x0.DebugPtr)->VectorParameters).
                    ArrayNum) {
              lVar12 = 0;
              do {
                pUVar2 = (pFVar7->DayReactParams).field0_0x0.DebugPtr;
                iVar9 = (pUVar2->VectorParameters).ArrayNum;
                if (iVar9 + -1 < (int)uVar10) {
                  if (2 < (byte)Env._0_1_) {
                    local_c0 = (FName)this->_padding_;
                    ::FName::ToString(&local_c0,&local_80);
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&Env);
                    local_90.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
LAB_14a053743:
                    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_90.Data.AllocatorInstance.Data);
                    }
                  }
                  break;
                }
                uVar5 = 0;
                if ((int)uVar10 < iVar9) {
                  uVar5 = ~uVar10 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar1 = (pUVar2->VectorParameters).AllocatorInstance.Data;
                pUVar2 = (this->MaterialParameterCollection).field0_0x0.DebugPtr;
                uVar5 = 0;
                if ((int)uVar10 < (pUVar2->VectorParameters).ArrayNum) {
                  uVar5 = ~uVar10 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (*(longlong *)((pUVar2->VectorParameters).AllocatorInstance.Data + lVar12) !=
                    *(longlong *)(pFVar1 + lVar12)) {
                  if (2 < (byte)Env._0_1_) {
                    local_c8 = (FName)this->_padding_;
                    ::FName::ToString(&local_c8,&local_90);
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&Env);
                    goto LAB_14a053743;
                  }
                  break;
                }
                uVar10 = uVar10 + 1;
                lVar12 = lVar12 + 0x28;
              } while ((int)uVar10 <
                       (((this->MaterialParameterCollection).field0_0x0.DebugPtr)->VectorParameters)
                       .ArrayNum);
            }
          }
          else if (2 < (byte)Env._0_1_) {
            local_b8 = (FName)this->_padding_;
            ::FName::ToString(&local_b8,&local_70);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&Env);
            if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
            }
          }
          if (FVar11.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar11.Data);
          }
        }
      }
    }
  }
  return;
}

// CopyMaterialParameterCollection @ 14a053800

void __thiscall
UWN_TODReactNightPolicyComponent::CopyMaterialParameterCollection
          (UWN_TODReactNightPolicyComponent *this,UMaterialParameterCollection *param_1,
          UMaterialParameterCollection *param_2,UMaterialInstanceDynamic *param_3)

{
  TArray<FCollectionScalarParameter,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  UMaterialParameterCollection *pUVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  UMaterialParameterCollection *local_res18;
  UMaterialInstanceDynamic *local_res20;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  FGuid FStack_b8;
  float local_a8 [2];
  undefined8 local_a0;
  FGuid FStack_98;
  FLinearColor_u_0 FStack_88;
  FMemoryImageMaterialParameterInfo local_78;
  FMemoryImageMaterialParameterInfo local_64;
  FName local_50;
  FName local_48 [2];
  
  if ((param_1 != (UMaterialParameterCollection *)0x0) &&
     (param_2 != (UMaterialParameterCollection *)0x0)) {
    pTVar1 = &param_2->ScalarParameters;
    piVar2 = &(param_2->ScalarParameters).ArrayMax;
    (param_2->ScalarParameters).ArrayNum = 0;
    local_res18 = param_2;
    local_res20 = param_3;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
    pFVar10 = (param_1->ScalarParameters).AllocatorInstance.Data;
    iVar3 = (param_1->ScalarParameters).ArrayNum;
    pFVar12 = pFVar10 + 8;
    pFVar11 = pFVar10 + (longlong)iVar3 * 0x1c;
    while( true ) {
      if ((param_1->ScalarParameters).ArrayNum != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FCollectionScalarParameter,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      pUVar6 = local_res18;
      if (pFVar10 == pFVar11) break;
      local_c0 = 0;
      FStack_b8.A = 0;
      FStack_b8.B = 0;
      FStack_b8.C = 0;
      FStack_b8.D = 0;
      FWindowsPlatformMisc::CreateGuid(&FStack_b8);
      local_a8[0] = 0.0;
      ::FName::FName(&local_50,L"Scalar");
      local_c0 = *(undefined8 *)pFVar10;
      local_78.Name.ComparisonIndex.Value = (uint)local_c0;
      local_78.Name.Number = (uint)((ulonglong)local_c0 >> 0x20);
      local_78.Name.DisplayIndex.Value = 0;
      local_78.Index = -1;
      local_78.Association.Value = '\x02';
      UMaterialInterface::GetScalarParameterValue
                ((UMaterialInterface *)local_res20,&local_78,local_a8,false);
      FStack_b8._0_8_ = *(undefined8 *)pFVar12;
      FStack_b8._8_8_ = *(undefined8 *)(pFVar12 + 8);
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_c0) &&
          ((FScriptContainerElement *)&local_c0 < pFVar4 + (longlong)*piVar2 * 0x1c)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (param_2->ScalarParameters).ArrayNum;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x41c,&pTVar1->AllocatorInstance,piVar2);
      }
      pFVar10 = pFVar10 + 0x1c;
      (param_2->ScalarParameters).ArrayNum = iVar8 + 1;
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      lVar9 = (longlong)iVar8 * 0x1c;
      pFVar12 = pFVar12 + 0x1c;
      *(undefined8 *)(pFVar4 + lVar9) = local_c0;
      *(undefined8 *)(pFVar4 + lVar9 + 8) = FStack_b8._0_8_;
      *(undefined8 *)(pFVar4 + lVar9 + 0x10) = FStack_b8._8_8_;
      *(float *)(pFVar4 + lVar9 + 0x18) = local_a8[0];
    }
    piVar2 = &(local_res18->VectorParameters).ArrayMax;
    (local_res18->VectorParameters).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,4,0,&(local_res18->VectorParameters).AllocatorInstance,0,piVar2);
    }
    pFVar11 = (param_1->VectorParameters).AllocatorInstance.Data;
    iVar3 = (param_1->VectorParameters).ArrayNum;
    pFVar12 = pFVar11 + 8;
    pFVar10 = pFVar11 + (longlong)iVar3 * 0x28;
    while( true ) {
      if ((param_1->VectorParameters).ArrayNum != iVar3) {
        local_c8[0] = 0;
        `TCheckedPointerIterator<FCollectionVectorParameter,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_c8);
      }
      if (pFVar11 == pFVar10) break;
      local_a0 = 0;
      FStack_98.A = 0;
      FStack_98.B = 0;
      FStack_98.C = 0;
      FStack_98.D = 0;
      FWindowsPlatformMisc::CreateGuid(&FStack_98);
      FStack_88._0_8_ = 0;
      FStack_88._8_8_ = 0;
      ::FName::FName(local_48,L"Vector");
      local_a0 = *(undefined8 *)pFVar11;
      local_64.Name.ComparisonIndex.Value = (uint)local_a0;
      local_64.Name.Number = (uint)((ulonglong)local_a0 >> 0x20);
      local_64.Name.DisplayIndex.Value = 0;
      local_64.Index = -1;
      local_64.Association.Value = '\x02';
      UMaterialInterface::GetVectorParameterValue
                ((UMaterialInterface *)local_res20,&local_64,(FLinearColor *)&FStack_88._s_0,false);
      FStack_98._0_8_ = *(undefined8 *)pFVar12;
      FStack_98._8_8_ = *(undefined8 *)(pFVar12 + 8);
      pFVar4 = (pUVar6->VectorParameters).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_a0) &&
          ((FScriptContainerElement *)&local_a0 < pFVar4 + (longlong)*piVar2 * 0x28)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (pUVar6->VectorParameters).ArrayNum;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x428,&(pUVar6->VectorParameters).AllocatorInstance,piVar2);
      }
      pFVar11 = pFVar11 + 0x28;
      (pUVar6->VectorParameters).ArrayNum = iVar8 + 1;
      pFVar12 = pFVar12 + 0x28;
      lVar9 = (longlong)iVar8;
      pFVar4 = (pUVar6->VectorParameters).AllocatorInstance.Data;
      *(undefined8 *)(pFVar4 + lVar9 * 0x28) = local_a0;
      *(undefined8 *)(pFVar4 + lVar9 * 0x28 + 8) = FStack_98._0_8_;
      *(undefined8 *)(pFVar4 + lVar9 * 0x28 + 0x10) = FStack_98._8_8_;
      *(undefined8 *)(pFVar4 + lVar9 * 0x28 + 0x10 + 8) = FStack_88._0_8_;
      *(undefined8 *)(pFVar4 + lVar9 * 0x28 + 0x20) = FStack_88._8_8_;
    }
  }
  return;
}

// GetNiagaraComponentByIndex @ 14a054540

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraComponent * __thiscall
UWN_TODReactNightPolicyComponent::GetNiagaraComponentByIndex
          (UWN_TODReactNightPolicyComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UNiagaraComponent *pUVar3;
  
  if ((-1 < param_1) && (param_1 < (this->NiagaraContexts).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UNiagaraComponent *)(*pcVar1)();
        return pUVar3;
      }
    }
    pUVar3 = ExtractComponentFromOwningActor<UNiagaraComponent>
                       (this,(FComponentReference *)
                             ((this->NiagaraContexts).AllocatorInstance.Data +
                             (longlong)param_1 * 0x38));
    return pUVar3;
  }
  return (UNiagaraComponent *)0x0;
}

// GetParametersFromMeshComponent @ 14a0545d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UWN_TODReactNightPolicyComponent::GetParametersFromMeshComponent
          (UWN_TODReactNightPolicyComponent *this,UMeshComponent *param_1,
          TMap<int,FWN_MeshDayReactSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_MeshDayReactSetting,0>_>
          *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  UMaterialInstanceDynamic *this_00;
  UClass *pUVar3;
  FWN_MeshDayReactSetting *pFVar4;
  FName *pFVar5;
  UMaterialParameterCollection *pUVar6;
  longlong *plVar7;
  undefined1 auStack_128 [32];
  uint local_108;
  FMemoryImageMaterialParameterInfo local_104;
  undefined8 local_f0;
  TMap<int,FWN_MeshDayReactSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_MeshDayReactSetting,0>_>
  *local_e8;
  FName local_e0;
  FName local_d8 [2];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  if (param_1 != (UMeshComponent *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
    local_e8 = param_2;
    iVar2 = (**(code **)(param_1->_padding_ + 0x810))();
    local_108 = 0;
    if (0 < iVar2) {
      do {
        this_00 = (UMaterialInstanceDynamic *)
                  (**(code **)(param_1->_padding_ + 0x690))(param_1,local_108);
        if (this_00 != (UMaterialInstanceDynamic *)0x0) {
          pUVar3 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
          iVar1 = (int)pUVar3->_padding_;
          if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar3->_padding_)) {
            local_f0 = 0;
            this_00 = (UMaterialInstanceDynamic *)
                      (**(code **)(param_1->_padding_ + 0x6d8))(param_1,local_108,this_00);
            if (this_00 == (UMaterialInstanceDynamic *)0x0) goto LAB_14a0547ec;
          }
          pFVar4 = TMapBase<int,FWN_MeshDayReactSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_MeshDayReactSetting,0>_>
                   ::FindOrAddImpl<int_const_&>
                             ((TMapBase<int,FWN_MeshDayReactSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_MeshDayReactSetting,0>_>
                               *)param_2,local_108,(int *)&local_108);
          pFVar5 = ::FName::FName(&local_e0,L"EmissiveIntensity");
          local_104.Name.ComparisonIndex = (*pFVar5).ComparisonIndex;
          local_104.Name.Number = (*pFVar5).Number;
          local_104.Name.DisplayIndex.Value = 0;
          local_104.Index = -1;
          local_104.Association.Value = '\x02';
          UMaterialInterface::GetScalarParameterValue
                    ((UMaterialInterface *)this_00,&local_104,(float *)pFVar4,false);
          pFVar5 = ::FName::FName(local_d8,L"EmissiveColor");
          local_104.Name.ComparisonIndex = (*pFVar5).ComparisonIndex;
          local_104.Name.Number = (*pFVar5).Number;
          local_104.Name.DisplayIndex.Value = 0;
          local_104.Index = -1;
          local_104.Association.Value = '\x02';
          UMaterialInterface::GetVectorParameterValue
                    ((UMaterialInterface *)this_00,&local_104,
                     &(pFVar4->DayReactSetting).EmissiveColor,false);
          if ((this->MaterialParameterCollection).field0_0x0.DebugPtr !=
              (UMaterialParameterCollection *)0x0) {
            pUVar6 = (pFVar4->DayReactParams).field0_0x0.DebugPtr;
            if ((pUVar6 == (UMaterialParameterCollection *)0x0) || (param_3)) {
              FObjectInitializer::AssertIfInConstructor
                        ((UObject *)this,
                         L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                        );
              pUVar3 = Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
              FStaticConstructObjectParameters::FStaticConstructObjectParameters
                        ((FStaticConstructObjectParameters *)local_c8,pUVar3);
              local_c8._8_8_ = this;
              pUVar6 = (UMaterialParameterCollection *)
                       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
              if (local_c8._64_8_ != 0) {
                plVar7 = (longlong *)(local_c8 + 0x50);
                if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
                  plVar7 = (longlong *)local_c8._104_8_;
                }
                (**(code **)(*plVar7 + 0x10))();
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar6 != (UMaterialParameterCollection *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar6);
              }
              (pFVar4->DayReactParams).field0_0x0.DebugPtr = pUVar6;
            }
            CopyMaterialParameterCollection
                      (this,(this->MaterialParameterCollection).field0_0x0.DebugPtr,pUVar6,this_00);
            param_2 = local_e8;
          }
        }
LAB_14a0547ec:
        local_108 = local_108 + 1;
      } while ((int)local_108 < iVar2);
    }
  }
  return;
}

// LogicallyEnter @ 14a061a60

void __thiscall
UWN_TODReactNightPolicyComponent::LogicallyEnter(UWN_TODReactNightPolicyComponent *this)

{
  UCurveFloat *this_00;
  bool bVar1;
  double dVar2;
  double dVar3;
  double local_res8;
  double local_res10 [3];
  
  *(undefined4 *)&this->_padding_ = 0xbf800000;
  this_00 = (this->IntensityByTimeCurve).field0_0x0.DebugPtr;
  if (this_00 != (UCurveFloat *)0x0) {
    this->bIsNight = this->bCachedIsNight;
    UCurveBase::GetTimeRange((UCurveBase *)this_00,local_res10,&local_res8);
    dVar2 = __real_3ff0000000000000;
    dVar3 = (double)this->_padding_;
    bVar1 = dVar3 == __real_bff0000000000000;
    this->_padding_ = (longlong)(local_res8 - local_res10[0]);
    if (bVar1) {
      dVar3 = dVar2;
      if (this->bIsNight != false) {
        dVar3 = 0.0;
      }
      this->_padding_ = (longlong)dVar3;
    }
    if (this->bIsNight != false) {
      dVar3 = dVar2 - dVar3;
    }
    this->_padding_ = (longlong)(dVar3 * (local_res8 - local_res10[0]));
    CheckAllComponentsValid(this);
    CheckMaterialParametersDaySetting(this);
  }
  return;
}

// OnDayTimeStarted @ 14a062050

void __thiscall
UWN_TODReactNightPolicyComponent::OnDayTimeStarted(UWN_TODReactNightPolicyComponent *this)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  TObjectPtr<UWN_TODReactComponent> local_res8;
  UWN_TODReactNightPolicyComponent *local_res10;
  
  bVar2 = TWeakObjectPtr<UWN_UDS_Subsystem,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UWN_UDS_Subsystem,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (this != (UWN_TODReactNightPolicyComponent *)0x0) {
      local_res10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      TSet<TObjectPtr<UWN_TODReactComponent>,DefaultKeyFuncs<TObjectPtr<UWN_TODReactComponent>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectPtr<UWN_TODReactComponent>_>
                ((TSet<TObjectPtr<UWN_TODReactComponent>,DefaultKeyFuncs<TObjectPtr<UWN_TODReactComponent>,0>,FDefaultSetAllocator>
                  *)&pUVar4[0xf3].field_0x8,&local_res8,(bool *)&local_res10);
    }
  }
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  uVar3 = rand();
  this->bCachedIsNight = false;
  *(float *)&this->_padding_ =
       (float)(uVar3 & 0x7fff) * __real_38000100 * fVar1 + *(float *)&this->_padding_;
  return;
}

// OnNightTimeStarted @ 14a0621e0

void __thiscall
UWN_TODReactNightPolicyComponent::OnNightTimeStarted(UWN_TODReactNightPolicyComponent *this)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  TObjectPtr<UWN_TODReactComponent> local_res8;
  UWN_TODReactNightPolicyComponent *local_res10;
  
  bVar2 = TWeakObjectPtr<UWN_UDS_Subsystem,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UWN_UDS_Subsystem,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (this != (UWN_TODReactNightPolicyComponent *)0x0) {
      local_res10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      TSet<TObjectPtr<UWN_TODReactComponent>,DefaultKeyFuncs<TObjectPtr<UWN_TODReactComponent>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectPtr<UWN_TODReactComponent>_>
                ((TSet<TObjectPtr<UWN_TODReactComponent>,DefaultKeyFuncs<TObjectPtr<UWN_TODReactComponent>,0>,FDefaultSetAllocator>
                  *)&pUVar4[0xf3].field_0x8,&local_res8,(bool *)&local_res10);
    }
  }
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  uVar3 = rand();
  this->bCachedIsNight = true;
  *(float *)&this->_padding_ =
       (float)(uVar3 & 0x7fff) * __real_38000100 * fVar1 + *(float *)&this->_padding_;
  return;
}

// OnRegister @ 14a062400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_TODReactNightPolicyComponent::OnRegister(UWN_TODReactNightPolicyComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  UWN_UDS_Subsystem *this_01;
  
  UActorComponent::OnRegister((UActorComponent *)this);
  this_00 = (UWorld *)this->_padding_;
  if (((this_00 == (UWorld *)0x0) &&
      (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      this_00 == (UWorld *)0x0)) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<106827999998902287>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_TODReactComponent.cpp"
                         ,0xf,"world != nullptr"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_01 = UWorld::GetSubsystem<UWN_UDS_Subsystem>(this_00);
  if (this_01 == (UWN_UDS_Subsystem *)0x0) {
    return;
  }
  UWN_UDS_Subsystem::RegisterReactComponent(this_01,(UWN_TODReactComponent *)this);
  return;
}

// OnUnregister @ 14a0625e0

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
UWN_TODReactNightPolicyComponent::OnUnregister(UWN_TODReactNightPolicyComponent *this)

{
  bool bVar1;
  UWN_UDS_Subsystem *this_00;
  
  UActorComponent::OnUnregister((UActorComponent *)this);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    this_00 = (UWN_UDS_Subsystem *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UWN_UDS_Subsystem::UnRegisterReactComponent(this_00,(UWN_TODReactComponent *)this);
    this->_padding_ = 0;
  }
  return;
}

// PostLoad @ 14a0632d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_TODReactNightPolicyComponent::PostLoad(UWN_TODReactNightPolicyComponent *this)

{
  int iVar1;
  undefined8 uVar2;
  ULightComponent *this_00;
  FLinearColor *pFVar3;
  UMeshComponent *pUVar4;
  FComponentReference *pFVar5;
  undefined8 *puVar6;
  FComponentReference *pFVar7;
  undefined1 local_res8 [8];
  FLinearColor local_28;
  
  UActorComponent::PostLoad((UActorComponent *)this);
  if ((this->_padding_ & 0x20) == 0) {
    CheckAllComponentsValid(this);
    pFVar7 = (FComponentReference *)(this->LightContexts).AllocatorInstance.Data;
    iVar1 = (this->LightContexts).ArrayNum;
    puVar6 = (undefined8 *)((longlong)&pFVar7[1]._padding_ + 4);
    pFVar5 = (FComponentReference *)((longlong)pFVar7 + (longlong)iVar1 * 0x58);
    while( true ) {
      if ((this->LightContexts).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FWN_LightContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar5) break;
      this_00 = ExtractComponentFromOwningActor<ULightComponent>(this,pFVar7);
      if (this_00 != (ULightComponent *)0x0) {
        *(undefined4 *)((longlong)puVar6 + -4) = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
        pFVar3 = ULightComponentBase::GetLightColor((ULightComponentBase *)this_00,&local_28);
        uVar2 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
        *puVar6 = *(undefined8 *)&pFVar3->field0_0x0;
        puVar6[1] = uVar2;
      }
      pFVar7 = (FComponentReference *)&pFVar7[2]._padding_;
      puVar6 = puVar6 + 0xb;
    }
    iVar1 = (this->MeshContexts).ArrayNum;
    pFVar7 = (FComponentReference *)(this->MeshContexts).AllocatorInstance.Data;
    pFVar5 = (FComponentReference *)((longlong)pFVar7 + (longlong)iVar1 * 0x90);
    while( true ) {
      if ((this->MeshContexts).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FWN_MeshContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar5) break;
      pUVar4 = ExtractComponentFromOwningActor<UMeshComponent>(this,pFVar7);
      if (pUVar4 != (UMeshComponent *)0x0) {
        GetParametersFromMeshComponent
                  (this,pUVar4,
                   (TMap<int,FWN_MeshDayReactSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_MeshDayReactSetting,0>_>
                    *)&pFVar7[1]._padding_,false);
      }
      pFVar7 = (FComponentReference *)&pFVar7[3]._padding_;
    }
  }
  return;
}

// UpdateIntensity @ 14a0669a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
UWN_TODReactNightPolicyComponent::UpdateIntensity
          (UWN_TODReactNightPolicyComponent *this,float param_1)

{
  double dVar1;
  int iVar2;
  UCurveFloat *this_00;
  float fVar3;
  float fVar4;
  bool bVar5;
  ULightComponent *this_01;
  UObject *pUVar6;
  FLinearColor *pFVar7;
  uint uVar8;
  FComponentReference *pFVar9;
  FComponentReference *pFVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  TObjectPtr<UWN_TODReactComponent_const_>_u_0 local_res8 [2];
  double local_res18;
  double local_res20;
  double local_68;
  double local_60;
  FLinearColor_u_0 local_58 [3];
  
  this_00 = (this->IntensityByTimeCurve).field0_0x0.DebugPtr;
  if ((this_00 != (UCurveFloat *)0x0) && (this->_padding_ != 0)) {
    if (this->bIsNight == false) {
      param_1 = (float)((uint)param_1 ^ __xmm_80000000800000008000000080000000);
    }
    dVar12 = (double)param_1 / (double)this->_padding_ + (double)this->_padding_;
    if (__real_3ff0000000000000 <= dVar12) {
      dVar12 = __real_3ff0000000000000;
    }
    if (dVar12 <= 0.0) {
      dVar12 = 0.0;
    }
    this->_padding_ = (longlong)dVar12;
    UCurveBase::GetTimeRange((UCurveBase *)this_00,&local_res18,&local_60);
    dVar12 = (double)this->_padding_;
    dVar1 = (double)this->_padding_;
    UCurveBase::GetValueRange
              ((UCurveBase *)(this->IntensityByTimeCurve).field0_0x0.DebugPtr,&local_res20,&local_68
              );
    fVar11 = UCurveFloat::GetFloatValue
                       ((this->IntensityByTimeCurve).field0_0x0.DebugPtr,
                        (float)(dVar12 * dVar1 + local_res18));
    iVar2 = (this->LightContexts).ArrayNum;
    pFVar10 = (FComponentReference *)(this->LightContexts).AllocatorInstance.Data;
    dVar12 = ((double)fVar11 - local_res20) / (local_68 - local_res20);
    pFVar9 = (FComponentReference *)((longlong)pFVar10 + (longlong)iVar2 * 0x58);
    while( true ) {
      if ((this->LightContexts).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FWN_LightContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar10 == pFVar9) break;
      this_01 = ExtractComponentFromOwningActor<ULightComponent>(this,pFVar10);
      if (this_01 != (ULightComponent *)0x0) {
        if ((char)pFVar10[1]._padding_ == '\0') {
          fVar11 = this->LightIntensity;
        }
        else {
          fVar11 = *(float *)((longlong)&pFVar10[1]._padding_ + 4);
        }
        ULightComponent::SetIntensity
                  (this_01,(float)((double)(fVar11 - *(float *)&pFVar10[1]._padding_) * dVar12 +
                                  (double)*(float *)&pFVar10[1]._padding_));
        fVar11 = *(float *)((longlong)&pFVar10[1]._padding_ + 4);
        fVar3 = (float)pFVar10[1].OtherActor.WeakPtr.ObjectIndex;
        fVar4 = (float)pFVar10[1].OtherActor.WeakPtr.ObjectSerialNumber;
        fVar13 = (float)dVar12;
        pFVar7 = (FLinearColor *)&pFVar10[1]._padding_;
        if ((char)pFVar10[1]._padding_ == '\0') {
          pFVar7 = &this->LightColor;
        }
        local_58[0]._0_4_ = ((pFVar7->field0_0x0)._s_0.R - fVar11) * fVar13 + fVar11;
        local_58[0]._4_4_ = ((pFVar7->field0_0x0)._s_0.G - fVar3) * fVar13 + fVar3;
        local_58[0]._8_4_ = ((pFVar7->field0_0x0)._s_0.B - fVar4) * fVar13 + fVar4;
        local_58[0]._12_4_ =
             ((pFVar7->field0_0x0)._s_0.A - *(float *)&pFVar10[2]._padding_) * fVar13 +
             *(float *)&pFVar10[2]._padding_;
        ULightComponent::SetLightColor(this_01,(FLinearColor *)&local_58[0]._s_0,true);
      }
      pFVar10 = (FComponentReference *)&pFVar10[2]._padding_;
    }
    BlendMeshComponents(this,dVar12);
    BlendNiagaraComponents(this,dVar12);
    if ((double)this->_padding_ == 0.0) {
      this->_padding_ = -0x4010000000000000;
      bVar5 = TWeakObjectPtr<UWN_UDS_Subsystem,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UWN_UDS_Subsystem,FWeakObjectPtr> *)&this->_padding_,
                         (void *)0x0);
      if (!bVar5) {
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        local_res8[0] = (TObjectPtr<UWN_TODReactComponent_const_>_u_0)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        if (*(int *)&pUVar6[0xf3].field_0x10 != *(int *)&pUVar6[0xf4].field_0x14) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          uVar8 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) *
                  -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          TSet<TObjectPtr<UWN_TODReactComponent>,DefaultKeyFuncs<TObjectPtr<UWN_TODReactComponent>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TObjectPtr<UWN_TODReactComponent_const_>_>
                    ((TSet<TObjectPtr<UWN_TODReactComponent>,DefaultKeyFuncs<TObjectPtr<UWN_TODReactComponent>,0>,FDefaultSetAllocator>
                      *)&pUVar6[0xf3].field_0x8,uVar8 >> 0x10 ^ uVar8,
                     (TObjectPtr<UWN_TODReactComponent_const_> *)&local_res8[0].ObjectPtr);
        }
      }
    }
  }
  return;
}

