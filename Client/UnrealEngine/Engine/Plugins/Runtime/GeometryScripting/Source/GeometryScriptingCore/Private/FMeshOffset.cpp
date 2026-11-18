// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 7

// FMeshOffset @ 14ce26680

FMeshOffset * __thiscall FMeshOffset::FMeshOffset(FMeshOffset *this,FDynamicMesh3 *param_1)

{
  this->Steps = 1;
  this->_padding_ = (longlong)&___7FMeshOffset__6B_;
  this->bReprojectSmooth = false;
  this->SmoothAlpha = 0.1;
  this->bFixedBoundary = false;
  this->BoundaryAlpha = 0.2;
  this->PerVertexNormals = (FMeshNormals *)0x0;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->ResultMesh);
  (this->PositionBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->OffsetDistance = 1.0;
  (this->PositionBuffer).ArrayNum = 0;
  (this->PositionBuffer).ArrayMax = 0;
  this->BaseNormals = (FMeshNormals *)0x0;
  (this->bIsBoundary).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->bIsBoundary).ArrayNum = 0;
  (this->bIsBoundary).ArrayMax = 0;
  (this->BoundaryVerts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundaryVerts).ArrayNum = 0;
  (this->BoundaryVerts).ArrayMax = 0;
  this->Mesh = param_1;
  return this;
}

// ~FMeshOffset @ 14ce27200

void __thiscall FMeshOffset::~FMeshOffset(FMeshOffset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FMeshOffset__6B_;
  pFVar1 = (this->BoundaryVerts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->bIsBoundary).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PositionBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&this->ResultMesh);
  return;
}

// operator() @ 14ce481e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FMeshOffset::Offset_Smoothed'::__l24::<lambda_1>::operator()(void *this,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  code *pcVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  longlong local_128;
  code *local_120;
  code *local_118;
  longlong *local_110;
  TVector<double>_u_0 local_108;
  undefined1 local_f0 [24];
  undefined8 local_d8 [2];
  longlong local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  undefined1 local_98;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_158;
  lVar7 = *(longlong *)this;
  lVar18 = (longlong)param_1;
  uVar20 = 0;
  uVar14 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)(lVar7 + 0x60) * 0x200 + *(int *)(lVar7 + 100))) {
    uVar17 = (uint)*(ushort *)
                    (*(longlong *)
                      (*(longlong *)(lVar7 + 0x68) + (ulonglong)((uint)param_1 >> 9) * 8) +
                    (ulonglong)(param_1 & 0x1ff) * 2);
    if (uVar17 == 0xffff) {
      uVar17 = uVar20;
    }
    if (1 < uVar17) {
      uVar19 = (uint)~param_1 >> 0x1f;
      uVar17 = uVar20;
      if (param_1 < *(int *)(lVar7 + 0x298)) {
        uVar17 = uVar19;
      }
      if ((uVar17 == 0) &&
         (local_138 = lVar18, local_130 = (longlong)*(int *)(lVar7 + 0x298),
         bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (*(char *)(lVar18 + *(longlong *)(lVar7 + 0x290)) == '\0') {
        local_128 = *(longlong *)this;
        local_110 = &local_128;
        local_118 = UE::Core::Private::Function::
                    TFunctionRefCaller<``FMeshOffset::Offset_Smoothed'::__l24::<lambda_1>::operator()'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
                    ::Call;
        UE::Geometry::FMeshWeights::UniformCentroid
                  ((TVector<double> *)&local_108._s_0,(FDynamicMesh3 *)(local_128 + 0x40),param_1,
                   (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_118);
        lVar7 = *(longlong *)this;
        dVar1 = *(double *)(lVar7 + 0x18);
        if (param_1 < *(int *)(lVar7 + 0x280)) {
          uVar20 = uVar19;
        }
        if ((uVar20 == 0) &&
           (local_138 = lVar18, local_130 = (longlong)*(int *)(lVar7 + 0x280),
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar7 = *(longlong *)(lVar7 + 0x278);
        dVar10 = __real_3ff0000000000000 - dVar1;
        plVar16 = *(longlong **)((longlong)this + 8);
        iVar6 = (int)plVar16[1];
        dVar2 = *(double *)(lVar7 + lVar18 * 0x18);
        dVar3 = *(double *)(lVar7 + 8 + lVar18 * 0x18);
        dVar4 = *(double *)(lVar7 + 0x10 + lVar18 * 0x18);
        uVar20 = uVar14;
        if (param_1 < iVar6) {
          uVar20 = uVar19;
        }
        if ((uVar20 == 0) &&
           (local_138 = lVar18, local_130 = (longlong)iVar6,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar7 = *plVar16;
        *(double *)(lVar7 + lVar18 * 0x18) = local_108._s_0.X * dVar1 + dVar10 * dVar2;
        *(double *)(lVar7 + 8 + lVar18 * 0x18) = dVar10 * dVar3 + local_108._s_0.Y * dVar1;
        *(double *)(lVar7 + 0x10 + lVar18 * 0x18) = dVar10 * dVar4 + local_108._s_0.Z * dVar1;
        if (*(char *)(*(longlong *)this + 0x20) == '\0') {
          return;
        }
        plVar16 = *(longlong **)((longlong)this + 0x10);
        plVar8 = *(longlong **)((longlong)this + 8);
        local_d8[0] = __real_7fefffffffffffff;
        local_c8 = 0;
        local_a0 = (longlong *)0x0;
        local_120 = *(code **)(*plVar16 + 0x50);
        local_98 = 0;
        iVar6 = (int)plVar8[1];
        if (param_1 < iVar6) {
          uVar14 = uVar19;
        }
        if ((uVar14 == 0) &&
           (local_138 = lVar18, local_130 = (longlong)iVar6,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        puVar15 = (undefined8 *)(*local_120)(plVar16,local_f0,*plVar8 + lVar18 * 0x18,local_d8);
        plVar16 = *(longlong **)((longlong)this + 8);
        uVar11 = *puVar15;
        uVar12 = puVar15[1];
        uVar5 = puVar15[2];
        iVar6 = (int)plVar16[1];
        uVar20 = 0;
        if (param_1 < iVar6) {
          uVar20 = uVar19;
        }
        if ((uVar20 == 0) &&
           (local_138 = lVar18, local_130 = (longlong)iVar6,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar7 = *plVar16;
        puVar15 = (undefined8 *)(lVar7 + lVar18 * 0x18);
        *puVar15 = uVar11;
        puVar15[1] = uVar12;
        *(undefined8 *)(lVar7 + 0x10 + lVar18 * 0x18) = uVar5;
        if (local_c8 == 0) {
          return;
        }
        plVar16 = local_b8;
        if (local_a0 != (longlong *)0x0) {
          plVar16 = local_a0;
        }
        (**(code **)(*plVar16 + 0x10))();
        return;
      }
    }
  }
  lVar7 = *(longlong *)this;
  iVar6 = *(int *)(lVar7 + 0x280);
  local_130 = (longlong)iVar6;
  uVar20 = 0;
  if (param_1 < iVar6) {
    uVar20 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (local_138 = lVar18,
     bVar13 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar7 = *(longlong *)(lVar7 + 0x278);
  plVar16 = *(longlong **)((longlong)this + 8);
  puVar15 = (undefined8 *)(lVar7 + lVar18 * 0x18);
  uVar11 = *puVar15;
  uVar12 = puVar15[1];
  uVar5 = *(undefined8 *)(lVar7 + 0x10 + lVar18 * 0x18);
  iVar6 = (int)plVar16[1];
  local_130 = (longlong)iVar6;
  if (param_1 < iVar6) {
    uVar14 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (local_138 = lVar18,
     bVar13 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar7 = *plVar16;
  puVar15 = (undefined8 *)(lVar7 + lVar18 * 0x18);
  *puVar15 = uVar11;
  puVar15[1] = uVar12;
  *(undefined8 *)(lVar7 + 0x10 + lVar18 * 0x18) = uVar5;
  return;
}

// operator() @ 14ce4c6a0

void __thiscall
`FMeshOffset::Offset_Smoothed'::__l27::<lambda_2>::operator()(void *this,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_res8;
  longlong local_res18 [2];
  code *local_a8;
  longlong *local_a0;
  code *local_98;
  longlong *local_90;
  TVector<double>_u_0 local_88 [4];
  
  lVar5 = *(longlong *)this;
  uVar11 = 0;
  if (param_1 < *(int *)(lVar5 + 0x2a8)) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_res8 = *(longlong *)this;
  uVar11 = *(uint *)(*(longlong *)(lVar5 + 0x2a0) + (longlong)param_1 * 4);
  lVar12 = (longlong)(int)uVar11;
  local_a0 = &local_res8;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<``FMeshOffset::Offset_Smoothed'::__l27::<lambda_2>::operator()'::__l2::<lambda_2>,bool,int>
             ::Call;
  local_90 = local_res18;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<``FMeshOffset::Offset_Smoothed'::__l27::<lambda_2>::operator()'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
             ::Call;
  local_res18[0] = local_res8;
  UE::Geometry::FMeshWeights::FilteredUniformCentroid
            ((TVector<double> *)&local_88[0]._s_0,(FDynamicMesh3 *)(local_res8 + 0x40),uVar11,
             (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_98,
             (TFunctionRef<bool___cdecl(int)> *)&local_a8);
  lVar5 = *(longlong *)this;
  dVar1 = *(double *)(lVar5 + 0x28);
  uVar10 = 0;
  if ((int)uVar11 < *(int *)(lVar5 + 0x280)) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x278);
  dVar8 = __real_3ff0000000000000 - dVar1;
  plVar6 = *(longlong **)((longlong)this + 8);
  dVar2 = *(double *)(lVar5 + lVar12 * 0x18);
  dVar3 = *(double *)(lVar5 + 8 + lVar12 * 0x18);
  dVar4 = *(double *)(lVar5 + 0x10 + lVar12 * 0x18);
  uVar10 = 0;
  if ((int)uVar11 < (int)plVar6[1]) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar5 = *plVar6;
  *(double *)(lVar5 + lVar12 * 0x18) = dVar8 * dVar2 + (double)local_88[0]._0_8_ * dVar1;
  *(double *)(lVar5 + 8 + lVar12 * 0x18) = dVar8 * dVar3 + (double)local_88[0]._8_8_ * dVar1;
  *(double *)(lVar5 + 0x10 + lVar12 * 0x18) = dVar8 * dVar4 + (double)local_88[0]._16_8_ * dVar1;
  return;
}

// Apply @ 14ce5a410

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FMeshOffset::Apply(FMeshOffset *this,FProgressCancel *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FMutex *this_00;
  uint *puVar3;
  undefined8 *puVar4;
  atomic<unsigned_char> aVar5;
  undefined8 uVar6;
  FMeshNormals *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  code *pcVar10;
  undefined8 uVar11;
  FScriptContainerElement FVar12;
  bool bVar13;
  short sVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  bool local_res18 [8];
  uint local_58 [2];
  FMeshNormals local_50;
  
  pFVar7 = this->PerVertexNormals;
  uVar20 = 0;
  this->BaseNormals = pFVar7;
  local_50.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Normals.ArrayNum = 0;
  local_50.Normals.ArrayMax = 0;
  local_50.Mesh = (FDynamicMesh3 *)0x0;
  if ((pFVar7 == (FMeshNormals *)0x0) ||
     ((pFVar7->Normals).ArrayNum != (this->Mesh->VertexRefCounts).UsedCount)) {
    local_50.Mesh = this->Mesh;
    UE::Geometry::FMeshNormals::Compute_FaceAvg(&local_50,true,true);
    this->BaseNormals = &local_50;
  }
  UE::Geometry::FDynamicMesh3::operator=(&this->ResultMesh,this->Mesh);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->PositionBuffer,
             (this->ResultMesh).VertexRefCounts.RefCounts.CurBlock * 0x200 +
             (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed,Default);
  local_res18[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (&this->bIsBoundary,local_res18,
             (this->ResultMesh).VertexRefCounts.RefCounts.CurBlock * 0x200 +
             (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed);
  pTVar2 = &this->BoundaryVerts;
  piVar1 = &(this->BoundaryVerts).ArrayMax;
  (this->BoundaryVerts).ArrayNum = 0;
  if ((this->BoundaryVerts).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar22 = (this->ResultMesh).VertexRefCounts.RefCounts.CurBlock * 0x200 +
           (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed;
  if ((uVar22 != 0) &&
     (pFVar8 = (this->ResultMesh).VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar8 - 1U))) {
    uVar20 = 1;
    uVar19 = 1;
    if ((int)uVar22 < 2) goto joined_r0x00014ce5a56b;
    do {
      sVar14 = *(short *)(*(longlong *)(pFVar8 + (uVar20 >> 9) * 8) +
                         (ulonglong)((uint)uVar20 & 0x1ff) * 2);
      if ((sVar14 != 0) && (sVar14 != -1)) break;
      uVar19 = (uint)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
    } while ((int)uVar19 < (int)uVar22);
  }
  uVar19 = (uint)uVar20;
joined_r0x00014ce5a56b:
  if (uVar19 != uVar22) {
    while( true ) {
      uVar19 = (uint)uVar20;
      local_58[0] = uVar19;
      FVar12 = (FScriptContainerElement)
               UE::Geometry::FDynamicMesh3::IsBoundaryVertex(&this->ResultMesh,uVar19);
      lVar21 = (longlong)(int)local_58[0];
      uVar17 = 0;
      if ((int)local_58[0] < (this->bIsBoundary).ArrayNum) {
        uVar17 = ~local_58[0] >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      (this->bIsBoundary).AllocatorInstance.Data[lVar21] = FVar12;
      if ((bool)FVar12) {
        pFVar8 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar8 <= (FScriptContainerElement *)local_58) &&
            ((FScriptContainerElement *)local_58 < pFVar8 + (longlong)*piVar1 * 4)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar15 = (this->BoundaryVerts).ArrayNum;
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->BoundaryVerts).ArrayNum = iVar15 + 1;
        *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 4) = local_58[0];
      }
      uVar19 = uVar19 + 1;
      uVar20 = (ulonglong)uVar19;
      if ((int)uVar22 <= (int)uVar19) break;
      pFVar8 = (this->ResultMesh).VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        uVar18 = (ulonglong)((uint)uVar20 & 0x1ff);
        if ((*(short *)(*(longlong *)(pFVar8 + (uVar20 >> 9) * 8) + uVar18 * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar8 + (uVar20 >> 9) * 8) + uVar18 * 2) != -1)) break;
        uVar19 = (uint)uVar20 + 1;
        uVar20 = (ulonglong)uVar19;
        if ((int)uVar22 <= (int)uVar19) goto joined_r0x00014ce5a56b;
      }
    }
    goto joined_r0x00014ce5a56b;
  }
  if ((this->Steps < 2) || (this->SmoothAlpha <= 0.0)) {
    Offset(this,param_1);
  }
  else {
    Offset_Smoothed(this,param_1);
  }
  iVar15 = (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed +
           (this->ResultMesh).VertexRefCounts.RefCounts.CurBlock * 0x200;
  uVar22 = 0;
  if ((iVar15 != 0) &&
     (pFVar8 = (this->ResultMesh).VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data,
     uVar22 = 0, 0xfffd < (ushort)(**(short **)pFVar8 - 1U))) {
    uVar19 = 1;
    uVar22 = 1;
    if (1 < iVar15) {
      do {
        sVar14 = *(short *)(*(longlong *)(pFVar8 + (ulonglong)(uVar19 >> 9) * 8) +
                           (ulonglong)(uVar19 & 0x1ff) * 2);
        if ((sVar14 != 0) && (uVar22 = uVar19, sVar14 != -1)) break;
        uVar19 = uVar19 + 1;
        uVar22 = uVar19;
      } while ((int)uVar19 < iVar15);
    }
  }
  uVar19 = (this->ResultMesh).VertexRefCounts.RefCounts.CurBlock;
  uVar17 = (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed;
joined_r0x00014ce5a77d:
  do {
    if (uVar22 == uVar19 * 0x200 + uVar17) {
      if (local_50.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Normals.AllocatorInstance.Data);
      }
      return;
    }
    while( true ) {
      uVar16 = 0;
      if ((int)uVar22 < (this->PositionBuffer).ArrayNum) {
        uVar16 = ~uVar22 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar8 = (this->PositionBuffer).AllocatorInstance.Data;
      lVar21 = (longlong)(int)uVar22;
      sVar14 = _dclass(*(undefined8 *)(pFVar8 + lVar21 * 0x18));
      if (((sVar14 < 1) &&
          (sVar14 = _dclass(*(undefined8 *)(pFVar8 + lVar21 * 0x18 + 8)), sVar14 < 1)) &&
         (sVar14 = _dclass(*(undefined8 *)(pFVar8 + lVar21 * 0x18 + 0x10)), sVar14 < 1)) {
        uVar11 = *(undefined8 *)(pFVar8 + lVar21 * 0x18 + 8);
        uVar6 = *(undefined8 *)(pFVar8 + lVar21 * 0x18 + 0x10);
        lVar9 = *(longlong *)
                 ((this->ResultMesh).Vertices.Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar22 >> 9) * 8);
        puVar4 = (undefined8 *)(lVar9 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
        *puVar4 = *(undefined8 *)(pFVar8 + lVar21 * 0x18);
        puVar4[1] = uVar11;
        *(undefined8 *)(lVar9 + 0x10 + (ulonglong)(uVar22 & 0x1ff) * 0x18) = uVar6;
        if ((this->ResultMesh).ChangeStampShape.bIsEnabled != false) {
          this_00 = &(this->ResultMesh).ChangeStampShape.Mutex;
          LOCK();
          bVar13 = this_00->State == (atomic<unsigned_char>)0x0;
          if (bVar13) {
            this_00->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar13) {
            UE::FMutex::LockSlow(this_00);
          }
          puVar3 = &(this->ResultMesh).ChangeStampShape.Value;
          *puVar3 = *puVar3 + 1;
          LOCK();
          aVar5 = this_00->State;
          this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
          UNLOCK();
          if (((byte)aVar5 & 2) != 0) {
            UE::FMutex::WakeWaitingThread(this_00);
          }
        }
      }
      uVar22 = uVar22 + 1;
      if (iVar15 <= (int)uVar22) break;
      while( true ) {
        lVar21 = *(longlong *)
                  ((this->ResultMesh).VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar22 >> 9) * 8);
        if ((*(short *)(lVar21 + (ulonglong)(uVar22 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar21 + (ulonglong)(uVar22 & 0x1ff) * 2) != -1)) break;
        uVar22 = uVar22 + 1;
        if (iVar15 <= (int)uVar22) goto joined_r0x00014ce5a77d;
      }
    }
  } while( true );
}

// Offset @ 14ce6f610

void __thiscall FMeshOffset::Offset(FMeshOffset *this,FProgressCancel *param_1)

{
  FRefCountVector *pFVar1;
  FMutex *this_00;
  uint *puVar2;
  double *pdVar3;
  undefined8 *puVar4;
  atomic<unsigned_char> aVar5;
  double dVar6;
  undefined8 uVar7;
  FMeshNormals *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  bool bVar19;
  short sVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  int local_res20;
  IndexIterator local_f8;
  FMeshNormals *local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  FMeshNormals local_c8;
  IndexIterator local_b0;
  IndexIterator local_a0 [6];
  
  dVar6 = __real_3ff0000000000000;
  iVar26 = this->Steps;
  if (this->Steps < 1) {
    iVar26 = 1;
  }
  local_c8.Mesh = &this->ResultMesh;
  if (iVar26 == 1) {
    pFVar1 = &(this->ResultMesh).VertexRefCounts;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (&local_f8,pFVar1,0,
               (this->ResultMesh).VertexRefCounts.RefCounts.CurBlock * 0x200 +
               (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed);
    iVar26 = (pFVar1->RefCounts).CurBlock * 0x200 +
             (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_b0,pFVar1,iVar26,iVar26);
    if (local_f8._8_4_ != local_b0._8_4_) {
      do {
        uVar17 = local_f8._8_4_;
        dVar6 = this->OffsetDistance;
        lVar28 = *(longlong *)
                  ((this->ResultMesh).Vertices.Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)local_f8._8_4_ >> 9) * 8);
        pdVar3 = (double *)(lVar28 + (ulonglong)(local_f8._8_4_ & 0x1ff) * 0x18);
        dVar14 = *pdVar3;
        dVar32 = pdVar3[1];
        dVar31 = *(double *)(lVar28 + 0x10 + (ulonglong)(local_f8._8_4_ & 0x1ff) * 0x18);
        local_e0 = dVar14;
        dStack_d8 = dVar32;
        local_d0 = dVar31;
        if (this->bFixedBoundary == false) {
LAB_14ce6f759:
          lVar28 = (longlong)(int)uVar17;
          pFVar8 = this->BaseNormals;
          uVar25 = (uint)~uVar17 >> 0x1f;
          uVar23 = 0;
          if ((int)uVar17 < (pFVar8->Normals).ArrayNum) {
            uVar23 = uVar25;
          }
          if ((uVar23 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar9 = (pFVar8->Normals).AllocatorInstance.Data;
          dVar14 = local_e0 + dVar6 * *(double *)(pFVar9 + lVar28 * 0x18);
          dVar32 = dStack_d8 + dVar6 * *(double *)(pFVar9 + lVar28 * 0x18 + 8);
          dVar31 = local_d0 + dVar6 * *(double *)(pFVar9 + lVar28 * 0x18 + 0x10);
          local_d0 = dVar31;
        }
        else {
          uVar25 = (uint)~local_f8._8_4_ >> 0x1f;
          uVar23 = 0;
          if ((int)local_f8._8_4_ < (this->bIsBoundary).ArrayNum) {
            uVar23 = uVar25;
          }
          if ((uVar23 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if ((this->bIsBoundary).AllocatorInstance.Data[(int)uVar17] ==
              (FScriptContainerElement)0x0) goto LAB_14ce6f759;
        }
        if (((uVar25 & (int)uVar17 < (this->PositionBuffer).ArrayNum) == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar9 = (this->PositionBuffer).AllocatorInstance.Data;
        local_f8._8_4_ = uVar17 + 1;
        auVar12._8_4_ = SUB84(dVar32,0);
        auVar12._0_8_ = dVar14;
        auVar12._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
        *(undefined1 (*) [16])(pFVar9 + (longlong)(int)uVar17 * 0x18) = auVar12;
        *(double *)(pFVar9 + (longlong)(int)uVar17 * 0x18 + 0x10) = dVar31;
        if ((int)local_f8._8_4_ < (int)local_f8._12_4_) {
          do {
            if ((*(short *)(*(longlong *)
                             (*(longlong *)(local_f8._0_8_ + 8) +
                             (ulonglong)((uint)local_f8._8_4_ >> 9) * 8) +
                           (ulonglong)(local_f8._8_4_ & 0x1ff) * 2) != 0) &&
               (*(short *)(*(longlong *)
                            (*(longlong *)(local_f8._0_8_ + 8) +
                            (ulonglong)((uint)local_f8._8_4_ >> 9) * 8) +
                          (ulonglong)(local_f8._8_4_ & 0x1ff) * 2) != -1)) break;
            local_f8._8_4_ = local_f8._8_4_ + 1;
          } while ((int)local_f8._8_4_ < (int)local_f8._12_4_);
        }
      } while (local_f8._8_4_ != local_b0._8_4_);
    }
  }
  else {
    local_c8.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Normals.ArrayNum = 0;
    local_c8.Normals.ArrayMax = 0;
    local_res20 = 0;
    if (0 < iVar26) {
      do {
        if (local_res20 == 0) {
          local_e8 = this->BaseNormals;
        }
        else {
          local_e8 = &local_c8;
        }
        iVar27 = (this->ResultMesh).VertexRefCounts.RefCounts.CurBlock * 0x200 +
                 (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed;
        uVar23 = 0;
        if ((iVar27 != 0) &&
           (pFVar9 = (this->ResultMesh).VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data,
           0xfffd < (ushort)(**(short **)pFVar9 - 1U))) {
          uVar25 = 1;
          uVar23 = 1;
          if (1 < iVar27) {
            do {
              sVar20 = *(short *)(*(longlong *)(pFVar9 + (ulonglong)(uVar25 >> 9) * 8) +
                                 (ulonglong)(uVar25 & 0x1ff) * 2);
              if ((sVar20 != 0) && (uVar23 = uVar25, sVar20 != -1)) break;
              uVar25 = uVar25 + 1;
              uVar23 = uVar25;
            } while ((int)uVar25 < iVar27);
          }
        }
        uVar25 = (this->ResultMesh).VertexRefCounts.RefCounts.CurBlock * 0x200 +
                 (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed;
        if (uVar23 != uVar25) {
          do {
            dVar32 = (dVar6 / (double)iVar26) * this->OffsetDistance;
            uVar30 = ~uVar23;
            lVar28 = *(longlong *)
                      ((this->ResultMesh).Vertices.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar23 >> 9) * 8);
            pdVar3 = (double *)(lVar28 + (ulonglong)(uVar23 & 0x1ff) * 0x18);
            dVar14 = *pdVar3;
            dVar33 = pdVar3[1];
            dVar31 = *(double *)(lVar28 + 0x10 + (ulonglong)(uVar23 & 0x1ff) * 0x18);
            local_e0 = dVar14;
            dStack_d8 = dVar33;
            local_d0 = dVar31;
            if (this->bFixedBoundary == false) {
LAB_14ce6fa48:
              pFVar8 = local_e8;
              lVar28 = (longlong)(int)uVar23;
              uVar21 = 0;
              if ((int)uVar23 < (local_e8->Normals).ArrayNum) {
                uVar21 = uVar30 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar9 = (pFVar8->Normals).AllocatorInstance.Data;
              dVar14 = local_e0 + dVar32 * *(double *)(pFVar9 + lVar28 * 0x18);
              dVar33 = dStack_d8 + dVar32 * *(double *)(pFVar9 + lVar28 * 0x18 + 8);
              dVar31 = local_d0 + dVar32 * *(double *)(pFVar9 + lVar28 * 0x18 + 0x10);
              local_d0 = dVar31;
            }
            else {
              uVar21 = 0;
              if ((int)uVar23 < (this->bIsBoundary).ArrayNum) {
                uVar21 = uVar30 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if ((this->bIsBoundary).AllocatorInstance.Data[(int)uVar23] ==
                  (FScriptContainerElement)0x0) goto LAB_14ce6fa48;
            }
            lVar28 = (longlong)(int)uVar23;
            if (((uVar30 >> 0x1f & (uint)((int)uVar23 < (this->PositionBuffer).ArrayNum)) == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar9 = (this->PositionBuffer).AllocatorInstance.Data;
            uVar23 = uVar23 + 1;
            auVar13._8_4_ = SUB84(dVar33,0);
            auVar13._0_8_ = dVar14;
            auVar13._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
            *(undefined1 (*) [16])(pFVar9 + lVar28 * 0x18) = auVar13;
            *(double *)(pFVar9 + lVar28 * 0x18 + 0x10) = dVar31;
            if ((int)uVar23 < iVar27) {
              do {
                sVar20 = *(short *)(*(longlong *)
                                     ((this->ResultMesh).VertexRefCounts.RefCounts.Blocks.
                                      AllocatorInstance.Data + (ulonglong)(uVar23 >> 9) * 8) +
                                   (ulonglong)(uVar23 & 0x1ff) * 2);
                if ((sVar20 != 0) && (sVar20 != -1)) break;
                uVar23 = uVar23 + 1;
              } while ((int)uVar23 < iVar27);
            }
          } while (uVar23 != uVar25);
        }
        uVar24 = 0;
        iVar27 = (this->ResultMesh).VertexRefCounts.RefCounts.CurBlock * 0x200 +
                 (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed;
        if ((iVar27 != 0) &&
           (pFVar9 = (this->ResultMesh).VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data,
           0xfffd < (ushort)(**(short **)pFVar9 - 1U))) {
          uVar24 = 1;
          uVar18 = 1;
          if (1 < iVar27) {
            do {
              uVar24 = uVar18;
              sVar20 = *(short *)(*(longlong *)(pFVar9 + (uVar24 >> 9) * 8) +
                                 (ulonglong)((uint)uVar24 & 0x1ff) * 2);
              if ((sVar20 != 0) && (sVar20 != -1)) break;
              uVar23 = (uint)uVar24 + 1;
              uVar24 = (ulonglong)uVar23;
              uVar18 = uVar24;
            } while ((int)uVar23 < iVar27);
          }
        }
        iVar22 = (this->ResultMesh).VertexRefCounts.RefCounts.CurBlock * 0x200 +
                 (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed;
        local_e8 = (FMeshNormals *)CONCAT44(local_e8._4_4_,iVar22);
        if ((int)uVar24 != iVar22) {
          do {
            uVar25 = (uint)uVar24;
            uVar23 = 0;
            if ((int)uVar25 < (this->PositionBuffer).ArrayNum) {
              uVar23 = ~uVar25 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar9 = (this->PositionBuffer).AllocatorInstance.Data;
            lVar28 = (longlong)(int)uVar25;
            sVar20 = _dclass(*(undefined8 *)(pFVar9 + lVar28 * 0x18));
            if (((sVar20 < 1) &&
                (sVar20 = _dclass(*(undefined8 *)(pFVar9 + lVar28 * 0x18 + 8)), sVar20 < 1)) &&
               (sVar20 = _dclass(*(undefined8 *)(pFVar9 + lVar28 * 0x18 + 0x10)), sVar20 < 1)) {
              uVar15 = *(undefined8 *)(pFVar9 + lVar28 * 0x18 + 8);
              uVar7 = *(undefined8 *)(pFVar9 + lVar28 * 0x18 + 0x10);
              lVar29 = *(longlong *)
                        ((this->ResultMesh).Vertices.Blocks.AllocatorInstance.Data +
                        (uVar24 >> 9) * 8);
              puVar4 = (undefined8 *)(lVar29 + (ulonglong)(uVar25 & 0x1ff) * 0x18);
              *puVar4 = *(undefined8 *)(pFVar9 + lVar28 * 0x18);
              puVar4[1] = uVar15;
              *(undefined8 *)(lVar29 + 0x10 + (ulonglong)(uVar25 & 0x1ff) * 0x18) = uVar7;
              if ((this->ResultMesh).ChangeStampShape.bIsEnabled != false) {
                this_00 = &(this->ResultMesh).ChangeStampShape.Mutex;
                LOCK();
                bVar19 = this_00->State == (atomic<unsigned_char>)0x0;
                if (bVar19) {
                  this_00->State = (atomic<unsigned_char>)0x1;
                }
                UNLOCK();
                if (!bVar19) {
                  UE::FMutex::LockSlow(this_00);
                }
                puVar2 = &(this->ResultMesh).ChangeStampShape.Value;
                *puVar2 = *puVar2 + 1;
                LOCK();
                aVar5 = this_00->State;
                this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
                UNLOCK();
                if (((byte)aVar5 & 2) != 0) {
                  UE::FMutex::WakeWaitingThread(this_00);
                }
              }
            }
            uVar24 = (ulonglong)(uVar25 + 1);
            if ((int)(uVar25 + 1) < iVar27) {
              do {
                sVar20 = *(short *)(*(longlong *)
                                     ((this->ResultMesh).VertexRefCounts.RefCounts.Blocks.
                                      AllocatorInstance.Data + (uVar24 >> 9) * 8) +
                                   (ulonglong)((uint)uVar24 & 0x1ff) * 2);
                if ((sVar20 != 0) && (sVar20 != -1)) break;
                uVar23 = (uint)uVar24 + 1;
                uVar24 = (ulonglong)uVar23;
              } while ((int)uVar23 < iVar27);
            }
          } while ((int)uVar24 != (int)local_e8);
        }
        UE::Geometry::FMeshNormals::Compute_FaceAvg(&local_c8,true,true);
        local_res20 = local_res20 + 1;
      } while (local_res20 < iVar26);
    }
    pFVar1 = &(this->ResultMesh).VertexRefCounts;
    iVar26 = (this->ResultMesh).VertexRefCounts.RefCounts.CurBlock * 0x200 +
             (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed;
    uVar23 = 0;
    if ((iVar26 != 0) &&
       (pFVar9 = (this->ResultMesh).VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data,
       uVar23 = 0, 0xfffd < (ushort)(**(short **)pFVar9 - 1U))) {
      uVar25 = 1;
      uVar23 = 1;
      if (1 < iVar26) {
        do {
          sVar20 = *(short *)(*(longlong *)(pFVar9 + (ulonglong)(uVar25 >> 9) * 8) +
                             (ulonglong)(uVar25 & 0x1ff) * 2);
          if ((sVar20 != 0) && (uVar23 = uVar25, sVar20 != -1)) break;
          uVar25 = uVar25 + 1;
          uVar23 = uVar25;
        } while ((int)uVar25 < iVar26);
      }
    }
    iVar27 = (pFVar1->RefCounts).CurBlock * 0x200 +
             (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(local_a0,pFVar1,iVar27,iVar27);
joined_r0x00014ce6fdf7:
    if (uVar23 != local_a0[0]._8_4_) {
      lVar29 = (longlong)(int)uVar23;
      lVar28 = *(longlong *)
                ((this->ResultMesh).Vertices.Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar23 >> 9) * 8);
      puVar4 = (undefined8 *)(lVar28 + (ulonglong)(uVar23 & 0x1ff) * 0x18);
      uVar15 = *puVar4;
      uVar16 = puVar4[1];
      uVar7 = *(undefined8 *)(lVar28 + 0x10 + (ulonglong)(uVar23 & 0x1ff) * 0x18);
      uVar25 = 0;
      if ((int)uVar23 < (this->PositionBuffer).ArrayNum) {
        uVar25 = ~uVar23 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar10 = (this->PositionBuffer).AllocatorInstance.Data;
      uVar23 = uVar23 + 1;
      pFVar9 = pFVar10 + lVar29 * 0x18;
      *(undefined8 *)pFVar9 = uVar15;
      *(undefined8 *)(pFVar9 + 8) = uVar16;
      *(undefined8 *)(pFVar10 + lVar29 * 0x18 + 0x10) = uVar7;
      if ((int)uVar23 < iVar26) {
        do {
          lVar28 = *(longlong *)
                    ((this->ResultMesh).VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar23 >> 9) * 8);
          if ((*(short *)(lVar28 + (ulonglong)(uVar23 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar28 + (ulonglong)(uVar23 & 0x1ff) * 2) != -1)) break;
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < iVar26);
      }
      goto joined_r0x00014ce6fdf7;
    }
    if (local_c8.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Normals.AllocatorInstance.Data);
    }
  }
  return;
}

// Offset_Smoothed @ 14ce6ff10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMeshOffset::Offset_Smoothed(FMeshOffset *this,FProgressCancel *param_1)

{
  FMutex *this_00;
  uint *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  atomic<unsigned_char> aVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  byte bVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  undefined4 uVar18;
  bool bVar19;
  bool bVar20;
  short sVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  FMeshNormals *pFVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  FRefCountVector *pFVar30;
  double dVar31;
  double dVar32;
  undefined1 auStackY_4e8 [32];
  int local_494;
  IndexIterator local_490;
  ForAnyElementType local_480;
  int local_478;
  int local_474;
  int local_470;
  IndexIterator local_468;
  FMeshNormals local_458;
  IndexIterator local_440;
  BaseIterator local_430;
  double local_420;
  double dStack_418;
  double local_410;
  IndexIterator local_408;
  TArrayView<std::nullptr_t,int> local_3f8;
  code *local_3e8;
  FMeshOffset **local_3e0;
  FMeshOffset *local_3d8;
  ForAnyElementType *local_3d0;
  TArrayView<std::nullptr_t,int> local_3c8;
  code *local_3b8;
  FMeshOffset **local_3b0;
  IndexIterator local_3a8;
  FMeshOffset *local_398;
  ForAnyElementType *local_390;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_388;
  FDynamicMesh3 local_378;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_148;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  local_478 = (this->PositionBuffer).ArrayNum;
  lVar26 = (longlong)local_478;
  pFVar6 = (this->PositionBuffer).AllocatorInstance.Data;
  iVar28 = this->Steps;
  if (this->Steps < 1) {
    iVar28 = 1;
  }
  local_480.Data = (FScriptContainerElement *)0x0;
  local_470 = iVar28;
  if (local_478 == 0) {
    local_474 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_478,0,&local_480,local_478,&local_474);
    memcpy(local_480.Data,pFVar6,lVar26 * 0x18);
  }
  bVar20 = 0.0 < this->SmoothAlpha;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_378);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_148);
  if ((this->bReprojectSmooth != false) && (bVar20)) {
    UE::Geometry::FDynamicMesh3::Copy(&local_378,&this->ResultMesh,false,false,false,false);
    local_148.Mesh = &local_378;
    local_148.MeshChangeStamp = 0;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(&local_148,false);
    local_148.MeshChangeStamp = UE::Geometry::FDynamicMesh3::GetChangeStamp(local_148.Mesh);
  }
  dVar17 = __real_3ff0000000000000;
  local_458.Mesh = &this->ResultMesh;
  local_494 = 0;
  local_458.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_458.Normals.ArrayNum = 0;
  local_458.Normals.ArrayMax = 0;
  if (0 < iVar28) {
    do {
      pFVar30 = &(this->ResultMesh).VertexRefCounts;
      if (local_494 == 0) {
        pFVar25 = this->BaseNormals;
      }
      else {
        pFVar25 = &local_458;
      }
      iVar22 = (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed +
               (pFVar30->RefCounts).CurBlock * 0x200;
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_490,pFVar30,0,iVar22);
      iVar27 = (pFVar30->RefCounts).CurBlock * 0x200 +
               (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed;
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_408,pFVar30,iVar27,iVar27);
      if (local_490._8_4_ != local_408._8_4_) {
        do {
          uVar18 = local_490._8_4_;
          dVar13 = (dVar17 / (double)iVar28) * this->OffsetDistance;
          uVar29 = ~local_490._8_4_;
          lVar26 = *(longlong *)
                    ((this->ResultMesh).Vertices.Blocks.AllocatorInstance.Data +
                    (ulonglong)((uint)local_490._8_4_ >> 9) * 8);
          pdVar2 = (double *)(lVar26 + (ulonglong)(local_490._8_4_ & 0x1ff) * 0x18);
          dVar12 = *pdVar2;
          dVar32 = pdVar2[1];
          dVar31 = *(double *)(lVar26 + 0x10 + (ulonglong)(local_490._8_4_ & 0x1ff) * 0x18);
          local_420 = dVar12;
          dStack_418 = dVar32;
          local_410 = dVar31;
          if (this->bFixedBoundary == false) {
LAB_14ce701ef:
            lVar26 = (longlong)(int)uVar18;
            uVar24 = 0;
            if ((int)uVar18 < (pFVar25->Normals).ArrayNum) {
              uVar24 = uVar29 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar6 = (pFVar25->Normals).AllocatorInstance.Data;
            dVar12 = local_420 + dVar13 * *(double *)(pFVar6 + lVar26 * 0x18);
            dVar32 = dStack_418 + dVar13 * *(double *)(pFVar6 + lVar26 * 0x18 + 8);
            dVar31 = local_410 + dVar13 * *(double *)(pFVar6 + lVar26 * 0x18 + 0x10);
            local_410 = dVar31;
          }
          else {
            uVar24 = 0;
            if ((int)local_490._8_4_ < (this->bIsBoundary).ArrayNum) {
              uVar24 = uVar29 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if ((this->bIsBoundary).AllocatorInstance.Data[(int)uVar18] ==
                (FScriptContainerElement)0x0) goto LAB_14ce701ef;
          }
          if (((uVar29 >> 0x1f & (uint)((int)uVar18 < (this->PositionBuffer).ArrayNum)) == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar6 = (this->PositionBuffer).AllocatorInstance.Data;
          local_490._8_4_ = uVar18 + 1;
          auVar11._8_4_ = SUB84(dVar32,0);
          auVar11._0_8_ = dVar12;
          auVar11._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
          *(undefined1 (*) [16])(pFVar6 + (longlong)(int)uVar18 * 0x18) = auVar11;
          *(double *)(pFVar6 + (longlong)(int)uVar18 * 0x18 + 0x10) = dVar31;
          if ((int)local_490._8_4_ < (int)local_490._12_4_) {
            do {
              if ((*(short *)(*(longlong *)
                               (*(longlong *)(local_490._0_8_ + 8) +
                               (ulonglong)((uint)local_490._8_4_ >> 9) * 8) +
                             (ulonglong)(local_490._8_4_ & 0x1ff) * 2) != 0) &&
                 (*(short *)(*(longlong *)
                              (*(longlong *)(local_490._0_8_ + 8) +
                              (ulonglong)((uint)local_490._8_4_ >> 9) * 8) +
                            (ulonglong)(local_490._8_4_ & 0x1ff) * 2) != -1)) break;
              local_490._8_4_ = local_490._8_4_ + 1;
            } while ((int)local_490._8_4_ < (int)local_490._12_4_);
          }
        } while (local_490._8_4_ != local_408._8_4_);
      }
      pFVar30 = &(this->ResultMesh).VertexRefCounts;
      if (this->bReprojectSmooth == false) {
LAB_14ce70572:
        pFVar30 = &(this->ResultMesh).VertexRefCounts;
        if (bVar20) {
          local_390 = &local_480;
          local_388 = &local_148;
          local_3f8.DataPtr = (void **)0x0;
          local_3e8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`FMeshOffset::Offset_Smoothed'::__l24::<lambda_1>,void,int>
                      ::Call;
          local_3e0 = &local_398;
          local_3f8.ArrayNum = 0;
          local_398 = this;
          ParallelForImpl::
          ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                    (L"ParallelFor Task",iVar22,1,(TFunctionRef<void___cdecl(int)> *)&local_3e8,
                     (<lambda_1>)0x1,None,&local_3f8);
          if (this->bFixedBoundary == false) {
            local_3d0 = &local_480;
            local_3b8 = UE::Core::Private::Function::
                        TFunctionRefCaller<`FMeshOffset::Offset_Smoothed'::__l27::<lambda_2>,void,int>
                        ::Call;
            local_3b0 = &local_3d8;
            local_3c8.DataPtr = (void **)0x0;
            local_3c8.ArrayNum = 0;
            local_3d8 = this;
            ParallelForImpl::
            ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                      (L"ParallelFor Task",(this->BoundaryVerts).ArrayNum,1,
                       (TFunctionRef<void___cdecl(int)> *)&local_3b8,(<lambda_1>)0x1,None,&local_3c8
                      );
          }
          uVar29 = 0;
          iVar28 = (pFVar30->RefCounts).CurBlock * 0x200 +
                   (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed;
          if ((iVar28 != 0) &&
             (pFVar6 = (this->ResultMesh).VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data,
             0xfffd < (ushort)(**(short **)pFVar6 - 1U))) {
            uVar29 = 1;
            uVar24 = 1;
            if (1 < iVar28) {
              do {
                uVar29 = uVar24;
                sVar21 = *(short *)(*(longlong *)(pFVar6 + (ulonglong)(uVar29 >> 9) * 8) +
                                   (ulonglong)(uVar29 & 0x1ff) * 2);
                if ((sVar21 != 0) && (sVar21 != -1)) break;
                uVar29 = uVar29 + 1;
                uVar24 = uVar29;
              } while ((int)uVar29 < iVar28);
            }
          }
          uVar24 = (pFVar30->RefCounts).CurBlock;
          uVar5 = (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed;
joined_r0x00014ce706b8:
          if (uVar29 != uVar24 * 0x200 + uVar5) {
            uVar23 = 0;
            if ((int)uVar29 < local_478) {
              uVar23 = ~uVar29 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar26 = (longlong)(int)uVar29;
            uVar15 = *(undefined8 *)(local_480.Data + lVar26 * 0x18);
            uVar16 = *(undefined8 *)(local_480.Data + lVar26 * 0x18 + 8);
            uVar4 = *(undefined8 *)(local_480.Data + lVar26 * 0x18 + 0x10);
            uVar23 = 0;
            if ((int)uVar29 < (this->PositionBuffer).ArrayNum) {
              uVar23 = ~uVar29 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar8 = (this->PositionBuffer).AllocatorInstance.Data;
            uVar29 = uVar29 + 1;
            pFVar6 = pFVar8 + lVar26 * 0x18;
            *(undefined8 *)pFVar6 = uVar15;
            *(undefined8 *)(pFVar6 + 8) = uVar16;
            *(undefined8 *)(pFVar8 + lVar26 * 0x18 + 0x10) = uVar4;
            if ((int)uVar29 < iVar28) {
              do {
                lVar26 = *(longlong *)
                          ((this->ResultMesh).VertexRefCounts.RefCounts.Blocks.AllocatorInstance.
                           Data + (ulonglong)(uVar29 >> 9) * 8);
                if ((*(short *)(lVar26 + (ulonglong)(uVar29 & 0x1ff) * 2) != 0) &&
                   (*(short *)(lVar26 + (ulonglong)(uVar29 & 0x1ff) * 2) != -1)) break;
                uVar29 = uVar29 + 1;
              } while ((int)uVar29 < iVar28);
            }
            goto joined_r0x00014ce706b8;
          }
        }
      }
      else if (bVar20) {
        UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                  (&local_468,pFVar30,0,
                   (pFVar30->RefCounts).CurBlock * 0x200 +
                   (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed);
        iVar28 = (pFVar30->RefCounts).CurBlock * 0x200 +
                 (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed;
        UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                  (&local_440,pFVar30,iVar28,iVar28);
        uVar18 = local_440._8_4_;
        uVar29 = local_468._8_4_;
joined_r0x00014ce703a3:
        local_468._8_4_ = uVar29;
        if (uVar29 != uVar18) {
          lVar26 = (longlong)(int)uVar29;
          uVar24 = 0;
          if ((int)uVar29 < (this->PositionBuffer).ArrayNum) {
            uVar24 = ~uVar29 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar6 = (this->PositionBuffer).AllocatorInstance.Data;
          sVar21 = _dclass(*(undefined8 *)(pFVar6 + lVar26 * 0x18));
          if (((sVar21 < 1) &&
              (sVar21 = _dclass(*(undefined8 *)(pFVar6 + lVar26 * 0x18 + 8)), sVar21 < 1)) &&
             (sVar21 = _dclass(*(undefined8 *)(pFVar6 + lVar26 * 0x18 + 0x10)), sVar21 < 1)) {
            uVar15 = *(undefined8 *)(pFVar6 + lVar26 * 0x18 + 8);
            uVar4 = *(undefined8 *)(pFVar6 + lVar26 * 0x18 + 0x10);
            lVar7 = *(longlong *)
                     (local_378.Vertices.Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar29 >> 9) * 8);
            puVar3 = (undefined8 *)(lVar7 + (ulonglong)(uVar29 & 0x1ff) * 0x18);
            *puVar3 = *(undefined8 *)(pFVar6 + lVar26 * 0x18);
            puVar3[1] = uVar15;
            *(undefined8 *)(lVar7 + 0x10 + (ulonglong)(uVar29 & 0x1ff) * 0x18) = uVar4;
            if (local_378.ChangeStampShape.bIsEnabled != false) {
              LOCK();
              bVar19 = local_378.ChangeStampShape.Mutex.State == (atomic<unsigned_char>)0x0;
              if (bVar19) {
                local_378.ChangeStampShape.Mutex.State = (atomic<unsigned_char>)0x1;
              }
              UNLOCK();
              if (!bVar19) {
                UE::FMutex::LockSlow(&local_378.ChangeStampShape.Mutex);
              }
              local_378.ChangeStampShape.Value = local_378.ChangeStampShape.Value + 1;
              LOCK();
              aVar10 = local_378.ChangeStampShape.Mutex.State - 1;
              UNLOCK();
              bVar14 = (byte)local_378.ChangeStampShape.Mutex.State & 2;
              local_378.ChangeStampShape.Mutex.State = aVar10;
              if (bVar14 != 0) {
                UE::FMutex::WakeWaitingThread(&local_378.ChangeStampShape.Mutex);
              }
            }
          }
          uVar29 = uVar29 + 1;
          if ((int)uVar29 < (int)local_468._12_4_) {
            do {
              if ((*(short *)(*(longlong *)
                               (*(longlong *)(local_468._0_8_ + 8) + (ulonglong)(uVar29 >> 9) * 8) +
                             (ulonglong)(uVar29 & 0x1ff) * 2) != 0) &&
                 (*(short *)(*(longlong *)
                              (*(longlong *)(local_468._0_8_ + 8) + (ulonglong)(uVar29 >> 9) * 8) +
                            (ulonglong)(uVar29 & 0x1ff) * 2) != -1)) break;
              uVar29 = uVar29 + 1;
            } while ((int)uVar29 < (int)local_468._12_4_);
          }
          goto joined_r0x00014ce703a3;
        }
        UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(&local_148,false);
        local_148.MeshChangeStamp = UE::Geometry::FDynamicMesh3::GetChangeStamp(local_148.Mesh);
        goto LAB_14ce70572;
      }
      pFVar30 = &(this->ResultMesh).VertexRefCounts;
      uVar29 = 0;
      iVar28 = (pFVar30->RefCounts).CurBlock * 0x200 +
               (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed;
      if ((iVar28 != 0) &&
         (pFVar6 = (this->ResultMesh).VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data,
         0xfffd < (ushort)(**(short **)pFVar6 - 1U))) {
        uVar29 = 1;
        uVar24 = 1;
        if (1 < iVar28) {
          do {
            uVar29 = uVar24;
            sVar21 = *(short *)(*(longlong *)(pFVar6 + (ulonglong)(uVar29 >> 9) * 8) +
                               (ulonglong)(uVar29 & 0x1ff) * 2);
            if ((sVar21 != 0) && (sVar21 != -1)) break;
            uVar29 = uVar29 + 1;
            uVar24 = uVar29;
          } while ((int)uVar29 < iVar28);
        }
      }
      uVar24 = (pFVar30->RefCounts).CurBlock;
      uVar5 = (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed;
joined_r0x00014ce70858:
      if (uVar29 != uVar24 * 0x200 + uVar5) {
        uVar23 = 0;
        if ((int)uVar29 < (this->PositionBuffer).ArrayNum) {
          uVar23 = ~uVar29 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar6 = (this->PositionBuffer).AllocatorInstance.Data;
        lVar26 = (longlong)(int)uVar29;
        sVar21 = _dclass(*(undefined8 *)(pFVar6 + lVar26 * 0x18));
        if (((sVar21 < 1) &&
            (sVar21 = _dclass(*(undefined8 *)(pFVar6 + lVar26 * 0x18 + 8)), sVar21 < 1)) &&
           (sVar21 = _dclass(*(undefined8 *)(pFVar6 + lVar26 * 0x18 + 0x10)), sVar21 < 1)) {
          uVar15 = *(undefined8 *)(pFVar6 + lVar26 * 0x18 + 8);
          uVar4 = *(undefined8 *)(pFVar6 + lVar26 * 0x18 + 0x10);
          lVar7 = *(longlong *)
                   ((this->ResultMesh).Vertices.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar29 >> 9) * 8);
          puVar3 = (undefined8 *)(lVar7 + (ulonglong)(uVar29 & 0x1ff) * 0x18);
          *puVar3 = *(undefined8 *)(pFVar6 + lVar26 * 0x18);
          puVar3[1] = uVar15;
          *(undefined8 *)(lVar7 + 0x10 + (ulonglong)(uVar29 & 0x1ff) * 0x18) = uVar4;
          if ((this->ResultMesh).ChangeStampShape.bIsEnabled != false) {
            this_00 = &(this->ResultMesh).ChangeStampShape.Mutex;
            LOCK();
            bVar19 = this_00->State == (atomic<unsigned_char>)0x0;
            if (bVar19) {
              this_00->State = (atomic<unsigned_char>)0x1;
            }
            UNLOCK();
            if (!bVar19) {
              UE::FMutex::LockSlow(this_00);
            }
            puVar1 = &(this->ResultMesh).ChangeStampShape.Value;
            *puVar1 = *puVar1 + 1;
            LOCK();
            aVar10 = this_00->State;
            this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
            UNLOCK();
            if (((byte)aVar10 & 2) != 0) {
              UE::FMutex::WakeWaitingThread(this_00);
            }
          }
        }
        uVar29 = uVar29 + 1;
        if ((int)uVar29 < iVar28) {
          do {
            lVar26 = *(longlong *)
                      ((this->ResultMesh).VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar29 >> 9) * 8);
            if ((*(short *)(lVar26 + (ulonglong)(uVar29 & 0x1ff) * 2) != 0) &&
               (*(short *)(lVar26 + (ulonglong)(uVar29 & 0x1ff) * 2) != -1)) break;
            uVar29 = uVar29 + 1;
          } while ((int)uVar29 < iVar28);
        }
        goto joined_r0x00014ce70858;
      }
      UE::Geometry::FMeshNormals::Compute_FaceAvg(&local_458,true,true);
      local_494 = local_494 + 1;
      iVar28 = local_470;
    } while (local_494 < local_470);
  }
  UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_430,&(this->ResultMesh).VertexRefCounts,0,
             (this->ResultMesh).VertexRefCounts.RefCounts.CurBlock * 0x200 +
             (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed);
  iVar28 = (this->ResultMesh).VertexRefCounts.RefCounts.CurBlock * 0x200 +
           (this->ResultMesh).VertexRefCounts.RefCounts.CurBlockUsed;
  UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
            (&local_3a8,&(this->ResultMesh).VertexRefCounts,iVar28,iVar28);
  iVar28 = local_430.Index;
  while( true ) {
    if (iVar28 == local_3a8._8_4_) {
      if (local_458.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.Normals.AllocatorInstance.Data);
      }
      UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
      ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_148);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_378);
      if (local_480.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_480.Data);
      }
      return;
    }
    uVar24 = (uint)local_430._8_8_;
    lVar26 = *(longlong *)
              ((this->ResultMesh).Vertices.Blocks.AllocatorInstance.Data +
              ((local_430._8_8_ & 0xffffffff) >> 9) * 8);
    puVar3 = (undefined8 *)(lVar26 + (ulonglong)(uVar24 & 0x1ff) * 0x18);
    uVar15 = *puVar3;
    uVar16 = puVar3[1];
    uVar4 = *(undefined8 *)(lVar26 + 0x10 + (ulonglong)(uVar24 & 0x1ff) * 0x18);
    uVar29 = 0;
    if ((int)uVar24 < (this->PositionBuffer).ArrayNum) {
      uVar29 = ~uVar24 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) break;
    pFVar8 = (this->PositionBuffer).AllocatorInstance.Data;
    pFVar6 = pFVar8 + (longlong)(int)uVar24 * 0x18;
    *(undefined8 *)pFVar6 = uVar15;
    *(undefined8 *)(pFVar6 + 8) = uVar16;
    *(undefined8 *)(pFVar8 + (longlong)(int)uVar24 * 0x18 + 0x10) = uVar4;
    UE::Geometry::FRefCountVector::BaseIterator::goto_next(&local_430);
    iVar28 = local_430.Index;
  }
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

