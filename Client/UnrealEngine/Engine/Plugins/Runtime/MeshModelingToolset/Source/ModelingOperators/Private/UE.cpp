// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 6

// EquilateralEdgeLengthForArea<double> @ 14c942c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl UE::Geometry::TriangleUtil::EquilateralEdgeLengthForArea<double>(double param_1)

{
  return SQRT(param_1 * ___real_400279a74590331d);
}

// ReallocForCopy<0,TFixedAllocator<6>::ForElementType<int>_> @ 14c944320

void __cdecl
UE::Core::Private::ReallocForCopy<0,TFixedAllocator<6>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<int> *param_5,
          int param_6,int *param_7)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    if ((6 < (uint)param_3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewMax <= NumInlineElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                           ,0x52a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = 6;
  }
  if ((int)uVar3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((6 < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax >= 0 && NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x524,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_7 = uVar3;
  return;
}

// ReallocGrow<0,TFixedAllocator<6>::ForElementType<int>_> @ 14c9443d0

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<6>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (6 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 6;
  }
  return iVar5;
}

// ReallocShrink<0,TFixedAllocator<6>::ForElementType<int>_> @ 14c944450

void __cdecl
UE::Core::Private::ReallocShrink<0,TFixedAllocator<6>::ForElementType<int>_>
          (uint param_1,uint param_2,ForElementType<int> *param_3,int param_4,int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((6 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 6) {
    *param_5 = 6;
  }
  return;
}

// TileConnectedComponents @ 14c947e30

TileConnectedComponents * __thiscall
UE::Geometry::TileConnectedComponents::TileConnectedComponents
          (TileConnectedComponents *this,FMeshConnectedComponents *param_1,FVector2i *param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TileConnectedComponents *pTVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  piVar1 = &(this->TileTids).ArrayNum;
  (this->TileTids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TileTids).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->ConnectedComponents).Mesh = param_1->Mesh;
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
            (&(this->ConnectedComponents).Components,&param_1->Components);
  uVar9 = 0;
  iVar8 = (this->ConnectedComponents).Components.Array.ArrayNum;
  (this->Tile).field0_0x0 = param_2->field0_0x0;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < iVar8) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TileConnectedComponents *)(*pcVar3)();
        return pTVar7;
      }
      pTVar7 = *(TileConnectedComponents **)
                ((this->ConnectedComponents).Components.Array.AllocatorInstance.Data + lVar10);
      if ((this == pTVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TileConnectedComponents *)(*pcVar3)();
        return pTVar7;
      }
      iVar8 = (pTVar7->TileTids).ArrayNum;
      if (iVar8 != 0) {
        iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar8,(ForAnyElementType *)this,piVar1,piVar2);
        memcpy((this->TileTids).AllocatorInstance.Data + (longlong)iVar6 * 4,
               (pTVar7->TileTids).AllocatorInstance.Data,(longlong)iVar8 << 2);
      }
      iVar8 = (this->ConnectedComponents).Components.Array.ArrayNum;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar9 < iVar8);
  }
  return this;
}

// DistanceToLineSegment @ 14c97c070

float __cdecl
UE::Geometry::DistanceToLineSegment
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  undefined1 auVar13 [16];
  
  dVar11 = (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar15 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar3 = (param_3->field0_0x0)._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.Z;
  dVar7 = dVar3 - dVar11;
  dVar8 = dVar15 - dVar1;
  dVar14 = (param_1->field0_0x0)._s_0.X;
  dVar9 = dVar4 - dVar2;
  dVar12 = (param_1->field0_0x0)._s_0.Y;
  dVar16 = (param_1->field0_0x0)._s_0.Z;
  fVar17 = (float)((dVar12 - dVar1) * dVar8 + (dVar14 - dVar11) * dVar7 + (dVar16 - dVar2) * dVar9);
  if (0.0 < fVar17) {
    fVar10 = (float)(dVar7 * dVar7 + dVar8 * dVar8 + dVar9 * dVar9);
    if (fVar17 < fVar10) {
      dVar15 = (double)(fVar17 / fVar10);
      dVar12 = (dVar15 * dVar8 + dVar1) - dVar12;
      dVar14 = (dVar15 * dVar7 + dVar11) - dVar14;
      dVar16 = (dVar15 * dVar9 + dVar2) - dVar16;
      auVar13._0_8_ = dVar12 * dVar12 + dVar14 * dVar14 + dVar16 * dVar16;
      auVar13._8_8_ = 0;
      auVar13 = sqrtpd(auVar13,auVar13);
      dVar11 = auVar13._0_8_;
    }
    else {
      dVar15 = dVar15 - dVar12;
      dVar3 = dVar3 - dVar14;
      dVar4 = dVar4 - dVar16;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = dVar15 * dVar15 + dVar3 * dVar3 + dVar4 * dVar4;
      auVar13 = sqrtpd(ZEXT416((uint)fVar10),auVar6);
      dVar11 = auVar13._0_8_;
    }
  }
  else {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (dVar1 - dVar12) * (dVar1 - dVar12) + (dVar11 - dVar14) * (dVar11 - dVar14) +
                   (dVar2 - dVar16) * (dVar2 - dVar16);
    auVar13 = sqrtpd(ZEXT816(0),auVar5);
    dVar11 = auVar13._0_8_;
  }
  return (float)dVar11;
}

