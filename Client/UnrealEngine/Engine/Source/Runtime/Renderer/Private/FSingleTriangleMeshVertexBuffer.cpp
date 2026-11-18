// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// InitRHI @ 145837cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSingleTriangleMeshVertexBuffer::InitRHI
          (FSingleTriangleMeshVertexBuffer *this,FRHICommandListBase *param_1)

{
  (**(code **)((this->Buffers).PositionVertexBuffer._padding_ + 0x18))
            (&(this->Buffers).PositionVertexBuffer);
                    /* WARNING: Could not recover jumptable at 0x000145837cf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->Buffers).StaticMeshVertexBuffer._padding_ + 0x18))(&this->Buffers,param_1);
  return;
}

// ReleaseRHI @ 145837d00

void __thiscall FSingleTriangleMeshVertexBuffer::ReleaseRHI(FSingleTriangleMeshVertexBuffer *this)

{
  (**(code **)((this->Buffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->Buffers).PositionVertexBuffer);
                    /* WARNING: Could not recover jumptable at 0x000145837d26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->Buffers).StaticMeshVertexBuffer._padding_ + 0x20))(&this->Buffers);
  return;
}

// FSingleTriangleMeshVertexBuffer @ 145858a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSingleTriangleMeshVertexBuffer * __thiscall
FSingleTriangleMeshVertexBuffer::FSingleTriangleMeshVertexBuffer
          (FSingleTriangleMeshVertexBuffer *this)

{
  uchar *puVar1;
  ushort *puVar2;
  undefined4 uVar3;
  uchar *puVar4;
  FStaticMeshVertexDataInterface FVar5;
  code *pcVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  FDynamicMeshVertex *pFVar16;
  FSingleTriangleMeshVertexBuffer *pFVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_2b8 [32];
  ForAnyElementType local_268;
  undefined8 local_260;
  ushort local_258;
  ushort local_256;
  TVector<float>_u_0 local_254;
  TVector<float>_u_0 local_248;
  TVector<float>_u_0 local_23c;
  undefined8 local_230;
  float local_228;
  TVector<float>_u_0 local_218;
  undefined8 local_208;
  float local_200;
  ulonglong local_1fc;
  float local_1f4;
  TVector<float>_u_0 local_1e8;
  TVector<float>_u_0 local_1d8;
  FDynamicMeshVertex local_1c8;
  FDynamicMeshVertex local_168;
  FDynamicMeshVertex local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FSingleTriangleMeshVertexBuffer__6B_;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(&(this->Buffers).StaticMeshVertexBuffer);
  FPositionVertexBuffer::FPositionVertexBuffer(&(this->Buffers).PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->Buffers).ColorVertexBuffer);
  uVar21 = 0;
  local_254._s_0.X = -3.0;
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260 = 0;
  local_254._s_0.Y = 1.0;
  local_254._s_0.Z = 0.5;
  pFVar16 = FDynamicMeshVertex::FDynamicMeshVertex(&local_1c8,(TVector<float> *)&local_254._s_0);
  if (((local_268.Data <= pFVar16) &&
      (pFVar16 < (FDynamicMeshVertex *)(local_268.Data + (longlong)local_260._4_4_ * 0x58))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar6 = (code *)swi(3);
    pFVar17 = (FSingleTriangleMeshVertexBuffer *)(*pcVar6)();
    return pFVar17;
  }
  iVar14 = (uint)local_260;
  if ((uint)local_260 == local_260._4_4_) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&local_268,(int *)((longlong)&local_260 + 4));
  }
  local_248._s_0.X = 1.0;
  uVar7 = *(undefined8 *)((longlong)&(pFVar16->Position).field0_0x0 + 8);
  lVar18 = (longlong)iVar14 * 0x58;
  local_248._s_0.Y = -3.0;
  local_248._s_0.Z = 0.5;
  *(undefined8 *)&local_268.Data[lVar18].field_0x0 = *(undefined8 *)&(pFVar16->Position).field0_0x0;
  *(undefined8 *)(local_268.Data + lVar18 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x10) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x10 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x20) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x20 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x30) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x30 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x40) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x40 + 8) = uVar7;
  *(undefined8 *)(local_268.Data + lVar18 + 0x50) = *(undefined8 *)&pFVar16->TangentZ;
  local_260._0_4_ = iVar14 + 1;
  pFVar16 = FDynamicMeshVertex::FDynamicMeshVertex(&local_168,(TVector<float> *)&local_248._s_0);
  if (((local_268.Data <= pFVar16) &&
      (pFVar16 < (FDynamicMeshVertex *)(local_268.Data + (longlong)local_260._4_4_ * 0x58))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar6 = (code *)swi(3);
    pFVar17 = (FSingleTriangleMeshVertexBuffer *)(*pcVar6)();
    return pFVar17;
  }
  if ((uint)local_260 == local_260._4_4_) {
    local_260._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x458,&local_268,(int *)((longlong)&local_260 + 4));
  }
  local_23c._s_0.X = 1.0;
  uVar7 = *(undefined8 *)((longlong)&(pFVar16->Position).field0_0x0 + 8);
  lVar18 = (longlong)(int)(uint)local_260 * 0x58;
  local_23c._s_0.Y = 1.0;
  local_23c._s_0.Z = 0.5;
  *(undefined8 *)&local_268.Data[lVar18].field_0x0 = *(undefined8 *)&(pFVar16->Position).field0_0x0;
  *(undefined8 *)(local_268.Data + lVar18 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x10) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x10 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x20) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x20 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x30) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x30 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x40) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x40 + 8) = uVar7;
  *(undefined8 *)(local_268.Data + lVar18 + 0x50) = *(undefined8 *)&pFVar16->TangentZ;
  local_260._0_4_ = (uint)local_260 + 1;
  pFVar16 = FDynamicMeshVertex::FDynamicMeshVertex(&local_108,(TVector<float> *)&local_23c._s_0);
  if (((local_268.Data <= pFVar16) &&
      (pFVar16 < (FDynamicMeshVertex *)(local_268.Data + (longlong)local_260._4_4_ * 0x58))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar6 = (code *)swi(3);
    pFVar17 = (FSingleTriangleMeshVertexBuffer *)(*pcVar6)();
    return pFVar17;
  }
  iVar14 = (uint)local_260;
  if ((uint)local_260 == local_260._4_4_) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&local_268,(int *)((longlong)&local_260 + 4));
  }
  local_260 = CONCAT44(local_260._4_4_,iVar14 + 1U);
  uVar7 = *(undefined8 *)((longlong)&(pFVar16->Position).field0_0x0 + 8);
  lVar18 = (longlong)iVar14 * 0x58;
  *(undefined8 *)&local_268.Data[lVar18].field_0x0 = *(undefined8 *)&(pFVar16->Position).field0_0x0;
  *(undefined8 *)(local_268.Data + lVar18 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x10) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x10 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x20) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x20 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x30) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x30 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x40) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(local_268.Data + lVar18 + 0x40 + 8) = uVar7;
  uVar22._0_4_ = pFVar16->TangentZ;
  uVar22._4_4_ = pFVar16->Color;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar22;
  *(ulonglong *)(local_268.Data + lVar18 + 0x50) = uVar22;
  FPositionVertexBuffer::Init(&(this->Buffers).PositionVertexBuffer,iVar14 + 1U,true);
  FStaticMeshVertexBuffer::Init(&(this->Buffers).StaticMeshVertexBuffer,(uint)local_260,1,true);
  fVar11 = _UNK_15104007c;
  fVar10 = _UNK_151040078;
  fVar9 = _UNK_151040074;
  fVar8 = ___xmm_3c0102043c0102043c0102043c010204;
  uVar22 = uVar21;
  if (0 < (int)(uint)local_260) {
    do {
      uVar20 = (uint)uVar21;
      uVar15 = 0;
      if ((int)uVar20 < (int)(uint)local_260) {
        uVar15 = ~uVar20 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        pFVar17 = (FSingleTriangleMeshVertexBuffer *)(*pcVar6)();
        return pFVar17;
      }
      FVar12.Data = local_268.Data;
      puVar4 = (this->Buffers).PositionVertexBuffer.Data;
      uVar19 = (ulonglong)(uVar20 * (this->Buffers).PositionVertexBuffer.Stride);
      uVar3 = *(undefined4 *)(local_268.Data + uVar22 + 8);
      *(undefined8 *)(puVar4 + uVar19) = *(undefined8 *)(local_268.Data + uVar22);
      *(undefined4 *)(puVar4 + uVar19 + 8) = uVar3;
      auVar23 = pmovsxbd(auVar23,*(undefined4 *)(local_268.Data + uVar22 + 0x50));
      auVar24 = pmovsxbd(auVar23,*(undefined4 *)(local_268.Data + uVar22 + 0x4c));
      fVar27 = (float)auVar23._0_4_ * fVar8;
      fVar28 = (float)auVar23._4_4_ * fVar9;
      local_208 = CONCAT44(fVar28,fVar27);
      local_200 = (float)auVar23._8_4_ * fVar10;
      fVar29 = (float)auVar23._12_4_ * fVar11;
      fVar25 = (float)auVar24._0_4_ * fVar8;
      fVar26 = (float)auVar24._4_4_ * fVar9;
      local_228 = (float)auVar24._8_4_ * fVar10;
      local_230 = CONCAT44(fVar26,fVar25);
      local_218._s_0.X = (local_228 * fVar28 - local_200 * fVar26) * fVar29;
      local_1fc = CONCAT44(fVar26,fVar25);
      auVar23._8_8_ = 0;
      auVar23._0_8_ = local_1fc;
      local_218._s_0.Y = (local_200 * fVar25 - local_228 * fVar27) * fVar29;
      local_218._s_0.Z = (fVar27 * fVar26 - fVar28 * fVar25) * fVar29;
      local_1f4 = local_228;
      local_1e8._0_8_ = local_208;
      local_1e8._s_0.Z = local_200;
      local_1d8._0_8_ = local_1fc;
      local_1d8._s_0.Z = local_228;
      FStaticMeshVertexBuffer::SetVertexTangents
                (&(this->Buffers).StaticMeshVertexBuffer,uVar20,(TVector<float> *)&local_1d8._s_0,
                 (TVector<float> *)&local_218._s_0,(TVector<float> *)&local_1e8._s_0);
      puVar4 = (this->Buffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      lVar18 = (this->Buffers).StaticMeshVertexBuffer.NumTexCoords * uVar21;
      FVar5 = *(this->Buffers).StaticMeshVertexBuffer.TexcoordData;
      if ((this->Buffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
        puVar2 = (ushort *)(puVar4 + lVar18 * 4);
        lVar18 = (**(code **)((longlong)FVar5 + 0x50))();
        if ((puVar4 + lVar18 < puVar2 + 2) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x166,L""), bVar13)) {
          pcVar6 = (code *)swi(3);
          pFVar17 = (FSingleTriangleMeshVertexBuffer *)(*pcVar6)();
          return pFVar17;
        }
        if ((puVar2 < (this->Buffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x167,L""), bVar13)) {
          pcVar6 = (code *)swi(3);
          pFVar17 = (FSingleTriangleMeshVertexBuffer *)(*pcVar6)();
          return pFVar17;
        }
        local_258 = 0;
        FGenericPlatformMath::StoreHalf(&local_258,*(float *)(FVar12.Data + uVar22 + 0xc));
        *puVar2 = local_258;
        auVar23 = ZEXT416((uint)*(float *)(FVar12.Data + uVar22 + 0x10));
        local_256 = 0;
        FGenericPlatformMath::StoreHalf(&local_256,*(float *)(FVar12.Data + uVar22 + 0x10));
        puVar2[1] = local_256;
      }
      else {
        puVar1 = puVar4 + lVar18 * 8;
        lVar18 = (**(code **)((longlong)FVar5 + 0x50))();
        if ((puVar4 + lVar18 < puVar1 + 8) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15d,L""), bVar13)) {
          pcVar6 = (code *)swi(3);
          pFVar17 = (FSingleTriangleMeshVertexBuffer *)(*pcVar6)();
          return pFVar17;
        }
        if ((puVar1 < (this->Buffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15e,L""), bVar13)) {
          pcVar6 = (code *)swi(3);
          pFVar17 = (FSingleTriangleMeshVertexBuffer *)(*pcVar6)();
          return pFVar17;
        }
        *(undefined8 *)puVar1 = *(undefined8 *)(FVar12.Data + uVar22 + 0xc);
      }
      uVar21 = (ulonglong)(uVar20 + 1);
      uVar22 = uVar22 + 0x58;
    } while ((int)(uVar20 + 1) < (int)(uint)local_260);
  }
  if ((FDynamicMeshVertex *)local_268.Data != (FDynamicMeshVertex *)0x0) {
    FMemory::Free(local_268.Data);
  }
  return this;
}

