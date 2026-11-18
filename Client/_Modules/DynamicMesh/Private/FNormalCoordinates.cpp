// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 10

// FNormalCoordinates @ 14c6df890

FNormalCoordinates * __thiscall
UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FNormalCoordinates
          (FNormalCoordinates *this,FDynamicMesh3 *param_1)

{
  TDynamicVector<UE::Geometry::FIndex3i,512> *this_00;
  TDynamicVector<int,512> *this_01;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this_01 = &this->NormalCoord;
  this_01->CurBlock = 0;
  this_01->CurBlockUsed = 0;
  (this->NormalCoord).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalCoord).Blocks.ArrayNum = 0;
  (this->NormalCoord).Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(this_01);
  this_00 = &this->RoundaboutOrder;
  this_00->CurBlock = 0;
  this_00->CurBlockUsed = 0;
  (this->RoundaboutOrder).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RoundaboutOrder).Blocks.ArrayNum = 0;
  (this->RoundaboutOrder).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(this_00);
  (this->RefVertDegree).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefVertDegree).ArrayNum = 0;
  (this->RefVertDegree).ArrayMax = 0;
  (this->EdgeOrder).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeOrder).ArrayNum = 0;
  (this->EdgeOrder).ArrayMax = 0;
  FMeshConnection::Reset((FMeshConnection *)this,param_1);
  RebuildNormalCoordinates(this,param_1);
  return this;
}

// ~FNormalCoordinates @ 14c6e1940

void __thiscall
UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::~FNormalCoordinates
          (FNormalCoordinates *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  
  pFVar1 = (this->EdgeOrder).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RefVertDegree).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Geometry::FIndex3i,512>::Empty(&this->RoundaboutOrder,0);
  pFVar1 = (this->RoundaboutOrder).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<int,512>::Empty(&this->NormalCoord,0);
  pFVar1 = (this->NormalCoord).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  puVar2 = (undefined8 *)this->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}

// GetEdgeOrder @ 14c73aee0

int __thiscall
UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::GetEdgeOrder
          (FNormalCoordinates *this,int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int local_48;
  int iStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  
  lVar3 = this->_padding_;
  if ((((-1 < param_1) && (param_1 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) &&
      ((ushort)(*(short *)(*(longlong *)
                            (*(longlong *)(lVar3 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
                          (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
     ((-1 < param_2 && (param_2 < *(int *)(lVar3 + 0x1d0) * 0x200 + *(int *)(lVar3 + 0x1d4))))) {
    uVar10 = (ulonglong)(param_2 & 0x1ff);
    lVar1 = (ulonglong)((uint)param_2 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x1d8) + lVar1) + uVar10 * 2) - 1U)
        < 0xfffe) {
      lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x1c0) + lVar1);
      uVar4 = *(undefined8 *)(lVar1 + uVar10 * 0x10);
      if (((int)uVar4 == param_1) || ((int)((ulonglong)uVar4 >> 0x20) == param_1)) {
        uVar10 = *(ulonglong *)(lVar1 + 8 + uVar10 * 0x10);
        iVar8 = 1;
        uVar11 = (uint)uVar10;
        lVar1 = ((uVar10 & 0xffffffff) >> 9) * 8;
        lVar2 = (ulonglong)(uVar11 & 0x1ff) * 0xc;
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x180) + lVar1);
        uVar4 = *(undefined8 *)(lVar5 + lVar2);
        local_48 = (int)uVar4;
        if (local_48 == param_2) {
          iVar9 = 0;
        }
        else if ((int)((ulonglong)uVar4 >> 0x20) == param_2) {
          iVar9 = 1;
        }
        else {
          iVar9 = -1;
          if (*(int *)(lVar5 + 8 + lVar2) == param_2) {
            iVar9 = 2;
          }
        }
        lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x130) + lVar1);
        local_38 = *(undefined8 *)(lVar1 + lVar2);
        local_30 = *(undefined4 *)(lVar1 + 8 + lVar2);
        if (*(int *)((longlong)&local_38 + (longlong)iVar9 * 4) == param_1) {
          uVar12 = 0;
          if ((int)uVar11 < (this->EdgeOrder).ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if (uVar12 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              iVar8 = (*pcVar6)();
              return iVar8;
            }
          }
          iVar8 = *(int *)((this->EdgeOrder).AllocatorInstance.Data +
                          ((longlong)iVar9 + (longlong)(int)uVar11 * 3) * 4);
        }
        else {
          uVar11 = (uint)(uVar10 >> 0x20);
          if (uVar11 == 0xffffffff) {
            uVar11 = 0;
            if (param_1 < (this->RefVertDegree).ArrayNum) {
              uVar11 = (uint)~param_1 >> 0x1f;
            }
            if (uVar11 == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                iVar8 = (*pcVar6)();
                return iVar8;
              }
            }
            iVar8 = *(int *)((this->RefVertDegree).AllocatorInstance.Data + (longlong)param_1 * 4) +
                    -1;
          }
          else {
            lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x180) + (uVar10 >> 0x29) * 8);
            uVar4 = *(undefined8 *)(lVar3 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
            local_48 = (int)uVar4;
            if (local_48 == param_2) {
              iVar8 = 0;
            }
            else if (((int)((ulonglong)uVar4 >> 0x20) != param_2) &&
                    (iVar8 = -1, *(int *)(lVar3 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc) == param_2)
                    ) {
              iVar8 = 2;
            }
            uVar12 = 0;
            if ((int)uVar11 < (this->EdgeOrder).ArrayNum) {
              uVar12 = ~uVar11 >> 0x1f;
            }
            if (uVar12 == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                iVar8 = (*pcVar6)();
                return iVar8;
              }
            }
            iVar8 = *(int *)((this->EdgeOrder).AllocatorInstance.Data +
                            ((longlong)(int)uVar11 * 3 + (longlong)iVar8) * 4);
          }
        }
        return iVar8;
      }
    }
  }
  return -1;
}

// GetNthEdgeID @ 14c73e3e0

int __thiscall
UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::GetNthEdgeID
          (FNormalCoordinates *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int local_res8 [2];
  int local_res10 [2];
  <lambda_1> local_38;
  
  lVar1 = this->_padding_;
  if (((-1 < param_1) && (param_1 < *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar1 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    uVar4 = 0;
    if (param_1 < (this->RefVertDegree).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    if (param_2 + -1 <=
        *(int *)((this->RefVertDegree).AllocatorInstance.Data + (longlong)param_1 * 4)) {
      uVar4 = 0;
      if (param_1 < (int)this->_padding_) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      local_38.Count = local_res8;
      local_38.ResultEID = local_res10;
      local_res8[0] = 0;
      local_res10[0] = -1;
      local_38.N = param_2;
      VisitVertexAdjacentElements<UE::Geometry::FDynamicMesh3,_UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::GetNthEdgeID_::__l2::<lambda_1>_>
                ((FDynamicMesh3 *)this->_padding_,param_1,
                 *(int *)(this->_padding_ + (longlong)param_1 * 4),&local_38);
      return local_res10[0];
    }
  }
  return -1;
}

// NumCornerCrossingRefEdges @ 14c7522f0

int __thiscall
UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::NumCornerCrossingRefEdges
          (FNormalCoordinates *this,FIndex3i *param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  pFVar2 = (this->NormalCoord).Blocks.AllocatorInstance.Data;
  iVar6 = param_2 + 1;
  iVar7 = param_2 + 2;
  iVar6 = iVar6 + (iVar6 / 3 + (iVar6 >> 0x1f) +
                  (int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                  -3;
  iVar7 = iVar7 + (iVar7 / 3 + (iVar7 >> 0x1f) +
                  (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                  -3;
  iVar8 = *(int *)(*(longlong *)
                    (pFVar2 + (ulonglong)((uint)(param_1->field0_0x0).ABC[param_2] >> 9) * 8) +
                  (ulonglong)((param_1->field0_0x0).ABC[param_2] & 0x1ff) * 4);
  iVar5 = iVar6 + 1;
  iVar4 = iVar6 + 2;
  iVar5 = *(int *)(*(longlong *)
                    (pFVar2 + (ulonglong)
                              ((uint)(param_1->field0_0x0).ABC
                                     [iVar5 + (iVar5 / 3 + (iVar5 >> 0x1f) +
                                              (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f)
                                                    & 0xffffffffU) >> 0x1f)) * -3] >> 9) * 8) +
                  (ulonglong)
                  ((param_1->field0_0x0).ABC
                   [iVar5 + (iVar5 / 3 + (iVar5 >> 0x1f) +
                            (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >>
                                 0x1f)) * -3] & 0x1ff) * 4);
  iVar4 = *(int *)(*(longlong *)
                    (pFVar2 + (ulonglong)
                              ((uint)(param_1->field0_0x0).ABC
                                     [iVar4 + (iVar4 / 3 + (iVar4 >> 0x1f) +
                                              (int)(((longlong)iVar4 / 3 + ((longlong)iVar4 >> 0x3f)
                                                    & 0xffffffffU) >> 0x1f)) * -3] >> 9) * 8) +
                  (ulonglong)
                  ((param_1->field0_0x0).ABC
                   [iVar4 + (iVar4 / 3 + (iVar4 >> 0x1f) +
                            (int)(((longlong)iVar4 / 3 + ((longlong)iVar4 >> 0x3f) & 0xffffffffU) >>
                                 0x1f)) * -3] & 0x1ff) * 4);
  iVar6 = *(int *)(*(longlong *)
                    (pFVar2 + (ulonglong)((uint)(param_1->field0_0x0).ABC[iVar6] >> 9) * 8) +
                  (ulonglong)((param_1->field0_0x0).ABC[iVar6] & 0x1ff) * 4);
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  iVar1 = iVar7 + 1;
  iVar3 = (iVar5 - iVar4) - iVar6;
  iVar5 = iVar7 + 2;
  iVar4 = *(int *)(*(longlong *)
                    (pFVar2 + (ulonglong)
                              ((uint)(param_1->field0_0x0).ABC
                                     [iVar1 + (iVar1 / 3 + (iVar1 >> 0x1f) +
                                              (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f)
                                                    & 0xffffffffU) >> 0x1f)) * -3] >> 9) * 8) +
                  (ulonglong)
                  ((param_1->field0_0x0).ABC
                   [iVar1 + (iVar1 / 3 + (iVar1 >> 0x1f) +
                            (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >>
                                 0x1f)) * -3] & 0x1ff) * 4);
  iVar5 = *(int *)(*(longlong *)
                    (pFVar2 + (ulonglong)
                              ((uint)(param_1->field0_0x0).ABC
                                     [iVar5 + (iVar5 / 3 + (iVar5 >> 0x1f) +
                                              (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f)
                                                    & 0xffffffffU) >> 0x1f)) * -3] >> 9) * 8) +
                  (ulonglong)
                  ((param_1->field0_0x0).ABC
                   [iVar5 + (iVar5 / 3 + (iVar5 >> 0x1f) +
                            (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >>
                                 0x1f)) * -3] & 0x1ff) * 4);
  iVar7 = *(int *)(*(longlong *)
                    (pFVar2 + (ulonglong)((uint)(param_1->field0_0x0).ABC[iVar7] >> 9) * 8) +
                  (ulonglong)((param_1->field0_0x0).ABC[iVar7] & 0x1ff) * 4);
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  iVar5 = (iVar4 - iVar5) - iVar7;
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  iVar7 = (iVar8 - iVar6) + iVar7;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  return ((iVar7 - iVar5) - iVar3) / 2;
}

// NumCornerEmanatingRefEdges @ 14c7524e0

int __thiscall
UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::NumCornerEmanatingRefEdges
          (FNormalCoordinates *this,FIndex3i *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2 + 2;
  pFVar1 = (this->NormalCoord).Blocks.AllocatorInstance.Data;
  iVar4 = *(int *)(*(longlong *)
                    (pFVar1 + (ulonglong)((uint)(param_1->field0_0x0).ABC[(param_2 + 1) % 3] >> 9) *
                              8) +
                  (ulonglong)((param_1->field0_0x0).ABC[(param_2 + 1) % 3] & 0x1ff) * 4);
  iVar2 = *(int *)(*(longlong *)
                    (pFVar1 + (ulonglong)
                              ((uint)(param_1->field0_0x0).ABC
                                     [iVar2 + (iVar2 / 3 + (iVar2 >> 0x1f) +
                                              (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f)
                                                    & 0xffffffffU) >> 0x1f)) * -3] >> 9) * 8) +
                  (ulonglong)
                  ((param_1->field0_0x0).ABC
                   [iVar2 + (iVar2 / 3 + (iVar2 >> 0x1f) +
                            (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >>
                                 0x1f)) * -3] & 0x1ff) * 4);
  iVar3 = *(int *)(*(longlong *)
                    (pFVar1 + (ulonglong)((uint)(param_1->field0_0x0).ABC[param_2] >> 9) * 8) +
                  (ulonglong)((param_1->field0_0x0).ABC[param_2] & 0x1ff) * 4);
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar2 = (iVar4 - iVar3) - iVar2;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  return iVar2;
}

// OnFlipEdge @ 14c7528b0

bool __thiscall
UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::OnFlipEdge
          (FNormalCoordinates *this,int param_1,FIndex3i *param_2,int param_3,int param_4,
          FIndex3i *param_5,int param_6,int param_7)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  FIndex3i_u_0 local_78;
  FIndex3i_u_0 local_68;
  longlong local_58;
  longlong local_50;
  
  iVar12 = 0;
  iVar26 = iVar12;
  if ((param_2->field0_0x0)._s_0.A != param_7) {
    if ((param_2->field0_0x0)._s_0.B == param_7) {
      iVar26 = 1;
    }
    else {
      iVar26 = -1;
      if ((param_2->field0_0x0)._s_0.C == param_7) {
        iVar26 = 2;
      }
    }
  }
  iVar21 = iVar12;
  if ((param_5->field0_0x0)._s_0.A != param_7) {
    if ((param_5->field0_0x0)._s_0.B == param_7) {
      iVar21 = 1;
    }
    else {
      iVar21 = -1;
      if ((param_5->field0_0x0)._s_0.C == param_7) {
        iVar21 = 2;
      }
    }
  }
  if ((iVar26 != -1) && (iVar21 != -1)) {
    iVar23 = iVar26 + 1;
    iVar24 = iVar26 + 2;
    iVar28 = iVar21 + 1;
    iVar25 = iVar21 + 2;
    iVar23 = iVar23 + (iVar23 / 3 + (iVar23 >> 0x1f) +
                      (int)(((longlong)iVar23 / 3 + ((longlong)iVar23 >> 0x3f) & 0xffffffffU) >>
                           0x1f)) * -3;
    iVar24 = iVar24 + (iVar24 / 3 + (iVar24 >> 0x1f) +
                      (int)(((longlong)iVar24 / 3 + ((longlong)iVar24 >> 0x3f) & 0xffffffffU) >>
                           0x1f)) * -3;
    iVar28 = iVar28 + (iVar28 / 3 + (iVar28 >> 0x1f) +
                      (int)(((longlong)iVar28 / 3 + ((longlong)iVar28 >> 0x3f) & 0xffffffffU) >>
                           0x1f)) * -3;
    iVar25 = iVar25 + (iVar25 / 3 + (iVar25 >> 0x1f) +
                      (int)(((longlong)iVar25 / 3 + ((longlong)iVar25 >> 0x3f) & 0xffffffffU) >>
                           0x1f)) * -3;
    iVar12 = NumCornerCrossingRefEdges(this,param_2,iVar24);
    iVar13 = NumCornerCrossingRefEdges(this,param_2,iVar23);
    iVar14 = NumCornerCrossingRefEdges(this,param_2,iVar26);
    iVar15 = NumCornerEmanatingRefEdges(this,param_5,iVar25);
    iVar16 = NumCornerEmanatingRefEdges(this,param_2,iVar24);
    iVar17 = NumCornerEmanatingRefEdges(this,param_5,iVar28);
    iVar18 = NumCornerEmanatingRefEdges(this,param_2,iVar26);
    iVar19 = NumCornerEmanatingRefEdges(this,param_5,iVar21);
    iVar20 = NumCornerEmanatingRefEdges(this,param_2,iVar23);
    piVar1 = (int *)(*(longlong *)
                      ((this->NormalCoord).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_7 >> 9) * 8) + (ulonglong)(param_7 & 0x1ff) * 4);
    iVar21 = NumCornerCrossingRefEdges(this,param_5,iVar21);
    iVar26 = -(iVar21 - iVar13);
    if (iVar26 < 0) {
      iVar26 = iVar21 - iVar13;
    }
    iVar13 = NumCornerCrossingRefEdges(this,param_5,iVar28);
    iVar21 = -(iVar13 - iVar14);
    if (iVar21 < 0) {
      iVar21 = iVar13 - iVar14;
    }
    iVar13 = NumCornerCrossingRefEdges(this,param_5,iVar25);
    *piVar1 = (uint)(*piVar1 == -1) + (iVar26 + ((iVar21 - iVar16) - iVar15)) / 2 + iVar20 + iVar13
              + iVar19 + iVar18 + iVar17 + iVar12;
    local_78._s_0.B = (param_2->field0_0x0).ABC[iVar24];
    uVar27 = (param_5->field0_0x0).ABC[iVar25];
    local_68._s_0.A = param_7;
    local_68._s_0.C = (param_2->field0_0x0).ABC[iVar23];
    local_78._s_0.A = param_7;
    local_68._s_0.B = uVar27;
    local_78._s_0.C = (param_5->field0_0x0).ABC[iVar28];
    lVar2 = (ulonglong)((uint)param_1 >> 9) * 8;
    pFVar6 = (this->RoundaboutOrder).Blocks.AllocatorInstance.Data;
    lVar3 = (ulonglong)(param_1 & 0x1ff) * 0xc;
    lVar7 = *(longlong *)(pFVar6 + lVar2);
    local_90 = *(undefined4 *)(lVar7 + 8 + lVar3);
    local_98 = *(undefined8 *)(lVar7 + lVar3);
    local_58 = (ulonglong)((uint)param_4 >> 9) * 8;
    local_50 = (ulonglong)(param_4 & 0x1ff) * 0xc;
    lVar7 = *(longlong *)(pFVar6 + local_58);
    lVar8 = this->_padding_;
    local_80 = *(undefined4 *)(lVar7 + 8 + local_50);
    iVar26 = *(int *)((longlong)&local_98 + (longlong)iVar24 * 4);
    uVar4 = *(undefined4 *)((longlong)&local_98 + (longlong)iVar23 * 4);
    local_88 = *(undefined8 *)(lVar7 + local_50);
    iVar12 = *(int *)((longlong)&local_88 + (longlong)iVar25 * 4);
    uVar5 = *(undefined4 *)((longlong)&local_88 + (longlong)iVar28 * 4);
    if (((param_3 < 0) || (*(int *)(lVar8 + 0x20) * 0x200 + *(int *)(lVar8 + 0x24) <= param_3)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(lVar8 + 0x28) +
                                      (ulonglong)((uint)param_3 >> 9) * 8) +
                                    (ulonglong)(param_3 & 0x1ff) * 2) - 1U))) {
      iVar21 = -1;
    }
    else {
      iVar21 = *(int *)(*(longlong *)
                         ((this->NormalCoord).Blocks.AllocatorInstance.Data +
                         (ulonglong)((uint)local_78._s_0.B >> 9) * 8) +
                       (ulonglong)(local_78._s_0.B & 0x1ff) * 4);
      iVar13 = NumCornerEmanatingRefEdges(this,(FIndex3i *)&local_78._s_0,1);
      uVar22 = 0;
      if (param_3 < (this->RefVertDegree).ArrayNum) {
        uVar22 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      iVar21 = (int)(iVar13 + (uint)(iVar21 == -1) + iVar26) %
               *(int *)((this->RefVertDegree).AllocatorInstance.Data + (longlong)param_3 * 4);
    }
    iVar13 = -1;
    lVar7 = this->_padding_;
    if (((-1 < param_6) && (param_6 < *(int *)(lVar7 + 0x20) * 0x200 + *(int *)(lVar7 + 0x24))) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar7 + 0x28) + (ulonglong)((uint)param_6 >> 9) * 8) +
                           (ulonglong)(param_6 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      iVar13 = *(int *)(*(longlong *)
                         ((this->NormalCoord).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar27 >> 9) * 8) + (ulonglong)(uVar27 & 0x1ff) * 4);
      iVar14 = NumCornerEmanatingRefEdges(this,(FIndex3i *)&local_68._s_0,1);
      uVar27 = 0;
      if (param_6 < (this->RefVertDegree).ArrayNum) {
        uVar27 = (uint)~param_6 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      iVar13 = (int)(iVar14 + (uint)(iVar13 == -1) + iVar12) %
               *(int *)((this->RefVertDegree).AllocatorInstance.Data + (longlong)param_6 * 4);
    }
    lVar2 = *(longlong *)((this->RoundaboutOrder).Blocks.AllocatorInstance.Data + lVar2);
    *(int *)(lVar2 + lVar3) = iVar21;
    *(int *)(lVar2 + 4 + lVar3) = iVar12;
    *(undefined4 *)(lVar2 + 8 + lVar3) = uVar4;
    lVar2 = *(longlong *)((this->RoundaboutOrder).Blocks.AllocatorInstance.Data + local_58);
    *(int *)(lVar2 + local_50) = iVar13;
    *(int *)(lVar2 + 4 + local_50) = iVar26;
    *(undefined4 *)(lVar2 + 8 + local_50) = uVar5;
    iVar12 = 1;
  }
  return SUB41(iVar12,0);
}

// RebuildNormalCoordinates @ 14c758840

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::RebuildNormalCoordinates
          (FNormalCoordinates *this,FDynamicMesh3 *param_1)

{
  TDynamicVector<int,512> *this_00;
  TDynamicVector<UE::Geometry::FIndex3i,512> *this_01;
  TArray<int,TSizedDefaultAllocator<32>_> *this_02;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  int local_res18 [2];
  int *local_res20;
  <lambda_1> local_80;
  BaseValueIterator local_70;
  
  this_00 = &this->NormalCoord;
  TDynamicVector<int,512>::TruncateBlocks(this_00,1,No);
  this_00->CurBlock = 0;
  this_00->CurBlockUsed = 0;
  if ((this->NormalCoord).Blocks.ArrayNum == 0) {
    TDynamicVector<int,512>::AddAllocatedBlock(this_00);
  }
  this_01 = &this->RoundaboutOrder;
  TDynamicVector<UE::Geometry::FIndex3i,512>::TruncateBlocks(this_01,1,No);
  this_01->CurBlock = 0;
  this_01->CurBlockUsed = 0;
  if ((this->RoundaboutOrder).Blocks.ArrayNum == 0) {
    TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(this_01);
  }
  this_02 = &this->RefVertDegree;
  piVar2 = &(this->RefVertDegree).ArrayMax;
  (this->RefVertDegree).ArrayNum = 0;
  if ((this->RefVertDegree).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&this_02->AllocatorInstance,0,piVar2);
  }
  local_res20 = &(this->EdgeOrder).ArrayMax;
  piVar1 = &(this->EdgeOrder).ArrayNum;
  *piVar1 = 0;
  if ((this->EdgeOrder).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->EdgeOrder).AllocatorInstance,0,local_res20);
  }
  uVar13 = this_00->CurBlock;
  uVar11 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar16 = (param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->EdgeRefCounts).RefCounts.CurBlockUsed;
  uVar17 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar12 = (this->NormalCoord).CurBlockUsed;
  TDynamicVector<int,512>::Resize(this_00,uVar16);
  for (uVar12 = uVar13 * 0x200 + uVar12; uVar12 < uVar16; uVar12 = uVar12 + 1) {
    *(undefined4 *)
     (*(longlong *)
       ((this->NormalCoord).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8) +
     (ulonglong)(uVar12 & 0x1ff) * 4) = 0xffffffff;
  }
  iVar18 = (this->RefVertDegree).ArrayNum;
  if (iVar18 < (int)uVar17) {
    TArray<int,TSizedDefaultAllocator<32>_>::AddZeroed(this_02,uVar17 - iVar18);
  }
  else {
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    if ((int)uVar17 < iVar18) {
      uVar13 = iVar18 - uVar17;
      if (((int)(uVar13 | uVar17) < 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (uVar13 != 0) {
        pFVar6 = (this_02->AllocatorInstance).Data + (longlong)(int)uVar17 * 4;
        iVar18 = ((this->RefVertDegree).ArrayNum - uVar13) - uVar17;
        if (iVar18 != 0) {
          memmove(pFVar6,pFVar6 + (longlong)(int)uVar13 * 4,(longlong)iVar18 << 2);
        }
        piVar3 = &(this->RefVertDegree).ArrayNum;
        *piVar3 = *piVar3 - uVar13;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&this_02->AllocatorInstance,(this->RefVertDegree).ArrayNum,piVar2);
      }
    }
  }
  uVar13 = 0;
  uVar12 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((uVar12 == 0) ||
     (pFVar6 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     (ushort)(**(short **)pFVar6 - 1U) < 0xfffe)) {
LAB_14c758ac4:
    bVar19 = uVar13 == uVar12;
  }
  else {
    uVar13 = 1;
    bVar19 = uVar12 == 1;
    if (1 < (int)uVar12) {
      do {
        lVar10 = (ulonglong)(uVar13 & 0x1ff) * 2;
        if ((*(short *)(lVar10 + *(longlong *)(pFVar6 + (ulonglong)(uVar13 >> 9) * 8)) != 0) &&
           (*(short *)(lVar10 + *(longlong *)(pFVar6 + (ulonglong)(uVar13 >> 9) * 8)) != -1)) break;
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar12);
      goto LAB_14c758ac4;
    }
  }
  if (!bVar19) {
LAB_14c758ae0:
    do {
      iVar18 = 0;
      FSmallListSet::BaseValueIterator::BaseValueIterator
                (&local_70,&param_1->VertexEdgeLists,uVar13,false);
      while ((((local_70.ListSet != &param_1->VertexEdgeLists || (local_70.ListIndex != uVar13)) ||
              (local_70.iCur != -1)) || (local_70.cur_ptr != -1))) {
        iVar18 = iVar18 + 1;
        FSmallListSet::BaseValueIterator::GotoNext(&local_70);
      }
      uVar16 = 0;
      if ((int)uVar13 < (this->RefVertDegree).ArrayNum) {
        uVar16 = ~uVar13 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar10 = (longlong)(int)uVar13;
      uVar13 = uVar13 + 1;
      *(int *)((this_02->AllocatorInstance).Data + lVar10 * 4) = iVar18;
      if ((int)uVar13 < (int)uVar12) {
        do {
          lVar7 = (ulonglong)(uVar13 & 0x1ff) * 2;
          lVar10 = *(longlong *)
                    ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar13 >> 9) * 8);
          if ((*(short *)(lVar7 + lVar10) != 0) && (*(short *)(lVar7 + lVar10) != -1))
          goto LAB_14c758ae0;
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uVar12);
      }
    } while (uVar13 != uVar12);
  }
  uVar13 = this_01->CurBlock;
  lVar10 = (longlong)(int)uVar11;
  uVar12 = (this->RoundaboutOrder).CurBlockUsed;
  TDynamicVector<UE::Geometry::FIndex3i,512>::Resize(this_01,uVar11);
  for (uVar12 = uVar13 * 0x200 + uVar12; uVar12 < uVar11; uVar12 = uVar12 + 1) {
    lVar7 = *(longlong *)
             ((this->RoundaboutOrder).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8);
    *(undefined8 *)(lVar7 + (ulonglong)(uVar12 & 0x1ff) * 0xc) = 0xffffffffffffffff;
    *(undefined4 *)(lVar7 + 8 + (ulonglong)(uVar12 & 0x1ff) * 0xc) = 0xffffffff;
  }
  uVar15 = 0;
  uVar13 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar14 = uVar15;
  if ((uVar13 != 0) &&
     (pFVar6 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar14 = 0,
     0xfffd < (ushort)(**(short **)pFVar6 - 1U))) {
    uVar14 = 1;
    uVar12 = 1;
    if ((int)uVar13 < 2) goto joined_r0x00014c758caa;
    do {
      lVar9 = (ulonglong)((uint)uVar14 & 0x1ff) * 2;
      lVar7 = *(longlong *)(pFVar6 + (uVar14 >> 9) * 8);
      if ((*(short *)(lVar9 + lVar7) != 0) && (*(short *)(lVar9 + lVar7) != -1)) break;
      uVar12 = (uint)uVar14 + 1;
      uVar14 = (ulonglong)uVar12;
    } while ((int)uVar12 < (int)uVar13);
  }
  uVar12 = (uint)uVar14;
joined_r0x00014c758caa:
  do {
    if (uVar12 == uVar13) {
      iVar18 = (this->EdgeOrder).ArrayNum;
      if (iVar18 < (int)uVar11) {
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,uVar11 - iVar18,&(this->EdgeOrder).AllocatorInstance,piVar1,local_res20);
      }
      else {
        if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
        }
        if ((int)uVar11 < iVar18) {
          uVar13 = iVar18 - uVar11;
          if (((int)(uVar11 | uVar13) < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (uVar13 != 0) {
            pFVar6 = (this->EdgeOrder).AllocatorInstance.Data + lVar10 * 0xc;
            iVar18 = ((this->EdgeOrder).ArrayNum - uVar13) - uVar11;
            if (iVar18 != 0) {
              memmove(pFVar6,pFVar6 + (longlong)(int)uVar13 * 0xc,(longlong)iVar18 * 0xc);
            }
            iVar18 = (this->EdgeOrder).ArrayNum - uVar13;
            (this->EdgeOrder).ArrayNum = iVar18;
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,&(this->EdgeOrder).AllocatorInstance,iVar18,local_res20);
          }
        }
      }
      uVar14 = uVar15;
      if (0 < lVar10) {
        do {
          uVar12 = (uint)uVar15;
          lVar7 = *(longlong *)
                   ((this->RoundaboutOrder).Blocks.AllocatorInstance.Data + (uVar15 >> 9) * 8);
          uVar4 = *(undefined8 *)(lVar7 + (ulonglong)(uVar12 & 0x1ff) * 0xc);
          uVar5 = *(undefined4 *)(lVar7 + 8 + (ulonglong)(uVar12 & 0x1ff) * 0xc);
          uVar13 = 0;
          if ((int)uVar12 < (this->EdgeOrder).ArrayNum) {
            uVar13 = ~uVar12 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar6 = (this->EdgeOrder).AllocatorInstance.Data;
          uVar15 = (ulonglong)(uVar12 + 1);
          *(undefined8 *)(pFVar6 + uVar14) = uVar4;
          *(undefined4 *)(pFVar6 + uVar14 + 8) = uVar5;
          lVar10 = lVar10 + -1;
          uVar14 = uVar14 + 0xc;
        } while (lVar10 != 0);
      }
      return;
    }
    while( true ) {
      local_80.Order = local_res18;
      uVar12 = (uint)uVar14;
      local_res18[0] = 0;
      uVar16 = 0;
      if ((int)uVar12 < (int)this->_padding_) {
        uVar16 = ~uVar12 >> 0x1f;
      }
      local_80.__this = this;
      if ((uVar16 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      VisitVertexAdjacentElements<UE::Geometry::FDynamicMesh3,_UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::RebuildNormalCoordinates_::__l14::<lambda_1>_>
                (param_1,uVar12,*(int *)(this->_padding_ + (longlong)(int)uVar12 * 4),&local_80);
      uVar12 = uVar12 + 1;
      uVar14 = (ulonglong)uVar12;
      if ((int)uVar13 <= (int)uVar12) break;
      while( true ) {
        lVar9 = (ulonglong)((uint)uVar14 & 0x1ff) * 2;
        lVar7 = *(longlong *)
                 ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 (uVar14 >> 9) * 8);
        if ((*(short *)(lVar9 + lVar7) != 0) && (*(short *)(lVar9 + lVar7) != -1)) break;
        uVar12 = (uint)uVar14 + 1;
        uVar14 = (ulonglong)uVar12;
        if ((int)uVar13 <= (int)uVar12) goto joined_r0x00014c758caa;
      }
    }
  } while( true );
}

// Reset @ 14c75e690

void __thiscall
UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::Reset
          (FNormalCoordinates *this,
          TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_>
          *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FMeshConnection::Reset((FMeshConnection *)this,param_1->Ptr);
  plVar1 = &this->_padding_;
  if ((TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> *)plVar1
      != param_1) {
    puVar2 = (undefined8 *)*plVar1;
    *plVar1 = (longlong)param_1->Ptr;
    param_1->Ptr = (FDynamicMesh3 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  this->_padding_ = *plVar1;
  RebuildNormalCoordinates(this,(FDynamicMesh3 *)*plVar1);
  return;
}

// Reset @ 14c75e700

void __thiscall
UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::Reset
          (FNormalCoordinates *this,FDynamicMesh3 *param_1)

{
  FMeshConnection::Reset((FMeshConnection *)this,param_1);
  RebuildNormalCoordinates(this,param_1);
  return;
}

