// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 5

// WeldSplitColors @ 1435cd840

void __cdecl
UE::Geometry::FSplitAttributeWelder::WeldSplitColors
          (int param_1,TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_2,
          float param_3)

{
  <lambda_1> local_18;
  
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  local_18.Overlay = param_2;
  local_18.Threshold = param_3;
  ::`anonymous_namespace'::
  WeldSplits<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>,_UE::Geometry::FSplitAttributeWelder::WeldSplitColors_::__l2::<lambda_1>_>
            (*(FDynamicMesh3 **)param_2,param_1,param_2,&local_18);
  return;
}

// WeldSplitElements @ 1435cd880

void __thiscall
UE::Geometry::FSplitAttributeWelder::WeldSplitElements
          (FSplitAttributeWelder *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar5 = 0;
  uVar6 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
          (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar6 != 0) &&
     (pFVar1 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar1 - 1U))) {
    uVar5 = 1;
    uVar4 = 1;
    if ((int)uVar6 < 2) goto joined_r0x0001435cd913;
    do {
      lVar3 = (ulonglong)((uint)uVar5 & 0x1ff) * 2;
      lVar2 = *(longlong *)(pFVar1 + (uVar5 >> 9) * 8);
      if ((*(short *)(lVar3 + lVar2) != 0) && (*(short *)(lVar3 + lVar2) != -1)) break;
      uVar4 = (uint)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < (int)uVar6);
  }
  uVar4 = (uint)uVar5;
joined_r0x0001435cd913:
  do {
    if (uVar4 == uVar6) {
      return;
    }
    while( true ) {
      WeldSplitElements(this,param_1,(int)uVar5);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      if ((int)uVar6 <= (int)uVar4) break;
      pFVar1 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar2 = (uVar5 >> 9) * 8;
        lVar3 = (ulonglong)((uint)uVar5 & 0x1ff) * 2;
        if ((*(short *)(lVar3 + *(longlong *)(pFVar1 + lVar2)) != 0) &&
           (*(short *)(lVar3 + *(longlong *)(pFVar1 + lVar2)) != -1)) break;
        uVar4 = (uint)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        if ((int)uVar6 <= (int)uVar4) goto joined_r0x0001435cd913;
      }
    }
  } while( true );
}

// WeldSplitElements @ 1435cd9a0

void __thiscall
UE::Geometry::FSplitAttributeWelder::WeldSplitElements
          (FSplitAttributeWelder *this,FDynamicMesh3 *param_1,int param_2)

{
  float fVar1;
  FDynamicMeshAttributeSet *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  <lambda_1> local_68;
  <lambda_1> local_58;
  <lambda_1> local_48 [3];
  
  pFVar2 = (param_1->AttributeSet).Ptr;
  if ((((pFVar2 != (FDynamicMeshAttributeSet *)0x0) && (-1 < param_2)) &&
      (param_2 < (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    iVar7 = 0;
    iVar5 = (**(code **)(pFVar2->_padding_ + 0xa8))(pFVar2);
    if (0 < iVar5) {
      lVar8 = 0;
      do {
        if ((iVar7 < (pFVar2->UVLayers).Array.ArrayNum) && (-1 < iVar7)) {
          if ((iVar7 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_58.Overlay =
               *(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **)
                ((pFVar2->UVLayers).Array.AllocatorInstance.Data + lVar8 * 8);
        }
        else {
          local_58.Overlay = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0;
        }
        local_58.Threshold = this->UVDistSqrdThreshold;
        if (local_58.Threshold <= 0.0) {
          local_58.Threshold = 0.0;
        }
        ::`anonymous_namespace'::
        WeldSplits<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,_UE::Geometry::FSplitAttributeWelder::WeldSplitUVs_::__l2::<lambda_1>_>
                  (*(FDynamicMesh3 **)local_58.Overlay,param_2,local_58.Overlay,&local_58);
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar5);
    }
    iVar7 = 0;
    iVar5 = (**(code **)(pFVar2->_padding_ + 0xb8))(pFVar2);
    if (0 < iVar5) {
      lVar8 = 0;
      do {
        lVar6 = 8;
        if (iVar7 != 0) {
          lVar6 = 0xc;
        }
        fVar1 = *(float *)((longlong)&this->UVDistSqrdThreshold + lVar6);
        if ((iVar7 < (pFVar2->NormalLayers).Array.ArrayNum) && (-1 < iVar7)) {
          if ((iVar7 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_68.Overlay =
               *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                ((pFVar2->NormalLayers).Array.AllocatorInstance.Data + lVar8 * 8);
        }
        else {
          local_68.Overlay = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
        }
        local_68.bMergeZeroVectors = true;
        local_68.DotThreshold = fVar1;
        ::`anonymous_namespace'::
        WeldSplits<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,_UE::Geometry::FSplitAttributeWelder::WeldSplitUnitVectors_::__l2::<lambda_1>_>
                  (*(FDynamicMesh3 **)local_68.Overlay,param_2,local_68.Overlay,&local_68);
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar5);
    }
    local_48[0].Overlay = (pFVar2->ColorLayer).Ptr;
    if (local_48[0].Overlay != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0)
    {
      local_48[0].Threshold = this->ColorDistSqrdThreshold;
      if (local_48[0].Threshold <= 0.0) {
        local_48[0].Threshold = 0.0;
      }
      ::`anonymous_namespace'::
      WeldSplits<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>,_UE::Geometry::FSplitAttributeWelder::WeldSplitColors_::__l2::<lambda_1>_>
                (*(FDynamicMesh3 **)local_48[0].Overlay,param_2,local_48[0].Overlay,local_48);
    }
  }
  return;
}

// WeldSplitUVs @ 1435cdc10

void __cdecl
UE::Geometry::FSplitAttributeWelder::WeldSplitUVs
          (int param_1,TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          float param_3)

{
  <lambda_1> local_18;
  
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  local_18.Overlay = param_2;
  local_18.Threshold = param_3;
  ::`anonymous_namespace'::
  WeldSplits<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,_UE::Geometry::FSplitAttributeWelder::WeldSplitUVs_::__l2::<lambda_1>_>
            (*(FDynamicMesh3 **)param_2,param_1,param_2,&local_18);
  return;
}

// WeldSplitUnitVectors @ 1435cdc50

void __cdecl
UE::Geometry::FSplitAttributeWelder::WeldSplitUnitVectors
          (int param_1,TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_2,
          float param_3,bool param_4)

{
  <lambda_1> local_18;
  
  local_18.Overlay = param_2;
  local_18.DotThreshold = param_3;
  local_18.bMergeZeroVectors = param_4;
  ::`anonymous_namespace'::
  WeldSplits<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,_UE::Geometry::FSplitAttributeWelder::WeldSplitUnitVectors_::__l2::<lambda_1>_>
            (*(FDynamicMesh3 **)param_2,param_1,param_2,&local_18);
  return;
}

