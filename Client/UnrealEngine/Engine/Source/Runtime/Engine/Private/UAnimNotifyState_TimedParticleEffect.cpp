// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 147490840

UClass * __cdecl UAnimNotifyState_TimedParticleEffect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_TimedParticleEffect.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyState_TimedParticleEffect",
               &Z_Registration_Info_UClass_UAnimNotifyState_TimedParticleEffect.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_TimedParticleEffect,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_TimedParticleEffect>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_TimedParticleEffect>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_TimedParticleEffect.InnerSingleton;
}

// UAnimNotifyState_TimedParticleEffect @ 1474b3ec0

/* WARNING: Enum "Type": Some values do not have unique names */

UAnimNotifyState_TimedParticleEffect * __thiscall
UAnimNotifyState_TimedParticleEffect::UAnimNotifyState_TimedParticleEffect
          (UAnimNotifyState_TimedParticleEffect *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimNotifyState_TimedParticleEffect__6B_;
  (this->PSTemplate).field0_0x0.DebugPtr = (UParticleSystem *)0x0;
  (this->SocketName).ComparisonIndex = 0;
  (this->SocketName).Number = 0;
  return this;
}

// UAnimNotifyState_TimedParticleEffect @ 1474b3f00

/* WARNING: Enum "Type": Some values do not have unique names */

UAnimNotifyState_TimedParticleEffect * __thiscall
UAnimNotifyState_TimedParticleEffect::UAnimNotifyState_TimedParticleEffect
          (UAnimNotifyState_TimedParticleEffect *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UAnimNotifyState_TimedParticleEffect__6B_;
  (this->SocketName).ComparisonIndex = 0;
  (this->SocketName).Number = 0;
  (this->PSTemplate).field0_0x0.DebugPtr = (UParticleSystem *)0x0;
  (this->LocationOffset).field0_0x0._s_0.X = 0.0;
  (this->LocationOffset).field0_0x0._s_0.Y = 0.0;
  (this->LocationOffset).field0_0x0._s_0.Z = 0.0;
  (this->RotationOffset).Pitch = 0.0;
  (this->RotationOffset).Yaw = 0.0;
  (this->RotationOffset).Roll = 0.0;
  return this;
}

// ~UAnimNotifyState_TimedParticleEffect @ 1474b5640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimNotifyState_TimedParticleEffect::~UAnimNotifyState_TimedParticleEffect
          (UAnimNotifyState_TimedParticleEffect *this)

{
  this->_padding_ = (longlong)&___7UAnimNotifyState__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetNotifyName_Implementation @ 1474dc2d0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UAnimNotifyState_TimedParticleEffect::GetNotifyName_Implementation
          (UAnimNotifyState_TimedParticleEffect *this,FString *__return_storage_ptr__)

{
  UParticleSystem *pUVar1;
  FScriptContainerElement *pFVar2;
  FName local_res8;
  FString local_18;
  
  pUVar1 = (this->PSTemplate).field0_0x0.DebugPtr;
  if (pUVar1 == (UParticleSystem *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    local_res8 = *(FName *)(this->_padding_ + 0x18);
    ::FName::ToString(&local_res8,&local_18);
    if (__return_storage_ptr__ != &local_18) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::ReplaceInline(__return_storage_ptr__,L"AnimNotifyState_",L"",CaseSensitive);
    return __return_storage_ptr__;
  }
  local_res8 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1474dd310

UClass * __cdecl UAnimNotifyState_TimedParticleEffect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_TimedParticleEffect.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyState_TimedParticleEffect",
               &Z_Registration_Info_UClass_UAnimNotifyState_TimedParticleEffect.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_TimedParticleEffect,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_TimedParticleEffect>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_TimedParticleEffect>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_TimedParticleEffect.InnerSingleton;
}

// NotifyBegin @ 1474ede80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimNotifyState_TimedParticleEffect::NotifyBegin
          (UAnimNotifyState_TimedParticleEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,float param_3)

{
  return;
}

// NotifyBegin @ 1474ede90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UAnimNotifyState_TimedParticleEffect::NotifyBegin
          (UAnimNotifyState_TimedParticleEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,float param_3,FAnimNotifyEventReference *param_4)

{
  char cVar1;
  int iVar2;
  TRotator<double> local_58;
  TVector<double>_u_0 local_38 [2];
  
  (**(code **)(this->_padding_ + 0x2c8))();
  if ((this->PSTemplate).field0_0x0.DebugPtr != (UParticleSystem *)0x0) {
    cVar1 = (**(code **)(param_1->_padding_ + 0x540))(param_1,this->SocketName);
    if (cVar1 == '\0') {
      iVar2 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)param_1,this->SocketName)
      ;
      if (iVar2 == -1) goto LAB_1474edf56;
    }
    local_58.Pitch = (this->RotationOffset).Pitch;
    local_58.Yaw = (this->RotationOffset).Yaw;
    local_58.Roll = (this->RotationOffset).Roll;
    local_38[0]._0_8_ = (this->LocationOffset).field0_0x0._s_0.X;
    local_38[0]._8_8_ = (this->LocationOffset).field0_0x0._s_0.Y;
    local_38[0]._16_8_ = (this->LocationOffset).field0_0x0._s_0.Z;
    UGameplayStatics::SpawnEmitterAttached
              ((this->PSTemplate).field0_0x0.DebugPtr,(USceneComponent *)param_1,this->SocketName,
               (TVector<double> *)&local_38[0]._s_0,&local_58,KeepRelativeOffset,
               this->bDestroyAtEnd == false,None,true);
  }
LAB_1474edf56:
  UAnimNotifyState::Received_NotifyBegin((UAnimNotifyState *)this,param_1,param_2,param_3,param_4);
  return;
}

// NotifyEnd @ 1474ee620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimNotifyState_TimedParticleEffect::NotifyEnd
          (UAnimNotifyState_TimedParticleEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2)

{
  return;
}

// NotifyEnd @ 1474ee630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAnimNotifyState_TimedParticleEffect::NotifyEnd
          (UAnimNotifyState_TimedParticleEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UParticleSystemComponent *this_00;
  FName FVar3;
  int iVar4;
  UClass *pUVar5;
  ForAnyElementType FVar6;
  undefined1 local_res8 [8];
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_38;
  
  (**(code **)(this->_padding_ + 0x2e8))();
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  USceneComponent::GetChildrenComponents((USceneComponent *)param_1,false,&local_38);
  iVar4 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar6.Data = local_38.AllocatorInstance.Data;
  do {
    if (local_38.ArrayNum != iVar4) {
      `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar6.Data == pFVar1) goto LAB_1474ee71a;
    this_00 = *(UParticleSystemComponent **)FVar6.Data;
    if (this_00 != (UParticleSystemComponent *)0x0) {
      pUVar5 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
      iVar2 = (int)pUVar5->_padding_;
      if ((((iVar2 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar5->_padding_)) &&
          (FVar3.ComparisonIndex.Value = *(uint *)&this_00->field_0xd8,
          FVar3.Number = *(uint *)&this_00->field_0xdc, FVar3 == this->SocketName)) &&
         (((this_00->Template).field0_0x0.DebugPtr == (this->PSTemplate).field0_0x0.DebugPtr &&
          (this_00->bWasDeactivated == '\0')))) {
        if (this->bDestroyAtEnd == false) {
          UParticleSystemComponent::DeactivateSystem(this_00);
        }
        else {
          (**(code **)(*(longlong *)this_00 + 0x4a0))(this_00,0);
        }
LAB_1474ee71a:
        UAnimNotifyState::Received_NotifyEnd((UAnimNotifyState *)this,param_1,param_2,param_3);
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return;
      }
    }
    FVar6.Data = FVar6.Data + 8;
  } while( true );
}

// NotifyTick @ 1474eeb80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimNotifyState_TimedParticleEffect::NotifyTick
          (UAnimNotifyState_TimedParticleEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,float param_3)

{
  return;
}

// NotifyTick @ 1474eeb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimNotifyState_TimedParticleEffect::NotifyTick
          (UAnimNotifyState_TimedParticleEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,float param_3,FAnimNotifyEventReference *param_4)

{
  (**(code **)(this->_padding_ + 0x2d8))();
  UAnimNotifyState::Received_NotifyTick((UAnimNotifyState *)this,param_1,param_2,param_3,param_4);
  return;
}

// StaticRegisterNativesUAnimNotifyState_TimedParticleEffect @ 1474fae40

void __cdecl
UAnimNotifyState_TimedParticleEffect::StaticRegisterNativesUAnimNotifyState_TimedParticleEffect
          (void)

{
  return;
}

// ValidateParameters @ 147502590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UAnimNotifyState_TimedParticleEffect::ValidateParameters
          (UAnimNotifyState_TimedParticleEffect *this,USkeletalMeshComponent *param_1)

{
  char cVar1;
  int iVar2;
  
  if ((this->PSTemplate).field0_0x0.DebugPtr == (UParticleSystem *)0x0) {
    return false;
  }
  cVar1 = (**(code **)(param_1->_padding_ + 0x540))(param_1,this->SocketName);
  if (cVar1 == '\0') {
    iVar2 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)param_1,this->SocketName);
    return iVar2 != -1;
  }
  return true;
}

