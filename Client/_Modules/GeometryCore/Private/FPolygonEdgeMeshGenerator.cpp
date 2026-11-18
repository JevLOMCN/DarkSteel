// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 4

// FPolygonEdgeMeshGenerator @ 143567df0

FPolygonEdgeMeshGenerator * __thiscall
UE::Geometry::FPolygonEdgeMeshGenerator::FPolygonEdgeMeshGenerator
          (FPolygonEdgeMeshGenerator *this,
          TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          TArray<double,TSizedDefaultAllocator<32>_> *param_3,double param_4,
          TVector<double> *param_5,bool param_6,double param_7,bool param_8,int param_9)

{
  int *piVar1;
  TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar3;
  double dVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  FPolygonEdgeMeshGenerator *pFVar11;
  
  pTVar2 = &this->Polygon;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPolygonEdgeMeshGenerator_Geometry_UE__6B_;
  this->_padding_ = 0;
  piVar1 = &(this->Polygon).ArrayMax;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = param_1->ArrayNum;
  pFVar6 = (param_1->AllocatorInstance).Data;
  (this->Polygon).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x38);
  }
  pTVar3 = &this->OffsetScaleFactors;
  this->bClosed = param_2;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->OffsetScaleFactors).ArrayMax;
  iVar5 = param_3->ArrayNum;
  pFVar6 = (param_3->AllocatorInstance).Data;
  (this->OffsetScaleFactors).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 3);
  }
  this->Width = param_4;
  this->bScaleUVByAspectRatio = true;
  this->bSinglePolyGroup = false;
  dVar8 = (param_5->field0_0x0)._s_0.X;
  dVar9 = (param_5->field0_0x0)._s_0.Y;
  dVar4 = (param_5->field0_0x0)._s_0.Z;
  this->UVWidth = 1.0;
  this->UVHeight = 1.0;
  this->bRoundedCorners = param_6;
  this->bLimitCornerRadius = param_8;
  (this->Normal).field0_0x0._s_0.X = dVar8;
  (this->Normal).field0_0x0._s_0.Y = dVar9;
  this->NumArcVertices = param_9;
  iVar5 = (this->OffsetScaleFactors).ArrayNum;
  this->CornerRadius = param_7;
  (this->Normal).field0_0x0._s_0.Z = dVar4;
  if ((this->Polygon).ArrayNum != iVar5) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Polygon.Num() == OffsetScaleFactors.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\PolygonEdgeMeshGenerator.cpp"
                        ,0xca,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FPolygonEdgeMeshGenerator *)(*pcVar7)();
      return pFVar11;
    }
  }
  return this;
}

// ~FPolygonEdgeMeshGenerator @ 1435691f0

void __thiscall
UE::Geometry::FPolygonEdgeMeshGenerator::~FPolygonEdgeMeshGenerator(FPolygonEdgeMeshGenerator *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FPolygonEdgeMeshGenerator_Geometry_UE__6B_;
  pFVar1 = (this->OffsetScaleFactors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Polygon).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMeshShapeGenerator::~FMeshShapeGenerator((FMeshShapeGenerator *)this);
  return;
}

// CurvePath @ 14358b600

void __thiscall
UE::Geometry::FPolygonEdgeMeshGenerator::CurvePath
          (FPolygonEdgeMeshGenerator *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2,
          TArray<double,TSizedDefaultAllocator<32>_> *param_3,
          TArray<double,TSizedDefaultAllocator<32>_> *param_4,TFrame3<double> *param_5,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  TVector<double> *pTVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  ForAnyElementType FVar25;
  uint uVar26;
  ulonglong uVar27;
  TVector2<double>_u_0 *pTVar28;
  bool bVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 local_228 [8];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_220;
  uint local_210;
  uint local_20c;
  int local_208;
  TVector2<double>_u_0 local_200;
  uint local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  ulonglong local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  longlong local_1b8;
  TVector2<double>_u_0 local_1b0;
  TVector2<double>_u_0 local_1a0;
  TVector<double>_u_0 local_190;
  TVector<double> local_178;
  TVector<double> local_160;
  TVector<double> local_148;
  TVector<double> local_130;
  TVector<double> local_118;
  TVector<double> local_100;
  TVector<double> local_e8 [7];
  
  local_208 = param_1->ArrayNum;
  if (2 < local_208) {
    bVar29 = this->bClosed == false;
    uVar20 = (ulonglong)bVar29;
    iVar15 = local_208 + -1;
    local_210 = (uint)bVar29;
    iVar16 = local_208;
    if (this->bClosed == false) {
      pFVar4 = (param_1->AllocatorInstance).Data;
      pFVar5 = (param_6->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar4) && (pFVar4 < pFVar5 + (longlong)param_6->ArrayMax * 0x18)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar16 = param_6->ArrayNum;
      if (iVar16 == param_6->ArrayMax) {
        iVar16 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_6->AllocatorInstance,&param_6->ArrayMax);
      }
      param_6->ArrayNum = iVar16 + 1;
      uVar12 = *(undefined8 *)(pFVar4 + 8);
      pFVar6 = (param_6->AllocatorInstance).Data;
      pFVar5 = pFVar6 + (longlong)iVar16 * 0x18;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar4;
      *(undefined8 *)(pFVar5 + 8) = uVar12;
      *(undefined8 *)(pFVar6 + (longlong)iVar16 * 0x18 + 0x10) = *(undefined8 *)(pFVar4 + 0x10);
      iVar16 = iVar15;
    }
    dVar13 = __real_3f1a36e2e0000000;
    local_1b8 = (longlong)iVar16;
    local_1d8 = uVar20;
    if ((longlong)uVar20 < local_1b8) {
      local_20c = bVar29 + 1;
      local_1e8 = uVar20 * 0x18;
      local_1e0 = uVar20 * 8;
      uVar27 = uVar20;
      do {
        iVar16 = 0;
        uVar22 = local_20c - 2;
        uVar21 = local_20c;
        if (this->bClosed != false) {
          uVar22 = (int)(uVar22 + local_208) % local_208;
          uVar21 = (int)local_20c % local_208;
        }
        uVar23 = 0;
        if ((int)uVar22 < param_1->ArrayNum) {
          uVar23 = ~uVar22 >> 0x1f;
        }
        local_1d8 = uVar20;
        if ((uVar23 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar18 = (longlong)(int)uVar22;
        pFVar4 = (param_1->AllocatorInstance).Data;
        dVar9 = *(double *)(pFVar4 + lVar18 * 0x18) - (param_5->Origin).field0_0x0._s_0.X;
        dVar10 = *(double *)(pFVar4 + lVar18 * 0x18 + 8) - (param_5->Origin).field0_0x0._s_0.Y;
        dVar8 = *(double *)(pFVar4 + lVar18 * 0x18 + 0x10) - (param_5->Origin).field0_0x0._s_0.Z;
        pTVar19 = TFrame3<double>::GetAxis(param_5,&local_178,0);
        dVar1 = (pTVar19->field0_0x0)._s_0.Z;
        dVar2 = (pTVar19->field0_0x0)._s_0.X;
        dVar3 = (pTVar19->field0_0x0)._s_0.Y;
        pTVar19 = TFrame3<double>::GetAxis(param_5,&local_160,1);
        uVar26 = (uint)uVar27;
        uVar23 = ~uVar26 >> 0x1f;
        local_1a0._s_0.X = dVar9 * dVar2 + dVar10 * dVar3 + dVar8 * dVar1;
        local_1a0._s_0.Y =
             dVar10 * (pTVar19->field0_0x0)._s_0.Y + dVar9 * (pTVar19->field0_0x0)._s_0.X +
             dVar8 * (pTVar19->field0_0x0)._s_0.Z;
        uVar22 = 0;
        if ((int)uVar26 < param_1->ArrayNum) {
          uVar22 = uVar23;
        }
        if ((uVar22 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar4 = (param_1->AllocatorInstance).Data;
        dVar10 = *(double *)(pFVar4 + local_1e8) - (param_5->Origin).field0_0x0._s_0.X;
        dVar9 = *(double *)(pFVar4 + local_1e8 + 8) - (param_5->Origin).field0_0x0._s_0.Y;
        dVar8 = *(double *)(pFVar4 + local_1e8 + 0x10) - (param_5->Origin).field0_0x0._s_0.Z;
        pTVar19 = TFrame3<double>::GetAxis(param_5,&local_148,0);
        dVar1 = (pTVar19->field0_0x0)._s_0.Z;
        dVar2 = (pTVar19->field0_0x0)._s_0.X;
        dVar3 = (pTVar19->field0_0x0)._s_0.Y;
        pTVar19 = TFrame3<double>::GetAxis(param_5,&local_130,1);
        local_200._s_0.X = dVar10 * dVar2 + dVar9 * dVar3 + dVar8 * dVar1;
        uVar17 = 0;
        local_200._s_0.Y =
             dVar10 * (pTVar19->field0_0x0)._s_0.X + dVar9 * (pTVar19->field0_0x0)._s_0.Y +
             dVar8 * (pTVar19->field0_0x0)._s_0.Z;
        uVar22 = uVar17;
        if ((int)uVar21 < param_1->ArrayNum) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar18 = (longlong)(int)uVar21;
        pFVar4 = (param_1->AllocatorInstance).Data;
        dVar10 = *(double *)(pFVar4 + lVar18 * 0x18) - (param_5->Origin).field0_0x0._s_0.X;
        dVar11 = *(double *)(pFVar4 + lVar18 * 0x18 + 8) - (param_5->Origin).field0_0x0._s_0.Y;
        dVar9 = *(double *)(pFVar4 + lVar18 * 0x18 + 0x10) - (param_5->Origin).field0_0x0._s_0.Z;
        pTVar19 = TFrame3<double>::GetAxis(param_5,&local_118,0);
        dVar1 = (pTVar19->field0_0x0)._s_0.Z;
        dVar2 = (pTVar19->field0_0x0)._s_0.X;
        dVar3 = (pTVar19->field0_0x0)._s_0.Y;
        pTVar19 = TFrame3<double>::GetAxis(param_5,&local_100,1);
        dVar8 = this->CornerRadius;
        local_1b0._s_0.X = dVar10 * dVar2 + dVar11 * dVar3 + dVar9 * dVar1;
        local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_220.ArrayNum = 0;
        local_220.ArrayMax = 0;
        local_1b0._s_0.Y =
             dVar11 * (pTVar19->field0_0x0)._s_0.Y + dVar10 * (pTVar19->field0_0x0)._s_0.X +
             dVar9 * (pTVar19->field0_0x0)._s_0.Z;
        uVar22 = 0;
        if (this->bLimitCornerRadius == false) {
          uVar21 = uVar22;
          if ((int)uVar26 < param_2->ArrayNum) {
            uVar21 = uVar23;
          }
          if ((uVar21 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((param_2->AllocatorInstance).Data[uVar20] != (FScriptContainerElement)0x0) {
            dVar8 = dVar8 - this->Width;
          }
        }
        else {
          uVar21 = uVar17;
          if ((int)uVar26 < param_2->ArrayNum) {
            uVar21 = uVar23;
          }
          if ((uVar21 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((param_2->AllocatorInstance).Data[uVar20] == (FScriptContainerElement)0x0) {
            uVar21 = uVar22;
            if ((int)uVar26 < param_4->ArrayNum) {
              uVar21 = uVar23;
            }
            if ((uVar21 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            dVar8 = *(double *)((param_4->AllocatorInstance).Data + uVar20 * 8);
            uVar21 = uVar22;
            if ((int)uVar26 < param_3->ArrayNum) {
              uVar21 = uVar23;
            }
            if ((uVar21 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            dVar8 = dVar8 + this->Width;
            dVar1 = *(double *)((param_3->AllocatorInstance).Data + uVar20 * 8);
            if (dVar1 <= dVar8) {
              dVar8 = dVar1;
            }
            if (this->CornerRadius <= dVar8) {
              dVar8 = this->CornerRadius;
            }
          }
          else {
            uVar21 = uVar17;
            if ((int)uVar26 < param_4->ArrayNum) {
              uVar21 = uVar23;
            }
            if ((uVar21 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            dVar1 = *(double *)((param_4->AllocatorInstance).Data + local_1e0);
            uVar30 = SUB84(dVar1,0);
            uVar31 = (undefined4)((ulonglong)dVar1 >> 0x20);
            dVar2 = this->CornerRadius;
            if (dVar2 <= dVar1) {
              uVar30 = SUB84(dVar2,0);
              uVar31 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
            if ((int)uVar26 < param_3->ArrayNum) {
              uVar17 = uVar23;
            }
            if ((uVar17 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            dVar8 = (double)CONCAT44(uVar31,uVar30) - this->Width;
            dVar1 = *(double *)((param_3->AllocatorInstance).Data + uVar20 * 8);
            if (dVar1 <= dVar8) {
              dVar8 = dVar1;
            }
            if (dVar8 <= 0.0) {
              dVar8 = 0.0;
            }
          }
        }
        if (dVar8 <= dVar13) {
          uVar21 = uVar22;
          if ((int)uVar26 < param_4->ArrayNum) {
            uVar21 = uVar23;
          }
          if ((uVar21 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(double *)((param_4->AllocatorInstance).Data + uVar20 * 8) <= dVar13) {
            if ((int)uVar26 < param_3->ArrayNum) {
              uVar22 = uVar23;
            }
            if ((uVar22 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (*(double *)((param_3->AllocatorInstance).Data + uVar20 * 8) <= dVar13) {
              if (((local_220.AllocatorInstance.Data <= &local_200) &&
                  (&local_200 <
                   (TVector2<double>_u_0 *)
                   (local_220.AllocatorInstance.Data + (longlong)local_220.ArrayMax * 0x10))) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar29)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (local_220.ArrayNum == local_220.ArrayMax) {
                iVar16 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_220.AllocatorInstance,&local_220.ArrayMax);
                local_220.ArrayNum = iVar16;
              }
              lVar18 = (longlong)local_220.ArrayNum;
              local_220.ArrayNum = local_220.ArrayNum + 1;
              *(double *)(local_220.AllocatorInstance.Data + lVar18 * 0x10) = local_200._s_0.X;
              *(double *)(local_220.AllocatorInstance.Data + lVar18 * 0x10 + 8) = local_200._s_0.Y;
              goto LAB_14358bfb6;
            }
          }
          if (0 < this->NumArcVertices) {
            do {
              if (((local_220.AllocatorInstance.Data <= &local_200) &&
                  (&local_200 <
                   (TVector2<double>_u_0 *)
                   (local_220.AllocatorInstance.Data + (longlong)local_220.ArrayMax * 0x10))) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar29)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (local_220.ArrayNum == local_220.ArrayMax) {
                iVar15 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_220.AllocatorInstance,&local_220.ArrayMax);
                local_220.ArrayNum = iVar15;
              }
              lVar18 = (longlong)local_220.ArrayNum;
              iVar16 = iVar16 + 1;
              local_220.ArrayNum = local_220.ArrayNum + 1;
              *(double *)(local_220.AllocatorInstance.Data + lVar18 * 0x10) = local_200._s_0.X;
              *(double *)(local_220.AllocatorInstance.Data + lVar18 * 0x10 + 8) = local_200._s_0.Y;
            } while (iVar16 < this->NumArcVertices);
          }
        }
        else {
          PolygonEdgeMeshGeneratorLocal::RoundCorner
                    ((TVector2<double> *)&local_1a0._s_0,(TVector2<double> *)&local_200._s_0,
                     (TVector2<double> *)&local_1b0._s_0,dVar8,this->NumArcVertices,&local_220);
        }
LAB_14358bfb6:
        uVar20 = (ulonglong)local_220.ArrayNum;
        local_1f0 = local_220.ArrayNum;
        pTVar28 = (TVector2<double>_u_0 *)(local_220.AllocatorInstance.Data + uVar20 * 0x10);
        FVar25.Data = local_220.AllocatorInstance.Data;
        while( true ) {
          if (local_220.ArrayNum != (int)uVar20) {
            local_228[0] = 0;
            `TCheckedPointerIterator<UE::Math::TVector2<double>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_228);
          }
          uVar22 = local_210;
          piVar24 = &param_6->ArrayMax;
          if ((TVector2<double>_u_0 *)FVar25.Data == pTVar28) break;
          local_190._s_0.X = ((TVector2<double>_u_0_s_0 *)FVar25.Data)->X;
          local_190._s_0.Y = *(double *)((longlong)FVar25.Data + 8);
          local_190._s_0.Z = 0.0;
          pTVar19 = operator*<double>(local_e8,&param_5->Rotation,(TVector<double> *)&local_190._s_0
                                     );
          pFVar4 = (param_6->AllocatorInstance).Data;
          local_1d0 = (param_5->Origin).field0_0x0._s_0.X + (pTVar19->field0_0x0)._s_0.X;
          local_1c0 = (pTVar19->field0_0x0)._s_0.Z + (param_5->Origin).field0_0x0._s_0.Z;
          dStack_1c8 = (pTVar19->field0_0x0)._s_0.Y + (param_5->Origin).field0_0x0._s_0.Y;
          if (((pFVar4 <= (FScriptContainerElement *)&local_1d0) &&
              ((FScriptContainerElement *)&local_1d0 < pFVar4 + (longlong)*piVar24 * 0x18)) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar29)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar16 = param_6->ArrayNum;
          if (iVar16 == *piVar24) {
            iVar16 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&param_6->AllocatorInstance,piVar24);
          }
          FVar25.Data = FVar25.Data + 0x10;
          param_6->ArrayNum = iVar16 + 1;
          pFVar5 = (param_6->AllocatorInstance).Data;
          pFVar4 = pFVar5 + (longlong)iVar16 * 0x18;
          *(double *)pFVar4 = local_1d0;
          *(double *)(pFVar4 + 8) = dStack_1c8;
          *(double *)(pFVar5 + (longlong)iVar16 * 0x18 + 0x10) = local_1c0;
          uVar20 = (ulonglong)local_1f0;
        }
        if ((TVector2<double>_u_0 *)local_220.AllocatorInstance.Data != (TVector2<double>_u_0 *)0x0)
        {
          FMemory::Free(local_220.AllocatorInstance.Data);
        }
        local_210 = uVar22 + 1;
        uVar27 = (ulonglong)local_210;
        local_20c = local_20c + 1;
        local_1e8 = local_1e8 + 0x18;
        uVar20 = local_1d8 + 1;
        local_1e0 = local_1e0 + 8;
        local_1d8 = uVar20;
      } while ((longlong)uVar20 < local_1b8);
    }
    piVar24 = &param_6->ArrayMax;
    if (this->bClosed == false) {
      uVar21 = param_1->ArrayNum - 1;
      uVar22 = 0;
      if ((int)uVar21 < param_1->ArrayNum) {
        uVar22 = ~uVar21 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (param_6->AllocatorInstance).Data;
      pFVar4 = (param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 0x18 + -0x18;
      if (((pFVar5 <= pFVar4) && (pFVar4 < pFVar5 + (longlong)*piVar24 * 0x18)) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar16 = param_6->ArrayNum;
      if (iVar16 == *piVar24) {
        iVar16 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_6->AllocatorInstance,piVar24);
      }
      param_6->ArrayNum = iVar16 + 1;
      uVar12 = *(undefined8 *)(pFVar4 + 8);
      pFVar6 = (param_6->AllocatorInstance).Data;
      pFVar5 = pFVar6 + (longlong)iVar16 * 0x18;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar4;
      *(undefined8 *)(pFVar5 + 8) = uVar12;
      *(undefined8 *)(pFVar6 + (longlong)iVar16 * 0x18 + 0x10) = *(undefined8 *)(pFVar4 + 0x10);
    }
  }
  return;
}

// Generate @ 14359a1f0

FMeshShapeGenerator * __thiscall
UE::Geometry::FPolygonEdgeMeshGenerator::Generate(FPolygonEdgeMeshGenerator *this)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  float fVar23;
  ForAnyElementType FVar24;
  bool bVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  FMeshShapeGenerator *pFVar29;
  TVector<double> *pTVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  uint uVar34;
  float fVar35;
  uint uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  FScriptContainerElement *pFVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  float fVar44;
  bool bVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  undefined8 local_res8;
  int local_res18;
  uint local_res20;
  FScriptContainerElement local_3f8;
  FScriptContainerElement local_3f7;
  FScriptContainerElement local_3f6;
  FScriptContainerElement local_3f5;
  FScriptContainerElement local_3f4;
  FScriptContainerElement local_3f3;
  FScriptContainerElement local_3f2 [2];
  TArray<bool,TSizedDefaultAllocator<32>_> local_3f0;
  TArray<bool,TSizedDefaultAllocator<32>_> local_3e0;
  ForAnyElementType local_3d0;
  uint local_3c8;
  uint uStack_3c4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_3c0;
  float local_3b0;
  float fStack_3ac;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_3a8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_398;
  longlong local_388;
  ulonglong local_380;
  ulonglong local_378;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_370;
  longlong local_360;
  ulonglong local_358;
  TVector<double>_u_0 local_350;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  longlong local_318;
  TArray<double,TSizedDefaultAllocator<32>_> local_310;
  TArray<double,TSizedDefaultAllocator<32>_> local_300;
  float local_2f0;
  uint uStack_2ec;
  float local_2e0;
  uint uStack_2dc;
  float local_2d0;
  uint uStack_2cc;
  float local_2c0;
  uint uStack_2bc;
  FIndex3i_u_0 local_2b0;
  double local_2a0;
  double dStack_298;
  double local_290;
  double local_288;
  double dStack_280;
  double local_278;
  FIndex3i_u_0 local_270;
  TVector<double>_u_0 local_260;
  TVector<double>_u_0 local_248;
  TVector<double> local_230;
  TVector<double> local_218;
  TVector<double> local_200;
  TVector<double> local_1e8;
  TVector<double> local_1d0;
  TVector<double> local_1b8;
  TVector<double> local_1a0;
  TVector<double> local_188;
  TVector<double> local_170;
  TVector<double> local_158;
  TVector<double> local_140;
  TVector<double> local_128;
  TVector<double> local_110;
  TVector<double> local_f8 [7];
  
  bVar45 = -1 < CpuChannel->Enabled;
  if (bVar45) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId307,"PolygonEdgeMeshGenerator_Generate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\PolygonEdgeMeshGenerator.cpp"
               ,0x133);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId307);
  }
  iVar27 = (this->Polygon).ArrayNum;
  uVar33 = 0;
  uVar36 = 0;
  dVar46 = this->Width * __real_bfe0000000000000;
  local_3d0.Data = (FScriptContainerElement *)0x0;
  dVar15 = this->Width * __real_3fe0000000000000;
  local_3c8 = 0;
  uStack_3c4 = 0;
  local_3a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.ArrayNum = 0;
  local_3a8.ArrayMax = 0;
  local_398.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.ArrayNum = 0;
  local_398.ArrayMax = 0;
  uVar28 = 0;
  uVar38 = uVar33;
  uVar37 = uVar33;
  uVar39 = uVar33;
  uVar42 = uVar36;
  if (0 < iVar27) {
    do {
      uVar43 = (uint)uVar37;
      uVar41 = ~uVar43 >> 0x1f;
      uVar42 = 0;
      if ((int)uVar43 < (this->Polygon).ArrayNum) {
        uVar42 = uVar41;
      }
      if ((uVar42 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      pFVar40 = (this->Polygon).AllocatorInstance.Data + uVar38;
      uVar42 = uVar28;
      if ((int)uVar43 < (this->OffsetScaleFactors).ArrayNum) {
        uVar42 = uVar41;
      }
      if ((uVar42 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      local_248._s_0.X = 0.0;
      local_248._s_0.Z = 0.0;
      local_248._s_0.Y =
           dVar46 * *(double *)((this->OffsetScaleFactors).AllocatorInstance.Data + uVar39 * 8);
      pTVar30 = operator*<double>(&local_230,(TQuaternion<double> *)(pFVar40 + 0x18),
                                  (TVector<double> *)&local_248._s_0);
      local_290 = (pTVar30->field0_0x0)._s_0.Z + *(double *)(pFVar40 + 0x10);
      dStack_298 = (pTVar30->field0_0x0)._s_0.Y + *(double *)(pFVar40 + 8);
      local_2a0 = (pTVar30->field0_0x0)._s_0.X + *(double *)pFVar40;
      uVar42 = uVar28;
      if ((int)uVar43 < (this->OffsetScaleFactors).ArrayNum) {
        uVar42 = uVar41;
      }
      if ((uVar42 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      local_260._s_0.X = 0.0;
      local_260._s_0.Z = 0.0;
      local_260._s_0.Y =
           dVar15 * *(double *)((this->OffsetScaleFactors).AllocatorInstance.Data + uVar39 * 8);
      pTVar30 = operator*<double>(&local_218,(TQuaternion<double> *)(pFVar40 + 0x18),
                                  (TVector<double> *)&local_260._s_0);
      local_278 = (pTVar30->field0_0x0)._s_0.Z + *(double *)(pFVar40 + 0x10);
      dStack_280 = (pTVar30->field0_0x0)._s_0.Y + *(double *)(pFVar40 + 8);
      local_288 = (pTVar30->field0_0x0)._s_0.X + *(double *)pFVar40;
      if (((local_3d0.Data <= pFVar40) &&
          (pFVar40 < local_3d0.Data + (longlong)(int)uStack_3c4 * 0x18)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      if (local_3c8 == uStack_3c4) {
        local_3c8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_3d0,(int *)&uStack_3c4);
      }
      lVar32 = (longlong)(int)local_3c8;
      local_3c8 = local_3c8 + 1;
      dVar47 = *(double *)(pFVar40 + 8);
      *(double *)(local_3d0.Data + lVar32 * 0x18) = *(double *)pFVar40;
      *(double *)(local_3d0.Data + lVar32 * 0x18 + 8) = dVar47;
      *(double *)(local_3d0.Data + lVar32 * 0x18 + 0x10) = *(double *)(pFVar40 + 0x10);
      if (((local_3a8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2a0) &&
          ((FScriptContainerElement *)&local_2a0 <
           local_3a8.AllocatorInstance.Data + (longlong)local_3a8.ArrayMax * 0x18)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      iVar26 = local_3a8.ArrayNum;
      if (local_3a8.ArrayNum == local_3a8.ArrayMax) {
        iVar26 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_3a8.AllocatorInstance,&local_3a8.ArrayMax);
      }
      local_3a8.ArrayNum = iVar26 + 1;
      *(double *)(local_3a8.AllocatorInstance.Data + (longlong)iVar26 * 0x18) = local_2a0;
      *(double *)(local_3a8.AllocatorInstance.Data + (longlong)iVar26 * 0x18 + 8) = dStack_298;
      *(double *)(local_3a8.AllocatorInstance.Data + (longlong)iVar26 * 0x18 + 0x10) = local_290;
      if (((local_398.AllocatorInstance.Data <= (FScriptContainerElement *)&local_288) &&
          ((FScriptContainerElement *)&local_288 <
           local_398.AllocatorInstance.Data + (longlong)local_398.ArrayMax * 0x18)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      iVar26 = local_398.ArrayNum;
      if (local_398.ArrayNum == local_398.ArrayMax) {
        iVar26 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_398.AllocatorInstance,&local_398.ArrayMax);
      }
      local_398.ArrayNum = iVar26 + 1;
      uVar39 = uVar39 + 1;
      *(double *)(local_398.AllocatorInstance.Data + (longlong)iVar26 * 0x18) = local_288;
      *(double *)(local_398.AllocatorInstance.Data + (longlong)iVar26 * 0x18 + 8) = dStack_280;
      *(double *)(local_398.AllocatorInstance.Data + (longlong)iVar26 * 0x18 + 0x10) = local_278;
      uVar38 = uVar38 + 0x38;
      uVar37 = (ulonglong)(uVar43 + 1);
    } while ((longlong)uVar39 < (longlong)iVar27);
    uVar42 = local_3a8.ArrayNum;
  }
  local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c0.ArrayNum = 0;
  local_3c0.ArrayMax = 0;
  local_370.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_370.ArrayNum = 0;
  local_370.ArrayMax = 0;
  uVar43 = uVar28;
  if ((this->Polygon).ArrayNum < 1) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar25) {
      pcVar14 = (code *)swi(3);
      pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
      return pFVar29;
    }
    uVar42 = local_3a8.ArrayNum;
    uVar43 = local_3c0.ArrayMax;
  }
  FVar24.Data = local_3a8.AllocatorInstance.Data;
  pFVar40 = (this->Polygon).AllocatorInstance.Data;
  local_318 = 8;
  local_350._s_0.X = (double)*(undefined8 *)pFVar40;
  local_350._s_0.Y = (double)*(undefined8 *)(pFVar40 + 8);
  local_350._s_0.Z = (double)*(undefined8 *)(pFVar40 + 0x10);
  uStack_338 = *(undefined8 *)(pFVar40 + 0x18);
  local_330 = *(undefined8 *)(pFVar40 + 0x20);
  uStack_328 = *(undefined8 *)(pFVar40 + 0x28);
  local_320 = *(undefined8 *)(pFVar40 + 0x30);
  if ((this->bRoundedCorners == false) || (iVar27 < 3)) {
    local_3c0.ArrayNum = uVar42;
    if (((uVar42 != 0) || (uVar43 != 0)) &&
       (Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar42,uVar43,&local_3c0.AllocatorInstance,uVar42,&local_3c0.ArrayMax),
       uVar42 != 0)) {
      memcpy(local_3c0.AllocatorInstance.Data,FVar24.Data,(longlong)(int)uVar42 * 0x18);
    }
    FVar24.Data = local_398.AllocatorInstance.Data;
    iVar27 = local_398.ArrayNum;
    lVar32 = (longlong)local_398.ArrayNum;
    local_370.ArrayNum = local_398.ArrayNum;
    if (((local_398.ArrayNum != 0) || (local_370.ArrayMax != 0)) &&
       (Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_398.ArrayNum,local_370.ArrayMax,&local_370.AllocatorInstance,
                   local_398.ArrayNum,&local_370.ArrayMax), iVar27 != 0)) {
      memcpy(local_370.AllocatorInstance.Data,FVar24.Data,lVar32 * 0x18);
    }
  }
  else {
    local_300.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_300.ArrayNum = 0;
    local_300.ArrayMax = 0;
    local_310.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_310.ArrayNum = 0;
    local_310.ArrayMax = 0;
    PolygonEdgeMeshGeneratorLocal::ComputeMaxCornerRadii
              (&local_3a8,(TFrame3<double> *)&local_350._s_0,&local_300);
    PolygonEdgeMeshGeneratorLocal::ComputeMaxCornerRadii
              (&local_398,(TFrame3<double> *)&local_350._s_0,&local_310);
    local_3f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3f0.ArrayNum = 0;
    local_3f0.ArrayMax = 0;
    local_3e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3e0.ArrayNum = 0;
    local_3e0.ArrayMax = 0;
    if (this->bClosed == false) {
      iVar27 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,&local_3f0.AllocatorInstance,&local_3f0.ArrayMax);
      local_3f6 = (FScriptContainerElement)0x0;
      local_3f0.ArrayNum = iVar27 + 1;
      local_3f0.AllocatorInstance.Data[iVar27] = (FScriptContainerElement)0x0;
      if (((local_3e0.AllocatorInstance.Data <= &local_3f6) &&
          (&local_3f6 < local_3e0.AllocatorInstance.Data + local_3e0.ArrayMax)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      iVar27 = local_3e0.ArrayNum;
      if (local_3e0.ArrayNum == local_3e0.ArrayMax) {
        iVar27 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_3e0.AllocatorInstance,&local_3e0.ArrayMax);
      }
      uVar42 = 1;
      local_3e0.ArrayNum = iVar27 + 1;
      local_3e0.AllocatorInstance.Data[iVar27] = local_3f6;
      if (1 < (int)(local_3c8 - 1)) {
        lVar32 = 0x30;
        iVar27 = 2;
        do {
          uVar43 = uVar36;
          if (iVar27 + -2 < (int)local_3c8) {
            uVar43 = -uVar42 >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar14 = (code *)swi(3);
            pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
            return pFVar29;
          }
          dVar46 = *(double *)(local_3d0.Data + lVar32 + -0x30) - local_350._s_0.X;
          dVar47 = *(double *)(local_3d0.Data + lVar32 + -0x28) - local_350._s_0.Y;
          dVar15 = *(double *)(local_3d0.Data + lVar32 + -0x20) - local_350._s_0.Z;
          pTVar30 = TFrame3<double>::GetAxis((TFrame3<double> *)&local_350._s_0,local_f8,0);
          dVar48 = dVar47 * (pTVar30->field0_0x0)._s_0.Y + dVar46 * (pTVar30->field0_0x0)._s_0.X +
                   dVar15 * (pTVar30->field0_0x0)._s_0.Z;
          pTVar30 = TFrame3<double>::GetAxis((TFrame3<double> *)&local_350._s_0,&local_170,1);
          uVar43 = uVar36;
          if ((int)uVar42 < (int)local_3c8) {
            uVar43 = ~uVar42 >> 0x1f;
          }
          dVar15 = dVar47 * (pTVar30->field0_0x0)._s_0.Y + dVar46 * (pTVar30->field0_0x0)._s_0.X +
                   dVar15 * (pTVar30->field0_0x0)._s_0.Z;
          if ((uVar43 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar14 = (code *)swi(3);
            pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
            return pFVar29;
          }
          dVar18 = *(double *)(local_3d0.Data + lVar32 + -0x18) - local_350._s_0.X;
          dVar21 = *(double *)(local_3d0.Data + lVar32 + -0x10) - local_350._s_0.Y;
          dVar16 = *(double *)(local_3d0.Data + lVar32 + -8) - local_350._s_0.Z;
          pTVar30 = TFrame3<double>::GetAxis((TFrame3<double> *)&local_350._s_0,&local_158,0);
          dVar46 = (pTVar30->field0_0x0)._s_0.Y;
          dVar47 = (pTVar30->field0_0x0)._s_0.X;
          dVar49 = (pTVar30->field0_0x0)._s_0.Z;
          pTVar30 = TFrame3<double>::GetAxis((TFrame3<double> *)&local_350._s_0,&local_140,1);
          dVar8 = (pTVar30->field0_0x0)._s_0.Y;
          dVar9 = (pTVar30->field0_0x0)._s_0.X;
          dVar10 = (pTVar30->field0_0x0)._s_0.Z;
          uVar43 = uVar36;
          if ((int)(uVar42 + 1) < (int)local_3c8) {
            uVar43 = ~(uVar42 + 1) >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar14 = (code *)swi(3);
            pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
            return pFVar29;
          }
          dVar19 = *(double *)(local_3d0.Data + lVar32) - local_350._s_0.X;
          dVar20 = *(double *)(local_3d0.Data + lVar32 + 8) - local_350._s_0.Y;
          dVar17 = *(double *)(local_3d0.Data + lVar32 + 0x10) - local_350._s_0.Z;
          pTVar30 = TFrame3<double>::GetAxis((TFrame3<double> *)&local_350._s_0,&local_128,0);
          dVar11 = (pTVar30->field0_0x0)._s_0.Y;
          dVar12 = (pTVar30->field0_0x0)._s_0.X;
          dVar13 = (pTVar30->field0_0x0)._s_0.Z;
          pTVar30 = TFrame3<double>::GetAxis((TFrame3<double> *)&local_350._s_0,&local_110,1);
          local_3f5 = (FScriptContainerElement)
                      (((dVar20 * (pTVar30->field0_0x0)._s_0.Y +
                         dVar19 * (pTVar30->field0_0x0)._s_0.X +
                        dVar17 * (pTVar30->field0_0x0)._s_0.Z) - dVar15) *
                       ((dVar21 * dVar46 + dVar18 * dVar47 + dVar16 * dVar49) - dVar48) -
                       ((dVar20 * dVar11 + dVar19 * dVar12 + dVar17 * dVar13) - dVar48) *
                       ((dVar21 * dVar8 + dVar18 * dVar9 + dVar16 * dVar10) - dVar15) < 0.0);
          if (((local_3f0.AllocatorInstance.Data <= &local_3f5) &&
              (&local_3f5 < local_3f0.AllocatorInstance.Data + local_3f0.ArrayMax)) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar25)) {
            pcVar14 = (code *)swi(3);
            pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
            return pFVar29;
          }
          uVar43 = local_3f0.ArrayNum;
          if (local_3f0.ArrayNum == local_3f0.ArrayMax) {
            uVar43 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&local_3f0.AllocatorInstance,&local_3f0.ArrayMax);
          }
          iVar26 = uVar43 + 1;
          local_3f0.ArrayNum = iVar26;
          local_3f0.AllocatorInstance.Data[(int)uVar43] = local_3f5;
          uVar41 = uVar36;
          if ((int)uVar43 < iVar26) {
            uVar41 = ~uVar43 >> 0x1f;
          }
          if (uVar41 == 0) {
            bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar25) {
              pcVar14 = (code *)swi(3);
              pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
              return pFVar29;
            }
            iVar26 = local_3f0.ArrayNum;
          }
          local_3f4 = (FScriptContainerElement)
                      (local_3f0.AllocatorInstance.Data[(longlong)iVar26 + -1] ==
                      (FScriptContainerElement)0x0);
          if (((local_3e0.AllocatorInstance.Data <= &local_3f4) &&
              (&local_3f4 < local_3e0.AllocatorInstance.Data + local_3e0.ArrayMax)) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar25)) {
            pcVar14 = (code *)swi(3);
            pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
            return pFVar29;
          }
          iVar26 = local_3e0.ArrayNum;
          if (local_3e0.ArrayNum == local_3e0.ArrayMax) {
            iVar26 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&local_3e0.AllocatorInstance,&local_3e0.ArrayMax);
          }
          uVar42 = uVar42 + 1;
          local_3e0.ArrayNum = iVar26 + 1;
          lVar32 = lVar32 + 0x18;
          iVar27 = iVar27 + 1;
          local_3e0.AllocatorInstance.Data[iVar26] = local_3f4;
        } while ((int)uVar42 < (int)(local_3c8 - 1));
      }
      local_3f3 = (FScriptContainerElement)0x0;
      if (((local_3f0.AllocatorInstance.Data <= &local_3f3) &&
          (&local_3f3 < local_3f0.AllocatorInstance.Data + local_3f0.ArrayMax)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      iVar27 = local_3f0.ArrayNum;
      if (local_3f0.ArrayNum == local_3f0.ArrayMax) {
        iVar27 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_3f0.AllocatorInstance,&local_3f0.ArrayMax);
      }
      local_3f2[0] = (FScriptContainerElement)0x0;
      local_3f0.ArrayNum = iVar27 + 1;
      local_3f0.AllocatorInstance.Data[iVar27] = local_3f3;
      if (((local_3e0.AllocatorInstance.Data <= local_3f2) &&
          (local_3f2 < local_3e0.AllocatorInstance.Data + local_3e0.ArrayMax)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      iVar27 = local_3e0.ArrayNum;
      if (local_3e0.ArrayNum == local_3e0.ArrayMax) {
        iVar27 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_3e0.AllocatorInstance,&local_3e0.ArrayMax);
      }
      local_3e0.ArrayNum = iVar27 + 1;
      local_3e0.AllocatorInstance.Data[iVar27] = local_3f2[0];
    }
    else {
      uVar38 = uVar33;
      uVar37 = uVar33;
      if (0 < (int)local_3c8) {
        do {
          uVar43 = (uint)uVar37;
          uVar42 = local_3c8;
          if (uVar43 != 0) {
            uVar42 = uVar43;
          }
          uVar42 = uVar42 - 1;
          uVar34 = (int)(uVar43 + 1) % (int)local_3c8;
          lVar32 = (longlong)(int)uVar34;
          uVar41 = uVar36;
          if ((int)uVar42 < (int)local_3c8) {
            uVar41 = ~uVar42 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar14 = (code *)swi(3);
            pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
            return pFVar29;
          }
          lVar31 = (longlong)(int)uVar42;
          dVar46 = *(double *)(local_3d0.Data + lVar31 * 0x18) - local_350._s_0.X;
          dVar47 = *(double *)(local_3d0.Data + lVar31 * 0x18 + 8) - local_350._s_0.Y;
          dVar15 = *(double *)(local_3d0.Data + lVar31 * 0x18 + 0x10) - local_350._s_0.Z;
          pTVar30 = TFrame3<double>::GetAxis((TFrame3<double> *)&local_350._s_0,&local_188,0);
          dVar48 = dVar47 * (pTVar30->field0_0x0)._s_0.Y + dVar46 * (pTVar30->field0_0x0)._s_0.X +
                   dVar15 * (pTVar30->field0_0x0)._s_0.Z;
          pTVar30 = TFrame3<double>::GetAxis((TFrame3<double> *)&local_350._s_0,&local_200,1);
          uVar42 = uVar36;
          if ((int)uVar43 < (int)local_3c8) {
            uVar42 = ~uVar43 >> 0x1f;
          }
          dVar15 = dVar47 * (pTVar30->field0_0x0)._s_0.Y + dVar46 * (pTVar30->field0_0x0)._s_0.X +
                   dVar15 * (pTVar30->field0_0x0)._s_0.Z;
          if ((uVar42 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar14 = (code *)swi(3);
            pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
            return pFVar29;
          }
          dVar18 = *(double *)(local_3d0.Data + uVar38) - local_350._s_0.X;
          dVar21 = *(double *)(local_3d0.Data + uVar38 + 8) - local_350._s_0.Y;
          dVar16 = *(double *)(local_3d0.Data + uVar38 + 0x10) - local_350._s_0.Z;
          pTVar30 = TFrame3<double>::GetAxis((TFrame3<double> *)&local_350._s_0,&local_1e8,0);
          dVar46 = (pTVar30->field0_0x0)._s_0.Y;
          dVar47 = (pTVar30->field0_0x0)._s_0.X;
          dVar49 = (pTVar30->field0_0x0)._s_0.Z;
          pTVar30 = TFrame3<double>::GetAxis((TFrame3<double> *)&local_350._s_0,&local_1d0,1);
          dVar8 = (pTVar30->field0_0x0)._s_0.Y;
          dVar9 = (pTVar30->field0_0x0)._s_0.X;
          dVar10 = (pTVar30->field0_0x0)._s_0.Z;
          uVar42 = uVar36;
          if ((int)uVar34 < (int)local_3c8) {
            uVar42 = ~uVar34 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar14 = (code *)swi(3);
            pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
            return pFVar29;
          }
          dVar19 = *(double *)(local_3d0.Data + lVar32 * 0x18) - local_350._s_0.X;
          dVar20 = *(double *)(local_3d0.Data + lVar32 * 0x18 + 8) - local_350._s_0.Y;
          dVar17 = *(double *)(local_3d0.Data + lVar32 * 0x18 + 0x10) - local_350._s_0.Z;
          pTVar30 = TFrame3<double>::GetAxis((TFrame3<double> *)&local_350._s_0,&local_1b8,0);
          dVar11 = (pTVar30->field0_0x0)._s_0.Y;
          dVar12 = (pTVar30->field0_0x0)._s_0.X;
          dVar13 = (pTVar30->field0_0x0)._s_0.Z;
          pTVar30 = TFrame3<double>::GetAxis((TFrame3<double> *)&local_350._s_0,&local_1a0,1);
          local_3f8 = (FScriptContainerElement)
                      (((dVar20 * (pTVar30->field0_0x0)._s_0.Y +
                         dVar19 * (pTVar30->field0_0x0)._s_0.X +
                        dVar17 * (pTVar30->field0_0x0)._s_0.Z) - dVar15) *
                       ((dVar21 * dVar46 + dVar18 * dVar47 + dVar16 * dVar49) - dVar48) -
                       ((dVar20 * dVar11 + dVar19 * dVar12 + dVar17 * dVar13) - dVar48) *
                       ((dVar21 * dVar8 + dVar18 * dVar9 + dVar16 * dVar10) - dVar15) < 0.0);
          if (((local_3f0.AllocatorInstance.Data <= &local_3f8) &&
              (&local_3f8 < local_3f0.AllocatorInstance.Data + local_3f0.ArrayMax)) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar25)) {
            pcVar14 = (code *)swi(3);
            pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
            return pFVar29;
          }
          uVar42 = local_3f0.ArrayNum;
          if (local_3f0.ArrayNum == local_3f0.ArrayMax) {
            uVar42 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&local_3f0.AllocatorInstance,&local_3f0.ArrayMax);
          }
          iVar27 = uVar42 + 1;
          local_3f0.ArrayNum = iVar27;
          local_3f0.AllocatorInstance.Data[(int)uVar42] = local_3f8;
          uVar41 = uVar36;
          if ((int)uVar42 < iVar27) {
            uVar41 = ~uVar42 >> 0x1f;
          }
          if (uVar41 == 0) {
            bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar25) {
              pcVar14 = (code *)swi(3);
              pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
              return pFVar29;
            }
            iVar27 = local_3f0.ArrayNum;
          }
          local_3f7 = (FScriptContainerElement)
                      (local_3f0.AllocatorInstance.Data[(longlong)iVar27 + -1] ==
                      (FScriptContainerElement)0x0);
          if (((local_3e0.AllocatorInstance.Data <= &local_3f7) &&
              (&local_3f7 < local_3e0.AllocatorInstance.Data + local_3e0.ArrayMax)) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar25)) {
            pcVar14 = (code *)swi(3);
            pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
            return pFVar29;
          }
          iVar27 = local_3e0.ArrayNum;
          if (local_3e0.ArrayNum == local_3e0.ArrayMax) {
            iVar27 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&local_3e0.AllocatorInstance,&local_3e0.ArrayMax);
          }
          local_3e0.ArrayNum = iVar27 + 1;
          local_3e0.AllocatorInstance.Data[iVar27] = local_3f7;
          uVar38 = uVar38 + 0x18;
          uVar37 = (ulonglong)(uVar43 + 1);
        } while ((int)(uVar43 + 1) < (int)local_3c8);
      }
    }
    CurvePath(this,&local_3a8,&local_3f0,&local_300,&local_310,(TFrame3<double> *)&local_350._s_0,
              &local_3c0);
    CurvePath(this,&local_398,&local_3e0,&local_310,&local_300,(TFrame3<double> *)&local_350._s_0,
              &local_370);
    if (local_3e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e0.AllocatorInstance.Data);
    }
    if (local_3f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f0.AllocatorInstance.Data);
    }
    if (local_310.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.AllocatorInstance.Data);
    }
    if (local_300.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.AllocatorInstance.Data);
    }
  }
  if ((local_3c0.ArrayNum != local_370.ArrayNum) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewLeftSidePath.Num() == NewRightSidePath.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\PolygonEdgeMeshGenerator.cpp"
                          ,0x187,L""), bVar25)) {
    pcVar14 = (code *)swi(3);
    pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
    return pFVar29;
  }
  iVar26 = local_3c0.ArrayNum * 2;
  local_360 = CONCAT44(local_360._4_4_,iVar26);
  iVar27 = iVar26;
  if (this->bClosed == false) {
    iVar27 = iVar26 + -2;
  }
  FMeshShapeGenerator::SetBufferSizes((FMeshShapeGenerator *)this,iVar26,iVar27,iVar26 + 2,iVar26);
  plVar1 = &this->_padding_;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)plVar1,0,piVar2);
  }
  local_res20 = 0;
  uVar38 = uVar33;
  uVar37 = uVar33;
  if (0 < local_3c0.ArrayNum) {
    do {
      uVar43 = ~(uint)uVar37 >> 0x1f;
      uVar42 = uVar36;
      if ((int)(uint)uVar37 < local_3c0.ArrayNum) {
        uVar42 = uVar43;
      }
      if ((uVar42 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      pFVar40 = local_3c0.AllocatorInstance.Data + uVar38;
      if ((((FScriptContainerElement *)*plVar1 <= pFVar40) &&
          (pFVar40 < (FScriptContainerElement *)*plVar1 + (longlong)*piVar2 * 0x18)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      iVar27 = (int)this->_padding_;
      if (iVar27 == *piVar2) {
        iVar27 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)plVar1,piVar2);
      }
      *(int *)&this->_padding_ = iVar27 + 1;
      uVar22 = *(undefined8 *)(pFVar40 + 8);
      lVar32 = *plVar1;
      puVar3 = (undefined8 *)(lVar32 + (longlong)iVar27 * 0x18);
      *puVar3 = *(undefined8 *)pFVar40;
      puVar3[1] = uVar22;
      *(undefined8 *)(lVar32 + (longlong)iVar27 * 0x18 + 0x10) = *(undefined8 *)(pFVar40 + 0x10);
      uVar42 = uVar36;
      if ((int)local_res20 < local_370.ArrayNum) {
        uVar42 = uVar43;
      }
      if ((uVar42 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      pFVar40 = local_370.AllocatorInstance.Data + uVar38;
      if ((((FScriptContainerElement *)*plVar1 <= pFVar40) &&
          (pFVar40 < (FScriptContainerElement *)*plVar1 + (longlong)*piVar2 * 0x18)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      iVar27 = (int)this->_padding_;
      if (iVar27 == *piVar2) {
        iVar27 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)plVar1,piVar2);
      }
      *(int *)&this->_padding_ = iVar27 + 1;
      local_res20 = local_res20 + 1;
      uVar22 = *(undefined8 *)(pFVar40 + 8);
      lVar32 = *plVar1;
      puVar3 = (undefined8 *)(lVar32 + (longlong)iVar27 * 0x18);
      *puVar3 = *(undefined8 *)pFVar40;
      puVar3[1] = uVar22;
      *(undefined8 *)(lVar32 + (longlong)iVar27 * 0x18 + 0x10) = *(undefined8 *)(pFVar40 + 0x10);
      uVar38 = uVar38 + 0x18;
      uVar37 = (ulonglong)local_res20;
    } while ((int)local_res20 < local_3c0.ArrayNum);
  }
  local_res20 = 0;
  iVar27 = local_3c0.ArrayNum;
  if (this->bClosed == false) {
    iVar27 = local_3c0.ArrayNum + -1;
  }
  local_358 = (ulonglong)iVar27;
  local_res18 = local_3c0.ArrayNum;
  if (0 < iVar27) {
    iVar27 = (int)local_360;
    uVar42 = 1;
    local_378 = 0;
    local_380 = local_380 & 0xffffffff00000000;
    uVar38 = uVar33;
    uVar37 = uVar33;
    do {
      fVar52 = (float)(uVar42 - 1);
      fVar44 = (float)((int)(uVar42 + 1) % iVar27);
      fVar35 = (float)((int)(uVar42 + 2) % iVar27);
      local_2f0 = fVar52;
      local_388._0_4_ = fVar44;
      if ((char)this->_padding_ != '\0') {
        local_2f0 = fVar44;
        local_388._0_4_ = (float)uVar38;
      }
      uVar41 = ~(uVar42 - 1) >> 0x1f;
      uVar43 = uVar36;
      if ((int)fVar52 < (int)this->_padding_) {
        uVar43 = uVar41;
      }
      uStack_2ec = uVar42;
      if ((uVar43 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      lVar32 = this->_padding_;
      *(ulonglong *)(lVar32 + uVar37) = CONCAT44(uStack_2ec,local_2f0);
      *(float *)(lVar32 + 8 + uVar37) = (float)local_388;
      local_3b0 = fVar44;
      fVar23 = fVar52;
      if ((char)this->_padding_ != '\0') {
        local_3b0 = fVar52;
        fVar23 = fVar44;
      }
      local_388 = CONCAT44(local_388._4_4_,fVar23);
      uVar43 = uVar36;
      if ((int)fVar52 < (int)this->_padding_) {
        uVar43 = uVar41;
      }
      if ((uVar43 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      local_2e0 = (float)(uVar42 - 1);
      lVar32 = this->_padding_;
      *(float *)(uVar37 + lVar32) = (float)local_388;
      *(uint *)(uVar37 + 4 + lVar32) = uVar42;
      *(float *)(uVar37 + 8 + lVar32) = local_3b0;
      local_3b0 = fVar44;
      if ((char)this->_padding_ != '\0') {
        local_3b0 = local_2e0;
        local_2e0 = fVar44;
      }
      uVar43 = uVar36;
      if ((int)(uVar42 - 1) < (int)this->_padding_) {
        uVar43 = uVar41;
      }
      uStack_2dc = uVar42;
      if ((uVar43 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      lVar32 = this->_padding_;
      *(ulonglong *)(lVar32 + uVar37) = CONCAT44(uStack_2dc,local_2e0);
      *(float *)(lVar32 + 8 + uVar37) = local_3b0;
      uVar43 = uVar36;
      if ((int)(uVar42 - 1) < (int)this->_padding_) {
        uVar43 = uVar41;
      }
      if ((uVar43 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      *(uint *)(local_378 + this->_padding_) = local_res20;
      local_2d0 = fVar44;
      fVar52 = fVar35;
      if ((char)this->_padding_ != '\0') {
        local_2d0 = fVar35;
        fVar52 = fVar44;
      }
      uVar41 = ~uVar42 >> 0x1f;
      uVar43 = uVar36;
      if ((int)uVar42 < (int)this->_padding_) {
        uVar43 = uVar41;
      }
      uStack_2cc = uVar42;
      if ((uVar43 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      lVar32 = this->_padding_;
      *(ulonglong *)(lVar32 + 0xc + uVar37) = CONCAT44(uStack_2cc,local_2d0);
      *(float *)(lVar32 + 0x14 + uVar37) = fVar52;
      local_3b0 = fVar35;
      fVar52 = fVar44;
      if ((char)this->_padding_ != '\0') {
        local_3b0 = fVar44;
        fVar52 = fVar35;
      }
      uVar43 = uVar36;
      if ((int)uVar42 < (int)this->_padding_) {
        uVar43 = uVar41;
      }
      if ((uVar43 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      lVar32 = this->_padding_;
      *(float *)(uVar37 + 0xc + lVar32) = fVar52;
      *(uint *)(uVar37 + 0x10 + lVar32) = uVar42;
      *(float *)(uVar37 + 0x14 + lVar32) = local_3b0;
      fVar52 = fVar35;
      local_2c0 = fVar44;
      if ((char)this->_padding_ != '\0') {
        fVar52 = fVar44;
        local_2c0 = fVar35;
      }
      uVar43 = uVar36;
      if ((int)uVar42 < (int)this->_padding_) {
        uVar43 = uVar41;
      }
      uStack_2bc = uVar42;
      if ((uVar43 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      lVar32 = this->_padding_;
      *(ulonglong *)(lVar32 + 0xc + uVar37) = CONCAT44(uStack_2bc,local_2c0);
      *(float *)(lVar32 + 0x14 + uVar37) = fVar52;
      uVar43 = uVar36;
      if ((int)uVar42 < (int)this->_padding_) {
        uVar43 = uVar41;
      }
      if ((uVar43 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      *(uint *)(this->_padding_ + 4 + local_378) = local_res20;
      if (this->bSinglePolyGroup == false) {
        local_res20 = local_res20 + 1;
      }
      local_378 = local_378 + 8;
      uVar42 = uVar42 + 2;
      uVar37 = uVar37 + 0x18;
      local_358 = local_358 - 1;
      uVar38 = (ulonglong)((int)local_380 + 2U);
      local_380 = CONCAT44(local_380._4_4_,(int)local_380 + 2U);
    } while (local_358 != 0);
    local_res18 = local_3c0.ArrayNum;
    local_358 = 0;
  }
  iVar27 = (int)local_360;
  if (0 < (int)local_360) {
    local_res8 = 0;
    uVar38 = uVar33;
    uVar37 = uVar33;
    do {
      uVar43 = (uint)uVar37;
      dVar15 = (this->Normal).field0_0x0._s_0.X;
      dVar46 = (this->Normal).field0_0x0._s_0.Y;
      dVar47 = (this->Normal).field0_0x0._s_0.Z;
      uVar42 = uVar36;
      if ((int)uVar43 < (int)this->_padding_) {
        uVar42 = ~uVar43 >> 0x1f;
      }
      if ((uVar42 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      lVar32 = this->_padding_;
      *(float *)(uVar38 + lVar32) = (float)dVar15;
      *(float *)(uVar38 + 4 + lVar32) = (float)dVar46;
      *(float *)(uVar38 + 8 + lVar32) = (float)dVar47;
      uVar42 = uVar36;
      if ((int)uVar43 < (int)this->_padding_) {
        uVar42 = ~uVar43 >> 0x1f;
      }
      if ((uVar42 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      uVar38 = uVar38 + 0xc;
      *(uint *)(local_res8 + this->_padding_) = uVar43;
      local_res8 = local_res8 + 4;
      uVar37 = (ulonglong)(uVar43 + 1);
    } while ((int)(uVar43 + 1) < iVar27);
    local_res18 = local_3c0.ArrayNum;
  }
  dVar15 = __real_3fb999999999999a;
  fVar52 = __real_3f800000;
  fVar35 = __real_3f800000;
  if (this->bScaleUVByAspectRatio != false) {
    dVar46 = this->UVHeight;
    dVar47 = this->UVWidth;
    if (dVar47 != dVar46) {
      if (dVar47 <= dVar46) {
        fVar52 = (float)(dVar47 / dVar46);
      }
      else {
        fVar35 = (float)(dVar46 / dVar47);
      }
    }
  }
  dVar46 = PolygonEdgeMeshGeneratorLocal::ArcLength(&local_3c0,__real_3fb999999999999a);
  dVar46 = (dVar46 * dVar15) / (double)local_res18;
  dVar47 = PolygonEdgeMeshGeneratorLocal::ArcLength(&local_3c0,dVar46);
  local_360 = (longlong)local_res18;
  local_res20 = 0;
  if (0 < local_res18) {
    local_378 = 0;
    dVar47 = __real_3ff0000000000000 / dVar47;
    local_358 = local_358 & 0xffffffff;
    local_388 = 4;
    local_res8._0_4_ = 1;
    uVar38 = uVar33;
    uVar37 = uVar33;
    fStack_3ac = fVar35;
    do {
      if ((int)uVar33 == local_3c0.ArrayNum) {
        dVar48 = PolygonEdgeMeshGeneratorLocal::ArcLength(&local_3c0,dVar15);
      }
      else {
        uVar42 = 1;
        dVar48 = 0.0;
        if (local_378 != 0) {
          lVar32 = 0x18;
          local_380 = local_378;
          iVar27 = local_3c0.ArrayNum;
          dVar48 = 0.0;
          do {
            uVar43 = uVar36;
            if ((int)(uVar42 - 1) < iVar27) {
              uVar43 = -uVar42 >> 0x1f;
            }
            if (uVar43 == 0) {
              bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar25) {
                pcVar14 = (code *)swi(3);
                pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
                return pFVar29;
              }
              iVar27 = local_3c0.ArrayNum;
            }
            FVar24.Data = local_3c0.AllocatorInstance.Data;
            uVar43 = uVar28;
            if ((int)uVar42 < iVar27) {
              uVar43 = ~uVar42 >> 0x1f;
            }
            if (uVar43 == 0) {
              bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar25) {
                pcVar14 = (code *)swi(3);
                pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
                return pFVar29;
              }
              iVar27 = local_3c0.ArrayNum;
            }
            uVar42 = uVar42 + 1;
            lVar31 = lVar32 + -0x10;
            lVar4 = lVar32 + -8;
            lVar5 = lVar32 + -0x18;
            lVar6 = lVar32 + 8;
            lVar7 = lVar32 + 0x10;
            pFVar40 = local_3c0.AllocatorInstance.Data + lVar32;
            lVar32 = lVar32 + 0x18;
            local_380 = local_380 - 1;
            auVar50._0_8_ =
                 (*(double *)(FVar24.Data + lVar4) -
                 *(double *)(local_3c0.AllocatorInstance.Data + lVar7)) *
                 (*(double *)(FVar24.Data + lVar4) -
                 *(double *)(local_3c0.AllocatorInstance.Data + lVar7));
            auVar50._8_8_ = 0;
            auVar51._8_8_ = 0;
            auVar51._0_8_ =
                 (*(double *)(FVar24.Data + lVar31) -
                 *(double *)(local_3c0.AllocatorInstance.Data + lVar6)) *
                 (*(double *)(FVar24.Data + lVar31) -
                 *(double *)(local_3c0.AllocatorInstance.Data + lVar6)) +
                 (*(double *)(FVar24.Data + lVar5) - *(double *)pFVar40) *
                 (*(double *)(FVar24.Data + lVar5) - *(double *)pFVar40) + auVar50._0_8_;
            auVar51 = sqrtpd(auVar50,auVar51);
            dVar49 = auVar51._0_8_;
            if (auVar51._0_8_ <= dVar46) {
              dVar49 = dVar46;
            }
            dVar48 = dVar48 + dVar49;
          } while (local_380 != 0);
        }
      }
      uVar43 = (uint)uVar37;
      uVar42 = uVar28;
      if ((int)uVar43 < (int)this->_padding_) {
        uVar42 = ~uVar43 >> 0x1f;
      }
      fVar44 = (float)(dVar48 * dVar47) * fVar52;
      local_358 = CONCAT44(local_358._4_4_,fVar44);
      if ((uVar42 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      uVar41 = ~(uVar43 + 1) >> 0x1f;
      *(ulonglong *)(uVar38 + this->_padding_) = local_358;
      uVar42 = uVar36;
      if ((int)local_res8 < (int)this->_padding_) {
        uVar42 = uVar41;
      }
      local_3b0 = fVar44;
      if ((uVar42 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      *(ulonglong *)(local_318 + this->_padding_) = CONCAT44(fStack_3ac,local_3b0);
      uVar42 = uVar36;
      if ((int)uVar43 < (int)this->_padding_) {
        uVar42 = ~uVar43 >> 0x1f;
      }
      if ((uVar42 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      *(uint *)(this->_padding_ + local_378 * 8) = uVar43;
      uVar42 = uVar36;
      if ((int)(uVar43 + 1) < (int)this->_padding_) {
        uVar42 = uVar41;
      }
      if ((uVar42 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
        return pFVar29;
      }
      uVar37 = (ulonglong)(uVar43 + 2);
      local_318 = local_318 + 0x10;
      uVar38 = uVar38 + 0x10;
      local_res8._0_4_ = (int)local_res8 + 2;
      *(uint *)(local_388 + this->_padding_) = uVar43 + 1;
      local_388 = local_388 + 8;
      local_res20 = local_res20 + 1;
      uVar33 = (ulonglong)local_res20;
      local_378 = local_378 + 1;
    } while ((longlong)local_378 < local_360);
  }
  if (this->bClosed != false) {
    uVar42 = local_res18 * 2;
    iVar27 = uVar42 - 1;
    if (((int)this->_padding_ <= (int)(uVar42 + 1)) &&
       (bVar25 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_5945336169142156812>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\PolygonEdgeMeshGenerator.cpp"
                            ,500,"NewVertexD < UVs.Num()"), bVar25)) {
      pcVar14 = (code *)swi(3);
      pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
      return pFVar29;
    }
    local_2b0._s_0.A = uVar42 - 2;
    local_2b0._s_0.B = iVar27;
    local_2b0._s_0.C = uVar42;
    FMeshShapeGenerator::SetTriangleUVs
              ((FMeshShapeGenerator *)this,uVar42 - 2,(FIndex3i *)&local_2b0._s_0);
    local_270._s_0.A = uVar42;
    local_270._s_0.B = iVar27;
    local_270._s_0.C = uVar42 + 1;
    FMeshShapeGenerator::SetTriangleUVs
              ((FMeshShapeGenerator *)this,iVar27,(FIndex3i *)&local_270._s_0);
    local_res8 = (ulonglong)(uint)fVar52;
    uVar38 = local_res8;
    uVar28 = uVar36;
    if ((int)uVar42 < (int)this->_padding_) {
      uVar28 = ~uVar42 >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar14 = (code *)swi(3);
      pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
      return pFVar29;
    }
    uVar43 = uVar42 + 1;
    local_res8 = CONCAT44(fVar35,fVar52);
    *(ulonglong *)(this->_padding_ + (longlong)(int)uVar42 * 8) = uVar38;
    uVar28 = uVar36;
    if ((int)uVar43 < (int)this->_padding_) {
      uVar28 = ~uVar43 >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar14 = (code *)swi(3);
      pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
      return pFVar29;
    }
    *(ulonglong *)(this->_padding_ + (longlong)(int)uVar43 * 8) = local_res8;
    uVar28 = uVar36;
    if ((int)uVar42 < (int)this->_padding_) {
      uVar28 = ~uVar42 >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar14 = (code *)swi(3);
      pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
      return pFVar29;
    }
    *(undefined4 *)(this->_padding_ + (longlong)(int)uVar42 * 4) = 0;
    if ((int)uVar43 < (int)this->_padding_) {
      uVar36 = ~uVar43 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar14 = (code *)swi(3);
      pFVar29 = (FMeshShapeGenerator *)(*pcVar14)();
      return pFVar29;
    }
    *(undefined4 *)(this->_padding_ + (longlong)(int)uVar43 * 4) = 1;
  }
  if (local_370.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.AllocatorInstance.Data);
  }
  if (local_3c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c0.AllocatorInstance.Data);
  }
  if (local_398.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.AllocatorInstance.Data);
  }
  if (local_3a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.AllocatorInstance.Data);
  }
  if (local_3d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d0.Data);
  }
  if (bVar45) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FMeshShapeGenerator *)this;
}

