// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 13

// ApplyExportOptionsToShadingModel @ 14e5e2f10

void __thiscall
FGLTFDelayedMaterialTask::ApplyExportOptionsToShadingModel
          (FGLTFDelayedMaterialTask *this,EGLTFJsonShadingModel *param_1,
          EMaterialShadingModel *param_2)

{
  EMaterialShadingModel EVar1;
  UEnum *pUVar2;
  wchar_t *pwVar3;
  FGLTFConvertBuilder *pFVar4;
  FName local_res10;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  switch(*param_1) {
  case Default:
    goto switchD_14e5e2f56_caseD_0;
  case Unlit:
    pFVar4 = this->Builder;
    if (*(char *)(pFVar4->_padding_ + 0x31) != '\0') {
      return;
    }
    pUVar2 = StaticEnum<enum_EMaterialShadingModel>();
    FGLTFNameUtilities::GetName(&local_48,pUVar2,1);
    local_res10 = (FName)this->Material->_padding_;
    ::FName::ToString(&local_res10,&local_58);
    EVar1 = *param_2;
    pUVar2 = StaticEnum<enum_EMaterialShadingModel>();
    FGLTFNameUtilities::GetName(&local_68,pUVar2,EVar1);
    ::FString::PrintfImpl
              (&local_38,
               L"Shading model (%s) in material %s disabled by export options, will export as %s");
    FGLTFLogBuilder::LogWarning((FGLTFLogBuilder *)pFVar4,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
      local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    }
    goto LAB_14e5e330f;
  case ClearCoat:
    pFVar4 = this->Builder;
    if (*(char *)(pFVar4->_padding_ + 0x32) != '\0') {
      return;
    }
    pUVar2 = StaticEnum<enum_EMaterialShadingModel>();
    FGLTFNameUtilities::GetName(&local_68,pUVar2,1);
    local_res10 = (FName)this->Material->_padding_;
    ::FName::ToString(&local_res10,&local_58);
    EVar1 = *param_2;
    pUVar2 = StaticEnum<enum_EMaterialShadingModel>();
    FGLTFNameUtilities::GetName(&local_48,pUVar2,EVar1);
    pwVar3 = L"Shading model (%s) in material %s disabled by export options, will export as %s";
    break;
  case Sheen:
    pFVar4 = this->Builder;
    if (*(char *)(pFVar4->_padding_ + 0x33) != '\0') {
      return;
    }
    pUVar2 = StaticEnum<enum_EMaterialShadingModel>();
    FGLTFNameUtilities::GetName(&local_68,pUVar2,1);
    local_res10 = (FName)this->Material->_padding_;
    ::FName::ToString(&local_res10,&local_58);
    EVar1 = *param_2;
    pUVar2 = StaticEnum<enum_EMaterialShadingModel>();
    FGLTFNameUtilities::GetName(&local_48,pUVar2,EVar1);
    pwVar3 = L"Shading model (%s) in material %s disabled by export options, will export as %s";
    break;
  case Transmission:
    pFVar4 = this->Builder;
    if (*(char *)(pFVar4->_padding_ + 0x34) != '\0') {
      return;
    }
    pUVar2 = StaticEnum<enum_EMaterialShadingModel>();
    FGLTFNameUtilities::GetName(&local_68,pUVar2,1);
    local_res10 = (FName)this->Material->_padding_;
    ::FName::ToString(&local_res10,&local_58);
    EVar1 = *param_2;
    pUVar2 = StaticEnum<enum_EMaterialShadingModel>();
    FGLTFNameUtilities::GetName(&local_48,pUVar2,EVar1);
    pwVar3 = L"Shading model (%s) in material %s disabled by export options, will export as %s";
    break;
  case SpecularGlossiness:
    pFVar4 = this->Builder;
    if (*(char *)(pFVar4->_padding_ + 0x35) != '\0') {
      return;
    }
    pUVar2 = StaticEnum<enum_EMaterialShadingModel>();
    FGLTFNameUtilities::GetName(&local_68,pUVar2,1);
    local_res10 = (FName)this->Material->_padding_;
    ::FName::ToString(&local_res10,&local_58);
    EVar1 = *param_2;
    pUVar2 = StaticEnum<enum_EMaterialShadingModel>();
    FGLTFNameUtilities::GetName(&local_48,pUVar2,EVar1);
    pwVar3 = L"Shading model (%s) in material %s disabled by export options, will export as %s";
    break;
  default:
    pFVar4 = this->Builder;
    pUVar2 = StaticEnum<enum_EMaterialShadingModel>();
    FGLTFNameUtilities::GetName(&local_68,pUVar2,1);
    local_res10 = (FName)this->Material->_padding_;
    ::FName::ToString(&local_res10,&local_58);
    EVar1 = *param_2;
    pUVar2 = StaticEnum<enum_EMaterialShadingModel>();
    FGLTFNameUtilities::GetName(&local_48,pUVar2,EVar1);
    pwVar3 = L"Unsupported shading model (%s) in material %s, will export as %s";
  }
  ::FString::PrintfImpl(&local_38,pwVar3);
  FGLTFLogBuilder::LogWarning((FGLTFLogBuilder *)pFVar4,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_14e5e330f:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  *param_1 = Default;
switchD_14e5e2f56_caseD_0:
  return;
}

// ConvertAlphaMode @ 14e5ec910

void __thiscall
FGLTFDelayedMaterialTask::ConvertAlphaMode
          (FGLTFDelayedMaterialTask *this,EGLTFJsonAlphaMode *param_1)

{
  FGLTFConvertBuilder *this_00;
  int iVar1;
  UEnum *pUVar2;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar1 = (**(code **)(this->Material->_padding_ + 0x460))();
  if (iVar1 == 0) {
    *param_1 = Opaque;
  }
  else {
    if (iVar1 == 1) {
      *param_1 = Mask;
      return;
    }
    *param_1 = Blend;
    if (iVar1 != 2) {
      this_00 = this->Builder;
      pUVar2 = StaticEnum<enum_EBlendMode>();
      FGLTFNameUtilities::GetName(&local_38,pUVar2,2);
      local_res8 = (FName)this->Material->_padding_;
      ::FName::ToString(&local_res8,&local_48);
      pUVar2 = StaticEnum<enum_EBlendMode>();
      FGLTFNameUtilities::GetName(&local_58,pUVar2,iVar1);
      ::FString::PrintfImpl
                (&local_28,L"Unsupported blend mode (%s) in material %s, will export as %s");
      FGLTFLogBuilder::LogWarning((FGLTFLogBuilder *)this_00,&local_28);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// ConvertShadingModel @ 14e5eecc0

void __thiscall
FGLTFDelayedMaterialTask::ConvertShadingModel
          (FGLTFDelayedMaterialTask *this,EMaterialShadingModel *param_1,
          EGLTFJsonShadingModel *param_2)

{
  EMaterialShadingModel EVar1;
  uint uVar2;
  
  uVar2 = (**(code **)(this->Material->_padding_ + 0x460))();
  EVar1 = *param_1;
  if (EVar1 == MSM_ClearCoat) {
    if (uVar2 < 2) {
LAB_14e5eed4b:
      *param_2 = ClearCoat;
      return;
    }
    *param_1 = MSM_DefaultLit;
  }
  else {
    if (EVar1 == MSM_Unlit) {
      *param_2 = Unlit;
      return;
    }
    if (EVar1 != MSM_DefaultLit) {
      if (EVar1 != MSM_ClearCoat) {
        if (EVar1 == MSM_Cloth) {
          *param_2 = Sheen;
          return;
        }
        if (EVar1 != MSM_ThinTranslucent) {
          *param_2 = None;
          return;
        }
        *param_2 = Transmission;
        return;
      }
      goto LAB_14e5eed4b;
    }
  }
  *param_2 = Default;
  return;
}

// GetBakedTextureName @ 14e5f4c80

FString * __thiscall
FGLTFDelayedMaterialTask::GetBakedTextureName
          (FGLTFDelayedMaterialTask *this,FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FName local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res8 = (FName)this->Material->_padding_;
  ::FName::ToString(&local_res8,&local_28);
  if (this->MeshData != (FGLTFMeshData *)0x0) {
    ::FString::ConcatCF(&local_38,L"_",&this->MeshData->Name);
    iVar1 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  ::FString::ConcatFC(&local_18,&local_28,L"_");
  ::FString::ConcatFF(__return_storage_ptr__,&local_18,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetMaterialName @ 14e5f7590

FString * __thiscall
FGLTFDelayedMaterialTask::GetMaterialName
          (FGLTFDelayedMaterialTask *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FName local_res8;
  FString local_18;
  
  local_res8 = (FName)this->Material->_padding_;
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  if (this->MeshData != (FGLTFMeshData *)0x0) {
    ::FString::ConcatCF(&local_18,L"_",&this->MeshData->Name);
    iVar1 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetName @ 14e5f7b70

FString * __thiscall
FGLTFDelayedMaterialTask::GetName(FGLTFDelayedMaterialTask *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)this->Material->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetProxyParameter @ 14e5fcc60

void __thiscall
FGLTFDelayedMaterialTask::GetProxyParameter
          (FGLTFDelayedMaterialTask *this,TGLTFProxyMaterialParameterInfo<float> *param_1,
          float *param_2)

{
  UMaterialInterface *this_00;
  bool bVar1;
  float local_res8 [2];
  float local_res10 [2];
  
  this_00 = this->Material;
  bVar1 = UMaterialInterface::GetScalarParameterValue
                    (this_00,&param_1->ParameterInfo,local_res8,true);
  if (bVar1) {
    bVar1 = UMaterialInterface::GetScalarParameterDefaultValue
                      (this_00,&param_1->ParameterInfo,local_res10);
    if ((bVar1) && (local_res10[0] != local_res8[0])) {
      *param_2 = local_res8[0];
    }
  }
  return;
}

// GetProxyParameter @ 14e5fccd0

void __thiscall
FGLTFDelayedMaterialTask::GetProxyParameter
          (FGLTFDelayedMaterialTask *this,TGLTFProxyMaterialParameterInfo<FLinearColor> *param_1,
          FGLTFJsonColor3 *param_2)

{
  UMaterialInterface *this_00;
  bool bVar1;
  float *pfVar2;
  FLinearColor_u_0 local_28;
  FLinearColor_u_0 local_18;
  
  this_00 = this->Material;
  bVar1 = UMaterialInterface::GetVectorParameterValue
                    (this_00,&param_1->ParameterInfo,(FLinearColor *)&local_18._s_0,true);
  if (bVar1) {
    bVar1 = UMaterialInterface::GetVectorParameterDefaultValue
                      (this_00,&param_1->ParameterInfo,(FLinearColor *)&local_28._s_0);
    if (bVar1) {
      if ((((local_28._s_0.R != local_18._s_0.R) || (local_28._s_0.G != local_18._s_0.G)) ||
          (local_28._s_0.B != local_18._s_0.B)) || (local_28._s_0.A != local_18._s_0.A)) {
        if (__real_3f800000 <= local_18._s_0.R) {
          local_18._s_0.R = __real_3f800000;
        }
        if (__real_3f800000 <= local_18._s_0.G) {
          local_18._s_0.G = __real_3f800000;
        }
        if (__real_3f800000 <= local_18._s_0.B) {
          local_18._s_0.B = __real_3f800000;
        }
        pfVar2 = (float *)&param_2->field_0x8;
        if (param_2 == (FGLTFJsonColor3 *)0x0) {
          pfVar2 = (float *)0x0;
        }
        if (local_18._s_0.R <= 0.0) {
          local_18._s_0.R = 0.0;
        }
        if (local_18._s_0.G <= 0.0) {
          local_18._s_0.G = 0.0;
        }
        if (local_18._s_0.B <= 0.0) {
          local_18._s_0.B = 0.0;
        }
        *pfVar2 = local_18._s_0.R;
        pfVar2[1] = local_18._s_0.G;
        pfVar2[2] = local_18._s_0.B;
      }
    }
  }
  return;
}

// GetProxyParameter @ 14e5fcdb0

void __thiscall
FGLTFDelayedMaterialTask::GetProxyParameter
          (FGLTFDelayedMaterialTask *this,TGLTFProxyMaterialParameterInfo<FLinearColor> *param_1,
          FGLTFJsonColor4 *param_2)

{
  UMaterialInterface *this_00;
  bool bVar1;
  float *pfVar2;
  FLinearColor_u_0 local_28;
  FLinearColor_u_0 local_18;
  
  this_00 = this->Material;
  bVar1 = UMaterialInterface::GetVectorParameterValue
                    (this_00,&param_1->ParameterInfo,(FLinearColor *)&local_28._s_0,true);
  if (bVar1) {
    bVar1 = UMaterialInterface::GetVectorParameterDefaultValue
                      (this_00,&param_1->ParameterInfo,(FLinearColor *)&local_18._s_0);
    if (bVar1) {
      if ((((local_18._s_0.R != local_28._s_0.R) || (local_18._s_0.G != local_28._s_0.G)) ||
          (local_18._s_0.B != local_28._s_0.B)) || (local_18._s_0.A != local_28._s_0.A)) {
        if (__real_3f800000 <= local_28._s_0.R) {
          local_28._s_0.R = __real_3f800000;
        }
        if (__real_3f800000 <= local_28._s_0.G) {
          local_28._s_0.G = __real_3f800000;
        }
        if (__real_3f800000 <= local_28._s_0.B) {
          local_28._s_0.B = __real_3f800000;
        }
        if (__real_3f800000 <= local_28._s_0.A) {
          local_28._s_0.A = __real_3f800000;
        }
        pfVar2 = (float *)&param_2->field_0x8;
        if (param_2 == (FGLTFJsonColor4 *)0x0) {
          pfVar2 = (float *)0x0;
        }
        if (local_28._s_0.R <= 0.0) {
          local_28._s_0.R = 0.0;
        }
        if (local_28._s_0.G <= 0.0) {
          local_28._s_0.G = 0.0;
        }
        if (local_28._s_0.B <= 0.0) {
          local_28._s_0.B = 0.0;
        }
        if (local_28._s_0.A <= 0.0) {
          local_28._s_0.A = 0.0;
        }
        *pfVar2 = local_28._s_0.R;
        pfVar2[1] = local_28._s_0.G;
        pfVar2[2] = local_28._s_0.B;
        pfVar2[3] = local_28._s_0.A;
      }
    }
  }
  return;
}

// GetProxyParameter @ 14e5fceb0

void __thiscall
FGLTFDelayedMaterialTask::GetProxyParameter
          (FGLTFDelayedMaterialTask *this,FGLTFProxyMaterialTextureParameterInfo *param_1,
          FGLTFJsonTextureInfo *param_2)

{
  uint *puVar1;
  uint uVar2;
  UMaterialInterface *pUVar3;
  FGLTFConvertBuilder *pFVar4;
  undefined8 uVar5;
  FName FVar6;
  char cVar7;
  bool bVar8;
  UClass *pUVar9;
  FGLTFJsonTexture *pFVar10;
  int iVar11;
  TextureAddress TVar12;
  TextureAddress TVar13;
  FName local_res8;
  undefined8 local_res10;
  UTexture2D *local_res20;
  FLinearColor_u_0 local_68;
  FLinearColor_u_0 local_58;
  FString local_48;
  
  pUVar3 = this->Material;
  local_res8 = (FName)this;
  cVar7 = (**(code **)(pUVar3->_padding_ + 0x418))(pUVar3,param_1,&local_res20,1);
  if ((((cVar7 != '\0') &&
       (bVar8 = UMaterialInterface::GetTextureParameterDefaultValue
                          (pUVar3,(FMemoryImageMaterialParameterInfo *)param_1,
                           (UTexture **)&local_res10), bVar8)) &&
      ((UTexture2D *)CONCAT44(local_res10._4_4_,(float)local_res10) != local_res20)) &&
     (local_res20 != (UTexture2D *)0x0)) {
    pUVar3 = this->Material;
    bVar8 = UMaterialInterface::GetVectorParameterValue
                      (pUVar3,&(param_1->TilingMethod).ParameterInfo,(FLinearColor *)&local_58._s_0,
                       true);
    TVar13 = TA_Wrap;
    TVar12 = TA_Wrap;
    if (((bVar8) &&
        (bVar8 = UMaterialInterface::GetVectorParameterDefaultValue
                           (pUVar3,&(param_1->TilingMethod).ParameterInfo,
                            (FLinearColor *)&local_68._s_0), TVar13 = TA_Wrap, bVar8)) &&
       (((local_68._s_0.R != local_58._s_0.R ||
         ((local_68._s_0.G != local_58._s_0.G || (local_68._s_0.B != local_58._s_0.B)))) ||
        (TVar12 = TA_Wrap, local_68._s_0.A != local_58._s_0.A)))) {
      TVar12 = TA_MAX;
      iVar11 = (int)ROUND(local_58._s_0.R * __real_40000000 + __real_3f000000) >> 1;
      TVar13 = TA_Wrap;
      if (iVar11 != 0) {
        if (iVar11 == 1) {
          TVar13 = TA_Clamp;
        }
        else if (iVar11 == 2) {
          TVar13 = TA_Mirror;
        }
        else {
          TVar13 = TA_MAX;
        }
      }
      iVar11 = (int)ROUND(local_58._s_0.G * __real_40000000 + __real_3f000000) >> 1;
      if (iVar11 == 0) {
        TVar12 = TA_Wrap;
      }
      else if (iVar11 == 1) {
        TVar12 = TA_Clamp;
      }
      else if (iVar11 == 2) {
        TVar12 = TA_Mirror;
      }
    }
    uVar2 = (param_1->Texture).ParameterInfo.Name.ComparisonIndex.Value;
    puVar1 = &(param_1->Texture).ParameterInfo.Name.Number;
    if (((((uVar2 == FGLTFProxyMaterialInfo::BaseColor.Texture.ParameterInfo.Name.ComparisonIndex.
                     Value) &&
          (*puVar1 == FGLTFProxyMaterialInfo::BaseColor.Texture.ParameterInfo.Name.Number)) &&
         ((param_1->Texture).ParameterInfo.Index ==
          FGLTFProxyMaterialInfo::BaseColor.Texture.ParameterInfo.Index)) &&
        ((param_1->Texture).ParameterInfo.Association.Value ==
         FGLTFProxyMaterialInfo::BaseColor.Texture.ParameterInfo.Association.Value)) ||
       (((uVar2 == FGLTFProxyMaterialInfo::Emissive.Texture.ParameterInfo.Name.ComparisonIndex.Value
         && (*puVar1 == FGLTFProxyMaterialInfo::Emissive.Texture.ParameterInfo.Name.Number)) &&
        (((param_1->Texture).ParameterInfo.Index ==
          FGLTFProxyMaterialInfo::Emissive.Texture.ParameterInfo.Index &&
         ((param_1->Texture).ParameterInfo.Association.Value ==
          FGLTFProxyMaterialInfo::Emissive.Texture.ParameterInfo.Association.Value)))))) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    pFVar4 = *(FGLTFConvertBuilder **)((longlong)local_res8 + 0x10);
    pUVar9 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar11 = (int)pUVar9->_padding_;
    if (((*(int *)(local_res20->_padding_ + 0x38) < iVar11) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(local_res20->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
         &pUVar9->_padding_)) || (local_res20 == (UTexture2D *)0x0)) {
      pUVar9 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
      iVar11 = (int)pUVar9->_padding_;
      if (((*(int *)(local_res20->_padding_ + 0x38) < iVar11) ||
          ((longlong *)
           *(undefined1 **)(*(longlong *)(local_res20->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
           &pUVar9->_padding_)) || (local_res20 == (UTexture2D *)0x0)) {
        pFVar10 = (FGLTFJsonTexture *)0x0;
      }
      else {
        pFVar10 = FGLTFConvertBuilder::AddUniqueTexture
                            (pFVar4,(UTexture *)local_res20,bVar8,TVar13,TVar12);
      }
    }
    else {
      local_68._0_8_ = local_res20;
      TSet<UTexture_const_*,DefaultKeyFuncs<UTexture_const_*,0>,FDefaultSetAllocator>::
      Emplace<UTexture_const_*_const_&>
                ((TSet<UTexture_const_*,DefaultKeyFuncs<UTexture_const_*,0>,FDefaultSetAllocator> *)
                 &pFVar4->_padding_,(UTexture **)&local_res10,(bool *)&local_68);
      pFVar10 = TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>
                ::GetOrAdd((pFVar4->Texture2DConverter).Ptr,local_res20,bVar8,TVar13,TVar12);
    }
    FVar6 = local_res8;
    param_2->Index = pFVar10;
    pUVar3 = *(UMaterialInterface **)((longlong)local_res8 + 0x28);
    bVar8 = UMaterialInterface::GetScalarParameterValue
                      (pUVar3,&(param_1->UVIndex).ParameterInfo,(float *)&local_res8,true);
    if (((bVar8) &&
        (bVar8 = UMaterialInterface::GetScalarParameterDefaultValue
                           (pUVar3,&(param_1->UVIndex).ParameterInfo,(float *)&local_res10), bVar8))
       && ((float)local_res10 != (float)local_res8.ComparisonIndex.Value)) {
      param_2->TexCoord =
           (int)ROUND((float)local_res8.ComparisonIndex.Value * __real_40000000 + __real_3f000000)
           >> 1;
    }
    pUVar3 = *(UMaterialInterface **)((longlong)FVar6 + 0x28);
    bVar8 = UMaterialInterface::GetVectorParameterValue
                      (pUVar3,&(param_1->UVOffset).ParameterInfo,(FLinearColor *)&local_68._s_0,true
                      );
    if ((bVar8) &&
       (bVar8 = UMaterialInterface::GetVectorParameterDefaultValue
                          (pUVar3,&(param_1->UVOffset).ParameterInfo,(FLinearColor *)&local_58._s_0)
       , bVar8)) {
      if ((local_58._s_0.R != local_68._s_0.R) ||
         (((local_58._s_0.G != local_68._s_0.G || (local_58._s_0.B != local_68._s_0.B)) ||
          (local_58._s_0.A != local_68._s_0.A)))) {
        *(float *)&(param_2->Transform).Offset.field_0x8 = local_68._s_0.R;
        *(float *)&(param_2->Transform).Offset.field_0xc = local_68._s_0.G;
      }
    }
    pUVar3 = *(UMaterialInterface **)((longlong)FVar6 + 0x28);
    bVar8 = UMaterialInterface::GetVectorParameterValue
                      (pUVar3,&(param_1->UVScale).ParameterInfo,(FLinearColor *)&local_68._s_0,true)
    ;
    if ((bVar8) &&
       (bVar8 = UMaterialInterface::GetVectorParameterDefaultValue
                          (pUVar3,&(param_1->UVScale).ParameterInfo,(FLinearColor *)&local_58._s_0),
       bVar8)) {
      if (((local_58._s_0.R != local_68._s_0.R) ||
          ((local_58._s_0.G != local_68._s_0.G || (local_58._s_0.B != local_68._s_0.B)))) ||
         (local_58._s_0.A != local_68._s_0.A)) {
        *(float *)&(param_2->Transform).Scale.field_0x8 = local_68._s_0.R;
        *(float *)&(param_2->Transform).Scale.field_0xc = local_68._s_0.G;
      }
    }
    pUVar3 = *(UMaterialInterface **)((longlong)FVar6 + 0x28);
    bVar8 = UMaterialInterface::GetScalarParameterValue
                      (pUVar3,&(param_1->UVRotation).ParameterInfo,(float *)&local_res8,true);
    if (((bVar8) &&
        (bVar8 = UMaterialInterface::GetScalarParameterDefaultValue
                           (pUVar3,&(param_1->UVRotation).ParameterInfo,(float *)&local_res10),
        bVar8)) && ((float)local_res10 != (float)local_res8.ComparisonIndex.Value)) {
      (param_2->Transform).Rotation = (float)local_res8.ComparisonIndex.Value;
    }
    if ((*(char *)((*(FGLTFConvertBuilder **)((longlong)FVar6 + 0x10))->_padding_ + 0xac) == '\0')
       && (bVar8 = FGLTFJsonTextureTransform::IsExactlyDefault(&param_2->Transform), !bVar8)) {
      pFVar4 = *(FGLTFConvertBuilder **)((longlong)FVar6 + 0x10);
      local_res8 = (FName)(*(UMaterialInterface **)((longlong)FVar6 + 0x28))->_padding_;
      ::FName::ToString(&local_res8,(FString *)&local_68._s_0);
      FScriptName::ToString((FScriptName *)param_1,(FString *)&local_58._s_0);
      ::FString::PrintfImpl
                (&local_48,
                 L"Texture coordinates [%d] in %s for material %s are transformed, but texture transform is disabled by export options"
                );
      FGLTFLogBuilder::LogWarning((FGLTFLogBuilder *)pFVar4,&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((void *)CONCAT44(local_58._s_0.G,local_58._s_0.R) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_58._s_0.G,local_58._s_0.R));
      }
      if ((UTexture2D *)local_68._0_8_ != (UTexture2D *)0x0) {
        FMemory::Free((void *)local_68._0_8_);
      }
      uVar5 = FGLTFJsonVector2::One._8_8_;
      *(undefined8 *)&(param_2->Transform).Offset.field_0x8 = FGLTFJsonVector2::Zero._8_8_;
      *(undefined8 *)&(param_2->Transform).Scale.field_0x8 = uVar5;
      (param_2->Transform).Rotation = 0.0;
    }
  }
  return;
}

// GetProxyParameters @ 14e5fd3a0

void __thiscall
FGLTFDelayedMaterialTask::GetProxyParameters
          (FGLTFDelayedMaterialTask *this,FGLTFJsonMaterial *param_1)

{
  EGLTFJsonShadingModel EVar1;
  UMaterialInterface *pUVar2;
  FGLTFConvertBuilder *this_00;
  FName FVar3;
  bool bVar4;
  char cVar5;
  float *pfVar6;
  UClass *this_01;
  FGLTFProxyMaterialTextureParameterInfo *pFVar7;
  FGLTFJsonTextureInfo *pFVar8;
  FName local_res8;
  FNameEntryId local_res10;
  uint uStackX_14;
  FLinearColor_u_0 local_38;
  FLinearColor_u_0 local_28;
  
  GetProxyParameter(this,&FGLTFProxyMaterialInfo::BaseColor,
                    &(param_1->PBRMetallicRoughness).BaseColorTexture);
  pUVar2 = this->Material;
  bVar4 = UMaterialInterface::GetVectorParameterValue
                    (pUVar2,&FGLTFProxyMaterialInfo::BaseColorFactor.ParameterInfo,
                     (FLinearColor *)&local_38._s_0,true);
  if (((bVar4) &&
      (bVar4 = UMaterialInterface::GetVectorParameterDefaultValue
                         (pUVar2,&FGLTFProxyMaterialInfo::BaseColorFactor.ParameterInfo,
                          (FLinearColor *)&local_28._s_0), bVar4)) &&
     ((local_28._s_0.R != local_38._s_0.R ||
      (((local_28._s_0.G != local_38._s_0.G || (local_28._s_0.B != local_38._s_0.B)) ||
       (local_28._s_0.A != local_38._s_0.A)))))) {
    local_28._s_0.R = local_38._s_0.R;
    if (__real_3f800000 <= local_38._s_0.R) {
      local_28._s_0.R = __real_3f800000;
    }
    local_28._s_0.G = local_38._s_0.G;
    if (__real_3f800000 <= local_38._s_0.G) {
      local_28._s_0.G = __real_3f800000;
    }
    if (__real_3f800000 <= local_38._s_0.B) {
      local_38._s_0.B = __real_3f800000;
    }
    if (__real_3f800000 <= local_38._s_0.A) {
      local_38._s_0.A = __real_3f800000;
    }
    pfVar6 = (float *)&(param_1->PBRMetallicRoughness).BaseColorFactor.field_0x8;
    if (param_1 == (FGLTFJsonMaterial *)0xffffffffffffffd0) {
      pfVar6 = (float *)0x0;
    }
    if (local_28._s_0.R <= 0.0) {
      local_28._s_0.R = 0.0;
    }
    if (local_28._s_0.G <= 0.0) {
      local_28._s_0.G = 0.0;
    }
    if (local_38._s_0.B <= 0.0) {
      local_38._s_0.B = 0.0;
    }
    if (local_38._s_0.A <= 0.0) {
      local_38._s_0.A = 0.0;
    }
    *pfVar6 = local_28._s_0.R;
    pfVar6[1] = local_28._s_0.G;
    pfVar6[2] = local_38._s_0.B;
    pfVar6[3] = local_38._s_0.A;
    local_28._s_0.B = local_38._s_0.B;
    local_28._s_0.A = local_38._s_0.A;
  }
  if (param_1->ShadingModel == Unlit) {
    return;
  }
  GetProxyParameter(this,&FGLTFProxyMaterialInfo::Emissive,&param_1->EmissiveTexture);
  GetProxyParameter(this,&FGLTFProxyMaterialInfo::EmissiveFactor,&param_1->EmissiveFactor);
  pUVar2 = this->Material;
  bVar4 = UMaterialInterface::GetScalarParameterValue
                    (pUVar2,&FGLTFProxyMaterialInfo::EmissiveStrength.ParameterInfo,
                     (float *)&local_res8,true);
  if (((bVar4) &&
      (bVar4 = UMaterialInterface::GetScalarParameterDefaultValue
                         (pUVar2,&FGLTFProxyMaterialInfo::EmissiveStrength.ParameterInfo,
                          (float *)&local_res10), bVar4)) &&
     ((float)local_res10.Value != (float)local_res8.ComparisonIndex.Value)) {
    param_1->EmissiveStrength = (float)local_res8.ComparisonIndex.Value;
  }
  GetProxyParameter(this,&FGLTFProxyMaterialInfo::MetallicRoughness,
                    &(param_1->PBRMetallicRoughness).MetallicRoughnessTexture);
  pUVar2 = this->Material;
  bVar4 = UMaterialInterface::GetScalarParameterValue
                    (pUVar2,&FGLTFProxyMaterialInfo::MetallicFactor.ParameterInfo,
                     (float *)&local_res8,true);
  if (((bVar4) &&
      (bVar4 = UMaterialInterface::GetScalarParameterDefaultValue
                         (pUVar2,&FGLTFProxyMaterialInfo::MetallicFactor.ParameterInfo,
                          (float *)&local_res10), bVar4)) &&
     ((float)local_res10.Value != (float)local_res8.ComparisonIndex.Value)) {
    (param_1->PBRMetallicRoughness).MetallicFactor = (float)local_res8.ComparisonIndex.Value;
  }
  pUVar2 = this->Material;
  bVar4 = UMaterialInterface::GetScalarParameterValue
                    (pUVar2,&FGLTFProxyMaterialInfo::RoughnessFactor.ParameterInfo,
                     (float *)&local_res8,true);
  if (((bVar4) &&
      (bVar4 = UMaterialInterface::GetScalarParameterDefaultValue
                         (pUVar2,&FGLTFProxyMaterialInfo::RoughnessFactor.ParameterInfo,
                          (float *)&local_res10), bVar4)) &&
     ((float)local_res10.Value != (float)local_res8.ComparisonIndex.Value)) {
    (param_1->PBRMetallicRoughness).RoughnessFactor = (float)local_res8.ComparisonIndex.Value;
  }
  pUVar2 = this->Material;
  cVar5 = (**(code **)(pUVar2->_padding_ + 0x418))
                    (pUVar2,&FGLTFProxyMaterialInfo::Normal,&local_res8,1);
  if (((cVar5 != '\0') &&
      (bVar4 = UMaterialInterface::GetTextureParameterDefaultValue
                         (pUVar2,(FMemoryImageMaterialParameterInfo *)
                                 &FGLTFProxyMaterialInfo::Normal,(UTexture **)&local_res10), bVar4))
     && (FVar3.Number = uStackX_14, FVar3.ComparisonIndex.Value = local_res10.Value,
        FVar3 != local_res8)) {
    if (param_1->ShadingModel == ClearCoat) {
      this_01 = Z_Construct_UClass_URendererSettings_NoRegister();
      if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(this_01);
      }
      if (((this_01->ClassDefaultObject).field0_0x0.DebugPtr[4].field_0x20 & 2) == 0) {
        this_00 = this->Builder;
        local_res8 = (FName)this->Material->_padding_;
        ::FName::ToString(&local_res8,(FString *)&local_28._s_0);
        ::FString::PrintfImpl
                  ((FString *)&local_38._s_0,
                   L"Proxy material %s won\'t be exported with (bottom) normal because ClearCoatEnableSecondNormal in project rendering settings is disabled"
                  );
        FGLTFLogBuilder::LogWarning((FGLTFLogBuilder *)this_00,(FString *)&local_38._s_0);
        if ((void *)CONCAT44(local_38._s_0.G,local_38._s_0.R) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(local_38._s_0.G,local_38._s_0.R));
        }
        if ((void *)CONCAT44(local_28._s_0.G,local_28._s_0.R) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(local_28._s_0.G,local_28._s_0.R));
        }
        goto LAB_14e5fd71f;
      }
    }
    GetProxyParameter(this,&FGLTFProxyMaterialInfo::Normal,
                      (FGLTFJsonTextureInfo *)&param_1->NormalTexture);
    pUVar2 = this->Material;
    bVar4 = UMaterialInterface::GetScalarParameterValue
                      (pUVar2,&FGLTFProxyMaterialInfo::NormalScale.ParameterInfo,
                       (float *)&local_res8,true);
    if (((bVar4) &&
        (bVar4 = UMaterialInterface::GetScalarParameterDefaultValue
                           (pUVar2,&FGLTFProxyMaterialInfo::NormalScale.ParameterInfo,
                            (float *)&local_res10), bVar4)) &&
       ((float)local_res10.Value != (float)local_res8.ComparisonIndex.Value)) {
      (param_1->NormalTexture).Scale = (float)local_res8.ComparisonIndex.Value;
    }
  }
LAB_14e5fd71f:
  GetProxyParameter(this,&FGLTFProxyMaterialInfo::Occlusion,
                    (FGLTFJsonTextureInfo *)&param_1->OcclusionTexture);
  pUVar2 = this->Material;
  bVar4 = UMaterialInterface::GetScalarParameterValue
                    (pUVar2,&FGLTFProxyMaterialInfo::OcclusionStrength.ParameterInfo,
                     (float *)&local_res8,true);
  if (((bVar4) &&
      (bVar4 = UMaterialInterface::GetScalarParameterDefaultValue
                         (pUVar2,&FGLTFProxyMaterialInfo::OcclusionStrength.ParameterInfo,
                          (float *)&local_res10), bVar4)) &&
     ((float)local_res10.Value != (float)local_res8.ComparisonIndex.Value)) {
    (param_1->OcclusionTexture).Strength = (float)local_res8.ComparisonIndex.Value;
  }
  pUVar2 = this->Material;
  bVar4 = UMaterialInterface::GetScalarParameterValue
                    (pUVar2,&FGLTFProxyMaterialInfo::SpecularFactor.ParameterInfo,
                     (float *)&local_res8,true);
  if (((bVar4) &&
      (bVar4 = UMaterialInterface::GetScalarParameterDefaultValue
                         (pUVar2,&FGLTFProxyMaterialInfo::SpecularFactor.ParameterInfo,
                          (float *)&local_res10), bVar4)) &&
     ((float)local_res10.Value != (float)local_res8.ComparisonIndex.Value)) {
    (param_1->Specular).Factor = (float)local_res8.ComparisonIndex.Value;
  }
  GetProxyParameter(this,&FGLTFProxyMaterialInfo::SpecularTexture,&(param_1->Specular).Texture);
  pUVar2 = this->Material;
  bVar4 = UMaterialInterface::GetScalarParameterValue
                    (pUVar2,&FGLTFProxyMaterialInfo::IOR.ParameterInfo,(float *)&local_res8,true);
  if (((bVar4) &&
      (bVar4 = UMaterialInterface::GetScalarParameterDefaultValue
                         (pUVar2,&FGLTFProxyMaterialInfo::IOR.ParameterInfo,(float *)&local_res10),
      bVar4)) && ((float)local_res10.Value != (float)local_res8.ComparisonIndex.Value)) {
    (param_1->IOR).Value = (float)local_res8.ComparisonIndex.Value;
  }
  EVar1 = param_1->ShadingModel;
  if (EVar1 == ClearCoat) {
    GetProxyParameter(this,&FGLTFProxyMaterialInfo::ClearCoat,&(param_1->ClearCoat).ClearCoatTexture
                     );
    pUVar2 = this->Material;
    bVar4 = UMaterialInterface::GetScalarParameterValue
                      (pUVar2,&FGLTFProxyMaterialInfo::ClearCoatFactor.ParameterInfo,
                       (float *)&local_res8,true);
    if (((bVar4) &&
        (bVar4 = UMaterialInterface::GetScalarParameterDefaultValue
                           (pUVar2,&FGLTFProxyMaterialInfo::ClearCoatFactor.ParameterInfo,
                            (float *)&local_res10), bVar4)) &&
       ((float)local_res10.Value != (float)local_res8.ComparisonIndex.Value)) {
      (param_1->ClearCoat).ClearCoatFactor = (float)local_res8.ComparisonIndex.Value;
    }
    GetProxyParameter(this,&FGLTFProxyMaterialInfo::ClearCoatRoughness,
                      &(param_1->ClearCoat).ClearCoatRoughnessTexture);
    pUVar2 = this->Material;
    bVar4 = UMaterialInterface::GetScalarParameterValue
                      (pUVar2,&FGLTFProxyMaterialInfo::ClearCoatRoughnessFactor.ParameterInfo,
                       (float *)&local_res8,true);
    if (((bVar4) &&
        (bVar4 = UMaterialInterface::GetScalarParameterDefaultValue
                           (pUVar2,&FGLTFProxyMaterialInfo::ClearCoatRoughnessFactor.ParameterInfo,
                            (float *)&local_res10), bVar4)) &&
       ((float)local_res10.Value != (float)local_res8.ComparisonIndex.Value)) {
      (param_1->ClearCoat).ClearCoatRoughnessFactor = (float)local_res8.ComparisonIndex.Value;
    }
    GetProxyParameter(this,&FGLTFProxyMaterialInfo::ClearCoatNormal,
                      (FGLTFJsonTextureInfo *)&(param_1->ClearCoat).ClearCoatNormalTexture);
    pUVar2 = this->Material;
    bVar4 = UMaterialInterface::GetScalarParameterValue
                      (pUVar2,&FGLTFProxyMaterialInfo::ClearCoatNormalScale.ParameterInfo,
                       (float *)&local_res8,true);
    if (((bVar4) &&
        (bVar4 = UMaterialInterface::GetScalarParameterDefaultValue
                           (pUVar2,&FGLTFProxyMaterialInfo::ClearCoatNormalScale.ParameterInfo,
                            (float *)&local_res10), bVar4)) &&
       ((float)local_res10.Value != (float)local_res8.ComparisonIndex.Value)) {
      (param_1->ClearCoat).ClearCoatNormalTexture.Scale = (float)local_res8.ComparisonIndex.Value;
    }
  }
  else {
    if (EVar1 == Sheen) {
      GetProxyParameter(this,&FGLTFProxyMaterialInfo::SheenColorFactor,&(param_1->Sheen).ColorFactor
                       );
      GetProxyParameter(this,&FGLTFProxyMaterialInfo::SheenColorTexture,
                        &(param_1->Sheen).ColorTexture);
      GetProxyParameter(this,&FGLTFProxyMaterialInfo::SheenRoughnessFactor,
                        &(param_1->Sheen).RoughnessFactor);
      pFVar8 = &(param_1->Sheen).RoughnessTexture;
      pFVar7 = &FGLTFProxyMaterialInfo::SheenRoughnessTexture;
    }
    else {
      if (EVar1 != Transmission) goto LAB_14e5fd9fa;
      GetProxyParameter(this,&FGLTFProxyMaterialInfo::TransmissionFactor,
                        &(param_1->Transmission).Factor);
      pFVar8 = &(param_1->Transmission).Texture;
      pFVar7 = &FGLTFProxyMaterialInfo::TransmissionTexture;
    }
    GetProxyParameter(this,pFVar7,pFVar8);
  }
LAB_14e5fd9fa:
  if (param_1->ShadingModel != SpecularGlossiness) {
    pUVar2 = this->Material;
    bVar4 = UMaterialInterface::GetScalarParameterValue
                      (pUVar2,&FGLTFProxyMaterialInfo::IridescenceFactor.ParameterInfo,
                       (float *)&local_res8,true);
    if (((bVar4) &&
        (bVar4 = UMaterialInterface::GetScalarParameterDefaultValue
                           (pUVar2,&FGLTFProxyMaterialInfo::IridescenceFactor.ParameterInfo,
                            (float *)&local_res10), bVar4)) &&
       ((float)local_res10.Value != (float)local_res8.ComparisonIndex.Value)) {
      (param_1->Iridescence).IridescenceFactor = (float)local_res8.ComparisonIndex.Value;
    }
    GetProxyParameter(this,&FGLTFProxyMaterialInfo::IridescenceTexture,
                      &(param_1->Iridescence).IridescenceTexture);
    pUVar2 = this->Material;
    bVar4 = UMaterialInterface::GetScalarParameterValue
                      (pUVar2,&FGLTFProxyMaterialInfo::IridescenceIOR.ParameterInfo,
                       (float *)&local_res8,true);
    if (((bVar4) &&
        (bVar4 = UMaterialInterface::GetScalarParameterDefaultValue
                           (pUVar2,&FGLTFProxyMaterialInfo::IridescenceIOR.ParameterInfo,
                            (float *)&local_res10), bVar4)) &&
       ((float)local_res10.Value != (float)local_res8.ComparisonIndex.Value)) {
      (param_1->Iridescence).IridescenceIOR = (float)local_res8.ComparisonIndex.Value;
    }
    pUVar2 = this->Material;
    bVar4 = UMaterialInterface::GetScalarParameterValue
                      (pUVar2,&FGLTFProxyMaterialInfo::IridescenceThicknessMinimum.ParameterInfo,
                       (float *)&local_res8,true);
    if (((bVar4) &&
        (bVar4 = UMaterialInterface::GetScalarParameterDefaultValue
                           (pUVar2,&FGLTFProxyMaterialInfo::IridescenceThicknessMinimum.
                                    ParameterInfo,(float *)&local_res10), bVar4)) &&
       ((float)local_res10.Value != (float)local_res8.ComparisonIndex.Value)) {
      (param_1->Iridescence).IridescenceThicknessMinimum = (float)local_res8.ComparisonIndex.Value;
    }
    pUVar2 = this->Material;
    bVar4 = UMaterialInterface::GetScalarParameterValue
                      (pUVar2,&FGLTFProxyMaterialInfo::IridescenceThicknessMaximum.ParameterInfo,
                       (float *)&local_res8,true);
    if (((bVar4) &&
        (bVar4 = UMaterialInterface::GetScalarParameterDefaultValue
                           (pUVar2,&FGLTFProxyMaterialInfo::IridescenceThicknessMaximum.
                                    ParameterInfo,(float *)&local_res10), bVar4)) &&
       ((float)local_res10.Value != (float)local_res8.ComparisonIndex.Value)) {
      (param_1->Iridescence).IridescenceThicknessMaximum = (float)local_res8.ComparisonIndex.Value;
    }
    GetProxyParameter(this,&FGLTFProxyMaterialInfo::IridescenceThicknessTexture,
                      &(param_1->Iridescence).IridescenceThicknessTexture);
    pUVar2 = this->Material;
    bVar4 = UMaterialInterface::GetScalarParameterValue
                      (pUVar2,&FGLTFProxyMaterialInfo::AnisotropyStrength.ParameterInfo,
                       (float *)&local_res8,true);
    if (((bVar4) &&
        (bVar4 = UMaterialInterface::GetScalarParameterDefaultValue
                           (pUVar2,&FGLTFProxyMaterialInfo::AnisotropyStrength.ParameterInfo,
                            (float *)&local_res10), bVar4)) &&
       ((float)local_res10.Value != (float)local_res8.ComparisonIndex.Value)) {
      (param_1->Anisotropy).AnisotropyStrength = (float)local_res8.ComparisonIndex.Value;
    }
    pUVar2 = this->Material;
    bVar4 = UMaterialInterface::GetScalarParameterValue
                      (pUVar2,&FGLTFProxyMaterialInfo::AnisotropyRotation.ParameterInfo,
                       (float *)&local_res8,true);
    if (((bVar4) &&
        (bVar4 = UMaterialInterface::GetScalarParameterDefaultValue
                           (pUVar2,&FGLTFProxyMaterialInfo::AnisotropyRotation.ParameterInfo,
                            (float *)&local_res10), bVar4)) &&
       ((float)local_res10.Value != (float)local_res8.ComparisonIndex.Value)) {
      (param_1->Anisotropy).AnisotropyRotation = (float)local_res8.ComparisonIndex.Value;
    }
    GetProxyParameter(this,&FGLTFProxyMaterialInfo::AnisotropyTexture,
                      &(param_1->Anisotropy).AnisotropyTexture);
  }
  return;
}

// HandleGLTFImported @ 14e600e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FGLTFDelayedMaterialTask::HandleGLTFImported
          (FGLTFDelayedMaterialTask *this,EMaterialShadingModel *param_1)

{
  bool bVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [72];
  undefined4 local_40;
  bool local_1f;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (*(char *)(this->Builder->_padding_ + 0x31) == '\0') {
    bVar1 = false;
  }
  else {
    FGLTFImportMaterialMatchMakingHelper::FGLTFImportMaterialMatchMakingHelper
              ((FGLTFImportMaterialMatchMakingHelper *)local_88,this->Builder,this->Material,
               this->JsonMaterial);
    bVar1 = local_1f != false;
    if (bVar1) {
      ApplyExportOptionsToShadingModel(this,&this->JsonMaterial->ShadingModel,param_1);
      FGLTFImportMaterialMatchMakingHelper::Process
                ((FGLTFImportMaterialMatchMakingHelper *)local_88);
    }
    local_40 = 0;
    if ((void *)local_88._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_88._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,UMaterialExpression_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,UMaterialExpression_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,UMaterialExpression_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
  }
  return bVar1;
}

// Process @ 14e606580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FGLTFDelayedMaterialTask::Process(FGLTFDelayedMaterialTask *this)

{
  FGLTFJsonMaterial *pFVar1;
  FScriptContainerElement *pFVar2;
  FGLTFConvertBuilder *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  EMaterialShadingModel EVar7;
  uint uVar8;
  FName this_00;
  UEnum *pUVar9;
  FString *pFVar10;
  EGLTFJsonShadingModel EVar11;
  EGLTFJsonShadingModel EVar12;
  float fVar13;
  undefined1 auStackY_1c8 [32];
  EMaterialShadingModel local_198 [2];
  FName local_190;
  FString local_188;
  FString local_178;
  FName local_168;
  FName local_160;
  FName local_158;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  undefined1 local_a8 [72];
  undefined4 local_60;
  bool local_3f;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar6 = false;
  EVar12 = Default;
  local_198[0] = MSM_Unlit;
  this_00 = (FName)(**(code **)(this->Material->_padding_ + 0x2d0))();
  local_168 = (FName)this->Material->_padding_;
  local_190 = this_00;
  ::FName::ToString(&local_168,&local_188);
  if (this->MeshData != (FGLTFMeshData *)0x0) {
    ::FString::ConcatCF(&local_150,L"_",&this->MeshData->Name);
    EVar11 = local_150.Data.ArrayNum - Unlit;
    if (local_150.Data.ArrayNum == 0) {
      EVar11 = EVar12;
    }
    ::FString::AppendChars(&local_188,(wchar_t *)local_150.Data.AllocatorInstance.Data,EVar11);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = this->JsonMaterial;
  pFVar10 = &pFVar1->Name;
  if (pFVar10 != &local_188) {
    pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar10->Data).AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Name).Data.ArrayNum = local_188.Data.ArrayNum;
    (pFVar1->Name).Data.ArrayMax = local_188.Data.ArrayMax;
    local_188.Data.ArrayNum = 0;
    local_188.Data.ArrayMax = 0;
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  bVar5 = (bool)(**(code **)(this->Material->_padding_ + 0x478))();
  this->JsonMaterial->DoubleSided = bVar5;
  pFVar1 = this->JsonMaterial;
  local_198[0] = (**(code **)(this->Material->_padding_ + 0x460))();
  if (local_198[0] == MSM_Unlit) {
    pFVar1->AlphaMode = Opaque;
  }
  else if (local_198[0] == MSM_DefaultLit) {
    pFVar1->AlphaMode = Mask;
  }
  else {
    pFVar1->AlphaMode = Blend;
    if (local_198[0] != MSM_Subsurface) {
      pFVar3 = this->Builder;
      pUVar9 = StaticEnum<enum_EBlendMode>();
      FGLTFNameUtilities::GetName(&local_120,pUVar9,2);
      local_160 = (FName)this->Material->_padding_;
      ::FName::ToString(&local_160,&local_130);
      pUVar9 = StaticEnum<enum_EBlendMode>();
      FGLTFNameUtilities::GetName(&local_140,pUVar9,local_198[0]);
      ::FString::PrintfImpl
                (&local_f0,L"Unsupported blend mode (%s) in material %s, will export as %s");
      FGLTFLogBuilder::LogWarning((FGLTFLogBuilder *)pFVar3,&local_f0);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      this_00 = local_190;
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
        this_00 = local_190;
      }
    }
  }
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  EVar7 = FGLTFMaterialUtilities::GetShadingModel(this->Material,&local_178);
  local_198[0] = EVar7;
  if (1 < local_178.Data.ArrayNum) {
    FGLTFLogBuilder::LogWarning((FGLTFLogBuilder *)this->Builder,&local_178);
  }
  if (*(char *)(this->Builder->_padding_ + 0x31) != '\0') {
    FGLTFImportMaterialMatchMakingHelper::FGLTFImportMaterialMatchMakingHelper
              ((FGLTFImportMaterialMatchMakingHelper *)local_a8,this->Builder,this->Material,
               this->JsonMaterial);
    if (local_3f != false) {
      ApplyExportOptionsToShadingModel(this,&this->JsonMaterial->ShadingModel,local_198);
      FGLTFImportMaterialMatchMakingHelper::Process
                ((FGLTFImportMaterialMatchMakingHelper *)local_a8);
      local_60 = 0;
      if ((void *)local_a8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_a8._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,UMaterialExpression_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,UMaterialExpression_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,UMaterialExpression_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      goto LAB_14e606ab5;
    }
    local_60 = 0;
    if ((void *)local_a8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,UMaterialExpression_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,UMaterialExpression_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,UMaterialExpression_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a8);
  }
  fVar13 = (float)(**(code **)(this->Material->_padding_ + 0x450))();
  this->JsonMaterial->AlphaCutoff = fVar13;
  pFVar1 = this->JsonMaterial;
  uVar8 = (**(code **)(this->Material->_padding_ + 0x460))();
  if ((EVar7 == MSM_ClearCoat) && (local_198[0] = EVar7, 1 < uVar8)) {
    EVar7 = MSM_DefaultLit;
    local_198[0] = EVar7;
  }
  if (EVar7 == MSM_Unlit) {
    EVar12 = Unlit;
  }
  else if ((EVar7 != MSM_DefaultLit) && (EVar12 = ClearCoat, EVar7 != MSM_ClearCoat)) {
    if (EVar7 == MSM_Cloth) {
      EVar12 = Sheen;
    }
    else if (EVar7 == MSM_ThinTranslucent) {
      EVar12 = Transmission;
    }
    else {
      EVar12 = None;
    }
  }
  pFVar1->ShadingModel = EVar12;
  ApplyExportOptionsToShadingModel(this,&this->JsonMaterial->ShadingModel,local_198);
  EVar12 = this->JsonMaterial->ShadingModel;
  if ((EVar12 == None) || (5 < (int)EVar12)) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<212293447392952400>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Tasks\\GLTFDelayedMaterialTasks.cpp"
                       ,0x50,
                       "(JsonMaterial->ShadingModel != EGLTFJsonShadingModel::None) && ((int)JsonMaterial->ShadingModel < (int)EGLTFJsonShadingModel::NumShadingModels)"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = this->Builder;
    local_158 = (FName)this->Material->_padding_;
    ::FName::ToString(&local_158,&local_100);
    ::FString::PrintfImpl(&local_d0,L"Failed to export %s material. ShadingModel is unexpected.");
    FGLTFLogBuilder::LogWarning((FGLTFLogBuilder *)pFVar3,&local_d0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (this_00 == (FName)0x0) {
LAB_14e60699c:
      bVar5 = false;
    }
    else {
      pFVar10 = UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)this_00,&local_c0,(UObject *)0x0);
      bVar6 = ::FString::StartsWith
                        (pFVar10,L"/GLTFExporter/Materials/Proxy/M_GLTF_",0x25,IgnoreCase);
      if (!bVar6) {
        bVar6 = true;
        goto LAB_14e60699c;
      }
      bVar5 = true;
      bVar6 = true;
    }
    if ((bVar6) && (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      GetProxyParameters(this,this->JsonMaterial);
      goto LAB_14e606ab5;
    }
    pFVar3 = this->Builder;
    local_190 = (FName)this->Material->_padding_;
    ::FName::ToString(&local_190,&local_110);
    ::FString::PrintfImpl
              (&local_e0,
               L"Can\'t properly export material %s in a runtime environment without a glTF proxy. In the Unreal Editor\'s Content Browser, please right-click on the material, then select Create glTF Proxy Material"
              );
    FGLTFLogBuilder::LogError((FGLTFLogBuilder *)pFVar3,&local_e0);
    local_100.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      local_100.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
    }
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
LAB_14e606ab5:
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  return;
}

