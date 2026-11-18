// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FMaterialRenderContext @ 147f64aa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FMaterialRenderContext * __thiscall
FMaterialRenderContext::FMaterialRenderContext
          (FMaterialRenderContext *this,FMaterialRenderProxy *param_1,FMaterial *param_2,
          FSceneView *param_3)

{
  this->MaterialRenderProxy = param_1;
  this->Material = param_2;
  this->bShowSelection = false;
  return this;
}

// GetExternalTextureGuid @ 147fd2720

FGuid * __thiscall
FMaterialRenderContext::GetExternalTextureGuid
          (FMaterialRenderContext *this,FGuid *__return_storage_ptr__,FGuid *param_1,FName *param_2,
          int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FName FVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 *puVar9;
  UTexture *pUVar10;
  UTexture *local_res10 [3];
  FMemoryImageMaterialParameterInfo local_28;
  
  uVar1 = param_1->D;
  uVar2 = param_1->C;
  uVar3 = param_1->B;
  uVar4 = param_1->A;
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  if (((uVar1 != 0 || uVar2 != 0) || uVar3 != 0) || uVar4 != 0) {
    uVar1 = param_1->B;
    uVar2 = param_1->C;
    uVar3 = param_1->D;
    __return_storage_ptr__->A = param_1->A;
    __return_storage_ptr__->B = uVar1;
    __return_storage_ptr__->C = uVar2;
    __return_storage_ptr__->D = uVar3;
    return __return_storage_ptr__;
  }
  FVar5 = *param_2;
  local_res10[0] = (UTexture *)0x0;
  if ((FVar5 != (FName)0x0) && (this->MaterialRenderProxy != (FMaterialRenderProxy *)0x0)) {
    local_28.Name.ComparisonIndex = FVar5.ComparisonIndex.Value;
    local_28.Name.DisplayIndex.Value = 0;
    local_28.Name.Number = FVar5.Number;
    local_28.Index = -1;
    local_28.Association.Value = '\x02';
    bVar8 = FMaterialRenderProxy::GetTextureValue
                      (this->MaterialRenderProxy,&local_28,local_res10,this);
    if ((bVar8) && (local_res10[0] != (UTexture *)0x0)) {
      puVar9 = (undefined8 *)
               (**(code **)(local_res10[0]->_padding_ + 0x3a0))(local_res10[0],&local_28);
      goto LAB_147fd27ed;
    }
  }
  if (param_3 == -1) {
    return __return_storage_ptr__;
  }
  pUVar10 = GetIndexedTexture<UTexture>(this->Material,param_3);
  if (pUVar10 == (UTexture *)0x0) {
    return __return_storage_ptr__;
  }
  puVar9 = (undefined8 *)(**(code **)(pUVar10->_padding_ + 0x3a0))(pUVar10,&local_28);
LAB_147fd27ed:
  uVar6 = *puVar9;
  uVar7 = puVar9[1];
  __return_storage_ptr__->A = (int)uVar6;
  __return_storage_ptr__->B = (int)((ulonglong)uVar6 >> 0x20);
  __return_storage_ptr__->C = (int)uVar7;
  __return_storage_ptr__->D = (int)((ulonglong)uVar7 >> 0x20);
  return __return_storage_ptr__;
}

// GetTextureCollectionParameterValue @ 147fd8de0

void __thiscall
FMaterialRenderContext::GetTextureCollectionParameterValue
          (FMaterialRenderContext *this,FMemoryImageMaterialParameterInfo *param_1,int param_2,
          UTextureCollection **param_3)

{
  bool bVar1;
  UTextureCollection *pUVar2;
  
  if (((((param_1->Name).ComparisonIndex.Value != 0) || ((param_1->Name).Number != 0)) &&
      (this->MaterialRenderProxy != (FMaterialRenderProxy *)0x0)) &&
     (bVar1 = FMaterialRenderProxy::GetTextureCollectionValue
                        (this->MaterialRenderProxy,param_1,param_3,this), bVar1)) {
    return;
  }
  pUVar2 = GetIndexedTextureCollection(this->Material,param_2);
  *param_3 = pUVar2;
  return;
}

// GetTextureParameterValue @ 147fd9330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMaterialRenderContext::GetTextureParameterValue
          (FMaterialRenderContext *this,FMemoryImageMaterialParameterInfo *param_1,int param_2,
          URuntimeVirtualTexture **param_3)

{
  int iVar1;
  FMaterial *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  URuntimeVirtualTexture *pUVar5;
  longlong local_28;
  int local_20;
  void *local_18 [2];
  
  if (((((param_1->Name).ComparisonIndex.Value != 0) || ((param_1->Name).Number != 0)) &&
      (this->MaterialRenderProxy != (FMaterialRenderProxy *)0x0)) &&
     (bVar3 = FMaterialRenderProxy::GetTextureValue(this->MaterialRenderProxy,param_1,param_3,this),
     bVar3)) {
    return;
  }
  pFVar2 = this->Material;
  (**(code **)(pFVar2->_padding_ + 0x4f8))(pFVar2,&local_28);
  if (((param_2 < 0) || (local_20 <= param_2)) ||
     (pUVar5 = *(URuntimeVirtualTexture **)(local_28 + (longlong)param_2 * 8),
     pUVar5 == (URuntimeVirtualTexture *)0x0)) {
    if (bWarnedOnce == false) {
      if (2 < (byte)LogMaterial._0_1_) {
        (**(code **)(pFVar2->_padding_ + 0x390))(pFVar2,local_18);
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u__s__Requesting__1519d2550,
                   (FLogCategoryBase *)&LogMaterial);
        if (local_18[0] != (void *)0x0) {
          FMemory::Free(local_18[0]);
        }
      }
      bWarnedOnce = true;
    }
  }
  else {
    pUVar4 = Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_147fd9439;
  }
  pUVar5 = (URuntimeVirtualTexture *)0x0;
LAB_147fd9439:
  *param_3 = pUVar5;
  return;
}

// GetTextureParameterValue @ 147fd9460

void __thiscall
FMaterialRenderContext::GetTextureParameterValue
          (FMaterialRenderContext *this,FMemoryImageMaterialParameterInfo *param_1,int param_2,
          USparseVolumeTexture **param_3)

{
  bool bVar1;
  USparseVolumeTexture *pUVar2;
  
  if (((((param_1->Name).ComparisonIndex.Value != 0) || ((param_1->Name).Number != 0)) &&
      (this->MaterialRenderProxy != (FMaterialRenderProxy *)0x0)) &&
     (bVar1 = FMaterialRenderProxy::GetTextureValue(this->MaterialRenderProxy,param_1,param_3,this),
     bVar1)) {
    return;
  }
  pUVar2 = GetIndexedTexture<USparseVolumeTexture>(this->Material,param_2);
  *param_3 = pUVar2;
  return;
}

// GetTextureParameterValue @ 147fd94c0

void __thiscall
FMaterialRenderContext::GetTextureParameterValue
          (FMaterialRenderContext *this,FMemoryImageMaterialParameterInfo *param_1,int param_2,
          UTexture **param_3)

{
  bool bVar1;
  UTexture *pUVar2;
  
  if (((((param_1->Name).ComparisonIndex.Value != 0) || ((param_1->Name).Number != 0)) &&
      (this->MaterialRenderProxy != (FMaterialRenderProxy *)0x0)) &&
     (bVar1 = FMaterialRenderProxy::GetTextureValue(this->MaterialRenderProxy,param_1,param_3,this),
     bVar1)) {
    return;
  }
  pUVar2 = GetIndexedTexture<UTexture>(this->Material,param_2);
  *param_3 = pUVar2;
  return;
}

