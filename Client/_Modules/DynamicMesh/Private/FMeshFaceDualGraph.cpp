// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// FMeshFaceDualGraph @ 14c897430

FMeshFaceDualGraph * __thiscall FMeshFaceDualGraph::FMeshFaceDualGraph(FMeshFaceDualGraph *this)

{
  TDynamicVectorN<double,3> *this_00;
  TDynamicVector<double,512> *this_01;
  
  this->_padding_ = (longlong)&___7FDynamicGraph_Geometry_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  UE::Geometry::TDynamicVector<unsigned_short,512>::AddAllocatedBlock
            ((TDynamicVector<unsigned_short,512> *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock
            ((TDynamicVector<int,512> *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0;
  UE::Geometry::FSmallListSet::FSmallListSet((FSmallListSet *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  UE::Geometry::TDynamicVector<unsigned_short,512>::AddAllocatedBlock
            ((TDynamicVector<unsigned_short,512> *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock
            ((TDynamicVector<int,512> *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  UE::Geometry::TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512>::AddAllocatedBlock
            ((TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512> *)&this->_padding_);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__FDynamicGraph3_N_Geometry_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  UE::Geometry::TDynamicVector<double,512>::AddAllocatedBlock
            ((TDynamicVector<double,512> *)&this->_padding_);
  this_00 = &this->Normals;
  this->_padding_ = (longlong)&___7FMeshFaceDualGraph__6B_;
  (this_00->Data).CurBlock = 0;
  (this_00->Data).CurBlockUsed = 0;
  (this->Normals).Data.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Normals).Data.Blocks.ArrayNum = 0;
  (this->Normals).Data.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<double,512>::AddAllocatedBlock(&this_00->Data);
  this_01 = &this->Areas;
  this_01->CurBlock = 0;
  this_01->CurBlockUsed = 0;
  (this->Areas).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Areas).Blocks.ArrayNum = 0;
  (this->Areas).Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<double,512>::AddAllocatedBlock(this_01);
  return this;
}

// ~FMeshFaceDualGraph @ 14c89a420

void __thiscall FMeshFaceDualGraph::~FMeshFaceDualGraph(FMeshFaceDualGraph *this)

{
  FScriptContainerElement *pFVar1;
  
  UE::Geometry::TDynamicVector<double,512>::Empty(&this->Areas,0);
  pFVar1 = (this->Areas).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Geometry::TDynamicVector<double,512>::Empty(&(this->Normals).Data,0);
  pFVar1 = (this->Normals).Data.Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Geometry::TDynamicVector<double,512>::Empty((TDynamicVector<double,512> *)&this->_padding_,0);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UE::Geometry::FDynamicGraph::~FDynamicGraph((FDynamicGraph *)this);
  return;
}

// MakeFaceDualGraphForMesh @ 14c9056d0

void __cdecl
FMeshFaceDualGraph::MakeFaceDualGraphForMesh
          (FDynamicMesh3 *param_1,FMeshFaceDualGraph *param_2,
          TFunctionRef<bool___cdecl(int,int)> *param_3)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FIndex3i *pFVar15;
  bool bVar16;
  uint local_res8 [2];
  uint local_res20 [2];
  longlong local_138;
  double local_128;
  TVector<double>_u_0 local_120;
  double local_108;
  double local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ElementVectorN local_e8;
  ElementVectorN local_c8;
  TVector<double>_u_0 local_a8;
  FIndex3i local_90;
  ElementVectorN local_80;
  ElementVectorN local_68 [2];
  
  local_res8[0] =
       (param_1->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_1->TriangleRefCounts).FreeIndices.CurBlockUsed;
  uVar14 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar13 = 0;
  if (((uVar14 != 0) &&
      (pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar13 = 0,
      0xfffd < (ushort)(**(short **)pFVar4 - 1U))) && (uVar13 = 1, 1 < (int)uVar14)) {
    do {
      lVar5 = *(longlong *)(pFVar4 + (ulonglong)(uVar13 >> 9) * 8);
      if ((*(short *)(lVar5 + (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar5 + (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) break;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar14);
  }
joined_r0x00014c905780:
  if (uVar13 != uVar14) {
    while( true ) {
      uVar10 = local_res8[0];
      UE::Geometry::FDynamicMesh3::GetTriInfo
                (param_1,uVar13,(TVector<double> *)&local_120._s_0,&local_128,
                 (TVector<double> *)&local_a8._s_0);
      uVar8 = local_a8._s_0.Y;
      uVar7 = local_a8._s_0.X;
      if (uVar10 == 0) {
        local_108 = local_128;
        local_e8.Data[2] = local_a8._s_0.Z;
        uVar10 = UE::Geometry::FRefCountVector::Allocate((FRefCountVector *)&param_2->_padding_);
        if ((int)uVar10 <
            (int)param_2->_padding_ * 0x200 + *(int *)((longlong)&param_2->_padding_ + 4)) {
          UE::Geometry::FSmallListSet::Clear((FSmallListSet *)&param_2->_padding_,uVar10);
        }
        UE::Geometry::FSmallListSet::AllocateAt((FSmallListSet *)&param_2->_padding_,uVar10);
        *(int *)&param_2->_padding_ = (int)param_2->_padding_ + 1;
        piVar1 = (int *)((longlong)&param_2->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
        local_80.Data[0] = (double)uVar7;
        local_80.Data[1] = (double)uVar8;
        local_80.Data[2] = local_e8.Data[2];
        UE::Geometry::TDynamicVectorN<double,3>::InsertAt
                  ((TDynamicVectorN<double,3> *)&param_2->_padding_,&local_80,uVar10);
        local_e8.Data[0] = local_120._s_0.X;
        local_e8.Data[1] = local_120._s_0.Y;
        local_e8.Data[2] = local_120._s_0.Z;
        UE::Geometry::TDynamicVectorN<double,3>::InsertAt(&param_2->Normals,&local_e8,uVar10);
        UE::Geometry::TDynamicVector<double,512>::InsertAt(&param_2->Areas,&local_108,uVar10);
      }
      else {
        local_100 = local_128;
        local_c8.Data[2] = local_a8._s_0.Z;
        bVar16 = UE::Geometry::FRefCountVector::AllocateAt
                           ((FRefCountVector *)&param_2->_padding_,uVar13);
        if (bVar16) {
          if ((int)uVar13 <
              (int)param_2->_padding_ * 0x200 + *(int *)((longlong)&param_2->_padding_ + 4)) {
            UE::Geometry::FSmallListSet::Clear((FSmallListSet *)&param_2->_padding_,uVar13);
          }
          UE::Geometry::FSmallListSet::AllocateAt((FSmallListSet *)&param_2->_padding_,uVar13);
          *(int *)&param_2->_padding_ = (int)param_2->_padding_ + 1;
          piVar1 = (int *)((longlong)&param_2->_padding_ + 4);
          *piVar1 = *piVar1 + 1;
          local_68[0].Data[0] = (double)uVar7;
          local_68[0].Data[1] = (double)uVar8;
          local_68[0].Data[2] = local_c8.Data[2];
          UE::Geometry::TDynamicVectorN<double,3>::InsertAt
                    ((TDynamicVectorN<double,3> *)&param_2->_padding_,local_68,uVar13);
        }
        local_c8.Data[0] = local_120._s_0.X;
        local_c8.Data[1] = local_120._s_0.Y;
        local_c8.Data[2] = local_120._s_0.Z;
        UE::Geometry::TDynamicVectorN<double,3>::InsertAt(&param_2->Normals,&local_c8,uVar13);
        UE::Geometry::TDynamicVector<double,512>::InsertAt(&param_2->Areas,&local_100,uVar13);
      }
      uVar13 = uVar13 + 1;
      if ((int)uVar14 <= (int)uVar13) break;
      pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        if ((*(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar13 >> 9) * 8) +
                       (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar13 >> 9) * 8) +
                      (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) break;
        uVar13 = uVar13 + 1;
        if ((int)uVar14 <= (int)uVar13) goto joined_r0x00014c905780;
      }
    }
    goto joined_r0x00014c905780;
  }
  uVar13 = 0;
  uVar14 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar14 != 0) &&
     (pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    uVar13 = 1;
    bVar16 = uVar14 == 1;
    if ((int)uVar14 < 2) goto LAB_14c905a19;
    do {
      sVar3 = *(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar13 >> 9) * 8) +
                        (ulonglong)(uVar13 & 0x1ff) * 2);
      if ((sVar3 != 0) && (sVar3 != -1)) break;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar14);
  }
  bVar16 = uVar13 == uVar14;
LAB_14c905a19:
  if (!bVar16) {
LAB_14c905a20:
    do {
      UE::Geometry::FDynamicMesh3::GetTriNeighbourTris(param_1,&local_90,uVar13);
      pFVar15 = &local_90;
      local_138 = 3;
      do {
        uVar10 = (pFVar15->field0_0x0)._s_0.A;
        if ((((-1 < (int)uVar10) &&
             ((int)uVar10 <
              (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
            ((ushort)(*(short *)(*(longlong *)
                                  ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                   Data + (ulonglong)(uVar10 >> 9) * 8) +
                                (ulonglong)(uVar10 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
           (local_res8[0] = uVar10, local_res20[0] = uVar13,
           cVar9 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_res20,local_res8),
           cVar9 != '\0')) {
          uVar10 = (pFVar15->field0_0x0)._s_0.A;
          if ((-1 < (int)uVar13) &&
             (iVar12 = (int)param_2->_padding_ * 0x200 + *(int *)((longlong)&param_2->_padding_ + 4)
             , (int)uVar13 < iVar12)) {
            local_f0 = (ulonglong)(uVar13 & 0x1ff);
            local_f8 = (ulonglong)(uVar13 >> 9);
            if (((ushort)(*(short *)(*(longlong *)(param_2->_padding_ + local_f8 * 8) + local_f0 * 2
                                    ) - 1U) < 0xfffe) &&
               ((-1 < (int)uVar10 && ((int)uVar10 < iVar12)))) {
              if ((ushort)(*(short *)(*(longlong *)
                                       (param_2->_padding_ + (ulonglong)(uVar10 >> 9) * 8) +
                                     (ulonglong)(uVar10 & 0x1ff) * 2) - 1U) < 0xfffe) {
                if (uVar13 == uVar10) {
                  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("false",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Curve\\DynamicGraph.h"
                                      ,0xe7,L"");
                  if (bVar16) goto code_r0x00014c905c15;
                }
                else {
                  iVar12 = UE::Geometry::FDynamicGraph::FindEdge
                                     ((FDynamicGraph *)param_2,uVar13,uVar10);
                  if (iVar12 == -1) {
                    psVar2 = (short *)(*(longlong *)(param_2->_padding_ + local_f8 * 8) +
                                      local_f0 * 2);
                    *psVar2 = *psVar2 + 1;
                    psVar2 = (short *)(*(longlong *)
                                        (param_2->_padding_ + (ulonglong)(uVar10 >> 9) * 8) +
                                      (ulonglong)(uVar10 & 0x1ff) * 2);
                    *psVar2 = *psVar2 + 1;
                    iVar12 = (int)param_2->_padding_;
                    iVar11 = 0;
                    if (0 < iVar12) {
                      iVar11 = iVar12;
                    }
                    *(int *)&param_2->_padding_ = iVar11;
                    UE::Geometry::FDynamicGraph::add_edge((FDynamicGraph *)param_2,uVar13,uVar10,-1)
                    ;
                    *(int *)&param_2->_padding_ = (int)param_2->_padding_ + 1;
                    piVar1 = (int *)((longlong)&param_2->_padding_ + 4);
                    *piVar1 = *piVar1 + 1;
                  }
                }
                goto LAB_14c905c1b;
              }
            }
          }
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Curve\\DynamicGraph.h"
                              ,0xe2,L"");
          if (bVar16) {
code_r0x00014c905c15:
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
LAB_14c905c1b:
        pFVar15 = (FIndex3i *)((longlong)&pFVar15->field0_0x0 + 4);
        local_138 = local_138 + -1;
      } while (local_138 != 0);
      uVar13 = uVar13 + 1;
      if ((int)uVar13 < (int)uVar14) {
        do {
          lVar5 = *(longlong *)
                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar13 >> 9) * 8);
          if ((*(short *)(lVar5 + (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar5 + (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) goto LAB_14c905a20;
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uVar14);
      }
    } while (uVar13 != uVar14);
  }
  return;
}

