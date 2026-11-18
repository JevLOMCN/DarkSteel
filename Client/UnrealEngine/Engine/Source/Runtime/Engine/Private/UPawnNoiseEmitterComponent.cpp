// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 14788d800

UClass * __cdecl UPawnNoiseEmitterComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPawnNoiseEmitterComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PawnNoiseEmitterComponent",
               &Z_Registration_Info_UClass_UPawnNoiseEmitterComponent.InnerSingleton,
               StaticRegisterNativesUPawnNoiseEmitterComponent,0xf8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPawnNoiseEmitterComponent>,
               InternalVTableHelperCtorCaller<UPawnNoiseEmitterComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPawnNoiseEmitterComponent.InnerSingleton;
}

// UPawnNoiseEmitterComponent @ 1478aa7e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPawnNoiseEmitterComponent * __thiscall
UPawnNoiseEmitterComponent::UPawnNoiseEmitterComponent
          (UPawnNoiseEmitterComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// UPawnNoiseEmitterComponent @ 1478aa820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPawnNoiseEmitterComponent * __thiscall
UPawnNoiseEmitterComponent::UPawnNoiseEmitterComponent
          (UPawnNoiseEmitterComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  this->bAIPerceptionSystemCompatibilityMode = 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->NoiseLifetime = 1.0;
  return this;
}

// ~UPawnNoiseEmitterComponent @ 1478ac4d0

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
UPawnNoiseEmitterComponent::~UPawnNoiseEmitterComponent(UPawnNoiseEmitterComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetLastNoiseTime @ 1478d4f10

float __thiscall
UPawnNoiseEmitterComponent::GetLastNoiseTime(UPawnNoiseEmitterComponent *this,bool param_1)

{
  if (param_1) {
    return this->LastLocalNoiseTime;
  }
  return this->LastRemoteNoiseTime;
}

// GetLastNoiseVolume @ 1478d4f30

float __thiscall
UPawnNoiseEmitterComponent::GetLastNoiseVolume(UPawnNoiseEmitterComponent *this,bool param_1)

{
  if (param_1) {
    return this->LastLocalNoiseVolume;
  }
  return this->LastRemoteNoiseVolume;
}

// GetPrivateStaticClass @ 1478d9d70

UClass * __cdecl UPawnNoiseEmitterComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPawnNoiseEmitterComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PawnNoiseEmitterComponent",
               &Z_Registration_Info_UClass_UPawnNoiseEmitterComponent.InnerSingleton,
               StaticRegisterNativesUPawnNoiseEmitterComponent,0xf8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPawnNoiseEmitterComponent>,
               InternalVTableHelperCtorCaller<UPawnNoiseEmitterComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPawnNoiseEmitterComponent.InnerSingleton;
}

// MakeNoise @ 1478e2650

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
UPawnNoiseEmitterComponent::MakeNoise
          (UPawnNoiseEmitterComponent *this,AActor *param_1,float param_2,TVector<double> *param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  UClass *pUVar6;
  UWorld *pUVar7;
  APawn *pAVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float local_88 [2];
  undefined8 local_80;
  TVector<double>_u_0 local_78 [4];
  
  if (bMakeNoiseLockHack) {
    return;
  }
  if (param_1 == (AActor *)0x0) {
    return;
  }
  if (param_2 <= 0.0) {
    return;
  }
  pAVar8 = (APawn *)this->_padding_;
  if (pAVar8 == (APawn *)0x0) {
    return;
  }
  pUVar6 = Z_Construct_UClass_APawn_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(pAVar8->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pAVar8->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    if (pAVar8 == (APawn *)0x0) {
      return;
    }
    pUVar6 = Z_Construct_UClass_AController_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if (*(int *)(pAVar8->_padding_ + 0x38) < iVar1) {
      return;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(pAVar8->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_) {
      return;
    }
    if (((uint)pAVar8->_padding_ >> 0x1e & 1) != 0) {
      return;
    }
    pAVar8 = *(APawn **)((longlong)&(pAVar8->ControlInputVector).field0_0x0 + 8);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pAVar8 == (APawn *)0x0) {
        return;
      }
    }
    else {
      if (pAVar8 == (APawn *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)pAVar8);
    }
  }
  if (((uint)pAVar8->_padding_ >> 0x1e & 1) != 0) {
    return;
  }
  if ((pAVar8->Controller).field0_0x0.DebugPtr == (AController *)0x0) {
    return;
  }
  if ((APawn *)param_1 != pAVar8) {
    lVar2 = pAVar8->_padding_;
    if (lVar2 == 0) {
      uVar9 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar10 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      uVar9 = *(undefined4 *)(lVar2 + 0x220);
      uVar10 = *(undefined4 *)(lVar2 + 0x224);
      uVar11 = *(undefined4 *)(lVar2 + 0x210);
      uVar12 = *(undefined4 *)(lVar2 + 0x214);
      uVar13 = *(undefined4 *)(lVar2 + 0x218);
      uVar14 = *(undefined4 *)(lVar2 + 0x21c);
    }
    local_78[0]._16_8_ = CONCAT44(uVar10,uVar9);
    dVar4 = (double)CONCAT44(uVar12,uVar11) - (param_3->field0_0x0)._s_0.X;
    dVar3 = (double)local_78[0]._16_8_ - (param_3->field0_0x0)._s_0.Z;
    dVar5 = (double)CONCAT44(uVar14,uVar13) - (param_3->field0_0x0)._s_0.Y;
    (**(code **)(pAVar8->_padding_ + 0x688))(pAVar8,local_88,&local_80);
    if ((double)(local_88[0] * local_88[0]) < dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3) {
      pUVar7 = (UWorld *)this->_padding_;
      if (pUVar7 == (UWorld *)0x0) {
        pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      if (((double)this->NoiseLifetime < pUVar7->TimeSeconds - (double)this->LastRemoteNoiseTime) ||
         (this->LastRemoteNoiseVolume <= param_2)) {
        pUVar7 = (UWorld *)this->_padding_;
        this->LastRemoteNoiseVolume = param_2;
        dVar3 = (param_3->field0_0x0)._s_0.Y;
        (this->LastRemoteNoisePosition).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
        (this->LastRemoteNoisePosition).field0_0x0._s_0.Y = dVar3;
        (this->LastRemoteNoisePosition).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        if (pUVar7 == (UWorld *)0x0) {
          pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        this->LastRemoteNoiseTime = (float)pUVar7->TimeSeconds;
      }
      goto LAB_1478e293f;
    }
  }
  pUVar7 = (UWorld *)this->_padding_;
  if (pUVar7 == (UWorld *)0x0) {
    pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  if (((double)this->NoiseLifetime < pUVar7->TimeSeconds - (double)this->LastLocalNoiseTime) ||
     (this->LastLocalNoiseVolume <= param_2)) {
    pUVar7 = (UWorld *)this->_padding_;
    this->LastLocalNoiseVolume = param_2;
    if (pUVar7 == (UWorld *)0x0) {
      pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    this->LastLocalNoiseTime = (float)pUVar7->TimeSeconds;
  }
LAB_1478e293f:
  if (this->bAIPerceptionSystemCompatibilityMode != 0) {
    local_78[0]._16_8_ = (param_3->field0_0x0)._s_0.Z;
    local_78[0]._0_8_ = (param_3->field0_0x0)._s_0.X;
    local_78[0]._8_8_ = (param_3->field0_0x0)._s_0.Y;
    bMakeNoiseLockHack = true;
    local_80 = 0;
    AActor::MakeNoise(param_1,param_2,pAVar8,(TVector<double> *)&local_78[0]._s_0,0.0,(FName)0x0);
    bMakeNoiseLockHack = false;
  }
  return;
}

// StaticRegisterNativesUPawnNoiseEmitterComponent @ 1478f81f0

void __cdecl UPawnNoiseEmitterComponent::StaticRegisterNativesUPawnNoiseEmitterComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execMakeNoise @ 147906eb0

void __cdecl
UPawnNoiseEmitterComponent::execMakeNoise(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  uchar local_28 [32];
  
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x4f8))(param_1,local_res10,local_res8[0],puVar2);
  return;
}

