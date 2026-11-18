// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// ~FPlanarHoleFiller @ 14c7b75e0

void __thiscall UE::Geometry::FPlanarHoleFiller::~FPlanarHoleFiller(FPlanarHoleFiller *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7FPlanarHoleFiller_Geometry_UE__6B_;
  if (*(longlong *)&this->PlanarTriangulationFunc != 0) {
    plVar1 = *(longlong **)&(this->PlanarTriangulationFunc).field_0x28;
    plVar2 = (longlong *)&(this->PlanarTriangulationFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// Fill @ 14c803f30

bool __thiscall UE::Geometry::FPlanarHoleFiller::Fill(FPlanarHoleFiller *this,int param_1)

{
  uint *puVar1;
  double *pdVar2;
  int *piVar3;
  uint uVar4;
  FDynamicMesh3 *pFVar5;
  longlong *plVar6;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar7;
  void *_Src;
  code *pcVar8;
  double dVar9;
  double dVar10;
  FPolygonNesting *pFVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  longlong *plVar18;
  int iVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  ForAnyElementType FVar23;
  FScriptContainerElement *pFVar24;
  uint *puVar25;
  FScriptContainerElement *pFVar26;
  double dVar27;
  int local_res10;
  bool local_res18;
  undefined1 local_res20 [8];
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156;
  undefined1 local_155;
  int local_154;
  ForAnyElementType local_150;
  int local_148 [2];
  FPolygonNesting *local_140;
  TPlanarComplex<double> local_138;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_110;
  double local_108;
  double dStack_100;
  FIndex3i_u_0 local_f8;
  uint *local_e8 [2];
  FPolygonNesting *local_d8;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8;
  TGeneralPolygon2<double> local_a0;
  double local_78;
  double dStack_70;
  double local_68;
  
  local_res10 = param_1;
  if ((param_1 < 0) && (pFVar5 = this->Mesh, (pFVar5->TriangleGroups).bIsSet != false)) {
    local_res10 = pFVar5->GroupIDCounter;
    pFVar5->GroupIDCounter = local_res10 + 1;
  }
  VectorUtil::MakePerpVectors<double>
            (&this->PlaneNormal,(TVector<double> *)&local_d0._s_0,(TVector<double> *)&local_b8._s_0)
  ;
  local_110 = this->VertexLoops;
  local_138.Polygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Polygons.ArrayNum = 0;
  local_138.Polygons.ArrayMax = 0;
  local_138.bTrustOrientations = true;
  local_138.bAllowOverlappingHoles = false;
  local_138.Solids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Solids.ArrayNum = 0;
  local_138.Solids.ArrayMax = 0;
  uVar4 = local_110->ArrayNum;
  uVar20 = (ulonglong)(int)uVar4;
  pFVar26 = (local_110->AllocatorInstance).Data;
  local_140 = (FPolygonNesting *)(pFVar26 + uVar20 * 0x10);
  while( true ) {
    pFVar11 = local_140;
    if (local_110->ArrayNum != (int)uVar20) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res20);
    }
    if ((FPolygonNesting *)pFVar26 == pFVar11) break;
    if (local_138.Polygons.ArrayNum == local_138.Polygons.ArrayMax) {
      local_138.Polygons.ArrayNum =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,(ForAnyElementType *)&local_138,&local_138.Polygons.ArrayMax);
    }
    pFVar21 = local_138.Polygons.AllocatorInstance.Data +
              (longlong)local_138.Polygons.ArrayNum * 0x10;
    *(FScriptContainerElement **)pFVar21 = (FScriptContainerElement *)0x0;
    *(FScriptContainerElement **)(pFVar21 + 8) = (FScriptContainerElement *)0x0;
    puVar25 = *(uint **)pFVar26;
    iVar19 = *(int *)(pFVar26 + 8);
    puVar1 = puVar25 + iVar19;
    local_138.Polygons.ArrayNum = local_138.Polygons.ArrayNum + 1;
    while( true ) {
      if (*(int *)(pFVar26 + 8) != iVar19) {
        local_158 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_158);
      }
      if (puVar25 == puVar1) break;
      uVar20 = (ulonglong)(*puVar25 & 0x1ff);
      lVar22 = *(longlong *)
                ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                (ulonglong)(*puVar25 >> 9) * 8);
      pdVar2 = (double *)(lVar22 + uVar20 * 0x18);
      local_78 = *pdVar2;
      dStack_70 = pdVar2[1];
      local_68 = *(double *)(lVar22 + 0x10 + uVar20 * 0x18);
                    /* WARNING: Load size is inaccurate */
      dVar27 = local_78 - (this->PlaneOrigin).field0_0x0._s_0.X;
      dVar10 = local_68 - (this->PlaneOrigin).field0_0x0._s_0.Z;
      dVar9 = dStack_70 - (this->PlaneOrigin).field0_0x0._s_0.Y;
      local_108 = local_d0._s_0.Y * dVar9 + local_d0._s_0.X * dVar27 + local_d0._s_0.Z * dVar10;
      dStack_100 = local_b8._s_0.Y * dVar9 + local_b8._s_0.X * dVar27 + local_b8._s_0.Z * dVar10;
      if (((*pFVar21 <= (FScriptContainerElement *)&local_108) &&
          ((FScriptContainerElement *)&local_108 <
           *pFVar21 + (longlong)*(int *)(pFVar21 + 0xc) * 0x10)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      iVar14 = *(int *)(pFVar21 + 8);
      if (iVar14 == *(int *)(pFVar21 + 0xc)) {
        iVar14 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)pFVar21,(int *)(pFVar21 + 0xc));
      }
      *(int *)(pFVar21 + 8) = iVar14 + 1;
                    /* WARNING: Load size is inaccurate */
      FVar23.Data = *pFVar21;
      puVar25 = puVar25 + 1;
      *(double *)(FVar23.Data + (longlong)iVar14 * 0x10) = local_108;
      *(double *)(FVar23.Data + (longlong)iVar14 * 0x10 + 8) = dStack_100;
    }
    pFVar26 = pFVar26 + 0x10;
    uVar20 = (ulonglong)uVar4;
  }
  local_138.bTrustOrientations = true;
  local_138.bAllowOverlappingHoles = false;
  TPlanarComplex<double>::FindSolidRegions(&local_138);
  uVar20 = (ulonglong)local_138.Solids.ArrayNum;
  local_res18 = true;
  local_110 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
              CONCAT44(local_110._4_4_,local_138.Solids.ArrayNum);
  local_d8 = (FPolygonNesting *)(local_138.Solids.AllocatorInstance.Data + uVar20 * 0x18);
  FVar23.Data = local_138.Solids.AllocatorInstance.Data;
  while( true ) {
    pFVar11 = local_d8;
    local_140 = (FPolygonNesting *)FVar23.Data;
    if (local_138.Solids.ArrayNum != (int)uVar20) {
      local_157 = 0;
      `TCheckedPointerIterator<UE::Geometry::TPlanarComplex<double>::FPolygonNesting,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_157);
    }
    if ((FPolygonNesting *)FVar23.Data == pFVar11) {
      DestructItems<UE::Geometry::TPlanarComplex<double>::FPolygonNesting,int>
                ((FPolygonNesting *)local_138.Solids.AllocatorInstance.Data,
                 local_138.Solids.ArrayNum);
      if ((FPolygonNesting *)local_138.Solids.AllocatorInstance.Data != (FPolygonNesting *)0x0) {
        FMemory::Free(local_138.Solids.AllocatorInstance.Data);
      }
      DestructItems<UE::Geometry::TPolygon2<double>,int>
                ((TPolygon2<double> *)local_138.Polygons.AllocatorInstance.Data,
                 local_138.Polygons.ArrayNum);
      if (local_138.Polygons.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Polygons.AllocatorInstance.Data);
      }
      return local_res18;
    }
    TPlanarComplex<double>::ConvertNestToGeneralPolygon
              (&local_138,&local_a0,(FPolygonNesting *)FVar23.Data);
    Core::Private::Function::CheckCallable(*(void **)&this->PlanarTriangulationFunc);
    plVar6 = *(longlong **)&(this->PlanarTriangulationFunc).field_0x28;
    pcVar8 = *(code **)&this->PlanarTriangulationFunc;
    plVar18 = (longlong *)&(this->PlanarTriangulationFunc).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar18 = plVar6;
    }
    uVar17 = (**(code **)(*plVar18 + 8))();
    (*pcVar8)(local_e8,uVar17,&local_a0);
    uVar4 = ((FPolygonNesting *)FVar23.Data)->OuterIndex;
    pTVar7 = this->VertexLoops;
    uVar15 = 0;
    if ((int)uVar4 < pTVar7->ArrayNum) {
      uVar15 = ~uVar4 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) break;
    pFVar26 = (pTVar7->AllocatorInstance).Data;
    local_150.Data = (FScriptContainerElement *)0x0;
    local_148[0] = *(int *)(pFVar26 + (longlong)(int)uVar4 * 0x10 + 8);
    lVar22 = (longlong)local_148[0];
    _Src = *(void **)(pFVar26 + (longlong)(int)uVar4 * 0x10);
    if (local_148[0] == 0) {
      local_148[1] = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_148[0],0,&local_150,local_148[0],local_148 + 1);
      memcpy(local_150.Data,_Src,lVar22 << 2);
    }
    pFVar21 = (((FPolygonNesting *)FVar23.Data)->HoleIndices).AllocatorInstance.Data;
    iVar19 = (((FPolygonNesting *)FVar23.Data)->HoleIndices).ArrayNum;
    pFVar26 = pFVar21 + (longlong)iVar19 * 4;
    while( true ) {
      if ((((FPolygonNesting *)FVar23.Data)->HoleIndices).ArrayNum != iVar19) {
        local_156 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_156);
      }
      if (pFVar21 == pFVar26) break;
      uVar4 = *(uint *)pFVar21;
      pTVar7 = this->VertexLoops;
      uVar15 = 0;
      if ((int)uVar4 < pTVar7->ArrayNum) {
        uVar15 = ~uVar4 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      pFVar24 = (pTVar7->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x10;
      if (((FScriptContainerElement *)&local_150 == pFVar24) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      iVar14 = *(int *)(pFVar24 + 8);
      if (iVar14 != 0) {
        iVar16 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar14,&local_150,local_148,local_148 + 1);
        memcpy(local_150.Data + (longlong)iVar16 * 4,*(void **)pFVar24,(longlong)iVar14 << 2);
      }
      pFVar21 = pFVar21 + 4;
      FVar23.Data = (FScriptContainerElement *)local_140;
    }
    iVar19 = (int)local_e8[1];
    puVar1 = local_e8[0] + (longlong)iVar19 * 3;
    puVar25 = local_e8[0];
    while( true ) {
      if ((int)local_e8[1] != iVar19) {
        local_155 = 0;
        `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_155);
      }
      if (puVar25 == puVar1) break;
      uVar4 = puVar25[2];
      uVar15 = 0;
      if ((int)uVar4 < local_148[0]) {
        uVar15 = ~uVar4 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      iVar14 = *(int *)(local_150.Data + (longlong)(int)uVar4 * 4);
      uVar4 = puVar25[1];
      uVar15 = 0;
      if ((int)uVar4 < local_148[0]) {
        uVar15 = ~uVar4 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      iVar16 = *(int *)(local_150.Data + (longlong)(int)uVar4 * 4);
      uVar4 = *puVar25;
      uVar15 = 0;
      if ((int)uVar4 < local_148[0]) {
        uVar15 = ~uVar4 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      local_f8._s_0.A = *(undefined4 *)(local_150.Data + (longlong)(int)uVar4 * 4);
      local_f8._s_0.B = iVar16;
      local_f8._s_0.C = iVar14;
      local_154 = FDynamicMesh3::AppendTriangle(this->Mesh,(FIndex3i *)&local_f8._s_0,local_res10);
      if (local_154 < 0) {
        puVar25 = puVar25 + 3;
        local_res18 = false;
      }
      else {
        if ((((int *)this->_padding_ <= &local_154) &&
            (&local_154 < (int *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        iVar14 = (int)this->_padding_;
        piVar3 = (int *)((longlong)&this->_padding_ + 4);
        if (iVar14 == *piVar3) {
          iVar14 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)&this->_padding_,piVar3);
        }
        puVar25 = puVar25 + 3;
        *(int *)&this->_padding_ = iVar14 + 1;
        *(int *)(this->_padding_ + (longlong)iVar14 * 4) = local_154;
      }
    }
    if (local_150.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data);
    }
    if (local_e8[0] != (uint *)0x0) {
      FMemory::Free(local_e8[0]);
    }
    DestructItems<UE::Geometry::TPolygon2<double>,int>
              ((TPolygon2<double> *)local_a0.Holes.AllocatorInstance.Data,local_a0.Holes.ArrayNum);
    if (local_a0.Holes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Holes.AllocatorInstance.Data);
    }
    if (local_a0.Outer.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Outer.Vertices.AllocatorInstance.Data);
    }
    uVar20 = (ulonglong)local_110 & 0xffffffff;
    FVar23.Data = (FScriptContainerElement *)(local_140 + 1);
  }
  pcVar8 = (code *)swi(3);
  uVar13 = (*pcVar8)();
  return (bool)uVar13;
}

// Validate @ 14c851220

EOperationValidationResult __thiscall
UE::Geometry::FPlanarHoleFiller::Validate(FPlanarHoleFiller *this)

{
  return Ok;
}

