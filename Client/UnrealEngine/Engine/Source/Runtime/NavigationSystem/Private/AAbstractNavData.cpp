// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 29

// StaticClass @ 146d610a0

UClass * __cdecl AAbstractNavData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAbstractNavData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"AbstractNavData",
               &Z_Registration_Info_UClass_AAbstractNavData.InnerSingleton,
               StaticRegisterNativesAAbstractNavData,0x518,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<AAbstractNavData>,
               InternalVTableHelperCtorCaller<AAbstractNavData>,local_res8,
               ANavigationData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAbstractNavData.InnerSingleton;
}

// AAbstractNavData @ 146d71f30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AAbstractNavData * __thiscall
AAbstractNavData::AAbstractNavData(AAbstractNavData *this,FVTableHelper *param_1)

{
  ANavigationData::ANavigationData((ANavigationData *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavigationDataInterface__;
  return this;
}

// AAbstractNavData @ 146d71f70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AAbstractNavData * __thiscall
AAbstractNavData::AAbstractNavData(AAbstractNavData *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  AAbstractNavData *pAVar4;
  TRawPtrProxy<FAbstractQueryFilter> local_res8;
  
  ANavigationData::ANavigationData((ANavigationData *)this,param_1);
  *(uint *)&this->field_0x358 = *(uint *)&this->field_0x358 & 0xffffffe7;
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavigationDataInterface__;
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    *(code **)&this->field_0x368 = FindPathAbstract;
    *(code **)&this->field_0x370 = FindPathAbstract;
    *(code **)&this->field_0x378 = TestPathAbstract;
    *(code **)&this->field_0x380 = TestPathAbstract;
    *(code **)&this->field_0x390 = RaycastAbstract;
    if (*(longlong *)&this->field_0x418 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pAVar4 = (AAbstractNavData *)(*pcVar2)();
        return pAVar4;
      }
    }
    lVar1 = *(longlong *)&this->field_0x418;
    local_res8.Object = ::operator_new(8);
    if (local_res8.Object != (FAbstractQueryFilter *)0x0) {
      *local_res8.Object = (FAbstractQueryFilter)&___7FAbstractQueryFilter__6B_;
    }
    TSharedPtr<INavigationQueryFilterInterface,1>::operator=<FAbstractQueryFilter>
              ((TSharedPtr<INavigationQueryFilterInterface,1> *)(lVar1 + 0x10),&local_res8);
  }
  return this;
}

// ~AAbstractNavData @ 146d77ef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAbstractNavData::~AAbstractNavData(AAbstractNavData *this)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavigationDataInterface__;
  ANavigationData::~ANavigationData((ANavigationData *)this);
  return;
}

// BatchProjectPoints @ 146d850a0

void __thiscall
AAbstractNavData::BatchProjectPoints
          (AAbstractNavData *this,
          TArray<FNavigationProjectionWork,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2,TSharedPtr<FNavigationQueryFilter_const_,1> *param_3,
          UObject *param_4)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// BatchProjectPoints @ 146d850b0

void __thiscall
AAbstractNavData::BatchProjectPoints
          (AAbstractNavData *this,
          TArray<FNavigationProjectionWork,TSizedDefaultAllocator<32>_> *param_1,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_2,UObject *param_3)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// BatchRaycast @ 146d85140

void __thiscall
AAbstractNavData::BatchRaycast
          (AAbstractNavData *this,
          TArray<FNavigationRaycastWork,TSizedDefaultAllocator<32>_> *param_1,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_2,UObject *param_3)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// CalcPathCost @ 146d85d20

Type __thiscall
AAbstractNavData::CalcPathCost
          (AAbstractNavData *this,TVector<double> *param_1,TVector<double> *param_2,double *param_3,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,UObject *param_5)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return Invalid;
}

// CalcPathLength @ 146d85d80

Type __thiscall
AAbstractNavData::CalcPathLength
          (AAbstractNavData *this,TVector<double> *param_1,TVector<double> *param_2,double *param_3,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,UObject *param_5)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return Invalid;
}

// CalcPathLengthAndCost @ 146d85de0

Type __thiscall
AAbstractNavData::CalcPathLengthAndCost
          (AAbstractNavData *this,TVector<double> *param_1,TVector<double> *param_2,double *param_3,
          double *param_4,TSharedPtr<FNavigationQueryFilter_const_,1> *param_5,UObject *param_6)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  return Invalid;
}

// DoesNodeContainLocation @ 146d91760

bool __thiscall
AAbstractNavData::DoesNodeContainLocation
          (AAbstractNavData *this,ulong64 param_1,TVector<double> *param_2)

{
  return true;
}

// FindMoveAlongSurface @ 146d95a90

bool __thiscall
AAbstractNavData::FindMoveAlongSurface
          (AAbstractNavData *this,FNavLocation *param_1,TVector<double> *param_2,
          FNavLocation *param_3,TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,
          UObject *param_5)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return false;
}

// FindOverlappingEdges @ 146d95be0

bool __thiscall
AAbstractNavData::FindOverlappingEdges
          (AAbstractNavData *this,FNavLocation *param_1,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,UObject *param_5)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return false;
}

// FindPathAbstract @ 146d95c40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPathFindingResult * __cdecl
AAbstractNavData::FindPathAbstract
          (FPathFindingResult *__return_storage_ptr__,FNavAgentProperties *param_1,
          FPathFindingQuery *param_2)

{
  TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ANavigationData *this;
  TSharedPtr<FNavigationPath,1> *pTVar7;
  FPathFindingResult *pFVar8;
  longlong lVar9;
  FNavigationPath *pFVar10;
  TSharedPtr<FNavigationPath,1> local_b8;
  undefined4 local_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  TSharedPtr<FNavigationPath,1> local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  
  this = (ANavigationData *)FWeakObjectPtr::Get(&(param_2->NavData).WeakPtr);
  if (this == (ANavigationData *)0x0) {
    (__return_storage_ptr__->Path).Object = (FNavigationPath *)0x0;
    (__return_storage_ptr__->Path).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Result = Error;
  }
  else {
    pFVar10 = (param_2->PathInstanceToFill).Object;
    local_b8.Object = (FNavigationPath *)0x0;
    local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_a8 = 0;
    if (pFVar10 == (FNavigationPath *)0x0) {
      pTVar7 = ANavigationData::CreatePathInstance<FAbstractNavigationPath>
                         (this,&local_40,(FPathFindingQueryData *)param_2);
      pFVar10 = (FNavigationPath *)0x0;
      if (&local_b8 != pTVar7) {
        local_b8.Object = pTVar7->Object;
        pTVar7->Object = (FNavigationPath *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_b8.SharedReferenceCount,&pTVar7->SharedReferenceCount);
        pFVar10 = local_b8.Object;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.SharedReferenceCount.ReferenceController);
    }
    else {
      local_b8.SharedReferenceCount.ReferenceController =
           (param_2->PathInstanceToFill).SharedReferenceCount.ReferenceController;
      if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_30 = 0;
      uStack_28 = 0;
      local_b8.Object = pFVar10;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      (**(code **)(pFVar10->_padding_ + 8))(pFVar10);
    }
    if (pFVar10 == (FNavigationPath *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FPathFindingResult *)(*pcVar4)();
        return pFVar8;
      }
    }
    (pFVar10->PathPoints).ArrayNum = 0;
    if ((pFVar10->PathPoints).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(pFVar10->PathPoints).AllocatorInstance,0,&(pFVar10->PathPoints).ArrayMax
                );
    }
    pFVar10 = local_b8.Object;
    if (local_b8.Object == (FNavigationPath *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FPathFindingResult *)(*pcVar4)();
        return pFVar8;
      }
    }
    local_a0 = param_2->_padding_;
    lStack_98 = param_2->_padding_;
    pTVar1 = &pFVar10->PathPoints;
    uStack_88 = 0;
    local_90 = param_2->_padding_;
    local_80 = 0;
    uStack_78 = 0;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_a0) &&
       ((FScriptContainerElement *)&local_a0 <
        pFVar3 + (longlong)(pFVar10->PathPoints).ArrayMax * 0x30)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FPathFindingResult *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar6 = (pFVar10->PathPoints).ArrayNum;
    piVar2 = &(pFVar10->PathPoints).ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,piVar2);
    }
    lVar9 = (longlong)iVar6;
    (pFVar10->PathPoints).ArrayNum = iVar6 + 1;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    *(longlong *)(pFVar3 + lVar9 * 0x30) = local_a0;
    *(longlong *)(pFVar3 + lVar9 * 0x30 + 8) = lStack_98;
    *(longlong *)(pFVar3 + lVar9 * 0x30 + 0x10) = local_90;
    *(undefined8 *)(pFVar3 + lVar9 * 0x30 + 0x10 + 8) = uStack_88;
    *(undefined8 *)(pFVar3 + lVar9 * 0x30 + 0x20) = local_80;
    *(undefined8 *)(pFVar3 + lVar9 * 0x30 + 0x20 + 8) = uStack_78;
    if (pFVar10 == (FNavigationPath *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FPathFindingResult *)(*pcVar4)();
        return pFVar8;
      }
    }
    local_70 = param_2->_padding_;
    lStack_68 = param_2->_padding_;
    pTVar1 = &pFVar10->PathPoints;
    uStack_58 = 0;
    local_60 = param_2->_padding_;
    local_50 = 0;
    uStack_48 = 0;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_70) &&
       ((FScriptContainerElement *)&local_70 <
        pFVar3 + (longlong)(pFVar10->PathPoints).ArrayMax * 0x30)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FPathFindingResult *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar6 = (pFVar10->PathPoints).ArrayNum;
    piVar2 = &(pFVar10->PathPoints).ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,piVar2);
    }
    lVar9 = (longlong)iVar6;
    (pFVar10->PathPoints).ArrayNum = iVar6 + 1;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    *(longlong *)(pFVar3 + lVar9 * 0x30) = local_70;
    *(longlong *)(pFVar3 + lVar9 * 0x30 + 8) = lStack_68;
    *(longlong *)(pFVar3 + lVar9 * 0x30 + 0x10) = local_60;
    *(undefined8 *)(pFVar3 + lVar9 * 0x30 + 0x10 + 8) = uStack_58;
    *(undefined8 *)(pFVar3 + lVar9 * 0x30 + 0x20) = local_50;
    *(undefined8 *)(pFVar3 + lVar9 * 0x30 + 0x20 + 8) = uStack_48;
    if (pFVar10 == (FNavigationPath *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FPathFindingResult *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar10->bIsReady = 1;
    (__return_storage_ptr__->Path).SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->Path).Object = pFVar10;
    __return_storage_ptr__->Result = Success;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  return __return_storage_ptr__;
}

// GetBounds @ 146d99ef0

TBox<double> * __thiscall
AAbstractNavData::GetBounds(AAbstractNavData *this,TBox<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  return __return_storage_ptr__;
}

// GetPathSegmentBoundaryEdges @ 146d9fac0

bool __thiscall
AAbstractNavData::GetPathSegmentBoundaryEdges
          (AAbstractNavData *this,FNavigationPath *param_1,FNavPathPoint *param_2,
          FNavPathPoint *param_3,TArrayView<UE::Math::TVector<double>_const_,int> *param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5,float param_6,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_7,UObject *param_8)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_7->SharedReferenceCount).ReferenceController);
  return false;
}

// GetPrivateStaticClass @ 146d9fc10

UClass * __cdecl AAbstractNavData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAbstractNavData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"AbstractNavData",
               &Z_Registration_Info_UClass_AAbstractNavData.InnerSingleton,
               StaticRegisterNativesAAbstractNavData,0x518,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<AAbstractNavData>,
               InternalVTableHelperCtorCaller<AAbstractNavData>,local_res8,
               ANavigationData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAbstractNavData.InnerSingleton;
}

// GetRandomPoint @ 146da15c0

FNavLocation * __thiscall
AAbstractNavData::GetRandomPoint
          (AAbstractNavData *this,FNavLocation *__return_storage_ptr__,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_1,UObject *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  __return_storage_ptr__->NodeRef = 0;
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = (double)uVar2;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = (double)uVar3;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRandomPointInNavigableRadius @ 146da1a40

bool __thiscall
AAbstractNavData::GetRandomPointInNavigableRadius
          (AAbstractNavData *this,TVector<double> *param_1,float param_2,FNavLocation *param_3,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,UObject *param_5)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return false;
}

// GetRandomReachablePointInRadius @ 146da1d90

bool __thiscall
AAbstractNavData::GetRandomReachablePointInRadius
          (AAbstractNavData *this,TVector<double> *param_1,float param_2,FNavLocation *param_3,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,UObject *param_5)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return false;
}

// IsNodeRefValid @ 146da50a0

bool __thiscall AAbstractNavData::IsNodeRefValid(AAbstractNavData *this,ulong64 param_1)

{
  return true;
}

// OnNavAreaAdded @ 146da83b0

void __thiscall AAbstractNavData::OnNavAreaAdded(AAbstractNavData *this,UClass *param_1,int param_2)

{
  return;
}

// OnNavAreaRemoved @ 146da8e90

void __thiscall AAbstractNavData::OnNavAreaRemoved(AAbstractNavData *this,UClass *param_1)

{
  return;
}

// PostLoad @ 146dac2a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AAbstractNavData::PostLoad(AAbstractNavData *this)

{
  bool bVar1;
  
  AActor::PostLoad((AActor *)this);
  ANavigationData::InstantiateAndRegisterRenderingComponent((ANavigationData *)this);
  bVar1 = FNavigationSystem::ShouldLoadNavigationOnClient((ANavigationData *)this);
  this->field_0x59 = this->field_0x59 & 0xf7;
  this->field_0x59 = this->field_0x59 | bVar1 << 3;
  ANavigationData::RequestRegistration((ANavigationData *)this);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transient);
  UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this);
  return;
}

// ProjectPoint @ 146dacf90

bool __thiscall
AAbstractNavData::ProjectPoint
          (AAbstractNavData *this,TVector<double> *param_1,FNavLocation *param_2,
          TVector<double> *param_3,TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,
          UObject *param_5)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return false;
}

// RaycastAbstract @ 146dad790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
AAbstractNavData::RaycastAbstract
          (ANavigationData *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,FNavigationRaycastAdditionalResults *param_5,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_6,UObject *param_7)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  return false;
}

// RaycastAbstract @ 146dad7b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
AAbstractNavData::RaycastAbstract
          (ANavigationData *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TSharedPtr<FNavigationQueryFilter_const_,1> *param_5,
          UObject *param_6)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_5->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  return false;
}

// StaticRegisterNativesAAbstractNavData @ 146dba8b0

void __cdecl AAbstractNavData::StaticRegisterNativesAAbstractNavData(void)

{
  return;
}

// TestPathAbstract @ 146dbabc0

bool __cdecl
AAbstractNavData::TestPathAbstract
          (FNavAgentProperties *param_1,FPathFindingQuery *param_2,int *param_3)

{
  return false;
}

