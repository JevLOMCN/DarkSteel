// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146eab900

UClass * __cdecl UBTTask_PlaySound::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_PlaySound.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_PlaySound",
               &Z_Registration_Info_UClass_UBTTask_PlaySound.InnerSingleton,
               StaticRegisterNativesUBTTask_PlaySound,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Game",
               InternalConstructor<UBTTask_PlaySound>,
               InternalVTableHelperCtorCaller<UBTTask_PlaySound>,local_res8,UBTTaskNode::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_PlaySound.InnerSingleton;
}

// UBTTask_PlaySound @ 146ec9a60

UBTTask_PlaySound * __thiscall
UBTTask_PlaySound::UBTTask_PlaySound(UBTTask_PlaySound *this,FVTableHelper *param_1)

{
  UClass *pUVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SoundToPlay)._padding_ = 0;
  *(undefined2 *)&(this->SoundToPlay)._padding_ = 0xffff;
  (this->SoundToPlay).DefaultValue.field0_0x0.DebugPtr = (UObject *)0x0;
  pUVar1 = Z_Construct_UClass_USoundCue_NoRegister();
  (this->SoundToPlay).BaseClass.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

// UBTTask_PlaySound @ 146ec9ae0

UBTTask_PlaySound * __thiscall
UBTTask_PlaySound::UBTTask_PlaySound(UBTTask_PlaySound *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  UClass *pUVar3;
  FString local_18;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  plVar2 = &this->_padding_;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *plVar2 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SoundToPlay)._padding_ = 0;
  *(undefined2 *)&(this->SoundToPlay)._padding_ = 0xffff;
  (this->SoundToPlay).DefaultValue.field0_0x0.DebugPtr = (UObject *)0x0;
  pUVar3 = Z_Construct_UClass_USoundCue_NoRegister();
  (this->SoundToPlay).BaseClass.field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  ::FString::FString(&local_18,"PlaySound");
  if ((FString *)plVar2 != &local_18) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)local_18.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_18.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UBTTask_PlaySound @ 146ecd680

void __thiscall UBTTask_PlaySound::~UBTTask_PlaySound(UBTTask_PlaySound *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// ExecuteTask @ 146ee1460

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
UBTTask_PlaySound::ExecuteTask
          (UBTTask_PlaySound *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  TObjectPtr<UObject>_u_0 TVar4;
  UClass *pUVar5;
  UAudioComponent *pUVar6;
  UAudioComponent *pUVar7;
  TObjectPtr<UObject>_u_0 local_res8;
  TRotator<double> local_68;
  TVector<double>_u_0 local_48 [2];
  
  TVar4 = (TObjectPtr<UObject>_u_0)(this->SoundToPlay).DefaultValue.field0_0x0.DebugPtr;
  lVar2 = param_1->_padding_;
  pUVar7 = (UAudioComponent *)0x0;
  local_res8 = TVar4;
  if ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0) {
    TVar4.DebugPtr =
         FBlackboard::GetValue<UBlackboardKeyType_Object>
                   ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->SoundToPlay,
                    (FKey *)&(this->SoundToPlay)._padding_,&local_res8.DebugPtr);
  }
  pUVar6 = (UAudioComponent *)0x0;
  if ((USoundBase *)TVar4.DebugPtr != (USoundBase *)0x0) {
    pUVar5 = Z_Construct_UClass_USoundCue_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    pUVar6 = pUVar7;
    if (((iVar1 <= *(int *)(*(longlong *)&(TVar4.DebugPtr)->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&(TVar4.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar1 * 8)
         == &pUVar5->_padding_)) && (lVar2 != 0)) {
      pUVar3 = *(UObject **)(lVar2 + 0x310);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar3 == (UObject *)0x0) goto LAB_146ee15af;
        UE::GC::MarkAsReachable(pUVar3);
      }
      if (pUVar3 != (UObject *)0x0) {
        local_68.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        local_68.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_68.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
        local_48[0]._s_0.X = 0.0;
        local_48[0]._s_0.Y = 0.0;
        local_res8.DebugPtr = (UObject *)0x0;
        local_48[0]._s_0.Z = 0.0;
        pUVar6 = UGameplayStatics::SpawnSoundAttached
                           ((USoundBase *)TVar4.DebugPtr,*(USceneComponent **)(pUVar3 + 0xb),
                            (FName)0x0,(TVector<double> *)&local_48[0]._s_0,&local_68,
                            KeepRelativeOffset,false,__real_3f800000,__real_3f800000,0.0,
                            (USoundAttenuation *)0x0,(USoundConcurrency *)0x0,true);
      }
    }
  }
LAB_146ee15af:
  return (Type)(pUVar6 == (UAudioComponent *)0x0);
}

// GetPrivateStaticClass @ 146ee8be0

UClass * __cdecl UBTTask_PlaySound::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_PlaySound.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_PlaySound",
               &Z_Registration_Info_UClass_UBTTask_PlaySound.InnerSingleton,
               StaticRegisterNativesUBTTask_PlaySound,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Game",
               InternalConstructor<UBTTask_PlaySound>,
               InternalVTableHelperCtorCaller<UBTTask_PlaySound>,local_res8,UBTTaskNode::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_PlaySound.InnerSingleton;
}

// GetStaticDescription @ 146eece30

FString * __thiscall
UBTTask_PlaySound::GetStaticDescription(UBTTask_PlaySound *this,FString *__return_storage_ptr__)

{
  UObject *pUVar1;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if ((this->SoundToPlay)._padding_ == 0) {
    pUVar1 = (this->SoundToPlay).DefaultValue.field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
      local_res8.Number = *(uint *)&pUVar1->field_0x1c;
      ::FName::ToString(&local_res8,&local_28);
    }
  }
  else {
    FValueOrBlackboardKeyBase::ToStringKeyName
              ((FValueOrBlackboardKeyBase *)&this->SoundToPlay,&local_28);
  }
  UBehaviorTreeTypes::GetShortTypeName(&local_18,(UObject *)this);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: \'%s\'");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUBTTask_PlaySound @ 146f00e10

void __cdecl UBTTask_PlaySound::StaticRegisterNativesUBTTask_PlaySound(void)

{
  return;
}

