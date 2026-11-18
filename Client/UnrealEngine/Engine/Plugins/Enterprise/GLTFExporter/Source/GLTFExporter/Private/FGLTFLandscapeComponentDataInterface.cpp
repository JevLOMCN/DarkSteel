// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 11

// FGLTFLandscapeComponentDataInterface @ 14e5d20c0

FGLTFLandscapeComponentDataInterface * __thiscall
FGLTFLandscapeComponentDataInterface::FGLTFLandscapeComponentDataInterface
          (FGLTFLandscapeComponentDataInterface *this,ULandscapeComponent *param_1,int param_2)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UTexture2D *this_00;
  FTexturePlatformData *pFVar5;
  FGLTFLandscapeComponentDataInterface *pFVar6;
  byte bVar7;
  FColor *local_res8;
  
  this->Component = param_1;
  this->ComponentSubsectionSizeQuads = 0;
  this->ComponentSizeQuads = 0;
  this->ComponentSizeVerts = 0;
  this->ComponentSubsectionSizeVerts = 0;
  this->ComponentNumSubsections = 0;
  (this->HeightMipDataSource).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HeightMipDataSource).ArrayNum = 0;
  (this->HeightMipDataSource).ArrayMax = 0;
  this->HeightMipData = (FColor *)0x0;
  this->HeightmapStride = 0;
  this->HeightmapComponentOffsetX = 0;
  this->HeightmapComponentOffsetY = 0;
  this->HeightmapSubsectionOffset = 0;
  (this->XYOffsetMipDataSource).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->XYOffsetMipDataSource).ArrayNum = 0;
  (this->XYOffsetMipDataSource).ArrayMax = 0;
  this->MipLevel = param_2;
  this->XYOffsetMipData = (FColor *)0x0;
  this_00 = ULandscapeComponent::GetHeightmap(param_1,true);
  if (this_00 != (UTexture2D *)0x0) {
    pFVar5 = UTexture2D::GetPlatformData(this_00);
    iVar4 = this->MipLevel;
    if (iVar4 < (pFVar5->Mips).Array.ArrayNum) {
      local_res8 = (FColor *)0x0;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FGLTFLandscapeComponentDataInterface *)(*pcVar2)();
        return pFVar6;
      }
      FBulkData::GetCopy((FBulkData *)
                         (*(longlong *)
                           ((pFVar5->Mips).Array.AllocatorInstance.Data + (longlong)iVar4 * 8) +
                         0x20),&local_res8,false);
      this->HeightMipData = local_res8;
    }
  }
  iVar4 = param_1->SubsectionSizeQuads;
  this->ComponentSubsectionSizeQuads = iVar4;
  this->ComponentSizeQuads = param_1->ComponentSizeQuads;
  bVar7 = (byte)this->MipLevel;
  this->ComponentSizeVerts = param_1->ComponentSizeQuads + 1 >> (bVar7 & 0x1f);
  this->ComponentSubsectionSizeVerts = iVar4 + 1 >> (bVar7 & 0x1f);
  this->ComponentNumSubsections = param_1->NumSubsections;
  if (this_00 != (UTexture2D *)0x0) {
    iVar4 = UTexture2D::GetSizeX(this_00);
    this->HeightmapStride = iVar4 >> ((byte)this->MipLevel & 0x1f);
    iVar4 = UTexture2D::GetSizeX(this_00);
    dVar1 = (param_1->HeightmapScaleBias).field0_0x0._s_0.Z;
    this->HeightmapComponentOffsetX =
         (int)((longlong)
               ROUND((double)(iVar4 >> ((byte)this->MipLevel & 0x1f)) * (dVar1 + dVar1) +
                     __real_3fe0000000000000) >> 1);
    iVar4 = UTexture2D::GetSizeY(this_00);
    dVar1 = (param_1->HeightmapScaleBias).field0_0x0._s_0.W;
    bVar7 = (byte)this->MipLevel;
    this->HeightmapComponentOffsetY =
         (int)((longlong)
               ROUND((double)(iVar4 >> (bVar7 & 0x1f)) * (dVar1 + dVar1) + __real_3fe0000000000000)
              >> 1);
  }
  this->HeightmapSubsectionOffset = this->ComponentSubsectionSizeQuads + 1 >> (bVar7 & 0x1f);
  return this;
}

// ComponentXYToSubsectionXY @ 14e5e3a40

void __thiscall
FGLTFLandscapeComponentDataInterface::ComponentXYToSubsectionXY
          (FGLTFLandscapeComponentDataInterface *this,int param_1,int param_2,int *param_3,
          int *param_4,int *param_5,int *param_6)

{
  *param_3 = (param_1 + -1) / (this->ComponentSubsectionSizeVerts + -1);
  *param_4 = (param_2 + -1) / (this->ComponentSubsectionSizeVerts + -1);
  *param_5 = (param_1 + -1) % (this->ComponentSubsectionSizeVerts + -1) + 1;
  *param_6 = (param_2 + -1) % (this->ComponentSubsectionSizeVerts + -1) + 1;
  if (*param_3 < 0) {
    *param_3 = 0;
    *param_5 = 0;
  }
  if (*param_4 < 0) {
    *param_4 = 0;
    *param_6 = 0;
  }
  return;
}

// GetHeightData @ 14e5f6450

FColor __thiscall
FGLTFLandscapeComponentDataInterface::GetHeightData
          (FGLTFLandscapeComponentDataInterface *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_register_00000014;
  int iVar4;
  int in_R9D;
  int iVar5;
  
  if (this->HeightMipData == (FColor *)0x0) {
    ((FColor_u_0 *)CONCAT44(in_register_00000014,param_1))->Bits = 0;
    return (FColor)(FColor_u_0)param_1;
  }
  iVar3 = this->ComponentSubsectionSizeVerts;
  iVar1 = iVar3 + -1;
  iVar4 = (param_2 + -1) / iVar1;
  iVar2 = (in_R9D + -1) / iVar1;
  iVar5 = 0;
  if (-1 < iVar2) {
    iVar5 = iVar2;
  }
  iVar5 = iVar5 * iVar3 + this->HeightmapComponentOffsetY;
  if (-1 < iVar2) {
    iVar5 = (in_R9D + -1) % iVar1 + 1 + iVar5;
  }
  iVar2 = 0;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  iVar3 = iVar2 * iVar3 + iVar5 * this->HeightmapStride + this->HeightmapComponentOffsetX;
  if (-1 < iVar4) {
    iVar3 = (param_2 + -1) % iVar1 + 1 + iVar3;
  }
  *(FColor_u_0 *)CONCAT44(in_register_00000014,param_1) = this->HeightMipData[iVar3].field0_0x0;
  return (FColor)(FColor_u_0)param_1;
}

// GetPositionNormalUV @ 14e5fbe80

void __thiscall
FGLTFLandscapeComponentDataInterface::GetPositionNormalUV
          (FGLTFLandscapeComponentDataInterface *this,int param_1,int param_2,
          TVector<float> *param_3,TVector<float> *param_4,TVector2<float> *param_5)

{
  int iVar1;
  TVector2<float>_u_0 TVar2;
  int iVar3;
  FColor_u_0 FVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  
  if (this->HeightMipData == (FColor *)0x0) {
    FVar4.Bits = 0;
    uVar10 = 0;
    bVar5 = 0;
    uVar8 = 0;
  }
  else {
    iVar6 = this->ComponentSubsectionSizeVerts;
    iVar1 = iVar6 + -1;
    iVar7 = (param_1 + -1) / iVar1;
    iVar3 = (param_2 + -1) / iVar1;
    iVar9 = 0;
    if (-1 < iVar3) {
      iVar9 = iVar3;
    }
    iVar9 = iVar9 * iVar6 + this->HeightmapComponentOffsetY;
    if (-1 < iVar3) {
      iVar9 = (param_2 + -1) % iVar1 + 1 + iVar9;
    }
    iVar3 = 0;
    if (-1 < iVar7) {
      iVar3 = iVar7;
    }
    iVar6 = iVar9 * this->HeightmapStride + iVar3 * iVar6 + this->HeightmapComponentOffsetX;
    if (-1 < iVar7) {
      iVar6 = (param_1 + -1) % iVar1 + 1 + iVar6;
    }
    FVar4 = (FColor_u_0)this->HeightMipData[iVar6].field0_0x0.Bits;
    uVar10 = (uint)FVar4 >> 8;
    bVar5 = FVar4._s_0.R;
    uVar8 = (uint)FVar4 >> 0x18;
  }
  fVar11 = (float)(FVar4.Bits & 0xff) * __real_3c008081 - __real_3f800000;
  dVar16 = (double)fVar11;
  fVar12 = (float)uVar8 * __real_3c008081 - __real_3f800000;
  dVar15 = (double)fVar12;
  fVar14 = (float)this->ComponentSizeQuads / (float)(this->ComponentSizeVerts + -1);
  fVar17 = (float)param_2 * fVar14;
  fVar14 = (float)param_1 * fVar14;
  (param_3->field0_0x0)._s_0.X = fVar14;
  (param_3->field0_0x0)._s_0.Y = fVar17;
  (param_3->field0_0x0)._s_0.Z =
       ((float)((uint)bVar5 << 8 | uVar10 & 0xff) - __real_47000000) * __real_3c000000;
  (param_4->field0_0x0)._s_0.X = fVar11;
  (param_4->field0_0x0)._s_0.Y = fVar12;
  dVar15 = __real_3ff0000000000000 - (dVar15 * dVar15 + dVar16 * dVar16);
  if (dVar15 <= 0.0) {
    dVar15 = 0.0;
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar15;
  auVar13 = sqrtpd(ZEXT416(0),auVar13);
  (param_4->field0_0x0)._s_0.Z = (float)auVar13._0_8_;
  TVar2._s_0.Y = (float)this->Component->SectionBaseY + fVar17;
  TVar2._s_0.X = (float)this->Component->SectionBaseX + fVar14;
  param_5->field0_0x0 = TVar2;
  return;
}

// GetWeightmapTextureData @ 14e6008c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FGLTFLandscapeComponentDataInterface::GetWeightmapTextureData
          (FGLTFLandscapeComponentDataInterface *this,ULandscapeLayerInfoObject *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,bool param_3,bool param_4)

{
  int iVar1;
  int *piVar2;
  FScriptContainerElement FVar3;
  ULandscapeLayerInfoObject *pUVar4;
  UTexture2D *this_00;
  code *pcVar5;
  int iVar6;
  void *pvVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  TArray<FWeightmapLayerAllocationInfo,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *pTVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  void *local_48;
  FTexturePlatformData *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  pTVar15 = ULandscapeComponent::GetWeightmapLayerAllocations(this->Component,param_3);
  pTVar16 = ULandscapeComponent::GetWeightmapTextures(this->Component,param_3);
  iVar19 = pTVar15->ArrayNum;
  uVar17 = 0;
  if (iVar19 < 1) {
LAB_14e600983:
    bVar8 = false;
  }
  else {
    lVar21 = 0;
    while( true ) {
      uVar20 = 0;
      if ((int)uVar17 < iVar19) {
        uVar20 = ~uVar17 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      pUVar4 = *(ULandscapeLayerInfoObject **)((pTVar15->AllocatorInstance).Data + lVar21);
      if (pUVar4 == (ULandscapeLayerInfoObject *)0x0) {
        bVar8 = param_1 == (ULandscapeLayerInfoObject *)0x0;
      }
      else {
        bVar8 = pUVar4 == param_1;
      }
      if (bVar8) break;
      iVar19 = pTVar15->ArrayNum;
      uVar17 = uVar17 + 1;
      lVar21 = lVar21 + 0x10;
      if (iVar19 <= (int)uVar17) goto LAB_14e600983;
    }
    if ((int)uVar17 < 0) goto LAB_14e600983;
    uVar18 = ~uVar17 >> 0x1f;
    uVar20 = 0;
    if ((int)uVar17 < pTVar15->ArrayNum) {
      uVar20 = uVar18;
    }
    if ((uVar20 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    lVar21 = (longlong)(int)uVar17;
    if (pTVar16->ArrayNum <= (int)(uint)(byte)(pTVar15->AllocatorInstance).Data[lVar21 * 0x10 + 8])
    goto LAB_14e600983;
    uVar20 = 0;
    if ((int)uVar17 < pTVar15->ArrayNum) {
      uVar20 = uVar18;
    }
    if ((uVar20 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    if (3 < (byte)(pTVar15->AllocatorInstance).Data[lVar21 * 0x10 + 9]) goto LAB_14e600983;
    uVar20 = 0;
    if ((int)uVar17 < pTVar15->ArrayNum) {
      uVar20 = uVar18;
    }
    if ((uVar20 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    FVar3 = (pTVar15->AllocatorInstance).Data[lVar21 * 0x10 + 8];
    if ((pTVar16->ArrayNum <= (int)(uint)(byte)FVar3) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    this_00 = *(UTexture2D **)((pTVar16->AllocatorInstance).Data + (ulonglong)(byte)FVar3 * 8);
    if (this_00 == (UTexture2D *)0x0) goto LAB_14e600983;
    if (param_4) {
      iVar19 = this->Component->NumSubsections * this->ComponentSubsectionSizeQuads + 1;
    }
    else {
      iVar19 = (this->ComponentSubsectionSizeQuads + 1) * this->Component->NumSubsections;
    }
    iVar19 = iVar19 >> ((byte)this->MipLevel & 0x1f);
    uVar20 = iVar19 * iVar19;
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    piVar2 = &param_2->ArrayNum;
    *piVar2 = 0;
    if (param_2->ArrayMax != uVar20) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar20,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar20,&param_2->AllocatorInstance,piVar2,&param_2->ArrayMax);
    local_40 = UTexture2D::GetPlatformData(this_00);
    uVar11 = this->MipLevel;
    if ((local_40->Mips).Array.ArrayNum <= (int)uVar11) goto LAB_14e600983;
    local_48 = (void *)0x0;
    uVar10 = 0;
    if ((int)uVar11 < (local_40->Mips).Array.ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    FBulkData::GetCopy((FBulkData *)
                       (*(longlong *)
                         ((local_40->Mips).Array.AllocatorInstance.Data + (longlong)(int)uVar11 * 8)
                       + 0x20),&local_48,false);
    pvVar7 = local_48;
    if (local_48 == (void *)0x0) goto LAB_14e600983;
    local_38 = ___xmm_00000003000000000000000100000002;
    uStack_30 = _UNK_150b29d28;
    uVar11 = 0;
    if ((int)uVar17 < pTVar15->ArrayNum) {
      uVar11 = uVar18;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    uVar17 = 0;
    iVar19 = *(int *)((longlong)&local_38 +
                     (ulonglong)(byte)(pTVar15->AllocatorInstance).Data[lVar21 * 0x10 + 9] * 4);
    if ((int)uVar20 < 1) goto LAB_14e600dee;
    lVar21 = 0;
    if (param_4) {
      do {
        iVar23 = this->ComponentSubsectionSizeVerts;
        iVar1 = iVar23 + -1;
        iVar12 = (int)uVar17 % this->ComponentSizeVerts + -1;
        iVar24 = iVar12 / iVar1;
        iVar13 = (int)uVar17 / this->ComponentSizeVerts + -1;
        iVar14 = iVar13 / iVar1;
        iVar22 = 0;
        if (-1 < iVar14) {
          iVar22 = iVar14;
        }
        iVar6 = iVar22 * iVar23;
        if (-1 < iVar14) {
          iVar6 = iVar22 * iVar23 + 1 + iVar13 % iVar1;
        }
        iVar22 = 0;
        if (-1 < iVar24) {
          iVar22 = iVar24;
        }
        iVar23 = (iVar6 * this->ComponentNumSubsections + iVar22) * iVar23;
        if (-1 < iVar24) {
          iVar23 = iVar23 + 1 + iVar12 % iVar1;
        }
        FVar3 = *(FScriptContainerElement *)
                 ((longlong)pvVar7 + (longlong)iVar23 * 4 + (longlong)iVar19);
        uVar18 = 0;
        if ((int)uVar17 < *piVar2) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        uVar17 = uVar17 + 1;
        (param_2->AllocatorInstance).Data[lVar21] = FVar3;
        lVar21 = lVar21 + 1;
      } while ((int)uVar17 < (int)uVar20);
      bVar8 = true;
    }
    else {
      do {
        FVar3 = *(FScriptContainerElement *)((longlong)pvVar7 + lVar21 * 4 + (longlong)iVar19);
        uVar18 = 0;
        if ((int)uVar17 < *piVar2) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        uVar17 = uVar17 + 1;
        (param_2->AllocatorInstance).Data[lVar21] = FVar3;
        lVar21 = lVar21 + 1;
      } while ((int)uVar17 < (int)uVar20);
LAB_14e600dee:
      bVar8 = true;
    }
  }
  return bVar8;
}

// GetXYOffset @ 14e600e10

void __thiscall
FGLTFLandscapeComponentDataInterface::GetXYOffset
          (FGLTFLandscapeComponentDataInterface *this,int param_1,int param_2,float *param_3,
          float *param_4)

{
  return;
}

// GetXYOffsetData @ 14e600e20

FColor __thiscall
FGLTFLandscapeComponentDataInterface::GetXYOffsetData
          (FGLTFLandscapeComponentDataInterface *this,int param_1,int param_2)

{
  undefined4 in_register_00000014;
  
  *(undefined4 *)CONCAT44(in_register_00000014,param_1) = 0;
  return (FColor)(FColor_u_0)param_1;
}

// TexelXYToIndex @ 14e614db0

int __thiscall
FGLTFLandscapeComponentDataInterface::TexelXYToIndex
          (FGLTFLandscapeComponentDataInterface *this,int param_1,int param_2)

{
  return this->ComponentNumSubsections * this->ComponentSubsectionSizeVerts * param_2 + param_1;
}

// VertexIndexToTexel @ 14e6161f0

int __thiscall
FGLTFLandscapeComponentDataInterface::VertexIndexToTexel
          (FGLTFLandscapeComponentDataInterface *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = this->ComponentSubsectionSizeVerts;
  iVar1 = iVar8 + -1;
  iVar3 = param_1 % this->ComponentSizeVerts + -1;
  iVar6 = iVar3 / iVar1;
  iVar4 = param_1 / this->ComponentSizeVerts + -1;
  iVar5 = iVar4 / iVar1;
  iVar7 = 0;
  if (-1 < iVar5) {
    iVar7 = iVar5;
  }
  iVar2 = iVar7 * iVar8;
  if (-1 < iVar5) {
    iVar2 = iVar4 % iVar1 + 1 + iVar7 * iVar8;
  }
  iVar7 = 0;
  if (-1 < iVar6) {
    iVar7 = iVar6;
  }
  iVar8 = (iVar2 * this->ComponentNumSubsections + iVar7) * iVar8;
  if (-1 < iVar6) {
    iVar8 = iVar3 % iVar1 + 1 + iVar8;
  }
  return iVar8;
}

// VertexIndexToXY @ 14e616270

void __thiscall
FGLTFLandscapeComponentDataInterface::VertexIndexToXY
          (FGLTFLandscapeComponentDataInterface *this,int param_1,int *param_2,int *param_3)

{
  *param_2 = param_1 % this->ComponentSizeVerts;
  *param_3 = param_1 / this->ComponentSizeVerts;
  return;
}

// VertexXYToTexelXY @ 14e616290

void __thiscall
FGLTFLandscapeComponentDataInterface::VertexXYToTexelXY
          (FGLTFLandscapeComponentDataInterface *this,int param_1,int param_2,int *param_3,
          int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = this->ComponentSubsectionSizeVerts + -1;
  iVar3 = (param_1 + -1) / iVar1;
  iVar2 = (param_2 + -1) / iVar1;
  iVar4 = 0;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  iVar4 = iVar4 * this->ComponentSubsectionSizeVerts;
  if (-1 < iVar3) {
    iVar4 = (param_1 + -1) % iVar1 + 1 + iVar4;
  }
  *param_3 = iVar4;
  iVar4 = 0;
  if (-1 < iVar2) {
    iVar4 = iVar2;
  }
  iVar4 = iVar4 * this->ComponentSubsectionSizeVerts;
  if (-1 < iVar2) {
    iVar4 = (param_2 + -1) % iVar1 + 1 + iVar4;
  }
  *param_4 = iVar4;
  return;
}

