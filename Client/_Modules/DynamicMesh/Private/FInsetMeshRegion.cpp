// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 6

// FInsetMeshRegion @ 14c6df330

FInsetMeshRegion * __thiscall
UE::Geometry::FInsetMeshRegion::FInsetMeshRegion(FInsetMeshRegion *this,FDynamicMesh3 *param_1)

{
  this->Mesh = param_1;
  this->_padding_ = (longlong)&___7FInsetMeshRegion_Geometry_UE__6B_;
  (this->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->InsetDistance = 1.0;
  (this->Triangles).ArrayNum = 0;
  (this->Triangles).ArrayMax = 0;
  this->UVScaleFactor = 1.0;
  this->bReproject = true;
  this->bSolveRegionInteriors = true;
  this->Softness = 0.0;
  this->AreaCorrection = 1.0;
  (this->ChangeTracker).Ptr = (FDynamicMeshChangeTracker *)0x0;
  (this->InsetRegions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InsetRegions).ArrayNum = 0;
  (this->InsetRegions).ArrayMax = 0;
  (this->AllModifiedTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllModifiedTriangles).ArrayNum = 0;
  (this->AllModifiedTriangles).ArrayMax = 0;
  return this;
}

// ~FInsetMeshRegion @ 14c6e1580

void __thiscall UE::Geometry::FInsetMeshRegion::~FInsetMeshRegion(FInsetMeshRegion *this)

{
  FScriptContainerElement *pFVar1;
  FDynamicMeshChangeTracker *this_00;
  
  this->_padding_ = (longlong)&___7FInsetMeshRegion_Geometry_UE__6B_;
  pFVar1 = (this->AllModifiedTriangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::FInsetMeshRegion::FInsetInfo,int>
            ((FInsetInfo *)(this->InsetRegions).AllocatorInstance.Data,(this->InsetRegions).ArrayNum
            );
  pFVar1 = (this->InsetRegions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->ChangeTracker).Ptr;
  if (this_00 != (FDynamicMeshChangeTracker *)0x0) {
    FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(this_00);
    ::operator_delete(this_00,0xa8);
  }
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 14c6e6be0

void __thiscall
`UE::Geometry::FInsetMeshRegion::ApplyInset'::__l2::<lambda_1>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  atomic<unsigned_char> *this_00;
  undefined8 *puVar1;
  FMutex FVar2;
  atomic<unsigned_char> aVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  short sVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  FEdgeLoop *this_01;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_58;
  TArray<UE::Geometry::TLine3<double>,TSizedDefaultAllocator<32>_> local_48;
  
  uVar14 = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  UE::Geometry::ComputeInsetLineSegmentsFromEdges
            (*(FDynamicMesh3 **)(*(longlong *)this + 8),param_2,
             *(double *)(*(longlong *)this + 0x20),&local_48);
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  UE::Geometry::SolveInsetVertexPositionsFromInsetLines
            (*(FDynamicMesh3 **)(*(longlong *)this + 8),&local_48,param_1,&local_58,true);
  uVar17 = 0;
  if ((local_58.ArrayNum == param_1->ArrayNum) &&
     (uVar12 = uVar14, uVar18 = uVar14, 0 < param_1->ArrayNum)) {
    do {
      uVar15 = (uint)uVar12;
      lVar5 = *(longlong *)(*(longlong *)this + 8);
      uVar16 = uVar17;
      if ((int)uVar15 < local_58.ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar8.Data = local_58.AllocatorInstance.Data;
      uVar16 = uVar17;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar16 = *(uint *)((param_1->AllocatorInstance).Data + uVar18 * 4);
      sVar10 = _dclass(*(undefined8 *)(FVar8.Data + uVar14));
      if (((sVar10 < 1) && (sVar10 = _dclass(*(undefined8 *)(FVar8.Data + uVar14 + 8)), sVar10 < 1))
         && (sVar10 = _dclass(*(undefined8 *)(FVar8.Data + uVar14 + 0x10)), sVar10 < 1)) {
        uVar7 = *(undefined8 *)(FVar8.Data + uVar14 + 8);
        uVar12 = (ulonglong)(uVar16 & 0x1ff);
        uVar4 = *(undefined8 *)(FVar8.Data + uVar14 + 0x10);
        lVar13 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(uVar16 >> 9) * 8);
        puVar1 = (undefined8 *)(lVar13 + uVar12 * 0x18);
        *puVar1 = *(undefined8 *)(FVar8.Data + uVar14);
        puVar1[1] = uVar7;
        *(undefined8 *)(lVar13 + 0x10 + uVar12 * 0x18) = uVar4;
        if (*(char *)(lVar5 + 0x21c) != '\0') {
          this_00 = (atomic<unsigned_char> *)(lVar5 + 0x21d);
          LOCK();
          FVar2.State = *this_00;
          if (FVar2.State == (atomic<unsigned_char>)0x0) {
            *this_00 = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (FVar2.State != (atomic<unsigned_char>)0x0) {
            UE::FMutex::LockSlow((FMutex *)this_00);
          }
          *(int *)(lVar5 + 0x220) = *(int *)(lVar5 + 0x220) + 1;
          LOCK();
          aVar3 = *this_00;
          *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
          UNLOCK();
          if (((byte)aVar3 & 2) != 0) {
            UE::FMutex::WakeWaitingThread((FMutex *)this_00);
          }
        }
      }
      uVar14 = uVar14 + 0x18;
      uVar12 = (ulonglong)(uVar15 + 1);
      uVar18 = uVar18 + 1;
    } while ((int)(uVar15 + 1) < param_1->ArrayNum);
  }
  lVar5 = *(longlong *)((longlong)this + 8);
  iVar11 = *(int *)(lVar5 + 0x28);
  if (iVar11 == *(int *)(lVar5 + 0x2c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x840,(ForAnyElementType *)(lVar5 + 0x20),(int *)(lVar5 + 0x2c));
  }
  *(int *)(lVar5 + 0x28) = iVar11 + 1;
  lVar5 = *(longlong *)(lVar5 + 0x20);
  lVar13 = (longlong)iVar11 * 0x40;
  *(undefined8 *)(lVar13 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar13 + 0x10 + lVar5) = 0;
  *(undefined8 *)(lVar13 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar13 + 0x20 + lVar5) = 0;
  *(undefined8 *)(lVar13 + 0x28 + lVar5) = 0;
  *(undefined8 *)(lVar13 + 0x30 + lVar5) = 0;
  *(undefined1 *)(lVar13 + 0x38 + lVar5) = 0;
  *(undefined8 *)(lVar13 + lVar5) = 0;
  lVar5 = *(longlong *)((longlong)this + 8);
  uVar16 = *(int *)(lVar5 + 0x28) - 1;
  if ((int)uVar16 < *(int *)(lVar5 + 0x28)) {
    uVar17 = ~uVar16 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_01 = (FEdgeLoop *)
            ((longlong)*(int *)(lVar5 + 0x28) * 0x40 + *(longlong *)(lVar5 + 0x20) + -0x40);
  this_01->Mesh = *(FDynamicMesh3 **)(*(longlong *)this + 8);
  UE::Geometry::FEdgeLoop::InitializeFromVertices(this_01,param_1,true);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// Apply @ 14c709ea0

bool __thiscall UE::Geometry::FInsetMeshRegion::Apply(FInsetMeshRegion *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  FMeshNormals *pFVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined8 *puVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  uint uVar17;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar18;
  undefined8 *puVar19;
  TArray<UE::Geometry::FInsetMeshRegion::FInsetInfo,TSizedDefaultAllocator<32>_> *this_00;
  bool local_res10;
  undefined1 local_res18 [8];
  longlong local_res20;
  FMeshConnectedComponents local_c8;
  longlong local_b0;
  FMeshNormals local_a8;
  FMeshNormals *local_90;
  TArray<UE::Geometry::FInsetMeshRegion::FInsetInfo,TSizedDefaultAllocator<32>_> *local_88;
  TFunction<bool___cdecl(int,int)> local_78;
  
  uVar17 = 0;
  local_a8.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Normals.ArrayNum = 0;
  local_a8.Normals.ArrayMax = 0;
  local_a8.Mesh = (FDynamicMesh3 *)0x0;
  bVar7 = (this->Mesh->VertexNormals).bIsSet;
  if (bVar7 == false) {
    local_a8.Mesh = this->Mesh;
    FMeshNormals::Compute_FaceAvg(&local_a8,true,true);
  }
  local_c8.Mesh = this->Mesh;
  local_c8.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Components.Array.ArrayNum = 0;
  local_c8.Components.Array.ArrayMax = 0;
  local_78._0_8_ = 0;
  local_78._40_8_ = 0;
  FMeshConnectedComponents::FindConnectedTriangles(&local_c8,&this->Triangles,&local_78);
  iVar10 = local_c8.Components.Array.ArrayNum;
  this_00 = &this->InsetRegions;
  iVar13 = (this->InsetRegions).ArrayNum;
  local_res10 = true;
  local_88 = this_00;
  if (iVar13 < local_c8.Components.Array.ArrayNum) {
    iVar13 = local_c8.Components.Array.ArrayNum - iVar13;
    iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x50,8,iVar13,&this_00->AllocatorInstance,&(this->InsetRegions).ArrayNum,
                        &(this->InsetRegions).ArrayMax);
    DefaultConstructItems<UE::Geometry::FInsetMeshRegion::FInsetInfo,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar10 * 0x50,iVar13);
  }
  else {
    if (local_c8.Components.Array.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(local_c8.Components.Array._8_8_ & 0xffffffff);
    }
    if (local_c8.Components.Array.ArrayNum < iVar13) {
      uVar16 = iVar13 - local_c8.Components.Array.ArrayNum;
      if (((int)(local_c8.Components.Array.ArrayNum | uVar16) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      if (uVar16 != 0) {
        TArray<UE::Geometry::FInsetMeshRegion::FInsetInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,iVar10,uVar16);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,&this_00->AllocatorInstance,(this->InsetRegions).ArrayNum,
                   &(this->InsetRegions).ArrayMax);
      }
    }
  }
  piVar12 = &(this->InsetRegions).ArrayNum;
  bVar6 = true;
  if (0 < local_c8.Components.Array.ArrayNum) {
    local_res20 = 0;
    local_b0 = 0;
    local_90 = &local_a8;
    if (bVar7 != false) {
      local_90 = (FMeshNormals *)0x0;
    }
    do {
      pFVar5 = local_90;
      lVar4 = local_b0;
      lVar3 = local_res20;
      uVar16 = 0;
      if ((int)uVar17 < *piVar12) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      pFVar15 = (this_00->AllocatorInstance).Data + lVar4;
      uVar16 = 0;
      if ((int)uVar17 < local_c8.Components.Array.ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      pFVar1 = *(FScriptContainerElement **)
                (local_c8.Components.Array.AllocatorInstance.Data + lVar3 * 8);
      if (pFVar15 != pFVar1) {
        if (*(void **)pFVar15 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar15);
        }
        *(undefined8 *)pFVar15 = *(undefined8 *)pFVar1;
        *(undefined8 *)pFVar1 = 0;
        *(undefined4 *)(pFVar15 + 8) = *(undefined4 *)(pFVar1 + 8);
        *(undefined4 *)(pFVar15 + 0xc) = *(undefined4 *)(pFVar1 + 0xc);
        *(undefined8 *)(pFVar1 + 8) = 0;
      }
      cVar9 = (**(code **)(this->_padding_ + 0x18))(this,pFVar15,pFVar5);
      if (cVar9 == '\0') {
        local_res10 = false;
        local_res20 = lVar3;
      }
      else {
        pTVar18 = &this->AllModifiedTriangles;
        if ((pTVar18 == (TArray<int,TSizedDefaultAllocator<32>_> *)pFVar15) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
        iVar13 = *(int *)(pFVar15 + 8);
        if (iVar13 != 0) {
          iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,iVar13,&pTVar18->AllocatorInstance,
                              &(this->AllModifiedTriangles).ArrayNum,
                              &(this->AllModifiedTriangles).ArrayMax);
          memcpy((pTVar18->AllocatorInstance).Data + (longlong)iVar10 * 4,*(void **)pFVar15,
                 (longlong)iVar13 << 2);
        }
        iVar13 = *(int *)(pFVar15 + 0x38);
        puVar14 = *(undefined8 **)(pFVar15 + 0x30);
        puVar19 = puVar14 + (longlong)iVar13 * 2;
        while( true ) {
          if (*(int *)(pFVar15 + 0x38) != iVar13) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res18);
          }
          this_00 = local_88;
          if (puVar14 == puVar19) break;
          if ((pTVar18 == (TArray<int,TSizedDefaultAllocator<32>_> *)puVar14) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x96e,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          iVar10 = *(int *)(puVar14 + 1);
          if (iVar10 != 0) {
            iVar11 = Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,iVar10,&pTVar18->AllocatorInstance,
                                &(this->AllModifiedTriangles).ArrayNum,
                                &(this->AllModifiedTriangles).ArrayMax);
            memcpy((pTVar18->AllocatorInstance).Data + (longlong)iVar11 * 4,(void *)*puVar14,
                   (longlong)iVar10 << 2);
          }
          puVar14 = puVar14 + 2;
        }
      }
      piVar12 = &this_00->ArrayNum;
      local_b0 = local_b0 + 0x50;
      local_res20 = local_res20 + 1;
      uVar17 = uVar17 + 1;
      bVar6 = local_res10;
    } while ((int)uVar17 < local_c8.Components.Array.ArrayNum);
  }
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
            (&local_c8.Components);
  if (local_a8.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Normals.AllocatorInstance.Data);
  }
  return bVar6;
}

// ApplyInset @ 14c70d1e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FInsetMeshRegion::ApplyInset
          (FInsetMeshRegion *this,FInsetInfo *param_1,FMeshNormals *param_2)

{
  FMutex *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  double *pdVar2;
  undefined8 *puVar3;
  atomic<unsigned_char> aVar4;
  float fVar5;
  int iVar6;
  FDynamicMeshChangeTracker *this_01;
  longlong lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [16];
  FScriptContainerElement *pFVar15;
  double dVar16;
  undefined8 uVar17;
  ForAnyElementType FVar18;
  TArray<UE::Geometry::TDynamicVector<unsigned_short,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  TVar19;
  FDynamicMesh3 *this_02;
  bool bVar20;
  undefined1 uVar21;
  bool bVar22;
  char cVar23;
  short sVar24;
  int iVar25;
  uint uVar26;
  TDynamicVector<int,512> *pTVar27;
  FScriptContainerElement *pFVar28;
  ulonglong uVar29;
  uint *puVar30;
  FEdgeLoop *pFVar31;
  longlong *plVar32;
  uint uVar33;
  ForElementType<FSetElementId> FVar34;
  undefined1 *puVar35;
  uint *puVar36;
  ForAnyElementType FVar37;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar38;
  FDynamicMesh3 *pFVar39;
  longlong lVar40;
  uint uVar41;
  ulonglong uVar42;
  FDynamicMesh3 *pFVar43;
  ulonglong uVar44;
  TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar45;
  uint uVar46;
  int iVar47;
  TArray<TTuple<int,TTuple<signed_char,signed_char>_>,TSizedDefaultAllocator<32>_> *pTVar48;
  FInsetInfo *pFVar49;
  uint uVar50;
  longlong lVar51;
  undefined4 uVar52;
  double dVar53;
  double dVar54;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar55 [16];
  undefined4 uVar60;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  int *piVar61;
  double dVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined4 uVar65;
  undefined4 uVar66;
  double dVar67;
  double dVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  float fVar75;
  undefined1 auStackY_12d8 [32];
  ForAnyElementType local_1280;
  undefined8 local_1278;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1270;
  undefined1 local_1268;
  undefined1 local_1267;
  undefined1 local_1266;
  undefined1 local_1265;
  undefined1 local_1264;
  undefined1 local_1263;
  undefined1 local_1262 [2];
  uint local_1260;
  uint local_125c;
  FInsetInfo *local_1258;
  FDynamicMesh3 *local_1250;
  TArray<UE::Geometry::FDynamicMeshEditor::FLoopPairSet,TSizedDefaultAllocator<32>_> local_1248;
  int local_1238;
  uint local_1234;
  FDynamicMesh3 *local_1230;
  ForAnyElementType local_1228;
  undefined8 local_1220;
  longlong local_1218;
  FDynamicMesh3 *local_1210;
  ForAnyElementType local_1208;
  undefined8 local_1200;
  ForAnyElementType local_11f8;
  int local_11f0;
  int local_11ec;
  TVector<double>_u_0 local_11e8;
  double dStack_11d0;
  undefined1 auStack_11c8 [16];
  double dStack_11b8;
  TVector<float>_u_0 local_11b0;
  FDynamicMeshEditor local_11a0;
  ulonglong local_1198;
  undefined1 local_1190 [16];
  uint local_1180;
  int iStack_117c;
  TTuple<int,int> local_1178;
  longlong local_1170;
  TArray<UE::Geometry::TDynamicVector<unsigned_short,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  local_1168;
  double local_1158;
  ForAnyElementType local_1150;
  undefined8 local_1148;
  undefined1 local_1138 [8];
  ForAnyElementType local_1130;
  ForAnyElementType local_1128;
  undefined8 local_1120;
  undefined1 local_1118 [8];
  ForAnyElementType local_1110;
  ForAnyElementType local_1108;
  undefined8 local_1100;
  ForAnyElementType local_10f8;
  ForAnyElementType local_10f0;
  ForAnyElementType local_10e8;
  undefined8 local_10e0;
  ForAnyElementType local_10d8;
  ForAnyElementType local_10d0;
  TVector2<float>_u_0 local_10c8;
  TArray<int,TSizedDefaultAllocator<32>_> local_10c0;
  undefined1 local_10a8 [8];
  ForAnyElementType local_10a0;
  ForAnyElementType local_1098;
  undefined8 local_1090;
  ForAnyElementType local_1088;
  ForAnyElementType local_1080;
  ForAnyElementType local_1078;
  undefined8 local_1070;
  ForAnyElementType local_1068;
  ForAnyElementType local_1060;
  ForAnyElementType local_1058;
  TDynamicVector<unsigned_short,512> local_1050;
  double local_1038;
  ForAnyElementType FStack_1030;
  double local_1028;
  TVector<double>_u_0 local_1020;
  TVector<double>_u_0 local_1008;
  BaseIterator local_ff0;
  FInsetMeshRegion *local_fe0;
  FInsetInfo *local_fd8;
  undefined1 local_fd0 [8];
  undefined1 local_fc8 [16];
  ForAnyElementType local_fb8;
  double dStack_fb0;
  undefined1 auStack_fa8 [16];
  double dStack_f98;
  int local_f90;
  undefined4 uStack_f8c;
  uint uStack_f88;
  uint uStack_f84;
  FScriptContainerElement *local_f80;
  TQuaternion<double>_u_0 TStack_f78;
  undefined1 local_f58 [16];
  undefined8 local_f48;
  double local_f40;
  double dStack_f38;
  double local_f30;
  undefined1 local_f28 [16];
  double local_f18;
  double local_f08;
  double dStack_f00;
  double local_ef8;
  IndexIterator local_ef0;
  TTuple<int,int> *local_ee0;
  int *local_ed8;
  TVector<double>_u_0 local_ed0;
  TVector<double>_u_0 local_eb8;
  TVector<double>_u_0 local_ea0;
  TVector<double>_u_0 local_e88;
  TVector<double>_u_0 local_e70;
  TQuaternion<double>_u_0 local_e58;
  TQuaternion<double>_u_0 local_e38;
  TVector2<double> local_e18;
  undefined1 local_e08 [8];
  undefined8 local_e00;
  undefined8 uStack_df8;
  undefined8 local_df0;
  TVector<double>_u_0 local_de8;
  undefined1 local_dd0 [8];
  TArrayView<int_const_,int> local_dc8;
  IndexIterator local_db8;
  TVector<double>_u_0 local_da8;
  TVector<double>_u_0 TStack_d90;
  TVector<double>_u_0 local_d78;
  TVector<double>_u_0 local_d58;
  TVector<double>_u_0 TStack_d40;
  TVector<double>_u_0 local_d28;
  double local_d08;
  double dStack_d00;
  double local_cf8;
  double local_cf0;
  double dStack_ce8;
  double local_ce0;
  FMeshRegionBoundaryLoops local_cd8;
  FDynamicMesh3 local_bd8;
  TSet<TTuple<TTuple<int,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>,FDefaultSetAllocator>
  local_9a8;
  undefined8 local_958 [2];
  longlong local_948;
  longlong local_938 [3];
  longlong *local_920;
  undefined1 local_918;
  undefined8 local_908 [2];
  longlong local_8f8;
  longlong local_8e8 [3];
  longlong *local_8d0;
  undefined1 local_8c8;
  TVector<double>_u_0 local_8b8;
  double local_8a0;
  double dStack_898;
  double local_890;
  double dStack_888;
  double local_880;
  double dStack_878;
  double local_870;
  double dStack_868;
  double local_860;
  TArray<UE::Geometry::TDynamicVector<unsigned_short,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  local_840;
  double local_830;
  TVector<double>_u_0 local_828;
  double local_810;
  double dStack_808;
  double local_800;
  double dStack_7f8;
  double local_7f0;
  double dStack_7e8;
  double local_7e0;
  double dStack_7d8;
  double local_7d0;
  undefined1 local_7b0 [16];
  undefined8 local_7a0;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_798;
  undefined1 local_6d8 [720];
  int local_408;
  bool local_3ff;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1e0;
  ForElementType<FSetElementId> local_1a0;
  int local_198;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_190;
  ForElementType<FSetElementId> local_150;
  int local_148;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_140;
  ForElementType<FSetElementId> local_100;
  int local_f8;
  bool local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_12d8;
  this_01 = (this->ChangeTracker).Ptr;
  uVar46 = 0;
  local_1258 = param_1;
  if (this_01 != (FDynamicMeshChangeTracker *)0x0) {
    local_10c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_10c0,(int *)(param_1->InitialTriangles).AllocatorInstance.Data,
               (param_1->InitialTriangles).ArrayNum,0);
    iVar47 = local_10c0.ArrayNum;
    pFVar28 = local_10c0.AllocatorInstance.Data + (longlong)iVar47 * 4;
    FVar37.Data = local_10c0.AllocatorInstance.Data;
    while( true ) {
      if (local_10c0.ArrayNum != iVar47) {
        local_1268 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_1268);
      }
      if (FVar37.Data == pFVar28) break;
      FDynamicMeshChangeTracker::SaveTriangle(this_01,*(int *)FVar37.Data,true);
      FVar37.Data = FVar37.Data + 4;
    }
    if (local_10c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10c0.AllocatorInstance.Data);
    }
  }
  local_11a0.Mesh = this->Mesh;
  local_1248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1248.ArrayNum = 0;
  local_1248.ArrayMax = 0;
  bVar20 = FDynamicMeshEditor::DisconnectTriangles
                     (&local_11a0,&param_1->InitialTriangles,&local_1248,true);
  if (!bVar20) {
    bVar20 = false;
    goto LAB_14c70fdf3;
  }
  iVar47 = local_1248.ArrayNum;
  uVar29 = local_1248._8_8_ & 0xffffffff;
  local_11f8.Data = (FScriptContainerElement *)0x0;
  local_11f0 = 0;
  local_11ec = 0;
  if (local_1248.ArrayNum < 1) {
    if (local_1248.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar29);
    }
  }
  else {
    iVar25 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,local_1248.ArrayNum,&local_11f8,&local_11f0,&local_11ec);
    memset(local_11f8.Data + (longlong)iVar25 * 0x10,0,(longlong)iVar47 << 4);
    uVar29 = local_1248._8_8_ & 0xffffffff;
  }
  if (0 < (int)uVar29) {
    do {
      uVar41 = ~uVar46 >> 0x1f;
      uVar50 = 0;
      if ((int)uVar46 < local_11f0) {
        uVar50 = uVar41;
      }
      iVar47 = (int)uVar29;
      if (uVar50 == 0) {
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar20) {
          pcVar8 = (code *)swi(3);
          uVar21 = (*pcVar8)();
          return (bool)uVar21;
        }
        iVar47 = local_1248.ArrayNum;
      }
      lVar51 = (longlong)(int)uVar46;
      pTVar48 = (TArray<TTuple<int,TTuple<signed_char,signed_char>_>,TSizedDefaultAllocator<32>_> *)
                (local_11f8.Data + lVar51 * 0x10);
      uVar50 = 0;
      if ((int)uVar46 < iVar47) {
        uVar50 = uVar41;
      }
      if (uVar50 == 0) {
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar20) {
          pcVar8 = (code *)swi(3);
          uVar21 = (*pcVar8)();
          return (bool)uVar21;
        }
        iVar47 = local_1248.ArrayNum;
      }
      local_1250 = (FDynamicMesh3 *)(local_1248.AllocatorInstance.Data + lVar51 * 0x48 + 0x30);
      uVar50 = 0;
      if ((int)uVar46 < iVar47) {
        uVar50 = uVar41;
      }
      if ((uVar50 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        uVar21 = (*pcVar8)();
        return (bool)uVar21;
      }
      FDynamicMeshEditor::ConvertLoopToTriVidPairSequence
                (this->Mesh,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)
                 (local_1248.AllocatorInstance.Data + lVar51 * 0x48 + 0x20),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)local_1250,pTVar48);
      uVar29 = local_1248._8_8_ & 0xffffffff;
      uVar46 = uVar46 + 1;
      param_1 = local_1258;
    } while ((int)uVar46 < local_1248.ArrayNum);
  }
  local_10a8 = (undefined1  [8])0x0;
  local_10a0.Data = (FScriptContainerElement *)0x0;
  local_1098.Data = (FScriptContainerElement *)0x0;
  local_1090._0_4_ = 0;
  local_1090._4_4_ = 0;
  local_1088.Data = (FScriptContainerElement *)0x0;
  local_1080.Data = (FScriptContainerElement *)0x0;
  local_1078.Data = (FScriptContainerElement *)0x0;
  local_1070._0_4_ = 0;
  local_1070._4_4_ = 0;
  local_1068.Data = (FScriptContainerElement *)0x0;
  local_1060.Data = (FScriptContainerElement *)0x0;
  local_1058.Data = (FScriptContainerElement *)0x0;
  local_1050.CurBlock = 0;
  local_1050.CurBlockUsed = 0;
  local_1050.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1050.Blocks.ArrayNum = 0;
  local_1050.Blocks.ArrayMax = 0;
  FDynamicMeshEditor::SplitBowtiesAtTriangles
            (&local_11a0,&param_1->InitialTriangles,(FDynamicMeshEditResult *)local_10a8);
  local_6d8._0_8_ = this->Mesh;
  FDynamicMesh3::FDynamicMesh3(&((FDynamicSubmesh3 *)local_6d8)->Submesh);
  FMeshIndexMappings::FMeshIndexMappings(&((FDynamicSubmesh3 *)local_6d8)->Mappings);
  local_1e0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_1e0._48_8_ = _UNK_150631d98;
  local_190._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_190._48_8_ = _UNK_150631d98;
  local_140._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_140._48_8_ = _UNK_150631d98;
  local_1e0._0_8_ = 0;
  local_1e0._8_8_ = 0;
  local_1e0._32_8_ = 0;
  local_1a0 = (ForElementType<FSetElementId>)0x0;
  local_198 = 0;
  local_190._0_8_ = 0;
  local_190._8_8_ = 0;
  local_190._32_8_ = 0;
  local_150 = (ForElementType<FSetElementId>)0x0;
  local_148 = 0;
  local_140._0_8_ = 0;
  local_140._8_8_ = 0;
  local_140._32_8_ = 0;
  local_100 = (ForElementType<FSetElementId>)0x0;
  local_f8 = 0;
  local_f0 = true;
  TArrayView<int_const_,int>::
  TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_>
            (&local_dc8,&param_1->InitialTriangles);
  FDynamicSubmesh3::Compute((FDynamicSubmesh3 *)local_6d8,&local_dc8,0,false);
  bVar20 = false;
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_ff0,
             (FRefCountVector *)((longlong)&((FDynamicSubmesh3 *)local_6d8)->Submesh + 0x20),0,
             local_6d8._40_4_ * 0x200 + local_6d8._44_4_);
  iVar47 = local_6d8._40_4_ * 0x200 + local_6d8._44_4_;
  FRefCountVector::IndexIterator::IndexIterator
            (&local_db8,
             (FRefCountVector *)((longlong)&((FDynamicSubmesh3 *)local_6d8)->Submesh + 0x20),iVar47,
             iVar47);
  iVar47 = local_ff0.Index;
  while (iVar47 != local_db8._8_4_) {
    bVar22 = FDynamicMesh3::IsBoundaryVertex
                       (&((FDynamicSubmesh3 *)local_6d8)->Submesh,local_ff0.Index);
    if (!bVar22) {
      bVar20 = true;
      break;
    }
    FRefCountVector::BaseIterator::goto_next(&local_ff0);
    iVar47 = local_ff0.Index;
  }
  iVar47 = local_1248.ArrayNum;
  iVar25 = (int)local_10a0.Data;
  if (local_1248.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(local_1248._8_8_ & 0xffffffff);
  }
  piVar61 = &(param_1->InsetLoops).ArrayMax;
  pFVar31 = (FEdgeLoop *)(param_1->InsetLoops).AllocatorInstance.Data;
  iVar6 = (param_1->InsetLoops).ArrayNum;
  if (*piVar61 < local_1248.ArrayNum) {
    DestructItems<UE::Geometry::FEdgeLoop,int>(pFVar31,iVar6);
    (param_1->InsetLoops).ArrayNum = 0;
    if (*piVar61 != iVar47) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar47,&(param_1->InsetLoops).AllocatorInstance,0,piVar61);
    }
  }
  else {
    DestructItems<UE::Geometry::FEdgeLoop,int>(pFVar31,iVar6);
    (param_1->InsetLoops).ArrayNum = 0;
  }
  local_fe0 = this;
  local_fd8 = param_1;
  if (iVar25 < 1) {
    iVar47 = local_1248.ArrayNum;
    pTVar38 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_1248.AllocatorInstance.Data + 0x20);
    pTVar1 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_1248.AllocatorInstance.Data + (longlong)local_1248.ArrayNum * 0x48);
    while( true ) {
      if (local_1248.ArrayNum != iVar47) {
        local_1266 = 0;
        `TCheckedPointerIterator<UE::Geometry::FDynamicMeshEditor::FLoopPairSet,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(&local_1266);
      }
      if (pTVar38 + -2 == pTVar1) break;
      `UE::Geometry::FInsetMeshRegion::ApplyInset'::__l2::<lambda_1>::operator()
                (&local_fe0,pTVar38,pTVar38 + 1);
      pTVar38 = (TArray<int,TSizedDefaultAllocator<32>_> *)&pTVar38[4].ArrayNum;
    }
LAB_14c70d798:
    uVar17 = local_1248._8_8_;
    iVar47 = local_1248.ArrayNum;
    pFVar39 = (FDynamicMesh3 *)(longlong)local_1248.ArrayNum;
    TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_>::SetNum
              (&param_1->BaseLoops,local_1248.ArrayNum,Default);
    pFVar43 = (FDynamicMesh3 *)&param_1->StitchTriangles;
    local_1250 = pFVar43;
    TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
               pFVar43,iVar47,Default);
    pFVar49 = local_1258;
    TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_1258->StitchPolygonIDs,iVar47,Default);
    local_1280.Data = (FScriptContainerElement *)0x0;
    local_1278 = 0;
    if (iVar47 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar17 & 0xffffffff);
    }
    if (0 < iVar47) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar47,&local_1280,0,(int *)((longlong)&local_1278 + 4));
    }
    local_1234 = 0;
    local_1230 = pFVar39;
    if (0 < iVar47) {
      local_1218 = 0;
      do {
        lVar51 = local_1218;
        uVar46 = local_1234;
        uVar41 = ~local_1234 >> 0x1f;
        uVar50 = 0;
        if ((int)local_1234 < local_1248.ArrayNum) {
          uVar50 = uVar41;
        }
        if ((uVar50 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar8 = (code *)swi(3);
          uVar21 = (*pcVar8)();
          return (bool)uVar21;
        }
        local_1270 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                     (local_1248.AllocatorInstance.Data + lVar51 * 0x48);
        local_1260 = *(uint *)(local_1248.AllocatorInstance.Data + lVar51 * 0x48 + 8);
        local_1208.Data = (FScriptContainerElement *)0x0;
        local_1200 = 0;
        local_1228.Data = (FScriptContainerElement *)0x0;
        local_1220 = 0;
        local_9a8.Elements._0_8_ = 0;
        local_9a8.Elements._8_8_ = 0;
        local_9a8.Elements._32_8_ = 0;
        local_9a8.Elements._40_4_ = 0;
        local_9a8.Elements._44_4_ = 0x80;
        local_9a8.Elements._48_4_ = 0xffffffff;
        local_9a8.Elements._52_4_ = 0;
        local_9a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_9a8.HashSize = 0;
        if (0 < (int)local_1260) {
          local_1198 = 0;
          local_1170 = lVar51 << 4;
          local_1210 = (FDynamicMesh3 *)0x0;
          uVar50 = 0;
          do {
            pFVar39 = local_1210;
            pFVar43 = this->Mesh;
            uVar26 = 0;
            if ((int)uVar46 < local_11f0) {
              uVar26 = uVar41;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar8 = (code *)swi(3);
              uVar21 = (*pcVar8)();
              return (bool)uVar21;
            }
            FVar37.Data = local_11f8.Data;
            uVar46 = 0;
            if ((int)uVar50 < *(int *)(local_11f8.Data + local_1170 + 8)) {
              uVar46 = ~uVar50 >> 0x1f;
            }
            if ((uVar46 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar8 = (code *)swi(3);
              uVar21 = (*pcVar8)();
              return (bool)uVar21;
            }
            if ((pFVar43->TriangleGroups).bIsSet == false) {
              uVar46 = 0xffffffff;
            }
            else {
              uVar46 = *(uint *)((longlong)pFVar39 + *(longlong *)(FVar37.Data + local_1170));
              bVar22 = FRefCountVector::IsValid(&pFVar43->TriangleRefCounts,uVar46);
              if (bVar22) {
                pTVar27 = TOptional<UE::Geometry::TDynamicVector<int,512>_>::GetValue
                                    (&pFVar43->TriangleGroups);
                uVar46 = *(uint *)(*(longlong *)
                                    ((pTVar27->Blocks).AllocatorInstance.Data +
                                    (ulonglong)(uVar46 >> 9) * 8) + (ulonglong)(uVar46 & 0x1ff) * 4)
                ;
              }
              else {
                uVar46 = 0;
              }
            }
            pFVar43 = this->Mesh;
            local_125c = uVar50 + 1;
            uVar33 = (int)local_125c % (int)local_1260;
            uVar26 = 0;
            if ((int)uVar33 < local_1270->ArrayNum) {
              uVar26 = ~uVar33 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar8 = (code *)swi(3);
              uVar21 = (*pcVar8)();
              return (bool)uVar21;
            }
            iVar47 = *(int *)((local_1270->AllocatorInstance).Data + (longlong)(int)uVar33 * 4);
            uVar26 = 0;
            if ((int)uVar50 < local_1270->ArrayNum) {
              uVar26 = ~uVar50 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar8 = (code *)swi(3);
              uVar21 = (*pcVar8)();
              return (bool)uVar21;
            }
            uVar29 = local_1198;
            uVar26 = FDynamicMesh3::FindEdge
                               (pFVar43,*(int *)((local_1270->AllocatorInstance).Data + local_1198),
                                iVar47);
            uVar50 = uVar46;
            if (-1 < (int)uVar26) {
              pFVar43 = this->Mesh;
              uVar50 = *(uint *)(*(longlong *)
                                  ((pFVar43->Edges).Blocks.AllocatorInstance.Data +
                                  (ulonglong)(uVar26 >> 9) * 8) + 8 +
                                (ulonglong)(uVar26 & 0x1ff) * 0x10);
              if ((pFVar43->TriangleGroups).bIsSet == false) {
                uVar29 = local_1198;
                uVar50 = 0xffffffff;
              }
              else {
                bVar22 = FRefCountVector::IsValid(&pFVar43->TriangleRefCounts,uVar50);
                if (bVar22) {
                  pTVar27 = TOptional<UE::Geometry::TDynamicVector<int,512>_>::GetValue
                                      (&pFVar43->TriangleGroups);
                  uVar29 = local_1198;
                  uVar50 = *(uint *)(*(longlong *)
                                      ((pTVar27->Blocks).AllocatorInstance.Data +
                                      (ulonglong)(uVar50 >> 9) * 8) +
                                    (ulonglong)(uVar50 & 0x1ff) * 4);
                }
                else {
                  uVar29 = local_1198;
                  uVar50 = 0;
                }
              }
            }
            local_1178._0_4_ = uVar46;
            if ((int)uVar50 < (int)uVar46) {
              local_1178._0_4_ = uVar50;
            }
            local_1178._4_4_ = uVar46;
            if ((int)uVar46 < (int)uVar50) {
              local_1178._4_4_ = uVar50;
            }
            if (local_9a8.Elements._8_4_ != local_9a8.Elements._52_4_) {
              FVar34 = (ForElementType<FSetElementId>)&local_9a8.Hash;
              if (local_9a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar34 = local_9a8.Hash.SecondaryData;
              }
              iVar47 = *(int *)((longlong)FVar34 +
                               (ulonglong)
                               (local_9a8.HashSize - 1U &
                               (local_1178._0_4_ * 0x40 + -0x61c88647 + local_1178._4_4_ +
                                ((uint)local_1178._0_4_ >> 2) ^ local_1178._0_4_)) * 4);
              while (iVar47 != -1) {
                lVar51 = (longlong)iVar47;
                if ((*(uint *)(local_9a8.Elements._0_8_ + lVar51 * 0x14) == local_1178._0_4_) &&
                   (*(uint *)(local_9a8.Elements._0_8_ + 4 + lVar51 * 0x14) == local_1178._4_4_)) {
                  if (iVar47 != -1) goto LAB_14c70dd4d;
                  break;
                }
                iVar47 = *(int *)(local_9a8.Elements._0_8_ + 0xc + lVar51 * 0x14);
              }
            }
            local_1238 = this->Mesh->GroupIDCounter;
            this->Mesh->GroupIDCounter = local_1238 + 1;
            if (((local_1208.Data <= (FScriptContainerElement *)&local_1238) &&
                ((FScriptContainerElement *)&local_1238 <
                 local_1208.Data + (longlong)local_1200._4_4_ * 4)) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar22)) {
              pcVar8 = (code *)swi(3);
              uVar21 = (*pcVar8)();
              return (bool)uVar21;
            }
            iVar47 = (int)local_1200;
            if ((int)local_1200 == local_1200._4_4_) {
              iVar47 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_1208,(int *)((longlong)&local_1200 + 4));
            }
            local_1200 = CONCAT44(local_1200._4_4_,iVar47 + 1);
            *(int *)(local_1208.Data + (longlong)iVar47 * 4) = local_1238;
            local_ee0 = &local_1178;
            local_ed8 = &local_1238;
            TSet<TTuple<TTuple<int,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<TTuple<int,int>_const_&,int_const_&>_>
                      (&local_9a8,(TPairInitializer<TTuple<int,int>_const_&,int_const_&> *)local_fd0
                       ,(bool *)&local_ee0);
LAB_14c70dd4d:
            pFVar28 = (FScriptContainerElement *)
                      TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
                      ::FindChecked((TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
                                     *)&local_9a8,&local_1178);
            if (((local_1228.Data <= pFVar28) &&
                (pFVar28 < local_1228.Data + (longlong)local_1220._4_4_ * 4)) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar22)) {
              pcVar8 = (code *)swi(3);
              uVar21 = (*pcVar8)();
              return (bool)uVar21;
            }
            iVar47 = (int)local_1220;
            if ((int)local_1220 == local_1220._4_4_) {
              iVar47 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_1228,(int *)((longlong)&local_1220 + 4));
            }
            local_1198 = uVar29 + 4;
            local_1220 = CONCAT44(local_1220._4_4_,iVar47 + 1);
            local_1210 = (FDynamicMesh3 *)((longlong)local_1210 + 8);
            *(int *)(local_1228.Data + (longlong)iVar47 * 4) = *(int *)pFVar28;
            lVar51 = local_1218;
            pFVar43 = local_1250;
            uVar46 = local_1234;
            uVar50 = local_125c;
          } while ((int)local_125c < (int)local_1260);
        }
        pTVar38 = local_1270;
        uVar29 = 0;
        local_1138 = (undefined1  [8])0x0;
        local_1130.Data = (FScriptContainerElement *)0x0;
        uVar50 = 0;
        if ((int)uVar46 < local_11f0) {
          uVar50 = uVar41;
        }
        local_1128.Data = (FScriptContainerElement *)0x0;
        local_1120._0_4_ = 0;
        local_1120._4_4_ = 0;
        local_1118 = (undefined1  [8])0x0;
        local_1110.Data = (FScriptContainerElement *)0x0;
        local_1108.Data = (FScriptContainerElement *)0x0;
        local_1100._0_4_ = 0;
        local_1100._4_4_ = 0;
        local_10f8.Data = (FScriptContainerElement *)0x0;
        local_10f0.Data = (FScriptContainerElement *)0x0;
        local_10e8.Data = (FScriptContainerElement *)0x0;
        local_10e0._0_4_ = 0;
        local_10e0._4_4_ = 0;
        local_10d8.Data = (FScriptContainerElement *)0x0;
        local_10d0.Data = (FScriptContainerElement *)0x0;
        if ((uVar50 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar8 = (code *)swi(3);
          uVar21 = (*pcVar8)();
          return (bool)uVar21;
        }
        pFVar39 = (FDynamicMesh3 *)(lVar51 * 0x10);
        local_1210 = pFVar39;
        FDynamicMeshEditor::StitchVertexLoopToTriVidPairSequence
                  (&local_11a0,
                   (TArray<TTuple<int,TTuple<signed_char,signed_char>_>,TSizedDefaultAllocator<32>_>
                    *)(local_11f8.Data + (longlong)pFVar39),pTVar38,
                   (FDynamicMeshEditResult *)local_1138);
        lVar51 = (longlong)(int)local_1110.Data;
        uVar42 = uVar29;
        if (0 < lVar51) {
          do {
            pFVar43 = this->Mesh;
            uVar50 = (uint)uVar29;
            uVar26 = ~uVar50 >> 0x1f;
            uVar46 = 0;
            if ((int)uVar50 < (int)local_1220) {
              uVar46 = uVar26;
            }
            if ((uVar46 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar8 = (code *)swi(3);
              uVar21 = (*pcVar8)();
              return (bool)uVar21;
            }
            iVar47 = *(int *)(local_1228.Data + uVar42 * 4);
            uVar46 = 0;
            if ((int)uVar50 < (int)local_1110.Data) {
              uVar46 = uVar26;
            }
            if ((uVar46 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar8 = (code *)swi(3);
              uVar21 = (*pcVar8)();
              return (bool)uVar21;
            }
            if ((pFVar43->TriangleGroups).bIsSet != false) {
              *(int *)(*(longlong *)
                        ((pFVar43->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                        (ulonglong)(*(uint *)((longlong)local_1118 + uVar42 * 8) >> 9) * 8) +
                      (ulonglong)(*(uint *)((longlong)local_1118 + uVar42 * 8) & 0x1ff) * 4) =
                   iVar47;
              iVar47 = iVar47 + 1;
              if (iVar47 < pFVar43->GroupIDCounter) {
                iVar47 = pFVar43->GroupIDCounter;
              }
              pFVar43->GroupIDCounter = iVar47;
            }
            pFVar43 = this->Mesh;
            uVar46 = 0;
            if ((int)uVar50 < (int)local_1220) {
              uVar46 = uVar26;
            }
            if ((uVar46 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar8 = (code *)swi(3);
              uVar21 = (*pcVar8)();
              return (bool)uVar21;
            }
            iVar47 = *(int *)(local_1228.Data + uVar42 * 4);
            uVar46 = 0;
            if ((int)uVar50 < (int)local_1110.Data) {
              uVar46 = uVar26;
            }
            if ((uVar46 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar8 = (code *)swi(3);
              uVar21 = (*pcVar8)();
              return (bool)uVar21;
            }
            if ((pFVar43->TriangleGroups).bIsSet != false) {
              *(int *)(*(longlong *)
                        ((pFVar43->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                        (ulonglong)(*(uint *)((longlong)local_1118 + uVar42 * 8 + 4) >> 9) * 8) +
                      (ulonglong)(*(uint *)((longlong)local_1118 + uVar42 * 8 + 4) & 0x1ff) * 4) =
                   iVar47;
              iVar47 = iVar47 + 1;
              if (iVar47 < pFVar43->GroupIDCounter) {
                iVar47 = pFVar43->GroupIDCounter;
              }
              pFVar43->GroupIDCounter = iVar47;
            }
            uVar29 = (ulonglong)(uVar50 + 1);
            uVar42 = uVar42 + 1;
            pFVar39 = local_1210;
            pFVar43 = local_1250;
            pTVar38 = local_1270;
          } while ((longlong)uVar42 < lVar51);
        }
        lVar51 = local_1218;
        uVar46 = local_1234;
        uVar50 = 0;
        if ((int)local_1234 < (int)(pFVar43->Vertices).CurBlock) {
          uVar50 = uVar41;
        }
        if ((uVar50 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar8 = (code *)swi(3);
          uVar21 = (*pcVar8)();
          return (bool)uVar21;
        }
        FDynamicMeshEditResult::GetAllTriangles
                  ((FDynamicMeshEditResult *)local_1138,
                   (TArray<int,TSizedDefaultAllocator<32>_> *)
                   (((ForAnyElementType *)&pFVar43->_padding_)->Data +
                   (longlong)&((ForAnyElementType *)&pFVar39->_padding_)->Data));
        pFVar49 = local_1258;
        uVar50 = 0;
        if ((int)uVar46 < (local_1258->StitchPolygonIDs).ArrayNum) {
          uVar50 = uVar41;
        }
        if ((uVar50 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar8 = (code *)swi(3);
          uVar21 = (*pcVar8)();
          return (bool)uVar21;
        }
        FVar37.Data = local_1208.Data;
        pFVar28 = (pFVar49->StitchPolygonIDs).AllocatorInstance.Data + lVar51 * 0x10;
        if (pFVar28 != (FScriptContainerElement *)&local_1208) {
          iVar25 = (int)local_1200;
          lVar40 = (longlong)(int)local_1200;
          pFVar15 = pFVar28 + 0xc;
          iVar47 = *(int *)pFVar15;
          *(int *)&pFVar28[8].field_0x0 = (int)local_1200;
          if (((int)local_1200 == 0) && (iVar47 == 0)) {
            *(int *)pFVar15 = 0;
            lVar51 = local_1218;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(int)local_1200,iVar47,(ForAnyElementType *)pFVar28,(int)local_1200,
                       (int *)pFVar15);
            lVar51 = local_1218;
            if (iVar25 != 0) {
              memcpy(*(void **)&pFVar28->field_0x0,FVar37.Data,lVar40 << 2);
              lVar51 = local_1218;
            }
          }
        }
        if (((local_1280.Data <=
              (TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *)local_1118) &&
            ((FScriptContainerElement *)local_1118 <
             local_1280.Data + (longlong)local_1278._4_4_ * 0x10)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar8 = (code *)swi(3);
          uVar21 = (*pcVar8)();
          return (bool)uVar21;
        }
        iVar47 = (int)local_1278;
        if ((int)local_1278 == local_1278._4_4_) {
          iVar47 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_1280,(int *)((longlong)&local_1278 + 4));
        }
        uVar46 = local_1234;
        pFVar49 = local_1258;
        local_1278 = CONCAT44(local_1278._4_4_,iVar47 + 1);
        lVar40 = (longlong)iVar47;
        *(undefined8 *)&local_1280.Data[lVar40 * 0x10].field_0x0 = 0;
        *(undefined1 (*) [8])&local_1280.Data[lVar40 * 0x10].field_0x0 = local_1118;
        local_1118 = (undefined1  [8])0x0;
        *(int *)(local_1280.Data + lVar40 * 0x10 + 8) = (int)local_1110.Data;
        *(int *)(local_1280.Data + lVar40 * 0x10 + 0xc) = local_1110.Data._4_4_;
        local_1110.Data = (FScriptContainerElement *)0x0;
        uVar50 = 0;
        if ((int)local_1234 < (local_1258->BaseLoops).ArrayNum) {
          uVar50 = uVar41;
        }
        if ((uVar50 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar8 = (code *)swi(3);
          uVar21 = (*pcVar8)();
          return (bool)uVar21;
        }
        pFVar31 = (FEdgeLoop *)((pFVar49->BaseLoops).AllocatorInstance.Data + lVar51 * 0x40);
        pFVar31->Mesh = this->Mesh;
        FEdgeLoop::InitializeFromVertices(pFVar31,pTVar38,true);
        if (local_10d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_10d8.Data);
        }
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)local_10e8.Data,(int)local_10e0);
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_10e8.Data !=
            (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_10e8.Data);
        }
        if (local_10f8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_10f8.Data);
        }
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1108.Data,(int)local_1100);
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1108.Data !=
            (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_1108.Data);
        }
        if (local_1118 != (undefined1  [8])0x0) {
          FMemory::Free((void *)local_1118);
        }
        if (local_1128.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1128.Data);
        }
        if (local_1138 != (undefined1  [8])0x0) {
          FMemory::Free((void *)local_1138);
        }
        local_9a8.HashSize = 0;
        if (local_9a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_9a8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_9a8.Elements);
        if (local_1228.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1228.Data);
        }
        if (local_1208.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1208.Data);
        }
        local_1234 = uVar46 + 1;
        local_1218 = lVar51 + 1;
        pFVar49 = local_1258;
      } while (local_1218 < (longlong)local_1230);
    }
    dVar16 = __real_3ff0000000000000;
    if (((bVar20) || (0.0 < this->Softness)) && (this->bSolveRegionInteriors != false)) {
      fVar75 = this->Softness;
      bVar20 = this->bReproject;
      FDynamicMesh3::FDynamicMesh3(&local_bd8,&((FDynamicSubmesh3 *)local_6d8)->Submesh);
      TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
                (&local_798,&local_bd8,this->bReproject);
      uVar17 = __real_7fefffffffffffff;
      if (bVar20 != false) {
        local_1260 = (pFVar49->InsetLoops).ArrayNum;
        uVar29 = (ulonglong)(int)local_1260;
        pFVar43 = (FDynamicMesh3 *)(pFVar49->InsetLoops).AllocatorInstance.Data;
        local_1210 = (FDynamicMesh3 *)((ForAnyElementType *)&pFVar43->_padding_ + uVar29 * 8);
        pTVar45 = &(pFVar43->Vertices).Blocks;
        while( true ) {
          pFVar39 = local_1210;
          local_1250 = pFVar43;
          if ((pFVar49->InsetLoops).ArrayNum != (int)uVar29) {
            local_1265 = 0;
            `TCheckedPointerIterator<UE::Geometry::FEdgeLoop,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_1265);
          }
          if (pFVar43 == pFVar39) break;
          local_125c = *(uint *)&(pTVar45->AllocatorInstance).Data;
          uVar29 = (ulonglong)(int)local_125c;
          pFVar43 = *(FDynamicMesh3 **)((longlong)(pTVar45 + -1) + 8);
          local_1230 = (FDynamicMesh3 *)
                       ((longlong)&((ForAnyElementType *)&pFVar43->_padding_)->Data + uVar29 * 4);
          while( true ) {
            pFVar39 = local_1230;
            if (*(int *)&(pTVar45->AllocatorInstance).Data != (int)uVar29) {
              local_1264 = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_1264);
            }
            if (pFVar43 == pFVar39) break;
            uVar46 = *(uint *)&((ForAnyElementType *)&pFVar43->_padding_)->Data;
            TIndexMap<int>::GetTo(&(((FDynamicSubmesh3 *)local_6d8)->Mappings).VertexMap,uVar46);
            pFVar39 = this->Mesh;
            local_958[0] = uVar17;
            local_948 = 0;
            local_920 = (longlong *)0x0;
            local_918 = 0;
            lVar51 = *(longlong *)
                      ((pFVar39->Vertices).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar46 >> 9) * 8);
            pdVar2 = (double *)(lVar51 + (ulonglong)(uVar46 & 0x1ff) * 0x18);
            local_1038 = *pdVar2;
            FStack_1030.Data = (FScriptContainerElement *)pdVar2[1];
            local_1028 = *(double *)(lVar51 + 0x10 + (ulonglong)(uVar46 & 0x1ff) * 0x18);
            iVar47 = (**(code **)(local_798._padding_ + 0x20))
                               (&local_798,&local_1038,local_dd0,local_958);
            this_02 = local_798.Mesh;
            dVar53 = local_1038;
            auVar70._8_8_ = FStack_1030.Data;
            auVar70._0_8_ = local_1038;
            if (iVar47 < 0) {
              uVar52 = SUB84(local_1028,0);
              uVar60 = (undefined4)((ulonglong)local_1028 >> 0x20);
            }
            else {
              local_f18 = local_1028;
              local_f28 = auVar70;
              bVar22 = FDynamicMesh3::IsTriangle(local_798.Mesh,iVar47);
              if ((!bVar22) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Mesh.IsTriangle(TriIdx)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                                      ,0x1e,L""), bVar22)) {
                pcVar8 = (code *)swi(3);
                uVar21 = (*pcVar8)();
                return (bool)uVar21;
              }
              FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                        (this_02,iVar47,(TVector<double> *)&local_da8._s_0,
                         (TVector<double> *)&TStack_d90._s_0,(TVector<double> *)&local_d78._s_0);
              local_828._s_0.Y = (double)local_f28._8_8_;
              local_828._16_8_ = local_f18;
              local_810 = local_da8._s_0.X;
              dStack_808 = local_da8._s_0.Y;
              local_800 = local_da8._s_0.Z;
              dStack_7f8 = TStack_d90._s_0.X;
              local_7f0 = TStack_d90._s_0.Y;
              dStack_7e8 = TStack_d90._s_0.Z;
              local_7e0 = local_d78._s_0.X;
              dStack_7d8 = local_d78._s_0.Y;
              local_828._s_0.X = dVar53;
              local_7d0 = local_d78._s_0.Z;
              TDistPoint3Triangle3<double>::ComputeResult
                        ((TDistPoint3Triangle3<double> *)&local_828._s_0);
              uVar52 = (undefined4)local_7a0;
              uVar60 = (undefined4)((ulonglong)local_7a0 >> 0x20);
              auVar70 = local_7b0;
            }
            local_f48 = CONCAT44(uVar60,uVar52);
            local_f58 = auVar70;
            sVar24 = _dclass();
            if (((sVar24 < 1) &&
                (auVar12._4_8_ = extraout_XMM0_Qb, auVar12._0_4_ = auVar70._4_4_,
                auVar59._0_8_ = auVar12._0_8_ << 0x20, auVar59._8_4_ = auVar70._8_4_,
                auVar59._12_4_ = auVar70._12_4_, sVar24 = _dclass(auVar59._8_8_), sVar24 < 1)) &&
               (sVar24 = _dclass(local_f48), sVar24 < 1)) {
              lVar51 = *(longlong *)
                        ((pFVar39->Vertices).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar46 >> 9) * 8);
              *(undefined1 (*) [16])(lVar51 + (ulonglong)(uVar46 & 0x1ff) * 0x18) = auVar70;
              *(ulonglong *)(lVar51 + 0x10 + (ulonglong)(uVar46 & 0x1ff) * 0x18) =
                   CONCAT44(uVar60,uVar52);
              FDynamicMesh3::FChangeStamp::IncrementIfEnabled(&pFVar39->ChangeStampShape);
            }
            if (local_948 != 0) {
              plVar32 = local_938;
              if (local_920 != (longlong *)0x0) {
                plVar32 = local_920;
              }
              (**(code **)(*plVar32 + 0x10))();
            }
            uVar29 = (ulonglong)local_125c;
            pFVar43 = (FDynamicMesh3 *)
                      ((longlong)&((ForAnyElementType *)&pFVar43->_padding_)->Data + 4);
          }
          pFVar43 = (FDynamicMesh3 *)&(local_1250->VertexRefCounts).FreeIndices.Blocks;
          uVar29 = (ulonglong)local_1260;
          pTVar45 = pTVar45 + 4;
          pFVar49 = local_1258;
        }
      }
      uVar46 = 0;
      uVar29 = (ulonglong)(int)local_1278;
      auVar69 = ZEXT816(0);
      local_1198 = uVar29;
      if (0 < (int)local_1278) {
        lVar51 = 0;
        local_1270 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
        do {
          uVar42 = 0;
          uVar50 = ~uVar46 >> 0x1f;
          uVar41 = 0;
          if ((int)uVar46 < (int)uVar29) {
            uVar41 = uVar50;
          }
          local_125c = uVar50;
          if (uVar41 == 0) {
            bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar22) {
              pcVar8 = (code *)swi(3);
              uVar21 = (*pcVar8)();
              return (bool)uVar21;
            }
            uVar29 = local_1278 & 0xffffffff;
          }
          local_1210 = (FDynamicMesh3 *)(longlong)*(int *)(local_1280.Data + lVar51 + 8);
          uVar44 = uVar42;
          if (0 < (longlong)local_1210) {
            do {
              local_1250 = this->Mesh;
              uVar41 = 0;
              if ((int)uVar46 < (int)uVar29) {
                uVar41 = uVar50;
              }
              if ((uVar41 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar8 = (code *)swi(3);
                uVar21 = (*pcVar8)();
                return (bool)uVar21;
              }
              uVar26 = (uint)uVar42;
              local_1230 = (FDynamicMesh3 *)local_1280.Data;
              uVar41 = 0;
              if ((int)uVar26 < *(int *)(local_1280.Data + lVar51 + 8)) {
                uVar41 = ~uVar26 >> 0x1f;
              }
              if ((uVar41 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar8 = (code *)swi(3);
                uVar21 = (*pcVar8)();
                return (bool)uVar21;
              }
              dVar53 = FDynamicMesh3::GetTriArea
                                 (local_1250,
                                  *(int *)(*(longlong *)
                                            ((longlong)
                                             &((ForAnyElementType *)&local_1230->_padding_)->Data +
                                            lVar51) + uVar44 * 8));
              local_1230 = this->Mesh;
              uVar41 = 0;
              if ((int)uVar46 < (int)local_1278) {
                uVar41 = uVar50;
              }
              if ((uVar41 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar8 = (code *)swi(3);
                uVar21 = (*pcVar8)();
                return (bool)uVar21;
              }
              FVar37.Data = local_1280.Data;
              uVar50 = 0;
              if ((int)uVar26 < *(int *)(local_1280.Data + lVar51 + 8)) {
                uVar50 = ~uVar26 >> 0x1f;
              }
              if ((uVar50 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar8 = (code *)swi(3);
                uVar21 = (*pcVar8)();
                return (bool)uVar21;
              }
              dVar54 = FDynamicMesh3::GetTriArea
                                 (local_1230,
                                  *(int *)(*(longlong *)(FVar37.Data + lVar51) + 4 + uVar44 * 8));
              uVar29 = local_1278 & 0xffffffff;
              auVar69._0_8_ = auVar69._0_8_ + dVar53 + dVar54;
              uVar42 = (ulonglong)(uVar26 + 1);
              uVar44 = uVar44 + 1;
              uVar50 = local_125c;
            } while ((longlong)uVar44 < (longlong)local_1210);
          }
          local_1270 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                       ((longlong)&(local_1270->AllocatorInstance).Data + 1);
          uVar46 = uVar46 + 1;
          lVar51 = lVar51 + 0x10;
        } while ((longlong)local_1270 < (longlong)local_1198);
      }
      TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVolumeArea
                (&local_e18,&((FDynamicSubmesh3 *)local_6d8)->Submesh);
      dVar53 = local_e18.field0_0x0._s_0.Y - auVar69._0_8_;
      if (dVar53 <= 0.0) {
        dVar53 = 0.0;
      }
      auVar55._0_8_ = dVar53 / local_e18.field0_0x0._s_0.Y;
      auVar55._8_8_ = 0;
      auVar70 = sqrtpd(auVar69,auVar55);
      dVar53 = auVar70._0_8_;
      if (auVar70._0_8_ <= __real_3fb999999999999a) {
        dVar53 = __real_3fb999999999999a;
      }
      MeshDeformation::ConstructSoftMeshDeformer((FDynamicMesh3 *)local_1190);
      if (0.0 <= this->AreaCorrection) {
        auVar63._0_8_ = (double)this->AreaCorrection;
        auVar63._8_8_ = 0;
        if (dVar16 <= auVar63._0_8_) {
          auVar63._8_8_ = 0;
          auVar63._0_8_ = dVar16;
        }
      }
      else {
        auVar63 = ZEXT816(0);
      }
      (**(code **)(*(longlong *)local_1190._0_8_ + 0x48))
                (local_1190._0_8_,SUB84(auVar63._0_8_ * dVar53 + (dVar16 - auVar63._0_8_),0));
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_e18.field0_0x0._s_0.Y * __real_3fc5555555555555;
      sqrtpd(auVar63,auVar10);
      local_125c = (local_1258->InsetLoops).ArrayNum;
      uVar29 = (ulonglong)(int)local_125c;
      pFVar43 = (FDynamicMesh3 *)(local_1258->InsetLoops).AllocatorInstance.Data;
      local_1230 = (FDynamicMesh3 *)((ForAnyElementType *)&pFVar43->_padding_ + uVar29 * 8);
      pTVar45 = &(pFVar43->Vertices).Blocks;
      while( true ) {
        pFVar39 = local_1230;
        local_1250 = pFVar43;
        if ((local_1258->InsetLoops).ArrayNum != (int)uVar29) {
          local_1263 = 0;
          `TCheckedPointerIterator<UE::Geometry::FEdgeLoop,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_1263);
        }
        if (pFVar43 == pFVar39) break;
        puVar30 = *(uint **)((longlong)(pTVar45 + -1) + 8);
        iVar47 = *(int *)&(pTVar45->AllocatorInstance).Data;
        puVar36 = puVar30 + iVar47;
        while( true ) {
          if (*(int *)&(pTVar45->AllocatorInstance).Data != iVar47) {
            local_1262[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_1262);
          }
          if (puVar30 == puVar36) break;
          uVar46 = *puVar30;
          iVar25 = TIndexMap<int>::GetTo
                             (&(((FDynamicSubmesh3 *)local_6d8)->Mappings).VertexMap,uVar46);
          lVar51 = *(longlong *)
                    ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar46 >> 9) * 8);
          puVar3 = (undefined8 *)(lVar51 + (ulonglong)(uVar46 & 0x1ff) * 0x18);
          local_e00 = *puVar3;
          uStack_df8 = puVar3[1];
          local_df0 = *(undefined8 *)(lVar51 + 0x10 + (ulonglong)(uVar46 & 0x1ff) * 0x18);
          (**(code **)(*(longlong *)local_1190._0_8_ + 8))
                    (local_1190._0_8_,iVar25,(ulonglong)(uVar46 >> 9),&local_e00);
          puVar30 = puVar30 + 1;
        }
        pFVar43 = (FDynamicMesh3 *)&(local_1250->VertexRefCounts).FreeIndices.Blocks;
        uVar29 = (ulonglong)local_125c;
        pTVar45 = pTVar45 + 4;
      }
      local_1150.Data = (FScriptContainerElement *)0x0;
      local_1148._0_4_ = 0;
      local_1148._4_4_ = 0;
      cVar23 = (**(code **)(*(longlong *)local_1190._0_8_ + 0x40))(local_1190._0_8_,&local_1150);
      if (cVar23 != '\0') {
        FRefCountVector::IndexIterator::IndexIterator
                  ((IndexIterator *)(local_1190 + 8),
                   (FRefCountVector *)((longlong)&((FDynamicSubmesh3 *)local_6d8)->Submesh + 0x20),0
                   ,local_6d8._40_4_ * 0x200 + local_6d8._44_4_);
        iVar47 = local_6d8._40_4_ * 0x200 + local_6d8._44_4_;
        FRefCountVector::IndexIterator::IndexIterator
                  (&local_ef0,
                   (FRefCountVector *)((longlong)&((FDynamicSubmesh3 *)local_6d8)->Submesh + 0x20),
                   iVar47,iVar47);
        if (local_1180 != local_ef0._8_4_) {
          do {
            uVar46 = local_1180;
            lVar51 = (longlong)(int)local_1180;
            if ((0.0 < fVar75) ||
               (cVar23 = (**(code **)(*(longlong *)local_1190._0_8_ + 0x38))
                                   (local_1190._0_8_,local_1180), cVar23 == '\0')) {
              if ((local_3ff == false) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("bWantReverse",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                                      ,0xa3,L""), bVar22)) {
                pcVar8 = (code *)swi(3);
                uVar21 = (*pcVar8)();
                return (bool)uVar21;
              }
              if (local_6d8._656_4_ != local_6d8._700_4_) {
                puVar35 = (undefined1 *)
                          ((longlong)&((FDynamicSubmesh3 *)local_6d8)->Mappings + 0x88);
                if ((undefined1 *)local_6d8._712_8_ != (undefined1 *)0x0) {
                  puVar35 = (undefined1 *)local_6d8._712_8_;
                }
                uVar50 = *(uint *)(puVar35 + (ulonglong)(local_408 - 1U & uVar46) * 4);
                while (uVar50 != 0xffffffff) {
                  puVar36 = (uint *)((longlong)(int)uVar50 * 0x10 + local_6d8._648_8_);
                  if (*puVar36 == uVar46) {
                    puVar30 = puVar36 + 1;
                    if (puVar36 == (uint *)0x0) {
                      puVar30 = (uint *)0x0;
                    }
                    if (puVar30 != (uint *)0x0) {
                      uVar50 = *puVar30;
                      goto LAB_14c70ed44;
                    }
                    break;
                  }
                  uVar50 = puVar36[2];
                }
              }
              uVar50 = 0xffffffff;
LAB_14c70ed44:
              uVar41 = 0;
              if ((int)uVar46 < (int)local_1148) {
                uVar41 = ~uVar46 >> 0x1f;
              }
              if ((uVar41 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar8 = (code *)swi(3);
                uVar21 = (*pcVar8)();
                return (bool)uVar21;
              }
              local_1168 = *(TArray<UE::Geometry::TDynamicVector<unsigned_short,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                             *)(local_1150.Data + lVar51 * 0x18);
              local_1158 = *(double *)(local_1150.Data + lVar51 * 0x18 + 0x10);
              uVar52 = SUB84(local_1158,0);
              uVar60 = (undefined4)((ulonglong)local_1158 >> 0x20);
              if (bVar20 != false) {
                local_908[0] = uVar17;
                local_8f8 = 0;
                local_8d0 = (longlong *)0x0;
                local_8c8 = 0;
                uVar41 = (**(code **)(local_798._padding_ + 0x20))
                                   (&local_798,&local_1168,local_e08,local_908);
                pFVar43 = local_798.Mesh;
                TVar19 = local_1168;
                FVar37 = local_1168.AllocatorInstance.Data;
                if (-1 < (int)uVar41) {
                  local_f18 = local_1158;
                  if ((((int)(((local_798.Mesh)->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                             ((local_798.Mesh)->TriangleRefCounts).RefCounts.CurBlockUsed) <=
                        (int)uVar41) ||
                      (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                     (((local_798.Mesh)->TriangleRefCounts).
                                                      RefCounts.Blocks.AllocatorInstance.Data +
                                                     (ulonglong)(uVar41 >> 9) * 8) +
                                                   (ulonglong)(uVar41 & 0x1ff) * 2) - 1U))) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Mesh.IsTriangle(TriIdx)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                                          ,0x1e,L""), bVar22)) {
                    pcVar8 = (code *)swi(3);
                    uVar21 = (*pcVar8)();
                    return (bool)uVar21;
                  }
                  FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                            (pFVar43,uVar41,(TVector<double> *)&local_d58._s_0,
                             (TVector<double> *)&TStack_d40._s_0,(TVector<double> *)&local_d28._s_0)
                  ;
                  local_8b8._16_8_ = local_f18;
                  local_8a0 = local_d58._s_0.X;
                  dStack_898 = local_d58._s_0.Y;
                  local_890 = local_d58._s_0.Z;
                  dStack_888 = TStack_d40._s_0.X;
                  local_880 = TStack_d40._s_0.Y;
                  dStack_878 = TStack_d40._s_0.Z;
                  local_8b8._s_0.Y = (double)TVar19._8_8_;
                  local_870 = local_d28._s_0.X;
                  dStack_868 = local_d28._s_0.Y;
                  local_860 = local_d28._s_0.Z;
                  local_8b8._s_0.X = (double)FVar37.Data;
                  TDistPoint3Triangle3<double>::ComputeResult
                            ((TDistPoint3Triangle3<double> *)&local_8b8._s_0);
                  local_1168 = local_840;
                  local_1158 = local_830;
                }
                uVar52 = SUB84(local_1158,0);
                uVar60 = (undefined4)((ulonglong)local_1158 >> 0x20);
                if (local_8f8 != 0) {
                  plVar32 = local_8e8;
                  if (local_8d0 != (longlong *)0x0) {
                    plVar32 = local_8d0;
                  }
                  (**(code **)(*plVar32 + 0x10))();
                  uVar52 = SUB84(local_1158,0);
                  uVar60 = (undefined4)((ulonglong)local_1158 >> 0x20);
                }
              }
              TVar19 = local_1168;
              pFVar43 = this->Mesh;
              sVar24 = _dclass();
              if (((sVar24 < 1) &&
                  (auVar13._4_8_ = extraout_XMM0_Qb_00,
                  auVar13._0_4_ = TVar19.AllocatorInstance.Data._4_4_,
                  auVar56._0_8_ = auVar13._0_8_ << 0x20, auVar56._8_4_ = TVar19.ArrayNum,
                  auVar56._12_4_ = TVar19.ArrayMax, sVar24 = _dclass(auVar56._8_8_), sVar24 < 1)) &&
                 (sVar24 = _dclass(local_1158), sVar24 < 1)) {
                lVar51 = *(longlong *)
                          ((pFVar43->Vertices).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar50 >> 9) * 8);
                *(TArray<UE::Geometry::TDynamicVector<unsigned_short,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                  *)(lVar51 + (ulonglong)(uVar50 & 0x1ff) * 0x18) = TVar19;
                *(ulonglong *)(lVar51 + 0x10 + (ulonglong)(uVar50 & 0x1ff) * 0x18) =
                     CONCAT44(uVar60,uVar52);
                if ((pFVar43->ChangeStampShape).bIsEnabled != false) {
                  this_00 = &(pFVar43->ChangeStampShape).Mutex;
                  LOCK();
                  bVar22 = this_00->State == (atomic<unsigned_char>)0x0;
                  if (bVar22) {
                    this_00->State = (atomic<unsigned_char>)0x1;
                  }
                  UNLOCK();
                  if (!bVar22) {
                    FMutex::LockSlow(this_00);
                  }
                  puVar36 = &(pFVar43->ChangeStampShape).Value;
                  *puVar36 = *puVar36 + 1;
                  LOCK();
                  aVar4 = this_00->State;
                  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
                  UNLOCK();
                  if (((byte)aVar4 & 2) != 0) {
                    FMutex::WakeWaitingThread(this_00);
                  }
                }
              }
            }
            local_1180 = uVar46 + 1;
            if ((int)local_1180 < iStack_117c) {
              do {
                if ((*(short *)(*(longlong *)
                                 (*(longlong *)(local_1190._8_8_ + 8) +
                                 (ulonglong)(local_1180 >> 9) * 8) +
                               (ulonglong)(local_1180 & 0x1ff) * 2) != 0) &&
                   (*(short *)(*(longlong *)
                                (*(longlong *)(local_1190._8_8_ + 8) +
                                (ulonglong)(local_1180 >> 9) * 8) +
                              (ulonglong)(local_1180 & 0x1ff) * 2) != -1)) break;
                local_1180 = local_1180 + 1;
              } while ((int)local_1180 < iStack_117c);
            }
          } while (local_1180 != local_ef0._8_4_);
        }
      }
      if (local_1150.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1150.Data);
      }
      if ((longlong *)local_1190._0_8_ != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_1190._0_8_)(local_1190._0_8_,1);
      }
      TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
                (&local_798);
      FDynamicMesh3::~FDynamicMesh3(&local_bd8);
    }
    dVar53 = _UNK_15061cbc8;
    uVar29 = ___xmm_3ff00000000000000000000000000000;
    uVar46 = 0;
    if ((this->Mesh->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
      local_1250 = (FDynamicMesh3 *)(longlong)(int)local_1278;
      if (0 < (longlong)local_1250) {
        uVar52 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar60 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        piVar61 = (int *)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                  UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
        dVar54 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                  UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
        local_1270 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
        lVar51 = 0;
        local_1258 = (FInsetInfo *)0x0;
        do {
          pFVar49 = local_1258;
          fVar75 = 0.0;
          uVar50 = 0;
          if ((int)uVar46 < local_1248.ArrayNum) {
            uVar50 = ~uVar46 >> 0x1f;
          }
          if (uVar50 == 0) {
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar8 = (code *)swi(3);
              uVar21 = (*pcVar8)();
              return (bool)uVar21;
            }
            piVar61 = (int *)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            dVar54 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
            uVar52 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar60 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          }
          FVar37.Data = local_1248.AllocatorInstance.Data;
          local_11e8._s_0.Z = (double)CONCAT44(uVar60,uVar52);
          uVar50 = 0;
          if ((int)uVar46 < (int)local_1278) {
            uVar50 = ~uVar46 >> 0x1f;
          }
          dStack_11d0 = 0.0;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar29;
          auStack_11c8 = auVar14 << 0x40;
          dStack_11b8 = dVar53;
          local_11e8._s_0.X = (double)piVar61;
          local_11e8._s_0.Y = dVar54;
          if (uVar50 == 0) {
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar8 = (code *)swi(3);
              uVar21 = (*pcVar8)();
              return (bool)uVar21;
            }
            piVar61 = (int *)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            dVar54 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
            uVar52 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar60 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          }
          uVar50 = 0;
          lVar40 = 0;
          local_1230 = (FDynamicMesh3 *)(longlong)*(int *)(local_1280.Data + (longlong)pFVar49 + 8);
          if (0 < (longlong)local_1230) {
            uVar52 = auStack_11c8._0_4_;
            uVar60 = auStack_11c8._4_4_;
            uVar71 = auStack_11c8._8_4_;
            uVar72 = auStack_11c8._12_4_;
            uVar73 = SUB84(dStack_11d0,0);
            uVar74 = (undefined4)((ulonglong)dStack_11d0 >> 0x20);
            local_1260 = ~uVar46 >> 0x1f;
            auVar70 = auStack_11c8;
            do {
              uVar41 = 0;
              if ((int)uVar46 < (int)local_1278) {
                uVar41 = local_1260;
              }
              if ((uVar41 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar8 = (code *)swi(3);
                uVar21 = (*pcVar8)();
                return (bool)uVar21;
              }
              FVar18.Data = local_1280.Data;
              uVar41 = 0;
              if ((int)uVar50 < *(int *)(local_1280.Data + (longlong)local_1258 + 8)) {
                uVar41 = ~uVar50 >> 0x1f;
              }
              if ((uVar41 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar8 = (code *)swi(3);
                uVar21 = (*pcVar8)();
                return (bool)uVar21;
              }
              FDynamicMeshEditor::ComputeAndSetQuadNormal
                        (&local_11a0,(TVector<float> *)&local_11b0._s_0,
                         (FIndex2i *)
                         (*(longlong *)(FVar18.Data + (longlong)local_1258) +
                         (longlong)(int)uVar50 * 8),true);
              uVar65 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar66 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
              local_fb8.Data =
                   (FScriptContainerElement *)
                   UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              dStack_fb0 = 0.0;
              local_fc8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              local_fc8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              local_fc8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
              local_fc8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              auStack_fa8._8_8_ = 0;
              auStack_fa8._0_8_ = uVar29;
              auStack_fa8 = auStack_fa8 << 0x40;
              dStack_f98 = dVar53;
              if (uVar50 == 0) {
                pFVar43 = this->Mesh;
                if (*(int *)(FVar37.Data + lVar51 + 8) < 2) {
                  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar20) {
                    pcVar8 = (code *)swi(3);
                    uVar21 = (*pcVar8)();
                    return (bool)uVar21;
                  }
                  uVar65 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                  uVar66 = (undefined4)
                           ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >>
                           0x20);
                }
                pFVar39 = this->Mesh;
                uVar42 = (ulonglong)(*(uint *)(*(longlong *)(FVar37.Data + lVar51) + 4) & 0x1ff);
                lVar7 = *(longlong *)
                         ((pFVar43->Vertices).Blocks.AllocatorInstance.Data +
                         (ulonglong)(*(uint *)(*(longlong *)(FVar37.Data + lVar51) + 4) >> 9) * 8);
                pdVar2 = (double *)(lVar7 + uVar42 * 0x18);
                local_f08 = *pdVar2;
                dStack_f00 = pdVar2[1];
                local_ef8 = *(double *)(lVar7 + 0x10 + uVar42 * 0x18);
                if (*(int *)(FVar37.Data + lVar51 + 8) < 1) {
                  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar20) {
                    pcVar8 = (code *)swi(3);
                    uVar21 = (*pcVar8)();
                    return (bool)uVar21;
                  }
                  uVar65 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                  uVar66 = (undefined4)
                           ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >>
                           0x20);
                }
                uVar42 = (ulonglong)(**(uint **)(FVar37.Data + lVar51) & 0x1ff);
                lVar7 = *(longlong *)
                         ((pFVar39->Vertices).Blocks.AllocatorInstance.Data +
                         (ulonglong)(**(uint **)(FVar37.Data + lVar51) >> 9) * 8);
                pdVar2 = (double *)(lVar7 + uVar42 * 0x18);
                local_d08 = *pdVar2;
                dStack_d00 = pdVar2[1];
                local_cf8 = *(double *)(lVar7 + 0x10 + uVar42 * 0x18);
                dVar54 = local_f08 - local_d08;
                dVar11 = local_ef8 - local_cf8;
                dVar67 = dStack_f00 - dStack_d00;
                auVar57._0_8_ = dVar54 * dVar54;
                auVar57._8_8_ = 0;
                auVar64._0_8_ = dVar67 * dVar67 + auVar57._0_8_ + dVar11 * dVar11;
                auVar64._8_8_ = 0;
                auVar70 = sqrtpd(auVar57,auVar64);
                if (auVar70._0_8_ <= 0.0) {
                  local_1020._s_0.X = 0.0;
                  local_1020._s_0.Y = 0.0;
                  local_1020._s_0.Z = 0.0;
                }
                else {
                  dVar62 = dVar16 / auVar70._0_8_;
                  local_1020._s_0.X = dVar62 * dVar54;
                  local_1020._s_0.Y = dVar62 * dVar67;
                  local_1020._s_0.Z = dVar62 * dVar11;
                }
                local_ed0._s_0.X = (double)local_11b0._s_0.X;
                local_ed0._s_0.Y = (double)local_11b0._s_0.Y;
                local_ed0._s_0.Z = (double)local_11b0._s_0.Z;
                TStack_f78._s_0.X = 0.0;
                local_de8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
                local_de8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
                local_de8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
                TStack_f78._s_0.W = dVar16;
                TStack_f78._s_0.Y = 0.0;
                TStack_f78._s_0.Z = 0.0;
                local_f80 = (FScriptContainerElement *)CONCAT44(uVar66,uVar65);
                local_f90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                uStack_f8c = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                uStack_f88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                uStack_f84 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                TQuaternion<double>::SetFromTo
                          ((TQuaternion<double> *)&TStack_f78._s_0,
                           (TVector<double> *)&local_de8._s_0,(TVector<double> *)&local_ed0._s_0);
                local_11e8._s_0.X = (double)CONCAT44(uStack_f8c,local_f90);
                local_11e8._s_0.Y = (double)CONCAT44(uStack_f84,uStack_f88);
                dVar11 = TStack_f78._s_0.Y + TStack_f78._s_0.Y;
                dVar54 = TStack_f78._s_0.Z + TStack_f78._s_0.Z;
                dStack_11b8 = TStack_f78._s_0.W;
                auStack_11c8._8_8_ = TStack_f78._s_0.Z;
                auStack_11c8._0_8_ = TStack_f78._s_0.Y;
                local_11e8._s_0.Z = (double)local_f80;
                dStack_11d0 = TStack_f78._s_0.X;
                dVar68 = (double)local_11b0._s_0.X;
                local_ea0._s_0.X =
                     dVar16 - (TStack_f78._s_0.Z * dVar54 + TStack_f78._s_0.Y * dVar11);
                dVar67 = (double)local_11b0._s_0.Y;
                dVar62 = (double)local_11b0._s_0.Z;
                local_ea0._s_0.Y = TStack_f78._s_0.W * dVar54 + TStack_f78._s_0.X * dVar11;
                local_ea0._s_0.Z = TStack_f78._s_0.X * dVar54 - TStack_f78._s_0.W * dVar11;
                local_eb8._s_0.X = dVar68;
                local_eb8._s_0.Y = dVar67;
                local_eb8._s_0.Z = dVar62;
                VectorUtil::PlaneAngleSignedD<double>
                          ((TVector<double> *)&local_ea0._s_0,(TVector<double> *)&local_1020._s_0,
                           (TVector<double> *)&local_eb8._s_0);
                __libm_sse2_sincos_();
                local_e58._s_0.X = dVar68 * extraout_XMM0_Qa;
                local_e58._s_0.Y = dVar67 * extraout_XMM0_Qa;
                local_e58._s_0.Z = dVar62 * extraout_XMM0_Qa;
                TFrame3<double>::Rotate
                          ((TFrame3<double> *)&local_11e8._s_0,
                           (TQuaternion<double> *)&local_e58._s_0);
                uVar71 = auStack_11c8._8_4_;
                uVar72 = auStack_11c8._12_4_;
                uVar52 = auStack_11c8._0_4_;
                uVar60 = auStack_11c8._4_4_;
                uVar73 = SUB84(dStack_11d0,0);
                uVar74 = (undefined4)((ulonglong)dStack_11d0 >> 0x20);
                dVar54 = (double)auStack_11c8._8_8_ + (double)auStack_11c8._8_8_;
                local_1008._s_0.X =
                     ((double)auStack_11c8._0_8_ + (double)auStack_11c8._0_8_) * dStack_11d0 -
                     dStack_11b8 * dVar54;
                auStack_fa8 = auStack_11c8;
                local_1008._s_0.Y =
                     dVar16 - (dStack_11d0 * (dStack_11d0 + dStack_11d0) +
                              (double)auStack_11c8._8_8_ * dVar54);
                local_fb8.Data = (FScriptContainerElement *)local_11e8._s_0.Z;
                dStack_fb0 = dStack_11d0;
                local_1008._s_0.Z =
                     dStack_11b8 * (dStack_11d0 + dStack_11d0) + (double)auStack_11c8._0_8_ * dVar54
                ;
                local_fc8._0_8_ = local_11e8._s_0.X;
                local_fc8._8_8_ = local_11e8._s_0.Y;
                dStack_f98 = dStack_11b8;
                auVar70 = auStack_11c8;
              }
              else {
                local_fb8.Data = (FScriptContainerElement *)local_11e8._s_0.Z;
                dStack_fb0 = dStack_11d0;
                local_fc8._0_8_ = local_11e8._s_0.X;
                local_fc8._8_8_ = local_11e8._s_0.Y;
                dVar54 = (double)CONCAT44(uVar72,uVar71) + (double)CONCAT44(uVar72,uVar71);
                dStack_f98 = dStack_11b8;
                dVar11 = (double)CONCAT44(uVar60,uVar52) + (double)CONCAT44(uVar60,uVar52);
                local_e88._s_0.Y = (double)local_11b0._s_0.Y;
                local_e88._s_0.X = (double)local_11b0._s_0.X;
                dVar67 = (double)CONCAT44(uVar74,uVar73) + (double)CONCAT44(uVar74,uVar73);
                local_e88._s_0.Z = (double)local_11b0._s_0.Z;
                local_e70._s_0.X = (double)CONCAT44(uVar74,uVar73) * dVar54 + dStack_11b8 * dVar11;
                local_e70._s_0.Y = (double)CONCAT44(uVar60,uVar52) * dVar54 - dStack_11b8 * dVar67;
                local_e70._s_0.Z =
                     dVar16 - ((double)CONCAT44(uVar74,uVar73) * dVar67 +
                              (double)CONCAT44(uVar60,uVar52) * dVar11);
                auStack_fa8 = auVar70;
                VectorUtil::PlaneAngleSignedD<double>
                          ((TVector<double> *)&local_e70._s_0,(TVector<double> *)&local_e88._s_0,
                           (TVector<double> *)&local_1008._s_0);
                __libm_sse2_sincos_();
                local_e38._s_0.Y = extraout_XMM0_Qa_00 * local_1008._s_0.Y;
                local_e38._s_0.X = extraout_XMM0_Qa_00 * local_1008._s_0.X;
                local_e38._s_0.Z = extraout_XMM0_Qa_00 * local_1008._s_0.Z;
                TFrame3<double>::Rotate
                          ((TFrame3<double> *)(local_fd0 + 8),(TQuaternion<double> *)&local_e38._s_0
                          );
                if (0 < (int)uVar50) {
                  pFVar43 = this->Mesh;
                  uVar41 = 0;
                  if ((int)(uVar50 - 1) < *(int *)(FVar37.Data + lVar51 + 8)) {
                    uVar41 = -uVar50 >> 0x1f;
                  }
                  if ((uVar41 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar8 = (code *)swi(3);
                    uVar21 = (*pcVar8)();
                    return (bool)uVar21;
                  }
                  uVar41 = *(uint *)(*(longlong *)(FVar37.Data + lVar51) + -4 + lVar40 * 4);
                  pFVar39 = this->Mesh;
                  uVar42 = (ulonglong)(uVar41 & 0x1ff);
                  lVar7 = *(longlong *)
                           ((pFVar43->Vertices).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar41 >> 9) * 8);
                  pdVar2 = (double *)(lVar7 + uVar42 * 0x18);
                  local_f40 = *pdVar2;
                  dStack_f38 = pdVar2[1];
                  local_f30 = *(double *)(lVar7 + 0x10 + uVar42 * 0x18);
                  uVar41 = 0;
                  if ((int)uVar50 < *(int *)(FVar37.Data + lVar51 + 8)) {
                    uVar41 = ~uVar50 >> 0x1f;
                  }
                  if ((uVar41 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar8 = (code *)swi(3);
                    uVar21 = (*pcVar8)();
                    return (bool)uVar21;
                  }
                  uVar41 = *(uint *)(*(longlong *)(FVar37.Data + lVar51) + lVar40 * 4);
                  uVar42 = (ulonglong)(uVar41 & 0x1ff);
                  lVar7 = *(longlong *)
                           ((pFVar39->Vertices).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar41 >> 9) * 8);
                  pdVar2 = (double *)(lVar7 + uVar42 * 0x18);
                  local_cf0 = *pdVar2;
                  dStack_ce8 = pdVar2[1];
                  local_ce0 = *(double *)(lVar7 + 0x10 + uVar42 * 0x18);
                  auVar58._8_8_ = dStack_ce8;
                  auVar58._0_8_ = dStack_ce8;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = (dStack_f38 - dStack_ce8) * (dStack_f38 - dStack_ce8) +
                                 (local_f40 - local_cf0) * (local_f40 - local_cf0) +
                                 (local_f30 - local_ce0) * (local_f30 - local_ce0);
                  auVar59 = sqrtpd(auVar58,auVar9);
                  fVar75 = fVar75 + (float)auVar59._0_8_;
                }
              }
              fVar5 = this->UVScaleFactor;
              local_10c8._s_0.X = fVar5 * fVar75;
              local_10c8._s_0.Y = 0.0;
              uVar41 = 0;
              if ((int)uVar46 < (int)local_1278) {
                uVar41 = local_1260;
              }
              if ((uVar41 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar8 = (code *)swi(3);
                uVar21 = (*pcVar8)();
                return (bool)uVar21;
              }
              FVar18.Data = local_1280.Data;
              uVar41 = 0;
              if ((int)uVar50 < *(int *)(local_1280.Data + (longlong)local_1258 + 8)) {
                uVar41 = ~uVar50 >> 0x1f;
              }
              if ((uVar41 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar8 = (code *)swi(3);
                uVar21 = (*pcVar8)();
                return (bool)uVar21;
              }
              FDynamicMeshEditor::SetQuadUVsFromProjection
                        (&local_11a0,
                         (FIndex2i *)
                         (*(longlong *)(FVar18.Data + (longlong)local_1258) +
                         (longlong)(int)uVar50 * 8),(TFrame3<double> *)(local_fd0 + 8),fVar5,
                         (TVector2<float> *)&local_10c8._s_0,0);
              uVar50 = uVar50 + 1;
              lVar40 = lVar40 + 1;
            } while (lVar40 < (longlong)local_1230);
            uVar52 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar60 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            piVar61 = (int *)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            dVar54 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
            pFVar49 = local_1258;
          }
          local_1258 = (FInsetInfo *)((longlong)pFVar49 + 0x10);
          local_1270 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                       ((longlong)&(local_1270->AllocatorInstance).Data + 1);
          uVar46 = uVar46 + 1;
          lVar51 = lVar51 + 0x48;
        } while ((longlong)local_1270 < (longlong)local_1250);
      }
    }
    bVar20 = true;
    DestructItems<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *)local_1280.Data,
               (int)local_1278);
    if ((TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *)local_1280.Data !=
        (TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_1280.Data);
    }
  }
  else {
    FMeshRegionBoundaryLoops::FMeshRegionBoundaryLoops
              (&local_cd8,this->Mesh,&param_1->InitialTriangles,false);
    bVar22 = FMeshRegionBoundaryLoops::Compute(&local_cd8);
    if (bVar22) {
      iVar47 = local_cd8.Loops.ArrayNum;
      pTVar38 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                (local_cd8.Loops.AllocatorInstance.Data + 8);
      while( true ) {
        if (local_cd8.Loops.ArrayNum != iVar47) {
          local_1267 = 0;
          `TCheckedPointerIterator<UE::Geometry::FEdgeLoop,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_1267);
        }
        if ((FScriptContainerElement *)&pTVar38[-1].ArrayNum ==
            local_cd8.Loops.AllocatorInstance.Data + (longlong)iVar47 * 0x40) break;
        `UE::Geometry::FInsetMeshRegion::ApplyInset'::__l2::<lambda_1>::operator()
                  (&local_fe0,pTVar38,pTVar38 + 1);
        pTVar38 = pTVar38 + 4;
      }
      FMeshRegionBoundaryLoops::~FMeshRegionBoundaryLoops(&local_cd8);
      goto LAB_14c70d798;
    }
    FMeshRegionBoundaryLoops::~FMeshRegionBoundaryLoops(&local_cd8);
    bVar20 = false;
  }
  local_f8 = 0;
  if (local_100 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_100);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(((FDynamicSubmesh3 *)local_6d8)->BaseBorderV).Elements);
  local_148 = 0;
  if (local_150 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_150);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(((FDynamicSubmesh3 *)local_6d8)->BaseBoundaryE).Elements);
  local_198 = 0;
  if (local_1a0 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1a0);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(((FDynamicSubmesh3 *)local_6d8)->BaseBorderE).Elements);
  FMeshIndexMappings::~FMeshIndexMappings(&((FDynamicSubmesh3 *)local_6d8)->Mappings);
  FDynamicMesh3::~FDynamicMesh3(&((FDynamicSubmesh3 *)local_6d8)->Submesh);
  if (local_1050.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1050.Blocks.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1058.Data,local_1050.CurBlock);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1058.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_1058.Data);
  }
  if (local_1068.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1068.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1078.Data,(int)local_1070);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1078.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_1078.Data);
  }
  if (local_1088.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1088.Data);
  }
  if (local_1098.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1098.Data);
  }
  if (local_10a8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_10a8);
  }
  DestructItems<TArray<TTuple<int,TTuple<signed_char,signed_char>_>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTuple<int,TTuple<signed_char,signed_char>_>,TSizedDefaultAllocator<32>_> *)
             local_11f8.Data,local_11f0);
  if ((TArray<TTuple<int,TTuple<signed_char,signed_char>_>,TSizedDefaultAllocator<32>_> *)
      local_11f8.Data !=
      (TArray<TTuple<int,TTuple<signed_char,signed_char>_>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_11f8.Data);
  }
LAB_14c70fdf3:
  DestructItems<UE::Geometry::FDynamicMeshEditor::FLoopPairSet,int>
            ((FLoopPairSet *)local_1248.AllocatorInstance.Data,local_1248.ArrayNum);
  if ((FLoopPairSet *)local_1248.AllocatorInstance.Data != (FLoopPairSet *)0x0) {
    FMemory::Free(local_1248.AllocatorInstance.Data);
  }
  return bVar20;
}

// Validate @ 14c77bfa0

EOperationValidationResult __thiscall
UE::Geometry::FInsetMeshRegion::Validate(FInsetMeshRegion *this)

{
  return Ok;
}

