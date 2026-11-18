// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 68

// StaticClass @ 1478880c0

UClass * __cdecl UInstancedSkinnedMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInstancedSkinnedMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InstancedSkinnedMeshComponent",
               &Z_Registration_Info_UClass_UInstancedSkinnedMeshComponent.InnerSingleton,
               StaticRegisterNativesUInstancedSkinnedMeshComponent,0xad0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UInstancedSkinnedMeshComponent>,
               InternalVTableHelperCtorCaller<UInstancedSkinnedMeshComponent>,local_res8,
               USkinnedMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInstancedSkinnedMeshComponent.InnerSingleton;
}

// UInstancedSkinnedMeshComponent @ 1478a92d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInstancedSkinnedMeshComponent * __thiscall
UInstancedSkinnedMeshComponent::UInstancedSkinnedMeshComponent
          (UInstancedSkinnedMeshComponent *this,FVTableHelper *param_1)

{
  USkinnedMeshComponent::USkinnedMeshComponent((USkinnedMeshComponent *)this,param_1);
  this->bInheritPerInstanceData = '\0';
  *(undefined ***)this = &_vftable__for__UObject__;
  this->bIsInstanceDataApplyCompleted = true;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x590 = &_vftable__for__ILODSyncInterface__;
  *(undefined ***)&this->field_0x598 = &_vftable__for__IClothSimulationDataProvider__;
  (this->TransformProvider).field0_0x0.DebugPtr = (UTransformProviderData *)0x0;
  (this->InstanceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceData).ArrayNum = 0;
  (this->InstanceData).ArrayMax = 0;
  this->NumCustomDataFloats = 0;
  (this->InstanceCustomData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceCustomData).ArrayNum = 0;
  (this->InstanceCustomData).ArrayMax = 0;
  this->AnimationMinScreenSize = 0.0;
  (this->PrimitiveBoundsOverride).IsValid = '\0';
  this->bIsInstanceDataGPUOnly = false;
  this->NumInstancesGPUOnly = 0;
  FInstanceDataManager::FInstanceDataManager(&this->InstanceDataManager,(UPrimitiveComponent *)this)
  ;
  return this;
}

// UInstancedSkinnedMeshComponent @ 1478a93c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInstancedSkinnedMeshComponent * __thiscall
UInstancedSkinnedMeshComponent::UInstancedSkinnedMeshComponent
          (UInstancedSkinnedMeshComponent *this,FObjectInitializer *param_1)

{
  USkinnedMeshComponent::USkinnedMeshComponent((USkinnedMeshComponent *)this,param_1);
  this->bInheritPerInstanceData = '\0';
  *(undefined ***)this = &_vftable__for__UObject__;
  this->bIsInstanceDataApplyCompleted = true;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x590 = &_vftable__for__ILODSyncInterface__;
  *(undefined ***)&this->field_0x598 = &_vftable__for__IClothSimulationDataProvider__;
  (this->TransformProvider).field0_0x0.DebugPtr = (UTransformProviderData *)0x0;
  (this->InstanceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceData).ArrayNum = 0;
  (this->InstanceData).ArrayMax = 0;
  this->NumCustomDataFloats = 0;
  (this->InstanceCustomData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceCustomData).ArrayNum = 0;
  (this->InstanceCustomData).ArrayMax = 0;
  this->AnimationMinScreenSize = 0.0;
  (this->PrimitiveBoundsOverride).IsValid = '\0';
  this->bIsInstanceDataGPUOnly = false;
  this->NumInstancesGPUOnly = 0;
  FInstanceDataManager::FInstanceDataManager(&this->InstanceDataManager,(UPrimitiveComponent *)this)
  ;
  return this;
}

// ~UInstancedSkinnedMeshComponent @ 1478abe00

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
UInstancedSkinnedMeshComponent::~UInstancedSkinnedMeshComponent
          (UInstancedSkinnedMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x590 = &_vftable__for__ILODSyncInterface__;
  *(undefined ***)&this->field_0x598 = &_vftable__for__IClothSimulationDataProvider__;
  FInstanceDataManager::~FInstanceDataManager(&this->InstanceDataManager);
  pFVar1 = (this->InstanceCustomData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InstanceData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USkinnedMeshComponent::~USkinnedMeshComponent((USkinnedMeshComponent *)this);
  return;
}

// AddInstance @ 1478b2cc0

FPrimitiveInstanceId __thiscall
UInstancedSkinnedMeshComponent::AddInstance
          (UInstancedSkinnedMeshComponent *this,TTransform<double> *param_1,int param_2,bool param_3
          )

{
  AddInstanceInternal(this,(int)param_1,
                      (TTransform<double> *)(ulonglong)(uint)(this->InstanceData).ArrayNum,param_2,
                      param_3);
  return (FPrimitiveInstanceId)(int)param_1;
}

// AddInstanceInternal @ 1478b2d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPrimitiveInstanceId __thiscall
UInstancedSkinnedMeshComponent::AddInstanceInternal
          (UInstancedSkinnedMeshComponent *this,int param_1,TTransform<double> *param_2,int param_3,
          bool param_4)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  TTransform<double> *pTVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  undefined4 in_register_0000008c;
  TTransform<double> *this_00;
  undefined3 in_stack_00000029;
  char in_stack_00000030;
  undefined1 auStackY_158 [32];
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  this_00 = (TTransform<double> *)CONCAT44(in_register_0000008c,param_3);
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar21 = (uint)param_2;
  if (((int)uVar21 < 0) || ((this->InstanceData).ArrayNum <= (int)uVar21)) {
    if (uVar21 != (this->InstanceData).ArrayNum) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceIndex == InstanceData.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\InstancedSkinnedMeshComponent.cpp"
                          ,0x3ca,L"");
      if (bVar15) {
        pcVar2 = (code *)swi(3);
        iVar16 = (*pcVar2)();
        return (FPrimitiveInstanceId)iVar16;
      }
    }
    iVar16 = (this->InstanceData).ArrayNum;
    piVar1 = &(this->InstanceData).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1040,&(this->InstanceData).AllocatorInstance,piVar1);
    }
    (this->InstanceData).ArrayNum = iVar16 + 1;
    DefaultConstructItems<FSkinnedMeshInstanceData,int>
              ((this->InstanceData).AllocatorInstance.Data + (longlong)iVar16 * 0x40,1);
  }
  FInstanceDataManager::Add(&this->InstanceDataManager,param_1);
  if (in_stack_00000030 == '\0') {
    pTVar19 = &local_128;
    local_128.Rotation.XY.m128d_f64[0] = (this_00->Rotation).XY.m128d_f64[0];
    local_128.Rotation.XY.m128d_f64[1] = (this_00->Rotation).XY.m128d_f64[1];
    local_128.Rotation.ZW.m128d_f64[0] = (this_00->Rotation).ZW.m128d_f64[0];
    local_128.Rotation.ZW.m128d_f64[1] = (this_00->Rotation).ZW.m128d_f64[1];
    local_128.Translation.XY.m128d_f64[0] = (this_00->Translation).XY.m128d_f64[0];
    local_128.Translation.XY.m128d_f64[1] = (this_00->Translation).XY.m128d_f64[1];
    local_128.Translation.ZW.m128d_f64[0] = (this_00->Translation).ZW.m128d_f64[0];
    local_128.Translation.ZW.m128d_f64[1] = (this_00->Translation).ZW.m128d_f64[1];
    local_128.Scale3D.XY.m128d_f64[0] = (this_00->Scale3D).XY.m128d_f64[0];
    local_128.Scale3D.XY.m128d_f64[1] = (this_00->Scale3D).XY.m128d_f64[1];
    local_128.Scale3D.ZW.m128d_f64[0] = (this_00->Scale3D).ZW.m128d_f64[0];
    local_128.Scale3D.ZW.m128d_f64[1] = (this_00->Scale3D).ZW.m128d_f64[1];
  }
  else {
    pTVar19 = UE::Math::TTransform<double>::GetRelativeTransform
                        (this_00,&local_c8,(TTransform<double> *)&this->field_0x1f0);
  }
  dVar3 = (pTVar19->Rotation).ZW.m128d_f64[0];
  dVar4 = (pTVar19->Rotation).ZW.m128d_f64[1];
  dVar5 = (pTVar19->Rotation).XY.m128d_f64[0];
  dVar6 = (pTVar19->Rotation).XY.m128d_f64[1];
  dVar7 = (pTVar19->Translation).XY.m128d_f64[0];
  dVar8 = (pTVar19->Translation).XY.m128d_f64[1];
  dVar9 = (pTVar19->Scale3D).XY.m128d_f64[0];
  dVar10 = (pTVar19->Scale3D).XY.m128d_f64[1];
  dVar11 = (pTVar19->Translation).ZW.m128d_f64[0];
  dVar12 = (pTVar19->Translation).ZW.m128d_f64[1];
  dVar13 = (pTVar19->Scale3D).ZW.m128d_f64[0];
  dVar14 = (pTVar19->Scale3D).ZW.m128d_f64[1];
  uVar17 = 0;
  if ((int)uVar21 < (this->InstanceData).ArrayNum) {
    uVar17 = ~uVar21 >> 0x1f;
  }
  if (uVar17 == 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      iVar16 = (*pcVar2)();
      return (FPrimitiveInstanceId)iVar16;
    }
  }
  pFVar20 = (this->InstanceData).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x40;
  *(float *)pFVar20 = (float)dVar5;
  *(float *)(pFVar20 + 4) = (float)dVar6;
  *(float *)(pFVar20 + 8) = (float)dVar3;
  *(float *)(pFVar20 + 0xc) = (float)dVar4;
  *(float *)(pFVar20 + 0x10) = (float)dVar7;
  *(float *)(pFVar20 + 0x14) = (float)dVar8;
  *(float *)(pFVar20 + 0x18) = (float)dVar11;
  *(float *)(pFVar20 + 0x1c) = (float)dVar12;
  *(float *)(pFVar20 + 0x20) = (float)dVar9;
  *(float *)(pFVar20 + 0x24) = (float)dVar10;
  *(float *)(pFVar20 + 0x28) = (float)dVar13;
  *(float *)(pFVar20 + 0x2c) = (float)dVar14;
  *(undefined4 *)(pFVar20 + 0x30) = _param_4;
  iVar16 = this->NumCustomDataFloats;
  iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar16,&(this->InstanceCustomData).AllocatorInstance,
                      &(this->InstanceCustomData).ArrayNum,&(this->InstanceCustomData).ArrayMax);
  memset((this->InstanceCustomData).AllocatorInstance.Data + (longlong)iVar18 * 4,0,
         (longlong)iVar16 << 2);
  return (FPrimitiveInstanceId)param_1;
}

// AddInstances @ 1478b2f60

TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> * __thiscall
UInstancedSkinnedMeshComponent::AddInstances
          (UInstancedSkinnedMeshComponent *this,
          TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3,bool param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 local_res10 [2];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_res18;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res20;
  
  uVar10 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayMax = 0;
  __return_storage_ptr__->ArrayNum = 0;
  uVar2 = param_1->ArrayNum;
  if ((uVar2 != 0) && (uVar2 == param_2->ArrayNum)) {
    local_res18 = param_1;
    local_res20 = param_2;
    if (param_3) {
      if ((int)uVar2 < 1) {
        if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
        }
      }
      else {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar2,&__return_storage_ptr__->AllocatorInstance,
                   &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
      }
    }
    iVar3 = (this->InstanceData).ArrayNum;
    uVar9 = iVar3 + uVar2;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((this->InstanceData).ArrayMax < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,uVar9,&(this->InstanceData).AllocatorInstance,iVar3,
                 &(this->InstanceData).ArrayMax);
    }
    uVar9 = uVar9 * this->NumCustomDataFloats;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    piVar1 = &(this->InstanceCustomData).ArrayMax;
    if (*piVar1 < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar9,&(this->InstanceCustomData).AllocatorInstance,
                 (this->InstanceCustomData).ArrayNum,piVar1);
    }
    uVar13 = uVar10;
    if (0 < (int)uVar2) {
      do {
        uVar12 = (uint)uVar13;
        uVar11 = ~uVar12 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar9 = uVar11;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar8;
        }
        pFVar4 = (local_res18->AllocatorInstance).Data;
        uVar9 = 0;
        if ((int)uVar12 < local_res20->ArrayNum) {
          uVar9 = uVar11;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar8;
        }
        AddInstanceInternal(this,(int)local_res10,
                            (TTransform<double> *)(ulonglong)(uint)(this->InstanceData).ArrayNum,
                            uVar12 * 0x60 + (int)pFVar4,
                            SUB41(*(undefined4 *)
                                   ((local_res20->AllocatorInstance).Data + uVar10 * 4),0));
        uVar6 = local_res10[0];
        if (param_3) {
          uVar9 = 0;
          if ((int)uVar12 < __return_storage_ptr__->ArrayNum) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar8;
          }
          *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + uVar10 * 4) = uVar6;
        }
        uVar10 = uVar10 + 1;
        uVar13 = (ulonglong)(uVar12 + 1);
        param_1 = local_res18;
      } while ((longlong)uVar10 < (longlong)(int)uVar2);
    }
  }
  return __return_storage_ptr__;
}

// ApplyComponentInstanceData @ 1478b49e0

void __thiscall
UInstancedSkinnedMeshComponent::ApplyComponentInstanceData
          (UInstancedSkinnedMeshComponent *this,FInstancedSkinnedMeshComponentInstanceData *param_1)

{
  return;
}

// ApplyInheritedPerInstanceData @ 1478b4c20

void __thiscall
UInstancedSkinnedMeshComponent::ApplyInheritedPerInstanceData
          (UInstancedSkinnedMeshComponent *this,UInstancedSkinnedMeshComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (UInstancedSkinnedMeshComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArchetype",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\InstancedSkinnedMeshComponent.cpp"
                       ,0x131,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<FSkinnedMeshInstanceData,TSizedDefaultAllocator<32>_>::operator=
            (&this->InstanceData,&param_1->InstanceData);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->InstanceCustomData,&param_1->InstanceCustomData);
  this->NumCustomDataFloats = param_1->NumCustomDataFloats;
  return;
}

// BeginDestroy @ 1478b6240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UInstancedSkinnedMeshComponent::BeginDestroy(UInstancedSkinnedMeshComponent *this)

{
  undefined1 *puVar1;
  UObject *pUVar2;
  FRenderResource *pFVar3;
  FSkinWeightVertexBuffer *this_00;
  code *pcVar4;
  uint uVar5;
  UWorld *pUVar6;
  FSkinWeightProfileManager *this_01;
  USkinnedMeshComponent *this_02;
  uint uVar7;
  UStreamableRenderAsset *this_03;
  longlong lVar8;
  bool bVar9;
  longlong lStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(UObject **)&this->field_0x5a0 == (UObject *)0x0) {
    pUVar2 = *(UObject **)&this->field_0x5a8;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pUVar2 == (UObject *)0x0) goto LAB_147934d29;
      UE::GC::MarkAsReachable(pUVar2);
    }
    if (pUVar2 == (UObject *)0x0) goto LAB_147934d29;
  }
  else if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable(*(UObject **)&this->field_0x5a0);
  }
  if ((this->field_0x80b & 4) == 0) goto LAB_147934d29;
  this_03 = *(UStreamableRenderAsset **)&this->field_0x5a0;
  if (this_03 == (UStreamableRenderAsset *)0x0) {
    this_03 = *(UStreamableRenderAsset **)&this->field_0x5a8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      bVar9 = this_03 == (UStreamableRenderAsset *)0x0;
      goto LAB_147934d0d;
    }
  }
  else {
    bVar9 = UE::GC::GIsIncrementalReachabilityPending == false;
LAB_147934d0d:
    if (!bVar9) {
      UE::GC::MarkAsReachable((UObject *)this_03);
    }
  }
  UStreamableRenderAsset::RemoveMipLevelChangeCallback(this_03,(UPrimitiveComponent *)this);
  this->field_0x80b = this->field_0x80b & 0xfb;
LAB_147934d29:
  UMeshComponent::BeginDestroy((UMeshComponent *)this);
  uVar7 = 0;
  if (0 < *(int *)&this->field_0x7d8) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)&this->field_0x7d8) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = *(FRenderResource **)(*(longlong *)&this->field_0x7d0 + 0x10 + lVar8);
      if (pFVar3 != (FRenderResource *)0x0) {
        BeginReleaseResource(pFVar3,&UE::RenderCommandPipe::SkeletalMesh);
      }
      uVar5 = 0;
      if ((int)uVar7 < *(int *)&this->field_0x7d8) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = *(FSkinWeightVertexBuffer **)(*(longlong *)&this->field_0x7d0 + 0x18 + lVar8);
      if (this_00 != (FSkinWeightVertexBuffer *)0x0) {
        FSkinWeightVertexBuffer::BeginReleaseResources(this_00);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x28;
    } while ((int)uVar7 < *(int *)&this->field_0x7d8);
  }
  FRenderCommandFence::BeginFence((FRenderCommandFence *)&this->field_0x538,RenderThread);
  if ((this->field_0x807 & 4) != 0) {
    this->field_0x807 = this->field_0x807 & 0xfb;
    pUVar6 = *(UWorld **)&this->field_0xb0;
    if (pUVar6 == (UWorld *)0x0) {
      pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    this_01 = FSkinWeightProfileManager::Get(pUVar6);
    if (this_01 != (FSkinWeightProfileManager *)0x0) {
      FSkinWeightProfileManager::CancelSkinWeightProfileRequest(this_01,(UObject *)this);
    }
  }
  puVar1 = &this->field_0x710;
  if (*(longlong *)puVar1 != 0) {
    lStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((longlong *)puVar1 != &lStack_18) {
      *(undefined8 *)puVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->field_0x718,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  uVar7 = *(int *)&this->field_0x680 - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7;
    do {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)&this->field_0x680) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_02 = (USkinnedMeshComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)&this->field_0x678 + lVar8 * 8))
      ;
      if (this_02 != (USkinnedMeshComponent *)0x0) {
        USkinnedMeshComponent::SetLeaderPoseComponent
                  (this_02,(USkinnedMeshComponent *)0x0,false,false);
      }
      lVar8 = lVar8 + -1;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  return;
}

// CalcBounds @ 1478b7a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
UInstancedSkinnedMeshComponent::CalcBounds
          (UInstancedSkinnedMeshComponent *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,TTransform<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  TBox<double> *pTVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_138 [32];
  TTransform<double> local_118;
  TTransform<double> local_b8;
  TBox<double> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_138;
  if ((this->PrimitiveBoundsOverride).IsValid == '\0') {
    FInstancedSkinnedMeshComponentHelper::CalcBounds<UInstancedSkinnedMeshComponent>
              (__return_storage_ptr__,this,param_1);
  }
  else {
    auVar7._0_8_ = (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                    *(uint *)&this->field_0x234,
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                    *(uint *)&this->field_0x230);
    auVar7._8_4_ = _UNK_15061cc88 & *(uint *)&this->field_0x238;
    auVar7._12_4_ = _UNK_15061cc8c & *(uint *)&this->field_0x23c;
    lVar6 = -(ulonglong)
             ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
             (double)CONCAT44(_UNK_15061cc8c & *(uint *)&this->field_0x24c,
                              _UNK_15061cc88 & *(uint *)&this->field_0x248));
    auVar2._8_4_ = (int)lVar6;
    auVar2._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                    (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                     *(uint *)&this->field_0x244,
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                     *(uint *)&this->field_0x240));
    auVar2._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
    uVar5 = movmskpd((int)this,auVar2);
    lVar6 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar7._8_8_);
    auVar1._8_4_ = (int)lVar6;
    auVar1._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar7._0_8_);
    auVar1._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
    iVar3 = movmskpd((int)local_20,auVar1);
    if ((uVar5 & 0x3fffffff) == 0 && iVar3 == 0) {
      local_118.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_118.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_118.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_118.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_118.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_118.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast((TTransform<double> *)&this->field_0x1f0,&local_118)
      ;
    }
    local_b8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_b8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_b8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_b8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_b8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_b8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_b8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_b8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_b8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_b8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_b8,&local_118,param_1);
    pTVar4 = UE::Math::TBox<double>::InverseTransformBy
                       (&this->PrimitiveBoundsOverride,&local_58,&local_b8);
    UE::Math::TBoxSphereBounds<double,double>::TBoxSphereBounds<double,double>
              (__return_storage_ptr__,pTVar4);
  }
  return __return_storage_ptr__;
}

// ClearInstances @ 1478b9530

void __thiscall UInstancedSkinnedMeshComponent::ClearInstances(UInstancedSkinnedMeshComponent *this)

{
  int *piVar1;
  
  piVar1 = &(this->InstanceData).ArrayMax;
  (this->InstanceData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&(this->InstanceData).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->InstanceCustomData).ArrayMax;
  (this->InstanceCustomData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->InstanceCustomData).AllocatorInstance,0,piVar1);
  }
  FInstanceDataManager::ClearInstances(&this->InstanceDataManager);
  return;
}

// CreateHitProxyData @ 1478c1030

void __thiscall
UInstancedSkinnedMeshComponent::CreateHitProxyData
          (UInstancedSkinnedMeshComponent *this,
          TArray<TRefCountPtr<HHitProxy>,TSizedDefaultAllocator<32>_> *param_1)

{
  DestructItems<TRefCountPtr<HHitProxy>,int>
            ((TRefCountPtr<HHitProxy> *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  return;
}

// CreateInstanceDataProxyGPUOnly @ 1478c1080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FInstanceDataSceneProxy,1> * __thiscall
UInstancedSkinnedMeshComponent::CreateInstanceDataProxyGPUOnly
          (UInstancedSkinnedMeshComponent *this,
          TSharedPtr<FInstanceDataSceneProxy,1> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  code *pcVar8;
  double dVar9;
  FAccessTag FVar10;
  FCurrentWriterTag FVar11;
  bool bVar12;
  int iVar13;
  TSharedPtr<FInstanceDataSceneProxy,1> *pTVar14;
  TMatrix<double> *pTVar15;
  USkinnedAsset *pUVar16;
  double *pdVar17;
  TReferenceControllerBase<1> *pTVar18;
  uint uVar19;
  int iVar20;
  TReferenceControllerBase<1> *pTVar21;
  atomic<unsigned_int> aVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStackY_328 [32];
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  undefined8 local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined1 local_270 [56];
  FInstanceSceneDataBuffers local_238;
  undefined1 local_118 [128];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_328;
  FInstanceSceneDataBuffers::FInstanceSceneDataBuffers(&local_238,true);
  uVar19 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
  aVar22 = (atomic<unsigned_int>)(uVar19 >> 0x10 ^ uVar19);
  FVar10.Kind = Writer;
  FVar10.WriterTag = (uint)aVar22;
  if ((aVar22 == (atomic<unsigned_int>)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("AccessTag.Kind == FAccessTag::EKind::Writer && AccessTag.WriterTag != 0u"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0xf8,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    pTVar14 = (TSharedPtr<FInstanceDataSceneProxy,1> *)(*pcVar8)();
    return pTVar14;
  }
  LOCK();
  bVar12 = local_238.CurrentWriterTag.Value != (atomic<unsigned_int>)0x0;
  FVar11.Value = aVar22;
  if (bVar12) {
    FVar11.Value = local_238.CurrentWriterTag.Value;
  }
  local_238.CurrentWriterTag.Value = FVar11.Value;
  UNLOCK();
  if ((bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentWriterTag.Value.compare_exchange_strong(PrevTagValue, AccessTag.WriterTag)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0xfb,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    pTVar14 = (TSharedPtr<FInstanceDataSceneProxy,1> *)(*pcVar8)();
    return pTVar14;
  }
  pTVar15 = (TMatrix<double> *)(**(code **)(*(longlong *)this + 0x808))(this,local_118);
  FInstanceSceneDataBuffers::SetPrimitiveLocalToWorld(&local_238,pTVar15,FVar10);
  local_238.NumInstancesGPUOnly = this->NumInstancesGPUOnly;
  local_238.NumCustomDataFloats = this->NumCustomDataFloats;
  if (local_238.InstanceLocalBounds.ArrayNum < 1) {
    iVar20 = 1 - local_238.InstanceLocalBounds.ArrayNum;
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x18,4,iVar20,&local_238.InstanceLocalBounds.AllocatorInstance,
                        &local_238.InstanceLocalBounds.ArrayNum,
                        &local_238.InstanceLocalBounds.ArrayMax);
    DefaultConstructItems<FRenderBounds,int>
              (local_238.InstanceLocalBounds.AllocatorInstance.Data + (longlong)iVar13 * 0x18,iVar20
              );
  }
  else if (1 < local_238.InstanceLocalBounds.ArrayNum) {
    uVar19 = local_238.InstanceLocalBounds.ArrayNum - 1;
    if ((int)uVar19 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar12) {
        pcVar8 = (code *)swi(3);
        pTVar14 = (TSharedPtr<FInstanceDataSceneProxy,1> *)(*pcVar8)();
        return pTVar14;
      }
    }
    else if (uVar19 == 0) goto LAB_1478c12bd;
    if (~uVar19 + local_238.InstanceLocalBounds.ArrayNum != 0) {
      memmove(local_238.InstanceLocalBounds.AllocatorInstance.Data + 0x18,
              local_238.InstanceLocalBounds.AllocatorInstance.Data + 0x18 +
              (longlong)(int)uVar19 * 0x18,
              (longlong)(int)(~uVar19 + local_238.InstanceLocalBounds.ArrayNum) * 0x18);
    }
    local_238.InstanceLocalBounds.ArrayNum = local_238.InstanceLocalBounds.ArrayNum - uVar19;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,&local_238.InstanceLocalBounds.AllocatorInstance,
               local_238.InstanceLocalBounds.ArrayNum,&local_238.InstanceLocalBounds.ArrayMax);
  }
LAB_1478c12bd:
  pUVar16 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if (pUVar16 == (USkinnedAsset *)0x0) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1711924219874378782>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\InstancedSkinnedMeshComponent.cpp"
                        ,0x41e,"GetSkinnedAsset()");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TSharedPtr<FInstanceDataSceneProxy,1> *)(*pcVar8)();
      return pTVar14;
    }
    pdVar17 = &local_2e0;
    local_288 = local_288 - local_2a0;
    local_290 = local_290 - local_2a8;
    local_280 = local_280 - local_298;
    auVar23._0_8_ = local_288 * __real_3fe0000000000000 + local_2a0;
    auVar23._8_8_ = 0;
    dVar9 = local_290 * __real_3fe0000000000000 + local_2a8;
    local_2c8 = local_290 * __real_3fe0000000000000;
    local_2d8 = auVar23._0_8_;
    local_2c0 = local_288 * __real_3fe0000000000000;
    local_2b8 = local_280 * __real_3fe0000000000000;
    local_2d0 = local_280 * __real_3fe0000000000000 + local_298;
    auVar24._8_8_ = 0;
    auVar24._0_8_ =
         (local_288 * local_288 + local_290 * local_290 + local_280 * local_280) *
         __real_3fd0000000000000;
    auVar24 = sqrtpd(auVar23,auVar24);
    local_2b0 = auVar24._0_8_;
    local_2e0 = dVar9;
  }
  else {
    pUVar16 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
    pdVar17 = (double *)(**(code **)(*(longlong *)pUVar16 + 0x3e0))(pUVar16,local_270);
    dVar9 = *pdVar17;
  }
  dVar1 = pdVar17[3];
  dVar2 = pdVar17[1];
  dVar3 = pdVar17[2];
  pTVar21 = (TReferenceControllerBase<1> *)0x0;
  dVar4 = pdVar17[4];
  dVar5 = pdVar17[4];
  dVar6 = pdVar17[5];
  dVar7 = pdVar17[5];
  if ((local_238.InstanceLocalBounds.ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar8 = (code *)swi(3);
    pTVar14 = (TSharedPtr<FInstanceDataSceneProxy,1> *)(*pcVar8)();
    return pTVar14;
  }
  *(float *)local_238.InstanceLocalBounds.AllocatorInstance.Data = (float)(dVar9 - dVar1);
  *(float *)(local_238.InstanceLocalBounds.AllocatorInstance.Data + 4) = (float)(dVar2 - dVar4);
  *(float *)(local_238.InstanceLocalBounds.AllocatorInstance.Data + 8) = (float)(dVar3 - dVar6);
  *(float *)(local_238.InstanceLocalBounds.AllocatorInstance.Data + 0xc) = (float)(dVar1 + dVar9);
  *(float *)(local_238.InstanceLocalBounds.AllocatorInstance.Data + 0x10) = (float)(dVar2 + dVar5);
  *(float *)(local_238.InstanceLocalBounds.AllocatorInstance.Data + 0x14) = (float)(dVar3 + dVar7);
  pTVar18 = pTVar21;
  if (0 < local_238.NumCustomDataFloats) {
    pTVar18 = (TReferenceControllerBase<1> *)&DAT_00000002;
  }
  local_238.Flags.Packed = (ushort)pTVar18 | local_238.Flags.Packed & 0xfffd;
  iVar13 = local_238.NumInstancesGPUOnly;
  if (local_238.bInstanceDataIsGPUOnly) {
    iVar13 = local_238.InstanceToPrimitiveRelative.ArrayNum;
  }
  if ((iVar13 != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bInstanceDataIsGPUOnly ? InstanceToPrimitiveRelative.IsEmpty() : (NumInstancesGPUOnly == 0)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0x117,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    pTVar14 = (TSharedPtr<FInstanceDataSceneProxy,1> *)(*pcVar8)();
    return pTVar14;
  }
  if ((aVar22 == (atomic<unsigned_int>)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("AccessTag.Kind == FAccessTag::EKind::Writer && AccessTag.WriterTag != 0u"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0x118,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    pTVar14 = (TSharedPtr<FInstanceDataSceneProxy,1> *)(*pcVar8)();
    return pTVar14;
  }
  LOCK();
  bVar12 = aVar22 == local_238.CurrentWriterTag.Value;
  if (bVar12) {
    local_238.CurrentWriterTag.Value = (atomic<unsigned_int>)0x0;
  }
  UNLOCK();
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentWriterTag.Value.compare_exchange_strong(PrevTagValue, 0U)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0x11b,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    pTVar14 = (TSharedPtr<FInstanceDataSceneProxy,1> *)(*pcVar8)();
    return pTVar14;
  }
  FInstanceSceneDataBuffers::ValidateData(&local_238);
  pTVar18 = ::operator_new(0x130);
  if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FInstanceDataSceneProxy *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar18->SharedReferenceCount = (atomic<int>)0x1;
    pTVar18->WeakReferenceCount = (atomic<int>)0x1;
    pTVar18->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFInstanceDataSceneProxy___00_SharedPointerInternals__6B_
    ;
    FInstanceDataSceneProxy::FInstanceDataSceneProxy
              ((FInstanceDataSceneProxy *)(pTVar18 + 1),&local_238);
    if (((FInstanceDataSceneProxy *)(pTVar18 + 1) == (FInstanceDataSceneProxy *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TSharedPtr<FInstanceDataSceneProxy,1> *)(*pcVar8)();
      return pTVar14;
    }
    __return_storage_ptr__->Object = (FInstanceDataSceneProxy *)(pTVar18 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar18;
    LOCK();
    pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
    UNLOCK();
    pTVar21 = pTVar18;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238.Immutable.SharedReferenceCount.ReferenceController);
  if (local_238.VisibleInstances.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_238.VisibleInstances.AllocatorInstance.SecondaryData);
  }
  if (local_238.PrevInstanceToPrimitiveRelative.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.PrevInstanceToPrimitiveRelative.AllocatorInstance.Data);
  }
  if (local_238.InstanceToPrimitiveRelative.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_238.InstanceToPrimitiveRelative.AllocatorInstance.Data);
  }
  if (local_238.InstancePayloadExtension.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.InstancePayloadExtension.AllocatorInstance.Data);
  }
  if (local_238.InstanceHierarchyOffset.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.InstanceHierarchyOffset.AllocatorInstance.Data);
  }
  if (local_238.InstanceSkinningData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.InstanceSkinningData.AllocatorInstance.Data);
  }
  if (local_238.InstanceLightShadowUVBias.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_238.InstanceLightShadowUVBias.AllocatorInstance.Data);
  }
  if (local_238.InstanceRandomIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.InstanceRandomIDs.AllocatorInstance.Data);
  }
  if (local_238.InstanceCustomData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.InstanceCustomData.AllocatorInstance.Data);
  }
  if (local_238.InstanceLocalBounds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.InstanceLocalBounds.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateRenderState_Concurrent @ 1478c1a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UInstancedSkinnedMeshComponent::CreateRenderState_Concurrent
          (UInstancedSkinnedMeshComponent *this,FRegisterComponentContext *param_1)

{
  *(code **)&this->field_0x818 = CreateInstancedSkeletalMeshObjectFunction;
  USkinnedMeshComponent::CreateRenderState_Concurrent((USkinnedMeshComponent *)this,param_1);
  return;
}

// CreateSceneProxy @ 1478c1fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UInstancedSkinnedMeshComponent::CreateSceneProxy(UInstancedSkinnedMeshComponent *this)

{
  byte bVar1;
  int iVar2;
  UTransformProviderData *pUVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  EPSOPrecacheProxyCreationStrategy EVar7;
  bool bVar8;
  EShaderPlatform EVar9;
  int iVar10;
  USkinnedAsset *pUVar11;
  FPrimitiveSceneProxy *pFVar12;
  UClass *pUVar13;
  longlong lVar14;
  int *piVar15;
  FInstancedSkinnedMeshSceneProxyDesc *pFVar16;
  longlong *plVar17;
  undefined1 auStackY_338 [32];
  FLLMScope local_308 [2];
  FMemScope local_300;
  TSharedPtr<FInstanceDataSceneProxy,1> local_2f8;
  FString local_2e8;
  FInstancedSkinnedMeshSceneProxyDesc local_2d8;
  undefined1 local_118 [240];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_338;
  FLLMScope::FLLMScope(local_308,SkeletalMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_300,SkeletalMesh,true);
  if (*(longlong *)&this->field_0xb0 == 0) {
    UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  USkinnedMeshComponent::GetSkeletalMeshRenderData((USkinnedMeshComponent *)this);
  pUVar11 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  piVar15 = &this->NumInstancesGPUOnly;
  if (this->bIsInstanceDataGPUOnly == false) {
    piVar15 = &(this->InstanceData).ArrayNum;
  }
  if ((((*piVar15 == 0) || (pUVar11 == (USkinnedAsset *)0x0)) ||
      (cVar5 = (**(code **)(*(longlong *)&pUVar11->field_0xe0 + 0x10))(), cVar5 != '\0')) ||
     (((pUVar3 = (this->TransformProvider).field0_0x0.DebugPtr,
       pUVar3 != (UTransformProviderData *)0x0 &&
       (cVar5 = (**(code **)(pUVar3->_padding_ + 0x2b0))(), cVar5 != '\0')) &&
      (cVar5 = (**(code **)(((this->TransformProvider).field0_0x0.DebugPtr)->_padding_ + 0x2f8))(),
      cVar5 != '\0')))) {
LAB_1478c2180:
    pFVar12 = (FPrimitiveSceneProxy *)0x0;
    goto LAB_1478c2182;
  }
  iVar10 = *(int *)&this->field_0x2a0;
  iVar2 = *(int *)&this->field_0x2a4;
  bVar6 = IsComponentPSOPrecachingEnabled();
  if (((bVar6) && ((this->field_0x2a8 & 1) == 0)) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4743589244386153571>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\PrimitiveComponent.cpp"
                         ,0x1463,"!IsComponentPSOPrecachingEnabled() || bPSOPrecacheCalled"), bVar6)
     ) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FPrimitiveSceneProxy *)(*pcVar4)();
    return pFVar12;
  }
  if (iVar10 != iVar2) {
    if ((this->field_0x284 & 0x30) < 0x10) {
      BoostPSOPriority(High,(TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&this->field_0x290);
      this->field_0x284 = this->field_0x284 & 0xdf | 0x10;
    }
    EVar7 = GetPSOPrecacheProxyCreationStrategy();
    if (EVar7 == DelayUntilPSOPrecached) {
      if (5 < (byte)LogAnimBank._0_1_) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_2e8,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimBank);
        if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_1478c2180;
    }
  }
  if (this->bIsInstanceDataGPUOnly == false) {
    FInstanceDataManager::GetOrCreateProxy(&this->InstanceDataManager,&local_2f8);
  }
  else {
    CreateInstanceDataProxyGPUOnly(this,&local_2f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8.SharedReferenceCount.ReferenceController);
  iVar10 = USkinnedMeshComponent::ComputeMinLOD((USkinnedMeshComponent *)this);
  pUVar11 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if (pUVar11 == (USkinnedAsset *)0x0) {
LAB_1478c2265:
    bVar6 = false;
  }
  else {
    pUVar13 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar2 = (int)pUVar13->_padding_;
    if (((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar2) ||
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
         &pUVar13->_padding_)) ||
       (lVar14 = (**(code **)(*(longlong *)pUVar11 + 0x398))(pUVar11), lVar14 == 0))
    goto LAB_1478c2265;
    piVar15 = &this->NumInstancesGPUOnly;
    if (this->bIsInstanceDataGPUOnly == false) {
      piVar15 = &(this->InstanceData).ArrayNum;
    }
    bVar6 = 0 < *piVar15;
  }
  bVar8 = (bool)(**(code **)(*(longlong *)this + 0xb58))(this);
  bVar1 = this->field_0x808;
  pFVar16 = FInstancedSkinnedMeshSceneProxyDesc::FInstancedSkinnedMeshSceneProxyDesc
                      (&local_2d8,this);
  pFVar12 = FInstancedSkinnedMeshSceneProxyDesc::CreateSceneProxy
                      (pFVar16,(bool)(bVar1 & 1),bVar8,bVar6,iVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d8.InstanceDataSceneProxy.SharedReferenceCount.ReferenceController);
  if ((void *)local_2d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_2d8._padding_);
  }
  FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)&local_2d8);
  if ((pFVar12 != (FPrimitiveSceneProxy *)0x0) && (this->bIsInstanceDataGPUOnly == false)) {
    EVar9 = FSceneInterface::GetShaderPlatform(pFVar12->Scene);
    FInstancedSkinnedMeshComponentHelper::GetComponentDesc<UInstancedSkinnedMeshComponent,1>
              ((FInstanceDataManagerSourceDataDesc *)local_118,this,EVar9);
    FInstanceDataManager::FlushChanges
              (&this->InstanceDataManager,(FInstanceDataManagerSourceDataDesc *)local_118);
    if (local_118._192_8_ != 0) {
      plVar17 = (longlong *)(local_118 + 0xd0);
      if ((longlong *)local_118._232_8_ != (longlong *)0x0) {
        plVar17 = (longlong *)local_118._232_8_;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
  }
  (**(code **)(*(longlong *)this + 0x898))(this,pFVar12);
LAB_1478c2182:
  FMemScope::~FMemScope(&local_300);
  FLLMScope::~FLLMScope(local_308);
  return pFVar12;
}

// DestroyRenderState_Concurrent @ 1478c3290

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
UInstancedSkinnedMeshComponent::DestroyRenderState_Concurrent(UInstancedSkinnedMeshComponent *this)

{
  undefined1 *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  this_00 = &this->field_0x860;
  if (this_00 == (undefined1 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::FRecursiveMutex::Lock((FRecursiveMutex *)this_00);
  UPrimitiveComponent::DestroyRenderState_Concurrent((UPrimitiveComponent *)this);
  USkinnedMeshComponent::ReleaseMeshDeformerInstances((USkinnedMeshComponent *)this);
  plVar1 = *(longlong **)&this->field_0x810;
  if (plVar1 != (longlong *)0x0) {
    if ((this->field_0x98 & 4) == 0) {
      (**(code **)(*plVar1 + 0x10))();
      BeginCleanup(*(FDeferredCleanupInterface **)&this->field_0x810);
    }
    else {
      *(longlong **)&this->field_0x828 = plVar1;
    }
    *(undefined8 *)&this->field_0x810 = 0;
  }
  if (this_00 != (undefined1 *)0x0) {
    UE::FRecursiveMutex::Unlock((FRecursiveMutex *)this_00);
  }
  return;
}

// GetComponentDesc @ 1478d0660

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FInstanceDataManagerSourceDataDesc * __thiscall
UInstancedSkinnedMeshComponent::GetComponentDesc
          (UInstancedSkinnedMeshComponent *this,
          FInstanceDataManagerSourceDataDesc *__return_storage_ptr__,EShaderPlatform param_1)

{
  FInstancedSkinnedMeshComponentHelper::GetComponentDesc<UInstancedSkinnedMeshComponent,1>
            (__return_storage_ptr__,this,param_1);
  return __return_storage_ptr__;
}

// GetComponentInstanceData @ 1478d0840

TStructOnScope<FActorComponentInstanceData> * __thiscall
UInstancedSkinnedMeshComponent::GetComponentInstanceData
          (UInstancedSkinnedMeshComponent *this,
          TStructOnScope<FActorComponentInstanceData> *__return_storage_ptr__)

{
  FStructOnScope::FStructOnScope((FStructOnScope *)__return_storage_ptr__);
  *(undefined ***)__return_storage_ptr__ = &___7__TStructOnScope_UFActorComponentInstanceData____6B_
  ;
  return __return_storage_ptr__;
}

// GetCustomData @ 1478d0c00

bool __thiscall
UInstancedSkinnedMeshComponent::GetCustomData
          (UInstancedSkinnedMeshComponent *this,FPrimitiveInstanceId param_1,
          TArrayView<float,int> *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar6 = FInstanceIdIndexMap::IdToIndex((FInstanceIdIndexMap *)&this->InstanceDataManager,param_1);
  if ((-1 < iVar6) && (iVar6 < (this->InstanceData).ArrayNum)) {
    iVar1 = this->NumCustomDataFloats;
    iVar3 = iVar1;
    if (param_2->ArrayNum < iVar1) {
      iVar3 = param_2->ArrayNum;
    }
    uVar8 = iVar1 * iVar6;
    uVar7 = 0;
    if ((int)uVar8 < (this->InstanceCustomData).ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    memcpy(param_2->DataPtr,
           (this->InstanceCustomData).AllocatorInstance.Data + (longlong)(int)uVar8 * 4,
           (longlong)iVar3 << 2);
    return true;
  }
  return false;
}

// GetInstanceAnimationIndex @ 1478d48b0

bool __thiscall
UInstancedSkinnedMeshComponent::GetInstanceAnimationIndex
          (UInstancedSkinnedMeshComponent *this,FPrimitiveInstanceId param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = FInstanceIdIndexMap::IdToIndex((FInstanceIdIndexMap *)&this->InstanceDataManager,param_1);
  if ((-1 < (int)uVar4) && ((int)uVar4 < (this->InstanceData).ArrayNum)) {
    uVar5 = 0;
    if ((int)uVar4 < (this->InstanceData).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    *param_2 = *(int *)((this->InstanceData).AllocatorInstance.Data +
                       (longlong)(int)uVar4 * 0x40 + 0x30);
    return true;
  }
  return false;
}

// GetInstanceCount @ 1478d4970

int __thiscall
UInstancedSkinnedMeshComponent::GetInstanceCount(UInstancedSkinnedMeshComponent *this)

{
  if (this->bIsInstanceDataGPUOnly != false) {
    return this->NumInstancesGPUOnly;
  }
  return (this->InstanceData).ArrayNum;
}

// GetInstanceDataSceneProxy @ 1478d4990

TSharedPtr<FInstanceDataSceneProxy,1> * __thiscall
UInstancedSkinnedMeshComponent::GetInstanceDataSceneProxy
          (UInstancedSkinnedMeshComponent *this,
          TSharedPtr<FInstanceDataSceneProxy,1> *__return_storage_ptr__)

{
  if (this->bIsInstanceDataGPUOnly != false) {
    CreateInstanceDataProxyGPUOnly(this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  FInstanceDataManager::GetProxy(&this->InstanceDataManager,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetInstanceTransform @ 1478d4a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInstancedSkinnedMeshComponent::GetInstanceTransform
          (UInstancedSkinnedMeshComponent *this,FPrimitiveInstanceId param_1,
          TTransform<double> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  bool bVar22;
  undefined1 uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  uVar24 = FInstanceIdIndexMap::IdToIndex((FInstanceIdIndexMap *)&this->InstanceDataManager,param_1)
  ;
  if (((int)uVar24 < 0) || ((this->InstanceData).ArrayNum <= (int)uVar24)) {
    bVar22 = false;
  }
  else {
    iVar3 = (this->InstanceData).ArrayNum;
    uVar25 = 0;
    if ((int)uVar24 < iVar3) {
      uVar25 = ~uVar24 >> 0x1f;
    }
    if (uVar25 == 0) {
      local_98 = (longlong)(int)uVar24;
      local_90 = (longlong)iVar3;
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar22) {
        pcVar5 = (code *)swi(3);
        uVar23 = (*pcVar5)();
        return (bool)uVar23;
      }
    }
    pFVar4 = (this->InstanceData).AllocatorInstance.Data;
    lVar26 = (longlong)(int)uVar24 * 0x40;
    pFVar1 = pFVar4 + lVar26;
    fVar12 = *(float *)(pFVar1 + 8);
    fVar13 = *(float *)(pFVar1 + 0xc);
    pFVar2 = pFVar4 + lVar26 + 0x20;
    fVar14 = *(float *)pFVar2;
    fVar15 = *(float *)(pFVar2 + 4);
    fVar16 = *(float *)(pFVar2 + 8);
    fVar17 = *(float *)(pFVar2 + 0xc);
    pFVar4 = pFVar4 + lVar26 + 0x10;
    fVar18 = *(float *)pFVar4;
    fVar19 = *(float *)(pFVar4 + 4);
    fVar20 = *(float *)(pFVar4 + 8);
    fVar21 = *(float *)(pFVar4 + 0xc);
    auVar6._8_4_ = SUB84((double)*(float *)(pFVar1 + 4),0);
    auVar6._0_8_ = (double)*(float *)pFVar1;
    auVar6._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar1 + 4) >> 0x20);
    *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64 = auVar6;
    auVar7._8_4_ = SUB84((double)fVar13,0);
    auVar7._0_8_ = (double)fVar12;
    auVar7._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
    *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64 = auVar7;
    auVar10._8_4_ = SUB84((double)fVar19,0);
    auVar10._0_8_ = (double)fVar18;
    auVar10._12_4_ = (int)((ulonglong)(double)fVar19 >> 0x20);
    *(undefined1 (*) [16])(param_2->Translation).XY.m128d_f64 = auVar10;
    auVar8._8_4_ = SUB84((double)fVar21,0);
    auVar8._0_8_ = (double)fVar20;
    auVar8._12_4_ = (int)((ulonglong)(double)fVar21 >> 0x20);
    *(undefined1 (*) [16])(param_2->Translation).ZW.m128d_f64 = auVar8;
    auVar11._8_4_ = SUB84((double)fVar15,0);
    auVar11._0_8_ = (double)fVar14;
    auVar11._12_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
    *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64 = auVar11;
    auVar9._8_4_ = SUB84((double)fVar17,0);
    auVar9._0_8_ = (double)fVar16;
    auVar9._12_4_ = (int)((ulonglong)(double)fVar17 >> 0x20);
    *(undefined1 (*) [16])(param_2->Scale3D).ZW.m128d_f64 = auVar9;
    if (param_3) {
      local_88.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_88.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_88.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_88.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_88.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_88.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_88.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_88.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_88.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_88,param_2,(TTransform<double> *)&this->field_0x1f0);
      (param_2->Rotation).XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
      (param_2->Rotation).XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
      (param_2->Rotation).ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
      (param_2->Rotation).ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
      (param_2->Translation).XY.m128d_f64[0] = local_88.Translation.XY.m128d_f64[0];
      (param_2->Translation).XY.m128d_f64[1] = local_88.Translation.XY.m128d_f64[1];
      (param_2->Translation).ZW.m128d_f64[0] = local_88.Translation.ZW.m128d_f64[0];
      (param_2->Translation).ZW.m128d_f64[1] = local_88.Translation.ZW.m128d_f64[1];
      (param_2->Scale3D).XY.m128d_f64[0] = local_88.Scale3D.XY.m128d_f64[0];
      (param_2->Scale3D).XY.m128d_f64[1] = local_88.Scale3D.XY.m128d_f64[1];
      (param_2->Scale3D).ZW.m128d_f64[0] = local_88.Scale3D.ZW.m128d_f64[0];
      (param_2->Scale3D).ZW.m128d_f64[1] = local_88.Scale3D.ZW.m128d_f64[1];
    }
    bVar22 = true;
  }
  return bVar22;
}

// GetNaniteResources @ 1478d6530

FResources * __thiscall
UInstancedSkinnedMeshComponent::GetNaniteResources(UInstancedSkinnedMeshComponent *this)

{
  longlong lVar1;
  UObject *pUVar2;
  bool bVar3;
  
  if (*(UObject **)&this->field_0x5a0 == (UObject *)0x0) {
    pUVar2 = *(UObject **)&this->field_0x5a8;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pUVar2 == (UObject *)0x0) {
        return (FResources *)0x0;
      }
      UE::GC::MarkAsReachable(pUVar2);
    }
    if (pUVar2 == (UObject *)0x0) {
      return (FResources *)0x0;
    }
  }
  else if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable(*(UObject **)&this->field_0x5a0);
  }
  pUVar2 = *(UObject **)&this->field_0x5a0;
  if (pUVar2 == (UObject *)0x0) {
    pUVar2 = *(UObject **)&this->field_0x5a8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      bVar3 = pUVar2 == (UObject *)0x0;
      goto LAB_14792404f;
    }
  }
  else {
    bVar3 = UE::GC::GIsIncrementalReachabilityPending == false;
LAB_14792404f:
    if (!bVar3) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  lVar1 = (**(code **)(*(longlong *)pUVar2 + 0x398))(pUVar2);
  if (lVar1 == 0) {
    return (FResources *)0x0;
  }
  pUVar2 = *(UObject **)&this->field_0x5a0;
  if (pUVar2 == (UObject *)0x0) {
    pUVar2 = *(UObject **)&this->field_0x5a8;
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14792409c;
    bVar3 = pUVar2 == (UObject *)0x0;
  }
  else {
    bVar3 = UE::GC::GIsIncrementalReachabilityPending == false;
  }
  if (!bVar3) {
    UE::GC::MarkAsReachable(pUVar2);
  }
LAB_14792409c:
  lVar1 = (**(code **)(*(longlong *)pUVar2 + 0x398))(pUVar2);
  return *(FResources **)(lVar1 + 0x10);
}

// GetOrCreateInstanceDataSceneProxy @ 1478d6910

TSharedPtr<FInstanceDataSceneProxy,1> * __thiscall
UInstancedSkinnedMeshComponent::GetOrCreateInstanceDataSceneProxy
          (UInstancedSkinnedMeshComponent *this,
          TSharedPtr<FInstanceDataSceneProxy,1> *__return_storage_ptr__)

{
  if (this->bIsInstanceDataGPUOnly != false) {
    CreateInstanceDataProxyGPUOnly(this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  FInstanceDataManager::GetOrCreateProxy(&this->InstanceDataManager,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1478d93b0

UClass * __cdecl UInstancedSkinnedMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInstancedSkinnedMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InstancedSkinnedMeshComponent",
               &Z_Registration_Info_UClass_UInstancedSkinnedMeshComponent.InnerSingleton,
               StaticRegisterNativesUInstancedSkinnedMeshComponent,0xad0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UInstancedSkinnedMeshComponent>,
               InternalVTableHelperCtorCaller<UInstancedSkinnedMeshComponent>,local_res8,
               USkinnedMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInstancedSkinnedMeshComponent.InnerSingleton;
}

// GetTransformProvider @ 1478dd9b0

UTransformProviderData * __thiscall
UInstancedSkinnedMeshComponent::GetTransformProvider(UInstancedSkinnedMeshComponent *this)

{
  return (this->TransformProvider).field0_0x0.DebugPtr;
}

// IsEnabled @ 1478e1040

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UInstancedSkinnedMeshComponent::IsEnabled(UInstancedSkinnedMeshComponent *this)

{
  int iVar1;
  USkinnedAsset *pUVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  pUVar2 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if (pUVar2 != (USkinnedAsset *)0x0) {
    pUVar3 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      lVar4 = (**(code **)(*(longlong *)pUVar2 + 0x398))(pUVar2);
      if (lVar4 != 0) {
        lVar4 = 0x9c4;
        if (this->bIsInstanceDataGPUOnly == false) {
          lVar4 = 0x950;
        }
        return 0 < *(int *)(&this->field_0x0 + lVar4);
      }
    }
  }
  return false;
}

// IsHLODRelevant @ 1478e11c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UInstancedSkinnedMeshComponent::IsHLODRelevant(UInstancedSkinnedMeshComponent *this)

{
  bool bVar1;
  char cVar2;
  USkinnedAsset *pUVar3;
  
  bVar1 = UActorComponent::CanBeHLODRelevant((UActorComponent *)this);
  if (bVar1) {
    pUVar3 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
    if (pUVar3 != (USkinnedAsset *)0x0) {
      cVar2 = (**(code **)(*(longlong *)this + 0x560))(this);
      if (cVar2 != '\0') {
        return this->field_0x1ab != '\x02';
      }
    }
  }
  return false;
}

// OnRegister @ 1478e5e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UInstancedSkinnedMeshComponent::OnRegister(UInstancedSkinnedMeshComponent *this)

{
  bool bVar1;
  Type TVar2;
  int iVar3;
  FAnimUpdateRateParameters *pFVar4;
  USkinnedMeshComponent *pUVar5;
  FSceneInterface *pFVar6;
  FMeshDeformerSet *pFVar7;
  undefined1 auStackY_88 [32];
  FLLMScope aFStack_58 [2];
  FMemScope FStack_50;
  FMeshDeformerSet FStack_48;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStackY_88;
  FLLMScope::FLLMScope(aFStack_58,SkeletalMesh,false,None,Default,true);
  FMemScope::FMemScope(&FStack_50,SkeletalMesh,true);
  pFVar4 = FAnimUpdateRateManager::GetUpdateRateParameters((USkinnedMeshComponent *)this);
  *(FAnimUpdateRateParameters **)&this->field_0x938 = pFVar4;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x5b0);
  if (bVar1) {
    pUVar5 = (USkinnedMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x5b0);
    USkinnedMeshComponent::SetLeaderPoseComponent((USkinnedMeshComponent *)this,pUVar5,true,false);
  }
  else {
    (**(code **)(*(longlong *)this + 0xbe0))(this);
  }
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  pFVar6 = UActorComponent::GetScene((UActorComponent *)this);
  if (pFVar6 == (FSceneInterface *)0x0) {
    TVar2 = Num;
  }
  else {
    TVar2 = pFVar6->FeatureLevel;
  }
  *(Type *)&this->field_0x800 = TVar2;
  if (GSkeletalMeshForceLOD < 0) {
    iVar3 = *(int *)&this->field_0x7a8;
  }
  else {
    iVar3 = GSkeletalMeshForceLOD + 1;
  }
  *(int *)&this->field_0x7ac = iVar3;
  (**(code **)(*(longlong *)this + 0xbb0))(this);
  USkinnedMeshComponent::InvalidateCachedBounds((USkinnedMeshComponent *)this);
  pFVar7 = USkinnedMeshComponent::GetActiveMeshDeformers((USkinnedMeshComponent *)this,&FStack_48);
  USkinnedMeshComponent::CreateMeshDeformerInstances((USkinnedMeshComponent *)this,pFVar7);
  if (FStack_48.DeformerIndexForLOD.AllocatorInstance.SecondaryData !=
      (ForElementType<signed_char>)0x0) {
    FMemory::Free((void *)FStack_48.DeformerIndexForLOD.AllocatorInstance.SecondaryData);
  }
  if (FStack_48.Deformers.AllocatorInstance.SecondaryData !=
      (ForElementType<TObjectPtr<UMeshDeformer>_>)0x0) {
    FMemory::Free((void *)FStack_48.Deformers.AllocatorInstance.SecondaryData);
  }
  USkinnedMeshComponent::RefreshExternalMorphTargetWeights((USkinnedMeshComponent *)this,true);
  (**(code **)(*(longlong *)this + 0x378))(this);
  FMemScope::~FMemScope(&FStack_50);
  FLLMScope::~FLLMScope(aFStack_58);
  return;
}

// OnUpdateTransform @ 1478e6670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInstancedSkinnedMeshComponent::OnUpdateTransform
          (UInstancedSkinnedMeshComponent *this,EUpdateTransformFlags param_1,ETeleportType param_2)

{
  TVector<double>_u_0 local_28;
  
  USceneComponent::OnUpdateTransform((USceneComponent *)this,param_1,param_2);
  if ((((this->field_0x98 & 8) != 0) && ((param_1 & SkipPhysicsUpdate) == None)) &&
     (((~(byte)(param_1 >> 1) & 1) != 0 || (*(longlong *)&this->field_0x498 == 0)))) {
    FBodyInstance::SetBodyTransform
              ((FBodyInstance *)&this->field_0x390,(TTransform<double> *)&this->field_0x1f0,param_2,
               true);
    local_28._s_0.X = (double)*(undefined8 *)&this->field_0x230;
    local_28._s_0.Y = (double)*(undefined8 *)&this->field_0x238;
    local_28._s_0.Z = (double)*(undefined8 *)&this->field_0x240;
    FBodyInstance::UpdateBodyScale
              ((FBodyInstance *)&this->field_0x390,(TVector<double> *)&local_28._s_0,false);
  }
  FInstanceDataManager::PrimitiveTransformChanged(&this->InstanceDataManager);
  return;
}

// OptimizeInstanceData @ 1478e6940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedSkinnedMeshComponent::OptimizeInstanceData
          (UInstancedSkinnedMeshComponent *this,bool param_1)

{
  longlong *plVar1;
  undefined1 auStack_138 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_118;
  undefined1 local_108 [240];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  FInstancedSkinnedMeshComponentHelper::GetComponentDesc<UInstancedSkinnedMeshComponent,1>
            ((FInstanceDataManagerSourceDataDesc *)local_108,this,GMaxRHIShaderPlatform);
  FInstanceDataManager::Optimize
            (&this->InstanceDataManager,&local_118,(FInstanceDataManagerSourceDataDesc *)local_108,
             param_1);
  if (local_108._192_8_ != 0) {
    plVar1 = (longlong *)(local_108 + 0xd0);
    if ((longlong *)local_108._232_8_ != (longlong *)0x0) {
      plVar1 = (longlong *)local_108._232_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (local_118.ArrayNum != 0) {
    ReorderArray<TArray<FSkinnedMeshInstanceData,TSizedDefaultAllocator<32>_>_>
              (&this->InstanceData,&local_118,1);
    ReorderArray<TArray<float,TSizedDefaultAllocator<32>_>_>
              (&this->InstanceCustomData,&local_118,this->NumCustomDataFloats);
  }
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  return;
}

// PostLoad @ 1478e7630

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UInstancedSkinnedMeshComponent::PostLoad(UInstancedSkinnedMeshComponent *this)

{
  int iVar1;
  FGuid FStack_18;
  
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
  if (*(UObject **)&this->field_0x5a0 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(*(UObject **)&this->field_0x5a0);
    }
    *(undefined8 *)&this->field_0x5a8 = *(undefined8 *)&this->field_0x5a0;
  }
  FStack_18 = FUE5MainStreamObjectVersion::GUID;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&FStack_18);
  if (iVar1 < 0x57) {
    this->field_0x5c8 = *(longlong *)&this->field_0x5d0 != 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014795ced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x378))(this);
  return;
}

// PreApplyComponentInstanceData @ 1478e7c30

void __thiscall
UInstancedSkinnedMeshComponent::PreApplyComponentInstanceData
          (UInstancedSkinnedMeshComponent *this,FInstancedSkinnedMeshComponentInstanceData *param_1)

{
  return;
}

// RefreshBoneTransforms @ 1478e8b60

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
UInstancedSkinnedMeshComponent::RefreshBoneTransforms
          (UInstancedSkinnedMeshComponent *this,FActorComponentTickFunction *param_1)

{
  USkinnedAsset *pUVar1;
  
  pUVar1 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if ((pUVar1 != (USkinnedAsset *)0x0) &&
     (*(int *)(&this->field_0x620 + (longlong)*(int *)&this->field_0x660 * 0x10) != 0)) {
    (**(code **)(*(longlong *)this + 0x5b0))(this);
    UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
    UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
    return;
  }
  return;
}

// RemoveInstance @ 1478eade0

bool __thiscall
UInstancedSkinnedMeshComponent::RemoveInstance
          (UInstancedSkinnedMeshComponent *this,FPrimitiveInstanceId param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FInstanceIdIndexMap::IdToIndex((FInstanceIdIndexMap *)&this->InstanceDataManager,param_1);
  if ((-1 < iVar2) && (iVar2 < (this->InstanceData).ArrayNum)) {
    bVar1 = RemoveInstanceInternal(this,iVar2,false);
    return bVar1;
  }
  return false;
}

// RemoveInstanceInternal @ 1478eae30

bool __thiscall
UInstancedSkinnedMeshComponent::RemoveInstanceInternal
          (UInstancedSkinnedMeshComponent *this,int param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_2) {
    FInstanceDataManager::RemoveAtSwap(&this->InstanceDataManager,param_1);
  }
  else {
    if ((param_1 < 0) || ((this->InstanceData).ArrayNum <= param_1)) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1711924219874378719>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\InstancedSkinnedMeshComponent.cpp"
                         ,0x3df,
                         "bInstanceAlreadyRemoved || InstanceData.IsValidIndex(InstanceIndex)");
      if (!bVar5) {
        return false;
      }
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    FInstanceDataManager::RemoveAtSwap(&this->InstanceDataManager,param_1);
    uVar7 = 0;
    if (param_1 < (this->InstanceData).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar2 = (this->InstanceData).ArrayNum;
    pFVar3 = (this->InstanceData).AllocatorInstance.Data;
    iVar8 = iVar2 + ~param_1;
    if (1 < iVar8) {
      iVar8 = 1;
    }
    if (iVar8 != 0) {
      memmove(pFVar3 + (longlong)param_1 * 0x40,pFVar3 + (longlong)(iVar2 - iVar8) * 0x40,
              (longlong)iVar8 << 6);
    }
    piVar1 = &(this->InstanceData).ArrayNum;
    *piVar1 = *piVar1 + -1;
  }
  uVar7 = this->NumCustomDataFloats;
  uVar10 = uVar7 * param_1;
  if ((-1 < (int)uVar10) && ((int)uVar10 < (this->InstanceCustomData).ArrayNum)) {
    uVar9 = 0;
    if ((int)(uVar7 + uVar10) <= (this->InstanceCustomData).ArrayNum) {
      uVar9 = ~(uVar10 | uVar7) >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (uVar7 != 0) {
      iVar8 = (this->InstanceCustomData).ArrayNum;
      pFVar3 = (this->InstanceCustomData).AllocatorInstance.Data;
      uVar9 = (iVar8 - uVar7) - uVar10;
      if ((int)uVar7 < (int)uVar9) {
        uVar9 = uVar7;
      }
      if (uVar9 != 0) {
        memmove(pFVar3 + (longlong)(int)uVar10 * 4,pFVar3 + (longlong)(int)(iVar8 - uVar9) * 4,
                (longlong)(int)uVar9 << 2);
      }
      piVar1 = &(this->InstanceCustomData).ArrayNum;
      *piVar1 = *piVar1 - uVar7;
    }
  }
  return true;
}

// RemoveInstances @ 1478eb040

void __thiscall
UInstancedSkinnedMeshComponent::RemoveInstances
          (UInstancedSkinnedMeshComponent *this,
          TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  pFVar7 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FPrimitiveInstanceId_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar7 == pFVar1) break;
    uVar6 = *(uint *)pFVar7;
    if ((int)(this->InstanceDataManager)._padding_ != 0) {
      uVar5 = 0;
      if ((int)uVar6 < (int)(this->InstanceDataManager)._padding_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar6 = *(uint *)((this->InstanceDataManager)._padding_ + (longlong)(int)uVar6 * 4);
    }
    RemoveInstanceInternal(this,uVar6,false);
    pFVar7 = pFVar7 + 4;
  }
  return;
}

// SendRenderInstanceData_Concurrent @ 1478ed4f0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedSkinnedMeshComponent::SendRenderInstanceData_Concurrent
          (UInstancedSkinnedMeshComponent *this)

{
  bool bVar1;
  EShaderPlatform EVar2;
  UWorld *pUVar3;
  longlong *plVar4;
  undefined1 auStack_128 [32];
  undefined1 local_108 [240];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  UActorComponent::SendRenderInstanceData_Concurrent((UActorComponent *)this);
  if (this->bIsInstanceDataGPUOnly == false) {
    bVar1 = USceneComponent::ShouldRender((USceneComponent *)this);
    if ((((bVar1) || ((this->field_0x27f & 0x20) != 0)) || ((this->field_0x27e & 8) != 0)) ||
       ((this->field_0x282 & 2) != 0)) {
      if (*(longlong *)&this->field_0x530 == 0) {
        (**(code **)(*(longlong *)this + 0x5b0))(this);
        pUVar3 = *(UWorld **)&this->field_0xb0;
        if (pUVar3 == (UWorld *)0x0) {
          pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        (**(code **)(pUVar3->Scene->_padding_ + 8))(pUVar3->Scene,this);
      }
      else {
        EVar2 = FSceneInterface::GetShaderPlatform
                          (*(FSceneInterface **)(*(longlong *)&this->field_0x530 + 0x220));
        FInstancedSkinnedMeshComponentHelper::GetComponentDesc<UInstancedSkinnedMeshComponent,1>
                  ((FInstanceDataManagerSourceDataDesc *)local_108,this,EVar2);
        bVar1 = FInstanceDataManager::FlushChanges
                          (&this->InstanceDataManager,
                           (FInstanceDataManagerSourceDataDesc *)local_108);
        if (local_108._192_8_ != 0) {
          plVar4 = (longlong *)(local_108 + 0xd0);
          if ((longlong *)local_108._232_8_ != (longlong *)0x0) {
            plVar4 = (longlong *)local_108._232_8_;
          }
          (**(code **)(*plVar4 + 0x10))();
        }
        if (bVar1) {
          (**(code **)(*(longlong *)this + 0x5b0))(this);
          pUVar3 = *(UWorld **)&this->field_0xb0;
          if (pUVar3 == (UWorld *)0x0) {
            pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
          }
          (**(code **)(pUVar3->Scene->_padding_ + 0xb0))(pUVar3->Scene,this);
        }
      }
    }
  }
  return;
}

// Serialize @ 1478ee280

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
UInstancedSkinnedMeshComponent::Serialize(UInstancedSkinnedMeshComponent *this,FArchive *param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  TArray<FSkinnedMeshInstanceData,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  UObject *this_00;
  UClass *pUVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  byte bVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  bool local_108;
  undefined1 local_106 [6];
  TArray<FSkinnedMeshInstanceData,TSizedDefaultAllocator<32>_> local_100;
  uint local_f0;
  uint local_ec;
  TArray<float,TSizedDefaultAllocator<32>_> local_e8;
  FLLMScope local_d8 [2];
  TArray<FSkinnedMeshInstanceData_Deprecated,TSizedDefaultAllocator<32>_> local_d0;
  UInstancedSkinnedMeshComponent *local_c0;
  FMemScope local_b8 [2];
  __m128 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  TMatrix<float> local_78;
  
  local_c0 = this;
  FLLMScope::FLLMScope(local_d8,SkeletalMesh,false,None,Default,true);
  FMemScope::FMemScope(local_b8,SkeletalMesh,true);
  USkinnedMeshComponent::Serialize((USkinnedMeshComponent *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    local_108 = false;
  }
  else {
    local_108 = true;
  }
  puVar8 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    local_f0 = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_f0 = (uint)local_108;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_f0);
    if (1 < local_f0) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar6 = local_f0;
    if ((param_1->field_0x28 & 1) != 0) goto LAB_1478ee364;
  }
  else {
    uVar6 = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
LAB_1478ee364:
    local_108 = uVar6 != 0;
  }
  this_00 = UObject::GetArchetype((UObject *)this);
  if (this_00 == (UObject *)0x0) {
LAB_1478ee39c:
    this_00 = (UObject *)0x0;
  }
  else {
    pUVar13 = StaticClass();
    iVar11 = (int)pUVar13->_padding_;
    if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar13->_padding_)) goto LAB_1478ee39c;
  }
  if (((((this->bInheritPerInstanceData == 0) && ((this->field_0x9a & 0x20) != 0)) ||
       (this_00 == (UObject *)0x0)) ||
      ((bVar10 = UObject::IsInBlueprint(this_00), !bVar10 ||
       (bVar10 = UObjectBaseUtility::IsTemplate
                           ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject),
       bVar10)))) || ((param_1->field_0x29 & 1) == 0)) {
    bVar16 = 0;
  }
  else {
    bVar16 = 1;
  }
  puVar8 = *(ulonglong **)&param_1->field_0x8;
  bVar10 = (bool)(bVar16 ^ 1);
  puVar2 = &param_1->field_0x28;
  piVar3 = (int *)*puVar8 + 1;
  if ((int *)puVar8[1] < piVar3) {
    local_ec = 0;
    if ((*puVar2 & 1) == 0) {
      local_ec = (uint)bVar10;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_ec);
    if (1 < local_ec) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar2 & 1) == 0) goto LAB_1478ee74a;
    bVar10 = local_ec != 0;
  }
  else {
    bVar10 = *(int *)*puVar8 != 0;
    *puVar8 = (ulonglong)piVar3;
    if ((*puVar2 & 1) == 0) {
LAB_1478ee74a:
      if (bVar10 != false) {
        TArrayPrivateFriend::Serialize<FSkinnedMeshInstanceData,TSizedDefaultAllocator<32>_>
                  (param_1,&this->InstanceData);
        TArray<float,TSizedDefaultAllocator<32>_>::BulkSerialize
                  (&this->InstanceCustomData,param_1,false);
      }
      goto LAB_1478ee770;
    }
  }
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  if (bVar10) {
    iVar11 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
    if (iVar11 < 0x78) {
      local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.ArrayNum = 0;
      local_d0.ArrayMax = 0;
      TArray<FSkinnedMeshInstanceData_Deprecated,TSizedDefaultAllocator<32>_>::BulkSerialize
                (&local_d0,param_1,false);
      uVar14 = local_d0._8_8_ & 0xffffffff;
      if (local_d0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar14);
      }
      if (local_100.ArrayMax < local_d0.ArrayNum) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,0x10,local_d0.ArrayNum,&local_100.AllocatorInstance,local_100.ArrayNum,
                   &local_100.ArrayMax);
        uVar14 = local_d0._8_8_ & 0xffffffff;
      }
      iVar11 = (int)uVar14;
      pFVar17 = local_d0.AllocatorInstance.Data + 0x50;
      pFVar18 = local_d0.AllocatorInstance.Data + (longlong)iVar11 * 0x90;
      while( true ) {
        if ((int)uVar14 != iVar11) {
          local_106[0] = 0;
          `TCheckedPointerIterator<FSkinnedMeshInstanceData_Deprecated,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_106);
        }
        this = local_c0;
        if (pFVar17 + -0x50 == pFVar18) break;
        local_78.M[0][2] = (float)*(double *)(pFVar17 + -0x40);
        local_78.M[0][3] = (float)*(double *)(pFVar17 + -0x38);
        local_78.M[0][0] = (float)*(double *)(pFVar17 + -0x50);
        local_78.M[0][1] = (float)*(double *)(pFVar17 + -0x48);
        local_78.M[1][0] = (float)*(double *)(pFVar17 + -0x30);
        local_78.M[1][1] = (float)*(double *)(pFVar17 + -0x28);
        local_78.M[1][2] = (float)*(double *)(pFVar17 + -0x20);
        local_78.M[1][3] = (float)*(double *)(pFVar17 + -0x18);
        local_78.M[2][0] = (float)*(double *)(pFVar17 + -0x10);
        local_78.M[2][1] = (float)*(double *)(pFVar17 + -8);
        local_78.M[2][2] = (float)*(double *)pFVar17;
        local_78.M[2][3] = (float)*(double *)(pFVar17 + 8);
        local_78.M[3][0] = (float)*(double *)(pFVar17 + 0x10);
        local_78.M[3][1] = (float)*(double *)(pFVar17 + 0x18);
        local_78.M[3][2] = (float)*(double *)(pFVar17 + 0x20);
        local_78.M[3][3] = (float)*(double *)(pFVar17 + 0x28);
        UE::Math::TTransform<float>::SetFromMatrix((TTransform<float> *)&local_a8,&local_78);
        iVar12 = local_100.ArrayNum;
        if (local_100.ArrayNum == local_100.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1040,&local_100.AllocatorInstance,&local_100.ArrayMax);
        }
        local_100.ArrayNum = iVar12 + 1;
        uVar7 = *(undefined4 *)(pFVar17 + 0x30);
        pFVar15 = local_100.AllocatorInstance.Data + (longlong)iVar12 * 0x40;
        pFVar17 = pFVar17 + 0x90;
        *(ulong64 *)pFVar15 = local_a8.m128_u64[0];
        *(ulong64 *)(pFVar15 + 8) = local_a8.m128_u64[1];
        *(undefined4 *)(pFVar15 + 0x30) = uVar7;
        *(undefined8 *)(pFVar15 + 0x10) = local_98;
        *(undefined8 *)(pFVar15 + 0x18) = uStack_90;
        *(undefined8 *)(pFVar15 + 0x20) = local_88;
        *(undefined8 *)(pFVar15 + 0x28) = uStack_80;
        uVar14 = local_d0._8_8_ & 0xffffffff;
      }
      if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
    }
    else {
      TArrayPrivateFriend::Serialize<FSkinnedMeshInstanceData,TSizedDefaultAllocator<32>_>
                (param_1,&local_100);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::BulkSerialize(&local_e8,param_1,false);
  }
  if (bVar16 == 0) {
    if (bVar10) {
      pTVar4 = &this->InstanceData;
      if (pTVar4 != &local_100) {
        pFVar17 = (pTVar4->AllocatorInstance).Data;
        if (pFVar17 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar17);
        }
        (pTVar4->AllocatorInstance).Data = local_100.AllocatorInstance.Data;
        (this->InstanceData).ArrayNum = local_100.ArrayNum;
        (this->InstanceData).ArrayMax = local_100.ArrayMax;
        local_100.ArrayNum = 0;
        local_100.ArrayMax = 0;
        local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pTVar5 = &this->InstanceCustomData;
      if (pTVar5 != &local_e8) {
        pFVar17 = (pTVar5->AllocatorInstance).Data;
        if (pFVar17 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar17);
        }
        (pTVar5->AllocatorInstance).Data = local_e8.AllocatorInstance.Data;
        (this->InstanceCustomData).ArrayNum = local_e8.ArrayNum;
        (this->InstanceCustomData).ArrayMax = local_e8.ArrayMax;
        local_e8.ArrayNum = 0;
        local_e8.ArrayMax = 0;
        local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
    }
  }
  else {
    if ((this_00 == (UObject *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InArchetype",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\InstancedSkinnedMeshComponent.cpp"
                            ,0x131,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TArray<FSkinnedMeshInstanceData,TSizedDefaultAllocator<32>_>::operator=
              (&this->InstanceData,
               (TArray<FSkinnedMeshInstanceData,TSizedDefaultAllocator<32>_> *)
               &this_00[0x3b].field_0x10);
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              (&this->InstanceCustomData,
               (TArray<float,TSizedDefaultAllocator<32>_> *)(this_00 + 0x3c));
    this->NumCustomDataFloats = *(int *)&this_00[0x3b].field_0x20;
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
LAB_1478ee770:
  iVar11 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if (iVar11 < 0x78) {
    if ((*puVar2 & 1) != 0) {
      FInstanceIdIndexMap::Reset
                ((FInstanceIdIndexMap *)&this->InstanceDataManager,(this->InstanceData).ArrayNum);
    }
  }
  else {
    FInstanceDataManager::Serialize(&this->InstanceDataManager,param_1,local_108);
  }
  if ((local_108 != false) && ((*puVar2 & 1) != 0)) {
    FInstanceDataManager::ReadCookedRenderData(&this->InstanceDataManager,param_1);
  }
  FMemScope::~FMemScope(local_b8);
  FLLMScope::~FLLMScope(local_d8);
  return;
}

// Serialize @ 1478ee810

void __thiscall
UInstancedSkinnedMeshComponent::Serialize
          (UInstancedSkinnedMeshComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetCullDistances @ 1478f0f40

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
UInstancedSkinnedMeshComponent::SetCullDistances
          (UInstancedSkinnedMeshComponent *this,int param_1,int param_2)

{
  FSceneInterface *pFVar1;
  
  if ((this->InstanceStartCullDistance != param_1) || (this->InstanceEndCullDistance != param_2)) {
    this->InstanceStartCullDistance = param_1;
    this->InstanceEndCullDistance = param_2;
    pFVar1 = UActorComponent::GetScene((UActorComponent *)this);
    if ((pFVar1 != (FSceneInterface *)0x0) && (*(longlong *)&this->field_0x530 != 0)) {
      pFVar1 = UActorComponent::GetScene((UActorComponent *)this);
      (**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,this);
    }
  }
  return;
}

// SetCustomData @ 1478f0fd0

bool __thiscall
UInstancedSkinnedMeshComponent::SetCustomData
          (UInstancedSkinnedMeshComponent *this,FPrimitiveInstanceId param_1,
          TArrayView<float_const_,int> *param_2)

{
  int iVar1;
  int iVar2;
  float *_Src;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar6 = FInstanceIdIndexMap::IdToIndex((FInstanceIdIndexMap *)&this->InstanceDataManager,param_1);
  if (((iVar6 < 0) || ((this->InstanceData).ArrayNum <= iVar6)) ||
     (iVar1 = param_2->ArrayNum, iVar1 == 0)) {
    bVar4 = false;
  }
  else {
    iVar2 = this->NumCustomDataFloats;
    FInstanceDataManager::CustomDataChanged(&this->InstanceDataManager,iVar6);
    if (iVar1 < iVar2) {
      iVar2 = iVar1;
    }
    uVar8 = iVar6 * this->NumCustomDataFloats;
    _Src = param_2->DataPtr;
    uVar7 = 0;
    if ((int)uVar8 < (this->InstanceCustomData).ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    memcpy((this->InstanceCustomData).AllocatorInstance.Data + (longlong)(int)uVar8 * 4,_Src,
           (longlong)iVar2 << 2);
    bVar4 = true;
  }
  return bVar4;
}

// SetCustomDataValue @ 1478f10d0

bool __thiscall
UInstancedSkinnedMeshComponent::SetCustomDataValue
          (UInstancedSkinnedMeshComponent *this,FPrimitiveInstanceId param_1,int param_2,
          float param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = FInstanceIdIndexMap::IdToIndex((FInstanceIdIndexMap *)&this->InstanceDataManager,param_1);
  if ((((iVar4 < 0) || ((this->InstanceData).ArrayNum <= iVar4)) || (param_2 < 0)) ||
     (this->NumCustomDataFloats <= param_2)) {
    bVar2 = false;
  }
  else {
    FInstanceDataManager::CustomDataChanged(&this->InstanceDataManager,iVar4);
    uVar6 = iVar4 * this->NumCustomDataFloats + param_2;
    uVar5 = 0;
    if ((int)uVar6 < (this->InstanceCustomData).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    *(float *)((this->InstanceCustomData).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) =
         param_3;
    bVar2 = true;
  }
  return bVar2;
}

// SetInstanceDataGPUOnly @ 1478f2ee0

void __thiscall
UInstancedSkinnedMeshComponent::SetInstanceDataGPUOnly
          (UInstancedSkinnedMeshComponent *this,bool param_1)

{
  int *piVar1;
  
  if ((this->bIsInstanceDataGPUOnly != param_1) && (this->bIsInstanceDataGPUOnly = param_1, param_1)
     ) {
    piVar1 = &(this->InstanceData).ArrayMax;
    (this->InstanceData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,0,&(this->InstanceData).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->InstanceCustomData).ArrayMax;
    (this->InstanceCustomData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->InstanceCustomData).AllocatorInstance,0,piVar1);
    }
    FInstanceDataManager::ClearInstances(&this->InstanceDataManager);
    return;
  }
  return;
}

// SetNumCustomDataFloats @ 1478f4190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UInstancedSkinnedMeshComponent::SetNumCustomDataFloats
          (UInstancedSkinnedMeshComponent *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = 0;
  if (0 < param_1) {
    iVar2 = param_1;
  }
  iVar3 = this->NumCustomDataFloats;
  if (iVar2 != this->NumCustomDataFloats) {
    this->NumCustomDataFloats = iVar2;
    iVar3 = iVar2;
  }
  if (iVar3 * (this->InstanceData).ArrayNum != (this->InstanceCustomData).ArrayNum) {
    FInstanceDataManager::NumCustomDataChanged(&this->InstanceDataManager);
    uVar4 = this->NumCustomDataFloats * (this->InstanceData).ArrayNum;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    piVar1 = &(this->InstanceCustomData).ArrayMax;
    (this->InstanceCustomData).ArrayNum = 0;
    if (*piVar1 != uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar4,&(this->InstanceCustomData).AllocatorInstance,0,piVar1);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&this->InstanceCustomData,this->NumCustomDataFloats * (this->InstanceData).ArrayNum,
               Default);
  }
  return;
}

// SetNumGPUInstances @ 1478f4260

void __thiscall
UInstancedSkinnedMeshComponent::SetNumGPUInstances(UInstancedSkinnedMeshComponent *this,int param_1)

{
  this->NumInstancesGPUOnly = param_1;
  return;
}

// SetSkinnedAssetCallback @ 1478f5290

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
UInstancedSkinnedMeshComponent::SetSkinnedAssetCallback(UInstancedSkinnedMeshComponent *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  UWorld *pUVar6;
  FUObjectItem *pFVar7;
  longlong lVar8;
  uint uVar9;
  FDestructionSentinel FStack_28;
  
  if (((this->field_0x98 & 3) == 3) &&
     (((this->field_0x99 & 1) == 0 ||
      (pUVar6 = UActorComponent::GetWorld((UActorComponent *)this), pUVar6 == (UWorld *)0x0)))) {
    this->field_0x99 = this->field_0x99 | 1;
    if ((this->field_0x9a & 1) == 0) {
      pUVar6 = UActorComponent::GetWorld((UActorComponent *)this);
      if (pUVar6 == (UWorld *)0x0) {
        pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
        if (((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
          UActorComponent::DoDeferredRenderUpdates_Concurrent((UActorComponent *)this);
        }
      }
      else {
        bVar2 = (bool)(**(code **)(*(longlong *)this + 0x458))(this);
        UWorld::MarkActorComponentForNeededEndOfFrameUpdate(pUVar6,(UActorComponent *)this,bVar2);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &UActorComponent::MarkRenderStateDirtyEvent,(FWriteAccessScope *)&FStack_28);
    bVar2 = false;
    UActorComponent::MarkRenderStateDirtyEvent._28_4_ =
         UActorComponent::MarkRenderStateDirtyEvent._28_4_ + 1;
    uVar9 = UActorComponent::MarkRenderStateDirtyEvent._16_4_ - 1;
    if (-1 < (int)uVar9) {
      lVar8 = (longlong)(int)uVar9 << 4;
      bVar2 = false;
      do {
        uVar5 = 0;
        if ((int)uVar9 < (int)UActorComponent::MarkRenderStateDirtyEvent._16_4_) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((*(int *)(lVar8 + 8 + UActorComponent::MarkRenderStateDirtyEvent._8_8_) == 0) ||
            (*(longlong **)(lVar8 + UActorComponent::MarkRenderStateDirtyEvent._8_8_) ==
             (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)
                                   (lVar8 + UActorComponent::MarkRenderStateDirtyEvent._8_8_) + 0x68
                                ))(), cVar4 == '\0')) {
          bVar2 = true;
        }
        lVar8 = lVar8 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    UActorComponent::MarkRenderStateDirtyEvent._28_4_ =
         UActorComponent::MarkRenderStateDirtyEvent._28_4_ + -1;
    if (bVar2) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &UActorComponent::MarkRenderStateDirtyEvent,false);
    }
    if (FStack_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
    }
  }
  return;
}

// SetTransformProvider @ 1478f59e0

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
UInstancedSkinnedMeshComponent::SetTransformProvider
          (UInstancedSkinnedMeshComponent *this,UTransformProviderData *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UTransformProviderData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->TransformProvider).field0_0x0.DebugPtr = param_1;
  FInstanceDataManager::TransformsChangedAll(&this->InstanceDataManager);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetupNewInstanceData @ 1478f6900

void __thiscall
UInstancedSkinnedMeshComponent::SetupNewInstanceData
          (UInstancedSkinnedMeshComponent *this,FSkinnedMeshInstanceData *param_1,int param_2,
          TTransform<float> *param_3,int param_4)

{
  ulong64 uVar1;
  
  uVar1 = (param_3->Rotation).m128_u64[1];
  (param_1->Transform).Rotation.m128_u64[0] = (param_3->Rotation).m128_u64[0];
  (param_1->Transform).Rotation.m128_u64[1] = uVar1;
  uVar1 = (param_3->Translation).m128_u64[1];
  (param_1->Transform).Translation.m128_u64[0] = (param_3->Translation).m128_u64[0];
  (param_1->Transform).Translation.m128_u64[1] = uVar1;
  uVar1 = (param_3->Scale3D).m128_u64[1];
  (param_1->Transform).Scale3D.m128_u64[0] = (param_3->Scale3D).m128_u64[0];
  (param_1->Transform).Scale3D.m128_u64[1] = uVar1;
  param_1->AnimationIndex = param_4;
  return;
}

// ShouldForceRefPose @ 1478f6fd0

bool __cdecl UInstancedSkinnedMeshComponent::ShouldForceRefPose(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarInstancedSkinnedMeshesForceRefPose.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1] != 0;
    }
  }
  return pTVar1->ShadowedValue[0] != 0;
}

// ShouldInheritPerInstanceData @ 1478f73f0

bool __thiscall
UInstancedSkinnedMeshComponent::ShouldInheritPerInstanceData
          (UInstancedSkinnedMeshComponent *this,UInstancedSkinnedMeshComponent *param_1)

{
  bool bVar1;
  
  if (((this->bInheritPerInstanceData != 0) || ((this->field_0x9a & 0x20) == 0)) &&
     (param_1 != (UInstancedSkinnedMeshComponent *)0x0)) {
    bVar1 = UObject::IsInBlueprint((UObject *)param_1);
    if (bVar1) {
      bVar1 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (!bVar1) {
        return true;
      }
    }
  }
  return false;
}

// ShouldInheritPerInstanceData @ 1478f7450

bool __thiscall
UInstancedSkinnedMeshComponent::ShouldInheritPerInstanceData(UInstancedSkinnedMeshComponent *this)

{
  int iVar1;
  bool bVar2;
  UObject *this_00;
  UClass *pUVar3;
  
  this_00 = UObject::GetArchetype((UObject *)this);
  if (this_00 != (UObject *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_1478f748f;
  }
  this_00 = (UObject *)0x0;
LAB_1478f748f:
  if (((this->bInheritPerInstanceData != 0) || ((this->field_0x9a & 0x20) == 0)) &&
     (this_00 != (UObject *)0x0)) {
    bVar2 = UObject::IsInBlueprint(this_00);
    if (bVar2) {
      bVar2 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (!bVar2) {
        return true;
      }
    }
  }
  return false;
}

// ShouldUseAnimationBounds @ 1478f7750

bool __cdecl UInstancedSkinnedMeshComponent::ShouldUseAnimationBounds(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarInstancedSkinnedMeshesAnimationBounds.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1] != 0;
    }
  }
  return pTVar1->ShadowedValue[0] != 0;
}

// StaticRegisterNativesUInstancedSkinnedMeshComponent @ 1478f7f10

void __cdecl
UInstancedSkinnedMeshComponent::StaticRegisterNativesUInstancedSkinnedMeshComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UInstancedSkinnedMeshComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 1478f9790

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
UInstancedSkinnedMeshComponent::TickComponent
          (UInstancedSkinnedMeshComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_SkinnedMeshCompTick> FVar9;
  UObject *pUVar10;
  UWorld *pUVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  byte bVar15;
  FNameEntryId FVar16;
  bool bVar17;
  float fVar18;
  LARGE_INTEGER LStackX_8;
  FStatMessage FStack_78;
  FName FStack_68;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Yellow,"USkinnedMeshComponent_TickComponent");
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1660,"USkinnedMeshComponent_TickComponent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkinnedMeshComponent.cpp"
               ,0x67c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1660);
  }
  bVar15 = 0;
  FVar16.Value = 0;
  FVar9 = StatPtr_STAT_SkinnedMeshCompTick;
  if (StatPtr_STAT_SkinnedMeshCompTick == (FThreadSafeStaticStat<FStat_STAT_SkinnedMeshCompTick>)0x0
     ) {
    pFVar8 = ::FName::FName((FName *)&FStack_78,"STAT_SkinnedMeshCompTick");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_SkinnedMeshCompTick>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkinnedMeshCompTick,*pFVar8,
                       L"SkinnedMeshComp Tick","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true
                       ,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar9;
  bVar2 = false;
  bVar4 = false;
  FStack_68.ComparisonIndex.Value = 0;
  FStack_68.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar13.Value;
        LStackX_8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkinnedMeshComponent.cpp"
                   ,0x67d);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_8.s.LowPart = FVar13.Value;
      LStackX_8.s.HighPart = uVar12;
      FStack_68 = FVar14;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar3 = true;
      FVar16.Value = FStack_68.ComparisonIndex.Value;
      goto LAB_147974040;
    }
  }
  bVar3 = false;
  FVar14 = FStack_68;
LAB_147974040:
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x5b0);
  if (((!bVar5) ||
      (pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x5b0),
      (pUVar10[0x33].field_0x12 & 0x40) == 0)) ||
     (pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x5b0),
     (pUVar10[0x33].field_0x13 & 1) != 0)) {
    if ((this->field_0x42 & 0x40) == 0) {
      UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
    }
    if ((this->field_0x809 & 4) == 0) {
      fVar18 = UPrimitiveComponent::GetLastRenderTime((UPrimitiveComponent *)this);
    }
    else {
      fVar18 = UPrimitiveComponent::GetLastRenderTimeOnScreen((UPrimitiveComponent *)this);
    }
    pUVar11 = *(UWorld **)&this->field_0xb0;
    if (pUVar11 == (UWorld *)0x0) {
      pUVar11 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if (pUVar11->TimeSeconds - __real_3ff0000000000000 < (double)fVar18) {
      bVar15 = 0x40;
    }
    this->field_0x808 = bVar15 | this->field_0x808 & 0xbf;
    uVar6 = (**(code **)(*(longlong *)this + 0xbb0))(this);
    if ((this->field_0x42 & 0x40) == 0) {
      cVar7 = (**(code **)(*(longlong *)this + 0xbd8))(this);
      if (cVar7 != '\0') {
        (**(code **)(*(longlong *)this + 0xb98))(this,param_1);
      }
      cVar7 = (**(code **)(*(longlong *)this + 0xbd0))(this,uVar6);
      if (cVar7 == '\0') {
        if (this->field_0x804 == '\x01') {
          (**(code **)(*(longlong *)this + 0xb90))(this,param_3);
        }
      }
      else {
        bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x5b0);
        if (bVar5) {
          (**(code **)(*(longlong *)this + 0xba0))();
        }
        else {
          (**(code **)(*(longlong *)this + 0xb88))(this,param_3);
        }
      }
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar14 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_78.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      FStack_78.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&LStackX_8);
      FStack_78.StatData.Pad[4] = '\0';
      FStack_78.StatData.Pad[5] = '\0';
      FStack_78.StatData.Pad[6] = '\0';
      FStack_78.StatData.Pad[7] = '\0';
      FStack_78.StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
      FStack_78.StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
      FStack_78.StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
      FStack_78.StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_78);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// execAddInstance @ 147900e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInstancedSkinnedMeshComponent::execAddInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double *pdVar14;
  undefined1 auStack_d8 [32];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0 [2];
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98 = (double)fVar2;
  dStack_90 = (double)fVar5;
  local_88 = (double)fVar8;
  dStack_80 = (double)fVar11;
  local_68 = (double)fVar9;
  dStack_60 = (double)fVar12;
  local_78._8_4_ = SUB84((double)fVar6,0);
  local_78._0_8_ = (double)fVar3;
  local_78._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_48 = (double)fVar10;
  dStack_40 = (double)fVar13;
  local_58._8_4_ = SUB84((double)fVar7,0);
  local_58._0_8_ = (double)fVar4;
  local_58._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a4 = 0;
  pdVar14 = &local_98;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar14 = (double *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a4);
  }
  local_a8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddInstanceInternal((UInstancedSkinnedMeshComponent *)param_1,(int)local_a0,
                      (TTransform<double> *)(ulonglong)*(uint *)&param_1[0x3b].field_0x18,
                      (int)pdVar14,SUB41(local_a4,0));
  *(undefined4 *)param_3 = local_a0[0];
  return;
}

// execAddInstances @ 147900fd0

void __cdecl
UInstancedSkinnedMeshComponent::execAddInstances(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  int local_res10 [2];
  int local_res18 [4];
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_58;
  TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> local_48;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  pTVar4 = &local_58;
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  pTVar3 = &local_68;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = AddInstances((UInstancedSkinnedMeshComponent *)param_1,&local_48,pTVar4,pTVar3,bVar5,
                        local_res18[0] != 0);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// execClearInstances @ 147901ff0

void __cdecl
UInstancedSkinnedMeshComponent::execClearInstances(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearInstances((UInstancedSkinnedMeshComponent *)param_1);
  return;
}

// execGetInstanceTransform @ 147903ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInstancedSkinnedMeshComponent::execGetInstanceTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  TTransform<double> *pTVar13;
  undefined1 auStack_c8 [32];
  int local_a8;
  FPrimitiveInstanceId local_a4 [3];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a4[0].Id = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a4);
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_98.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  local_98.Translation.ZW.m128d_f64[0] = (double)fVar7;
  local_98.Translation.ZW.m128d_f64[1] = (double)fVar10;
  local_98.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar4,0);
  local_98.Translation.XY.m128d_f64[0] = (double)fVar2;
  local_98.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_98.Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  local_98.Scale3D.ZW.m128d_f64[1] = (double)fVar11;
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_98.Scale3D.XY.m128d_f64[0] = (double)fVar3;
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8 = 0;
  pTVar13 = &local_98;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar13 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar12 = GetInstanceTransform
                     ((UInstancedSkinnedMeshComponent *)param_1,local_a4[0],pTVar13,local_a8 != 0);
  *(bool *)param_3 = bVar12;
  return;
}

// execGetTransformProvider @ 147904c80

void __cdecl
UInstancedSkinnedMeshComponent::execGetTransformProvider
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x3b].field_0x8;
  return;
}

// execOptimizeInstanceData @ 147907520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UInstancedSkinnedMeshComponent::execOptimizeInstanceData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 auStack_158 [32];
  int local_138 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_130;
  undefined1 local_118 [240];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_138);
  }
  bVar3 = local_138[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FInstancedSkinnedMeshComponentHelper::GetComponentDesc<UInstancedSkinnedMeshComponent,1>
            ((FInstanceDataManagerSourceDataDesc *)local_118,
             (UInstancedSkinnedMeshComponent *)param_1,GMaxRHIShaderPlatform);
  FInstanceDataManager::Optimize
            ((FInstanceDataManager *)&param_1[0x3e].field_0x20,&local_130,
             (FInstanceDataManagerSourceDataDesc *)local_118,bVar3);
  if (local_118._192_8_ != 0) {
    plVar2 = (longlong *)(local_118 + 0xd0);
    if ((longlong *)local_118._232_8_ != (longlong *)0x0) {
      plVar2 = (longlong *)local_118._232_8_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_130.ArrayNum != 0) {
    ReorderArray<TArray<FSkinnedMeshInstanceData,TSizedDefaultAllocator<32>_>_>
              ((TArray<FSkinnedMeshInstanceData,TSizedDefaultAllocator<32>_> *)
               &param_1[0x3b].field_0x10,&local_130,1);
    ReorderArray<TArray<float,TSizedDefaultAllocator<32>_>_>
              ((TArray<float,TSizedDefaultAllocator<32>_> *)(param_1 + 0x3c),&local_130,
               *(int *)&param_1[0x3b].field_0x20);
  }
  if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.AllocatorInstance.Data);
  }
  return;
}

// execRemoveInstance @ 147907a60

void __cdecl
UInstancedSkinnedMeshComponent::execRemoveInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int iVar3;
  FPrimitiveInstanceId local_res8 [2];
  
  local_res8[0].Id = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = FInstanceIdIndexMap::IdToIndex
                    ((FInstanceIdIndexMap *)&param_1[0x3e].field_0x20,local_res8[0]);
  if ((-1 < iVar3) && (iVar3 < *(int *)&param_1[0x3b].field_0x18)) {
    bVar2 = RemoveInstanceInternal((UInstancedSkinnedMeshComponent *)param_1,iVar3,false);
    *(bool *)param_3 = bVar2;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRemoveInstances @ 147907b30

void __cdecl
UInstancedSkinnedMeshComponent::execRemoveInstances(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint *puVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  void **ppvVar9;
  undefined1 local_res10 [8];
  void *local_38;
  undefined8 local_30;
  
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  ppvVar9 = &local_38;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar9 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar8 = *ppvVar9;
  iVar2 = *(int *)(ppvVar9 + 1);
  puVar1 = puVar8 + iVar2;
  while( true ) {
    if (*(int *)(ppvVar9 + 1) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FPrimitiveInstanceId_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (puVar8 == puVar1) break;
    uVar7 = *puVar8;
    if (*(int *)(param_1 + 0x3f) != 0) {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)&param_1[0x3f].field_0x10) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar7 = *(uint *)(*(longlong *)&param_1[0x3f].field_0x8 + (longlong)(int)uVar7 * 4);
    }
    RemoveInstanceInternal((UInstancedSkinnedMeshComponent *)param_1,uVar7,false);
    puVar8 = puVar8 + 1;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execSetCustomDataValue @ 14790a750

void __cdecl
UInstancedSkinnedMeshComponent::execSetCustomDataValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_res8 [2];
  int local_res10 [2];
  FPrimitiveInstanceId local_res18 [2];
  
  local_res18[0].Id = -1;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar5 = local_res10[0];
  uVar4 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar7 = FInstanceIdIndexMap::IdToIndex
                    ((FInstanceIdIndexMap *)&param_1[0x3e].field_0x20,local_res18[0]);
  if ((((iVar7 < 0) || (*(int *)&param_1[0x3b].field_0x18 <= iVar7)) || (iVar5 < 0)) ||
     (*(int *)&param_1[0x3b].field_0x20 <= iVar5)) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    FInstanceDataManager::CustomDataChanged((FInstanceDataManager *)&param_1[0x3e].field_0x20,iVar7)
    ;
    uVar8 = iVar7 * *(int *)&param_1[0x3b].field_0x20 + iVar5;
    uVar9 = 0;
    if ((int)uVar8 < *(int *)&param_1[0x3c].field_0x8) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x3c) + (longlong)(int)uVar8 * 4) = uVar4;
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execSetNumCustomDataFloats @ 14790fc60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UInstancedSkinnedMeshComponent::execSetNumCustomDataFloats
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = 0;
  if (0 < local_res8[0]) {
    iVar2 = local_res8[0];
  }
  iVar3 = *(int *)&param_1[0x3b].field_0x20;
  if (iVar2 != *(int *)&param_1[0x3b].field_0x20) {
    *(int *)&param_1[0x3b].field_0x20 = iVar2;
    iVar3 = iVar2;
  }
  if (iVar3 * *(int *)&param_1[0x3b].field_0x18 != *(int *)&param_1[0x3c].field_0x8) {
    FInstanceDataManager::NumCustomDataChanged((FInstanceDataManager *)&param_1[0x3e].field_0x20);
    uVar4 = *(int *)&param_1[0x3b].field_0x18 * *(int *)&param_1[0x3b].field_0x20;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    *(undefined4 *)&param_1[0x3c].field_0x8 = 0;
    if (*(uint *)&param_1[0x3c].field_0xc != uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar4,(ForAnyElementType *)(param_1 + 0x3c),0,(int *)&param_1[0x3c].field_0xc);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
              ((TArray<float,TSizedDefaultAllocator<32>_> *)(param_1 + 0x3c),
               *(int *)&param_1[0x3b].field_0x18 * *(int *)&param_1[0x3b].field_0x20,Default);
  }
  return;
}

// execSetTransformProvider @ 1479125b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UInstancedSkinnedMeshComponent::execSetTransformProvider
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[0x3b].field_0x8 = pUVar2;
  FInstanceDataManager::TransformsChangedAll((FInstanceDataManager *)&param_1[0x3e].field_0x20);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

