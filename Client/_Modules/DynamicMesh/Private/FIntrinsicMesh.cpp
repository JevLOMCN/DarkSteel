// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 11

// FIntrinsicMesh @ 14c6df450

FIntrinsicMesh * __thiscall
UE::Geometry::FIntrinsicMesh::FIntrinsicMesh(FIntrinsicMesh *this,FDynamicMesh3 *param_1)

{
  TDynamicVector<int,512> *this_00;
  TDynamicVector<UE::Geometry::FIndex3i,512> *this_01;
  FNormalCoordinates *this_02;
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uStack_34;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  FSimpleIntrinsicEdgeFlipMesh::FSimpleIntrinsicEdgeFlipMesh
            ((FSimpleIntrinsicEdgeFlipMesh *)this,param_1);
  uVar5 = 0;
  this_02 = &this->NormalCoordinates;
  this_00 = &(this->NormalCoordinates).NormalCoord;
  this_02->_padding_ = 0;
  this_00->CurBlock = 0;
  this_00->CurBlockUsed = 0;
  (this->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NormalCoordinates).NormalCoord.Blocks.ArrayNum = 0;
  (this->NormalCoordinates).NormalCoord.Blocks.ArrayMax = 0;
  (this->NormalCoordinates)._padding_ = 0;
  (this->NormalCoordinates)._padding_ = 0;
  (this->NormalCoordinates)._padding_ = 0;
  (this->NormalCoordinates)._padding_ = 0;
  (this->NormalCoordinates)._padding_ = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(this_00);
  this_01 = &(this->NormalCoordinates).RoundaboutOrder;
  this_01->CurBlock = 0;
  this_01->CurBlockUsed = 0;
  (this->NormalCoordinates).RoundaboutOrder.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NormalCoordinates).RoundaboutOrder.Blocks.ArrayNum = 0;
  (this->NormalCoordinates).RoundaboutOrder.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(this_01);
  (this->NormalCoordinates).RefVertDegree.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalCoordinates).RefVertDegree.ArrayNum = 0;
  (this->NormalCoordinates).RefVertDegree.ArrayMax = 0;
  (this->NormalCoordinates).EdgeOrder.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalCoordinates).EdgeOrder.ArrayNum = 0;
  (this->NormalCoordinates).EdgeOrder.ArrayMax = 0;
  IntrinsicCorrespondenceUtils::FMeshConnection::Reset((FMeshConnection *)this_02,param_1);
  IntrinsicCorrespondenceUtils::FNormalCoordinates::RebuildNormalCoordinates(this_02,param_1);
  (this->IntrinsicVertexPositions).CurBlock = 0;
  (this->IntrinsicVertexPositions).CurBlockUsed = 0;
  (this->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntrinsicVertexPositions).Blocks.ArrayNum = 0;
  (this->IntrinsicVertexPositions).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>::AddAllocatedBlock
            (&this->IntrinsicVertexPositions);
  uVar6 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
          (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>::Resize
            (&this->IntrinsicVertexPositions,uVar6);
  uVar8 = uVar5;
  if (0 < (int)uVar6) {
    do {
      iVar4 = (int)uVar5;
      if (iVar4 < (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                       (param_1->VertexRefCounts).RefCounts.CurBlockUsed)) {
        uVar7 = (ulonglong)((uint)uVar8 & 0x1ff);
        lVar2 = (uVar5 >> 9) * 8;
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                 + lVar2) + uVar7 * 2) - 1U) < 0xfffe) {
          lVar2 = *(longlong *)
                   ((this->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data + lVar2);
          plVar1 = (longlong *)(lVar2 + uVar7 * 0x28);
          *plVar1 = (ulonglong)uStack_34 << 0x20;
          plVar1[1] = CONCAT44(uStack_2c,iVar4);
          puVar3 = (undefined8 *)(lVar2 + 0x10 + uVar7 * 0x28);
          *puVar3 = local_28;
          puVar3[1] = uStack_20;
          *(undefined8 *)(lVar2 + 0x20 + uVar7 * 0x28) = local_18;
        }
      }
      uVar5 = (ulonglong)(iVar4 + 1U);
      uVar8 = uVar8 + 1;
    } while ((int)(iVar4 + 1U) < (int)uVar6);
  }
  return this;
}

// operator() @ 14c6f96e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>_>
* __thiscall
`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l9::<lambda_3>::operator()
          (void *this,
          TMap<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>_>
          *__return_storage_ptr__,int param_1)

{
  double dVar1;
  EPositionType EVar2;
  FIntrinsicMesh *pFVar3;
  FDynamicMesh3 *pFVar4;
  double *pdVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int *piVar12;
  bool bVar13;
  TVector<double> *pTVar14;
  TMap<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>_>
  *pTVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  FSurfacePoint *pFVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_248 [32];
  bool local_218 [8];
  int local_210 [2];
  longlong local_208;
  TPairInitializer<int_const_&,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence_const_&>
  local_200;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  local_1f0;
  double local_1e0 [3];
  FDynamicMesh3 *local_1c8;
  TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
  *local_1c0;
  double local_1b8 [6];
  int *local_188;
  double *local_180;
  TVector<double> local_178;
  TVector<double> local_160;
  TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
  local_148;
  double local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_248;
  uVar22 = (ulonglong)param_1;
  pFVar3 = *(FIntrinsicMesh **)((longlong)this + 8);
  uVar19 = *(uint *)(*(longlong *)this + uVar22 * 4);
  pFVar4 = (FDynamicMesh3 *)(pFVar3->NormalCoordinates)._padding_;
  local_200.Key = this;
  local_1c8 = pFVar4;
  local_1c0 = (TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
               *)__return_storage_ptr__;
  FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>
            (&local_1f0,pFVar3,uVar19,0.0,
             *(int *)(*(longlong *)(pFVar3->_padding_ + (ulonglong)(uVar19 >> 9) * 8) + 8 +
                     (ulonglong)(uVar19 & 0x1ff) * 0x10) != **(int **)((longlong)this + 0x10));
  local_148.Elements._0_8_ = 0;
  local_148.Elements._8_8_ = 0;
  local_148.Elements._32_8_ = 0;
  local_148.Elements._40_4_ = 0;
  local_148.Elements._44_4_ = 0x80;
  local_148.Elements._48_4_ = 0xffffffff;
  local_148.Elements._52_4_ = 0;
  local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_148.HashSize = 0;
  iVar17 = local_1f0.ArrayNum;
  if (0 < iVar17) {
    pTVar14 = UE::Geometry::IntrinsicCorrespondenceUtils::AsR3Position
                        (&local_178,(FSurfacePoint *)local_1f0.AllocatorInstance.Data,pFVar4,
                         local_218);
    piVar12 = local_200.Key;
    dVar11 = __real_3fe0000000000000;
    dVar10 = __real_3e45798ee2308c3a;
    dVar9 = __real_3ff0000000000000;
    uVar19 = 1;
    dVar7 = 0.0;
    local_1b8[0] = (pTVar14->field0_0x0)._s_0.X;
    local_1b8[1] = (pTVar14->field0_0x0)._s_0.Y;
    local_1b8[2] = (pTVar14->field0_0x0)._s_0.Z;
    if (1 < (longlong)iVar17) {
      local_200.Value = (FPointCorrespondence *)((longlong)iVar17 + -1);
      lVar20 = 0x28;
      local_208 = 1;
      do {
        lVar16 = local_208;
        uVar18 = 0;
        if ((int)uVar19 < local_1f0.ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TMap<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>_>
                     *)(*pcVar6)();
          return pTVar15;
        }
        pFVar21 = (FSurfacePoint *)(local_1f0.AllocatorInstance.Data + lVar20);
        pTVar14 = UE::Geometry::IntrinsicCorrespondenceUtils::AsR3Position
                            (&local_160,pFVar21,local_1c8,local_218);
        lVar16 = 1 - lVar16;
        EVar2 = pFVar21->PositionType;
        dVar8 = (pTVar14->field0_0x0)._s_0.Y;
        dVar1 = (pTVar14->field0_0x0)._s_0.Z;
        local_1b8[local_208 * 3] = (pTVar14->field0_0x0)._s_0.X;
        local_1b8[local_208 * 3 + 1] = dVar8;
        local_1b8[local_208 * 3 + 2] = dVar1;
        auVar23._0_8_ =
             (local_1b8[local_208 * 3 + 2] - local_1b8[lVar16 * 3 + 2]) *
             (local_1b8[local_208 * 3 + 2] - local_1b8[lVar16 * 3 + 2]);
        auVar23._8_8_ = 0;
        auVar24._8_8_ = 0;
        auVar24._0_8_ =
             (local_1b8[local_208 * 3 + 1] - local_1b8[lVar16 * 3 + 1]) *
             (local_1b8[local_208 * 3 + 1] - local_1b8[lVar16 * 3 + 1]) +
             (local_1b8[local_208 * 3] - local_1b8[lVar16 * 3]) *
             (local_1b8[local_208 * 3] - local_1b8[lVar16 * 3]) + auVar23._0_8_;
        auVar24 = sqrtpd(auVar23,auVar24);
        dVar7 = dVar7 + auVar24._0_8_;
        local_208 = lVar16;
        if (EVar2 == Edge) {
          local_210[0] = (pFVar21->Position).VertexPosition.VID;
          lVar16 = **(longlong **)(piVar12 + 6);
          if ((2 < uVar22) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7ab,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            pTVar15 = (TMap<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>_>
                       *)(*pcVar6)();
            return pTVar15;
          }
          dVar1 = *(double *)(lVar16 + uVar22 * 8);
          dVar8 = dVar11;
          if (dVar10 < dVar1) {
            dVar8 = dVar7 / dVar1;
          }
          local_1e0[2] = 0.0;
          local_1e0[0] = 0.0;
          local_1e0[1] = 0.0;
          if ((2 < uVar22) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            pTVar15 = (TMap<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>_>
                       *)(*pcVar6)();
            return pTVar15;
          }
          iVar17 = param_1 + 1;
          local_1e0[uVar22] = dVar9 - dVar8;
          uVar18 = iVar17 + (iVar17 / 3 + (iVar17 >> 0x1f) +
                            (int)(((longlong)iVar17 / 3 + ((longlong)iVar17 >> 0x3f) & 0xffffffffU)
                                 >> 0x1f)) * -3;
          if ((2 < uVar18) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            pTVar15 = (TMap<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>_>
                       *)(*pcVar6)();
            return pTVar15;
          }
          local_1e0[(int)uVar18] = dVar8;
          pdVar5 = (double *)**(undefined8 **)(piVar12 + 8);
          local_188 = local_210;
          local_180 = &local_f8;
          local_f0 = local_1e0[1] * pdVar5[3] + local_1e0[0] * pdVar5[1] + local_1e0[2] * pdVar5[5];
          local_e8 = local_1e0[0];
          dStack_e0 = local_1e0[1];
          local_f8 = local_1e0[1] * pdVar5[2] + local_1e0[0] * *pdVar5 + local_1e0[2] * pdVar5[4];
          local_d8 = local_1e0[2];
          local_c0 = (pFVar21->Position).EdgePosition.Alpha;
          uStack_b8 = *(undefined8 *)((longlong)&pFVar21->Position + 0x10);
          local_d0 = *(undefined8 *)pFVar21;
          uStack_c8 = *(undefined8 *)&pFVar21->Position;
          local_b0 = *(undefined8 *)((longlong)&pFVar21->Position + 0x18);
          TSet<TTuple<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<int_const_&,_UE::Geometry::FIntrinsicMesh::PokeTriangle_::__l2::FPointCorrespondence_const_&>_>
                    (&local_148,&local_200,(bool *)&local_188);
        }
        uVar19 = uVar19 + 1;
        lVar20 = lVar20 + 0x28;
        local_200.Value =
             (FPointCorrespondence *)((longlong)&local_200.Value[-1].SurfacePos.Position + 0x1f);
      } while (local_200.Value != (FPointCorrespondence *)0x0);
      local_200.Value = (FPointCorrespondence *)0x0;
      __return_storage_ptr__ =
           (TMap<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>_>
            *)local_1c0;
    }
  }
  *(undefined8 *)
   &((TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
      *)__return_storage_ptr__)->Elements = 0;
  *(undefined8 *)
   &(((TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
       *)__return_storage_ptr__)->Elements).field_0x8 = 0;
  *(undefined8 *)
   &(((TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
       *)__return_storage_ptr__)->Elements).field_0x20 = 0;
  *(undefined4 *)
   &(((TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
       *)__return_storage_ptr__)->Elements).field_0x28 = 0;
  *(undefined4 *)
   &(((TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
       *)__return_storage_ptr__)->Elements).field_0x2c = 0x80;
  *(undefined4 *)
   &(((TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
       *)__return_storage_ptr__)->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)
   &(((TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
       *)__return_storage_ptr__)->Elements).field_0x34 = 0;
  (((TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
     *)__return_storage_ptr__)->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  ((TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
    *)__return_storage_ptr__)->HashSize = 0;
  TSet<TTuple<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<int,_UE::Geometry::FIntrinsicMesh::PokeTriangle_::__l2::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_UE::Geometry::FIntrinsicMesh::PokeTriangle_::__l2::FPointCorrespondence,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_148);
  local_148.HashSize = 0;
  if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_148.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,_UE::Geometry::FIntrinsicMesh::PokeTriangle_::__l2::FPointCorrespondence>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_148);
  if ((FSurfacePoint *)local_1f0.AllocatorInstance.Data != (FSurfacePoint *)0x0) {
    FMemory::Free(local_1f0.AllocatorInstance.Data);
  }
  return (TMap<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>_>
          *)(TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
             *)__return_storage_ptr__;
}

// operator() @ 14c6fb920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,TSizedDefaultAllocator<32>_>
* __thiscall
`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::<lambda_5>::operator()
          (void *this,
          TArray<_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int *piVar1;
  undefined4 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  ForElementType<FSetElementId> FVar8;
  TArray<_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,TSizedDefaultAllocator<32>_>
  *pTVar9;
  longlong lVar10;
  ForElementType<FSetElementId> FVar11;
  FPointCorrespondence *pFVar12;
  ulonglong uVar13;
  ForElementType<FSetElementId> FVar14;
  undefined8 *puVar15;
  ForElementType<FSetElementId> FVar16;
  ForElementType<FSetElementId> FVar17;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  FScriptContainerElement *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  uint local_198;
  uint local_194;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_190;
  ForAnyElementType *local_188;
  int local_180;
  int local_17c;
  longlong *local_178;
  TArray<_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,TSizedDefaultAllocator<32>_>
  *local_170;
  undefined8 local_168 [4];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  int iStack_120;
  int iStack_11c;
  uint uStack_118;
  int iStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_f8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  FVar8 = (ForElementType<FSetElementId>)0x0;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0._0_4_ = 0;
  local_1a0._4_4_ = 0;
  local_a8.Elements._0_8_ = 0;
  puVar15 = local_168;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  local_f8.Elements._0_8_ = 0;
  local_f8.Elements._8_8_ = 0;
  local_f8.Elements._32_8_ = 0;
  local_f8.Elements._40_4_ = 0;
  local_f8.Elements._52_4_ = 0;
  local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_f8.HashSize = 0;
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_f8.Elements._44_4_ = 0x80;
  local_f8.Elements._48_4_ = 0xffffffff;
  FVar14 = FVar8;
  FVar16 = FVar8;
  FVar17 = FVar8;
  local_190 = &local_a8;
  local_188 = &local_1a8;
  local_178 = this;
  local_170 = __return_storage_ptr__;
  do {
    pFVar12 = (FPointCorrespondence *)(*local_178 + (longlong)FVar16);
    local_194 = *(uint *)&pFVar12[2].LocalPos.field0_0x0;
    if (local_194 == 0xffffffff) {
      local_168[0] = 0;
      local_168[1] = 0;
      local_148 = *(undefined8 *)((longlong)FVar14 + local_178[1]);
      uStack_140 = ((undefined8 *)((longlong)FVar14 + local_178[1]))[1];
      uVar13 = (ulonglong)(*(uint *)((longlong)FVar17 + local_178[2]) & 0x1ff);
      local_168[2] = 0;
      lVar10 = *(longlong *)
                (*(longlong *)(local_178[3] + 0x248) +
                (ulonglong)(*(uint *)((longlong)FVar17 + local_178[2]) >> 9) * 8);
      *puVar15 = 0x3ff0000000000000;
      local_138 = local_168[0];
      uStack_130 = local_168[1];
      local_128 = local_168[2];
      piVar1 = (int *)(lVar10 + uVar13 * 0x28);
      iStack_120 = *piVar1;
      iStack_11c = piVar1[1];
      uStack_118 = piVar1[2];
      iStack_114 = piVar1[3];
      puVar2 = (undefined4 *)(lVar10 + 0x10 + uVar13 * 0x28);
      uStack_110 = *puVar2;
      uStack_10c = puVar2[1];
      uStack_108 = puVar2[2];
      uStack_104 = puVar2[3];
      local_100 = *(undefined8 *)(lVar10 + 0x20 + uVar13 * 0x28);
      if (iStack_120 == 0) {
        local_198 = uStack_118;
        if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
          FVar11 = (ForElementType<FSetElementId>)&local_a8.Hash;
          if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar11 = local_a8.Hash.SecondaryData;
          }
          for (iVar4 = *(int *)((longlong)FVar11 +
                               (ulonglong)(local_a8.HashSize - 1U & uStack_118) * 4); iVar4 != -1;
              iVar4 = *(int *)(local_a8.Elements._0_8_ + 4 + (longlong)iVar4 * 0xc)) {
            if (*(uint *)(local_a8.Elements._0_8_ + (longlong)iVar4 * 0xc) == uStack_118)
            goto LAB_14c6fbd2e;
          }
        }
        if ((local_1a8.Data <= (FScriptContainerElement *)&local_148) &&
           ((FScriptContainerElement *)&local_148 <
            local_1a8.Data + (longlong)local_1a0._4_4_ * 0x50)) {
          local_1c0 = (longlong)(int)local_1a0;
          local_1b8 = 0x50;
          local_1d8 = &local_148;
          local_1d0 = local_1a8.Data;
          local_1c8 = (longlong)local_1a0._4_4_;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,TSizedDefaultAllocator<32>_>
                      *)(*pcVar5)();
            return pTVar9;
          }
        }
        if ((int)local_1a0 == local_1a0._4_4_) {
          local_1a0._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&local_1a8,(int *)((longlong)&local_1a0 + 4));
        }
        lVar10 = (longlong)(int)local_1a0;
        *(undefined8 *)(local_1a8.Data + lVar10 * 0x50) = local_148;
        *(undefined8 *)(local_1a8.Data + lVar10 * 0x50 + 8) = uStack_140;
        *(undefined8 *)(local_1a8.Data + lVar10 * 0x50 + 0x10) = local_138;
        *(undefined8 *)(local_1a8.Data + lVar10 * 0x50 + 0x10 + 8) = uStack_130;
        *(undefined8 *)(local_1a8.Data + lVar10 * 0x50 + 0x20) = local_128;
        *(ulonglong *)(local_1a8.Data + lVar10 * 0x50 + 0x20 + 8) = CONCAT44(iStack_11c,iStack_120);
        *(ulonglong *)(local_1a8.Data + lVar10 * 0x50 + 0x30) = CONCAT44(iStack_114,uStack_118);
        *(ulonglong *)(local_1a8.Data + lVar10 * 0x50 + 0x30 + 8) = CONCAT44(uStack_10c,uStack_110);
        *(ulonglong *)(local_1a8.Data + lVar10 * 0x50 + 0x40) = CONCAT44(uStack_104,uStack_108);
        *(undefined8 *)(local_1a8.Data + lVar10 * 0x50 + 0x40 + 8) = local_100;
        local_1a0._0_4_ = (int)local_1a0 + 1;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_a8,&local_180,(bool *)&local_198);
        FVar8 = local_f8.Hash.SecondaryData;
      }
      else {
        if ((local_1a8.Data <= (FScriptContainerElement *)&local_148) &&
           ((FScriptContainerElement *)&local_148 <
            local_1a8.Data + (longlong)local_1a0._4_4_ * 0x50)) {
          local_1c0 = (longlong)(int)local_1a0;
          local_1b8 = 0x50;
          local_1d8 = &local_148;
          local_1d0 = local_1a8.Data;
          local_1c8 = (longlong)local_1a0._4_4_;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,TSizedDefaultAllocator<32>_>
                      *)(*pcVar5)();
            return pTVar9;
          }
        }
        if ((int)local_1a0 == local_1a0._4_4_) {
          local_1a0._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&local_1a8,(int *)((longlong)&local_1a0 + 4));
        }
        lVar10 = (longlong)(int)local_1a0;
        *(undefined8 *)(local_1a8.Data + lVar10 * 0x50) = local_148;
        *(undefined8 *)(local_1a8.Data + lVar10 * 0x50 + 8) = uStack_140;
        *(undefined8 *)(local_1a8.Data + lVar10 * 0x50 + 0x10) = local_138;
        *(undefined8 *)(local_1a8.Data + lVar10 * 0x50 + 0x10 + 8) = uStack_130;
        *(undefined8 *)(local_1a8.Data + lVar10 * 0x50 + 0x20) = local_128;
        *(ulonglong *)(local_1a8.Data + lVar10 * 0x50 + 0x20 + 8) = CONCAT44(iStack_11c,iStack_120);
        *(ulonglong *)(local_1a8.Data + lVar10 * 0x50 + 0x30) = CONCAT44(iStack_114,uStack_118);
        *(ulonglong *)(local_1a8.Data + lVar10 * 0x50 + 0x30 + 8) = CONCAT44(uStack_10c,uStack_110);
        pFVar3 = local_1a8.Data + lVar10 * 0x50 + 0x40;
        *(undefined4 *)pFVar3 = uStack_108;
        *(undefined4 *)(pFVar3 + 4) = uStack_104;
        *(undefined4 *)(pFVar3 + 8) = (undefined4)local_100;
        *(undefined4 *)(pFVar3 + 0xc) = local_100._4_4_;
        FVar8 = local_f8.Hash.SecondaryData;
        local_1a0._0_4_ = (int)local_1a0 + 1;
      }
    }
    else {
      if (local_f8.Elements._8_4_ != local_f8.Elements._52_4_) {
        FVar11 = (ForElementType<FSetElementId>)&local_f8.Hash;
        if (FVar8 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar8;
        }
        for (iVar4 = *(int *)((longlong)FVar11 + (ulonglong)(local_f8.HashSize - 1U & local_194) * 4
                             ); iVar4 != -1;
            iVar4 = *(int *)(local_f8.Elements._0_8_ + 4 + (longlong)iVar4 * 0xc)) {
          if (*(uint *)(local_f8.Elements._0_8_ + (longlong)iVar4 * 0xc) == local_194)
          goto LAB_14c6fbd2e;
        }
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_f8,&local_17c,(bool *)&local_194);
      ``UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>
      ::operator()(&local_190,pFVar12);
      ``UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>
      ::operator()(&local_190,pFVar12 + 1);
      FVar8 = local_f8.Hash.SecondaryData;
    }
LAB_14c6fbd2e:
    pTVar9 = local_170;
    FVar6.Data = local_1a8.Data;
    FVar16 = (ForElementType<FSetElementId>)((longlong)FVar16 + 0xa8);
    FVar14 = (ForElementType<FSetElementId>)((longlong)FVar14 + 0x10);
    FVar17 = (ForElementType<FSetElementId>)((longlong)FVar17 + 4);
    puVar15 = puVar15 + 1;
    if (0x1f7 < (longlong)FVar16) {
      local_1a8.Data = (FScriptContainerElement *)0x0;
      local_f8.HashSize = 0;
      (local_170->AllocatorInstance).Data = FVar6.Data;
      local_170->ArrayNum = (int)local_1a0;
      local_170->ArrayMax = local_1a0._4_4_;
      local_1a0 = 0;
      if (FVar8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar8);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_f8.Elements);
      local_a8.HashSize = 0;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Elements);
      if (local_1a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
      return pTVar9;
    }
  } while( true );
}

// operator() @ 14c6fbe00

int __thiscall
`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::<lambda_6>::operator()(void *this)

{
  int iVar1;
  longlong *plVar2;
  FDynamicMesh3 *this_00;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  undefined8 local_58;
  FDynamicMesh3 *local_50;
  
  plVar2 = *(longlong **)((longlong)this + 8);
  this_00 = *(FDynamicMesh3 **)(*(longlong *)this + 0x1c0);
  if (((((int)plVar2[1] == 3) && (*(int *)(*plVar2 + 0x28) == 0)) && (*(int *)(*plVar2 + 0x78) == 0)
      ) && (*(int *)(*plVar2 + 200) == 0)) {
    if ((int)plVar2[1] < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
    }
    plVar3 = *(longlong **)((longlong)this + 8);
    iVar8 = *(int *)(*plVar2 + 0x30);
    if ((int)plVar3[1] < 2) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
    }
    plVar2 = *(longlong **)((longlong)this + 8);
    iVar1 = *(int *)(*plVar3 + 0x80);
    if ((int)plVar2[1] < 3) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
    }
    iVar8 = UE::Geometry::FDynamicMesh3::FindTriangle(this_00,iVar8,iVar1,*(int *)(*plVar2 + 0xd0));
    return iVar8;
  }
  local_58 = *(undefined8 *)((longlong)this + 8);
  local_50 = this_00;
  ``UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::<lambda_6>::operator()'::__l2::<lambda_1>::
  operator()(&local_58,&local_68);
  plVar2 = *(longlong **)((longlong)this + 8);
  local_res18 = local_68.ArrayNum;
  uVar9 = (ulonglong)(int)local_res18;
  local_res20 = local_68.AllocatorInstance.Data + uVar9 * 4;
  FVar12.Data = local_68.AllocatorInstance.Data;
LAB_14c6fbf95:
  pFVar6 = local_res20;
  if (local_68.ArrayNum != (int)uVar9) {
    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res8);
  }
  if (FVar12.Data != pFVar6) {
    lVar5 = plVar2[1];
    bVar7 = true;
    lVar10 = *plVar2;
    iVar8 = *(int *)FVar12.Data;
    lVar11 = (longlong)(int)lVar5 * 0x50 + lVar10;
LAB_14c6fbfd0:
    do {
      if ((int)plVar2[1] != (int)lVar5) {
        `TCheckedPointerIterator<`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (lVar10 == lVar11) goto LAB_14c6fc012;
      if (bVar7) {
        bVar7 = FIntrinsicMeshImplUtils::IsOnSurfaceTriangle
                          ((FSurfacePoint *)(lVar10 + 0x28),iVar8,this_00);
        if (bVar7) {
          bVar7 = true;
          lVar10 = lVar10 + 0x50;
          goto LAB_14c6fbfd0;
        }
      }
      bVar7 = false;
      lVar10 = lVar10 + 0x50;
    } while( true );
  }
  iVar8 = -1;
LAB_14c6fc03a:
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return iVar8;
LAB_14c6fc012:
  if (bVar7) goto LAB_14c6fc03a;
  FVar12.Data = FVar12.Data + 4;
  uVar9 = (ulonglong)local_res18;
  goto LAB_14c6fbf95;
}

// operator() @ 14c6fc070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::<lambda_7>::operator()
          (void *this,TVector<double> *__return_storage_ptr__)

{
  ulonglong *puVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  double dVar4;
  longlong *plVar5;
  FDynamicMesh3 *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  ForAnyElementType FVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  TVector<double> *pTVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStackY_148 [32];
  undefined1 local_f8;
  char local_f7;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  uint local_e0;
  longlong local_d8;
  longlong *local_d0;
  TArray<double,TSizedDefaultAllocator<32>_> local_c8;
  int *local_b8;
  longlong local_b0;
  TVector<double> *local_a8;
  TVector<double> local_a0;
  TArray<double,TSizedDefaultAllocator<32>_> local_88;
  TArray<double,TSizedDefaultAllocator<32>_> local_78;
  TArray<double,TSizedDefaultAllocator<32>_> local_68;
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar22 = &local_88;
  local_b8 = &local_88.ArrayNum;
  local_d8 = 0;
  uVar21 = *(uint *)(*(longlong *)this + 8);
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  local_b0 = 3;
  local_e0 = uVar21;
  local_d0 = this;
  local_a8 = __return_storage_ptr__;
  do {
    lVar25 = local_b0;
    lVar20 = local_d8;
    uVar16 = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar21,(ForAnyElementType *)(local_b8 + -2),local_b8,local_b8 + 1);
    uVar23 = uVar16;
    uVar24 = uVar16;
    if (0 < (int)uVar21) {
      do {
        uVar19 = (uint)uVar16;
        plVar5 = (longlong *)*local_d0;
        uVar21 = 0;
        if ((int)uVar19 < (int)plVar5[1]) {
          uVar21 = ~uVar19 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TVector<double> *)(*pcVar8)();
          return pTVar14;
        }
        uVar3 = *(undefined8 *)(local_d8 + *plVar5 + 0x10 + uVar24);
        uVar21 = 0;
        if ((int)uVar19 < pTVar22->ArrayNum) {
          uVar21 = ~uVar19 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TVector<double> *)(*pcVar8)();
          return pTVar14;
        }
        uVar16 = (ulonglong)(uVar19 + 1);
        *(undefined8 *)((pTVar22->AllocatorInstance).Data + uVar23) = uVar3;
        lVar25 = local_b0;
        lVar20 = local_d8;
        uVar23 = uVar23 + 8;
        uVar24 = uVar24 + 0x50;
        uVar21 = local_e0;
      } while ((int)(uVar19 + 1) < (int)local_e0);
    }
    plVar5 = local_d0;
    local_d8 = lVar20 + 8;
    local_b8 = local_b8 + 4;
    pTVar22 = pTVar22 + 1;
    local_b0 = lVar25 + -1;
    if (local_b0 == 0) {
      local_f7 = FIntrinsicMeshImplUtils::ComputeMinNormSolution
                           (&local_88,&local_78,&local_68,(TVector<double> *)local_d0[1],&local_c8);
      local_f0.Data = (FScriptContainerElement *)0x0;
      local_e8 = 0;
      pFVar6 = *(FDynamicMesh3 **)(plVar5[2] + 0x1c0);
      if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
      }
      if (0 < (int)uVar21) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar21,&local_f0,0,(int *)((longlong)&local_e8 + 4));
      }
      plVar7 = (longlong *)*plVar5;
      lVar25 = plVar7[1];
      lVar20 = *plVar7;
      lVar18 = (longlong)(int)lVar25 * 0x50 + lVar20;
      while( true ) {
        if ((int)plVar7[1] != (int)lVar25) {
          local_f8 = 0;
          `TCheckedPointerIterator<`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_f8);
        }
        pTVar14 = local_a8;
        uVar21 = local_e0;
        if (lVar20 == lVar18) break;
        pFVar15 = (FScriptContainerElement *)
                  FIntrinsicMeshImplUtils::AsBarycenteric
                            (&local_a0,(FSurfacePoint *)(lVar20 + 0x28),*(int *)plVar5[3],pFVar6);
        if (((local_f0.Data <= pFVar15) &&
            (pFVar15 < local_f0.Data + (longlong)local_e8._4_4_ * 0x18)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TVector<double> *)(*pcVar8)();
          return pTVar14;
        }
        iVar12 = (int)local_e8;
        if ((int)local_e8 == local_e8._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_f0,(int *)((longlong)&local_e8 + 4));
        }
        lVar20 = lVar20 + 0x50;
        local_e8 = CONCAT44(local_e8._4_4_,iVar12 + 1);
        uVar3 = *(undefined8 *)(pFVar15 + 8);
        *(undefined8 *)(local_f0.Data + (longlong)iVar12 * 0x18) = *(undefined8 *)pFVar15;
        *(undefined8 *)(local_f0.Data + (longlong)iVar12 * 0x18 + 8) = uVar3;
        *(undefined8 *)(local_f0.Data + (longlong)iVar12 * 0x18 + 0x10) =
             *(undefined8 *)(pFVar15 + 0x10);
      }
      (local_a8->field0_0x0)._s_0.X = 0.0;
      (local_a8->field0_0x0)._s_0.Y = 0.0;
      (local_a8->field0_0x0)._s_0.Z = 0.0;
      if (local_f7 == '\0') {
        uVar19 = 0;
        dVar4 = 0.0;
        dVar27 = 0.0;
        dVar28 = 0.0;
        if (0 < (int)local_e0) {
          lVar20 = 0;
          do {
            uVar13 = 0;
            if ((int)uVar19 < (int)local_e8) {
              uVar13 = ~uVar19 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TVector<double> *)(*pcVar8)();
              return pTVar14;
            }
            uVar19 = uVar19 + 1;
            dVar4 = *(double *)(local_f0.Data + lVar20) + (pTVar14->field0_0x0)._s_0.X;
            (pTVar14->field0_0x0)._s_0.X = dVar4;
            dVar27 = *(double *)(local_f0.Data + lVar20 + 8) + (pTVar14->field0_0x0)._s_0.Y;
            (pTVar14->field0_0x0)._s_0.Y = dVar27;
            lVar25 = lVar20 + 0x10;
            lVar20 = lVar20 + 0x18;
            dVar28 = *(double *)(local_f0.Data + lVar25) + (pTVar14->field0_0x0)._s_0.Z;
            (pTVar14->field0_0x0)._s_0.Z = dVar28;
          } while ((int)uVar19 < (int)uVar21);
        }
        dVar26 = __real_3ff0000000000000 / (double)(int)uVar21;
        (pTVar14->field0_0x0)._s_0.X = dVar4 * dVar26;
        (pTVar14->field0_0x0)._s_0.Y = dVar27 * dVar26;
        (pTVar14->field0_0x0)._s_0.Z = dVar28 * dVar26;
      }
      else {
        uVar19 = 0;
        if (0 < (int)local_e0) {
          lVar25 = 0;
          lVar20 = 0;
          do {
            uVar13 = 0;
            if ((int)uVar19 < (int)local_e8) {
              uVar13 = ~uVar19 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TVector<double> *)(*pcVar8)();
              return pTVar14;
            }
            FVar10.Data = local_f0.Data;
            uVar13 = 0;
            if ((int)uVar19 < local_c8.ArrayNum) {
              uVar13 = ~uVar19 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TVector<double> *)(*pcVar8)();
              return pTVar14;
            }
            pFVar2 = FVar10.Data + lVar25 + 8;
            dVar28 = *(double *)pFVar2;
            uVar19 = uVar19 + 1;
            dVar4 = *(double *)(local_c8.AllocatorInstance.Data + lVar20 * 8);
            lVar20 = lVar20 + 1;
            pFVar15 = FVar10.Data + lVar25;
            lVar25 = lVar25 + 0x18;
            dVar27 = dVar4 * *(double *)(pFVar2 + 8) + (pTVar14->field0_0x0)._s_0.Z;
            (pTVar14->field0_0x0)._s_0.X = dVar4 * *(double *)pFVar15 + (pTVar14->field0_0x0)._s_0.X
            ;
            auVar9._8_4_ = SUB84(dVar27,0);
            auVar9._0_8_ = dVar4 * dVar28 + (pTVar14->field0_0x0)._s_0.Y;
            auVar9._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
            *(undefined1 (*) [16])((longlong)&pTVar14->field0_0x0 + 8) = auVar9;
          } while ((int)uVar19 < (int)uVar21);
        }
      }
      if (local_f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data);
      }
      puVar17 = local_58;
      lVar20 = 3;
      do {
        puVar1 = puVar17 + -2;
        puVar17 = puVar17 + -2;
        lVar20 = lVar20 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
      } while (lVar20 != 0);
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
      return pTVar14;
    }
  } while( true );
}

// FlipEdge @ 14c7352f0

EMeshResult __thiscall
UE::Geometry::FIntrinsicMesh::FlipEdge(FIntrinsicMesh *this,int param_1,FEdgeFlipInfo *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  FDynamicMesh3 *this_00;
  int iVar6;
  EMeshResult EVar7;
  int iVar8;
  ulonglong uVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint local_res8;
  uint uStackX_c;
  FIndex3i_u_0 local_a8;
  FIndex3i_u_0 local_98 [8];
  
  if ((param_1 < 0) ||
     ((int)this->_padding_ * 0x200 + *(int *)((longlong)&this->_padding_ + 4) <= param_1)) {
    return Failed_NotAnEdge;
  }
  uVar11 = (ulonglong)(param_1 & 0x1ff);
  lVar2 = (ulonglong)((uint)param_1 >> 9) * 8;
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(this->_padding_ + lVar2) + uVar11 * 2) - 1U)) {
    return Failed_NotAnEdge;
  }
  lVar3 = *(longlong *)(this->_padding_ + lVar2);
  if (*(int *)(lVar3 + 0xc + uVar11 * 0x10) == -1) {
    return Failed_IsBoundaryEdge;
  }
  uVar4 = *(ulonglong *)(lVar3 + 8 + uVar11 * 0x10);
  uVar9 = (ulonglong)((uint)uVar4 & 0x1ff);
  lVar3 = *(longlong *)(this->_padding_ + ((uVar4 & 0xffffffff) >> 9) * 8);
  local_98[0]._0_8_ = *(undefined8 *)(lVar3 + uVar9 * 0xc);
  local_98[0]._8_4_ = *(int *)(lVar3 + 8 + uVar9 * 0xc);
  uVar12 = (uint)(uVar4 >> 0x20);
  uVar9 = (ulonglong)(uVar12 & 0x1ff);
  lVar3 = *(longlong *)(this->_padding_ + (uVar4 >> 0x29) * 8);
  local_a8._0_8_ = *(undefined8 *)(lVar3 + uVar9 * 0xc);
  local_a8._s_0.C = *(int *)(lVar3 + 8 + uVar9 * 0xc);
  FSimpleIntrinsicEdgeFlipMesh::GetEdgeOpposingV
            ((FSimpleIntrinsicEdgeFlipMesh *)this,(int)&local_res8);
  EVar7 = FSimpleIntrinsicEdgeFlipMesh::FlipEdge
                    ((FSimpleIntrinsicEdgeFlipMesh *)this,param_1,param_2);
  if (EVar7 != Ok) {
    return EVar7;
  }
  IntrinsicCorrespondenceUtils::FNormalCoordinates::OnFlipEdge
            (&this->NormalCoordinates,(uint)uVar4,(FIndex3i *)&local_98[0]._s_0,local_res8,uVar12,
             (FIndex3i *)&local_a8._s_0,uStackX_c,param_1);
  if (*(int *)(*(longlong *)
                ((this->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data + lVar2) +
              uVar11 * 4) != 0) {
    return Ok;
  }
  if (local_res8 == uStackX_c) {
    return Ok;
  }
  pFVar5 = (this->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data;
  piVar1 = (int *)(*(longlong *)(pFVar5 + (ulonglong)(local_res8 >> 9) * 8) +
                  (ulonglong)(local_res8 & 0x1ff) * 0x28);
  iVar8 = *piVar1;
  uVar12 = piVar1[2];
  piVar1 = (int *)(*(longlong *)(pFVar5 + (ulonglong)(uStackX_c >> 9) * 8) +
                  (ulonglong)(uStackX_c & 0x1ff) * 0x28);
  iVar6 = *piVar1;
  uVar13 = piVar1[2];
  this_00 = (FDynamicMesh3 *)(this->NormalCoordinates)._padding_;
  if (iVar8 == 2) {
    return Ok;
  }
  if (iVar6 == 2) {
    return Ok;
  }
  if ((iVar8 == 0) && (iVar6 == 0)) {
    iVar8 = FDynamicMesh3::FindEdge(this_00,uVar12,uVar13);
  }
  else {
    pFVar5 = (this_00->Edges).Blocks.AllocatorInstance.Data;
    if (iVar8 == 0) {
      puVar10 = (uint *)(*(longlong *)(pFVar5 + (ulonglong)(uVar13 >> 9) * 8) +
                        (ulonglong)(uVar13 & 0x1ff) * 0x10);
      uVar13 = uVar12;
      if (*puVar10 == uVar12) {
        iVar8 = 0;
        goto LAB_14c7355bc;
      }
    }
    else {
      puVar10 = (uint *)(*(longlong *)(pFVar5 + (ulonglong)(uVar12 >> 9) * 8) +
                        (ulonglong)(uVar12 & 0x1ff) * 0x10);
      if (*puVar10 == uVar13) {
        iVar8 = 0;
        goto LAB_14c7355bc;
      }
    }
    iVar8 = -1;
    if (puVar10[1] == uVar13) {
      iVar8 = 1;
    }
  }
LAB_14c7355bc:
  if (iVar8 != -1) {
    *(undefined4 *)
     (*(longlong *)((this->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data + lVar2) +
     uVar11 * 4) = 0xffffffff;
  }
  return Ok;
}

// GetImplicitEdgeCrossings @ 14c73c9d0

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
* __thiscall
UE::Geometry::FIntrinsicMesh::GetImplicitEdgeCrossings
          (FIntrinsicMesh *this,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,bool param_2)

{
  FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicMesh>
            (__return_storage_ptr__,this,param_1,param_2);
  return __return_storage_ptr__;
}

// PokeTriangle @ 14c754e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

EMeshResult __thiscall
UE::Geometry::FIntrinsicMesh::PokeTriangle
          (FIntrinsicMesh *this,int param_1,TVector<double> *param_2,FPokeTriangleInfo *param_3)

{
  int *piVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512> *this_00;
  double dVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  FIntrinsicMesh *pFVar19;
  TVector<double> *pTVar20;
  FPokeTriangleInfo *pFVar21;
  longlong *plVar22;
  bool bVar23;
  EMeshResult EVar24;
  EMeshResult EVar25;
  TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
  *pTVar26;
  longlong lVar27;
  double *pdVar28;
  byte bVar29;
  ForElementType<unsigned_int> FVar30;
  uint *puVar31;
  undefined1 *puVar32;
  ulonglong uVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
  *pTVar38;
  longlong lVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  ulonglong uVar43;
  int iVar44;
  double *pdVar45;
  int iVar46;
  double *pdVar47;
  double *pdVar48;
  undefined1 auStack_7b8 [32];
  longlong local_798;
  longlong local_790;
  uint local_788;
  undefined1 local_784 [4];
  uint local_780 [2];
  bool local_778 [4];
  uint local_774;
  ForElementType<unsigned_int> local_770;
  int local_768 [2];
  FIntrinsicMesh *local_760;
  ulonglong local_758;
  ulonglong local_750;
  uint local_748;
  undefined8 local_740;
  uint local_738;
  TVector<double> *local_730;
  FPokeTriangleInfo *local_728;
  undefined8 local_720;
  int local_718;
  undefined8 local_710;
  uint local_708;
  int local_700;
  int local_6fc;
  double *local_6f8;
  double *local_6f0;
  undefined8 local_6e8;
  undefined4 local_6e0;
  undefined8 local_6d8;
  undefined4 local_6d0;
  TArray<_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,TSizedDefaultAllocator<32>_>
  local_6c8;
  longlong *local_6b8;
  uint uStack_6b0;
  uint uStack_6ac;
  ForElementType<unsigned_int> local_6a8;
  undefined4 uStack_6a0;
  uint uStack_69c;
  uint local_698;
  undefined4 uStack_694;
  int iStack_690;
  undefined4 uStack_68c;
  longlong *local_688;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_680;
  undefined8 uStack_660;
  double local_658;
  double dStack_650;
  double local_648;
  double dStack_640;
  double local_638;
  double dStack_630;
  double dStack_628;
  double dStack_620;
  undefined8 uStack_618;
  undefined8 local_610;
  double local_608 [6];
  FIntrinsicMesh *local_5d8;
  TArray<_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,TSizedDefaultAllocator<32>_>
  *local_5d0;
  double *local_5c8;
  double *local_5c0;
  undefined8 *local_5b8;
  FIntrinsicMesh *local_5b0;
  TArray<_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,TSizedDefaultAllocator<32>_>
  *local_5a8;
  TVector<double> *local_5a0;
  FIntrinsicMesh *local_598;
  int *local_590;
  undefined8 *local_588;
  FIntrinsicMesh *local_580;
  uint *local_578;
  double **local_570;
  double **local_568;
  TVector<double>_u_0 local_560;
  TVector<double>_u_0 local_548;
  int local_528;
  int iStack_524;
  int iStack_520;
  int iStack_51c;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined4 local_48c;
  FSurfacePoint local_488;
  undefined1 local_458 [72];
  undefined4 local_410;
  int local_408 [4];
  FIndex3i_u_0 local_3f8;
  FIndex3i_u_0 local_3ec;
  FIndex3i_u_0 local_3e0 [2];
  double local_3c8 [5];
  double local_3a0;
  double local_398 [9];
  double local_350;
  double local_348 [2];
  undefined8 uStack_338;
  undefined8 uStack_330;
  double local_328 [6];
  undefined4 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2a8;
  undefined4 local_2a0;
  undefined4 local_280;
  undefined4 local_250;
  undefined4 local_248;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined4 local_1d8;
  double local_1c8 [4];
  TVector2<double>_u_0 local_1a8;
  undefined1 local_198 [40];
  uint local_170 [4];
  undefined1 auStack_160 [8];
  ForElementType<FSetElementId> local_158;
  int local_150 [2];
  longlong local_148 [4];
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  void *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  void *local_b8;
  undefined4 local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_7b8;
  local_728 = param_3;
  local_730 = param_2;
  if (((param_1 < 0) ||
      ((int)this->_padding_ * 0x200 + *(int *)((longlong)&this->_padding_ + 4) <= param_1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (this->_padding_ + (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    return Failed_NotATriangle;
  }
  uVar33 = (ulonglong)(param_1 & 0x1ff);
  uVar43 = (ulonglong)((uint)param_1 >> 9);
  pdVar45 = (double *)0x0;
  lVar27 = *(longlong *)(this->_padding_ + uVar43 * 8);
  local_740 = *(undefined8 *)(lVar27 + uVar33 * 0xc);
  local_738 = *(uint *)(lVar27 + 8 + uVar33 * 0xc);
  lVar27 = *(longlong *)(this->_padding_ + uVar43 * 8);
  local_6e8 = *(undefined8 *)(lVar27 + uVar33 * 0xc);
  local_6e0 = *(undefined4 *)(lVar27 + 8 + uVar33 * 0xc);
  lVar27 = *(longlong *)(this->_padding_ + uVar43 * 8);
  lVar39 = this->_padding_;
  uVar41 = *(uint *)(lVar27 + 8 + uVar33 * 0xc);
  local_710 = *(ulonglong *)(lVar27 + uVar33 * 0xc);
  local_608[2] = *(double *)
                  (*(longlong *)(lVar39 + (ulonglong)(uVar41 >> 9) * 8) +
                  (ulonglong)(uVar41 & 0x1ff) * 8);
  local_608[1] = *(double *)
                  (*(longlong *)(lVar39 + (local_710 >> 0x29) * 8) +
                  (ulonglong)((uint)(local_710 >> 0x20) & 0x1ff) * 8);
  local_1c8[2] = *(double *)
                  (*(longlong *)(lVar39 + ((local_710 & 0xffffffff) >> 9) * 8) +
                  (ulonglong)((uint)local_710 & 0x1ff) * 8);
  local_608[0] = local_1c8[2];
  if (local_608[1] < local_1c8[2]) {
    pdVar47 = (double *)(ulonglong)((local_608[2] < local_608[1]) + 1);
  }
  else {
    pdVar47 = (double *)&DAT_00000002;
    if (local_1c8[2] <= local_608[2]) {
      pdVar47 = pdVar45;
    }
  }
  if (local_608[(longlong)pdVar47] <= __real_3e45798ee2308c3a &&
      __real_3e45798ee2308c3a != local_608[(longlong)pdVar47]) {
    return Failed_Unsupported;
  }
  local_1c8[3] = 0.0;
  local_1c8[0] = 0.0;
  local_1c8[1] = 0.0;
  local_780[0] = param_1;
  local_760 = this;
  ::`anonymous_namespace'::ComputeOpposingVert2d
            ((TVector2<double> *)&local_1a8._s_0,local_1c8[2],local_608[1],local_608[2]);
  local_6f8 = local_608;
  local_6f0 = local_1c8;
  dVar5 = (param_2->field0_0x0)._s_0.Z;
  local_588 = &local_6e8;
  local_578 = local_780;
  local_570 = &local_6f8;
  local_568 = &local_6f0;
  pTVar38 = (TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
             *)local_198;
  dVar12 = local_1c8[2] * (param_2->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.X * local_1c8[0]
           + dVar5 * local_1a8._s_0.X;
  local_198._0_8_ = 0;
  local_198._8_8_ = 0;
  local_198._32_8_ = 0;
  local_170[0] = 0;
  local_170[1] = 0x80;
  local_170[2] = 0xffffffff;
  local_170[3] = 0;
  dVar5 = local_1c8[3] * (param_2->field0_0x0)._s_0.Y + local_1c8[1] * (param_2->field0_0x0)._s_0.X
          + dVar5 * local_1a8._s_0.Y;
  local_158 = (ForElementType<FSetElementId>)0x0;
  local_150[0] = 0;
  local_148[0] = 0;
  local_148[1] = 0;
  local_128 = 0;
  local_120 = 0;
  local_11c = 0x80;
  local_118 = 0xffffffff;
  local_114 = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  pdVar47 = pdVar45;
  local_580 = this;
  do {
    pTVar26 = (TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
               *)`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l9::<lambda_3>::operator()
                           (&local_588,
                            (TMap<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>_>
                             *)local_458,(int)pdVar47);
    if (pTVar38 != pTVar26) {
      TSet<TTuple<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<int,_UE::Geometry::FIntrinsicMesh::PokeTriangle_::__l2::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_UE::Geometry::FIntrinsicMesh::PokeTriangle_::__l2::FPointCorrespondence,0>,FDefaultSetAllocator>_>
                (pTVar38,pTVar26);
    }
    local_410 = 0;
    if ((void *)local_458._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_458._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,_UE::Geometry::FIntrinsicMesh::PokeTriangle_::__l2::FPointCorrespondence>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_458);
    dVar18 = __real_3fe0000000000000;
    uVar41 = (int)pdVar47 + 1;
    pdVar47 = (double *)(ulonglong)uVar41;
    pTVar38 = pTVar38 + 1;
  } while ((int)uVar41 < 3);
  local_408[0] = 0;
  local_408[1] = 0;
  local_408[2] = 0;
  local_3a0._0_4_ = 0;
  local_398[0]._0_4_ = 0xffffffff;
  local_350._0_4_ = 0;
  local_348[0]._0_4_ = 0xffffffff;
  local_328[0]._0_4_ = 0xffffffff;
  local_2f8 = 0;
  local_2f0 = 0xffffffff;
  local_2a8 = 0;
  local_2a0 = 0xffffffff;
  local_280 = 0xffffffff;
  local_250 = 0;
  local_248 = 0xffffffff;
  local_200 = 0;
  local_1f8 = 0xffffffff;
  local_1d8 = 0xffffffff;
  local_758 = 0;
  pdVar47 = pdVar45;
  pdVar48 = pdVar45;
  do {
    local_774 = (int)pdVar47 + 1;
    iVar44 = (int)pdVar47 + 2;
    local_770 = (ForElementType<unsigned_int>)((longlong)local_198 + local_758 + 0x10);
    uStack_6ac = 1;
    local_698 = 0;
    uVar41 = *(uint *)((longlong)local_170 + local_758);
    iVar46 = local_774 +
             ((int)local_774 / 3 + ((int)local_774 >> 0x1f) +
             (int)(((longlong)(int)local_774 / 3 + ((longlong)(int)local_774 >> 0x3f) & 0xffffffffU)
                  >> 0x1f)) * -3;
    uStack_69c = local_698;
    uStack_6b0 = 0;
    if (uVar41 != 0) {
      FVar30 = local_770;
      if (*(ForElementType<unsigned_int> *)(local_198 + local_758 + 0x20) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar30 = *(ForElementType<unsigned_int> *)(local_198 + local_758 + 0x20);
      }
      uVar40 = *(uint *)FVar30;
      pdVar47 = pdVar45;
      pdVar28 = pdVar45;
      local_698 = 0;
      uStack_6b0 = 0;
      while (uVar40 == 0) {
        iVar34 = (int)pdVar47;
        local_698 = (int)pdVar28 + 0x20;
        pdVar28 = (double *)(ulonglong)local_698;
        uStack_6b0 = iVar34 + 1;
        pdVar47 = (double *)(ulonglong)uStack_6b0;
        uStack_69c = uVar41;
        if ((int)(((int)(uVar41 - 1) >> 0x1f & 0x1fU) + (uVar41 - 1)) >> 5 < (int)uStack_6b0)
        goto LAB_14c7553c2;
        uVar40 = ((uint *)((longlong)FVar30 + 4))[iVar34];
      }
      uStack_6ac = -uVar40 & uVar40;
      uVar43 = (ulonglong)uStack_6ac * 2 + 1;
      lVar27 = 0x3f;
      if (uVar43 != 0) {
        for (; uVar43 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      uStack_69c = (local_698 - 1) + (int)lVar27;
      local_700 = (int)lVar27;
      if ((int)uVar41 < (int)uStack_69c) {
        uStack_69c = uVar41;
      }
    }
LAB_14c7553c2:
    local_6b8 = (longlong *)(local_198 + local_758);
    uStack_694 = local_48c;
    local_788 = *(uint *)((longlong)local_170 + local_758);
    iStack_690 = *(int *)(local_198 + local_758 + 8) - *(int *)(auStack_160 + (local_758 - 4));
    uVar40 = local_788 & 0xffffffe0;
    local_6a8 = local_770;
    uStack_6a0 = 0xffffffff;
    iVar34 = (int)local_788 >> 5;
    local_688 = (longlong *)(local_198 + local_758);
    TStack_680._padding_ = CONCAT44(uStack_6ac,uStack_6b0);
    bVar29 = (byte)local_788;
    TStack_680.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_770;
    TStack_680.UnvisitedBitMask = 0xffffffff;
    TStack_680.CurrentBitIndex = uStack_69c;
    TStack_680.BaseBitIndex = local_698;
    TStack_680._28_4_ = local_48c;
    uStack_660 = CONCAT44(uStack_68c,
                          *(int *)(local_198 + local_758 + 8) -
                          *(int *)(auStack_160 + (local_758 - 4)));
    if ((((int)local_788 < 0) || ((int)uVar41 < (int)local_788)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar23)) {
      pcVar11 = (code *)swi(3);
      EVar24 = (*pcVar11)();
      return EVar24;
    }
    uVar41 = *(int *)((longlong)local_770 + 0x18);
    if (local_788 != uVar41) {
      FVar30 = local_770;
      if (*(ForElementType<unsigned_int> *)((longlong)local_770 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar30 = *(ForElementType<unsigned_int> *)((longlong)local_770 + 0x10);
      }
      uVar42 = -1 << (bVar29 & 0x1f) & *(uint *)((longlong)FVar30 + (longlong)iVar34 * 4);
      while (uVar42 == 0) {
        lVar27 = (longlong)iVar34;
        uVar40 = uVar40 + 0x20;
        iVar34 = iVar34 + 1;
        local_788 = uVar41;
        if ((int)(((int)(uVar41 - 1) >> 0x1f & 0x1fU) + (uVar41 - 1)) >> 5 < iVar34)
        goto LAB_14c7554ed;
        uVar42 = ((uint *)((longlong)FVar30 + 4))[lVar27];
      }
      uVar43 = (ulonglong)(-uVar42 & uVar42) * 2 + 1;
      lVar27 = 0x3f;
      if (uVar43 != 0) {
        for (; uVar43 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      local_788 = (uVar40 - 1) + (int)lVar27;
      local_6fc = (int)lVar27;
      if ((int)uVar41 < (int)local_788) {
        local_788 = uVar41;
      }
    }
LAB_14c7554ed:
    uVar41 = local_788;
    uVar43 = (ulonglong)
             (iVar44 + (iVar44 / 3 + (iVar44 >> 0x1f) +
                       (int)(((longlong)iVar44 / 3 + ((longlong)iVar44 >> 0x3f) & 0xffffffffU) >>
                            0x1f)) * -3);
    pdVar47 = (double *)(longlong)iVar46;
    while( true ) {
      plVar22 = local_688;
      if ((int)local_688[1] - *(int *)((longlong)local_688 + 0x34) != (int)uStack_660) {
        local_784[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_784);
      }
      pFVar19 = local_760;
      if (((TStack_680.CurrentBitIndex == uVar41) &&
          ((ForElementType<unsigned_int>)TStack_680.Array == local_770)) &&
         (plVar22 == (longlong *)(local_198 + local_758))) break;
      lVar27 = *plVar22;
      lVar39 = (longlong)TStack_680.CurrentBitIndex * 0x60;
      uVar40 = *(uint *)(lVar39 + lVar27);
      if (*(int *)(local_198 + (longlong)pdVar47 * 0x50 + 8) !=
          *(int *)(auStack_160 + (longlong)pdVar47 * 0x50 + -4)) {
        puVar32 = auStack_160 + (longlong)pdVar47 * 0x50;
        if (*(undefined1 **)((longlong)local_150 + ((longlong)pdVar47 * 10 + -1) * 8) !=
            (undefined1 *)0x0) {
          puVar32 = *(undefined1 **)((longlong)local_150 + ((longlong)pdVar47 * 10 + -1) * 8);
        }
        uVar42 = *(uint *)(puVar32 +
                          (ulonglong)
                          ((int)*(longlong *)((longlong)local_150 + (longlong)pdVar47 * 10 * 8) - 1U
                          & uVar40) * 4);
        if (uVar42 != 0xffffffff) {
          do {
            puVar31 = (uint *)((longlong)(int)uVar42 * 0x60 +
                              *(longlong *)(local_198 + (longlong)pdVar47 * 0x50));
            if (*puVar31 == uVar40) {
              pdVar28 = (double *)(puVar31 + 2);
              if (puVar31 == (uint *)0x0) {
                pdVar28 = pdVar45;
              }
              if (pdVar28 != (double *)0x0) {
                if (0.0 < (*pdVar28 - *(double *)(lVar39 + 8 + lVar27)) *
                          (dVar5 - *(double *)(lVar39 + 0x10 + lVar27)) -
                          (dVar12 - *(double *)(lVar39 + 8 + lVar27)) *
                          (pdVar28[1] - *(double *)(lVar39 + 0x10 + lVar27))) {
                  uVar6 = *(undefined4 *)(lVar39 + lVar27);
                  local_408[(longlong)pdVar47] = local_408[(longlong)pdVar47] + 1;
                  if ((*(int *)(local_328 + (longlong)pdVar47 * 0x15) == -1) ||
                     (0.0 < ((local_398[(longlong)pdVar47 * 0x15 + 5] +
                             local_3c8[(longlong)pdVar47 * 0x15 + 1]) * dVar18 - pdVar28[1]) *
                            (*(double *)(lVar39 + 8 + lVar27) - *pdVar28) -
                            ((local_398[(longlong)pdVar47 * 0x15 + 4] +
                             local_3c8[(longlong)pdVar47 * 0x15]) * dVar18 - *pdVar28) *
                            (*(double *)(lVar39 + 0x10 + lVar27) - pdVar28[1]))) {
                    dVar13 = pdVar28[1];
                    local_3c8[(longlong)pdVar47 * 0x15] = *pdVar28;
                    local_3c8[(longlong)pdVar47 * 0x15 + 1] = dVar13;
                    dVar13 = pdVar28[3];
                    local_3c8[(longlong)pdVar47 * 0x15 + 2] = pdVar28[2];
                    local_3c8[(longlong)pdVar47 * 0x15 + 3] = dVar13;
                    dVar13 = pdVar28[5];
                    local_3c8[(longlong)pdVar47 * 0x15 + 4] = pdVar28[4];
                    (&local_3a0)[(longlong)pdVar47 * 0x15] = dVar13;
                    dVar13 = pdVar28[7];
                    local_398[(longlong)pdVar47 * 0x15] = pdVar28[6];
                    local_398[(longlong)pdVar47 * 0x15 + 1] = dVar13;
                    dVar13 = pdVar28[9];
                    local_398[(longlong)pdVar47 * 0x15 + 2] = pdVar28[8];
                    local_398[(longlong)pdVar47 * 0x15 + 3] = dVar13;
                    pdVar28 = (double *)(lVar39 + 8 + lVar27);
                    dVar13 = pdVar28[1];
                    local_398[(longlong)pdVar47 * 0x15 + 4] = *pdVar28;
                    local_398[(longlong)pdVar47 * 0x15 + 5] = dVar13;
                    pdVar28 = (double *)(lVar39 + 0x18 + lVar27);
                    dVar13 = pdVar28[1];
                    local_398[(longlong)pdVar47 * 0x15 + 6] = *pdVar28;
                    local_398[(longlong)pdVar47 * 0x15 + 7] = dVar13;
                    pdVar28 = (double *)(lVar39 + 0x28 + lVar27);
                    dVar13 = pdVar28[1];
                    local_398[(longlong)pdVar47 * 0x15 + 8] = *pdVar28;
                    (&local_350)[(longlong)pdVar47 * 0x15] = dVar13;
                    pdVar28 = (double *)(lVar39 + 0x38 + lVar27);
                    dVar13 = pdVar28[1];
                    local_348[(longlong)pdVar47 * 0x15] = *pdVar28;
                    local_348[(longlong)pdVar47 * 0x15 + 1] = dVar13;
                    puVar3 = (undefined8 *)(lVar39 + 0x48 + lVar27);
                    uVar15 = *puVar3;
                    dVar13 = (double)puVar3[1];
                    *(undefined4 *)(local_328 + (longlong)pdVar47 * 0x15) = uVar6;
                    (&uStack_338)[(longlong)pdVar47 * 0x15] = uVar15;
                    local_328[(longlong)pdVar47 * 0x15 + -1] = dVar13;
                  }
                }
                else {
                  local_408[(longlong)pdVar48] = local_408[(longlong)pdVar48] + 1;
                  if ((*(int *)(local_328 + (longlong)pdVar48 * 0x15) == -1) ||
                     (0.0 < ((local_398[(longlong)pdVar48 * 0x15 + 5] +
                             local_3c8[(longlong)pdVar48 * 0x15 + 1]) * dVar18 -
                            *(double *)(lVar39 + 0x10 + lVar27)) *
                            (*pdVar28 - *(double *)(lVar39 + 8 + lVar27)) -
                            ((local_398[(longlong)pdVar48 * 0x15 + 4] +
                             local_3c8[(longlong)pdVar48 * 0x15]) * dVar18 -
                            *(double *)(lVar39 + 8 + lVar27)) *
                            (pdVar28[1] - *(double *)(lVar39 + 0x10 + lVar27)))) {
                    pdVar2 = (double *)(lVar39 + 8 + lVar27);
                    dVar13 = pdVar2[1];
                    local_3c8[(longlong)pdVar48 * 0x15] = *pdVar2;
                    local_3c8[(longlong)pdVar48 * 0x15 + 1] = dVar13;
                    pdVar2 = (double *)(lVar39 + 0x18 + lVar27);
                    dVar13 = pdVar2[1];
                    local_3c8[(longlong)pdVar48 * 0x15 + 2] = *pdVar2;
                    local_3c8[(longlong)pdVar48 * 0x15 + 3] = dVar13;
                    pdVar2 = (double *)(lVar39 + 0x28 + lVar27);
                    dVar13 = pdVar2[1];
                    local_3c8[(longlong)pdVar48 * 0x15 + 4] = *pdVar2;
                    (&local_3a0)[(longlong)pdVar48 * 0x15] = dVar13;
                    pdVar2 = (double *)(lVar39 + 0x38 + lVar27);
                    dVar13 = pdVar2[1];
                    local_398[(longlong)pdVar48 * 0x15] = *pdVar2;
                    local_398[(longlong)pdVar48 * 0x15 + 1] = dVar13;
                    pdVar2 = (double *)(lVar39 + 0x48 + lVar27);
                    dVar13 = pdVar2[1];
                    local_398[(longlong)pdVar48 * 0x15 + 2] = *pdVar2;
                    local_398[(longlong)pdVar48 * 0x15 + 3] = dVar13;
                    dVar13 = pdVar28[1];
                    local_398[(longlong)pdVar48 * 0x15 + 4] = *pdVar28;
                    local_398[(longlong)pdVar48 * 0x15 + 5] = dVar13;
                    dVar13 = pdVar28[3];
                    local_398[(longlong)pdVar48 * 0x15 + 6] = pdVar28[2];
                    local_398[(longlong)pdVar48 * 0x15 + 7] = dVar13;
                    dVar13 = pdVar28[5];
                    local_398[(longlong)pdVar48 * 0x15 + 8] = pdVar28[4];
                    (&local_350)[(longlong)pdVar48 * 0x15] = dVar13;
                    dVar13 = pdVar28[7];
                    local_348[(longlong)pdVar48 * 0x15] = pdVar28[6];
                    local_348[(longlong)pdVar48 * 0x15 + 1] = dVar13;
                    dVar13 = pdVar28[8];
                    dVar14 = pdVar28[9];
                    *(uint *)(local_328 + (longlong)pdVar48 * 0x15) = uVar40;
                    (&uStack_338)[(longlong)pdVar48 * 0x15] = dVar13;
                    local_328[(longlong)pdVar48 * 0x15 + -1] = dVar14;
                  }
                  uVar6 = *(undefined4 *)(lVar39 + lVar27);
                  local_408[uVar43] = local_408[uVar43] + 1;
                  if ((*(int *)(local_328 + uVar43 * 0x15) == -1) ||
                     (0.0 < ((local_398[uVar43 * 0x15 + 5] + local_3c8[uVar43 * 0x15 + 1]) * dVar18
                            - *(double *)(lVar39 + 0x10 + lVar27)) *
                            (*pdVar28 - *(double *)(lVar39 + 8 + lVar27)) -
                            ((local_398[uVar43 * 0x15 + 4] + local_3c8[uVar43 * 0x15]) * dVar18 -
                            *(double *)(lVar39 + 8 + lVar27)) *
                            (pdVar28[1] - *(double *)(lVar39 + 0x10 + lVar27)))) {
                    pdVar2 = (double *)(lVar39 + 8 + lVar27);
                    dVar13 = pdVar2[1];
                    local_3c8[uVar43 * 0x15] = *pdVar2;
                    local_3c8[uVar43 * 0x15 + 1] = dVar13;
                    pdVar2 = (double *)(lVar39 + 0x18 + lVar27);
                    dVar13 = pdVar2[1];
                    local_3c8[uVar43 * 0x15 + 2] = *pdVar2;
                    local_3c8[uVar43 * 0x15 + 3] = dVar13;
                    pdVar2 = (double *)(lVar39 + 0x28 + lVar27);
                    dVar13 = pdVar2[1];
                    local_3c8[uVar43 * 0x15 + 4] = *pdVar2;
                    (&local_3a0)[uVar43 * 0x15] = dVar13;
                    pdVar2 = (double *)(lVar39 + 0x38 + lVar27);
                    dVar13 = pdVar2[1];
                    local_398[uVar43 * 0x15] = *pdVar2;
                    local_398[uVar43 * 0x15 + 1] = dVar13;
                    pdVar2 = (double *)(lVar39 + 0x48 + lVar27);
                    dVar13 = pdVar2[1];
                    local_398[uVar43 * 0x15 + 2] = *pdVar2;
                    local_398[uVar43 * 0x15 + 3] = dVar13;
                    dVar13 = pdVar28[1];
                    local_398[uVar43 * 0x15 + 4] = *pdVar28;
                    local_398[uVar43 * 0x15 + 5] = dVar13;
                    dVar13 = pdVar28[3];
                    local_398[uVar43 * 0x15 + 6] = pdVar28[2];
                    local_398[uVar43 * 0x15 + 7] = dVar13;
                    dVar13 = pdVar28[5];
                    local_398[uVar43 * 0x15 + 8] = pdVar28[4];
                    (&local_350)[uVar43 * 0x15] = dVar13;
                    dVar13 = pdVar28[7];
                    local_348[uVar43 * 0x15] = pdVar28[6];
                    local_348[uVar43 * 0x15 + 1] = dVar13;
                    dVar13 = pdVar28[8];
                    dVar14 = pdVar28[9];
                    *(undefined4 *)(local_328 + uVar43 * 0x15) = uVar6;
                    (&uStack_338)[uVar43 * 0x15] = dVar13;
                    local_328[uVar43 * 0x15 + -1] = dVar14;
                  }
                }
                goto LAB_14c755cca;
              }
              break;
            }
            uVar42 = puVar31[0x16];
          } while (uVar42 != 0xffffffff);
        }
      }
      if (*(int *)(local_198 + uVar43 * 0x50 + 8) != *(int *)(auStack_160 + uVar43 * 0x50 + -4)) {
        puVar32 = auStack_160 + uVar43 * 0x50;
        if (*(undefined1 **)((longlong)local_150 + (uVar43 * 10 + -1) * 8) != (undefined1 *)0x0) {
          puVar32 = *(undefined1 **)((longlong)local_150 + (uVar43 * 10 + -1) * 8);
        }
        iVar44 = *(int *)(puVar32 +
                         (ulonglong)
                         ((int)*(longlong *)((longlong)local_150 + uVar43 * 10 * 8) - 1U & uVar40) *
                         4);
        if (iVar44 != -1) {
          do {
            if (*(uint *)((longlong)iVar44 * 0x60 + *(longlong *)(local_198 + uVar43 * 0x50)) ==
                uVar40) {
              if (iVar44 != -1) goto LAB_14c755cca;
              break;
            }
            iVar44 = *(int *)((longlong)iVar44 * 0x60 + 0x58 +
                             *(longlong *)(local_198 + uVar43 * 0x50));
          } while (iVar44 != -1);
        }
      }
      local_608[5] = 0.0;
      local_608[3] = 0.0;
      local_608[4] = 0.0;
      if ((2 < uVar43) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L""), bVar23)) {
        pcVar11 = (code *)swi(3);
        EVar24 = (*pcVar11)();
        return EVar24;
      }
      uVar40 = *(uint *)((longlong)&local_740 + uVar43 * 4);
      local_608[uVar43 + 3] = 1.0;
      uVar33 = (ulonglong)(uVar40 & 0x1ff);
      local_638 = local_608[5];
      local_648 = local_608[3];
      dStack_640 = local_608[4];
      local_658 = local_1c8[uVar43 * 2];
      dStack_650 = local_1c8[uVar43 * 2 + 1];
      lVar9 = *(longlong *)
               ((local_760->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data +
               (ulonglong)(uVar40 >> 9) * 8);
      pdVar28 = (double *)(lVar9 + uVar33 * 0x28);
      dStack_630 = *pdVar28;
      dStack_628 = pdVar28[1];
      pdVar28 = (double *)(lVar9 + 0x10 + uVar33 * 0x28);
      dStack_620 = *pdVar28;
      uStack_618 = pdVar28[1];
      local_610 = *(double *)(lVar9 + 0x20 + uVar33 * 0x28);
      uVar6 = *(undefined4 *)(lVar39 + lVar27);
      dVar14 = local_610;
      dVar13 = uStack_618;
      if (0.0 < (dVar5 - *(double *)(lVar39 + 0x10 + lVar27)) *
                (local_658 - *(double *)(lVar39 + 8 + lVar27)) -
                (dVar12 - *(double *)(lVar39 + 8 + lVar27)) *
                (dStack_650 - *(double *)(lVar39 + 0x10 + lVar27))) {
        local_408[(longlong)pdVar47] = local_408[(longlong)pdVar47] + 1;
        if ((*(int *)(local_328 + (longlong)pdVar47 * 0x15) == -1) ||
           (uStack_618 = dVar13, local_610 = dVar14,
           0.0 < ((local_398[(longlong)pdVar47 * 0x15 + 5] + local_3c8[(longlong)pdVar47 * 0x15 + 1]
                  ) * dVar18 - dStack_650) * (*(double *)(lVar39 + 8 + lVar27) - local_658) -
                 ((local_398[(longlong)pdVar47 * 0x15 + 4] + local_3c8[(longlong)pdVar47 * 0x15]) *
                  dVar18 - local_658) * (*(double *)(lVar39 + 0x10 + lVar27) - dStack_650))) {
          local_3c8[(longlong)pdVar47 * 0x15] = local_658;
          local_3c8[(longlong)pdVar47 * 0x15 + 1] = dStack_650;
          local_3c8[(longlong)pdVar47 * 0x15 + 2] = local_608[3];
          local_3c8[(longlong)pdVar47 * 0x15 + 3] = local_608[4];
          local_3c8[(longlong)pdVar47 * 0x15 + 4] = local_608[5];
          (&local_3a0)[(longlong)pdVar47 * 0x15] = dStack_630;
          local_398[(longlong)pdVar47 * 0x15] = dStack_628;
          local_398[(longlong)pdVar47 * 0x15 + 1] = dStack_620;
          local_398[(longlong)pdVar47 * 0x15 + 2] = uStack_618;
          local_398[(longlong)pdVar47 * 0x15 + 3] = local_610;
          pdVar28 = (double *)(lVar39 + 8 + lVar27);
          dVar16 = pdVar28[1];
          local_398[(longlong)pdVar47 * 0x15 + 4] = *pdVar28;
          local_398[(longlong)pdVar47 * 0x15 + 5] = dVar16;
          pdVar28 = (double *)(lVar39 + 0x18 + lVar27);
          dVar16 = pdVar28[1];
          local_398[(longlong)pdVar47 * 0x15 + 6] = *pdVar28;
          local_398[(longlong)pdVar47 * 0x15 + 7] = dVar16;
          pdVar28 = (double *)(lVar39 + 0x28 + lVar27);
          dVar16 = pdVar28[1];
          local_398[(longlong)pdVar47 * 0x15 + 8] = *pdVar28;
          (&local_350)[(longlong)pdVar47 * 0x15] = dVar16;
          pdVar28 = (double *)(lVar39 + 0x38 + lVar27);
          dVar16 = pdVar28[1];
          local_348[(longlong)pdVar47 * 0x15] = *pdVar28;
          local_348[(longlong)pdVar47 * 0x15 + 1] = dVar16;
          puVar4 = (undefined4 *)(lVar39 + 0x48 + lVar27);
          uStack_618._0_4_ = *puVar4;
          uStack_618._4_4_ = puVar4[1];
          local_610._0_4_ = puVar4[2];
          local_610._4_4_ = puVar4[3];
          pdVar28 = pdVar47;
          goto LAB_14c755cbb;
        }
      }
      else {
        local_408[(longlong)pdVar48] = local_408[(longlong)pdVar48] + 1;
        if ((*(int *)(local_328 + (longlong)pdVar48 * 0x15) == -1) ||
           (uStack_618 = dVar13, local_610 = dVar14,
           0.0 < ((local_398[(longlong)pdVar48 * 0x15 + 5] + local_3c8[(longlong)pdVar48 * 0x15 + 1]
                  ) * dVar18 - *(double *)(lVar39 + 0x10 + lVar27)) *
                 (local_658 - *(double *)(lVar39 + 8 + lVar27)) -
                 ((local_398[(longlong)pdVar48 * 0x15 + 4] + local_3c8[(longlong)pdVar48 * 0x15]) *
                  dVar18 - *(double *)(lVar39 + 8 + lVar27)) *
                 (dStack_650 - *(double *)(lVar39 + 0x10 + lVar27)))) {
          pdVar28 = (double *)(lVar39 + 8 + lVar27);
          dVar16 = pdVar28[1];
          local_3c8[(longlong)pdVar48 * 0x15] = *pdVar28;
          local_3c8[(longlong)pdVar48 * 0x15 + 1] = dVar16;
          pdVar28 = (double *)(lVar39 + 0x18 + lVar27);
          dVar16 = pdVar28[1];
          local_3c8[(longlong)pdVar48 * 0x15 + 2] = *pdVar28;
          local_3c8[(longlong)pdVar48 * 0x15 + 3] = dVar16;
          pdVar28 = (double *)(lVar39 + 0x28 + lVar27);
          dVar16 = pdVar28[1];
          local_3c8[(longlong)pdVar48 * 0x15 + 4] = *pdVar28;
          (&local_3a0)[(longlong)pdVar48 * 0x15] = dVar16;
          pdVar28 = (double *)(lVar39 + 0x38 + lVar27);
          dVar16 = pdVar28[1];
          local_398[(longlong)pdVar48 * 0x15] = *pdVar28;
          local_398[(longlong)pdVar48 * 0x15 + 1] = dVar16;
          pdVar28 = (double *)(lVar39 + 0x48 + lVar27);
          dVar16 = *pdVar28;
          dVar17 = pdVar28[1];
          local_398[(longlong)pdVar48 * 0x15 + 4] = local_658;
          local_398[(longlong)pdVar48 * 0x15 + 5] = dStack_650;
          local_398[(longlong)pdVar48 * 0x15 + 2] = dVar16;
          local_398[(longlong)pdVar48 * 0x15 + 3] = dVar17;
          local_398[(longlong)pdVar48 * 0x15 + 6] = local_608[3];
          local_398[(longlong)pdVar48 * 0x15 + 7] = local_608[4];
          local_398[(longlong)pdVar48 * 0x15 + 8] = local_608[5];
          (&local_350)[(longlong)pdVar48 * 0x15] = dStack_630;
          uStack_618._4_4_ = (undefined4)((ulonglong)uStack_618 >> 0x20);
          local_610._4_4_ = (undefined4)((ulonglong)local_610 >> 0x20);
          local_348[(longlong)pdVar48 * 0x15] = dStack_628;
          local_348[(longlong)pdVar48 * 0x15 + 1] = dStack_620;
          pdVar28 = pdVar48;
LAB_14c755cbb:
          *(undefined4 *)(local_328 + (longlong)pdVar28 * 0x15) = uVar6;
          *(undefined4 *)(&uStack_338 + (longlong)pdVar28 * 0x15) = (undefined4)uStack_618;
          *(undefined4 *)((longlong)&uStack_338 + (longlong)pdVar28 * 0xa8 + 4U) = uStack_618._4_4_;
          *(undefined4 *)(local_328 + (longlong)pdVar28 * 0x15 + -1) = (undefined4)local_610;
          *(undefined4 *)((longlong)local_328 + (longlong)pdVar28 * 0xa8 + -4) = local_610._4_4_;
          uStack_618 = dVar13;
          local_610 = dVar14;
        }
      }
LAB_14c755cca:
      TStack_680.UnvisitedBitMask = TStack_680.UnvisitedBitMask & ~TStack_680._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_680);
    }
    pdVar47 = (double *)(ulonglong)local_774;
    local_758 = local_758 + 0x50;
    pdVar48 = (double *)((longlong)pdVar48 + 1);
  } while ((longlong)pdVar48 < 3);
  local_5c8 = local_3c8;
  local_5c0 = local_1c8;
  local_5b8 = &local_740;
  local_5b0 = local_760;
  `UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::<lambda_5>::operator()(&local_5c8,&local_6c8);
  local_5d0 = &local_6c8;
  local_5d8 = pFVar19;
  local_768[0] = `UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::<lambda_6>::operator()
                           (&local_5d8);
  pTVar20 = local_730;
  if (local_768[0] == -1) {
    EVar24 = Failed_Unsupported;
  }
  else {
    local_5a8 = &local_6c8;
    local_590 = local_768;
    local_5a0 = local_730;
    local_598 = pFVar19;
    `UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::<lambda_7>::operator()
              (&local_5a8,(TVector<double> *)&local_560._s_0);
    pFVar21 = local_728;
    local_488.Position.EdgePosition.Alpha = local_560._s_0.X;
    local_488.Position._16_8_ = local_560._s_0.Y;
    local_488.PositionType = Triangle;
    local_488.Position.EdgePosition.EdgeID = local_768[0];
    local_488.Position._24_8_ = local_560._s_0.Z;
    EVar24 = FSimpleIntrinsicMesh::PokeTriangle
                       ((FSimpleIntrinsicMesh *)pFVar19,local_780[0],pTVar20,local_728);
    uVar41 = local_780[0];
    if (EVar24 == Ok) {
      local_788 = (pFVar21->NewTriangles).field0_0x0._s_0.B;
      uVar40 = (pFVar21->NewTriangles).field0_0x0._s_0.A;
      local_758 = (ulonglong)uVar40;
      uVar42 = pFVar21->NewVertex;
      local_774 = local_780[0];
      lVar27 = *(longlong *)(pFVar19->_padding_ + (ulonglong)(local_780[0] >> 9) * 8);
      local_728 = (FPokeTriangleInfo *)(ulonglong)(uVar40 >> 9);
      local_710 = *(ulonglong *)(lVar27 + (ulonglong)(local_780[0] & 0x1ff) * 0xc);
      local_708 = *(uint *)(lVar27 + 8 + (ulonglong)(local_780[0] & 0x1ff) * 0xc);
      uVar43 = (ulonglong)(uVar40 & 0x1ff);
      local_730 = (TVector<double> *)(uVar43 * 3);
      lVar27 = *(longlong *)(pFVar19->_padding_ + (longlong)local_728 * 8);
      local_6d8 = *(undefined8 *)(lVar27 + uVar43 * 0xc);
      local_6d0 = *(undefined4 *)(lVar27 + 8 + uVar43 * 0xc);
      TDynamicVector<int,512>::InsertAt
                (&(pFVar19->NormalCoordinates).NormalCoord,local_408,local_708);
      TDynamicVector<int,512>::InsertAt
                (&(pFVar19->NormalCoordinates).NormalCoord,local_408 + 2,local_6d8._4_4_);
      TDynamicVector<int,512>::InsertAt
                (&(pFVar19->NormalCoordinates).NormalCoord,local_408 + 1,local_710._4_4_);
      lVar39 = (longlong)(int)(uint)local_740;
      local_3f8._4_8_ = 0xffffffffffffffff;
      local_3ec._4_8_ = 0xffffffffffffffff;
      local_3e0[0]._4_8_ = 0xffffffffffffffff;
      lVar27 = *(longlong *)
                ((pFVar19->NormalCoordinates).RoundaboutOrder.Blocks.AllocatorInstance.Data +
                (ulonglong)(local_780[0] >> 9) * 8);
      pFVar10 = (pFVar19->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data;
      local_718 = *(int *)(lVar27 + 8 + (ulonglong)(local_780[0] & 0x1ff) * 0xc);
      local_720 = *(undefined8 *)(lVar27 + (ulonglong)(local_780[0] & 0x1ff) * 0xc);
      uVar43 = (ulonglong)((uint)local_740 & 0x1ff);
      iVar44 = (int)local_720;
      local_3f8._s_0.A = (int)local_720;
      iVar46 = (int)((ulonglong)local_720 >> 0x20);
      lVar27 = *(longlong *)(pFVar10 + (ulonglong)((uint)local_740 >> 9) * 8);
      piVar1 = (int *)(lVar27 + uVar43 * 0x28);
      local_528 = *piVar1;
      iStack_524 = piVar1[1];
      iStack_520 = piVar1[2];
      iStack_51c = piVar1[3];
      puVar3 = (undefined8 *)(lVar27 + 0x10 + uVar43 * 0x28);
      local_518 = *puVar3;
      uStack_510 = puVar3[1];
      local_508 = *(undefined8 *)(lVar27 + 0x20 + uVar43 * 0x28);
      uVar43 = (ulonglong)(local_740._4_4_ & 0x1ff);
      lVar27 = *(longlong *)(pFVar10 + (ulonglong)(local_740._4_4_ >> 9) * 8);
      puVar3 = (undefined8 *)(lVar27 + uVar43 * 0x28);
      local_500 = *puVar3;
      uStack_4f8 = puVar3[1];
      puVar3 = (undefined8 *)(lVar27 + 0x10 + uVar43 * 0x28);
      local_4f0 = *puVar3;
      uStack_4e8 = puVar3[1];
      local_4e0 = *(undefined8 *)(lVar27 + 0x20 + uVar43 * 0x28);
      uVar43 = (ulonglong)(local_738 & 0x1ff);
      lVar27 = *(longlong *)(pFVar10 + (ulonglong)(local_738 >> 9) * 8);
      puVar3 = (undefined8 *)(lVar27 + uVar43 * 0x28);
      local_4d8 = *puVar3;
      uStack_4d0 = puVar3[1];
      puVar3 = (undefined8 *)(lVar27 + 0x10 + uVar43 * 0x28);
      local_4c8 = *puVar3;
      uStack_4c0 = puVar3[1];
      local_4b8 = *(undefined8 *)(lVar27 + 0x20 + uVar43 * 0x28);
      uVar40 = local_740._4_4_;
      local_3ec._s_0.A = iVar46;
      local_3e0[0]._0_4_ = local_718;
      if (local_528 == 0) {
        uVar43 = (ulonglong)(uVar41 & 0x1ff);
        pFVar10 = (local_760->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data;
        lVar27 = *(longlong *)(local_760->_padding_ + (ulonglong)(uVar41 >> 9) * 8);
        local_748 = *(uint *)(lVar27 + 8 + uVar43 * 0xc);
        local_750 = *(ulonglong *)(lVar27 + uVar43 * 0xc);
        iVar34 = *(int *)(*(longlong *)(pFVar10 + (local_750 >> 0x29) * 8) +
                         (ulonglong)((uint)(local_750 >> 0x20) & 0x1ff) * 4);
        iVar35 = *(int *)(*(longlong *)(pFVar10 + (ulonglong)(local_748 >> 9) * 8) +
                         (ulonglong)(local_748 & 0x1ff) * 4);
        iVar7 = *(int *)(*(longlong *)(pFVar10 + ((local_750 & 0xffffffff) >> 9) * 8) +
                        (ulonglong)((uint)local_750 & 0x1ff) * 4);
        if (iVar7 < 1) {
          iVar7 = 0;
        }
        if (iVar34 < 1) {
          iVar34 = 0;
        }
        if (iVar35 < 1) {
          iVar35 = 0;
        }
        iVar35 = (iVar34 - iVar7) - iVar35;
        iVar34 = (local_760->NormalCoordinates).RefVertDegree.ArrayNum;
        if (iVar35 < 1) {
          iVar35 = 0;
        }
        uVar41 = 0;
        if ((int)(uint)local_740 < iVar34) {
          uVar41 = ~(uint)local_740 >> 0x1f;
        }
        if (uVar41 == 0) {
          local_798 = lVar39;
          local_790 = (longlong)iVar34;
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar23) {
            pcVar11 = (code *)swi(3);
            EVar24 = (*pcVar11)();
            return EVar24;
          }
        }
        local_3e0[0]._4_4_ =
             (iVar44 + iVar35) %
             *(int *)((local_760->NormalCoordinates).RefVertDegree.AllocatorInstance.Data +
                     lVar39 * 4);
        uVar40 = local_740._4_4_;
      }
      pFVar19 = local_760;
      uVar41 = 0;
      if ((int)local_500 == 0) {
        pFVar10 = (local_760->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data;
        lVar27 = *(longlong *)(local_760->_padding_ + (longlong)local_728 * 8);
        local_750 = *(ulonglong *)(lVar27 + (longlong)local_730 * 4);
        local_748 = *(uint *)(lVar27 + 8 + (longlong)local_730 * 4);
        uVar36 = *(uint *)(*(longlong *)(pFVar10 + (local_750 >> 0x29) * 8) +
                          (ulonglong)((uint)(local_750 >> 0x20) & 0x1ff) * 4);
        uVar37 = *(uint *)(*(longlong *)(pFVar10 + (ulonglong)(local_748 >> 9) * 8) +
                          (ulonglong)(local_748 & 0x1ff) * 4);
        uVar8 = *(uint *)(*(longlong *)(pFVar10 + ((local_750 & 0xffffffff) >> 9) * 8) +
                         (ulonglong)((uint)local_750 & 0x1ff) * 4);
        if ((int)uVar8 < 1) {
          uVar8 = uVar41;
        }
        if ((int)uVar36 < 1) {
          uVar36 = uVar41;
        }
        if ((int)uVar37 < 1) {
          uVar37 = uVar41;
        }
        uVar37 = (uVar36 - uVar8) - uVar37;
        iVar44 = (local_760->NormalCoordinates).RefVertDegree.ArrayNum;
        if ((int)uVar37 < 1) {
          uVar37 = uVar41;
        }
        if ((int)uVar40 < iVar44) {
          uVar41 = ~uVar40 >> 0x1f;
        }
        if (uVar41 == 0) {
          local_798 = (longlong)(int)uVar40;
          local_790 = (longlong)iVar44;
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar23) {
            pcVar11 = (code *)swi(3);
            EVar24 = (*pcVar11)();
            return EVar24;
          }
        }
        local_3f8._s_0.B =
             (int)(uVar37 + iVar46) %
             *(int *)((pFVar19->NormalCoordinates).RefVertDegree.AllocatorInstance.Data +
                     (longlong)(int)uVar40 * 4);
      }
      uVar6 = local_3e0[0]._s_0.A;
      if ((int)local_4d8 == 0) {
        lVar39 = (longlong)(int)local_738;
        iVar44 = (pFVar19->NormalCoordinates).RefVertDegree.ArrayNum;
        lVar27 = *(longlong *)(pFVar19->_padding_ + (ulonglong)(local_788 >> 9) * 8);
        local_748 = *(uint *)(lVar27 + 8 + (ulonglong)(local_788 & 0x1ff) * 0xc);
        local_750 = *(ulonglong *)(lVar27 + (ulonglong)(local_788 & 0x1ff) * 0xc);
        pFVar10 = (pFVar19->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data;
        iVar46 = *(int *)(*(longlong *)(pFVar10 + (local_750 >> 0x29) * 8) +
                         (ulonglong)((uint)(local_750 >> 0x20) & 0x1ff) * 4);
        iVar34 = *(int *)(*(longlong *)(pFVar10 + (ulonglong)(local_748 >> 9) * 8) +
                         (ulonglong)(local_748 & 0x1ff) * 4);
        iVar35 = *(int *)(*(longlong *)(pFVar10 + ((local_750 & 0xffffffff) >> 9) * 8) +
                         (ulonglong)((uint)local_750 & 0x1ff) * 4);
        if (iVar35 < 1) {
          iVar35 = 0;
        }
        if (iVar46 < 1) {
          iVar46 = 0;
        }
        if (iVar34 < 1) {
          iVar34 = 0;
        }
        iVar34 = (iVar46 - iVar35) - iVar34;
        if (iVar34 < 1) {
          iVar34 = 0;
        }
        uVar41 = 0;
        if ((int)local_738 < iVar44) {
          uVar41 = ~local_738 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (local_798 = lVar39, local_790 = (longlong)iVar44,
           bVar23 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar23)) {
          pcVar11 = (code *)swi(3);
          EVar24 = (*pcVar11)();
          return EVar24;
        }
        local_3ec._s_0.B =
             (iVar34 + uVar6) %
             *(int *)((pFVar19->NormalCoordinates).RefVertDegree.AllocatorInstance.Data + lVar39 * 4
                     );
      }
      TDynamicVector<UE::Geometry::FIndex3i,512>::InsertAt
                (&(pFVar19->NormalCoordinates).RoundaboutOrder,(FIndex3i *)&local_3f8._s_0,local_774
                );
      TDynamicVector<UE::Geometry::FIndex3i,512>::InsertAt
                (&(pFVar19->NormalCoordinates).RoundaboutOrder,(FIndex3i *)&local_3ec._s_0,
                 (uint)local_758);
      TDynamicVector<UE::Geometry::FIndex3i,512>::InsertAt
                (&(pFVar19->NormalCoordinates).RoundaboutOrder,(FIndex3i *)&local_3e0[0]._s_0,
                 local_788);
      IntrinsicCorrespondenceUtils::AsR3Position
                ((TVector<double> *)&local_548._s_0,&local_488,
                 (FDynamicMesh3 *)(pFVar19->NormalCoordinates)._padding_,local_778);
      this_00 = &pFVar19->IntrinsicVertexPositions;
      uVar43 = (ulonglong)(uVar42 & 0x1ff);
      lVar27 = *(longlong *)(pFVar19->_padding_ + (ulonglong)(uVar42 >> 9) * 8);
      pdVar45 = (double *)(lVar27 + uVar43 * 0x18);
      *pdVar45 = local_548._s_0.X;
      pdVar45[1] = local_548._s_0.Y;
      *(double *)(lVar27 + 0x10 + uVar43 * 0x18) = local_548._s_0.Z;
      uVar41 = this_00->CurBlock;
      EVar25 = (pFVar19->IntrinsicVertexPositions).CurBlockUsed;
      uVar40 = uVar41 * 0x200 + EVar25;
      EVar24 = Ok;
      if (uVar42 == uVar40) {
        if (EVar25 == 0x200) {
          if (uVar41 == (pFVar19->IntrinsicVertexPositions).Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>::
            AddAllocatedBlock(this_00);
          }
          this_00->CurBlock = this_00->CurBlock + 1;
          uVar41 = this_00->CurBlock;
          (pFVar19->IntrinsicVertexPositions).CurBlockUsed = 0;
          EVar25 = EVar24;
        }
      }
      else {
        if (uVar42 <= uVar40) {
          lVar27 = *(longlong *)
                    ((pFVar19->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar42 >> 9) * 8);
          puVar3 = (undefined8 *)(lVar27 + uVar43 * 0x28);
          *puVar3 = CONCAT44(local_488._4_4_,local_488.PositionType);
          puVar3[1] = CONCAT44(local_488.Position._4_4_,local_488.Position.EdgePosition.EdgeID);
          pdVar45 = (double *)(lVar27 + 0x10 + uVar43 * 0x28);
          *pdVar45 = local_488.Position.EdgePosition.Alpha;
          pdVar45[1] = (double)local_488.Position._16_8_;
          *(undefined8 *)(lVar27 + 0x20 + uVar43 * 0x28) = local_488.Position._24_8_;
          goto LAB_14c756531;
        }
        TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>::Resize
                  (this_00,uVar42);
        EVar25 = (pFVar19->IntrinsicVertexPositions).CurBlockUsed;
        if (EVar25 == 0x200) {
          if (this_00->CurBlock == (pFVar19->IntrinsicVertexPositions).Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>::
            AddAllocatedBlock(this_00);
          }
          this_00->CurBlock = this_00->CurBlock + 1;
          (pFVar19->IntrinsicVertexPositions).CurBlockUsed = 0;
          EVar25 = EVar24;
        }
        uVar41 = this_00->CurBlock;
      }
      lVar39 = (longlong)(int)EVar25;
      lVar27 = *(longlong *)
                ((pFVar19->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data +
                (longlong)(int)uVar41 * 8);
      puVar3 = (undefined8 *)(lVar27 + lVar39 * 0x28);
      *puVar3 = CONCAT44(local_488._4_4_,local_488.PositionType);
      puVar3[1] = CONCAT44(local_488.Position._4_4_,local_488.Position.EdgePosition.EdgeID);
      pdVar45 = (double *)(lVar27 + 0x10 + lVar39 * 0x28);
      *pdVar45 = local_488.Position.EdgePosition.Alpha;
      pdVar45[1] = (double)local_488.Position._16_8_;
      *(undefined8 *)(lVar27 + 0x20 + lVar39 * 0x28) = local_488.Position._24_8_;
      puVar31 = &(pFVar19->IntrinsicVertexPositions).CurBlockUsed;
      *puVar31 = *puVar31 + 1;
    }
  }
LAB_14c756531:
  if (local_6c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c8.AllocatorInstance.Data);
  }
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,_UE::Geometry::FIntrinsicMesh::PokeTriangle_::__l2::FPointCorrespondence>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_f8);
  local_100 = 0;
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  TSparseArray<TSparseSetElement<TTuple<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,_UE::Geometry::FIntrinsicMesh::PokeTriangle_::__l2::FPointCorrespondence>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_148);
  local_150[0] = 0;
  if (local_158 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_158);
  }
  TSparseArray<TSparseSetElement<TTuple<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,_UE::Geometry::FIntrinsicMesh::PokeTriangle_::__l2::FPointCorrespondence>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_198);
  return EVar24;
}

// SplitEdge @ 14c766b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

EMeshResult __thiscall
UE::Geometry::FIntrinsicMesh::SplitEdge
          (FIntrinsicMesh *this,int param_1,FEdgeSplitInfo *param_2,double param_3)

{
  FNormalCoordinates *this_00;
  TDynamicVector<UE::Geometry::FIndex3i,512> *pTVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint *puVar4;
  double *pdVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  FScriptContainerElement *pFVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  FDynamicMesh3 *pFVar18;
  undefined8 uVar19;
  bool bVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  undefined4 uVar24;
  EMeshResult EVar25;
  int iVar26;
  int iVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  TVector<double> *pTVar31;
  ulonglong uVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ForAnyElementType FVar40;
  undefined8 uVar41;
  FSurfacePoint *pFVar42;
  FEdgeSplitInfo *pFVar43;
  uint uVar44;
  longlong lVar45;
  uint uVar46;
  longlong lVar47;
  ulonglong uVar48;
  uint uVar49;
  int iVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  undefined1 in_XMM4 [16];
  undefined1 auVar54 [16];
  double dVar55;
  undefined1 auStackY_5a8 [32];
  int local_574;
  uint local_570;
  uint local_560;
  uint local_55c;
  uint local_558 [2];
  uint local_550;
  ulonglong local_548;
  uint local_540;
  FEdgeSplitInfo *local_538;
  ulonglong local_530;
  bool local_528;
  bool local_527;
  bool local_526;
  bool local_525;
  bool local_524 [4];
  uint local_520;
  ulonglong local_518;
  ulonglong local_510;
  ulonglong local_508;
  ulonglong local_500;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  int local_4f0;
  ulonglong local_4e8;
  uint local_4e0;
  int local_4dc;
  FDynamicMesh3 *local_4d8;
  longlong local_4d0;
  undefined8 local_4c8;
  FIndex3i_u_0 local_4c0;
  FIndex3i_u_0 local_4b0;
  int local_4a0 [5];
  int local_48c;
  FIndex3i_u_0 local_488;
  FIndex3i_u_0 FStack_47c;
  int local_470;
  ulonglong local_468;
  longlong local_460;
  ulonglong local_458;
  undefined4 local_450;
  int local_448 [4];
  ulonglong local_438;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  local_430;
  undefined1 local_420 [16];
  undefined8 local_410;
  undefined4 local_408;
  undefined8 local_404;
  undefined4 local_3fc;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined8 local_3ec;
  undefined4 local_3e4;
  undefined1 local_3e0 [12];
  int local_3d4;
  ulonglong local_3d0;
  longlong local_3c8;
  ulonglong local_3c0;
  longlong local_3b8;
  int local_3b0;
  int local_3ac;
  int local_3a4;
  longlong local_3a0;
  undefined4 local_398;
  FIndex3i_u_0 local_390;
  TArray<int,TSizedDefaultAllocator<32>_> local_380;
  longlong local_370;
  undefined4 local_368;
  uint local_364 [3];
  FIndex3i_u_0 local_358;
  ulonglong local_348;
  uint local_340;
  double local_338 [6];
  TVector<double>_u_0 local_308;
  TVector<double>_u_0 local_2f0;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2c0;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_290;
  double local_278;
  double dStack_270;
  double local_268;
  double local_260;
  double dStack_258;
  double local_250;
  FSurfacePoint local_248;
  TVector<double>_u_0 local_220;
  TVector<double>_u_0 local_208;
  TDynamicVector<int,512> local_1f0 [2];
  FSurfacePoint local_1b8;
  TVector<double>_u_0 local_190;
  TVector<double> local_178;
  TVector<double> local_160;
  undefined1 local_148 [24];
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  undefined8 local_118;
  undefined1 local_110 [24];
  undefined8 uStack_f8;
  double local_f0;
  double dStack_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  if ((param_1 < 0) ||
     ((int)this->_padding_ * 0x200 + *(int *)((longlong)&this->_padding_ + 4) <= param_1)) {
    return Failed_NotAnEdge;
  }
  local_4c8 = (FScriptContainerElement *)(ulonglong)((uint)param_1 >> 9);
  uVar32 = (ulonglong)(param_1 & 0x1ff);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(this->_padding_ + (longlong)local_4c8 * 8) +
                                  uVar32 * 2) - 1U)) {
    return Failed_NotAnEdge;
  }
  local_4d8 = (FDynamicMesh3 *)(this->NormalCoordinates)._padding_;
  uVar44 = 0;
  uVar49 = 0;
  iVar50 = -1;
  local_420 = *(undefined1 (*) [16])
               (*(longlong *)(this->_padding_ + (longlong)local_4c8 * 8) + uVar32 * 0x10);
  uVar33 = local_420._8_4_;
  uVar48 = local_420._8_8_;
  local_470 = *(int *)(*(longlong *)
                        ((this->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data +
                        (longlong)local_4c8 * 8) + uVar32 * 4);
  uVar28 = (ulonglong)(uVar33 & 0x1ff);
  local_468 = (uVar48 & 0xffffffff) >> 9;
  lVar45 = *(longlong *)(this->_padding_ + local_468 * 8);
  local_460 = uVar28 * 3;
  local_3b8 = *(longlong *)(lVar45 + uVar28 * 0xc);
  local_3b0 = *(int *)(lVar45 + 8 + uVar28 * 0xc);
  lVar47 = local_3b8;
  uVar38 = 0;
  uVar46 = uVar38;
  if ((int)local_3b8 != param_1) {
    if ((int)((ulonglong)local_3b8 >> 0x20) == param_1) {
      uVar46 = 1;
    }
    else {
      uVar46 = 0xffffffff;
      if (local_3b0 == param_1) {
        uVar46 = 2;
      }
    }
  }
  uVar37 = local_420._12_4_;
  local_500 = (ulonglong)(int)uVar37;
  uVar14 = uVar48 >> 0x29;
  if (uVar37 == 0xffffffff) {
    local_574 = -1;
  }
  else {
    lVar36 = *(longlong *)(this->_padding_ + uVar14 * 8);
    _local_3ac = *(undefined8 *)(lVar36 + (ulonglong)(uVar37 & 0x1ff) * 0xc);
    local_3a4 = *(int *)(lVar36 + 8 + (ulonglong)(uVar37 & 0x1ff) * 0xc);
    uVar41 = _local_3ac;
    if (local_3ac == param_1) {
      local_574 = 0;
      _local_3ac = uVar41;
    }
    else if (SUB84(_local_3ac,4) == param_1) {
      local_574 = 1;
      _local_3ac = uVar41;
    }
    else {
      local_574 = -1;
      _local_3ac = uVar41;
      if (local_3a4 == param_1) {
        local_574 = 2;
      }
    }
  }
  local_4d0 = (longlong)(int)uVar46;
  lVar36 = *(longlong *)(this->_padding_ + local_468 * 8);
  lVar35 = (longlong)*(int *)((longlong)&this->_padding_ + local_4d0 * 4);
  local_408 = *(undefined4 *)(lVar36 + 8 + uVar28 * 0xc);
  local_410 = *(undefined8 *)(lVar36 + uVar28 * 0xc);
  local_550 = *(uint *)((longlong)&local_410 + lVar35 * 4);
  local_4c0._0_8_ = *(ulonglong *)(lVar45 + uVar28 * 0xc);
  local_438 = (ulonglong)*(uint *)((longlong)&local_410 + local_4d0 * 4);
  lVar34 = (longlong)*(int *)((longlong)&this->_padding_ + local_4d0 * 4 + 4);
  uVar39 = *(uint *)(lVar45 + 8 + uVar28 * 0xc);
  local_458 = local_4c0._0_8_;
  local_540 = *(uint *)((longlong)&local_410 + lVar34 * 4);
  lVar36 = this->_padding_;
  local_450 = *(undefined4 *)(lVar45 + 8 + uVar28 * 0xc);
  local_3c0 = (ulonglong)*(uint *)((longlong)&local_458 + lVar35 * 4);
  local_3d0 = (ulonglong)*(uint *)((longlong)&local_458 + lVar34 * 4);
  local_308._s_0.X =
       *(double *)
        (*(longlong *)(lVar36 + (ulonglong)((uint)local_4c0._s_0.A >> 9) * 8) +
        (ulonglong)(local_4c0._s_0.A & 0x1ff) * 8);
  local_308._s_0.Y =
       *(double *)
        (*(longlong *)(lVar36 + ((ulonglong)local_4c0._0_8_ >> 0x29) * 8) +
        (ulonglong)((uint)((ulonglong)local_4c0._0_8_ >> 0x20) & 0x1ff) * 8);
  local_308._s_0.Z =
       *(double *)
        (*(longlong *)(lVar36 + (ulonglong)(uVar39 >> 9) * 8) + (ulonglong)(uVar39 & 0x1ff) * 8);
  local_538 = param_2;
  local_518 = uVar48 >> 0x20;
  local_3b8 = lVar47;
  FSimpleIntrinsicEdgeFlipMesh::Permute<UE::Math::TVector<double>_>
            ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_190._s_0,uVar46,
             (TVector<double> *)&local_308._s_0);
  pFVar6 = (this->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data;
  lVar45 = (longlong)local_574;
  local_530 = (ulonglong)((uint)local_3c0 & 0x1ff);
  local_548 = (local_3c0 & 0xffffffff) >> 9;
  iVar26 = *(int *)(*(longlong *)(pFVar6 + local_548 * 8) + local_530 * 4);
  local_510 = (ulonglong)((uint)local_3d0 & 0x1ff);
  local_508 = (local_3d0 & 0xffffffff) >> 9;
  local_4dc = *(int *)(*(longlong *)(pFVar6 + local_508 * 8) + local_510 * 4);
  uVar28 = local_500 & 0x1ff;
  if (uVar37 == 0xffffffff) {
    local_4e0 = 0;
  }
  else {
    lVar47 = *(longlong *)(this->_padding_ + uVar14 * 8);
    local_368 = *(undefined4 *)(lVar47 + 8 + uVar28 * 0xc);
    local_370 = *(longlong *)(lVar47 + uVar28 * 0xc);
    uVar39 = *(uint *)((longlong)&local_370 +
                      (longlong)*(int *)((longlong)&this->_padding_ + lVar45 * 4 + 4) * 4);
    local_4e0 = (uint)(*(int *)(*(longlong *)(pFVar6 + (ulonglong)(uVar39 >> 9) * 8) +
                               (ulonglong)(uVar39 & 0x1ff) * 4) == -1);
  }
  pFVar7 = (this->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data;
  pFVar11 = (FScriptContainerElement *)0x0;
  local_148._8_8_ = (FScriptContainerElement *)0x0;
  local_148._0_4_ = 0xffffffff;
  uVar29 = (ulonglong)((uint)local_438 & 0x1ff);
  dVar53 = local_190._s_0.X * param_3;
  local_570 = 0;
  local_560 = 0;
  lVar47 = *(longlong *)(pFVar7 + ((local_438 & 0xffffffff) >> 9) * 8);
  local_558[0] = 0;
  puVar2 = (undefined8 *)(lVar47 + uVar29 * 0x28);
  local_148._16_8_ = *puVar2;
  uStack_130 = puVar2[1];
  pdVar5 = (double *)(lVar47 + 0x10 + uVar29 * 0x28);
  local_128 = *pdVar5;
  dStack_120 = pdVar5[1];
  local_110._8_8_ = local_190._s_0.X;
  uVar30 = (ulonglong)(local_550 & 0x1ff);
  local_118 = *(undefined8 *)(lVar47 + 0x20 + uVar29 * 0x28);
  local_110._0_4_ = 0xffffffff;
  lVar47 = *(longlong *)(pFVar7 + (ulonglong)(local_550 >> 9) * 8);
  puVar2 = (undefined8 *)(lVar47 + uVar30 * 0x28);
  local_110._16_8_ = *puVar2;
  uStack_f8 = puVar2[1];
  pdVar5 = (double *)(lVar47 + 0x10 + uVar30 * 0x28);
  local_f0 = *pdVar5;
  dStack_e8 = pdVar5[1];
  local_e0 = *(undefined8 *)(lVar47 + 0x20 + uVar30 * 0x28);
  uVar39 = *(uint *)(*(longlong *)(pFVar6 + (longlong)local_4c8 * 8) + uVar32 * 4);
  uVar22 = uVar39;
  if ((int)uVar39 < 1) {
    uVar22 = uVar38;
  }
  local_500 = uVar14;
  if (uVar22 == 0) {
    local_55c = *(uint *)(*(longlong *)(pFVar6 + local_508 * 8) + local_510 * 4);
    if ((int)local_55c < 1) {
      local_55c = uVar49;
    }
    uVar44 = *(uint *)(*(longlong *)(pFVar6 + local_548 * 8) + local_530 * 4);
    if ((int)uVar44 < 1) {
      uVar44 = uVar38;
    }
    if ((int)local_55c < (int)uVar44) {
      local_55c = uVar44;
    }
    uVar32 = uVar48 >> 0x20;
    local_560 = uVar39;
    if (uVar37 != 0xffffffff) {
      lVar47 = *(longlong *)(this->_padding_ + uVar14 * 8);
      local_398 = *(undefined4 *)(lVar47 + 8 + uVar28 * 0xc);
      local_3a0 = *(longlong *)(lVar47 + uVar28 * 0xc);
      uVar44 = *(uint *)((longlong)&local_3a0 +
                        (longlong)*(int *)((longlong)&this->_padding_ + lVar45 * 4) * 4);
      uVar37 = *(uint *)((longlong)&local_3a0 +
                        (longlong)*(int *)((longlong)&this->_padding_ + lVar45 * 4 + 4) * 4);
      pTVar31 = FSimpleIntrinsicEdgeFlipMesh::GetTriEdgeLengths
                          ((FSimpleIntrinsicEdgeFlipMesh *)this,&local_178,(int)local_518);
      FSimpleIntrinsicEdgeFlipMesh::Permute<UE::Math::TVector<double>_>
                ((FSimpleIntrinsicEdgeFlipMesh *)this,&local_160,local_574,pTVar31);
      pFVar6 = (this->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data;
      local_558[0] = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar37 >> 9) * 8) +
                              (ulonglong)(uVar37 & 0x1ff) * 4);
      if ((int)local_558[0] < 1) {
        local_558[0] = uVar49;
      }
      uVar44 = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar44 >> 9) * 8) +
                        (ulonglong)(uVar44 & 0x1ff) * 4);
      if ((int)uVar44 < 1) {
        uVar44 = uVar38;
      }
      uVar32 = local_518;
      if ((int)local_558[0] < (int)uVar44) {
        local_558[0] = uVar44;
      }
    }
  }
  else {
    if (uVar37 == 0xffffffff) {
      local_4b0._s_0.C = -1;
      local_4b0._s_0.B = -1;
      local_4b0._s_0.A = -1;
    }
    else {
      lVar47 = *(longlong *)(this->_padding_ + uVar14 * 8);
      local_3fc = *(undefined4 *)(lVar47 + 8 + uVar28 * 0xc);
      local_404 = *(undefined8 *)(lVar47 + uVar28 * 0xc);
      local_4b0._s_0.C =
           *(int *)((longlong)&local_404 +
                   (longlong)*(int *)((longlong)&this->_padding_ + lVar45 * 4 + 4) * 4);
      local_4b0._s_0.B =
           *(int *)((longlong)&local_404 +
                   (longlong)*(int *)((longlong)&this->_padding_ + lVar45 * 4) * 4);
      local_4b0._s_0.A = *(int *)((longlong)&local_404 + lVar45 * 4);
    }
    FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>
              (&local_430,this,*(int *)((longlong)&local_458 + local_4d0 * 4),0.0,false);
    pFVar6 = (this->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data;
    uVar37 = *(uint *)(*(longlong *)(pFVar6 + local_508 * 8) + local_510 * 4);
    uVar39 = *(uint *)((longlong)&local_458 + local_4d0 * 4);
    uVar39 = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar39 >> 9) * 8) +
                      (ulonglong)(uVar39 & 0x1ff) * 4);
    uVar22 = *(uint *)(*(longlong *)(pFVar6 + local_548 * 8) + local_530 * 4);
    if ((int)uVar22 < 1) {
      uVar22 = uVar49;
    }
    if ((int)uVar37 < 1) {
      uVar37 = uVar38;
    }
    if ((int)uVar39 < 1) {
      uVar39 = uVar38;
    }
    uVar39 = (uVar37 - uVar22) - uVar39;
    if ((int)uVar39 < 1) {
      uVar39 = uVar38;
    }
    uVar39 = uVar39 * 2;
    local_55c = uVar39;
    if ((int)local_518 != -1) {
      iVar27 = IntrinsicCorrespondenceUtils::FNormalCoordinates::NumCornerEmanatingRefEdges
                         (&this->NormalCoordinates,(FIndex3i *)&local_4b0._s_0,1);
      iVar23 = IntrinsicCorrespondenceUtils::FNormalCoordinates::NumCornerEmanatingRefEdges
                         (&this->NormalCoordinates,(FIndex3i *)&local_4b0._s_0,0);
      uVar44 = iVar27 + iVar23;
      local_558[0] = uVar44;
    }
    uVar41 = local_430._8_8_;
    iVar27 = local_430.ArrayNum;
    if ((iVar27 < 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar8 = (code *)swi(3);
      EVar25 = (*pcVar8)();
      return EVar25;
    }
    IntrinsicCorrespondenceUtils::AsR3Position
              ((TVector<double> *)&local_220._s_0,(FSurfacePoint *)local_430.AllocatorInstance.Data,
               local_4d8,local_524);
    iVar27 = iVar27 + -1;
    local_338[2] = local_220._s_0.Z;
    local_548 = CONCAT44(local_548._4_4_,iVar27);
    local_520 = 1;
    local_338[0] = local_220._s_0.X;
    local_338[1] = local_220._s_0.Y;
    if (1 < iVar27) {
      local_508 = 1;
      local_510 = 0x28;
      local_3c8 = 1;
      local_530 = CONCAT44(local_530._4_4_,iVar27);
      do {
        uVar37 = uVar38;
        if ((int)local_520 < (int)uVar41) {
          uVar37 = ~local_520 >> 0x1f;
        }
        local_4e8 = local_508;
        if ((uVar37 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          EVar25 = (*pcVar8)();
          return EVar25;
        }
        pFVar42 = (FSurfacePoint *)(local_430.AllocatorInstance.Data + local_510);
        IntrinsicCorrespondenceUtils::AsR3Position
                  ((TVector<double> *)&local_208._s_0,pFVar42,local_4d8,&local_528);
        uVar19 = local_208._s_0.Z;
        uVar41 = local_208._s_0.Y;
        uVar32 = 1 - local_4e8;
        local_4e8 = CONCAT44(local_4e8._4_4_,0xffffffff);
        local_338[local_508 * 3] = local_208._s_0.X;
        local_338[local_508 * 3 + 1] = (double)uVar41;
        local_338[local_508 * 3 + 2] = (double)uVar19;
        auVar51._0_8_ =
             (local_338[local_508 * 3 + 2] - local_338[uVar32 * 3 + 2]) *
             (local_338[local_508 * 3 + 2] - local_338[uVar32 * 3 + 2]);
        auVar51._8_8_ = 0;
        auVar54._8_8_ = 0;
        auVar54._0_8_ =
             (local_338[local_508 * 3 + 1] - local_338[uVar32 * 3 + 1]) *
             (local_338[local_508 * 3 + 1] - local_338[uVar32 * 3 + 1]) +
             (local_338[local_508 * 3] - local_338[uVar32 * 3]) *
             (local_338[local_508 * 3] - local_338[uVar32 * 3]) + auVar51._0_8_;
        auVar54 = sqrtpd(auVar51,auVar54);
        pFVar11 = (FScriptContainerElement *)((double)pFVar11 + auVar54._0_8_);
        local_508 = uVar32;
        if (uVar33 != 0xffffffff) {
          FNormalCoordSurfaceTraceImpl::GetCrossingExit<UE::Geometry::FIntrinsicMesh>
                    ((FIntrinsicMesh *)local_3e0,(FNormalCoordinates *)this,(int)this + 0x1c0,uVar33
                     ,param_1);
          uVar24 = 0xffffffff;
          if (local_3e0._4_4_ != 0) {
            uVar24 = local_3e0._0_4_;
          }
          local_4e8 = CONCAT44(local_4e8._4_4_,uVar24);
        }
        iVar27 = -1;
        if ((int)local_518 != -1) {
          FNormalCoordSurfaceTraceImpl::GetCrossingExit<UE::Geometry::FIntrinsicMesh>
                    ((FIntrinsicMesh *)(local_3e0 + 8),(FNormalCoordinates *)this,(int)this + 0x1c0,
                     (int)local_518,param_1);
          iVar27 = -1;
          if (local_3d4 != 0) {
            iVar27 = local_3e0._8_4_;
          }
        }
        if (dVar53 <= (double)pFVar11) {
          local_560 = local_560 + 1;
          if ((double)pFVar11 < (double)local_110._8_8_) {
            local_1f0[0].CurBlock = (pFVar42->Position).EdgePosition.EdgeID;
            local_110._16_8_ = *(undefined8 *)pFVar42;
            uStack_f8 = *(undefined8 *)&pFVar42->Position;
            local_f0 = (pFVar42->Position).EdgePosition.Alpha;
            dStack_e8 = *(double *)((longlong)&pFVar42->Position + 0x10);
            local_e0 = *(undefined8 *)((longlong)&pFVar42->Position + 0x18);
            local_110._0_4_ = local_1f0[0].CurBlock;
            local_110._4_4_ = local_1f0[0].CurBlockUsed;
            local_1f0[0].Blocks.AllocatorInstance.Data = pFVar11;
            local_110._8_8_ = pFVar11;
          }
          uVar24 = local_4b0._s_0.B;
          if ((int)local_3d0 == (int)local_4e8) {
            uVar39 = uVar39 + 1;
            local_55c = uVar39;
          }
        }
        else {
          local_148._16_8_ = *(undefined8 *)pFVar42;
          uStack_130 = *(undefined8 *)&pFVar42->Position;
          local_570 = local_570 + 1;
          local_128 = (pFVar42->Position).EdgePosition.Alpha;
          dStack_120 = *(double *)((longlong)&pFVar42->Position + 0x10);
          local_1f0[0].CurBlock = (pFVar42->Position).EdgePosition.EdgeID;
          local_118 = *(undefined8 *)((longlong)&pFVar42->Position + 0x18);
          uVar24 = local_4b0._s_0.C;
          local_1f0[0].Blocks.AllocatorInstance.Data = pFVar11;
          local_148._0_8_ = local_1f0[0]._0_8_;
          local_148._8_8_ = pFVar11;
          if ((int)local_3c0 == (int)local_4e8) {
            uVar39 = uVar39 + 1;
            local_55c = uVar39;
          }
        }
        if ((iVar27 != -1) && (uVar24 == iVar27)) {
          uVar44 = uVar44 + 1;
          local_558[0] = uVar44;
        }
        local_520 = local_520 + 1;
        local_530 = CONCAT44(local_530._4_4_,(int)local_530 + -1);
        local_3c8 = local_3c8 + 1;
        local_510 = local_510 + 0x28;
        uVar41 = local_430._8_8_;
      } while ((int)local_520 < (int)local_548);
    }
    uVar32 = local_518;
    uVar39 = local_570;
    if ((FSurfacePoint *)local_430.AllocatorInstance.Data != (FSurfacePoint *)0x0) {
      FMemory::Free(local_430.AllocatorInstance.Data);
      uVar32 = local_518;
    }
  }
  EVar25 = FSimpleIntrinsicMesh::SplitEdge((FSimpleIntrinsicMesh *)this,param_1,local_538,param_3);
  if (EVar25 != Ok) {
    return EVar25;
  }
  this_00 = &this->NormalCoordinates;
  *(uint *)(*(longlong *)
             ((this->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)local_538->OriginalEdge >> 9) * 8) +
           (ulonglong)(local_538->OriginalEdge & 0x1ff) * 4) = uVar39;
  TDynamicVector<int,512>::InsertAt
            (&(this->NormalCoordinates).NormalCoord,(int *)&local_560,
             (local_538->NewEdges).field0_0x0._s_0.A);
  TDynamicVector<int,512>::InsertAt
            (&(this->NormalCoordinates).NormalCoord,(int *)&local_55c,
             (local_538->NewEdges).field0_0x0._s_0.B);
  uVar38 = (uint)uVar32;
  if (uVar38 != 0xffffffff) {
    TDynamicVector<int,512>::InsertAt
              (&(this->NormalCoordinates).NormalCoord,(int *)local_558,
               (local_538->NewEdges).field0_0x0._s_0.C);
  }
  pFVar6 = (this->NormalCoordinates).RoundaboutOrder.Blocks.AllocatorInstance.Data;
  lVar45 = *(longlong *)(pFVar6 + local_468 * 8);
  if (uVar38 == 0xffffffff) {
    lVar45 = lVar45 + local_460 * 4;
    pFVar6 = (this->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data;
    local_448[1] = 0xffffffff;
    local_4f8 = 0xffffffff;
    lVar47 = (longlong)*(int *)((longlong)&this->_padding_ + local_4d0 * 4);
    lVar36 = (longlong)*(int *)((longlong)&this->_padding_ + local_4d0 * 4 + 4);
    local_4f0 = -1;
    iVar26 = *(int *)(lVar45 + lVar36 * 4);
    uStack_4f4 = *(undefined4 *)(lVar45 + lVar47 * 4);
    local_448[2] = iVar26;
    local_448[0] = -1;
    if (*(int *)(*(longlong *)(pFVar6 + ((local_438 & 0xffffffff) >> 9) * 8) +
                (ulonglong)((uint)local_438 & 0x1ff) * 0x28) == 0) {
      local_448[0] = *(int *)(lVar45 + local_4d0 * 4);
    }
    lVar45 = (longlong)(int)local_540;
    if (*(int *)(*(longlong *)(pFVar6 + (ulonglong)(local_540 >> 9) * 8) +
                (ulonglong)(local_540 & 0x1ff) * 0x28) == 0) {
      bVar20 = local_4dc == -1;
      lVar34 = *(longlong *)(this->_padding_ + ((uVar48 & 0xffffffff) >> 9) * 8);
      local_3e4 = *(undefined4 *)(lVar34 + 8 + (ulonglong)(uVar33 & 0x1ff) * 0xc);
      local_3ec = *(undefined8 *)(lVar34 + (ulonglong)(uVar33 & 0x1ff) * 0xc);
      local_4c0._s_0.C = *(int *)((longlong)&local_3ec + lVar36 * 4);
      local_4c0._s_0.B = *(undefined4 *)((longlong)&local_3ec + lVar47 * 4);
      local_4c0._s_0.A = *(undefined4 *)((longlong)&local_3ec + (longlong)(int)uVar46 * 4);
      iVar27 = IntrinsicCorrespondenceUtils::FNormalCoordinates::NumCornerEmanatingRefEdges
                         (this_00,(FIndex3i *)&local_4c0._s_0,2);
      local_548 = CONCAT44(local_548._4_4_,iVar27);
      uVar38 = uVar49;
      if ((int)local_540 < (this->NormalCoordinates).RefVertDegree.ArrayNum) {
        uVar38 = ~local_540 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        EVar25 = (*pcVar8)();
        return EVar25;
      }
      local_4f0 = (int)(iVar26 + (uint)bVar20 + (int)local_548) %
                  *(int *)((this->NormalCoordinates).RefVertDegree.AllocatorInstance.Data +
                          lVar45 * 4);
    }
    pFVar43 = local_538;
    iVar26 = 3 - uVar46;
    uVar32 = (ulonglong)(uVar33 & 0x1ff);
    lVar47 = (longlong)
             (iVar26 + (iVar26 / 3 + (iVar26 >> 0x1f) +
                       (int)(((longlong)iVar26 / 3 + ((longlong)iVar26 >> 0x3f) & 0xffffffffU) >>
                            0x1f)) * -3);
    iVar26 = local_448[*(int *)((longlong)&this->_padding_ + lVar47 * 4)];
    iVar27 = local_448[*(int *)((longlong)&this->_padding_ + lVar47 * 4 + 4)];
    lVar45 = *(longlong *)
              ((this->NormalCoordinates).RoundaboutOrder.Blocks.AllocatorInstance.Data +
              ((uVar48 & 0xffffffff) >> 9) * 8);
    *(int *)(lVar45 + uVar32 * 0xc) = local_448[lVar47];
    *(int *)(lVar45 + 4 + uVar32 * 0xc) = iVar26;
    *(int *)(lVar45 + 8 + uVar32 * 0xc) = iVar27;
    uVar38 = (local_538->NewTriangles).field0_0x0._s_0.A;
    uVar46 = (this->NormalCoordinates).RoundaboutOrder.CurBlock;
    uVar33 = (this->NormalCoordinates).RoundaboutOrder.CurBlockUsed;
    uVar44 = uVar46 * 0x200 + uVar33;
    if (uVar38 == uVar44) {
      if (uVar33 == 0x200) {
        if (uVar46 == (this->NormalCoordinates).RoundaboutOrder.Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock
                    (&(this->NormalCoordinates).RoundaboutOrder);
        }
        pTVar1 = &(this->NormalCoordinates).RoundaboutOrder;
        pTVar1->CurBlock = pTVar1->CurBlock + 1;
        uVar46 = (this->NormalCoordinates).RoundaboutOrder.CurBlock;
        (this->NormalCoordinates).RoundaboutOrder.CurBlockUsed = 0;
        uVar33 = uVar49;
      }
    }
    else {
      if (uVar38 <= uVar44) {
        uVar41 = CONCAT44(uStack_4f4,local_4f8);
        lVar45 = *(longlong *)
                  ((this->NormalCoordinates).RoundaboutOrder.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar38 >> 9) * 8);
        uVar24 = local_4f0;
        goto LAB_14c767ed8;
      }
      TDynamicVector<UE::Geometry::FIndex3i,512>::Resize
                (&(this->NormalCoordinates).RoundaboutOrder,uVar38);
      uVar33 = (this->NormalCoordinates).RoundaboutOrder.CurBlockUsed;
      if (uVar33 == 0x200) {
        if ((this->NormalCoordinates).RoundaboutOrder.CurBlock ==
            (this->NormalCoordinates).RoundaboutOrder.Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock
                    (&(this->NormalCoordinates).RoundaboutOrder);
        }
        pTVar1 = &(this->NormalCoordinates).RoundaboutOrder;
        pTVar1->CurBlock = pTVar1->CurBlock + 1;
        (this->NormalCoordinates).RoundaboutOrder.CurBlockUsed = 0;
        uVar33 = uVar49;
      }
      uVar46 = (this->NormalCoordinates).RoundaboutOrder.CurBlock;
    }
    lVar45 = *(longlong *)
              ((this->NormalCoordinates).RoundaboutOrder.Blocks.AllocatorInstance.Data +
              (longlong)(int)uVar46 * 8);
    *(ulonglong *)(lVar45 + (longlong)(int)uVar33 * 0xc) = CONCAT44(uStack_4f4,local_4f8);
    *(int *)(lVar45 + 8 + (longlong)(int)uVar33 * 0xc) = local_4f0;
    puVar4 = &(this->NormalCoordinates).RoundaboutOrder.CurBlockUsed;
    *puVar4 = *puVar4 + 1;
  }
  else {
    lVar45 = lVar45 + local_460 * 4;
    local_4a0[1] = 0xffffffff;
    local_4a0[3] = 0xffffffff;
    local_48c = -1;
    local_488._s_0.A = -1;
    local_488._s_0.C = -1;
    FStack_47c._s_0.A = -1;
    FStack_47c._s_0.C = -1;
    local_488._s_0.B =
         *(int *)(lVar45 + (longlong)*(int *)((longlong)&this->_padding_ + local_4d0 * 4) * 4);
    local_548 = CONCAT44(local_548._4_4_,local_488._s_0.B);
    iVar27 = *(int *)(lVar45 + (longlong)*(int *)((longlong)&this->_padding_ + local_4d0 * 4 + 4) *
                               4);
    uVar32 = (ulonglong)(uVar38 & 0x1ff);
    lVar47 = *(longlong *)(pFVar6 + local_500 * 8) + uVar32 * 0xc;
    lVar34 = (longlong)*(int *)((longlong)&this->_padding_ + (longlong)local_574 * 4 + 4);
    lVar36 = *(longlong *)(this->_padding_ + local_500 * 8);
    FStack_47c._s_0.B = *(int *)(lVar47 + lVar34 * 4);
    local_530 = CONCAT44(local_530._4_4_,FStack_47c._s_0.B);
    local_364[2] = *(undefined4 *)(lVar36 + 8 + uVar32 * 0xc);
    local_4a0[2] = iVar27;
    pFVar6 = (this->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data;
    local_364._0_8_ = *(undefined8 *)(lVar36 + uVar32 * 0xc);
    uVar38 = local_364[lVar34];
    local_4a0[4] = *(undefined4 *)
                    (lVar47 + (longlong)
                              *(int *)((longlong)&this->_padding_ + (longlong)local_574 * 4) * 4);
    local_4a0[0] = -1;
    if (*(int *)(*(longlong *)(pFVar6 + ((local_438 & 0xffffffff) >> 9) * 8) +
                (ulonglong)((uint)local_438 & 0x1ff) * 0x28) == 0) {
      local_4a0[0] = *(int *)(lVar45 + local_4d0 * 4);
    }
    uVar44 = 0;
    if (*(int *)(*(longlong *)(pFVar6 + (ulonglong)(local_550 >> 9) * 8) +
                (ulonglong)(local_550 & 0x1ff) * 0x28) == 0) {
      pFVar6 = (this->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data;
      uVar37 = (local_538->NewTriangles).field0_0x0._s_0.A;
      uVar32 = (ulonglong)(uVar37 & 0x1ff);
      lVar45 = *(longlong *)(this->_padding_ + (ulonglong)(uVar37 >> 9) * 8);
      local_340 = *(uint *)(lVar45 + 8 + uVar32 * 0xc);
      local_348 = *(ulonglong *)(lVar45 + uVar32 * 0xc);
      uVar37 = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(local_340 >> 9) * 8) +
                        (ulonglong)(local_340 & 0x1ff) * 4);
      uVar39 = *(uint *)(*(longlong *)(pFVar6 + ((local_348 & 0xffffffff) >> 9) * 8) +
                        (ulonglong)((uint)local_348 & 0x1ff) * 4);
      if ((int)uVar37 < 1) {
        uVar37 = uVar49;
      }
      uVar22 = *(uint *)(*(longlong *)(pFVar6 + (local_348 >> 0x29) * 8) +
                        (ulonglong)((uint)(local_348 >> 0x20) & 0x1ff) * 4);
      if ((int)uVar22 < 1) {
        uVar22 = uVar49;
      }
      if ((int)uVar39 < 1) {
        uVar39 = uVar44;
      }
      uVar39 = (uVar37 - uVar22) - uVar39;
      if ((int)uVar39 < 1) {
        uVar39 = uVar49;
      }
      uVar49 = uVar44;
      if ((int)local_550 < (this->NormalCoordinates).RefVertDegree.ArrayNum) {
        uVar49 = ~local_550 >> 0x1f;
      }
      if ((uVar49 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        EVar25 = (*pcVar8)();
        return EVar25;
      }
      FStack_47c._s_0.C =
           (int)((int)local_548 + uVar39 + (uint)(iVar26 == -1)) %
           *(int *)((this->NormalCoordinates).RefVertDegree.AllocatorInstance.Data +
                   (longlong)(int)local_550 * 4);
    }
    lVar45 = (longlong)(int)local_540;
    if (*(int *)(*(longlong *)
                  ((this->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data +
                  (ulonglong)(local_540 >> 9) * 8) + (ulonglong)(local_540 & 0x1ff) * 0x28) == 0) {
      bVar20 = local_4dc == -1;
      lVar47 = *(longlong *)(this->_padding_ + ((uVar48 & 0xffffffff) >> 9) * 8);
      lVar36 = (longlong)(int)uVar46;
      local_3f0 = *(undefined4 *)(lVar47 + 8 + (ulonglong)(uVar33 & 0x1ff) * 0xc);
      local_3f8 = *(undefined8 *)(lVar47 + (ulonglong)(uVar33 & 0x1ff) * 0xc);
      local_390._s_0.A = *(int *)((longlong)&local_3f8 + lVar36 * 4);
      local_390._s_0.B =
           *(int *)((longlong)&local_3f8 +
                   (longlong)*(int *)((longlong)&this->_padding_ + lVar36 * 4) * 4);
      local_390._s_0.C =
           *(int *)((longlong)&local_3f8 +
                   (longlong)*(int *)((longlong)&this->_padding_ + lVar36 * 4 + 4) * 4);
      iVar26 = IntrinsicCorrespondenceUtils::FNormalCoordinates::NumCornerEmanatingRefEdges
                         (this_00,(FIndex3i *)&local_390._s_0,2);
      local_548 = CONCAT44(local_548._4_4_,iVar26);
      uVar49 = uVar44;
      if ((int)local_540 < (this->NormalCoordinates).RefVertDegree.ArrayNum) {
        uVar49 = ~local_540 >> 0x1f;
      }
      if ((uVar49 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        EVar25 = (*pcVar8)();
        return EVar25;
      }
      local_488._s_0.C =
           (int)((uint)bVar20 + iVar27 + (int)local_548) %
           *(int *)((this->NormalCoordinates).RefVertDegree.AllocatorInstance.Data + lVar45 * 4);
    }
    if (*(int *)(*(longlong *)
                  ((this->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar38 >> 9) * 8) + (ulonglong)(uVar38 & 0x1ff) * 0x28) == 0) {
      uVar49 = (local_538->NewTriangles).field0_0x0._s_0.B;
      uVar32 = (ulonglong)(uVar49 & 0x1ff);
      lVar45 = *(longlong *)(this->_padding_ + (ulonglong)(uVar49 >> 9) * 8);
      local_358._0_8_ = *(longlong *)(lVar45 + uVar32 * 0xc);
      local_358._s_0.C = *(int *)(lVar45 + 8 + uVar32 * 0xc);
      iVar26 = IntrinsicCorrespondenceUtils::FNormalCoordinates::NumCornerEmanatingRefEdges
                         (this_00,(FIndex3i *)&local_358._s_0,1);
      if ((int)uVar38 < (this->NormalCoordinates).RefVertDegree.ArrayNum) {
        uVar44 = ~uVar38 >> 0x1f;
      }
      if ((uVar44 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        EVar25 = (*pcVar8)();
        return EVar25;
      }
      local_48c = (int)((int)local_530 + local_4e0 + iVar26) %
                  *(int *)((this->NormalCoordinates).RefVertDegree.AllocatorInstance.Data +
                          (longlong)(int)uVar38 * 4);
    }
    pFVar43 = local_538;
    iVar26 = 3 - uVar46;
    local_574 = 3 - local_574;
    lVar47 = (longlong)
             (iVar26 + (iVar26 / 3 + (iVar26 >> 0x1f) +
                       (int)(((longlong)iVar26 / 3 + ((longlong)iVar26 >> 0x3f) & 0xffffffffU) >>
                            0x1f)) * -3);
    uVar32 = (ulonglong)(uVar33 & 0x1ff);
    lVar45 = *(longlong *)
              ((this->NormalCoordinates).RoundaboutOrder.Blocks.AllocatorInstance.Data +
              ((uVar48 & 0xffffffff) >> 9) * 8);
    iVar26 = local_4a0[*(int *)((longlong)&this->_padding_ + lVar47 * 4)];
    iVar27 = local_4a0[*(int *)((longlong)&this->_padding_ + lVar47 * 4 + 4)];
    *(int *)(lVar45 + uVar32 * 0xc) = local_4a0[lVar47];
    *(int *)(lVar45 + 4 + uVar32 * 0xc) = iVar26;
    *(int *)(lVar45 + 8 + uVar32 * 0xc) = iVar27;
    uVar32 = (ulonglong)((uint)local_518 & 0x1ff);
    lVar47 = (longlong)
             (local_574 +
             (local_574 / 3 + (local_574 >> 0x1f) +
             (int)(((longlong)local_574 / 3 + ((longlong)local_574 >> 0x3f) & 0xffffffffU) >> 0x1f))
             * -3);
    iVar26 = local_4a0[(longlong)*(int *)((longlong)&this->_padding_ + lVar47 * 4) + 3];
    iVar27 = local_4a0[(longlong)*(int *)((longlong)&this->_padding_ + lVar47 * 4 + 4) + 3];
    lVar45 = *(longlong *)
              ((this->NormalCoordinates).RoundaboutOrder.Blocks.AllocatorInstance.Data +
              (local_518 >> 9 & 0x7fffff) * 8);
    *(int *)(lVar45 + uVar32 * 0xc) = local_4a0[lVar47 + 3];
    *(int *)(lVar45 + 4 + uVar32 * 0xc) = iVar26;
    *(int *)(lVar45 + 8 + uVar32 * 0xc) = iVar27;
    TDynamicVector<UE::Geometry::FIndex3i,512>::InsertAt
              (&(this->NormalCoordinates).RoundaboutOrder,(FIndex3i *)&local_488._s_0,
               (local_538->NewTriangles).field0_0x0._s_0.A);
    uVar38 = (pFVar43->NewTriangles).field0_0x0._s_0.B;
    pTVar1 = &(this->NormalCoordinates).RoundaboutOrder;
    uVar33 = pTVar1->CurBlock * 0x200 + (this->NormalCoordinates).RoundaboutOrder.CurBlockUsed;
    if (uVar38 == uVar33) {
      TDynamicVector<UE::Geometry::FIndex3i,512>::Add(pTVar1,(FIndex3i *)&FStack_47c._s_0);
    }
    else if (uVar33 < uVar38) {
      TDynamicVector<UE::Geometry::FIndex3i,512>::Resize(pTVar1,uVar38);
      TDynamicVector<UE::Geometry::FIndex3i,512>::Add(pTVar1,(FIndex3i *)&FStack_47c._s_0);
    }
    else {
      uVar41 = CONCAT44(FStack_47c._s_0.B,FStack_47c._s_0.A);
      lVar45 = *(longlong *)
                ((this->NormalCoordinates).RoundaboutOrder.Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar38 >> 9) * 8);
      uVar24 = FStack_47c._s_0.C;
LAB_14c767ed8:
      *(undefined8 *)(lVar45 + (ulonglong)(uVar38 & 0x1ff) * 0xc) = uVar41;
      *(undefined4 *)(lVar45 + 8 + (ulonglong)(uVar38 & 0x1ff) * 0xc) = uVar24;
    }
  }
  pFVar18 = local_4d8;
  if (local_470 == -1) {
    local_1b8.Position.EdgePosition.EdgeID = (uint)uStack_130;
    if (local_148._16_4_ != 1) {
      local_1b8.Position.EdgePosition.EdgeID = (uint)uStack_f8;
      if (local_110._16_4_ != 1) {
        local_1b8.Position.EdgePosition.EdgeID =
             FDynamicMesh3::FindEdge(local_4d8,(uint)uStack_130,(uint)uStack_f8);
      }
    }
    plVar3 = (longlong *)
             (*(longlong *)
               ((local_4d8->Edges).Blocks.AllocatorInstance.Data +
               (ulonglong)((uint)local_1b8.Position.EdgePosition.EdgeID >> 9) * 8) +
             (ulonglong)(local_1b8.Position.EdgePosition.EdgeID & 0x1ff) * 0x10);
    local_380.AllocatorInstance.Data = (FScriptContainerElement *)*plVar3;
    local_380._8_8_ = plVar3[1];
    local_4c8 = local_380.AllocatorInstance.Data;
    iVar50 = (int)((ulonglong)local_380.AllocatorInstance.Data >> 0x20);
    if (local_148._16_4_ == 0) {
      uVar32 = (ulonglong)((uint)uStack_130 == iVar50);
    }
    else if (local_110._16_4_ == 0) {
      uVar32 = (ulonglong)((uint)uStack_f8 != iVar50);
    }
    else {
      uVar32 = (ulonglong)(local_128 < local_f0);
    }
    pFVar6 = (local_4d8->Vertices).Blocks.AllocatorInstance.Data;
    uVar33 = *(uint *)((longlong)&local_4c8 + uVar32 * 4);
    uVar28 = (ulonglong)(uVar33 & 0x1ff);
    lVar45 = *(longlong *)(pFVar6 + (ulonglong)(uVar33 >> 9) * 8);
    pdVar5 = (double *)(lVar45 + uVar28 * 0x18);
    dVar15 = *pdVar5;
    dVar16 = pdVar5[1];
    dVar55 = *(double *)(lVar45 + 0x10 + uVar28 * 0x18);
    local_268 = dVar55;
    local_278 = dVar15;
    dStack_270 = dVar16;
    uVar33 = *(uint *)((longlong)&local_4c8 + uVar32 * -4 + 4);
    uVar28 = (ulonglong)(uVar33 & 0x1ff);
    lVar45 = *(longlong *)(pFVar6 + (ulonglong)(uVar33 >> 9) * 8);
    pdVar5 = (double *)(lVar45 + uVar28 * 0x18);
    dVar17 = *pdVar5;
    dStack_258 = pdVar5[1];
    local_250 = *(double *)(lVar45 + 0x10 + uVar28 * 0x18);
    dVar13 = local_250 - dVar55;
    dVar12 = dStack_258 - dVar16;
    local_260 = dVar17;
    IntrinsicCorrespondenceUtils::AsR3Position
              ((TVector<double> *)&local_2f0._s_0,(FSurfacePoint *)(local_148 + 0x10),local_4d8,
               &local_527);
    uVar28 = (ulonglong)(pFVar43->NewVertex & 0x1ff);
    lVar45 = *(longlong *)(this->_padding_ + (ulonglong)((uint)pFVar43->NewVertex >> 9) * 8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (local_2f0._s_0.Y - dVar16) * (local_2f0._s_0.Y - dVar16) +
                   (local_2f0._s_0.X - dVar15) * (local_2f0._s_0.X - dVar15) +
                   (local_2f0._s_0.Z - dVar55) * (local_2f0._s_0.Z - dVar55);
    auVar54 = sqrtpd(in_XMM4,auVar9);
    dVar53 = (auVar54._0_8_ + dVar53) /
             SQRT(dVar12 * dVar12 + (dVar17 - dVar15) * (dVar17 - dVar15) + dVar13 * dVar13);
    local_1b8.Position.EdgePosition.Alpha = __real_3ff0000000000000 - dVar53;
    *(double *)(lVar45 + uVar28 * 0x18) =
         dVar15 * local_1b8.Position.EdgePosition.Alpha + dVar17 * dVar53;
    *(double *)(lVar45 + 8 + uVar28 * 0x18) =
         dStack_270 * local_1b8.Position.EdgePosition.Alpha + dStack_258 * dVar53;
    *(double *)(lVar45 + 0x10 + uVar28 * 0x18) =
         local_268 * local_1b8.Position.EdgePosition.Alpha + local_250 * dVar53;
    if ((int)uVar32 != 0) {
      local_1b8.Position.EdgePosition.Alpha = dVar53;
    }
    local_1b8.PositionType = Edge;
    TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>::InsertAt
              (&this->IntrinsicVertexPositions,&local_1b8,pFVar43->NewVertex);
    return Ok;
  }
  IntrinsicCorrespondenceUtils::AsR3Position
            ((TVector<double> *)&local_2d8._s_0,(FSurfacePoint *)(local_148 + 0x10),local_4d8,
             &local_526);
  IntrinsicCorrespondenceUtils::AsR3Position
            ((TVector<double> *)&local_2c0._s_0,(FSurfacePoint *)(local_110 + 0x10),pFVar18,
             &local_525);
  auVar52._0_8_ = (local_2d8._s_0.Z - local_2c0._s_0.Z) * (local_2d8._s_0.Z - local_2c0._s_0.Z);
  auVar52._8_8_ = 0;
  auVar10._8_8_ = 0;
  auVar10._0_8_ =
       (local_2d8._s_0.Y - local_2c0._s_0.Y) * (local_2d8._s_0.Y - local_2c0._s_0.Y) +
       (local_2d8._s_0.X - local_2c0._s_0.X) * (local_2d8._s_0.X - local_2c0._s_0.X) + auVar52._0_8_
  ;
  auVar54 = sqrtpd(auVar52,auVar10);
  dVar53 = ((double)local_110._8_8_ - dVar53) / auVar54._0_8_;
  if (local_148._16_4_ == 2) {
    iVar50 = (uint)uStack_130;
LAB_14c768293:
    if (iVar50 != -1) goto LAB_14c7682f6;
  }
  else if (local_110._16_4_ == 2) {
    iVar50 = (uint)uStack_f8;
    goto LAB_14c768293;
  }
  FIntrinsicMeshImplUtils::GetAdjacentTriangles
            (&local_380,(FSurfacePoint *)(local_148 + 0x10),pFVar18);
  for (FVar40.Data = local_380.AllocatorInstance.Data; iVar26 = iVar50,
      FVar40.Data != local_380.AllocatorInstance.Data + (longlong)local_380.ArrayNum * 4;
      FVar40.Data = FVar40.Data + 4) {
    iVar26 = *(int *)FVar40.Data;
    bVar20 = FIntrinsicMeshImplUtils::IsOnSurfaceTriangle
                       ((FSurfacePoint *)(local_110 + 0x10),iVar26,pFVar18);
    if (bVar20) break;
  }
  iVar50 = iVar26;
  if (local_380.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.AllocatorInstance.Data);
  }
LAB_14c7682f6:
  FIntrinsicMeshImplUtils::AsBarycenteric
            ((TVector<double> *)&local_2a8._s_0,(FSurfacePoint *)(local_148 + 0x10),iVar50,pFVar18);
  FIntrinsicMeshImplUtils::AsBarycenteric
            ((TVector<double> *)&local_290._s_0,(FSurfacePoint *)(local_110 + 0x10),iVar50,pFVar18);
  dVar55 = __real_3ff0000000000000 - dVar53;
  uVar32 = (ulonglong)(local_538->NewVertex & 0x1ff);
  lVar45 = *(longlong *)(this->_padding_ + (ulonglong)((uint)local_538->NewVertex >> 9) * 8);
  local_248.Position.EdgePosition.Alpha = dVar53 * local_2a8._s_0.X + local_290._s_0.X * dVar55;
  local_248.Position._16_8_ = dVar53 * local_2a8._s_0.Y + local_290._s_0.Y * dVar55;
  *(double *)(lVar45 + uVar32 * 0x18) = dVar53 * local_2d8._s_0.X + local_2c0._s_0.X * dVar55;
  *(double *)(lVar45 + 8 + uVar32 * 0x18) = dVar53 * local_2d8._s_0.Y + local_2c0._s_0.Y * dVar55;
  *(double *)(lVar45 + 0x10 + uVar32 * 0x18) = dVar53 * local_2d8._s_0.Z + local_2c0._s_0.Z * dVar55
  ;
  local_248.Position._24_8_ = dVar53 * local_2a8._s_0.Z + local_290._s_0.Z * dVar55;
  local_248.PositionType = Triangle;
  local_248.Position.EdgePosition.EdgeID = iVar50;
  TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>::InsertAt
            (&this->IntrinsicVertexPositions,&local_248,local_538->NewVertex);
  return Ok;
}

// TraceEdge @ 14c76c230

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_> *
__thiscall
UE::Geometry::FIntrinsicMesh::TraceEdge
          (FIntrinsicMesh *this,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,double param_2,bool param_3)

{
  FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>
            (__return_storage_ptr__,this,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// TraceSurfaceEdge @ 14c76ce10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_> *
__thiscall
UE::Geometry::FIntrinsicMesh::TraceSurfaceEdge
          (FIntrinsicMesh *this,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,double param_2,bool param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  FDynamicMesh3 *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStackY_1a8 [32];
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  local_158;
  TArray<int,TSizedDefaultAllocator<32>_> local_148;
  <lambda_2> local_130 [8];
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
  local_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  FSurfacePoint local_f8;
  FSurfacePoint local_d0;
  EPositionType local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FSurfacePoint local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pFVar3 = (FDynamicMesh3 *)(this->NormalCoordinates)._padding_;
  FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicMesh>
            (&local_128,this,param_1,param_3);
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  if (local_128.ArrayNum == 0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    uVar8 = *(ulonglong *)
             (*(longlong *)
               ((pFVar3->Edges).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8)
             + (ulonglong)(param_1 & 0x1ff) * 0x10);
    if (param_3) {
      uVar8 = uVar8 >> 0x20;
    }
    uStack_a0 = (undefined4)uVar8;
    local_a8 = Vertex;
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_158.AllocatorInstance,&local_158.ArrayMax);
    uVar14 = 1;
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.ArrayNum = 0;
    local_148.ArrayMax = 0;
    local_158.ArrayNum = iVar6 + 1;
    lVar9 = (longlong)iVar6;
    *(ulonglong *)(local_158.AllocatorInstance.Data + lVar9 * 0x28) = CONCAT44(uStack_a4,local_a8);
    *(ulonglong *)(local_158.AllocatorInstance.Data + lVar9 * 0x28 + 8) =
         CONCAT44(uStack_9c,uStack_a0);
    *(double *)(local_158.AllocatorInstance.Data + lVar9 * 0x28 + 0x10) = local_98;
    *(undefined8 *)(local_158.AllocatorInstance.Data + lVar9 * 0x28 + 0x10 + 8) = uStack_90;
    *(undefined8 *)(local_158.AllocatorInstance.Data + lVar9 * 0x28 + 0x20) = local_88;
    local_80.PositionType = local_a8;
    local_80._4_4_ = uStack_a4;
    local_80.Position._0_8_ = CONCAT44(uStack_9c,uStack_a0);
    local_80.Position._24_8_ = local_88;
    local_80.Position.EdgePosition.Alpha = local_98;
    local_80.Position._16_8_ = uStack_90;
    if (1 < (longlong)local_128.ArrayNum) {
      lVar13 = 0xc;
      lVar9 = (longlong)local_128.ArrayNum + -1;
      do {
        uVar7 = 0;
        if ((int)uVar14 < local_128.ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                     *)(*pcVar4)();
          return pTVar10;
        }
        pFVar12 = local_128.AllocatorInstance.Data + lVar13 + 4;
        if (*(int *)(local_128.AllocatorInstance.Data + lVar13 + 8) == 0) {
          uVar8 = (ulonglong)(*(uint *)(local_128.AllocatorInstance.Data + lVar13) & 0x1ff);
          lVar11 = *(longlong *)
                    (this->_padding_ +
                    (ulonglong)(*(uint *)(local_128.AllocatorInstance.Data + lVar13) >> 9) * 8);
          uVar1 = *(undefined8 *)(lVar11 + uVar8 * 0xc);
          uVar2 = *(undefined4 *)(lVar11 + 8 + uVar8 * 0xc);
          if (local_148.ArrayNum < 1) {
            local_fc = uVar2;
            local_104 = uVar1;
            local_d0.PositionType = Vertex;
            local_d0.Position.VertexPosition.VID =
                 (FVertexPosition)
                 (FVertexPosition)*(int *)((longlong)&local_104 + (longlong)*(int *)pFVar12 * 4);
            if (((local_158.AllocatorInstance.Data <= &local_d0) &&
                (&local_d0 <
                 (FSurfacePoint *)
                 (local_158.AllocatorInstance.Data + (longlong)local_158.ArrayMax * 0x28))) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar10 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                         *)(*pcVar4)();
              return pTVar10;
            }
            iVar6 = local_158.ArrayNum;
            if (local_158.ArrayNum == local_158.ArrayMax) {
              iVar6 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x828,&local_158.AllocatorInstance,&local_158.ArrayMax);
            }
            lVar11 = (longlong)iVar6;
            local_158.ArrayNum = iVar6 + 1;
            *(ulonglong *)(local_158.AllocatorInstance.Data + lVar11 * 0x28) =
                 CONCAT44(local_d0._4_4_,local_d0.PositionType);
            *(ulonglong *)(local_158.AllocatorInstance.Data + lVar11 * 0x28 + 8) =
                 CONCAT44(local_d0.Position._4_4_,local_d0.Position.EdgePosition.EdgeID);
            *(double *)(local_158.AllocatorInstance.Data + lVar11 * 0x28 + 0x10) =
                 local_d0.Position.EdgePosition.Alpha;
            *(undefined8 *)(local_158.AllocatorInstance.Data + lVar11 * 0x28 + 0x10 + 8) =
                 local_d0.Position._16_8_;
            *(undefined8 *)(local_158.AllocatorInstance.Data + lVar11 * 0x28 + 0x20) =
                 local_d0.Position._24_8_;
            local_80.PositionType = local_d0.PositionType;
            local_80._4_4_ = local_d0._4_4_;
            local_80.Position._0_8_ =
                 CONCAT44(local_d0.Position._4_4_,local_d0.Position.EdgePosition.EdgeID);
            local_80.Position._24_8_ = local_d0.Position._24_8_;
            local_80.Position.EdgePosition.Alpha = local_d0.Position.EdgePosition.Alpha;
            local_80.Position._16_8_ = local_d0.Position._16_8_;
          }
          else {
            local_108 = uVar2;
            local_110 = uVar1;
            local_f8.Position.VertexPosition.VID =
                 (FVertexPosition)*(int *)((longlong)&local_110 + (longlong)*(int *)pFVar12 * 4);
            local_f8.PositionType = Vertex;
            FNormalCoordSurfaceTraceImpl::
            ConvertEdgesCrossed<UE::Geometry::FIntrinsicMesh,UE::Geometry::FDynamicMesh3,_UE::Geometry::FIntrinsicMesh::TraceSurfaceEdge_::__l15::<lambda_2>_>
                      (&local_80,&local_f8,&local_148,this,pFVar3,param_2,local_130,&local_158);
            if (((local_158.AllocatorInstance.Data <= &local_f8) &&
                (&local_f8 <
                 (FSurfacePoint *)
                 (local_158.AllocatorInstance.Data + (longlong)local_158.ArrayMax * 0x28))) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar10 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                         *)(*pcVar4)();
              return pTVar10;
            }
            iVar6 = local_158.ArrayNum;
            if (local_158.ArrayNum == local_158.ArrayMax) {
              iVar6 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x828,&local_158.AllocatorInstance,&local_158.ArrayMax);
            }
            uVar1 = local_148._8_8_;
            lVar11 = (longlong)iVar6;
            local_158.ArrayNum = iVar6 + 1;
            *(ulonglong *)(local_158.AllocatorInstance.Data + lVar11 * 0x28) =
                 CONCAT44(local_f8._4_4_,local_f8.PositionType);
            *(ulonglong *)(local_158.AllocatorInstance.Data + lVar11 * 0x28 + 8) =
                 CONCAT44(local_f8.Position._4_4_,local_f8.Position.EdgePosition.EdgeID);
            *(double *)(local_158.AllocatorInstance.Data + lVar11 * 0x28 + 0x10) =
                 local_f8.Position.EdgePosition.Alpha;
            *(undefined8 *)(local_158.AllocatorInstance.Data + lVar11 * 0x28 + 0x10 + 8) =
                 local_f8.Position._16_8_;
            *(undefined8 *)(local_158.AllocatorInstance.Data + lVar11 * 0x28 + 0x20) =
                 local_f8.Position._24_8_;
            local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
            if ((longlong)uVar1 < 0) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,&local_148.AllocatorInstance,0,&local_148.ArrayMax);
            }
            local_80.PositionType = local_f8.PositionType;
            local_80._4_4_ = local_f8._4_4_;
            local_80.Position._0_8_ =
                 CONCAT44(local_f8.Position._4_4_,local_f8.Position.EdgePosition.EdgeID);
            local_80.Position._24_8_ = local_f8.Position._24_8_;
            local_80.Position.EdgePosition.Alpha = local_f8.Position.EdgePosition.Alpha;
            local_80.Position._16_8_ = local_f8.Position._16_8_;
          }
        }
        else {
          if (((local_148.AllocatorInstance.Data <= pFVar12) &&
              (pFVar12 < local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar10 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                       *)(*pcVar4)();
            return pTVar10;
          }
          if (local_148.ArrayNum == local_148.ArrayMax) {
            iVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_148.AllocatorInstance,&local_148.ArrayMax);
            local_148.ArrayNum = iVar6;
          }
          lVar11 = (longlong)local_148.ArrayNum;
          local_148.ArrayNum = local_148.ArrayNum + 1;
          *(int *)(local_148.AllocatorInstance.Data + lVar11 * 4) = *(int *)pFVar12;
        }
        uVar14 = uVar14 + 1;
        lVar13 = lVar13 + 0xc;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_158.AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = local_158.ArrayNum;
    __return_storage_ptr__->ArrayMax = local_158.ArrayMax;
  }
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

