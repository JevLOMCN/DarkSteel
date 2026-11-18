// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// GetUsedMaterialPropertyDesc<UPCGProceduralISMComponent> @ 149730e90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

FPrimitiveMaterialPropertyDescriptor * __cdecl
FPrimitiveComponentHelper::GetUsedMaterialPropertyDesc<UPCGProceduralISMComponent>
          (FPrimitiveMaterialPropertyDescriptor *__return_storage_ptr__,
          UPCGProceduralISMComponent *param_1,EShaderPlatform param_2)

{
  UMaterialInterface *this;
  float fVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  EBlendMode EVar8;
  longlong lVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  ForAnyElementType FVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_d8 [8];
  undefined1 local_d0 [5];
  byte local_cb;
  float local_c8;
  float local_c4;
  FScriptContainerElement *local_c0;
  undefined8 local_b8;
  float fStack_b0;
  char cStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  char cStack_a9;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  
  cVar10 = '\0';
  local_b8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  uVar12 = 0;
  fStack_b0 = 0.0;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar11 = false;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  cVar13 = '\0';
  cStack_ac = '\0';
  uStack_ab = 0;
  uStack_aa = 0;
  cStack_a9 = '\0';
  UStaticMeshComponent::GetUsedMaterials((UStaticMeshComponent *)param_1,&local_a8,false);
  bVar5 = UseNaniteTessellation();
  uVar2 = __xmm_80000000800000008000000080000000;
  fVar1 = __real_3f800000;
  iVar4 = local_a8.ArrayNum;
  local_c0 = local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 8;
  FVar14.Data = local_a8.AllocatorInstance.Data;
  fVar18 = (float)local_b8._4_4_;
  fVar19 = (float)(undefined4)local_b8;
  fVar20 = 0.0;
  do {
    while( true ) {
      pFVar3 = local_c0;
      if (local_a8.ArrayNum != iVar4) {
        `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (FVar14.Data == pFVar3) {
        local_b8._4_4_ = fVar18;
        local_b8._0_4_ = fVar19;
        (__return_storage_ptr__->MinMaxMaterialDisplacement).field0_0x0 = local_b8;
        __return_storage_ptr__->MaxWorldPositionOffsetDisplacement = fVar20;
        __return_storage_ptr__->bAnyMaterialHasWorldPositionOffset = (bool)cStack_ac;
        __return_storage_ptr__->bAnyMaterialHasPixelAnimation = (bool)uStack_ab;
        __return_storage_ptr__->bAnyMaterialHasPerInstanceCustomData = (bool)uStack_aa;
        __return_storage_ptr__->bAnyMaterialHasPerInstanceRandom = (bool)cStack_a9;
        if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          fStack_b0 = fVar20;
          FMemory::Free(local_a8.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      this = *(UMaterialInterface **)FVar14.Data;
      if (this != (UMaterialInterface *)0x0) break;
LAB_149731076:
      FVar14.Data = FVar14.Data + 8;
    }
    UMaterialInterface::GetRelevance_Concurrent(this,(EShaderPlatform)local_d0);
    if ((cVar10 != '\0') || ((local_cb & 0x40) != 0)) {
      cVar10 = '\x01';
    }
    cStack_ac = cVar10;
    cVar6 = (**(code **)(this->_padding_ + 0x520))(this);
    if (cVar6 != '\0') {
      EVar8 = (**(code **)(this->_padding_ + 0x460))(this);
      bVar7 = IsOpaqueOrMaskedBlendMode(EVar8);
      uStack_ab = uVar12;
      if (bVar7) {
        uVar12 = 1;
        uStack_ab = uVar12;
      }
    }
    fVar16 = fVar18;
    fVar15 = fVar19;
    if ((bVar5) && ((local_cb & 0x80) != 0)) {
      (**(code **)(this->_padding_ + 0x4e8))(this,&local_c8);
      fVar15 = (float)((uint)(local_c8 * local_c4) ^ uVar2);
      if (fVar19 <= fVar15) {
        fVar15 = fVar19;
      }
      fVar16 = (fVar1 - local_c4) * local_c8;
      if (fVar16 <= fVar18) {
        fVar16 = fVar18;
      }
    }
    fVar17 = (float)(**(code **)(this->_padding_ + 0x500))(this);
    if (fVar17 <= fVar20) {
      fVar17 = fVar20;
    }
    local_98 = 0;
    uStack_90 = 0;
    lVar9 = (**(code **)(this->_padding_ + 0x2f0))(this,&local_98);
    if ((cVar13 != '\0') || ((*(uint *)(lVar9 + 0x4d0) & 0x400) != 0)) {
      cVar13 = '\x01';
    }
    fVar18 = fVar16;
    fVar19 = fVar15;
    fVar20 = fVar17;
    cStack_a9 = cVar13;
    if ((bVar11) || ((*(uint *)(lVar9 + 0x4d0) & 0x200) != 0)) {
      bVar11 = true;
      uStack_aa = 1;
      goto LAB_149731076;
    }
    FVar14.Data = FVar14.Data + 8;
    uStack_aa = 0;
  } while( true );
}

