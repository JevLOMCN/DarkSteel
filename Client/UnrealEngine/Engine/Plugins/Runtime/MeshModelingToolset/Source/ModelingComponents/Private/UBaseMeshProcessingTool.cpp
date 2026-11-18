// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 35

// StaticClass @ 14ca3fc20

UClass * __cdecl UBaseMeshProcessingTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseMeshProcessingTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"BaseMeshProcessingTool",
               &Z_Registration_Info_UClass_UBaseMeshProcessingTool.InnerSingleton,
               StaticRegisterNativesUBaseMeshProcessingTool,0x4a0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseMeshProcessingTool>,
               InternalVTableHelperCtorCaller<UBaseMeshProcessingTool>,local_res8,
               USingleTargetWithSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseMeshProcessingTool.InnerSingleton;
}

// UBaseMeshProcessingTool @ 14ca67620

UBaseMeshProcessingTool * __thiscall
UBaseMeshProcessingTool::UBaseMeshProcessingTool
          (UBaseMeshProcessingTool *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  USingleTargetWithSelectionTool::USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->OptionalProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleTargetWithSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->OptionalProperties).ArrayNum = 0;
  (this->OptionalProperties).ArrayMax = 0;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  this->bResultValid = false;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->InitialMesh);
  (this->InitialVtxNormals).Object = (FMeshNormals *)0x0;
  (this->InitialVtxNormals).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->InitialBoundaryLoops).Object = (FMeshBoundaryLoops *)0x0;
  (this->InitialBoundaryLoops).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WeightMapPropertySet).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->WeightMapPropertySetVisibleFunc = 0;
  *(undefined8 *)&(this->WeightMapPropertySetVisibleFunc).field_0x28 = 0;
  (this->ActiveWeightMap).Object = (TIndexedWeightMap<float> *)0x0;
  (this->ActiveWeightMap).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bIsScaleNormalizationApplied = false;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->OverrideTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->OverrideTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->OverrideTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OverrideTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->OverrideTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->OverrideTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->OverrideTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OverrideTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->OverrideTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->OverrideTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->OverrideTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->OverrideTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// ~UBaseMeshProcessingTool @ 14ca6b3f0

void __thiscall UBaseMeshProcessingTool::~UBaseMeshProcessingTool(UBaseMeshProcessingTool *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleTargetWithSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveWeightMap).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->WeightMapPropertySetVisibleFunc != 0) {
    plVar1 = *(longlong **)&(this->WeightMapPropertySetVisibleFunc).field_0x28;
    plVar3 = (longlong *)&(this->WeightMapPropertySetVisibleFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InitialBoundaryLoops).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InitialVtxNormals).SharedReferenceCount.ReferenceController);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&this->InitialMesh);
  DestructItems<UBaseMeshProcessingTool::FOptionalPropertySet,int>
            ((FOptionalPropertySet *)(this->OptionalProperties).AllocatorInstance.Data,
             (this->OptionalProperties).ArrayNum);
  pFVar2 = (this->OptionalProperties).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  USingleTargetWithSelectionTool::~USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this);
  return;
}

// operator() @ 14ca6f070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `UBaseMeshProcessingTool::Setup'::__l10::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> **ppTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *local_18;
  FSharedReferencer<1> FStack_10;
  
  lVar1 = *(longlong *)this;
  pTVar4 = ::operator_new(0x28);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18 = ___xmm_00000000000000000000000000000010;
    pTVar6 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_10.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = lVar1 + 0x170;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMeshNormals_Geometry_UE___00_SharedPointerInternals__6B_
    ;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FStack_10.ReferenceController = pTVar4;
    local_18 = pTVar6;
  }
  lVar1 = *(longlong *)this;
  ppTVar5 = (TReferenceControllerBase<1> **)(lVar1 + 0x3a0);
  if (ppTVar5 != &local_18) {
    *ppTVar5 = pTVar6;
    local_18 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar1 + 0x3a8),&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x3a0) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Geometry::FMeshNormals::Compute_FaceAvg(*(FMeshNormals **)(lVar1 + 0x3a0),true,true);
  return;
}

// operator() @ 14ca70be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `UBaseMeshProcessingTool::Setup'::__l13::<lambda_2>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> **ppTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *local_18;
  FSharedReferencer<1> FStack_10;
  
  lVar1 = *(longlong *)this;
  pTVar4 = ::operator_new(0xb0);
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    local_18 = ___xmm_00000000000000000000000000000010;
    pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_10.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMeshBoundaryLoops_Geometry_UE___00_SharedPointerInternals__6B_
    ;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[3]._padding_ = 0;
    *(undefined2 *)&pTVar4[3].SharedReferenceCount = 0;
    pTVar4[3].SharedReferenceCount.field_0x2 = 0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x2;
    *(undefined4 *)&pTVar4[4]._padding_ = 1;
    pTVar4[5]._padding_ = 0;
    pTVar4[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[8]._padding_ = 0;
    pTVar4[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[8].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar4[9]._padding_ = 0;
    pTVar4[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[10]._padding_ = 0;
    ((FMeshBoundaryLoops *)(pTVar4 + 1))->Mesh = (FDynamicMesh3 *)(lVar1 + 0x170);
    UE::Geometry::FMeshBoundaryLoops::Compute((FMeshBoundaryLoops *)(pTVar4 + 1));
    pTVar7 = pTVar4 + 1;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FStack_10.ReferenceController = pTVar4;
    pTVar6 = pTVar4;
    local_18 = pTVar7;
  }
  lVar1 = *(longlong *)this;
  ppTVar5 = (TReferenceControllerBase<1> **)(lVar1 + 0x3b0);
  if (ppTVar5 != &local_18) {
    *ppTVar5 = pTVar7;
    local_18 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar1 + 0x3b8),&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// AddOptionalPropertySet @ 14ca78020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UBaseMeshProcessingTool::AddOptionalPropertySet
          (UBaseMeshProcessingTool *this,UInteractiveToolPropertySet *param_1,
          TUniqueFunction<bool___cdecl(void)> *param_2,TUniqueFunction<void___cdecl(void)> *param_3,
          bool param_4)

{
  int *piVar1;
  TArray<UBaseMeshProcessingTool::FOptionalPropertySet,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  code *pcVar4;
  UBaseMeshProcessingTool *pUVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStack_148 [32];
  UBaseMeshProcessingTool **local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  UInteractiveToolPropertySet *local_f8;
  FString local_f0;
  int local_e0;
  UBaseMeshProcessingTool *local_d8;
  undefined1 local_d0 [8];
  UBaseMeshProcessingTool *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong *plStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong *plStack_70;
  FScriptContainerElement local_68;
  FWeakObjectPtr local_64;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_148;
  (**(code **)(this->_padding_ + 0x318))();
  pcVar4 = *(code **)(param_1->_padding_ + 0x2b8);
  ::FString::FString(&local_f0,L"");
  (*pcVar4)(param_1,this,&local_f0);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x338))(this,param_1,0);
  local_c8 = (UBaseMeshProcessingTool *)0x0;
  plStack_a0 = (longlong *)0x0;
  local_98 = 0;
  plStack_70 = (longlong *)0x0;
  local_64.ObjectIndex = 0;
  local_64.ObjectSerialNumber = 0;
  local_f8 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_64,(FObjectPtr)&local_f8);
  pUVar5 = *(UBaseMeshProcessingTool **)param_2;
  uVar6 = *(undefined8 *)&param_2->field_0x8;
  pTVar2 = &this->OptionalProperties;
  lVar18 = *(longlong *)&param_2->field_0x10;
  lVar7 = *(longlong *)&param_2->field_0x18;
  lVar8 = *(longlong *)&param_2->field_0x20;
  lVar9 = *(longlong *)&param_2->field_0x28;
  *(UBaseMeshProcessingTool **)param_2 = local_c8;
  *(undefined8 *)&param_2->field_0x8 = uStack_c0;
  *(longlong *)&param_2->field_0x10 = local_b8;
  *(longlong *)&param_2->field_0x18 = lStack_b0;
  *(longlong *)&param_2->field_0x20 = local_a8;
  *(longlong **)&param_2->field_0x28 = plStack_a0;
  lVar10 = *(longlong *)param_3;
  uVar11 = *(undefined8 *)&param_3->field_0x8;
  lVar12 = *(longlong *)&param_3->field_0x20;
  lVar13 = *(longlong *)&param_3->field_0x28;
  lVar14 = *(longlong *)&param_3->field_0x10;
  lVar15 = *(longlong *)&param_3->field_0x18;
  *(longlong *)param_3 = local_98;
  *(undefined8 *)&param_3->field_0x8 = uStack_90;
  *(longlong *)&param_3->field_0x10 = local_88;
  *(longlong *)&param_3->field_0x18 = lStack_80;
  *(longlong *)&param_3->field_0x20 = local_78;
  *(longlong **)&param_3->field_0x28 = plStack_70;
  pFVar20 = (pTVar2->AllocatorInstance).Data;
  iVar3 = (this->OptionalProperties).ArrayNum;
  local_68 = (FScriptContainerElement)param_4;
  local_c8 = pUVar5;
  uStack_c0 = uVar6;
  local_b8 = lVar18;
  lStack_b0 = lVar7;
  local_a8 = lVar8;
  plStack_a0 = (longlong *)lVar9;
  local_98 = lVar10;
  uStack_90 = uVar11;
  local_88 = lVar14;
  lStack_80 = lVar15;
  local_78 = lVar12;
  plStack_70 = (longlong *)lVar13;
  if ((pFVar20 <= (FScriptContainerElement *)&local_c8) &&
     (lVar18 = (longlong)(this->OptionalProperties).ArrayMax,
     (FScriptContainerElement *)&local_c8 < pFVar20 + lVar18 * 0x70)) {
    local_108 = 0x70;
    local_128 = &local_c8;
    local_120 = pFVar20;
    local_118 = lVar18;
    local_110 = (longlong)iVar3;
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar17 = (this->OptionalProperties).ArrayNum;
  piVar1 = &(this->OptionalProperties).ArrayMax;
  if (iVar17 == *piVar1) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1070,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->OptionalProperties).ArrayNum = iVar17 + 1;
  pFVar20 = (pTVar2->AllocatorInstance).Data + (longlong)iVar17 * 0x70;
  *(UBaseMeshProcessingTool **)pFVar20 = local_c8;
  *(longlong **)(pFVar20 + 0x28) = plStack_a0;
  plStack_a0 = (longlong *)0x0;
  *(longlong *)(pFVar20 + 0x10) = local_b8;
  *(longlong *)(pFVar20 + 0x18) = lStack_b0;
  *(longlong *)(pFVar20 + 0x20) = local_a8;
  if (*(longlong *)pFVar20 != 0) {
    local_c8 = (UBaseMeshProcessingTool *)0x0;
  }
  *(longlong *)(pFVar20 + 0x30) = local_98;
  *(longlong **)(pFVar20 + 0x58) = plStack_70;
  plStack_70 = (longlong *)0x0;
  *(longlong *)(pFVar20 + 0x40) = local_88;
  *(longlong *)(pFVar20 + 0x48) = lStack_80;
  *(longlong *)(pFVar20 + 0x50) = local_78;
  if (*(longlong *)(pFVar20 + 0x30) != 0) {
    local_98 = 0;
  }
  pFVar20[0x60] = local_68;
  *(FWeakObjectPtr *)(pFVar20 + 100) = local_64;
  local_e0 = iVar3;
  local_d8 = this;
  TMulticastDelegateRegistration<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>::
  AddLambda<_UBaseMeshProcessingTool::AddOptionalPropertySet_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>
              *)&param_1->OnModified,(<lambda_1> *)local_d0);
  if (local_98 != 0) {
    plVar19 = &local_88;
    if (plStack_70 != (longlong *)0x0) {
      plVar19 = plStack_70;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (local_c8 != (UBaseMeshProcessingTool *)0x0) {
    plVar19 = &local_b8;
    if (plStack_a0 != (longlong *)0x0) {
      plVar19 = plStack_a0;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar19 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar19 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar19 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar19 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  return;
}

// CanAccept @ 14ca7d5b0

bool __thiscall UBaseMeshProcessingTool::CanAccept(UBaseMeshProcessingTool *this)

{
  UMeshOpPreviewWithBackgroundCompute *pUVar1;
  UPreviewMesh *this_00;
  char cVar2;
  FDynamicMesh3 *pFVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 0x3a8))();
  if ((((cVar2 != '\0') && (this->bResultValid != false)) &&
      (pUVar1 = (this->Preview).field0_0x0.DebugPtr, pUVar1->bResultValid != false)) &&
     (this_00 = (pUVar1->PreviewMesh).field0_0x0.DebugPtr, this_00 != (UPreviewMesh *)0x0)) {
    pFVar3 = UPreviewMesh::GetMesh(this_00);
    if (pFVar3 != (FDynamicMesh3 *)0x0) {
      pFVar3 = UPreviewMesh::GetMesh((pUVar1->PreviewMesh).field0_0x0.DebugPtr);
      if (0 < (pFVar3->TriangleRefCounts).UsedCount) {
        return true;
      }
    }
  }
  return false;
}

// GetAcceptTransactionName @ 14ca8d8c0

FText * __thiscall
UBaseMeshProcessingTool::GetAcceptTransactionName
          (UBaseMeshProcessingTool *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"UBaseMeshProcessingTool",
             L"BaseMeshProcessingToolTransactionName",L"Update Mesh");
  return __return_storage_ptr__;
}

// GetActiveWeightMap @ 14ca8dc00

TSharedPtr<UE::Geometry::TIndexedWeightMap<float>,1> * __thiscall
UBaseMeshProcessingTool::GetActiveWeightMap(UBaseMeshProcessingTool *this)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<UE::Geometry::TIndexedWeightMap<float>,1> *pTVar3;
  
  if ((this->ActiveWeightMap).Object == (TIndexedWeightMap<float> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveWeightMap.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\BaseTools\\BaseMeshProcessingTool.cpp"
                       ,0x191,
                       L"Weight Map has not been initialized - must call SetupWeightMapPropertySet() in property set"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<UE::Geometry::TIndexedWeightMap<float>,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->ActiveWeightMap;
}

// GetInitialBoundaryLoops @ 14ca90050

TSharedPtr<UE::Geometry::FMeshBoundaryLoops,1> * __thiscall
UBaseMeshProcessingTool::GetInitialBoundaryLoops(UBaseMeshProcessingTool *this)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<UE::Geometry::FMeshBoundaryLoops,1> *pTVar3;
  
  if ((this->InitialBoundaryLoops).Object == (FMeshBoundaryLoops *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InitialBoundaryLoops.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\BaseTools\\BaseMeshProcessingTool.cpp"
                       ,0x157,
                       L"Initial Boundary Loops have not been computed - must return true from RequiresInitialBoundaryLoops()"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<UE::Geometry::FMeshBoundaryLoops,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->InitialBoundaryLoops;
}

// GetInitialVtxNormals @ 14ca900a0

TSharedPtr<UE::Geometry::FMeshNormals,1> * __thiscall
UBaseMeshProcessingTool::GetInitialVtxNormals(UBaseMeshProcessingTool *this)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<UE::Geometry::FMeshNormals,1> *pTVar3;
  
  if ((this->InitialVtxNormals).Object == (FMeshNormals *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InitialVtxNormals.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\BaseTools\\BaseMeshProcessingTool.cpp"
                       ,0x151,
                       L"Initial Vertex Normals have not been computed - must return true from RequiresInitialVtxNormals()"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<UE::Geometry::FMeshNormals,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->InitialVtxNormals;
}

// GetPrivateStaticClass @ 14ca90e40

UClass * __cdecl UBaseMeshProcessingTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseMeshProcessingTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"BaseMeshProcessingTool",
               &Z_Registration_Info_UClass_UBaseMeshProcessingTool.InnerSingleton,
               StaticRegisterNativesUBaseMeshProcessingTool,0x4a0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseMeshProcessingTool>,
               InternalVTableHelperCtorCaller<UBaseMeshProcessingTool>,local_res8,
               USingleTargetWithSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseMeshProcessingTool.InnerSingleton;
}

// GetToolMessageString @ 14ca93c00

FText * __thiscall
UBaseMeshProcessingTool::GetToolMessageString
          (UBaseMeshProcessingTool *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// HasAccept @ 14ca94a50

bool __thiscall UBaseMeshProcessingTool::HasAccept(UBaseMeshProcessingTool *this)

{
  return true;
}

// HasActiveWeightMap @ 14ca94a70

bool __thiscall UBaseMeshProcessingTool::HasActiveWeightMap(UBaseMeshProcessingTool *this)

{
  bool bVar1;
  UWeightMapSetProperties *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->WeightMapPropertySet).WeakPtr);
  if (bVar1) {
    this_00 = (UWeightMapSetProperties *)FWeakObjectPtr::Get(&(this->WeightMapPropertySet).WeakPtr);
    bVar1 = UWeightMapSetProperties::HasSelectedWeightMap(this_00);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// HasCancel @ 14ca94b50

bool __thiscall UBaseMeshProcessingTool::HasCancel(UBaseMeshProcessingTool *this)

{
  return true;
}

// HasMeshTopologyChanged @ 14ca94cc0

bool __thiscall UBaseMeshProcessingTool::HasMeshTopologyChanged(UBaseMeshProcessingTool *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\BaseTools\\BaseMeshProcessingTool.h"
                     ,0x7d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return true;
}

// InitializeProperties @ 14ca96e70

void __thiscall UBaseMeshProcessingTool::InitializeProperties(UBaseMeshProcessingTool *this)

{
  return;
}

// InvalidateResult @ 14ca97450

void __thiscall UBaseMeshProcessingTool::InvalidateResult(UBaseMeshProcessingTool *this)

{
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
  this->bResultValid = false;
  return;
}

// MakeNewOperator @ 14ca98800

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall UBaseMeshProcessingTool::MakeNewOperator(UBaseMeshProcessingTool *this)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  TVar3;
  FDynamicMeshOperator *in_RDX;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\BaseTools\\BaseMeshProcessingTool.h"
                     ,0x73,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (FDynamicMeshOperator *)(*pcVar1)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar3.Ptr;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// OnOptionalPropSetModified @ 14ca9acd0

void __thiscall
UBaseMeshProcessingTool::OnOptionalPropSetModified(UBaseMeshProcessingTool *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  
  uVar4 = 0;
  if (param_1 < (this->OptionalProperties).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->OptionalProperties).AllocatorInstance.Data;
  UE::Core::Private::Function::CheckCallable(*(void **)(pFVar1 + (longlong)param_1 * 0x70 + 0x30));
  pcVar2 = *(code **)(pFVar1 + (longlong)param_1 * 0x70 + 0x30);
  pFVar6 = pFVar1 + (longlong)param_1 * 0x70 + 0x40;
  if (*(FScriptContainerElement **)(pFVar1 + (longlong)param_1 * 0x70 + 0x58) !=
      (FScriptContainerElement *)0x0) {
    pFVar6 = *(FScriptContainerElement **)(pFVar1 + (longlong)param_1 * 0x70 + 0x58);
  }
  uVar5 = (**(code **)(*(longlong *)pFVar6 + 8))();
  (*pcVar2)(uVar5);
  if (pFVar1[(longlong)param_1 * 0x70 + 0x60] != (FScriptContainerElement)0x0) {
    (**(code **)(this->_padding_ + 0x428))(this);
  }
  return;
}

// OnSelectedWeightMapChanged @ 14ca9b0d0

void __thiscall
UBaseMeshProcessingTool::OnSelectedWeightMapChanged(UBaseMeshProcessingTool *this,bool param_1)

{
  FName FVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  TReferenceControllerBase<1> *pTVar6;
  UObject *pUVar7;
  FMeshDescription *pFVar8;
  UWeightMapSetProperties *this_00;
  uint uVar9;
  TIndexedWeightMap<float> *pTVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  FGetMeshParameters local_78;
  TIndexedWeightMap<float> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  
  pTVar6 = ::operator_new(0x28);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar10 = (TIndexedWeightMap<float> *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10 = (TIndexedWeightMap<float> *)(pTVar6 + 1);
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TIndexedWeightMap_M_Geometry_UE___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    if ((pTVar10 == (TIndexedWeightMap<float> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if ((pTVar10 == (TIndexedWeightMap<float> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar7 = FWeakObjectPtr::Get(&(this->WeightMapPropertySet).WeakPtr);
  FVar1.ComparisonIndex.Value = *(uint *)&pUVar7[4].field_0x10;
  FVar1.Number = *(uint *)&pUVar7[4].field_0x14;
  local_78.bHaveRequestLOD = false;
  local_78._1_3_ = 0;
  local_78.RequestLOD = Default;
  local_78.bWantMeshTangents = false;
  local_78._9_3_ = 0;
  pFVar8 = UE::ToolTarget::GetMeshDescription((UToolTarget *)this->_padding_,&local_78);
  fVar3 = __real_3f800000;
  bVar4 = UE::WeightMaps::GetVertexWeightMap(pFVar8,FVar1,pTVar10,__real_3f800000);
  if (bVar4) {
    pUVar7 = FWeakObjectPtr::Get(&(this->WeightMapPropertySet).WeakPtr);
    if (*(char *)(pUVar7 + 5) != '\0') {
      if ((pTVar10 == (TIndexedWeightMap<float> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar11 = (longlong)(pTVar10->Values).ArrayNum;
      uVar9 = 0;
      if (0 < lVar11) {
        lVar12 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar9 < (pTVar10->Values).ArrayNum) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          fVar13 = fVar3 - *(float *)((pTVar10->Values).AllocatorInstance.Data + lVar12 * 4);
          if (0.0 <= fVar13) {
            if (fVar3 <= fVar13) {
              fVar13 = fVar3;
            }
          }
          else {
            fVar13 = 0.0;
          }
          uVar5 = 0;
          if ((int)uVar9 < (pTVar10->Values).ArrayNum) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar9 = uVar9 + 1;
          *(float *)((pTVar10->Values).AllocatorInstance.Data + lVar12 * 4) = fVar13;
          lVar12 = lVar12 + 1;
        } while (lVar12 < lVar11);
      }
    }
  }
  else {
    this_00 = (UWeightMapSetProperties *)FWeakObjectPtr::Get(&(this->WeightMapPropertySet).WeakPtr);
    UWeightMapSetProperties::SetSelectedFromWeightMapIndex(this_00,-1);
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = (this->ActiveWeightMap).Object;
  pTStack_60 = (this->ActiveWeightMap).SharedReferenceCount.ReferenceController;
  (this->ActiveWeightMap).Object = pTVar10;
  (this->ActiveWeightMap).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  if (param_1) {
    (**(code **)(this->_padding_ + 0x428))(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// OnShutdown @ 14ca9c400

void __thiscall
UBaseMeshProcessingTool::OnShutdown(UBaseMeshProcessingTool *this,EToolShutdownType param_1)

{
  return;
}

// OnTick @ 14ca9c550

void __thiscall UBaseMeshProcessingTool::OnTick(UBaseMeshProcessingTool *this,float param_1)

{
  UMeshOpPreviewWithBackgroundCompute::Tick((this->Preview).field0_0x0.DebugPtr,param_1);
  return;
}

// Render @ 14caa0050

void __thiscall
UBaseMeshProcessingTool::Render(UBaseMeshProcessingTool *this,IToolsContextRenderAPI *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014caa0053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x430))();
  return;
}

// RequiresInitialBoundaryLoops @ 14caa0130

bool __thiscall UBaseMeshProcessingTool::RequiresInitialBoundaryLoops(UBaseMeshProcessingTool *this)

{
  return false;
}

// RequiresInitialVtxNormals @ 14caa0140

bool __thiscall UBaseMeshProcessingTool::RequiresInitialVtxNormals(UBaseMeshProcessingTool *this)

{
  return false;
}

// RequiresScaleNormalization @ 14caa0180

bool __thiscall UBaseMeshProcessingTool::RequiresScaleNormalization(UBaseMeshProcessingTool *this)

{
  return true;
}

// SavePropertySets @ 14caa06e0

void __thiscall UBaseMeshProcessingTool::SavePropertySets(UBaseMeshProcessingTool *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr *this_00;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_38;
  
  pFVar5 = (this->OptionalProperties).AllocatorInstance.Data;
  iVar1 = (this->OptionalProperties).ArrayNum;
  this_00 = (FWeakObjectPtr *)(pFVar5 + 100);
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x70;
  while( true ) {
    if ((this->OptionalProperties).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UBaseMeshProcessingTool::FOptionalPropertySet,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    bVar3 = FWeakObjectPtr::IsValid(this_00);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get(this_00);
      pcVar2 = *(code **)(*(longlong *)pUVar4 + 0x2b0);
      ::FString::FString(&local_38,L"");
      (*pcVar2)(pUVar4,this,&local_38);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = pFVar5 + 0x70;
    this_00 = this_00 + 0xe;
  }
  bVar3 = FWeakObjectPtr::IsValid(&(this->WeightMapPropertySet).WeakPtr);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->WeightMapPropertySet).WeakPtr);
    pcVar2 = *(code **)(*(longlong *)pUVar4 + 0x2b0);
    ::FString::FString(&local_38,L"");
    (*pcVar2)(pUVar4,this,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Setup @ 14caa54d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UBaseMeshProcessingTool::Setup(UBaseMeshProcessingTool *this)

{
  int *piVar1;
  FDynamicMesh3 *this_00;
  UObjectBaseUtility *pUVar2;
  FName FVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  void *_Src;
  bool bVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  UClass *pUVar15;
  IDynamicMeshOperatorFactory *pIVar16;
  FDynamicMesh3 *pFVar17;
  double *pdVar18;
  FName *pFVar19;
  UMeshOpPreviewWithBackgroundCompute *pUVar20;
  UWorld *pUVar21;
  IDynamicMeshOperatorFactory *pIVar22;
  UInteractiveToolManager *pUVar23;
  UMaterialInterface *pUVar24;
  longlong *plVar25;
  undefined8 uVar26;
  longlong lVar27;
  ForAnyElementType FVar28;
  TFuture<void> *pTVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  uint uVar34;
  uint uVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined4 uVar44;
  double dVar45;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auStackY_628 [32];
  ForAnyElementType local_5d8;
  undefined8 local_5d0;
  undefined1 local_5c8 [8];
  UBaseMeshProcessingTool *local_5c0;
  TFuture<void> local_5b8;
  TFuture<void> local_5a8;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_598;
  void *local_588;
  undefined8 local_580;
  FGetMeshParameters local_578;
  double local_568;
  double dStack_560;
  double local_558;
  <lambda_1> local_550;
  <lambda_2> local_548;
  TVector<double>_u_0 local_540;
  TVector<double>_u_0 local_528;
  TVector<double>_u_0 local_510;
  double local_4f8;
  double local_4f0;
  double local_4e8;
  FName local_4e0;
  TVector2<double> local_4d8;
  longlong *local_4c8 [2];
  TVector<double>_u_0 local_4b8;
  double local_4a0;
  double dStack_498;
  double local_490;
  undefined1 local_488 [16];
  double local_478;
  TUniqueFunction<void___cdecl(void)> local_468;
  TUniqueFunction<void___cdecl(void)> local_438;
  undefined1 local_408 [16];
  FDynamicMesh3 local_3e8;
  undefined1 local_1b8 [128];
  undefined1 local_138 [96];
  undefined1 local_d8 [96];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_628;
  UInteractiveTool::Setup((UInteractiveTool *)this);
  pUVar2 = (UObjectBaseUtility *)this->_padding_;
  pIVar22 = (IDynamicMeshOperatorFactory *)0x0;
  pIVar16 = pIVar22;
  if (pUVar2 != (UObjectBaseUtility *)0x0) {
    pUVar15 = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
    pIVar16 = UObjectBaseUtility::GetInterfaceAddress(pUVar2,pUVar15);
  }
  (**(code **)((longlong)*pIVar16 + 0x20))(pIVar16,0);
  local_5c0 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  if ((((UBaseMeshProcessingTool **)this->_padding_ <= &local_5c0) &&
      (&local_5c0 <
       (UBaseMeshProcessingTool **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar13 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar13 + 1;
  *(UBaseMeshProcessingTool **)(this->_padding_ + (longlong)iVar13 * 8) = local_5c0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_5c0 != (UBaseMeshProcessingTool *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_5c0);
  }
  local_578.bHaveRequestLOD = false;
  local_578._1_3_ = 0;
  this_00 = &this->InitialMesh;
  local_578.RequestLOD = Default;
  local_578.bWantMeshTangents = false;
  local_578._9_3_ = 0;
  pFVar17 = UE::ToolTarget::GetDynamicMeshCopy(&local_3e8,(UToolTarget *)this->_padding_,&local_578)
  ;
  UE::Geometry::FDynamicMesh3::operator=(this_00,pFVar17);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_3e8);
  cVar12 = (**(code **)(this->_padding_ + 0x450))(this);
  uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (cVar12 == '\0') {
    (this->SrcTranslate).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
    ;
    (this->SrcTranslate).field0_0x0._s_0.Y = (double)uVar26;
    (this->SrcTranslate).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
    ;
    this->SrcScale = 1.0;
    pdVar18 = (double *)(**(code **)((longlong)*pIVar16 + 0x28))(pIVar16,local_d8);
    dVar45 = pdVar18[1];
    (this->OverrideTransform).Rotation.XY.m128d_f64[0] = *pdVar18;
    (this->OverrideTransform).Rotation.XY.m128d_f64[1] = dVar45;
    dVar45 = pdVar18[3];
    (this->OverrideTransform).Rotation.ZW.m128d_f64[0] = pdVar18[2];
    (this->OverrideTransform).Rotation.ZW.m128d_f64[1] = dVar45;
    dVar45 = pdVar18[5];
    (this->OverrideTransform).Translation.XY.m128d_f64[0] = pdVar18[4];
    (this->OverrideTransform).Translation.XY.m128d_f64[1] = dVar45;
    dVar45 = pdVar18[7];
    (this->OverrideTransform).Translation.ZW.m128d_f64[0] = pdVar18[6];
    (this->OverrideTransform).Translation.ZW.m128d_f64[1] = dVar45;
    dVar45 = pdVar18[9];
    (this->OverrideTransform).Scale3D.XY.m128d_f64[0] = pdVar18[8];
    (this->OverrideTransform).Scale3D.XY.m128d_f64[1] = dVar45;
    uVar44 = *(undefined4 *)((longlong)pdVar18 + 0x54);
    uVar9 = *(undefined4 *)(pdVar18 + 0xb);
    uVar10 = *(undefined4 *)((longlong)pdVar18 + 0x5c);
    bVar11 = false;
    *(undefined4 *)(this->OverrideTransform).Scale3D.ZW.m128d_f64 = *(undefined4 *)(pdVar18 + 10);
    *(undefined4 *)((longlong)(this->OverrideTransform).Scale3D.ZW.m128d_f64 + 4) = uVar44;
    *(undefined4 *)((this->OverrideTransform).Scale3D.ZW.m128d_f64 + 1) = uVar9;
    *(undefined4 *)((longlong)(this->OverrideTransform).Scale3D.ZW.m128d_f64 + 0xc) = uVar10;
  }
  else {
    UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVolumeArea(&local_4d8,this_00);
    auVar46._0_8_ = local_4d8.field0_0x0._s_0.Y * __real_3fc5555555555555;
    auVar46._8_8_ = 0;
    auVar46 = sqrtpd(unaff_XMM6,auVar46);
    dVar45 = auVar46._0_8_;
    if (auVar46._0_8_ <= __real_3f847ae147ae147b) {
      dVar45 = __real_3f847ae147ae147b;
    }
    UE::Geometry::FDynamicMesh3::GetBounds
              (this_00,(TAxisAlignedBox3<double> *)&local_510._s_0,false);
    dVar38 = (local_510._s_0.Y + local_4f0) * __real_3fe0000000000000;
    dVar36 = (local_510._s_0.Z + local_4e8) * __real_3fe0000000000000;
    (this->SrcTranslate).field0_0x0._s_0.X =
         (local_510._s_0.X + local_4f8) * __real_3fe0000000000000;
    *(double *)((longlong)&(this->SrcTranslate).field0_0x0 + 8) = dVar38;
    *(double *)((longlong)&(this->SrcTranslate).field0_0x0 + 0x10) = dVar36;
    uVar34 = (uint)__xmm_80000000000000008000000000000000;
    uVar35 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar26 = *(undefined8 *)&(this->SrcTranslate).field0_0x0;
    local_540._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) ^ uVar35,SUB84(dVar38,0) ^ uVar34);
    local_540._s_0.X =
         (double)CONCAT44((uint)((ulonglong)uVar26 >> 0x20) ^ uVar35,(uint)uVar26 ^ uVar34);
    local_540._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) ^ uVar35,SUB84(dVar36,0) ^ uVar34);
    MeshTransforms::Translate(this_00,(TVector<double> *)&local_540._s_0,All);
    dVar36 = __real_3ff0000000000000;
    this->SrcScale = dVar45;
    dVar36 = dVar36 / dVar45;
    local_4b8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_4b8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_4b8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_528._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar36;
    local_528._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar36;
    local_528._s_0.Z = dVar36 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    MeshTransforms::Scale
              (this_00,(TVector<double> *)&local_528._s_0,(TVector<double> *)&local_4b8._s_0,false,
               false);
    pdVar18 = (double *)(**(code **)((longlong)*pIVar16 + 0x28))(pIVar16,local_138);
    local_4a0 = (this->SrcTranslate).field0_0x0._s_0.X;
    dStack_498 = (this->SrcTranslate).field0_0x0._s_0.Y;
    dVar45 = pdVar18[1];
    (this->OverrideTransform).Rotation.XY.m128d_f64[0] = *pdVar18;
    (this->OverrideTransform).Rotation.XY.m128d_f64[1] = dVar45;
    dVar45 = pdVar18[3];
    (this->OverrideTransform).Rotation.ZW.m128d_f64[0] = pdVar18[2];
    (this->OverrideTransform).Rotation.ZW.m128d_f64[1] = dVar45;
    dVar45 = pdVar18[5];
    (this->OverrideTransform).Translation.XY.m128d_f64[0] = pdVar18[4];
    (this->OverrideTransform).Translation.XY.m128d_f64[1] = dVar45;
    dVar45 = pdVar18[7];
    (this->OverrideTransform).Translation.ZW.m128d_f64[0] = pdVar18[6];
    (this->OverrideTransform).Translation.ZW.m128d_f64[1] = dVar45;
    dVar45 = pdVar18[9];
    (this->OverrideTransform).Scale3D.XY.m128d_f64[0] = pdVar18[8];
    (this->OverrideTransform).Scale3D.XY.m128d_f64[1] = dVar45;
    local_490 = (this->SrcTranslate).field0_0x0._s_0.Z;
    dVar6 = pdVar18[10];
    dVar36 = pdVar18[0xb];
    (this->OverrideTransform).Scale3D.ZW.m128d_f64[0] = dVar6;
    (this->OverrideTransform).Scale3D.ZW.m128d_f64[1] = dVar36;
    dVar38 = local_4a0 * (this->OverrideTransform).Scale3D.XY.m128d_f64[0];
    dVar7 = dStack_498 * (this->OverrideTransform).Scale3D.XY.m128d_f64[1];
    uVar44 = (undefined4)((ulonglong)dVar7 >> 0x20);
    local_408 = *(undefined1 (*) [16])(this->OverrideTransform).Rotation.XY.m128d_f64;
    auVar47._8_4_ = SUB84(dVar7,0);
    auVar47._0_8_ = dVar38;
    auVar47._12_4_ = uVar44;
    dVar8 = (this->OverrideTransform).Rotation.ZW.m128d_f64[1];
    bVar11 = true;
    dVar6 = local_490 * dVar6;
    dVar36 = dVar36 * 0.0;
    auVar46 = *(undefined1 (*) [16])(this->OverrideTransform).Rotation.ZW.m128d_f64;
    auVar37 = blendpd(local_408,auVar46,2);
    dVar45 = auVar46._0_8_;
    auVar48._0_8_ = auVar47._8_8_ * local_408._0_8_ - local_408._8_8_ * dVar38;
    auVar48._8_8_ = dVar6 * local_408._8_8_ - dVar45 * dVar7;
    auVar30._8_4_ = SUB84(dVar7,0);
    auVar30._0_8_ = dVar38;
    auVar30._12_4_ = uVar44;
    auVar40._8_4_ = SUB84(dVar36,0);
    auVar40._0_8_ = dVar6;
    auVar40._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
    auVar31 = blendpd(auVar30,auVar40,2);
    auVar32._0_8_ = auVar31._0_8_ * dVar45 - auVar37._0_8_ * dVar6;
    auVar32._8_8_ = auVar31._8_8_ * auVar46._8_8_ - auVar37._8_8_ * dVar36;
    auVar31 = *(undefined1 (*) [16])(this->OverrideTransform).Rotation.XY.m128d_f64;
    auVar37 = blendpd(auVar48,auVar32,2);
    dVar36 = auVar48._8_8_ + auVar48._8_8_;
    dVar5 = auVar32._0_8_ + auVar32._0_8_;
    uVar44 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar49._0_8_ = auVar37._0_8_ + auVar37._0_8_;
    auVar49._8_8_ = auVar37._8_8_ + auVar37._8_8_;
    auVar42._8_4_ = SUB84(dVar5,0);
    auVar42._0_8_ = dVar36;
    auVar42._12_4_ = uVar44;
    auVar39._8_4_ = SUB84(dVar5,0);
    auVar39._0_8_ = dVar36;
    auVar39._12_4_ = uVar44;
    auVar40 = blendpd(auVar39,auVar49,2);
    auVar37 = blendpd(auVar31,auVar46,2);
    local_558 = (this->OverrideTransform).Scale3D.ZW.m128d_f64[0];
    auVar43._0_8_ = auVar42._8_8_ * auVar31._0_8_ - auVar31._8_8_ * dVar36;
    auVar43._8_8_ = auVar49._0_8_ * auVar31._8_8_ - dVar45 * dVar5;
    auVar41._0_8_ = auVar40._0_8_ * dVar45 - auVar37._0_8_ * auVar49._0_8_;
    auVar41._8_8_ = auVar40._8_8_ * auVar46._8_8_ - auVar37._8_8_ * auVar49._8_8_;
    auVar33._8_4_ = SUB84(auVar43._8_8_,0);
    auVar33._0_8_ = auVar43._0_8_;
    auVar33._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
    dVar38 = dVar36 * dVar8 + dVar38 + auVar33._8_8_;
    dVar5 = dVar5 * dVar8 + dVar7 + auVar41._0_8_;
    local_568 = (this->OverrideTransform).Scale3D.XY.m128d_f64[0];
    dStack_560 = (this->OverrideTransform).Scale3D.XY.m128d_f64[1];
    local_488._8_4_ = SUB84(dVar5,0);
    local_488._0_8_ = dVar38;
    local_488._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    dVar5 = dVar5 + (this->OverrideTransform).Translation.XY.m128d_f64[1];
    auVar46 = blendpd(auVar43,auVar41,2);
    local_478 = auVar49._0_8_ * dVar8 + dVar6 + auVar46._0_8_;
    dVar45 = (this->OverrideTransform).Translation.ZW.m128d_f64[0];
    dVar36 = (this->OverrideTransform).Translation.ZW.m128d_f64[1] + 0.0;
    auVar37._8_4_ = SUB84(dVar5,0);
    auVar37._0_8_ = dVar38 + (this->OverrideTransform).Translation.XY.m128d_f64[0];
    auVar37._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])(this->OverrideTransform).Translation.XY.m128d_f64 = auVar37;
    auVar31._8_4_ = SUB84(dVar36,0);
    auVar31._0_8_ = local_478 + dVar45;
    auVar31._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
    *(undefined1 (*) [16])(this->OverrideTransform).Translation.ZW.m128d_f64 = auVar31;
    dVar45 = (double)(float)this->SrcScale;
    local_558 = local_558 * dVar45;
    local_568 = local_568 * dVar45;
    dStack_560 = dStack_560 * dVar45;
    (this->OverrideTransform).Scale3D.XY.m128d_f64[0] = local_568;
    (this->OverrideTransform).Scale3D.XY.m128d_f64[1] = dStack_560;
    (this->OverrideTransform).Scale3D.ZW.m128d_f64[0] = local_558;
    (this->OverrideTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
  }
  this->bIsScaleNormalizationApplied = bVar11;
  local_5d8.Data = (FScriptContainerElement *)0x0;
  local_5d0 = 0;
  cVar12 = (**(code **)(this->_padding_ + 0x438))();
  if (cVar12 != '\0') {
    local_468._0_8_ = 0;
    local_468._40_8_ = 0;
    local_550.__this = this;
    Async<_UBaseMeshProcessingTool::Setup_::__l10::<lambda_1>_>
              (&local_5b8,ThreadPool,&local_550,&local_468);
    if (((local_5d8.Data <= &local_5b8) &&
        (&local_5b8 < (TFuture<void> *)(local_5d8.Data + (longlong)local_5d0._4_4_ * 0x10))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar13 = (int)local_5d0;
    if ((int)local_5d0 == local_5d0._4_4_) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_5d8,(int *)((longlong)&local_5d0 + 4));
    }
    local_5d0 = CONCAT44(local_5d0._4_4_,iVar13 + 1);
    *(undefined8 *)(local_5d8.Data + (longlong)iVar13 * 0x10) = local_5b8._0_8_;
    *(undefined8 *)(local_5d8.Data + (longlong)iVar13 * 0x10 + 8) = local_5b8._8_8_;
    local_5b8._8_8_ = 0;
    local_5b8._0_8_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  cVar12 = (**(code **)(this->_padding_ + 0x440))(this);
  if (cVar12 != '\0') {
    local_438._0_8_ = 0;
    local_438._40_8_ = 0;
    local_548.__this = this;
    Async<_UBaseMeshProcessingTool::Setup_::__l13::<lambda_2>_>
              (&local_5a8,ThreadPool,&local_548,&local_438);
    if (((local_5d8.Data <= &local_5a8) &&
        (&local_5a8 < (TFuture<void> *)(local_5d8.Data + (longlong)local_5d0._4_4_ * 0x10))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar13 = (int)local_5d0;
    if ((int)local_5d0 == local_5d0._4_4_) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_5d8,(int *)((longlong)&local_5d0 + 4));
    }
    local_5d0 = CONCAT44(local_5d0._4_4_,iVar13 + 1);
    *(undefined8 *)(local_5d8.Data + (longlong)iVar13 * 0x10) = local_5a8._0_8_;
    *(undefined8 *)(local_5d8.Data + (longlong)iVar13 * 0x10 + 8) = local_5a8._8_8_;
    local_5a8._8_8_ = 0;
    local_5a8._0_8_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  pFVar19 = ::FName::FName(&local_4e0,"Preview");
  FVar3 = *pFVar19;
  if (FVar3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar15 = Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar15);
  local_1b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_1b8._56_8_ = (UPackage *)0x0;
  local_1b8._24_4_ = RF_NoFlags;
  local_1b8._40_8_ = (UObject *)0x0;
  local_1b8[0x20] = false;
  local_1b8._8_8_ = this;
  local_1b8._16_8_ = FVar3;
  pUVar20 = (UMeshOpPreviewWithBackgroundCompute *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar25 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar25 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar25 + 0x10))(plVar25);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar20 != (UMeshOpPreviewWithBackgroundCompute *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar20);
  }
  (this->Preview).field0_0x0.DebugPtr = pUVar20;
  pUVar21 = (UWorld *)(**(code **)(this->_padding_ + 0x3c0))(this);
  pIVar16 = (IDynamicMeshOperatorFactory *)&this->_padding_;
  if (this == (UBaseMeshProcessingTool *)0x0) {
    pIVar16 = pIVar22;
  }
  UMeshOpPreviewWithBackgroundCompute::Setup(pUVar20,pUVar21,pIVar16);
  UPreviewMesh::SetTangentsMode
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,AutoCalculated
            );
  iVar13 = (this->InitialMesh).TriangleRefCounts.UsedCount;
  if (iVar13 < 1) {
    iVar13 = 1;
  }
  iVar14 = (int)(10000000 / (longlong)iVar13);
  iVar13 = 0x14;
  if (iVar14 < 0x14) {
    iVar13 = iVar14;
  }
  iVar14 = 1;
  if (1 < iVar13) {
    iVar14 = iVar13;
  }
  UMeshOpPreviewWithBackgroundCompute::SetMaxActiveBackgroundTasks
            ((this->Preview).field0_0x0.DebugPtr,iVar14);
  ToolSetupUtil::ApplyRenderingConfigurationToPreview
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (UToolTarget *)this->_padding_);
  pUVar2 = (UObjectBaseUtility *)this->_padding_;
  local_588 = (void *)0x0;
  local_580 = 0;
  if (pUVar2 != (UObjectBaseUtility *)0x0) {
    pUVar15 = Z_Construct_UClass_UMaterialProvider_NoRegister();
    pIVar22 = UObjectBaseUtility::GetInterfaceAddress(pUVar2,pUVar15);
  }
  (**(code **)((longlong)*pIVar22 + 0x20))(pIVar22,&local_588,0);
  pUVar20 = (this->Preview).field0_0x0.DebugPtr;
  pUVar23 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar24 = ToolSetupUtil::GetDefaultWorkingMaterial(pUVar23);
  _Src = local_588;
  lVar27 = (longlong)(int)local_580;
  local_598.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_598.ArrayNum = (int)local_580;
  if ((int)local_580 == 0) {
    local_598.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_580,0,&local_598.AllocatorInstance,(int)local_580,&local_598.ArrayMax)
    ;
    memcpy(local_598.AllocatorInstance.Data,_Src,lVar27 << 3);
  }
  UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials
            (pUVar20,&local_598,pUVar24,(UMaterialInterface *)0x0);
  ((this->Preview).field0_0x0.DebugPtr)->SecondsBeforeWorkingMaterial = 0.75;
  UPreviewMesh::SetTransform
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             &this->OverrideTransform);
  UPreviewMesh::UpdatePreview
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,this_00,
             FullUpdate,AllVertexAttribs);
  UMeshOpPreviewWithBackgroundCompute::SetVisibility((this->Preview).field0_0x0.DebugPtr,true);
  (**(code **)(this->_padding_ + 0x400))(this);
  (**(code **)(this->_padding_ + 0x410))(this);
  iVar13 = (int)local_5d0;
  pTVar29 = (TFuture<void> *)(local_5d8.Data + (longlong)(int)local_5d0 * 0x10);
  FVar28.Data = local_5d8.Data;
  while( true ) {
    if ((int)local_5d0 != iVar13) {
      `TCheckedPointerIterator<TFuture<void>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_5c8);
    }
    if ((TFuture<void> *)FVar28.Data == pTVar29) break;
    if (*(longlong *)FVar28.Data != 0) {
      do {
        do {
        } while (*(longlong *)FVar28.Data == 0);
        plVar25 = *(longlong **)(*(longlong *)FVar28.Data + 0x60);
        cVar12 = (**(code **)(*plVar25 + 0x20))(plVar25,0xffffffff,0);
      } while (cVar12 == '\0');
    }
    FVar28.Data = FVar28.Data + 0x10;
  }
  (**(code **)(this->_padding_ + 0x428))(this);
  plVar25 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar4 = *(code **)(*plVar25 + 0x360);
  uVar26 = (**(code **)(this->_padding_ + 0x3f0))(this,local_4c8);
  (*pcVar4)(plVar25,uVar26,2);
  if (local_4c8[0] != (longlong *)0x0) {
    (**(code **)(*local_4c8[0] + 0x10))();
  }
  if (local_588 != (void *)0x0) {
    FMemory::Free(local_588);
  }
  DestructItems<TFuture<void>,int>((TFuture<void> *)local_5d8.Data,(int)local_5d0);
  if ((TFuture<void> *)local_5d8.Data != (TFuture<void> *)0x0) {
    FMemory::Free(local_5d8.Data);
  }
  return;
}

// SetupWeightMapPropertySet @ 14caa6170

void __thiscall
UBaseMeshProcessingTool::SetupWeightMapPropertySet
          (UBaseMeshProcessingTool *this,UWeightMapSetProperties *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  FMeshDescription *pFVar4;
  TPropertyWatcher<FName> *pTVar5;
  undefined ***pppuVar6;
  FString local_88;
  code *local_78 [2];
  undefined **local_68;
  UBaseMeshProcessingTool *local_60;
  undefined ***local_50;
  code *local_48 [2];
  code *local_38 [3];
  undefined8 local_20;
  
  (**(code **)(this->_padding_ + 0x318))();
  pcVar2 = *(code **)(param_1->_padding_ + 0x2b8);
  ::FString::FString(&local_88,L"");
  (*pcVar2)(param_1,this,&local_88);
  if ((void *)CONCAT44(local_88.Data.AllocatorInstance.Data._4_4_,
                       local_88.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_88.Data.AllocatorInstance.Data._4_4_,
                                   local_88.Data.AllocatorInstance.Data._0_4_));
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeightMapPropertySet).WeakPtr,(FObjectPtr)&local_88);
  local_88.Data.AllocatorInstance.Data._0_1_ = false;
  local_88.Data.AllocatorInstance.Data._1_3_ = 0;
  local_88.Data.AllocatorInstance.Data._4_4_ = Default;
  local_88.Data.ArrayNum = 0;
  pFVar4 = UE::ToolTarget::GetMeshDescription
                     ((UToolTarget *)this->_padding_,(FGetMeshParameters *)&local_88);
  UWeightMapSetProperties::InitializeFromMesh(param_1,pFVar4);
  local_50 = (undefined ***)0x0;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UBaseMeshProcessingTool::SetupWeightMapPropertySet'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UBaseMeshProcessingTool::SetupWeightMapPropertySet'::__l2::<lambda_1>,void,FName_const_&>
                ::Call;
  local_60 = this;
  pTVar5 = ::operator_new(0xa0);
  if (pTVar5 == (TPropertyWatcher<FName> *)0x0) {
    pTVar5 = (TPropertyWatcher<FName> *)0x0;
  }
  else {
    local_48[0] = local_78[0];
    local_20 = 0;
    if (local_78[0] != (code *)0x0) {
      pppuVar6 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar6 = local_50;
      }
      (*(code *)**pppuVar6)(pppuVar6,local_48 + 2);
    }
    pTVar5 = FWatchablePropertySet::TPropertyWatcher<FName>::TPropertyWatcher<FName><FName,void>
                       (pTVar5,&param_1->WeightMap,
                        (TFunction<void___cdecl(FName_const_&)> *)local_48);
  }
  iVar3 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar3 + 1;
  *(TPropertyWatcher<FName> **)(param_1->_padding_ + (longlong)iVar3 * 8) = pTVar5;
  if (local_78[0] != (code *)0x0) {
    pppuVar6 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar6 = local_50;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  local_50 = (undefined ***)0x0;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UBaseMeshProcessingTool::SetupWeightMapPropertySet'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UBaseMeshProcessingTool::SetupWeightMapPropertySet'::__l2::<lambda_2>,void,bool_const_&>
                ::Call;
  local_60 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&param_1->_padding_,&param_1->bInvertWeightMap,
             (TFunction<void___cdecl(bool_const_&)> *)local_78);
  OnSelectedWeightMapChanged(this,false);
  return;
}

// Shutdown @ 14caa6380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBaseMeshProcessingTool::Shutdown(UBaseMeshProcessingTool *this,EToolShutdownType param_1)

{
  UObjectBaseUtility *this_00;
  UMeshOpPreviewWithBackgroundCompute *this_01;
  code *pcVar1;
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> TVar2;
  char cVar3;
  bool bVar4;
  UClass *pUVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  FConversionToMeshDescriptionOptions local_b8;
  TVector<double>_u_0 local_a8;
  longlong *local_90 [2];
  TVector<double>_u_0 local_80;
  FDynamicMeshOpResult local_68;
  
  if (param_1 == Accept) {
    cVar3 = (**(code **)(this->_padding_ + 0x3a8))();
    if (cVar3 == '\0') {
      if (1 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      param_1 = Cancel;
    }
  }
  (**(code **)(this->_padding_ + 0x3b0))(this,param_1);
  (**(code **)(this->_padding_ + 0x420))();
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
    plVar6 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar5);
  }
  (**(code **)(*plVar6 + 0x20))(plVar6,1);
  this_01 = (this->Preview).field0_0x0.DebugPtr;
  if (this_01 != (UMeshOpPreviewWithBackgroundCompute *)0x0) {
    UMeshOpPreviewWithBackgroundCompute::Shutdown(this_01,&local_68);
    if (param_1 == Accept) {
      lVar7 = (**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar1 = *(code **)(*(longlong *)(lVar7 + 0x28) + 0x10);
      uVar8 = (**(code **)(this->_padding_ + 0x3f8))(this,local_90);
      (*pcVar1)(lVar7 + 0x28,uVar8);
      if (local_90[0] != (longlong *)0x0) {
        (**(code **)(*local_90[0] + 0x10))();
      }
      TVar2.Ptr = local_68.Mesh.Ptr;
      if (local_68.Mesh.Ptr == (FDynamicMesh3 *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("DynamicMeshResult != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\BaseTools\\BaseMeshProcessingTool.cpp"
                           ,0xe0,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (this->bIsScaleNormalizationApplied != false) {
        local_a8._s_0.X = this->SrcScale;
        local_80._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_80._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_80._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_a8._s_0.Y = local_a8._s_0.X;
        local_a8._s_0.Z = local_a8._s_0.X;
        MeshTransforms::Scale
                  (TVar2.Ptr,(TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_80._s_0,
                   false,false);
        MeshTransforms::Translate(TVar2.Ptr,&this->SrcTranslate,All);
      }
      bVar4 = (bool)(**(code **)(this->_padding_ + 1000))(this);
      local_b8.bSetPolyGroups = true;
      local_b8.bUpdatePositions = true;
      local_b8.bUpdateNormals = true;
      local_b8.bUpdateTangents = false;
      local_b8.bUpdateUVs = false;
      local_b8.bUpdateVtxColors = false;
      local_b8.bTransformVtxColorsSRGBToLinear = true;
      local_b8.bConvertBackToNonManifold = false;
      local_b8.bSetHardEdgesFromNormalSeams = true;
      UE::ToolTarget::CommitDynamicMeshUpdate
                ((UToolTarget *)this->_padding_,TVar2.Ptr,bVar4,&local_b8,
                 (FComponentMaterialSet *)0x0);
      lVar7 = (**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x18))(lVar7 + 0x28);
    }
    if (local_68.Mesh.Ptr != (FDynamicMesh3 *)0x0) {
      (**(code **)(local_68.Mesh.Ptr)->_padding_)(local_68.Mesh.Ptr,1);
    }
  }
  return;
}

// StaticRegisterNativesUBaseMeshProcessingTool @ 14caa70c0

void __cdecl UBaseMeshProcessingTool::StaticRegisterNativesUBaseMeshProcessingTool(void)

{
  return;
}

// UpdateOptionalPropertyVisibility @ 14caa8840

void __thiscall
UBaseMeshProcessingTool::UpdateOptionalPropertyVisibility(UBaseMeshProcessingTool *this)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  UObject *pUVar7;
  int *piVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  FWeakObjectPtr *this_00;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  pFVar10 = (this->OptionalProperties).AllocatorInstance.Data;
  iVar1 = (this->OptionalProperties).ArrayNum;
  this_00 = (FWeakObjectPtr *)(pFVar10 + 100);
  pFVar11 = pFVar10 + (longlong)iVar1 * 0x70;
  while( true ) {
    if ((this->OptionalProperties).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UBaseMeshProcessingTool::FOptionalPropertySet,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar11) break;
    bVar4 = FWeakObjectPtr::IsValid(this_00);
    if (bVar4) {
      UE::Core::Private::Function::CheckCallable(*(void **)pFVar10);
      pcVar2 = *(code **)pFVar10;
      piVar8 = &this_00[-0xb].ObjectSerialNumber;
      if (*(int **)&this_00[-8].ObjectSerialNumber != (int *)0x0) {
        piVar8 = *(int **)&this_00[-8].ObjectSerialNumber;
      }
      uVar6 = (**(code **)(*(longlong *)piVar8 + 8))();
      uVar5 = (*pcVar2)(uVar6);
      pcVar2 = *(code **)(this->_padding_ + 0x338);
      pUVar7 = FWeakObjectPtr::Get(this_00);
      (*pcVar2)(this,pUVar7,uVar5);
    }
    pFVar10 = pFVar10 + 0x70;
    this_00 = this_00 + 0xe;
  }
  bVar4 = FWeakObjectPtr::IsValid(&(this->WeightMapPropertySet).WeakPtr);
  if (bVar4) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->WeightMapPropertySetVisibleFunc);
    pcVar2 = *(code **)&this->WeightMapPropertySetVisibleFunc;
    plVar3 = *(longlong **)&(this->WeightMapPropertySetVisibleFunc).field_0x28;
    plVar9 = (longlong *)&(this->WeightMapPropertySetVisibleFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar9 = plVar3;
    }
    uVar6 = (**(code **)(*plVar9 + 8))();
    uVar5 = (*pcVar2)(uVar6);
    pcVar2 = *(code **)(this->_padding_ + 0x338);
    pUVar7 = FWeakObjectPtr::Get(&(this->WeightMapPropertySet).WeakPtr);
    (*pcVar2)(this,pUVar7,uVar5);
  }
  return;
}

// UpdateResult @ 14caa8ad0

void __thiscall UBaseMeshProcessingTool::UpdateResult(UBaseMeshProcessingTool *this)

{
  if (this->bResultValid == false) {
    this->bResultValid = ((this->Preview).field0_0x0.DebugPtr)->bResultValid;
  }
  return;
}

