// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 17

// ComputMaterialHash @ 14e782cd0

void __thiscall
UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::ComputMaterialHash
          (FDuplicateMaterialHelper *this,UInterchangeShaderGraphNode *param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  uVar1 = ComputeShaderGraphNodeHash(this,param_1);
  this->MaterialHash = uVar1;
  if (*(int *)&(this->ParentMaterialFactoryMap).field_0x8 !=
      *(int *)&(this->ParentMaterialFactoryMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->ParentMaterialFactoryMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ParentMaterialFactoryMap).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->ParentMaterialFactoryMap).field_0x48 - 1U & uVar1) *
                              4);
    if (iVar2 != -1) {
      while (*(uint *)(*(longlong *)&this->ParentMaterialFactoryMap + (longlong)iVar2 * 0x18) !=
             uVar1) {
        iVar2 = *(int *)(*(longlong *)&this->ParentMaterialFactoryMap + 0x10 +
                        (longlong)iVar2 * 0x18);
        if (iVar2 == -1) {
          return;
        }
      }
      this->bIsDuplicate = true;
    }
  }
  return;
}

// ComputeShaderGraphNodeHash @ 14e782d50

int __thiscall
UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::ComputeShaderGraphNodeHash
          (FDuplicateMaterialHelper *this,UInterchangeShaderGraphNode *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool local_res8 [8];
  float local_res18 [2];
  
  UInterchangeShaderGraphNode::GetCustomTwoSided(param_1,local_res8);
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,&Common::Parameters::BxDF);
  iVar5 = (uint)local_res8[0] - (uint)bVar1;
  uVar7 = iVar5 * 0x100 ^ 0x9e3779b9 - local_res8[0];
  uVar4 = (bVar1 - uVar7) - iVar5 ^ uVar7 >> 0xd;
  uVar6 = (iVar5 - uVar4) - uVar7 ^ uVar4 >> 0xc;
  uVar7 = (uVar7 - uVar6) - uVar4 ^ uVar6 << 0x10;
  uVar4 = (uVar4 - uVar6) - uVar7 ^ uVar7 >> 5;
  uVar6 = (uVar6 - uVar4) - uVar7 ^ uVar4 >> 3;
  uVar7 = (uVar7 - uVar6) - uVar4 ^ uVar6 << 10;
  uVar6 = (uVar4 - uVar7) - uVar6 ^ uVar7 >> 0xf;
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,&ThinTranslucent::Parameters::TransmissionColor
                    );
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,&ThinTranslucent::Parameters::SurfaceCoverage);
  uVar4 = 2;
  if ((bVar1) || (bVar2)) {
    iVar5 = 2;
  }
  else {
    bVar1 = UInterchangeShaderPortsAPI::HasInput
                      ((UInterchangeBaseNode *)param_1,&Subsurface::Parameters::SubsurfaceColor);
    iVar5 = 0;
    if (!bVar1) {
      bVar1 = UInterchangeShaderPortsAPI::HasInput
                        ((UInterchangeBaseNode *)param_1,&Common::Parameters::Opacity);
      if (bVar1) {
        bVar1 = UInterchangeShaderPortsAPI::HasInput
                          ((UInterchangeBaseNode *)param_1,&Unlit::Parameters::UnlitColor);
        if (bVar1) {
          bVar1 = UInterchangeShaderGraphNode::GetCustomOpacityMaskClipValue(param_1,local_res18);
          iVar5 = 2 - (uint)bVar1;
        }
      }
    }
  }
  iVar3 = uVar6 - iVar5;
  uVar7 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar6;
  uVar8 = (iVar5 - uVar7) - iVar3 ^ uVar7 >> 0xd;
  uVar6 = (iVar3 - uVar8) - uVar7 ^ uVar8 >> 0xc;
  uVar7 = (uVar7 - uVar6) - uVar8 ^ uVar6 << 0x10;
  uVar8 = (uVar8 - uVar6) - uVar7 ^ uVar7 >> 5;
  uVar6 = (uVar6 - uVar8) - uVar7 ^ uVar8 >> 3;
  uVar7 = (uVar7 - uVar6) - uVar8 ^ uVar6 << 10;
  uVar6 = (uVar8 - uVar7) - uVar6 ^ uVar7 >> 0xf;
  iVar3 = uVar6 - (iVar5 == 2);
  uVar7 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar6;
  uVar8 = ((iVar5 == 2) - uVar7) - iVar3 ^ uVar7 >> 0xd;
  uVar6 = (iVar3 - uVar8) - uVar7 ^ uVar8 >> 0xc;
  uVar7 = (uVar7 - uVar8) - uVar6 ^ uVar6 << 0x10;
  uVar8 = (uVar8 - uVar7) - uVar6 ^ uVar7 >> 5;
  uVar6 = (uVar6 - uVar8) - uVar7 ^ uVar8 >> 3;
  uVar7 = (uVar7 - uVar6) - uVar8 ^ uVar6 << 10;
  uVar6 = (uVar8 - uVar7) - uVar6 ^ uVar7 >> 0xf;
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,&ThinTranslucent::Parameters::TransmissionColor
                    );
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,&ThinTranslucent::Parameters::SurfaceCoverage);
  if ((bVar1) || (bVar2)) {
    uVar4 = 1;
  }
  else {
    bVar1 = UInterchangeShaderPortsAPI::HasInput
                      ((UInterchangeBaseNode *)param_1,&Subsurface::Parameters::SubsurfaceColor);
    if (!bVar1) {
      bVar1 = UInterchangeShaderPortsAPI::HasInput
                        ((UInterchangeBaseNode *)param_1,&ClearCoat::Parameters::ClearCoat);
      if (bVar1) {
        uVar4 = 3;
      }
      else {
        bVar1 = UInterchangeShaderPortsAPI::HasInput
                          ((UInterchangeBaseNode *)param_1,&Unlit::Parameters::UnlitColor);
        uVar4 = -(uint)bVar1 & 4;
      }
    }
  }
  iVar5 = uVar6 - uVar4;
  uVar7 = iVar5 * 0x100 ^ 0x9e3779b9 - uVar6;
  uVar6 = (uVar4 - iVar5) - uVar7 ^ uVar7 >> 0xd;
  uVar4 = (iVar5 - uVar6) - uVar7 ^ uVar6 >> 0xc;
  uVar8 = (uVar7 - uVar4) - uVar6 ^ uVar4 << 0x10;
  uVar7 = (uVar6 - uVar8) - uVar4 ^ uVar8 >> 5;
  uVar6 = (uVar4 - uVar7) - uVar8 ^ uVar7 >> 3;
  uVar8 = (uVar8 - uVar6) - uVar7 ^ uVar6 << 10;
  uVar4 = ComputeShaderNodeHash(this,(UInterchangeShaderNode *)param_1);
  uVar6 = ((uVar7 - uVar8) - uVar6 ^ uVar8 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar7 = (-0x61c88647 - uVar6) - uVar4 ^ uVar6 << 8;
  uVar4 = (uVar4 - uVar7) - uVar6 ^ uVar7 >> 0xd;
  uVar6 = (uVar6 - uVar4) - uVar7 ^ uVar4 >> 0xc;
  uVar7 = (uVar7 - uVar6) - uVar4 ^ uVar6 << 0x10;
  uVar4 = (uVar4 - uVar7) - uVar6 ^ uVar7 >> 5;
  uVar6 = (uVar6 - uVar4) - uVar7 ^ uVar4 >> 3;
  uVar7 = (uVar7 - uVar6) - uVar4 ^ uVar6 << 10;
  return (uVar4 - uVar7) - uVar6 ^ uVar7 >> 0xf;
}

// ComputeShaderInputHash @ 14e7830f0

int __thiscall
UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::ComputeShaderInputHash
          (FDuplicateMaterialHelper *this,UInterchangeShaderNode *param_1,FString *param_2)

{
  FName FVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  EAttributeTypes EVar6;
  FNameEntryId FVar7;
  UInterchangeShaderNode *pUVar8;
  UClass *pUVar9;
  FName *pFVar10;
  FString *pFVar11;
  int iVar12;
  int iVar13;
  FName local_res20;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FLinearColor_u_0 local_38;
  
  iVar13 = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  bVar3 = UInterchangeShaderPortsAPI::GetInputConnection
                    ((UInterchangeBaseNode *)param_1,param_2,&local_48,&local_68);
  if (bVar3) {
    pUVar8 = (UInterchangeShaderNode *)
             UInterchangeBaseNodeContainer::GetNode
                       ((this->GenericMaterialPipeline->BaseNodeContainer).field0_0x0.DebugPtr,
                        &local_48);
    iVar4 = 0;
    if (pUVar8 != (UInterchangeShaderNode *)0x0) {
      pUVar9 = Z_Construct_UClass_UInterchangeShaderNode_NoRegister();
      iVar12 = (int)pUVar9->_padding_;
      iVar4 = 0;
      if ((iVar12 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
          &pUVar9->_padding_)) {
        iVar4 = ComputeShaderNodeHash(this,pUVar8);
        iVar4 = HashCombineCustom(this,0,iVar4);
      }
    }
    if (1 < local_68.Data.ArrayNum) {
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        iVar13 = local_68.Data.ArrayNum + -1;
        FVar2.Data = local_68.Data.AllocatorInstance.Data;
      }
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar2.Data);
      iVar4 = HashCombineCustom(this,iVar4,uVar5);
    }
    goto LAB_14e7833c9;
  }
  iVar4 = (param_2->Data).ArrayNum;
  iVar12 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar12 = iVar13;
  }
  pFVar10 = ::FName::FName((FName *)&local_78,iVar12,
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data,FNAME_Add);
  local_res20 = *pFVar10;
  bVar3 = UInterchangeShaderPortsAPI::HasParameter((UInterchangeBaseNode *)param_1,&local_res20);
  EVar6 = UInterchangeShaderPortsAPI::GetInputType((UInterchangeBaseNode *)param_1,param_2,bVar3);
  iVar4 = HashCombineCustom(this,0,EVar6);
  if (bVar3) {
    UInterchangeShaderPortsAPI::MakeInputParameterKey(&local_58,param_2);
    pFVar11 = UInterchangeBaseNode::GetDisplayLabel
                        ((UInterchangeBaseNode *)param_1,(FString *)&local_38._s_0);
    FInterchangeMaterialInstanceOverridesAPI::MakeOverrideParameterName(&local_78,pFVar11);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    if (EVar6 == Bool) {
      SetupOverridableStaticBoolParameter(this,param_1,&local_58,&local_78);
    }
    else if (EVar6 == Float) {
      SetupOverridableScalarParameter(this,param_1,&local_58,&local_78);
    }
    else if (EVar6 == LinearColor) {
      SetupOverridableVectorParameter(this,param_1,&local_58,&local_78);
    }
    else if (EVar6 == String) {
      SetupOverridableTextureParameter(this,param_1,&local_58,&local_78);
    }
LAB_14e783353:
    if ((FName)local_78.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  else {
    UInterchangeShaderPortsAPI::MakeInputValueKey(&local_58,param_2);
    if (EVar6 == Float) {
      bVar3 = UInterchangeBaseNode::GetFloatAttribute
                        ((UInterchangeBaseNode *)param_1,&local_58,(float *)&local_res20);
      if (bVar3) {
        FVar7.Value = local_res20.ComparisonIndex.Value;
LAB_14e7833a5:
        iVar4 = HashCombineCustom(this,iVar4,FVar7.Value);
      }
    }
    else if (EVar6 == LinearColor) {
      bVar3 = UInterchangeBaseNode::GetLinearColorAttribute
                        ((UInterchangeBaseNode *)param_1,&local_58,(FLinearColor *)&local_38._s_0);
      if (bVar3) {
        FVar7.Value = FCrc::MemCrc_DEPRECATED(&local_38,0x10,0);
        goto LAB_14e7833a5;
      }
    }
    else if (EVar6 == String) {
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      bVar3 = UInterchangeBaseNode::GetStringAttribute
                        ((UInterchangeBaseNode *)param_1,&local_58,&local_78);
      if (bVar3) {
        FVar1 = (FName)L"";
        if (local_78.Data.ArrayNum != 0) {
          iVar13 = local_78.Data.ArrayNum + -1;
          FVar1 = (FName)local_78.Data.AllocatorInstance;
        }
        uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar1);
        iVar4 = HashCombineCustom(this,iVar4,uVar5);
      }
      goto LAB_14e783353;
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_14e7833c9:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return iVar4;
}

// ComputeShaderNodeHash @ 14e783420

int __thiscall
UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::ComputeShaderNodeHash
          (FDuplicateMaterialHelper *this,UInterchangeShaderNode *param_1)

{
  FInterchangeUserDefinedAttributeInfo *pFVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FAttributeKey *pFVar7;
  FString *pFVar8;
  UClass *pUVar9;
  int iVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<FInterchangeUserDefinedAttributeInfo,TSizedDefaultAllocator<32>_> local_c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  FString local_a8;
  FInterchangeUserDefinedAttributeInfo *local_98;
  FString local_90;
  FString local_80;
  FAttributeKey local_70;
  FString local_60;
  FString local_50;
  
  iVar6 = 0;
  iVar10 = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  UInterchangeShaderNode::GetCustomShaderType(param_1,&local_a8);
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  UInterchangeShaderPortsAPI::GatherInputs((UInterchangeBaseNode *)param_1,&local_b8);
  if (local_a8.Data.ArrayNum < 2) {
    iVar5 = 0;
    if (param_1 == (UInterchangeShaderNode *)0x0) goto LAB_14e7836a2;
    pUVar9 = Z_Construct_UClass_UInterchangeFunctionCallShaderNode_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    iVar5 = iVar10;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar9->_padding_)) goto LAB_14e7836a2;
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    bVar3 = UInterchangeFunctionCallShaderNode::GetCustomMaterialFunction
                      ((UInterchangeFunctionCallShaderNode *)param_1,(FString *)&local_c8);
    iVar5 = 0;
    if ((bVar3) && (iVar5 = iVar10, 1 < local_c8.ArrayNum)) {
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_c8.ArrayNum != 0) {
        iVar6 = local_c8.ArrayNum + -1;
        FVar13.Data = local_c8.AllocatorInstance.Data;
      }
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar13.Data);
      iVar5 = HashCombineCustom(this,0,uVar4);
    }
  }
  else {
    iVar6 = local_a8.Data.ArrayNum + -1;
    FVar13.Data = local_a8.Data.AllocatorInstance.Data;
    if (local_a8.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar13.Data = (FScriptContainerElement *)L"";
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar13.Data);
    iVar5 = HashCombineCustom(this,0,uVar4);
    UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttributeInfos
              (&local_c8,(UInterchangeBaseNode *)param_1);
    uVar11 = (ulonglong)local_c8.ArrayNum;
    iVar6 = 0;
    if (local_c8.ArrayNum != 0) {
      local_98 = (FInterchangeUserDefinedAttributeInfo *)
                 (local_c8.AllocatorInstance.Data + uVar11 * 0x30);
      local_res20 = local_c8.ArrayNum;
      pFVar14 = local_c8.AllocatorInstance.Data + 0x10;
      uVar15 = uVar11;
      while( true ) {
        iVar6 = (int)uVar11;
        if ((int)uVar11 != (int)uVar15) {
          `TCheckedPointerIterator<FInterchangeUserDefinedAttributeInfo,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
          iVar6 = local_c8.ArrayNum;
        }
        pFVar1 = (FInterchangeUserDefinedAttributeInfo *)(pFVar14 + -0x10);
        if (pFVar1 == local_98) break;
        iVar6 = HashCombineCustom(this,iVar5,*(EAttributeTypes *)pFVar14);
        if (*(EAttributeTypes *)(pFVar14 + -8) == None) {
          pwVar12 = L"";
          iVar10 = 0;
        }
        else {
          pwVar12 = (wchar_t *)(pFVar1->Name).Data.AllocatorInstance.Data;
          iVar10 = *(EAttributeTypes *)(pFVar14 + -8) - Bool;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar12);
        iVar5 = HashCombineCustom(this,iVar6,uVar4);
        AttributeTypeToString(&local_50,*(EAttributeTypes *)pFVar14);
        if (*(EAttributeTypes *)pFVar14 == String) {
          pFVar7 = UInterchangeUserDefinedAttributesAPI::MakeUserDefinedPropertyValueKey
                             (&local_70,(FString *)pFVar1,(bool)pFVar14[0x18]);
          local_90.Data.AllocatorInstance.Data = (pFVar7->Key).Data.AllocatorInstance.Data;
          (pFVar7->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_90.Data.ArrayNum = (pFVar7->Key).Data.ArrayNum;
          local_90.Data.ArrayMax = (pFVar7->Key).Data.ArrayMax;
          (pFVar7->Key).Data.ArrayNum = 0;
          (pFVar7->Key).Data.ArrayMax = 0;
          if (local_70.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Key.Data.AllocatorInstance.Data);
          }
          pFVar8 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_60);
          FInterchangeMaterialInstanceOverridesAPI::MakeOverrideParameterName(&local_80,pFVar8);
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
          SetupOverridableTextureParameter(this,param_1,&local_90,&local_80);
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        uVar11 = local_c8._8_8_ & 0xffffffff;
        pFVar14 = pFVar14 + 0x30;
        uVar15 = (ulonglong)local_res20;
      }
    }
    DestructItems<FInterchangeUserDefinedAttributeInfo,int>
              ((FInterchangeUserDefinedAttributeInfo *)local_c8.AllocatorInstance.Data,iVar6);
  }
  if ((FInterchangeUserDefinedAttributeInfo *)local_c8.AllocatorInstance.Data !=
      (FInterchangeUserDefinedAttributeInfo *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
LAB_14e7836a2:
  iVar10 = local_b8.ArrayNum;
  uVar11 = (ulonglong)local_b8.ArrayNum;
  iVar6 = 0;
  if (local_b8.ArrayNum != 0) {
    pFVar14 = local_b8.AllocatorInstance.Data + uVar11 * 0x10;
    FVar13.Data = local_b8.AllocatorInstance.Data;
    while( true ) {
      iVar6 = (int)uVar11;
      if ((int)uVar11 != iVar10) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
        iVar6 = local_b8.ArrayNum;
      }
      if (FVar13.Data == pFVar14) break;
      iVar6 = ComputeShaderInputHash(this,param_1,(FString *)FVar13.Data);
      iVar5 = HashCombineCustom(this,iVar5,iVar6);
      uVar11 = local_b8._8_8_ & 0xffffffff;
      FVar13.Data = FVar13.Data + 0x10;
    }
  }
  DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,iVar6);
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return iVar5;
}

// CopyLeafInputsToFactoryNode @ 14e78ffa0

void __thiscall
UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::CopyLeafInputsToFactoryNode
          (FDuplicateMaterialHelper *this,UInterchangeBaseMaterialFactoryNode *param_1)

{
  UInterchangeBaseNode::CopyStorageAttributes
            (this->AttributeStorageNode,(UInterchangeBaseNode *)param_1,
             &this->LeafInputAttributeKeys);
  return;
}

// CreateFactoryForDuplicateMaterials @ 14e7962f0

UInterchangeBaseMaterialFactoryNode * __thiscall
UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::CreateFactoryForDuplicateMaterials
          (FDuplicateMaterialHelper *this,UInterchangeShaderGraphNode *param_1,bool param_2,
          bool param_3)

{
  int iVar1;
  UInterchangeGenericMaterialPipeline *this_00;
  UInterchangeBaseMaterialFactoryNode *this_01;
  UInterchangeMaterialFactoryNode *pUVar2;
  UInterchangeMaterialInstanceFactoryNode *pUVar3;
  UInterchangeBaseMaterialFactoryNode **ppUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  UClass *local_res8;
  UInterchangeMaterialFactoryNode *local_48;
  undefined1 local_40 [24];
  
  if (this->bIsDuplicate != false) {
    pUVar3 = CreateMaterialInstanceFactoryFromReference(this,param_1);
    return (UInterchangeBaseMaterialFactoryNode *)pUVar3;
  }
  local_48 = UInterchangeGenericMaterialPipeline::CreateMaterialFactoryNode
                       (this->GenericMaterialPipeline,param_1);
  local_40._8_8_ = &local_48;
  local_40._0_8_ = &this->MaterialHash;
  TSet<TTuple<int,UInterchangeBaseMaterialFactoryNode_*>,TDefaultMapHashableKeyFuncs<int,UInterchangeBaseMaterialFactoryNode_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&,UInterchangeBaseMaterialFactoryNode_*_&>_>
            ((TSet<TTuple<int,UInterchangeBaseMaterialFactoryNode_*>,TDefaultMapHashableKeyFuncs<int,UInterchangeBaseMaterialFactoryNode_*,0>,FDefaultSetAllocator>
              *)&this->ParentMaterialFactoryMap,
             (TPairInitializer<int_&,UInterchangeBaseMaterialFactoryNode_*_&> *)&local_res8,
             (bool *)local_40);
  UInterchangeBaseNode::CopyStorageAttributes
            (this->AttributeStorageNode,(UInterchangeBaseNode *)local_48,
             &this->LeafInputAttributeKeys);
  pUVar2 = local_48;
  UInterchangeBaseNode::SetEnabled((UInterchangeBaseNode *)local_48,param_2);
  if (!param_3) {
    return (UInterchangeBaseMaterialFactoryNode *)pUVar2;
  }
  ppUVar4 = TMapBase<int,UInterchangeBaseMaterialFactoryNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UInterchangeBaseMaterialFactoryNode_*,0>_>
            ::FindChecked((TMapBase<int,UInterchangeBaseMaterialFactoryNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UInterchangeBaseMaterialFactoryNode_*,0>_>
                           *)&this->ParentMaterialFactoryMap,this->MaterialHash);
  this_00 = this->GenericMaterialPipeline;
  this_01 = *ppUVar4;
  local_res8 = Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar3 = (UInterchangeMaterialInstanceFactoryNode *)
           UInterchangeGenericMaterialPipeline::CreateBaseMaterialFactoryNode
                     (this_00,(UInterchangeBaseNode *)param_1,
                      (TSubclassOf<UInterchangeBaseMaterialFactoryNode>)&local_res8,true);
  if (pUVar3 != (UInterchangeMaterialInstanceFactoryNode *)0x0) {
    pUVar5 = Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14e796409;
  }
  pUVar3 = (UInterchangeMaterialInstanceFactoryNode *)0x0;
LAB_14e796409:
  if (this_01 != (UInterchangeBaseMaterialFactoryNode *)0x0) {
    pFVar6 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_01,(FString *)local_40);
    UInterchangeMaterialInstanceFactoryNode::SetCustomParent(pUVar3,pFVar6);
    if ((FScriptContainerElement *)local_40._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_40._0_8_);
    }
    pFVar6 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_01,(FString *)local_40);
    UInterchangeFactoryBaseNode::AddFactoryDependencyUid
              ((UInterchangeFactoryBaseNode *)pUVar3,pFVar6);
    if ((FScriptContainerElement *)local_40._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_40._0_8_);
    }
  }
  return (UInterchangeBaseMaterialFactoryNode *)pUVar3;
}

// CreateMaterialFactory @ 14e7994e0

UInterchangeBaseMaterialFactoryNode * __thiscall
UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::CreateMaterialFactory
          (FDuplicateMaterialHelper *this,UInterchangeShaderGraphNode *param_1)

{
  TPairInitializer<int_&,UInterchangeBaseMaterialFactoryNode_*_&> local_res8;
  UInterchangeMaterialFactoryNode *local_res18 [2];
  int *local_18;
  UInterchangeMaterialFactoryNode **local_10;
  
  local_res18[0] =
       UInterchangeGenericMaterialPipeline::CreateMaterialFactoryNode
                 (this->GenericMaterialPipeline,param_1);
  local_18 = &this->MaterialHash;
  local_10 = local_res18;
  TSet<TTuple<int,UInterchangeBaseMaterialFactoryNode_*>,TDefaultMapHashableKeyFuncs<int,UInterchangeBaseMaterialFactoryNode_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&,UInterchangeBaseMaterialFactoryNode_*_&>_>
            ((TSet<TTuple<int,UInterchangeBaseMaterialFactoryNode_*>,TDefaultMapHashableKeyFuncs<int,UInterchangeBaseMaterialFactoryNode_*,0>,FDefaultSetAllocator>
              *)&this->ParentMaterialFactoryMap,&local_res8,(bool *)&local_18);
  UInterchangeBaseNode::CopyStorageAttributes
            (this->AttributeStorageNode,(UInterchangeBaseNode *)local_res18[0],
             &this->LeafInputAttributeKeys);
  return (UInterchangeBaseMaterialFactoryNode *)local_res18[0];
}

// CreateMaterialInstanceFactoryForParent @ 14e799a10

UInterchangeMaterialInstanceFactoryNode * __thiscall
UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::
CreateMaterialInstanceFactoryForParent
          (FDuplicateMaterialHelper *this,UInterchangeShaderGraphNode *param_1)

{
  int iVar1;
  UInterchangeGenericMaterialPipeline *this_00;
  UInterchangeBaseMaterialFactoryNode *this_01;
  UInterchangeBaseMaterialFactoryNode **ppUVar2;
  UInterchangeMaterialInstanceFactoryNode *this_02;
  UClass *pUVar3;
  FString *pFVar4;
  UClass *local_res8;
  FString local_18;
  
  ppUVar2 = TMapBase<int,UInterchangeBaseMaterialFactoryNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UInterchangeBaseMaterialFactoryNode_*,0>_>
            ::FindChecked((TMapBase<int,UInterchangeBaseMaterialFactoryNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UInterchangeBaseMaterialFactoryNode_*,0>_>
                           *)&this->ParentMaterialFactoryMap,this->MaterialHash);
  this_00 = this->GenericMaterialPipeline;
  this_01 = *ppUVar2;
  local_res8 = Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8);
  }
  this_02 = (UInterchangeMaterialInstanceFactoryNode *)
            UInterchangeGenericMaterialPipeline::CreateBaseMaterialFactoryNode
                      (this_00,(UInterchangeBaseNode *)param_1,
                       (TSubclassOf<UInterchangeBaseMaterialFactoryNode>)&local_res8,true);
  if (this_02 != (UInterchangeMaterialInstanceFactoryNode *)0x0) {
    pUVar3 = Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_02->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14e799a9a;
  }
  this_02 = (UInterchangeMaterialInstanceFactoryNode *)0x0;
LAB_14e799a9a:
  if (this_01 != (UInterchangeBaseMaterialFactoryNode *)0x0) {
    pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_01,&local_18);
    UInterchangeMaterialInstanceFactoryNode::SetCustomParent(this_02,pFVar4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_01,&local_18);
    UInterchangeFactoryBaseNode::AddFactoryDependencyUid
              ((UInterchangeFactoryBaseNode *)this_02,pFVar4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return this_02;
}

// CreateMaterialInstanceFactoryFromReference @ 14e799b10

UInterchangeMaterialInstanceFactoryNode * __thiscall
UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::
CreateMaterialInstanceFactoryFromReference
          (FDuplicateMaterialHelper *this,UInterchangeShaderGraphNode *param_1)

{
  longlong lVar1;
  UInterchangeBaseNode *this_00;
  UInterchangeGenericMaterialPipeline *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UInterchangeMaterialInstanceFactoryNode *pUVar5;
  undefined8 *puVar6;
  UClass *pUVar7;
  FString *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  float local_res18 [2];
  float local_res20 [2];
  UClass *local_a8;
  FString local_a0;
  FString local_90;
  FLinearColor_u_0 local_80;
  FLinearColor_u_0 local_70;
  FString local_60;
  FString local_50;
  
  if (*(int *)&(this->ParentMaterialFactoryMap).field_0x8 !=
      *(int *)&(this->ParentMaterialFactoryMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->ParentMaterialFactoryMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->ParentMaterialFactoryMap).field_0x38;
    }
    iVar9 = *(int *)(puVar11 +
                    (ulonglong)
                    (*(int *)&(this->ParentMaterialFactoryMap).field_0x48 - 1U & this->MaterialHash)
                    * 4);
    if (iVar9 != -1) {
      lVar1 = *(longlong *)&this->ParentMaterialFactoryMap;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar9 * 0x18) == this->MaterialHash) {
          if ((((iVar9 != -1) && (lVar1 = lVar1 + (longlong)iVar9 * 0x18, lVar1 != 0)) &&
              (puVar6 = (undefined8 *)(lVar1 + 8), puVar6 != (undefined8 *)0x0)) &&
             (this_00 = (UInterchangeBaseNode *)*puVar6, this_00 != (UInterchangeBaseNode *)0x0)) {
            this_01 = this->GenericMaterialPipeline;
            local_a8 = Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_NoRegister();
            if ((GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (UClass *)0x0)) {
              GC::MarkAsReachable((UObject *)local_a8);
            }
            pUVar5 = (UInterchangeMaterialInstanceFactoryNode *)
                     UInterchangeGenericMaterialPipeline::CreateBaseMaterialFactoryNode
                               (this_01,(UInterchangeBaseNode *)param_1,
                                (TSubclassOf<UInterchangeBaseMaterialFactoryNode>)&local_a8,false);
            if (pUVar5 == (UInterchangeMaterialInstanceFactoryNode *)0x0) {
LAB_14e799c58:
              bVar3 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_5102957597653200448>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericMaterialPipeline.cpp"
                                 ,0x11c0,"MaterialInstanceFactoryNode");
              pUVar5 = (UInterchangeMaterialInstanceFactoryNode *)0x0;
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                pUVar5 = (UInterchangeMaterialInstanceFactoryNode *)(*pcVar2)();
                return pUVar5;
              }
            }
            else {
              pUVar7 = Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_NoRegister();
              iVar9 = (int)pUVar7->_padding_;
              if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar9) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
                  &pUVar7->_padding_)) goto LAB_14e799c58;
            }
            pFVar8 = UInterchangeBaseNode::GetUniqueID(this_00,&local_60);
            UInterchangeMaterialInstanceFactoryNode::SetCustomParent(pUVar5,pFVar8);
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
            pFVar8 = UInterchangeBaseNode::GetUniqueID(this_00,&local_50);
            UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                      ((UInterchangeFactoryBaseNode *)pUVar5,pFVar8);
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
            iVar9 = (this->LeafInputAttributeKeys).ArrayNum;
            pFVar10 = (this->LeafInputAttributeKeys).AllocatorInstance.Data;
            pFVar12 = pFVar10 + (longlong)iVar9 * 0x10;
            goto LAB_14e799ce4;
          }
          break;
        }
        iVar9 = *(int *)(lVar1 + 0x10 + (longlong)iVar9 * 0x18);
      } while (iVar9 != -1);
    }
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5102957597653200458>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericMaterialPipeline.cpp"
                     ,0x11b6,"ParentMaterialFactory");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UInterchangeMaterialInstanceFactoryNode *)(*pcVar2)();
    return pUVar5;
  }
  return (UInterchangeMaterialInstanceFactoryNode *)0x0;
LAB_14e799ce4:
  if ((this->LeafInputAttributeKeys).ArrayNum != iVar9) {
    `TCheckedPointerIterator<UE::Interchange::FAttributeKey,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res8);
  }
  if (pFVar10 == pFVar12) {
    return pUVar5;
  }
  iVar4 = (**(code **)(this->AttributeStorageNode->_padding_ + 0x2c8))
                    (this->AttributeStorageNode,pFVar10);
  if (iVar4 == 8) {
    bVar3 = UInterchangeBaseNode::GetFloatAttribute
                      (this->AttributeStorageNode,(FString *)pFVar10,local_res18);
    if (bVar3) {
      bVar3 = UInterchangeBaseNode::GetFloatAttribute(this_00,(FString *)pFVar10,local_res20);
      if ((bVar3) && (local_res20[0] != local_res18[0])) {
        UInterchangeBaseNode::AddFloatAttribute
                  ((UInterchangeBaseNode *)pUVar5,(FString *)pFVar10,local_res18);
      }
    }
  }
  else {
    if (iVar4 == 0xf) {
      bVar3 = UInterchangeBaseNode::GetLinearColorAttribute
                        (this->AttributeStorageNode,(FString *)pFVar10,
                         (FLinearColor *)&local_80._s_0);
      if (!bVar3) goto LAB_14e799e78;
      bVar3 = UInterchangeBaseNode::GetLinearColorAttribute
                        (this_00,(FString *)pFVar10,(FLinearColor *)&local_70._s_0);
      if ((!bVar3) ||
         ((((local_70._s_0.R == local_80._s_0.R && (local_70._s_0.G == local_80._s_0.G)) &&
           (local_70._s_0.B == local_80._s_0.B)) && (local_70._s_0.A == local_80._s_0.A))))
      goto LAB_14e799e78;
      UInterchangeBaseNode::AddLinearColorAttribute
                ((UInterchangeBaseNode *)pUVar5,(FString *)pFVar10,(FLinearColor *)&local_80._s_0);
      pFVar10 = pFVar10 + 0x10;
      goto LAB_14e799ce4;
    }
    if (iVar4 == 0x12) {
      local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.Data.ArrayNum = 0;
      local_90.Data.ArrayMax = 0;
      local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a0.Data.ArrayNum = 0;
      local_a0.Data.ArrayMax = 0;
      bVar3 = UInterchangeBaseNode::GetStringAttribute
                        (this->AttributeStorageNode,(FString *)pFVar10,&local_a0);
      if (bVar3) {
        bVar3 = UInterchangeBaseNode::GetStringAttribute(this_00,(FString *)pFVar10,&local_90);
        if (bVar3) {
          if (local_90.Data.ArrayNum == local_a0.Data.ArrayNum) {
            if (local_90.Data.ArrayNum < 2) goto LAB_14e799d4b;
            iVar4 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_90.Data.AllocatorInstance.Data,
                               (wchar_t *)local_a0.Data.AllocatorInstance.Data);
            bVar3 = iVar4 == 0;
          }
          else {
            bVar3 = local_90.Data.ArrayNum + local_a0.Data.ArrayNum == 1;
          }
          if (!bVar3) {
            UInterchangeBaseNode::AddStringAttribute
                      ((UInterchangeBaseNode *)pUVar5,(FString *)pFVar10,&local_a0);
          }
        }
      }
LAB_14e799d4b:
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (local_90.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_14e799e78;
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
      pFVar10 = pFVar10 + 0x10;
      goto LAB_14e799ce4;
    }
  }
LAB_14e799e78:
  pFVar10 = pFVar10 + 0x10;
  goto LAB_14e799ce4;
}

// GetShaderGraphNodeBlendMode @ 14e7bafd0

TEnumAsByte<EBlendMode> __thiscall
UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::GetShaderGraphNodeBlendMode
          (FDuplicateMaterialHelper *this,UInterchangeShaderGraphNode *param_1)

{
  bool bVar1;
  bool bVar2;
  TEnumAsByte<EBlendMode> TVar3;
  UInterchangeShaderGraphNode *in_R8;
  FDuplicateMaterialHelper *local_res8;
  
  *(undefined1 *)&param_1->_padding_ = 0;
  local_res8 = this;
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)in_R8,&ThinTranslucent::Parameters::TransmissionColor);
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)in_R8,&ThinTranslucent::Parameters::SurfaceCoverage);
  TVar3.Value = (uchar)param_1;
  if ((!bVar1) && (!bVar2)) {
    bVar1 = UInterchangeShaderPortsAPI::HasInput
                      ((UInterchangeBaseNode *)in_R8,&Subsurface::Parameters::SubsurfaceColor);
    if (bVar1) {
      *(undefined1 *)&param_1->_padding_ = 0;
      return (TEnumAsByte<EBlendMode>)TVar3.Value;
    }
    bVar1 = UInterchangeShaderPortsAPI::HasInput
                      ((UInterchangeBaseNode *)in_R8,&Common::Parameters::Opacity);
    if (!bVar1) {
      return (TEnumAsByte<EBlendMode>)TVar3.Value;
    }
    bVar1 = UInterchangeShaderPortsAPI::HasInput
                      ((UInterchangeBaseNode *)in_R8,&Unlit::Parameters::UnlitColor);
    if (!bVar1) {
      return (TEnumAsByte<EBlendMode>)TVar3.Value;
    }
    bVar1 = UInterchangeShaderGraphNode::GetCustomOpacityMaskClipValue(in_R8,(float *)&local_res8);
    if (bVar1) {
      *(undefined1 *)&param_1->_padding_ = 1;
      return (TEnumAsByte<EBlendMode>)TVar3.Value;
    }
  }
  *(undefined1 *)&param_1->_padding_ = 2;
  return (TEnumAsByte<EBlendMode>)TVar3.Value;
}

// GetShaderGraphNodeShadingModel @ 14e7bb0b0

uchar __thiscall
UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::GetShaderGraphNodeShadingModel
          (FDuplicateMaterialHelper *this,UInterchangeShaderGraphNode *param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,&ThinTranslucent::Parameters::TransmissionColor
                    );
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,&ThinTranslucent::Parameters::SurfaceCoverage);
  if ((bVar1) || (bVar2)) {
    return '\x01';
  }
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,&Subsurface::Parameters::SubsurfaceColor);
  if (bVar1) {
    return '\x02';
  }
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,&ClearCoat::Parameters::ClearCoat);
  if (bVar1) {
    return '\x03';
  }
  bVar1 = UInterchangeShaderPortsAPI::HasInput
                    ((UInterchangeBaseNode *)param_1,&Unlit::Parameters::UnlitColor);
  return -bVar1 & 4;
}

// HashCombineCustom @ 14e7c50e0

int __thiscall
UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::HashCombineCustom
          (FDuplicateMaterialHelper *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = param_1 - param_2 ^ (uint)param_2 >> 0xd;
  uVar1 = this->AccumulatedHash - param_2 ^ (uint)param_2 >> 0xd;
  uVar5 = (-0x61c88647 - uVar3) - param_2 ^ uVar3 << 8;
  uVar2 = (param_2 - uVar3) - uVar5 ^ uVar5 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xc;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 << 0x10;
  uVar2 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 3;
  uVar6 = (uVar5 - uVar3) - uVar2 ^ uVar3 << 10;
  uVar4 = (-0x61c88647 - uVar1) - param_2 ^ uVar1 << 8;
  uVar5 = (param_2 - uVar1) - uVar4 ^ uVar4 >> 0xd;
  uVar1 = (uVar1 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 << 0x10;
  uVar5 = (uVar5 - uVar4) - uVar1 ^ uVar4 >> 5;
  uVar1 = (uVar1 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 << 10;
  this->AccumulatedHash = (uVar5 - uVar4) - uVar1 ^ uVar4 >> 0xf;
  return (uVar2 - uVar6) - uVar3 ^ uVar6 >> 0xf;
}

// ResetHashData @ 14e7dc790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::ResetHashData
          (FDuplicateMaterialHelper *this)

{
  int *piVar1;
  TSet<UInterchangeShaderNode_const_*,DefaultKeyFuncs<UInterchangeShaderNode_const_*,0>,FDefaultSetAllocator>
  *this_00;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UInterchangeBaseNode *pUVar7;
  longlong *plVar8;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  this->AccumulatedHash = 0;
  this->MaterialHash = 0;
  this->bIsDuplicate = false;
  if (this->AttributeStorageNode != (UInterchangeBaseNode *)0x0) {
    UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this->AttributeStorageNode);
    this->AttributeStorageNode = (UInterchangeBaseNode *)0x0;
  }
  pUVar5 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UInterchangeBaseNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._8_8_ = pUVar5;
  pUVar7 = (UInterchangeBaseNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar8 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  this->AttributeStorageNode = pUVar7;
  DestructItems<UE::Interchange::FAttributeKey,int>
            ((FAttributeKey *)(this->LeafInputAttributeKeys).AllocatorInstance.Data,
             (this->LeafInputAttributeKeys).ArrayNum);
  piVar1 = &(this->LeafInputAttributeKeys).ArrayMax;
  (this->LeafInputAttributeKeys).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->LeafInputAttributeKeys).AllocatorInstance,0,piVar1);
  }
  this_00 = &this->LeafInputShaderNodes;
  bVar4 = 1 < (this->LeafInputShaderNodes).HashSize;
  if (!bVar4) {
    TSet<UInterchangeShaderNode_const_*,DefaultKeyFuncs<UInterchangeShaderNode_const_*,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  puVar2 = &(this->LeafInputShaderNodes).Elements.field_0xc;
  *(undefined4 *)&(this->LeafInputShaderNodes).Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->LeafInputShaderNodes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LeafInputShaderNodes).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->LeafInputShaderNodes).Elements.field_0x2c;
  *(undefined4 *)&(this->LeafInputShaderNodes).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->LeafInputShaderNodes).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->LeafInputShaderNodes).Elements.field_0x10,0);
  }
  if (bVar4) {
    (this->LeafInputShaderNodes).HashSize = 1;
    TSet<UInterchangeShaderNode_const_*,DefaultKeyFuncs<UInterchangeShaderNode_const_*,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  return;
}

// SetupOverridableScalarParameter @ 14e7e1fb0

void __thiscall
UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::SetupOverridableScalarParameter
          (FDuplicateMaterialHelper *this,UInterchangeShaderNode *param_1,FString *param_2,
          FString *param_3)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  char cVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  UInterchangeShaderNode *local_res10;
  float local_38;
  undefined1 local_34 [4];
  FString local_30;
  
  local_res10 = param_1;
  bVar3 = UInterchangeBaseNode::GetFloatAttribute((UInterchangeBaseNode *)param_1,param_2,&local_38)
  ;
  if (bVar3) {
    local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.Data.ArrayNum = 0;
    local_30.Data.ArrayMax = 0;
    ::FString::operator=(&local_30,param_3);
    cVar4 = (**(code **)(this->AttributeStorageNode->_padding_ + 0x2c0))
                      (this->AttributeStorageNode,&local_30);
    if (cVar4 == '\0') {
      UInterchangeBaseNode::AddFloatAttribute(this->AttributeStorageNode,param_3,&local_38);
      pFVar6 = (this->LeafInputAttributeKeys).AllocatorInstance.Data;
      if ((pFVar6 <= (FScriptContainerElement *)&local_30) &&
         ((FScriptContainerElement *)&local_30 <
          pFVar6 + (longlong)(this->LeafInputAttributeKeys).ArrayMax * 0x10)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = (this->LeafInputAttributeKeys).ArrayNum;
      piVar1 = &(this->LeafInputAttributeKeys).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->LeafInputAttributeKeys).AllocatorInstance,piVar1);
      }
      _Src.Data = local_30.Data.AllocatorInstance.Data;
      pFVar6 = (this->LeafInputAttributeKeys).AllocatorInstance.Data;
      (this->LeafInputAttributeKeys).ArrayNum = iVar5 + 1;
      pFVar6 = pFVar6 + (longlong)iVar5 * 0x10;
      *(undefined8 *)&pFVar6->field_0x0 = 0;
      lVar7 = (longlong)local_30.Data.ArrayNum;
      *(int *)&pFVar6[8].field_0x0 = local_30.Data.ArrayNum;
      if (local_30.Data.ArrayNum == 0) {
        *(int *)(pFVar6 + 0xc) = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_30.Data.ArrayNum,0,(ForAnyElementType *)pFVar6,local_30.Data.ArrayNum,
                   (int *)(pFVar6 + 0xc));
        memcpy(*(void **)&pFVar6->field_0x0,_Src.Data,lVar7 * 2);
      }
      TSet<UInterchangeShaderNode_const_*,DefaultKeyFuncs<UInterchangeShaderNode_const_*,0>,FDefaultSetAllocator>
      ::Emplace<UInterchangeShaderNode_const_*_&>
                (&this->LeafInputShaderNodes,(UInterchangeShaderNode **)local_34,
                 (bool *)&local_res10);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetupOverridableStaticBoolParameter @ 14e7e2180

void __thiscall
UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::SetupOverridableStaticBoolParameter
          (FDuplicateMaterialHelper *this,UInterchangeShaderNode *param_1,FString *param_2,
          FString *param_3)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  char cVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  UInterchangeShaderNode *local_res10;
  bool local_38 [4];
  undefined1 local_34 [4];
  FString local_30;
  
  local_res10 = param_1;
  bVar3 = UInterchangeBaseNode::GetBooleanAttribute
                    ((UInterchangeBaseNode *)param_1,param_2,local_38);
  if (bVar3) {
    local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.Data.ArrayNum = 0;
    local_30.Data.ArrayMax = 0;
    ::FString::operator=(&local_30,param_3);
    cVar4 = (**(code **)(this->AttributeStorageNode->_padding_ + 0x2c0))
                      (this->AttributeStorageNode,&local_30);
    if (cVar4 == '\0') {
      UInterchangeBaseNode::AddBooleanAttribute(this->AttributeStorageNode,param_3,local_38);
      pFVar6 = (this->LeafInputAttributeKeys).AllocatorInstance.Data;
      if ((pFVar6 <= (FScriptContainerElement *)&local_30) &&
         ((FScriptContainerElement *)&local_30 <
          pFVar6 + (longlong)(this->LeafInputAttributeKeys).ArrayMax * 0x10)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = (this->LeafInputAttributeKeys).ArrayNum;
      piVar1 = &(this->LeafInputAttributeKeys).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->LeafInputAttributeKeys).AllocatorInstance,piVar1);
      }
      _Src.Data = local_30.Data.AllocatorInstance.Data;
      pFVar6 = (this->LeafInputAttributeKeys).AllocatorInstance.Data;
      (this->LeafInputAttributeKeys).ArrayNum = iVar5 + 1;
      pFVar6 = pFVar6 + (longlong)iVar5 * 0x10;
      *(undefined8 *)&pFVar6->field_0x0 = 0;
      lVar7 = (longlong)local_30.Data.ArrayNum;
      *(int *)&pFVar6[8].field_0x0 = local_30.Data.ArrayNum;
      if (local_30.Data.ArrayNum == 0) {
        *(int *)(pFVar6 + 0xc) = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_30.Data.ArrayNum,0,(ForAnyElementType *)pFVar6,local_30.Data.ArrayNum,
                   (int *)(pFVar6 + 0xc));
        memcpy(*(void **)&pFVar6->field_0x0,_Src.Data,lVar7 * 2);
      }
      TSet<UInterchangeShaderNode_const_*,DefaultKeyFuncs<UInterchangeShaderNode_const_*,0>,FDefaultSetAllocator>
      ::Emplace<UInterchangeShaderNode_const_*_&>
                (&this->LeafInputShaderNodes,(UInterchangeShaderNode **)local_34,
                 (bool *)&local_res10);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetupOverridableTextureParameter @ 14e7e2350

void __thiscall
UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::SetupOverridableTextureParameter
          (FDuplicateMaterialHelper *this,UInterchangeShaderNode *param_1,FString *param_2,
          FString *param_3)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  char cVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  UInterchangeShaderNode *local_res10;
  UInterchangeShaderNode *local_78;
  FString local_70;
  FString local_60;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Data.ArrayNum = 0;
  local_60.Data.ArrayMax = 0;
  local_res10 = param_1;
  bVar3 = UInterchangeBaseNode::GetStringAttribute
                    ((UInterchangeBaseNode *)param_1,param_2,&local_60);
  if (bVar3) {
    local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.Data.ArrayNum = 0;
    local_70.Data.ArrayMax = 0;
    ::FString::operator=(&local_70,param_3);
    cVar4 = (**(code **)(this->AttributeStorageNode->_padding_ + 0x2c0))();
    if (cVar4 == '\0') {
      local_48 = local_60.Data.AllocatorInstance.Data;
      iStack_40 = local_60.Data.ArrayNum + -1;
      if (local_60.Data.ArrayNum == 0) {
        iStack_40 = 0;
      }
      local_28._12_4_ = uStack_3c;
      local_28.Size = iStack_40;
      local_28.DataPtr = (wchar_t *)local_60.Data.AllocatorInstance.Data;
      bVar3 = FPackageName::IsValidObjectPath(&local_28,(FText *)0x0);
      if (bVar3) {
        UInterchangeBaseNode::AddStringAttribute(this->AttributeStorageNode,param_3,&local_60);
      }
      else {
        UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_38,&local_60);
        UInterchangeBaseNode::AddStringAttribute(this->AttributeStorageNode,param_3,&local_38);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      pFVar6 = (this->LeafInputAttributeKeys).AllocatorInstance.Data;
      if ((pFVar6 <= (FScriptContainerElement *)&local_70) &&
         ((FScriptContainerElement *)&local_70 <
          pFVar6 + (longlong)(this->LeafInputAttributeKeys).ArrayMax * 0x10)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = (this->LeafInputAttributeKeys).ArrayNum;
      piVar1 = &(this->LeafInputAttributeKeys).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->LeafInputAttributeKeys).AllocatorInstance,piVar1);
      }
      _Src.Data = local_70.Data.AllocatorInstance.Data;
      pFVar6 = (this->LeafInputAttributeKeys).AllocatorInstance.Data;
      (this->LeafInputAttributeKeys).ArrayNum = iVar5 + 1;
      pFVar6 = pFVar6 + (longlong)iVar5 * 0x10;
      *(undefined8 *)&pFVar6->field_0x0 = 0;
      lVar7 = (longlong)local_70.Data.ArrayNum;
      *(int *)&pFVar6[8].field_0x0 = local_70.Data.ArrayNum;
      if (local_70.Data.ArrayNum == 0) {
        *(int *)(pFVar6 + 0xc) = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_70.Data.ArrayNum,0,(ForAnyElementType *)pFVar6,local_70.Data.ArrayNum,
                   (int *)(pFVar6 + 0xc));
        memcpy(*(void **)&pFVar6->field_0x0,_Src.Data,lVar7 * 2);
      }
      TSet<UInterchangeShaderNode_const_*,DefaultKeyFuncs<UInterchangeShaderNode_const_*,0>,FDefaultSetAllocator>
      ::Emplace<UInterchangeShaderNode_const_*_&>
                (&this->LeafInputShaderNodes,&local_78,(bool *)&local_res10);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return;
}

// SetupOverridableVectorParameter @ 14e7e25a0

void __thiscall
UE::Interchange::Materials::HashUtils::FDuplicateMaterialHelper::SetupOverridableVectorParameter
          (FDuplicateMaterialHelper *this,UInterchangeShaderNode *param_1,FString *param_2,
          FString *param_3)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  char cVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  UInterchangeShaderNode *local_res10;
  UInterchangeShaderNode *local_48;
  FString local_40;
  FLinearColor local_30;
  
  local_res10 = param_1;
  bVar3 = UInterchangeBaseNode::GetLinearColorAttribute
                    ((UInterchangeBaseNode *)param_1,param_2,&local_30);
  if (bVar3) {
    local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.Data.ArrayNum = 0;
    local_40.Data.ArrayMax = 0;
    ::FString::operator=(&local_40,param_3);
    cVar4 = (**(code **)(this->AttributeStorageNode->_padding_ + 0x2c0))
                      (this->AttributeStorageNode,&local_40);
    if (cVar4 == '\0') {
      UInterchangeBaseNode::AddLinearColorAttribute(this->AttributeStorageNode,param_3,&local_30);
      pFVar6 = (this->LeafInputAttributeKeys).AllocatorInstance.Data;
      if ((pFVar6 <= (FScriptContainerElement *)&local_40) &&
         ((FScriptContainerElement *)&local_40 <
          pFVar6 + (longlong)(this->LeafInputAttributeKeys).ArrayMax * 0x10)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = (this->LeafInputAttributeKeys).ArrayNum;
      piVar1 = &(this->LeafInputAttributeKeys).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->LeafInputAttributeKeys).AllocatorInstance,piVar1);
      }
      _Src.Data = local_40.Data.AllocatorInstance.Data;
      pFVar6 = (this->LeafInputAttributeKeys).AllocatorInstance.Data;
      (this->LeafInputAttributeKeys).ArrayNum = iVar5 + 1;
      pFVar6 = pFVar6 + (longlong)iVar5 * 0x10;
      *(undefined8 *)&pFVar6->field_0x0 = 0;
      lVar7 = (longlong)local_40.Data.ArrayNum;
      *(int *)&pFVar6[8].field_0x0 = local_40.Data.ArrayNum;
      if (local_40.Data.ArrayNum == 0) {
        *(int *)(pFVar6 + 0xc) = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_40.Data.ArrayNum,0,(ForAnyElementType *)pFVar6,local_40.Data.ArrayNum,
                   (int *)(pFVar6 + 0xc));
        memcpy(*(void **)&pFVar6->field_0x0,_Src.Data,lVar7 * 2);
      }
      TSet<UInterchangeShaderNode_const_*,DefaultKeyFuncs<UInterchangeShaderNode_const_*,0>,FDefaultSetAllocator>
      ::Emplace<UInterchangeShaderNode_const_*_&>
                (&this->LeafInputShaderNodes,&local_48,(bool *)&local_res10);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  return;
}

