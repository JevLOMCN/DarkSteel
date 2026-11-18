// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 8

// FOffsetMeshRegion @ 14c7b3bd0

FOffsetMeshRegion * __thiscall
UE::Geometry::FOffsetMeshRegion::FOffsetMeshRegion(FOffsetMeshRegion *this,FDynamicMesh3 *param_1)

{
  undefined1 *puVar1;
  
  this->Mesh = param_1;
  *(undefined ***)this = &___7FOffsetMeshRegion_Geometry_UE__6B_;
  (this->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles).ArrayNum = 0;
  (this->Triangles).ArrayMax = 0;
  *(undefined8 *)&this->OffsetPositionFunc = 0;
  *(undefined8 *)&(this->OffsetPositionFunc).field_0x28 = 0;
  *(undefined ***)&(this->OffsetPositionFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_29_>_FOffsetMeshRegion_Geometry_UE___0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->OffsetPositionFunc).field_0x18;
  *(FOffsetMeshRegion **)puVar1 = this;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OffsetPositionFunc =
         Core::Private::Function::
         TFunctionRefCaller<UE::Geometry::FOffsetMeshRegion::<lambda_29_>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int>
         ::Call;
  }
  this->ExtrusionVectorType = Zero;
  this->DefaultOffsetDistance = 1.0;
  *(undefined8 *)&this->LoopEdgesShouldHaveSameGroup = 0;
  *(undefined8 *)&(this->LoopEdgesShouldHaveSameGroup).field_0x28 = 0;
  *(undefined ***)&(this->LoopEdgesShouldHaveSameGroup).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_30_>_FOffsetMeshRegion_Geometry_UE___0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->LoopEdgesShouldHaveSameGroup).field_0x18;
  *(FOffsetMeshRegion **)puVar1 = this;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->LoopEdgesShouldHaveSameGroup =
         Core::Private::Function::
         TFunctionRefCaller<UE::Geometry::FOffsetMeshRegion::<lambda_30_>,bool,int,int>::Call;
  }
  this->UVScaleFactor = 1.0;
  this->MaxScaleForAdjustingTriNormalsOffset = 4.0;
  this->CreaseAngleThresholdDeg = 180.0;
  this->bOffsetFullComponentsAsSolids = true;
  this->bIsPositiveOffset = true;
  this->NumSubdivisions = 0;
  this->bSingleGroupPerArea = true;
  this->bGroupPerSubdivision = true;
  this->bUVIslandPerGroup = true;
  this->bInferMaterialID = true;
  this->SetMaterialID = 0;
  this->UseVersion = Current;
  (this->OffsetRegions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OffsetRegions).ArrayNum = 0;
  (this->OffsetRegions).ArrayMax = 0;
  (this->AllModifiedAndNewTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllModifiedAndNewTriangles).ArrayNum = 0;
  (this->AllModifiedAndNewTriangles).ArrayMax = 0;
  return this;
}

// ~FOffsetMeshRegion @ 14c7b7470

void __thiscall UE::Geometry::FOffsetMeshRegion::~FOffsetMeshRegion(FOffsetMeshRegion *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7FOffsetMeshRegion_Geometry_UE__6B_;
  pFVar1 = (this->AllModifiedAndNewTriangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::FOffsetMeshRegion::FOffsetInfo,int>
            ((FOffsetInfo *)(this->OffsetRegions).AllocatorInstance.Data,
             (this->OffsetRegions).ArrayNum);
  pFVar1 = (this->OffsetRegions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->LoopEdgesShouldHaveSameGroup != 0) {
    plVar2 = *(longlong **)&(this->LoopEdgesShouldHaveSameGroup).field_0x28;
    plVar3 = (longlong *)&(this->LoopEdgesShouldHaveSameGroup).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->OffsetPositionFunc != 0) {
    plVar2 = *(longlong **)&(this->OffsetPositionFunc).field_0x28;
    plVar3 = (longlong *)&(this->OffsetPositionFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Apply @ 14c7dc6f0

bool __thiscall UE::Geometry::FOffsetMeshRegion::Apply(FOffsetMeshRegion *this)

{
  TArray<UE::Geometry::FOffsetMeshRegion::FOffsetInfo,TSizedDefaultAllocator<32>_> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 local_res8 [8];
  int *local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> local_a8;
  code *local_98;
  undefined1 *local_90;
  FMeshConnectedComponents local_88;
  TFunction<bool___cdecl(int,int)> local_68;
  
  local_88.Mesh = this->Mesh;
  local_88.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Components.Array.ArrayNum = 0;
  local_88.Components.Array.ArrayMax = 0;
  local_68._0_8_ = 0;
  local_68._40_8_ = 0;
  FMeshConnectedComponents::FindConnectedTriangles(&local_88,&this->Triangles,&local_68);
  iVar8 = local_88.Components.Array.ArrayNum;
  this_00 = &this->OffsetRegions;
  iVar10 = (this->OffsetRegions).ArrayNum;
  local_res10 = &(this->OffsetRegions).ArrayNum;
  bVar4 = true;
  if (iVar10 < local_88.Components.Array.ArrayNum) {
    iVar10 = local_88.Components.Array.ArrayNum - iVar10;
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,iVar10,&this_00->AllocatorInstance,&(this->OffsetRegions).ArrayNum,
                       &(this->OffsetRegions).ArrayMax);
    DefaultConstructItems<UE::Geometry::FOffsetMeshRegion::FOffsetInfo,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar8 * 0x68,iVar10);
  }
  else {
    if (local_88.Components.Array.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(local_88.Components.Array._8_8_ & 0xffffffff);
    }
    if (local_88.Components.Array.ArrayNum < iVar10) {
      uVar13 = iVar10 - local_88.Components.Array.ArrayNum;
      if (((int)(uVar13 | local_88.Components.Array.ArrayNum) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (uVar13 != 0) {
        TArray<UE::Geometry::FOffsetMeshRegion::FOffsetInfo,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(this_00,iVar8,uVar13);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,&this_00->AllocatorInstance,(this->OffsetRegions).ArrayNum,
                   &(this->OffsetRegions).ArrayMax);
      }
    }
  }
  uVar9 = 0;
  uVar14 = uVar9;
  uVar15 = uVar9;
  if (0 < local_88.Components.Array.ArrayNum) {
    do {
      uVar12 = (uint)uVar9;
      uVar13 = 0;
      if ((int)uVar12 < *local_res10) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                ((this->OffsetRegions).AllocatorInstance.Data + uVar14);
      uVar13 = 0;
      if ((int)uVar12 < local_88.Components.Array.ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pTVar1 = *(TArray<int,TSizedDefaultAllocator<32>_> **)
                (local_88.Components.Array.AllocatorInstance.Data + uVar15 * 8);
      if (pTVar11 != pTVar1) {
        pFVar2 = (pTVar11->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pTVar11->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
        (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar11->ArrayNum = pTVar1->ArrayNum;
        pTVar11->ArrayMax = pTVar1->ArrayMax;
        pTVar1->ArrayNum = 0;
        pTVar1->ArrayMax = 0;
      }
      if (this->bOffsetFullComponentsAsSolids != false) {
        local_90 = local_res8;
        local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98 = Core::Private::Function::
                   TFunctionRefCaller<UE::Geometry::<lambda_25_>,bool,int,int>::Call;
        local_a8.ArrayNum = 0;
        local_a8.ArrayMax = 0;
        FMeshConnectedComponents::GrowToConnectedTriangles
                  (this->Mesh,pTVar11,&local_a8,(TArray<int,TSizedDefaultAllocator<32>_> *)0x0,
                   (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0,
                   (TFunctionRef<bool___cdecl(int,int)> *)&local_98);
        *(bool *)&pTVar11[6].AllocatorInstance.Data = local_a8.ArrayNum == pTVar11->ArrayNum;
        if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.AllocatorInstance.Data);
        }
      }
      cVar7 = (**(code **)(*(longlong *)this + 0x18))(this,pTVar11);
      if ((bVar4) && (cVar7 != '\0')) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      uVar9 = (ulonglong)(uVar12 + 1);
      uVar14 = uVar14 + 0x68;
      uVar15 = uVar15 + 1;
    } while ((int)(uVar12 + 1) < local_88.Components.Array.ArrayNum);
  }
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
            (&local_88.Components);
  return bVar4;
}

// ApplyOffset @ 14c7dca50

bool __thiscall
UE::Geometry::FOffsetMeshRegion::ApplyOffset(FOffsetMeshRegion *this,FOffsetInfo *param_1)

{
  undefined1 uVar1;
  
  if (this->UseVersion == Legacy) {
                    /* WARNING: Could not recover jumptable at 0x00014c7dca5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)this + 0x20))();
    return (bool)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c7dca60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x28))();
  return (bool)uVar1;
}

// ApplyOffset_Legacy @ 14c7dca70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FOffsetMeshRegion::ApplyOffset_Legacy(FOffsetMeshRegion *this,FOffsetInfo *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FMutex *this_00;
  uint *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  atomic<unsigned_char> aVar5;
  float fVar6;
  double dVar7;
  EVertexExtrusionVectorType EVar8;
  FDynamicMesh3 *pFVar9;
  FScriptContainerElement *pFVar10;
  FDynamicMesh3 *pFVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ForAnyElementType FVar21;
  bool bVar22;
  bool bVar23;
  undefined1 uVar24;
  char cVar25;
  short sVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  TDynamicVector<int,512> *pTVar30;
  TArrayView<int_const_,int> *pTVar31;
  TDynamicVector<UE::Math::TVector<float>,512> *pTVar32;
  TVector<double>_u_0 *pTVar33;
  TVector<double> *pTVar34;
  undefined8 uVar35;
  longlong *plVar36;
  longlong *plVar37;
  FEdgeLoop *pFVar38;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar39;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar40;
  FScriptContainerElement *pFVar41;
  undefined4 *puVar42;
  FOffsetInfo *pFVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  longlong lVar47;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar48;
  uint *puVar49;
  ulonglong uVar50;
  longlong lVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  FScriptContainerElement *pFVar54;
  TArray<TTuple<int,TTuple<signed_char,signed_char>_>,TSizedDefaultAllocator<32>_> *pTVar55;
  code *pcVar56;
  code *pcVar57;
  FOffsetInfo *pFVar58;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  float fVar74;
  undefined1 auStackY_c58 [32];
  bool local_c08;
  uint local_c04;
  undefined1 local_c00;
  undefined1 local_bff [7];
  ForAnyElementType local_bf8;
  undefined8 local_bf0;
  code *local_be8;
  int local_be0;
  longlong local_bd8;
  TArray<UE::Geometry::FDynamicMeshEditor::FLoopPairSet,TSizedDefaultAllocator<32>_> local_bd0;
  undefined4 local_bc0;
  undefined4 local_bbc;
  int local_bb8 [2];
  longlong local_bb0;
  FOffsetInfo *local_ba8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_ba0;
  FDynamicMeshEditor local_b90;
  TArray<int,TSizedDefaultAllocator<32>_> *local_b88;
  TArray<int,TSizedDefaultAllocator<32>_> local_b80;
  ForAnyElementType local_b70;
  undefined8 local_b68;
  TVector<float>_u_0 local_b60;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_b50;
  TVector<double>_u_0 local_b40;
  double dStack_b28;
  undefined4 uStack_b20;
  undefined4 uStack_b1c;
  double dStack_b18;
  double dStack_b10;
  undefined8 local_b08;
  int local_af8 [2];
  undefined4 local_af0;
  uint local_ae8;
  undefined4 local_ae0 [2];
  undefined4 local_ad8 [2];
  undefined4 local_ad0 [2];
  undefined4 local_ac8 [2];
  undefined4 local_ac0 [2];
  undefined4 local_ab8 [4];
  FDynamicMeshEditResult local_aa8;
  TVector2<float>_u_0 local_a38 [2];
  undefined1 local_a28 [24];
  undefined8 local_a10;
  ForAnyElementType local_a08;
  undefined8 local_a00;
  ForAnyElementType local_9f8;
  undefined8 local_9f0;
  ForAnyElementType local_9e8;
  undefined8 local_9e0;
  ForAnyElementType local_9d8;
  undefined8 local_9d0;
  ForAnyElementType local_9c8;
  undefined8 local_9c0;
  FDynamicMeshEditResult local_9b8;
  TVector<double>_u_0 local_948;
  TVector<double>_u_0 local_930;
  int local_918;
  int local_914;
  int local_910 [2];
  undefined1 local_908 [24];
  double dStack_8f0;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  undefined8 uStack_8d8;
  undefined4 local_8d0;
  undefined4 uStack_8cc;
  undefined4 uStack_8c8;
  undefined4 uStack_8c4;
  double local_8c0;
  TQuaternion<double>_u_0 TStack_8b8;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  double local_880;
  double dStack_878;
  double local_870;
  double local_868;
  double dStack_860;
  double local_858;
  TVector<double>_u_0 local_850;
  TVector<double>_u_0 local_838;
  TVector<double>_u_0 local_820;
  TVector<double>_u_0 local_808;
  TVector<double>_u_0 local_7f0;
  TVector<double>_u_0 local_7d8;
  undefined8 local_7c0;
  float local_7b8;
  TQuaternion<double>_u_0 local_7b0;
  TQuaternion<double>_u_0 local_790;
  TArrayView<int_const_,int> local_768;
  TVector<double>_u_0 local_758;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined8 local_728;
  undefined8 uStack_720;
  double local_718;
  double local_710;
  double dStack_708;
  double local_700;
  double local_6f8;
  double dStack_6f0;
  double local_6e8;
  TArrayView<int_const_,int> local_6e0;
  uint *local_6c8;
  undefined8 uStack_6c0;
  TArrayView<int_const_,int> local_6b8;
  FMeshRegionBoundaryLoops local_6a8;
  TVector<double> local_5a8;
  TVector<double> local_590;
  TVector<double> local_578;
  FMeshRegionBoundaryLoops local_558;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_458;
  FDynamicMesh3 *local_408;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_400;
  FMeshIndexMappings local_3a8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_c58;
  local_ba8 = param_1;
  if ((this->Mesh->TriangleGroups).bIsSet != false) {
    pFVar41 = (param_1->OffsetTids).AllocatorInstance.Data;
    iVar28 = (param_1->OffsetTids).ArrayNum;
    pFVar54 = pFVar41 + (longlong)iVar28 * 4;
    while( true ) {
      param_1 = local_ba8;
      if ((local_ba8->OffsetTids).ArrayNum != iVar28) {
        local_c00 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_c00);
      }
      if (pFVar41 == pFVar54) break;
      uVar44 = *(uint *)pFVar41;
      pFVar9 = this->Mesh;
      if ((pFVar9->TriangleGroups).bIsSet == false) {
        local_af8[0] = -1;
      }
      else {
        bVar22 = FRefCountVector::IsValid(&pFVar9->TriangleRefCounts,uVar44);
        if (bVar22) {
          pTVar30 = TOptional<UE::Geometry::TDynamicVector<int,512>_>::GetValue
                              (&pFVar9->TriangleGroups);
          local_af8[0] = *(int *)(*(longlong *)
                                   ((pTVar30->Blocks).AllocatorInstance.Data +
                                   (ulonglong)(uVar44 >> 9) * 8) + (ulonglong)(uVar44 & 0x1ff) * 4);
        }
        else {
          local_af8[0] = 0;
        }
      }
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>(&param_1->OffsetGroups,local_af8);
      pFVar41 = pFVar41 + 4;
    }
  }
  uVar53 = 0;
  FMeshRegionBoundaryLoops::FMeshRegionBoundaryLoops
            (&local_6a8,this->Mesh,&param_1->OffsetTids,false);
  bVar22 = FMeshRegionBoundaryLoops::Compute(&local_6a8);
  if (!bVar22) {
    bVar23 = false;
    goto LAB_14c7df8e5;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
            (&this->AllModifiedAndNewTriangles,&param_1->OffsetTids);
  local_ba0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ba0.ArrayNum = 0;
  local_ba0.ArrayMax = 0;
  local_bf8.Data = (FScriptContainerElement *)0x0;
  local_bf0 = 0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_ba0,local_6a8.Loops.ArrayNum,Default);
  local_c04 = 0;
  if (0 < local_6a8.Loops.ArrayNum) {
    local_bb0 = 0;
    local_bd8 = 0;
    uVar52 = uVar53;
    do {
      lVar47 = local_bd8;
      uVar45 = (uint)uVar53;
      uVar44 = 0;
      if ((int)uVar45 < local_6a8.Loops.ArrayNum) {
        uVar44 = ~uVar45 >> 0x1f;
      }
      uVar46 = uVar45;
      if ((uVar44 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar46 = local_c04, bVar23)) {
        pcVar57 = (code *)swi(3);
        uVar24 = (*pcVar57)();
        return (bool)uVar24;
      }
      FVar21.Data = local_6a8.Loops.AllocatorInstance.Data;
      uVar44 = *(uint *)(local_6a8.Loops.AllocatorInstance.Data + uVar52 + 0x20);
      if ((int)uVar44 < 3) {
        bVar23 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3041417465016877849>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\OffsetMeshRegion.cpp"
                            ,0x319,"NumEids > 2");
        if (bVar23) {
          pcVar57 = (code *)swi(3);
          uVar24 = (*pcVar57)();
          return (bool)uVar24;
        }
      }
      else {
        uVar27 = 0;
        if ((int)uVar46 < local_ba0.ArrayNum) {
          uVar27 = ~uVar45 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar57 = (code *)swi(3);
          uVar24 = (*pcVar57)();
          return (bool)uVar24;
        }
        pTVar40 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                  (local_ba0.AllocatorInstance.Data + lVar47);
        iVar28 = pTVar40->ArrayNum;
        if (iVar28 < (int)uVar44) {
          Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar44 - iVar28,(ForAnyElementType *)pTVar40,&pTVar40->ArrayNum,
                     &pTVar40->ArrayMax);
        }
        else if ((int)uVar44 < iVar28) {
          uVar45 = iVar28 - uVar44;
          if (((int)(uVar44 | uVar45) < 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar23)) {
            pcVar57 = (code *)swi(3);
            uVar24 = (*pcVar57)();
            return (bool)uVar24;
          }
          if (uVar45 != 0) {
            TArray<int,TSizedDefaultAllocator<32>_>::RemoveAtImpl(pTVar40,uVar44,uVar45);
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(ForAnyElementType *)pTVar40,pTVar40->ArrayNum,&pTVar40->ArrayMax);
          }
        }
        iVar28 = this->Mesh->GroupIDCounter;
        this->Mesh->GroupIDCounter = iVar28 + 1;
        if ((pTVar40->ArrayNum < 1) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar57 = (code *)swi(3);
          uVar24 = (*pcVar57)();
          return (bool)uVar24;
        }
        *(int *)(pTVar40->AllocatorInstance).Data = iVar28;
        if ((pTVar40->ArrayNum < 1) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar57 = (code *)swi(3);
          uVar24 = (*pcVar57)();
          return (bool)uVar24;
        }
        pFVar54 = (pTVar40->AllocatorInstance).Data;
        if (((local_bf8.Data <= pFVar54) &&
            (pFVar54 < local_bf8.Data + (longlong)local_bf0._4_4_ * 4)) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar57 = (code *)swi(3);
          uVar24 = (*pcVar57)();
          return (bool)uVar24;
        }
        iVar28 = (int)local_bf0;
        if ((int)local_bf0 == local_bf0._4_4_) {
          iVar28 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_bf8,(int *)((longlong)&local_bf0 + 4));
        }
        uVar44 = uVar44 - 1;
        local_bf0 = CONCAT44(local_bf0._4_4_,iVar28 + 1);
        lVar47 = (longlong)(int)uVar44 << 2;
        *(undefined4 *)(local_bf8.Data + (longlong)iVar28 * 4) = *(undefined4 *)pFVar54;
        do {
          uVar45 = 0;
          if ((int)uVar44 < *(int *)(FVar21.Data + uVar52 + 0x20)) {
            uVar45 = ~uVar44 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar57 = (code *)swi(3);
            uVar24 = (*pcVar57)();
            return (bool)uVar24;
          }
          uVar64 = *(undefined4 *)(lVar47 + *(longlong *)(FVar21.Data + uVar52 + 0x18));
          if ((*(int *)(FVar21.Data + uVar52 + 0x20) < 1) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar57 = (code *)swi(3);
            uVar24 = (*pcVar57)();
            return (bool)uVar24;
          }
          local_ac0[0] = **(undefined4 **)(FVar21.Data + uVar52 + 0x18);
          local_af0 = uVar64;
          Core::Private::Function::CheckCallable(*(void **)&this->LoopEdgesShouldHaveSameGroup);
          plVar36 = *(longlong **)&(this->LoopEdgesShouldHaveSameGroup).field_0x28;
          pcVar57 = *(code **)&this->LoopEdgesShouldHaveSameGroup;
          if (plVar36 == (longlong *)0x0) {
            plVar36 = (longlong *)&(this->LoopEdgesShouldHaveSameGroup).field_0x10;
          }
          uVar35 = (**(code **)(*plVar36 + 8))();
          cVar25 = (*pcVar57)(uVar35,local_ac0);
          if (cVar25 == '\0') break;
          if ((pTVar40->ArrayNum < 1) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar57 = (code *)swi(3);
            uVar24 = (*pcVar57)();
            return (bool)uVar24;
          }
          uVar64 = *(undefined4 *)(pTVar40->AllocatorInstance).Data;
          uVar45 = 0;
          if ((int)uVar44 < pTVar40->ArrayNum) {
            uVar45 = ~uVar44 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar57 = (code *)swi(3);
            uVar24 = (*pcVar57)();
            return (bool)uVar24;
          }
          uVar44 = uVar44 - 1;
          *(undefined4 *)((pTVar40->AllocatorInstance).Data + lVar47) = uVar64;
          lVar47 = lVar47 + -4;
        } while (0 < (int)uVar44);
        local_b08 = (TArray<int,TSizedDefaultAllocator<32>_> *)(longlong)(int)uVar44;
        uVar44 = 1;
        lVar47 = 1;
        if (0 < (longlong)local_b08) {
          local_be0 = 0;
          local_b88 = (TArray<int,TSizedDefaultAllocator<32>_> *)&DAT_00000004;
          do {
            pTVar1 = local_b88;
            uVar45 = 0;
            if (local_be0 < *(int *)(FVar21.Data + uVar52 + 0x20)) {
              uVar45 = -uVar44 >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar57 = (code *)swi(3);
              uVar24 = (*pcVar57)();
              return (bool)uVar24;
            }
            local_be8 = (code *)CONCAT44(local_be8._4_4_,
                                         *(undefined4 *)
                                          ((longlong)pTVar1 +
                                          *(longlong *)(FVar21.Data + uVar52 + 0x18) + -4));
            uVar45 = 0;
            if ((int)uVar44 < *(int *)(FVar21.Data + uVar52 + 0x20)) {
              uVar45 = ~uVar44 >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar57 = (code *)swi(3);
              uVar24 = (*pcVar57)();
              return (bool)uVar24;
            }
            local_ad0[0] = *(undefined4 *)(*(longlong *)(FVar21.Data + uVar52 + 0x18) + lVar47 * 4);
            local_ac8[0] = local_be8._0_4_;
            Core::Private::Function::CheckCallable(*(void **)&this->LoopEdgesShouldHaveSameGroup);
            plVar36 = *(longlong **)&(this->LoopEdgesShouldHaveSameGroup).field_0x28;
            local_be8 = *(code **)&this->LoopEdgesShouldHaveSameGroup;
            if (plVar36 == (longlong *)0x0) {
              plVar36 = (longlong *)&(this->LoopEdgesShouldHaveSameGroup).field_0x10;
            }
            uVar35 = (**(code **)(*plVar36 + 8))();
            cVar25 = (*local_be8)(uVar35,local_ad0,local_ac8);
            if (cVar25 == '\0') {
              iVar28 = this->Mesh->GroupIDCounter;
              local_be8 = (code *)CONCAT44(local_be8._4_4_,iVar28);
              this->Mesh->GroupIDCounter = iVar28 + 1;
              uVar45 = 0;
              if ((int)uVar44 < pTVar40->ArrayNum) {
                uVar45 = ~uVar44 >> 0x1f;
              }
              if ((uVar45 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar57 = (code *)swi(3);
                uVar24 = (*pcVar57)();
                return (bool)uVar24;
              }
              *(undefined4 *)((pTVar40->AllocatorInstance).Data + lVar47 * 4) = local_be8._0_4_;
              uVar45 = 0;
              if ((int)uVar44 < pTVar40->ArrayNum) {
                uVar45 = ~uVar44 >> 0x1f;
              }
              if ((uVar45 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar57 = (code *)swi(3);
                uVar24 = (*pcVar57)();
                return (bool)uVar24;
              }
              pFVar54 = (pTVar40->AllocatorInstance).Data + lVar47 * 4;
              if (((local_bf8.Data <= pFVar54) &&
                  (pFVar54 < local_bf8.Data + (longlong)local_bf0._4_4_ * 4)) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar23)) {
                pcVar57 = (code *)swi(3);
                uVar24 = (*pcVar57)();
                return (bool)uVar24;
              }
              iVar28 = (int)local_bf0;
              if ((int)local_bf0 == local_bf0._4_4_) {
                iVar28 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_bf8,(int *)((longlong)&local_bf0 + 4));
              }
              local_bf0 = CONCAT44(local_bf0._4_4_,iVar28 + 1);
              *(undefined4 *)(local_bf8.Data + (longlong)iVar28 * 4) = *(undefined4 *)pFVar54;
            }
            else {
              uVar45 = 0;
              if ((int)(uVar44 - 1) < pTVar40->ArrayNum) {
                uVar45 = -uVar44 >> 0x1f;
              }
              if ((uVar45 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar57 = (code *)swi(3);
                uVar24 = (*pcVar57)();
                return (bool)uVar24;
              }
              uVar64 = *(undefined4 *)((pTVar40->AllocatorInstance).Data + lVar47 * 4 + -4);
              uVar45 = 0;
              if ((int)uVar44 < pTVar40->ArrayNum) {
                uVar45 = ~uVar44 >> 0x1f;
              }
              if ((uVar45 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar57 = (code *)swi(3);
                uVar24 = (*pcVar57)();
                return (bool)uVar24;
              }
              *(undefined4 *)((pTVar40->AllocatorInstance).Data + lVar47 * 4) = uVar64;
            }
            uVar44 = uVar44 + 1;
            lVar47 = lVar47 + 1;
            local_be0 = local_be0 + 1;
            local_b88 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                        ((longlong)&(local_b88->AllocatorInstance).Data + 4);
          } while (lVar47 <= (longlong)local_b08);
        }
      }
      local_c04 = local_c04 + 1;
      uVar53 = (ulonglong)local_c04;
      local_bd8 = local_bd8 + 0x10;
      local_bb0 = local_bb0 + 1;
      uVar52 = uVar52 + 0x40;
      param_1 = local_ba8;
    } while ((int)local_c04 < local_6a8.Loops.ArrayNum);
  }
  uVar53 = 0;
  local_b90.Mesh = this->Mesh;
  local_bd0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_bd0.ArrayNum = 0;
  local_bd0.ArrayMax = 0;
  local_a28._0_8_ = (FScriptContainerElement *)0x0;
  local_a28._8_4_ = 0;
  local_a28._12_4_ = 0;
  local_a28._16_8_ = (FScriptContainerElement *)0x0;
  local_a10._0_4_ = 0;
  local_a10._4_4_ = 0;
  local_a08.Data = (FScriptContainerElement *)0x0;
  local_a00._0_4_ = 0;
  local_a00._4_4_ = 0;
  local_9f8.Data = (FScriptContainerElement *)0x0;
  local_9f0._0_4_ = 0;
  local_9f0._4_4_ = 0;
  local_9e8.Data = (FScriptContainerElement *)0x0;
  local_9e0._0_4_ = 0;
  local_9e0._4_4_ = 0;
  local_9d8.Data = (FScriptContainerElement *)0x0;
  local_9d0._0_4_ = 0;
  local_9d0._4_4_ = 0;
  local_9c8.Data = (FScriptContainerElement *)0x0;
  local_9c0._0_4_ = 0;
  local_9c0._4_4_ = 0;
  if (param_1->bIsSolid == false) {
    bVar23 = FDynamicMeshEditor::DisconnectTriangles
                       (&local_b90,&param_1->OffsetTids,&local_bd0,true);
    bVar22 = true;
    if (bVar23) goto LAB_14c7ddb4c;
    bVar23 = false;
  }
  else {
    FMeshIndexMappings::FMeshIndexMappings(&local_3a8);
    FDynamicMeshEditor::DuplicateTriangles
              (&local_b90,&param_1->OffsetTids,&local_3a8,(FDynamicMeshEditResult *)local_a28);
    pTVar40 = &this->AllModifiedAndNewTriangles;
    if ((pTVar40 == (TArray<int,TSizedDefaultAllocator<32>_> *)(local_a28 + 0x10)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar23)) {
      pcVar57 = (code *)swi(3);
      uVar24 = (*pcVar57)();
      return (bool)uVar24;
    }
    lVar47 = (longlong)(int)local_a10;
    if ((int)local_a10 != 0) {
      iVar28 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,(int)local_a10,&pTVar40->AllocatorInstance,
                          &(this->AllModifiedAndNewTriangles).ArrayNum,
                          &(this->AllModifiedAndNewTriangles).ArrayMax);
      memcpy((pTVar40->AllocatorInstance).Data + (longlong)iVar28 * 4,(void *)local_a28._16_8_,
             lVar47 << 2);
    }
    TArray<UE::Geometry::FDynamicMeshEditor::FLoopPairSet,TSizedDefaultAllocator<32>_>::SetNum
              (&local_bd0,local_6a8.Loops.ArrayNum,Default);
    if (0 < local_6a8.Loops.ArrayNum) {
      local_bd8 = 0;
      local_bb0 = 0;
      local_b88 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      uVar52 = uVar53;
      do {
        pTVar40 = local_b88;
        lVar47 = local_bd8;
        uVar45 = (uint)uVar52;
        uVar44 = 0;
        if ((int)uVar45 < local_6a8.Loops.ArrayNum) {
          uVar44 = ~uVar45 >> 0x1f;
        }
        if ((uVar44 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar57 = (code *)swi(3);
          uVar24 = (*pcVar57)();
          return (bool)uVar24;
        }
        FVar21.Data = local_6a8.Loops.AllocatorInstance.Data;
        uVar44 = 0;
        if ((int)uVar45 < local_bd0.ArrayNum) {
          uVar44 = ~uVar45 >> 0x1f;
        }
        if ((uVar44 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar57 = (code *)swi(3);
          uVar24 = (*pcVar57)();
          return (bool)uVar24;
        }
        pTVar48 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                  (local_bd0.AllocatorInstance.Data + lVar47);
        pTVar39 = (TArray<int,TSizedDefaultAllocator<32>_> *)(FVar21.Data + 8 + (longlong)pTVar40);
        pTVar1 = pTVar48 + 2;
        if (pTVar1 != pTVar39) {
          TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                    (pTVar1,(int *)(pTVar39->AllocatorInstance).Data,pTVar39->ArrayNum,
                     pTVar48[2].ArrayMax);
        }
        pTVar40 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                  (FVar21.Data + 0x18 + (longlong)pTVar40);
        if (pTVar48 + 3 != pTVar40) {
          TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                    (pTVar48 + 3,(int *)(pTVar40->AllocatorInstance).Data,pTVar40->ArrayNum,
                     pTVar48[3].ArrayMax);
        }
        if (this->bIsPositiveOffset == false) {
          lVar47 = 0;
          pFVar54 = (pTVar1->AllocatorInstance).Data;
          iVar28 = pTVar48[2].ArrayNum / 2;
          if (0 < iVar28) {
            pFVar41 = pFVar54 + (longlong)(pTVar48[2].ArrayNum + -1) * 4;
            lVar51 = lVar47;
            do {
              uVar64 = *(undefined4 *)(pFVar54 + lVar51 * 4);
              *(undefined4 *)(pFVar54 + lVar51 * 4) = *(undefined4 *)pFVar41;
              lVar51 = lVar51 + 1;
              *(undefined4 *)pFVar41 = uVar64;
              pFVar41 = pFVar41 + -4;
            } while (lVar51 < iVar28);
          }
          if ((pTVar48[3].ArrayNum < 1) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar57 = (code *)swi(3);
            uVar24 = (*pcVar57)();
            return (bool)uVar24;
          }
          iVar28 = pTVar48[3].ArrayNum + -1;
          uVar64 = *(undefined4 *)
                    (pTVar48[3].AllocatorInstance.Data + (longlong)pTVar48[3].ArrayNum * 4 + -4);
          pTVar48[3].ArrayNum = iVar28;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar48[3].AllocatorInstance,iVar28,&pTVar48[3].ArrayMax);
          pFVar54 = pTVar48[3].AllocatorInstance.Data;
          iVar28 = pTVar48[3].ArrayNum / 2;
          if (0 < iVar28) {
            pFVar41 = pFVar54 + (longlong)(pTVar48[3].ArrayNum + -1) * 4;
            lVar51 = lVar47;
            do {
              uVar65 = *(undefined4 *)(pFVar54 + lVar51 * 4);
              *(undefined4 *)(pFVar54 + lVar51 * 4) = *(undefined4 *)pFVar41;
              lVar51 = lVar51 + 1;
              *(undefined4 *)pFVar41 = uVar65;
              pFVar41 = pFVar41 + -4;
            } while (lVar51 < iVar28);
          }
          pFVar54 = pTVar48[3].AllocatorInstance.Data;
          local_bc0 = uVar64;
          if (((pFVar54 <= (FScriptContainerElement *)&local_bc0) &&
              ((FScriptContainerElement *)&local_bc0 < pFVar54 + (longlong)pTVar48[3].ArrayMax * 4))
             && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar23)) {
            pcVar57 = (code *)swi(3);
            uVar24 = (*pcVar57)();
            return (bool)uVar24;
          }
          iVar28 = pTVar48[3].ArrayNum;
          if (iVar28 == pTVar48[3].ArrayMax) {
            iVar28 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar48[3].AllocatorInstance,&pTVar48[3].ArrayMax);
          }
          pTVar48[3].ArrayNum = iVar28 + 1;
          *(undefined4 *)(pTVar48[3].AllocatorInstance.Data + (longlong)iVar28 * 4) = local_bc0;
          uVar44 = 0;
          if ((int)uVar45 < local_ba0.ArrayNum) {
            uVar44 = ~uVar45 >> 0x1f;
          }
          if ((uVar44 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar57 = (code *)swi(3);
            uVar24 = (*pcVar57)();
            return (bool)uVar24;
          }
          pFVar54 = local_ba0.AllocatorInstance.Data + uVar53;
          if ((*(int *)(pFVar54 + 8) < 1) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar57 = (code *)swi(3);
            uVar24 = (*pcVar57)();
            return (bool)uVar24;
          }
                    /* WARNING: Load size is inaccurate */
          iVar28 = *(int *)(pFVar54 + 8) + -1;
          uVar64 = *(undefined4 *)(*pFVar54 + (longlong)*(int *)(pFVar54 + 8) * 4 + -4);
          *(int *)(pFVar54 + 8) = iVar28;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(ForAnyElementType *)pFVar54,iVar28,(int *)(pFVar54 + 0xc));
          uVar44 = 0;
          if ((int)uVar45 < local_ba0.ArrayNum) {
            uVar44 = ~uVar45 >> 0x1f;
          }
          local_bbc = uVar64;
          if (uVar44 == 0) {
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar23) {
              pcVar57 = (code *)swi(3);
              uVar24 = (*pcVar57)();
              return (bool)uVar24;
            }
          }
          lVar51 = *(longlong *)(local_ba0.AllocatorInstance.Data + uVar53);
          iVar29 = *(int *)(local_ba0.AllocatorInstance.Data + uVar53 + 8) / 2;
          iVar28 = local_ba0.ArrayNum;
          if (0 < iVar29) {
            puVar42 = (undefined4 *)
                      (lVar51 + (longlong)
                                (*(int *)(local_ba0.AllocatorInstance.Data + uVar53 + 8) + -1) * 4);
            do {
              uVar64 = *(undefined4 *)(lVar51 + lVar47 * 4);
              *(undefined4 *)(lVar51 + lVar47 * 4) = *puVar42;
              lVar47 = lVar47 + 1;
              *puVar42 = uVar64;
              puVar42 = puVar42 + -1;
            } while (lVar47 < iVar29);
            iVar28 = local_ba0.ArrayNum;
          }
          uVar44 = 0;
          if ((int)uVar45 < iVar28) {
            uVar44 = ~uVar45 >> 0x1f;
          }
          if ((uVar44 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar57 = (code *)swi(3);
            uVar24 = (*pcVar57)();
            return (bool)uVar24;
          }
          pFVar54 = local_ba0.AllocatorInstance.Data + uVar53;
                    /* WARNING: Load size is inaccurate */
          if (((*pFVar54 <= (FScriptContainerElement *)&local_bbc) &&
              ((FScriptContainerElement *)&local_bbc <
               *pFVar54 + (longlong)*(int *)(pFVar54 + 0xc) * 4)) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar23)) {
            pcVar57 = (code *)swi(3);
            uVar24 = (*pcVar57)();
            return (bool)uVar24;
          }
          iVar28 = *(int *)(pFVar54 + 8);
          if (iVar28 == *(int *)(pFVar54 + 0xc)) {
            iVar28 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar54,(int *)(pFVar54 + 0xc));
          }
          *(int *)(pFVar54 + 8) = iVar28 + 1;
                    /* WARNING: Load size is inaccurate */
          *(undefined4 *)(*pFVar54 + (longlong)iVar28 * 4) = local_bbc;
        }
        pFVar41 = pTVar48[2].AllocatorInstance.Data;
        iVar28 = pTVar48[2].ArrayNum;
        pFVar54 = pFVar41 + (longlong)iVar28 * 4;
        while( true ) {
          if (pTVar48[2].ArrayNum != iVar28) {
            local_bff[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_bff);
          }
          if (pFVar41 == pFVar54) break;
          local_bb8[0] = TIndexMap<int>::GetTo(&local_3a8.VertexMap,*(int *)pFVar41);
          pFVar10 = (pTVar48->AllocatorInstance).Data;
          if (((pFVar10 <= (FScriptContainerElement *)local_bb8) &&
              ((FScriptContainerElement *)local_bb8 < pFVar10 + (longlong)pTVar48->ArrayMax * 4)) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar23)) {
            pcVar57 = (code *)swi(3);
            uVar24 = (*pcVar57)();
            return (bool)uVar24;
          }
          iVar29 = pTVar48->ArrayNum;
          if (iVar29 == pTVar48->ArrayMax) {
            iVar29 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pTVar48,&pTVar48->ArrayMax);
          }
          pFVar41 = pFVar41 + 4;
          pTVar48->ArrayNum = iVar29 + 1;
          *(int *)((pTVar48->AllocatorInstance).Data + (longlong)iVar29 * 4) = local_bb8[0];
        }
        FEdgeLoop::VertexLoopToEdgeLoop(this->Mesh,pTVar48,pTVar48 + 1);
        uVar52 = (ulonglong)(uVar45 + 1);
        local_bb0 = local_bb0 + 1;
        local_b88 = (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)local_b88 + 0x40);
        local_bd8 = local_bd8 + 0x48;
        uVar53 = uVar53 + 0x10;
      } while ((int)(uVar45 + 1) < local_6a8.Loops.ArrayNum);
    }
    FMeshIndexMappings::~FMeshIndexMappings(&local_3a8);
LAB_14c7ddb4c:
    uVar44 = 0;
    iVar28 = local_bd0.ArrayNum;
    local_b70.Data = (FScriptContainerElement *)0x0;
    local_b68 = 0;
    if (local_bd0.ArrayNum < 1) {
      if (local_bd0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(local_bd0._8_8_ & 0xffffffff);
      }
    }
    else {
      iVar29 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,local_bd0.ArrayNum,&local_b70,(int *)&local_b68,
                          (int *)((longlong)&local_b68 + 4));
      memset(local_b70.Data + (longlong)iVar29 * 0x10,0,(longlong)iVar28 << 4);
    }
    if (local_bd0.ArrayNum < 1) {
LAB_14c7ddd0f:
      pFVar58 = local_ba8;
      uVar53 = 0;
      local_9b8.NewVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_9b8.NewVertices.ArrayNum = 0;
      local_9b8.NewVertices.ArrayMax = 0;
      local_9b8.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_9b8.NewTriangles.ArrayNum = 0;
      local_9b8.NewTriangles.ArrayMax = 0;
      local_9b8.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_9b8.NewQuads.ArrayNum = 0;
      local_9b8.NewQuads.ArrayMax = 0;
      local_9b8.NewPolygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_9b8.NewPolygons.ArrayNum = 0;
      local_9b8.NewPolygons.ArrayMax = 0;
      local_9b8.NewGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_9b8.NewGroups.ArrayNum = 0;
      local_9b8.NewGroups.ArrayMax = 0;
      local_9b8.NewNormalOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_9b8.NewNormalOverlayElements.ArrayNum = 0;
      local_9b8.NewNormalOverlayElements.ArrayMax = 0;
      local_9b8.NewColorOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_9b8.NewColorOverlayElements.ArrayNum = 0;
      local_9b8.NewColorOverlayElements.ArrayMax = 0;
      FDynamicMeshEditor::SplitBowtiesAtTriangles(&local_b90,&local_ba8->OffsetTids,&local_9b8);
      bVar22 = local_9b8.NewVertices.ArrayNum < 1;
      if (local_9b8.NewVertices.ArrayNum < 1) {
LAB_14c7dde0b:
        local_408 = this->Mesh;
        local_400.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
        local_400.Elements._48_8_ = _UNK_150631d98;
        local_400.Elements._0_8_ = 0;
        local_400.Elements._8_8_ = 0;
        local_400.Elements._32_8_ = 0;
        local_400.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_400.HashSize = 0;
        pTVar31 = TArrayView<int_const_,int>::
                  TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                            (&local_6e0,&pFVar58->OffsetTids);
        puVar49 = (uint *)pTVar31->DataPtr;
        uStack_6c0 = *(undefined8 *)&pTVar31->ArrayNum;
        puVar2 = puVar49 + (int)*(undefined8 *)&pTVar31->ArrayNum;
        local_6c8 = puVar49;
        for (; puVar49 != puVar2; puVar49 = puVar49 + 1) {
          uVar52 = (ulonglong)(*puVar49 & 0x1ff);
          lVar47 = *(longlong *)
                    ((local_408->Triangles).Blocks.AllocatorInstance.Data +
                    (ulonglong)(*puVar49 >> 9) * 8);
          local_b08 = *(TArray<int,TSizedDefaultAllocator<32>_> **)(lVar47 + uVar52 * 0xc);
          uVar64 = *(undefined4 *)(lVar47 + 8 + uVar52 * 0xc);
          local_ad8[0] = (undefined4)local_b08;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_400,&local_918,(bool *)local_ad8);
          local_ae0[0] = local_b08._4_4_;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_400,&local_914,(bool *)local_ae0);
          local_ab8[0] = uVar64;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_400,local_910,(bool *)local_ab8);
          pFVar58 = local_ba8;
        }
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_400,&local_b80);
        EVar8 = this->ExtrusionVectorType;
        local_b50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b50.ArrayNum = 0;
        local_b50.ArrayMax = 0;
        if ((EVar8 == SelectionTriNormalsAngleWeightedAverage) ||
           (EVar8 == SelectionTriNormalsAngleWeightedAdjusted)) {
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                    (&local_b50,local_b80.ArrayNum,Default);
          pTVar31 = TArrayView<int_const_,int>::
                    TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                              (&local_6b8,&pFVar58->OffsetTids);
          local_768.DataPtr = pTVar31->DataPtr;
          local_768.ArrayNum = pTVar31->ArrayNum;
          local_768._12_4_ = *(undefined4 *)&pTVar31->field_0xc;
          local_458.Elements._0_8_ = 0;
          local_458.Elements._8_8_ = 0;
          local_458.Elements._32_8_ = 0;
          local_458.Elements._40_4_ = 0;
          local_458.Elements._44_4_ = 0x80;
          local_458.Elements._48_4_ = 0xffffffff;
          local_458.Elements._52_4_ = 0;
          local_458.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_458.HashSize = 0;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append(&local_458,&local_768);
          if (0 < local_b80.ArrayNum) {
            lVar47 = 0;
            uVar52 = uVar53;
            do {
              uVar44 = (uint)uVar53;
              uVar45 = ~uVar44 >> 0x1f;
              if (this->ExtrusionVectorType == SelectionTriNormalsAngleWeightedAdjusted) {
                dVar7 = this->MaxScaleForAdjustingTriNormalsOffset;
                uVar46 = 0;
                if ((int)uVar44 < local_b80.ArrayNum) {
                  uVar46 = uVar45;
                }
                if ((uVar46 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar57 = (code *)swi(3);
                  uVar24 = (*pcVar57)();
                  return (bool)uVar24;
                }
                pTVar34 = OffsetMeshRegionLocals::
                          GetAngleWeightedAdjustedNormal<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                                    (&local_590,this->Mesh,
                                     *(int *)(local_b80.AllocatorInstance.Data + lVar47),&local_458,
                                     dVar7);
              }
              else {
                uVar46 = 0;
                if ((int)uVar44 < local_b80.ArrayNum) {
                  uVar46 = uVar45;
                }
                if ((uVar46 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar57 = (code *)swi(3);
                  uVar24 = (*pcVar57)();
                  return (bool)uVar24;
                }
                pTVar34 = OffsetMeshRegionLocals::
                          GetAngleWeightedAverageNormal<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                                    (&local_578,this->Mesh,
                                     *(int *)(local_b80.AllocatorInstance.Data + lVar47),&local_458)
                ;
              }
              uVar64 = *(undefined4 *)&pTVar34->field0_0x0;
              uVar65 = *(undefined4 *)((longlong)&pTVar34->field0_0x0 + 4);
              uVar66 = *(undefined4 *)((longlong)&pTVar34->field0_0x0 + 8);
              uVar68 = *(undefined4 *)((longlong)&pTVar34->field0_0x0 + 0xc);
              dVar7 = (pTVar34->field0_0x0)._s_0.Z;
              if (((uVar45 & (int)uVar44 < local_b50.ArrayNum) == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar57 = (code *)swi(3);
                uVar24 = (*pcVar57)();
                return (bool)uVar24;
              }
              uVar53 = (ulonglong)(uVar44 + 1);
              lVar47 = lVar47 + 4;
              pFVar54 = local_b50.AllocatorInstance.Data + uVar52;
              *(undefined4 *)pFVar54 = uVar64;
              *(undefined4 *)(pFVar54 + 4) = uVar65;
              *(undefined4 *)(pFVar54 + 8) = uVar66;
              *(undefined4 *)(pFVar54 + 0xc) = uVar68;
              *(double *)(local_b50.AllocatorInstance.Data + uVar52 + 0x10) = dVar7;
              uVar52 = uVar52 + 0x18;
            } while ((int)(uVar44 + 1) < local_b80.ArrayNum);
          }
          local_458.HashSize = 0;
          if (local_458.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_458.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_458.Elements);
        }
        else if ((EVar8 == VertexNormal) &&
                (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                           (&local_b50,local_b80.ArrayNum,Default), uVar52 = uVar53, uVar50 = uVar53
                , 0 < local_b80.ArrayNum)) {
          do {
            uVar45 = (uint)uVar53;
            uVar44 = 0;
            if ((int)uVar45 < local_b80.ArrayNum) {
              uVar44 = ~uVar45 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar57 = (code *)swi(3);
              uVar24 = (*pcVar57)();
              return (bool)uVar24;
            }
            pFVar9 = this->Mesh;
            uVar44 = *(uint *)(local_b80.AllocatorInstance.Data + uVar52);
            if ((pFVar9->VertexNormals).bIsSet == false) {
              pTVar33 = &FMeshNormals::ComputeVertexNormal(&local_5a8,pFVar9,uVar44,true,true)->
                         field0_0x0;
            }
            else {
              pTVar32 = TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::
                        GetValue(&pFVar9->VertexNormals);
              lVar47 = *(longlong *)
                        ((pTVar32->Blocks).AllocatorInstance.Data + (ulonglong)(uVar44 >> 9) * 8);
              local_7c0 = *(undefined8 *)(lVar47 + (ulonglong)(uVar44 & 0x1ff) * 0xc);
              local_7b8 = *(float *)(lVar47 + 8 + (ulonglong)(uVar44 & 0x1ff) * 0xc);
              pTVar33 = &local_850;
              local_850._s_0.X = (double)(float)local_7c0;
              local_850._s_0.Y = (double)(float)((ulonglong)local_7c0 >> 0x20);
              local_850._s_0.Z = (double)local_7b8;
            }
            uVar64 = *(undefined4 *)&(pTVar33->_s_0).X;
            uVar65 = *(undefined4 *)((longlong)&(pTVar33->_s_0).X + 4);
            uVar66 = *(undefined4 *)&(pTVar33->_s_0).Y;
            uVar68 = *(undefined4 *)((longlong)&(pTVar33->_s_0).Y + 4);
            dVar7 = (pTVar33->_s_0).Z;
            uVar44 = 0;
            if ((int)uVar45 < local_b50.ArrayNum) {
              uVar44 = ~uVar45 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar57 = (code *)swi(3);
              uVar24 = (*pcVar57)();
              return (bool)uVar24;
            }
            uVar53 = (ulonglong)(uVar45 + 1);
            pFVar54 = local_b50.AllocatorInstance.Data + uVar50;
            *(undefined4 *)pFVar54 = uVar64;
            *(undefined4 *)(pFVar54 + 4) = uVar65;
            *(undefined4 *)(pFVar54 + 8) = uVar66;
            *(undefined4 *)(pFVar54 + 0xc) = uVar68;
            *(double *)(local_b50.AllocatorInstance.Data + uVar50 + 0x10) = dVar7;
            uVar52 = uVar52 + 4;
            uVar50 = uVar50 + 0x18;
          } while ((int)(uVar45 + 1) < local_b80.ArrayNum);
        }
        uVar50 = 0;
        uVar53 = uVar50;
        uVar52 = uVar50;
        if (0 < local_b80.ArrayNum) {
          do {
            uVar45 = (uint)uVar50;
            uVar44 = 0;
            if ((int)uVar45 < local_b80.ArrayNum) {
              uVar44 = ~uVar45 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar57 = (code *)swi(3);
              uVar24 = (*pcVar57)();
              return (bool)uVar24;
            }
            uVar44 = *(uint *)(local_b80.AllocatorInstance.Data + uVar52);
            lVar47 = *(longlong *)
                      ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar44 >> 9) * 8);
            puVar3 = (undefined8 *)(lVar47 + (ulonglong)(uVar44 & 0x1ff) * 0x18);
            local_740 = *puVar3;
            uStack_738 = puVar3[1];
            local_730 = *(undefined8 *)(lVar47 + 0x10 + (ulonglong)(uVar44 & 0x1ff) * 0x18);
            if (this->ExtrusionVectorType == Zero) {
              local_728 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
              uStack_720 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
              local_718 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            }
            else {
              uVar46 = 0;
              if ((int)uVar45 < local_b50.ArrayNum) {
                uVar46 = ~uVar45 >> 0x1f;
              }
              if ((uVar46 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar57 = (code *)swi(3);
                uVar24 = (*pcVar57)();
                return (bool)uVar24;
              }
              local_728 = *(undefined8 *)(local_b50.AllocatorInstance.Data + uVar53);
              uStack_720 = *(undefined8 *)(local_b50.AllocatorInstance.Data + uVar53 + 8);
              local_718 = *(double *)(local_b50.AllocatorInstance.Data + uVar53 + 0x10);
            }
            local_ae8 = uVar44;
            Core::Private::Function::CheckCallable(*(void **)&this->OffsetPositionFunc);
            plVar36 = *(longlong **)&(this->OffsetPositionFunc).field_0x28;
            pcVar57 = *(code **)&this->OffsetPositionFunc;
            plVar37 = (longlong *)&(this->OffsetPositionFunc).field_0x10;
            if (plVar36 != (longlong *)0x0) {
              plVar37 = plVar36;
            }
            uVar35 = (**(code **)(*plVar37 + 8))();
            (*pcVar57)(&local_898,uVar35,&local_740,&local_728);
            pFVar9 = this->Mesh;
            sVar26 = _dclass(local_898);
            if (((sVar26 < 1) && (sVar26 = _dclass(uStack_890), uVar35 = local_888, sVar26 < 1)) &&
               (sVar26 = _dclass(), sVar26 < 1)) {
              lVar47 = *(longlong *)
                        ((pFVar9->Vertices).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar44 >> 9) * 8);
              puVar3 = (undefined8 *)(lVar47 + (ulonglong)(uVar44 & 0x1ff) * 0x18);
              *puVar3 = local_898;
              puVar3[1] = uStack_890;
              *(undefined8 *)(lVar47 + 0x10 + (ulonglong)(uVar44 & 0x1ff) * 0x18) = uVar35;
              if ((pFVar9->ChangeStampShape).bIsEnabled != false) {
                this_00 = &(pFVar9->ChangeStampShape).Mutex;
                LOCK();
                bVar23 = this_00->State == (atomic<unsigned_char>)0x0;
                if (bVar23) {
                  this_00->State = (atomic<unsigned_char>)0x1;
                }
                UNLOCK();
                if (!bVar23) {
                  FMutex::LockSlow(this_00);
                }
                puVar2 = &(pFVar9->ChangeStampShape).Value;
                *puVar2 = *puVar2 + 1;
                LOCK();
                aVar5 = this_00->State;
                this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
                UNLOCK();
                if (((byte)aVar5 & 2) != 0) {
                  FMutex::WakeWaitingThread(this_00);
                }
              }
            }
            uVar50 = (ulonglong)(uVar45 + 1);
            uVar52 = uVar52 + 4;
            uVar53 = uVar53 + 0x18;
          } while ((int)(uVar45 + 1) < local_b80.ArrayNum);
        }
        pFVar58 = local_ba8;
        iVar28 = local_bd0.ArrayNum;
        local_c08 = true;
        TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_>::SetNum
                  (&local_ba8->BaseLoops,local_bd0.ArrayNum,Default);
        if (bVar22) {
          TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_>::SetNum
                    (&pFVar58->OffsetLoops,iVar28,Default);
        }
        TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
                  (&pFVar58->StitchTriangles,iVar28,Default);
        TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
                  (&pFVar58->StitchPolygonIDs,iVar28,Default);
        dVar20 = _UNK_15061cbc8;
        dVar19 = ___xmm_3ff00000000000000000000000000000;
        dVar7 = __real_3ff0000000000000;
        local_c04 = 0;
        bVar23 = true;
        if (0 < local_bd0.ArrayNum) {
          local_be8 = (code *)0x0;
          do {
            pcVar57 = local_be8;
            uVar53 = 0;
            fVar74 = 0.0;
            uVar45 = ~local_c04 >> 0x1f;
            uVar44 = 0;
            if ((int)local_c04 < local_bd0.ArrayNum) {
              uVar44 = uVar45;
            }
            if ((uVar44 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar57 = (code *)swi(3);
              uVar24 = (*pcVar57)();
              return (bool)uVar24;
            }
            pTVar40 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                      (local_bd0.AllocatorInstance.Data + (longlong)pcVar57 * 0x48);
            uVar44 = 0;
            if ((int)local_c04 < local_ba0.ArrayNum) {
              uVar44 = uVar45;
            }
            local_b88 = pTVar40;
            if ((uVar44 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar57 = (code *)swi(3);
              uVar24 = (*pcVar57)();
              return (bool)uVar24;
            }
            local_b08 = (TArray<int,TSizedDefaultAllocator<32>_> *)local_ba0.AllocatorInstance.Data;
            uVar44 = 0;
            if ((int)local_c04 < (int)local_b68) {
              uVar44 = uVar45;
            }
            if ((uVar44 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar57 = (code *)swi(3);
              uVar24 = (*pcVar57)();
              return (bool)uVar24;
            }
            local_aa8.NewVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_aa8.NewVertices.ArrayNum = 0;
            local_aa8.NewVertices.ArrayMax = 0;
            local_aa8.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_aa8.NewTriangles.ArrayNum = 0;
            local_aa8.NewTriangles.ArrayMax = 0;
            local_aa8.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_aa8.NewQuads.ArrayNum = 0;
            local_aa8.NewQuads.ArrayMax = 0;
            local_aa8.NewPolygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_aa8.NewPolygons.ArrayNum = 0;
            local_aa8.NewPolygons.ArrayMax = 0;
            local_aa8.NewGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_aa8.NewGroups.ArrayNum = 0;
            local_aa8.NewGroups.ArrayMax = 0;
            local_aa8.NewNormalOverlayElements.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_aa8.NewNormalOverlayElements.ArrayNum = 0;
            local_aa8.NewNormalOverlayElements.ArrayMax = 0;
            local_aa8.NewColorOverlayElements.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_aa8.NewColorOverlayElements.ArrayNum = 0;
            local_aa8.NewColorOverlayElements.ArrayMax = 0;
            bVar23 = FDynamicMeshEditor::StitchVertexLoopToTriVidPairSequence
                               (&local_b90,
                                (TArray<TTuple<int,TTuple<signed_char,signed_char>_>,TSizedDefaultAllocator<32>_>
                                 *)(local_b70.Data + (longlong)pcVar57 * 0x10),pTVar40,&local_aa8);
            pTVar1 = local_b08;
            if (bVar23) {
              local_bd8 = (longlong)local_aa8.NewQuads.ArrayNum;
              uVar52 = uVar53;
              pcVar56 = pcVar57;
              if (0 < local_bd8) {
                do {
                  pFVar9 = this->Mesh;
                  uVar45 = (uint)uVar53;
                  uVar44 = 0;
                  if ((int)uVar45 < pTVar1[(longlong)pcVar57].ArrayNum) {
                    uVar44 = ~uVar45 >> 0x1f;
                  }
                  if ((uVar44 == 0) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar23)) {
                    pcVar57 = (code *)swi(3);
                    uVar24 = (*pcVar57)();
                    return (bool)uVar24;
                  }
                  local_be0 = *(int *)(pTVar1[(longlong)pcVar57].AllocatorInstance.Data + uVar52 * 4
                                      );
                  uVar44 = 0;
                  if ((int)uVar45 < local_aa8.NewQuads.ArrayNum) {
                    uVar44 = ~uVar45 >> 0x1f;
                  }
                  if ((uVar44 == 0) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar23)) {
                    pcVar57 = (code *)swi(3);
                    uVar24 = (*pcVar57)();
                    return (bool)uVar24;
                  }
                  if ((pFVar9->TriangleGroups).bIsSet != false) {
                    *(int *)(*(longlong *)
                              ((pFVar9->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                              (ulonglong)
                              (*(uint *)(local_aa8.NewQuads.AllocatorInstance.Data + uVar52 * 8) >>
                              9) * 8) +
                            (ulonglong)
                            (*(uint *)(local_aa8.NewQuads.AllocatorInstance.Data + uVar52 * 8) &
                            0x1ff) * 4) = local_be0;
                    iVar28 = local_be0 + 1;
                    if (local_be0 + 1 < pFVar9->GroupIDCounter) {
                      iVar28 = pFVar9->GroupIDCounter;
                    }
                    pFVar9->GroupIDCounter = iVar28;
                  }
                  pFVar9 = this->Mesh;
                  uVar44 = 0;
                  if ((int)uVar45 < pTVar1[(longlong)pcVar57].ArrayNum) {
                    uVar44 = ~uVar45 >> 0x1f;
                  }
                  if ((uVar44 == 0) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar23)) {
                    pcVar57 = (code *)swi(3);
                    uVar24 = (*pcVar57)();
                    return (bool)uVar24;
                  }
                  iVar28 = *(int *)(pTVar1[(longlong)pcVar57].AllocatorInstance.Data + uVar52 * 4);
                  uVar44 = 0;
                  if ((int)uVar45 < local_aa8.NewQuads.ArrayNum) {
                    uVar44 = ~uVar45 >> 0x1f;
                  }
                  if ((uVar44 == 0) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar23)) {
                    pcVar57 = (code *)swi(3);
                    uVar24 = (*pcVar57)();
                    return (bool)uVar24;
                  }
                  if ((pFVar9->TriangleGroups).bIsSet != false) {
                    *(int *)(*(longlong *)
                              ((pFVar9->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                              (ulonglong)
                              (*(uint *)(local_aa8.NewQuads.AllocatorInstance.Data + uVar52 * 8 + 4)
                              >> 9) * 8) +
                            (ulonglong)
                            (*(uint *)(local_aa8.NewQuads.AllocatorInstance.Data + uVar52 * 8 + 4) &
                            0x1ff) * 4) = iVar28;
                    iVar28 = iVar28 + 1;
                    if (iVar28 < pFVar9->GroupIDCounter) {
                      iVar28 = pFVar9->GroupIDCounter;
                    }
                    pFVar9->GroupIDCounter = iVar28;
                  }
                  uVar53 = (ulonglong)(uVar45 + 1);
                  uVar52 = uVar52 + 1;
                  pTVar40 = local_b88;
                  pcVar56 = local_be8;
                } while ((longlong)uVar52 < local_bd8);
              }
              pFVar58 = local_ba8;
              uVar44 = 0;
              if ((int)local_c04 < (local_ba8->StitchTriangles).ArrayNum) {
                uVar44 = ~local_c04 >> 0x1f;
              }
              if ((uVar44 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar57 = (code *)swi(3);
                uVar24 = (*pcVar57)();
                return (bool)uVar24;
              }
              FDynamicMeshEditResult::GetAllTriangles
                        (&local_aa8,
                         (TArray<int,TSizedDefaultAllocator<32>_> *)
                         ((pFVar58->StitchTriangles).AllocatorInstance.Data +
                         (longlong)(int)local_c04 * 0x10));
              uVar44 = 0;
              if ((int)local_c04 < (pFVar58->StitchPolygonIDs).ArrayNum) {
                uVar44 = ~local_c04 >> 0x1f;
              }
              if ((uVar44 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar57 = (code *)swi(3);
                uVar24 = (*pcVar57)();
                return (bool)uVar24;
              }
              FVar21.Data = local_bf8.Data;
              pFVar54 = (pFVar58->StitchPolygonIDs).AllocatorInstance.Data +
                        (longlong)pcVar56 * 0x10;
              if (pFVar54 != (FScriptContainerElement *)&local_bf8) {
                iVar29 = (int)local_bf0;
                lVar47 = (longlong)(int)local_bf0;
                pFVar41 = pFVar54 + 0xc;
                iVar28 = *(int *)pFVar41;
                *(int *)&pFVar54[8].field_0x0 = (int)local_bf0;
                if (((int)local_bf0 == 0) && (iVar28 == 0)) {
                  *(int *)pFVar41 = 0;
                  pcVar56 = local_be8;
                }
                else {
                  Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,(int)local_bf0,iVar28,(ForAnyElementType *)pFVar54,(int)local_bf0,
                             (int *)pFVar41);
                  pcVar56 = local_be8;
                  if (iVar29 != 0) {
                    memcpy(*(void **)&pFVar54->field_0x0,FVar21.Data,lVar47 << 2);
                    pcVar56 = local_be8;
                  }
                }
              }
              uVar44 = 0;
              if ((int)local_c04 < (pFVar58->StitchTriangles).ArrayNum) {
                uVar44 = ~local_c04 >> 0x1f;
              }
              if ((uVar44 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar57 = (code *)swi(3);
                uVar24 = (*pcVar57)();
                return (bool)uVar24;
              }
              pFVar54 = (pFVar58->StitchTriangles).AllocatorInstance.Data + (longlong)pcVar56 * 0x10
              ;
              pTVar1 = &this->AllModifiedAndNewTriangles;
              if ((pTVar1 == (TArray<int,TSizedDefaultAllocator<32>_> *)pFVar54) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(void*)this != (void*)&Source",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x96e,L""), bVar23)) {
                pcVar57 = (code *)swi(3);
                uVar24 = (*pcVar57)();
                return (bool)uVar24;
              }
              iVar28 = *(int *)&pFVar54[8].field_0x0;
              if (iVar28 != 0) {
                iVar29 = Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (4,4,iVar28,&pTVar1->AllocatorInstance,
                                    &(this->AllModifiedAndNewTriangles).ArrayNum,
                                    &(this->AllModifiedAndNewTriangles).ArrayMax);
                memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar29 * 4,
                       *(void **)&pFVar54->field_0x0,(longlong)iVar28 << 2);
              }
              pcVar57 = pcVar56;
              if ((this->Mesh->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
                local_b40._s_0.X =
                     (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
                local_b40._s_0.Y =
                     (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
                uVar44 = 0;
                lVar47 = 0;
                local_b40._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                dStack_b28 = 0.0;
                uStack_b20 = 0;
                uStack_b1c = 0;
                dStack_b18 = dVar19;
                dStack_b10 = dVar20;
                if (0 < local_bd8) {
                  uVar64 = 0;
                  uVar65 = 0;
                  dStack_b18._0_4_ = SUB84(dVar19,0);
                  uVar67 = (undefined4)((ulonglong)dVar19 >> 0x20);
                  uVar72 = 0;
                  uVar73 = 0;
                  uStack_b20 = 0;
                  uStack_b1c = 0;
                  lVar51 = local_bd8;
                  uVar66 = dStack_b18._0_4_;
                  uVar68 = uVar64;
                  uVar69 = uVar65;
                  uVar70 = dStack_b18._0_4_;
                  uVar71 = uVar67;
                  dStack_b18 = dVar19;
                  do {
                    uVar45 = 0;
                    if ((int)uVar44 < local_aa8.NewQuads.ArrayNum) {
                      uVar45 = ~uVar44 >> 0x1f;
                    }
                    if ((uVar45 == 0) &&
                       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar23)) {
                      pcVar57 = (code *)swi(3);
                      uVar24 = (*pcVar57)();
                      return (bool)uVar24;
                    }
                    FDynamicMeshEditor::ComputeAndSetQuadNormal
                              (&local_b90,(TVector<float> *)&local_b60._s_0,
                               (FIndex2i *)
                               (local_aa8.NewQuads.AllocatorInstance.Data +
                               (longlong)(int)uVar44 * 8),true);
                    uVar62 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                    uVar63 = (undefined4)
                             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >>
                             0x20);
                    dStack_8f0 = 0.0;
                    local_908._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    _uStack_8e8 = 0.0;
                    local_908._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                    local_908._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                    local_908._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                    local_908._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                    _uStack_8e0 = dVar19;
                    uStack_8d8 = dVar20;
                    if (uVar44 == 0) {
                      pFVar9 = this->Mesh;
                      if (pTVar40->ArrayNum < 2) {
                        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar23) {
                          pcVar57 = (code *)swi(3);
                          uVar24 = (*pcVar57)();
                          return (bool)uVar24;
                        }
                        uVar62 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                        uVar63 = (undefined4)
                                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_
                                 >> 0x20);
                      }
                      uVar45 = *(uint *)((pTVar40->AllocatorInstance).Data + 4);
                      pFVar11 = this->Mesh;
                      uVar53 = (ulonglong)(uVar45 & 0x1ff);
                      lVar12 = *(longlong *)
                                ((pFVar9->Vertices).Blocks.AllocatorInstance.Data +
                                (ulonglong)(uVar45 >> 9) * 8);
                      pdVar4 = (double *)(lVar12 + uVar53 * 0x18);
                      local_880 = *pdVar4;
                      dStack_878 = pdVar4[1];
                      local_870 = *(double *)(lVar12 + 0x10 + uVar53 * 0x18);
                      if (pTVar40->ArrayNum < 1) {
                        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar23) {
                          pcVar57 = (code *)swi(3);
                          uVar24 = (*pcVar57)();
                          return (bool)uVar24;
                        }
                        uVar62 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                        uVar63 = (undefined4)
                                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_
                                 >> 0x20);
                      }
                      uVar45 = *(uint *)(pTVar40->AllocatorInstance).Data;
                      uVar53 = (ulonglong)(uVar45 & 0x1ff);
                      lVar12 = *(longlong *)
                                ((pFVar11->Vertices).Blocks.AllocatorInstance.Data +
                                (ulonglong)(uVar45 >> 9) * 8);
                      pdVar4 = (double *)(lVar12 + uVar53 * 0x18);
                      local_6f8 = *pdVar4;
                      dStack_6f0 = pdVar4[1];
                      local_6e8 = *(double *)(lVar12 + 0x10 + uVar53 * 0x18);
                      dVar15 = local_880 - local_6f8;
                      dVar17 = local_870 - local_6e8;
                      dVar16 = dStack_878 - dStack_6f0;
                      auVar59._0_8_ = dVar15 * dVar15;
                      auVar59._8_8_ = 0;
                      auVar13._8_8_ = 0;
                      auVar13._0_8_ = dVar16 * dVar16 + auVar59._0_8_ + dVar17 * dVar17;
                      auVar60 = sqrtpd(auVar59,auVar13);
                      if (auVar60._0_8_ <= 0.0) {
                        local_948._s_0.X = 0.0;
                        local_948._s_0.Y = 0.0;
                        local_948._s_0.Z = 0.0;
                      }
                      else {
                        dVar14 = dVar7 / auVar60._0_8_;
                        local_948._s_0.X = dVar14 * dVar15;
                        local_948._s_0.Y = dVar14 * dVar16;
                        local_948._s_0.Z = dVar14 * dVar17;
                      }
                      local_838._s_0.X = (double)local_b60._s_0.X;
                      local_838._s_0.Y = (double)local_b60._s_0.Y;
                      local_838._s_0.Z = (double)local_b60._s_0.Z;
                      TStack_8b8._s_0.X = 0.0;
                      local_758._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
                      local_758._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
                      local_758._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
                      TStack_8b8._s_0.W = dVar7;
                      TStack_8b8._s_0.Y = 0.0;
                      TStack_8b8._s_0.Z = 0.0;
                      local_8c0 = (double)CONCAT44(uVar63,uVar62);
                      local_8d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                      uStack_8cc = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                      uStack_8c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                      uStack_8c4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                      TQuaternion<double>::SetFromTo
                                ((TQuaternion<double> *)&TStack_8b8._s_0,
                                 (TVector<double> *)&local_758._s_0,
                                 (TVector<double> *)&local_838._s_0);
                      local_b40._s_0.X = (double)CONCAT44(uStack_8cc,local_8d0);
                      local_b40._s_0.Y = (double)CONCAT44(uStack_8c4,uStack_8c8);
                      dVar16 = TStack_8b8._s_0.Y + TStack_8b8._s_0.Y;
                      dStack_b10 = TStack_8b8._s_0.W;
                      dVar15 = TStack_8b8._s_0.Z + TStack_8b8._s_0.Z;
                      uStack_b20 = SUB84(TStack_8b8._s_0.Y,0);
                      uStack_b1c = (undefined4)((ulonglong)TStack_8b8._8_8_ >> 0x20);
                      dStack_b18 = TStack_8b8._s_0.Z;
                      local_b40._s_0.Z = local_8c0;
                      dStack_b28 = TStack_8b8._s_0.X;
                      dVar17 = (double)local_b60._s_0.X;
                      local_808._s_0.X =
                           dVar7 - (dVar15 * TStack_8b8._s_0.Z + dVar16 * TStack_8b8._s_0.Y);
                      dVar14 = (double)local_b60._s_0.Y;
                      dVar18 = (double)local_b60._s_0.Z;
                      local_808._s_0.Z = dVar15 * TStack_8b8._s_0.X - dVar16 * TStack_8b8._s_0.W;
                      local_808._s_0.Y = dVar15 * TStack_8b8._s_0.W + dVar16 * TStack_8b8._s_0.X;
                      local_820._s_0.X = dVar17;
                      local_820._s_0.Y = dVar14;
                      local_820._s_0.Z = dVar18;
                      VectorUtil::PlaneAngleSignedD<double>
                                ((TVector<double> *)&local_808._s_0,
                                 (TVector<double> *)&local_948._s_0,
                                 (TVector<double> *)&local_820._s_0);
                      __libm_sse2_sincos_();
                      local_7b0._s_0.X = dVar17 * extraout_XMM0_Qa;
                      local_7b0._s_0.Y = dVar14 * extraout_XMM0_Qa;
                      local_7b0._s_0.Z = dVar18 * extraout_XMM0_Qa;
                      TFrame3<double>::Rotate
                                ((TFrame3<double> *)&local_b40._s_0,
                                 (TQuaternion<double> *)&local_7b0._s_0);
                      uVar66 = SUB84(dStack_b18,0);
                      uVar67 = (undefined4)((ulonglong)dStack_b18 >> 0x20);
                      dVar16 = (double)CONCAT44(uStack_b1c,uStack_b20);
                      uVar72 = SUB84(dStack_b28,0);
                      uVar73 = (undefined4)((ulonglong)dStack_b28 >> 0x20);
                      dVar15 = dStack_b18 + dStack_b18;
                      uStack_8e4 = uStack_b1c;
                      uStack_8e8 = uStack_b20;
                      _uStack_8e0 = dStack_b18;
                      local_930._s_0.X = (dVar16 + dVar16) * dStack_b28 - dVar15 * dStack_b10;
                      local_930._s_0.Z = (dStack_b28 + dStack_b28) * dStack_b10 + dVar15 * dVar16;
                      local_930._s_0.Y =
                           dVar7 - ((dStack_b28 + dStack_b28) * dStack_b28 + dVar15 * dStack_b18);
                      dStack_8f0 = dStack_b28;
                      local_908._16_8_ = local_b40._s_0.Z;
                      local_908._0_8_ = local_b40._s_0.X;
                      local_908._8_8_ = local_b40._s_0.Y;
                      uStack_8d8 = dStack_b10;
                      uVar64 = uStack_b20;
                      uVar65 = uStack_b1c;
                      uVar68 = uStack_b20;
                      uVar69 = uStack_b1c;
                      uVar70 = uVar66;
                      uVar71 = uVar67;
                    }
                    else {
                      dStack_8f0 = dStack_b28;
                      local_908._16_8_ = local_b40._s_0.Z;
                      local_908._0_8_ = local_b40._s_0.X;
                      local_908._8_8_ = local_b40._s_0.Y;
                      dVar16 = (double)CONCAT44(uVar71,uVar70) + (double)CONCAT44(uVar71,uVar70);
                      uStack_8d8 = dStack_b10;
                      dVar17 = (double)CONCAT44(uVar69,uVar68) + (double)CONCAT44(uVar69,uVar68);
                      local_7f0._s_0.Y = (double)local_b60._s_0.Y;
                      local_7f0._s_0.X = (double)local_b60._s_0.X;
                      dVar15 = (double)CONCAT44(uVar73,uVar72) + (double)CONCAT44(uVar73,uVar72);
                      local_7f0._s_0.Z = (double)local_b60._s_0.Z;
                      uStack_8e4 = uVar65;
                      uStack_8e8 = uVar64;
                      uStack_8dc = uVar67;
                      uStack_8e0 = uVar66;
                      local_7d8._s_0.X =
                           dVar16 * (double)CONCAT44(uVar73,uVar72) + dVar17 * dStack_b10;
                      local_7d8._s_0.Y =
                           dVar16 * (double)CONCAT44(uVar69,uVar68) - dVar15 * dStack_b10;
                      local_7d8._s_0.Z =
                           dVar7 - (dVar15 * (double)CONCAT44(uVar73,uVar72) +
                                   dVar17 * (double)CONCAT44(uVar69,uVar68));
                      VectorUtil::PlaneAngleSignedD<double>
                                ((TVector<double> *)&local_7d8._s_0,
                                 (TVector<double> *)&local_7f0._s_0,
                                 (TVector<double> *)&local_930._s_0);
                      __libm_sse2_sincos_();
                      local_790._s_0.Y = extraout_XMM0_Qa_00 * local_930._s_0.Y;
                      local_790._s_0.X = extraout_XMM0_Qa_00 * local_930._s_0.X;
                      local_790._s_0.Z = extraout_XMM0_Qa_00 * local_930._s_0.Z;
                      TFrame3<double>::Rotate
                                ((TFrame3<double> *)local_908,(TQuaternion<double> *)&local_790._s_0
                                );
                      if (0 < (int)uVar44) {
                        pFVar9 = this->Mesh;
                        uVar45 = 0;
                        if ((int)(uVar44 - 1) < pTVar40->ArrayNum) {
                          uVar45 = -uVar44 >> 0x1f;
                        }
                        if ((uVar45 == 0) &&
                           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar23)) {
                          pcVar57 = (code *)swi(3);
                          uVar24 = (*pcVar57)();
                          return (bool)uVar24;
                        }
                        uVar45 = *(uint *)((pTVar40->AllocatorInstance).Data + lVar47 * 4 + -4);
                        pFVar11 = this->Mesh;
                        uVar53 = (ulonglong)(uVar45 & 0x1ff);
                        lVar51 = *(longlong *)
                                  ((pFVar9->Vertices).Blocks.AllocatorInstance.Data +
                                  (ulonglong)(uVar45 >> 9) * 8);
                        pdVar4 = (double *)(lVar51 + uVar53 * 0x18);
                        local_868 = *pdVar4;
                        dStack_860 = pdVar4[1];
                        local_858 = *(double *)(lVar51 + 0x10 + uVar53 * 0x18);
                        uVar45 = 0;
                        if ((int)uVar44 < pTVar40->ArrayNum) {
                          uVar45 = ~uVar44 >> 0x1f;
                        }
                        if ((uVar45 == 0) &&
                           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar23)) {
                          pcVar57 = (code *)swi(3);
                          uVar24 = (*pcVar57)();
                          return (bool)uVar24;
                        }
                        uVar45 = *(uint *)((pTVar40->AllocatorInstance).Data + lVar47 * 4);
                        uVar53 = (ulonglong)(uVar45 & 0x1ff);
                        lVar51 = *(longlong *)
                                  ((pFVar11->Vertices).Blocks.AllocatorInstance.Data +
                                  (ulonglong)(uVar45 >> 9) * 8);
                        pdVar4 = (double *)(lVar51 + uVar53 * 0x18);
                        local_710 = *pdVar4;
                        dStack_708 = pdVar4[1];
                        local_700 = *(double *)(lVar51 + 0x10 + uVar53 * 0x18);
                        auVar61._8_8_ = dStack_708;
                        auVar61._0_8_ = dStack_708;
                        auVar60._8_8_ = 0;
                        auVar60._0_8_ =
                             (dStack_860 - dStack_708) * (dStack_860 - dStack_708) +
                             (local_868 - local_710) * (local_868 - local_710) +
                             (local_858 - local_700) * (local_858 - local_700);
                        auVar60 = sqrtpd(auVar61,auVar60);
                        fVar74 = fVar74 + (float)auVar60._0_8_;
                        lVar51 = local_bd8;
                      }
                    }
                    fVar6 = this->UVScaleFactor;
                    local_a38[0]._s_0.Y = 0.0;
                    local_a38[0]._0_4_ = fVar74 * fVar6;
                    uVar45 = 0;
                    if ((int)uVar44 < local_aa8.NewQuads.ArrayNum) {
                      uVar45 = ~uVar44 >> 0x1f;
                    }
                    if ((uVar45 == 0) &&
                       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar23)) {
                      pcVar57 = (code *)swi(3);
                      uVar24 = (*pcVar57)();
                      return (bool)uVar24;
                    }
                    FDynamicMeshEditor::SetQuadUVsFromProjection
                              (&local_b90,
                               (FIndex2i *)
                               (local_aa8.NewQuads.AllocatorInstance.Data +
                               (longlong)(int)uVar44 * 8),(TFrame3<double> *)local_908,fVar6,
                               (TVector2<float> *)&local_a38[0]._s_0,0);
                    uVar44 = uVar44 + 1;
                    lVar47 = lVar47 + 1;
                    pcVar57 = local_be8;
                  } while (lVar47 < lVar51);
                }
              }
              pFVar58 = local_ba8;
              uVar44 = 0;
              if ((int)local_c04 < (local_ba8->BaseLoops).ArrayNum) {
                uVar44 = ~local_c04 >> 0x1f;
              }
              if ((uVar44 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar57 = (code *)swi(3);
                uVar24 = (*pcVar57)();
                return (bool)uVar24;
              }
              pFVar38 = (FEdgeLoop *)
                        ((pFVar58->BaseLoops).AllocatorInstance.Data + (longlong)pcVar57 * 0x40);
              pFVar38->Mesh = this->Mesh;
              FEdgeLoop::InitializeFromVertices(pFVar38,pTVar40,true);
              if (bVar22) {
                uVar44 = 0;
                if ((int)local_c04 < (pFVar58->OffsetLoops).ArrayNum) {
                  uVar44 = ~local_c04 >> 0x1f;
                }
                if ((uVar44 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar57 = (code *)swi(3);
                  uVar24 = (*pcVar57)();
                  return (bool)uVar24;
                }
                pFVar38 = (FEdgeLoop *)
                          ((pFVar58->OffsetLoops).AllocatorInstance.Data + (longlong)pcVar57 * 0x40)
                ;
                pFVar38->Mesh = this->Mesh;
                FEdgeLoop::InitializeFromVertices(pFVar38,pTVar40 + 2,true);
              }
            }
            else {
              local_c08 = false;
            }
            if (local_aa8.NewColorOverlayElements.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_aa8.NewColorOverlayElements.AllocatorInstance.Data);
            }
            DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)
                       local_aa8.NewNormalOverlayElements.AllocatorInstance.Data,
                       local_aa8.NewNormalOverlayElements.ArrayNum);
            if ((TArray<int,TSizedDefaultAllocator<32>_> *)
                local_aa8.NewNormalOverlayElements.AllocatorInstance.Data !=
                (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              FMemory::Free(local_aa8.NewNormalOverlayElements.AllocatorInstance.Data);
            }
            if (local_aa8.NewGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_aa8.NewGroups.AllocatorInstance.Data);
            }
            DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)
                       local_aa8.NewPolygons.AllocatorInstance.Data,local_aa8.NewPolygons.ArrayNum);
            if ((TArray<int,TSizedDefaultAllocator<32>_> *)
                local_aa8.NewPolygons.AllocatorInstance.Data !=
                (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              FMemory::Free(local_aa8.NewPolygons.AllocatorInstance.Data);
            }
            if (local_aa8.NewQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_aa8.NewQuads.AllocatorInstance.Data);
            }
            if (local_aa8.NewTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_aa8.NewTriangles.AllocatorInstance.Data);
            }
            if (local_aa8.NewVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_aa8.NewVertices.AllocatorInstance.Data);
            }
            local_c04 = local_c04 + 1;
            local_be8 = pcVar57 + 1;
            pFVar58 = local_ba8;
            bVar23 = local_c08;
          } while ((int)local_c04 < local_bd0.ArrayNum);
        }
        if (pFVar58->bIsSolid != false) {
          pFVar43 = (FOffsetInfo *)(local_a28 + 0x10);
          if (this->bIsPositiveOffset == false) {
            pFVar43 = pFVar58;
          }
          FDynamicMeshEditor::ReverseTriangleOrientations(&local_b90,&pFVar43->OffsetTids,true);
        }
        if (local_b50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b50.AllocatorInstance.Data);
        }
        if (local_b80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b80.AllocatorInstance.Data);
        }
        local_400.HashSize = 0;
        if (local_400.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_400.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_400.Elements);
      }
      else {
        FMeshRegionBoundaryLoops::FMeshRegionBoundaryLoops
                  (&local_558,this->Mesh,&pFVar58->OffsetTids,false);
        bVar23 = FMeshRegionBoundaryLoops::Compute(&local_558);
        if (bVar23) {
          TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_>::operator=
                    (&pFVar58->OffsetLoops,&local_558.Loops);
          FMeshRegionBoundaryLoops::~FMeshRegionBoundaryLoops(&local_558);
          goto LAB_14c7dde0b;
        }
        FMeshRegionBoundaryLoops::~FMeshRegionBoundaryLoops(&local_558);
        bVar23 = false;
      }
      if (local_9b8.NewColorOverlayElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_9b8.NewColorOverlayElements.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                 local_9b8.NewNormalOverlayElements.AllocatorInstance.Data,
                 local_9b8.NewNormalOverlayElements.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)
          local_9b8.NewNormalOverlayElements.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_9b8.NewNormalOverlayElements.AllocatorInstance.Data);
      }
      if (local_9b8.NewGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9b8.NewGroups.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                 local_9b8.NewPolygons.AllocatorInstance.Data,local_9b8.NewPolygons.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_9b8.NewPolygons.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_9b8.NewPolygons.AllocatorInstance.Data);
      }
      if (local_9b8.NewQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9b8.NewQuads.AllocatorInstance.Data);
      }
      if (local_9b8.NewTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9b8.NewTriangles.AllocatorInstance.Data);
      }
      if (local_9b8.NewVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9b8.NewVertices.AllocatorInstance.Data);
      }
    }
    else {
      do {
        if (bVar22 == false) {
LAB_14c7ddcf2:
          bVar22 = false;
        }
        else {
          uVar46 = ~uVar44 >> 0x1f;
          uVar45 = 0;
          if ((int)uVar44 < (int)local_b68) {
            uVar45 = uVar46;
          }
          if ((uVar45 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar57 = (code *)swi(3);
            uVar24 = (*pcVar57)();
            return (bool)uVar24;
          }
          lVar47 = (longlong)(int)uVar44;
          pTVar55 = (TArray<TTuple<int,TTuple<signed_char,signed_char>_>,TSizedDefaultAllocator<32>_>
                     *)(local_b70.Data + lVar47 * 0x10);
          uVar45 = 0;
          if ((int)uVar44 < local_bd0.ArrayNum) {
            uVar45 = uVar46;
          }
          if ((uVar45 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar57 = (code *)swi(3);
            uVar24 = (*pcVar57)();
            return (bool)uVar24;
          }
          FVar21.Data = local_bd0.AllocatorInstance.Data;
          uVar45 = 0;
          if ((int)uVar44 < local_bd0.ArrayNum) {
            uVar45 = uVar46;
          }
          if ((uVar45 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar57 = (code *)swi(3);
            uVar24 = (*pcVar57)();
            return (bool)uVar24;
          }
          bVar22 = FDynamicMeshEditor::ConvertLoopToTriVidPairSequence
                             (this->Mesh,
                              (TArray<int,TSizedDefaultAllocator<32>_> *)
                              (local_bd0.AllocatorInstance.Data + lVar47 * 0x48 + 0x20),
                              (TArray<int,TSizedDefaultAllocator<32>_> *)
                              (FVar21.Data + lVar47 * 0x48 + 0x30),pTVar55);
          if (!bVar22) goto LAB_14c7ddcf2;
          bVar22 = true;
        }
        uVar44 = uVar44 + 1;
      } while ((int)uVar44 < local_bd0.ArrayNum);
      bVar23 = false;
      if (bVar22 != false) goto LAB_14c7ddd0f;
    }
    DestructItems<TArray<TTuple<int,TTuple<signed_char,signed_char>_>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<TTuple<int,TTuple<signed_char,signed_char>_>,TSizedDefaultAllocator<32>_> *)
               local_b70.Data,(int)local_b68);
    if ((TArray<TTuple<int,TTuple<signed_char,signed_char>_>,TSizedDefaultAllocator<32>_> *)
        local_b70.Data !=
        (TArray<TTuple<int,TTuple<signed_char,signed_char>_>,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_b70.Data);
    }
  }
  if (local_9c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9c8.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_9d8.Data,(int)local_9d0);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_9d8.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_9d8.Data);
  }
  if (local_9e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9e8.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_9f8.Data,(int)local_9f0);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_9f8.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_9f8.Data);
  }
  if (local_a08.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a08.Data);
  }
  if ((FScriptContainerElement *)local_a28._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a28._16_8_);
  }
  if ((FScriptContainerElement *)local_a28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a28._0_8_);
  }
  DestructItems<UE::Geometry::FDynamicMeshEditor::FLoopPairSet,int>
            ((FLoopPairSet *)local_bd0.AllocatorInstance.Data,local_bd0.ArrayNum);
  if ((FLoopPairSet *)local_bd0.AllocatorInstance.Data != (FLoopPairSet *)0x0) {
    FMemory::Free(local_bd0.AllocatorInstance.Data);
  }
  if (local_bf8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bf8.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_ba0.AllocatorInstance.Data,
             local_ba0.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_ba0.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_ba0.AllocatorInstance.Data);
  }
LAB_14c7df8e5:
  FMeshRegionBoundaryLoops::~FMeshRegionBoundaryLoops(&local_6a8);
  return bVar23;
}

// ApplyOffset_Version1 @ 14c7df930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FOffsetMeshRegion::ApplyOffset_Version1(FOffsetMeshRegion *this,FOffsetInfo *param_1)

{
  int *piVar1;
  FMutex *this_00;
  float *pfVar2;
  undefined8 *puVar3;
  atomic<unsigned_char> aVar4;
  double dVar5;
  EVertexExtrusionVectorType EVar6;
  FDynamicMesh3 *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  ForAnyElementType FVar15;
  bool bVar16;
  undefined1 uVar17;
  bool bVar18;
  short sVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint *puVar23;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar24;
  TVector<double>_u_0 *pTVar25;
  TVector<double> *pTVar26;
  undefined8 uVar27;
  int iVar28;
  longlong *plVar29;
  ForElementType<FSetElementId> FVar30;
  uint *puVar31;
  FScriptContainerElement *pFVar32;
  undefined4 *puVar33;
  FOffsetInfo *pFVar34;
  FOffsetMeshRegion *pFVar35;
  uint uVar36;
  uint uVar37;
  FScriptContainerElement *pFVar38;
  ulonglong uVar39;
  longlong lVar40;
  uint uVar41;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar42;
  longlong lVar43;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar44;
  ulonglong uVar45;
  longlong lVar46;
  FOffsetInfo *pFVar47;
  TArray<UE::Geometry::FMeshTriOrderedEdgeID,TSizedDefaultAllocator<32>_> *pTVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  FEdgeLoop *pFVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined1 auStackY_8b8 [32];
  uint local_864;
  undefined1 local_860;
  undefined1 local_85f [7];
  TArray<UE::Geometry::FDynamicMeshEditor::FLoopPairSet,TSizedDefaultAllocator<32>_> local_858;
  undefined4 local_848;
  undefined4 local_844;
  int local_840 [2];
  FOffsetMeshRegion *local_838;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_830;
  undefined1 local_820 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_818;
  TArray<TArray<UE::Geometry::FMeshTriOrderedEdgeID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_808;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_7f8;
  FOffsetInfo *local_7e8;
  undefined8 local_7e0;
  FDynamicMeshEditor local_7d0;
  longlong local_7c8;
  longlong local_7c0;
  uint local_7b8 [2];
  undefined4 local_7b0 [2];
  undefined4 local_7a8 [2];
  undefined4 local_7a0 [2];
  uint local_798;
  longlong local_790;
  TArray<bool,TSizedDefaultAllocator<32>_> local_788;
  undefined8 local_778;
  float local_770;
  undefined1 local_768 [24];
  undefined8 local_750;
  ForAnyElementType local_748;
  undefined8 local_740;
  ForAnyElementType local_738;
  undefined8 local_730;
  ForAnyElementType local_728;
  undefined8 local_720;
  ForAnyElementType local_718;
  undefined8 local_710;
  ForAnyElementType local_708;
  undefined8 local_700;
  TArray<int,TSizedDefaultAllocator<32>_> local_6f8;
  FDynamicMeshEditResult local_6e8;
  TPairInitializer<int_const_&,int_const_&> local_678;
  int local_668;
  int local_664;
  FStitchConfigOptions local_660;
  FDynamicMeshEditor local_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  uint *local_618;
  uint *local_610;
  code *local_608;
  TFunction<bool___cdecl(int,int)> *local_600;
  TVector<double>_u_0 local_5f8;
  double local_5e0;
  double dStack_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  FStitchConfigOptions local_5a8;
  FMeshRegionBoundaryLoops local_578;
  TVector<double> local_478;
  TVector<double> local_460;
  TVector<double> local_448;
  undefined1 local_428 [32];
  ForElementType<unsigned_int> local_408;
  int local_400;
  int local_3fc;
  int local_3f8;
  int local_3f4;
  ForElementType<FSetElementId> local_3e8;
  int local_3e0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_3d8;
  FDynamicMesh3 *local_388;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_380;
  FMeshIndexMappings local_328;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  local_638.Mesh = this->Mesh;
  local_6e8.NewVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6e8.NewVertices.ArrayNum = 0;
  local_6e8.NewVertices.ArrayMax = 0;
  local_6e8.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6e8.NewTriangles.ArrayNum = 0;
  local_6e8.NewTriangles.ArrayMax = 0;
  local_6e8.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6e8.NewQuads.ArrayNum = 0;
  local_6e8.NewQuads.ArrayMax = 0;
  local_6e8.NewPolygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6e8.NewPolygons.ArrayNum = 0;
  local_6e8.NewPolygons.ArrayMax = 0;
  local_6e8.NewGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6e8.NewGroups.ArrayNum = 0;
  local_6e8.NewGroups.ArrayMax = 0;
  local_6e8.NewNormalOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6e8.NewNormalOverlayElements.ArrayNum = 0;
  local_6e8.NewNormalOverlayElements.ArrayMax = 0;
  local_6e8.NewColorOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6e8.NewColorOverlayElements.ArrayNum = 0;
  local_6e8.NewColorOverlayElements.ArrayMax = 0;
  local_838 = this;
  local_7e8 = param_1;
  FDynamicMeshEditor::SplitBowtiesAtTriangles(&local_638,&param_1->OffsetTids,&local_6e8);
  local_3d8.Elements._0_8_ = 0;
  local_3d8.Elements._8_8_ = 0;
  local_3d8.Elements._32_8_ = 0;
  local_3d8.Elements._40_4_ = 0;
  local_3d8.Elements._44_4_ = 0x80;
  local_3d8.Elements._48_4_ = 0xffffffff;
  local_3d8.Elements._52_4_ = 0;
  local_3d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_3d8.HashSize = 0;
  if ((this->Mesh->TriangleGroups).bIsSet != false) {
    pFVar32 = (param_1->OffsetTids).AllocatorInstance.Data;
    iVar21 = (param_1->OffsetTids).ArrayNum;
    pFVar38 = pFVar32 + (longlong)iVar21 * 4;
    while( true ) {
      if ((param_1->OffsetTids).ArrayNum != iVar21) {
        local_860 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_860);
      }
      if (pFVar32 == pFVar38) break;
      pFVar7 = this->Mesh;
      uVar36 = *(uint *)pFVar32;
      if ((pFVar7->TriangleGroups).bIsSet == false) {
        local_7b8[0] = 0xffffffff;
      }
      else {
        if ((-1 < (int)uVar36) &&
           ((int)uVar36 <
            (int)((pFVar7->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar7->TriangleRefCounts).RefCounts.CurBlockUsed))) {
          if ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar7->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + (ulonglong)(uVar36 >> 9) * 8) +
                                 (ulonglong)(uVar36 & 0x1ff) * 2) - 1U) < 0xfffe) {
            local_7b8[0] = *(uint *)(*(longlong *)
                                      ((pFVar7->TriangleGroups).TypedValue.Blocks.AllocatorInstance.
                                       Data + (ulonglong)(uVar36 >> 9) * 8) +
                                    (ulonglong)(uVar36 & 0x1ff) * 4);
            goto LAB_14c7dfaf7;
          }
        }
        local_7b8[0] = 0;
      }
LAB_14c7dfaf7:
      if (local_3d8.Elements._8_4_ != local_3d8.Elements._52_4_) {
        FVar30 = (ForElementType<FSetElementId>)&local_3d8.Hash;
        if (local_3d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar30 = local_3d8.Hash.SecondaryData;
        }
        uVar37 = *(uint *)((longlong)FVar30 +
                          (ulonglong)(local_3d8.HashSize - 1U & local_7b8[0]) * 4);
        while (uVar37 != 0xffffffff) {
          puVar31 = (uint *)((longlong)(int)uVar37 * 0x10 + local_3d8.Elements._0_8_);
          if (*puVar31 == local_7b8[0]) {
            puVar23 = puVar31 + 1;
            if (puVar31 == (uint *)0x0) {
              puVar23 = (uint *)0x0;
            }
            if (puVar23 != (uint *)0x0) {
              local_864 = *puVar23;
              goto LAB_14c7dfc51;
            }
            break;
          }
          uVar37 = puVar31[2];
        }
      }
      local_864 = pFVar7->GroupIDCounter;
      pFVar7->GroupIDCounter = local_864 + 1;
      local_610 = &local_864;
      local_618 = local_7b8;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>(&local_3d8,&local_678,(bool *)&local_618);
      pFVar8 = (param_1->OffsetGroups).AllocatorInstance.Data;
      if (((pFVar8 <= (FScriptContainerElement *)&local_864) &&
          ((FScriptContainerElement *)&local_864 <
           pFVar8 + (longlong)(param_1->OffsetGroups).ArrayMax * 4)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar10 = (code *)swi(3);
        uVar17 = (*pcVar10)();
        return (bool)uVar17;
      }
      iVar20 = (param_1->OffsetGroups).ArrayNum;
      piVar1 = &(param_1->OffsetGroups).ArrayMax;
      if (iVar20 == *piVar1) {
        iVar20 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(param_1->OffsetGroups).AllocatorInstance,piVar1);
      }
      (param_1->OffsetGroups).ArrayNum = iVar20 + 1;
      *(uint *)((param_1->OffsetGroups).AllocatorInstance.Data + (longlong)iVar20 * 4) = local_864;
LAB_14c7dfc51:
      pFVar7 = this->Mesh;
      if ((pFVar7->TriangleGroups).bIsSet != false) {
        *(uint *)(*(longlong *)
                   ((pFVar7->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar36 >> 9) * 8) + (ulonglong)(uVar36 & 0x1ff) * 4) = local_864;
        iVar20 = local_864 + 1;
        if ((int)(local_864 + 1) < pFVar7->GroupIDCounter) {
          iVar20 = pFVar7->GroupIDCounter;
        }
        pFVar7->GroupIDCounter = iVar20;
      }
      pFVar32 = pFVar32 + 4;
    }
  }
  uVar36 = 0;
  FMeshRegionBoundaryLoops::FMeshRegionBoundaryLoops
            (&local_578,this->Mesh,&param_1->OffsetTids,false);
  bVar16 = FMeshRegionBoundaryLoops::Compute(&local_578);
  if (!bVar16) {
    bVar16 = false;
    goto LAB_14c7e16d1;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
            (&this->AllModifiedAndNewTriangles,&param_1->OffsetTids);
  uVar37 = (param_1->OffsetTids).ArrayNum;
  pFVar38 = (param_1->OffsetTids).AllocatorInstance.Data;
  if (((int)uVar37 < 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar18)) {
    pcVar10 = (code *)swi(3);
    uVar17 = (*pcVar10)();
    return (bool)uVar17;
  }
  local_428._0_8_ = (FScriptContainerElement *)0x0;
  local_428._8_8_ = 0;
  local_408 = (ForElementType<unsigned_int>)0x0;
  local_400 = 0;
  local_3fc = 0x80;
  local_3f8 = -1;
  local_3f4 = 0;
  local_3e8 = (ForElementType<FSetElementId>)0x0;
  local_3e0 = 0;
  if (uVar37 != 0) {
    if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar37);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_428,uVar37);
    iVar21 = 1;
    if (3 < uVar37) {
      uVar45 = (ulonglong)((uVar37 >> 1) + 7) * 2 + 1;
      lVar43 = 0x3f;
      if (uVar45 != 0) {
        for (; uVar45 >> lVar43 == 0; lVar43 = lVar43 + -1) {
        }
      }
      local_678.Key._4_4_ = (undefined4)lVar43;
      iVar21 = 1 << ((byte)lVar43 & 0x1f);
    }
    if ((local_3e0 == 0) || (local_3e0 < iVar21)) {
      local_3e0 = iVar21;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_428);
    }
  }
  pFVar32 = pFVar38 + (longlong)(int)uVar37 * 4;
  for (; pFVar38 != pFVar32; pFVar38 = pFVar38 + 4) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_428,
               (int *)&local_678.Value,(bool *)pFVar38);
  }
  local_830.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_830.ArrayNum = 0;
  local_830.ArrayMax = 0;
  local_6f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6f8.ArrayNum = 0;
  local_6f8.ArrayMax = 0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_830,local_578.Loops.ArrayNum,Default);
  if (0 < local_578.Loops.ArrayNum) {
    do {
      uVar37 = 0;
      if ((int)uVar36 < local_578.Loops.ArrayNum) {
        uVar37 = ~uVar36 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar10 = (code *)swi(3);
        uVar17 = (*pcVar10)();
        return (bool)uVar17;
      }
      FVar15.Data = local_578.Loops.AllocatorInstance.Data;
      uVar37 = 0;
      if ((int)uVar36 < local_830.ArrayNum) {
        uVar37 = ~uVar36 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar10 = (code *)swi(3);
        uVar17 = (*pcVar10)();
        return (bool)uVar17;
      }
      pTVar42 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                (local_830.AllocatorInstance.Data + (longlong)(int)uVar36 * 0x10);
      if ((*(longlong *)&this->LoopEdgesShouldHaveSameGroup == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsBound(InFunc)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                              ,0x1d0,L"Cannot bind a null/unbound callable to a TFunctionRef"),
         bVar18)) {
        pcVar10 = (code *)swi(3);
        uVar17 = (*pcVar10)();
        return (bool)uVar17;
      }
      local_608 = Core::Private::Function::
                  TFunctionRefCaller<TFunction<bool___cdecl(int,int)>,bool,int,int>::Call;
      local_600 = &this->LoopEdgesShouldHaveSameGroup;
      ComputeNewGroupIDsAlongEdgeLoop
                (this->Mesh,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)
                 (FVar15.Data + (longlong)(int)uVar36 * 0x40 + 0x18),pTVar42,&local_6f8,
                 (TFunctionRef<bool___cdecl(int,int)> *)&local_608);
      iVar21 = OffsetMeshRegionLocals::FindLoopShiftFromGroupIDs(pTVar42);
      if (iVar21 != 0) {
        uVar37 = 0;
        if ((int)uVar36 < local_578.Loops.ArrayNum) {
          uVar37 = ~uVar36 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          uVar17 = (*pcVar10)();
          return (bool)uVar17;
        }
        OffsetMeshRegionLocals::LeftShiftArray<int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)
                   (local_578.Loops.AllocatorInstance.Data + (longlong)(int)uVar36 * 0x40 + 8),
                   iVar21);
        uVar37 = 0;
        if ((int)uVar36 < local_578.Loops.ArrayNum) {
          uVar37 = ~uVar36 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          uVar17 = (*pcVar10)();
          return (bool)uVar17;
        }
        OffsetMeshRegionLocals::LeftShiftArray<int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)
                   (local_578.Loops.AllocatorInstance.Data + (longlong)(int)uVar36 * 0x40 + 0x18),
                   iVar21);
        OffsetMeshRegionLocals::LeftShiftArray<int>(pTVar42,iVar21);
      }
      uVar36 = uVar36 + 1;
      param_1 = local_7e8;
    } while ((int)uVar36 < local_578.Loops.ArrayNum);
  }
  local_7d0.Mesh = this->Mesh;
  local_858.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_858.ArrayNum = 0;
  local_858.ArrayMax = 0;
  local_768._0_8_ = (FScriptContainerElement *)0x0;
  local_768._8_4_ = 0;
  local_768._12_4_ = 0;
  local_768._16_8_ = (FScriptContainerElement *)0x0;
  local_750._0_4_ = 0;
  local_750._4_4_ = 0;
  local_748.Data = (FScriptContainerElement *)0x0;
  local_740._0_4_ = 0;
  local_740._4_4_ = 0;
  local_738.Data = (FScriptContainerElement *)0x0;
  local_730._0_4_ = 0;
  local_730._4_4_ = 0;
  local_728.Data = (FScriptContainerElement *)0x0;
  local_720._0_4_ = 0;
  local_720._4_4_ = 0;
  local_718.Data = (FScriptContainerElement *)0x0;
  local_710._0_4_ = 0;
  local_710._4_4_ = 0;
  local_708.Data = (FScriptContainerElement *)0x0;
  local_700._0_4_ = 0;
  local_700._4_4_ = 0;
  if (param_1->bIsSolid == false) {
    bVar18 = FDynamicMeshEditor::DisconnectTriangles
                       (&local_7d0,
                        (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_428,
                        &local_578.Loops,&local_858,true);
    bVar16 = true;
    if (bVar18) goto LAB_14c7e0868;
    bVar16 = false;
  }
  else {
    FMeshIndexMappings::FMeshIndexMappings(&local_328);
    FDynamicMeshEditor::DuplicateTriangles
              (&local_7d0,&param_1->OffsetTids,&local_328,(FDynamicMeshEditResult *)local_768);
    pTVar42 = &this->AllModifiedAndNewTriangles;
    if ((pTVar42 == (TArray<int,TSizedDefaultAllocator<32>_> *)(local_768 + 0x10)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar18)) {
      pcVar10 = (code *)swi(3);
      uVar17 = (*pcVar10)();
      return (bool)uVar17;
    }
    lVar43 = (longlong)(int)local_750;
    if ((int)local_750 != 0) {
      iVar21 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,(int)local_750,&pTVar42->AllocatorInstance,
                          &(this->AllModifiedAndNewTriangles).ArrayNum,
                          &(this->AllModifiedAndNewTriangles).ArrayMax);
      memcpy((pTVar42->AllocatorInstance).Data + (longlong)iVar21 * 4,(void *)local_768._16_8_,
             lVar43 << 2);
    }
    TArray<UE::Geometry::FDynamicMeshEditor::FLoopPairSet,TSizedDefaultAllocator<32>_>::SetNum
              (&local_858,local_578.Loops.ArrayNum,Default);
    uVar36 = 0;
    if (0 < local_578.Loops.ArrayNum) {
      local_7c8 = 0;
      local_7e0 = 0;
      local_7c0 = 0;
      local_790 = 0;
      do {
        lVar46 = local_790;
        lVar40 = local_7c8;
        lVar43 = local_7e0;
        uVar37 = 0;
        if ((int)uVar36 < local_578.Loops.ArrayNum) {
          uVar37 = ~uVar36 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          uVar17 = (*pcVar10)();
          return (bool)uVar17;
        }
        FVar15.Data = local_578.Loops.AllocatorInstance.Data;
        uVar37 = 0;
        if ((int)uVar36 < local_858.ArrayNum) {
          uVar37 = ~uVar36 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          uVar17 = (*pcVar10)();
          return (bool)uVar17;
        }
        pTVar44 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                  (local_858.AllocatorInstance.Data + lVar43);
        pTVar24 = (TArray<int,TSizedDefaultAllocator<32>_> *)(FVar15.Data + lVar46 + 8);
        pTVar42 = pTVar44 + 2;
        if (pTVar42 != pTVar24) {
          iVar21 = pTVar24->ArrayNum;
          piVar1 = &pTVar44[2].ArrayMax;
          pFVar38 = (pTVar24->AllocatorInstance).Data;
          pTVar44[2].ArrayNum = iVar21;
          if ((iVar21 == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
            lVar40 = local_7c8;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar21,*piVar1,&pTVar42->AllocatorInstance,iVar21,piVar1);
            lVar40 = local_7c8;
            if (iVar21 != 0) {
              memcpy((pTVar42->AllocatorInstance).Data,pFVar38,(longlong)iVar21 << 2);
              lVar40 = local_7c8;
            }
          }
        }
        pTVar42 = pTVar44 + 3;
        pTVar24 = (TArray<int,TSizedDefaultAllocator<32>_> *)(FVar15.Data + local_790 + 0x18);
        if (pTVar42 != pTVar24) {
          iVar21 = pTVar24->ArrayNum;
          piVar1 = &pTVar44[3].ArrayMax;
          pFVar38 = (pTVar24->AllocatorInstance).Data;
          pTVar44[3].ArrayNum = iVar21;
          if ((iVar21 == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar21,*piVar1,&pTVar42->AllocatorInstance,iVar21,piVar1);
            if (iVar21 != 0) {
              memcpy((pTVar42->AllocatorInstance).Data,pFVar38,(longlong)iVar21 << 2);
            }
          }
        }
        lVar43 = 0;
        if (this->bIsPositiveOffset == false) {
          pFVar38 = pTVar44[2].AllocatorInstance.Data;
          iVar21 = pTVar44[2].ArrayNum / 2;
          if (0 < iVar21) {
            pFVar32 = pFVar38 + (longlong)(pTVar44[2].ArrayNum + -1) * 4;
            lVar46 = lVar43;
            do {
              uVar52 = *(undefined4 *)(pFVar38 + lVar46 * 4);
              *(undefined4 *)(pFVar38 + lVar46 * 4) = *(undefined4 *)pFVar32;
              lVar46 = lVar46 + 1;
              *(undefined4 *)pFVar32 = uVar52;
              pFVar32 = pFVar32 + -4;
            } while (lVar46 < iVar21);
          }
          if ((pTVar44[3].ArrayNum < 1) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            uVar17 = (*pcVar10)();
            return (bool)uVar17;
          }
          iVar21 = pTVar44[3].ArrayNum + -1;
          uVar52 = *(undefined4 *)
                    (pTVar44[3].AllocatorInstance.Data + (longlong)pTVar44[3].ArrayNum * 4 + -4);
          pTVar44[3].ArrayNum = iVar21;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar44[3].AllocatorInstance,iVar21,&pTVar44[3].ArrayMax);
          pFVar38 = pTVar44[3].AllocatorInstance.Data;
          iVar21 = pTVar44[3].ArrayNum / 2;
          if (0 < iVar21) {
            pFVar32 = pFVar38 + (longlong)(pTVar44[3].ArrayNum + -1) * 4;
            lVar46 = lVar43;
            do {
              uVar53 = *(undefined4 *)(pFVar38 + lVar46 * 4);
              *(undefined4 *)(pFVar38 + lVar46 * 4) = *(undefined4 *)pFVar32;
              lVar46 = lVar46 + 1;
              *(undefined4 *)pFVar32 = uVar53;
              pFVar32 = pFVar32 + -4;
            } while (lVar46 < iVar21);
          }
          pFVar38 = pTVar44[3].AllocatorInstance.Data;
          local_848 = uVar52;
          if (((pFVar38 <= (FScriptContainerElement *)&local_848) &&
              ((FScriptContainerElement *)&local_848 < pFVar38 + (longlong)pTVar44[3].ArrayMax * 4))
             && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar18)) {
            pcVar10 = (code *)swi(3);
            uVar17 = (*pcVar10)();
            return (bool)uVar17;
          }
          iVar21 = pTVar44[3].ArrayNum;
          if (iVar21 == pTVar44[3].ArrayMax) {
            iVar21 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar44[3].AllocatorInstance,&pTVar44[3].ArrayMax);
          }
          pTVar44[3].ArrayNum = iVar21 + 1;
          *(undefined4 *)(pTVar44[3].AllocatorInstance.Data + (longlong)iVar21 * 4) = local_848;
          uVar37 = 0;
          if ((int)uVar36 < local_830.ArrayNum) {
            uVar37 = ~uVar36 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            uVar17 = (*pcVar10)();
            return (bool)uVar17;
          }
          pFVar38 = local_830.AllocatorInstance.Data + lVar40;
          if ((*(int *)(pFVar38 + 8) < 1) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            uVar17 = (*pcVar10)();
            return (bool)uVar17;
          }
                    /* WARNING: Load size is inaccurate */
          iVar21 = *(int *)(pFVar38 + 8) + -1;
          uVar52 = *(undefined4 *)(*pFVar38 + (longlong)*(int *)(pFVar38 + 8) * 4 + -4);
          *(int *)(pFVar38 + 8) = iVar21;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(ForAnyElementType *)pFVar38,iVar21,(int *)(pFVar38 + 0xc));
          uVar37 = 0;
          if ((int)uVar36 < local_830.ArrayNum) {
            uVar37 = ~uVar36 >> 0x1f;
          }
          local_844 = uVar52;
          if (uVar37 == 0) {
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar10 = (code *)swi(3);
              uVar17 = (*pcVar10)();
              return (bool)uVar17;
            }
          }
          lVar46 = *(longlong *)(local_830.AllocatorInstance.Data + lVar40);
          iVar20 = *(int *)(local_830.AllocatorInstance.Data + lVar40 + 8) / 2;
          iVar21 = local_830.ArrayNum;
          if (0 < iVar20) {
            puVar33 = (undefined4 *)
                      (lVar46 + (longlong)
                                (*(int *)(local_830.AllocatorInstance.Data + lVar40 + 8) + -1) * 4);
            do {
              uVar52 = *(undefined4 *)(lVar46 + lVar43 * 4);
              *(undefined4 *)(lVar46 + lVar43 * 4) = *puVar33;
              lVar43 = lVar43 + 1;
              *puVar33 = uVar52;
              puVar33 = puVar33 + -1;
            } while (lVar43 < iVar20);
            iVar21 = local_830.ArrayNum;
          }
          uVar37 = 0;
          if ((int)uVar36 < iVar21) {
            uVar37 = ~uVar36 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            uVar17 = (*pcVar10)();
            return (bool)uVar17;
          }
          pFVar38 = local_830.AllocatorInstance.Data + lVar40;
                    /* WARNING: Load size is inaccurate */
          if (((*pFVar38 <= (FScriptContainerElement *)&local_844) &&
              ((FScriptContainerElement *)&local_844 <
               *pFVar38 + (longlong)*(int *)(pFVar38 + 0xc) * 4)) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
            pcVar10 = (code *)swi(3);
            uVar17 = (*pcVar10)();
            return (bool)uVar17;
          }
          iVar21 = *(int *)(pFVar38 + 8);
          if (iVar21 == *(int *)(pFVar38 + 0xc)) {
            iVar21 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar38,(int *)(pFVar38 + 0xc));
          }
          *(int *)(pFVar38 + 8) = iVar21 + 1;
                    /* WARNING: Load size is inaccurate */
          *(undefined4 *)(*pFVar38 + (longlong)iVar21 * 4) = local_844;
        }
        pFVar32 = pTVar44[2].AllocatorInstance.Data;
        iVar21 = pTVar44[2].ArrayNum;
        pFVar38 = pFVar32 + (longlong)iVar21 * 4;
        while( true ) {
          if (pTVar44[2].ArrayNum != iVar21) {
            local_85f[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_85f);
          }
          if (pFVar32 == pFVar38) break;
          local_840[0] = TIndexMap<int>::GetTo(&local_328.VertexMap,*(int *)pFVar32);
          pFVar8 = (pTVar44->AllocatorInstance).Data;
          if (((pFVar8 <= (FScriptContainerElement *)local_840) &&
              ((FScriptContainerElement *)local_840 < pFVar8 + (longlong)pTVar44->ArrayMax * 4)) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
            pcVar10 = (code *)swi(3);
            uVar17 = (*pcVar10)();
            return (bool)uVar17;
          }
          iVar20 = pTVar44->ArrayNum;
          if (iVar20 == pTVar44->ArrayMax) {
            iVar20 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pTVar44,&pTVar44->ArrayMax);
          }
          pFVar32 = pFVar32 + 4;
          pTVar44->ArrayNum = iVar20 + 1;
          *(int *)((pTVar44->AllocatorInstance).Data + (longlong)iVar20 * 4) = local_840[0];
        }
        FEdgeLoop::VertexLoopToEdgeLoop(this->Mesh,pTVar44,pTVar44 + 1);
        local_7c8 = lVar40 + 0x10;
        local_7c0 = local_7c0 + 1;
        local_790 = local_790 + 0x40;
        local_7e0 = local_7e0 + 0x48;
        uVar36 = uVar36 + 1;
      } while ((int)uVar36 < local_578.Loops.ArrayNum);
    }
    FMeshIndexMappings::~FMeshIndexMappings(&local_328);
LAB_14c7e0868:
    uVar36 = 0;
    iVar21 = local_858.ArrayNum;
    local_808.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_808.ArrayNum = 0;
    local_808.ArrayMax = 0;
    if (local_858.ArrayNum < 1) {
      if (local_858.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(local_858._8_8_ & 0xffffffff);
      }
    }
    else {
      iVar20 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,local_858.ArrayNum,&local_808.AllocatorInstance,&local_808.ArrayNum
                          ,&local_808.ArrayMax);
      memset(local_808.AllocatorInstance.Data + (longlong)iVar20 * 0x10,0,(longlong)iVar21 << 4);
    }
    if (local_858.ArrayNum < 1) {
LAB_14c7e0a4b:
      pFVar34 = local_7e8;
      uVar45 = 0;
      local_388 = this->Mesh;
      local_380.Elements._0_8_ = 0;
      iVar21 = (local_7e8->OffsetTids).ArrayNum;
      pFVar38 = (local_7e8->OffsetTids).AllocatorInstance.Data;
      local_380.Elements._8_8_ = 0;
      local_380.Elements._32_8_ = 0;
      local_380.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_380.Elements._48_8_ = _UNK_150631d98;
      local_380.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_380.HashSize = 0;
      if ((iVar21 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar16)) {
        pcVar10 = (code *)swi(3);
        uVar17 = (*pcVar10)();
        return (bool)uVar17;
      }
      pFVar32 = pFVar38 + (longlong)iVar21 * 4;
      for (; pFVar38 != pFVar32; pFVar38 = pFVar38 + 4) {
        uVar50 = (ulonglong)(*(uint *)pFVar38 & 0x1ff);
        lVar43 = *(longlong *)
                  ((local_388->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)(*(uint *)pFVar38 >> 9) * 8);
        local_7e0 = *(longlong *)(lVar43 + uVar50 * 0xc);
        uVar52 = *(undefined4 *)(lVar43 + 8 + uVar50 * 0xc);
        local_7b0[0] = (undefined4)local_7e0;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_380,(int *)((longlong)&local_678.Value + 4),(bool *)local_7b0);
        local_7a8[0] = local_7e0._4_4_;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_380,&local_668,(bool *)local_7a8);
        local_7a0[0] = uVar52;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_380,&local_664,(bool *)local_7a0);
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_380,&local_818);
      EVar6 = this->ExtrusionVectorType;
      local_7f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7f8.ArrayNum = 0;
      local_7f8.ArrayMax = 0;
      uVar36 = 0;
      if ((EVar6 == SelectionTriNormalsAngleWeightedAverage) ||
         (EVar6 == SelectionTriNormalsAngleWeightedAdjusted)) {
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&local_7f8,local_818.ArrayNum,Default);
        uVar50 = uVar45;
        uVar39 = uVar45;
        uVar49 = uVar45;
        if (0 < local_818.ArrayNum) {
          do {
            uVar41 = (uint)uVar39;
            uVar37 = ~uVar41 >> 0x1f;
            if (this->ExtrusionVectorType == SelectionTriNormalsAngleWeightedAdjusted) {
              dVar5 = this->MaxScaleForAdjustingTriNormalsOffset;
              uVar22 = uVar36;
              if ((int)uVar41 < local_818.ArrayNum) {
                uVar22 = uVar37;
              }
              if ((uVar22 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar10 = (code *)swi(3);
                uVar17 = (*pcVar10)();
                return (bool)uVar17;
              }
              pTVar26 = OffsetMeshRegionLocals::
                        GetAngleWeightedAdjustedNormal<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                                  (&local_460,this->Mesh,
                                   *(int *)(local_818.AllocatorInstance.Data + uVar50),
                                   (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                                   local_428,dVar5);
            }
            else {
              uVar22 = uVar36;
              if ((int)uVar41 < local_818.ArrayNum) {
                uVar22 = uVar37;
              }
              if ((uVar22 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar10 = (code *)swi(3);
                uVar17 = (*pcVar10)();
                return (bool)uVar17;
              }
              pTVar26 = OffsetMeshRegionLocals::
                        GetAngleWeightedAverageNormal<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                                  (&local_448,this->Mesh,
                                   *(int *)(local_818.AllocatorInstance.Data + uVar50),
                                   (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                                   local_428);
            }
            dVar11 = (pTVar26->field0_0x0)._s_0.X;
            dVar12 = (pTVar26->field0_0x0)._s_0.Y;
            dVar5 = (pTVar26->field0_0x0)._s_0.Z;
            if (((uVar37 & (int)uVar41 < local_7f8.ArrayNum) == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar10 = (code *)swi(3);
              uVar17 = (*pcVar10)();
              return (bool)uVar17;
            }
            *(double *)(local_7f8.AllocatorInstance.Data + uVar49) = dVar11;
            *(double *)(local_7f8.AllocatorInstance.Data + uVar49 + 8) = dVar12;
            *(double *)(local_7f8.AllocatorInstance.Data + uVar49 + 0x10) = dVar5;
            uVar50 = uVar50 + 4;
            uVar39 = (ulonglong)(uVar41 + 1);
            uVar49 = uVar49 + 0x18;
          } while ((int)(uVar41 + 1) < local_818.ArrayNum);
        }
      }
      else if ((EVar6 == VertexNormal) &&
              (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                         (&local_7f8,local_818.ArrayNum,Default), uVar50 = uVar45, uVar39 = uVar45,
              uVar49 = uVar45, 0 < local_818.ArrayNum)) {
        do {
          pFVar7 = this->Mesh;
          uVar37 = (uint)uVar50;
          if ((pFVar7->VertexNormals).bIsSet == false) {
            uVar41 = uVar36;
            if ((int)uVar37 < local_818.ArrayNum) {
              uVar41 = ~uVar37 >> 0x1f;
            }
            if ((uVar41 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar10 = (code *)swi(3);
              uVar17 = (*pcVar10)();
              return (bool)uVar17;
            }
            pTVar25 = &FMeshNormals::ComputeVertexNormal
                                 (&local_478,this->Mesh,
                                  *(int *)(local_818.AllocatorInstance.Data + uVar39),true,true)->
                       field0_0x0;
          }
          else {
            uVar41 = 0;
            if ((int)uVar37 < local_818.ArrayNum) {
              uVar41 = ~uVar37 >> 0x1f;
            }
            if ((uVar41 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar10 = (code *)swi(3);
              uVar17 = (*pcVar10)();
              return (bool)uVar17;
            }
            if ((pFVar7->VertexNormals).bIsSet == false) {
              local_778 = CONCAT44(UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y,
                                   UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X);
              local_770 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
              uVar52 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X;
            }
            else {
              uVar50 = (ulonglong)(*(uint *)(local_818.AllocatorInstance.Data + uVar39) & 0x1ff);
              lVar43 = *(longlong *)
                        ((pFVar7->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                        (ulonglong)(*(uint *)(local_818.AllocatorInstance.Data + uVar39) >> 9) * 8);
              pfVar2 = (float *)(lVar43 + uVar50 * 0xc);
              uVar52 = *pfVar2;
              local_778 = *(undefined8 *)pfVar2;
              local_770 = *(float *)(lVar43 + 8 + uVar50 * 0xc);
            }
            local_5f8._s_0.X = (double)(float)uVar52;
            pTVar25 = &local_5f8;
            local_5f8._s_0.Y = (double)local_778._4_4_;
            local_5f8._s_0.Z = (double)local_770;
          }
          dVar11 = (((TVector<double>_u_0 *)&(pTVar25->_s_0).X)->_s_0).X;
          dVar12 = (pTVar25->_s_0).Y;
          dVar5 = (pTVar25->_s_0).Z;
          uVar41 = uVar36;
          if ((int)uVar37 < local_7f8.ArrayNum) {
            uVar41 = ~uVar37 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar10 = (code *)swi(3);
            uVar17 = (*pcVar10)();
            return (bool)uVar17;
          }
          *(double *)(local_7f8.AllocatorInstance.Data + uVar49) = dVar11;
          *(double *)(local_7f8.AllocatorInstance.Data + uVar49 + 8) = dVar12;
          *(double *)(local_7f8.AllocatorInstance.Data + uVar49 + 0x10) = dVar5;
          uVar50 = (ulonglong)(uVar37 + 1);
          uVar39 = uVar39 + 4;
          uVar49 = uVar49 + 0x18;
        } while ((int)(uVar37 + 1) < local_818.ArrayNum);
      }
      if (0 < local_818.ArrayNum) {
        lVar43 = 0;
        uVar50 = uVar45;
        do {
          uVar37 = (uint)uVar45;
          uVar36 = 0;
          if ((int)uVar37 < local_818.ArrayNum) {
            uVar36 = ~uVar37 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar10 = (code *)swi(3);
            uVar17 = (*pcVar10)();
            return (bool)uVar17;
          }
          uVar36 = *(uint *)(local_818.AllocatorInstance.Data + lVar43);
          lVar40 = *(longlong *)
                    ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar36 >> 9) * 8);
          puVar3 = (undefined8 *)(lVar40 + (ulonglong)(uVar36 & 0x1ff) * 0x18);
          local_5c8 = *puVar3;
          uStack_5c0 = puVar3[1];
          local_5b8 = *(undefined8 *)(lVar40 + 0x10 + (ulonglong)(uVar36 & 0x1ff) * 0x18);
          if (this->ExtrusionVectorType == Zero) {
            uVar52 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar53 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            local_5e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            dStack_5d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          }
          else {
            uVar41 = 0;
            if ((int)uVar37 < local_7f8.ArrayNum) {
              uVar41 = ~uVar37 >> 0x1f;
            }
            if ((uVar41 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar10 = (code *)swi(3);
              uVar17 = (*pcVar10)();
              return (bool)uVar17;
            }
            local_5e0 = *(double *)(local_7f8.AllocatorInstance.Data + uVar50);
            dStack_5d8 = *(double *)(local_7f8.AllocatorInstance.Data + uVar50 + 8);
            uVar52 = (undefined4)*(undefined8 *)(local_7f8.AllocatorInstance.Data + uVar50 + 0x10);
            uVar53 = (undefined4)
                     ((ulonglong)*(undefined8 *)(local_7f8.AllocatorInstance.Data + uVar50 + 0x10)
                     >> 0x20);
          }
          local_5d0 = CONCAT44(uVar53,uVar52);
          local_798 = uVar36;
          Core::Private::Function::CheckCallable(*(void **)&this->OffsetPositionFunc);
          plVar9 = *(longlong **)&(this->OffsetPositionFunc).field_0x28;
          pcVar10 = *(code **)&this->OffsetPositionFunc;
          plVar29 = (longlong *)&(this->OffsetPositionFunc).field_0x10;
          if (plVar9 != (longlong *)0x0) {
            plVar29 = plVar9;
          }
          uVar27 = (**(code **)(*plVar29 + 8))();
          (*pcVar10)(&local_630,uVar27,&local_5c8,&local_5e0);
          pFVar7 = this->Mesh;
          sVar19 = _dclass(local_630);
          if (((sVar19 < 1) && (sVar19 = _dclass(uStack_628), uVar27 = local_620, sVar19 < 1)) &&
             (sVar19 = _dclass(), sVar19 < 1)) {
            lVar40 = *(longlong *)
                      ((pFVar7->Vertices).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar36 >> 9) * 8);
            puVar3 = (undefined8 *)(lVar40 + (ulonglong)(uVar36 & 0x1ff) * 0x18);
            *puVar3 = local_630;
            puVar3[1] = uStack_628;
            *(undefined8 *)(lVar40 + 0x10 + (ulonglong)(uVar36 & 0x1ff) * 0x18) = uVar27;
            if ((pFVar7->ChangeStampShape).bIsEnabled != false) {
              this_00 = &(pFVar7->ChangeStampShape).Mutex;
              LOCK();
              bVar16 = this_00->State == (atomic<unsigned_char>)0x0;
              if (bVar16) {
                this_00->State = (atomic<unsigned_char>)0x1;
              }
              UNLOCK();
              if (!bVar16) {
                FMutex::LockSlow(this_00);
              }
              puVar31 = &(pFVar7->ChangeStampShape).Value;
              *puVar31 = *puVar31 + 1;
              LOCK();
              aVar4 = this_00->State;
              this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
              UNLOCK();
              if (((byte)aVar4 & 2) != 0) {
                FMutex::WakeWaitingThread(this_00);
              }
            }
          }
          uVar45 = (ulonglong)(uVar37 + 1);
          lVar43 = lVar43 + 4;
          uVar50 = uVar50 + 0x18;
          pFVar34 = local_7e8;
        } while ((int)(uVar37 + 1) < local_818.ArrayNum);
      }
      local_660.CreaseAngleThreshold._0_4_ = SUB84(this->CreaseAngleThresholdDeg,0);
      local_660.CreaseAngleThreshold._4_4_ =
           (undefined4)((ulonglong)this->CreaseAngleThresholdDeg >> 0x20);
      local_660.NumSubdivisions = this->NumSubdivisions;
      uVar13 = this->bGroupPerSubdivision;
      uVar14 = this->bUVIslandPerGroup;
      local_660.bUVIslandPerGroup = (bool)uVar14;
      local_660.bGroupPerSubdivision = (bool)uVar13;
      local_660.SetMaterialID = this->SetMaterialID;
      local_660.bInferMaterialID = this->bInferMaterialID;
      local_660.UVScaleFactor = (double)this->UVScaleFactor;
      local_788.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_788.ArrayNum = 0;
      local_788.ArrayMax = 0;
      local_5a8.NumSubdivisions = this->NumSubdivisions;
      local_5a8._4_4_ = local_660._4_4_;
      local_5a8.bInferMaterialID = this->bInferMaterialID;
      local_5a8._37_3_ = local_660._37_3_;
      local_5a8.SetMaterialID = local_660.SetMaterialID;
      local_5a8.bGroupPerSubdivision = (bool)uVar13;
      local_5a8.bUVIslandPerGroup = (bool)uVar14;
      local_5a8._18_2_ = local_660._18_2_;
      local_5a8._20_4_ = local_660._20_4_;
      local_5a8.UVScaleFactor = local_660.UVScaleFactor;
      local_5a8.CreaseAngleThreshold._0_4_ = local_660.CreaseAngleThreshold._0_4_;
      local_5a8.CreaseAngleThreshold._4_4_ = local_660.CreaseAngleThreshold._4_4_;
      bVar16 = OffsetMeshRegionLocals::StitchRegionBorderLoopPairs_Version1
                         (this->Mesh,&local_858,&local_830,&local_808,&local_5a8,&local_788,
                          &pFVar34->StitchTriangles,&pFVar34->StitchPolygonIDs);
      iVar21 = local_858.ArrayNum;
      lVar43 = (longlong)local_858.ArrayNum;
      TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_>::SetNum
                (&pFVar34->BaseLoops,local_858.ArrayNum,Default);
      TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_>::SetNum
                (&pFVar34->OffsetLoops,iVar21,Default);
      uVar36 = 0;
      pFVar47 = pFVar34;
      local_7e0 = lVar43;
      if (0 < iVar21) {
        lVar40 = 0;
        lVar43 = lVar40;
        do {
          uVar41 = ~uVar36 >> 0x1f;
          uVar37 = 0;
          if ((int)uVar36 < local_788.ArrayNum) {
            uVar37 = uVar41;
          }
          if ((uVar37 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            uVar17 = (*pcVar10)();
            return (bool)uVar17;
          }
          if (local_788.AllocatorInstance.Data[lVar40] != (FScriptContainerElement)0x0) {
            uVar37 = 0;
            if ((int)uVar36 < (pFVar34->BaseLoops).ArrayNum) {
              uVar37 = uVar41;
            }
            if ((uVar37 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              uVar17 = (*pcVar10)();
              return (bool)uVar17;
            }
            pFVar51 = (FEdgeLoop *)((pFVar34->BaseLoops).AllocatorInstance.Data + lVar43);
            uVar37 = 0;
            if ((int)uVar36 < local_858.ArrayNum) {
              uVar37 = uVar41;
            }
            if ((uVar37 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              uVar17 = (*pcVar10)();
              return (bool)uVar17;
            }
            pFVar51->Mesh = local_838->Mesh;
            FEdgeLoop::InitializeFromVertices
                      (pFVar51,(TArray<int,TSizedDefaultAllocator<32>_> *)
                               (local_858.AllocatorInstance.Data + (longlong)(int)uVar36 * 0x48),
                       true);
            pFVar47 = local_7e8;
            uVar37 = 0;
            if ((int)uVar36 < (local_7e8->OffsetLoops).ArrayNum) {
              uVar37 = ~uVar36 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              uVar17 = (*pcVar10)();
              return (bool)uVar17;
            }
            pFVar51 = (FEdgeLoop *)((pFVar47->OffsetLoops).AllocatorInstance.Data + lVar43);
            uVar37 = 0;
            if ((int)uVar36 < local_858.ArrayNum) {
              uVar37 = ~uVar36 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              uVar17 = (*pcVar10)();
              return (bool)uVar17;
            }
            pFVar51->Mesh = local_838->Mesh;
            FEdgeLoop::InitializeFromVertices
                      (pFVar51,(TArray<int,TSizedDefaultAllocator<32>_> *)
                               (local_858.AllocatorInstance.Data +
                               (longlong)(int)uVar36 * 0x48 + 0x20),true);
          }
          uVar36 = uVar36 + 1;
          lVar40 = lVar40 + 1;
          lVar43 = lVar43 + 0x40;
          pFVar47 = local_7e8;
        } while (lVar40 < local_7e0);
      }
      if (pFVar47->bIsSolid != false) {
        pFVar34 = (FOffsetInfo *)(local_768 + 0x10);
        if (local_838->bIsPositiveOffset == false) {
          pFVar34 = pFVar47;
        }
        FDynamicMeshEditor::ReverseTriangleOrientations(&local_7d0,&pFVar34->OffsetTids,true);
      }
      if (((local_838->bSingleGroupPerArea != false) &&
          ((local_838->Mesh->TriangleGroups).bIsSet != false)) &&
         (1 < (pFVar47->OffsetGroups).ArrayNum)) {
        pFVar32 = (pFVar47->OffsetTids).AllocatorInstance.Data;
        iVar21 = (pFVar47->OffsetTids).ArrayNum;
        iVar20 = *(int *)(pFVar47->OffsetGroups).AllocatorInstance.Data;
        pFVar38 = pFVar32 + (longlong)iVar21 * 4;
        pFVar35 = local_838;
        while( true ) {
          if ((pFVar47->OffsetTids).ArrayNum != iVar21) {
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_820);
            pFVar35 = local_838;
          }
          if (pFVar32 == pFVar38) break;
          pFVar7 = pFVar35->Mesh;
          if ((pFVar7->TriangleGroups).bIsSet != false) {
            *(int *)(*(longlong *)
                      ((pFVar7->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                      (ulonglong)(*(uint *)pFVar32 >> 9) * 8) +
                    (ulonglong)(*(uint *)pFVar32 & 0x1ff) * 4) = iVar20;
            iVar28 = iVar20 + 1;
            if (iVar28 < pFVar7->GroupIDCounter) {
              iVar28 = pFVar7->GroupIDCounter;
            }
            pFVar7->GroupIDCounter = iVar28;
            pFVar35 = local_838;
          }
          pFVar32 = pFVar32 + 4;
        }
        TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&pFVar47->OffsetGroups,1,Default);
      }
      if (local_788.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_788.AllocatorInstance.Data);
      }
      if (local_7f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7f8.AllocatorInstance.Data);
      }
      if (local_818.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_818.AllocatorInstance.Data);
      }
      local_380.HashSize = 0;
      if (local_380.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_380.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_380.Elements);
    }
    else {
      do {
        if (bVar16 == false) {
LAB_14c7e0a2c:
          bVar16 = false;
        }
        else {
          uVar41 = ~uVar36 >> 0x1f;
          uVar37 = 0;
          if ((int)uVar36 < local_808.ArrayNum) {
            uVar37 = uVar41;
          }
          if ((uVar37 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar10 = (code *)swi(3);
            uVar17 = (*pcVar10)();
            return (bool)uVar17;
          }
          lVar43 = (longlong)(int)uVar36;
          pTVar48 = (TArray<UE::Geometry::FMeshTriOrderedEdgeID,TSizedDefaultAllocator<32>_> *)
                    (local_808.AllocatorInstance.Data + lVar43 * 0x10);
          uVar37 = 0;
          if ((int)uVar36 < local_858.ArrayNum) {
            uVar37 = uVar41;
          }
          if ((uVar37 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar10 = (code *)swi(3);
            uVar17 = (*pcVar10)();
            return (bool)uVar17;
          }
          FVar15.Data = local_858.AllocatorInstance.Data;
          uVar37 = 0;
          if ((int)uVar36 < local_858.ArrayNum) {
            uVar37 = uVar41;
          }
          if ((uVar37 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar10 = (code *)swi(3);
            uVar17 = (*pcVar10)();
            return (bool)uVar17;
          }
          bVar16 = ConvertLoopToTriOrderedEdgeLoop
                             (this->Mesh,
                              (TArray<int,TSizedDefaultAllocator<32>_> *)
                              (local_858.AllocatorInstance.Data + lVar43 * 0x48 + 0x20),
                              (TArray<int,TSizedDefaultAllocator<32>_> *)
                              (FVar15.Data + lVar43 * 0x48 + 0x30),pTVar48);
          if (!bVar16) goto LAB_14c7e0a2c;
          bVar16 = true;
        }
        uVar36 = uVar36 + 1;
      } while ((int)uVar36 < local_858.ArrayNum);
      if (bVar16 != false) goto LAB_14c7e0a4b;
      bVar16 = false;
    }
    DestructItems<TArray<UE::Geometry::FMeshTriOrderedEdgeID,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Geometry::FMeshTriOrderedEdgeID,TSizedDefaultAllocator<32>_> *)
               local_808.AllocatorInstance.Data,local_808.ArrayNum);
    if ((TArray<UE::Geometry::FMeshTriOrderedEdgeID,TSizedDefaultAllocator<32>_> *)
        local_808.AllocatorInstance.Data !=
        (TArray<UE::Geometry::FMeshTriOrderedEdgeID,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_808.AllocatorInstance.Data);
    }
  }
  if (local_708.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_708.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_718.Data,(int)local_710);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_718.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_718.Data);
  }
  if (local_728.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_728.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_738.Data,(int)local_730);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_738.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_738.Data);
  }
  if (local_748.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_748.Data);
  }
  if ((FScriptContainerElement *)local_768._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_768._16_8_);
  }
  if ((FScriptContainerElement *)local_768._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_768._0_8_);
  }
  DestructItems<UE::Geometry::FDynamicMeshEditor::FLoopPairSet,int>
            ((FLoopPairSet *)local_858.AllocatorInstance.Data,local_858.ArrayNum);
  if ((FLoopPairSet *)local_858.AllocatorInstance.Data != (FLoopPairSet *)0x0) {
    FMemory::Free(local_858.AllocatorInstance.Data);
  }
  if (local_6f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6f8.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_830.AllocatorInstance.Data,
             local_830.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_830.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_830.AllocatorInstance.Data);
  }
  local_3e0 = 0;
  if (local_3e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_3e8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_428);
LAB_14c7e16d1:
  FMeshRegionBoundaryLoops::~FMeshRegionBoundaryLoops(&local_578);
  local_3d8.HashSize = 0;
  if (local_3d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_3d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_3d8.Elements);
  if (local_6e8.NewColorOverlayElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.NewColorOverlayElements.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             local_6e8.NewNormalOverlayElements.AllocatorInstance.Data,
             local_6e8.NewNormalOverlayElements.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)
      local_6e8.NewNormalOverlayElements.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_6e8.NewNormalOverlayElements.AllocatorInstance.Data);
  }
  if (local_6e8.NewGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.NewGroups.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_6e8.NewPolygons.AllocatorInstance.Data
             ,local_6e8.NewPolygons.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_6e8.NewPolygons.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_6e8.NewPolygons.AllocatorInstance.Data);
  }
  if (local_6e8.NewQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.NewQuads.AllocatorInstance.Data);
  }
  if (local_6e8.NewTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.NewTriangles.AllocatorInstance.Data);
  }
  if (local_6e8.NewVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.NewVertices.AllocatorInstance.Data);
  }
  return bVar16;
}

// EdgesSeparateSameGroupsAndAreColinearAtBorder @ 14c801270

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
UE::Geometry::FOffsetMeshRegion::EdgesSeparateSameGroupsAndAreColinearAtBorder
          (FDynamicMesh3 *param_1,int param_2,int param_3,bool param_4)

{
  longlong lVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if ((param_2 < 0) ||
     (iVar11 = (param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->EdgeRefCounts).RefCounts.CurBlockUsed, iVar11 <= param_2)) {
LAB_14c801420:
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3041417465016878143>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\OffsetMeshRegion.cpp"
                       ,0x43f,"false");
    if (!bVar6) {
      return false;
    }
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar3 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
  lVar1 = (ulonglong)((uint)param_2 >> 9) * 8;
  if ((0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar3 + lVar1) + (ulonglong)(param_2 & 0x1ff) * 2
                                   ) - 1U)) || ((param_3 < 0 || (iVar11 <= param_3))))
  goto LAB_14c801420;
  lVar2 = (ulonglong)((uint)param_3 >> 9) * 8;
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar3 + lVar2) + (ulonglong)(param_3 & 0x1ff) * 2)
                       - 1U)) goto LAB_14c801420;
  iVar9 = -1;
  uVar4 = *(undefined8 *)
           (*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar1) + 8 +
           (ulonglong)(param_2 & 0x1ff) * 0x10);
  iVar8 = -1;
  iVar11 = (int)((ulonglong)uVar4 >> 0x20);
  if (iVar11 != -1) {
    iVar8 = FDynamicMesh3::GetTriangleGroup(param_1,iVar11);
  }
  iVar11 = FDynamicMesh3::GetTriangleGroup(param_1,(int)uVar4);
  uVar4 = *(undefined8 *)
           (*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar2) + 8 +
           (ulonglong)(param_3 & 0x1ff) * 0x10);
  iVar10 = (int)((ulonglong)uVar4 >> 0x20);
  if (iVar10 != -1) {
    iVar9 = FDynamicMesh3::GetTriangleGroup(param_1,iVar10);
  }
  iVar10 = FDynamicMesh3::GetTriangleGroup(param_1,(int)uVar4);
  if (param_4) {
    if (iVar11 != iVar10) goto LAB_14c80140f;
    if ((iVar8 == -1) && (iVar9 == -1)) {
      bVar6 = OffsetMeshRegionLocals::EdgesAreParallel(param_1,param_2,param_3);
      return bVar6;
    }
  }
  else if (iVar11 != iVar10) goto LAB_14c80140f;
  if (iVar8 == iVar9) {
    return true;
  }
LAB_14c80140f:
  if ((iVar11 == iVar9) && (iVar8 == iVar10)) {
    return true;
  }
  return false;
}

// Validate @ 14c851210

EOperationValidationResult __thiscall
UE::Geometry::FOffsetMeshRegion::Validate(FOffsetMeshRegion *this)

{
  return Ok;
}

