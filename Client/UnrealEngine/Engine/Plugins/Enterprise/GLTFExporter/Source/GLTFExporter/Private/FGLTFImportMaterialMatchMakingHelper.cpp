// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 6

// FGLTFImportMaterialMatchMakingHelper @ 14e5d12d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGLTFImportMaterialMatchMakingHelper * __thiscall
FGLTFImportMaterialMatchMakingHelper::FGLTFImportMaterialMatchMakingHelper
          (FGLTFImportMaterialMatchMakingHelper *this,FGLTFConvertBuilder *param_1,
          UMaterialInterface *param_2,FGLTFJsonMaterial *param_3)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  UObjectBaseUtility *this_00;
  FGLTFImportMaterialMatchMakingHelper *pFVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  FString local_88 [2];
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  lVar8 = 0;
  *(undefined8 *)&this->Inputs = 0;
  *(undefined8 *)&(this->Inputs).field_0x8 = 0;
  *(undefined8 *)&(this->Inputs).field_0x20 = 0;
  *(undefined4 *)&(this->Inputs).field_0x28 = 0;
  *(undefined4 *)&(this->Inputs).field_0x2c = 0x80;
  *(undefined4 *)&(this->Inputs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Inputs).field_0x34 = 0;
  *(undefined8 *)&(this->Inputs).field_0x40 = 0;
  *(undefined4 *)&(this->Inputs).field_0x48 = 0;
  this->Builder = param_1;
  this->JsonMaterial = param_3;
  this->Material = param_2;
  if (param_2 != (UMaterialInterface *)0x0) {
    pUVar6 = Z_Construct_UClass_UMaterialInstance_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) {
      bVar3 = true;
      goto LAB_14e5d135c;
    }
  }
  bVar3 = false;
LAB_14e5d135c:
  this->bMaterialInstance = bVar3;
  this->bIsGLTFImportedMaterial = false;
  if ((this->Material != (UMaterialInterface *)0x0) &&
     (this_00 = (UObjectBaseUtility *)(**(code **)(this->Material->_padding_ + 0x2d0))(),
     this->bMaterialInstance != false)) {
    UObjectBaseUtility::GetPathName(this_00,local_88,(UObject *)0x0);
    UE::Interchange::GLTFMaterials::GetMaterialPathsToShadingModels
              ((TMap<FString,UE::Interchange::GLTFMaterials::EShadingModel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::GLTFMaterials::EShadingModel,0>_>
                *)local_68);
    iVar5 = local_88[0].Data.ArrayNum + -1;
    FVar2.Data = local_88[0].Data.AllocatorInstance.Data;
    if (local_88[0].Data.ArrayNum == 0) {
      iVar5 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
    iVar5 = TSet<TTuple<FString,enum_UE::Interchange::GLTFMaterials::EShadingModel>,TDefaultMapHashableKeyFuncs<FString,enum_UE::Interchange::GLTFMaterials::EShadingModel,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>(local_68,uVar4,local_88);
    if (iVar5 != -1) {
      this->bIsGLTFImportedMaterial = true;
      iVar5 = local_88[0].Data.ArrayNum + -1;
      FVar2.Data = local_88[0].Data.AllocatorInstance.Data;
      if (local_88[0].Data.ArrayNum == 0) {
        iVar5 = 0;
        FVar2.Data = (FScriptContainerElement *)L"";
      }
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
      iVar5 = TSet<TTuple<FString,enum_UE::Interchange::GLTFMaterials::EShadingModel>,TDefaultMapHashableKeyFuncs<FString,enum_UE::Interchange::GLTFMaterials::EShadingModel,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>(local_68,uVar4,local_88);
      if (((iVar5 == -1) || (lVar8 = (longlong)iVar5 * 0x20 + local_68._0_8_, lVar8 == 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FGLTFImportMaterialMatchMakingHelper *)(*pcVar1)();
        return pFVar7;
      }
      this->JsonMaterial->ShadingModel = (uint)*(byte *)(lVar8 + 0x10);
    }
    local_20 = 0;
    if ((void *)local_68._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_68._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,enum_UE::Interchange::GLTFMaterials::EShadingModel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,enum_UE::Interchange::GLTFMaterials::EShadingModel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_68);
    if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// GetValue @ 14e5ff8e0

bool __thiscall
FGLTFImportMaterialMatchMakingHelper::GetValue
          (FGLTFImportMaterialMatchMakingHelper *this,FString *param_1,float *param_2)

{
  UMaterialInterface *this_00;
  UMaterialExpression *pUVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FName *pFVar5;
  UMaterialExpression **ppUVar6;
  UClass *pUVar7;
  wchar_t *pwVar8;
  FName local_res8;
  FMemoryImageMaterialParameterInfo local_28;
  
  if (this->bMaterialInstance == false) {
    iVar4 = (param_1->Data).ArrayNum;
    if (iVar4 == 0) {
      pwVar8 = L"";
      iVar4 = 0;
    }
    else {
      pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      iVar4 = iVar4 + -1;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar8);
    iVar4 = TSet<TTuple<FString,UMaterialExpression_*>,TDefaultMapHashableKeyFuncs<FString,UMaterialExpression_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,UMaterialExpression_*>,TDefaultMapHashableKeyFuncs<FString,UMaterialExpression_*,0>,FDefaultSetAllocator>
                        *)this,uVar3,param_1);
    if (iVar4 != -1) {
      ppUVar6 = TMapBase<FString,UMaterialExpression_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UMaterialExpression_*,0>_>
                ::FindChecked((TMapBase<FString,UMaterialExpression_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UMaterialExpression_*,0>_>
                               *)this,param_1);
      pUVar1 = *ppUVar6;
      if (pUVar1 != (UMaterialExpression *)0x0) {
        pUVar7 = Z_Construct_UClass_UMaterialExpressionConstant_NoRegister();
        iVar4 = (int)pUVar7->_padding_;
        if ((iVar4 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar7->_padding_)) {
          *param_2 = *(float *)&pUVar1[1]._padding_;
          return true;
        }
      }
    }
  }
  else {
    this_00 = this->Material;
    if ((param_1->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pFVar5 = ::FName::FName(&local_res8,pwVar8);
    local_28.Name.ComparisonIndex = (*pFVar5).ComparisonIndex;
    local_28.Name.DisplayIndex.Value = 0;
    local_28.Name.Number = (*pFVar5).Number;
    local_28.Index = -1;
    local_28.Association.Value = '\x02';
    bVar2 = UMaterialInterface::GetScalarParameterValue(this_00,&local_28,param_2,true);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// GetValue @ 14e5ff9f0

bool __thiscall
FGLTFImportMaterialMatchMakingHelper::GetValue
          (FGLTFImportMaterialMatchMakingHelper *this,FString *param_1,FGLTFJsonColor3 *param_2)

{
  UMaterialInterface *this_00;
  UMaterialExpression *pUVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FName *pFVar5;
  UMaterialExpression **ppUVar6;
  UClass *pUVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  FName local_res8;
  FLinearColor_u_0 local_38;
  FMemoryImageMaterialParameterInfo local_28;
  
  if (this->bMaterialInstance == false) {
    iVar4 = (param_1->Data).ArrayNum;
    if (iVar4 == 0) {
      pwVar9 = L"";
      iVar4 = 0;
    }
    else {
      pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      iVar4 = iVar4 + -1;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar9);
    iVar4 = TSet<TTuple<FString,UMaterialExpression_*>,TDefaultMapHashableKeyFuncs<FString,UMaterialExpression_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,UMaterialExpression_*>,TDefaultMapHashableKeyFuncs<FString,UMaterialExpression_*,0>,FDefaultSetAllocator>
                        *)this,uVar3,param_1);
    if (iVar4 != -1) {
      ppUVar6 = TMapBase<FString,UMaterialExpression_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UMaterialExpression_*,0>_>
                ::FindChecked((TMapBase<FString,UMaterialExpression_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UMaterialExpression_*,0>_>
                               *)this,param_1);
      pUVar1 = *ppUVar6;
      if (pUVar1 != (UMaterialExpression *)0x0) {
        pUVar7 = Z_Construct_UClass_UMaterialExpressionConstant3Vector_NoRegister();
        iVar4 = (int)pUVar7->_padding_;
        if ((iVar4 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar7->_padding_)) {
          local_38._0_8_ = pUVar1[1]._padding_;
          local_38._s_0.B = (float)(int)pUVar1[1]._padding_;
          goto LAB_14e5ffafc;
        }
      }
    }
  }
  else {
    this_00 = this->Material;
    if ((param_1->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pFVar5 = ::FName::FName(&local_res8,pwVar9);
    local_28.Name.ComparisonIndex = (*pFVar5).ComparisonIndex;
    local_28.Name.Number = (*pFVar5).Number;
    local_28.Name.DisplayIndex.Value = 0;
    local_28.Index = -1;
    local_28.Association.Value = '\x02';
    bVar2 = UMaterialInterface::GetVectorParameterValue
                      (this_00,&local_28,(FLinearColor *)&local_38._s_0,true);
    if (bVar2) {
LAB_14e5ffafc:
      if (__real_3f800000 <= local_38._s_0.R) {
        local_38._s_0.R = __real_3f800000;
      }
      if (__real_3f800000 <= local_38._s_0.G) {
        local_38._s_0.G = __real_3f800000;
      }
      if (__real_3f800000 <= local_38._s_0.B) {
        local_38._s_0.B = __real_3f800000;
      }
      puVar8 = (undefined8 *)&param_2->field_0x8;
      if (param_2 == (FGLTFJsonColor3 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      if (local_38._s_0.R <= 0.0) {
        local_38._s_0.R = 0.0;
      }
      if (local_38._s_0.G <= 0.0) {
        local_38._s_0.G = 0.0;
      }
      if (local_38._s_0.B <= 0.0) {
        local_38._s_0.B = 0.0;
      }
      *puVar8 = CONCAT44(local_38._s_0.G,local_38._s_0.R);
      *(undefined4 *)(puVar8 + 1) = local_38._s_0.B;
      return true;
    }
  }
  return false;
}

// GetValue @ 14e5ffb60

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FGLTFImportMaterialMatchMakingHelper::GetValue
          (FGLTFImportMaterialMatchMakingHelper *this,FString *param_1,FGLTFJsonColor4 *param_2,
          bool param_3)

{
  int iVar1;
  UMaterialInterface *this_00;
  UMaterialExpression *pUVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FName *pFVar8;
  float *pfVar9;
  UMaterialExpression **ppUVar10;
  UClass *pUVar11;
  wchar_t *pwVar12;
  float *pfVar13;
  FName local_res8;
  float local_78 [2];
  FLinearColor_u_0 local_70;
  FString local_60;
  FMemoryImageMaterialParameterInfo local_50;
  undefined **local_38;
  float local_30;
  float fStack_2c;
  float local_28;
  
  pfVar13 = (float *)0x0;
  iVar7 = 0;
  local_res8.ComparisonIndex.Value = 0;
  if (this->bMaterialInstance != false) {
    this_00 = this->Material;
    if ((param_1->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pFVar8 = ::FName::FName(&local_res8,pwVar12);
    local_50.Name.ComparisonIndex = (*pFVar8).ComparisonIndex;
    local_50.Name.Number = (*pFVar8).Number;
    local_50.Name.DisplayIndex.Value = 0;
    local_50.Index = -1;
    local_50.Association.Value = '\x02';
    bVar4 = UMaterialInterface::GetVectorParameterValue
                      (this_00,&local_50,(FLinearColor *)&local_70._s_0,true);
    if (!bVar4) {
      return false;
    }
LAB_14e5ffd87:
    if (!param_3) {
      pfVar9 = (float *)&param_2->field_0x8;
      if (param_2 == (FGLTFJsonColor4 *)0x0) {
        pfVar9 = pfVar13;
      }
      *pfVar9 = local_70._s_0.R;
      pfVar9[1] = local_70._s_0.G;
      pfVar9[2] = local_70._s_0.B;
      pfVar9[3] = local_70._s_0.A;
      return true;
    }
    if (__real_3f800000 <= local_70._s_0.R) {
      local_70._s_0.R = __real_3f800000;
    }
    if (__real_3f800000 <= local_70._s_0.G) {
      local_70._s_0.G = __real_3f800000;
    }
    if (__real_3f800000 <= local_70._s_0.B) {
      local_70._s_0.B = __real_3f800000;
    }
    pfVar9 = (float *)&param_2->field_0x8;
    if (param_2 == (FGLTFJsonColor4 *)0x0) {
      pfVar9 = pfVar13;
    }
    if (__real_3f800000 <= local_70._s_0.A) {
      local_70._s_0.A = __real_3f800000;
    }
    if (local_70._s_0.R <= 0.0) {
      local_70._s_0.R = 0.0;
    }
    if (local_70._s_0.G <= 0.0) {
      local_70._s_0.G = 0.0;
    }
    if (local_70._s_0.B <= 0.0) {
      local_70._s_0.B = 0.0;
    }
    if (local_70._s_0.A <= 0.0) {
      local_70._s_0.A = 0.0;
    }
    *pfVar9 = local_70._s_0.R;
    pfVar9[1] = local_70._s_0.G;
    pfVar9[2] = local_70._s_0.B;
    pfVar9[3] = local_70._s_0.A;
    return true;
  }
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar7 = iVar1 + -1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar12);
  iVar7 = TSet<TTuple<FString,UMaterialExpression_*>,TDefaultMapHashableKeyFuncs<FString,UMaterialExpression_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,UMaterialExpression_*>,TDefaultMapHashableKeyFuncs<FString,UMaterialExpression_*,0>,FDefaultSetAllocator>
                      *)this,uVar6,param_1);
  if (iVar7 != -1) {
    ppUVar10 = TMapBase<FString,UMaterialExpression_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UMaterialExpression_*,0>_>
               ::FindChecked((TMapBase<FString,UMaterialExpression_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UMaterialExpression_*,0>_>
                              *)this,param_1);
    pUVar2 = *ppUVar10;
    if (pUVar2 == (UMaterialExpression *)0x0) {
      return false;
    }
    pUVar11 = Z_Construct_UClass_UMaterialExpressionConstant4Vector_NoRegister();
    iVar7 = (int)pUVar11->_padding_;
    if (*(int *)(pUVar2->_padding_ + 0x38) < iVar7) {
      return false;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar7 * 8)
        != &pUVar11->_padding_) {
      return false;
    }
    local_70._s_0.R = (float)*(undefined4 *)&pUVar2[1]._padding_;
    local_70._s_0.G = *(float *)((longlong)&pUVar2[1]._padding_ + 4);
    local_70._s_0.B = (float)*(undefined4 *)&pUVar2[1]._padding_;
    local_70._s_0.A = *(float *)((longlong)&pUVar2[1]._padding_ + 4);
    goto LAB_14e5ffd87;
  }
  if (!param_3) {
    return false;
  }
  local_28 = (float)FGLTFJsonColor3::White._16_4_;
  local_78[0] = 1.0;
  local_38 = &___7FGLTFJsonColor3__6B_;
  bVar4 = false;
  _local_30 = FGLTFJsonColor3::White._8_8_;
  ::FString::ConcatFF((FString *)&local_50,param_1,
                      &UE::Interchange::GLTFMaterials::Inputs::PostFix::Color_RGB);
  bVar5 = GetValue(this,(FString *)&local_50,(FGLTFJsonColor3 *)&local_38);
  if (bVar5) {
LAB_14e5ffcba:
    bVar5 = true;
    bVar3 = true;
    if (!bVar4) goto LAB_14e5ffcd0;
  }
  else {
    bVar4 = true;
    ::FString::ConcatFF(&local_60,param_1,&UE::Interchange::GLTFMaterials::Inputs::PostFix::Color_A)
    ;
    bVar5 = GetValue(this,&local_60,local_78);
    if (bVar5) goto LAB_14e5ffcba;
    bVar3 = false;
  }
  bVar5 = bVar3;
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
LAB_14e5ffcd0:
  if ((void *)CONCAT44(local_50.Name.DisplayIndex.Value,local_50.Name.ComparisonIndex.Value) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_50.Name.DisplayIndex.Value,
                                   local_50.Name.ComparisonIndex.Value));
  }
  if (!bVar5) {
    return false;
  }
  if (__real_3f800000 <= local_78[0]) {
    local_78[0] = __real_3f800000;
  }
  pfVar9 = (float *)&param_2->field_0x8;
  if (param_2 == (FGLTFJsonColor4 *)0x0) {
    pfVar9 = pfVar13;
  }
  if (local_78[0] <= 0.0) {
    local_78[0] = 0.0;
  }
  *pfVar9 = local_30;
  pfVar9[1] = fStack_2c;
  pfVar9[2] = local_28;
  pfVar9[3] = local_78[0];
  return true;
}

// GetValue @ 14e5ffe30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FGLTFImportMaterialMatchMakingHelper::GetValue
          (FGLTFImportMaterialMatchMakingHelper *this,FString *param_1,FGLTFJsonTextureInfo *param_2
          )

{
  UMaterialInterface *pUVar1;
  code *pcVar2;
  UMaterialExpression *pUVar3;
  FGLTFConvertBuilder *this_00;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  TextureAddress TVar8;
  TextureAddress TVar9;
  int iVar10;
  FName *pFVar11;
  UMaterialExpression **ppUVar12;
  UClass *pUVar13;
  FGLTFJsonTexture *pFVar14;
  TextureAddress TVar15;
  wchar_t *pwVar16;
  float local_res8 [2];
  float local_res20 [2];
  UTexture *local_88;
  FName local_80;
  FString local_78;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined **local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  TVar8 = TA_Wrap;
  local_88 = (UTexture *)0x0;
  TVar9 = TA_Wrap;
  if (this->bMaterialInstance == false) {
    iVar10 = (param_1->Data).ArrayNum;
    if (iVar10 == 0) {
      pwVar16 = L"";
      TVar15 = TVar9;
    }
    else {
      pwVar16 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      TVar15 = iVar10 - TA_Clamp;
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(TVar15,pwVar16);
    iVar10 = TSet<TTuple<FString,UMaterialExpression_*>,TDefaultMapHashableKeyFuncs<FString,UMaterialExpression_*,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,UMaterialExpression_*>,TDefaultMapHashableKeyFuncs<FString,UMaterialExpression_*,0>,FDefaultSetAllocator>
                         *)this,uVar7,param_1);
    if (iVar10 == -1) {
      return false;
    }
    ppUVar12 = TMapBase<FString,UMaterialExpression_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UMaterialExpression_*,0>_>
               ::FindChecked((TMapBase<FString,UMaterialExpression_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UMaterialExpression_*,0>_>
                              *)this,param_1);
    pUVar3 = *ppUVar12;
    if (pUVar3 == (UMaterialExpression *)0x0) {
      return false;
    }
    pUVar13 = Z_Construct_UClass_UMaterialExpressionTextureObject_NoRegister();
    iVar10 = (int)pUVar13->_padding_;
    if (*(int *)(pUVar3->_padding_ + 0x38) < iVar10) {
      return false;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar10 * 8)
        != &pUVar13->_padding_) {
      return false;
    }
    if ((UTexture *)pUVar3[1]._padding_ != (UTexture *)0x0) {
      local_88 = (UTexture *)pUVar3[1]._padding_;
    }
  }
  else {
    pUVar1 = this->Material;
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x418);
    if ((param_1->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pFVar11 = ::FName::FName(&local_80,pwVar16);
    local_68 = (undefined1  [8])((ulonglong)*pFVar11 & 0xffffffff);
    local_60._4_4_ = -NAN;
    local_60._0_4_ = (float)(*pFVar11).Number;
    uStack_58._0_1_ = 2;
    cVar5 = (*pcVar2)(pUVar1,local_68,&local_88);
    if (cVar5 == '\0') {
      return false;
    }
  }
  if (local_88 == (UTexture *)0x0) {
    return false;
  }
  local_68 = (undefined1  [8])&___7FGLTFJsonColor4__6B_;
  local_60 = 0;
  uStack_58 = 0;
  ::FString::ConcatFF(&local_78,param_1,
                      &UE::Interchange::GLTFMaterials::Inputs::PostFix::TilingMethod);
  bVar6 = GetValue(this,&local_78,(FGLTFJsonColor4 *)local_68,false);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    TVar8 = FGLTFMaterialUtilities::ToTextureAddress((float)local_60);
    TVar9 = FGLTFMaterialUtilities::ToTextureAddress(local_60._4_4_);
  }
  iVar10 = (param_1->Data).ArrayNum;
  if (iVar10 == UE::Interchange::GLTFMaterials::Inputs::BaseColorTexture.Data.ArrayNum) {
    if (1 < iVar10) {
      iVar10 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          (wchar_t *)
                          UE::Interchange::GLTFMaterials::Inputs::BaseColorTexture.Data.
                          AllocatorInstance.Data);
      bVar6 = iVar10 == 0;
      goto LAB_14e5ffff0;
    }
  }
  else {
    bVar6 = iVar10 + UE::Interchange::GLTFMaterials::Inputs::BaseColorTexture.Data.ArrayNum == 1;
LAB_14e5ffff0:
    if (!bVar6) {
      iVar10 = (param_1->Data).ArrayNum;
      if (iVar10 == UE::Interchange::GLTFMaterials::Inputs::EmissiveTexture.Data.ArrayNum) {
        if (iVar10 < 2) goto LAB_14e60002d;
        iVar10 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                            (wchar_t *)
                            UE::Interchange::GLTFMaterials::Inputs::EmissiveTexture.Data.
                            AllocatorInstance.Data);
        bVar6 = iVar10 == 0;
      }
      else {
        bVar6 = iVar10 + UE::Interchange::GLTFMaterials::Inputs::EmissiveTexture.Data.ArrayNum == 1;
      }
      if (!bVar6) {
        bVar6 = false;
        goto LAB_14e600030;
      }
    }
  }
LAB_14e60002d:
  bVar6 = true;
LAB_14e600030:
  pFVar14 = FGLTFConvertBuilder::AddUniqueTexture(this->Builder,local_88,bVar6,TVar8,TVar9);
  param_2->Index = pFVar14;
  ::FString::ConcatFF(&local_78,param_1,&UE::Interchange::GLTFMaterials::Inputs::PostFix::TexCoord);
  bVar6 = GetValue(this,&local_78,local_res8);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    param_2->TexCoord = (int)ROUND(local_res8[0] * __real_40000000 + __real_3f000000) >> 1;
  }
  local_50 = &___7FGLTFJsonColor4__6B_;
  _local_48 = ___xmm_3f8000003f8000000000000000000000;
  _fStack_40 = _UNK_15076b1e8;
  ::FString::ConcatFF(&local_78,param_1,
                      &UE::Interchange::GLTFMaterials::Inputs::PostFix::OffsetScale);
  bVar6 = GetValue(this,&local_78,(FGLTFJsonColor4 *)&local_50,false);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    *(float *)&(param_2->Transform).Offset.field_0x8 = local_48;
    *(float *)&(param_2->Transform).Offset.field_0xc = fStack_44;
    *(float *)&(param_2->Transform).Scale.field_0x8 = fStack_40;
    *(float *)&(param_2->Transform).Scale.field_0xc = fStack_3c;
  }
  else {
    ::FString::ConcatFF(&local_78,param_1,&UE::Interchange::GLTFMaterials::Inputs::PostFix::OffsetX)
    ;
    bVar6 = GetValue(this,&local_78,&local_48);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      *(float *)&(param_2->Transform).Offset.field_0x8 = local_48;
    }
    ::FString::ConcatFF(&local_78,param_1,&UE::Interchange::GLTFMaterials::Inputs::PostFix::OffsetY)
    ;
    bVar6 = GetValue(this,&local_78,&fStack_44);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      *(float *)&(param_2->Transform).Offset.field_0xc = fStack_44;
    }
    ::FString::ConcatFF(&local_78,param_1,&UE::Interchange::GLTFMaterials::Inputs::PostFix::ScaleX);
    bVar6 = GetValue(this,&local_78,&fStack_40);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      *(float *)&(param_2->Transform).Scale.field_0x8 = fStack_40;
    }
    ::FString::ConcatFF(&local_78,param_1,&UE::Interchange::GLTFMaterials::Inputs::PostFix::ScaleY);
    bVar6 = GetValue(this,&local_78,&fStack_3c);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      *(float *)&(param_2->Transform).Scale.field_0xc = fStack_3c;
    }
  }
  ::FString::ConcatFF(&local_78,param_1,&UE::Interchange::GLTFMaterials::Inputs::PostFix::Rotation);
  bVar6 = GetValue(this,&local_78,local_res20);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    (param_2->Transform).Rotation = local_res20[0];
  }
  if ((*(char *)(this->Builder->_padding_ + 0xac) == '\0') &&
     (bVar6 = FGLTFJsonTextureTransform::IsExactlyDefault(&param_2->Transform), !bVar6)) {
    this_00 = this->Builder;
    local_80 = (FName)this->Material->_padding_;
    ::FName::ToString(&local_80,&local_78);
    ::FString::PrintfImpl
              ((FString *)local_68,
               L"Texture coordinates [%d] in %s for material %s are transformed, but texture transform is disabled by export options"
              );
    FGLTFLogBuilder::LogWarning((FGLTFLogBuilder *)this_00,(FString *)local_68);
    if (local_68 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_68);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    uVar4 = FGLTFJsonVector2::One._8_8_;
    *(undefined8 *)&(param_2->Transform).Offset.field_0x8 = FGLTFJsonVector2::Zero._8_8_;
    *(undefined8 *)&(param_2->Transform).Scale.field_0x8 = uVar4;
    (param_2->Transform).Rotation = 0.0;
  }
  return true;
}

// Process @ 14e607680

void __thiscall
FGLTFImportMaterialMatchMakingHelper::Process(FGLTFImportMaterialMatchMakingHelper *this)

{
  EGLTFJsonShadingModel EVar1;
  FGLTFJsonMaterial *pFVar2;
  FGLTFJsonSpecularGlossinessExtension *pFVar3;
  bool bVar4;
  FString *pFVar5;
  float local_res8 [8];
  
  GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::AlphaCutoff,
           &this->JsonMaterial->AlphaCutoff);
  pFVar2 = this->JsonMaterial;
  if (pFVar2->ShadingModel == SpecularGlossiness) {
    GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::DiffuseTexture,
             &(pFVar2->PBRSpecularGlossiness).DiffuseTexture);
    pFVar5 = &UE::Interchange::GLTFMaterials::Inputs::DiffuseFactor;
    pFVar3 = &this->JsonMaterial->PBRSpecularGlossiness;
  }
  else {
    GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::BaseColorTexture,
             &(pFVar2->PBRMetallicRoughness).BaseColorTexture);
    pFVar5 = &UE::Interchange::GLTFMaterials::Inputs::BaseColorFactor;
    pFVar3 = (FGLTFJsonSpecularGlossinessExtension *)&this->JsonMaterial->PBRMetallicRoughness;
  }
  GetValue(this,pFVar5,&pFVar3->DiffuseFactor,true);
  EVar1 = this->JsonMaterial->ShadingModel;
  if (EVar1 != Unlit) {
    if (EVar1 != SpecularGlossiness) {
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::MetallicRoughnessTexture,
               &(this->JsonMaterial->PBRMetallicRoughness).MetallicRoughnessTexture);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::MetallicFactor,
               &(this->JsonMaterial->PBRMetallicRoughness).MetallicFactor);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::RoughnessFactor,
               &(this->JsonMaterial->PBRMetallicRoughness).RoughnessFactor);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::SpecularFactor,
               &(this->JsonMaterial->Specular).Factor);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::SpecularTexture,
               &(this->JsonMaterial->Specular).Texture);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::IOR,&(this->JsonMaterial->IOR).Value);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::IridescenceFactor,
               &(this->JsonMaterial->Iridescence).IridescenceFactor);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::IridescenceTexture,
               &(this->JsonMaterial->Iridescence).IridescenceTexture);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::IridescenceIOR,
               &(this->JsonMaterial->Iridescence).IridescenceIOR);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::IridescenceThicknessMinimum,
               &(this->JsonMaterial->Iridescence).IridescenceThicknessMinimum);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::IridescenceThicknessMaximum,
               &(this->JsonMaterial->Iridescence).IridescenceThicknessMaximum);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::IridescenceThicknessTexture,
               &(this->JsonMaterial->Iridescence).IridescenceThicknessTexture);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::AnisotropyStrength,
               &(this->JsonMaterial->Anisotropy).AnisotropyStrength);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::AnisotropyRotation,
               &(this->JsonMaterial->Anisotropy).AnisotropyRotation);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::AnisotropyTexture,
               &(this->JsonMaterial->Anisotropy).AnisotropyTexture);
    }
    GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::EmissiveTexture,
             &this->JsonMaterial->EmissiveTexture);
    GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::EmissiveFactor,
             &this->JsonMaterial->EmissiveFactor);
    GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::EmissiveStrength,
             &this->JsonMaterial->EmissiveStrength);
    GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::NormalTexture,
             (FGLTFJsonTextureInfo *)&this->JsonMaterial->NormalTexture);
    GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::NormalScale,
             &(this->JsonMaterial->NormalTexture).Scale);
    GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::OcclusionTexture,
             (FGLTFJsonTextureInfo *)&this->JsonMaterial->OcclusionTexture);
    GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::OcclusionStrength,
             &(this->JsonMaterial->OcclusionTexture).Strength);
    pFVar2 = this->JsonMaterial;
    EVar1 = pFVar2->ShadingModel;
    if (EVar1 == ClearCoat) {
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::ClearCoatTexture,
               &(pFVar2->ClearCoat).ClearCoatTexture);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::ClearCoatFactor,
               &(this->JsonMaterial->ClearCoat).ClearCoatFactor);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::ClearCoatRoughnessTexture,
               &(this->JsonMaterial->ClearCoat).ClearCoatRoughnessTexture);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::ClearCoatRoughnessFactor,
               &(this->JsonMaterial->ClearCoat).ClearCoatRoughnessFactor);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::ClearCoatNormalTexture,
               (FGLTFJsonTextureInfo *)&(this->JsonMaterial->ClearCoat).ClearCoatNormalTexture);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::ClearCoatNormalScale,
               &(this->JsonMaterial->ClearCoat).ClearCoatNormalTexture.Scale);
      return;
    }
    if (EVar1 == Sheen) {
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::SheenColorFactor,
               &(pFVar2->Sheen).ColorFactor);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::SheenColorTexture,
               &(this->JsonMaterial->Sheen).ColorTexture);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::SheenRoughnessFactor,
               &(this->JsonMaterial->Sheen).RoughnessFactor);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::SheenRoughnessTexture,
               &(this->JsonMaterial->Sheen).RoughnessTexture);
      return;
    }
    if (EVar1 == Transmission) {
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::TransmissionFactor,
               &(pFVar2->Transmission).Factor);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::TransmissionTexture,
               &(this->JsonMaterial->Transmission).Texture);
      bVar4 = GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::AlphaMode,local_res8);
      if (bVar4) {
        this->JsonMaterial->AlphaMode =
             (int)ROUND(local_res8[0] * __real_40000000 + __real_3f000000) >> 1;
        return;
      }
    }
    else if (EVar1 == SpecularGlossiness) {
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::SpecFactor,
               &(pFVar2->PBRSpecularGlossiness).SpecularFactor);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::GlossinessFactor,
               &(this->JsonMaterial->PBRSpecularGlossiness).GlossinessFactor);
      GetValue(this,&UE::Interchange::GLTFMaterials::Inputs::SpecularGlossinessTexture,
               &(this->JsonMaterial->PBRSpecularGlossiness).SpecularGlossinessTexture);
      return;
    }
  }
  return;
}

