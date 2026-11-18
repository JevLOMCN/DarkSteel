// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cbfdaf0

UClass * __cdecl URevolveOperatorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URevolveOperatorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RevolveOperatorFactory",
               &Z_Registration_Info_UClass_URevolveOperatorFactory.InnerSingleton,
               StaticRegisterNativesURevolveOperatorFactory,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URevolveOperatorFactory>,
               InternalVTableHelperCtorCaller<URevolveOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URevolveOperatorFactory.InnerSingleton;
}

// URevolveOperatorFactory @ 14cc20120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

URevolveOperatorFactory * __thiscall
URevolveOperatorFactory::URevolveOperatorFactory
          (URevolveOperatorFactory *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->RevolveTool).field0_0x0.DebugPtr = (UDrawAndRevolveTool *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  return this;
}

// URevolveOperatorFactory @ 14cc20160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

URevolveOperatorFactory * __thiscall
URevolveOperatorFactory::URevolveOperatorFactory
          (URevolveOperatorFactory *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->RevolveTool).field0_0x0.DebugPtr = (UDrawAndRevolveTool *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  return this;
}

// ~URevolveOperatorFactory @ 14cc233f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall URevolveOperatorFactory::~URevolveOperatorFactory(URevolveOperatorFactory *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5d7f0

UClass * __cdecl URevolveOperatorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URevolveOperatorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RevolveOperatorFactory",
               &Z_Registration_Info_UClass_URevolveOperatorFactory.InnerSingleton,
               StaticRegisterNativesURevolveOperatorFactory,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URevolveOperatorFactory>,
               InternalVTableHelperCtorCaller<URevolveOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URevolveOperatorFactory.InnerSingleton;
}

// MakeNewOperator @ 14cc64600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall URevolveOperatorFactory::MakeNewOperator(URevolveOperatorFactory *this)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  FCurveSweepOp *this_00;
  FCurveSweepOp *pFVar11;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  TVar12;
  longlong lVar13;
  uint uVar14;
  FDynamicMeshOperator *in_RDX;
  uint uVar15;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_80;
  double local_68;
  
  this_00 = ::operator_new(0x150);
  pFVar11 = (FCurveSweepOp *)0x0;
  if (this_00 != (FCurveSweepOp *)0x0) {
    memset(this_00,0,0x150);
    pFVar11 = UE::Geometry::FCurveSweepOp::FCurveSweepOp(this_00);
  }
  pTVar2 = &pFVar11->ProfileCurve;
  uVar15 = *(int *)(*(longlong *)(this->_padding_ + 0x1a0) + 0xd0) + 2;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  piVar1 = &(pFVar11->ProfileCurve).ArrayMax;
  if ((pFVar11->ProfileCurve).ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar15,&pTVar2->AllocatorInstance,(pFVar11->ProfileCurve).ArrayNum,piVar1);
  }
  UCurveControlPointsMechanic::ExtractPointPositions
            (*(UCurveControlPointsMechanic **)(this->_padding_ + 0x1a0),pTVar2);
  bVar9 = *(bool *)(*(longlong *)(this->_padding_ + 0x1a0) + 0x128);
  pFVar11->bProfileCurveIsClosed = bVar9;
  if ((bVar9 == false) && (*(char *)(*(longlong *)(this->_padding_ + 0x1b8) + 0x121) != '\0')) {
    if (((pFVar11->ProfileCurve).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (FDynamicMeshOperator *)(*pcVar5)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar12.Ptr;
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    iVar10 = (pFVar11->ProfileCurve).ArrayNum;
    local_80 = *(double *)(pFVar3 + 0x10);
    dVar6 = *(double *)pFVar3;
    dVar8 = *(double *)(pFVar3 + 8);
    uVar14 = iVar10 - 1;
    uVar15 = 0;
    if ((int)uVar14 < iVar10) {
      uVar15 = ~uVar14 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (FDynamicMeshOperator *)(*pcVar5)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar12.Ptr;
    }
    lVar13 = (longlong)(pFVar11->ProfileCurve).ArrayNum;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    pFVar3 = pFVar4 + lVar13 * 0x18 + -0x18;
    local_68 = *(double *)(pFVar4 + lVar13 * 0x18 + -8);
    lVar13 = this->_padding_;
    dVar7 = (*(double *)(pFVar3 + 8) - *(double *)(lVar13 + 0x138)) * *(double *)(lVar13 + 0x150) +
            (*(double *)pFVar3 - *(double *)(lVar13 + 0x130)) * *(double *)(lVar13 + 0x148) +
            (local_68 - *(double *)(lVar13 + 0x140)) * *(double *)(lVar13 + 0x158);
    local_a8 = dVar7 * *(double *)(lVar13 + 0x148) + *(double *)(lVar13 + 0x130);
    dStack_a0 = dVar7 * *(double *)(lVar13 + 0x150) + *(double *)(lVar13 + 0x138);
    local_98 = dVar7 * *(double *)(lVar13 + 0x158) + *(double *)(lVar13 + 0x140);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 < pFVar3 + (longlong)*piVar1 * 0x18)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (FDynamicMeshOperator *)(*pcVar5)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar12.Ptr;
    }
    iVar10 = (pFVar11->ProfileCurve).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar2->AllocatorInstance,piVar1);
    }
    (pFVar11->ProfileCurve).ArrayNum = iVar10 + 1;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    pFVar3 = pFVar4 + (longlong)iVar10 * 0x18;
    *(double *)pFVar3 = local_a8;
    *(double *)(pFVar3 + 8) = dStack_a0;
    *(double *)(pFVar4 + (longlong)iVar10 * 0x18 + 0x10) = local_98;
    lVar13 = this->_padding_;
    dVar6 = (dVar8 - *(double *)(lVar13 + 0x138)) * *(double *)(lVar13 + 0x150) +
            (dVar6 - *(double *)(lVar13 + 0x130)) * *(double *)(lVar13 + 0x148) +
            (local_80 - *(double *)(lVar13 + 0x140)) * *(double *)(lVar13 + 0x158);
    local_a8 = dVar6 * *(double *)(lVar13 + 0x148) + *(double *)(lVar13 + 0x130);
    local_98 = dVar6 * *(double *)(lVar13 + 0x158) + *(double *)(lVar13 + 0x140);
    dStack_a0 = dVar6 * *(double *)(lVar13 + 0x150) + *(double *)(lVar13 + 0x138);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 < pFVar3 + (longlong)*piVar1 * 0x18)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (FDynamicMeshOperator *)(*pcVar5)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar12.Ptr;
    }
    iVar10 = (pFVar11->ProfileCurve).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar2->AllocatorInstance,piVar1);
    }
    (pFVar11->ProfileCurve).ArrayNum = iVar10 + 1;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    pFVar3 = pFVar4 + (longlong)iVar10 * 0x18;
    *(double *)pFVar3 = local_a8;
    *(double *)(pFVar3 + 8) = dStack_a0;
    *(double *)(pFVar4 + (longlong)iVar10 * 0x18 + 0x10) = local_98;
    pFVar11->bProfileCurveIsClosed = true;
  }
  lVar13 = this->_padding_;
  URevolveProperties::ApplyToCurveSweepOp
            (*(URevolveProperties **)(lVar13 + 0x1b8),
             *(UNewMeshMaterialProperties **)(lVar13 + 0x1c0),(TVector<double> *)(lVar13 + 0x130),
             (TVector<double> *)(lVar13 + 0x148),pFVar11);
  in_RDX->_padding_ = (longlong)pFVar11;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// StaticRegisterNativesURevolveOperatorFactory @ 14cc826a0

void __cdecl URevolveOperatorFactory::StaticRegisterNativesURevolveOperatorFactory(void)

{
  return;
}

