// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b432650

UClass * __cdecl ADS_BuildingActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_BuildingActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_BuildingActor",
               &Z_Registration_Info_UClass_ADS_BuildingActor.InnerSingleton,
               StaticRegisterNativesADS_BuildingActor,0x370,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_BuildingActor>,
               InternalVTableHelperCtorCaller<ADS_BuildingActor>,local_res8,AWN_Prefab::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_BuildingActor.InnerSingleton;
}

// ADS_BuildingActor @ 14b433db0

ADS_BuildingActor * __thiscall
ADS_BuildingActor::ADS_BuildingActor(ADS_BuildingActor *this,FVTableHelper *param_1)

{
  AWN_Prefab::AWN_Prefab((AWN_Prefab *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_BuildingActor__6B_;
  (this->StaticMeshComps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshComps).ArrayNum = 0;
  (this->StaticMeshComps).ArrayMax = 0;
  (this->MaterialInstanceDynamics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialInstanceDynamics).ArrayNum = 0;
  (this->MaterialInstanceDynamics).ArrayMax = 0;
  (this->Info).Path.ComparisonIndex = 0;
  (this->Info).Path.Number = 0;
  *(undefined8 *)&(this->Info).GridIndex.field0_0x0 = IntVectorMax.field0_0x0._0_8_;
  (this->Info).GridIndex.field0_0x0._s_0.Z = IntVectorMax.field0_0x0._s_0.Z;
  (this->Info).LocalIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).LocalIndices.ArrayNum = 0;
  (this->Info).LocalIndices.ArrayMax = 0;
  ::FName::FName(&this->AlbedoTintName,"Albedo Tint");
  ::FName::FName(&this->MaskName,"MaskValue");
  this->ElapsedTime = 0.0;
  this->IsMoveAnimation = false;
  this->IsConstructWaiting = false;
  return this;
}

// ~ADS_BuildingActor @ 14b434b10

void __thiscall ADS_BuildingActor::~ADS_BuildingActor(ADS_BuildingActor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ADS_BuildingActor__6B_;
  pFVar1 = (this->Info).LocalIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialInstanceDynamics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticMeshComps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AWN_Prefab::~AWN_Prefab((AWN_Prefab *)this);
  return;
}

// GetPrivateStaticClass @ 14b435fa0

UClass * __cdecl ADS_BuildingActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_BuildingActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_BuildingActor",
               &Z_Registration_Info_UClass_ADS_BuildingActor.InnerSingleton,
               StaticRegisterNativesADS_BuildingActor,0x370,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_BuildingActor>,
               InternalVTableHelperCtorCaller<ADS_BuildingActor>,local_res8,AWN_Prefab::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_BuildingActor.InnerSingleton;
}

// StaticRegisterNativesADS_BuildingActor @ 14b436fc0

void __cdecl ADS_BuildingActor::StaticRegisterNativesADS_BuildingActor(void)

{
  return;
}

// ADS_BuildingActor @ 14bbea6c0

ADS_BuildingActor * __thiscall
ADS_BuildingActor::ADS_BuildingActor(ADS_BuildingActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  TObjectPtr<UCurveFloat>_u_0 TVar2;
  FString local_18;
  
  AWN_Prefab::AWN_Prefab((AWN_Prefab *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_BuildingActor__6B_;
  (this->StaticMeshComps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshComps).ArrayNum = 0;
  (this->StaticMeshComps).ArrayMax = 0;
  (this->MaterialInstanceDynamics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialInstanceDynamics).ArrayNum = 0;
  (this->MaterialInstanceDynamics).ArrayMax = 0;
  (this->Info).Path.ComparisonIndex = 0;
  (this->Info).Path.Number = 0;
  *(undefined8 *)&(this->Info).GridIndex.field0_0x0 = IntVectorMax.field0_0x0._0_8_;
  (this->Info).GridIndex.field0_0x0._s_0.Z = IntVectorMax.field0_0x0._s_0.Z;
  (this->Info).LocalIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).LocalIndices.ArrayNum = 0;
  (this->Info).LocalIndices.ArrayMax = 0;
  ::FName::FName(&this->AlbedoTintName,"Albedo Tint");
  ::FName::FName(&this->MaskName,"MaskValue");
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  this->ElapsedTime = 0.0;
  this->IsMoveAnimation = false;
  this->IsConstructWaiting = false;
  if (BuildingMovementCurve.field0_0x0 == (UCurveFloat *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        FGCObject::RegisterGCObject((FGCObject *)&CurveFinder);
        CurveFinder.Object.field0_0x0 = (TObjectPtr<UCurveFloat>_u_0)(FObjectPtr)0x0;
        CurveFinder._padding_ =
             (longlong)&___7__FObjectFinder_VUCurveFloat___ConstructorHelpers__6B_;
        ConstructorHelpers::CheckIfIsInConstructor
                  (L"/Game/Datas/Curve/Construction/BuildingMovement.BuildingMovement");
        ::FString::FString(&local_18,
                           L"/Game/Datas/Curve/Construction/BuildingMovement.BuildingMovement");
        ConstructorHelpers::StripObjectClass(&local_18,true);
        TVar2.DebugPtr = ConstructorHelpersInternal::FindOrLoadObject<UCurveFloat>(&local_18,0);
        if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
           (TVar2.DebugPtr == (UCurveFloat *)0x0)) {
          CurveFinder.Object.field0_0x0 =
               (TObjectPtr<UCurveFloat>_u_0)(TObjectPtr<UCurveFloat>_u_0)TVar2.DebugPtr;
          if (TVar2.DebugPtr == (UCurveFloat *)0x0) {
            ConstructorHelpers::FailedToFind
                      (L"/Game/Datas/Curve/Construction/BuildingMovement.BuildingMovement");
          }
        }
        else {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
          CurveFinder.Object.field0_0x0 =
               (TObjectPtr<UCurveFloat>_u_0)(TObjectPtr<UCurveFloat>_u_0)TVar2.DebugPtr;
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        atexit(`ADS_BuildingActor::ADS_BuildingActor'::__l5::
               _dynamic_atexit_destructor_for__CurveFinder__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (CurveFinder.Object.field0_0x0 != (UCurveFloat *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)CurveFinder.Object.field0_0x0);
      }
      BuildingMovementCurve = CurveFinder.Object;
    }
  }
  return this;
}

// EnsureAllMIDs @ 14bbf0530

void __thiscall
ADS_BuildingActor::EnsureAllMIDs
          (ADS_BuildingActor *this,UStaticMeshComponent *param_1,
          TArray<TObjectPtr<UMaterialInstanceDynamic>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  UMaterialInterface *pUVar8;
  UClass *pUVar9;
  int iVar10;
  UMaterialInterface *local_38;
  UMaterialInterface *local_30;
  void *local_28 [2];
  
  if (param_1 != (UStaticMeshComponent *)0x0) {
    piVar1 = &param_2->ArrayMax;
    iVar10 = 0;
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
    lVar7 = (**(code **)(param_1->_padding_ + 0xa90))(param_1,local_28);
    uVar2 = *(uint *)(lVar7 + 8);
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
    }
    if (0 < (int)uVar2) {
      do {
        pUVar8 = UStaticMeshComponent::GetMaterial(param_1,iVar10);
        if (pUVar8 == (UMaterialInterface *)0x0) {
          pFVar3 = (param_2->AllocatorInstance).Data;
          local_38 = (UMaterialInterface *)0x0;
          if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
              ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)*piVar1 * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = param_2->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar6 + 1;
          *(UMaterialInterface **)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
               local_38;
          pUVar8 = local_38;
        }
        else {
          pUVar9 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
          iVar6 = (int)pUVar9->_padding_;
          if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar6) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
              &pUVar9->_padding_)) {
            pUVar8 = (UMaterialInterface *)
                     (**(code **)(param_1->_padding_ + 0x6d0))(param_1,iVar10,pUVar8);
          }
          local_30 = pUVar8;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar8 != (UMaterialInterface *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar8);
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_30) &&
              ((FScriptContainerElement *)&local_30 < pFVar3 + (longlong)*piVar1 * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = param_2->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar6 + 1;
          *(UMaterialInterface **)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
               local_30;
          pUVar8 = local_30;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar8 != (UMaterialInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar2);
    }
  }
  return;
}

// Init @ 14bbf8d30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_BuildingActor::Init(ADS_BuildingActor *this,FDS_BuildingInfo *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<TObjectPtr<UStaticMeshComponent>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TObjectPtr<UMaterialInstanceDynamic>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  UStaticMeshComponent *this_00;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  UClass *pUVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  float fVar15;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  TArray<TObjectPtr<UMaterialInstanceDynamic>,TSizedDefaultAllocator<32>_> local_58;
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_48;
  
  pTVar3 = &this->StaticMeshComps;
  piVar1 = &(this->StaticMeshComps).ArrayMax;
  (this->StaticMeshComps).ArrayNum = 0;
  if ((this->StaticMeshComps).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  pTVar4 = &this->MaterialInstanceDynamics;
  (this->MaterialInstanceDynamics).ArrayNum = 0;
  if ((this->MaterialInstanceDynamics).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar4->AllocatorInstance,0,&(this->MaterialInstanceDynamics).ArrayMax);
  }
  fVar15 = DS_CommonDataHelper::ConstructionTransitionTime();
  this->MoveAnimationDuration = fVar15;
  pTVar5 = &(this->Info).LocalIndices;
  (this->Info).Path = param_1->Path;
  *(undefined8 *)&(this->Info).Size.field0_0x0 = *(undefined8 *)&(param_1->Size).field0_0x0;
  (this->Info).Size.field0_0x0._s_0.Z = (param_1->Size).field0_0x0._s_0.Z;
  (this->Info).ConstructType = param_1->ConstructType;
  (this->Info).AttachableFaceType = param_1->AttachableFaceType;
  (this->Info).Rotation = param_1->Rotation;
  *(undefined8 *)&(this->Info).GridIndex.field0_0x0 =
       *(undefined8 *)&(param_1->GridIndex).field0_0x0;
  (this->Info).GridIndex.field0_0x0._s_0.Z = (param_1->GridIndex).field0_0x0._s_0.Z;
  (this->Info).CenterIndex = param_1->CenterIndex;
  if (pTVar5 != &param_1->LocalIndices) {
    iVar6 = (param_1->LocalIndices).ArrayNum;
    piVar2 = &(this->Info).LocalIndices.ArrayMax;
    pFVar7 = (param_1->LocalIndices).AllocatorInstance.Data;
    iVar11 = *piVar2;
    (this->Info).LocalIndices.ArrayNum = iVar6;
    if ((iVar6 == 0) && (iVar11 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar6,iVar11,&pTVar5->AllocatorInstance,iVar6,piVar2);
      if (iVar6 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0xc);
      }
    }
  }
  plVar8 = (longlong *)this->_padding_;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x5f8))(plVar8,2);
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    USceneComponent::GetChildrenComponents((USceneComponent *)this->_padding_,true,&local_48);
    iVar6 = local_48.ArrayNum;
    local_res10 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8;
    FVar13.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      pFVar7 = local_res10;
      if (local_48.ArrayNum != iVar6) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar13.Data == pFVar7) break;
      this_00 = *(UStaticMeshComponent **)FVar13.Data;
      if (this_00 != (UStaticMeshComponent *)0x0) {
        pUVar12 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
        iVar11 = (int)pUVar12->_padding_;
        if ((iVar11 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
            &pUVar12->_padding_)) {
          (**(code **)(this_00->_padding_ + 0x5f8))(this_00,2);
          UPrimitiveComponent::SetRenderCustomDepth((UPrimitiveComponent *)this_00,true);
          local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.ArrayNum = 0;
          local_58.ArrayMax = 0;
          EnsureAllMIDs(this,this_00,&local_58);
          if ((pTVar4 == &local_58) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x986,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar14 = (longlong)local_58.ArrayNum;
          if (local_58.ArrayNum != 0) {
            iVar11 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (8,8,local_58.ArrayNum,&pTVar4->AllocatorInstance,
                                &(this->MaterialInstanceDynamics).ArrayNum,
                                &(this->MaterialInstanceDynamics).ArrayMax);
            memmove((pTVar4->AllocatorInstance).Data + (longlong)iVar11 * 8,
                    local_58.AllocatorInstance.Data,lVar14 << 3);
            local_58._8_8_ = local_58._8_8_ & 0xffffffff00000000;
          }
          iVar11 = (this->StaticMeshComps).ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar3->AllocatorInstance,piVar1);
          }
          (this->StaticMeshComps).ArrayNum = iVar11 + 1;
          *(UStaticMeshComponent **)((pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 8) =
               this_00;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.AllocatorInstance.Data);
          }
        }
      }
      FVar13.Data = FVar13.Data + 8;
    }
    (**(code **)(this->_padding_ + 0x368))(this,1);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

// OnRotate @ 14bbfc0d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_BuildingActor::OnRotate(ADS_BuildingActor *this,bool *param_1)

{
  USceneComponent *this_00;
  int iVar1;
  TRotator<double> local_48 [3];
  
  this_00 = (USceneComponent *)this->_padding_;
  if (this_00 == (USceneComponent *)0x0) {
    return;
  }
  iVar1 = (this->Info).Rotation;
  if (*param_1 == false) {
    iVar1 = iVar1 + 1;
    (this->Info).Rotation = iVar1;
    if (iVar1 != 4) goto LAB_14bbfc114;
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + -1;
    (this->Info).Rotation = iVar1;
    if (iVar1 != -1) goto LAB_14bbfc114;
    iVar1 = 3;
  }
  (this->Info).Rotation = iVar1;
LAB_14bbfc114:
  local_48[0].Pitch = (this_00->RelativeRotation).Pitch;
  local_48[0].Roll = (this_00->RelativeRotation).Roll;
  local_48[0].Yaw = (double)(iVar1 * 0x5a);
  USceneComponent::SetRelativeRotation(this_00,local_48,false,(FHitResult *)0x0,None);
  return;
}

// SetConstruct @ 14bc1e850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_BuildingActor::SetConstruct(ADS_BuildingActor *this,bool *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  if ((this->IsMoveAnimation != false) && (*param_1 != false)) {
    this->IsConstructWaiting = *param_1;
    return;
  }
  AActor::SetActorEnableCollision((AActor *)this,*param_1);
  (**(code **)(this->_padding_ + 0x368))(this,*param_1 == false);
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (*param_1 == false) {
    (this->StartLocation).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->StartLocation).field0_0x0._s_0.Y = (double)uVar4;
    (this->StartLocation).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return;
  }
  if (((this->Info).ConstructType == FitBoxel) &&
     (plVar3 = (longlong *)this->_padding_, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x5f8))(plVar3,0);
    pFVar5 = (this->StaticMeshComps).AllocatorInstance.Data;
    iVar2 = (this->StaticMeshComps).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->StaticMeshComps).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UStaticMeshComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar1) break;
      plVar3 = *(longlong **)pFVar5;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x5f8))(plVar3,0);
      }
      pFVar5 = pFVar5 + 8;
    }
  }
  return;
}

// SetLocation @ 14bc1ecf0

void __thiscall ADS_BuildingActor::SetLocation(ADS_BuildingActor *this,TVector<double> *param_1)

{
  longlong lVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  dVar2 = (this->StartLocation).field0_0x0._s_0.X -
          UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar3 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar4 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar4,uVar3) &&
        (double)CONCAT44(uVar4,uVar3) != __real_3f1a36e2e0000000) ||
      (dVar2 = (this->StartLocation).field0_0x0._s_0.Y -
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
      uVar3 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar4 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar4,uVar3) &&
      (double)CONCAT44(uVar4,uVar3) != __real_3f1a36e2e0000000)) ||
     (dVar2 = (this->StartLocation).field0_0x0._s_0.Z -
              UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar3 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar4 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar4,uVar3) &&
     (double)CONCAT44(uVar4,uVar3) != __real_3f1a36e2e0000000)) {
    lVar1 = this->_padding_;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (lVar1 != 0) {
      uVar7 = *(double *)(lVar1 + 0x220);
      uVar5 = *(double *)(lVar1 + 0x210);
      uVar6 = *(double *)(lVar1 + 0x218);
    }
    (this->StartLocation).field0_0x0._s_0.X = (double)uVar5;
    (this->StartLocation).field0_0x0._s_0.Y = (double)uVar6;
    (this->StartLocation).field0_0x0._s_0.Z = (double)uVar7;
  }
  else {
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    (this->StartLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->StartLocation).field0_0x0._s_0.Y = dVar2;
    (this->StartLocation).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  }
  this->IsMoveAnimation = true;
  this->ElapsedTime = 0.0;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (this->EndLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->EndLocation).field0_0x0._s_0.Y = dVar2;
  (this->EndLocation).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// SetMaterialParameter @ 14bc1edd0

void __thiscall
ADS_BuildingActor::SetMaterialParameter(ADS_BuildingActor *this,FLinearColor *param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMaterialInstanceDynamic *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FLinearColor_u_0 local_38 [2];
  
  pFVar3 = (this->MaterialInstanceDynamics).AllocatorInstance.Data;
  iVar2 = (this->MaterialInstanceDynamics).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MaterialInstanceDynamics).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMaterialInstanceDynamic>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    this_00 = *(UMaterialInstanceDynamic **)pFVar3;
    if (this_00 != (UMaterialInstanceDynamic *)0x0) {
      local_38[0]._0_8_ = *(undefined8 *)&param_1->field0_0x0;
      local_38[0]._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (this_00,this->AlbedoTintName,(FLinearColor *)&local_38[0]._s_0);
      UMaterialInstanceDynamic::SetScalarParameterValue(this_00,this->MaskName,param_2);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// SetPreview @ 14bc1f120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_BuildingActor::SetPreview(ADS_BuildingActor *this)

{
  AActor::SetActorEnableCollision((AActor *)this,false);
                    /* WARNING: Could not recover jumptable at 0x00014bc1f13d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x368))(this,0);
  return;
}

// Tick @ 14bc1fc60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_BuildingActor::Tick(ADS_BuildingActor *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  double dVar8;
  float fVar9;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_38 [2];
  
  AActor::Tick((AActor *)this,param_1);
  if (this->IsMoveAnimation != false) {
    fVar9 = param_1 + this->ElapsedTime;
    this->ElapsedTime = fVar9;
    fVar9 = fVar9 / this->MoveAnimationDuration;
    if (__real_3f800000 <= fVar9) {
      fVar9 = __real_3f800000;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    if (fVar9 < __real_3f800000) {
      if (BuildingMovementCurve.field0_0x0 != (UCurveFloat *)0x0) {
        fVar9 = UCurveFloat::GetFloatValue((UCurveFloat *)BuildingMovementCurve.field0_0x0,fVar9);
      }
      dVar2 = (this->StartLocation).field0_0x0._s_0.X;
      dVar3 = (this->StartLocation).field0_0x0._s_0.Y;
      dVar4 = (this->StartLocation).field0_0x0._s_0.Z;
      dVar8 = (double)fVar9;
      local_38[0]._0_8_ = ((this->EndLocation).field0_0x0._s_0.X - dVar2) * dVar8 + dVar2;
      local_38[0]._8_8_ = ((this->EndLocation).field0_0x0._s_0.Y - dVar3) * dVar8 + dVar3;
      local_38[0]._16_8_ = ((this->EndLocation).field0_0x0._s_0.Z - dVar4) * dVar8 + dVar4;
      AActor::SetActorLocation
                ((AActor *)this,(TVector<double> *)&local_38[0]._s_0,false,(FHitResult *)0x0,None);
      return;
    }
    this->IsMoveAnimation = false;
    AActor::SetActorLocation((AActor *)this,&this->EndLocation,false,(FHitResult *)0x0,None);
    if (this->IsConstructWaiting != false) {
      this->IsConstructWaiting = false;
      if (this->IsMoveAnimation != false) {
        this->IsConstructWaiting = true;
        return;
      }
      AActor::SetActorEnableCollision((AActor *)this,true);
      (**(code **)(this->_padding_ + 0x368))(this,0);
      if (((this->Info).ConstructType == FitBoxel) &&
         (plVar6 = (longlong *)this->_padding_, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x5f8))(plVar6,0);
        pFVar7 = (this->StaticMeshComps).AllocatorInstance.Data;
        iVar5 = (this->StaticMeshComps).ArrayNum;
        pFVar1 = pFVar7 + (longlong)iVar5 * 8;
        while( true ) {
          if ((this->StaticMeshComps).ArrayNum != iVar5) {
            `TCheckedPointerIterator<TObjectPtr<UStaticMeshComponent>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (pFVar7 == pFVar1) break;
          plVar6 = *(longlong **)pFVar7;
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x5f8))(plVar6,0);
          }
          pFVar7 = pFVar7 + 8;
        }
      }
    }
  }
  return;
}

