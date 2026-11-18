// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 11

// StaticClass @ 146fe9060

UClass * __cdecl UAITask::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAITask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AITask",&Z_Registration_Info_UClass_UAITask.InnerSingleton,
               StaticRegisterNativesUAITask,0x80,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UAITask>,
               InternalVTableHelperCtorCaller<UAITask>,local_res8,UGameplayTask::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAITask.InnerSingleton;
}

// UAITask @ 146febe40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UAITask * __thiscall UAITask::UAITask(UAITask *this,FVTableHelper *param_1)

{
  UGameplayTask::UGameplayTask((UGameplayTask *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->OwnerController).field0_0x0.DebugPtr = (AAIController *)0x0;
  return this;
}

// UAITask @ 146febe80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UAITask * __thiscall UAITask::UAITask(UAITask *this,FObjectInitializer *param_1)

{
  UGameplayTask::UGameplayTask((UGameplayTask *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0x7f;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->OwnerController).field0_0x0.DebugPtr = (AAIController *)0x0;
  return this;
}

// ~UAITask @ 146fec810

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAITask::~UAITask(UAITask *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UGameplayTask::~UGameplayTask((UGameplayTask *)this);
  return;
}

// Activate @ 146fed5f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAITask::Activate(UAITask *this)

{
  int iVar1;
  AAIController *pAVar2;
  UClass *pUVar3;
  
  UGameplayTask::Activate((UGameplayTask *)this);
  if ((this->OwnerController).field0_0x0.DebugPtr != (AAIController *)0x0) {
    return;
  }
  pAVar2 = (AAIController *)UGameplayTask::GetOwnerActor((UGameplayTask *)this);
  if (pAVar2 == (AAIController *)0x0) {
    return;
  }
  pUVar3 = Z_Construct_UClass_AAIController_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(pAVar2->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_)) {
    pUVar3 = Z_Construct_UClass_APawn_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       (((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar3->_padding_ &&
        (pAVar2 = (AAIController *)pAVar2->_padding_, pAVar2 != (AAIController *)0x0)))) {
      pUVar3 = Z_Construct_UClass_AAIController_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) goto LAB_146fed699;
    }
    pAVar2 = (AAIController *)0x0;
  }
LAB_146fed699:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar2 != (AAIController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar2);
  }
  (this->OwnerController).field0_0x0.DebugPtr = pAVar2;
  return;
}

// GetAIControllerForActor @ 146ff0640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AAIController * __cdecl UAITask::GetAIControllerForActor(AActor *param_1)

{
  int iVar1;
  AAIController *pAVar2;
  UClass *pUVar3;
  
  if (param_1 != (AActor *)0x0) {
    pUVar3 = Z_Construct_UClass_AAIController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return (AAIController *)param_1;
    }
  }
  if (param_1 == (AActor *)0x0) {
    return (AAIController *)0x0;
  }
  pUVar3 = Z_Construct_UClass_APawn_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if (iVar1 <= *(int *)(param_1->_padding_ + 0x38)) {
    if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_) {
      return (AAIController *)0x0;
    }
    pAVar2 = (AAIController *)param_1[1].PrimaryActorTick._padding_;
    if (pAVar2 != (AAIController *)0x0) {
      pUVar3 = Z_Construct_UClass_AAIController_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pAVar2;
      }
    }
    return (AAIController *)0x0;
  }
  return (AAIController *)0x0;
}

// GetPrivateStaticClass @ 146ff09f0

UClass * __cdecl UAITask::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAITask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AITask",&Z_Registration_Info_UClass_UAITask.InnerSingleton,
               StaticRegisterNativesUAITask,0x80,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UAITask>,
               InternalVTableHelperCtorCaller<UAITask>,local_res8,UGameplayTask::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAITask.InnerSingleton;
}

// InitAITask @ 146ff14d0

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
UAITask::InitAITask(UAITask *this,AAIController *param_1,IGameplayTaskOwnerInterface *param_2)

{
  uchar uVar1;
  UClass *local_res8;
  
  uVar1 = (**(code **)((longlong)*param_2 + 0x28))(param_2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AAIController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->OwnerController).field0_0x0.DebugPtr = param_1;
  UGameplayTask::InitTask((UGameplayTask *)this,param_2,uVar1);
  if (uVar1 == '\x7f') {
    local_res8 = Z_Construct_UClass_UAIResource_Logic_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UGameplayTask::AddRequiredResource
              ((UGameplayTask *)this,(TSubclassOf<UGameplayTaskResource>)&local_res8);
  }
  return;
}

// InitAITask @ 146ff1570

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
UAITask::InitAITask(UAITask *this,AAIController *param_1,IGameplayTaskOwnerInterface *param_2,
                   uchar param_3)

{
  UClass *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AAIController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->OwnerController).field0_0x0.DebugPtr = param_1;
  UGameplayTask::InitTask((UGameplayTask *)this,param_2,param_3);
  if (param_3 == '\x7f') {
    local_res8 = Z_Construct_UClass_UAIResource_Logic_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UGameplayTask::AddRequiredResource
              ((UGameplayTask *)this,(TSubclassOf<UGameplayTaskResource>)&local_res8);
  }
  return;
}

// RequestAILogicLocking @ 146ff2ea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAITask::RequestAILogicLocking(UAITask *this)

{
  UClass *local_res10 [3];
  
  local_res10[0] = Z_Construct_UClass_UAIResource_Logic_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  UGameplayTask::AddClaimedResource
            ((UGameplayTask *)this,(TSubclassOf<UGameplayTaskResource>)local_res10);
  return;
}

// StaticRegisterNativesUAITask @ 146ff3ca0

void __cdecl UAITask::StaticRegisterNativesUAITask(void)

{
  return;
}

