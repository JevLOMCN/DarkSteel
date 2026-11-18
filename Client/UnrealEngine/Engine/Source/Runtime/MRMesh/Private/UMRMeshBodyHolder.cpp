// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 17

// StaticClass @ 146c62340

UClass * __cdecl UMRMeshBodyHolder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMRMeshBodyHolder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MRMesh",L"MRMeshBodyHolder",
               &Z_Registration_Info_UClass_UMRMeshBodyHolder.InnerSingleton,
               StaticRegisterNativesUMRMeshBodyHolder,0x230,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMRMeshBodyHolder>,
               InternalVTableHelperCtorCaller<UMRMeshBodyHolder>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMRMeshBodyHolder.InnerSingleton;
}

// UMRMeshBodyHolder @ 146c66020

UMRMeshBodyHolder * __thiscall
UMRMeshBodyHolder::UMRMeshBodyHolder(UMRMeshBodyHolder *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->BodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_CollisionDataProvider__;
  FBodyInstance::FBodyInstance(&this->BodyInstance);
  this->BrickId = 0;
  this->PositionData = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0;
  this->Indices = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0;
  (this->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->BrickDataReceipt).Object = (FBrickDataReceipt *)0x0;
  (this->BrickDataReceipt).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Bounds).IsValid = '\0';
  *(undefined8 *)(this->Bounds).Pad = 0;
  return this;
}

// UMRMeshBodyHolder @ 146c660d0

UMRMeshBodyHolder * __thiscall
UMRMeshBodyHolder::UMRMeshBodyHolder(UMRMeshBodyHolder *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->BodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_CollisionDataProvider__;
  FBodyInstance::FBodyInstance(&this->BodyInstance);
  this->BrickId = 0;
  this->PositionData = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0;
  this->Indices = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0;
  (this->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->BrickDataReceipt).Object = (FBrickDataReceipt *)0x0;
  (this->BrickDataReceipt).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Bounds).IsValid = '\0';
  *(undefined8 *)(this->Bounds).Pad = 0;
  return this;
}

// ~UMRMeshBodyHolder @ 146c66da0

void __thiscall UMRMeshBodyHolder::~UMRMeshBodyHolder(UMRMeshBodyHolder *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_CollisionDataProvider__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BrickDataReceipt).SharedReferenceCount.ReferenceController);
  FBodyInstance::~FBodyInstance(&this->BodyInstance);
  this->_padding_ = (longlong)&___7IInterface_CollisionDataProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AbortCook @ 146c67f90

void __thiscall UMRMeshBodyHolder::AbortCook(UMRMeshBodyHolder *this)

{
  TSharedPtr<IMRMesh::FBrickDataReceipt,1> local_18;
  
  if (this->bCookInProgress != false) {
    UBodySetup::AbortPhysicsMeshAsyncCreation((this->BodySetup).field0_0x0.DebugPtr);
    this->bCookInProgress = false;
    this->PositionData = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0;
    this->Indices = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0;
    local_18.Object = (FBrickDataReceipt *)0x0;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    TSharedPtr<IMRMesh::FBrickDataReceipt,1>::operator=(&this->BrickDataReceipt,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return;
  }
  return;
}

// Cleanup @ 146c68780

void __thiscall UMRMeshBodyHolder::Cleanup(UMRMeshBodyHolder *this)

{
  TSharedPtr<IMRMesh::FBrickDataReceipt,1> local_18;
  
  AbortCook(this);
  this->PositionData = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0;
  this->Indices = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0;
  local_18.Object = (FBrickDataReceipt *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TSharedPtr<IMRMesh::FBrickDataReceipt,1>::operator=(&this->BrickDataReceipt,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FBodyInstance::TermBody(&this->BodyInstance,false);
  return;
}

// ContainsPhysicsTriMeshData @ 146c690d0

bool __thiscall UMRMeshBodyHolder::ContainsPhysicsTriMeshData(UMRMeshBodyHolder *this,bool param_1)

{
  if (((this->BodyInstance).BodyInstanceDelegates != (FBodyInstanceDelegatesPtr)0x0) &&
     (0 < (int)((this->BodyInstance).ShapeToBodiesMap.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount)) {
    return true;
  }
  return false;
}

// FinishPhysicsAsyncCook @ 146c6a1f0

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

void __thiscall
UMRMeshBodyHolder::FinishPhysicsAsyncCook(UMRMeshBodyHolder *this,bool param_1,UBodySetup *param_2)

{
  FBodyInstance *this_00;
  int iVar1;
  UBodySetup *pUVar2;
  FPhysScene_Chaos *pFVar3;
  UClass *pUVar4;
  longlong lVar5;
  FInitBodySpawnParams *pFVar6;
  FBodyInstance *pFVar7;
  UPrimitiveComponent *this_01;
  undefined1 auStackY_c8 [32];
  FInitBodySpawnParams local_80 [2];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  this_01 = (UPrimitiveComponent *)this->_padding_;
  if (this_01 != (UPrimitiveComponent *)0x0) {
    pUVar4 = UMRMeshComponent::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_01->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_146c6a242;
  }
  this_01 = (UPrimitiveComponent *)0x0;
LAB_146c6a242:
  if (this_01 != (UPrimitiveComponent *)0x0) {
    local_78.Rotation.XY.m128d_f64[0] = *(double *)&this_01->field_0x1f0;
    local_78.Rotation.XY.m128d_f64[1] = *(double *)&this_01->field_0x1f8;
    local_78.Rotation.ZW.m128d_f64[0] = *(double *)&this_01->field_0x200;
    local_78.Rotation.ZW.m128d_f64[1] = *(double *)&this_01->field_0x208;
    local_78.Translation.XY.m128d_f64[0] = *(double *)&this_01->field_0x210;
    local_78.Translation.XY.m128d_f64[1] = *(double *)&this_01->field_0x218;
    local_78.Translation.ZW.m128d_f64[0] = *(double *)&this_01->field_0x220;
    local_78.Translation.ZW.m128d_f64[1] = *(double *)&this_01->field_0x228;
    local_78.Scale3D.XY.m128d_f64[0] = *(double *)&this_01->field_0x230;
    local_78.Scale3D.XY.m128d_f64[1] = *(double *)&this_01->field_0x238;
    local_78.Scale3D.ZW.m128d_f64[0] = *(double *)&this_01->field_0x240;
    local_78.Scale3D.ZW.m128d_f64[1] = *(double *)&this_01->field_0x248;
    this_00 = &this->BodyInstance;
    FBodyInstance::TermBody(this_00,false);
    lVar5 = (**(code **)(this->_padding_ + 0x180))(this);
    pUVar2 = (this->BodySetup).field0_0x0.DebugPtr;
    pFVar3 = *(FPhysScene_Chaos **)(lVar5 + 0x2a0);
    pFVar6 = FInitBodySpawnParams::FInitBodySpawnParams(local_80,this_01);
    FBodyInstance::InitBody
              (this_00,pUVar2,&local_78,this_01,pFVar3,pFVar6,(IPhysicsBodyInstanceOwner *)0x0);
    pFVar7 = (FBodyInstance *)(**(code **)(*(longlong *)this_01 + 0x818))(this_01,0,1,0xffffffff);
    FBodyInstance::CopyRuntimeBodyInstancePropertiesFrom(this_00,pFVar7);
    this_01[1].field_0x12 = 1;
    if ((this_01[1].field_0x11 != '\0') && ((this_01->bHasCustomNavigableGeometry).Value != '\0')) {
      this_01[1].field_0x12 = 0;
      USceneComponent::UpdateNavigationData((USceneComponent *)this_01);
    }
  }
  return;
}

// GetPhysicsTriMeshData @ 146c6ba80

bool __thiscall
UMRMeshBodyHolder::GetPhysicsTriMeshData
          (UMRMeshBodyHolder *this,FTriMeshCollisionData *param_1,bool param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  atomic<int> aVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
  *pTVar17;
  longlong lVar18;
  undefined8 local_38;
  undefined4 local_30;
  
  if (((this->BodyInstance).BodyInstanceDelegates == (FBodyInstanceDelegatesPtr)0x0) ||
     ((int)((this->BodyInstance).ShapeToBodiesMap.SharedReferenceCount.ReferenceController)->
           SharedReferenceCount < 1)) {
    return false;
  }
  piVar1 = &(param_1->Vertices).ArrayNum;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,*(int *)&((this->BodyInstance).ShapeToBodiesMap.Object)->field_0x8,
             (ForAnyElementType *)param_1,piVar1,&(param_1->Vertices).ArrayMax);
  pTVar17 = (this->BodyInstance).ShapeToBodiesMap.Object;
  uVar15 = 0;
  uVar16 = uVar15;
  if (0 < *(int *)&pTVar17->field_0x8) {
    do {
      uVar14 = (uint)uVar15;
      uVar12 = 0;
      if ((int)uVar14 < *(int *)&pTVar17->field_0x8) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      uVar3 = *(undefined8 *)(*(longlong *)pTVar17 + uVar16);
      uVar4 = *(undefined4 *)(*(longlong *)pTVar17 + 8 + uVar16);
      uVar12 = 0;
      if ((int)uVar14 < *piVar1) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      pFVar5 = (param_1->Vertices).AllocatorInstance.Data;
      uVar15 = (ulonglong)(uVar14 + 1);
      *(undefined8 *)(pFVar5 + uVar16) = uVar3;
      *(undefined4 *)(pFVar5 + uVar16 + 8) = uVar4;
      pTVar17 = (this->BodyInstance).ShapeToBodiesMap.Object;
      uVar16 = uVar16 + 0xc;
    } while ((int)(uVar14 + 1) < *(int *)&pTVar17->field_0x8);
  }
  pTVar6 = (this->BodyInstance).ShapeToBodiesMap.SharedReferenceCount.ReferenceController;
  aVar13 = pTVar6->SharedReferenceCount;
  uVar12 = (int)aVar13 / 3 + ((int)aVar13 >> 0x1f) +
           (int)(((longlong)(int)aVar13 / 3 + ((longlong)(int)aVar13 >> 0x3f) & 0xffffffffU) >> 0x1f
                );
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &(param_1->Indices).ArrayMax;
  (param_1->Indices).ArrayNum = 0;
  if ((param_1->Indices).ArrayMax < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar12,&(param_1->Indices).AllocatorInstance,0,piVar1);
  }
  aVar13 = pTVar6->SharedReferenceCount;
  if (0 < (int)aVar13) {
    lVar18 = 8;
    uVar12 = 2;
    do {
      local_38 = 0;
      local_30 = 0;
      uVar10 = 0;
      uVar14 = uVar10;
      if ((int)(uVar12 - 2) < (int)aVar13) {
        uVar14 = ~(uVar12 - 2) >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(pTVar6->_padding_ + -8 + lVar18));
      uVar14 = uVar10;
      if ((int)(uVar12 - 1) < (int)pTVar6->SharedReferenceCount) {
        uVar14 = ~(uVar12 - 1) >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      local_38 = CONCAT44(*(undefined4 *)(pTVar6->_padding_ + -4 + lVar18),(undefined4)local_38);
      if ((int)uVar12 < (int)pTVar6->SharedReferenceCount) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      pFVar5 = (param_1->Indices).AllocatorInstance.Data;
      local_30 = *(undefined4 *)(lVar18 + pTVar6->_padding_);
      if (((pFVar5 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < pFVar5 + (longlong)*piVar1 * 0xc)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      iVar11 = (param_1->Indices).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&(param_1->Indices).AllocatorInstance,piVar1);
      }
      (param_1->Indices).ArrayNum = iVar11 + 1;
      lVar18 = lVar18 + 0xc;
      pFVar5 = (param_1->Indices).AllocatorInstance.Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar11 * 0xc) = local_38;
      *(undefined4 *)(pFVar5 + (longlong)iVar11 * 0xc + 8) = local_30;
      iVar11 = uVar12 + 1;
      aVar13 = pTVar6->SharedReferenceCount;
      uVar12 = uVar12 + 3;
    } while (iVar11 < (int)aVar13);
  }
  param_1->bFlipNormals = 1;
  param_1->bFastCook = 1;
  param_1->bDeformableMesh = 1;
  return true;
}

// GetPrivateStaticClass @ 146c6be90

UClass * __cdecl UMRMeshBodyHolder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMRMeshBodyHolder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MRMesh",L"MRMeshBodyHolder",
               &Z_Registration_Info_UClass_UMRMeshBodyHolder.InnerSingleton,
               StaticRegisterNativesUMRMeshBodyHolder,0x230,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMRMeshBodyHolder>,
               InternalVTableHelperCtorCaller<UMRMeshBodyHolder>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMRMeshBodyHolder.InnerSingleton;
}

// GetTriMeshSizeEstimates @ 146c6c180

bool __thiscall
UMRMeshBodyHolder::GetTriMeshSizeEstimates
          (UMRMeshBodyHolder *this,FTriMeshCollisionDataEstimates *param_1,bool param_2)

{
  if (((this->BodyInstance).BodyInstanceDelegates != (FBodyInstanceDelegatesPtr)0x0) &&
     (0 < (int)((this->BodyInstance).ShapeToBodiesMap.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount)) {
    param_1->VerticeCount =
         (longlong)*(int *)&((this->BodyInstance).ShapeToBodiesMap.Object)->field_0x8;
  }
  return true;
}

// Initialize @ 146c6c590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMRMeshBodyHolder::Initialize(UMRMeshBodyHolder *this,ulong64 param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  UClass *pUVar7;
  UBodySetup *pUVar8;
  FGuid *pFVar9;
  longlong *plVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  FGuid local_b0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (((this->BodySetup).field0_0x0.DebugPtr != (UBodySetup *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BodySetup == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                         ,0x46b,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->BrickId = param_1;
  bVar6 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  local_b8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = Z_Construct_UClass_UBodySetup_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar7);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  local_98._24_4_ = -(uint)bVar6 & (RF_ArchetypeObject|RF_Public);
  pUVar8 = (UBodySetup *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar10 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UBodySetup *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->BodySetup).field0_0x0.DebugPtr = pUVar8;
  pFVar9 = FGuid::NewGuid(&local_b0);
  uVar3 = pFVar9->B;
  uVar4 = pFVar9->C;
  uVar5 = pFVar9->D;
  pUVar8 = (this->BodySetup).field0_0x0.DebugPtr;
  (pUVar8->BodySetupGuid).A = pFVar9->A;
  (pUVar8->BodySetupGuid).B = uVar3;
  (pUVar8->BodySetupGuid).C = uVar4;
  (pUVar8->BodySetupGuid).D = uVar5;
  ((this->BodySetup).field0_0x0.DebugPtr)->bGenerateMirroredCollision = '\0';
  ((this->BodySetup).field0_0x0.DebugPtr)->bHasCookedCollisionData = '\x01';
  *(undefined1 *)((longlong)&((this->BodySetup).field0_0x0.DebugPtr)->_padding_ + 1) = 3;
  this->bCookInProgress = false;
  return;
}

// ReleaseArgData @ 146c6d010

void __thiscall UMRMeshBodyHolder::ReleaseArgData(UMRMeshBodyHolder *this)

{
  TSharedPtr<IMRMesh::FBrickDataReceipt,1> local_18;
  
  this->PositionData = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0;
  this->Indices = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0;
  local_18.Object = (FBrickDataReceipt *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TSharedPtr<IMRMesh::FBrickDataReceipt,1>::operator=(&this->BrickDataReceipt,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// StaticRegisterNativesUMRMeshBodyHolder @ 146c705f0

void __cdecl UMRMeshBodyHolder::StaticRegisterNativesUMRMeshBodyHolder(void)

{
  return;
}

// Update @ 146c70b30

void __thiscall UMRMeshBodyHolder::Update(UMRMeshBodyHolder *this,FSendBrickDataArgs *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FBrickDataReceipt *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  double dVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  bool bVar13;
  
  if ((this->BodySetup).field0_0x0.DebugPtr == (UBodySetup *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("BodySetup != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                        ,0x47b,L"");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->BrickId != param_1->BrickId) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("BrickId == Args.BrickId",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                        ,0x47c,L"");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar1 = (param_1->BrickDataReceipt).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->BrickDataReceipt).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->BrickDataReceipt).SharedReferenceCount.ReferenceController;
  (this->BrickDataReceipt).Object = pFVar2;
  (this->BrickDataReceipt).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->PositionData = param_1->PositionData;
  this->Indices = param_1->Indices;
  dVar5 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar5;
  dVar5 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar5;
  uVar6 = (param_1->Bounds).Pad[0];
  uVar7 = (param_1->Bounds).Pad[1];
  uVar8 = (param_1->Bounds).Pad[2];
  uVar9 = (param_1->Bounds).Pad[3];
  uVar10 = (param_1->Bounds).Pad[4];
  uVar11 = (param_1->Bounds).Pad[5];
  uVar12 = (param_1->Bounds).Pad[6];
  (this->Bounds).IsValid = (param_1->Bounds).IsValid;
  (this->Bounds).Pad[0] = uVar6;
  (this->Bounds).Pad[1] = uVar7;
  (this->Bounds).Pad[2] = uVar8;
  (this->Bounds).Pad[3] = uVar9;
  (this->Bounds).Pad[4] = uVar10;
  (this->Bounds).Pad[5] = uVar11;
  (this->Bounds).Pad[6] = uVar12;
  return;
}

// WantsNegXTriMesh @ 146c73420

bool __thiscall UMRMeshBodyHolder::WantsNegXTriMesh(UMRMeshBodyHolder *this)

{
  return false;
}

// _getUObject @ 146c73630

UObject * __thiscall UMRMeshBodyHolder::_getUObject(UMRMeshBodyHolder *this)

{
  return (UObject *)&this[-1].Bounds.Max;
}

