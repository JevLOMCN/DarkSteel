// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 21

// StaticClass @ 14cd41520

UClass * __cdecl UPolyEditBevelEdgeActivity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditBevelEdgeActivity",
               &Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity.InnerSingleton,
               StaticRegisterNativesUPolyEditBevelEdgeActivity,0x140,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditBevelEdgeActivity>,
               InternalVTableHelperCtorCaller<UPolyEditBevelEdgeActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity.InnerSingleton;
}

// UPolyEditBevelEdgeActivity @ 14cd4fa60

UPolyEditBevelEdgeActivity * __thiscall
UPolyEditBevelEdgeActivity::UPolyEditBevelEdgeActivity
          (UPolyEditBevelEdgeActivity *this,FVTableHelper *param_1)

{
  UInteractiveToolActivity::UInteractiveToolActivity((UInteractiveToolActivity *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UInteractiveToolActivity__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->BevelProperties).field0_0x0.DebugPtr = (UPolyEditBevelEdgeProperties *)0x0;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  this->bIsRunning = false;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&this->ActiveSelection);
  return this;
}

// UPolyEditBevelEdgeActivity @ 14cd4fab0

UPolyEditBevelEdgeActivity * __thiscall
UPolyEditBevelEdgeActivity::UPolyEditBevelEdgeActivity(UPolyEditBevelEdgeActivity *this)

{
  UInteractiveToolActivity::UInteractiveToolActivity((UInteractiveToolActivity *)this);
  this->_padding_ = (longlong)&_vftable__for__UInteractiveToolActivity__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->BevelProperties).field0_0x0.DebugPtr = (UPolyEditBevelEdgeProperties *)0x0;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  this->bIsRunning = false;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&this->ActiveSelection);
  return this;
}

// ~UPolyEditBevelEdgeActivity @ 14cd53340

void __thiscall
UPolyEditBevelEdgeActivity::~UPolyEditBevelEdgeActivity(UPolyEditBevelEdgeActivity *this)

{
  this->_padding_ = (longlong)&_vftable__for__UInteractiveToolActivity__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection(&this->ActiveSelection);
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  this->_padding_ = (longlong)&___7UInteractiveToolActivity__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// operator() @ 14cd554a0

void __thiscall
`UPolyEditBevelEdgeActivity::Start'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMeshOperator *param_1)

{
  int iVar1;
  FGeometryError *pFVar2;
  FGeometryWarning *pFVar3;
  code *pcVar4;
  UObject *pUVar5;
  longlong *plVar6;
  FText *pFVar7;
  UClass *pUVar8;
  longlong *plVar9;
  FText local_48;
  EGeometryResultType local_38;
  ForAnyElementType local_30;
  int local_28;
  int local_24;
  ForAnyElementType local_20;
  int local_18;
  int local_14 [3];
  
  iVar1 = (param_1->ResultInfo).Errors.ArrayNum;
  plVar9 = (longlong *)0x0;
  local_38 = (param_1->ResultInfo).Result;
  pFVar2 = (FGeometryError *)(param_1->ResultInfo).Errors.AllocatorInstance.Data;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = iVar1;
  if (iVar1 == 0) {
    local_24 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar1,0,&local_30,iVar1,&local_24);
    ConstructItems<UE::Geometry::FGeometryError,UE::Geometry::FGeometryError,int>
              (local_30.Data,pFVar2,iVar1);
  }
  iVar1 = (param_1->ResultInfo).Warnings.ArrayNum;
  pFVar3 = (FGeometryWarning *)(param_1->ResultInfo).Warnings.AllocatorInstance.Data;
  local_20.Data = (FScriptContainerElement *)0x0;
  local_18 = iVar1;
  if (iVar1 == 0) {
    local_14[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar1,0,&local_20,iVar1,local_14);
    ConstructItems<UE::Geometry::FGeometryWarning,UE::Geometry::FGeometryWarning,int>
              (local_20.Data,pFVar3,iVar1);
  }
  if (local_38 == Failure) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0x28));
    plVar6 = (longlong *)(**(code **)(*(longlong *)pUVar5 + 0x2d8))(pUVar5);
    pcVar4 = *(code **)(*plVar6 + 0x360);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"UPolyEditBevelEdgeActivity",L"OnBevelFailedMessage",
                        L"Bevel failed for current selection");
    (*pcVar4)(plVar6,pFVar7,3);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    (**(code **)(**(longlong **)this + 0x328))();
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0x28));
    if (pUVar5 != (UObject *)0x0) {
      pUVar8 = Z_Construct_UClass_UToolActivityHost_NoRegister();
      plVar9 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar5,pUVar8);
    }
    (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined8 *)this);
  }
  DestructItems<UE::Geometry::FGeometryWarning,int>((FGeometryWarning *)local_20.Data,local_18);
  if ((FGeometryWarning *)local_20.Data != (FGeometryWarning *)0x0) {
    FMemory::Free(local_20.Data);
  }
  DestructItems<UE::Geometry::FGeometryError,int>((FGeometryError *)local_30.Data,local_28);
  if ((FGeometryError *)local_30.Data != (FGeometryError *)0x0) {
    FMemory::Free(local_30.Data);
  }
  return;
}

// ApplyBevel @ 14cd5af60

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

void __thiscall UPolyEditBevelEdgeActivity::ApplyBevel(UPolyEditBevelEdgeActivity *this)

{
  longlong lVar1;
  code *pcVar2;
  UPolyEditActivityContext *pUVar3;
  FDynamicMesh3 *pFVar4;
  FScriptContainerElement *pFVar5;
  FDynamicMeshChange *this_00;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  FDynamicMesh3 *pFVar9;
  UObject *pUVar10;
  longlong *plVar11;
  FText *pFVar12;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar13;
  undefined8 uVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStackY_278 [32];
  undefined1 local_228 [4];
  int local_224;
  ForAnyElementType local_220;
  undefined8 local_218;
  ForAnyElementType local_210;
  uint local_208;
  int local_204 [3];
  FText local_1f8;
  FText local_1e8;
  FGroupTopologySelection local_1d8;
  FDynamicMeshChangeTracker local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pFVar9 = UPreviewMesh::GetMesh
                     ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr
                       )->PreviewMesh).field0_0x0.DebugPtr);
  if ((pFVar9->TriangleRefCounts).UsedCount == 0) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    plVar11 = (longlong *)(**(code **)(*(longlong *)pUVar10 + 0x2d8))(pUVar10);
    pcVar2 = *(code **)(*plVar11 + 0x360);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_1f8,L"UPolyEditBevelEdgeActivity",L"OnBevelEmptyMeshMessage",
                         L"Bevel created empty mesh, ignoring");
    (*pcVar2)(plVar11,pFVar12,3);
    if (local_1f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
    }
    pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
    UPreviewMesh::UpdatePreview
              ((((pUVar3->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
               (pUVar3->CurrentMesh).Object,FullUpdate,AllVertexAttribs);
    return;
  }
  UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker
            (&local_e8,(((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh).Object);
  UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_e8);
  pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
  uVar19 = 0;
  local_220.Data = (FScriptContainerElement *)0x0;
  local_218 = 0;
  uVar22 = uVar19;
  if ((pUVar3->CurrentMesh).Object == (FDynamicMesh3 *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar22 = local_218 & 0xffffffff;
  }
  pFVar4 = (pUVar3->CurrentMesh).Object;
  uVar21 = (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed +
           (pFVar4->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar21 != 0) &&
     (pFVar5 = (pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
    uVar19 = 1;
    uVar16 = 1;
    if ((int)uVar21 < 2) goto LAB_14cd5b127;
    do {
      lVar1 = (ulonglong)((uint)uVar19 & 0x1ff) * 2;
      if ((*(short *)(lVar1 + *(longlong *)(pFVar5 + (uVar19 >> 9) * 8)) != 0) &&
         (*(short *)(lVar1 + *(longlong *)(pFVar5 + (uVar19 >> 9) * 8)) != -1)) break;
      uVar16 = (uint)uVar19 + 1;
      uVar19 = (ulonglong)uVar16;
    } while ((int)uVar16 < (int)uVar21);
  }
  uVar16 = (uint)uVar19;
LAB_14cd5b127:
  if (uVar16 != uVar21) {
    while( true ) {
      iVar17 = (int)uVar19;
      iVar8 = (int)uVar22;
      local_224 = iVar17;
      if ((local_220.Data <= (FScriptContainerElement *)&local_224) &&
         ((FScriptContainerElement *)&local_224 < local_220.Data + (longlong)local_218._4_4_ * 4)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar8 = (int)local_218;
      }
      if (iVar8 == local_218._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_220,(int *)((longlong)&local_218 + 4));
      }
      uVar16 = iVar8 + 1;
      local_218 = CONCAT44(local_218._4_4_,uVar16);
      uVar18 = iVar17 + 1;
      uVar19 = (ulonglong)uVar18;
      *(int *)(local_220.Data + (longlong)iVar8 * 4) = local_224;
      if ((int)uVar18 < (int)uVar21) {
        pFVar5 = (pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          lVar1 = (uVar19 >> 9) * 8;
          lVar6 = (ulonglong)((uint)uVar19 & 0x1ff) * 2;
          if ((*(short *)(lVar6 + *(longlong *)(pFVar5 + lVar1)) != 0) &&
             (*(short *)(lVar6 + *(longlong *)(pFVar5 + lVar1)) != -1)) goto LAB_14cd5b227;
          uVar18 = (uint)uVar19 + 1;
          uVar19 = (ulonglong)uVar18;
        } while ((int)uVar18 < (int)uVar21);
      }
      if (uVar18 == uVar21) break;
LAB_14cd5b227:
      uVar22 = (ulonglong)uVar16;
    }
    uVar22 = (ulonglong)uVar16;
  }
  FVar20.Data = local_220.Data;
  uVar21 = (uint)uVar22;
  local_210.Data = (FScriptContainerElement *)0x0;
  local_208 = uVar21;
  if (uVar21 == 0) {
    local_204[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar21,0,&local_210,uVar21,local_204);
    memcpy(local_210.Data,FVar20.Data,(longlong)(int)uVar21 << 2);
    uVar22 = (ulonglong)local_208;
  }
  iVar8 = (int)uVar22;
  pFVar5 = local_210.Data + (longlong)iVar8 * 4;
  FVar20.Data = local_210.Data;
  while( true ) {
    if ((int)uVar22 != iVar8) {
      local_228[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_228);
    }
    if (FVar20.Data == pFVar5) break;
    UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle(&local_e8,*(int *)FVar20.Data,true);
    uVar22 = (ulonglong)local_208;
    FVar20.Data = FVar20.Data + 4;
  }
  if (local_210.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data);
  }
  pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
  if (((pUVar3->CurrentMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::Geometry::FDynamicMesh3::Copy((pUVar3->CurrentMesh).Object,pFVar9,true,true,true,true);
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_1d8);
  bVar7 = UE::Geometry::FGroupTopologySelection::operator!=
                    ((FGroupTopologySelection *)
                     &((((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0
                      .DebugPtr)->_padding_,&this->ActiveSelection);
  if (bVar7) {
    UMeshTopologySelectionMechanic::SetSelection
              ((UMeshTopologySelectionMechanic *)
               (((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0.
               DebugPtr,&this->ActiveSelection,false);
  }
  pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
  TVar13 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_e8);
  pFVar12 = FText::AsLocalizable_Advanced_LocText
                      (&local_1e8,L"UPolyEditBevelEdgeActivity",L"PolyMeshBevelChange",L"Bevel");
  UE::Core::Private::Function::CheckCallable(*(void **)&pUVar3->EmitCurrentMeshChangeAndUpdate);
  pcVar2 = *(code **)&pUVar3->EmitCurrentMeshChangeAndUpdate;
  plVar11 = *(longlong **)&(pUVar3->EmitCurrentMeshChangeAndUpdate).field_0x28;
  plVar15 = (longlong *)&(pUVar3->EmitCurrentMeshChangeAndUpdate).field_0x10;
  if (plVar11 != (longlong *)0x0) {
    plVar15 = plVar11;
  }
  uVar14 = (**(code **)(*plVar15 + 8))();
  (*pcVar2)(uVar14,pFVar12,TVar13.Ptr,&local_1d8);
  this_00 = (FDynamicMeshChange *)((TVar13.Ptr)->OldVertices).AllocatorInstance.Data;
  if (this_00 != (FDynamicMeshChange *)0x0) {
    UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(this_00);
    ::operator_delete(this_00,0x48);
  }
  if (local_1e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->ActiveSelection).SelectedGroupIDs,&local_1d8.SelectedGroupIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->ActiveSelection).SelectedCornerIDs,&local_1d8.SelectedCornerIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->ActiveSelection).SelectedEdgeIDs,&local_1d8.SelectedEdgeIDs);
  local_1d8.SelectedEdgeIDs.HashSize = 0;
  if (local_1d8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1d8.SelectedEdgeIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1d8.SelectedEdgeIDs.Elements);
  local_1d8.SelectedCornerIDs.HashSize = 0;
  if (local_1d8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1d8.SelectedCornerIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1d8.SelectedCornerIDs.Elements);
  local_1d8.SelectedGroupIDs.HashSize = 0;
  if (local_1d8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1d8.SelectedGroupIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_1d8);
  if (local_220.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data);
  }
  UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_e8);
  return;
}

// BeginBevel @ 14cd5e970

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

void __thiscall UPolyEditBevelEdgeActivity::BeginBevel(UPolyEditBevelEdgeActivity *this)

{
  UPolygonSelectionMechanic *pUVar1;
  FGroupTopologySelection *pFVar2;
  undefined1 auStack_128 [32];
  FGroupTopologySelection local_108;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar1 = (((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0.DebugPtr;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->ActiveSelection).SelectedGroupIDs,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&pUVar1->_padding_);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->ActiveSelection).SelectedCornerIDs,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&pUVar1->_padding_);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->ActiveSelection).SelectedEdgeIDs,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&pUVar1->_padding_);
  pUVar1 = (((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0.DebugPtr;
  pFVar2 = UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_108);
  UMeshTopologySelectionMechanic::SetSelection
            ((UMeshTopologySelectionMechanic *)pUVar1,pFVar2,false);
  local_108.SelectedEdgeIDs.HashSize = 0;
  if (local_108.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_108.SelectedEdgeIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_108.SelectedEdgeIDs.Elements);
  local_108.SelectedCornerIDs.HashSize = 0;
  if (local_108.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_108.SelectedCornerIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_108.SelectedCornerIDs.Elements);
  local_108.SelectedGroupIDs.HashSize = 0;
  if (local_108.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_108.SelectedGroupIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_108);
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult
            ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr);
  return;
}

// CanAccept @ 14cd62f80

bool __thiscall UPolyEditBevelEdgeActivity::CanAccept(UPolyEditBevelEdgeActivity *this)

{
  return true;
}

// CanStart @ 14cd63270

/* WARNING: Type propagation algorithm not settling */

bool __thiscall UPolyEditBevelEdgeActivity::CanStart(UPolyEditBevelEdgeActivity *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int iVar2;
  TObjectPtr<UPolyEditActivityContext>_u_0 TVar3;
  UPolyEditActivityContext *pUVar4;
  FGroupTopology *pFVar5;
  code *pcVar6;
  longlong *plVar7;
  uint *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_168 [8];
  longlong *local_160;
  ulonglong local_158;
  longlong *local_150;
  int iStack_148;
  uint uStack_144;
  TBitArray<FDefaultBitArrayAllocator> *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  int iStack_128;
  undefined4 uStack_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  uint *local_110;
  FGroup *local_108;
  FScriptContainerElement *local_100;
  longlong *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  longlong *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  TVar3 = (this->ActivityContext).field0_0x0;
  if (TVar3.DebugPtr != (UPolyEditActivityContext *)0x0) {
    lVar14 = *(longlong *)((longlong)TVar3 + 0x70);
    iStack_148 = 0;
    local_130 = 0;
    local_160 = (longlong *)(lVar14 + 0x340);
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x3f0);
    iVar2 = *(int *)(lVar14 + 0x408);
    plVar15 = (longlong *)(lVar14 + 0x3e0);
    local_158 = 1;
    uStack_144 = 1;
    iStack_134 = 0;
    if (iVar2 != 0) {
      pTVar21 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x400);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x400) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar21 = pTVar1;
      }
      uStack_144 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
      while (uStack_144 == 0) {
        lVar13 = (longlong)iStack_148;
        local_130 = local_130 + 0x20;
        iStack_148 = iStack_148 + 1;
        uStack_144 = 1;
        iStack_134 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148) goto LAB_14cd6333e;
        uStack_144 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uStack_144 = -uStack_144 & uStack_144;
      uVar22 = (ulonglong)uStack_144 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_120 = (int)lVar13;
      iStack_134 = local_130 + -1 + local_120;
      if (iVar2 < iStack_134) {
        iStack_134 = iVar2;
      }
    }
LAB_14cd6333e:
    iStack_128 = *(int *)(lVar14 + 1000) - *(int *)(lVar14 + 0x414);
    uVar20 = *(uint *)(lVar14 + 0x408);
    uVar18 = uVar20 & 0xffffffe0;
    TStack_c0._padding_ = CONCAT44(uStack_144,iStack_148);
    uStack_138 = 0xffffffff;
    TStack_c0.CurrentBitIndex = iStack_134;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar20 >> 5;
    TStack_c0._28_4_ = local_4c;
    TStack_c0.BaseBitIndex = local_130;
    uStack_a0 = CONCAT44(uStack_124,iStack_128);
    local_150 = plVar15;
    local_140 = pTVar1;
    local_c8 = plVar15;
    TStack_c0.Array = pTVar1;
    if ((((int)uVar20 < 0) || (iVar2 < (int)uVar20)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      uVar11 = (*pcVar6)();
      return (bool)uVar11;
    }
    uVar12 = *(uint *)(lVar14 + 0x408);
    if (uVar20 != uVar12) {
      pTVar21 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x400);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x400) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar21 = pTVar1;
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) &
               *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
      while (uVar20 == 0) {
        lVar14 = (longlong)iVar16;
        uVar18 = uVar18 + 0x20;
        iVar16 = iVar16 + 1;
        uVar20 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14cd63460;
        uVar20 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      uVar22 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_11c = (int)lVar14;
      uVar20 = local_11c + -1 + uVar18;
      if ((int)uVar12 < (int)uVar20) {
        uVar20 = uVar12;
      }
    }
LAB_14cd63460:
    while( true ) {
      plVar9 = local_c8;
      if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      plVar7 = local_160;
      if (((TStack_c0.CurrentBitIndex == uVar20) && (TStack_c0.Array == pTVar1)) &&
         (plVar9 == plVar15)) break;
      pUVar4 = (this->ActivityContext).field0_0x0.DebugPtr;
      uVar18 = *(uint *)(*plVar9 + (longlong)TStack_c0.CurrentBitIndex * 0xc);
      if (((pUVar4->CurrentTopology).Object == (FGroupTopology *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      pFVar5 = (pUVar4->CurrentTopology).Object;
      uVar12 = 0;
      if ((int)uVar18 < (pFVar5->Edges).ArrayNum) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      if (*(int *)((pFVar5->Edges).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x50 + 4) != -1)
      {
        return true;
      }
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    }
    iStack_f0 = 0;
    iVar2 = (int)local_160[5];
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(local_160 + 2);
    local_d8 = 0;
    iStack_dc = 0;
    if (iVar2 != 0) {
      pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)local_160[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)local_160[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar21 = pTVar1;
      }
      uVar20 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
      while (uVar20 == 0) {
        lVar14 = (longlong)iStack_f0;
        local_d8 = local_d8 + 0x20;
        iStack_f0 = iStack_f0 + 1;
        iStack_dc = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_14cd635d0;
        uVar20 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      local_158 = (ulonglong)(-uVar20 & uVar20);
      uVar22 = local_158 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_118 = (int)lVar14;
      iStack_dc = local_d8 + -1 + local_118;
      if (iVar2 < iStack_dc) {
        iStack_dc = iVar2;
      }
    }
LAB_14cd635d0:
    uVar20 = *(uint *)(local_160 + 5);
    uStack_ec = (undefined4)local_158;
    uVar18 = uVar20 & 0xffffffe0;
    iStack_d4 = iStack_134;
    iStack_d0 = (int)local_160[1] - *(int *)((longlong)local_160 + 0x34);
    uStack_e0 = 0xffffffff;
    local_f8 = local_160;
    TStack_90._padding_ = CONCAT44(uStack_ec,iStack_f0);
    TStack_90.CurrentBitIndex = iStack_dc;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    local_98 = local_160;
    iVar16 = (int)uVar20 >> 5;
    TStack_90._28_4_ = iStack_134;
    TStack_90.BaseBitIndex = local_d8;
    uStack_70 = CONCAT44(uStack_cc,iStack_d0);
    local_e8 = pTVar1;
    TStack_90.Array = pTVar1;
    local_160._0_4_ = uVar20;
    if ((((int)uVar20 < 0) || (iVar2 < (int)uVar20)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      uVar11 = (*pcVar6)();
      return (bool)uVar11;
    }
    uVar12 = *(uint *)(plVar7 + 5);
    if (uVar20 != uVar12) {
      pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)plVar7[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar7[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar21 = pTVar1;
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) &
               *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
      while (uVar20 == 0) {
        lVar14 = (longlong)iVar16;
        uVar18 = uVar18 + 0x20;
        iVar16 = iVar16 + 1;
        uVar20 = uVar12;
        local_160._0_4_ = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14cd636e0;
        uVar20 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      uVar22 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_114 = (int)lVar14;
      uVar20 = local_114 + -1 + uVar18;
      local_160._0_4_ = uVar20;
      if ((int)uVar12 < (int)uVar20) {
        uVar20 = uVar12;
        local_160._0_4_ = uVar12;
      }
    }
LAB_14cd636e0:
    while( true ) {
      plVar15 = local_98;
      if ((int)local_98[1] - *(int *)((longlong)local_98 + 0x34) != (int)uStack_70) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_90.CurrentBitIndex == uVar20) &&
          (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar7 + 2))) &&
         (plVar15 == plVar7)) break;
      pUVar4 = (this->ActivityContext).field0_0x0.DebugPtr;
      uVar18 = *(uint *)(*plVar15 + (longlong)TStack_90.CurrentBitIndex * 0xc);
      if (((pUVar4->CurrentTopology).Object == (FGroupTopology *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      local_108 = UE::Geometry::FGroupTopology::FindGroupByID
                            ((pUVar4->CurrentTopology).Object,uVar18);
      if (local_108 != (FGroup *)0x0) {
        iVar2 = (local_108->Boundaries).ArrayNum;
        uVar22 = (ulonglong)iVar2;
        pFVar23 = (local_108->Boundaries).AllocatorInstance.Data;
        local_158 = CONCAT44(local_158._4_4_,iVar2);
        local_100 = pFVar23 + uVar22 * 0x28;
        while( true ) {
          pFVar17 = local_100;
          if ((local_108->Boundaries).ArrayNum != (int)uVar22) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupBoundary_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          uVar20 = (uint)local_160;
          if (pFVar23 == pFVar17) break;
          puVar19 = *(uint **)pFVar23;
          iVar2 = *(int *)(pFVar23 + 8);
          local_110 = puVar19 + iVar2;
          while( true ) {
            puVar8 = local_110;
            if (*(int *)(pFVar23 + 8) != iVar2) {
              local_168[0] = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_168);
            }
            if (puVar19 == puVar8) break;
            pUVar4 = (this->ActivityContext).field0_0x0.DebugPtr;
            uVar20 = *puVar19;
            if (((pUVar4->CurrentTopology).Object == (FGroupTopology *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar11 = (*pcVar6)();
              return (bool)uVar11;
            }
            pFVar5 = (pUVar4->CurrentTopology).Object;
            uVar12 = 0;
            if ((int)uVar20 < (pFVar5->Edges).ArrayNum) {
              uVar12 = ~uVar20 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar11 = (*pcVar6)();
              return (bool)uVar11;
            }
            pFVar17 = (pFVar5->Edges).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x50;
            if (((*(uint *)pFVar17 != uVar18) && (*(uint *)(pFVar17 + 4) != uVar18)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Groups.A == GroupID || Groups.B == GroupID",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\GroupTopology.h"
                                    ,0x119,L""), bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar11 = (*pcVar6)();
              return (bool)uVar11;
            }
            uVar20 = *(uint *)pFVar17;
            if (uVar20 == uVar18) {
              uVar20 = *(uint *)(pFVar17 + 4);
            }
            if (uVar20 != 0xffffffff) {
              if ((int)plVar7[1] == *(int *)((longlong)plVar7 + 0x34)) {
                return true;
              }
              plVar15 = plVar7 + 7;
              if ((longlong *)plVar7[8] != (longlong *)0x0) {
                plVar15 = (longlong *)plVar7[8];
              }
              iVar16 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar7[9] - 1U & uVar20) * 4);
              if (iVar16 == -1) {
                return true;
              }
              while (*(uint *)(*plVar7 + (longlong)iVar16 * 0xc) != uVar20) {
                iVar16 = *(int *)(*plVar7 + 4 + (longlong)iVar16 * 0xc);
                if (iVar16 == -1) {
                  return true;
                }
              }
            }
            puVar19 = puVar19 + 1;
          }
          pFVar23 = pFVar23 + 0x28;
          uVar22 = local_158 & 0xffffffff;
        }
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
  }
  return false;
}

// End @ 14cd68800

/* WARNING: Type propagation algorithm not settling */

EToolActivityEndResult __thiscall
UPolyEditBevelEdgeActivity::End(UPolyEditBevelEdgeActivity *this,EToolShutdownType param_1)

{
  UPolyEditActivityContext *pUVar1;
  code *pcVar2;
  bool bVar3;
  EToolActivityEndResult EVar4;
  
  if (this->bIsRunning != false) {
    if (param_1 == Cancel) {
      (**(code **)(this->_padding_ + 0x328))();
      pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
      UPreviewMesh::UpdatePreview
                ((((pUVar1->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
                 (pUVar1->CurrentMesh).Object,FullUpdate,AllVertexAttribs);
      return Cancelled;
    }
    UMeshOpPreviewWithBackgroundCompute::CancelCompute
              ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr);
    (**(code **)(this->_padding_ + 800))(this);
    (**(code **)(this->_padding_ + 0x328))(this);
    return Completed;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4126210561992031989>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditBevelEdgeActivity.cpp"
                     ,0x10b,"bIsRunning");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  (**(code **)(this->_padding_ + 0x328))(this);
  return ErrorDuringEnd;
}

// EndInternal @ 14cd68eb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPolyEditBevelEdgeActivity::EndInternal(UPolyEditBevelEdgeActivity *this)

{
  bool bVar1;
  
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
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->BevelProperties).field0_0x0.DebugPtr,0);
  this->bIsRunning = false;
  return;
}

// GetPrivateStaticClass @ 14cd6d920

UClass * __cdecl UPolyEditBevelEdgeActivity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditBevelEdgeActivity",
               &Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity.InnerSingleton,
               StaticRegisterNativesUPolyEditBevelEdgeActivity,0x140,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditBevelEdgeActivity>,
               InternalVTableHelperCtorCaller<UPolyEditBevelEdgeActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity.InnerSingleton;
}

// HasAccept @ 14cd6fa20

bool __thiscall UPolyEditBevelEdgeActivity::HasAccept(UPolyEditBevelEdgeActivity *this)

{
  return true;
}

// IsRunning @ 14cd71b50

bool __thiscall UPolyEditBevelEdgeActivity::IsRunning(UPolyEditBevelEdgeActivity *this)

{
  return this->bIsRunning;
}

// MakeNewOperator @ 14cd71d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall UPolyEditBevelEdgeActivity::MakeNewOperator(UPolyEditBevelEdgeActivity *this)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  uint uVar8;
  TReferenceControllerBase<1> *pTVar9;
  FGroupTopology *pFVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  longlong *plVar13;
  bool bVar14;
  FBevelOp *pFVar15;
  FBevelOp *pFVar16;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  TVar17;
  longlong lVar18;
  ForElementType<FSetElementId> FVar19;
  UPolyEditActivityContext *pUVar20;
  FDynamicMeshOperator *in_RDX;
  uint uVar21;
  uint uVar22;
  FBevelOp *pFVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  undefined1 auStack_298 [32];
  undefined4 *local_278;
  FScriptContainerElement *local_270;
  longlong local_268;
  longlong local_260;
  undefined8 local_258;
  undefined1 local_248;
  undefined1 local_247 [3];
  undefined4 local_244;
  undefined4 local_240 [2];
  longlong *local_238;
  uint uStack_230;
  uint uStack_22c;
  longlong *local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  uint local_218;
  undefined4 uStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  UPolyEditBevelEdgeActivity *local_208;
  FDynamicMesh3 *local_200;
  FSharedReferencer<1> local_1f8;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  FDynamicMeshOperator *local_1e0;
  longlong *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 uStack_1b0;
  longlong *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  FGroupTopology *local_178;
  TReferenceControllerBase<1> *pTStack_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  double local_108;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_cc;
  undefined4 local_ac;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_298;
  local_208 = this;
  local_1e0 = in_RDX;
  pFVar15 = ::operator_new(0xe8);
  pFVar23 = (FBevelOp *)0x0;
  uVar22 = 0;
  uVar21 = 0;
  pFVar16 = pFVar23;
  if (pFVar15 != (FBevelOp *)0x0) {
    memset(pFVar15,0,0xe8);
    pFVar16 = FBevelOp::FBevelOp(pFVar15);
  }
  local_1f8.ReferenceController = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x38);
  local_200 = *(FDynamicMesh3 **)(this->_padding_ + 0x30);
  if (local_1f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1f8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1f8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&pFVar16->OriginalMesh != (TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *)&local_200) {
    (pFVar16->OriginalMesh).Object = local_200;
    local_200 = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar16->OriginalMesh).SharedReferenceCount,&local_1f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f8.ReferenceController);
  pTVar9 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x50);
  pFVar10 = *(FGroupTopology **)(this->_padding_ + 0x48);
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_178 = (pFVar16->MeshTopology).Object;
  pTStack_170 = (pFVar16->MeshTopology).SharedReferenceCount.ReferenceController;
  (pFVar16->MeshTopology).Object = pFVar10;
  (pFVar16->MeshTopology).SharedReferenceCount.ReferenceController = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_170);
  pFVar16->BevelDistance = *(double *)(this->_padding_ + 0xb0);
  pFVar16->Subdivisions = *(int *)(this->_padding_ + 0xb8);
  pFVar16->RoundWeight = (double)*(float *)(this->_padding_ + 0xbc);
  pFVar16->bInferMaterialID = *(bool *)(this->_padding_ + 0xc0);
  pFVar16->SetMaterialID = *(int *)(this->_padding_ + 0xc4);
  iVar25 = *(int *)&(this->ActiveSelection).SelectedCornerIDs.Elements.field_0x28 -
           *(int *)&(this->ActiveSelection).SelectedEdgeIDs.Elements.field_0x4;
  uVar27 = 0;
  if (iVar25 < 1) {
    iVar25 = (int)this->_padding_ -
             *(int *)&(this->ActiveSelection).SelectedGroupIDs.Elements.field_0x4;
    if (iVar25 < 1) {
      if (2 < (byte)LogGeometry._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
    }
    else {
      uVar8 = *(uint *)&this->bIsRunning;
      plVar2 = &this->_padding_;
      plVar3 = &this->_padding_;
      uStack_22c = 1;
      uStack_21c = uVar27;
      if (uVar8 != 0) {
        pUVar20 = (this->ActivityContext).field0_0x0.DebugPtr;
        if (pUVar20 == (UPolyEditActivityContext *)0x0) {
          pUVar20 = (UPolyEditActivityContext *)plVar2;
        }
        uVar24 = (uint)pUVar20->_padding_;
        pFVar15 = pFVar23;
        uVar27 = uVar22;
        uVar21 = uVar22;
        while (uVar24 == 0) {
          iVar26 = (int)pFVar23;
          uVar27 = (int)pFVar15 + 0x20;
          pFVar15 = (FBevelOp *)(ulonglong)uVar27;
          uVar21 = iVar26 + 1;
          pFVar23 = (FBevelOp *)(ulonglong)uVar21;
          uStack_21c = uVar8;
          if ((int)(((int)(uVar8 - 1) >> 0x1f & 0x1fU) + (uVar8 - 1)) >> 5 < (int)uVar21)
          goto LAB_14cd721ec;
          uVar24 = *(uint *)((longlong)&pUVar20->_padding_ + (longlong)iVar26 * 4 + 4);
        }
        uStack_22c = -uVar24 & uVar24;
        uVar7 = (ulonglong)uStack_22c * 2 + 1;
        lVar18 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_1e8 = (int)lVar18;
        uStack_21c = (uVar27 - 1) + local_1e8;
        if ((int)uVar8 < (int)uStack_21c) {
          uStack_21c = uVar8;
        }
      }
LAB_14cd721ec:
      uVar22 = *(uint *)&this->bIsRunning;
      uVar24 = uVar22 & 0xffffffe0;
      uStack_220 = 0xffffffff;
      TStack_1a0._padding_ = CONCAT44(uStack_22c,uVar21);
      TStack_1a0.CurrentBitIndex = uStack_21c;
      TStack_1a0.UnvisitedBitMask = 0xffffffff;
      uStack_214 = local_ac;
      TStack_1a0._28_4_ = local_ac;
      TStack_1a0.BaseBitIndex = uVar27;
      uStack_180 = CONCAT44(uStack_20c,iVar25);
      iVar26 = (int)uVar22 >> 5;
      local_238 = plVar3;
      uStack_230 = uVar21;
      local_228 = plVar2;
      local_218 = uVar27;
      iStack_210 = iVar25;
      local_1a8 = plVar3;
      TStack_1a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar2;
      if ((((int)uVar22 < 0) || ((int)uVar8 < (int)uVar22)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar14)) {
        pcVar12 = (code *)swi(3);
        TVar17.Ptr = (FDynamicMeshOperator *)(*pcVar12)();
        return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
                )TVar17.Ptr;
      }
      uVar21 = *(uint *)&this->bIsRunning;
      if (uVar22 != uVar21) {
        pUVar20 = (this->ActivityContext).field0_0x0.DebugPtr;
        if (pUVar20 == (UPolyEditActivityContext *)0x0) {
          pUVar20 = (UPolyEditActivityContext *)plVar2;
        }
        uVar22 = -1 << ((byte)uVar22 & 0x1f) &
                 *(uint *)((longlong)&pUVar20->_padding_ + (longlong)iVar26 * 4);
        while (uVar22 == 0) {
          lVar18 = (longlong)iVar26;
          uVar24 = uVar24 + 0x20;
          iVar26 = iVar26 + 1;
          uVar22 = uVar21;
          if ((int)(((int)(uVar21 - 1) >> 0x1f & 0x1fU) + (uVar21 - 1)) >> 5 < iVar26)
          goto LAB_14cd722f0;
          uVar22 = *(uint *)((longlong)&pUVar20->_padding_ + lVar18 * 4 + 4);
        }
        uVar7 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_1e4 = (int)lVar18;
        uVar22 = local_1e4 + -1 + uVar24;
        if ((int)uVar21 < (int)uVar22) {
          uVar22 = uVar21;
        }
      }
LAB_14cd722f0:
      while( true ) {
        plVar13 = local_1a8;
        if ((int)local_1a8[1] - *(int *)((longlong)local_1a8 + 0x34) != (int)uStack_180) {
          local_247[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_247);
        }
        if (((TStack_1a0.CurrentBitIndex == uVar22) &&
            (TStack_1a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar2)) &&
           (this = local_208, plVar13 == plVar3)) break;
        pTVar6 = &pFVar16->BevelGroupFaces;
        local_240[0] = *(undefined4 *)(*plVar13 + (longlong)TStack_1a0.CurrentBitIndex * 0xc);
        pFVar11 = (pTVar6->AllocatorInstance).Data;
        if ((pFVar11 <= (FScriptContainerElement *)local_240) &&
           (lVar18 = (longlong)(pFVar16->BevelGroupFaces).ArrayMax,
           (FScriptContainerElement *)local_240 < pFVar11 + lVar18 * 4)) {
          local_260 = (longlong)(pFVar16->BevelGroupFaces).ArrayNum;
          local_258 = 4;
          local_278 = local_240;
          local_270 = pFVar11;
          local_268 = lVar18;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar12 = (code *)swi(3);
            TVar17.Ptr = (FDynamicMeshOperator *)(*pcVar12)();
            return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
                    )TVar17.Ptr;
          }
        }
        iVar25 = (pFVar16->BevelGroupFaces).ArrayNum;
        piVar1 = &(pFVar16->BevelGroupFaces).ArrayMax;
        if (iVar25 == *piVar1) {
          iVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar6->AllocatorInstance,piVar1);
        }
        pFVar11 = (pTVar6->AllocatorInstance).Data;
        (pFVar16->BevelGroupFaces).ArrayNum = iVar25 + 1;
        *(undefined4 *)(pFVar11 + (longlong)iVar25 * 4) = local_240[0];
        TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
      }
    }
  }
  else {
    puVar4 = &(this->ActiveSelection).SelectedCornerIDs.Elements.field_0x30;
    uStack_22c = 1;
    uVar8 = (this->ActiveSelection).SelectedCornerIDs.HashSize;
    puVar5 = &(this->ActiveSelection).SelectedCornerIDs.Elements.field_0x20;
    uStack_21c = uVar21;
    if (uVar8 != 0) {
      FVar19 = (this->ActiveSelection).SelectedCornerIDs.Hash.SecondaryData;
      if (FVar19 == (ForElementType<FSetElementId>)0x0) {
        FVar19 = (ForElementType<FSetElementId>)puVar4;
      }
      uVar24 = *(uint *)FVar19;
      pFVar15 = pFVar23;
      uVar27 = uVar22;
      uVar21 = uVar22;
      while (uVar24 == 0) {
        iVar26 = (int)pFVar23;
        uVar27 = (int)pFVar15 + 0x20;
        pFVar15 = (FBevelOp *)(ulonglong)uVar27;
        uVar21 = iVar26 + 1;
        pFVar23 = (FBevelOp *)(ulonglong)uVar21;
        uStack_21c = uVar8;
        if ((int)(((int)(uVar8 - 1) >> 0x1f & 0x1fU) + (uVar8 - 1)) >> 5 < (int)uVar21)
        goto LAB_14cd71f5d;
        uVar24 = ((uint *)((longlong)FVar19 + 4))[iVar26];
      }
      uStack_22c = -uVar24 & uVar24;
      uVar7 = (ulonglong)uStack_22c * 2 + 1;
      lVar18 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_1f0 = (int)lVar18;
      uStack_21c = (uVar27 - 1) + local_1f0;
      if ((int)uVar8 < (int)uStack_21c) {
        uStack_21c = uVar8;
      }
    }
LAB_14cd71f5d:
    uVar22 = (this->ActiveSelection).SelectedCornerIDs.HashSize;
    uVar24 = uVar22 & 0xffffffe0;
    uStack_220 = 0xffffffff;
    TStack_1d0._padding_ = CONCAT44(uStack_22c,uVar21);
    TStack_1d0.CurrentBitIndex = uStack_21c;
    TStack_1d0.UnvisitedBitMask = 0xffffffff;
    uStack_214 = local_cc;
    TStack_1d0._28_4_ = local_cc;
    TStack_1d0.BaseBitIndex = uVar27;
    uStack_1b0 = CONCAT44(uStack_20c,iVar25);
    iVar26 = (int)uVar22 >> 5;
    local_238 = (longlong *)puVar5;
    uStack_230 = uVar21;
    local_228 = (longlong *)puVar4;
    local_218 = uVar27;
    iStack_210 = iVar25;
    local_1d8 = (longlong *)puVar5;
    TStack_1d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
    if ((((int)uVar22 < 0) || ((int)uVar8 < (int)uVar22)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17.Ptr = (FDynamicMeshOperator *)(*pcVar12)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar17.Ptr;
    }
    uVar21 = (this->ActiveSelection).SelectedCornerIDs.HashSize;
    if (uVar22 != uVar21) {
      FVar19 = (this->ActiveSelection).SelectedCornerIDs.Hash.SecondaryData;
      if (FVar19 == (ForElementType<FSetElementId>)0x0) {
        FVar19 = (ForElementType<FSetElementId>)puVar4;
      }
      uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)((longlong)FVar19 + (longlong)iVar26 * 4);
      while (uVar22 == 0) {
        lVar18 = (longlong)iVar26;
        uVar24 = uVar24 + 0x20;
        iVar26 = iVar26 + 1;
        uVar22 = uVar21;
        if ((int)(((int)(uVar21 - 1) >> 0x1f & 0x1fU) + (uVar21 - 1)) >> 5 < iVar26)
        goto LAB_14cd72060;
        uVar22 = *(uint *)((undefined1 *)((longlong)FVar19 + 4) + lVar18 * 4);
      }
      uVar7 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_1ec = (int)lVar18;
      uVar22 = local_1ec + -1 + uVar24;
      if ((int)uVar21 < (int)uVar22) {
        uVar22 = uVar21;
      }
    }
LAB_14cd72060:
    while( true ) {
      plVar2 = local_1d8;
      if ((int)local_1d8[1] - *(int *)((longlong)local_1d8 + 0x34) != (int)uStack_1b0) {
        local_248 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_248);
      }
      if (((TStack_1d0.CurrentBitIndex == uVar22) &&
          (TStack_1d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) &&
         (this = local_208, plVar2 == (longlong *)puVar5)) break;
      pTVar6 = &pFVar16->BevelGroupEdges;
      local_244 = *(undefined4 *)(*plVar2 + (longlong)TStack_1d0.CurrentBitIndex * 0xc);
      pFVar11 = (pTVar6->AllocatorInstance).Data;
      if ((pFVar11 <= (FScriptContainerElement *)&local_244) &&
         (lVar18 = (longlong)(pFVar16->BevelGroupEdges).ArrayMax,
         (FScriptContainerElement *)&local_244 < pFVar11 + lVar18 * 4)) {
        local_260 = (longlong)(pFVar16->BevelGroupEdges).ArrayNum;
        local_258 = 4;
        local_278 = &local_244;
        local_270 = pFVar11;
        local_268 = lVar18;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar12 = (code *)swi(3);
          TVar17.Ptr = (FDynamicMeshOperator *)(*pcVar12)();
          return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
                  )TVar17.Ptr;
        }
      }
      iVar25 = (pFVar16->BevelGroupEdges).ArrayNum;
      piVar1 = &(pFVar16->BevelGroupEdges).ArrayMax;
      if (iVar25 == *piVar1) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar6->AllocatorInstance,piVar1);
      }
      pFVar11 = (pTVar6->AllocatorInstance).Data;
      (pFVar16->BevelGroupEdges).ArrayNum = iVar25 + 1;
      *(undefined4 *)(pFVar11 + (longlong)iVar25 * 4) = local_244;
      TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
    }
  }
  UPreviewMesh::GetTransform
            (*(UPreviewMesh **)(*(longlong *)(this->_padding_ + 0x40) + 0x68),&local_a8);
  local_168 = local_a8.Rotation.XY.m128d_f64[0];
  local_158 = local_a8.Rotation.ZW.m128d_f64[0];
  local_160 = local_a8.Rotation.XY.m128d_f64[1];
  local_108 = local_a8.Translation.ZW.m128d_f64[0];
  local_150 = local_a8.Rotation.ZW.m128d_f64[1];
  local_138 = local_a8.Translation.ZW.m128d_f64[0];
  local_f0 = local_a8.Scale3D.ZW.m128d_f64[0]._0_4_;
  uStack_ec = local_a8.Scale3D.ZW.m128d_f64[0]._4_4_;
  local_148 = local_a8.Translation.XY.m128d_f64[0];
  dStack_140 = local_a8.Translation.XY.m128d_f64[1];
  local_130 = local_a8.Scale3D.XY.m128d_f64[0]._0_4_;
  uStack_12c = local_a8.Scale3D.XY.m128d_f64[0]._4_4_;
  uStack_128 = local_a8.Scale3D.XY.m128d_f64[1]._0_4_;
  uStack_124 = local_a8.Scale3D.XY.m128d_f64[1]._4_4_;
  (**(code **)(pFVar16->_padding_ + 8))(pFVar16,&local_168);
  local_1e0->_padding_ = (longlong)pFVar16;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )local_1e0;
}

// Render @ 14cd79ae0

void __thiscall
UPolyEditBevelEdgeActivity::Render(UPolyEditBevelEdgeActivity *this,IToolsContextRenderAPI *param_1)

{
  return;
}

// Setup @ 14cd7b710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UPolyEditBevelEdgeActivity::Setup(UPolyEditBevelEdgeActivity *this,UInteractiveTool *param_1)

{
  code *pcVar1;
  UObject *pUVar2;
  UInteractiveToolManager *this_00;
  UContextObjectStore *this_01;
  UPolyEditActivityContext *pUVar3;
  UClass *pUVar4;
  UPolyEditBevelEdgeProperties *pUVar5;
  longlong *plVar6;
  undefined1 auStack_108 [32];
  code *local_e8 [2];
  undefined **local_d8;
  UPolyEditBevelEdgeActivity *local_d0;
  undefined8 local_c0;
  FString local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  UInteractionMechanic::Setup((UInteractionMechanic *)this,param_1);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  this_00 = (UInteractiveToolManager *)(**(code **)(*(longlong *)pUVar2 + 0x2d8))(pUVar2);
  this_01 = UInteractiveToolManager::GetContextObjectStore(this_00);
  pUVar3 = UContextObjectStore::FindContext<UPolyEditActivityContext>(this_01);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UPolyEditActivityContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->ActivityContext).field0_0x0.DebugPtr = pUVar3;
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = UPolyEditBevelEdgeProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar4);
  local_a8._8_8_ = pUVar2;
  pUVar5 = (UPolyEditBevelEdgeProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar6 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UPolyEditBevelEdgeProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->BevelProperties).field0_0x0.DebugPtr = pUVar5;
  pcVar1 = *(code **)(pUVar5->_padding_ + 0x2b8);
  ::FString::FString(&local_b8,L"");
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (*pcVar1)(pUVar5,pUVar2,&local_b8);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x2d0))(this,(this->BevelProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->BevelProperties).field0_0x0.DebugPtr,0);
  pUVar5 = (this->BevelProperties).field0_0x0.DebugPtr;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_1>,void,double_const_&>
                ::Call;
  local_c0 = 0;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<double>
            ((FWatchablePropertySet *)&pUVar5->_padding_,&pUVar5->BevelDistance,
             (TFunction<void___cdecl(double_const_&)> *)local_e8);
  pUVar5 = (this->BevelProperties).field0_0x0.DebugPtr;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_c0 = 0;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_2>,void,int_const_&>
                ::Call;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<int>
            ((FWatchablePropertySet *)&pUVar5->_padding_,&pUVar5->Subdivisions,
             (TFunction<void___cdecl(int_const_&)> *)local_e8);
  pUVar5 = (this->BevelProperties).field0_0x0.DebugPtr;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::`2'::<lambda_3>,0,0>::
              _vftable_;
  local_c0 = 0;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_3>,void,float_const_&>
                ::Call;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&pUVar5->_padding_,&pUVar5->RoundWeight,
             (TFunction<void___cdecl(float_const_&)> *)local_e8);
  pUVar5 = (this->BevelProperties).field0_0x0.DebugPtr;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::`2'::<lambda_4>,0,0>::
              _vftable_;
  local_c0 = 0;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_4>,void,bool_const_&>
                ::Call;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar5->_padding_,&pUVar5->bInferMaterialID,
             (TFunction<void___cdecl(bool_const_&)> *)local_e8);
  pUVar5 = (this->BevelProperties).field0_0x0.DebugPtr;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::`2'::<lambda_5>,0,0>::
              _vftable_;
  local_c0 = 0;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_5>,void,int_const_&>
                ::Call;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<int>
            ((FWatchablePropertySet *)&pUVar5->_padding_,&pUVar5->SetMaterialID,
             (TFunction<void___cdecl(int_const_&)> *)local_e8);
  return;
}

// Shutdown @ 14cd7f470

void __thiscall
UPolyEditBevelEdgeActivity::Shutdown(UPolyEditBevelEdgeActivity *this,EToolShutdownType param_1)

{
  UPolyEditBevelEdgeProperties *pUVar1;
  code *pcVar2;
  UObject *pUVar3;
  undefined7 in_register_00000011;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  FString local_28;
  
  if (this->bIsRunning != false) {
    (**(code **)(this->_padding_ + 0x310))(this,CONCAT71(in_register_00000011,param_1));
  }
  pUVar1 = (this->BevelProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
  ::FString::FString(&local_28,L"");
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (*pcVar2)(pUVar1,pUVar3,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  (this->BevelProperties).field0_0x0.DebugPtr = (UPolyEditBevelEdgeProperties *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  this->_padding_ = (longlong)local_res8;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  return;
}

// Start @ 14cd7ff50

EToolActivityStartResult __thiscall
UPolyEditBevelEdgeActivity::Start(UPolyEditBevelEdgeActivity *this)

{
  code *pcVar1;
  UPolyEditActivityContext *pUVar2;
  char cVar3;
  UObject *pUVar4;
  longlong *plVar5;
  FText *pFVar6;
  undefined8 uVar7;
  longlong *plVar8;
  IDynamicMeshOperatorFactory *pIVar9;
  FText local_18;
  
  cVar3 = (**(code **)(this->_padding_ + 0x2e8))();
  if (cVar3 == '\0') {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    plVar5 = (longlong *)(**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4);
    pcVar1 = *(code **)(*plVar5 + 0x360);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UPolyEditBevelEdgeActivity",L"OnBevelFailedMesssage",
                        L"Cannot Bevel with current selection: Make sure your selection includes (or borders) non-boundary edges."
                       );
    (*pcVar1)(plVar5,pFVar6,3);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    return FailedStart;
  }
  pIVar9 = (IDynamicMeshOperatorFactory *)&this->_padding_;
  if (this == (UPolyEditBevelEdgeActivity *)0x0) {
    pIVar9 = (IDynamicMeshOperatorFactory *)0x0;
  }
  UMeshOpPreviewWithBackgroundCompute::ChangeOpFactory
            ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr,pIVar9);
  TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
  ::AddWeakLambda<UPolyEditBevelEdgeActivity,_UPolyEditBevelEdgeActivity::Start_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
              *)&((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
                 OnOpCompleted,(UPolyEditBevelEdgeActivity *)&stack0x00000010,(<lambda_1> *)this);
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->BevelProperties).field0_0x0.DebugPtr,1);
  (**(code **)(this->_padding_ + 0x318))(this);
  this->bIsRunning = true;
  pUVar2 = (this->ActivityContext).field0_0x0.DebugPtr;
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UPolyEditBevelEdgeActivity",L"BeginBevelActivity",L"Begin Bevel");
  UE::Core::Private::Function::CheckCallable(*(void **)&pUVar2->EmitActivityStart);
  pcVar1 = *(code **)&pUVar2->EmitActivityStart;
  plVar5 = *(longlong **)&(pUVar2->EmitActivityStart).field_0x28;
  plVar8 = (longlong *)&(pUVar2->EmitActivityStart).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar8 = plVar5;
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  (*pcVar1)(uVar7,pFVar6);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return Running;
}

// StaticRegisterNativesUPolyEditBevelEdgeActivity @ 14cd813d0

void __cdecl UPolyEditBevelEdgeActivity::StaticRegisterNativesUPolyEditBevelEdgeActivity(void)

{
  return;
}

// Tick @ 14cd815f0

void __thiscall UPolyEditBevelEdgeActivity::Tick(UPolyEditBevelEdgeActivity *this,float param_1)

{
  return;
}

