// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CustomMeshComponent
// Functions: 7

// FCustomMeshSceneProxy @ 14f02f9f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FCustomMeshSceneProxy * __thiscall
FCustomMeshSceneProxy::FCustomMeshSceneProxy
          (FCustomMeshSceneProxy *this,UCustomMeshComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  bool bVar13;
  EShaderPlatform EVar14;
  uint uVar15;
  FCustomMeshSceneProxy *pFVar16;
  UMaterialInterface *pUVar17;
  UMaterial *pUVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  undefined8 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  uint local_res18;
  longlong local_res20;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> local_1a8;
  undefined8 local_198;
  longlong local_190;
  TVector<float>_u_0 local_188;
  float fStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  TVector<float>_u_0 local_128;
  TVector<float>_u_0 local_11c;
  TVector<float>_u_0 local_110;
  double local_100;
  double local_f8;
  double local_f0;
  
  local_198 = 0;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  *(undefined ***)this = &___7FCustomMeshSceneProxy__6B_;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(&(this->VertexBuffers).StaticMeshVertexBuffer);
  FPositionVertexBuffer::FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FDynamicMeshIndexBuffer32::FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  FLocalVertexFactory::FLocalVertexFactory
            (&this->VertexFactory,*(Type *)(*(longlong *)&this->field_0x220 + 8),
             "FCustomMeshSceneProxy");
  pcVar3 = *(code **)(param_1->_padding_ + 0xaa8);
  EVar14 = FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x220);
  (*pcVar3)(param_1,&this->MaterialRelevance,EVar14);
  local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 0;
  iVar2 = (param_1->CustomMeshTris).ArrayNum;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x58,4,iVar2 * 3,&local_1a8.AllocatorInstance,&local_1a8.ArrayNum,&local_1a8.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2 * 3,&(this->IndexBuffer).Indices.AllocatorInstance,
             &(this->IndexBuffer).Indices.ArrayNum,&(this->IndexBuffer).Indices.ArrayMax);
  local_res18 = 0;
  local_190 = (longlong)iVar2;
  if (0 < iVar2) {
    lVar20 = 0;
    lVar21 = 0xb0;
    uVar22 = 2;
    uVar33 = SUB84(__real_3ff0000000000000,0);
    uVar34 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_res20 = 0;
    dVar31 = __real_3e45798ee0000000;
    do {
      uVar15 = 0;
      if ((int)local_res18 < (param_1->CustomMeshTris).ArrayNum) {
        uVar15 = ~local_res18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         dVar31 = __real_3e45798ee0000000, bVar13)) {
        pcVar3 = (code *)swi(3);
        pFVar16 = (FCustomMeshSceneProxy *)(*pcVar3)();
        return pFVar16;
      }
      pFVar4 = (param_1->CustomMeshTris).AllocatorInstance.Data;
      dVar27 = *(double *)(pFVar4 + lVar20 + 0x18) - *(double *)(pFVar4 + lVar20);
      dVar29 = *(double *)(pFVar4 + lVar20 + 0x20) - *(double *)(pFVar4 + lVar20 + 8);
      dVar28 = *(double *)(pFVar4 + lVar20 + 0x28) - *(double *)(pFVar4 + lVar20 + 0x10);
      dVar26 = dVar29 * dVar29 + dVar27 * dVar27 + dVar28 * dVar28;
      uVar5 = dVar27;
      uVar6 = dVar29;
      uVar7 = dVar28;
      if ((dVar26 != (double)CONCAT44(uVar34,uVar33)) &&
         (uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, dVar31 <= dVar26)) {
        local_100 = (double)CONCAT44(uVar34,uVar33) / SQRT(dVar26);
        uVar5 = dVar27 * local_100;
        uVar6 = dVar29 * local_100;
        uVar7 = dVar28 * local_100;
      }
      dVar26 = (*(double *)(pFVar4 + lVar20 + 0x38) - *(double *)(pFVar4 + lVar20 + 8)) * dVar28 -
               (*(double *)(pFVar4 + lVar20 + 0x40) - *(double *)(pFVar4 + lVar20 + 0x10)) * dVar29;
      dVar31 = dVar27 * (*(double *)(pFVar4 + lVar20 + 0x40) - *(double *)(pFVar4 + lVar20 + 0x10))
               - (*(double *)(pFVar4 + lVar20 + 0x30) - *(double *)(pFVar4 + lVar20)) * dVar28;
      dVar29 = (*(double *)(pFVar4 + lVar20 + 0x30) - *(double *)(pFVar4 + lVar20)) * dVar29 -
               (*(double *)(pFVar4 + lVar20 + 0x38) - *(double *)(pFVar4 + lVar20 + 8)) * dVar27;
      dVar27 = dVar31 * dVar31 + dVar26 * dVar26 + dVar29 * dVar29;
      uVar30 = dVar29;
      uVar32 = dVar26;
      uVar8 = dVar31;
      if ((dVar27 != __real_3ff0000000000000) &&
         (uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         __real_3e45798ee0000000 <= dVar27)) {
        local_f8 = __real_3ff0000000000000 / SQRT(dVar27);
        uVar30 = dVar29 * local_f8;
        uVar32 = dVar26 * local_f8;
        uVar8 = dVar31 * local_f8;
      }
      dVar31 = (double)uVar30 * (double)uVar6 - (double)uVar8 * (double)uVar7;
      dVar27 = (double)uVar32 * (double)uVar7 - (double)uVar30 * (double)uVar5;
      dVar29 = (double)uVar8 * (double)uVar5 - (double)uVar32 * (double)uVar6;
      dVar28 = dVar27 * dVar27 + dVar31 * dVar31 + dVar29 * dVar29;
      uVar9 = dVar31;
      uVar10 = dVar27;
      uVar11 = dVar29;
      if ((dVar28 != __real_3ff0000000000000) &&
         (uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         __real_3e45798ee0000000 <= dVar28)) {
        local_f0 = __real_3ff0000000000000 / SQRT(dVar28);
        uVar9 = dVar31 * local_f0;
        uVar10 = dVar27 * local_f0;
        uVar11 = dVar29 * local_f0;
      }
      local_128._s_0.X = (float)(double)uVar32;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0xffffffff;
      local_128._s_0.Y = (float)(double)uVar8;
      local_128._s_0.Z = (float)(double)uVar30;
      local_11c._s_0.X = (float)(double)uVar9;
      local_11c._s_0.Y = (float)(double)uVar10;
      local_110._s_0.X = (float)(double)uVar5;
      local_11c._s_0.Z = (float)(double)uVar11;
      local_110._s_0.Z = (float)(double)uVar7;
      local_110._s_0.Y = (float)(double)uVar6;
      FDynamicMeshVertex::SetTangents
                ((FDynamicMeshVertex *)&local_188._s_0,(TVector<float> *)&local_110._s_0,
                 (TVector<float> *)&local_11c._s_0,(TVector<float> *)&local_128._s_0);
      uVar11 = local_148;
      uVar10 = uStack_150;
      uVar9 = local_158;
      uVar32 = uStack_160;
      uVar30 = local_168;
      uVar8 = uStack_170;
      uVar7 = local_178;
      fVar12 = fStack_17c;
      uVar5 = CONCAT44(uStack_13c,uStack_140);
      uVar6 = CONCAT44(uStack_134,uStack_138);
      uVar19 = ~(uVar22 - 2) >> 0x1f;
      fVar23 = (float)*(double *)(pFVar4 + lVar20);
      uVar15 = 0;
      if ((int)(uVar22 - 2) < local_1a8.ArrayNum) {
        uVar15 = uVar19;
      }
      fVar24 = (float)*(double *)(pFVar4 + lVar20 + 8);
      fVar25 = (float)*(double *)(pFVar4 + lVar20 + 0x10);
      local_188._s_0.X = fVar23;
      local_188._s_0.Y = fVar24;
      local_188._s_0.Z = fVar25;
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        pFVar16 = (FCustomMeshSceneProxy *)(*pcVar3)();
        return pFVar16;
      }
      pFVar1 = local_1a8.AllocatorInstance.Data + lVar21 + -0xb0;
      *(float *)pFVar1 = fVar23;
      *(float *)(pFVar1 + 4) = fVar24;
      *(float *)(pFVar1 + 8) = fVar25;
      *(float *)(pFVar1 + 0xc) = fVar12;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + -0xa0) = uVar7;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + -0xa0 + 8) = uVar8;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + -0x90) = uVar30;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + -0x90 + 8) = uVar32;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + -0x80) = uVar9;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + -0x80 + 8) = uVar10;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + -0x70) = uVar11;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + -0x70 + 8) = uVar5;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + -0x60) = uVar6;
      uVar15 = 0;
      if ((int)(uVar22 - 2) < (this->IndexBuffer).Indices.ArrayNum) {
        uVar15 = uVar19;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        pFVar16 = (FCustomMeshSceneProxy *)(*pcVar3)();
        return pFVar16;
      }
      uVar11 = local_148;
      uVar10 = uStack_150;
      uVar9 = local_158;
      uVar32 = uStack_160;
      uVar30 = local_168;
      uVar8 = uStack_170;
      uVar7 = local_178;
      fVar12 = fStack_17c;
      uVar5 = CONCAT44(uStack_13c,uStack_140);
      uVar6 = CONCAT44(uStack_134,uStack_138);
      *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + local_res20) = uVar22 - 2;
      uVar19 = ~(uVar22 - 1) >> 0x1f;
      fVar23 = (float)*(double *)(pFVar4 + lVar20 + 0x18);
      uVar15 = 0;
      if ((int)(uVar22 - 1) < local_1a8.ArrayNum) {
        uVar15 = uVar19;
      }
      fVar24 = (float)*(double *)(pFVar4 + lVar20 + 0x20);
      fVar25 = (float)*(double *)(pFVar4 + lVar20 + 0x28);
      local_188._s_0.X = fVar23;
      local_188._s_0.Y = fVar24;
      local_188._s_0.Z = fVar25;
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        pFVar16 = (FCustomMeshSceneProxy *)(*pcVar3)();
        return pFVar16;
      }
      pFVar1 = local_1a8.AllocatorInstance.Data + lVar21 + -0x58;
      *(float *)pFVar1 = fVar23;
      *(float *)(pFVar1 + 4) = fVar24;
      *(float *)(pFVar1 + 8) = fVar25;
      *(float *)(pFVar1 + 0xc) = fVar12;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + -0x48) = uVar7;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + -0x48 + 8) = uVar8;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + -0x38) = uVar30;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + -0x38 + 8) = uVar32;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + -0x28) = uVar9;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + -0x28 + 8) = uVar10;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + -0x18) = uVar11;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + -0x18 + 8) = uVar5;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + -8) = uVar6;
      uVar15 = 0;
      if ((int)(uVar22 - 1) < (this->IndexBuffer).Indices.ArrayNum) {
        uVar15 = uVar19;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        pFVar16 = (FCustomMeshSceneProxy *)(*pcVar3)();
        return pFVar16;
      }
      uVar11 = local_148;
      uVar10 = uStack_150;
      uVar9 = local_158;
      uVar32 = uStack_160;
      uVar30 = local_168;
      uVar8 = uStack_170;
      uVar7 = local_178;
      fVar12 = fStack_17c;
      uVar5 = CONCAT44(uStack_13c,uStack_140);
      uVar6 = CONCAT44(uStack_134,uStack_138);
      *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + local_res20 + 4) = uVar22 - 1;
      fVar23 = (float)*(double *)(pFVar4 + lVar20 + 0x30);
      uVar15 = 0;
      if ((int)uVar22 < local_1a8.ArrayNum) {
        uVar15 = ~uVar22 >> 0x1f;
      }
      fVar24 = (float)*(double *)(pFVar4 + lVar20 + 0x38);
      fVar25 = (float)*(double *)(pFVar4 + lVar20 + 0x40);
      local_188._s_0.X = fVar23;
      local_188._s_0.Y = fVar24;
      local_188._s_0.Z = fVar25;
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        pFVar16 = (FCustomMeshSceneProxy *)(*pcVar3)();
        return pFVar16;
      }
      pFVar4 = local_1a8.AllocatorInstance.Data + lVar21;
      *(float *)pFVar4 = fVar23;
      *(float *)(pFVar4 + 4) = fVar24;
      *(float *)(pFVar4 + 8) = fVar25;
      *(float *)(pFVar4 + 0xc) = fVar12;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + 0x10) = uVar7;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + 0x10 + 8) = uVar8;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + 0x20) = uVar30;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + 0x20 + 8) = uVar32;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + 0x30) = uVar9;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + 0x30 + 8) = uVar10;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + 0x40) = uVar11;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + 0x40 + 8) = uVar5;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + lVar21 + 0x50) = uVar6;
      uVar15 = 0;
      if ((int)uVar22 < (this->IndexBuffer).Indices.ArrayNum) {
        uVar15 = ~uVar22 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        pFVar16 = (FCustomMeshSceneProxy *)(*pcVar3)();
        return pFVar16;
      }
      dVar31 = __real_3e45798ee0000000;
      lVar20 = lVar20 + 0x48;
      lVar21 = lVar21 + 0x108;
      local_res18 = local_res18 + 1;
      uVar33 = SUB84(__real_3ff0000000000000,0);
      uVar34 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + local_res20 + 8) = uVar22;
      uVar22 = uVar22 + 3;
      local_res20 = local_res20 + 0xc;
      local_190 = local_190 + -1;
    } while (local_190 != 0);
    local_190 = 0;
  }
  FStaticMeshVertexBuffers::InitFromDynamicVertex
            (&this->VertexBuffers,(FRHICommandListBase *)0x0,(FRenderCommandPipe *)0x0,
             &this->VertexFactory,&local_1a8,1,0);
  BeginInitResource((FRenderResource *)&(this->VertexBuffers).PositionVertexBuffer,
                    (FRenderCommandPipe *)0x0);
  BeginInitResource((FRenderResource *)&this->VertexBuffers,(FRenderCommandPipe *)0x0);
  BeginInitResource((FRenderResource *)&(this->VertexBuffers).ColorVertexBuffer,
                    (FRenderCommandPipe *)0x0);
  BeginInitResource((FRenderResource *)&this->IndexBuffer,(FRenderCommandPipe *)0x0);
  BeginInitResource((FRenderResource *)&this->VertexFactory,(FRenderCommandPipe *)0x0);
  pUVar17 = (UMaterialInterface *)(**(code **)(param_1->_padding_ + 0x690))(param_1,0);
  this->Material = pUVar17;
  if (pUVar17 == (UMaterialInterface *)0x0) {
    pUVar18 = UMaterial::GetDefaultMaterial(MD_Surface);
    this->Material = (UMaterialInterface *)pUVar18;
  }
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  return this;
}

// ~FCustomMeshSceneProxy @ 14f030560

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FCustomMeshSceneProxy::~FCustomMeshSceneProxy(FCustomMeshSceneProxy *this)

{
  FStaticMeshVertexBuffers *this_00;
  
  *(undefined ***)this = &___7FCustomMeshSceneProxy__6B_;
  this_00 = &this->VertexBuffers;
  (**(code **)((this->VertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).PositionVertexBuffer);
  (**(code **)((this_00->StaticMeshVertexBuffer)._padding_ + 0x20))(this_00);
  (**(code **)((this->VertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).ColorVertexBuffer);
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))(&this->IndexBuffer);
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this_00->StaticMeshVertexBuffer);
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// CanBeOccluded @ 14f0311c0

bool __thiscall FCustomMeshSceneProxy::CanBeOccluded(FCustomMeshSceneProxy *this)

{
  return (bool)(~(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 2) & 1);
}

// GetDynamicMeshElements @ 14f0312a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCustomMeshSceneProxy::GetDynamicMeshElements
          (FCustomMeshSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  UMaterial *pUVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FCustomMeshSceneProxy *this_00;
  bool bVar11;
  bool bVar12;
  FNameEntryId FVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  FName *pFVar17;
  TStatIdData *pTVar18;
  FColoredMaterialRenderProxy *this_01;
  undefined4 extraout_var;
  FMaterialRenderProxy *pFVar19;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar20;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar21;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar22;
  float *pfVar23;
  longlong lVar24;
  FName FVar25;
  uint uVar26;
  ForElementType<FMeshBatchElement> FVar27;
  ForElementType<FMeshBatchElement> FVar28;
  byte bVar29;
  undefined1 auStackY_598 [32];
  FColoredMaterialRenderProxy *local_530;
  FColor_u_0 local_524;
  FName local_520;
  FNameEntryId local_518;
  uint uStack_514;
  FName local_510;
  FName local_508;
  undefined1 local_4f8 [8];
  FCustomMeshSceneProxy *local_4f0;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_4e8;
  FName local_4e0;
  FName local_4d8;
  FLinearColor_u_0 local_4d0;
  undefined1 local_4b8 [664];
  float local_220 [114];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_598;
  bVar29 = 0;
  local_4f0 = this;
  local_4e8 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FCustomMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FCustomMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FCustomMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_CustomMeshSceneProxy_GetDynamicMeshElements = (TStatIdData *)0x0;
    pFVar17 = ::FName::FName(&local_4e0,"STAT_CustomMeshSceneProxy_GetDynamicMeshElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FCustomMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::StatPtr_STAT_CustomMeshSceneProxy_GetDynamicMeshElements,*pFVar17,
               L"STAT_CustomMeshSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FCustomMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar18 = _StatPtr_STAT_CustomMeshSceneProxy_GetDynamicMeshElements;
  if (_StatPtr_STAT_CustomMeshSceneProxy_GetDynamicMeshElements == (TStatIdData *)0x0) {
    pFVar17 = ::FName::FName(&local_4d8,"STAT_CustomMeshSceneProxy_GetDynamicMeshElements");
    pTVar18 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_void___cdecl_FCustomMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                          ::__l2::StatPtr_STAT_CustomMeshSceneProxy_GetDynamicMeshElements,*pFVar17,
                         L"STAT_CustomMeshSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)&pTVar18->Name;
  bVar6 = false;
  bVar8 = false;
  local_508.ComparisonIndex.Value = 0;
  local_508.Number = 0;
  bVar11 = false;
  bVar12 = false;
  if ((FVar25.ComparisonIndex.Value.Value != 0) ||
     (bVar5 = bVar6, bVar7 = bVar8, FVar25.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_524.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_524._s_0,(pTVar18->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      bVar11 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_520.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_520.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_520,(pTVar18->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CustomMeshComponent\\Source\\CustomMeshComponent\\Private\\CustomMeshComponent.cpp"
                   ,99);
        bVar6 = true;
        bVar8 = true;
        bVar11 = true;
        bVar12 = true;
      }
    }
    bVar5 = bVar6;
    bVar7 = bVar8;
    if (FThreadStats::bPrimaryEnable != false) {
      local_510 = FVar25;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar11 = true;
      goto LAB_14f03147a;
    }
  }
  bVar8 = bVar12;
  bVar6 = bVar11;
  bVar11 = false;
  local_510 = local_508;
  FVar25 = local_508;
LAB_14f03147a:
  bVar12 = AllowDebugViewmodes();
  if ((bVar12) && ((param_2->EngineShowFlags).Wireframe != 0)) {
    bVar29 = 1;
  }
  this_01 = ::operator_new(0xe0);
  if (this_01 == (FColoredMaterialRenderProxy *)0x0) {
    local_530 = (FColoredMaterialRenderProxy *)0x0;
  }
  else {
    FVar13 = FNameEntryId::FromValidEName((EName)local_4f8);
    uStack_514 = 0;
    local_518.Value = *(uint *)CONCAT44(extraout_var,FVar13.Value);
    local_4d0._0_8_ = ___xmm_3f8000003f8000003f00000000000000;
    local_4d0._8_8_ = _UNK_152242e48;
    pUVar1 = (GEngine->WireframeMaterial).field0_0x0.DebugPtr;
    if (pUVar1 == (UMaterial *)0x0) {
      pFVar19 = (FMaterialRenderProxy *)0x0;
    }
    else {
      pFVar19 = (FMaterialRenderProxy *)(**(code **)(pUVar1->_padding_ + 0x310))();
    }
    FVar4.Number = uStack_514;
    FVar4.ComparisonIndex.Value = local_518.Value;
    local_530 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                          (this_01,pFVar19,(FLinearColor *)&local_4d0._s_0,FVar4);
  }
  uVar26 = 0;
  FMeshElementCollector::RegisterOneFrameMaterialProxy(param_4,(FMaterialRenderProxy *)local_530);
  if (bVar29 == 0) {
    local_530 = (FColoredMaterialRenderProxy *)(**(code **)(this->Material->_padding_ + 0x310))();
  }
  this_00 = local_4f0;
  uVar10 = _UNK_150689648;
  uVar9 = ___xmm_3f800000000000000000000000000000;
  iVar15 = param_1->ArrayNum;
  if (0 < iVar15) {
    do {
      if ((param_3 >> (uVar26 & 0x1f) & 1) != 0) {
        uVar14 = 0;
        if ((int)uVar26 < iVar15) {
          uVar14 = ~uVar26 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar15 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                 ::Add(&param_4->MeshBatchStorage,1);
        uVar14 = iVar15 / 0x49;
        uVar16 = 0;
        if ((int)uVar14 < (param_4->MeshBatchStorage).Chunks.Array.ArrayNum) {
          uVar16 = ~uVar14 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar27 = (ForElementType<FMeshBatchElement>)
                 ((ulonglong)(uint)(iVar15 % 0x49) * 0xe0 +
                 (longlong)
                 (param_4->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar14]);
        if ((*(int *)((longlong)FVar27 + 0xa0) < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar28 = FVar27;
        if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar27 + 0x98) !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FVar28 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar27 + 0x98);
        }
        *(FDynamicMeshIndexBuffer32 **)((longlong)FVar28 + 0x18) = &this_00->IndexBuffer;
        *(uint *)((longlong)FVar27 + 0xd4) = *(uint *)((longlong)FVar27 + 0xd4) & 0xffffffbf;
        *(uint *)((longlong)FVar27 + 0xd4) = *(uint *)((longlong)FVar27 + 0xd4) | (uint)bVar29 << 6;
        *(FLocalVertexFactory **)((longlong)FVar27 + 0xa8) = &this_00->VertexFactory;
        *(FColoredMaterialRenderProxy **)((longlong)FVar27 + 0xb0) = local_530;
        paVar2 = &param_4->OneFrameResources->Next;
        aVar20 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                  )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
        *(undefined8 *)((longlong)aVar20 + 8) = 0;
        *(undefined ***)aVar20 =
             &
             ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
        ;
        TVar21.Next = *paVar2;
        do {
          *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
            *)((longlong)aVar20 + 8) = TVar21.Next;
          LOCK();
          aVar22 = *paVar2;
          bVar12 = TVar21.Next == aVar22;
          if (bVar12) {
            *paVar2 = aVar20;
            aVar22 = TVar21.Next;
          }
          UNLOCK();
          TVar21.Next = aVar22;
        } while (!bVar12);
        FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer
                  ((FDynamicPrimitiveUniformBuffer *)((longlong)aVar20 + 0x10));
        lVar24 = 9;
        local_4b8._368_8_ = uVar9;
        local_4b8._376_8_ = uVar10;
        pfVar23 = &(((FPrimitiveUniformShaderParametersBuilder *)local_4b8)->Parameters).
                   CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
        local_4b8._448_8_ = uVar9;
        local_4b8._456_8_ = uVar10;
        do {
          ((TVector4<float>_u_0_s_0 *)(pfVar23 + -2))->X = 0.0;
          ((TVector4<float>_u_0_s_0 *)(pfVar23 + -2))->Y = 0.0;
          *pfVar23 = 0.0;
          pfVar23[1] = 1.0;
          pfVar23 = pfVar23 + 4;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        FPrimitiveSceneProxy::BuildUniformShaderParameters
                  ((FPrimitiveSceneProxy *)this_00,
                   (FPrimitiveUniformShaderParametersBuilder *)local_4b8);
        if ((param_4->RHICmdList == (FRHICommandList *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("RHICmdList",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                ,0x46,L""), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FDynamicPrimitiveUniformBuffer::Set
                  ((FDynamicPrimitiveUniformBuffer *)((longlong)aVar20 + 0x10),
                   (FRHICommandListBase *)param_4->RHICmdList,
                   (FPrimitiveUniformShaderParametersBuilder *)local_4b8);
        *(undefined4 *)((longlong)FVar28 + 0x58) = 0;
        *(undefined8 **)((longlong)FVar28 + 8) = (undefined8 *)((longlong)aVar20 + 0x18);
        iVar15 = (this_00->IndexBuffer).Indices.ArrayNum;
        *(undefined4 *)((longlong)FVar28 + 0x68) = 0;
        *(int *)((longlong)FVar28 + 0x5c) =
             iVar15 / 3 + (iVar15 >> 0x1f) +
             (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) & 0xffffffffU) >> 0x1f);
        *(uint *)((longlong)FVar28 + 0x6c) =
             (this_00->VertexBuffers).PositionVertexBuffer.NumVertices - 1;
        *(uint *)((longlong)FVar27 + 0xd4) =
             ((byte)this_00->field_0x78 & 1 ^ *(uint *)((longlong)FVar27 + 0xd4) & 0xfffffffe) &
             0xffffc07f;
        FMeshElementCollector::AddMesh(param_4,uVar26,(FMeshBatch *)FVar27);
        param_1 = local_4e8;
      }
      iVar15 = param_1->ArrayNum;
      uVar26 = uVar26 + 1;
      FVar25 = local_510;
      bVar5 = bVar6;
      bVar7 = bVar8;
    } while ((int)uVar26 < iVar15);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  return;
}

// GetMemoryFootprint @ 14f031960

uint __thiscall FCustomMeshSceneProxy::GetMemoryFootprint(FCustomMeshSceneProxy *this)

{
  return *(int *)&this->field_0x104 * 4 + 0x660;
}

// GetTypeHash @ 14f031a50

ulong64 __thiscall FCustomMeshSceneProxy::GetTypeHash(FCustomMeshSceneProxy *this)

{
  return 0x1553b1b50;
}

// GetViewRelevance @ 14f031a60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FCustomMeshSceneProxy::GetViewRelevance
          (FCustomMeshSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 2;
  bVar2 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 3 | 2;
  uVar3 = ((uint)(byte)this->field_0x7b << 4 ^ *(uint *)&__return_storage_ptr__->field_0x8) & 0x80 ^
          *(uint *)&__return_storage_ptr__->field_0x8;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar3;
  uVar4 = 0;
  if (this->field_0x89 != '\x01') {
    uVar4 = 0x2000;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar4 | uVar3 & 0xffffdfff;
  bVar2 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 5;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 ^
       ((uint)(byte)this->field_0x7f << 0xe ^ *(uint *)&__return_storage_ptr__->field_0x8) & 0x4000;
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  if (((((this->field_0x68 == '\x02') || (this->field_0x68 == '\x01')) ||
       ((this->field_0x86 & 1) != 0)) ||
      (((char)this->field_0x82 < '\0' || (uVar4 = 0, (this->field_0x82 & 0x72) != 0)))) &&
     ((uVar4 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      (__return_storage_ptr__->bRenderInMainPass != 0)))) {
    uVar4 = 0x10;
  }
  __return_storage_ptr__->bVelocityRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar4;
  return __return_storage_ptr__;
}

