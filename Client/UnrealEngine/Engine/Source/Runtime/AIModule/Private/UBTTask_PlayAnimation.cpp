// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 11

// StaticClass @ 146ea8ef0

UClass * __cdecl UBTTask_PlayAnimation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_PlayAnimation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_PlayAnimation",
               &Z_Registration_Info_UClass_UBTTask_PlayAnimation.InnerSingleton,
               StaticRegisterNativesUBTTask_PlayAnimation,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_PlayAnimation>,
               InternalVTableHelperCtorCaller<UBTTask_PlayAnimation>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_PlayAnimation.InnerSingleton;
}

// UBTTask_PlayAnimation @ 146ec96a0

UBTTask_PlayAnimation * __thiscall
UBTTask_PlayAnimation::UBTTask_PlayAnimation(UBTTask_PlayAnimation *this,FVTableHelper *param_1)

{
  UClass *pUVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->AnimationToPlay)._padding_ = 0;
  *(undefined2 *)&(this->AnimationToPlay)._padding_ = 0xffff;
  (this->AnimationToPlay).DefaultValue.field0_0x0.DebugPtr = (UObject *)0x0;
  pUVar1 = Z_Construct_UClass_UAnimationAsset_NoRegister();
  (this->AnimationToPlay).BaseClass.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->bLooping)._padding_ = 0;
  *(undefined2 *)&(this->bLooping)._padding_ = 0xffff;
  (this->bLooping).DefaultValue = false;
  (this->bNonBlocking)._padding_ = 0;
  *(undefined2 *)&(this->bNonBlocking)._padding_ = 0xffff;
  (this->bNonBlocking).DefaultValue = false;
  (this->MyOwnerComp).field0_0x0.DebugPtr = (UBehaviorTreeComponent *)0x0;
  (this->CachedSkelMesh).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  *(undefined8 *)&this->TimerDelegate = 0;
  *(undefined4 *)&(this->TimerDelegate).field_0x8 = 0;
  (this->TimerHandle).Handle = 0;
  return this;
}

// UBTTask_PlayAnimation @ 146ec9790

UBTTask_PlayAnimation * __thiscall
UBTTask_PlayAnimation::UBTTask_PlayAnimation
          (UBTTask_PlayAnimation *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *this_00;
  undefined4 uVar3;
  uint uVar4;
  ForElementType<TAlignedBytes<16,16>_> FVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UBTTask_PlayAnimation *local_res8;
  FDelegateAllocation local_48;
  FString local_38;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  UObject::UObject((UObject *)this,param_1);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfe;
  plVar2 = &this->_padding_;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *plVar2 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->AnimationToPlay)._padding_ = 0;
  *(undefined2 *)&(this->AnimationToPlay)._padding_ = 0xffff;
  (this->AnimationToPlay).DefaultValue.field0_0x0.DebugPtr = (UObject *)0x0;
  pUVar6 = Z_Construct_UClass_UAnimationAsset_NoRegister();
  (this->AnimationToPlay).BaseClass.field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->bLooping)._padding_ = 0;
  this_00 = &this->TimerDelegate;
  *(undefined2 *)&(this->bLooping)._padding_ = 0xffff;
  (this->bLooping).DefaultValue = false;
  (this->bNonBlocking)._padding_ = 0;
  *(undefined2 *)&(this->bNonBlocking)._padding_ = 0xffff;
  (this->bNonBlocking).DefaultValue = false;
  (this->MyOwnerComp).field0_0x0.DebugPtr = (UBehaviorTreeComponent *)0x0;
  (this->CachedSkelMesh).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined4 *)&(this->TimerDelegate).field_0x8 = 0;
  (this->TimerHandle).Handle = 0;
  ::FString::FString(&local_38,"Play Animation");
  if ((FString *)plVar2 != &local_38) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)local_38.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_38.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 | 4;
  uVar4 = (uint)local_48._12_4_ >> 8;
  local_48._12_4_ = uVar4 << 8;
  (this->bLooping)._padding_ = 0;
  (this->bLooping)._padding_ = CONCAT22(local_48.DelegateSize._2_2_,0xffff);
  (this->bLooping).DefaultValue = (bool)local_48._12_1_;
  *(int3 *)&(this->bLooping).field_0xd = local_48._13_3_;
  local_48._12_4_ = uVar4 << 8;
  local_28 = OnAnimationTimerDone;
  (this->bNonBlocking)._padding_ = 0;
  (this->bNonBlocking)._padding_ = CONCAT22(local_48.DelegateSize._2_2_,0xffff);
  (this->bNonBlocking).DefaultValue = (bool)local_48._12_1_;
  *(int3 *)&(this->bNonBlocking).field_0xd = local_48._13_3_;
  uStack_20 = 0;
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize._0_2_ = 0;
  local_48.DelegateSize._2_2_ = 0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_48);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_PlayAnimation____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar7[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res8);
    *(undefined4 *)(puVar7 + 4) = (undefined4)local_28;
    *(undefined4 *)((longlong)puVar7 + 0x24) = local_28._4_4_;
    *(undefined4 *)(puVar7 + 5) = uStack_20;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uStack_1c;
  }
  FVar5 = local_48.DelegateAllocator;
  uVar3 = CONCAT22(local_48.DelegateSize._2_2_,(undefined2)local_48.DelegateSize);
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize._0_2_ = 0;
  local_48.DelegateSize._2_2_ = 0;
  if ((*(int *)&(this->TimerDelegate).field_0x8 != 0) &&
     (puVar7 = *(undefined8 **)this_00, puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)(puVar7);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this_00,0,0,0x10);
    *(undefined4 *)&(this->TimerDelegate).field_0x8 = 0;
  }
  if (*(void **)this_00 != (void *)0x0) {
    FMemory::Free(*(void **)this_00);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)this_00 = FVar5;
  *(undefined4 *)&(this->TimerDelegate).field_0x8 = uVar3;
  if (CONCAT22(local_48.DelegateSize._2_2_,(undefined2)local_48.DelegateSize) != 0) {
    if (local_48.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
    goto LAB_146ec9a31;
    (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_48,0,0,0x10);
    local_48.DelegateSize._0_2_ = 0;
    local_48.DelegateSize._2_2_ = 0;
  }
  if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_48.DelegateAllocator);
  }
LAB_146ec9a31:
  this->PreviousAnimationMode = AnimationBlueprint;
  return this;
}

// ~UBTTask_PlayAnimation @ 146ecd5f0

void __thiscall UBTTask_PlayAnimation::~UBTTask_PlayAnimation(UBTTask_PlayAnimation *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  if ((*(int *)&(this->TimerDelegate).field_0x8 != 0) &&
     (*(undefined8 **)&this->TimerDelegate != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)&this->TimerDelegate)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->TimerDelegate,0,0,0x10);
    *(undefined4 *)&(this->TimerDelegate).field_0x8 = 0;
  }
  if (*(void **)&this->TimerDelegate != (void *)0x0) {
    FMemory::Free(*(void **)&this->TimerDelegate);
  }
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// AbortTask @ 146ed1870

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

Type __thiscall
UBTTask_PlayAnimation::AbortTask
          (UBTTask_PlayAnimation *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  AActor *this_00;
  USkeletalMeshComponent *this_01;
  UAnimationAsset *pUVar1;
  UWorld *this_02;
  FTimerManager *this_03;
  FTimerData *pFVar2;
  
  this_00 = (AActor *)param_1->_padding_;
  pUVar1 = FValueOrBBKey_Object::GetValue<UAnimationAsset>(&this->AnimationToPlay,param_1);
  if (((pUVar1 != (UAnimationAsset *)0x0) && (this_00 != (AActor *)0x0)) &&
     ((this->TimerHandle).Handle != 0)) {
    this_02 = AActor::GetWorld(this_00);
    this_03 = UWorld::GetTimerManager(this_02);
    pFVar2 = FTimerManager::FindTimer(this_03,&this->TimerHandle);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_03,(FTimerHandle)(this->TimerHandle).Handle);
    }
  }
  this_01 = (this->CachedSkelMesh).field0_0x0.DebugPtr;
  (this->TimerHandle).Handle = 0;
  if ((this_01 != (USkeletalMeshComponent *)0x0) &&
     (this->PreviousAnimationMode == AnimationBlueprint)) {
    USkeletalMeshComponent::SetAnimationMode(this_01,AnimationBlueprint,true);
  }
  return Aborted;
}

// CleanUp @ 146ed5ad0

void __thiscall
UBTTask_PlayAnimation::CleanUp(UBTTask_PlayAnimation *this,UBehaviorTreeComponent *param_1)

{
  USkeletalMeshComponent *this_00;
  
  this_00 = (this->CachedSkelMesh).field0_0x0.DebugPtr;
  if ((this_00 != (USkeletalMeshComponent *)0x0) &&
     (this->PreviousAnimationMode == AnimationBlueprint)) {
    USkeletalMeshComponent::SetAnimationMode(this_00,AnimationBlueprint,true);
    return;
  }
  return;
}

// ExecuteTask @ 146ee1100

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
UBTTask_PlayAnimation::ExecuteTask
          (UBTTask_PlayAnimation *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  AActor *this_00;
  AActor *pAVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  Type TVar5;
  Type TVar6;
  UAnimationAsset *pUVar7;
  UClass *pUVar8;
  USkeletalMeshComponent *this_01;
  UWorld *this_02;
  FTimerManager *this_03;
  float fVar9;
  FObjectPtr_u_0 local_res8;
  FString local_48 [2];
  
  this_00 = (AActor *)param_1->_padding_;
  (this->TimerHandle).Handle = 0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->MyOwnerComp).field0_0x0.DebugPtr = param_1;
  pUVar7 = FValueOrBBKey_Object::GetValue<UAnimationAsset>(&this->AnimationToPlay,param_1);
  if (((pUVar7 == (UAnimationAsset *)0x0) || (this_00 == (AActor *)0x0)) ||
     (pAVar1 = this_00[1].PrimaryActorTick.Target, pAVar1 == (AActor *)0x0)) {
    return Failed;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  local_res8 = (FObjectPtr_u_0)this_00[1].PrimaryActorTick.Target;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((AActor *)local_res8.Handle != (AActor *)0x0)) {
    UE::GC::MarkAsReachable(local_res8.Handle);
  }
  if ((AActor *)local_res8.Handle != (AActor *)0x0) {
    pUVar8 = Z_Construct_UClass_ACharacter_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar8);
    if ((bVar3) && ((AActor *)local_res8.Handle != (AActor *)0x0)) {
      this_01 = *(USkeletalMeshComponent **)&local_res8.Handle[0x14].field_0x20;
      goto LAB_146ee1245;
    }
  }
  pAVar1 = this_00[1].PrimaryActorTick.Target;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  pcVar2 = *(code **)(pAVar1->_padding_ + 0x738);
  local_res8.Handle = (UObject *)Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((AActor *)local_res8.Handle != (AActor *)0x0)) {
    UE::GC::MarkAsReachable(local_res8.Handle);
  }
  this_01 = (USkeletalMeshComponent *)(*pcVar2)(pAVar1,&local_res8);
LAB_146ee1245:
  if (this_01 == (USkeletalMeshComponent *)0x0) {
    TVar6 = Failed;
  }
  else {
    TVar5 = USkeletalMeshComponent::GetAnimationMode(this_01);
    this->PreviousAnimationMode = TVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    (this->CachedSkelMesh).field0_0x0.DebugPtr = this_01;
    if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
      bVar3 = (this->bLooping).DefaultValue;
    }
    else {
      bVar3 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                        ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->bLooping,
                         (FKey *)&(this->bLooping)._padding_,&(this->bLooping).DefaultValue);
    }
    USkeletalMeshComponent::PlayAnimation(this_01,pUVar7,bVar3);
    fVar9 = (float)(**(code **)(pUVar7->_padding_ + 0x2c0))(pUVar7);
    if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
      cVar4 = (this->bNonBlocking).DefaultValue;
    }
    else {
      cVar4 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                        ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->bNonBlocking,
                         (FKey *)&(this->bNonBlocking)._padding_,&(this->bNonBlocking).DefaultValue)
      ;
    }
    if ((cVar4 != '\0') || (fVar9 <= 0.0)) {
      if (FVisualLogger::bIsRecording != 0) {
        if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
          cVar4 = (this->bNonBlocking).DefaultValue;
        }
        else {
          cVar4 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                            ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->bNonBlocking
                             ,(FKey *)&(this->bNonBlocking)._padding_,
                             &(this->bNonBlocking).DefaultValue);
        }
        if ((cVar4 == '\0') && (FVisualLogger::bIsRecording != 0)) {
          UBTNode::GetNodeName((UBTNode *)this,local_48);
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this_00,(FName *)&LogBehaviorTree.field_0x4,Log,
                     L"%s> Instant success due to having a valid AnimationToPlay and Character with SkelMesh, but 0-length animation"
                    );
          if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
          }
        }
      }
      TVar6 = Succeeded;
    }
    else {
      if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
        cVar4 = (this->bLooping).DefaultValue;
      }
      else {
        cVar4 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                          ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->bLooping,
                           (FKey *)&(this->bLooping)._padding_,&(this->bLooping).DefaultValue);
      }
      if (cVar4 == '\0') {
        this_02 = AActor::GetWorld(this_00);
        this_03 = UWorld::GetTimerManager(this_02);
        FTimerManager::SetTimer
                  (this_03,&this->TimerHandle,&this->TimerDelegate,fVar9,false,__real_bf800000);
      }
      TVar6 = InProgress;
    }
  }
  return TVar6;
}

// GetPrivateStaticClass @ 146ee8b20

UClass * __cdecl UBTTask_PlayAnimation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_PlayAnimation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_PlayAnimation",
               &Z_Registration_Info_UClass_UBTTask_PlayAnimation.InnerSingleton,
               StaticRegisterNativesUBTTask_PlayAnimation,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_PlayAnimation>,
               InternalVTableHelperCtorCaller<UBTTask_PlayAnimation>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_PlayAnimation.InnerSingleton;
}

// GetStaticDescription @ 146eeccd0

FString * __thiscall
UBTTask_PlayAnimation::GetStaticDescription
          (UBTTask_PlayAnimation *this,FString *__return_storage_ptr__)

{
  UObject *pUVar1;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  FValueOrBBKey_Bool::ToString(&this->bNonBlocking,&local_28);
  FValueOrBBKey_Bool::ToString(&this->bLooping,&local_38);
  if ((this->AnimationToPlay)._padding_ == 0) {
    pUVar1 = (this->AnimationToPlay).DefaultValue.field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
      local_res8.Number = *(uint *)&pUVar1->field_0x1c;
      ::FName::ToString(&local_res8,&local_58);
    }
  }
  else {
    FValueOrBlackboardKeyBase::ToStringKeyName
              ((FValueOrBlackboardKeyBase *)&this->AnimationToPlay,&local_58);
  }
  UBehaviorTreeTypes::GetShortTypeName(&local_48,(UObject *)this);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: Anim:\'%s\' Looping:%s Blocking:%s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OnAnimationTimerDone @ 146ef5590

void __thiscall UBTTask_PlayAnimation::OnAnimationTimerDone(UBTTask_PlayAnimation *this)

{
  USkeletalMeshComponent *this_00;
  UBehaviorTreeComponent *this_01;
  UBTTaskNode *pUVar1;
  
  if ((this->MyOwnerComp).field0_0x0.DebugPtr != (UBehaviorTreeComponent *)0x0) {
    this_00 = (this->CachedSkelMesh).field0_0x0.DebugPtr;
    if ((this_00 != (USkeletalMeshComponent *)0x0) &&
       (this->PreviousAnimationMode == AnimationBlueprint)) {
      USkeletalMeshComponent::SetAnimationMode(this_00,AnimationBlueprint,true);
    }
    this_01 = (this->MyOwnerComp).field0_0x0.DebugPtr;
    pUVar1 = (UBTTaskNode *)UBehaviorTreeComponent::FindTemplateNode(this_01,(UBTNode *)this);
    UBehaviorTreeComponent::OnTaskFinished(this_01,pUVar1,Succeeded);
  }
  return;
}

// StaticRegisterNativesUBTTask_PlayAnimation @ 146f00e00

void __cdecl UBTTask_PlayAnimation::StaticRegisterNativesUBTTask_PlayAnimation(void)

{
  return;
}

