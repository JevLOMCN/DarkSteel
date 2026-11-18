// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cc8f770

UClass * __cdecl URemoveOccludedTrianglesOperatorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URemoveOccludedTrianglesOperatorFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RemoveOccludedTrianglesOperatorFactory",
               &Z_Registration_Info_UClass_URemoveOccludedTrianglesOperatorFactory.InnerSingleton,
               StaticRegisterNativesURemoveOccludedTrianglesOperatorFactory,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URemoveOccludedTrianglesOperatorFactory>
               ,InternalVTableHelperCtorCaller<URemoveOccludedTrianglesOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URemoveOccludedTrianglesOperatorFactory.InnerSingleton;
}

// URemoveOccludedTrianglesOperatorFactory @ 14ccbfa00

URemoveOccludedTrianglesOperatorFactory * __thiscall
URemoveOccludedTrianglesOperatorFactory::URemoveOccludedTrianglesOperatorFactory
          (URemoveOccludedTrianglesOperatorFactory *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Tool).field0_0x0.DebugPtr = (URemoveOccludedTrianglesTool *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  return this;
}

// URemoveOccludedTrianglesOperatorFactory @ 14ccbfa40

URemoveOccludedTrianglesOperatorFactory * __thiscall
URemoveOccludedTrianglesOperatorFactory::URemoveOccludedTrianglesOperatorFactory
          (URemoveOccludedTrianglesOperatorFactory *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Tool).field0_0x0.DebugPtr = (URemoveOccludedTrianglesTool *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  return this;
}

// ~URemoveOccludedTrianglesOperatorFactory @ 14ccc4cd0

void __thiscall
URemoveOccludedTrianglesOperatorFactory::~URemoveOccludedTrianglesOperatorFactory
          (URemoveOccludedTrianglesOperatorFactory *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14cd017b0

UClass * __cdecl URemoveOccludedTrianglesOperatorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URemoveOccludedTrianglesOperatorFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RemoveOccludedTrianglesOperatorFactory",
               &Z_Registration_Info_UClass_URemoveOccludedTrianglesOperatorFactory.InnerSingleton,
               StaticRegisterNativesURemoveOccludedTrianglesOperatorFactory,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URemoveOccludedTrianglesOperatorFactory>
               ,InternalVTableHelperCtorCaller<URemoveOccludedTrianglesOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URemoveOccludedTrianglesOperatorFactory.InnerSingleton;
}

// MakeNewOperator @ 14cd0a620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall
URemoveOccludedTrianglesOperatorFactory::MakeNewOperator
          (URemoveOccludedTrianglesOperatorFactory *this)

{
  int *piVar1;
  TArray<TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<TSharedPtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<UE::Geometry::TTransformSRT3<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  char cVar5;
  TReferenceControllerBase<1> *pTVar6;
  FDynamicMesh3 *pFVar7;
  FScriptContainerElement *pFVar8;
  TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *pTVar9;
  TSharedPtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1> *pTVar10;
  void *_Src;
  code *pcVar11;
  uint *puVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FRemoveOccludedTrianglesOp *this_00;
  FRemoveOccludedTrianglesOp *this_01;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  TVar16;
  longlong lVar17;
  TTransform<double> *pTVar18;
  uint uVar19;
  FDynamicMeshOperator *in_RDX;
  ulonglong uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  undefined8 *puVar24;
  uint *puVar25;
  undefined1 auStackY_308 [32];
  undefined1 local_2b8 [4];
  uint local_2b4;
  FRemoveOccludedTrianglesOp *local_2b0;
  longlong local_2a8;
  uint *local_2a0;
  FDynamicMeshOperator *local_298;
  double local_290;
  double dStack_288;
  double dStack_280;
  double dStack_278;
  double local_270;
  double dStack_268;
  double local_260;
  double dStack_258;
  double dStack_250;
  double dStack_248;
  double local_240;
  double dStack_238;
  double local_230;
  double dStack_228;
  double local_220;
  double dStack_218;
  double local_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  FDynamicMesh3 *local_1a0;
  TReferenceControllerBase<1> *pTStack_198;
  double local_190;
  double dStack_188;
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_298 = in_RDX;
  this_00 = ::operator_new(0x128);
  this_01 = (FRemoveOccludedTrianglesOp *)0x0;
  if (this_00 != (FRemoveOccludedTrianglesOp *)0x0) {
    memset(this_00,0,0x128);
    this_01 = UE::Geometry::FRemoveOccludedTrianglesOp::FRemoveOccludedTrianglesOp(this_00);
  }
  this_01->NormalOffset = *(double *)(*(longlong *)(this->_padding_ + 0xf0) + 0xb0);
  this_01->bSetTriangleGroupInsteadOfRemoving =
       *(char *)(*(longlong *)(this->_padding_ + 0xe0) + 0xdc) == '\x01';
  this_01->ActiveGroupLayer = *(FName *)(*(longlong *)(this->_padding_ + 0xe8) + 0xb0);
  local_2b0 = this_01;
  bVar13 = UPolygroupLayersProperties::HasSelectedPolygroup
                     (*(UPolygroupLayersProperties **)(this->_padding_ + 0xe8));
  this_01->bActiveGroupLayerIsDefault = !bVar13;
  cVar5 = *(char *)(*(longlong *)(this->_padding_ + 0xe0) + 0xb0);
  uVar21 = 0;
  if (cVar5 == '\0') {
    this_01->InsideMode = FastWindingNumber;
  }
  else if (cVar5 == '\x01') {
    this_01->InsideMode = SimpleOcclusionTest;
  }
  else {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_7141780565929229991>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\RemoveOccludedTrianglesTool.cpp"
                        ,0x159,"false");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      TVar16.Ptr = (FDynamicMeshOperator *)(*pcVar11)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar16.Ptr;
    }
  }
  cVar5 = *(char *)(*(longlong *)(this->_padding_ + 0xe0) + 0xb1);
  if (cVar5 == '\0') {
    this_01->TriangleSamplingMethod = Vertices;
  }
  else if (cVar5 == '\x01') {
    this_01->TriangleSamplingMethod = VerticesAndCentroids;
  }
  else {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_7141780565929229976>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\RemoveOccludedTrianglesTool.cpp"
                        ,0x168,"false");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      TVar16.Ptr = (FDynamicMeshOperator *)(*pcVar11)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar16.Ptr;
    }
  }
  this_01->WindingIsoValue = *(double *)(*(longlong *)(this->_padding_ + 0xe0) + 0xb8);
  uVar14 = (uint)this->_padding_;
  lVar17 = this->_padding_;
  uVar19 = uVar21;
  if ((int)uVar14 < *(int *)(lVar17 + 0x170)) {
    uVar19 = ~uVar14 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar11 = (code *)swi(3);
    TVar16.Ptr = (FDynamicMeshOperator *)(*pcVar11)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar16.Ptr;
  }
  lVar23 = this->_padding_;
  uVar14 = *(uint *)(*(longlong *)(lVar17 + 0x168) + (longlong)(int)uVar14 * 4);
  uVar19 = uVar21;
  if ((int)uVar14 < *(int *)(lVar23 + 0xd0)) {
    uVar19 = ~uVar14 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar11 = (code *)swi(3);
    TVar16.Ptr = (FDynamicMeshOperator *)(*pcVar11)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar16.Ptr;
  }
  UE::ToolTarget::GetLocalToWorldTransform
            (&local_128,*(UToolTarget **)(*(longlong *)(lVar23 + 200) + (longlong)(int)uVar14 * 8));
  uVar14 = (uint)this->_padding_;
  lVar17 = this->_padding_;
  if ((int)uVar14 < *(int *)(lVar17 + 0x120)) {
    uVar21 = ~uVar14 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar11 = (code *)swi(3);
    TVar16.Ptr = (FDynamicMeshOperator *)(*pcVar11)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar16.Ptr;
  }
  lVar17 = *(longlong *)(lVar17 + 0x118);
  pTVar6 = *(TReferenceControllerBase<1> **)(lVar17 + 8 + (longlong)(int)uVar14 * 0x10);
  pFVar7 = *(FDynamicMesh3 **)(lVar17 + (longlong)(int)uVar14 * 0x10);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1a0 = (this_01->OriginalMesh).Object;
  pTStack_198 = (this_01->OriginalMesh).SharedReferenceCount.ReferenceController;
  (this_01->OriginalMesh).Object = pFVar7;
  (this_01->OriginalMesh).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_198);
  lVar17 = this->_padding_;
  if (*(char *)(*(longlong *)(lVar17 + 0xe0) + 200) == '\0') {
    pTVar2 = &this_01->OccluderTrees;
    if (pTVar2 != (TArray<TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>,TSizedDefaultAllocator<32>_>
                   *)(lVar17 + 0x128)) {
      DestructItems<TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>,int>
                ((TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *)
                 (pTVar2->AllocatorInstance).Data,(this_01->OccluderTrees).ArrayNum);
      iVar15 = *(int *)(lVar17 + 0x130);
      piVar1 = &(this_01->OccluderTrees).ArrayMax;
      pTVar9 = *(TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> **)
                (lVar17 + 0x128);
      (this_01->OccluderTrees).ArrayNum = iVar15;
      if ((iVar15 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar15,*piVar1,&pTVar2->AllocatorInstance,iVar15,piVar1);
        ConstructItems<TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>,TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>,int>
                  ((pTVar2->AllocatorInstance).Data,pTVar9,iVar15);
      }
    }
    lVar17 = this->_padding_;
    pTVar3 = &this_01->OccluderWindings;
    puVar24 = (undefined8 *)(lVar17 + 0x138);
    if (pTVar3 != (TArray<TSharedPtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1>,TSizedDefaultAllocator<32>_>
                   *)puVar24) {
      DestructItems<TSharedPtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1>,int>
                ((TSharedPtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1> *)
                 (pTVar3->AllocatorInstance).Data,(this_01->OccluderWindings).ArrayNum);
      iVar15 = *(int *)(lVar17 + 0x140);
      piVar1 = &(this_01->OccluderWindings).ArrayMax;
      pTVar10 = (TSharedPtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1> *)
                *puVar24;
      (this_01->OccluderWindings).ArrayNum = iVar15;
      if ((iVar15 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar15,*piVar1,&pTVar3->AllocatorInstance,iVar15,piVar1);
        ConstructItems<TSharedPtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1>,TSharedPtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1>,int>
                  ((pTVar3->AllocatorInstance).Data,pTVar10,iVar15);
      }
    }
    pTVar4 = &this_01->OccluderTransforms;
    puVar24 = (undefined8 *)(this->_padding_ + 0x148);
    if (pTVar4 != (TArray<UE::Geometry::TTransformSRT3<double>,TSizedDefaultAllocator<32>_> *)
                  puVar24) {
      iVar15 = *(int *)(this->_padding_ + 0x150);
      piVar1 = &(this_01->OccluderTransforms).ArrayMax;
      _Src = (void *)*puVar24;
      (this_01->OccluderTransforms).ArrayNum = iVar15;
      if ((iVar15 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,iVar15,*piVar1,&pTVar4->AllocatorInstance,iVar15,piVar1);
        if (iVar15 != 0) {
          memcpy((pTVar4->AllocatorInstance).Data,_Src,(longlong)iVar15 * 0x50);
        }
      }
    }
  }
  else {
    uVar21 = (uint)this->_padding_;
    uVar14 = 0;
    if ((int)uVar21 < *(int *)(lVar17 + 0x170)) {
      uVar14 = ~uVar21 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      TVar16.Ptr = (FDynamicMeshOperator *)(*pcVar11)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar16.Ptr;
    }
    pTVar2 = &this_01->OccluderTrees;
    uVar21 = *(uint *)(*(longlong *)(lVar17 + 0x168) + (longlong)(int)uVar21 * 4);
    lVar17 = this->_padding_;
    uVar14 = 0;
    if ((int)uVar21 < *(int *)(lVar17 + 0x130)) {
      uVar14 = ~uVar21 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      TVar16.Ptr = (FDynamicMeshOperator *)(*pcVar11)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar16.Ptr;
    }
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    pFVar22 = (FScriptContainerElement *)
              (*(longlong *)(lVar17 + 0x128) + (longlong)(int)uVar21 * 0x10);
    if (((pFVar8 <= pFVar22) &&
        (pFVar22 < pFVar8 + (longlong)(this_01->OccluderTrees).ArrayMax * 0x10)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      TVar16.Ptr = (FDynamicMeshOperator *)(*pcVar11)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar16.Ptr;
    }
    iVar15 = (this_01->OccluderTrees).ArrayNum;
    piVar1 = &(this_01->OccluderTrees).ArrayMax;
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    (this_01->OccluderTrees).ArrayNum = iVar15 + 1;
    *(undefined8 *)(pFVar8 + (longlong)iVar15 * 0x10) = *(undefined8 *)pFVar22;
    lVar17 = *(longlong *)(pFVar22 + 8);
    *(longlong *)(pFVar8 + (longlong)iVar15 * 0x10 + 8) = lVar17;
    if (lVar17 != 0) {
      LOCK();
      *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
      UNLOCK();
    }
    lVar17 = this->_padding_;
    pTVar3 = &this_01->OccluderWindings;
    uVar14 = 0;
    if ((int)uVar21 < *(int *)(lVar17 + 0x140)) {
      uVar14 = ~uVar21 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      TVar16.Ptr = (FDynamicMeshOperator *)(*pcVar11)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar16.Ptr;
    }
    pFVar8 = (pTVar3->AllocatorInstance).Data;
    pFVar22 = (FScriptContainerElement *)
              (*(longlong *)(lVar17 + 0x138) + (longlong)(int)uVar21 * 0x10);
    if (((pFVar8 <= pFVar22) &&
        (pFVar22 < pFVar8 + (longlong)(this_01->OccluderWindings).ArrayMax * 0x10)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      TVar16.Ptr = (FDynamicMeshOperator *)(*pcVar11)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar16.Ptr;
    }
    iVar15 = (this_01->OccluderWindings).ArrayNum;
    piVar1 = &(this_01->OccluderWindings).ArrayMax;
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar3->AllocatorInstance,piVar1);
    }
    pFVar8 = (pTVar3->AllocatorInstance).Data;
    (this_01->OccluderWindings).ArrayNum = iVar15 + 1;
    *(undefined8 *)(pFVar8 + (longlong)iVar15 * 0x10) = *(undefined8 *)pFVar22;
    lVar17 = *(longlong *)(pFVar22 + 8);
    *(longlong *)(pFVar8 + (longlong)iVar15 * 0x10 + 8) = lVar17;
    if (lVar17 != 0) {
      LOCK();
      *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
      UNLOCK();
    }
    pTVar4 = &this_01->OccluderTransforms;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_1e0 = ___xmm_3ff00000000000000000000000000000;
    uStack_1d8 = _UNK_15061cbc8;
    local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dStack_1a8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    dStack_1b8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dStack_1b0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    pFVar8 = (pTVar4->AllocatorInstance).Data;
    if (((pFVar8 <= (FScriptContainerElement *)&local_1f0) &&
        ((FScriptContainerElement *)&local_1f0 <
         pFVar8 + (longlong)(this_01->OccluderTransforms).ArrayMax * 0x50)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      TVar16.Ptr = (FDynamicMeshOperator *)(*pcVar11)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar16.Ptr;
    }
    iVar15 = (this_01->OccluderTransforms).ArrayNum;
    piVar1 = &(this_01->OccluderTransforms).ArrayMax;
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&pTVar4->AllocatorInstance,piVar1);
    }
    (this_01->OccluderTransforms).ArrayNum = iVar15 + 1;
    lVar17 = (longlong)iVar15;
    pFVar8 = (pTVar4->AllocatorInstance).Data;
    *(undefined8 *)(pFVar8 + lVar17 * 0x50) = local_1f0;
    *(undefined8 *)(pFVar8 + lVar17 * 0x50 + 8) = uStack_1e8;
    *(undefined8 *)(pFVar8 + lVar17 * 0x50 + 0x10) = local_1e0;
    *(undefined8 *)(pFVar8 + lVar17 * 0x50 + 0x10 + 8) = uStack_1d8;
    *(double *)(pFVar8 + lVar17 * 0x50 + 0x20) = local_1d0;
    *(double *)(pFVar8 + lVar17 * 0x50 + 0x20 + 8) = dStack_1c8;
    *(double *)(pFVar8 + lVar17 * 0x50 + 0x30) = local_1c0;
    *(double *)(pFVar8 + lVar17 * 0x50 + 0x30 + 8) = dStack_1b8;
    *(double *)(pFVar8 + lVar17 * 0x50 + 0x40) = dStack_1b0;
    *(double *)(pFVar8 + lVar17 * 0x50 + 0x40 + 8) = dStack_1a8;
  }
  this_01->AddRandomRays = *(int *)(*(longlong *)(this->_padding_ + 0xe0) + 0xc0);
  this_01->AddTriangleSamples = *(int *)(*(longlong *)(this->_padding_ + 0xe0) + 0xc4);
  this_01->ShrinkRemoval = *(int *)(*(longlong *)(this->_padding_ + 0xe0) + 0xcc);
  this_01->MinAreaConnectedComponent = *(double *)(*(longlong *)(this->_padding_ + 0xe0) + 0xd0);
  this_01->MinTriCountConnectedComponent = *(int *)(*(longlong *)(this->_padding_ + 0xe0) + 0xd8);
  UE::Geometry::FRemoveOccludedTrianglesOp::SetTransform(this_01,&local_128);
  pTVar4 = &this_01->MeshTransforms;
  local_240 = local_128.Rotation.XY.m128d_f64[0];
  local_230 = local_128.Rotation.ZW.m128d_f64[0];
  dStack_238 = local_128.Rotation.XY.m128d_f64[1];
  dStack_228 = local_128.Rotation.ZW.m128d_f64[1];
  local_180 = local_128.Translation.ZW.m128d_f64[0];
  local_210 = local_128.Translation.ZW.m128d_f64[0];
  local_220 = local_128.Translation.XY.m128d_f64[0];
  dStack_218 = local_128.Translation.XY.m128d_f64[1];
  local_168 = local_128.Scale3D.ZW.m128d_f64[0];
  dStack_1f8 = local_128.Scale3D.ZW.m128d_f64[0];
  local_190 = local_128.Translation.XY.m128d_f64[0];
  dStack_188 = local_128.Translation.XY.m128d_f64[1];
  dStack_208 = local_128.Scale3D.XY.m128d_f64[0];
  dStack_200 = local_128.Scale3D.XY.m128d_f64[1];
  pFVar8 = (pTVar4->AllocatorInstance).Data;
  local_178 = local_128.Scale3D.XY.m128d_f64[0];
  dStack_170 = local_128.Scale3D.XY.m128d_f64[1];
  if (((pFVar8 <= (FScriptContainerElement *)&local_240) &&
      ((FScriptContainerElement *)&local_240 <
       pFVar8 + (longlong)(this_01->MeshTransforms).ArrayMax * 0x50)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar11 = (code *)swi(3);
    TVar16.Ptr = (FDynamicMeshOperator *)(*pcVar11)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar16.Ptr;
  }
  iVar15 = (this_01->MeshTransforms).ArrayNum;
  if (iVar15 == (this_01->MeshTransforms).ArrayMax) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar4->AllocatorInstance,&(this_01->MeshTransforms).ArrayMax);
  }
  (this_01->MeshTransforms).ArrayNum = iVar15 + 1;
  lVar17 = (longlong)iVar15;
  pFVar8 = (pTVar4->AllocatorInstance).Data;
  *(double *)(pFVar8 + lVar17 * 0x50) = local_240;
  *(double *)(pFVar8 + lVar17 * 0x50 + 8) = dStack_238;
  *(double *)(pFVar8 + lVar17 * 0x50 + 0x10) = local_230;
  *(double *)(pFVar8 + lVar17 * 0x50 + 0x10 + 8) = dStack_228;
  *(double *)(pFVar8 + lVar17 * 0x50 + 0x20) = local_220;
  *(double *)(pFVar8 + lVar17 * 0x50 + 0x20 + 8) = dStack_218;
  *(double *)(pFVar8 + lVar17 * 0x50 + 0x30) = local_210;
  *(double *)(pFVar8 + lVar17 * 0x50 + 0x30 + 8) = dStack_208;
  *(double *)(pFVar8 + lVar17 * 0x50 + 0x40) = dStack_200;
  *(double *)(pFVar8 + lVar17 * 0x50 + 0x40 + 8) = dStack_1f8;
  uVar21 = (uint)this->_padding_;
  lVar23 = (longlong)(int)uVar21;
  lVar17 = this->_padding_;
  uVar14 = 0;
  if ((int)uVar21 < *(int *)(lVar17 + 0x160)) {
    uVar14 = ~uVar21 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar11 = (code *)swi(3);
    TVar16.Ptr = (FDynamicMeshOperator *)(*pcVar11)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar16.Ptr;
  }
  local_2a8 = *(longlong *)(lVar17 + 0x158);
  local_2b4 = *(uint *)(local_2a8 + 8 + lVar23 * 0x10);
  uVar20 = (ulonglong)(int)local_2b4;
  puVar25 = *(uint **)(local_2a8 + lVar23 * 0x10);
  local_2a0 = puVar25 + uVar20;
  while( true ) {
    puVar12 = local_2a0;
    if (*(int *)(local_2a8 + 8 + lVar23 * 0x10) != (int)uVar20) {
      local_2b8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_2b8);
    }
    if (puVar25 == puVar12) break;
    uVar21 = *puVar25;
    lVar17 = this->_padding_;
    uVar14 = 0;
    if ((int)uVar21 < *(int *)(lVar17 + 0x110)) {
      uVar14 = ~uVar21 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      TVar16.Ptr = (FDynamicMeshOperator *)(*pcVar11)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar16.Ptr;
    }
    pTVar18 = UPreviewMesh::GetTransform
                        (*(UPreviewMesh **)
                          (*(longlong *)(lVar17 + 0x108) + (longlong)(int)uVar21 * 8),&local_c8);
    local_290 = (pTVar18->Rotation).XY.m128d_f64[0];
    dStack_288 = (pTVar18->Rotation).XY.m128d_f64[1];
    dStack_280 = (pTVar18->Rotation).ZW.m128d_f64[0];
    dStack_278 = (pTVar18->Rotation).ZW.m128d_f64[1];
    local_260 = (pTVar18->Translation).ZW.m128d_f64[0];
    local_270 = (pTVar18->Translation).XY.m128d_f64[0];
    dStack_268 = (pTVar18->Translation).XY.m128d_f64[1];
    dStack_248 = (pTVar18->Scale3D).ZW.m128d_f64[0];
    dStack_258 = (pTVar18->Scale3D).XY.m128d_f64[0];
    dStack_250 = (pTVar18->Scale3D).XY.m128d_f64[1];
    pFVar8 = (pTVar4->AllocatorInstance).Data;
    local_160 = local_270;
    dStack_158 = dStack_268;
    local_150 = local_260;
    local_148 = dStack_258;
    dStack_140 = dStack_250;
    local_138 = dStack_248;
    if (((pFVar8 <= (FScriptContainerElement *)&local_290) &&
        ((FScriptContainerElement *)&local_290 <
         pFVar8 + (longlong)(this_01->MeshTransforms).ArrayMax * 0x50)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      TVar16.Ptr = (FDynamicMeshOperator *)(*pcVar11)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar16.Ptr;
    }
    iVar15 = (this_01->MeshTransforms).ArrayNum;
    if (iVar15 == (this_01->MeshTransforms).ArrayMax) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&pTVar4->AllocatorInstance,&(this_01->MeshTransforms).ArrayMax);
    }
    uVar20 = (ulonglong)local_2b4;
    (this_01->MeshTransforms).ArrayNum = iVar15 + 1;
    lVar17 = (longlong)iVar15;
    pFVar8 = (pTVar4->AllocatorInstance).Data;
    puVar25 = puVar25 + 1;
    *(double *)(pFVar8 + lVar17 * 0x50) = local_290;
    *(double *)(pFVar8 + lVar17 * 0x50 + 8) = dStack_288;
    *(double *)(pFVar8 + lVar17 * 0x50 + 0x10) = dStack_280;
    *(double *)(pFVar8 + lVar17 * 0x50 + 0x10 + 8) = dStack_278;
    *(double *)(pFVar8 + lVar17 * 0x50 + 0x20) = local_270;
    *(double *)(pFVar8 + lVar17 * 0x50 + 0x20 + 8) = dStack_268;
    *(double *)(pFVar8 + lVar17 * 0x50 + 0x30) = local_260;
    *(double *)(pFVar8 + lVar17 * 0x50 + 0x30 + 8) = dStack_258;
    *(double *)(pFVar8 + lVar17 * 0x50 + 0x40) = dStack_250;
    *(double *)(pFVar8 + lVar17 * 0x50 + 0x40 + 8) = dStack_248;
  }
  local_298->_padding_ = (longlong)local_2b0;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )local_298;
}

// StaticRegisterNativesURemoveOccludedTrianglesOperatorFactory @ 14cd2f300

void __cdecl
URemoveOccludedTrianglesOperatorFactory::
StaticRegisterNativesURemoveOccludedTrianglesOperatorFactory(void)

{
  return;
}

