// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 5

// Reset @ 149522ed0

void __thiscall floatTetWild::FTriTreeWrapper::Reset(FTriTreeWrapper *this)

{
  (this->Vertices).ArrayNum = 0;
  if ((this->Vertices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,&(this->Vertices).ArrayMax);
  }
  (this->Tris).ArrayNum = 0;
  if ((this->Tris).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->Tris).AllocatorInstance,0,&(this->Tris).ArrayMax);
  }
  this->bTreeBuilt = false;
  return;
}

// FTriTreeWrapper @ 1495a64f0

FTriTreeWrapper * __thiscall floatTetWild::FTriTreeWrapper::FTriTreeWrapper(FTriTreeWrapper *this)

{
  undefined1 *puVar1;
  TDynamicVector<int,512> *pTVar2;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar3;
  
  (this->Tree).TopDownLeafMaxTriCount = 3;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Tree)._padding_ =
       (longlong)
       &
       ___7__TMeshAABBTree3_U__TIndexVectorMeshArrayAdapter_UFIndex3i_Geometry_UE__NU__TVector_N_Math_3__Geometry_UE___Geometry_UE__6B_
  ;
  (this->Mesh).SourceVertices = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0
  ;
  (this->Mesh).SourceTriangles = (TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)0x0;
  (this->Tree).MeshChangeStamp = 0;
  (this->Tris).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tris).ArrayNum = 0;
  (this->Tris).ArrayMax = 0;
  *(undefined8 *)&(this->Tree).GetSplitAxis = 0;
  *(undefined8 *)&(this->Tree).GetSplitAxis.field_0x28 = 0;
  *(undefined ***)&(this->Tree).GetSplitAxis.field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->Tree).GetSplitAxis.field_0x18;
  *(code **)puVar1 =
       `UE::Geometry::
       TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
       ::MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&(this->Tree).GetSplitAxis =
         UE::Core::Private::Function::
         TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
         ::Call;
  }
  pTVar2 = &(this->Tree).BoxToIndex;
  (this->Tree).BoxEps = 1e-08;
  pTVar2->CurBlock = 0;
  pTVar2->CurBlockUsed = 0;
  (this->Tree).BoxToIndex.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tree).BoxToIndex.Blocks.ArrayNum = 0;
  (this->Tree).BoxToIndex.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(pTVar2);
  pTVar3 = &(this->Tree).BoxCenters;
  pTVar3->CurBlock = 0;
  pTVar3->CurBlockUsed = 0;
  (this->Tree).BoxCenters.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tree).BoxCenters.Blocks.ArrayNum = 0;
  (this->Tree).BoxCenters.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar3);
  pTVar3 = &(this->Tree).BoxExtents;
  pTVar3->CurBlock = 0;
  pTVar3->CurBlockUsed = 0;
  (this->Tree).BoxExtents.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tree).BoxExtents.Blocks.ArrayNum = 0;
  (this->Tree).BoxExtents.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar3);
  pTVar2 = &(this->Tree).IndexList;
  pTVar2->CurBlock = 0;
  pTVar2->CurBlockUsed = 0;
  (this->Tree).IndexList.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tree).IndexList.Blocks.ArrayNum = 0;
  (this->Tree).IndexList.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(pTVar2);
  (this->Tree).Mesh =
       (TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> *)0x0
  ;
  (this->Tree).TrianglesEnd = -1;
  (this->Tree).RootIndex = -1;
  this->bTreeBuilt = false;
  (this->Mesh).SourceVertices = &this->Vertices;
  (this->Mesh).SourceTriangles = &this->Tris;
  return this;
}

// SetFromMesh @ 1495c9a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
floatTetWild::FTriTreeWrapper::SetFromMesh
          (FTriTreeWrapper *this,
          vector<Eigen::Matrix<double,3,1,0,3,1>,std::allocator<Eigen::Matrix<double,3,1,0,3,1>_>_>
          *param_1,vector<Eigen::Matrix<int,3,1,0,3,1>,std::allocator<Eigen::Matrix<int,3,1,0,3,1>_>_>
                   *param_2)

{
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Matrix<double,3,1,0,3,1> *pMVar8;
  FScriptContainerElement *pFVar9;
  Matrix<int,3,1,0,3,1> *pMVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Vertices,
             (int)(((longlong)(param_1->_Mypair)._Myval2._Mylast -
                   (longlong)(param_1->_Mypair)._Myval2._Myfirst) / 0x18),Default);
  pTVar1 = &this->Tris;
  lVar17 = (longlong)(param_2->_Mypair)._Myval2._Mylast -
           (longlong)(param_2->_Mypair)._Myval2._Myfirst;
  piVar3 = &(this->Tris).ArrayNum;
  lVar17 = lVar17 / 6 + (lVar17 >> 0x3f);
  iVar16 = *piVar3;
  uVar18 = (lVar17 >> 1) - (lVar17 >> 0x3f);
  uVar21 = (uint)uVar18;
  if (iVar16 < (int)uVar21) {
    iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xc,4,uVar21 - iVar16,&pTVar1->AllocatorInstance,piVar3,
                        &(this->Tris).ArrayMax);
    DefaultConstructItems<UE::Geometry::FIndex3i,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar15 * 0xc,uVar21 - iVar16);
  }
  else {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar18 & 0xffffffff);
    }
    if ((int)uVar21 < iVar16) {
      uVar20 = iVar16 - uVar21;
      if (((int)(uVar20 | uVar21) < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (uVar20 != 0) {
        pFVar9 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar21 * 0xc;
        iVar16 = (*piVar3 - uVar20) - uVar21;
        if (iVar16 != 0) {
          memmove(pFVar9,pFVar9 + (longlong)(int)uVar20 * 0xc,(longlong)iVar16 * 0xc);
        }
        *piVar3 = *piVar3 - uVar20;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,&pTVar1->AllocatorInstance,*piVar3,&(this->Tris).ArrayMax);
      }
    }
  }
  uVar21 = 0;
  lVar17 = (longlong)(this->Vertices).ArrayNum;
  if (0 < lVar17) {
    lVar19 = 0;
    do {
      pMVar8 = (param_1->_Mypair)._Myval2._Myfirst;
      puVar2 = (undefined8 *)(&pMVar8->field_0x0 + lVar19);
      uVar12 = *puVar2;
      uVar13 = puVar2[1];
      uVar4 = *(undefined8 *)(&pMVar8->field_0x10 + lVar19);
      uVar20 = 0;
      if ((int)uVar21 < (this->Vertices).ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar9 = (this->Vertices).AllocatorInstance.Data;
      uVar21 = uVar21 + 1;
      *(undefined8 *)(pFVar9 + lVar19) = uVar12;
      *(undefined8 *)(pFVar9 + lVar19 + 8) = uVar13;
      *(undefined8 *)(pFVar9 + lVar19 + 0x10) = uVar4;
      lVar19 = lVar19 + 0x18;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  lVar17 = (longlong)(this->Tris).ArrayNum;
  uVar21 = 0;
  if (0 < lVar17) {
    lVar19 = 0;
    do {
      pMVar10 = (param_2->_Mypair)._Myval2._Myfirst;
      uVar5 = *(undefined4 *)(&pMVar10->field_0x0 + lVar19);
      uVar6 = *(undefined4 *)(&pMVar10->field_0x4 + lVar19);
      uVar7 = *(undefined4 *)(&pMVar10->field_0x8 + lVar19);
      uVar20 = 0;
      if ((int)uVar21 < *piVar3) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar9 = (pTVar1->AllocatorInstance).Data;
      uVar21 = uVar21 + 1;
      *(undefined4 *)(pFVar9 + lVar19) = uVar5;
      *(undefined4 *)(pFVar9 + lVar19 + 4) = uVar6;
      *(undefined4 *)(pFVar9 + lVar19 + 8) = uVar7;
      lVar19 = lVar19 + 0xc;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  return;
}

// facet_in_envelope @ 1495ebda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
floatTetWild::FTriTreeWrapper::facet_in_envelope
          (FTriTreeWrapper *this,Matrix<double,3,1,0,3,1> *param_1,double param_2,
          Matrix<double,3,1,0,3,1> *param_3,double *param_4)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 in_R8;
  undefined1 auStackY_1d8 [32];
  int local_1a8 [2];
  double local_1a0;
  double dStack_198;
  double local_190;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 TStack_170;
  TVector<double>_u_0 local_158 [2];
  double local_128;
  undefined8 local_118;
  longlong local_108;
  longlong local_f8 [3];
  longlong *local_e0;
  undefined1 local_d8;
  TVector<double>_u_0 local_c8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  double local_70;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_1a8[0] = -1;
  local_1a0 = *(double *)param_1;
  dStack_198 = *(double *)&param_1->field_0x8;
  local_108 = 0;
  local_190 = *(double *)&param_1->field_0x10;
  local_e0 = (longlong *)0x0;
  local_d8 = 0;
  local_118 = __real_7fefffffffffffff;
  cVar4 = (**(code **)((this->Tree)._padding_ + 0x58))(&this->Tree,&local_1a0,in_R8,local_1a8);
  if (local_108 != 0) {
    plVar7 = local_f8;
    if (local_e0 != (longlong *)0x0) {
      plVar7 = local_e0;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  dVar3 = dStack_198;
  dVar2 = local_1a0;
  if (cVar4 == '\0') {
    local_1a8[0] = (this->Tris).ArrayNum + -1;
  }
  iVar6 = local_1a8[0];
  if (-1 < local_1a8[0]) {
    local_128 = local_190;
    if (((local_1a8[0] < 0) || (((this->Mesh).SourceTriangles)->ArrayNum <= local_1a8[0])) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mesh.IsTriangle(TriIdx)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                           ,0x1e,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    UE::Geometry::
    TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>::
    GetTriVertices(&this->Mesh,iVar6,(TVector<double> *)&local_188._s_0,
                   (TVector<double> *)&TStack_170._s_0,(TVector<double> *)&local_158[0]._s_0);
    local_c8._s_0.Z = local_128;
    local_b0 = local_188._s_0.X;
    dStack_a8 = local_188._s_0.Y;
    local_a0 = local_188._s_0.Z;
    dStack_98 = TStack_170._s_0.X;
    local_90 = TStack_170._s_0.Y;
    dStack_88 = TStack_170._s_0.Z;
    local_c8._s_0.X = dVar2;
    local_80 = (double)local_158[0]._0_8_;
    dStack_78 = (double)local_158[0]._8_8_;
    local_70 = (double)local_158[0]._16_8_;
    local_c8._s_0.Y = dVar3;
    UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult
              ((TDistPoint3Triangle3<double> *)&local_c8._s_0);
    dVar2 = UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult
                      ((TDistPoint3Triangle3<double> *)&local_c8._s_0);
    *param_4 = dVar2;
    *(undefined8 *)param_3 = local_50;
    *(undefined8 *)&param_3->field_0x8 = uStack_48;
    *(undefined8 *)&param_3->field_0x10 = local_40;
  }
  return local_1a8[0];
}

// nearest_facet @ 149608220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
floatTetWild::FTriTreeWrapper::nearest_facet
          (FTriTreeWrapper *this,Matrix<double,3,1,0,3,1> *param_1,Matrix<double,3,1,0,3,1> *param_2
          ,double *param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStackY_1d8 [32];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 TStack_170;
  TVector<double>_u_0 local_158 [2];
  double local_128;
  undefined8 local_118 [2];
  longlong local_108;
  longlong local_f8 [3];
  longlong *local_e0;
  undefined1 local_d8;
  TVector<double>_u_0 local_c8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  double local_70;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_1a8 = *(double *)param_1;
  dStack_1a0 = *(double *)&param_1->field_0x8;
  local_198 = *(double *)&param_1->field_0x10;
  local_108 = 0;
  local_e0 = (longlong *)0x0;
  local_d8 = 0;
  local_118[0] = __real_7fefffffffffffff;
  iVar5 = (**(code **)((this->Tree)._padding_ + 0x20))(&this->Tree,&local_1a8,param_3,local_118);
  if (local_108 != 0) {
    plVar6 = local_f8;
    if (local_e0 != (longlong *)0x0) {
      plVar6 = local_e0;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  dVar3 = dStack_1a0;
  dVar2 = local_1a8;
  if (iVar5 != -1) {
    local_128 = local_198;
    if ((iVar5 < 0) || (((this->Mesh).SourceTriangles)->ArrayNum <= iVar5)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh.IsTriangle(TriIdx)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                         ,0x1e,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
    }
    UE::Geometry::
    TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>::
    GetTriVertices(&this->Mesh,iVar5,(TVector<double> *)&local_188._s_0,
                   (TVector<double> *)&TStack_170._s_0,(TVector<double> *)&local_158[0]._s_0);
    local_c8._s_0.Z = local_128;
    local_b0 = local_188._s_0.X;
    dStack_a8 = local_188._s_0.Y;
    local_a0 = local_188._s_0.Z;
    dStack_98 = TStack_170._s_0.X;
    local_90 = TStack_170._s_0.Y;
    dStack_88 = TStack_170._s_0.Z;
    local_c8._s_0.X = dVar2;
    local_80 = (double)local_158[0]._0_8_;
    dStack_78 = (double)local_158[0]._8_8_;
    local_70 = (double)local_158[0]._16_8_;
    local_c8._s_0.Y = dVar3;
    UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult
              ((TDistPoint3Triangle3<double> *)&local_c8._s_0);
    *(undefined8 *)param_2 = local_50;
    *(undefined8 *)&param_2->field_0x8 = uStack_48;
    *(undefined8 *)&param_2->field_0x10 = local_40;
  }
  return iVar5;
}

