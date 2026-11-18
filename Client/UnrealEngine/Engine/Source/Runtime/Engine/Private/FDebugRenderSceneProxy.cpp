// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FDebugRenderSceneProxy @ 147abaed0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDebugRenderSceneProxy * __thiscall
FDebugRenderSceneProxy::FDebugRenderSceneProxy
          (FDebugRenderSceneProxy *this,FDebugRenderSceneProxy *param_1)

{
  int *piVar1;
  TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FDebugRenderSceneProxy::FDashedLine,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FDebugRenderSceneProxy::FArrowLine,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FDebugRenderSceneProxy::FCircle,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FDebugRenderSceneProxy::FWireCylinder,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FDebugRenderSceneProxy::FWireStar,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FDebugRenderSceneProxy::FDebugBox,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FDebugRenderSceneProxy::FCone,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FDebugRenderSceneProxy::FMesh,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<FDebugRenderSceneProxy::FCapsule,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<FDebugRenderSceneProxy::FCoordinateSystem,TSizedDefaultAllocator<32>_> *pTVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  FText3d *pFVar17;
  FMesh *pFVar18;
  
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(FPrimitiveSceneProxy *)param_1);
  pTVar2 = &this->Lines;
  this->_padding_ = (longlong)&___7FDebugRenderSceneProxy__6B_;
  piVar1 = &(this->Lines).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar15 = (param_1->Lines).ArrayNum;
  pFVar16 = (param_1->Lines).AllocatorInstance.Data;
  (this->Lines).ArrayNum = iVar15;
  if (iVar15 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar15,0,&pTVar2->AllocatorInstance,iVar15,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar16,(longlong)iVar15 * 0x38);
  }
  pTVar3 = &this->DashedLines;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->DashedLines).ArrayMax;
  iVar15 = (param_1->DashedLines).ArrayNum;
  pFVar16 = (param_1->DashedLines).AllocatorInstance.Data;
  (this->DashedLines).ArrayNum = iVar15;
  if (iVar15 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar15,0,&pTVar3->AllocatorInstance,iVar15,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar16,(longlong)iVar15 * 0x38);
  }
  pTVar4 = &this->ArrowLines;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ArrowLines).ArrayMax;
  iVar15 = (param_1->ArrowLines).ArrayNum;
  pFVar16 = (param_1->ArrowLines).AllocatorInstance.Data;
  (this->ArrowLines).ArrayNum = iVar15;
  if (iVar15 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar15,0,&pTVar4->AllocatorInstance,iVar15,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar16,(longlong)iVar15 * 0x38);
  }
  pTVar5 = &this->Circles;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Circles).ArrayMax;
  iVar15 = (param_1->Circles).ArrayNum;
  pFVar16 = (param_1->Circles).AllocatorInstance.Data;
  (this->Circles).ArrayNum = iVar15;
  if (iVar15 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar15,0,&pTVar5->AllocatorInstance,iVar15,piVar1);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar16,(longlong)iVar15 << 6);
  }
  pTVar6 = &this->Cylinders;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Cylinders).ArrayMax;
  iVar15 = (param_1->Cylinders).ArrayNum;
  pFVar16 = (param_1->Cylinders).AllocatorInstance.Data;
  (this->Cylinders).ArrayNum = iVar15;
  if (iVar15 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar15,0,&pTVar6->AllocatorInstance,iVar15,piVar1);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar16,(longlong)iVar15 * 0x48);
  }
  pTVar7 = &this->Stars;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Stars).ArrayMax;
  iVar15 = (param_1->Stars).ArrayNum;
  pFVar16 = (param_1->Stars).AllocatorInstance.Data;
  (this->Stars).ArrayNum = iVar15;
  if (iVar15 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar15,0,&pTVar7->AllocatorInstance,iVar15,piVar1);
    memcpy((pTVar7->AllocatorInstance).Data,pFVar16,(longlong)iVar15 << 5);
  }
  pTVar8 = &this->Boxes;
  (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Boxes).ArrayMax;
  iVar15 = (param_1->Boxes).ArrayNum;
  pFVar16 = (param_1->Boxes).AllocatorInstance.Data;
  (this->Boxes).ArrayNum = iVar15;
  if (iVar15 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,iVar15,0,&pTVar8->AllocatorInstance,iVar15,piVar1);
    memcpy((pTVar8->AllocatorInstance).Data,pFVar16,(longlong)iVar15 * 0xb0);
  }
  pTVar9 = &this->Spheres;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Spheres).ArrayMax;
  iVar15 = (param_1->Spheres).ArrayNum;
  pFVar16 = (param_1->Spheres).AllocatorInstance.Data;
  (this->Spheres).ArrayNum = iVar15;
  if (iVar15 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar15,0,&pTVar9->AllocatorInstance,iVar15,piVar1);
    memcpy((pTVar9->AllocatorInstance).Data,pFVar16,(longlong)iVar15 * 0x28);
  }
  pTVar10 = &this->Texts;
  (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Texts).ArrayMax;
  iVar15 = (param_1->Texts).ArrayNum;
  pFVar17 = (FText3d *)(param_1->Texts).AllocatorInstance.Data;
  (this->Texts).ArrayNum = iVar15;
  if (iVar15 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar15,0,&pTVar10->AllocatorInstance,iVar15,piVar1);
    ConstructItems<FDebugRenderSceneProxy::FText3d,FDebugRenderSceneProxy::FText3d,int>
              ((pTVar10->AllocatorInstance).Data,pFVar17,iVar15);
  }
  pTVar11 = &this->Cones;
  (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Cones).ArrayMax;
  iVar15 = (param_1->Cones).ArrayNum;
  pFVar16 = (param_1->Cones).AllocatorInstance.Data;
  (this->Cones).ArrayNum = iVar15;
  if (iVar15 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,0x10,iVar15,0,&pTVar11->AllocatorInstance,iVar15,piVar1);
    memcpy((pTVar11->AllocatorInstance).Data,pFVar16,(longlong)iVar15 * 0xa0);
  }
  pTVar12 = &this->Meshes;
  (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Meshes).ArrayMax;
  iVar15 = (param_1->Meshes).ArrayNum;
  pFVar18 = (FMesh *)(param_1->Meshes).AllocatorInstance.Data;
  (this->Meshes).ArrayNum = iVar15;
  if (iVar15 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,iVar15,0,&pTVar12->AllocatorInstance,iVar15,piVar1);
    ConstructItems<FDebugRenderSceneProxy::FMesh,FDebugRenderSceneProxy::FMesh,int>
              ((pTVar12->AllocatorInstance).Data,pFVar18,iVar15);
  }
  pTVar13 = &this->Capsules;
  (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Capsules).ArrayMax;
  iVar15 = (param_1->Capsules).ArrayNum;
  pFVar16 = (param_1->Capsules).AllocatorInstance.Data;
  (this->Capsules).ArrayNum = iVar15;
  if (iVar15 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,iVar15,0,&pTVar13->AllocatorInstance,iVar15,piVar1);
    memcpy((pTVar13->AllocatorInstance).Data,pFVar16,(longlong)iVar15 << 7);
  }
  pTVar14 = &this->CoordinateSystems;
  (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CoordinateSystems).ArrayMax;
  iVar15 = (param_1->CoordinateSystems).ArrayNum;
  pFVar16 = (param_1->CoordinateSystems).AllocatorInstance.Data;
  (this->CoordinateSystems).ArrayNum = iVar15;
  if (iVar15 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar15,0,&pTVar14->AllocatorInstance,iVar15,piVar1);
    memcpy((pTVar14->AllocatorInstance).Data,pFVar16,(longlong)iVar15 << 6);
  }
  this->ViewFlagIndex = param_1->ViewFlagIndex;
  this->TextWithoutShadowDistance = param_1->TextWithoutShadowDistance;
  ::FString::FString(&this->ViewFlagName,&param_1->ViewFlagName);
  TDelegate<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
            (&this->DebugTextDrawingDelegate,&param_1->DebugTextDrawingDelegate);
  (this->DebugTextDrawingDelegateHandle).ID = (param_1->DebugTextDrawingDelegateHandle).ID;
  this->DrawType = param_1->DrawType;
  this->DrawAlpha = param_1->DrawAlpha;
  this->FarClippingDistance = param_1->FarClippingDistance;
  (this->SolidMeshMaterial).WeakPtr = (param_1->SolidMeshMaterial).WeakPtr;
  return this;
}

// FDebugRenderSceneProxy @ 147abb460

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDebugRenderSceneProxy * __thiscall
FDebugRenderSceneProxy::FDebugRenderSceneProxy
          (FDebugRenderSceneProxy *this,UPrimitiveComponent *param_1)

{
  uint uVar1;
  
  FPrimitiveSceneProxy::FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this,param_1,(FName)0x0);
  this->_padding_ = (longlong)&___7FDebugRenderSceneProxy__6B_;
  (this->Lines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lines).ArrayNum = 0;
  (this->Lines).ArrayMax = 0;
  (this->DashedLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DashedLines).ArrayNum = 0;
  (this->DashedLines).ArrayMax = 0;
  (this->ArrowLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrowLines).ArrayNum = 0;
  (this->ArrowLines).ArrayMax = 0;
  (this->Circles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Circles).ArrayNum = 0;
  (this->Circles).ArrayMax = 0;
  (this->Cylinders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cylinders).ArrayNum = 0;
  (this->Cylinders).ArrayMax = 0;
  (this->Stars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Stars).ArrayNum = 0;
  (this->Stars).ArrayMax = 0;
  (this->Boxes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Boxes).ArrayNum = 0;
  (this->Boxes).ArrayMax = 0;
  (this->Spheres).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Spheres).ArrayNum = 0;
  (this->Spheres).ArrayMax = 0;
  (this->Texts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Texts).ArrayNum = 0;
  (this->Texts).ArrayMax = 0;
  (this->Cones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cones).ArrayNum = 0;
  (this->Cones).ArrayMax = 0;
  (this->Meshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meshes).ArrayNum = 0;
  (this->Meshes).ArrayMax = 0;
  (this->Capsules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Capsules).ArrayNum = 0;
  (this->Capsules).ArrayMax = 0;
  (this->CoordinateSystems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CoordinateSystems).ArrayNum = 0;
  (this->CoordinateSystems).ArrayMax = 0;
  uVar1 = FEngineShowFlags::FindIndexByName(L"Game",(wchar_t *)0x0);
  this->ViewFlagIndex = uVar1;
  this->TextWithoutShadowDistance = 1500.0;
  ::FString::FString(&this->ViewFlagName,L"Game");
  *(undefined8 *)&this->DebugTextDrawingDelegate = 0;
  *(undefined8 *)&(this->DebugTextDrawingDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->DebugTextDrawingDelegate).field_0x10 = 0;
  (this->DebugTextDrawingDelegateHandle).ID = 0;
  this->DrawType = WireMesh;
  this->DrawAlpha = 100;
  this->FarClippingDistance = 0.0;
  (this->SolidMeshMaterial).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~FDebugRenderSceneProxy @ 147abedd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FDebugRenderSceneProxy::~FDebugRenderSceneProxy(FDebugRenderSceneProxy *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FDebugRenderSceneProxy__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DebugTextDrawingDelegate);
  pvVar1 = *(void **)&(this->DebugTextDrawingDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DebugTextDrawingDelegate);
  pFVar2 = (this->ViewFlagName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CoordinateSystems).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Capsules).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDebugRenderSceneProxy::FMesh,int>
            ((FMesh *)(this->Meshes).AllocatorInstance.Data,(this->Meshes).ArrayNum);
  pFVar2 = (this->Meshes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Cones).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDebugRenderSceneProxy::FText3d,int>
            ((FText3d *)(this->Texts).AllocatorInstance.Data,(this->Texts).ArrayNum);
  pFVar2 = (this->Texts).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Spheres).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Boxes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Stars).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Cylinders).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Circles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ArrowLines).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DashedLines).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Lines).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// AdjustViewFrustumForFarClipping @ 147ac5d80

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

FConvexVolume * __cdecl
FDebugRenderSceneProxy::AdjustViewFrustumForFarClipping
          (FConvexVolume *__return_storage_ptr__,FSceneView *param_1,double param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TConsoleVariableData<float> *pTVar6;
  bool bVar7;
  TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar8;
  ForElementType<UE::Math::TPlane<double>_> FVar9;
  TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar10
  ;
  ForElementType<UE::Math::TPlane<double>_> FVar11;
  longlong lVar12;
  undefined1 auStackY_2a8 [32];
  TPlane<double> local_268;
  FConvexVolume local_248;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  if (param_1 == (FSceneView *)0x0) {
    (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData =
         (ForElementType<UE::Math::TPlane<double>_>)0x0;
    (__return_storage_ptr__->Planes).ArrayNum = 0;
    (__return_storage_ptr__->Planes).ArrayMax = 6;
    (__return_storage_ptr__->PermutedPlanes).AllocatorInstance.SecondaryData =
         (ForElementType<UE::Math::TPlane<double>_>)0x0;
    (__return_storage_ptr__->PermutedPlanes).ArrayNum = 0;
    (__return_storage_ptr__->PermutedPlanes).ArrayMax = 8;
    return __return_storage_ptr__;
  }
  FVar11 = (param_1->ViewFrustum).Planes.AllocatorInstance.SecondaryData;
  local_248.Planes.ArrayNum = (param_1->ViewFrustum).Planes.ArrayNum;
  lVar12 = (longlong)local_248.Planes.ArrayNum;
  if (FVar11 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar11 = (ForElementType<UE::Math::TPlane<double>_>)&param_1->ViewFrustum;
  }
  local_248.Planes.AllocatorInstance.SecondaryData = (ForElementType<UE::Math::TPlane<double>_>)0x0;
  if (local_248.Planes.ArrayNum == 0) {
    local_248.Planes.ArrayMax = 6;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
              (0x20,0x10,local_248.Planes.ArrayNum,0,
               (ForElementType<UE::Math::TPlane<double>_> *)&local_248,local_248.Planes.ArrayNum,
               &local_248.Planes.ArrayMax);
    FVar9 = (ForElementType<UE::Math::TPlane<double>_>)&local_248;
    if (local_248.Planes.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar9 = local_248.Planes.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)FVar9,(void *)FVar11,lVar12 << 5);
  }
  FVar11 = (param_1->ViewFrustum).PermutedPlanes.AllocatorInstance.SecondaryData;
  local_248.PermutedPlanes.ArrayNum = (param_1->ViewFrustum).PermutedPlanes.ArrayNum;
  lVar12 = (longlong)local_248.PermutedPlanes.ArrayNum;
  if (FVar11 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar11 = (ForElementType<UE::Math::TPlane<double>_>)&(param_1->ViewFrustum).PermutedPlanes;
  }
  local_248.PermutedPlanes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  if (local_248.PermutedPlanes.ArrayNum == 0) {
    local_248.PermutedPlanes.ArrayMax = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
              (0x20,0x10,local_248.PermutedPlanes.ArrayNum,0,
               &local_248.PermutedPlanes.AllocatorInstance,local_248.PermutedPlanes.ArrayNum,
               &local_248.PermutedPlanes.ArrayMax);
    FVar9 = (ForElementType<UE::Math::TPlane<double>_>)&local_248.PermutedPlanes;
    if (local_248.PermutedPlanes.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar9 = local_248.PermutedPlanes.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)FVar9,(void *)FVar11,lVar12 << 5);
  }
  pTVar6 = CVarDebugRenderOverrideFarClippingPlane.Ref;
  bVar7 = IsInParallelGameThread();
  if (!bVar7) {
    bVar7 = IsInGameThread();
    lVar12 = 4;
    if (!bVar7) goto LAB_147ac5f42;
  }
  lVar12 = 0;
LAB_147ac5f42:
  dVar1 = (double)*(float *)((longlong)pTVar6->ShadowedValue + lVar12);
  if (0.0 < dVar1) {
    param_2 = dVar1;
  }
  if (0.0 < param_2) {
    local_268._padding_ = (longlong)(param_1->ViewMatrices).ViewMatrix.M[1][2];
    local_268._padding_ = (longlong)(param_1->ViewMatrices).ViewMatrix.M[0][2];
    local_268._padding_ = (longlong)(param_1->ViewMatrices).ViewMatrix.M[2][2];
    local_268.W = ((double)local_268._padding_ * param_2 +
                  (param_1->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y) *
                  (double)local_268._padding_ +
                  ((double)local_268._padding_ * param_2 +
                  (param_1->ViewMatrices).ViewOrigin.field0_0x0._s_0.X) *
                  (double)local_268._padding_ +
                  ((double)local_268._padding_ * param_2 +
                  (param_1->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z) *
                  (double)local_268._padding_;
    GetViewFrustumBounds
              (&local_248,&(param_1->ViewMatrices).ViewProjectionMatrix,&local_268,true,false);
  }
  (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  if (local_248.Planes.AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    *(undefined8 *)(__return_storage_ptr__->Planes).AllocatorInstance.InlineData =
         local_248.Planes.AllocatorInstance.InlineData._0_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 8) =
         local_248.Planes.AllocatorInstance.InlineData._8_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0x10) =
         local_248.Planes.AllocatorInstance.InlineData._16_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0x18) =
         local_248.Planes.AllocatorInstance.InlineData._24_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0x20) =
         local_248.Planes.AllocatorInstance.InlineData._32_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0x28) =
         local_248.Planes.AllocatorInstance.InlineData._40_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0x30) =
         local_248.Planes.AllocatorInstance.InlineData._48_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0x38) =
         local_248.Planes.AllocatorInstance.InlineData._56_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0x40) =
         local_248.Planes.AllocatorInstance.InlineData._64_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0x48) =
         local_248.Planes.AllocatorInstance.InlineData._72_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0x50) =
         local_248.Planes.AllocatorInstance.InlineData._80_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0x58) =
         local_248.Planes.AllocatorInstance.InlineData._88_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0x60) =
         local_248.Planes.AllocatorInstance.InlineData._96_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0x68) =
         local_248.Planes.AllocatorInstance.InlineData._104_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0x70) =
         local_248.Planes.AllocatorInstance.InlineData._112_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0x78) =
         local_248.Planes.AllocatorInstance.InlineData._120_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0x80) =
         local_248.Planes.AllocatorInstance.InlineData._128_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0x88) =
         local_248.Planes.AllocatorInstance.InlineData._136_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0x90) =
         local_248.Planes.AllocatorInstance.InlineData._144_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0x98) =
         local_248.Planes.AllocatorInstance.InlineData._152_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0xa0) =
         local_248.Planes.AllocatorInstance.InlineData._160_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0xa8) =
         local_248.Planes.AllocatorInstance.InlineData._168_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0xb0) =
         local_248.Planes.AllocatorInstance.InlineData._176_8_;
    *(undefined8 *)((__return_storage_ptr__->Planes).AllocatorInstance.InlineData + 0xb8) =
         local_248.Planes.AllocatorInstance.InlineData._184_8_;
  }
  (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData =
       local_248.Planes.AllocatorInstance.SecondaryData;
  (__return_storage_ptr__->Planes).ArrayNum = local_248.Planes.ArrayNum;
  (__return_storage_ptr__->Planes).ArrayMax = local_248.Planes.ArrayMax;
  (__return_storage_ptr__->PermutedPlanes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  local_248.Planes.AllocatorInstance.SecondaryData = (ForElementType<UE::Math::TPlane<double>_>)0x0;
  local_248.Planes.ArrayNum = 0;
  local_248.Planes.ArrayMax = 6;
  if (local_248.PermutedPlanes.AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    lVar12 = 2;
    pTVar8 = &__return_storage_ptr__->PermutedPlanes;
    pTVar10 = &local_248.PermutedPlanes;
    do {
      uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 8);
      uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x10);
      uVar4 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x18);
      *(undefined8 *)(pTVar8->AllocatorInstance).InlineData =
           *(undefined8 *)(pTVar10->AllocatorInstance).InlineData;
      *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 8) = uVar2;
      uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x20);
      uVar5 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x28);
      *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x10) = uVar3;
      *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x18) = uVar4;
      uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x30);
      uVar4 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x38);
      *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x20) = uVar2;
      *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x28) = uVar5;
      uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x40);
      uVar5 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x48);
      *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x30) = uVar3;
      *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x38) = uVar4;
      uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x50);
      uVar4 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x58);
      *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x40) = uVar2;
      *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x48) = uVar5;
      uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x60);
      uVar5 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x68);
      *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x50) = uVar3;
      *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x58) = uVar4;
      uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x70);
      uVar4 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x78);
      *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x60) = uVar2;
      *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x68) = uVar5;
      *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x70) = uVar3;
      *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x78) = uVar4;
      lVar12 = lVar12 + -1;
      pTVar8 = (TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                *)((pTVar8->AllocatorInstance).InlineData + 0x80);
      pTVar10 = (TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *)((pTVar10->AllocatorInstance).InlineData + 0x80);
    } while (lVar12 != 0);
  }
  FVar11 = (__return_storage_ptr__->PermutedPlanes).AllocatorInstance.SecondaryData;
  if (FVar11 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  (__return_storage_ptr__->PermutedPlanes).AllocatorInstance.SecondaryData =
       local_248.PermutedPlanes.AllocatorInstance.SecondaryData;
  (__return_storage_ptr__->PermutedPlanes).ArrayNum = local_248.PermutedPlanes.ArrayNum;
  (__return_storage_ptr__->PermutedPlanes).ArrayMax = local_248.PermutedPlanes.ArrayMax;
  local_248.PermutedPlanes.ArrayMax = 8;
  local_248.PermutedPlanes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  local_248.PermutedPlanes.ArrayNum = 0;
  if (local_248.Planes.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FMemory::Free((void *)local_248.Planes.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// DrawLineArrow @ 147ad55e0

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
FDebugRenderSceneProxy::DrawLineArrow
          (FDebugRenderSceneProxy *this,FPrimitiveDrawInterface *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FColor *param_4,float param_5)

{
  TVector<double>_u_0 local_48;
  double local_30;
  double dStack_28;
  double local_20;
  FColor_u_0 local_18;
  float local_14;
  
  local_48._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_48._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_30 = (param_3->field0_0x0)._s_0.X;
  dStack_28 = (param_3->field0_0x0)._s_0.Y;
  local_18._s_0 = *(FColor_u_0_s_0 *)&param_4->field0_0x0;
  local_20 = (param_3->field0_0x0)._s_0.Z;
  if (0.0 < param_5) {
    local_14 = param_5;
    FArrowLine::Draw((FArrowLine *)&local_48._s_0,param_1);
    return;
  }
  local_14 = 8.0;
  FArrowLine::Draw((FArrowLine *)&local_48._s_0,param_1);
  return;
}

// GetAllocatedSize @ 147ae3810

uint __thiscall FDebugRenderSceneProxy::GetAllocatedSize(FDebugRenderSceneProxy *this)

{
  return (((this->ArrowLines).ArrayMax + (this->DashedLines).ArrayMax + (this->Lines).ArrayMax) *
          0xe + ((this->Stars).ArrayMax +
                ((this->CoordinateSystems).ArrayMax + (this->Circles).ArrayMax) * 2) * 8 +
          (this->Boxes).ArrayMax * 0x2c + (this->Texts).ArrayMax * 0xc +
          (this->Spheres).ArrayMax * 10 + (this->Cylinders).ArrayMax * 0x12 +
         *(int *)((longlong)&this->_padding_ + 4)) * 4;
}

// GetDynamicMeshElements @ 147ae65c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDebugRenderSceneProxy::GetDynamicMeshElements
          (FDebugRenderSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  TAlignedBytes<8,8> TVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDebugRenderSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_DebugRenderSceneProxy_GetDynamicMeshElements>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar12;
  FName FVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStackY_208 [32];
  FColor_u_0 local_1a4;
  FName local_1a0;
  LARGE_INTEGER local_198;
  FName local_190;
  FStatMessage local_188;
  FName local_178;
  undefined8 local_168;
  UObject *local_160;
  FSceneViewFamily *local_158;
  FName local_150;
  FName local_148 [2];
  FMeshElementCollector *local_138;
  ForAnyElementType local_130;
  undefined8 local_128;
  TBitArray<FDefaultBitArrayAllocator> local_120;
  undefined8 uStack_100;
  void *local_f0;
  undefined4 local_e8;
  FWeakObjectPtr local_e0;
  undefined1 local_d8;
  FMeshElementCollector *local_c8;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  TBitArray<FDefaultBitArrayAllocator> local_b0;
  undefined8 uStack_90;
  void *local_80;
  undefined4 local_78;
  FWeakObjectPtr local_70;
  undefined1 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_198 = (LARGE_INTEGER)param_4;
  local_188.StatData.Pad = (uchar  [8])this;
  local_158 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_DebugRenderSceneProxy_GetDynamicMeshElements ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDebugRenderSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_DebugRenderSceneProxy_GetDynamicMeshElements>
         )0x0) {
      pFVar10 = ::FName::FName(&local_150,"STAT_DebugRenderSceneProxy_GetDynamicMeshElements");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_DebugRenderSceneProxy_GetDynamicMeshElements,*pFVar10,
                 L"STAT_DebugRenderSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_DebugRenderSceneProxy_GetDynamicMeshElements;
  if (StatPtr_STAT_DebugRenderSceneProxy_GetDynamicMeshElements ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDebugRenderSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_DebugRenderSceneProxy_GetDynamicMeshElements>
       )0x0) {
    pFVar10 = ::FName::FName(local_148,"STAT_DebugRenderSceneProxy_GetDynamicMeshElements");
    FVar11 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDebugRenderSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_DebugRenderSceneProxy_GetDynamicMeshElements>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_DebugRenderSceneProxy_GetDynamicMeshElements,*pFVar10,
                          L"STAT_DebugRenderSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar18 = false;
  bVar5 = false;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  FVar13 = *(FName *)FVar11;
  bVar7 = false;
  bVar8 = false;
  if ((FVar13.ComparisonIndex.Value.Value != 0) ||
     (bVar3 = bVar18, bVar4 = bVar5, FVar13.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a4._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar18 = false;
      bVar5 = true;
      bVar7 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar13.ComparisonIndex.Value.Value;
        local_190.Number = FVar13.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DebugRenderSceneProxy.cpp"
                   ,0xd1);
        bVar18 = true;
        bVar5 = true;
        bVar7 = true;
        bVar8 = true;
      }
    }
    bVar3 = bVar18;
    bVar4 = bVar5;
    if (FThreadStats::bPrimaryEnable != false) {
      local_1a0 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar7 = true;
      goto LAB_147ae677a;
    }
  }
  bVar5 = bVar8;
  bVar18 = bVar7;
  bVar7 = false;
  local_1a0 = local_178;
  FVar13 = local_178;
LAB_147ae677a:
  local_b0.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_b0.MaxBits = _UNK_150631d94;
  uStack_90 = _UNK_150631d98;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  local_b0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_80 = (void *)0x0;
  local_78 = 0;
  local_70.ObjectIndex = 0;
  local_70.ObjectSerialNumber = 0;
  local_168 = 0;
  local_c8 = param_4;
  FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_168);
  local_68 = 0;
  local_160 = FWeakObjectPtr::Get(&(this->SolidMeshMaterial).WeakPtr);
  local_138 = param_4;
  uVar16 = 0;
  local_130.Data = (FScriptContainerElement *)0x0;
  local_128 = 0;
  local_120.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_120.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_120.MaxBits = _UNK_150631d94;
  uStack_100 = _UNK_150631d98;
  local_f0 = (void *)0x0;
  local_e8 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_160 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_160);
  }
  local_e0.ObjectIndex = 0;
  local_e0.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_160 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_160);
  }
  FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_160);
  TVar6.Pad = local_188.StatData.Pad;
  iVar12 = param_1->ArrayNum;
  local_d8 = 1;
  if (0 < iVar12) {
    uVar14 = 1;
    uVar17 = uVar16;
    do {
      uVar15 = (uint)uVar16;
      if ((uVar14 & param_3) != 0) {
        uVar9 = 0;
        if ((int)uVar15 < iVar12) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (**(code **)(*(longlong *)TVar6.Pad + 600))
                  (TVar6.Pad,*(undefined8 *)((param_1->AllocatorInstance).Data + uVar17),uVar16,
                   local_158);
      }
      iVar12 = param_1->ArrayNum;
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar17 = uVar17 + 8;
      FVar13 = local_1a0;
      bVar3 = bVar18;
      bVar4 = bVar5;
    } while ((int)(uVar15 + 1) < iVar12);
  }
  local_e8 = 0;
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  bVar18 = local_128._4_4_ != 0;
  local_128 = (ulonglong)local_128._4_4_ << 0x20;
  if (bVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&local_130,0,(int *)((longlong)&local_128 + 4));
  }
  iVar12 = local_120.MaxBits;
  uStack_100 = 0xffffffff;
  local_120._24_8_ = (ulonglong)(uint)local_120.MaxBits << 0x20;
  if (0x80 < (uint)iVar12) {
    local_120.NumBits = 0;
    local_120.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_120,0);
  }
  if (local_120.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_120.AllocatorInstance.SecondaryData);
  }
  if (local_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data);
  }
  local_78 = 0;
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  bVar18 = local_b8._4_4_ != 0;
  local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
  if (bVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&local_c0,0,(int *)((longlong)&local_b8 + 4));
  }
  iVar12 = local_b0.MaxBits;
  uStack_90 = 0xffffffff;
  local_b0._24_8_ = (ulonglong)(uint)local_b0.MaxBits << 0x20;
  if (0x80 < (uint)iVar12) {
    local_b0.NumBits = 0;
    local_b0.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_b0,0);
  }
  if (local_b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b0.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_188.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_188.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_198);
      local_188.StatData.Pad = (uchar  [8])(local_198.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_188);
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
  return;
}

// GetDynamicMeshElementsForView @ 147ae6bb0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDebugRenderSceneProxy::GetDynamicMeshElementsForView
          (FDebugRenderSceneProxy *this,FSceneView *param_1,int param_2,FSceneViewFamily *param_3,
          uint param_4,FMeshElementCollector *param_5,FMaterialCache *param_6,
          FMaterialCache *param_7)

{
  code *pcVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  TConsoleVariableData<bool> *pTVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FPrimitiveDrawInterface *pFVar10;
  FMaterialRenderProxy *pFVar11;
  TMatrix<double> *pTVar12;
  ulonglong uVar13;
  FMaterialCache *this_00;
  FScriptContainerElement *pFVar14;
  FArrowLine *this_01;
  FDebugBox *this_02;
  FCapsule *this_03;
  byte *pbVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  uint uVar18;
  EDrawType EVar19;
  FScriptContainerElement *pFVar20;
  FArrowLine *pFVar21;
  FDebugBox *pFVar22;
  FCapsule *pFVar23;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *pTVar24;
  float fVar25;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *pTVar26;
  bool bVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStackY_6d8 [32];
  FScriptContainerElement *local_660;
  float local_658;
  float local_654;
  float local_650;
  float local_64c;
  undefined1 local_648;
  undefined1 local_647;
  undefined1 local_646;
  undefined1 local_645;
  undefined1 local_644;
  undefined1 local_643;
  undefined1 local_642;
  undefined1 local_641;
  undefined1 local_640;
  undefined1 local_63f;
  undefined1 local_63e;
  undefined1 local_63d [5];
  FMaterialCache *local_638;
  FMeshElementCollector *local_630;
  double local_628 [2];
  undefined8 local_618;
  undefined8 uStack_610;
  float local_608;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  float local_5f8 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_5f0;
  FLinearColor_u_0 local_5e0;
  FLinearColor_u_0 local_5d0;
  FLinearColor_u_0 local_5b8;
  FLinearColor_u_0 local_5a8;
  FLinearColor_u_0 local_598;
  FLinearColor_u_0 local_588;
  FLinearColor_u_0 local_578;
  FLinearColor_u_0 local_568;
  FLinearColor_u_0 local_558;
  FLinearColor_u_0 local_548;
  TVector<double>_u_0 local_538;
  FSceneView *local_520;
  FMaterialCache *local_518;
  FPrimitiveDrawInterface *local_510;
  TVector<double>_u_0 local_508;
  TVector<double>_u_0 local_4f0;
  TVector<double>_u_0 local_4d8;
  TVector<double>_u_0 local_4c0;
  TVector<double>_u_0 local_4a8;
  TVector<double>_u_0 local_490;
  TVector<double> local_478;
  TVector<double>_u_0 local_458;
  TRotator<double> TStack_440;
  undefined8 local_428;
  undefined8 uStack_420;
  TVector<double> local_418;
  TVector<double> local_400;
  TVector<double> local_3e8;
  FDynamicMeshBuilder local_3d0;
  TVector<double>_u_0 local_3a8;
  double local_390;
  double local_388;
  double local_380;
  FConvexVolume local_368;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_6d8;
  local_638 = param_6;
  local_518 = param_7;
  local_630 = param_5;
  bVar27 = -1 < CpuChannel->Enabled;
  local_520 = param_1;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId226,"FDebugRenderSceneProxy::GetDynamicMeshElementsForView",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DebugRenderSceneProxy.cpp"
               ,0xe2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId226);
  }
  pFVar10 = FMeshElementCollector::GetPDI(param_5,param_2);
  pTVar6 = CVarDebugRenderAllowFrustumCulling.Ref;
  local_510 = pFVar10;
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar7 = pTVar6->ShadowedValue[1];
  AdjustViewFrustumForFarClipping(&local_368,param_1,this->FarClippingDistance);
  (**(code **)(pFVar10->_padding_ + 0x20))(pFVar10,0,(this->Lines).ArrayNum);
  fVar5 = __real_3b808081;
  pFVar16 = (this->Lines).AllocatorInstance.Data;
  iVar17 = (this->Lines).ArrayNum;
  pFVar14 = pFVar16 + 0x31;
  pFVar20 = pFVar16 + (longlong)iVar17 * 0x38;
  while( true ) {
    if ((this->Lines).ArrayNum != iVar17) {
      `TCheckedPointerIterator<FDebugRenderSceneProxy::FDebugLine_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_648);
    }
    if (pFVar16 == pFVar20) break;
    if ((bVar7 == false) ||
       (bVar8 = FConvexVolume::IntersectLineSegment
                          (&local_368,(TVector<double> *)pFVar16,
                           (TVector<double> *)(pFVar14 + -0x19)), bVar8)) {
      local_618 = (double)CONCAT44(FLinearColor::sRGBToLinearTable[(byte)*pFVar14],
                                   FLinearColor::sRGBToLinearTable[(byte)pFVar14[1]]);
      uStack_610 = (double)CONCAT44((float)(byte)pFVar14[2] * fVar5,
                                    FLinearColor::sRGBToLinearTable[(byte)pFVar14[-1]]);
      (**(code **)(pFVar10->_padding_ + 0x30))(pFVar10,pFVar16,pFVar14 + -0x19);
    }
    pFVar16 = pFVar16 + 0x38;
    pFVar14 = pFVar14 + 0x38;
  }
  local_658 = (float)(this->DashedLines).ArrayNum;
  uVar13 = (ulonglong)(int)local_658;
  pFVar16 = (this->DashedLines).AllocatorInstance.Data;
  pFVar14 = pFVar16 + 0x31;
  pFVar20 = pFVar16 + uVar13 * 0x38;
  while( true ) {
    if ((this->DashedLines).ArrayNum != (int)uVar13) {
      `TCheckedPointerIterator<FDebugRenderSceneProxy::FDashedLine_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_647);
    }
    fVar25 = __real_40000000;
    if (pFVar16 == pFVar20) break;
    if ((bVar7 == false) ||
       (bVar8 = FConvexVolume::IntersectLineSegment
                          (&local_368,(TVector<double> *)pFVar16,
                           (TVector<double> *)(pFVar14 + -0x19)), bVar8)) {
      local_5e0._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar14[1]];
      local_5e0._s_0.G = FLinearColor::sRGBToLinearTable[(byte)*pFVar14];
      local_5e0._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar14[-1]];
      local_5e0._s_0.A = (float)(byte)pFVar14[2] * fVar5;
      DrawDashedLine(pFVar10,(TVector<double> *)pFVar16,(TVector<double> *)(pFVar14 + -0x19),
                     (FLinearColor *)&local_5e0._s_0,(double)*(float *)(pFVar14 + 3),'\0',0.0);
    }
    uVar13 = (ulonglong)(uint)local_658;
    pFVar16 = pFVar16 + 0x38;
    pFVar14 = pFVar14 + 0x38;
  }
  local_654 = (float)(this->Circles).ArrayNum;
  uVar13 = (ulonglong)(int)local_654;
  pFVar16 = (this->Circles).AllocatorInstance.Data;
  pFVar20 = pFVar16 + uVar13 * 0x40;
  pFVar14 = pFVar16 + 0x35;
  local_660 = pFVar20;
  while( true ) {
    if ((this->Circles).ArrayNum != (int)uVar13) {
      `TCheckedPointerIterator<FDebugRenderSceneProxy::FCircle_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_646);
    }
    if (pFVar16 == pFVar20) break;
    if (bVar7 == false) {
LAB_147ae6f44:
      EVar19 = *(EDrawType *)(pFVar14 + 7);
      local_658 = (float)this->DrawAlpha;
      if (EVar19 == Invalid) {
        EVar19 = this->DrawType;
      }
      UE::Math::TVector<double>::FindBestAxisVectors
                ((TVector<double> *)(pFVar14 + -0x1d),&local_400,&local_418);
      fVar3 = fVar25;
      if (EVar19 == SolidAndWireMeshes) {
LAB_147ae6f8f:
        local_5d0._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar14[1]];
        local_5d0._s_0.G = FLinearColor::sRGBToLinearTable[(byte)*pFVar14];
        local_5d0._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar14[-1]];
        iVar17 = 0xc;
        if (EVar19 == SolidAndWireMeshes) {
          iVar17 = 9;
        }
        local_5d0._s_0.A = (float)(byte)pFVar14[2] * fVar5;
        DrawCircle(pFVar10,(TVector<double> *)pFVar16,&local_400,&local_418,
                   (FLinearColor *)&local_5d0._s_0,(double)*(float *)(pFVar14 + -5),iVar17,'\0',
                   fVar3,0.0,true);
      }
      else if (EVar19 == WireMesh) {
        fVar3 = *(float *)(pFVar14 + 3);
        goto LAB_147ae6f8f;
      }
      pFVar20 = local_660;
      if ((EVar19 & ~SolidAndWireMeshes) == SolidMesh) {
        local_5b8._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar14[1]];
        local_5b8._s_0.G = FLinearColor::sRGBToLinearTable[(byte)*pFVar14];
        local_5b8._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar14[-1]];
        local_5b8._s_0.A = (float)(byte)((char)pFVar14[2] * local_658._0_1_) * fVar5;
        pFVar11 = FMaterialCache::operator[](local_638,(FLinearColor *)&local_5b8._s_0);
        iVar17 = 0xc;
        if (EVar19 == SolidAndWireMeshes) {
          iVar17 = 9;
        }
        GetDiscMesh((TVector<double> *)pFVar16,&local_400,&local_418,
                    (double)*(float *)(pFVar14 + -5),iVar17,pFVar11,'\0',param_2,local_630,
                    (HHitProxy *)0x0);
        pFVar20 = local_660;
      }
    }
    else {
      local_658 = *(float *)(pFVar14 + -5);
      bVar8 = FConvexVolume::IntersectSphere(&local_368,(TVector<double> *)pFVar16,&local_658);
      if (bVar8) goto LAB_147ae6f44;
    }
    uVar13 = (ulonglong)(uint)local_654;
    pFVar16 = pFVar16 + 0x40;
    pFVar14 = pFVar14 + 0x40;
  }
  (**(code **)(pFVar10->_padding_ + 0x20))(pFVar10,0);
  iVar17 = (this->ArrowLines).ArrayNum;
  this_01 = (FArrowLine *)(this->ArrowLines).AllocatorInstance.Data;
  pFVar21 = this_01 + iVar17;
  while( true ) {
    if ((this->ArrowLines).ArrayNum != iVar17) {
      `TCheckedPointerIterator<FDebugRenderSceneProxy::FArrowLine_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_645);
    }
    if (this_01 == pFVar21) break;
    if ((bVar7 == false) ||
       (bVar8 = FConvexVolume::IntersectLineSegment(&local_368,&this_01->Start,&this_01->End), bVar8
       )) {
      FArrowLine::Draw(this_01,pFVar10);
    }
    this_01 = this_01 + 1;
  }
  pFVar16 = (this->Stars).AllocatorInstance.Data;
  iVar17 = (this->Stars).ArrayNum;
  pFVar20 = pFVar16 + (longlong)iVar17 * 0x20;
  pFVar14 = pFVar16 + 0x19;
  while( true ) {
    if ((this->Stars).ArrayNum != iVar17) {
      `TCheckedPointerIterator<FDebugRenderSceneProxy::FWireStar_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_644);
    }
    if (pFVar16 == pFVar20) break;
    if (bVar7 == false) {
LAB_147ae71d5:
      local_5a8._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar14[1]];
      local_5a8._s_0.G = FLinearColor::sRGBToLinearTable[(byte)*pFVar14];
      local_5a8._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar14[-1]];
      local_5a8._s_0.A = (float)(byte)pFVar14[2] * fVar5;
      DrawWireStar(pFVar10,(TVector<double> *)pFVar16,*(float *)(pFVar14 + 3),
                   (FLinearColor *)&local_5a8._s_0,'\0');
    }
    else {
      local_654 = *(float *)(pFVar14 + 3);
      bVar8 = FConvexVolume::IntersectSphere(&local_368,(TVector<double> *)pFVar16,&local_654);
      if (bVar8) goto LAB_147ae71d5;
    }
    pFVar16 = pFVar16 + 0x20;
    pFVar14 = pFVar14 + 0x20;
  }
  local_654 = (float)(this->Cylinders).ArrayNum;
  uVar13 = (ulonglong)(int)local_654;
  pFVar14 = (this->Cylinders).AllocatorInstance.Data;
  pFVar16 = pFVar14 + uVar13 * 0x48;
  pFVar20 = pFVar14 + 0x39;
  local_660 = pFVar16;
  while( true ) {
    if ((this->Cylinders).ArrayNum != (int)uVar13) {
      `TCheckedPointerIterator<FDebugRenderSceneProxy::FWireCylinder_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_643);
    }
    dVar4 = __real_3fe0000000000000;
    if (pFVar14 == pFVar16) break;
    if (bVar7 == false) {
LAB_147ae72c9:
      EVar19 = *(EDrawType *)(pFVar20 + 7);
      local_650 = (float)this->DrawAlpha;
      if (EVar19 == Invalid) {
        EVar19 = this->DrawType;
      }
      UE::Math::TVector<double>::FindBestAxisVectors
                ((TVector<double> *)(pFVar20 + -0x21),&local_478,&local_3e8);
      if (EVar19 - WireMesh < 2) {
        local_598._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar20[1]];
        local_598._s_0.G = FLinearColor::sRGBToLinearTable[(byte)*pFVar20];
        local_598._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar20[-1]];
        iVar17 = 0;
        if (EVar19 == SolidAndWireMeshes) {
          iVar17 = 2;
        }
        local_598._s_0.A = (float)(byte)pFVar20[2] * fVar5;
        iVar9 = 0x10;
        if (EVar19 == SolidAndWireMeshes) {
          iVar9 = 9;
        }
        DrawWireCylinder(pFVar10,(TVector<double> *)pFVar14,&local_478,&local_3e8,
                         (TVector<double> *)(pFVar20 + -0x21),(FLinearColor *)&local_598._s_0,
                         (double)*(float *)(pFVar20 + -9),(double)*(float *)(pFVar20 + -5),iVar9,
                         '\0',(float)iVar17,0.0,true);
      }
      pFVar16 = local_660;
      if ((EVar19 & ~SolidAndWireMeshes) == SolidMesh) {
        fStack_604 = FLinearColor::sRGBToLinearTable[(byte)*pFVar20];
        local_608 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[1]];
        fStack_5fc = (float)(byte)((char)pFVar20[2] * local_650._0_1_) * fVar5;
        fStack_600 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[-1]];
        pFVar11 = FMaterialCache::operator[](local_638,(FLinearColor *)&local_608);
        iVar17 = 0x10;
        if (EVar19 == SolidAndWireMeshes) {
          iVar17 = 9;
        }
        GetCylinderMesh((TVector<double> *)pFVar14,&local_478,&local_3e8,
                        (TVector<double> *)(pFVar20 + -0x21),(double)*(float *)(pFVar20 + -9),
                        (double)*(float *)(pFVar20 + -5),iVar17,pFVar11,'\0',param_2,local_630,
                        (HHitProxy *)0x0);
        pFVar16 = local_660;
      }
    }
    else {
      fVar25 = *(float *)(pFVar20 + -9);
      local_650 = SQRT((fVar25 + fVar25) * fVar25 +
                       *(float *)(pFVar20 + -5) * *(float *)(pFVar20 + -5));
      bVar8 = FConvexVolume::IntersectSphere(&local_368,(TVector<double> *)pFVar14,&local_650);
      if (bVar8) goto LAB_147ae72c9;
    }
    uVar13 = (ulonglong)(uint)local_654;
    pFVar14 = pFVar14 + 0x48;
    pFVar20 = pFVar20 + 0x48;
  }
  iVar17 = (this->Boxes).ArrayNum;
  this_02 = (FDebugBox *)(this->Boxes).AllocatorInstance.Data;
  pFVar22 = this_02 + iVar17;
  while( true ) {
    if ((this->Boxes).ArrayNum != iVar17) {
      `TCheckedPointerIterator<FDebugRenderSceneProxy::FDebugBox_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_642);
    }
    if (this_02 == pFVar22) break;
    pTVar12 = UE::Math::TTransform<double>::ToMatrixWithScale(&this_02->Transform,&local_168);
    UE::Math::TBox<double>::TransformBy(&this_02->Box,(TBox<double> *)&local_3a8._s_0,pTVar12);
    local_508._s_0.X = (local_390 - local_3a8._s_0.X) * dVar4;
    local_508._s_0.Y = (local_388 - local_3a8._s_0.Y) * dVar4;
    local_508._s_0.Z = (local_380 - local_3a8._s_0.Z) * dVar4;
    local_4f0._s_0.X = local_3a8._s_0.X + local_508._s_0.X;
    local_4f0._s_0.Y = local_3a8._s_0.Y + local_508._s_0.Y;
    local_4f0._s_0.Z = local_3a8._s_0.Z + local_508._s_0.Z;
    if ((bVar7 == false) ||
       (bVar8 = FConvexVolume::IntersectBox
                          (&local_368,(TVector<double> *)&local_4f0._s_0,
                           (TVector<double> *)&local_508._s_0), bVar8)) {
      EVar19 = this_02->DrawTypeOverride;
      if (EVar19 == Invalid) {
        EVar19 = this->DrawType;
      }
      FDebugBox::Draw(this_02,pFVar10,EVar19,this->DrawAlpha,local_638,param_2,local_630);
    }
    this_02 = this_02 + 1;
  }
  local_650 = (float)(this->Cones).ArrayNum;
  uVar13 = (ulonglong)(int)local_650;
  pFVar16 = (this->Cones).AllocatorInstance.Data;
  uVar33 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar34 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  pFVar14 = pFVar16 + 0x50;
  pFVar20 = pFVar16 + uVar13 * 0xa0;
  local_660 = pFVar20;
  while( true ) {
    if ((this->Cones).ArrayNum != (int)uVar13) {
      `TCheckedPointerIterator<FDebugRenderSceneProxy::FCone_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_641);
      uVar33 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
      uVar34 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    }
    if (pFVar16 == pFVar20) break;
    fVar25 = *(float *)(pFVar14 + 0x34);
    if (*(float *)(pFVar14 + 0x34) <= *(float *)(pFVar14 + 0x30)) {
      fVar25 = *(float *)(pFVar14 + 0x30);
    }
    local_628[0] = (double)(fVar25 * __real_40490fdb) * __real_3f76c16c16c16c17;
    dVar28 = cos(local_628[0]);
    dVar31 = (double)CONCAT44(uVar34,uVar33);
    auVar29._8_4_ = uVar33;
    auVar29._0_8_ = dVar31;
    auVar29._12_4_ = uVar34;
    local_618 = *(double *)(pFVar14 + -0x30) *
                UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
                dVar31 * *(double *)&pFVar16->field_0x0 +
                *(double *)(pFVar14 + -0x10) *
                UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
                *(double *)(pFVar14 + 0x10) * __real_3ff0000000000000;
    uStack_610 = *(double *)(pFVar14 + -0x28) *
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
                 auVar29._8_8_ * *(double *)(pFVar16 + 8) +
                 *(double *)(pFVar14 + -8) * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
                 + *(double *)(pFVar14 + 0x18) * __real_3ff0000000000000;
    dVar2 = UE::Math::TVector<double>::XAxisVector.field0_0x0._0_8_;
    dVar32 = UE::Math::TVector<double>::XAxisVector.field0_0x0._8_8_;
    _local_608 = *(double *)(pFVar14 + -0x40) * dVar31 +
                 *(double *)(pFVar14 + -0x20) *
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
                 *(double *)pFVar14 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
                 *(double *)(pFVar14 + 0x20) * __real_3ff0000000000000;
    _fStack_600 = *(double *)(pFVar14 + -0x38) * (double)CONCAT44(uVar34,uVar33) +
                  *(double *)(pFVar14 + -0x18) *
                  UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
                  *(double *)(pFVar14 + 8) * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
                  + *(double *)(pFVar14 + 0x28) * __real_3ff0000000000000;
    auVar30._8_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_;
    auVar30._0_8_ = dVar2;
    auVar30._12_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_;
    dVar31 = (*(double *)(pFVar14 + -0x30) * dVar32 + dVar2 * *(double *)&pFVar16->field_0x0 +
              *(double *)(pFVar14 + -0x10) *
              UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z +
             *(double *)(pFVar14 + 0x10) * __real_3ff0000000000000) - local_618;
    dVar2 = (*(double *)(pFVar14 + -0x40) * dVar2 + *(double *)(pFVar14 + -0x20) * dVar32 +
             *(double *)pFVar14 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z +
            *(double *)(pFVar14 + 0x20) * __real_3ff0000000000000) - (double)_local_608;
    dVar32 = (*(double *)(pFVar14 + -0x28) * dVar32 + auVar30._8_8_ * *(double *)(pFVar16 + 8) +
              *(double *)(pFVar14 + -8) * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z +
             *(double *)(pFVar14 + 0x18) * __real_3ff0000000000000) - uStack_610;
    if (local_628[0] <= __real_3fe921fb60000000) {
      dVar28 = dVar4 / dVar28;
      local_538._s_0.X = dVar28 * dVar31 + local_618;
      local_538._s_0.Y = dVar28 * dVar32 + uStack_610;
      local_538._s_0.Z = dVar28 * dVar2 + (double)_local_608;
    }
    else {
      local_538._s_0.X = dVar28 * dVar31 + local_618;
      local_538._s_0.Y = dVar28 * dVar32 + uStack_610;
      local_538._s_0.Z = dVar28 * dVar2 + (double)_local_608;
      dVar28 = sin(local_628[0]);
    }
    if (bVar7 == false) {
LAB_147ae7934:
      EVar19 = *(EDrawType *)(pFVar14 + 0x40);
      local_64c = (float)this->DrawAlpha;
      iVar17 = 0;
      local_5f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5f0.ArrayNum = 0;
      local_5f0.ArrayMax = 0;
      if (EVar19 == Invalid) {
        EVar19 = this->DrawType;
      }
      if (EVar19 - WireMesh < 2) {
        local_588._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar14[0x3a]];
        local_588._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar14[0x39]];
        local_588._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar14[0x38]];
        if (EVar19 == SolidAndWireMeshes) {
          iVar17 = 2;
        }
        local_588._s_0.A = (float)(byte)pFVar14[0x3b] * fVar5;
        iVar9 = 0x10;
        if (EVar19 == SolidAndWireMeshes) {
          iVar9 = 9;
        }
        DrawWireCone(pFVar10,&local_5f0,(TMatrix<double> *)pFVar16,__real_3ff0000000000000,
                     (double)*(float *)(pFVar14 + 0x34),iVar9,(FLinearColor *)&local_588._s_0,'\0',
                     (float)iVar17,0.0,true);
        uVar33 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
        uVar34 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      }
      if ((EVar19 & ~SolidAndWireMeshes) == SolidMesh) {
        local_578._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar14[0x3a]];
        local_578._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar14[0x39]];
        local_578._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar14[0x38]];
        local_578._s_0.A = (float)(byte)((char)pFVar14[0x3b] * SUB41(local_64c,0)) * fVar5;
        pFVar11 = FMaterialCache::operator[](local_638,(FLinearColor *)&local_578._s_0);
        uVar18 = 0x10;
        if (EVar19 == SolidAndWireMeshes) {
          uVar18 = 9;
        }
        GetConeMesh((TMatrix<double> *)pFVar16,*(float *)(pFVar14 + 0x30),*(float *)(pFVar14 + 0x34)
                    ,uVar18,pFVar11,'\0',param_2,local_630,(HHitProxy *)0x0);
        uVar33 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
        uVar34 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      }
      pFVar20 = local_660;
      if (local_5f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5f0.AllocatorInstance.Data);
        uVar33 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
        uVar34 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        pFVar20 = local_660;
      }
    }
    else {
      local_64c = (float)(dVar28 * SQRT(dVar32 * dVar32 + dVar31 * dVar31 + dVar2 * dVar2));
      bVar8 = FConvexVolume::IntersectSphere
                        (&local_368,(TVector<double> *)&local_538._s_0,&local_64c);
      uVar33 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
      uVar34 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      if (bVar8) goto LAB_147ae7934;
    }
    uVar13 = (ulonglong)(uint)local_650;
    pFVar16 = pFVar16 + 0xa0;
    pFVar14 = pFVar14 + 0xa0;
  }
  local_64c = (float)(this->Spheres).ArrayNum;
  uVar13 = (ulonglong)(int)local_64c;
  pFVar14 = (this->Spheres).AllocatorInstance.Data;
  pFVar16 = pFVar14 + uVar13 * 0x28;
  local_660 = pFVar16;
  while( true ) {
    if ((this->Spheres).ArrayNum != (int)uVar13) {
      `TCheckedPointerIterator<FDebugRenderSceneProxy::FSphere_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_640);
    }
    dVar2 = __real_3fe0000000000000;
    dVar4 = __real_3ff0000000000000;
    if (pFVar14 == pFVar16) break;
    if (bVar7 == false) {
LAB_147ae7bc4:
      fVar25 = *(float *)(pFVar14 + 0x24);
      uVar18 = this->DrawAlpha;
      if (fVar25 == 4.2039e-45) {
        fVar25 = (float)this->DrawType;
      }
      if ((int)fVar25 - 1U < 2) {
        local_568._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar14[0x22]];
        local_568._s_0.A = 1.0;
        local_568._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar14[0x21]];
        local_568._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar14[0x20]];
        iVar17 = 0;
        if (fVar25 == 2.8026e-45) {
          iVar17 = 2;
        }
        DrawWireSphere(pFVar10,(TVector<double> *)(pFVar14 + 8),(FLinearColor *)&local_568._s_0,
                       (double)*(float *)pFVar14,0x14,'\0',(float)iVar17,0.0,true);
      }
      pFVar16 = local_660;
      if (((uint)fVar25 & 0xfffffffd) == 0) {
        local_558._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar14[0x22]];
        local_558._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar14[0x21]];
        local_558._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar14[0x20]];
        local_558._s_0.A = (float)(byte)((char)pFVar14[0x23] * (char)uVar18) * fVar5;
        pFVar11 = FMaterialCache::operator[](local_638,(FLinearColor *)&local_558._s_0);
        local_4d8._s_0.X = (double)*(float *)pFVar14;
        local_4d8._s_0.Y = local_4d8._s_0.X;
        local_4d8._s_0.Z = local_4d8._s_0.X;
        GetSphereMesh((TVector<double> *)(pFVar14 + 8),(TVector<double> *)&local_4d8._s_0,0x14,7,
                      pFVar11,'\0',false,param_2,local_630);
        pFVar16 = local_660;
      }
    }
    else {
      local_5f8[0] = *(float *)pFVar14;
      bVar8 = FConvexVolume::IntersectSphere(&local_368,(TVector<double> *)(pFVar14 + 8),local_5f8);
      if (bVar8) goto LAB_147ae7bc4;
    }
    uVar13 = (ulonglong)(uint)local_64c;
    pFVar14 = pFVar14 + 0x28;
  }
  iVar17 = (this->Capsules).ArrayNum;
  this_03 = (FCapsule *)(this->Capsules).AllocatorInstance.Data;
  pFVar23 = this_03 + iVar17;
  while( true ) {
    if ((this->Capsules).ArrayNum != iVar17) {
      `TCheckedPointerIterator<FDebugRenderSceneProxy::FCapsule_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_63f);
    }
    fVar5 = __real_3b808081;
    if (this_03 == pFVar23) break;
    dVar32 = (double)(this_03->HalfHeight - this_03->Radius);
    if (dVar32 <= dVar4) {
      dVar32 = dVar4;
    }
    dVar32 = dVar32 + (double)this_03->Radius;
    dVar31 = dVar32 + dVar32;
    local_4c0._s_0.X =
         (dVar31 * (this_03->Z).field0_0x0._s_0.X + (this_03->Base).field0_0x0._s_0.X +
         (this_03->Base).field0_0x0._s_0.X) * dVar2;
    local_4c0._s_0.Y =
         (dVar31 * (this_03->Z).field0_0x0._s_0.Y + (this_03->Base).field0_0x0._s_0.Y +
         (this_03->Base).field0_0x0._s_0.Y) * dVar2;
    local_4c0._s_0.Z =
         (dVar31 * (this_03->Z).field0_0x0._s_0.Z + (this_03->Base).field0_0x0._s_0.Z +
         (this_03->Base).field0_0x0._s_0.Z) * dVar2;
    if (bVar7 == false) {
LAB_147ae7e39:
      EVar19 = this_03->DrawTypeOverride;
      if (EVar19 == Invalid) {
        EVar19 = this->DrawType;
      }
      FCapsule::Draw(this_03,pFVar10,EVar19,this->DrawAlpha,local_638,param_2,local_630);
    }
    else {
      local_628[0] = (double)CONCAT44(local_628[0]._4_4_,(float)dVar32);
      bVar8 = FConvexVolume::IntersectSphere
                        (&local_368,(TVector<double> *)&local_4c0._s_0,(float *)local_628);
      if (bVar8) goto LAB_147ae7e39;
    }
    this_03 = this_03 + 1;
  }
  iVar17 = (this->Meshes).ArrayNum;
  uVar13 = (ulonglong)iVar17;
  pTVar26 = (TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *)
            (this->Meshes).AllocatorInstance.Data;
  pbVar15 = (byte *)((longlong)&pTVar26[5].ArrayNum + 1);
  pTVar24 = pTVar26 + uVar13 * 6;
  local_628[0] = (double)CONCAT44(local_628[0]._4_4_,iVar17);
  while( true ) {
    if ((this->Meshes).ArrayNum != (int)uVar13) {
      `TCheckedPointerIterator<FDebugRenderSceneProxy::FMesh_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_63e);
    }
    pFVar10 = local_510;
    if (pTVar26 == pTVar24) break;
    if ((bVar7 == false) || (pbVar15[-9] != 0)) {
      local_4a8._s_0.X = (*(double *)(pbVar15 + -0x21) - *(double *)(pbVar15 + -0x39)) * dVar2;
      local_4a8._s_0.Y = (*(double *)(pbVar15 + -0x19) - *(double *)(pbVar15 + -0x31)) * dVar2;
      local_4a8._s_0.Z = (*(double *)(pbVar15 + -0x11) - *(double *)(pbVar15 + -0x29)) * dVar2;
      local_490._s_0.X = local_4a8._s_0.X + *(double *)(pbVar15 + -0x39);
      local_490._s_0.Y = local_4a8._s_0.Y + *(double *)(pbVar15 + -0x31);
      local_490._s_0.Z = local_4a8._s_0.Z + *(double *)(pbVar15 + -0x29);
      bVar8 = FConvexVolume::IntersectBox
                        (&local_368,(TVector<double> *)&local_490._s_0,
                         (TVector<double> *)&local_4a8._s_0);
      if (bVar8) goto LAB_147ae7f67;
    }
    else {
LAB_147ae7f67:
      FDynamicMeshBuilder::FDynamicMeshBuilder
                (&local_3d0,local_520->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0);
      FDynamicMeshBuilder::AddVertices(&local_3d0,pTVar26);
      FDynamicMeshBuilder::AddTriangles
                (&local_3d0,(TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pbVar15 + -0x49));
      local_548._s_0.R = FLinearColor::sRGBToLinearTable[pbVar15[1]];
      local_548._s_0.G = FLinearColor::sRGBToLinearTable[*pbVar15];
      local_548._s_0.A = (float)pbVar15[2] * fVar5;
      local_548._s_0.B = FLinearColor::sRGBToLinearTable[pbVar15[-1]];
      this_00 = local_638;
      if (pbVar15[2] == 0xff) {
        this_00 = local_518;
      }
      pFVar11 = FMaterialCache::operator[](this_00,(FLinearColor *)&local_548._s_0);
      FDynamicMeshBuilder::GetMesh
                (&local_3d0,&UE::Math::TMatrix<double>::Identity,pFVar11,'\0',false,false,param_2,
                 local_630);
      FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_3d0);
    }
    uVar13 = (ulonglong)local_628[0] & 0xffffffff;
    pTVar26 = pTVar26 + 6;
    pbVar15 = pbVar15 + 0x60;
  }
  iVar17 = (this->CoordinateSystems).ArrayNum;
  pFVar16 = (this->CoordinateSystems).AllocatorInstance.Data;
  pFVar14 = pFVar16 + (longlong)iVar17 * 0x40;
  do {
    if ((this->CoordinateSystems).ArrayNum != iVar17) {
      `TCheckedPointerIterator<FDebugRenderSceneProxy::FCoordinateSystem_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_63d);
    }
    if (pFVar16 == pFVar14) {
      if (local_368.PermutedPlanes.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FMemory::Free((void *)local_368.PermutedPlanes.AllocatorInstance.SecondaryData);
      }
      if (local_368.Planes.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FMemory::Free((void *)local_368.Planes.AllocatorInstance.SecondaryData);
      }
      if (bVar27) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    local_458._s_0.X = (double)*(undefined8 *)pFVar16;
    local_458._s_0.Y = (double)*(undefined8 *)(pFVar16 + 8);
    local_458._s_0.Z = (double)*(undefined8 *)(pFVar16 + 0x10);
    TStack_440.Pitch = *(double *)(pFVar16 + 0x18);
    TStack_440.Yaw = *(double *)(pFVar16 + 0x20);
    TStack_440.Roll = *(double *)(pFVar16 + 0x28);
    local_428 = *(undefined8 *)(pFVar16 + 0x30);
    uStack_420 = *(undefined8 *)(pFVar16 + 0x38);
    if (bVar7 == false) {
LAB_147ae8118:
      DrawCoordinateSystem
                (pFVar10,(TVector<double> *)&local_458._s_0,&TStack_440,(float)local_428,'\0',
                 (float)uStack_420);
    }
    else {
      local_660 = (FScriptContainerElement *)CONCAT44(local_660._4_4_,(float)local_428);
      bVar8 = FConvexVolume::IntersectSphere
                        (&local_368,(TVector<double> *)&local_458._s_0,(float *)&local_660);
      if (bVar8) goto LAB_147ae8118;
    }
    pFVar16 = pFVar16 + 0x40;
  } while( true );
}

// GetTypeHash @ 147aeef40

ulong64 __thiscall FDebugRenderSceneProxy::GetTypeHash(FDebugRenderSceneProxy *this)

{
  return 0x155203670;
}

