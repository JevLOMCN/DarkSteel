// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 28

// StaticClass @ 14cd423b0

UClass * __cdecl UPolyEditExtrudeActivity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditExtrudeActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditExtrudeActivity",
               &Z_Registration_Info_UClass_UPolyEditExtrudeActivity.InnerSingleton,
               StaticRegisterNativesUPolyEditExtrudeActivity,0x1d0,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPolyEditExtrudeActivity>,
               InternalVTableHelperCtorCaller<UPolyEditExtrudeActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditExtrudeActivity.InnerSingleton;
}

// UPolyEditExtrudeActivity @ 14cd4fdc0

UPolyEditExtrudeActivity * __thiscall
UPolyEditExtrudeActivity::UPolyEditExtrudeActivity
          (UPolyEditExtrudeActivity *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UInteractiveToolActivity::UInteractiveToolActivity((UInteractiveToolActivity *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UInteractiveToolActivity__;
  this->ExtrudeMode = MoveAndStitch;
  this->PropertySetToUse = Extrude;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  (this->ExtrudeProperties).field0_0x0.DebugPtr = (UPolyEditExtrudeProperties *)0x0;
  (this->OffsetProperties).field0_0x0.DebugPtr = (UPolyEditOffsetProperties *)0x0;
  (this->PushPullProperties).field0_0x0.DebugPtr = (UPolyEditPushPullProperties *)0x0;
  (this->ExtrudeHeightMechanic).field0_0x0.DebugPtr = (UPlaneDistanceFromHitMechanic *)0x0;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  (this->PatchMesh).Object = (FDynamicMesh3 *)0x0;
  (this->PatchMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->NewSelectionGids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewSelectionGids).ArrayNum = 0;
  (this->NewSelectionGids).ArrayMax = 0;
  this->bIsRunning = false;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&this->ActiveSelection);
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.X = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.W = 1.0;
  this->UVScaleFactor = 1.0;
  this->bRequestedApply = false;
  return this;
}

// UPolyEditExtrudeActivity @ 14cd4fed0

UPolyEditExtrudeActivity * __thiscall
UPolyEditExtrudeActivity::UPolyEditExtrudeActivity(UPolyEditExtrudeActivity *this)

{
  undefined8 uVar1;
  
  UInteractiveToolActivity::UInteractiveToolActivity((UInteractiveToolActivity *)this);
  this->_padding_ = (longlong)&_vftable__for__UInteractiveToolActivity__;
  this->ExtrudeMode = MoveAndStitch;
  this->PropertySetToUse = Extrude;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  (this->ExtrudeProperties).field0_0x0.DebugPtr = (UPolyEditExtrudeProperties *)0x0;
  (this->OffsetProperties).field0_0x0.DebugPtr = (UPolyEditOffsetProperties *)0x0;
  (this->PushPullProperties).field0_0x0.DebugPtr = (UPolyEditPushPullProperties *)0x0;
  (this->ExtrudeHeightMechanic).field0_0x0.DebugPtr = (UPlaneDistanceFromHitMechanic *)0x0;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  (this->PatchMesh).Object = (FDynamicMesh3 *)0x0;
  (this->PatchMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->NewSelectionGids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewSelectionGids).ArrayNum = 0;
  (this->NewSelectionGids).ArrayMax = 0;
  this->bIsRunning = false;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&this->ActiveSelection);
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.X = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.W = 1.0;
  this->UVScaleFactor = 1.0;
  this->bRequestedApply = false;
  return this;
}

// ~UPolyEditExtrudeActivity @ 14cd53400

void __thiscall UPolyEditExtrudeActivity::~UPolyEditExtrudeActivity(UPolyEditExtrudeActivity *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UInteractiveToolActivity__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection(&this->ActiveSelection);
  pFVar1 = (this->NewSelectionGids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PatchMesh).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  this->_padding_ = (longlong)&___7UInteractiveToolActivity__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// ApplyExtrude @ 14cd5c900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPolyEditExtrudeActivity::ApplyExtrude(UPolyEditExtrudeActivity *this)

{
  FRefCountVector *pFVar1;
  bool *pbVar2;
  FScriptContainerElement *pFVar3;
  short sVar4;
  UPolyEditActivityContext *pUVar5;
  FDynamicMeshChange *this_00;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  FDynamicMesh3 *pFVar9;
  UObject *pUVar10;
  longlong *plVar11;
  FText *pFVar12;
  FGroupTopology *this_01;
  FDynamicMesh3 *pFVar13;
  TArrayView<int_const_,int> *pTVar14;
  ulonglong uVar15;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar16;
  undefined8 uVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  uint uVar23;
  ForAnyElementType FVar24;
  bool *pbVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  ulonglong uVar30;
  ForElementType<unsigned_int> FVar31;
  undefined1 auStackY_3c8 [32];
  undefined1 local_378 [4];
  uint local_374;
  ForAnyElementType local_370;
  undefined8 local_368;
  ForAnyElementType local_360;
  int local_358;
  int local_354;
  IndexIterator local_350;
  uint local_340 [2];
  uint local_338;
  uint uStack_334;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_330;
  undefined4 local_328;
  uint uStack_324;
  uint uStack_320;
  undefined4 uStack_31c;
  TArray<int,TSizedDefaultAllocator<32>_> local_318;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_308;
  int local_2e8;
  int local_2e4;
  int local_2e0 [2];
  FText local_2d8;
  longlong *local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2c0;
  longlong *local_2a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_298;
  TArray<int,TSizedDefaultAllocator<32>_> local_278;
  IndexIterator local_268;
  FText local_250;
  TArrayView<int_const_,int> local_240;
  undefined1 local_228 [32];
  ForElementType<unsigned_int> local_208;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  FScriptContainerElement local_1f0 [8];
  ForAnyElementType local_1e8;
  uint local_1e0;
  undefined1 local_1d8 [32];
  ForElementType<unsigned_int> local_1b8;
  uint local_1b0;
  int local_1a4;
  undefined1 local_1a0 [8];
  ForAnyElementType local_198;
  uint local_190;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_188;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_138;
  FDynamicMeshChangeTracker local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  if (((this->ExtrudeHeightMechanic).field0_0x0.DebugPtr == (UPlaneDistanceFromHitMechanic *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExtrudeHeightMechanic != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditExtrudeActivity.cpp"
                         ,0x1ec,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar9 = UPreviewMesh::GetMesh
                     ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr
                       )->PreviewMesh).field0_0x0.DebugPtr);
  if ((pFVar9->TriangleRefCounts).UsedCount == 0) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    plVar11 = (longlong *)(**(code **)(*(longlong *)pUVar10 + 0x2d8))(pUVar10);
    pcVar6 = *(code **)(*plVar11 + 0x360);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_2d8,L"UPolyEditExtrudeActivity",L"OnDeleteAllFailedMessage",
                         L"Cannot Delete Entire Mesh");
    (*pcVar6)(plVar11,pFVar12,3);
    if ((longlong *)CONCAT44(local_2d8.TextData.Reference._4_4_,local_2d8.TextData.Reference._0_4_)
        != (longlong *)0x0) {
      (**(code **)(*(longlong *)
                    CONCAT44(local_2d8.TextData.Reference._4_4_,local_2d8.TextData.Reference._0_4_)
                  + 0x10))();
    }
    pUVar5 = (this->ActivityContext).field0_0x0.DebugPtr;
    UPreviewMesh::UpdatePreview
              ((((pUVar5->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
               (pUVar5->CurrentMesh).Object,FullUpdate,AllVertexAttribs);
    return;
  }
  UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker
            (&local_e8,(((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh).Object);
  UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_e8);
  pUVar5 = (this->ActivityContext).field0_0x0.DebugPtr;
  uVar20 = 0;
  if (this->ExtrudeMode == MoveAndStitch) {
    local_318.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_318.ArrayNum = 0;
    local_318.ArrayMax = 0;
    this_01 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator->(&pUVar5->CurrentTopology);
    UE::Geometry::FGroupTopology::GetSelectedTriangles(this_01,&this->ActiveSelection,&local_318);
    local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_278,(int *)local_318.AllocatorInstance.Data,local_318.ArrayNum,0);
    UE::Geometry::FDynamicMeshChangeTracker::SaveTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>
              (&local_e8,&local_278,true);
    if (local_318.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.AllocatorInstance.Data);
    }
  }
  else {
    local_370.Data = (FScriptContainerElement *)0x0;
    local_368 = 0;
    pFVar13 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator->(&pUVar5->CurrentMesh);
    pFVar1 = &pFVar13->TriangleRefCounts;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (&local_350,pFVar1,0,
               (pFVar1->RefCounts).CurBlock * 0x200 +
               (pFVar13->TriangleRefCounts).RefCounts.CurBlockUsed);
    iVar28 = (pFVar1->RefCounts).CurBlock * 0x200 +
             (pFVar13->TriangleRefCounts).RefCounts.CurBlockUsed;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_268,pFVar1,iVar28,iVar28);
    FVar24.Data = local_370.Data;
    uVar27 = local_350._8_4_;
joined_r0x00014cd5cb13:
    local_370.Data = FVar24.Data;
    local_350._8_4_ = uVar27;
    if (uVar27 != local_268._8_4_) {
      local_374 = uVar27;
      if (((FVar24.Data <= (FScriptContainerElement *)&local_374) &&
          (local_368._4_4_ = (int)((ulonglong)local_368 >> 0x20), lVar19 = (longlong)local_368._4_4_
          , (FScriptContainerElement *)&local_374 < FVar24.Data + lVar19 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar28 = (int)local_368;
      if ((int)local_368 == local_368._4_4_) {
        iVar28 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_370,(int *)((longlong)&local_368 + 4));
      }
      uVar27 = uVar27 + 1;
      local_368 = CONCAT44(local_368._4_4_,iVar28 + 1);
      *(uint *)(local_370.Data + (longlong)iVar28 * 4) = local_374;
      FVar24.Data = local_370.Data;
      if ((int)uVar27 < (int)local_350._12_4_) {
        do {
          lVar19 = (ulonglong)(uVar27 & 0x1ff) * 2;
          if ((*(short *)(lVar19 + *(longlong *)
                                    (*(longlong *)(local_350._0_8_ + 8) +
                                    (ulonglong)(uVar27 >> 9) * 8)) != 0) &&
             (*(short *)(lVar19 + *(longlong *)
                                   (*(longlong *)(local_350._0_8_ + 8) +
                                   (ulonglong)(uVar27 >> 9) * 8)) != -1)) break;
          uVar27 = uVar27 + 1;
        } while ((int)uVar27 < (int)local_350._12_4_);
      }
      goto joined_r0x00014cd5cb13;
    }
    lVar19 = (longlong)(int)local_368;
    local_360.Data = (FScriptContainerElement *)0x0;
    local_358 = (int)local_368;
    if ((int)local_368 == 0) {
      local_354 = 0;
      iVar28 = 0;
    }
    else {
      iVar28 = (int)local_368;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar28,0,&local_360,iVar28,&local_354);
      memcpy(local_360.Data,FVar24.Data,lVar19 << 2);
      iVar28 = local_358;
    }
    pFVar26 = local_360.Data + (longlong)iVar28 * 4;
    FVar24.Data = local_360.Data;
    iVar18 = iVar28;
    while( true ) {
      if (iVar18 != iVar28) {
        local_378[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_378);
      }
      if (FVar24.Data == pFVar26) break;
      UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle(&local_e8,*(int *)FVar24.Data,true);
      FVar24.Data = FVar24.Data + 4;
      iVar18 = local_358;
    }
    if (local_360.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_360.Data);
    }
    if (local_370.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_370.Data);
    }
  }
  pUVar5 = (this->ActivityContext).field0_0x0.DebugPtr;
  if (((pUVar5->CurrentMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UE::Geometry::FDynamicMesh3::Copy((pUVar5->CurrentMesh).Object,pFVar9,true,true,true,true);
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
            ((FGroupTopologySelection *)local_1d8);
  if (((this->ActivityContext).field0_0x0.DebugPtr)->bTriangleMode == false) {
    iVar28 = (this->NewSelectionGids).ArrayNum;
    pFVar26 = (this->NewSelectionGids).AllocatorInstance.Data;
    if ((iVar28 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar27 = iVar28 + (local_1d8._8_4_ - local_1a4);
    if ((uint)(local_1d8._8_4_ - local_1a4) < uVar27) {
      if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar27);
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_1d8,uVar27);
      if (uVar27 < 4) {
        uVar27 = 1;
      }
      else {
        uVar22 = (ulonglong)((uVar27 >> 1) + 7) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar27 = 1 << ((byte)lVar19 & 0x1f);
      }
      if ((local_190 == 0) || ((int)local_190 < (int)uVar27)) {
        local_190 = uVar27;
        if ((ForElementType<FSetElementId>)local_198.Data != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_198,0,0,4);
        }
        if (uVar27 != 0) {
          uVar23 = uVar27;
          if (uVar27 < 2) {
            if ((ForElementType<FSetElementId>)local_198.Data != (ForElementType<FSetElementId>)0x0)
            {
              uVar23 = 0;
              goto LAB_14cd5d27c;
            }
          }
          else {
LAB_14cd5d27c:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_198,0,uVar23,4);
          }
          if (0 < (int)uVar27) {
            uVar30 = (ulonglong)uVar27;
            uVar22 = uVar20;
            do {
              FVar24.Data = (FScriptContainerElement *)local_1a0;
              if ((ForElementType<FSetElementId>)local_198.Data !=
                  (ForElementType<FSetElementId>)0x0) {
                FVar24.Data = local_198.Data;
              }
              uVar15 = uVar22 & (longlong)(int)uVar27 - 1U;
              uVar22 = uVar22 + 1;
              *(undefined4 *)((longlong)FVar24.Data + uVar15 * 4) = 0xffffffff;
              uVar30 = uVar30 - 1;
            } while (uVar30 != 0);
          }
        }
        if (local_190 != 0) {
          pTStack_330 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10);
          local_338 = 0;
          uStack_334 = 1;
          uStack_324 = 0;
          uStack_320 = 0;
          if (local_1b0 != 0) {
            FVar31 = (ForElementType<unsigned_int>)((longlong)local_1d8 + 0x10);
            if (local_1b8 != (ForElementType<unsigned_int>)0x0) {
              FVar31 = local_1b8;
            }
            uVar27 = *(uint *)FVar31;
            uVar22 = uVar20;
            while (uVar27 == 0) {
              uStack_320 = (int)uVar22 + 0x20;
              uVar22 = (ulonglong)uStack_320;
              iVar18 = (int)uVar20;
              local_338 = iVar18 + 1;
              uVar20 = (ulonglong)local_338;
              if ((int)((local_1b0 - 1) + ((int)(local_1b0 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_338) goto LAB_14cd5d39a;
              uVar27 = ((uint *)((longlong)FVar31 + 4))[iVar18];
            }
            uStack_334 = -uVar27 & uVar27;
            uVar20 = (ulonglong)uStack_334 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            uStack_324 = (uStack_320 - 1) + (int)lVar19;
            uVar20 = (ulonglong)uStack_324;
            if ((int)local_1b0 < (int)uStack_324) {
LAB_14cd5d39a:
              uVar20 = (ulonglong)local_1b0;
              uStack_324 = local_1b0;
            }
          }
          local_328 = 0xffffffff;
          local_2a0 = (longlong *)local_1d8;
          local_298._padding_ = CONCAT44(uStack_334,local_338);
          local_298.CurrentBitIndex = uStack_324;
          local_298.UnvisitedBitMask = 0xffffffff;
          local_298._28_4_ = uStack_31c;
          local_298.BaseBitIndex = uStack_320;
          local_298.Array = pTStack_330;
          if ((int)uVar20 < (int)local_1b0) {
            do {
              iVar18 = (int)uVar20;
              uVar27 = local_190 - 1 & *(uint *)(*local_2a0 + (longlong)iVar18 * 0xc);
              lVar19 = *local_2a0 + (longlong)iVar18 * 0xc;
              *(uint *)(lVar19 + 8) = uVar27;
              FVar24.Data = (FScriptContainerElement *)local_1a0;
              if ((ForElementType<FSetElementId>)local_198.Data !=
                  (ForElementType<FSetElementId>)0x0) {
                FVar24.Data = local_198.Data;
              }
              uVar20 = (longlong)(int)local_190 - 1U & (longlong)(int)uVar27;
              *(undefined4 *)(lVar19 + 4) = *(undefined4 *)((longlong)FVar24.Data + uVar20 * 4);
              *(int *)((longlong)FVar24.Data + uVar20 * 4) = iVar18;
              local_298.UnvisitedBitMask = local_298.UnvisitedBitMask & ~local_298._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_298);
              uVar20 = (ulonglong)(uint)local_298.CurrentBitIndex;
            } while (local_298.CurrentBitIndex < (local_298.Array)->NumBits);
          }
        }
      }
    }
    pFVar3 = pFVar26 + (longlong)iVar28 * 4;
    for (; pFVar26 != pFVar3; pFVar26 = pFVar26 + 4) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1d8,local_2e0,
                 (bool *)pFVar26);
    }
    goto LAB_14cd5d45f;
  }
  pTVar14 = TArrayView<int_const_,int>::
            TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                      (&local_240,&this->NewSelectionGids);
  local_2d8.TextData.Reference._0_4_ = *(undefined4 *)&pTVar14->DataPtr;
  local_2d8.TextData.Reference._4_4_ = *(undefined4 *)((longlong)&pTVar14->DataPtr + 4);
  uVar27 = pTVar14->ArrayNum;
  local_2d8._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
  local_228._0_8_ = (FScriptContainerElement *)0x0;
  local_228._8_8_ = 0;
  local_208 = (ForElementType<unsigned_int>)0x0;
  local_200 = 0;
  local_1fc = 0x80;
  local_1f8 = -1;
  local_1f4 = 0;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0 = 0;
  local_2d8.Flags = uVar27;
  if (uVar27 != 0) {
    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar27);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_228,uVar27);
    uVar23 = 1;
    if (3 < uVar27) {
      uVar22 = (ulonglong)((uVar27 >> 1) + 7) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar23 = 1 << ((byte)lVar19 & 0x1f);
    }
    if ((local_1e0 == 0) || ((int)local_1e0 < (int)uVar23)) {
      local_1e0 = uVar23;
      if (local_1e8.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1e8,0,0,4);
      }
      if (uVar23 != 0) {
        uVar29 = uVar23;
        if (uVar23 < 2) {
          if (local_1e8.Data != (FScriptContainerElement *)0x0) {
            uVar29 = 0;
            goto LAB_14cd5ce5b;
          }
        }
        else {
LAB_14cd5ce5b:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_1e8,0,uVar29,4);
        }
        if (0 < (int)uVar23) {
          uVar30 = (ulonglong)uVar23;
          uVar22 = uVar20;
          do {
            FVar24.Data = local_1f0;
            if (local_1e8.Data != (FScriptContainerElement *)0x0) {
              FVar24.Data = local_1e8.Data;
            }
            uVar15 = uVar22 & (longlong)(int)uVar23 - 1U;
            uVar22 = uVar22 + 1;
            *(undefined4 *)(FVar24.Data + uVar15 * 4) = 0xffffffff;
            uVar30 = uVar30 - 1;
          } while (uVar30 != 0);
        }
      }
      if (local_1e0 != 0) {
        local_308.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10);
        local_308._padding_._0_4_ = 0;
        local_308._padding_._4_4_ = 1;
        local_308.UnvisitedBitMask = 0xffffffff;
        local_308.CurrentBitIndex = 0;
        local_308.BaseBitIndex = 0;
        if (local_200 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_308);
        }
        local_2c8 = (longlong *)local_228;
        local_2c0._padding_ = CONCAT44(local_308._padding_._4_4_,(undefined4)local_308._padding_);
        local_2c0.Array = local_308.Array;
        local_2c0.UnvisitedBitMask = local_308.UnvisitedBitMask;
        local_2c0.CurrentBitIndex = local_308.CurrentBitIndex;
        local_2c0.BaseBitIndex = local_308.BaseBitIndex;
        local_2c0._28_4_ = local_308._28_4_;
        if (local_308.CurrentBitIndex < (local_308.Array)->NumBits) {
          do {
            uVar23 = local_1e0 - 1 &
                     *(uint *)(*local_2c8 + (longlong)local_2c0.CurrentBitIndex * 0xc);
            lVar19 = *local_2c8 + (longlong)local_2c0.CurrentBitIndex * 0xc;
            *(uint *)(lVar19 + 8) = uVar23;
            FVar24.Data = local_1f0;
            if (local_1e8.Data != (FScriptContainerElement *)0x0) {
              FVar24.Data = local_1e8.Data;
            }
            uVar22 = (longlong)(int)local_1e0 - 1U & (longlong)(int)uVar23;
            *(undefined4 *)(lVar19 + 4) = *(undefined4 *)(FVar24.Data + uVar22 * 4);
            *(int *)(FVar24.Data + uVar22 * 4) = local_2c0.CurrentBitIndex;
            local_2c0.UnvisitedBitMask = local_2c0.UnvisitedBitMask & ~local_2c0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2c0);
          } while (local_2c0.CurrentBitIndex < (local_2c0.Array)->NumBits);
        }
      }
    }
  }
  pbVar25 = (bool *)CONCAT44(local_2d8.TextData.Reference._4_4_,local_2d8.TextData.Reference._0_4_);
  pbVar2 = pbVar25 + (longlong)(int)uVar27 * 4;
  for (; pbVar25 != pbVar2; pbVar25 = pbVar25 + 4) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_228,&local_2e8,pbVar25
              );
  }
  uVar27 = (pFVar9->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar9->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar22 = uVar20;
  if ((uVar27 == 0) ||
     (pFVar26 = (pFVar9->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar22 = 0,
     (ushort)(**(short **)pFVar26 - 1U) < 0xfffe)) {
LAB_14cd5d027:
    uVar23 = (uint)uVar22;
  }
  else {
    uVar22 = 1;
    uVar23 = 1;
    if (1 < (int)uVar27) {
      do {
        sVar4 = *(short *)(*(longlong *)(pFVar26 + (uVar22 >> 9) * 8) +
                          (ulonglong)((uint)uVar22 & 0x1ff) * 2);
        if ((sVar4 != 0) && (sVar4 != -1)) break;
        uVar23 = (uint)uVar22 + 1;
        uVar22 = (ulonglong)uVar23;
      } while ((int)uVar23 < (int)uVar27);
      goto LAB_14cd5d027;
    }
  }
joined_r0x00014cd5d029:
  if (uVar23 != uVar27) {
    do {
      uVar23 = (uint)uVar22;
      if ((pFVar9->TriangleGroups).bIsSet == false) {
        uVar30 = 0xffffffff;
      }
      else {
        uVar30 = uVar20;
        if ((-1 < (int)uVar23) &&
           ((int)uVar23 <
            (int)((pFVar9->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar9->TriangleRefCounts).RefCounts.CurBlockUsed))) {
          lVar19 = (uVar22 >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar9->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + lVar19) + (ulonglong)(uVar23 & 0x1ff) * 2) - 1U) < 0xfffe
             ) {
            uVar30 = (ulonglong)
                     *(uint *)(*(longlong *)
                                ((pFVar9->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                                lVar19) + (ulonglong)(uVar23 & 0x1ff) * 4);
          }
        }
      }
      local_340[0] = uVar23;
      if (local_228._8_4_ != local_1f4) {
        FVar24.Data = local_1f0;
        if (local_1e8.Data != (FScriptContainerElement *)0x0) {
          FVar24.Data = local_1e8.Data;
        }
        for (iVar28 = *(int *)(FVar24.Data + (local_1e0 - 1 & uVar30) * 4); iVar28 != -1;
            iVar28 = *(int *)(local_228._0_8_ + (longlong)iVar28 * 0xc + 4)) {
          if (*(int *)(local_228._0_8_ + (longlong)iVar28 * 0xc) == (int)uVar30) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1d8,&local_2e4
                       ,(bool *)local_340);
            break;
          }
        }
      }
      uVar23 = uVar23 + 1;
      uVar22 = (ulonglong)uVar23;
      if ((int)uVar27 <= (int)uVar23) goto joined_r0x00014cd5d029;
      pFVar26 = (pFVar9->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar19 = (uVar22 >> 9) * 8;
        lVar7 = (ulonglong)((uint)uVar22 & 0x1ff) * 2;
        if ((*(short *)(lVar7 + *(longlong *)(pFVar26 + lVar19)) != 0) &&
           (*(short *)(lVar7 + *(longlong *)(pFVar26 + lVar19)) != -1)) break;
        uVar23 = (uint)uVar22 + 1;
        uVar22 = (ulonglong)uVar23;
        if ((int)uVar27 <= (int)uVar23) goto joined_r0x00014cd5d029;
      }
    } while( true );
  }
  local_1e0 = 0;
  if (local_1e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_228);
LAB_14cd5d45f:
  bVar8 = UE::Geometry::FGroupTopologySelection::operator!=
                    ((FGroupTopologySelection *)
                     &((((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0
                      .DebugPtr)->_padding_,&this->ActiveSelection);
  if (bVar8) {
    UMeshTopologySelectionMechanic::SetSelection
              ((UMeshTopologySelectionMechanic *)
               (((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0.
               DebugPtr,&this->ActiveSelection,false);
  }
  pUVar5 = (this->ActivityContext).field0_0x0.DebugPtr;
  TVar16 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_e8);
  pFVar12 = FText::AsLocalizable_Advanced_LocText
                      (&local_250,L"UPolyEditExtrudeActivity",L"PolyMeshExtrudeChange",L"Extrude");
  UE::Core::Private::Function::CheckCallable(*(void **)&pUVar5->EmitCurrentMeshChangeAndUpdate);
  pcVar6 = *(code **)&pUVar5->EmitCurrentMeshChangeAndUpdate;
  plVar11 = *(longlong **)&(pUVar5->EmitCurrentMeshChangeAndUpdate).field_0x28;
  plVar21 = (longlong *)&(pUVar5->EmitCurrentMeshChangeAndUpdate).field_0x10;
  if (plVar11 != (longlong *)0x0) {
    plVar21 = plVar11;
  }
  uVar17 = (**(code **)(*plVar21 + 8))();
  (*pcVar6)(uVar17,pFVar12,TVar16.Ptr,local_1d8);
  this_00 = (FDynamicMeshChange *)((TVar16.Ptr)->OldVertices).AllocatorInstance.Data;
  if (this_00 != (FDynamicMeshChange *)0x0) {
    UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(this_00);
    ::operator_delete(this_00,0x48);
  }
  if (local_250.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_250.TextData.Reference + 0x10))();
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->ActiveSelection).SelectedGroupIDs,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1d8);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->ActiveSelection).SelectedCornerIDs,&local_188);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->ActiveSelection).SelectedEdgeIDs,&local_138);
  local_138.HashSize = 0;
  if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_138.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_138.Elements);
  local_188.HashSize = 0;
  if (local_188.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_188.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_188.Elements);
  local_190 = 0;
  if ((ForElementType<FSetElementId>)local_198.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_198.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1d8);
  UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_e8);
  return;
}

// BeginExtrude @ 14cd5ee10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPolyEditExtrudeActivity::BeginExtrude(UPolyEditExtrudeActivity *this)

{
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> *pTVar1;
  TFrame3<double> *this_00;
  UPolygonSelectionMechanic *pUVar2;
  UPolyEditActivityContext *pUVar3;
  FDynamicMesh3 *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  ForAnyElementType _Src;
  bool bVar8;
  uint uVar9;
  FGroupTopologySelection *pFVar10;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> *pTVar11;
  TAxisAlignedBox3<double> *pTVar12;
  longlong *plVar13;
  longlong lVar14;
  FSharedReferencer<1> FVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  undefined1 auStackY_a98 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_a58;
  TArray<int,TSizedDefaultAllocator<32>_> local_a48;
  FDynamicMesh3 *local_a38;
  FSharedReferencer<1> local_a30;
  TVector<double>_u_0 local_a28;
  double dStack_a10;
  double local_a08;
  double dStack_a00;
  double local_9f8;
  undefined8 local_9e0;
  undefined1 local_9d8 [8];
  TSharedRef<UE::Geometry::FDynamicMesh3,1> local_9d0;
  TVector<double>_u_0 local_9b8;
  TVector<double>_u_0 TStack_9a0;
  TVector<double>_u_0 local_988;
  TAxisAlignedBox3<double> local_968;
  undefined8 local_938 [2];
  longlong local_928;
  longlong local_918 [3];
  longlong *local_900;
  undefined1 local_8f8;
  TDistPoint3Triangle3<double> local_8e8;
  FGroupTopologySelection local_858;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_768;
  TTransform<double> local_6a8;
  FDynamicSubmesh3 local_648;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_a98;
  pUVar2 = (((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0.DebugPtr;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->ActiveSelection).SelectedGroupIDs,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&pUVar2->_padding_);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->ActiveSelection).SelectedCornerIDs,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&pUVar2->_padding_);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->ActiveSelection).SelectedEdgeIDs,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&pUVar2->_padding_);
  pUVar2 = (((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0.DebugPtr;
  pFVar10 = UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_858);
  UMeshTopologySelectionMechanic::SetSelection
            ((UMeshTopologySelectionMechanic *)pUVar2,pFVar10,false);
  local_858.SelectedEdgeIDs.HashSize = 0;
  if (local_858.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_858.SelectedEdgeIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_858.SelectedEdgeIDs.Elements);
  local_858.SelectedCornerIDs.HashSize = 0;
  if (local_858.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_858.SelectedCornerIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_858.SelectedCornerIDs.Elements);
  local_858.SelectedGroupIDs.HashSize = 0;
  if (local_858.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_858.SelectedGroupIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_858);
  pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
  local_a48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a48.ArrayNum = 0;
  local_a48.ArrayMax = 0;
  if ((pUVar3->CurrentTopology).Object == (FGroupTopology *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  UE::Geometry::FGroupTopology::GetSelectedTriangles
            ((pUVar3->CurrentTopology).Object,&this->ActiveSelection,&local_a48);
  _Src.Data = local_a48.AllocatorInstance.Data;
  lVar14 = (longlong)local_a48.ArrayNum;
  local_a58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a58.ArrayNum = local_a48.ArrayNum;
  if (local_a48.ArrayNum == 0) {
    local_a58.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_a48.ArrayNum,0,&local_a58.AllocatorInstance,local_a48.ArrayNum,
               &local_a58.ArrayMax);
    memcpy(local_a58.AllocatorInstance.Data,_Src.Data,lVar14 << 2);
  }
  UE::Geometry::FDynamicSubmesh3::FDynamicSubmesh3
            (&local_648,(((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh).Object,
             &local_a58,9,true);
  pTVar11 = MakeShared<UE::Geometry::FDynamicMesh3,1,UE::Geometry::FDynamicMesh3>
                      (&local_9d0,&local_648.Submesh);
  FVar15.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
  pFVar4 = pTVar11->Object;
  if (FVar15.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar15.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a38 = pFVar4;
  local_a30.ReferenceController = FVar15.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9d0.SharedReferenceCount.ReferenceController);
  UE::Geometry::FDynamicSubmesh3::~FDynamicSubmesh3(&local_648);
  if (local_a58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a58.AllocatorInstance.Data);
  }
  pTVar1 = &this->PatchMesh;
  if (pTVar1 != (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)&local_a38) {
    pTVar1->Object = pFVar4;
    local_a38 = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PatchMesh).SharedReferenceCount,&local_a30);
    FVar15.ReferenceController = local_a30.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_768,pTVar1->Object,true);
  pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
  if ((pUVar3->CurrentTopology).Object == (FGroupTopology *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  UE::Geometry::FGroupTopology::GetSelectionFrame
            ((pUVar3->CurrentTopology).Object,(TFrame3<double> *)&local_a28._s_0,
             &this->ActiveSelection,(TFrame3<double> *)0x0);
  this_00 = &this->ActiveSelectionFrameWorld;
  local_928 = 0;
  (this_00->Origin).field0_0x0._s_0.X = (double)CONCAT44(local_a28._4_4_,local_a28._0_4_);
  (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.Y =
       (double)CONCAT44(local_a28._12_4_,local_a28._8_4_);
  local_900 = (longlong *)0x0;
  local_8f8 = 0;
  *(double *)((longlong)&(this->ActiveSelectionFrameWorld).Origin.field0_0x0 + 0x10) =
       local_a28._s_0.Z;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.X = dStack_a10;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Y = local_a08;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Z = dStack_a00;
  local_938[0] = __real_7fefffffffffffff;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.W = local_9f8;
  uVar9 = (**(code **)(local_768._padding_ + 0x20))(&local_768,&local_a28,local_9d8,local_938);
  if ((int)uVar9 < 0) {
    uVar16 = SUB84(local_a28._s_0.Z,0);
    uVar17 = (undefined4)((ulonglong)local_a28._16_8_ >> 0x20);
    local_8e8.ClosestTrianglePoint.field0_0x0._0_4_ = local_a28._0_4_;
    local_8e8.ClosestTrianglePoint.field0_0x0._4_4_ = local_a28._4_4_;
    local_8e8.ClosestTrianglePoint.field0_0x0._8_4_ = local_a28._8_4_;
    local_8e8.ClosestTrianglePoint.field0_0x0._12_4_ = local_a28._12_4_;
  }
  else {
    if (((int)(((local_768.Mesh)->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
              ((local_768.Mesh)->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar9) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (((local_768.Mesh)->TriangleRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8) +
                                    (ulonglong)(uVar9 & 0x1ff) * 2) - 1U))) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh.IsTriangle(TriIdx)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                         ,0x1e,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
              (local_768.Mesh,uVar9,(TVector<double> *)&local_9b8._s_0,
               (TVector<double> *)&TStack_9a0._s_0,(TVector<double> *)&local_988._s_0);
    local_8e8.Triangle.V[0].field0_0x0._s_0.X = local_9b8._s_0.X;
    local_8e8.Triangle.V[0].field0_0x0._s_0.Y = local_9b8._s_0.Y;
    local_8e8.Triangle.V[1].field0_0x0._s_0.Y = TStack_9a0._s_0.Y;
    local_8e8.Triangle.V[1].field0_0x0._s_0.Z = TStack_9a0._s_0.Z;
    local_8e8.Triangle.V[0].field0_0x0._s_0.Z = local_9b8._s_0.Z;
    local_8e8.Triangle.V[1].field0_0x0._s_0.X = TStack_9a0._s_0.X;
    local_8e8.Triangle.V[2].field0_0x0._s_0.Z = local_988._s_0.Z;
    local_8e8.Point.field0_0x0._s_0.Z = local_a28._s_0.Z;
    local_8e8.Triangle.V[2].field0_0x0._s_0.X = local_988._s_0.X;
    local_8e8.Triangle.V[2].field0_0x0._s_0.Y = local_988._s_0.Y;
    UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult(&local_8e8);
    uVar16 = SUB84(local_8e8.ClosestTrianglePoint.field0_0x0._s_0.Z,0);
    uVar17 = (undefined4)((ulonglong)local_8e8.ClosestTrianglePoint.field0_0x0._16_8_ >> 0x20);
  }
  *(undefined4 *)&(this_00->Origin).field0_0x0 = local_8e8.ClosestTrianglePoint.field0_0x0._0_4_;
  *(undefined4 *)((longlong)&(this->ActiveSelectionFrameWorld).Origin.field0_0x0 + 4) =
       local_8e8.ClosestTrianglePoint.field0_0x0._4_4_;
  *(undefined4 *)((longlong)&(this->ActiveSelectionFrameWorld).Origin.field0_0x0 + 8) =
       local_8e8.ClosestTrianglePoint.field0_0x0._8_4_;
  *(undefined4 *)((longlong)&(this->ActiveSelectionFrameWorld).Origin.field0_0x0 + 0xc) =
       local_8e8.ClosestTrianglePoint.field0_0x0._12_4_;
  (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.Z = (double)CONCAT44(uVar17,uVar16);
  local_9e0 = CONCAT44(uVar17,uVar16);
  if (local_928 != 0) {
    plVar13 = local_918;
    if (local_900 != (longlong *)0x0) {
      plVar13 = local_900;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  UPreviewMesh::GetTransform
            ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
             PreviewMesh).field0_0x0.DebugPtr,&local_6a8);
  UE::Geometry::TFrame3<double>::Transform(this_00,&local_6a8);
  (**(code **)(this->_padding_ + 0x328))(this);
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult
            ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr);
  pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
  if ((pUVar3->CurrentMesh).Object == (FDynamicMesh3 *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar12 = UE::Geometry::FDynamicMesh3::GetBounds((pUVar3->CurrentMesh).Object,&local_968,false);
  dVar18 = (pTVar12->Max).field0_0x0._s_0.Z - (pTVar12->Min).field0_0x0._s_0.Z;
  dVar6 = (pTVar12->Max).field0_0x0._s_0.Y - (pTVar12->Min).field0_0x0._s_0.Y;
  dVar7 = (pTVar12->Max).field0_0x0._s_0.X - (pTVar12->Min).field0_0x0._s_0.X;
  if (dVar18 <= 0.0) {
    dVar18 = 0.0;
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (dVar7 <= 0.0) {
    dVar7 = 0.0;
  }
  if (dVar18 <= dVar6) {
    dVar18 = dVar6;
  }
  if (dVar18 <= dVar7) {
    dVar18 = dVar7;
  }
  if (0.0 < (float)dVar18) {
    this->UVScaleFactor = __real_3f800000 / (float)dVar18;
  }
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_768);
  if (local_a48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a48.AllocatorInstance.Data);
  }
  return;
}

// BeginHoverSequenceHitTest @ 14cd5f410

FInputRayHit * __thiscall
UPolyEditExtrudeActivity::BeginHoverSequenceHitTest
          (UPolyEditExtrudeActivity *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  EPolyEditExtrudeDistanceMode EVar1;
  
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  if (*(char *)&(this->OffsetProperties).field0_0x0 != '\0') {
    EVar1 = PolyEditExtrudeActivityLocals::GetDistanceMode
                      ((UPolyEditExtrudeActivity *)&this[-1].ActiveSelectionFrameWorld,
                       *(EPropertySetToUse *)((longlong)&this->_padding_ + 4));
    if (EVar1 == ClickInViewport) {
      __return_storage_ptr__->bHit = true;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->bHit = false;
  return __return_storage_ptr__;
}

// CanAccept @ 14cd62fa0

bool __thiscall UPolyEditExtrudeActivity::CanAccept(UPolyEditExtrudeActivity *this)

{
  return true;
}

// CanStart @ 14cd63990

bool __thiscall UPolyEditExtrudeActivity::CanStart(UPolyEditExtrudeActivity *this)

{
  UPolyEditActivityContext *pUVar1;
  UPolygonSelectionMechanic *pUVar2;
  
  pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
  if (pUVar1 == (UPolyEditActivityContext *)0x0) {
    return false;
  }
  pUVar2 = (pUVar1->SelectionMechanic).field0_0x0.DebugPtr;
  return (int)pUVar2->_padding_ != *(int *)((longlong)&pUVar2->_padding_ + 4);
}

// End @ 14cd68920

/* WARNING: Type propagation algorithm not settling */

EToolActivityEndResult __thiscall
UPolyEditExtrudeActivity::End(UPolyEditExtrudeActivity *this,EToolShutdownType param_1)

{
  UPolyEditActivityContext *pUVar1;
  code *pcVar2;
  bool bVar3;
  EToolActivityEndResult EVar4;
  
  if (this->bIsRunning != false) {
    if (param_1 == Cancel) {
      (**(code **)(this->_padding_ + 0x330))();
      pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
      UPreviewMesh::UpdatePreview
                ((((pUVar1->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
                 (pUVar1->CurrentMesh).Object,FullUpdate,AllVertexAttribs);
      return Cancelled;
    }
    UMeshOpPreviewWithBackgroundCompute::CancelCompute
              ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr);
    (**(code **)(this->_padding_ + 800))(this);
    (**(code **)(this->_padding_ + 0x330))(this);
    return Completed;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5567589165484212666>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditExtrudeActivity.cpp"
                     ,0x1ba,"bIsRunning");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  (**(code **)(this->_padding_ + 0x330))(this);
  return ErrorDuringEnd;
}

// EndInternal @ 14cd68f40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPolyEditExtrudeActivity::EndInternal(UPolyEditExtrudeActivity *this)

{
  bool bVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  bVar1 = UE::Geometry::FGroupTopologySelection::operator!=
                    ((FGroupTopologySelection *)
                     &((((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0
                      .DebugPtr)->_padding_,&this->ActiveSelection);
  if (bVar1) {
    UMeshTopologySelectionMechanic::SetSelection
              ((UMeshTopologySelectionMechanic *)
               (((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0.
               DebugPtr,&this->ActiveSelection,false);
  }
  UMeshOpPreviewWithBackgroundCompute::ClearOpFactory
            ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
              OnOpCompleted,this);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->PatchMesh != (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)&local_18) {
    (this->PatchMesh).Object = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PatchMesh).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  (**(code **)(*(longlong *)(this->ExtrudeHeightMechanic).field0_0x0.DebugPtr + 0x2b8))();
  (this->ExtrudeHeightMechanic).field0_0x0.DebugPtr = (UPlaneDistanceFromHitMechanic *)0x0;
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->ExtrudeProperties).field0_0x0.DebugPtr,0);
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->OffsetProperties).field0_0x0.DebugPtr,0);
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->PushPullProperties).field0_0x0.DebugPtr,0);
  this->bIsRunning = false;
  return;
}

// GetExtrudeDirection @ 14cd6c2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

TVector<double> * __thiscall
UPolyEditExtrudeActivity::GetExtrudeDirection
          (UPolyEditExtrudeActivity *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  EPropertySetToUse EVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  UPolyEditExtrudeProperties *pUVar8;
  TTransform<double> *pTVar9;
  longlong lVar10;
  EPolyEditExtrudeDirection EVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_138 [48];
  double local_108;
  TQuaternion<double>_u_0 local_f8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  TTransform<double> local_98;
  ulonglong local_38;
  
  uVar7 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  uVar6 = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
  uVar5 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  EVar3 = this->PropertySetToUse;
  if (EVar3 == Extrude) {
    pUVar8 = (this->ExtrudeProperties).field0_0x0.DebugPtr;
LAB_14cd6c30a:
    lVar10 = 0xc4;
    if (pUVar8->DirectionMode != SingleDirection) {
      lVar10 = 0xd4;
    }
    EVar11 = *(EPolyEditExtrudeDirection *)((longlong)&pUVar8->_padding_ + lVar10);
LAB_14cd6c321:
    switch(EVar11) {
    default:
      goto switchD_14cd6c33e_caseD_0;
    case WorldX:
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar5;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
      break;
    case WorldY:
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar6;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
      break;
    case WorldZ:
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar7;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      break;
    case LocalX:
      pTVar9 = UPreviewMesh::GetTransform
                         ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.
                           DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
                          (TTransform<double> *)&local_f8._s_0);
      dVar1 = (pTVar9->Rotation).XY.m128d_f64[0];
      dVar4 = (pTVar9->Rotation).XY.m128d_f64[1];
      dVar13 = (pTVar9->Rotation).ZW.m128d_f64[0];
      dVar2 = (pTVar9->Rotation).ZW.m128d_f64[1];
      dVar12 = dVar13 + dVar13;
      dVar14 = dVar4 + dVar4;
      dVar4 = __real_3ff0000000000000 - (dVar12 * dVar13 + dVar14 * dVar4);
      dVar13 = dVar12 * dVar2 + dVar14 * dVar1;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar12 * dVar1 - dVar14 * dVar2;
      goto LAB_14cd6c592;
    case LocalY:
      pTVar9 = UPreviewMesh::GetTransform
                         ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.
                           DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,&local_98);
      local_f8._s_0.X = (pTVar9->Rotation).XY.m128d_f64[0];
      local_f8._s_0.Y = (pTVar9->Rotation).XY.m128d_f64[1];
      local_f8._s_0.Z = (pTVar9->Rotation).ZW.m128d_f64[0];
      local_f8._s_0.W = (pTVar9->Rotation).ZW.m128d_f64[1];
      local_c8 = (pTVar9->Translation).ZW.m128d_f64[0];
      local_108 = (pTVar9->Scale3D).ZW.m128d_f64[0];
      local_d8 = (pTVar9->Translation).XY.m128d_f64[0];
      dStack_d0 = (pTVar9->Translation).XY.m128d_f64[1];
      local_c0 = (pTVar9->Scale3D).XY.m128d_f64[0];
      dStack_b8 = (pTVar9->Scale3D).XY.m128d_f64[1];
      local_b0 = local_108;
      UE::Geometry::TQuaternion<double>::AxisY
                ((TQuaternion<double> *)&local_f8._s_0,__return_storage_ptr__);
      break;
    case LocalZ:
      pTVar9 = UPreviewMesh::GetTransform
                         ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.
                           DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,&local_98);
      local_f8._s_0.X = (pTVar9->Rotation).XY.m128d_f64[0];
      local_f8._s_0.Y = (pTVar9->Rotation).XY.m128d_f64[1];
      local_f8._s_0.Z = (pTVar9->Rotation).ZW.m128d_f64[0];
      local_f8._s_0.W = (pTVar9->Rotation).ZW.m128d_f64[1];
      local_c8 = (pTVar9->Translation).ZW.m128d_f64[0];
      local_108 = (pTVar9->Scale3D).ZW.m128d_f64[0];
      local_d8 = (pTVar9->Translation).XY.m128d_f64[0];
      dStack_d0 = (pTVar9->Translation).XY.m128d_f64[1];
      local_c0 = (pTVar9->Scale3D).XY.m128d_f64[0];
      dStack_b8 = (pTVar9->Scale3D).XY.m128d_f64[1];
      local_b0 = local_108;
      UE::Geometry::TQuaternion<double>::AxisZ
                ((TQuaternion<double> *)&local_f8._s_0,__return_storage_ptr__);
    }
  }
  else {
    if (EVar3 == Offset) {
      EVar11 = ((this->OffsetProperties).field0_0x0.DebugPtr)->MeasureDirection;
      goto LAB_14cd6c321;
    }
    if (EVar3 == PushPull) {
      pUVar8 = (UPolyEditExtrudeProperties *)(this->PushPullProperties).field0_0x0.DebugPtr;
      goto LAB_14cd6c30a;
    }
switchD_14cd6c33e_caseD_0:
    dVar1 = (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Y;
    dVar2 = (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.X;
    dVar13 = (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.W;
    dVar12 = (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Z;
    dVar12 = dVar12 + dVar12;
    dVar4 = dVar13 * (dVar1 + dVar1) + dVar2 * dVar12;
    dVar13 = dVar12 * dVar1 - dVar13 * (dVar2 + dVar2);
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         __real_3ff0000000000000 - (dVar2 * (dVar2 + dVar2) + (dVar1 + dVar1) * dVar1);
LAB_14cd6c592:
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cd6dc20

UClass * __cdecl UPolyEditExtrudeActivity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditExtrudeActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditExtrudeActivity",
               &Z_Registration_Info_UClass_UPolyEditExtrudeActivity.InnerSingleton,
               StaticRegisterNativesUPolyEditExtrudeActivity,0x1d0,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPolyEditExtrudeActivity>,
               InternalVTableHelperCtorCaller<UPolyEditExtrudeActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditExtrudeActivity.InnerSingleton;
}

// HasAccept @ 14cd6fa30

bool __thiscall UPolyEditExtrudeActivity::HasAccept(UPolyEditExtrudeActivity *this)

{
  return true;
}

// IsHitByClick @ 14cd71800

FInputRayHit * __thiscall
UPolyEditExtrudeActivity::IsHitByClick
          (UPolyEditExtrudeActivity *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  EPolyEditExtrudeDistanceMode EVar1;
  
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  if (*(char *)&(this->PushPullProperties).field0_0x0 != '\0') {
    EVar1 = PolyEditExtrudeActivityLocals::GetDistanceMode
                      ((UPolyEditExtrudeActivity *)
                       ((longlong)&this[-1].ActiveSelectionFrameWorld.Origin.field0_0x0 + 8),
                       *(EPropertySetToUse *)((longlong)&this->_padding_ + 4));
    if (EVar1 == ClickInViewport) {
      __return_storage_ptr__->bHit = true;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->bHit = false;
  return __return_storage_ptr__;
}

// IsRunning @ 14cd71b70

bool __thiscall UPolyEditExtrudeActivity::IsRunning(UPolyEditExtrudeActivity *this)

{
  return this->bIsRunning;
}

// MakeNewOperator @ 14cd724f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall UPolyEditExtrudeActivity::MakeNewOperator(UPolyEditExtrudeActivity *this)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  EPolyEditExtrudeDistanceMode EVar7;
  FExtrudeOp *pFVar8;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  TVar9;
  TVector<double> *pTVar10;
  FDynamicMeshOperator *in_RDX;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_1e8 [32];
  FDynamicMesh3 *local_1c8;
  FSharedReferencer<1> local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_170;
  double local_158;
  double local_140;
  TVector<double> local_138;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  pFVar8 = ::operator_new(0xf8);
  if (pFVar8 == (FExtrudeOp *)0x0) {
    pFVar8 = (FExtrudeOp *)0x0;
  }
  else {
    memset(pFVar8,0,0xf8);
    pFVar8 = UE::Geometry::FExtrudeOp::FExtrudeOp(pFVar8);
  }
  local_1c0.ReferenceController = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x38);
  local_1c8 = *(FDynamicMesh3 **)(this->_padding_ + 0x30);
  if (local_1c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1c0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1c0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&pFVar8->OriginalMesh != (TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *)&local_1c8) {
    (pFVar8->OriginalMesh).Object = local_1c8;
    local_1c8 = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar8->OriginalMesh).SharedReferenceCount,&local_1c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.ReferenceController);
  pFVar8->ExtrudeMode = (EExtrudeMode)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  if (iVar1 == 0) {
    pFVar8->DirectionMode = *(EDirectionMode *)(this->_padding_ + 0xc0);
    pFVar8->bShellsToSolids = *(bool *)(this->_padding_ + 0xd0);
    pFVar8->bUseColinearityForSettingBorderGroups = *(bool *)(this->_padding_ + 0xd8);
    lVar11 = this->_padding_;
  }
  else if (iVar1 == 1) {
    pFVar8->DirectionMode = *(EDirectionMode *)(this->_padding_ + 0xc0);
    pFVar8->bShellsToSolids = *(bool *)(this->_padding_ + 0xd0);
    pFVar8->bUseColinearityForSettingBorderGroups = *(bool *)(this->_padding_ + 0xd8);
    lVar11 = this->_padding_;
  }
  else {
    if (iVar1 != 2) goto LAB_14cd726a6;
    pFVar8->DirectionMode = *(EDirectionMode *)(this->_padding_ + 0xc0);
    pFVar8->bShellsToSolids = *(bool *)(this->_padding_ + 0xd0);
    pFVar8->bUseColinearityForSettingBorderGroups = *(bool *)(this->_padding_ + 0xd8);
    lVar11 = this->_padding_;
  }
  pFVar8->MaxScaleForAdjustingTriNormalsOffset = *(double *)(lVar11 + 200);
LAB_14cd726a6:
  lVar11 = this->_padding_;
  if ((*(longlong *)(lVar11 + 0x48) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    TVar9.Ptr = (FDynamicMeshOperator *)(*pcVar2)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar9.Ptr;
  }
  UE::Geometry::FGroupTopology::GetSelectedTriangles
            (*(FGroupTopology **)(lVar11 + 0x48),(FGroupTopologySelection *)&this->ActivityContext,
             &pFVar8->TriangleSelection);
  EVar7 = PolyEditExtrudeActivityLocals::GetDistanceMode
                    ((UPolyEditExtrudeActivity *)
                     ((longlong)&this[-1].ActiveSelectionFrameWorld.Origin.field0_0x0 + 0x10),
                     *(EPropertySetToUse *)((longlong)&this->_padding_ + 4));
  if (EVar7 == Fixed) {
    dVar14 = PolyEditExtrudeActivityLocals::GetFixedDistance
                       ((UPolyEditExtrudeActivity *)
                        ((longlong)&this[-1].ActiveSelectionFrameWorld.Origin.field0_0x0 + 0x10),
                        *(EPropertySetToUse *)((longlong)&this->_padding_ + 4));
  }
  else {
    dVar14 = (double)*(float *)(this->_padding_ + 0x90);
  }
  pFVar8->ExtrudeDistance = dVar14;
  dVar14 = __real_3ff0000000000000;
  if (pFVar8->ExtrudeMode == MoveAndStitch) {
    dVar14 = (double)*(float *)((longlong)&(this->ActiveSelectionFrameWorld).Origin.field0_0x0 + 8);
  }
  pFVar8->UVScaleFactor = (float)dVar14;
  UPreviewMesh::GetTransform
            (*(UPreviewMesh **)(*(longlong *)(this->_padding_ + 0x40) + 0x68),&local_118);
  local_1b8 = local_118.Rotation.XY.m128d_f64[0];
  local_1a8 = local_118.Rotation.ZW.m128d_f64[0];
  local_1b0 = local_118.Rotation.XY.m128d_f64[1];
  local_158 = local_118.Translation.ZW.m128d_f64[0];
  local_1a0 = local_118.Rotation.ZW.m128d_f64[1];
  local_188 = local_118.Translation.ZW.m128d_f64[0];
  local_140 = local_118.Scale3D.ZW.m128d_f64[0];
  local_198 = local_118.Translation.XY.m128d_f64[0];
  dStack_190 = local_118.Translation.XY.m128d_f64[1];
  local_170 = local_118.Scale3D.ZW.m128d_f64[0];
  (**(code **)(pFVar8->_padding_ + 8))(pFVar8,&local_1b8);
  pTVar10 = GetExtrudeDirection((UPolyEditExtrudeActivity *)
                                ((longlong)&this[-1].ActiveSelectionFrameWorld.Origin.field0_0x0 +
                                0x10),&local_138);
  local_118.Rotation.XY.m128d_f64[0] =
       local_118.Rotation.XY.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_118.Rotation.XY.m128d_f64[1] =
       local_118.Rotation.XY.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar32 = *(undefined1 (*) [16])&pTVar10->field0_0x0;
  dVar14 = (pTVar10->field0_0x0)._s_0.Z;
  auVar25._0_8_ =
       local_118.Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar25._8_8_ =
       local_118.Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar35 = auVar32._8_8_;
  auVar21._8_4_ = SUB84(local_118.Rotation.XY.m128d_f64[1],0);
  auVar21._0_8_ = local_118.Rotation.XY.m128d_f64[0];
  auVar21._12_4_ = (int)((ulonglong)local_118.Rotation.XY.m128d_f64[1] >> 0x20);
  auVar22 = blendpd(auVar21,auVar25,2);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar14;
  auVar18 = blendpd(auVar32,auVar5,2);
  auVar33._0_8_ =
       dVar35 * local_118.Rotation.XY.m128d_f64[0] -
       auVar32._0_8_ * local_118.Rotation.XY.m128d_f64[1];
  auVar33._8_8_ = dVar14 * local_118.Rotation.XY.m128d_f64[1] - dVar35 * auVar25._0_8_;
  auVar19._0_8_ = auVar18._0_8_ * auVar25._0_8_ - dVar14 * auVar22._0_8_;
  auVar19._8_8_ = auVar18._8_8_ * auVar25._8_8_ - auVar22._8_8_ * 0.0;
  dVar3 = auVar33._8_8_ + auVar33._8_8_;
  dVar4 = auVar19._0_8_ + auVar19._0_8_;
  uVar26 = SUB84(dVar4,0);
  uVar27 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar18 = blendpd(auVar33,auVar19,2);
  auVar34._0_8_ = auVar18._0_8_ + auVar18._0_8_;
  auVar34._8_8_ = auVar18._8_8_ + auVar18._8_8_;
  auVar30._8_4_ = uVar26;
  auVar30._0_8_ = dVar3;
  auVar30._12_4_ = uVar27;
  auVar15._8_4_ = uVar26;
  auVar15._0_8_ = dVar3;
  auVar15._12_4_ = uVar27;
  auVar28._8_4_ = uVar26;
  auVar28._0_8_ = dVar3;
  auVar28._12_4_ = uVar27;
  auVar18 = blendpd(auVar28,auVar34,2);
  auVar31._0_8_ =
       auVar30._8_8_ * local_118.Rotation.XY.m128d_f64[0] -
       dVar3 * local_118.Rotation.XY.m128d_f64[1];
  auVar31._8_8_ = auVar34._0_8_ * local_118.Rotation.XY.m128d_f64[1] - auVar15._8_8_ * auVar25._0_8_
  ;
  auVar16._8_4_ = SUB84(auVar34._8_8_,0);
  auVar16._0_8_ = auVar34._0_8_;
  auVar16._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
  auVar29._0_8_ = auVar18._0_8_ * auVar25._0_8_ - auVar34._0_8_ * auVar22._0_8_;
  auVar29._8_8_ = auVar18._8_8_ * auVar25._8_8_ - auVar16._8_8_ * auVar22._8_8_;
  auVar23._0_8_ =
       (double)CONCAT44(local_118.Scale3D.XY.m128d_f64[0]._4_4_ &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        local_118.Scale3D.XY.m128d_f64[0]._0_4_ &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar23._8_4_ = local_118.Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88;
  auVar23._12_4_ = local_118.Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
  lVar11 = -(ulonglong)(auVar23._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar13 = -(ulonglong)(auVar23._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar22._4_4_ = local_118.Scale3D.XY.m128d_f64[0]._4_4_;
  auVar22._0_4_ = local_118.Scale3D.XY.m128d_f64[0]._0_4_;
  auVar22._8_4_ = local_118.Scale3D.XY.m128d_f64[1]._0_4_;
  auVar22._12_4_ = local_118.Scale3D.XY.m128d_f64[1]._4_4_;
  auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar22);
  lVar12 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              (uint)((ulonglong)local_118.Scale3D.ZW.m128d_f64[0] >> 0x20),
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              SUB84(local_118.Scale3D.ZW.m128d_f64[0],0)) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar24._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar11 >> 0x20) & auVar18._4_4_,
                        ~(uint)lVar11 & auVar18._0_4_);
  auVar24._8_4_ = ~(uint)lVar13 & auVar18._8_4_;
  auVar24._12_4_ = ~(uint)((ulonglong)lVar13 >> 0x20) & auVar18._12_4_;
  auVar20._8_4_ = SUB84(auVar25._8_8_,0);
  auVar20._0_8_ = auVar25._8_8_;
  auVar20._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
  auVar17._8_4_ = SUB84(auVar31._8_8_,0);
  auVar17._0_8_ = auVar31._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
  auVar18._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar18._0_8_ = local_118.Scale3D.ZW.m128d_f64[0];
  auVar18._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar18);
  (pFVar8->MeshSpaceExtrudeDirection).field0_0x0._s_0.X =
       auVar24._0_8_ * (auVar25._8_8_ * dVar3 + auVar32._0_8_ + auVar17._8_8_);
  (pFVar8->MeshSpaceExtrudeDirection).field0_0x0._s_0.Y =
       auVar24._8_8_ * (auVar20._8_8_ * dVar4 + dVar35 + auVar29._0_8_);
  auVar32 = blendpd(auVar31,auVar29,2);
  (pFVar8->MeshSpaceExtrudeDirection).field0_0x0._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar18._4_4_,
                        ~(uint)lVar12 & auVar18._0_4_) *
       (auVar25._8_8_ * auVar34._0_8_ + dVar14 + auVar32._0_8_);
  in_RDX->_padding_ = (longlong)pFVar8;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// OnBeginHover @ 14cd74660

void __thiscall
UPolyEditExtrudeActivity::OnBeginHover(UPolyEditExtrudeActivity *this,FInputDeviceRay *param_1)

{
  return;
}

// OnClicked @ 14cd747f0

void __thiscall
UPolyEditExtrudeActivity::OnClicked(UPolyEditExtrudeActivity *this,FInputDeviceRay *param_1)

{
  if ((*(char *)&(this->PushPullProperties).field0_0x0 != '\0') &&
     (*(char *)((longlong)&(this->ActiveSelectionFrameWorld).Origin.field0_0x0 + 4) == '\0')) {
    *(undefined1 *)((longlong)&(this->ActiveSelectionFrameWorld).Origin.field0_0x0 + 4) = 1;
  }
  return;
}

// OnEndHover @ 14cd74d30

void __thiscall UPolyEditExtrudeActivity::OnEndHover(UPolyEditExtrudeActivity *this)

{
  return;
}

// OnUpdateHover @ 14cd75ee0

bool __thiscall
UPolyEditExtrudeActivity::OnUpdateHover(UPolyEditExtrudeActivity *this,FInputDeviceRay *param_1)

{
  if ((*(char *)&(this->OffsetProperties).field0_0x0 != '\0') &&
     ((this->ActiveSelection).SelectedEdgeIDs.field_0x4c == '\0')) {
    (**(code **)(*(longlong *)this->_padding_ + 0x2f0))();
    UMeshOpPreviewWithBackgroundCompute::InvalidateResult
              (*(UMeshOpPreviewWithBackgroundCompute **)(this->_padding_ + 0x40));
    return (bool)*(undefined1 *)&(this->OffsetProperties).field0_0x0;
  }
  return (bool)*(undefined1 *)&(this->OffsetProperties).field0_0x0;
}

// ReinitializeExtrudeHeightMechanic @ 14cd793f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
UPolyEditExtrudeActivity::ReinitializeExtrudeHeightMechanic(UPolyEditExtrudeActivity *this)

{
  int iVar1;
  FDynamicMesh3 *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  UPlaneDistanceFromHitMechanic *pUVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  EPolyEditExtrudeDistanceMode EVar15;
  TVector<double> *pTVar16;
  TTransform<double> *pTVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong *plVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStackY_5a8 [32];
  int local_558 [2];
  TVector<double>_u_0 local_550;
  TQuaternion<double>_u_0 local_538;
  TVector<double>_u_0 local_518;
  double dStack_500;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  TVector<double>_u_0 local_4e0;
  TVector<double>_u_0 local_4c8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  double local_490;
  double dStack_488;
  double local_480;
  double local_478;
  double dStack_470;
  double local_468;
  TQuaternion<double>_u_0 local_460;
  double local_440;
  double dStack_438;
  double local_430;
  double local_428;
  double dStack_420;
  double local_418;
  TVector<double> local_410;
  FDynamicMesh3 local_3f8;
  code *local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8 [4];
  undefined **local_198 [2];
  ForAnyElementType local_188;
  int local_180;
  int local_17c;
  code *local_178;
  undefined8 uStack_170;
  longlong local_168 [6];
  longlong local_138;
  longlong local_128 [3];
  longlong *local_110;
  ForAnyElementType local_e0;
  int local_d8;
  ForAnyElementType local_d0;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  EVar15 = PolyEditExtrudeActivityLocals::GetDistanceMode(this,this->PropertySetToUse);
  if (EVar15 != ClickInViewport) {
    return;
  }
  local_518._s_0.X = (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.X;
  local_518._s_0.Y = (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.Y;
  local_518._s_0.Z = (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.Z;
  dStack_500 = (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.X;
  local_4f8 = (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Y;
  dStack_4f0 = (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Z;
  local_4e8 = (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.W;
  pTVar16 = GetExtrudeDirection(this,&local_410);
  local_538._s_0.W = __real_3ff0000000000000;
  local_4e0._s_0.X = (local_4f8 + local_4f8) * local_4e8 + (dStack_4f0 + dStack_4f0) * dStack_500;
  local_4e0._s_0.Y = (dStack_4f0 + dStack_4f0) * local_4f8 - (dStack_500 + dStack_500) * local_4e8;
  local_538._s_0.X = 0.0;
  local_538._s_0.Y = 0.0;
  local_538._s_0.Z = 0.0;
  local_4e0._s_0.Z =
       __real_3ff0000000000000 -
       ((local_4f8 + local_4f8) * local_4f8 + (dStack_500 + dStack_500) * dStack_500);
  UE::Geometry::TQuaternion<double>::SetFromTo
            ((TQuaternion<double> *)&local_538._s_0,(TVector<double> *)&local_4e0._s_0,pTVar16);
  UE::Geometry::TFrame3<double>::Rotate
            ((TFrame3<double> *)&local_518._s_0,(TQuaternion<double> *)&local_538._s_0);
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_3f8);
  if (((this->PatchMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UE::Geometry::FDynamicMesh3::operator=(&local_3f8,(this->PatchMesh).Object);
  pTVar17 = UPreviewMesh::GetTransform
                      ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.
                        DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,&local_b8);
  local_460._s_0.X = (pTVar17->Rotation).XY.m128d_f64[0];
  local_460._s_0.Y = (pTVar17->Rotation).XY.m128d_f64[1];
  local_460._s_0.Z = (pTVar17->Rotation).ZW.m128d_f64[0];
  local_460._s_0.W = (pTVar17->Rotation).ZW.m128d_f64[1];
  local_480 = (pTVar17->Translation).ZW.m128d_f64[0];
  local_490 = (pTVar17->Translation).XY.m128d_f64[0];
  dStack_488 = (pTVar17->Translation).XY.m128d_f64[1];
  local_468 = (pTVar17->Scale3D).ZW.m128d_f64[0];
  local_478 = (pTVar17->Scale3D).XY.m128d_f64[0];
  dStack_470 = (pTVar17->Scale3D).XY.m128d_f64[1];
  local_440 = local_490;
  dStack_438 = dStack_488;
  local_430 = local_480;
  local_428 = local_478;
  dStack_420 = dStack_470;
  local_418 = local_468;
  MeshTransforms::ApplyTransform(&local_3f8,(TTransformSRT3<double> *)&local_460._s_0,true,All);
  GetExtrudeDirection(this,(TVector<double> *)&local_550._s_0);
  uVar26 = SUB84(local_550._s_0.Z,0);
  uVar27 = (undefined4)((ulonglong)local_550._16_8_ >> 0x20);
  local_4c8._s_0.X = (double)CONCAT44(local_550._4_4_,local_550._0_4_) * __real_c0f869f000000000;
  local_4c8._s_0.Z = local_550._s_0.Z * __real_c0f869f000000000;
  local_4c8._s_0.Y = (double)CONCAT44(local_550._12_4_,local_550._8_4_) * __real_c0f869f000000000;
  MeshTransforms::Translate(&local_3f8,(TVector<double> *)&local_4c8._s_0,All);
  UE::Geometry::FOffsetMeshRegion::FOffsetMeshRegion((FOffsetMeshRegion *)local_198,&local_3f8);
  uVar8 = __real_40f869f000000000._4_4_;
  uVar7 = (undefined4)__real_40f869f000000000;
  uVar24 = 0;
  local_1c8 = (code *)0x0;
  local_4a8 = local_550._0_4_;
  uStack_4a4 = local_550._4_4_;
  uStack_4a0 = local_550._8_4_;
  uStack_49c = local_550._12_4_;
  puVar18 = FMemory::Malloc(0x28,8);
  uVar13 = local_168[1]._4_4_;
  uVar12 = (undefined4)local_168[1];
  uVar11 = local_168[0]._4_4_;
  uVar10 = (undefined4)local_168[0];
  uVar9 = uStack_170;
  pcVar6 = local_178;
  *puVar18 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UPolyEditExtrudeActivity::ReinitializeExtrudeHeightMechanic'::`2'::<lambda_1>,0,1>
              ::_vftable_;
  *(undefined4 *)(puVar18 + 1) = uVar7;
  *(undefined4 *)((longlong)puVar18 + 0xc) = uVar8;
  *(undefined4 *)(puVar18 + 2) = local_4a8;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uStack_4a4;
  *(undefined4 *)(puVar18 + 3) = uStack_4a0;
  *(undefined4 *)((longlong)puVar18 + 0x1c) = uStack_49c;
  *(undefined4 *)(puVar18 + 4) = uVar26;
  *(undefined4 *)((longlong)puVar18 + 0x24) = uVar27;
  uStack_4b0 = uVar7;
  uStack_4ac = uVar8;
  plVar20 = (longlong *)CONCAT44(local_168[3]._4_4_,(undefined4)local_168[3]);
  if (puVar18 + 1 != (undefined8 *)0x0) {
    local_1c8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UPolyEditExtrudeActivity::ReinitializeExtrudeHeightMechanic'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int>
                ::Call;
  }
  local_178 = local_1c8;
  uStack_170 = uStack_1c0;
  local_1b8[3]._0_4_ = SUB84(puVar18,0);
  local_1b8[3]._4_4_ = (undefined4)((ulonglong)puVar18 >> 0x20);
  local_168[2]._0_4_ = (undefined4)local_1b8[2];
  local_168[2]._4_4_ = local_1b8[2]._4_4_;
  local_168[3]._0_4_ = (undefined4)local_1b8[3];
  local_168[3]._4_4_ = local_1b8[3]._4_4_;
  local_168[0]._0_4_ = (undefined4)local_1b8[0];
  local_168[0]._4_4_ = local_1b8[0]._4_4_;
  local_168[1]._0_4_ = (undefined4)local_1b8[1];
  local_168[1]._4_4_ = local_1b8[1]._4_4_;
  local_1c8 = pcVar6;
  uStack_1c0 = uVar9;
  local_1b8[0]._0_4_ = uVar10;
  local_1b8[0]._4_4_ = uVar11;
  local_1b8[1]._0_4_ = uVar12;
  local_1b8[1]._4_4_ = uVar13;
  uStack_498 = uVar26;
  uStack_494 = uVar27;
  if (pcVar6 != (code *)0x0) {
    plVar19 = local_1b8;
    if (plVar20 != (longlong *)0x0) {
      plVar19 = plVar20;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (((this->PatchMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar25 = (((this->PatchMesh).Object)->TriangleRefCounts).UsedCount;
  if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
  }
  if (local_17c < (int)uVar25) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar25,&local_188,local_180,&local_17c);
  }
  if (((this->PatchMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar2 = (this->PatchMesh).Object;
  uVar25 = (pFVar2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar2->TriangleRefCounts).RefCounts.CurBlockUsed;
  if ((uVar25 != 0) &&
     (pFVar3 = (pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar24 = 1;
    uVar22 = 1;
    if ((int)uVar25 < 2) goto joined_r0x00014cd798b8;
    do {
      uVar21 = (ulonglong)((uint)uVar24 & 0x1ff);
      lVar4 = *(longlong *)(pFVar3 + (uVar24 >> 9) * 8);
      if ((*(short *)(lVar4 + uVar21 * 2) != 0) && (*(short *)(lVar4 + uVar21 * 2) != -1)) break;
      uVar22 = (uint)uVar24 + 1;
      uVar24 = (ulonglong)uVar22;
    } while ((int)uVar22 < (int)uVar25);
  }
  uVar22 = (uint)uVar24;
joined_r0x00014cd798b8:
  do {
    if (uVar22 == uVar25) {
      UE::Geometry::FOffsetMeshRegion::Apply((FOffsetMeshRegion *)local_198);
      pUVar5 = (this->ExtrudeHeightMechanic).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar5 + 0x2e8))(pUVar5,&local_3f8,&local_518,1);
      local_198[0] = &___7FOffsetMeshRegion_Geometry_UE__6B_;
      if (local_d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data);
      }
      DestructItems<UE::Geometry::FOffsetMeshRegion::FOffsetInfo,int>
                ((FOffsetInfo *)local_e0.Data,local_d8);
      if ((FOffsetInfo *)local_e0.Data != (FOffsetInfo *)0x0) {
        FMemory::Free(local_e0.Data);
      }
      if (local_138 != 0) {
        plVar20 = local_128;
        if (local_110 != (longlong *)0x0) {
          plVar20 = local_110;
        }
        (**(code **)(*plVar20 + 0x10))();
      }
      if (local_178 != (code *)0x0) {
        plVar20 = local_168;
        if ((longlong *)CONCAT44(local_168[3]._4_4_,(undefined4)local_168[3]) != (longlong *)0x0) {
          plVar20 = (longlong *)CONCAT44(local_168[3]._4_4_,(undefined4)local_168[3]);
        }
        (**(code **)(*plVar20 + 0x10))();
      }
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_3f8);
      return;
    }
    while( true ) {
      iVar23 = (int)uVar24;
      local_558[0] = iVar23;
      if (((local_188.Data <= (FScriptContainerElement *)local_558) &&
          ((FScriptContainerElement *)local_558 < local_188.Data + (longlong)local_17c * 4)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_180 == local_17c) {
        local_180 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_188,&local_17c);
      }
      iVar1 = local_180 + 1;
      uVar22 = iVar23 + 1;
      uVar24 = (ulonglong)uVar22;
      *(int *)(local_188.Data + (longlong)local_180 * 4) = local_558[0];
      local_180 = iVar1;
      if ((int)uVar25 <= (int)uVar22) break;
      while( true ) {
        uVar21 = (ulonglong)((uint)uVar24 & 0x1ff);
        lVar4 = *(longlong *)
                 ((pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 (uVar24 >> 9) * 8);
        if ((*(short *)(lVar4 + uVar21 * 2) != 0) && (*(short *)(lVar4 + uVar21 * 2) != -1)) break;
        uVar22 = (uint)uVar24 + 1;
        uVar24 = (ulonglong)uVar22;
        if ((int)uVar25 <= (int)uVar22) goto joined_r0x00014cd798b8;
      }
    }
  } while( true );
}

// Render @ 14cd79b60

void __thiscall
UPolyEditExtrudeActivity::Render(UPolyEditExtrudeActivity *this,IToolsContextRenderAPI *param_1)

{
  UPlaneDistanceFromHitMechanic *pUVar1;
  code *pcVar2;
  bool bVar3;
  EPolyEditExtrudeDistanceMode EVar4;
  
  if (this->bIsRunning == false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5567589165484212836>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditExtrudeActivity.cpp"
                       ,0x264,"bIsRunning");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if ((this->ExtrudeHeightMechanic).field0_0x0.DebugPtr != (UPlaneDistanceFromHitMechanic *)0x0
          ) {
    EVar4 = PolyEditExtrudeActivityLocals::GetDistanceMode(this,this->PropertySetToUse);
    if (EVar4 == ClickInViewport) {
      pUVar1 = (this->ExtrudeHeightMechanic).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar1 + 0x2c0))(pUVar1,param_1);
    }
  }
  return;
}

// Setup @ 14cd7bbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UPolyEditExtrudeActivity::Setup(UPolyEditExtrudeActivity *this,UInteractiveTool *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UPolyEditExtrudeProperties *pUVar6;
  void *pvVar7;
  TPropertyWatcher<EPolyEditOffsetModeOptions> *pTVar8;
  UPolyEditOffsetProperties *pUVar9;
  UPolyEditPushPullProperties *pUVar10;
  TPropertyWatcher<EPolyEditOffsetModeOptions> *pTVar11;
  USingleClickInputBehavior *pUVar12;
  UMouseHoverBehavior *pUVar13;
  UInteractiveToolManager *this_00;
  UContextObjectStore *this_01;
  UPolyEditActivityContext *pUVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  undefined1 auStack_148 [32];
  code *local_128 [2];
  undefined **local_118;
  UPolyEditExtrudeActivity *local_110;
  undefined ***local_100;
  FString local_f8;
  code *local_e8 [2];
  code *local_d8 [3];
  undefined8 local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  UInteractionMechanic::Setup((UInteractionMechanic *)this,param_1);
  pUVar4 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = UPolyEditExtrudeProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar5);
  local_b8._8_8_ = pUVar4;
  pUVar6 = (UPolyEditExtrudeProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar15 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UPolyEditExtrudeProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->ExtrudeProperties).field0_0x0.DebugPtr = pUVar6;
  pcVar2 = *(code **)(pUVar6->_padding_ + 0x2b8);
  ::FString::FString(&local_f8,L"");
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (*pcVar2)(pUVar6,pUVar4,&local_f8);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x2d0))(this,(this->ExtrudeProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->ExtrudeProperties).field0_0x0.DebugPtr,0);
  pUVar6 = (this->ExtrudeProperties).field0_0x0.DebugPtr;
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_1>,0,0>::
               _vftable_;
  pTVar11 = (TPropertyWatcher<EPolyEditOffsetModeOptions> *)0x0;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_1>,void,enum_EPolyEditExtrudeDirection_const_&>
                 ::Call;
  local_100 = (undefined ***)0x0;
  local_110 = this;
  FWatchablePropertySet::WatchProperty<enum_EPolyEditExtrudeDirection>
            ((FWatchablePropertySet *)&pUVar6->_padding_,&pUVar6->Direction,
             (TFunction<void___cdecl(EPolyEditExtrudeDirection_const_&)> *)local_128);
  pUVar6 = (this->ExtrudeProperties).field0_0x0.DebugPtr;
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_2>,0,0>::
               _vftable_;
  local_100 = (undefined ***)0x0;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_2>,void,enum_EPolyEditExtrudeDirection_const_&>
                 ::Call;
  local_110 = this;
  FWatchablePropertySet::WatchProperty<enum_EPolyEditExtrudeDirection>
            ((FWatchablePropertySet *)&pUVar6->_padding_,&pUVar6->MeasureDirection,
             (TFunction<void___cdecl(EPolyEditExtrudeDirection_const_&)> *)local_128);
  pUVar6 = (this->ExtrudeProperties).field0_0x0.DebugPtr;
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_3>,0,0>::
               _vftable_;
  local_100 = (undefined ***)0x0;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_3>,void,enum_EPolyEditExtrudeModeOptions_const_&>
                 ::Call;
  local_110 = this;
  pvVar7 = ::operator_new(0xa0);
  pTVar8 = pTVar11;
  if (pvVar7 != (void *)0x0) {
    local_e8[0] = local_128[0];
    local_c0 = 0;
    if (local_128[0] != (code *)0x0) {
      pppuVar16 = &local_118;
      if (local_100 != (undefined ***)0x0) {
        pppuVar16 = local_100;
      }
      (*(code *)**pppuVar16)(pppuVar16,local_e8 + 2);
    }
    pTVar8 = (TPropertyWatcher<EPolyEditOffsetModeOptions> *)
             FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeModeOptions>::
             TPropertyWatcher<enum_EPolyEditExtrudeModeOptions><enum_EPolyEditExtrudeModeOptions,void>
                       (pvVar7,&pUVar6->DirectionMode,
                        (TFunction<void___cdecl(EPolyEditExtrudeModeOptions_const_&)> *)local_e8);
  }
  iVar3 = (int)pUVar6->_padding_;
  piVar1 = (int *)((longlong)&pUVar6->_padding_ + 4);
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar6->_padding_,piVar1);
  }
  *(int *)&pUVar6->_padding_ = iVar3 + 1;
  *(TPropertyWatcher<EPolyEditOffsetModeOptions> **)(pUVar6->_padding_ + (longlong)iVar3 * 8) =
       pTVar8;
  if (local_128[0] != (code *)0x0) {
    pppuVar16 = &local_118;
    if (local_100 != (undefined ***)0x0) {
      pppuVar16 = local_100;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  pUVar6 = (this->ExtrudeProperties).field0_0x0.DebugPtr;
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_4>,0,0>::
               _vftable_;
  local_100 = (undefined ***)0x0;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_4>,void,enum_EPolyEditExtrudeDistanceMode_const_&>
                 ::Call;
  local_110 = this;
  FWatchablePropertySet::WatchProperty<enum_EPolyEditExtrudeDistanceMode>
            ((FWatchablePropertySet *)&pUVar6->_padding_,&pUVar6->DistanceMode,
             (TFunction<void___cdecl(EPolyEditExtrudeDistanceMode_const_&)> *)local_128);
  pUVar6 = (this->ExtrudeProperties).field0_0x0.DebugPtr;
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_5>,0,0>::
               _vftable_;
  local_100 = (undefined ***)0x0;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_5>,void,double_const_&>
                 ::Call;
  local_110 = this;
  FWatchablePropertySet::WatchProperty<double>
            ((FWatchablePropertySet *)&pUVar6->_padding_,&pUVar6->Distance,
             (TFunction<void___cdecl(double_const_&)> *)local_128);
  pUVar6 = (this->ExtrudeProperties).field0_0x0.DebugPtr;
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_6>,0,0>::
               _vftable_;
  local_100 = (undefined ***)0x0;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_6>,void,bool_const_&>
                 ::Call;
  local_110 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar6->_padding_,&pUVar6->bShellsToSolids,
             (TFunction<void___cdecl(bool_const_&)> *)local_128);
  pUVar4 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = UPolyEditOffsetProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar5);
  local_b8._8_8_ = pUVar4;
  pUVar9 = (UPolyEditOffsetProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar15 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UPolyEditOffsetProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->OffsetProperties).field0_0x0.DebugPtr = pUVar9;
  pcVar2 = *(code **)(pUVar9->_padding_ + 0x2b8);
  ::FString::FString(&local_f8,L"");
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (*pcVar2)(pUVar9,pUVar4,&local_f8);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x2d0))(this,(this->OffsetProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->OffsetProperties).field0_0x0.DebugPtr,0);
  pUVar9 = (this->OffsetProperties).field0_0x0.DebugPtr;
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_7>,0,0>::
               _vftable_;
  local_100 = (undefined ***)0x0;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_7>,void,enum_EPolyEditExtrudeDirection_const_&>
                 ::Call;
  local_110 = this;
  FWatchablePropertySet::WatchProperty<enum_EPolyEditExtrudeDirection>
            ((FWatchablePropertySet *)&pUVar9->_padding_,&pUVar9->MeasureDirection,
             (TFunction<void___cdecl(EPolyEditExtrudeDirection_const_&)> *)local_128);
  pUVar9 = (this->OffsetProperties).field0_0x0.DebugPtr;
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_8>,0,0>::
               _vftable_;
  local_100 = (undefined ***)0x0;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_8>,void,enum_EPolyEditOffsetModeOptions_const_&>
                 ::Call;
  local_110 = this;
  pvVar7 = ::operator_new(0xa0);
  pTVar8 = pTVar11;
  if (pvVar7 != (void *)0x0) {
    local_e8[0] = local_128[0];
    local_c0 = 0;
    if (local_128[0] != (code *)0x0) {
      pppuVar16 = &local_118;
      if (local_100 != (undefined ***)0x0) {
        pppuVar16 = local_100;
      }
      (*(code *)**pppuVar16)(pppuVar16,local_e8 + 2);
    }
    pTVar8 = FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditOffsetModeOptions>::
             TPropertyWatcher<enum_EPolyEditOffsetModeOptions><enum_EPolyEditOffsetModeOptions,void>
                       (pvVar7,&pUVar9->DirectionMode,
                        (TFunction<void___cdecl(EPolyEditOffsetModeOptions_const_&)> *)local_e8);
  }
  iVar3 = (int)pUVar9->_padding_;
  piVar1 = (int *)((longlong)&pUVar9->_padding_ + 4);
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar9->_padding_,piVar1);
  }
  *(int *)&pUVar9->_padding_ = iVar3 + 1;
  *(TPropertyWatcher<EPolyEditOffsetModeOptions> **)(pUVar9->_padding_ + (longlong)iVar3 * 8) =
       pTVar8;
  if (local_128[0] != (code *)0x0) {
    pppuVar16 = &local_118;
    if (local_100 != (undefined ***)0x0) {
      pppuVar16 = local_100;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  pUVar9 = (this->OffsetProperties).field0_0x0.DebugPtr;
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_9>,0,0>::
               _vftable_;
  local_100 = (undefined ***)0x0;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_9>,void,enum_EPolyEditExtrudeDistanceMode_const_&>
                 ::Call;
  local_110 = this;
  FWatchablePropertySet::WatchProperty<enum_EPolyEditExtrudeDistanceMode>
            ((FWatchablePropertySet *)&pUVar9->_padding_,&pUVar9->DistanceMode,
             (TFunction<void___cdecl(EPolyEditExtrudeDistanceMode_const_&)> *)local_128);
  pUVar9 = (this->OffsetProperties).field0_0x0.DebugPtr;
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_10>,0,0>::
               _vftable_;
  local_100 = (undefined ***)0x0;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_10>,void,double_const_&>
                 ::Call;
  local_110 = this;
  FWatchablePropertySet::WatchProperty<double>
            ((FWatchablePropertySet *)&pUVar9->_padding_,&pUVar9->Distance,
             (TFunction<void___cdecl(double_const_&)> *)local_128);
  pUVar4 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = UPolyEditPushPullProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar5);
  local_b8._8_8_ = pUVar4;
  pUVar10 = (UPolyEditPushPullProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar15 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (UPolyEditPushPullProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->PushPullProperties).field0_0x0.DebugPtr = pUVar10;
  pcVar2 = *(code **)(pUVar10->_padding_ + 0x2b8);
  ::FString::FString(&local_f8,L"");
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (*pcVar2)(pUVar10,pUVar4,&local_f8);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x2d0))(this,(this->PushPullProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->PushPullProperties).field0_0x0.DebugPtr,0);
  pUVar10 = (this->PushPullProperties).field0_0x0.DebugPtr;
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_11>,0,0>::
               _vftable_;
  local_100 = (undefined ***)0x0;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_11>,void,enum_EPolyEditExtrudeDirection_const_&>
                 ::Call;
  local_110 = this;
  FWatchablePropertySet::WatchProperty<enum_EPolyEditExtrudeDirection>
            ((FWatchablePropertySet *)&pUVar10->_padding_,&pUVar10->MeasureDirection,
             (TFunction<void___cdecl(EPolyEditExtrudeDirection_const_&)> *)local_128);
  pUVar10 = (this->PushPullProperties).field0_0x0.DebugPtr;
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_12>,0,0>::
               _vftable_;
  local_100 = (undefined ***)0x0;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_12>,void,enum_EPolyEditExtrudeDirection_const_&>
                 ::Call;
  local_110 = this;
  FWatchablePropertySet::WatchProperty<enum_EPolyEditExtrudeDirection>
            ((FWatchablePropertySet *)&pUVar10->_padding_,&pUVar10->SingleDirection,
             (TFunction<void___cdecl(EPolyEditExtrudeDirection_const_&)> *)local_128);
  pUVar10 = (this->PushPullProperties).field0_0x0.DebugPtr;
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_13>,0,0>::
               _vftable_;
  local_100 = (undefined ***)0x0;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_13>,void,enum_EPolyEditPushPullModeOptions_const_&>
                 ::Call;
  local_110 = this;
  pvVar7 = ::operator_new(0xa0);
  if (pvVar7 != (void *)0x0) {
    local_e8[0] = local_128[0];
    local_c0 = 0;
    if (local_128[0] != (code *)0x0) {
      pppuVar16 = &local_118;
      if (local_100 != (undefined ***)0x0) {
        pppuVar16 = local_100;
      }
      (*(code *)**pppuVar16)(pppuVar16,local_e8 + 2);
    }
    pTVar11 = (TPropertyWatcher<EPolyEditOffsetModeOptions> *)
              FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditPushPullModeOptions>::
              TPropertyWatcher<enum_EPolyEditPushPullModeOptions><enum_EPolyEditPushPullModeOptions,void>
                        (pvVar7,&pUVar10->DirectionMode,
                         (TFunction<void___cdecl(EPolyEditPushPullModeOptions_const_&)> *)local_e8);
  }
  iVar3 = (int)pUVar10->_padding_;
  piVar1 = (int *)((longlong)&pUVar10->_padding_ + 4);
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar10->_padding_,piVar1);
  }
  *(int *)&pUVar10->_padding_ = iVar3 + 1;
  *(TPropertyWatcher<EPolyEditOffsetModeOptions> **)(pUVar10->_padding_ + (longlong)iVar3 * 8) =
       pTVar11;
  if (local_128[0] != (code *)0x0) {
    pppuVar16 = &local_118;
    if (local_100 != (undefined ***)0x0) {
      pppuVar16 = local_100;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  pUVar10 = (this->PushPullProperties).field0_0x0.DebugPtr;
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_14>,0,0>::
               _vftable_;
  local_100 = (undefined ***)0x0;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_14>,void,enum_EPolyEditExtrudeDistanceMode_const_&>
                 ::Call;
  local_110 = this;
  FWatchablePropertySet::WatchProperty<enum_EPolyEditExtrudeDistanceMode>
            ((FWatchablePropertySet *)&pUVar10->_padding_,&pUVar10->DistanceMode,
             (TFunction<void___cdecl(EPolyEditExtrudeDistanceMode_const_&)> *)local_128);
  pUVar10 = (this->PushPullProperties).field0_0x0.DebugPtr;
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_15>,0,0>::
               _vftable_;
  local_100 = (undefined ***)0x0;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_15>,void,double_const_&>
                 ::Call;
  local_110 = this;
  FWatchablePropertySet::WatchProperty<double>
            ((FWatchablePropertySet *)&pUVar10->_padding_,&pUVar10->Distance,
             (TFunction<void___cdecl(double_const_&)> *)local_128);
  pUVar4 = GetTransientPackageAsObject();
  pUVar12 = NewObject<USingleClickInputBehavior>(pUVar4);
  (**(code **)(pUVar12->_padding_ + 0x378))(pUVar12,&this->_padding_);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar4 + 0x2f8))(pUVar4,pUVar12,0);
  pUVar4 = GetTransientPackageAsObject();
  pUVar13 = NewObject<UMouseHoverBehavior>(pUVar4);
  (**(code **)(*(longlong *)pUVar13 + 800))(pUVar13,&this->_padding_);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar4 + 0x2f8))(pUVar4,pUVar13,0);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  this_00 = (UInteractiveToolManager *)(**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4);
  this_01 = UInteractiveToolManager::GetContextObjectStore(this_00);
  pUVar14 = UContextObjectStore::FindContext<UPolyEditActivityContext>(this_01);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UPolyEditActivityContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (this->ActivityContext).field0_0x0.DebugPtr = pUVar14;
  return;
}

// Shutdown @ 14cd7f5f0

void __thiscall
UPolyEditExtrudeActivity::Shutdown(UPolyEditExtrudeActivity *this,EToolShutdownType param_1)

{
  UPolyEditExtrudeProperties *pUVar1;
  code *pcVar2;
  UPolyEditOffsetProperties *pUVar3;
  UPolyEditPushPullProperties *pUVar4;
  UObject *pUVar5;
  undefined7 in_register_00000011;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  FString local_28;
  
  if (this->bIsRunning != false) {
    (**(code **)(this->_padding_ + 0x310))(this,CONCAT71(in_register_00000011,param_1));
  }
  pUVar1 = (this->ExtrudeProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
  ::FString::FString(&local_28,L"");
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (*pcVar2)(pUVar1,pUVar5,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pUVar3 = (this->OffsetProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar3->_padding_ + 0x2b0);
  ::FString::FString(&local_28,L"");
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (*pcVar2)(pUVar3,pUVar5,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pUVar4 = (this->PushPullProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar4->_padding_ + 0x2b0);
  ::FString::FString(&local_28,L"");
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (*pcVar2)(pUVar4,pUVar5,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  (this->ExtrudeProperties).field0_0x0.DebugPtr = (UPolyEditExtrudeProperties *)0x0;
  (this->OffsetProperties).field0_0x0.DebugPtr = (UPolyEditOffsetProperties *)0x0;
  (this->PushPullProperties).field0_0x0.DebugPtr = (UPolyEditPushPullProperties *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  this->_padding_ = (longlong)local_res8;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  return;
}

// Start @ 14cd80220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

EToolActivityStartResult __thiscall UPolyEditExtrudeActivity::Start(UPolyEditExtrudeActivity *this)

{
  EPropertySetToUse EVar1;
  code *pcVar2;
  UPolyEditActivityContext *pUVar3;
  double dVar4;
  undefined8 uVar5;
  char cVar6;
  UObject *pUVar7;
  longlong *plVar8;
  FText *pFVar9;
  UClass *pUVar10;
  UPlaneDistanceFromHitMechanic *pUVar11;
  undefined8 uVar12;
  ForAnyElementType FVar13;
  longlong *plVar14;
  IDynamicMeshOperatorFactory *pIVar15;
  UPolyEditExtrudeProperties *pUVar16;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [40];
  UPolyEditExtrudeActivity *local_d0;
  TObjectPtr<UPolyEditPushPullProperties>_u_0 local_98;
  FScriptContainerElement local_88 [24];
  ForAnyElementType local_70;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48 [3];
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  cVar6 = (**(code **)(this->_padding_ + 0x2e8))();
  if (cVar6 == '\0') {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    plVar8 = (longlong *)(**(code **)(*(longlong *)pUVar7 + 0x2d8))(pUVar7);
    pcVar2 = *(code **)(*plVar8 + 0x360);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_f8,L"UPolyEditExtrudeActivity",L"OnExtrudeFailedMesssage",
                        L"Action requires face selection.");
    (*pcVar2)(plVar8,pFVar9,3);
    if ((ITextData *)local_f8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_f8._0_8_ + 0x10))();
    }
    return FailedStart;
  }
  pIVar15 = (IDynamicMeshOperatorFactory *)&this->_padding_;
  if (this == (UPolyEditExtrudeActivity *)0x0) {
    pIVar15 = (IDynamicMeshOperatorFactory *)0x0;
  }
  UMeshOpPreviewWithBackgroundCompute::ChangeOpFactory
            ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr,pIVar15);
  local_f8._16_8_ = this;
  TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
  ::AddWeakLambda<UPolyEditExtrudeActivity,_UPolyEditExtrudeActivity::Start_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
              *)&((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
                 OnOpCompleted,(UPolyEditExtrudeActivity *)local_f8,(<lambda_1> *)this);
  EVar1 = this->PropertySetToUse;
  if (EVar1 == Extrude) {
    pUVar16 = (this->ExtrudeProperties).field0_0x0.DebugPtr;
  }
  else if (EVar1 == Offset) {
    pUVar16 = (UPolyEditExtrudeProperties *)(this->OffsetProperties).field0_0x0.DebugPtr;
  }
  else {
    if (EVar1 != PushPull) goto LAB_14cd80338;
    pUVar16 = (UPolyEditExtrudeProperties *)(this->PushPullProperties).field0_0x0.DebugPtr;
  }
  (**(code **)(this->_padding_ + 0x2d8))(this,pUVar16,1);
LAB_14cd80338:
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar10 = Z_Construct_UClass_UPlaneDistanceFromHitMechanic_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)(local_f8 + 0x20),pUVar10);
  local_d0 = this;
  pUVar11 = (UPlaneDistanceFromHitMechanic *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_f8 + 0x20));
  if (local_98.DebugPtr != (UPolyEditPushPullProperties *)0x0) {
    FVar13.Data = local_88;
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FVar13.Data = local_70.Data;
    }
    (**(code **)(*(longlong *)FVar13.Data + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UPlaneDistanceFromHitMechanic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->ExtrudeHeightMechanic).field0_0x0.DebugPtr = pUVar11;
  pcVar2 = *(code **)(*(longlong *)pUVar11 + 0x2b0);
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (*pcVar2)(pUVar11,pUVar7);
  pUVar11 = (this->ExtrudeHeightMechanic).field0_0x0.DebugPtr;
  local_58 = *(longlong *)&pUVar11->WorldHitQueryFunc;
  uVar5 = *(undefined8 *)&(pUVar11->WorldHitQueryFunc).field_0x8;
  local_48[0] = *(longlong *)&(pUVar11->WorldHitQueryFunc).field_0x10;
  local_48[1] = *(longlong *)&(pUVar11->WorldHitQueryFunc).field_0x18;
  uVar12 = *(undefined8 *)&(pUVar11->WorldHitQueryFunc).field_0x20;
  plStack_30 = *(longlong **)&(pUVar11->WorldHitQueryFunc).field_0x28;
  *(code **)&pUVar11->WorldHitQueryFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UPolyEditExtrudeActivity::Start'::__l2::<lambda_2>,bool,UE::Math::TRay<double>_const_&,FHitResult_&>
       ::Call;
  *(undefined8 *)&(pUVar11->WorldHitQueryFunc).field_0x8 = uStack_50;
  *(undefined4 *)&(pUVar11->WorldHitQueryFunc).field_0x10 = 0x5298b000;
  *(undefined4 *)&(pUVar11->WorldHitQueryFunc).field_0x14 = 1;
  *(UPolyEditExtrudeActivity **)&(pUVar11->WorldHitQueryFunc).field_0x18 = this;
  *(undefined4 *)&(pUVar11->WorldHitQueryFunc).field_0x20 = (undefined4)local_48[2];
  *(undefined4 *)&(pUVar11->WorldHitQueryFunc).field_0x24 = local_48[2]._4_4_;
  *(undefined4 *)&(pUVar11->WorldHitQueryFunc).field_0x28 = 0;
  *(undefined4 *)&(pUVar11->WorldHitQueryFunc).field_0x2c = 0;
  uStack_50 = uVar5;
  local_48[2] = uVar12;
  if (local_58 != 0) {
    plVar8 = local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar8 = plStack_30;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  pUVar11 = (this->ExtrudeHeightMechanic).field0_0x0.DebugPtr;
  local_58 = *(longlong *)&pUVar11->WorldPointSnapFunc;
  uVar5 = *(undefined8 *)&(pUVar11->WorldPointSnapFunc).field_0x8;
  local_48[0] = *(longlong *)&(pUVar11->WorldPointSnapFunc).field_0x10;
  local_48[1] = *(longlong *)&(pUVar11->WorldPointSnapFunc).field_0x18;
  uVar12 = *(undefined8 *)&(pUVar11->WorldPointSnapFunc).field_0x20;
  plStack_30 = *(longlong **)&(pUVar11->WorldPointSnapFunc).field_0x28;
  *(code **)&pUVar11->WorldPointSnapFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UPolyEditExtrudeActivity::Start'::__l2::<lambda_3>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
       ::Call;
  *(undefined8 *)&(pUVar11->WorldPointSnapFunc).field_0x8 = uStack_50;
  *(undefined4 *)&(pUVar11->WorldPointSnapFunc).field_0x10 = 0x5298b020;
  *(undefined4 *)&(pUVar11->WorldPointSnapFunc).field_0x14 = 1;
  *(UPolyEditExtrudeActivity **)&(pUVar11->WorldPointSnapFunc).field_0x18 = this;
  *(undefined4 *)&(pUVar11->WorldPointSnapFunc).field_0x20 = (undefined4)local_48[2];
  *(undefined4 *)&(pUVar11->WorldPointSnapFunc).field_0x24 = local_48[2]._4_4_;
  *(undefined4 *)&(pUVar11->WorldPointSnapFunc).field_0x28 = 0;
  *(undefined4 *)&(pUVar11->WorldPointSnapFunc).field_0x2c = 0;
  uStack_50 = uVar5;
  local_48[2] = uVar12;
  if (local_58 != 0) {
    plVar8 = local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar8 = plStack_30;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  dVar4 = PolyEditExtrudeActivityLocals::GetFixedDistance(this,this->PropertySetToUse);
  ((this->ExtrudeHeightMechanic).field0_0x0.DebugPtr)->CurrentHeight = (float)dVar4;
  (**(code **)(this->_padding_ + 0x318))(this);
  pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
  this->bRequestedApply = false;
  this->bIsRunning = true;
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_f8,L"UPolyEditExtrudeActivity",L"BeginExtrudeActivity",
                      L"Begin Extrude");
  UE::Core::Private::Function::CheckCallable(*(void **)&pUVar3->EmitActivityStart);
  pcVar2 = *(code **)&pUVar3->EmitActivityStart;
  plVar8 = *(longlong **)&(pUVar3->EmitActivityStart).field_0x28;
  plVar14 = (longlong *)&(pUVar3->EmitActivityStart).field_0x10;
  if (plVar8 != (longlong *)0x0) {
    plVar14 = plVar8;
  }
  uVar12 = (**(code **)(*plVar14 + 8))();
  (*pcVar2)(uVar12,pFVar9);
  if ((ITextData *)local_f8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_f8._0_8_ + 0x10))();
  }
  return Running;
}

// StaticRegisterNativesUPolyEditExtrudeActivity @ 14cd81410

void __cdecl UPolyEditExtrudeActivity::StaticRegisterNativesUPolyEditExtrudeActivity(void)

{
  return;
}

// Tick @ 14cd81610

void __thiscall UPolyEditExtrudeActivity::Tick(UPolyEditExtrudeActivity *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UClass *pUVar3;
  longlong *plVar4;
  
  if (this->bIsRunning == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5567589165484212846>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditExtrudeActivity.cpp"
                       ,0x26e,"bIsRunning");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if ((this->bRequestedApply != false) &&
          (((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
           bResultValid != false)) {
    (**(code **)(this->_padding_ + 800))(this);
    this->bRequestedApply = false;
    (**(code **)(this->_padding_ + 0x330))(this);
    this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (this_00 == (UObject *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UToolActivityHost_NoRegister();
      plVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar3);
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,this);
  }
  return;
}

