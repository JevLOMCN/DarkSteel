// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// AddNavigationModifier<UPrimitiveComponent> @ 1478951d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __cdecl
FPrimitiveComponentHelper::AddNavigationModifier<UPrimitiveComponent>
          (UPrimitiveComponent *param_1,FNavigationRelevantData *param_2)

{
  undefined1 *puVar1;
  FDestructionSentinel local_78;
  undefined1 local_60 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  int local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  ForAnyElementType local_20;
  undefined8 local_18;
  uint local_10;
  ENavigationDataResolution local_c;
  
  puVar1 = &param_1->field_0x281;
  if (param_1->bFillCollisionUnderneathForNavmesh != '\0' ||
      param_1->bRasterizeAsFilledConvexVolume != '\0') {
    local_60._0_4_ = local_60._0_4_ & 0xfffffffe;
    local_c = Invalid;
    local_48 = 0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38._0_4_ = 0;
    local_38._4_4_ = 0;
    local_10 = (((byte)*puVar1 & 2) * 2 | param_1->bFillCollisionUnderneathForNavmesh) << 4 |
               local_10 & 0xffffff80;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28._0_4_ = 0;
    local_28._4_4_ = 0;
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_50.Data = (FScriptContainerElement *)0x0;
    local_20.Data = (FScriptContainerElement *)0x0;
    local_18._0_4_ = 0;
    local_18._4_4_ = 0;
    FCompositeNavModifier::Add(&param_2->Modifiers,(FCompositeNavModifier *)local_60);
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
    DestructItems<FSimpleLinkNavModifier,int>((FSimpleLinkNavModifier *)local_30.Data,(int)local_28)
    ;
    if ((FSimpleLinkNavModifier *)local_30.Data != (FSimpleLinkNavModifier *)0x0) {
      FMemory::Free(local_30.Data);
    }
    DestructItems<FAreaNavModifier,int>((FAreaNavModifier *)local_40.Data,(int)local_38);
    if ((FAreaNavModifier *)local_40.Data != (FAreaNavModifier *)0x0) {
      FMemory::Free(local_40.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_78);
    if ((local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (FStack_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  }
  return;
}

// GetNavigationData<UPrimitiveComponent> @ 14789ecc0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FPrimitiveComponentHelper::GetNavigationData<UPrimitiveComponent>
          (UPrimitiveComponent *param_1,FNavigationRelevantData *param_2)

{
  undefined1 *puVar1;
  FDestructionSentinel FStack_78;
  undefined1 auStack_60 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_58;
  ForAnyElementType FStack_50;
  int iStack_48;
  ForAnyElementType FStack_40;
  undefined8 uStack_38;
  ForAnyElementType FStack_30;
  undefined8 uStack_28;
  ForAnyElementType FStack_20;
  undefined8 uStack_18;
  uint uStack_10;
  ENavigationDataResolution EStack_c;
  
  puVar1 = &param_1->field_0x281;
  if (param_1->bFillCollisionUnderneathForNavmesh != '\0' ||
      param_1->bRasterizeAsFilledConvexVolume != '\0') {
    auStack_60._0_4_ = auStack_60._0_4_ & 0xfffffffe;
    EStack_c = Invalid;
    iStack_48 = 0;
    FStack_40.Data = (FScriptContainerElement *)0x0;
    uStack_38._0_4_ = 0;
    uStack_38._4_4_ = 0;
    uStack_10 = (((byte)*puVar1 & 2) * 2 | param_1->bFillCollisionUnderneathForNavmesh) << 4 |
                uStack_10 & 0xffffff80;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    uStack_28._0_4_ = 0;
    uStack_28._4_4_ = 0;
    TStack_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_50.Data = (FScriptContainerElement *)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    uStack_18._0_4_ = 0;
    uStack_18._4_4_ = 0;
    FCompositeNavModifier::Add(&param_2->Modifiers,(FCompositeNavModifier *)auStack_60);
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    DestructItems<FSimpleLinkNavModifier,int>
              ((FSimpleLinkNavModifier *)FStack_30.Data,(int)uStack_28);
    if ((FSimpleLinkNavModifier *)FStack_30.Data != (FSimpleLinkNavModifier *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    DestructItems<FAreaNavModifier,int>((FAreaNavModifier *)FStack_40.Data,(int)uStack_38);
    if ((FAreaNavModifier *)FStack_40.Data != (FAreaNavModifier *)0x0) {
      FMemory::Free(FStack_40.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_58,(FWriteAccessScope *)&FStack_78);
    if ((iStack_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
      iStack_48 = 0;
    }
    if (FStack_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_78.Accessor,&FStack_78);
    }
    if (FStack_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_58.AccessDetector);
  }
  return;
}

// GetUsedMaterialPropertyDesc<UInstancedSkinnedMeshComponent> @ 14789f270

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

FPrimitiveMaterialPropertyDescriptor * __cdecl
FPrimitiveComponentHelper::GetUsedMaterialPropertyDesc<UInstancedSkinnedMeshComponent>
          (FPrimitiveMaterialPropertyDescriptor *__return_storage_ptr__,
          UInstancedSkinnedMeshComponent *param_1,EShaderPlatform param_2)

{
  UMaterialInterface *this;
  float fVar1;
  uint uVar2;
  undefined8 *puVar3;
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
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res20 [8];
  undefined1 local_e8 [5];
  byte local_e3;
  float local_e0;
  float local_dc;
  undefined8 *local_d8;
  undefined8 local_d0;
  float fStack_c8;
  char cStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  char cStack_c1;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  cVar10 = '\0';
  uVar12 = 0;
  local_d0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  bVar11 = false;
  fStack_c8 = 0.0;
  local_c0 = (undefined8 *)0x0;
  cVar13 = '\0';
  local_b8 = 0;
  cStack_c4 = '\0';
  uStack_c3 = 0;
  uStack_c2 = 0;
  cStack_c1 = '\0';
  (**(code **)(*(longlong *)param_1 + 0x7f0))(param_1,&local_c0,0);
  bVar5 = UseNaniteTessellation();
  uVar2 = __xmm_80000000800000008000000080000000;
  fVar1 = __real_3f800000;
  iVar4 = (int)local_b8;
  local_d8 = local_c0 + (int)local_b8;
  puVar14 = local_c0;
  fVar18 = (float)local_d0._4_4_;
  fVar19 = (float)(undefined4)local_d0;
  fVar20 = 0.0;
  do {
    while( true ) {
      puVar3 = local_d8;
      if ((int)local_b8 != iVar4) {
        `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (puVar14 == puVar3) {
        local_d0._4_4_ = fVar18;
        local_d0._0_4_ = fVar19;
        (__return_storage_ptr__->MinMaxMaterialDisplacement).field0_0x0 = local_d0;
        __return_storage_ptr__->MaxWorldPositionOffsetDisplacement = fVar20;
        __return_storage_ptr__->bAnyMaterialHasWorldPositionOffset = (bool)cStack_c4;
        __return_storage_ptr__->bAnyMaterialHasPixelAnimation = (bool)uStack_c3;
        __return_storage_ptr__->bAnyMaterialHasPerInstanceCustomData = (bool)uStack_c2;
        __return_storage_ptr__->bAnyMaterialHasPerInstanceRandom = (bool)cStack_c1;
        if (local_c0 != (undefined8 *)0x0) {
          fStack_c8 = fVar20;
          FMemory::Free(local_c0);
        }
        return __return_storage_ptr__;
      }
      this = (UMaterialInterface *)*puVar14;
      if (this != (UMaterialInterface *)0x0) break;
LAB_14789f45f:
      puVar14 = puVar14 + 1;
    }
    UMaterialInterface::GetRelevance_Concurrent(this,(EShaderPlatform)local_e8);
    if ((cVar10 != '\0') || ((local_e3 & 0x40) != 0)) {
      cVar10 = '\x01';
    }
    cStack_c4 = cVar10;
    cVar6 = (**(code **)(this->_padding_ + 0x520))(this);
    if (cVar6 != '\0') {
      EVar8 = (**(code **)(this->_padding_ + 0x460))(this);
      bVar7 = IsOpaqueOrMaskedBlendMode(EVar8);
      uStack_c3 = uVar12;
      if (bVar7) {
        uVar12 = 1;
        uStack_c3 = uVar12;
      }
    }
    fVar16 = fVar18;
    fVar15 = fVar19;
    if ((bVar5) && ((local_e3 & 0x80) != 0)) {
      (**(code **)(this->_padding_ + 0x4e8))(this,&local_e0);
      fVar15 = (float)((uint)(local_e0 * local_dc) ^ uVar2);
      if (fVar19 <= fVar15) {
        fVar15 = fVar19;
      }
      fVar16 = (fVar1 - local_dc) * local_e0;
      if (fVar16 <= fVar18) {
        fVar16 = fVar18;
      }
    }
    fVar17 = (float)(**(code **)(this->_padding_ + 0x500))(this);
    if (fVar17 <= fVar20) {
      fVar17 = fVar20;
    }
    local_b0 = 0;
    uStack_a8 = 0;
    lVar9 = (**(code **)(this->_padding_ + 0x2f0))(this,&local_b0);
    if ((cVar13 != '\0') || ((*(uint *)(lVar9 + 0x4d0) & 0x400) != 0)) {
      cVar13 = '\x01';
    }
    fVar18 = fVar16;
    fVar19 = fVar15;
    fVar20 = fVar17;
    cStack_c1 = cVar13;
    if ((bVar11) || ((*(uint *)(lVar9 + 0x4d0) & 0x200) != 0)) {
      bVar11 = true;
      uStack_c2 = 1;
      goto LAB_14789f45f;
    }
    puVar14 = puVar14 + 1;
    uStack_c2 = 0;
  } while( true );
}

// GetUsedMaterialPropertyDesc<UPrimitiveComponent> @ 14789f4e0

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
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

FPrimitiveMaterialPropertyDescriptor * __cdecl
FPrimitiveComponentHelper::GetUsedMaterialPropertyDesc<UPrimitiveComponent>
          (FPrimitiveMaterialPropertyDescriptor *__return_storage_ptr__,UPrimitiveComponent *param_1
          ,EShaderPlatform param_2)

{
  UMaterialInterface *this;
  float fVar1;
  uint uVar2;
  undefined8 *puVar3;
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
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res20 [8];
  undefined1 local_e8 [5];
  byte local_e3;
  float local_e0;
  float local_dc;
  undefined8 *local_d8;
  undefined8 local_d0;
  float fStack_c8;
  char cStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  char cStack_c1;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  cVar10 = '\0';
  uVar12 = 0;
  local_d0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  bVar11 = false;
  fStack_c8 = 0.0;
  local_c0 = (undefined8 *)0x0;
  cVar13 = '\0';
  local_b8 = 0;
  cStack_c4 = '\0';
  uStack_c3 = 0;
  uStack_c2 = 0;
  cStack_c1 = '\0';
  (**(code **)(*(longlong *)param_1 + 0x7f0))(param_1,&local_c0,0);
  bVar5 = UseNaniteTessellation();
  uVar2 = __xmm_80000000800000008000000080000000;
  fVar1 = __real_3f800000;
  iVar4 = (int)local_b8;
  local_d8 = local_c0 + (int)local_b8;
  puVar14 = local_c0;
  fVar18 = (float)local_d0._4_4_;
  fVar19 = (float)(undefined4)local_d0;
  fVar20 = 0.0;
  do {
    while( true ) {
      puVar3 = local_d8;
      if ((int)local_b8 != iVar4) {
        `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (puVar14 == puVar3) {
        local_d0._4_4_ = fVar18;
        local_d0._0_4_ = fVar19;
        (__return_storage_ptr__->MinMaxMaterialDisplacement).field0_0x0 = local_d0;
        __return_storage_ptr__->MaxWorldPositionOffsetDisplacement = fVar20;
        __return_storage_ptr__->bAnyMaterialHasWorldPositionOffset = (bool)cStack_c4;
        __return_storage_ptr__->bAnyMaterialHasPixelAnimation = (bool)uStack_c3;
        __return_storage_ptr__->bAnyMaterialHasPerInstanceCustomData = (bool)uStack_c2;
        __return_storage_ptr__->bAnyMaterialHasPerInstanceRandom = (bool)cStack_c1;
        if (local_c0 != (undefined8 *)0x0) {
          fStack_c8 = fVar20;
          FMemory::Free(local_c0);
        }
        return __return_storage_ptr__;
      }
      this = (UMaterialInterface *)*puVar14;
      if (this != (UMaterialInterface *)0x0) break;
LAB_14789f6cf:
      puVar14 = puVar14 + 1;
    }
    UMaterialInterface::GetRelevance_Concurrent(this,(EShaderPlatform)local_e8);
    if ((cVar10 != '\0') || ((local_e3 & 0x40) != 0)) {
      cVar10 = '\x01';
    }
    cStack_c4 = cVar10;
    cVar6 = (**(code **)(this->_padding_ + 0x520))(this);
    if (cVar6 != '\0') {
      EVar8 = (**(code **)(this->_padding_ + 0x460))(this);
      bVar7 = IsOpaqueOrMaskedBlendMode(EVar8);
      uStack_c3 = uVar12;
      if (bVar7) {
        uVar12 = 1;
        uStack_c3 = uVar12;
      }
    }
    fVar16 = fVar18;
    fVar15 = fVar19;
    if ((bVar5) && ((local_e3 & 0x80) != 0)) {
      (**(code **)(this->_padding_ + 0x4e8))(this,&local_e0);
      fVar15 = (float)((uint)(local_e0 * local_dc) ^ uVar2);
      if (fVar19 <= fVar15) {
        fVar15 = fVar19;
      }
      fVar16 = (fVar1 - local_dc) * local_e0;
      if (fVar16 <= fVar18) {
        fVar16 = fVar18;
      }
    }
    fVar17 = (float)(**(code **)(this->_padding_ + 0x500))(this);
    if (fVar17 <= fVar20) {
      fVar17 = fVar20;
    }
    local_b0 = 0;
    uStack_a8 = 0;
    lVar9 = (**(code **)(this->_padding_ + 0x2f0))(this,&local_b0);
    if ((cVar13 != '\0') || ((*(uint *)(lVar9 + 0x4d0) & 0x400) != 0)) {
      cVar13 = '\x01';
    }
    fVar18 = fVar16;
    fVar19 = fVar15;
    fVar20 = fVar17;
    cStack_c1 = cVar13;
    if ((bVar11) || ((*(uint *)(lVar9 + 0x4d0) & 0x200) != 0)) {
      bVar11 = true;
      uStack_c2 = 1;
      goto LAB_14789f6cf;
    }
    puVar14 = puVar14 + 1;
    uStack_c2 = 0;
  } while( true );
}

// AddNavigationModifier<UInstancedStaticMeshComponent> @ 147caed70

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FPrimitiveComponentHelper::AddNavigationModifier<UInstancedStaticMeshComponent>
          (UInstancedStaticMeshComponent *param_1,FNavigationRelevantData *param_2)

{
  byte bVar1;
  FDestructionSentinel local_78;
  undefined1 local_60 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  int local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  ForAnyElementType local_20;
  undefined8 local_18;
  uint local_10;
  ENavigationDataResolution local_c;
  
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 1);
  if ((bVar1 & 3) != 0) {
    local_60._0_4_ = local_60._0_4_ & 0xfffffffe;
    local_c = Invalid;
    local_48 = 0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38._0_4_ = 0;
    local_38._4_4_ = 0;
    local_10 = ((bVar1 & 2) * 2 | bVar1 & 1) << 4 | local_10 & 0xffffff80;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28._0_4_ = 0;
    local_28._4_4_ = 0;
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_50.Data = (FScriptContainerElement *)0x0;
    local_20.Data = (FScriptContainerElement *)0x0;
    local_18._0_4_ = 0;
    local_18._4_4_ = 0;
    FCompositeNavModifier::Add(&param_2->Modifiers,(FCompositeNavModifier *)local_60);
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
    DestructItems<FSimpleLinkNavModifier,int>((FSimpleLinkNavModifier *)local_30.Data,(int)local_28)
    ;
    if ((FSimpleLinkNavModifier *)local_30.Data != (FSimpleLinkNavModifier *)0x0) {
      FMemory::Free(local_30.Data);
    }
    DestructItems<FAreaNavModifier,int>((FAreaNavModifier *)local_40.Data,(int)local_38);
    if ((FAreaNavModifier *)local_40.Data != (FAreaNavModifier *)0x0) {
      FMemory::Free(local_40.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_78);
    if ((local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (FStack_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  }
  return;
}

