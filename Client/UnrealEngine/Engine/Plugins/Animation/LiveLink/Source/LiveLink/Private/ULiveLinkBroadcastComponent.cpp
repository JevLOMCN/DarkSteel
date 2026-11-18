// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 23

// StaticClass @ 14cff4180

UClass * __cdecl ULiveLinkBroadcastComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkBroadcastComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkBroadcastComponent",
               &Z_Registration_Info_UClass_ULiveLinkBroadcastComponent.InnerSingleton,
               StaticRegisterNativesULiveLinkBroadcastComponent,0x148,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkBroadcastComponent>,
               InternalVTableHelperCtorCaller<ULiveLinkBroadcastComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkBroadcastComponent.InnerSingleton;
}

// ULiveLinkBroadcastComponent @ 14d0134d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULiveLinkBroadcastComponent * __thiscall
ULiveLinkBroadcastComponent::ULiveLinkBroadcastComponent
          (ULiveLinkBroadcastComponent *this,FVTableHelper *param_1)

{
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->bEnable = true;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this_00 = &(this->SourceMesh).OtherActor;
  (this->SubjectName).ComparisonIndex = 0;
  (this->SubjectName).Number = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->Role).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->SourceMesh)._padding_ = 0;
  (this->SourceMesh)._padding_ = 0;
  (this->SourceMesh)._padding_ = 0;
  (this->SourceMesh)._padding_ = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->AllowedBoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllowedBoneNames).ArrayNum = 0;
  (this->AllowedBoneNames).ArrayMax = 0;
  (this->AllowedCurveNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllowedCurveNames).ArrayNum = 0;
  (this->AllowedCurveNames).ArrayMax = 0;
  this->CachedResolvedObject = (UActorComponent *)0x0;
  (this->SubjectKey).Source.A = 0;
  (this->SubjectKey).Source.B = 0;
  (this->SubjectKey).Source.C = 0;
  (this->SubjectKey).Source.D = 0;
  (this->SubjectKey).SubjectName.Name = (FName)0x0;
  return this;
}

// ULiveLinkBroadcastComponent @ 14d0135a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULiveLinkBroadcastComponent * __thiscall
ULiveLinkBroadcastComponent::ULiveLinkBroadcastComponent(ULiveLinkBroadcastComponent *this)

{
  byte *pbVar1;
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  FObjectInitializer *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar2);
  this->bEnable = true;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this_00 = &(this->SourceMesh).OtherActor;
  (this->SubjectName).ComparisonIndex = 0;
  (this->SubjectName).Number = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->Role).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->SourceMesh)._padding_ = 0;
  (this->SourceMesh)._padding_ = 0;
  (this->SourceMesh)._padding_ = 0;
  (this->SourceMesh)._padding_ = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  (this->AllowedBoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllowedBoneNames).ArrayNum = 0;
  (this->AllowedBoneNames).ArrayMax = 0;
  (this->AllowedCurveNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllowedCurveNames).ArrayNum = 0;
  (this->AllowedCurveNames).ArrayMax = 0;
  this->CachedResolvedObject = (UActorComponent *)0x0;
  (this->SubjectKey).Source.A = 0;
  (this->SubjectKey).Source.B = 0;
  (this->SubjectKey).Source.C = 0;
  (this->SubjectKey).Source.D = 0;
  (this->SubjectKey).SubjectName.Name = (FName)0x0;
  this->bIsDirty = true;
  return this;
}

// ~ULiveLinkBroadcastComponent @ 14d016f10

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
ULiveLinkBroadcastComponent::~ULiveLinkBroadcastComponent(ULiveLinkBroadcastComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->AllowedCurveNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllowedBoneNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->SourceMesh)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// BroadcastFrameData @ 14d024c30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULiveLinkBroadcastComponent::BroadcastFrameData(ULiveLinkBroadcastComponent *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  _func___cdecl_UObject_ptr_FVTableHelper_ptr *p_Var3;
  AActor *pAVar4;
  FName FVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  UScriptStruct *pUVar14;
  longlong lVar15;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar17;
  FStructOnScope *pFVar18;
  UActorComponent *pUVar19;
  ULiveLinkBroadcastSubsystem *pUVar20;
  IModularFeatures *pIVar21;
  UClass *pUVar22;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_78;
  FStructOnScope local_68;
  FStructOnScope local_40;
  
  pUVar13 = (this->Role).Class.field0_0x0.DebugPtr;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar11 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
  if (pUVar11 == (UClass *)0x0) {
    return;
  }
  iVar10 = (int)pUVar11->_padding_;
  if (((int)pUVar13->_padding_ < iVar10) ||
     ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar10 * 8) != &pUVar11->_padding_
     )) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  if ((this->Role).Class.field0_0x0.DebugPtr == (UClass *)0x0) {
    return;
  }
  FStructOnScope::FStructOnScope(&local_68);
  pUVar13 = (this->Role).Class.field0_0x0.DebugPtr;
  pUVar22 = (UClass *)0x0;
  pUVar11 = pUVar22;
  if ((pUVar13 != (UClass *)0x0) &&
     (pUVar12 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar12 != (UClass *)0x0)) {
    iVar10 = (int)pUVar12->_padding_;
    if (((int)pUVar13->_padding_ < iVar10) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar10 * 8) !=
        &pUVar12->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar11 = (this->Role).Class.field0_0x0.DebugPtr;
    }
  }
  pUVar13 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
LAB_14d024e6a:
    pUVar13 = (this->Role).Class.field0_0x0.DebugPtr;
    pUVar11 = pUVar22;
    if ((pUVar13 != (UClass *)0x0) &&
       (pUVar12 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar12 != (UClass *)0x0)) {
      iVar10 = (int)pUVar12->_padding_;
      if (((int)pUVar13->_padding_ < iVar10) ||
         ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar10 * 8) !=
          &pUVar12->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        pUVar11 = (this->Role).Class.field0_0x0.DebugPtr;
      }
    }
    pUVar13 = Z_Construct_UClass_ULiveLinkCameraRole_NoRegister();
    if (pUVar13 == (UClass *)0x0) {
LAB_14d024f2e:
      pUVar13 = (this->Role).Class.field0_0x0.DebugPtr;
      pUVar11 = pUVar22;
      if ((pUVar13 != (UClass *)0x0) &&
         (pUVar12 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar12 != (UClass *)0x0)) {
        iVar10 = (int)pUVar12->_padding_;
        if (((int)pUVar13->_padding_ < iVar10) ||
           ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar10 * 8) !=
            &pUVar12->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          pUVar11 = (this->Role).Class.field0_0x0.DebugPtr;
        }
      }
      pUVar13 = Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
      if (pUVar13 == (UClass *)0x0) goto LAB_14d0250ff;
      iVar10 = (int)pUVar13->_padding_;
      if (((int)pUVar11->_padding_ < iVar10) ||
         ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar10 * 8) !=
          &pUVar13->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_14d0250ff;
      pUVar14 = FLiveLinkTransformFrameData::StaticStruct();
      FStructOnScope::FStructOnScope(&local_40,(UStruct *)pUVar14);
      pUVar13 = (UClass *)(**(code **)(local_40._padding_ + 0x18))(&local_40);
      lVar15 = (**(code **)(local_40._padding_ + 0x20))(&local_40);
      if (lVar15 == 0) {
LAB_14d025030:
        pUVar13 = pUVar22;
      }
      else {
        pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar10 = (int)pUVar11->_padding_;
        if (((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < iVar10) ||
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)iVar10 * 8) !=
             &pUVar11->_padding_)) ||
           (pUVar14 = FLiveLinkTransformFrameData::StaticStruct(), pUVar14 == (UScriptStruct *)0x0))
        goto LAB_14d025030;
        iVar10 = (int)pUVar14->_padding_;
        if ((*(int *)(lVar15 + 0x38) < iVar10) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar10 * 8) !=
            &pUVar14->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_14d025030;
      }
      pUVar19 = FComponentReference::GetComponent(&this->SourceMesh,(AActor *)this->_padding_);
      if (pUVar19 != (UActorComponent *)0x0) {
        pUVar11 = Z_Construct_UClass_USceneComponent_NoRegister();
        iVar10 = (int)pUVar11->_padding_;
        if ((iVar10 <= *(int *)(pUVar19->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
            &pUVar11->_padding_)) {
          pFVar2 = pUVar19[2].AssetUserData.AllocatorInstance.Data;
          pUVar13->_padding_ = *(longlong *)&pUVar19[2].ComponentTags.ArrayNum;
          pUVar13->_padding_ = (longlong)pFVar2;
          p_Var3 = *(_func___cdecl_UObject_ptr_FVTableHelper_ptr **)&pUVar19[2].field_0x88;
          pUVar13->ClassConstructor =
               *(_func___cdecl_void_FObjectInitializer_ptr **)&pUVar19[2].AssetUserData.ArrayNum;
          pUVar13->ClassVTableHelperCtorCaller = p_Var3;
          uVar7 = *(undefined4 *)&pUVar19[2].field_0x98;
          uVar8 = *(undefined4 *)&pUVar19[2].field_0x9c;
          (pUVar13->CppClassStaticFunctions).AddReferencedObjects =
               *(_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr **)
                &pUVar19[2].UCSSerializationIndex;
          pUVar13->ClassUnique = uVar7;
          pUVar13->FirstOwnedClassRep = uVar8;
          pAVar4 = pUVar19[2].OwnerPrivate;
          *(FPhysScene_Chaos **)&pUVar13->bCooked = pUVar19[2].PhysicsStateAsyncCreationScene;
          pUVar13->ClassCastFlags = (EClassCastFlags)pAVar4;
          FVar5 = *(FName *)&pUVar19[2].field_0xb8;
          (pUVar13->ClassWithin).field0_0x0 = (TObjectPtr<UClass>_u_0)pUVar19[2].WorldPrivate;
          pUVar13->ClassConfigName = FVar5;
          uVar7 = *(undefined4 *)&pUVar19[3]._padding_;
          uVar8 = *(undefined4 *)((longlong)&pUVar19[3]._padding_ + 4);
          (pUVar13->ClassReps).AllocatorInstance.Data =
               (FScriptContainerElement *)pUVar19[3]._padding_;
          (pUVar13->ClassReps).ArrayNum = uVar7;
          (pUVar13->ClassReps).ArrayMax = uVar8;
        }
      }
      goto LAB_14d0250c5;
    }
    iVar10 = (int)pUVar13->_padding_;
    if (((int)pUVar11->_padding_ < iVar10) ||
       ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar10 * 8) !=
        &pUVar13->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14d024f2e;
    pFVar18 = &GetCameraFrameData(this,(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)&local_40)
               ->WrappedStruct;
    if (&local_68 != pFVar18) {
      (**(code **)(local_68._padding_ + 0x48))(&local_68);
      local_68.ScriptStruct.WeakPtr = (pFVar18->ScriptStruct).WeakPtr;
      local_68.SampleStructMemory = pFVar18->SampleStructMemory;
      local_68.OwnsMemory = pFVar18->OwnsMemory;
      local_40._padding_ = ((FStructOnScope *)&pFVar18->_padding_)->_padding_;
      pFVar18->OwnsMemory = false;
      goto LAB_14d0250f3;
    }
  }
  else {
    iVar10 = (int)pUVar13->_padding_;
    if (((int)pUVar11->_padding_ < iVar10) ||
       ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar10 * 8) !=
        &pUVar13->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14d024e6a;
    pUVar14 = FLiveLinkAnimationFrameData::StaticStruct();
    FStructOnScope::FStructOnScope(&local_40,(UStruct *)pUVar14);
    pUVar13 = (UClass *)(**(code **)(local_40._padding_ + 0x18))(&local_40);
    lVar15 = (**(code **)(local_40._padding_ + 0x20))(&local_40);
    if (lVar15 == 0) {
LAB_14d024dbb:
      pUVar13 = pUVar22;
    }
    else {
      pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar10 = (int)pUVar11->_padding_;
      if (((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < iVar10) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)iVar10 * 8) !=
           &pUVar11->_padding_)) ||
         (pUVar14 = FLiveLinkAnimationFrameData::StaticStruct(), pUVar14 == (UScriptStruct *)0x0))
      goto LAB_14d024dbb;
      iVar10 = (int)pUVar14->_padding_;
      if ((*(int *)(lVar15 + 0x38) < iVar10) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar10 * 8) !=
          &pUVar14->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_14d024dbb;
    }
    pTVar16 = GetBoneTransforms(this,&local_78);
    plVar1 = &pUVar13->_padding_;
    if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)plVar1 != pTVar16) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)(pTVar16->AllocatorInstance).Data;
      (pTVar16->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)&pUVar13->_padding_ = pTVar16->ArrayNum;
      *(int *)((longlong)&pUVar13->_padding_ + 4) = pTVar16->ArrayMax;
      pTVar16->ArrayNum = 0;
      pTVar16->ArrayMax = 0;
    }
    if ((void *)CONCAT44(local_78.AllocatorInstance.Data._4_4_,(uint)local_78.AllocatorInstance.Data
                        ) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_78.AllocatorInstance.Data._4_4_,
                                     (uint)local_78.AllocatorInstance.Data));
    }
    pTVar17 = GetCurveValues(this,(TArray<float,TSizedDefaultAllocator<32>_> *)&local_78);
    plVar1 = &pUVar13->_padding_;
    if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar1 != pTVar17) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)(pTVar17->AllocatorInstance).Data;
      (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)&pUVar13->_padding_ = pTVar17->ArrayNum;
      *(int *)((longlong)&pUVar13->_padding_ + 4) = pTVar17->ArrayMax;
      pTVar17->ArrayNum = 0;
      pTVar17->ArrayMax = 0;
    }
    if ((void *)CONCAT44(local_78.AllocatorInstance.Data._4_4_,(uint)local_78.AllocatorInstance.Data
                        ) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_78.AllocatorInstance.Data._4_4_,
                                     (uint)local_78.AllocatorInstance.Data));
    }
LAB_14d0250c5:
    (**(code **)(local_68._padding_ + 0x48))(&local_68);
    pFVar18 = &local_40;
    local_68.ScriptStruct.WeakPtr = local_40.ScriptStruct.WeakPtr;
    local_68.SampleStructMemory = local_40.SampleStructMemory;
    local_68.OwnsMemory = local_40.OwnsMemory;
    local_40.OwnsMemory = false;
LAB_14d0250f3:
    (**(code **)(local_40._padding_ + 0x48))(pFVar18);
  }
  FStructOnScope::~FStructOnScope(&local_40);
LAB_14d0250ff:
  pUVar20 = UEngine::GetEngineSubsystem<ULiveLinkBroadcastSubsystem>(GEngine);
  pIVar21 = IModularFeatures::Get();
  iVar10 = (**(code **)((longlong)*pIVar21 + 0x18))(pIVar21,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar10) {
    pIVar21 = IModularFeatures::Get();
    lVar15 = (**(code **)((longlong)*pIVar21 + 0x20))(pIVar21,ILiveLinkClient::ModularFeatureName,0)
    ;
    local_78.AllocatorInstance.Data._0_4_ = (pUVar20->VirtualSourceGUID).A;
    local_78.AllocatorInstance.Data._4_4_ = (pUVar20->VirtualSourceGUID).B;
    local_78.ArrayNum = (pUVar20->VirtualSourceGUID).C;
    local_78.ArrayMax = (pUVar20->VirtualSourceGUID).D;
    pUVar13 = (UClass *)(lVar15 + -8);
    if (lVar15 == 0) {
      pUVar13 = pUVar22;
    }
    cVar9 = (**(code **)(pUVar13->_padding_ + 0x70))(pUVar13,&local_78);
    if (cVar9 != '\0') {
      (**(code **)(pUVar13->_padding_ + 0x80))(pUVar13,&this->SubjectKey,&local_68);
    }
  }
  FStructOnScope::~FStructOnScope(&local_68);
  return;
}

// BroadcastStaticData @ 14d025320

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULiveLinkBroadcastComponent::BroadcastStaticData(ULiveLinkBroadcastComponent *this)

{
  TObjectPtr<UClass>_u_0 TVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FStructOnScope *pFVar9;
  UScriptStruct *pUVar10;
  ULiveLinkBroadcastSubsystem *pUVar11;
  IModularFeatures *pIVar12;
  longlong lVar13;
  UClass *pUVar14;
  TObjectPtr<UClass>_u_0 local_res8;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  FStructOnScope local_68;
  FStructOnScope local_40;
  
  pUVar8 = (this->Role).Class.field0_0x0.DebugPtr;
  if (pUVar8 == (UClass *)0x0) {
    return;
  }
  pUVar6 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
  if (pUVar6 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar6->_padding_;
  if (((int)pUVar8->_padding_ < iVar5) ||
     ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) != &pUVar6->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  if ((this->Role).Class.field0_0x0.DebugPtr == (UClass *)0x0) {
    return;
  }
  FStructOnScope::FStructOnScope(&local_68);
  pUVar8 = (this->Role).Class.field0_0x0.DebugPtr;
  pUVar14 = (UClass *)0x0;
  pUVar6 = pUVar14;
  if ((pUVar8 != (UClass *)0x0) &&
     (pUVar7 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar5 = (int)pUVar7->_padding_;
    if (((int)pUVar8->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) != &pUVar7->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar6 = (this->Role).Class.field0_0x0.DebugPtr;
    }
  }
  pUVar8 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
  if (pUVar8 == (UClass *)0x0) {
LAB_14d02546d:
    pUVar8 = (this->Role).Class.field0_0x0.DebugPtr;
    pUVar6 = pUVar14;
    if ((pUVar8 != (UClass *)0x0) &&
       (pUVar7 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar7 != (UClass *)0x0)) {
      iVar5 = (int)pUVar7->_padding_;
      if (((int)pUVar8->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar7->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar6 = (this->Role).Class.field0_0x0.DebugPtr;
      }
    }
    pUVar8 = Z_Construct_UClass_ULiveLinkCameraRole_NoRegister();
    if (pUVar8 != (UClass *)0x0) {
      iVar5 = (int)pUVar8->_padding_;
      if (((int)pUVar6->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar8->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pFVar9 = &GetCameraStaticData(this,(FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)
                                           &local_40)->WrappedStruct;
        if (&local_68 != pFVar9) {
          (**(code **)(local_68._padding_ + 0x48))(&local_68);
          local_68.ScriptStruct.WeakPtr = (pFVar9->ScriptStruct).WeakPtr;
          local_68.SampleStructMemory = pFVar9->SampleStructMemory;
          local_68.OwnsMemory = pFVar9->OwnsMemory;
          local_40._padding_ = ((FStructOnScope *)&pFVar9->_padding_)->_padding_;
          pFVar9->OwnsMemory = false;
          goto LAB_14d02566e;
        }
        goto LAB_14d025671;
      }
    }
    pUVar8 = (this->Role).Class.field0_0x0.DebugPtr;
    pUVar6 = pUVar14;
    if ((pUVar8 != (UClass *)0x0) &&
       (pUVar7 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar7 != (UClass *)0x0)) {
      iVar5 = (int)pUVar7->_padding_;
      if (((int)pUVar8->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar7->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar6 = (this->Role).Class.field0_0x0.DebugPtr;
      }
    }
    pUVar8 = Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
    if (pUVar8 == (UClass *)0x0) goto LAB_14d02567a;
    iVar5 = (int)pUVar8->_padding_;
    if (((int)pUVar6->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar5 * 8) != &pUVar8->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14d02567a;
    pUVar10 = FLiveLinkTransformStaticData::StaticStruct();
    FStructOnScope::FStructOnScope(&local_40,(UStruct *)pUVar10);
    pUVar8 = (UClass *)(**(code **)(local_40._padding_ + 0x18))(&local_40);
    lVar13 = (**(code **)(local_40._padding_ + 0x20))(&local_40);
    if (lVar13 == 0) {
LAB_14d025633:
      pUVar8 = pUVar14;
    }
    else {
      pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar5 = (int)pUVar6->_padding_;
      if (((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < iVar5) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar5 * 8) !=
           &pUVar6->_padding_)) ||
         (pUVar10 = FLiveLinkTransformStaticData::StaticStruct(), pUVar10 == (UScriptStruct *)0x0))
      goto LAB_14d025633;
      iVar5 = (int)pUVar10->_padding_;
      if ((*(int *)(lVar13 + 0x38) < iVar5) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar10->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14d025633;
    }
    *(undefined2 *)&pUVar8->_padding_ = 0x101;
    *(undefined1 *)((longlong)&pUVar8->_padding_ + 2) = 1;
    (**(code **)(local_68._padding_ + 0x48))(&local_68);
    pFVar9 = &local_40;
    local_68.ScriptStruct.WeakPtr = local_40.ScriptStruct.WeakPtr;
    local_68.SampleStructMemory = local_40.SampleStructMemory;
    local_68.OwnsMemory = local_40.OwnsMemory;
    local_40.OwnsMemory = false;
LAB_14d02566e:
    (**(code **)(local_40._padding_ + 0x48))(pFVar9);
  }
  else {
    iVar5 = (int)pUVar8->_padding_;
    if (((int)pUVar6->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar5 * 8) != &pUVar8->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14d02546d;
    pFVar9 = &GetSkeletonStaticData
                        (this,(FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)&local_40)->
              WrappedStruct;
    if (&local_68 != pFVar9) {
      (**(code **)(local_68._padding_ + 0x48))(&local_68);
      local_68.ScriptStruct.WeakPtr = (pFVar9->ScriptStruct).WeakPtr;
      local_68.SampleStructMemory = pFVar9->SampleStructMemory;
      local_68.OwnsMemory = pFVar9->OwnsMemory;
      local_40._padding_ = ((FStructOnScope *)&pFVar9->_padding_)->_padding_;
      pFVar9->OwnsMemory = false;
      goto LAB_14d02566e;
    }
  }
LAB_14d025671:
  FStructOnScope::~FStructOnScope(&local_40);
LAB_14d02567a:
  pUVar11 = UEngine::GetEngineSubsystem<ULiveLinkBroadcastSubsystem>(GEngine);
  TVar1 = (TObjectPtr<UClass>_u_0)(this->Role).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  pIVar12 = IModularFeatures::Get();
  iVar5 = (**(code **)((longlong)*pIVar12 + 0x18))(pIVar12,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar5) {
    pIVar12 = IModularFeatures::Get();
    lVar13 = (**(code **)((longlong)*pIVar12 + 0x20))(pIVar12,ILiveLinkClient::ModularFeatureName,0)
    ;
    local_78 = (pUVar11->VirtualSourceGUID).A;
    uStack_74 = (pUVar11->VirtualSourceGUID).B;
    uStack_70 = (pUVar11->VirtualSourceGUID).C;
    uStack_6c = (pUVar11->VirtualSourceGUID).D;
    pUVar8 = (UClass *)(lVar13 + -8);
    if (lVar13 == 0) {
      pUVar8 = pUVar14;
    }
    cVar4 = (**(code **)(pUVar8->_padding_ + 0x70))(pUVar8,&local_78);
    if (cVar4 != '\0') {
      pcVar2 = *(code **)(pUVar8->_padding_ + 0x78);
      local_res8 = TVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
      (*pcVar2)(pUVar8,&this->SubjectKey,&local_res8,&local_68);
    }
  }
  FStructOnScope::~FStructOnScope(&local_68);
  return;
}

// GetBoneTransforms @ 14d0485c0

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

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
ULiveLinkBroadcastComponent::GetBoneTransforms
          (ULiveLinkBroadcastComponent *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  USkinnedMeshComponent *this_00;
  UClass *pUVar6;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  FName FVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [4];
  undefined1 local_104 [12];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar11 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (USkinnedMeshComponent *)
            FComponentReference::GetComponent(&this->SourceMesh,(AActor *)this->_padding_);
  if (this_00 != (USkinnedMeshComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) {
      if ((this->AllowedBoneNames).ArrayNum < 1) {
        iVar5 = USkinnedMeshComponent::GetNumBones(this_00);
        if (0 < iVar5) {
          do {
            pcVar3 = *(code **)(this_00->_padding_ + 0x520);
            FVar8 = USkinnedMeshComponent::GetBoneName(this_00,(int)local_104);
            (*pcVar3)(this_00,&local_98,*(undefined8 *)FVar8,3);
            pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
            if ((pFVar2 <= (FScriptContainerElement *)&local_98) &&
               ((FScriptContainerElement *)&local_98 <
                pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 0x60)) {
              local_120 = (longlong)__return_storage_ptr__->ArrayNum;
              local_118 = 0x60;
              local_138 = &local_98;
              local_130 = pFVar2;
              local_128 = (longlong)__return_storage_ptr__->ArrayMax;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                pTVar7 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                         (*pcVar3)();
                return pTVar7;
              }
            }
            iVar5 = __return_storage_ptr__->ArrayNum;
            if (iVar5 == __return_storage_ptr__->ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x1060,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar5 + 1;
            iVar11 = iVar11 + 1;
            pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
            lVar9 = (longlong)iVar5 * 0x60;
            *(undefined8 *)(pFVar2 + lVar9) = local_98;
            *(undefined8 *)(pFVar2 + lVar9 + 8) = uStack_90;
            *(undefined8 *)(pFVar2 + lVar9 + 0x10) = local_88;
            *(undefined8 *)(pFVar2 + lVar9 + 0x10 + 8) = uStack_80;
            *(undefined8 *)(pFVar2 + lVar9 + 0x20) = local_78;
            *(undefined8 *)(pFVar2 + lVar9 + 0x20 + 8) = uStack_70;
            *(undefined8 *)(pFVar2 + lVar9 + 0x30) = local_68;
            *(undefined8 *)(pFVar2 + lVar9 + 0x30 + 8) = uStack_60;
            *(undefined8 *)(pFVar2 + lVar9 + 0x40) = local_58;
            *(undefined8 *)(pFVar2 + lVar9 + 0x40 + 8) = uStack_50;
            *(undefined8 *)(pFVar2 + lVar9 + 0x50) = local_48;
            *(undefined8 *)(pFVar2 + lVar9 + 0x50 + 8) = uStack_40;
            iVar5 = USkinnedMeshComponent::GetNumBones(this_00);
          } while (iVar11 < iVar5);
        }
      }
      else {
        pFVar10 = (this->AllowedBoneNames).AllocatorInstance.Data;
        iVar11 = (this->AllowedBoneNames).ArrayNum;
        pFVar2 = pFVar10 + (longlong)iVar11 * 8;
        while( true ) {
          if ((this->AllowedBoneNames).ArrayNum != iVar11) {
            local_108[0] = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_108);
          }
          if (pFVar10 == pFVar2) break;
          (**(code **)(this_00->_padding_ + 0x520))(this_00,&local_f8,*(undefined8 *)pFVar10,3);
          pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar1 <= (FScriptContainerElement *)&local_f8) &&
             ((FScriptContainerElement *)&local_f8 <
              pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x60)) {
            local_120 = (longlong)__return_storage_ptr__->ArrayNum;
            local_118 = 0x60;
            local_138 = &local_f8;
            local_130 = pFVar1;
            local_128 = (longlong)__return_storage_ptr__->ArrayMax;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pTVar7 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                       (*pcVar3)();
              return pTVar7;
            }
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1060,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
          lVar9 = (longlong)iVar5 * 0x60;
          pFVar10 = pFVar10 + 8;
          *(undefined8 *)(pFVar1 + lVar9) = local_f8;
          *(undefined8 *)(pFVar1 + lVar9 + 8) = uStack_f0;
          *(undefined8 *)(pFVar1 + lVar9 + 0x10) = local_e8;
          *(undefined8 *)(pFVar1 + lVar9 + 0x10 + 8) = uStack_e0;
          *(undefined8 *)(pFVar1 + lVar9 + 0x20) = local_d8;
          *(undefined8 *)(pFVar1 + lVar9 + 0x20 + 8) = uStack_d0;
          *(undefined8 *)(pFVar1 + lVar9 + 0x30) = local_c8;
          *(undefined8 *)(pFVar1 + lVar9 + 0x30 + 8) = uStack_c0;
          *(undefined8 *)(pFVar1 + lVar9 + 0x40) = local_b8;
          *(undefined8 *)(pFVar1 + lVar9 + 0x40 + 8) = uStack_b0;
          *(undefined8 *)(pFVar1 + lVar9 + 0x50) = local_a8;
          *(undefined8 *)(pFVar1 + lVar9 + 0x50 + 8) = uStack_a0;
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetCameraFrameData @ 14d049d40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> * __thiscall
ULiveLinkBroadcastComponent::GetCameraFrameData
          (ULiveLinkBroadcastComponent *this,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  AActor *pAVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  longlong lVar7;
  longlong lVar8;
  UClass *pUVar9;
  UActorComponent *pUVar10;
  
  pUVar6 = FLiveLinkCameraFrameData::StaticStruct();
  FStructOnScope::FStructOnScope(&__return_storage_ptr__->WrappedStruct,(UStruct *)pUVar6);
  lVar7 = (**(code **)((__return_storage_ptr__->WrappedStruct)._padding_ + 0x18))
                    (__return_storage_ptr__);
  lVar8 = (**(code **)((__return_storage_ptr__->WrappedStruct)._padding_ + 0x20))
                    (__return_storage_ptr__);
  if (lVar8 != 0) {
    pUVar9 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar9->_padding_)) {
      pUVar6 = FLiveLinkCameraFrameData::StaticStruct();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar8 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) goto LAB_14d049ddb;
      }
    }
  }
  lVar7 = 0;
LAB_14d049ddb:
  pUVar10 = FComponentReference::GetComponent(&this->SourceMesh,(AActor *)this->_padding_);
  if (pUVar10 != (UActorComponent *)0x0) {
    pUVar9 = Z_Construct_UClass_UCameraComponent_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if ((iVar1 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar9->_padding_)) {
      pFVar2 = pUVar10[2].AssetUserData.AllocatorInstance.Data;
      *(undefined8 *)(lVar7 + 0xa0) = *(undefined8 *)&pUVar10[2].ComponentTags.ArrayNum;
      *(FScriptContainerElement **)(lVar7 + 0xa8) = pFVar2;
      uVar3 = *(undefined8 *)&pUVar10[2].field_0x88;
      *(undefined8 *)(lVar7 + 0xb0) = *(undefined8 *)&pUVar10[2].AssetUserData.ArrayNum;
      *(undefined8 *)(lVar7 + 0xb8) = uVar3;
      uVar3 = *(undefined8 *)&pUVar10[2].field_0x98;
      *(undefined8 *)(lVar7 + 0xc0) = *(undefined8 *)&pUVar10[2].UCSSerializationIndex;
      *(undefined8 *)(lVar7 + 200) = uVar3;
      pAVar4 = pUVar10[2].OwnerPrivate;
      *(FPhysScene_Chaos **)(lVar7 + 0xd0) = pUVar10[2].PhysicsStateAsyncCreationScene;
      *(AActor **)(lVar7 + 0xd8) = pAVar4;
      uVar3 = *(undefined8 *)&pUVar10[2].field_0xb8;
      *(UWorld **)(lVar7 + 0xe0) = pUVar10[2].WorldPrivate;
      *(undefined8 *)(lVar7 + 0xe8) = uVar3;
      lVar8 = pUVar10[3]._padding_;
      *(longlong *)(lVar7 + 0xf0) = pUVar10[3]._padding_;
      *(longlong *)(lVar7 + 0xf8) = lVar8;
      *(int *)(lVar7 + 0x100) = (int)pUVar10[3]._padding_;
      *(undefined4 *)(lVar7 + 0x104) = *(undefined4 *)((longlong)&pUVar10[3]._padding_ + 4);
      *(bool *)(lVar7 + 0x114) =
           *(char *)((longlong)&pUVar10[3].PrimaryComponentTick._padding_ + 3) != '\0';
      pUVar9 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
      iVar1 = (int)pUVar9->_padding_;
      if ((iVar1 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar9->_padding_)) {
        *(undefined4 *)(lVar7 + 0x108) = *(undefined4 *)((longlong)&pUVar10[0xf]._padding_ + 4);
        *(int *)(lVar7 + 0x10c) = (int)pUVar10[0xf]._padding_;
        *(undefined4 *)(lVar7 + 0x110) = *(undefined4 *)((longlong)&pUVar10[0xf]._padding_ + 4);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetCameraStaticData @ 14d049f10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> * __thiscall
ULiveLinkBroadcastComponent::GetCameraStaticData
          (ULiveLinkBroadcastComponent *this,
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *__return_storage_ptr__)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  longlong lVar4;
  longlong lVar5;
  UClass *pUVar6;
  UActorComponent *pUVar7;
  
  pUVar3 = FLiveLinkCameraStaticData::StaticStruct();
  FStructOnScope::FStructOnScope(&__return_storage_ptr__->WrappedStruct,(UStruct *)pUVar3);
  lVar4 = (**(code **)((__return_storage_ptr__->WrappedStruct)._padding_ + 0x18))
                    (__return_storage_ptr__);
  lVar5 = (**(code **)((__return_storage_ptr__->WrappedStruct)._padding_ + 0x20))
                    (__return_storage_ptr__);
  if (lVar5 != 0) {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      pUVar3 = FLiveLinkCameraStaticData::StaticStruct();
      if (pUVar3 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar3->_padding_;
        if ((*(int *)(lVar5 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar3->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) goto LAB_14d049fab;
      }
    }
  }
  lVar4 = 0;
LAB_14d049fab:
  *(undefined2 *)(lVar4 + 0x10) = 0x101;
  *(undefined1 *)(lVar4 + 0x12) = 1;
  pUVar7 = FComponentReference::GetComponent(&this->SourceMesh,(AActor *)this->_padding_);
  if (pUVar7 != (UActorComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_UCameraComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      pUVar6 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        *(undefined4 *)(lVar4 + 0x1c) = *(undefined4 *)((longlong)&pUVar7[0xe]._padding_ + 4);
        *(int *)(lVar4 + 0x20) = (int)pUVar7[0xe].PrimaryComponentTick._padding_;
        *(undefined1 *)(lVar4 + 0x1a) = 1;
        *(undefined2 *)(lVar4 + 0x25) = 0x101;
        *(undefined1 *)(lVar4 + 0x24) = 1;
        *(undefined1 *)(lVar4 + 0x27) = 1;
      }
      *(undefined2 *)(lVar4 + 0x18) = 0x101;
      *(undefined1 *)(lVar4 + 0x1b) = 1;
    }
  }
  return __return_storage_ptr__;
}

// GetCurveNames @ 14d04a700

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
ULiveLinkBroadcastComponent::GetCurveNames
          (ULiveLinkBroadcastComponent *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  UActorComponent *pUVar3;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  pUVar3 = FComponentReference::GetComponent(&this->SourceMesh,(AActor *)this->_padding_);
  if (pUVar3 != (UActorComponent *)0x0) {
    Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  }
  if ((0 < (this->AllowedCurveNames).ArrayNum) &&
     (__return_storage_ptr__ != &this->AllowedCurveNames)) {
    iVar2 = (this->AllowedCurveNames).ArrayNum;
    _Src = (this->AllowedCurveNames).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar2,*piVar1,&__return_storage_ptr__->AllocatorInstance,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetCurveValues @ 14d04a7e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
ULiveLinkBroadcastComponent::GetCurveValues
          (ULiveLinkBroadcastComponent *this,
          TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName *pFVar1;
  int iVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  USkeletalMeshComponent *this_00;
  UClass *pUVar8;
  UAnimInstance *pUVar9;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  float local_48 [2];
  TArray<FName,TSizedDefaultAllocator<32>_> local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (USkeletalMeshComponent *)
            FComponentReference::GetComponent(&this->SourceMesh,(AActor *)this->_padding_);
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    pUVar8 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar8->_padding_)) goto LAB_14d04a846;
  }
  this_00 = (USkeletalMeshComponent *)0x0;
LAB_14d04a846:
  GetCurveNames(this,&local_40);
  iVar2 = local_40.ArrayNum;
  uVar11 = (ulonglong)local_40.ArrayNum;
  pFVar1 = (FName *)(local_40.AllocatorInstance.Data + uVar11 * 8);
  FVar12.Data = local_40.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar11 != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FName *)FVar12.Data == pFVar1) break;
    FVar3 = *(FName *)FVar12.Data;
    pUVar9 = USkeletalMeshComponent::GetAnimInstance(this_00);
    if (pUVar9 != (UAnimInstance *)0x0) {
      pUVar9 = USkeletalMeshComponent::GetAnimInstance(this_00);
      local_48[0] = UAnimInstance::GetCurveValue(pUVar9,FVar3);
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)local_48) &&
         ((FScriptContainerElement *)local_48 <
          pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(float *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
           local_48[0];
    }
    uVar11 = (ulonglong)(uint)local_40.ArrayNum;
    FVar12.Data = FVar12.Data + 8;
  }
  if ((FName *)local_40.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d052130

UClass * __cdecl ULiveLinkBroadcastComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkBroadcastComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkBroadcastComponent",
               &Z_Registration_Info_UClass_ULiveLinkBroadcastComponent.InnerSingleton,
               StaticRegisterNativesULiveLinkBroadcastComponent,0x148,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkBroadcastComponent>,
               InternalVTableHelperCtorCaller<ULiveLinkBroadcastComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkBroadcastComponent.InnerSingleton;
}

// GetSkeletalBoneNames @ 14d054ce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
ULiveLinkBroadcastComponent::GetSkeletalBoneNames
          (ULiveLinkBroadcastComponent *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  USkinnedMeshComponent *this_00;
  UClass *pUVar2;
  int iVar3;
  undefined8 local_res8;
  
  iVar3 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (USkinnedMeshComponent *)
            FComponentReference::GetComponent(&this->SourceMesh,(AActor *)this->_padding_);
  if (this_00 != (USkinnedMeshComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      if ((this->AllowedBoneNames).ArrayNum < 1) {
        iVar1 = USkinnedMeshComponent::GetNumBones(this_00);
        if (0 < iVar1) {
          do {
            USkinnedMeshComponent::GetBoneName(this_00,(int)&local_res8);
            iVar1 = __return_storage_ptr__->ArrayNum;
            if (iVar1 == __return_storage_ptr__->ArrayMax) {
              iVar1 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            iVar3 = iVar3 + 1;
            __return_storage_ptr__->ArrayNum = iVar1 + 1;
            *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar1 * 8)
                 = local_res8;
            iVar1 = USkinnedMeshComponent::GetNumBones(this_00);
          } while (iVar3 < iVar1);
        }
      }
      else {
        TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                  (__return_storage_ptr__,&this->AllowedBoneNames);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSkeletalBoneParents @ 14d054de0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
ULiveLinkBroadcastComponent::GetSkeletalBoneParents
          (ULiveLinkBroadcastComponent *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  USkinnedMeshComponent *this_00;
  UClass *pUVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined1 local_res18 [8];
  FName local_res20;
  undefined4 local_48;
  int local_44 [3];
  
  iVar9 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (USkinnedMeshComponent *)
            FComponentReference::GetComponent(&this->SourceMesh,(AActor *)this->_padding_);
  if (this_00 != (USkinnedMeshComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) {
      if (0 < (this->AllowedBoneNames).ArrayNum) {
        pFVar10 = (this->AllowedBoneNames).AllocatorInstance.Data;
        iVar9 = (this->AllowedBoneNames).ArrayNum;
        pFVar1 = pFVar10 + (longlong)iVar9 * 8;
        do {
          if ((this->AllowedBoneNames).ArrayNum != iVar9) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (pFVar10 == pFVar1) {
            return __return_storage_ptr__;
          }
          USkinnedMeshComponent::GetParentBone(this_00,(FName)&local_res10);
          pFVar2 = (this->AllowedBoneNames).AllocatorInstance.Data;
          for (pFVar8 = pFVar2; pFVar8 != pFVar2 + (longlong)(this->AllowedBoneNames).ArrayNum * 8;
              pFVar8 = pFVar8 + 8) {
            if (*(longlong *)pFVar8 == local_res10) {
              local_48 = (undefined4)((longlong)pFVar8 - (longlong)pFVar2 >> 3);
              goto LAB_14d054ee7;
            }
          }
          local_48 = 0xffffffff;
LAB_14d054ee7:
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 <
               pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar7;
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          pFVar10 = pFVar10 + 8;
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
               local_48;
        } while( true );
      }
      iVar5 = USkinnedMeshComponent::GetNumBones(this_00);
      if (0 < iVar5) {
        do {
          USkinnedMeshComponent::GetBoneName(this_00,(int)local_res18);
          USkinnedMeshComponent::GetParentBone(this_00,(FName)&local_res20);
          local_44[0] = USkinnedMeshComponent::GetBoneIndex(this_00,local_res20);
          pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar1 <= (FScriptContainerElement *)local_44) &&
              ((FScriptContainerElement *)local_44 <
               pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar7;
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          iVar9 = iVar9 + 1;
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
               local_44[0];
          iVar5 = USkinnedMeshComponent::GetNumBones(this_00);
        } while (iVar9 < iVar5);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSkeletonFrameData @ 14d0550c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> * __thiscall
ULiveLinkBroadcastComponent::GetSkeletonFrameData
          (ULiveLinkBroadcastComponent *this,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *__return_storage_ptr__)

{
  longlong *plVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  UScriptStruct *pUVar4;
  FLiveLinkAnimationFrameData *pFVar5;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_28;
  
  pUVar4 = FLiveLinkAnimationFrameData::StaticStruct();
  FStructOnScope::FStructOnScope(&__return_storage_ptr__->WrappedStruct,(UStruct *)pUVar4);
  pFVar5 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkAnimationFrameData>
                     (__return_storage_ptr__);
  pTVar6 = GetBoneTransforms(this,&local_28);
  pTVar2 = &pFVar5->Transforms;
  if (pTVar2 != pTVar6) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar5->Transforms).ArrayNum = pTVar6->ArrayNum;
    (pFVar5->Transforms).ArrayMax = pTVar6->ArrayMax;
    pTVar6->ArrayNum = 0;
    pTVar6->ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  pTVar7 = GetCurveValues(this,(TArray<float,TSizedDefaultAllocator<32>_> *)&local_28);
  plVar1 = &pFVar5->_padding_;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar1 != pTVar7) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)(pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar5->_padding_ = pTVar7->ArrayNum;
    *(int *)((longlong)&pFVar5->_padding_ + 4) = pTVar7->ArrayMax;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSkeletonStaticData @ 14d0551c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> * __thiscall
ULiveLinkBroadcastComponent::GetSkeletonStaticData
          (ULiveLinkBroadcastComponent *this,
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *__return_storage_ptr__)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  UScriptStruct *pUVar5;
  FLiveLinkSkeletonStaticData *pFVar6;
  USkinnedMeshComponent *this_00;
  UClass *pUVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  FLiveLinkSkeletonStaticData *pFVar9;
  int iVar10;
  undefined8 local_res8;
  ForAnyElementType local_48;
  undefined8 local_40;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  pUVar5 = FLiveLinkSkeletonStaticData::StaticStruct();
  FStructOnScope::FStructOnScope(&__return_storage_ptr__->WrappedStruct,(UStruct *)pUVar5);
  pFVar6 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkSkeletonStaticData>
                     (__return_storage_ptr__);
  iVar10 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  this_00 = (USkinnedMeshComponent *)
            FComponentReference::GetComponent(&this->SourceMesh,(AActor *)this->_padding_);
  if (this_00 != (USkinnedMeshComponent *)0x0) {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar4 = (int)pUVar7->_padding_;
    if ((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar7->_padding_)) {
      if ((this->AllowedBoneNames).ArrayNum < 1) {
        iVar4 = USkinnedMeshComponent::GetNumBones(this_00);
        if (0 < iVar4) {
          do {
            USkinnedMeshComponent::GetBoneName(this_00,(int)&local_res8);
            iVar4 = (int)local_40;
            if ((int)local_40 == local_40._4_4_) {
              iVar4 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&local_48,(int *)((longlong)&local_40 + 4));
            }
            iVar10 = iVar10 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar4 + 1);
            *(undefined8 *)(local_48.Data + (longlong)iVar4 * 8) = local_res8;
            iVar4 = USkinnedMeshComponent::GetNumBones(this_00);
          } while (iVar10 < iVar4);
        }
      }
      else if ((TArray<FName,TSizedDefaultAllocator<32>_> *)&local_48 != &this->AllowedBoneNames) {
        iVar10 = (this->AllowedBoneNames).ArrayNum;
        pFVar3 = (this->AllowedBoneNames).AllocatorInstance.Data;
        local_40 = CONCAT44(local_40._4_4_,iVar10);
        if ((iVar10 == 0) && (local_40._4_4_ == 0)) {
          local_40 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar10,local_40._4_4_,&local_48,iVar10,(int *)((longlong)&local_40 + 4));
          if (iVar10 != 0) {
            memcpy(local_48.Data,pFVar3,(longlong)iVar10 << 3);
          }
        }
      }
    }
  }
  pTVar1 = &pFVar6->BoneNames;
  if (pTVar1 != (TArray<FName,TSizedDefaultAllocator<32>_> *)&local_48) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    (pFVar6->BoneNames).ArrayNum = (int)local_40;
    (pFVar6->BoneNames).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  pTVar8 = GetSkeletalBoneParents(this,&local_38);
  pTVar2 = &pFVar6->BoneParents;
  if (pTVar2 != pTVar8) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar8->AllocatorInstance).Data;
    (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar6->BoneParents).ArrayNum = pTVar8->ArrayNum;
    (pFVar6->BoneParents).ArrayMax = pTVar8->ArrayMax;
    pTVar8->ArrayNum = 0;
    pTVar8->ArrayMax = 0;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  pFVar9 = (FLiveLinkSkeletonStaticData *)
           GetCurveNames(this,(TArray<FName,TSizedDefaultAllocator<32>_> *)&local_38);
  if (pFVar6 != pFVar9) {
    if ((void *)pFVar6->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar6->_padding_);
    }
    pFVar6->_padding_ = pFVar9->_padding_;
    pFVar9->_padding_ = 0;
    *(int *)&pFVar6->_padding_ = (int)pFVar9->_padding_;
    *(undefined4 *)((longlong)&pFVar6->_padding_ + 4) =
         *(undefined4 *)((longlong)&pFVar9->_padding_ + 4);
    pFVar9->_padding_ = 0;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTransformFrameData @ 14d057500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> * __thiscall
ULiveLinkBroadcastComponent::GetTransformFrameData
          (ULiveLinkBroadcastComponent *this,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  AActor *pAVar4;
  UScriptStruct *pUVar5;
  FLiveLinkTransformFrameData *pFVar6;
  UActorComponent *pUVar7;
  UClass *pUVar8;
  
  pUVar5 = FLiveLinkTransformFrameData::StaticStruct();
  FStructOnScope::FStructOnScope(&__return_storage_ptr__->WrappedStruct,(UStruct *)pUVar5);
  pFVar6 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkTransformFrameData>
                     (__return_storage_ptr__);
  pUVar7 = FComponentReference::GetComponent(&this->SourceMesh,(AActor *)this->_padding_);
  if (pUVar7 != (UActorComponent *)0x0) {
    pUVar8 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) {
      pFVar2 = pUVar7[2].AssetUserData.AllocatorInstance.Data;
      (pFVar6->Transform).Rotation.XY.m128d_f64[0] = *(double *)&pUVar7[2].ComponentTags.ArrayNum;
      (pFVar6->Transform).Rotation.XY.m128d_f64[1] = (double)pFVar2;
      dVar3 = *(double *)&pUVar7[2].field_0x88;
      (pFVar6->Transform).Rotation.ZW.m128d_f64[0] = *(double *)&pUVar7[2].AssetUserData.ArrayNum;
      (pFVar6->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
      dVar3 = *(double *)&pUVar7[2].field_0x98;
      (pFVar6->Transform).Translation.XY.m128d_f64[0] = *(double *)&pUVar7[2].UCSSerializationIndex;
      (pFVar6->Transform).Translation.XY.m128d_f64[1] = dVar3;
      pAVar4 = pUVar7[2].OwnerPrivate;
      (pFVar6->Transform).Translation.ZW.m128d_f64[0] =
           (double)pUVar7[2].PhysicsStateAsyncCreationScene;
      (pFVar6->Transform).Translation.ZW.m128d_f64[1] = (double)pAVar4;
      dVar3 = *(double *)&pUVar7[2].field_0xb8;
      (pFVar6->Transform).Scale3D.XY.m128d_f64[0] = (double)pUVar7[2].WorldPrivate;
      (pFVar6->Transform).Scale3D.XY.m128d_f64[1] = dVar3;
      dVar3 = (double)pUVar7[3]._padding_;
      (pFVar6->Transform).Scale3D.ZW.m128d_f64[0] = (double)pUVar7[3]._padding_;
      (pFVar6->Transform).Scale3D.ZW.m128d_f64[1] = dVar3;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetTransformStaticData @ 14d057bd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> * __thiscall
ULiveLinkBroadcastComponent::GetTransformStaticData
          (ULiveLinkBroadcastComponent *this,
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *__return_storage_ptr__)

{
  UScriptStruct *pUVar1;
  FLiveLinkTransformStaticData *pFVar2;
  
  pUVar1 = FLiveLinkTransformStaticData::StaticStruct();
  FStructOnScope::FStructOnScope(&__return_storage_ptr__->WrappedStruct,(UStruct *)pUVar1);
  pFVar2 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkTransformStaticData>
                     (__return_storage_ptr__);
  pFVar2->bIsLocationSupported = true;
  pFVar2->bIsRotationSupported = true;
  pFVar2->bIsScaleSupported = true;
  return __return_storage_ptr__;
}

// InitiateLiveLink @ 14d05d480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULiveLinkBroadcastComponent::InitiateLiveLink(ULiveLinkBroadcastComponent *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  UClass *pUVar7;
  ULiveLinkBroadcastSubsystem *this_00;
  FLiveLinkSubjectKey *pFVar8;
  TObjectPtr<UClass>_u_0 local_res8;
  FLiveLinkSubjectKey local_28;
  
  pUVar2 = (this->Role).Class.field0_0x0.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar7 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && ((this->Role).Class.field0_0x0.DebugPtr != (UClass *)0x0)) &&
       (1 < (int)(this->SourceMesh)._padding_)) {
      this_00 = UEngine::GetEngineSubsystem<ULiveLinkBroadcastSubsystem>(GEngine);
      local_res8 = (TObjectPtr<UClass>_u_0)(this->Role).Class.field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res8.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
      }
      pFVar8 = ULiveLinkBroadcastSubsystem::CreateSubject
                         (this_00,&local_28,this->SubjectName,
                          (TSubclassOf<ULiveLinkRole>)&local_res8);
      uVar4 = (pFVar8->Source).B;
      uVar5 = (pFVar8->Source).C;
      uVar6 = (pFVar8->Source).D;
      (this->SubjectKey).Source.A = (pFVar8->Source).A;
      (this->SubjectKey).Source.B = uVar4;
      (this->SubjectKey).Source.C = uVar5;
      (this->SubjectKey).Source.D = uVar6;
      (this->SubjectKey).SubjectName.Name = (pFVar8->SubjectName).Name;
      return;
    }
  }
  if (2 < (byte)LogTemp._0_1_) {
    local_res8 = *(TObjectPtr<UClass>_u_0 *)(this->_padding_ + 0x18);
    ::FName::ToString((FName *)&local_res8.ObjectPtr,(FString *)&local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if ((void *)local_28.Source._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28.Source._0_8_);
    }
  }
  return;
}

// OnComponentCreated @ 14d062d60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULiveLinkBroadcastComponent::OnComponentCreated(ULiveLinkBroadcastComponent *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  USkeletalMeshComponent *this_00;
  UClass *pUVar5;
  UClass *pUVar6;
  FString *pFVar7;
  UObjectBaseUtility *this_01;
  UObject *pUVar8;
  UClass *local_res8;
  FString local_18;
  
  UActorComponent::OnComponentCreated((UActorComponent *)this);
  plVar2 = (longlong *)this->_padding_;
  pcVar3 = *(code **)(*plVar2 + 0x738);
  local_res8 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  this_00 = (USkeletalMeshComponent *)(*pcVar3)(plVar2,&local_res8);
  pUVar6 = (this->Role).Class.field0_0x0.DebugPtr;
  if ((pUVar6 != (UClass *)0x0) &&
     (pUVar5 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((this->Role).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
      return;
    }
  }
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->Role).Class.field0_0x0.DebugPtr = pUVar6;
    if ((int)(this->SourceMesh)._padding_ < 2) {
      pFVar7 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)this_00,&local_18,(UObject *)this->_padding_);
      ::FString::operator=((FString *)&(this->SourceMesh)._padding_,pFVar7);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    USkeletalMeshComponent::SetUpdateAnimationInEditor(this_00,true);
    return;
  }
  plVar2 = (longlong *)this->_padding_;
  pcVar3 = *(code **)(*plVar2 + 0x738);
  local_res8 = Z_Construct_UClass_UCameraComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  this_01 = (UObjectBaseUtility *)(*pcVar3)(plVar2,&local_res8);
  if (this_01 == (UObjectBaseUtility *)0x0) {
    pUVar6 = Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->Role).Class.field0_0x0.DebugPtr = pUVar6;
    if (1 < (int)(this->SourceMesh)._padding_) {
      return;
    }
    pUVar8 = (UObject *)this->_padding_;
    this_01 = *(UObjectBaseUtility **)(pUVar8 + 0xb);
  }
  else {
    pUVar6 = Z_Construct_UClass_ULiveLinkCameraRole_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->Role).Class.field0_0x0.DebugPtr = pUVar6;
    if (1 < (int)(this->SourceMesh)._padding_) {
      return;
    }
    pUVar8 = (UObject *)this->_padding_;
  }
  pFVar7 = UObjectBaseUtility::GetPathName(this_01,&local_18,pUVar8);
  ::FString::operator=((FString *)&(this->SourceMesh)._padding_,pFVar7);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OnComponentDestroyed @ 14d062f80

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
ULiveLinkBroadcastComponent::OnComponentDestroyed(ULiveLinkBroadcastComponent *this,bool param_1)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  
  UEngine::GetEngineSubsystem<ULiveLinkBroadcastSubsystem>(GEngine);
  pIVar2 = IModularFeatures::Get();
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,ILiveLinkClient::ModularFeatureName,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0xa0))(plVar4,&this->SubjectKey);
  }
  UActorComponent::OnComponentDestroyed((UActorComponent *)this,param_1);
  return;
}

// StaticRegisterNativesULiveLinkBroadcastComponent @ 14d080700

void __cdecl ULiveLinkBroadcastComponent::StaticRegisterNativesULiveLinkBroadcastComponent(void)

{
  return;
}

// TickComponent @ 14d082400

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
ULiveLinkBroadcastComponent::TickComponent
          (ULiveLinkBroadcastComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UActorComponent *pUVar9;
  UClass *pUVar10;
  ULiveLinkBroadcastSubsystem *this_00;
  FLiveLinkSubjectKey *pFVar11;
  TObjectPtr<UClass>_u_0 local_res8;
  FLiveLinkSubjectKey local_28;
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if (this->bEnable == false) {
    return;
  }
  if (this->bIsDirty == false) goto LAB_14d082591;
  if (this->SubjectName == (FName)0x0) {
    pUVar7 = Z_Construct_UClass_AActor_NoRegister();
    pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
    uVar3 = *(undefined4 *)&pUVar8->field_0x1c;
    (this->SubjectName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar8->field_0x18;
    (this->SubjectName).Number = uVar3;
  }
  pUVar9 = FComponentReference::GetComponent(&this->SourceMesh,(AActor *)this->_padding_);
  this->CachedResolvedObject = pUVar9;
  pUVar7 = (this->Role).Class.field0_0x0.DebugPtr;
  if ((pUVar7 == (UClass *)0x0) ||
     (pUVar10 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar10 == (UClass *)0x0)) {
LAB_14d082521:
    if (2 < (byte)LogTemp._0_1_) {
      local_res8 = *(TObjectPtr<UClass>_u_0 *)(this->_padding_ + 0x18);
      ::FName::ToString((FName *)&local_res8.ObjectPtr,(FString *)&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if ((void *)local_28.Source._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_28.Source._0_8_);
      }
    }
  }
  else {
    iVar1 = (int)pUVar10->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar10->_padding_
       )) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((!bVar2) || ((this->Role).Class.field0_0x0.DebugPtr == (UClass *)0x0)) ||
       ((int)(this->SourceMesh)._padding_ < 2)) goto LAB_14d082521;
    this_00 = UEngine::GetEngineSubsystem<ULiveLinkBroadcastSubsystem>(GEngine);
    local_res8 = (TObjectPtr<UClass>_u_0)(this->Role).Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    pFVar11 = ULiveLinkBroadcastSubsystem::CreateSubject
                        (this_00,&local_28,this->SubjectName,(TSubclassOf<ULiveLinkRole>)&local_res8
                        );
    uVar4 = (pFVar11->Source).B;
    uVar5 = (pFVar11->Source).C;
    uVar6 = (pFVar11->Source).D;
    (this->SubjectKey).Source.A = (pFVar11->Source).A;
    (this->SubjectKey).Source.B = uVar4;
    (this->SubjectKey).Source.C = uVar5;
    (this->SubjectKey).Source.D = uVar6;
    (this->SubjectKey).SubjectName.Name = (pFVar11->SubjectName).Name;
  }
  BroadcastStaticData(this);
  this->bIsDirty = false;
LAB_14d082591:
  BroadcastFrameData(this);
  return;
}

