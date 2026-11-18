// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// FRoundedRectangleMeshGenerator @ 143568370

FRoundedRectangleMeshGenerator * __thiscall
UE::Geometry::FRoundedRectangleMeshGenerator::FRoundedRectangleMeshGenerator
          (FRoundedRectangleMeshGenerator *this)

{
  undefined8 uVar1;
  
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
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRectangleMeshGenerator_Geometry_UE__6B_;
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0xffffffffffffffff;
  *(undefined1 *)&this->_padding_ = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->_padding_ = 0x4024000000000000;
  this->_padding_ = 0x4024000000000000;
  this->_padding_ = uVar1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 8;
  *(undefined4 *)&this->_padding_ = 8;
  this->_padding_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
  *(float *)&this->_padding_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0x100000000;
  this->_padding_ = (longlong)&___7FRoundedRectangleMeshGenerator_Geometry_UE__6B_;
  this->Radius = 1.0;
  this->AngleSamples = 0x10;
  this->SharpCorners = None;
  return this;
}

// Generate @ 14359e860

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FMeshShapeGenerator * __thiscall
UE::Geometry::FRoundedRectangleMeshGenerator::Generate(FRoundedRectangleMeshGenerator *this)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FMeshShapeGenerator *pFVar9;
  ERoundedRectangleCorner EVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  longlong *plVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 extraout_XMM0 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  uint local_res8;
  int local_res10;
  uint local_res18;
  int local_2d8;
  ulonglong local_2d0;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  TArray<double,TSizedDefaultAllocator<32>_> local_2a8;
  TArray<double,TSizedDefaultAllocator<32>_> local_298;
  int local_288;
  int local_284;
  int local_280;
  longlong local_278;
  int local_270;
  longlong local_268;
  undefined8 local_260;
  undefined8 local_250;
  undefined8 local_240;
  undefined8 local_230;
  undefined8 local_220;
  int local_210;
  int local_20c;
  uint local_208;
  uint uStack_204;
  uint local_1f8;
  uint uStack_1f4;
  uint local_1e8;
  uint uStack_1e4;
  uint local_1d8;
  uint uStack_1d4;
  uint local_1c8;
  uint uStack_1c4;
  uint local_1b8;
  uint uStack_1b4;
  longlong local_1a8;
  undefined8 local_1a0;
  double local_190;
  float local_188;
  float fStack_184;
  longlong local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  
  iVar19 = *(int *)((longlong)&this->_padding_ + 4);
  if (((iVar19 < 0) || (2 < iVar19)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IndicesMap.A >= 0 && IndicesMap.A <= 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\RectangleMeshGenerator.cpp"
                         ,0x7e,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
    return pFVar9;
  }
  iVar19 = (int)this->_padding_;
  if (((iVar19 < 0) || (2 < iVar19)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IndicesMap.B >= 0 && IndicesMap.B <= 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\RectangleMeshGenerator.cpp"
                         ,0x7f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
    return pFVar9;
  }
  iVar19 = (int)this->_padding_;
  EVar10 = this->SharpCorners;
  iVar18 = 2;
  if (1 < iVar19) {
    iVar18 = iVar19;
  }
  iVar19 = *(int *)((longlong)&this->_padding_ + 4);
  iVar17 = 2;
  if (1 < iVar19) {
    iVar17 = iVar19;
  }
  local_270 = 1;
  if (0 < this->AngleSamples) {
    local_270 = this->AngleSamples;
  }
  iVar19 = iVar18 + 2;
  iVar26 = iVar17 + 2;
  uVar16 = 0;
  uVar13 = 0;
  uVar23 = uVar16;
  for (; EVar10 != None; EVar10 = EVar10 & EVar10 - BottomLeft) {
    uVar13 = (int)uVar23 + 1;
    uVar23 = (ulonglong)uVar13;
  }
  iVar12 = (4 - uVar13) * (local_270 + -1);
  local_288 = iVar18 + 1;
  iVar14 = iVar26 * iVar19 + iVar12;
  local_280 = iVar17;
  local_210 = iVar17;
  local_20c = iVar18;
  FMeshShapeGenerator::SetBufferSizes
            ((FMeshShapeGenerator *)this,iVar14,(iVar26 * 2 + -2) * local_288 + iVar12,iVar14,iVar14
            );
  if (0 < iVar14) {
    lVar30 = 0;
    uVar23 = uVar16;
    do {
      uVar27 = (uint)uVar16;
      uVar15 = ~uVar27 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar27 < (int)this->_padding_) {
        uVar13 = uVar15;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
        return pFVar9;
      }
      *(uint *)(this->_padding_ + uVar23 * 4) = uVar27;
      uVar13 = 0;
      if ((int)uVar27 < (int)this->_padding_) {
        uVar13 = uVar15;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
        return pFVar9;
      }
      *(uint *)(this->_padding_ + uVar23 * 4) = uVar27;
      lVar24 = this->_padding_;
      lVar25 = this->_padding_;
      uVar13 = 0;
      if ((int)uVar27 < (int)this->_padding_) {
        uVar13 = uVar15;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
        return pFVar9;
      }
      lVar2 = this->_padding_;
      uVar16 = (ulonglong)(uVar27 + 1);
      uVar23 = uVar23 + 1;
      *(longlong *)(lVar2 + lVar30) = lVar24;
      *(int *)(lVar2 + 8 + lVar30) = (int)lVar25;
      lVar30 = lVar30 + 0xc;
    } while ((longlong)uVar23 < (longlong)iVar14);
  }
  dVar46 = this->Radius + this->Radius;
  fVar54 = (float)(dVar46 + (double)this->_padding_);
  fVar55 = (float)(dVar46 + (double)this->_padding_);
  if (fVar54 <= __real_358637bd) {
    fVar54 = __real_358637bd;
  }
  if (fVar55 <= __real_358637bd) {
    fVar55 = __real_358637bd;
  }
  fVar32 = fVar55 * __real_bf000000;
  uVar51 = SUB84((double)(fVar54 * __real_bf000000),0);
  (**(code **)(this->_padding_ + 0x10))(this,&local_138,0,uVar51,(double)fVar32);
  uVar50 = SUB84((double)(fVar54 * __real_3f000000),0);
  (**(code **)(this->_padding_ + 0x10))(this,&local_168,1,uVar50,(double)fVar32);
  fVar32 = fVar55 * __real_3f000000;
  (**(code **)(this->_padding_ + 0x10))(this,&local_150,2,uVar50,(double)fVar32);
  (**(code **)(this->_padding_ + 0x10))(this,&local_120,3,uVar51,(double)fVar32);
  fVar32 = __real_3f800000;
  fVar58 = __real_3f800000;
  if (((char)this->_padding_ != '\0') && (fVar54 != fVar55)) {
    if (fVar54 <= fVar55) {
      fVar32 = fVar54 / fVar55;
    }
    else {
      fVar58 = fVar55 / fVar54;
    }
  }
  local_res18 = 0;
  local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.ArrayNum = 0;
  local_2a8.ArrayMax = 0;
  local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.ArrayNum = 0;
  local_298.ArrayMax = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_2a8,iVar19,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_298,iVar26,Default);
  if ((local_2a8.ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
    return pFVar9;
  }
  *(undefined8 *)local_2a8.AllocatorInstance.Data = 0;
  uVar13 = 0;
  if ((int)(local_2a8.ArrayNum - 1U) < local_2a8.ArrayNum) {
    uVar13 = ~(local_2a8.ArrayNum - 1U) >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
      return pFVar9;
    }
  }
  *(undefined8 *)(local_2a8.AllocatorInstance.Data + (longlong)(local_2a8.ArrayNum + -1) * 8) =
       0x3ff0000000000000;
  if ((local_298.ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
    return pFVar9;
  }
  *(undefined8 *)local_298.AllocatorInstance.Data = 0;
  uVar13 = 0;
  if ((int)(local_298.ArrayNum - 1U) < local_298.ArrayNum) {
    uVar13 = ~(local_298.ArrayNum - 1U) >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
      return pFVar9;
    }
  }
  dVar46 = __real_3ff0000000000000;
  *(undefined8 *)(local_298.AllocatorInstance.Data + (longlong)(local_298.ArrayNum + -1) * 8) =
       0x3ff0000000000000;
  lVar30 = 8;
  if (2 < local_2a8.ArrayNum) {
    lVar24 = 8;
    uVar13 = 1;
    do {
      uVar15 = 0;
      if ((int)uVar13 < local_2a8.ArrayNum) {
        uVar15 = ~uVar13 >> 0x1f;
      }
      dVar39 = (double)this->_padding_;
      dVar40 = this->Radius;
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
        return pFVar9;
      }
      *(double *)(local_2a8.AllocatorInstance.Data + lVar24) =
           ((double)(int)(uVar13 - 1) * dVar39 * (dVar46 / (double)(iVar18 + -1)) + dVar40) *
           (dVar46 / (double)fVar54);
      lVar24 = lVar24 + 8;
      iVar12 = uVar13 + 2;
      uVar13 = uVar13 + 1;
    } while (iVar12 < local_2a8.ArrayNum);
  }
  iVar12 = local_2a8.ArrayNum;
  if (2 < local_298.ArrayNum) {
    uVar13 = 1;
    do {
      uVar15 = 0;
      if ((int)uVar13 < local_298.ArrayNum) {
        uVar15 = ~uVar13 >> 0x1f;
      }
      dVar39 = (double)this->_padding_;
      dVar40 = this->Radius;
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
        return pFVar9;
      }
      *(double *)(local_298.AllocatorInstance.Data + lVar30) =
           ((double)(int)(uVar13 - 1) * dVar39 * (dVar46 / (double)(iVar17 + -1)) + dVar40) *
           (dVar46 / (double)fVar55);
      lVar30 = lVar30 + 8;
      iVar12 = uVar13 + 2;
      uVar13 = uVar13 + 1;
    } while (iVar12 < local_298.ArrayNum);
    iVar12 = local_2a8.ArrayNum;
  }
  local_268 = (longlong)iVar26;
  local_res8 = 0;
  if (0 < iVar26) {
    uVar16 = 0;
    local_2b8 = 0;
    local_2d0 = 0;
    uVar23 = uVar16;
    iVar26 = local_298.ArrayNum;
    do {
      uVar15 = (uint)uVar16;
      uVar13 = 0;
      if ((int)uVar15 < iVar26) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
          return pFVar9;
        }
        uVar23 = local_2d0;
        iVar12 = local_2a8.ArrayNum;
        iVar26 = local_298.ArrayNum;
      }
      uVar13 = 0;
      lVar30 = 0;
      dVar39 = *(double *)(local_298.AllocatorInstance.Data + local_2b8 * 8);
      if (0 < iVar19) {
        lVar25 = uVar23 * 0x18;
        lVar24 = uVar23 * 8;
        dVar40 = dVar46 - dVar39;
        local_2b0 = (ulonglong)(uint)((float)dVar39 * fVar58) << 0x20;
        do {
          uVar15 = 0;
          if ((int)uVar13 < iVar12) {
            uVar15 = ~uVar13 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
            return pFVar9;
          }
          dVar49 = *(double *)(local_2a8.AllocatorInstance.Data + lVar30 * 8);
          uVar15 = 0;
          if ((int)local_res18 < (int)this->_padding_) {
            uVar15 = ~local_res18 >> 0x1f;
          }
          local_2b0 = CONCAT44(local_2b0._4_4_,(float)dVar49 * fVar32);
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
            return pFVar9;
          }
          dVar47 = dVar46 - dVar49;
          *(longlong *)(this->_padding_ + lVar24) = local_2b0;
          dVar43 = dVar40 * local_138;
          uVar15 = 0;
          if ((int)local_res18 < (int)this->_padding_) {
            uVar15 = ~local_res18 >> 0x1f;
          }
          dVar33 = local_150 * dVar39;
          dVar48 = local_168 * dVar40;
          dVar41 = local_160 * dVar40;
          dVar42 = local_158 * dVar40;
          dVar34 = local_120 * dVar39;
          dVar35 = local_148 * dVar39;
          dVar36 = local_118 * dVar39;
          dVar44 = dVar40 * local_130;
          dVar37 = local_140 * dVar39;
          dVar38 = local_110 * dVar39;
          dVar45 = dVar40 * local_128;
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
            return pFVar9;
          }
          lVar2 = this->_padding_;
          local_res18 = local_res18 + 1;
          uVar13 = uVar13 + 1;
          uVar23 = local_2d0 + 1;
          lVar30 = lVar30 + 1;
          lVar24 = lVar24 + 8;
          *(double *)(lVar2 + lVar25) = (dVar48 + dVar33) * dVar49 + (dVar43 + dVar34) * dVar47;
          *(double *)(lVar2 + 8 + lVar25) = (dVar41 + dVar35) * dVar49 + (dVar44 + dVar36) * dVar47;
          *(double *)(lVar2 + 0x10 + lVar25) =
               (dVar42 + dVar37) * dVar49 + (dVar45 + dVar38) * dVar47;
          lVar25 = lVar25 + 0x18;
          iVar12 = local_2a8.ArrayNum;
          local_2d0 = uVar23;
        } while (lVar30 < iVar19);
        iVar26 = local_298.ArrayNum;
        uVar15 = local_res8;
      }
      local_res8 = uVar15 + 1;
      uVar16 = (ulonglong)local_res8;
      local_2b8 = local_2b8 + 1;
    } while (local_2b8 < local_268);
  }
  uVar13 = 0;
  local_284 = iVar17 + 1;
  local_res10 = 0;
  local_2c0 = 0;
  if (0 < local_284) {
    uVar23 = 0;
    iVar17 = iVar18 + 1;
    local_2d0 = 0;
    do {
      if ((local_2c0 == 0) || (local_2c0 == local_280)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      local_2c4 = 0;
      if (0 < iVar17) {
        lVar30 = uVar23 * 0xc;
        do {
          if ((bVar6) && ((local_2c4 == 0 || (local_2c4 == iVar18)))) {
            cVar11 = '\x01';
            if (local_2c0 != 0) {
              cVar11 = '\x04';
            }
            if ((this->SharpCorners & cVar11 * ((local_2c4 != 0) + '\x01')) != None)
            goto LAB_14359f396;
          }
          else {
LAB_14359f396:
            iVar14 = (local_2c0 + 1) * iVar19 + local_2c4;
            iVar12 = local_2c0 * iVar19 + local_2c4;
            iVar21 = iVar14 + 1;
            iVar17 = iVar12 + 1;
            local_2c8 = iVar17;
            iVar26 = iVar12;
            if ((char)this->_padding_ != '\0') {
              local_2c8 = iVar12;
              iVar26 = iVar17;
            }
            local_1a0 = (double)CONCAT44(iVar21,iVar26);
            uVar27 = ~uVar13 >> 0x1f;
            uVar15 = 0;
            if ((int)uVar13 < (int)this->_padding_) {
              uVar15 = uVar27;
            }
            if ((uVar15 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
              return pFVar9;
            }
            lVar24 = this->_padding_;
            *(double *)(lVar24 + lVar30) = local_1a0;
            *(int *)(lVar24 + 8 + lVar30) = local_2c8;
            uVar15 = 0;
            if ((int)uVar13 < (int)this->_padding_) {
              uVar15 = uVar27;
            }
            if ((uVar15 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
              return pFVar9;
            }
            *(int *)(this->_padding_ + local_2d0 * 4) = local_res10;
            local_2c8 = iVar17;
            iVar26 = iVar12;
            if ((char)this->_padding_ != '\0') {
              local_2c8 = iVar12;
              iVar26 = iVar17;
            }
            local_220 = (double)CONCAT44(iVar21,iVar26);
            uVar15 = 0;
            if ((int)uVar13 < (int)this->_padding_) {
              uVar15 = uVar27;
            }
            if ((uVar15 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
              return pFVar9;
            }
            lVar24 = this->_padding_;
            *(double *)(lVar24 + lVar30) = local_220;
            *(int *)(lVar24 + 8 + lVar30) = local_2c8;
            iVar20 = iVar17;
            iVar26 = iVar12;
            if ((char)this->_padding_ != '\0') {
              iVar20 = iVar12;
              iVar26 = iVar17;
            }
            local_230 = (double)CONCAT44(iVar21,iVar26);
            uVar15 = 0;
            if ((int)uVar13 < (int)this->_padding_) {
              uVar15 = uVar27;
            }
            if ((uVar15 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
              return pFVar9;
            }
            lVar24 = this->_padding_;
            uVar15 = uVar13 + 1;
            *(double *)(lVar24 + lVar30) = local_230;
            *(int *)(lVar24 + 8 + lVar30) = iVar20;
            local_2d8 = iVar21;
            iVar17 = iVar12;
            if ((char)this->_padding_ != '\0') {
              local_2d8 = iVar12;
              iVar17 = iVar21;
            }
            local_240 = (double)CONCAT44(iVar14,iVar17);
            uVar28 = ~uVar15 >> 0x1f;
            uVar27 = 0;
            if ((int)uVar15 < (int)this->_padding_) {
              uVar27 = uVar28;
            }
            if ((uVar27 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
              return pFVar9;
            }
            lVar24 = this->_padding_;
            *(double *)(lVar24 + 0xc + lVar30) = local_240;
            *(int *)(lVar24 + 0x14 + lVar30) = local_2d8;
            uVar27 = 0;
            if ((int)uVar15 < (int)this->_padding_) {
              uVar27 = uVar28;
            }
            if ((uVar27 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
              return pFVar9;
            }
            *(int *)(this->_padding_ + 4 + local_2d0 * 4) = local_res10;
            local_2d8 = iVar21;
            iVar17 = iVar12;
            if ((char)this->_padding_ != '\0') {
              local_2d8 = iVar12;
              iVar17 = iVar21;
            }
            local_250 = (double)CONCAT44(iVar14,iVar17);
            uVar27 = 0;
            if ((int)uVar15 < (int)this->_padding_) {
              uVar27 = uVar28;
            }
            if ((uVar27 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
              return pFVar9;
            }
            lVar24 = this->_padding_;
            *(double *)(lVar24 + 0xc + lVar30) = local_250;
            *(int *)(lVar24 + 0x14 + lVar30) = local_2d8;
            iVar17 = iVar21;
            if ((char)this->_padding_ != '\0') {
              iVar17 = iVar12;
              iVar12 = iVar21;
            }
            local_260 = (double)CONCAT44(iVar14,iVar12);
            uVar27 = 0;
            if ((int)uVar15 < (int)this->_padding_) {
              uVar27 = uVar28;
            }
            if ((uVar27 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
              return pFVar9;
            }
            lVar24 = this->_padding_;
            uVar13 = uVar13 + 2;
            *(double *)(lVar24 + 0xc + lVar30) = local_260;
            *(int *)(lVar24 + 0x14 + lVar30) = iVar17;
            lVar30 = lVar30 + 0x18;
            local_2d0 = local_2d0 + 2;
            if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
              local_res10 = local_res10 + 1;
            }
          }
          local_2c4 = local_2c4 + 1;
          uVar23 = local_2d0;
          iVar17 = local_288;
        } while (local_2c4 < local_288);
      }
      local_2c0 = local_2c0 + 1;
    } while (local_2c0 < local_284);
  }
  local_2d0 = (ulonglong)(int)uVar13;
  local_2c4 = 0;
  do {
    local_2c0 = 0;
    local_280 = (local_2c4 != 0) + 1;
    do {
      cVar11 = '\x01';
      if (local_2c0 != 0) {
        cVar11 = '\x04';
      }
      if ((this->SharpCorners & cVar11 * (char)local_280) == None) {
        iVar18 = 1;
        if (local_2c0 != 0) {
          iVar18 = local_210;
        }
        iVar17 = 1;
        if (local_2c4 != 0) {
          iVar17 = local_20c;
        }
        iVar26 = local_284 * local_2c0 * iVar19;
        uVar15 = iVar18 * iVar19 + iVar17;
        uVar8 = iVar18 * iVar19 + local_288 * local_2c4;
        uVar27 = iVar26 + iVar17;
        uVar28 = iVar26 + local_288 * local_2c4;
        uVar5 = uVar27;
        if (local_2c0 == local_2c4) {
          uVar5 = uVar8;
          uVar8 = uVar27;
        }
        uVar27 = 0;
        if ((int)uVar15 < (int)this->_padding_) {
          uVar27 = ~uVar15 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
          return pFVar9;
        }
        auVar1 = *(undefined1 (*) [16])(this->_padding_ + (longlong)(int)uVar15 * 0x18);
        local_190 = *(double *)(this->_padding_ + 0x10 + (longlong)(int)uVar15 * 0x18);
        uVar27 = 0;
        if ((int)uVar8 < (int)this->_padding_) {
          uVar27 = ~uVar8 >> 0x1f;
        }
        local_f8 = auVar1;
        if ((uVar27 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
          return pFVar9;
        }
        dVar39 = local_190;
        lVar24 = (longlong)(int)uVar8;
        local_230 = local_190;
        dVar46 = auVar1._8_8_;
        local_108._8_4_ = auVar1._8_4_;
        local_108._0_8_ = dVar46;
        local_108._12_4_ = auVar1._12_4_;
        lVar30 = this->_padding_;
        local_178 = *(double *)(lVar30 + lVar24 * 0x18) - auVar1._0_8_;
        local_260 = *(double *)(lVar30 + 8 + lVar24 * 0x18) - dVar46;
        local_240 = *(double *)(lVar30 + 0x10 + lVar24 * 0x18) - local_190;
        uVar27 = 0;
        if ((int)uVar5 < (int)this->_padding_) {
          uVar27 = ~uVar5 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
          return pFVar9;
        }
        lVar24 = (longlong)(int)uVar5;
        lVar30 = this->_padding_;
        local_170 = *(double *)(lVar30 + lVar24 * 0x18) - auVar1._0_8_;
        local_250 = *(double *)(lVar30 + 8 + lVar24 * 0x18) - dVar46;
        local_220 = *(double *)(lVar30 + 0x10 + lVar24 * 0x18) - dVar39;
        uVar27 = 0;
        if ((int)uVar15 < (int)this->_padding_) {
          uVar27 = ~uVar15 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
          return pFVar9;
        }
        uVar3 = *(undefined8 *)(this->_padding_ + (longlong)(int)uVar15 * 8);
        uVar27 = 0;
        if ((int)uVar8 < (int)this->_padding_) {
          uVar27 = ~uVar8 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
          return pFVar9;
        }
        local_2b0._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
        fVar55 = local_2b0._4_4_;
        local_2b0._0_4_ = (float)uVar3;
        fVar54 = (float)local_2b0;
        fVar58 = *(float *)(this->_padding_ + (longlong)(int)uVar8 * 8) - (float)local_2b0;
        fVar32 = *(float *)(this->_padding_ + 4 + (longlong)(int)uVar8 * 8) - local_2b0._4_4_;
        uVar27 = 0;
        if ((int)uVar5 < (int)this->_padding_) {
          uVar27 = ~uVar5 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
          return pFVar9;
        }
        fVar56 = *(float *)(this->_padding_ + lVar24 * 8) - (float)local_2b0;
        fVar57 = *(float *)(this->_padding_ + 4 + lVar24 * 8) - local_2b0._4_4_;
        uVar27 = local_res18;
        if (1 < local_270 + 1) {
          plVar31 = &this->_padding_;
          local_278 = local_2d0 * 0xc;
          local_180 = (longlong)(int)uVar28 * 8;
          local_2c8 = 1;
          local_268 = (longlong)(int)local_res18 * 8;
          local_2b0 = local_2d0 * 4;
          local_1a0 = __real_3ff0000000000000 / (double)(local_270 + 1);
          lVar30 = (longlong)(int)uVar28 * 0x18;
          uVar50 = auVar1._0_4_;
          uVar51 = auVar1._4_4_;
          uVar52 = auVar1._8_4_;
          uVar53 = auVar1._12_4_;
          uVar22 = uVar8;
          local_1a8 = (longlong)(int)local_res18 * 0x18;
          do {
            uVar8 = uVar28;
            __libm_sse2_sincos_();
            dVar39 = extraout_XMM0._0_8_;
            dVar46 = extraout_XMM0._8_8_;
            dVar40 = dVar39 * local_170;
            dVar49 = dVar46 * local_178;
            uVar27 = 0;
            if ((int)uVar8 < (int)this->_padding_) {
              uVar27 = ~uVar8 >> 0x1f;
            }
            dVar43 = dVar46 * local_260;
            dVar41 = dVar39 * local_250;
            dVar42 = dVar39 * local_220;
            dVar47 = dVar46 * local_240 + local_230;
            if ((uVar27 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
              return pFVar9;
            }
            lVar24 = this->_padding_;
            *(double *)(lVar30 + lVar24) = dVar49 + (double)CONCAT44(uVar51,uVar50) + dVar40;
            *(double *)(lVar30 + 8 + lVar24) = dVar43 + (double)CONCAT44(uVar53,uVar52) + dVar41;
            *(double *)(lVar30 + 0x10 + lVar24) = dVar47 + dVar42;
            uVar27 = 0;
            if ((int)uVar8 < (int)this->_padding_) {
              uVar27 = ~uVar8 >> 0x1f;
            }
            fStack_184 = (float)dVar46 * fVar32 + fVar55 + (float)dVar39 * fVar57;
            local_188 = (float)dVar46 * fVar58 + fVar54 + (float)dVar39 * fVar56;
            if ((uVar27 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
              return pFVar9;
            }
            *(ulonglong *)(local_180 + this->_padding_) = CONCAT44(fStack_184,local_188);
            uVar27 = uVar8;
            local_208 = uVar15;
            if ((char)*plVar31 != '\0') {
              uVar27 = uVar15;
              local_208 = uVar8;
            }
            uVar29 = ~uVar13 >> 0x1f;
            uVar28 = 0;
            if ((int)uVar13 < (int)this->_padding_) {
              uVar28 = uVar29;
            }
            uStack_204 = uVar22;
            if ((uVar28 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
              return pFVar9;
            }
            lVar30 = this->_padding_;
            *(ulonglong *)(local_278 + lVar30) = CONCAT44(uStack_204,local_208);
            *(uint *)(local_278 + 8 + lVar30) = uVar27;
            uVar27 = 0;
            if ((int)uVar13 < (int)this->_padding_) {
              uVar27 = uVar29;
            }
            if ((uVar27 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
              return pFVar9;
            }
            *(int *)(local_2b0 + this->_padding_) = local_res10;
            uVar27 = uVar8;
            local_1f8 = uVar15;
            if ((char)*plVar31 != '\0') {
              uVar27 = uVar15;
              local_1f8 = uVar8;
            }
            uVar28 = 0;
            if ((int)uVar13 < (int)this->_padding_) {
              uVar28 = uVar29;
            }
            uStack_1f4 = uVar22;
            if ((uVar28 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
              return pFVar9;
            }
            lVar30 = this->_padding_;
            *(ulonglong *)(local_278 + lVar30) = CONCAT44(uStack_1f4,local_1f8);
            *(uint *)(local_278 + 8 + lVar30) = uVar27;
            uVar27 = uVar8;
            local_1e8 = uVar15;
            if ((char)*plVar31 != '\0') {
              uVar27 = uVar15;
              local_1e8 = uVar8;
            }
            uVar28 = 0;
            if ((int)uVar13 < (int)this->_padding_) {
              uVar28 = uVar29;
            }
            uStack_1e4 = uVar22;
            if ((uVar28 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
              return pFVar9;
            }
            uVar13 = uVar13 + 1;
            lVar30 = this->_padding_;
            local_2b0 = local_2b0 + 4;
            local_2c8 = local_2c8 + 1;
            local_180 = local_268;
            local_268 = local_268 + 8;
            *(ulonglong *)(lVar30 + local_278) = CONCAT44(uStack_1e4,local_1e8);
            *(uint *)(lVar30 + 8 + local_278) = uVar27;
            local_278 = local_278 + 0xc;
            lVar24 = local_1a8 + 0x18;
            uVar27 = local_res18 + 1;
            local_2d0 = local_2d0 + 1;
            lVar30 = local_1a8;
            uVar50 = local_f8._0_4_;
            uVar51 = local_f8._4_4_;
            uVar52 = local_108._0_4_;
            uVar53 = local_108._4_4_;
            uVar28 = local_res18;
            uVar22 = uVar8;
            local_res18 = uVar27;
            local_1a8 = lVar24;
          } while (local_2c8 < local_270 + 1);
        }
        plVar31 = &this->_padding_;
        local_res18 = uVar27 - 1;
        uVar27 = uVar5;
        local_1d8 = uVar15;
        if ((char)*plVar31 != '\0') {
          uVar27 = uVar15;
          local_1d8 = uVar5;
        }
        uVar22 = ~uVar13 >> 0x1f;
        uVar28 = 0;
        if ((int)uVar13 < (int)this->_padding_) {
          uVar28 = uVar22;
        }
        uStack_1d4 = uVar8;
        if ((uVar28 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
          return pFVar9;
        }
        lVar30 = this->_padding_;
        *(ulonglong *)(lVar30 + local_2d0 * 0xc) = CONCAT44(uStack_1d4,local_1d8);
        *(uint *)(lVar30 + 8 + local_2d0 * 0xc) = uVar27;
        uVar27 = 0;
        if ((int)uVar13 < (int)this->_padding_) {
          uVar27 = uVar22;
        }
        if ((uVar27 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
          return pFVar9;
        }
        *(int *)(this->_padding_ + local_2d0 * 4) = local_res10;
        uVar27 = uVar5;
        local_1c8 = uVar15;
        if ((char)*plVar31 != '\0') {
          uVar27 = uVar15;
          local_1c8 = uVar5;
        }
        uVar28 = 0;
        if ((int)uVar13 < (int)this->_padding_) {
          uVar28 = uVar22;
        }
        uStack_1c4 = uVar8;
        if ((uVar28 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
          return pFVar9;
        }
        lVar30 = this->_padding_;
        *(ulonglong *)(lVar30 + local_2d0 * 0xc) = CONCAT44(uStack_1c4,local_1c8);
        *(uint *)(lVar30 + 8 + local_2d0 * 0xc) = uVar27;
        uVar27 = uVar5;
        local_1b8 = uVar15;
        if ((char)*plVar31 != '\0') {
          uVar27 = uVar15;
          local_1b8 = uVar5;
        }
        uVar15 = 0;
        if ((int)uVar13 < (int)this->_padding_) {
          uVar15 = uVar22;
        }
        uStack_1b4 = uVar8;
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FMeshShapeGenerator *)(*pcVar4)();
          return pFVar9;
        }
        uVar13 = uVar13 + 1;
        lVar30 = this->_padding_;
        *(ulonglong *)(lVar30 + local_2d0 * 0xc) = CONCAT44(uStack_1b4,local_1b8);
        lVar24 = local_2d0 + 1;
        *(uint *)(lVar30 + 8 + local_2d0 * 0xc) = uVar27;
        local_2d0 = lVar24;
        if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
          local_res10 = local_res10 + 1;
        }
      }
      local_2c0 = local_2c0 + 1;
    } while (local_2c0 < 2);
    local_2c4 = local_2c4 + 1;
    if (1 < local_2c4) {
      if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.AllocatorInstance.Data);
      }
      if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.AllocatorInstance.Data);
      }
      return (FMeshShapeGenerator *)this;
    }
  } while( true );
}

