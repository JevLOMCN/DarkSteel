// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetaHumanSDKRuntime
// Functions: 14

// StaticClass @ 14df89f30

UClass * __cdecl UMetaHumanComponentBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaHumanComponentBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetaHumanSDKRuntime",L"MetaHumanComponentBase",
               &Z_Registration_Info_UClass_UMetaHumanComponentBase.InnerSingleton,
               StaticRegisterNativesUMetaHumanComponentBase,400,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMetaHumanComponentBase>,
               InternalVTableHelperCtorCaller<UMetaHumanComponentBase>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaHumanComponentBase.InnerSingleton;
}

// UMetaHumanComponentBase @ 14df8c450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMetaHumanComponentBase * __thiscall
UMetaHumanComponentBase::UMetaHumanComponentBase(UMetaHumanComponentBase *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FObjectInitializer *pFVar3;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar3 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar3);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  ::FString::FString(&this->BodyComponentName,"Body");
  this->BodyType = BlendableBody;
  this->bEnableBodyCorrectives = true;
  ::FString::FString(&this->FaceComponentName,"Face");
  this->RigLogicLODThreshold = -1;
  (this->Torso).ControlRigClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Torso).PhysicsAsset.field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  (this->Torso).ComponentName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Torso).ComponentName.Data.ArrayNum = 0;
  (this->Torso).ComponentName.Data.ArrayMax = 0;
  (this->Legs).ControlRigClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Legs).PhysicsAsset.field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  (this->Legs).ComponentName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Legs).ComponentName.Data.ArrayNum = 0;
  (this->Legs).ComponentName.Data.ArrayMax = 0;
  (this->Feet).ControlRigClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Feet).PhysicsAsset.field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  (this->Feet).ComponentName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Feet).ComponentName.Data.ArrayNum = 0;
  (this->Feet).ComponentName.Data.ArrayMax = 0;
  this->bEnableNeckCorrectives = true;
  this->NeckCorrectivesLODThreshold = -1;
  this->bEnableNeckProcControlRig = true;
  this->NeckProcControlRigLODThreshold = -1;
  (this->Torso).ControlRigLODThreshold = -1;
  (this->Torso).RigidBodyLODThreshold = -1;
  (this->Legs).ControlRigLODThreshold = -1;
  (this->Legs).RigidBodyLODThreshold = -1;
  (this->Feet).ControlRigLODThreshold = -1;
  (this->Feet).RigidBodyLODThreshold = -1;
  ::FString::FString(&local_38,"Torso");
  pFVar1 = &(this->Torso).ComponentName;
  if (pFVar1 != &local_38) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (this->Torso).ComponentName.Data.ArrayNum = local_38.Data.ArrayNum;
    (this->Torso).ComponentName.Data.ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,"Legs");
  pFVar1 = &(this->Legs).ComponentName;
  if (pFVar1 != &local_28) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (this->Legs).ComponentName.Data.ArrayNum = local_28.Data.ArrayNum;
    (this->Legs).ComponentName.Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Feet");
  pFVar1 = &(this->Feet).ComponentName;
  if (pFVar1 != &local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (this->Feet).ComponentName.Data.ArrayNum = local_18.Data.ArrayNum;
    (this->Feet).ComponentName.Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// UMetaHumanComponentBase @ 14df8c6c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMetaHumanComponentBase * __thiscall
UMetaHumanComponentBase::UMetaHumanComponentBase
          (UMetaHumanComponentBase *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  ::FString::FString(&this->BodyComponentName,"Body");
  this->BodyType = BlendableBody;
  this->bEnableBodyCorrectives = true;
  ::FString::FString(&this->FaceComponentName,"Face");
  this->RigLogicLODThreshold = -1;
  (this->Torso).ControlRigClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Torso).PhysicsAsset.field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  (this->Torso).ComponentName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Torso).ComponentName.Data.ArrayNum = 0;
  (this->Torso).ComponentName.Data.ArrayMax = 0;
  (this->Legs).ControlRigClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Legs).PhysicsAsset.field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  (this->Legs).ComponentName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Legs).ComponentName.Data.ArrayNum = 0;
  (this->Legs).ComponentName.Data.ArrayMax = 0;
  (this->Feet).ControlRigClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Feet).PhysicsAsset.field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  (this->Feet).ComponentName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Feet).ComponentName.Data.ArrayNum = 0;
  (this->Feet).ComponentName.Data.ArrayMax = 0;
  this->bEnableNeckCorrectives = true;
  this->NeckCorrectivesLODThreshold = -1;
  this->bEnableNeckProcControlRig = true;
  this->NeckProcControlRigLODThreshold = -1;
  (this->Torso).ControlRigLODThreshold = -1;
  (this->Torso).RigidBodyLODThreshold = -1;
  (this->Legs).ControlRigLODThreshold = -1;
  (this->Legs).RigidBodyLODThreshold = -1;
  (this->Feet).ControlRigLODThreshold = -1;
  (this->Feet).RigidBodyLODThreshold = -1;
  return this;
}

// ~UMetaHumanComponentBase @ 14df8c8d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMetaHumanComponentBase::~UMetaHumanComponentBase(UMetaHumanComponentBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->Feet).ComponentName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Legs).ComponentName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Torso).ComponentName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FaceComponentName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BodyComponentName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// operator() @ 14df8ca80

void __thiscall
`UMetaHumanComponentBase::LoadAndRunAnimBP'::__l2::<lambda_1>::operator()(void *this)

{
  FWeakObjectPtr *this_00;
  bool bVar1;
  UMetaHumanComponentBase *this_01;
  USkeletalMeshComponent *pUVar2;
  USkeletalMesh *pUVar3;
  longlong lVar4;
  UAnimInstance *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  code *pcVar8;
  UClass *local_res8;
  
  this_01 = (UMetaHumanComponentBase *)FWeakObjectPtr::Get(this);
  if (this_01 != (UMetaHumanComponentBase *)0x0) {
    this_00 = (FWeakObjectPtr *)((longlong)this + 0x30);
    bVar1 = FWeakObjectPtr::IsValid(this_00);
    if (bVar1) {
      pUVar2 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(this_00);
      pUVar3 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar2);
      if (((pUVar3 != (USkeletalMesh *)0x0) && (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0)) &&
         (lVar4 = (**(code **)(pUVar3->_padding_ + 0x408))(pUVar3), lVar4 != 0)) {
        if (*(char *)((longlong)this + 0x38) == '\0') {
          pUVar7 = FWeakObjectPtr::Get(this_00);
          pcVar8 = *(code **)(*(longlong *)pUVar7 + 0xc70);
          pUVar6 = TSoftClassPtr<UAnimInstance>::Get
                             ((TSoftClassPtr<UAnimInstance> *)((longlong)this + 8));
          (*pcVar8)(pUVar7,pUVar6);
          pcVar8 = *(code **)(this_01->_padding_ + 0x4f8);
          pUVar2 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(this_00);
          pUVar5 = USkeletalMeshComponent::GetAnimInstance(pUVar2);
        }
        else {
          bVar1 = *(bool *)((longlong)this + 0x39);
          local_res8 = TSoftClassPtr<UAnimInstance>::Get
                                 ((TSoftClassPtr<UAnimInstance> *)((longlong)this + 8));
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)local_res8);
          }
          pUVar2 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(this_00);
          UMetaHumanComponentBase::RunAndInitPostAnimBP
                    (this_01,pUVar2,(TSubclassOf<UAnimInstance>)&local_res8,bVar1,true);
          pcVar8 = *(code **)(this_01->_padding_ + 0x4f8);
          pUVar2 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(this_00);
          pUVar5 = USkeletalMeshComponent::GetPostProcessInstance(pUVar2);
        }
        pUVar7 = FWeakObjectPtr::Get(this_00);
        (*pcVar8)(this_01,pUVar7,pUVar5);
      }
    }
  }
  return;
}

// GetBodySkelMeshComponent @ 14df8cfc0

USkeletalMeshComponent * __thiscall
UMetaHumanComponentBase::GetBodySkelMeshComponent(UMetaHumanComponentBase *this)

{
  int iVar1;
  USkeletalMeshComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = GetSkelMeshComponentByName(this,&this->BodyComponentName);
  if (pUVar2 == (USkeletalMeshComponent *)0x0) {
    pUVar2 = GetSkelMeshComponentByName(this,&this->FaceComponentName);
    if ((pUVar2 != (USkeletalMeshComponent *)0x0) &&
       (pUVar2 = (USkeletalMeshComponent *)pUVar2->_padding_,
       pUVar2 != (USkeletalMeshComponent *)0x0)) {
      pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar2;
      }
    }
    pUVar2 = (USkeletalMeshComponent *)0x0;
  }
  return pUVar2;
}

// GetPrivateStaticClass @ 14df8d060

UClass * __cdecl UMetaHumanComponentBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaHumanComponentBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetaHumanSDKRuntime",L"MetaHumanComponentBase",
               &Z_Registration_Info_UClass_UMetaHumanComponentBase.InnerSingleton,
               StaticRegisterNativesUMetaHumanComponentBase,400,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMetaHumanComponentBase>,
               InternalVTableHelperCtorCaller<UMetaHumanComponentBase>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaHumanComponentBase.InnerSingleton;
}

// GetSkelMeshComponentByName @ 14df8d1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USkeletalMeshComponent * __thiscall
UMetaHumanComponentBase::GetSkelMeshComponentByName(UMetaHumanComponentBase *this,FString *param_1)

{
  int iVar1;
  AActor *this_00;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  USkeletalMeshComponent *pUVar7;
  UClass *pUVar8;
  USkeletalMeshComponent *pUVar9;
  USkeletalMeshComponent *pUVar10;
  FString *pFVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  USkeletalMeshComponent *local_b8;
  USkeletalMeshComponent *local_b0;
  FScriptContainerElement *local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_98;
  FString local_88;
  undefined1 local_78 [40];
  undefined1 *local_50;
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  USkeletalMeshComponent *pUVar15;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pUVar10 = (USkeletalMeshComponent *)0x0;
  this_00 = (AActor *)this->_padding_;
  local_48 = 0;
  local_50 = (undefined1 *)0x0;
  local_44 = 5;
  pUVar7 = pUVar10;
  if (this_00 == (AActor *)0x0) goto LAB_14df8d301;
  pUVar7 = (USkeletalMeshComponent *)Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar7 != (USkeletalMeshComponent *)0x0) goto LAB_14df8d260;
LAB_14df8d291:
    pUVar15 = pUVar10;
  }
  else {
    if (pUVar7 == (USkeletalMeshComponent *)0x0) goto LAB_14df8d291;
    UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_14df8d260:
    pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar8 == (UClass *)0x0) goto LAB_14df8d291;
    iVar12 = (int)pUVar8->_padding_;
    if (((int)pUVar7->_padding_ < iVar12) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar12 * 8) != &pUVar8->_padding_
       )) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pUVar15 = pUVar7;
    if (!bVar5) goto LAB_14df8d291;
  }
  pUVar9 = (USkeletalMeshComponent *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar15 == pUVar9) {
    local_b8 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (USkeletalMeshComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    AActor::
    ForEachComponent_Internal<USkeletalMeshComponent,1,0,_AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_b8,
               (TArray<USkeletalMeshComponent_*,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
                *)local_78);
  }
  else {
    local_b0 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (USkeletalMeshComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    AActor::
    ForEachComponent_Internal<USkeletalMeshComponent,0,0,_AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_b0,
               (TArray<USkeletalMeshComponent_*,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
                *)local_78);
  }
  pUVar7 = (USkeletalMeshComponent *)(ulonglong)local_48;
LAB_14df8d301:
  iVar12 = (int)pUVar7;
  pUVar15 = pUVar10;
  pUVar9 = pUVar10;
  if (0 < iVar12) {
    while( true ) {
      uVar14 = (uint)pUVar15;
      uVar6 = 0;
      if ((int)uVar14 < (int)pUVar7) {
        uVar6 = ~uVar14 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_c0 = (longlong)(int)pUVar7;
        local_c8 = (longlong)(int)uVar14;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pUVar10 = (USkeletalMeshComponent *)(*pcVar4)();
          return pUVar10;
        }
      }
      puVar13 = local_78;
      if (local_50 != (undefined1 *)0x0) {
        puVar13 = local_50;
      }
      FVar2 = *(FName *)(*(longlong *)(puVar13 + (longlong)pUVar9 * 8) + 0x18);
      pFVar11 = ::FString::FString(&local_88,param_1);
      local_a8 = (pFVar11->Data).AllocatorInstance.Data;
      iVar1 = (pFVar11->Data).ArrayNum;
      uStack_a0 = iVar1 - 1;
      if (iVar1 == 0) {
        uStack_a0 = 0;
      }
      local_98._12_4_ = uStack_9c;
      local_98.Size = uStack_a0;
      local_98.DataPtr = (wchar_t *)local_a8;
      bVar5 = ::FName::Equals(FVar2,&local_98);
      pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      if (bVar5) break;
      pUVar9 = (USkeletalMeshComponent *)((longlong)&pUVar9->_padding_ + 1);
      if ((longlong)iVar12 <= (longlong)pUVar9) goto LAB_14df8d462;
      pUVar7 = (USkeletalMeshComponent *)(ulonglong)local_48;
      pUVar15 = (USkeletalMeshComponent *)(ulonglong)(uVar14 + 1);
    }
    uVar6 = 0;
    if ((int)uVar14 < (int)local_48) {
      uVar6 = ~uVar14 >> 0x1f;
    }
    if (uVar6 == 0) {
      local_c8 = (longlong)(int)uVar14;
      local_c0 = (longlong)(int)local_48;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar10 = (USkeletalMeshComponent *)(*pcVar4)();
        return pUVar10;
      }
    }
    puVar13 = local_78;
    if (local_50 != (undefined1 *)0x0) {
      puVar13 = local_50;
    }
    pUVar10 = *(USkeletalMeshComponent **)(puVar13 + (longlong)(int)uVar14 * 8);
  }
LAB_14df8d462:
  if (local_50 != (undefined1 *)0x0) {
    FMemory::Free(local_50);
  }
  return pUVar10;
}

// LoadAndRunAnimBP @ 14df8d530

void __thiscall
UMetaHumanComponentBase::LoadAndRunAnimBP
          (UMetaHumanComponentBase *this,TSoftClassPtr<UAnimInstance> *param_1,
          TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> param_2,bool param_3,bool param_4)

{
  void *pvVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  UObject *pUVar4;
  UAssetManager *pUVar5;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_a8;
  FString local_a0;
  FSourceLocation local_88;
  TSharedPtr<FStreamableHandle,1> local_68;
  undefined1 local_58 [32];
  void *local_38;
  FWeakObjectPtr local_28;
  bool local_20;
  bool local_1f;
  
  local_res18 = param_2.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    if (*(longlong *)&(param_1->SoftObjectPtr).field_0x8 == 0) {
      if (param_3) {
        local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pUVar3 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_res18);
        RunAndInitPostAnimBP(this,pUVar3,(TSubclassOf<UAnimInstance>)&local_a0,param_4,true);
      }
      else {
        pUVar4 = FWeakObjectPtr::Get(&local_res18);
        (**(code **)(*(longlong *)pUVar4 + 0xc70))(pUVar4,0);
      }
    }
    else {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UMetaHumanComponentBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_a8.ObjectIndex = 0;
      local_a8.ObjectSerialNumber = 0;
      local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UMetaHumanComponentBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_a0);
      pUVar5 = UAssetManager::Get();
      local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a0.Data.ArrayNum = 0;
      local_a0.Data.ArrayMax = 0;
      local_58._0_4_ = local_a8.ObjectIndex;
      local_58._4_4_ = local_a8.ObjectSerialNumber;
      local_58._8_8_ = *(undefined8 *)&param_1->SoftObjectPtr;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_58 + 0x10),
                 (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
      local_28 = local_res18;
      local_1f = param_4;
      local_88.Impl._File =
           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MetaHuman\\MetaHumanSDK\\Source\\MetaHumanSDKRuntime\\Private\\MetaHumanComponentBase.cpp"
      ;
      local_88.Impl._Function =
           "void __cdecl UMetaHumanComponentBase::LoadAndRunAnimBP(class TSoftClassPtr<class UAnimInstance>,struct TWeakObjectPtr<class USkeletalMeshComponent,struct FWeakObjectPtr>,bool,bool)"
      ;
      local_88.Impl._Line = 0x70;
      local_88.Impl._Column = 0x28;
      local_20 = param_3;
      FStreamableManager::
      RequestAsyncLoad<FSoftObjectPath_const_&,_UMetaHumanComponentBase::LoadAndRunAnimBP_::__l2::<lambda_1>,void>
                (&pUVar5->StreamableManager,&local_68,
                 (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8,(<lambda_1> *)local_58,0,
                 false,false,&local_a0,&local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
    }
    pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  }
  else {
    pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  }
  return;
}

// PostConnectAnimBPVariables @ 14df8d730

void __thiscall
UMetaHumanComponentBase::PostConnectAnimBPVariables
          (UMetaHumanComponentBase *this,FMetaHumanCustomizableBodyPart *param_1,
          USkeletalMeshComponent *param_2,UAnimInstance *param_3)

{
  int iVar1;
  UPhysicsAsset *pUVar2;
  code *pcVar3;
  bool bVar4;
  USkeletalMeshComponent *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  FProperty *pFVar8;
  bool local_res20 [8];
  bool local_48 [4];
  FName local_44;
  FName local_3c;
  FName local_34;
  FName local_2c;
  FName local_24;
  FName local_1c [2];
  
  if (param_3 == (UAnimInstance *)0x0) {
    return;
  }
  pUVar5 = GetSkelMeshComponentByName(this,&param_1->ComponentName);
  if (pUVar5 == (USkeletalMeshComponent *)0x0) {
    return;
  }
  if (pUVar5 != param_2) {
    return;
  }
  pUVar7 = (param_1->ControlRigClass).Class.field0_0x0.DebugPtr;
  if ((pUVar7 == (UClass *)0x0) ||
     (pUVar6 = Z_Construct_UClass_UControlRig_NoRegister(), pUVar6 == (UClass *)0x0)) {
LAB_14df8d7a7:
    pUVar7 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14df8d7a7;
    pUVar7 = (param_1->ControlRigClass).Class.field0_0x0.DebugPtr;
  }
  local_res20[0] = pUVar7 != (UClass *)0x0;
  ::FName::FName(&local_44,L"Enable Control Rig");
  MetaHumanComponentHelpers::ConnectVariable<FBoolProperty,bool>(param_3,&local_44,local_res20);
  pUVar7 = (param_1->ControlRigClass).Class.field0_0x0.DebugPtr;
  if ((pUVar7 == (UClass *)0x0) ||
     (pUVar6 = Z_Construct_UClass_UControlRig_NoRegister(), pUVar6 == (UClass *)0x0))
  goto LAB_14df8d967;
  iVar1 = (int)pUVar6->_padding_;
  if (((int)pUVar7->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_))
  {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((!bVar4) || ((param_1->ControlRigClass).Class.field0_0x0.DebugPtr == (UClass *)0x0))
  goto LAB_14df8d967;
  ::FName::FName(&local_3c,L"Control Rig Class");
  pFVar8 = UStruct::FindPropertyByName(*(UStruct **)&param_3->field_0x10,local_3c);
  if (pFVar8 != (FProperty *)0x0) {
    if ((*(uint *)(pFVar8->_padding_ + 0x18) >> 0x10 & 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      pUVar7 = (param_1->ControlRigClass).Class.field0_0x0.DebugPtr;
      if ((pUVar7 == (UClass *)0x0) ||
         (pUVar6 = Z_Construct_UClass_UControlRig_NoRegister(), pUVar6 == (UClass *)0x0)) {
LAB_14df8d8d6:
        pUVar7 = (UClass *)0x0;
      }
      else {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar7->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_14df8d8d6;
        pUVar7 = (param_1->ControlRigClass).Class.field0_0x0.DebugPtr;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      if ((pFVar8->ArrayDim < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = pFVar8->Offset_Internal;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      *(UClass **)(&param_3->field_0x0 + iVar1) = pUVar7;
    }
  }
  ::FName::FName(&local_34,L"Control Rig LOD Threshold");
  MetaHumanComponentHelpers::ConnectVariable<FIntProperty,int>
            (param_3,&local_34,&param_1->ControlRigLODThreshold);
LAB_14df8d967:
  local_48[0] = (param_1->PhysicsAsset).field0_0x0.DebugPtr != (UPhysicsAsset *)0x0;
  ::FName::FName(&local_2c,L"Enable Rigid Body Simulation");
  MetaHumanComponentHelpers::ConnectVariable<FBoolProperty,bool>(param_3,&local_2c,local_48);
  if ((param_1->PhysicsAsset).field0_0x0.DebugPtr != (UPhysicsAsset *)0x0) {
    ::FName::FName(&local_24,L"Override Physics Asset");
    pFVar8 = UStruct::FindPropertyByName(*(UStruct **)&param_3->field_0x10,local_24);
    if (pFVar8 != (FProperty *)0x0) {
      if ((*(uint *)(pFVar8->_padding_ + 0x18) >> 0x10 & 1) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x472,L"CastFieldChecked failed with 0x%016llx");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        pUVar2 = (param_1->PhysicsAsset).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPhysicsAsset *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        if ((pFVar8->ArrayDim < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar1 = pFVar8->Offset_Internal;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPhysicsAsset *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        *(UPhysicsAsset **)(&param_3->field_0x0 + iVar1) = pUVar2;
      }
    }
    ::FName::FName(local_1c,L"Rigid Body LOD Threshold");
    MetaHumanComponentHelpers::ConnectVariable<FIntProperty,int>
              (param_3,local_1c,&param_1->RigidBodyLODThreshold);
  }
  return;
}

// PostInitAnimBP @ 14df8dac0

void __thiscall
UMetaHumanComponentBase::PostInitAnimBP
          (UMetaHumanComponentBase *this,USkeletalMeshComponent *param_1,UAnimInstance *param_2)

{
  USkeletalMeshComponent *pUVar1;
  FName local_res18;
  FName local_res20;
  
  if (((param_2 != (UAnimInstance *)0x0) &&
      (pUVar1 = GetSkelMeshComponentByName(this,&this->FaceComponentName),
      pUVar1 != (USkeletalMeshComponent *)0x0)) && (pUVar1 == param_1)) {
    local_res18.ComparisonIndex.Value = (uint)this->BodyType;
    ::FName::FName(&local_res20,L"BodyTypeIndex");
    MetaHumanComponentHelpers::ConnectVariable<FIntProperty,int>
              (param_2,&local_res20,(int *)&local_res18);
    local_res18.ComparisonIndex.Value = this->RigLogicLODThreshold;
    ::FName::FName(&local_res20,L"Rig Logic LOD Threshold");
    MetaHumanComponentHelpers::ConnectVariable<FIntProperty,int>
              (param_2,&local_res20,(int *)&local_res18);
    if (this->BodyType != BlendableBody) {
      ::FName::FName(&local_res18,L"Enable Neck Correctives");
      MetaHumanComponentHelpers::ConnectVariable<FBoolProperty,bool>
                (param_2,&local_res18,&this->bEnableNeckCorrectives);
      local_res18.ComparisonIndex.Value = this->NeckCorrectivesLODThreshold;
      ::FName::FName(&local_res20,L"Neck Correctives LOD Threshold");
      MetaHumanComponentHelpers::ConnectVariable<FIntProperty,int>
                (param_2,&local_res20,(int *)&local_res18);
      ::FName::FName(&local_res18,L"Enable Neck Procedural Control Rig");
      MetaHumanComponentHelpers::ConnectVariable<FBoolProperty,bool>
                (param_2,&local_res18,&this->bEnableNeckProcControlRig);
      local_res18.ComparisonIndex.Value = this->NeckProcControlRigLODThreshold;
      ::FName::FName(&local_res20,L"Neck Procedural Control Rig LOD Threshold");
      MetaHumanComponentHelpers::ConnectVariable<FIntProperty,int>
                (param_2,&local_res20,(int *)&local_res18);
      return;
    }
    local_res18.ComparisonIndex.Value = local_res18.ComparisonIndex.Value & 0xffffff00;
    ::FName::FName(&local_res20,L"Enable Neck Correctives");
    MetaHumanComponentHelpers::ConnectVariable<FBoolProperty,bool>
              (param_2,&local_res20,(bool *)&local_res18);
    local_res18.ComparisonIndex.Value = local_res18.ComparisonIndex.Value & 0xffffff00;
    ::FName::FName(&local_res20,L"Enable Neck Procedural Control Rig");
    MetaHumanComponentHelpers::ConnectVariable<FBoolProperty,bool>
              (param_2,&local_res20,(bool *)&local_res18);
  }
  return;
}

// RunAndInitPostAnimBP @ 14df8df00

void __thiscall
UMetaHumanComponentBase::RunAndInitPostAnimBP
          (UMetaHumanComponentBase *this,USkeletalMeshComponent *param_1,
          TSubclassOf<UAnimInstance> param_2,bool param_3,bool param_4)

{
  UClass *pUVar1;
  USkeletalMesh *this_00;
  UClass *local_18 [2];
  
  this_00 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
  if ((this_00 != (USkeletalMesh *)0x0) && (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
    pUVar1 = *(UClass **)param_2.Class.field0_0x0;
    if (param_3) {
      local_18[0] = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      USkeletalMeshComponent::SetOverridePostProcessAnimBP
                (param_1,(TSubclassOf<UAnimInstance>)local_18,param_4);
    }
    else {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      USkeletalMesh::WaitUntilAsyncPropertyReleased(this_00,PostProcessAnimBlueprint,ReadWrite);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      (this_00->PostProcessAnimBlueprint).Class.field0_0x0.DebugPtr = pUVar1;
      USkeletalMeshComponent::InitializeAnimScriptInstance(param_1,true,false);
    }
  }
  return;
}

// SetFollowBody @ 14df8dff0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMetaHumanComponentBase::SetFollowBody
          (UMetaHumanComponentBase *this,USkeletalMeshComponent *param_1)

{
  USkeletalMeshComponent *pUVar1;
  
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    pUVar1 = GetBodySkelMeshComponent(this);
    USkinnedMeshComponent::SetLeaderPoseComponent
              ((USkinnedMeshComponent *)param_1,(USkinnedMeshComponent *)pUVar1,false,false);
  }
  return;
}

// StaticRegisterNativesUMetaHumanComponentBase @ 14df8e660

void __cdecl UMetaHumanComponentBase::StaticRegisterNativesUMetaHumanComponentBase(void)

{
  return;
}

