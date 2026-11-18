// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ArchVisCharacter
// Functions: 15

// StaticClass @ 14f00d210

UClass * __cdecl AArchVisCharacter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AArchVisCharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ArchVisCharacter",L"ArchVisCharacter",
               &Z_Registration_Info_UClass_AArchVisCharacter.InnerSingleton,
               StaticRegisterNativesAArchVisCharacter,0x6e0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AArchVisCharacter>,
               InternalVTableHelperCtorCaller<AArchVisCharacter>,local_res8,ACharacter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AArchVisCharacter.InnerSingleton;
}

// AArchVisCharacter @ 14f00dbf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AArchVisCharacter * __thiscall
AArchVisCharacter::AArchVisCharacter(AArchVisCharacter *this,FVTableHelper *param_1)

{
  ACharacter::ACharacter((ACharacter *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  (this->LookUpAxisName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LookUpAxisName).Data.ArrayNum = 0;
  (this->LookUpAxisName).Data.ArrayMax = 0;
  (this->LookUpAtRateAxisName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LookUpAtRateAxisName).Data.ArrayNum = 0;
  (this->LookUpAtRateAxisName).Data.ArrayMax = 0;
  (this->TurnAxisName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TurnAxisName).Data.ArrayNum = 0;
  (this->TurnAxisName).Data.ArrayMax = 0;
  (this->TurnAtRateAxisName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TurnAtRateAxisName).Data.ArrayNum = 0;
  (this->TurnAtRateAxisName).Data.ArrayMax = 0;
  (this->MoveForwardAxisName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MoveForwardAxisName).Data.ArrayNum = 0;
  (this->MoveForwardAxisName).Data.ArrayMax = 0;
  (this->MoveRightAxisName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MoveRightAxisName).Data.ArrayNum = 0;
  (this->MoveRightAxisName).Data.ArrayMax = 0;
  return this;
}

// AArchVisCharacter @ 14f00dc80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AArchVisCharacter * __thiscall
AArchVisCharacter::AArchVisCharacter(AArchVisCharacter *this,FObjectInitializer *param_1)

{
  FName FVar1;
  UClass *pUVar2;
  
  FVar1 = ACharacter::CharacterMovementComponentName;
  pUVar2 = UArchVisCharMovementComponent::StaticClass();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,pUVar2,(TArrayView<FName_const_,int> *)0x0);
  ACharacter::ACharacter((ACharacter *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  (this->LookUpAxisName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LookUpAxisName).Data.ArrayNum = 0;
  (this->LookUpAxisName).Data.ArrayMax = 0;
  (this->LookUpAtRateAxisName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LookUpAtRateAxisName).Data.ArrayNum = 0;
  (this->LookUpAtRateAxisName).Data.ArrayMax = 0;
  (this->TurnAxisName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TurnAxisName).Data.ArrayNum = 0;
  (this->TurnAxisName).Data.ArrayMax = 0;
  (this->TurnAtRateAxisName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TurnAtRateAxisName).Data.ArrayNum = 0;
  (this->TurnAtRateAxisName).Data.ArrayMax = 0;
  (this->MoveForwardAxisName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MoveForwardAxisName).Data.ArrayNum = 0;
  (this->MoveForwardAxisName).Data.ArrayMax = 0;
  (this->MoveRightAxisName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MoveRightAxisName).Data.ArrayNum = 0;
  (this->MoveRightAxisName).Data.ArrayMax = 0;
  ::FString::operator=(&this->TurnAxisName,L"Turn");
  ::FString::operator=(&this->TurnAtRateAxisName,L"TurnRate");
  ::FString::operator=(&this->LookUpAxisName,L"LookUp");
  ::FString::operator=(&this->LookUpAtRateAxisName,L"LookUpRate");
  ::FString::operator=(&this->MoveForwardAxisName,L"MoveForward");
  ::FString::operator=(&this->MoveRightAxisName,L"MoveRight");
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  this->MouseSensitivityScale_Pitch = 0.025;
  this->MouseSensitivityScale_Yaw = 0.025;
  return this;
}

// ~AArchVisCharacter @ 14f00df60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AArchVisCharacter::~AArchVisCharacter(AArchVisCharacter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  pFVar1 = (this->MoveRightAxisName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MoveForwardAxisName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TurnAtRateAxisName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TurnAxisName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LookUpAtRateAxisName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LookUpAxisName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ACharacter::~ACharacter((ACharacter *)this);
  return;
}

// GetArchVisCharMoveComponent @ 14f00e630

UArchVisCharMovementComponent * __thiscall
AArchVisCharacter::GetArchVisCharMoveComponent(AArchVisCharacter *this)

{
  int iVar1;
  UArchVisCharMovementComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UArchVisCharMovementComponent *)(**(code **)(this->_padding_ + 0x760))();
  if (pUVar2 != (UArchVisCharMovementComponent *)0x0) {
    pUVar3 = UArchVisCharMovementComponent::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UArchVisCharMovementComponent *)0x0;
}

// GetPrivateStaticClass @ 14f00e6a0

UClass * __cdecl AArchVisCharacter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AArchVisCharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ArchVisCharacter",L"ArchVisCharacter",
               &Z_Registration_Info_UClass_AArchVisCharacter.InnerSingleton,
               StaticRegisterNativesAArchVisCharacter,0x6e0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AArchVisCharacter>,
               InternalVTableHelperCtorCaller<AArchVisCharacter>,local_res8,ACharacter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AArchVisCharacter.InnerSingleton;
}

// GetViewRotation @ 14f00e830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRotator<double> * __thiscall
AArchVisCharacter::GetViewRotation(AArchVisCharacter *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  TRotator<double> *pTVar3;
  TRotator<double> local_38 [2];
  
  pTVar3 = APawn::GetControlRotation((APawn *)this,local_38);
  dVar1 = pTVar3->Pitch;
  if ((USceneComponent *)this->_padding_ == (USceneComponent *)0x0) {
    pTVar3 = local_38;
    local_38[0].Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_38[0].Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  else {
    pTVar3 = USceneComponent::GetComponentRotation((USceneComponent *)this->_padding_,local_38);
  }
  dVar2 = pTVar3->Yaw;
  __return_storage_ptr__->Roll = 0.0;
  __return_storage_ptr__->Pitch = (double)(float)dVar1;
  __return_storage_ptr__->Yaw = (double)(float)dVar2;
  return __return_storage_ptr__;
}

// LookUp @ 14f00e970

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AArchVisCharacter::LookUp(AArchVisCharacter *this,float param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  UWorld *pUVar4;
  float fVar5;
  
  if ((param_1 != 0.0) && (lVar2 = (**(code **)(this->_padding_ + 0x760))(), lVar2 != 0)) {
    pUVar3 = UArchVisCharMovementComponent::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      pUVar4 = AActor::GetWorld((AActor *)this);
      fVar5 = (param_1 / pUVar4->DeltaTimeSeconds) * this->MouseSensitivityScale_Pitch;
      if (__real_3f800000 <= fVar5) {
        fVar5 = __real_3f800000;
      }
      if (fVar5 <= __real_bf800000) {
        fVar5 = __real_bf800000;
      }
      *(double *)(lVar2 + 0x1070) = *(double *)(lVar2 + 0x1070) - (double)fVar5;
    }
  }
  return;
}

// LookUpAtRate @ 14f00ea20

void __thiscall AArchVisCharacter::LookUpAtRate(AArchVisCharacter *this,float param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if ((param_1 != 0.0) && (lVar2 = (**(code **)(this->_padding_ + 0x760))(), lVar2 != 0)) {
    pUVar3 = UArchVisCharMovementComponent::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(double *)(lVar2 + 0x1070) = *(double *)(lVar2 + 0x1070) - (double)param_1;
    }
  }
  return;
}

// MoveForward @ 14f00eaa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AArchVisCharacter::MoveForward(AArchVisCharacter *this,float param_1)

{
  code *pcVar1;
  TRotator<double> *pTVar2;
  TRotationMatrix<double> *pTVar3;
  TRotator<double> local_d8;
  TRotator<double> local_b8;
  TRotationMatrix<double> local_98;
  
  if ((param_1 != 0.0) && (this->_padding_ != 0)) {
    if ((USceneComponent *)this->_padding_ == (USceneComponent *)0x0) {
      pTVar2 = &local_d8;
      local_d8.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_d8.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_d8.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    }
    else {
      pTVar2 = USceneComponent::GetComponentRotation((USceneComponent *)this->_padding_,&local_d8);
    }
    local_b8.Pitch = pTVar2->Pitch;
    local_b8.Yaw = pTVar2->Yaw;
    local_b8.Roll = pTVar2->Roll;
    pcVar1 = *(code **)(this->_padding_ + 0x888);
    pTVar3 = UE::Math::TRotationMatrix<double>::TRotationMatrix<double>(&local_98,&local_b8);
    local_d8.Pitch = *(double *)pTVar3;
    local_d8.Yaw = *(double *)&pTVar3->field_0x8;
    local_d8.Roll = *(double *)&pTVar3->field_0x10;
    (*pcVar1)(this,&local_d8,param_1,0);
  }
  return;
}

// MoveRight @ 14f00eb80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AArchVisCharacter::MoveRight(AArchVisCharacter *this,float param_1)

{
  code *pcVar1;
  TRotator<double> *pTVar2;
  TRotationMatrix<double> *pTVar3;
  TRotator<double> local_d8;
  TRotator<double> local_b8;
  TRotationMatrix<double> local_98;
  
  if ((param_1 != 0.0) && (this->_padding_ != 0)) {
    if ((USceneComponent *)this->_padding_ == (USceneComponent *)0x0) {
      pTVar2 = &local_d8;
      local_d8.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_d8.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_d8.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    }
    else {
      pTVar2 = USceneComponent::GetComponentRotation((USceneComponent *)this->_padding_,&local_d8);
    }
    local_b8.Pitch = pTVar2->Pitch;
    local_b8.Yaw = pTVar2->Yaw;
    local_b8.Roll = pTVar2->Roll;
    pcVar1 = *(code **)(this->_padding_ + 0x888);
    pTVar3 = UE::Math::TRotationMatrix<double>::TRotationMatrix<double>(&local_98,&local_b8);
    local_d8.Pitch = *(double *)&pTVar3->field_0x20;
    local_d8.Yaw = *(double *)&pTVar3->field_0x28;
    local_d8.Roll = *(double *)&pTVar3->field_0x30;
    (*pcVar1)(this,&local_d8,param_1,0);
  }
  return;
}

// SetupPlayerInputComponent @ 14f00f180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AArchVisCharacter::SetupPlayerInputComponent(AArchVisCharacter *this,UInputComponent *param_1)

{
  FName *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FName local_res8;
  code *local_28;
  undefined8 uStack_20;
  
  ACharacter::SetupPlayerInputComponent((ACharacter *)this,param_1);
  pwVar3 = L"";
  local_28 = _vcall__2536__flat______;
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  if ((this->TurnAxisName).Data.ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(this->TurnAxisName).Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(&local_res8,pwVar2);
  UInputComponent::BindAxis<AArchVisCharacter>(param_1,*pFVar1,this,(pmf_e27cecd5 *)&local_28);
  uStack_20._4_4_ = (uint)((ulonglong)uStack_20 >> 0x20);
  local_28 = _vcall__2552__flat______;
  uStack_20._0_4_ = 0;
  if ((this->LookUpAxisName).Data.ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(this->LookUpAxisName).Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(&local_res8,pwVar2);
  UInputComponent::BindAxis<AArchVisCharacter>(param_1,*pFVar1,this,(pmf_e27cecd5 *)&local_28);
  local_28 = _vcall__2544__flat______;
  uStack_20._0_4_ = 0;
  if ((this->TurnAtRateAxisName).Data.ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(this->TurnAtRateAxisName).Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(&local_res8,pwVar2);
  UInputComponent::BindAxis<AArchVisCharacter>(param_1,*pFVar1,this,(pmf_e27cecd5 *)&local_28);
  local_28 = _vcall__2560__flat______;
  uStack_20._0_4_ = 0;
  if ((this->LookUpAtRateAxisName).Data.ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(this->LookUpAtRateAxisName).Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(&local_res8,pwVar2);
  UInputComponent::BindAxis<AArchVisCharacter>(param_1,*pFVar1,this,(pmf_e27cecd5 *)&local_28);
  local_28 = _vcall__2576__flat______;
  uStack_20._0_4_ = 0;
  if ((this->MoveForwardAxisName).Data.ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(this->MoveForwardAxisName).Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(&local_res8,pwVar2);
  UInputComponent::BindAxis<AArchVisCharacter>(param_1,*pFVar1,this,(pmf_e27cecd5 *)&local_28);
  local_28 = _vcall__2568__flat______;
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  if ((this->MoveRightAxisName).Data.ArrayNum != 0) {
    pwVar3 = (wchar_t *)(this->MoveRightAxisName).Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(&local_res8,pwVar3);
  UInputComponent::BindAxis<AArchVisCharacter>(param_1,*pFVar1,this,(pmf_e27cecd5 *)&local_28);
  return;
}

// StaticRegisterNativesAArchVisCharacter @ 14f00f390

void __cdecl AArchVisCharacter::StaticRegisterNativesAArchVisCharacter(void)

{
  return;
}

// Turn @ 14f00f3c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AArchVisCharacter::Turn(AArchVisCharacter *this,float param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  UWorld *pUVar4;
  float fVar5;
  
  if ((param_1 != 0.0) && (lVar2 = (**(code **)(this->_padding_ + 0x760))(), lVar2 != 0)) {
    pUVar3 = UArchVisCharMovementComponent::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      pUVar4 = AActor::GetWorld((AActor *)this);
      fVar5 = (param_1 / pUVar4->DeltaTimeSeconds) * this->MouseSensitivityScale_Yaw;
      if (__real_3f800000 <= fVar5) {
        fVar5 = __real_3f800000;
      }
      if (fVar5 <= __real_bf800000) {
        fVar5 = __real_bf800000;
      }
      *(double *)(lVar2 + 0x1078) = (double)fVar5 + *(double *)(lVar2 + 0x1078);
    }
  }
  return;
}

// TurnAtRate @ 14f00f470

void __thiscall AArchVisCharacter::TurnAtRate(AArchVisCharacter *this,float param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if ((param_1 != 0.0) && (lVar2 = (**(code **)(this->_padding_ + 0x760))(), lVar2 != 0)) {
    pUVar3 = UArchVisCharMovementComponent::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(double *)(lVar2 + 0x1078) = (double)param_1 + *(double *)(lVar2 + 0x1078);
    }
  }
  return;
}

