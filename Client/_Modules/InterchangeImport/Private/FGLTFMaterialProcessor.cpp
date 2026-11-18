// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 7

// ConfigureMaterialInstanceNode @ 14e6c1170

void __thiscall
UE::Interchange::GLTFMaterials::FGLTFMaterialProcessor::ConfigureMaterialInstanceNode
          (FGLTFMaterialProcessor *this)

{
  EAlphaMode EVar1;
  EShadingModel EVar2;
  bool bVar3;
  UInterchangeShaderNode *pUVar4;
  FMaterial *pFVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  int iVar10;
  float local_res8 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  
  EVar1 = this->AlphaMode;
  EVar2 = this->ShadingModel;
  this->MaterialInstanceNode = (UInterchangeShaderNode *)this->ShaderGraphNode;
  bVar3 = this->GltfMaterial->bIsDoubleSided;
  ::FString::FString(&local_48,L"MI_");
  pwVar9 = L"Unexpected";
  switch(EVar2) {
  case DEFAULT:
    pwVar7 = L"Default";
    break;
  case UNLIT:
    pwVar7 = L"Unlit";
    break;
  case CLEARCOAT:
    pwVar7 = L"ClearCoat";
    break;
  case SHEEN:
    pwVar7 = L"Sheen";
    break;
  case TRANSMISSION:
    pwVar7 = L"Transmission";
    break;
  case SPECULARGLOSSINESS:
    pwVar7 = L"SpecularGlossiness";
    break;
  default:
    pwVar7 = L"Unexpected";
  }
  ::FString::FString(&local_58,pwVar7);
  iVar10 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar10 = 0;
  }
  ::FString::AppendChars(&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar10);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (EVar2 != TRANSMISSION) {
    if (EVar1 == Opaque) {
      pwVar9 = L"Opaque";
    }
    else if (EVar1 == Mask) {
      pwVar9 = L"Mask";
    }
    else if (EVar1 == Blend) {
      pwVar9 = L"Blend";
    }
    ::FString::FString(&local_38,pwVar9);
    ::FString::ConcatCF(&local_58,L"_",&local_38);
    iVar10 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar10);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pwVar9 = L"";
  pwVar7 = L"";
  if (bVar3 != false) {
    pwVar7 = L"_DS";
  }
  sVar6 = wcslen(pwVar7);
  ::FString::AppendChars(&local_48,pwVar7,(int)sVar6);
  pUVar4 = this->MaterialInstanceNode;
  ::FString::ConcatFC(&local_58,&InterchangeGltfMaterialAttributeIdentifier,L"ParentIdentifier");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar8.Data = local_58.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_38,(wchar_t *)FVar8.Data);
  UInterchangeBaseNode::AddStringAttribute((UInterchangeBaseNode *)pUVar4,&local_38,&local_48);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar5 = this->GltfMaterial;
  if (((pFVar5->bIsUnlitShadingModel == false) && (pFVar5->AlphaMode == Mask)) &&
     (local_res8[0] = pFVar5->AlphaCutoff,
     __real_322bcc77 < (float)((uint)local_res8[0] & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    pUVar4 = this->MaterialInstanceNode;
    if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
      pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
    }
    ::FString::ConcatCF(&local_38,pwVar9,&GLTFMaterials::Inputs::AlphaCutoff);
    UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar4,&local_38,local_res8);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// ConfigureMaterialNode @ 14e6c1420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::Interchange::GLTFMaterials::FGLTFMaterialProcessor::ConfigureMaterialNode
          (FGLTFMaterialProcessor *this)

{
  EAlphaMode EVar1;
  int iVar2;
  UInterchangeBaseNodeContainer *pUVar3;
  FMaterial *pFVar4;
  UInterchangeShaderNode *this_00;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  UInterchangeFunctionCallShaderNode *this_01;
  FString *pFVar8;
  longlong *plVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_238 [32];
  bool local_1e8;
  bool local_1e7 [7];
  TArray<FString,TSizedDefaultAllocator<32>_> local_1e0;
  undefined1 local_1d0 [8];
  float local_1c8 [2];
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  <lambda_1> local_170;
  <lambda_1> local_168;
  <lambda_1> local_160;
  <lambda_1> local_158;
  FString local_150;
  FScriptContainerElement *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FString local_118;
  FString local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_238;
  GetMaterialFunctionPath(&local_150,this->ShadingModel);
  FPaths::GetBaseFilename(&local_180,&local_150,true);
  pUVar3 = this->NodeContainer;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = Z_Construct_UClass_UInterchangeFunctionCallShaderNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar7);
  local_a8._8_8_ = pUVar3;
  this_01 = (UInterchangeFunctionCallShaderNode *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar9 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  pUVar3 = this->NodeContainer;
  ::FString::FString(&local_118,L"");
  pFVar8 = UInterchangeBaseNode::GetUniqueID
                     ((UInterchangeBaseNode *)this->ShaderGraphNode,&local_c8);
  local_138 = (pFVar8->Data).AllocatorInstance.Data;
  iVar2 = (pFVar8->Data).ArrayNum;
  iStack_130 = iVar2 + -1;
  if (iVar2 == 0) {
    iStack_130 = 0;
  }
  local_f8._12_4_ = uStack_12c;
  local_f8.Size = iStack_130;
  local_128 = local_180.Data.AllocatorInstance.Data;
  iStack_120 = local_180.Data.ArrayNum + -1;
  if (local_180.Data.ArrayNum == 0) {
    iStack_120 = 0;
  }
  local_e8._12_4_ = uStack_11c;
  local_e8.Size = iStack_120;
  local_e8.DataPtr = (wchar_t *)local_180.Data.AllocatorInstance.Data;
  local_f8.DataPtr = (wchar_t *)local_138;
  pFVar8 = UInterchangeShaderNode::MakeNodeUid(&local_d8,&local_e8,&local_f8);
  UInterchangeBaseNodeContainer::SetupNode
            (pUVar3,(UInterchangeBaseNode *)this_01,pFVar8,&local_180,TranslatedAsset,&local_118);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  UInterchangeFunctionCallShaderNode::SetCustomMaterialFunction(this_01,&local_150);
  this->MaterialNode = (UInterchangeShaderNode *)this_01;
  UInterchangeShaderGraphNode::SetCustomTwoSided
            (this->ShaderGraphNode,&this->GltfMaterial->bIsDoubleSided);
  if (this->ShadingModel == TRANSMISSION) {
    local_1e8 = true;
    UInterchangeShaderGraphNode::SetCustomScreenSpaceReflections(this->ShaderGraphNode,&local_1e8);
    local_1e7[0] = true;
    UInterchangeShaderGraphNode::SetCustomTwoSidedTransmission(this->ShaderGraphNode,local_1e7);
  }
  GLTFMaterials::GetOutputs(&local_1e0,this->ShadingModel);
  EVar1 = this->AlphaMode;
  if (EVar1 == Opaque) {
    ::FString::FString(&local_1a0,L"Opacity");
    if ((local_1e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1a0) &&
       ((FScriptContainerElement *)&local_1a0 <
        local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayMax * 0x10)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_160.Item = &local_1a0;
    TArray<FString,TSizedDefaultAllocator<32>_>::
    RemoveAll<_TArray<FString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
              (&local_1e0,&local_160);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_190,L"OpacityMask");
    if ((local_1e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_190) &&
       ((FScriptContainerElement *)&local_190 <
        local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayMax * 0x10)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_158.Item = &local_190;
    TArray<FString,TSizedDefaultAllocator<32>_>::
    RemoveAll<_TArray<FString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
              (&local_1e0,&local_158);
    local_1c0.Data.AllocatorInstance.Data = local_190.Data.AllocatorInstance.Data;
  }
  else if (EVar1 == Mask) {
    if (this->ShadingModel == TRANSMISSION) goto LAB_14e6c18aa;
    ::FString::FString(&local_1b0,L"Opacity");
    if ((local_1e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1b0) &&
       ((FScriptContainerElement *)&local_1b0 <
        local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayMax * 0x10)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_168.Item = &local_1b0;
    TArray<FString,TSizedDefaultAllocator<32>_>::
    RemoveAll<_TArray<FString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
              (&local_1e0,&local_168);
    local_1c0.Data.AllocatorInstance.Data = local_1b0.Data.AllocatorInstance.Data;
  }
  else {
    if (EVar1 != Blend) goto LAB_14e6c18aa;
    ::FString::FString(&local_1c0,L"OpacityMask");
    if ((local_1e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1c0) &&
       ((FScriptContainerElement *)&local_1c0 <
        local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayMax * 0x10)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_170.Item = &local_1c0;
    TArray<FString,TSizedDefaultAllocator<32>_>::
    RemoveAll<_TArray<FString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
              (&local_1e0,&local_170);
  }
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
LAB_14e6c18aa:
  iVar2 = local_1e0.ArrayNum;
  pFVar11 = local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayNum * 0x10;
  FVar10.Data = local_1e0.AllocatorInstance.Data;
  while( true ) {
    if (local_1e0.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1d0);
    }
    if (FVar10.Data == pFVar11) break;
    pFVar8 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_01,&local_b8);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)this->ShaderGraphNode,(FString *)FVar10.Data,pFVar8,
               (FString *)FVar10.Data);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    FVar10.Data = FVar10.Data + 0x10;
  }
  pFVar4 = this->GltfMaterial;
  if ((pFVar4->bIsUnlitShadingModel == false) && (pFVar4->AlphaMode == Mask)) {
    if (this->ShadingModel == TRANSMISSION) {
      local_1c8[0] = pFVar4->AlphaCutoff;
      if (__real_322bcc77 < (float)((uint)local_1c8[0] & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        this_00 = this->MaterialNode;
        UInterchangeShaderPortsAPI::MakeInputValueKey
                  (&local_108,&GLTFMaterials::Inputs::AlphaCutoff);
        UInterchangeBaseNode::AddFloatAttribute
                  ((UInterchangeBaseNode *)this_00,&local_108,local_1c8);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      UInterchangeShaderGraphNode::SetCustomOpacityMaskClipValue
                (this->ShaderGraphNode,&pFVar4->AlphaCutoff,true);
    }
  }
  DestructItems<FString,int>((FString *)local_1e0.AllocatorInstance.Data,local_1e0.ArrayNum);
  if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  return;
}

// ParseMaterialValues @ 14e6ce950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Interchange::GLTFMaterials::FGLTFMaterialProcessor::ParseMaterialValues
          (FGLTFMaterialProcessor *this)

{
  FMaterial *pFVar1;
  UInterchangeShaderNode *pUVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  bool bVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  UInterchangeShaderNode **ppUVar10;
  bool local_res8 [8];
  bool local_res10 [8];
  bool local_res18 [8];
  bool local_res20 [8];
  bool local_558;
  bool local_557;
  bool local_556;
  bool local_555;
  bool local_554;
  bool local_553;
  bool local_552;
  bool local_551;
  bool local_550;
  bool local_54f;
  bool local_54e;
  bool local_54d [5];
  float local_548 [2];
  float local_540 [2];
  float local_538 [2];
  float local_530 [2];
  float local_528 [2];
  float local_520 [2];
  float local_518 [2];
  float local_510 [2];
  float local_508 [2];
  float local_500 [2];
  float local_4f8 [2];
  float local_4f0 [2];
  float local_4e8 [2];
  float local_4e0 [2];
  float local_4d8 [2];
  float local_4d0 [2];
  float local_4c8 [2];
  float local_4c0 [2];
  float local_4b8 [2];
  float local_4b0 [2];
  TVector<float>_u_0 local_4a8;
  TVector<float>_u_0 local_498;
  TVector<float>_u_0 local_48c;
  TVector<float>_u_0 local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  TVector4<float>_u_0 local_c8;
  TVector4<float>_u_0 local_b8;
  FLinearColor local_a8;
  FLinearColor local_98;
  TVector4<float>_u_0 local_88 [5];
  
  pFVar1 = this->GltfMaterial;
  if (pFVar1->bIsUnlitShadingModel != false) {
    local_558 = SetMap(this,&GLTFMaterials::Inputs::BaseColorTexture,&pFVar1->BaseColor);
    local_c8._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
    local_c8._8_8_ = _UNK_15076b1f8;
    SetColor(this,&GLTFMaterials::Inputs::BaseColorFactor,&this->GltfMaterial->BaseColorFactor,
             (TVector4<float> *)&local_c8._s_0);
    if (local_558 == true) {
      return;
    }
    pwVar8 = L"";
    pUVar2 = this->MaterialInstanceNode;
    if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
      pwVar8 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance;
    }
    ::FString::ConcatCF(&local_470,pwVar8,
                        &GLTFMaterials::Inputs::Configuration::bHasBaseColorTexture);
    UInterchangeBaseNode::AddBooleanAttribute((UInterchangeBaseNode *)pUVar2,&local_470,&local_558);
    if (local_470.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_470.Data.AllocatorInstance.Data);
    return;
  }
  local_557 = SetMap(this,&GLTFMaterials::Inputs::NormalTexture,&pFVar1->Normal);
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar5 = __real_3f800000;
  fVar4 = __real_322bcc77;
  pwVar8 = L"";
  local_548[0] = this->GltfMaterial->NormalScale;
  if (__real_322bcc77 <
      (float)((uint)(local_548[0] - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    pUVar2 = this->MaterialNode;
    UInterchangeShaderPortsAPI::MakeInputValueKey(&local_460,&GLTFMaterials::Inputs::NormalScale);
    UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_460,local_548);
    if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_460.Data.AllocatorInstance.Data);
    }
    pUVar2 = this->MaterialInstanceNode;
    pwVar9 = L"";
    if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
      pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
    }
    ::FString::ConcatCF(&local_450,pwVar9,&GLTFMaterials::Inputs::NormalScale);
    UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_450,local_548);
    if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.Data.AllocatorInstance.Data);
    }
  }
  if (local_557 != true) {
    pUVar2 = this->MaterialInstanceNode;
    pwVar9 = L"";
    if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
      pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
    }
    ::FString::ConcatCF(&local_440,pwVar9,&GLTFMaterials::Inputs::Configuration::bHasNormalTexture);
    UInterchangeBaseNode::AddBooleanAttribute((UInterchangeBaseNode *)pUVar2,&local_440,&local_557);
    if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_440.Data.AllocatorInstance.Data);
    }
  }
  if (this->GltfMaterial->bHasTransmission == false) {
    local_556 = SetMap(this,&GLTFMaterials::Inputs::EmissiveTexture,&this->GltfMaterial->Emissive);
    local_498._0_8_ = 0;
    local_498._s_0.Z = 0.0;
    SetVec3(this,&GLTFMaterials::Inputs::EmissiveFactor,&this->GltfMaterial->EmissiveFactor,
            (TVector<float> *)&local_498._s_0,3);
    local_540[0] = fVar5;
    if (this->GltfMaterial->bHasEmissiveStrength != false) {
      local_540[0] = this->GltfMaterial->EmissiveStrength;
    }
    if (fVar4 < (float)((uint)(local_540[0] - fVar5) & uVar6)) {
      pUVar2 = this->MaterialNode;
      UInterchangeShaderPortsAPI::MakeInputValueKey
                (&local_430,&GLTFMaterials::Inputs::EmissiveStrength);
      UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_430,local_540);
      if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_430.Data.AllocatorInstance.Data);
      }
      pUVar2 = this->MaterialInstanceNode;
      pwVar9 = L"";
      if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
        pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
      }
      ::FString::ConcatCF(&local_420,pwVar9,&GLTFMaterials::Inputs::EmissiveStrength);
      UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_420,local_540);
      if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_420.Data.AllocatorInstance.Data);
      }
    }
    if (local_556 != true) {
      pUVar2 = this->MaterialInstanceNode;
      pwVar9 = L"";
      if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
        pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
      }
      ::FString::ConcatCF(&local_410,pwVar9,
                          &GLTFMaterials::Inputs::Configuration::bHasEmissiveTexture);
      UInterchangeBaseNode::AddBooleanAttribute
                ((UInterchangeBaseNode *)pUVar2,&local_410,&local_556);
      if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_410.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pUVar2 = this->MaterialInstanceNode;
    pwVar9 = L"";
    local_550 = false;
    if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
      pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
    }
    ::FString::ConcatCF(&local_400,pwVar9,&GLTFMaterials::Inputs::Configuration::bHasEmissiveTexture
                       );
    UInterchangeBaseNode::AddBooleanAttribute((UInterchangeBaseNode *)pUVar2,&local_400,&local_550);
    if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_400.Data.AllocatorInstance.Data);
    }
  }
  ppUVar10 = &this->MaterialInstanceNode;
  local_555 = SetMap(this,&GLTFMaterials::Inputs::OcclusionTexture,&this->GltfMaterial->Occlusion);
  local_538[0] = this->GltfMaterial->OcclusionStrength;
  if (fVar4 < (float)((uint)(local_538[0] - fVar5) & uVar6)) {
    pUVar2 = this->MaterialNode;
    UInterchangeShaderPortsAPI::MakeInputValueKey
              (&local_3f0,&GLTFMaterials::Inputs::OcclusionStrength);
    UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_3f0,local_538);
    if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
    }
    pUVar2 = *ppUVar10;
    pwVar9 = L"";
    if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
      pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
    }
    ::FString::ConcatCF(&local_3e0,pwVar9,&GLTFMaterials::Inputs::OcclusionStrength);
    UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_3e0,local_538);
    if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
    }
  }
  if (local_555 != true) {
    pUVar2 = *ppUVar10;
    pwVar9 = L"";
    if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
      pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
    }
    ::FString::ConcatCF(&local_3d0,pwVar9,
                        &GLTFMaterials::Inputs::Configuration::bHasOcclusionTexture);
    UInterchangeBaseNode::AddBooleanAttribute((UInterchangeBaseNode *)pUVar2,&local_3d0,&local_555);
    if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = this->GltfMaterial;
  if (pFVar1->ShadingModel == SpecularGlossiness) {
    local_res10[0] = SetMap(this,&GLTFMaterials::Inputs::DiffuseTexture,&pFVar1->BaseColor);
    local_b8._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
    local_b8._8_8_ = _UNK_15076b1f8;
    SetColor(this,&GLTFMaterials::Inputs::DiffuseFactor,&this->GltfMaterial->BaseColorFactor,
             (TVector4<float> *)&local_b8._s_0);
    bVar7 = SetMap(this,&GLTFMaterials::Inputs::SpecularGlossinessTexture,
                   &(this->GltfMaterial->SpecularGlossiness).Map);
    if ((bVar7) || (bVar7 = local_res10[0] != false, local_res10[0] = false, bVar7)) {
      local_res10[0] = true;
    }
    pFVar1 = this->GltfMaterial;
    local_4a8._s_0.X = (float)(pFVar1->SpecularGlossiness).SpecularFactor.field0_0x0._s_0.X;
    local_4a8._s_0.Z = (float)(pFVar1->SpecularGlossiness).SpecularFactor.field0_0x0._s_0.Z;
    local_4a8._s_0.Y = (float)(pFVar1->SpecularGlossiness).SpecularFactor.field0_0x0._s_0.Y;
    if (((fVar4 < (float)((uint)(local_4a8._s_0.X - fVar5) & uVar6)) ||
        (fVar4 < (float)((uint)(local_4a8._s_0.Y - fVar5) & uVar6))) ||
       (fVar4 < (float)((uint)(local_4a8._s_0.Z - fVar5) & uVar6))) {
      pUVar2 = this->MaterialNode;
      FLinearColor::FLinearColor(&local_a8,(TVector<float> *)&local_4a8._s_0);
      UInterchangeShaderPortsAPI::MakeInputValueKey(&local_3c0,&GLTFMaterials::Inputs::SpecFactor);
      UInterchangeBaseNode::AddLinearColorAttribute
                ((UInterchangeBaseNode *)pUVar2,&local_3c0,&local_a8);
      if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
      }
      pUVar2 = *ppUVar10;
      FLinearColor::FLinearColor(&local_98,(TVector<float> *)&local_4a8._s_0);
      pwVar9 = L"";
      if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
        pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance;
      }
      ::FString::ConcatCF(&local_3b0,pwVar9,&GLTFMaterials::Inputs::SpecFactor);
      UInterchangeBaseNode::AddLinearColorAttribute
                ((UInterchangeBaseNode *)pUVar2,&local_3b0,&local_98);
      if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
      }
    }
    local_530[0] = (this->GltfMaterial->SpecularGlossiness).GlossinessFactor;
    if (fVar4 < (float)((uint)(local_530[0] - fVar5) & uVar6)) {
      pUVar2 = this->MaterialNode;
      UInterchangeShaderPortsAPI::MakeInputValueKey
                (&local_3a0,&GLTFMaterials::Inputs::GlossinessFactor);
      UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_3a0,local_530);
      if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
      }
      pUVar2 = *ppUVar10;
      pwVar9 = L"";
      if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
        pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
      }
      ::FString::ConcatCF(&local_390,pwVar9,&GLTFMaterials::Inputs::GlossinessFactor);
      UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_390,local_530);
      if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_390.Data.AllocatorInstance.Data);
      }
    }
    if (local_res10[0] == true) {
      return;
    }
    pUVar2 = *ppUVar10;
    if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
      pwVar8 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
    }
    ::FString::ConcatCF(&local_380,pwVar8,
                        &GLTFMaterials::Inputs::Configuration::bHasDiffuseSpecGlossTexture);
    UInterchangeBaseNode::AddBooleanAttribute((UInterchangeBaseNode *)pUVar2,&local_380,local_res10)
    ;
    goto LAB_14e6d016f;
  }
  if (pFVar1->ShadingModel == MetallicRoughness) {
    local_554 = SetMap(this,&GLTFMaterials::Inputs::BaseColorTexture,&pFVar1->BaseColor);
    local_88[0]._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
    local_88[0]._8_8_ = _UNK_15076b1f8;
    SetColor(this,&GLTFMaterials::Inputs::BaseColorFactor,&this->GltfMaterial->BaseColorFactor,
             (TVector4<float> *)&local_88[0]._s_0);
    if (local_554 != true) {
      pUVar2 = *ppUVar10;
      pwVar9 = L"";
      if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
        pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance;
      }
      ::FString::ConcatCF(&local_370,pwVar9,
                          &GLTFMaterials::Inputs::Configuration::bHasBaseColorTexture);
      UInterchangeBaseNode::AddBooleanAttribute
                ((UInterchangeBaseNode *)pUVar2,&local_370,&local_554);
      if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_370.Data.AllocatorInstance.Data);
      }
    }
    local_553 = SetMap(this,&GLTFMaterials::Inputs::MetallicRoughnessTexture,
                       &(this->GltfMaterial->MetallicRoughness).Map);
    local_528[0] = (this->GltfMaterial->MetallicRoughness).MetallicFactor;
    if (fVar4 < (float)((uint)(local_528[0] - fVar5) & uVar6)) {
      pUVar2 = this->MaterialNode;
      UInterchangeShaderPortsAPI::MakeInputValueKey
                (&local_360,&GLTFMaterials::Inputs::MetallicFactor);
      UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_360,local_528);
      if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_360.Data.AllocatorInstance.Data);
      }
      pUVar2 = *ppUVar10;
      pwVar9 = L"";
      if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
        pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
      }
      ::FString::ConcatCF(&local_350,pwVar9,&GLTFMaterials::Inputs::MetallicFactor);
      UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_350,local_528);
      if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_350.Data.AllocatorInstance.Data);
      }
    }
    local_520[0] = (this->GltfMaterial->MetallicRoughness).RoughnessFactor;
    if (fVar4 < (float)((uint)(local_520[0] - fVar5) & uVar6)) {
      pUVar2 = this->MaterialNode;
      UInterchangeShaderPortsAPI::MakeInputValueKey
                (&local_340,&GLTFMaterials::Inputs::RoughnessFactor);
      UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_340,local_520);
      if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_340.Data.AllocatorInstance.Data);
      }
      pUVar2 = *ppUVar10;
      pwVar9 = L"";
      if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
        pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
      }
      ::FString::ConcatCF(&local_330,pwVar9,&GLTFMaterials::Inputs::RoughnessFactor);
      UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_330,local_520);
      if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_330.Data.AllocatorInstance.Data);
      }
    }
    if (local_553 != true) {
      pUVar2 = *ppUVar10;
      pwVar9 = L"";
      if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
        pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
      }
      ::FString::ConcatCF(&local_320,pwVar9,
                          &GLTFMaterials::Inputs::Configuration::bHasMetallicRoughnessTexture);
      UInterchangeBaseNode::AddBooleanAttribute
                ((UInterchangeBaseNode *)pUVar2,&local_320,&local_553);
      if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.Data.AllocatorInstance.Data);
      }
    }
    if (this->GltfMaterial->bHasSpecular == false) {
      pUVar2 = *ppUVar10;
      pwVar9 = L"";
      local_54f = false;
      if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
        pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
      }
      ::FString::ConcatCF(&local_2e0,pwVar9,
                          &GLTFMaterials::Inputs::Configuration::bHasSpecularTexture);
      UInterchangeBaseNode::AddBooleanAttribute
                ((UInterchangeBaseNode *)pUVar2,&local_2e0,&local_54f);
      local_2f0.Data.AllocatorInstance.Data = local_2e0.Data.AllocatorInstance.Data;
LAB_14e6cf4b3:
      if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_552 = SetMap(this,&GLTFMaterials::Inputs::SpecularTexture,
                         &(this->GltfMaterial->Specular).SpecularMap);
      local_518[0] = (this->GltfMaterial->Specular).SpecularFactor;
      if (fVar4 < (float)((uint)(local_518[0] - __real_3f000000) & uVar6)) {
        pUVar2 = this->MaterialNode;
        UInterchangeShaderPortsAPI::MakeInputValueKey
                  (&local_310,&GLTFMaterials::Inputs::SpecularFactor);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_310,local_518)
        ;
        if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_310.Data.AllocatorInstance.Data);
        }
        pUVar2 = *ppUVar10;
        pwVar9 = L"";
        if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
          pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data
          ;
        }
        ::FString::ConcatCF(&local_300,pwVar9,&GLTFMaterials::Inputs::SpecularFactor);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_300,local_518)
        ;
        if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_300.Data.AllocatorInstance.Data);
        }
      }
      if (local_552 != true) {
        pUVar2 = *ppUVar10;
        pwVar9 = L"";
        if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
          pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data
          ;
        }
        ::FString::ConcatCF(&local_2f0,pwVar9,
                            &GLTFMaterials::Inputs::Configuration::bHasSpecularTexture);
        UInterchangeBaseNode::AddBooleanAttribute
                  ((UInterchangeBaseNode *)pUVar2,&local_2f0,&local_552);
        goto LAB_14e6cf4b3;
      }
    }
    if ((this->GltfMaterial->Iridescence).bHasIridescence == false) {
      pUVar2 = *ppUVar10;
      pwVar9 = L"";
      local_54e = false;
      if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
        pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
      }
      ::FString::ConcatCF(&local_250,pwVar9,&GLTFMaterials::Inputs::Configuration::bHasIridescence);
      UInterchangeBaseNode::AddBooleanAttribute
                ((UInterchangeBaseNode *)pUVar2,&local_250,&local_54e);
      local_260.Data.AllocatorInstance.Data = local_250.Data.AllocatorInstance.Data;
LAB_14e6cf7e9:
      if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_510[0] = (this->GltfMaterial->Iridescence).IOR;
      if (fVar4 < (float)((uint)(local_510[0] - __real_3fa66666) & uVar6)) {
        pUVar2 = this->MaterialNode;
        UInterchangeShaderPortsAPI::MakeInputValueKey
                  (&local_2d0,&GLTFMaterials::Inputs::IridescenceIOR);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_2d0,local_510)
        ;
        if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
        }
        pUVar2 = *ppUVar10;
        pwVar9 = L"";
        if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
          pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data
          ;
        }
        ::FString::ConcatCF(&local_2c0,pwVar9,&GLTFMaterials::Inputs::IridescenceIOR);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_2c0,local_510)
        ;
        if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
        }
      }
      SetMap(this,&GLTFMaterials::Inputs::IridescenceTexture,
             &(this->GltfMaterial->Iridescence).Texture);
      local_508[0] = (this->GltfMaterial->Iridescence).Factor;
      if (fVar4 < (float)((uint)local_508[0] & uVar6)) {
        pUVar2 = this->MaterialNode;
        UInterchangeShaderPortsAPI::MakeInputValueKey
                  (&local_2b0,&GLTFMaterials::Inputs::IridescenceFactor);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_2b0,local_508)
        ;
        if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
        }
        pUVar2 = *ppUVar10;
        pwVar9 = L"";
        if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
          pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data
          ;
        }
        ::FString::ConcatCF(&local_2a0,pwVar9,&GLTFMaterials::Inputs::IridescenceFactor);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_2a0,local_508)
        ;
        if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
        }
      }
      SetMap(this,&GLTFMaterials::Inputs::IridescenceThicknessTexture,
             &(this->GltfMaterial->Iridescence).Thickness.Texture);
      local_500[0] = (this->GltfMaterial->Iridescence).Thickness.Minimum;
      if (fVar4 < (float)((uint)(local_500[0] - __real_42c80000) & uVar6)) {
        pUVar2 = this->MaterialNode;
        UInterchangeShaderPortsAPI::MakeInputValueKey
                  (&local_290,&GLTFMaterials::Inputs::IridescenceThicknessMinimum);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_290,local_500)
        ;
        if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_290.Data.AllocatorInstance.Data);
        }
        pUVar2 = *ppUVar10;
        pwVar9 = L"";
        if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
          pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data
          ;
        }
        ::FString::ConcatCF(&local_280,pwVar9,&GLTFMaterials::Inputs::IridescenceThicknessMinimum);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_280,local_500)
        ;
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
        }
      }
      local_4f8[0] = (this->GltfMaterial->Iridescence).Thickness.Maximum;
      if (fVar4 < (float)((uint)(local_4f8[0] - __real_43c80000) & uVar6)) {
        pUVar2 = this->MaterialNode;
        UInterchangeShaderPortsAPI::MakeInputValueKey
                  (&local_270,&GLTFMaterials::Inputs::IridescenceThicknessMaximum);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_270,local_4f8)
        ;
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
        pUVar2 = *ppUVar10;
        pwVar9 = L"";
        if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
          pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data
          ;
        }
        ::FString::ConcatCF(&local_260,pwVar9,&GLTFMaterials::Inputs::IridescenceThicknessMaximum);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_260,local_4f8)
        ;
        goto LAB_14e6cf7e9;
      }
    }
    if ((this->GltfMaterial->Anisotropy).bHasAnisotropy == false) {
      pUVar2 = *ppUVar10;
      pwVar9 = L"";
      local_54d[0] = false;
      if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
        pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
      }
      ::FString::ConcatCF(&local_1f0,pwVar9,
                          &GLTFMaterials::Inputs::Configuration::bHasAnisotropyTextureAndOrRotation)
      ;
      UInterchangeBaseNode::AddBooleanAttribute((UInterchangeBaseNode *)pUVar2,&local_1f0,local_54d)
      ;
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_res20[0] =
           SetMap(this,&GLTFMaterials::Inputs::AnisotropyTexture,
                  &(this->GltfMaterial->Anisotropy).Texture);
      local_4f0[0] = (this->GltfMaterial->Anisotropy).Strength;
      if (fVar4 < (float)((uint)local_4f0[0] & uVar6)) {
        pUVar2 = this->MaterialNode;
        UInterchangeShaderPortsAPI::MakeInputValueKey
                  (&local_240,&GLTFMaterials::Inputs::AnisotropyStrength);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_240,local_4f0)
        ;
        if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_240.Data.AllocatorInstance.Data);
        }
        pUVar2 = *ppUVar10;
        pwVar9 = L"";
        if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
          pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data
          ;
        }
        ::FString::ConcatCF(&local_230,pwVar9,&GLTFMaterials::Inputs::AnisotropyStrength);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_230,local_4f0)
        ;
        if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Data.AllocatorInstance.Data);
        }
      }
      local_4e8[0] = (this->GltfMaterial->Anisotropy).Rotation;
      if (fVar4 < (float)((uint)local_4e8[0] & uVar6)) {
        pUVar2 = this->MaterialNode;
        UInterchangeShaderPortsAPI::MakeInputValueKey
                  (&local_220,&GLTFMaterials::Inputs::AnisotropyRotation);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_220,local_4e8)
        ;
        if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_220.Data.AllocatorInstance.Data);
        }
        pUVar2 = *ppUVar10;
        pwVar9 = L"";
        if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
          pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data
          ;
        }
        ::FString::ConcatCF(&local_210,pwVar9,&GLTFMaterials::Inputs::AnisotropyRotation);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_210,local_4e8)
        ;
        if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.Data.AllocatorInstance.Data);
        }
      }
      local_res20[0] = (bool)(local_res20[0] | (this->GltfMaterial->Anisotropy).Rotation != 0.0);
      if (local_res20[0] != true) {
        pUVar2 = *ppUVar10;
        pwVar9 = L"";
        if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
          pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data
          ;
        }
        ::FString::ConcatCF(&local_200,pwVar9,
                            &GLTFMaterials::Inputs::Configuration::
                             bHasAnisotropyTextureAndOrRotation);
        UInterchangeBaseNode::AddBooleanAttribute
                  ((UInterchangeBaseNode *)pUVar2,&local_200,local_res20);
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  else {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4601676266431578776>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGLTFMaterial.cpp"
                       ,0x298,"false");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->GltfMaterial->bHasIOR != false) &&
     (local_4e0[0] = this->GltfMaterial->IOR,
     fVar4 < (float)((uint)(local_4e0[0] - __real_3fc00000) & uVar6))) {
    pUVar2 = this->MaterialNode;
    UInterchangeShaderPortsAPI::MakeInputValueKey(&local_1e0,&GLTFMaterials::Inputs::IOR);
    UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_1e0,local_4e0);
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    pUVar2 = *ppUVar10;
    pwVar9 = L"";
    if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
      pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
    }
    ::FString::ConcatCF(&local_1d0,pwVar9,&GLTFMaterials::Inputs::IOR);
    UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_1d0,local_4e0);
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = this->GltfMaterial;
  if (pFVar1->bHasTransmission == false) {
    if (pFVar1->bHasClearCoat == false) {
      if (pFVar1->bHasSheen == false) {
        return;
      }
      local_res18[0] =
           SetMap(this,&GLTFMaterials::Inputs::SheenColorTexture,&(pFVar1->Sheen).SheenColorMap);
      pFVar1 = this->GltfMaterial;
      local_48c._0_8_ = 0;
      local_48c._s_0.Z = 0.0;
      local_480._s_0.Z = (float)(pFVar1->Sheen).SheenColorFactor.field0_0x0._s_0.Z;
      local_480._s_0.Y = (float)(pFVar1->Sheen).SheenColorFactor.field0_0x0._s_0.Y;
      local_480._s_0.X = (float)(pFVar1->Sheen).SheenColorFactor.field0_0x0._s_0.X;
      SetVec3(this,&GLTFMaterials::Inputs::SheenColorFactor,(TVector<float> *)&local_480._s_0,
              (TVector<float> *)&local_48c._s_0,3);
      bVar7 = SetMap(this,&GLTFMaterials::Inputs::SheenRoughnessTexture,
                     &(this->GltfMaterial->Sheen).SheenRoughnessMap);
      if ((bVar7) || (bVar7 = local_res18[0] != false, local_res18[0] = false, bVar7)) {
        local_res18[0] = true;
      }
      local_4b0[0] = (this->GltfMaterial->Sheen).SheenRoughnessFactor;
      if (fVar4 < (float)((uint)local_4b0[0] & uVar6)) {
        pUVar2 = this->MaterialNode;
        UInterchangeShaderPortsAPI::MakeInputValueKey
                  (&local_100,&GLTFMaterials::Inputs::SheenRoughnessFactor);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_100,local_4b0)
        ;
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        pUVar2 = *ppUVar10;
        pwVar9 = L"";
        if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
          pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data
          ;
        }
        ::FString::ConcatCF(&local_f0,pwVar9,&GLTFMaterials::Inputs::SheenRoughnessFactor);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_f0,local_4b0);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
      if (local_res18[0] == true) {
        return;
      }
      pUVar2 = *ppUVar10;
      if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
        pwVar8 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
      }
      ::FString::ConcatCF(&local_e0,pwVar8,&GLTFMaterials::Inputs::Configuration::bHasSheenTexture);
      UInterchangeBaseNode::AddBooleanAttribute
                ((UInterchangeBaseNode *)pUVar2,&local_e0,local_res18);
      local_380.Data.AllocatorInstance.Data = local_e0.Data.AllocatorInstance.Data;
    }
    else {
      local_res8[0] =
           SetMap(this,&GLTFMaterials::Inputs::ClearCoatTexture,&(pFVar1->ClearCoat).ClearCoatMap);
      local_4c8[0] = (this->GltfMaterial->ClearCoat).ClearCoatFactor;
      if (fVar4 < (float)((uint)local_4c8[0] & uVar6)) {
        pUVar2 = this->MaterialNode;
        UInterchangeShaderPortsAPI::MakeInputValueKey
                  (&local_170,&GLTFMaterials::Inputs::ClearCoatFactor);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_170,local_4c8)
        ;
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        pUVar2 = *ppUVar10;
        pwVar9 = L"";
        if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
          pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data
          ;
        }
        ::FString::ConcatCF(&local_160,pwVar9,&GLTFMaterials::Inputs::ClearCoatFactor);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_160,local_4c8)
        ;
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
      }
      bVar7 = SetMap(this,&GLTFMaterials::Inputs::ClearCoatRoughnessTexture,
                     &(this->GltfMaterial->ClearCoat).RoughnessMap);
      if ((bVar7) || (bVar7 = local_res8[0] != false, local_res8[0] = false, bVar7)) {
        local_res8[0] = true;
      }
      local_4c0[0] = (this->GltfMaterial->ClearCoat).Roughness;
      if (fVar4 < (float)((uint)local_4c0[0] & uVar6)) {
        pUVar2 = this->MaterialNode;
        UInterchangeShaderPortsAPI::MakeInputValueKey
                  (&local_150,&GLTFMaterials::Inputs::ClearCoatRoughnessFactor);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_150,local_4c0)
        ;
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        pUVar2 = *ppUVar10;
        pwVar9 = L"";
        if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
          pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data
          ;
        }
        ::FString::ConcatCF(&local_140,pwVar9,&GLTFMaterials::Inputs::ClearCoatRoughnessFactor);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_140,local_4c0)
        ;
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
      }
      bVar7 = SetMap(this,&GLTFMaterials::Inputs::ClearCoatNormalTexture,
                     &(this->GltfMaterial->ClearCoat).NormalMap);
      if ((bVar7) || (bVar7 = local_res8[0] != false, local_res8[0] = false, bVar7)) {
        local_res8[0] = true;
      }
      local_4b8[0] = (this->GltfMaterial->ClearCoat).NormalMapUVScale;
      if (fVar4 < (float)((uint)(local_4b8[0] - fVar5) & uVar6)) {
        pUVar2 = this->MaterialNode;
        UInterchangeShaderPortsAPI::MakeInputValueKey
                  (&local_130,&GLTFMaterials::Inputs::ClearCoatNormalScale);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_130,local_4b8)
        ;
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        pUVar2 = *ppUVar10;
        pwVar9 = L"";
        if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
          pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data
          ;
        }
        ::FString::ConcatCF(&local_120,pwVar9,&GLTFMaterials::Inputs::ClearCoatNormalScale);
        UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_120,local_4b8)
        ;
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
      }
      if (local_res8[0] == true) {
        return;
      }
      pUVar2 = *ppUVar10;
      if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
        pwVar8 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
      }
      ::FString::ConcatCF(&local_110,pwVar8,
                          &GLTFMaterials::Inputs::Configuration::bHasClearCoatTexture);
      UInterchangeBaseNode::AddBooleanAttribute
                ((UInterchangeBaseNode *)pUVar2,&local_110,local_res8);
      local_380.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
    }
  }
  else {
    local_551 = SetMap(this,&GLTFMaterials::Inputs::TransmissionTexture,
                       &(pFVar1->Transmission).TransmissionMap);
    local_4d8[0] = (this->GltfMaterial->Transmission).TransmissionFactor;
    if (fVar4 < (float)((uint)local_4d8[0] & uVar6)) {
      pUVar2 = this->MaterialNode;
      UInterchangeShaderPortsAPI::MakeInputValueKey
                (&local_1c0,&GLTFMaterials::Inputs::TransmissionFactor);
      UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_1c0,local_4d8);
      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
      }
      pUVar2 = *ppUVar10;
      pwVar9 = L"";
      if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
        pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
      }
      ::FString::ConcatCF(&local_1b0,pwVar9,&GLTFMaterials::Inputs::TransmissionFactor);
      UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_1b0,local_4d8);
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
    }
    local_4d0[0] = (float)this->AlphaMode;
    if (fVar4 < (float)((uint)(local_4d0[0] - __real_40000000) & uVar6)) {
      pUVar2 = this->MaterialNode;
      UInterchangeShaderPortsAPI::MakeInputValueKey(&local_1a0,&GLTFMaterials::Inputs::AlphaMode);
      UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_1a0,local_4d0);
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
      pUVar2 = *ppUVar10;
      pwVar9 = L"";
      if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
        pwVar9 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
      }
      ::FString::ConcatCF(&local_190,pwVar9,&GLTFMaterials::Inputs::AlphaMode);
      UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar2,&local_190,local_4d0);
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
    }
    if (local_551 == true) {
      return;
    }
    pUVar2 = *ppUVar10;
    if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
      pwVar8 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
    }
    ::FString::ConcatCF(&local_180,pwVar8,
                        &GLTFMaterials::Inputs::Configuration::bHasTransmissionTexture);
    UInterchangeBaseNode::AddBooleanAttribute((UInterchangeBaseNode *)pUVar2,&local_180,&local_551);
    local_380.Data.AllocatorInstance.Data = local_180.Data.AllocatorInstance.Data;
  }
LAB_14e6d016f:
  if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.Data.AllocatorInstance.Data);
  }
  return;
}

// SetColor @ 14e6d0d50

void __thiscall
UE::Interchange::GLTFMaterials::FGLTFMaterialProcessor::SetColor
          (FGLTFMaterialProcessor *this,FString *param_1,TVector4<float> *param_2,
          TVector4<float> *param_3)

{
  float fVar1;
  float fVar2;
  UInterchangeShaderNode *this_00;
  float local_res18 [4];
  TVector<float>_u_0 local_68;
  TVector<float>_u_0 local_58;
  FString local_48 [3];
  
  local_68._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_68._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_68._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  local_58._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_58._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_58._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  ::FString::ConcatFF(local_48,param_1,&GLTFMaterials::Inputs::PostFix::Color_RGB);
  SetVec3(this,local_48,(TVector<float> *)&local_58._s_0,(TVector<float> *)&local_68._s_0,1);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  fVar1 = (param_2->field0_0x0)._s_0.W;
  fVar2 = (param_3->field0_0x0)._s_0.W;
  local_res18[0] = fVar1;
  ::FString::ConcatFF((FString *)&local_58._s_0,param_1,&GLTFMaterials::Inputs::PostFix::Color_A);
  if (__real_322bcc77 < (float)((uint)(fVar1 - fVar2) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this_00 = this->MaterialNode;
    UInterchangeShaderPortsAPI::MakeInputValueKey(local_48,(FString *)&local_58._s_0);
    UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)this_00,local_48,local_res18);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
  }
  if ((void *)CONCAT44(local_58._s_0.Y,local_58._s_0.X) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_58._s_0.Y,local_58._s_0.X));
  }
  SetVec4(this,param_1,param_2,param_3,2);
  return;
}

// SetMap @ 14e6d1170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Interchange::GLTFMaterials::FGLTFMaterialProcessor::SetMap
          (FGLTFMaterialProcessor *this,FString *param_1,FTextureMap *param_2)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  undefined1 uVar11;
  FString *pFVar12;
  UInterchangeShaderNode *pUVar13;
  FString *pFVar14;
  uint uVar15;
  wchar_t *pwVar16;
  int iVar17;
  wchar_t *pwVar18;
  uint uVar19;
  float fVar20;
  float local_res8 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_328 [2];
  float local_320 [2];
  float local_318 [2];
  UInterchangeShaderNode *local_310;
  TVector4<float>_u_0 local_308;
  TVector4<float>_u_0 local_2f8;
  FString local_2e8;
  FString local_2d8;
  FScriptContainerElement *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  FScriptContainerElement *local_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TVector4<float>_u_0 local_a8;
  TVector4<float>_u_0 local_98 [6];
  
  if ((param_2->TextureIndex < 0) || (this->Textures->ArrayNum <= param_2->TextureIndex)) {
    return false;
  }
  pFVar12 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this->MaterialNode,&local_138)
  ;
  local_2c8 = (pFVar12->Data).AllocatorInstance.Data;
  iVar17 = (pFVar12->Data).ArrayNum;
  iStack_2c0 = iVar17 + -1;
  if (iVar17 == 0) {
    iStack_2c0 = 0;
  }
  local_2b8 = (param_1->Data).AllocatorInstance.Data;
  local_158._12_4_ = uStack_2bc;
  local_158.Size = iStack_2c0;
  iVar17 = (param_1->Data).ArrayNum;
  iStack_2b0 = iVar17 + -1;
  if (iVar17 == 0) {
    iStack_2b0 = 0;
  }
  local_148._12_4_ = uStack_2ac;
  local_148.Size = iStack_2b0;
  local_158.DataPtr = (wchar_t *)local_2c8;
  local_148.DataPtr = (wchar_t *)local_2b8;
  pUVar13 = UInterchangeShaderNode::Create(this->NodeContainer,&local_148,&local_158);
  local_310 = pUVar13;
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  pFVar12 = ::FName::ToString(&Materials::Standard::Nodes::TextureObject::Name,&local_128);
  UInterchangeShaderNode::SetCustomShaderType(pUVar13,pFVar12);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  uVar3 = param_2->TextureIndex;
  pTVar5 = this->Textures;
  uVar15 = 0;
  if ((int)uVar3 < pTVar5->ArrayNum) {
    uVar15 = ~uVar3 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  pFVar6 = (pTVar5->AllocatorInstance).Data;
  pwVar16 = *(wchar_t **)(pFVar6 + (longlong)(int)uVar3 * 0x80 + 0x70);
  iVar4 = *(int *)(pFVar6 + (longlong)(int)uVar3 * 0x80 + 0x78);
  iVar17 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar17 = 0;
  }
  pFVar12 = ::FString::FString(&local_108,L"\\");
  pFVar14 = ::FString::FString(&local_118,L"\\");
  ::FString::ConcatFC(&local_298,pFVar14,L"Textures");
  ::FString::ConcatFF(&local_2a8,&local_298,pFVar12);
  ::FString::ConcatFR(&local_288,&local_2a8,pwVar16,iVar17);
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  pFVar12 = ::FName::ToString(&Materials::Standard::Nodes::TextureObject::Inputs::Texture,&local_e8)
  ;
  pFVar12 = UInterchangeShaderPortsAPI::MakeInputValueKey(&local_f8,pFVar12);
  pUVar13 = local_310;
  UInterchangeBaseNode::AddStringAttribute((UInterchangeBaseNode *)local_310,pFVar12,&local_288);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  pFVar12 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)pUVar13,&local_d8);
  UInterchangeShaderPortsAPI::ConnectDefaultOuputToInput
            ((UInterchangeBaseNode *)this->MaterialNode,param_1,pFVar12);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  uVar3 = param_2->TextureIndex;
  local_310 = this->MaterialInstanceNode;
  pTVar5 = this->Textures;
  uVar15 = 0;
  if ((int)uVar3 < pTVar5->ArrayNum) {
    uVar15 = ~uVar3 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  pFVar6 = (pTVar5->AllocatorInstance).Data;
  pwVar16 = *(wchar_t **)(pFVar6 + (longlong)(int)uVar3 * 0x80 + 0x70);
  iVar4 = *(int *)(pFVar6 + (longlong)(int)uVar3 * 0x80 + 0x78);
  iVar17 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar17 = 0;
  }
  pFVar12 = ::FString::FString(&local_b8,L"\\");
  pFVar14 = ::FString::FString(&local_c8,L"\\");
  ::FString::ConcatFC(&local_268,pFVar14,L"Textures");
  ::FString::ConcatFF(&local_278,&local_268,pFVar12);
  ::FString::ConcatFR(&local_248,&local_278,pwVar16,iVar17);
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pwVar18 = L"";
  pwVar16 = L"";
  if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
    pwVar16 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
  }
  ::FString::ConcatCF(&local_258,pwVar16,param_1);
  UInterchangeBaseNode::AddStringAttribute((UInterchangeBaseNode *)local_310,&local_258,&local_248);
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  bVar2 = param_2->TexCoord;
  local_res8[0] = (float)bVar2;
  ::FString::ConcatFF(&local_2e8,param_1,&GLTFMaterials::Inputs::PostFix::TexCoord);
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar9 = __real_322bcc77;
  if (__real_322bcc77 < (float)((uint)(float)bVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    pUVar13 = this->MaterialNode;
    UInterchangeShaderPortsAPI::MakeInputValueKey(&local_238,&local_2e8);
    UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar13,&local_238,local_res8);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    pUVar13 = this->MaterialInstanceNode;
    pwVar16 = L"";
    if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
      pwVar16 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
    }
    ::FString::ConcatCF(&local_228,pwVar16,&local_2e8);
    UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar13,&local_228,local_res8);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
  }
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  uVar15 = param_2->TextureIndex;
  pTVar5 = this->Textures;
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  uVar19 = 0;
  if ((int)uVar15 < pTVar5->ArrayNum) {
    uVar19 = ~uVar15 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  fVar20 = __real_3f800000;
  lVar7 = *(longlong *)((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x80 + 8);
  iVar17 = *(int *)(lVar7 + 8);
  if ((iVar17 == 0x2901) ||
     ((local_308._s_0.X = __real_3f800000, iVar17 != 0x812f &&
      (local_308._s_0.X = __real_40000000, iVar17 != 0x8370)))) {
    local_308._s_0.X = 0.0;
  }
  iVar17 = *(int *)(lVar7 + 0xc);
  if ((iVar17 == 0x2901) ||
     ((local_308._s_0.Y = __real_3f800000, iVar17 != 0x812f &&
      (local_308._s_0.Y = __real_40000000, iVar17 != 0x8370)))) {
    local_308._s_0.Y = 0.0;
  }
  local_308._8_8_ = 0;
  ::FString::ConcatFF(&local_218,param_1,&GLTFMaterials::Inputs::PostFix::TilingMethod);
  SetVec4(this,&local_218,(TVector4<float> *)&local_308._s_0,(TVector4<float> *)&local_a8._s_0,3);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if (param_2->bHasTextureTransform != false) {
    fVar1 = (param_2->TextureTransform).Offset[0];
    local_res20[0] = fVar1;
    ::FString::ConcatFF(&local_1f8,param_1,&GLTFMaterials::Inputs::PostFix::OffsetX);
    if (fVar9 < (float)((uint)fVar1 & uVar3)) {
      pUVar13 = this->MaterialNode;
      UInterchangeShaderPortsAPI::MakeInputValueKey(&local_208,&local_1f8);
      UInterchangeBaseNode::AddFloatAttribute
                ((UInterchangeBaseNode *)pUVar13,&local_208,local_res20);
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
    }
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    fVar1 = (param_2->TextureTransform).Offset[1];
    local_328[0] = fVar1;
    ::FString::ConcatFF(&local_1d8,param_1,&GLTFMaterials::Inputs::PostFix::OffsetY);
    if (fVar9 < (float)((uint)fVar1 & uVar3)) {
      pUVar13 = this->MaterialNode;
      UInterchangeShaderPortsAPI::MakeInputValueKey(&local_1e8,&local_1d8);
      UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar13,&local_1e8,local_328);
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
    }
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    fVar1 = (param_2->TextureTransform).Scale[0];
    local_320[0] = fVar1;
    ::FString::ConcatFF(&local_1b8,param_1,&GLTFMaterials::Inputs::PostFix::ScaleX);
    if (fVar9 < (float)((uint)(fVar1 - fVar20) & uVar3)) {
      pUVar13 = this->MaterialNode;
      UInterchangeShaderPortsAPI::MakeInputValueKey(&local_1c8,&local_1b8);
      UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar13,&local_1c8,local_320);
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    fVar1 = (param_2->TextureTransform).Scale[1];
    local_318[0] = fVar1;
    ::FString::ConcatFF(&local_198,param_1,&GLTFMaterials::Inputs::PostFix::ScaleY);
    if (fVar9 < (float)((uint)(fVar1 - fVar20) & uVar3)) {
      pUVar13 = this->MaterialNode;
      UInterchangeShaderPortsAPI::MakeInputValueKey(&local_1a8,&local_198);
      UInterchangeBaseNode::AddFloatAttribute((UInterchangeBaseNode *)pUVar13,&local_1a8,local_318);
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    local_2f8._s_0.X = (param_2->TextureTransform).Offset[0];
    local_2f8._s_0.Y = (param_2->TextureTransform).Offset[1];
    local_2f8._s_0.Z = (param_2->TextureTransform).Scale[0];
    local_2f8._s_0.W = (param_2->TextureTransform).Scale[1];
    local_98[0]._0_8_ = ___xmm_3f8000003f8000000000000000000000;
    local_98[0]._8_8_ = _UNK_15076b1e8;
    ::FString::ConcatFF(&local_188,param_1,&GLTFMaterials::Inputs::PostFix::OffsetScale);
    SetVec4(this,&local_188,(TVector4<float> *)&local_2f8._s_0,(TVector4<float> *)&local_98[0]._s_0,
            2);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    fVar20 = (param_2->TextureTransform).Rotation;
    if (fVar9 < (float)((uint)fVar20 & uVar3)) {
      if (fVar20 < 0.0) {
        fVar20 = __real_40c90fdb - fVar20;
      }
      ::FString::ConcatFF(&local_2d8,param_1,&GLTFMaterials::Inputs::PostFix::Rotation);
      local_res18[0] = fVar20;
      if (fVar9 < (float)((uint)fVar20 & uVar3)) {
        pUVar13 = this->MaterialNode;
        UInterchangeShaderPortsAPI::MakeInputValueKey(&local_178,&local_2d8);
        UInterchangeBaseNode::AddFloatAttribute
                  ((UInterchangeBaseNode *)pUVar13,&local_178,local_res18);
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        pUVar13 = this->MaterialInstanceNode;
        if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
          pwVar18 = (wchar_t *)
                    InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
        }
        ::FString::ConcatCF(&local_168,pwVar18,&local_2d8);
        UInterchangeBaseNode::AddFloatAttribute
                  ((UInterchangeBaseNode *)pUVar13,&local_168,local_res18);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
      }
      if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
      }
    }
  }
  return true;
}

// SetVec3 @ 14e6d1f50

void __thiscall
UE::Interchange::GLTFMaterials::FGLTFMaterialProcessor::SetVec3
          (FGLTFMaterialProcessor *this,FString *param_1,TVector<float> *param_2,
          TVector<float> *param_3,int param_4)

{
  UInterchangeShaderNode *pUVar1;
  wchar_t *pwVar2;
  FString local_28;
  FLinearColor local_18;
  
  if (((__real_322bcc77 <
        (float)((uint)((param_2->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
      (__real_322bcc77 <
       (float)((uint)((param_2->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y) &
              __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     (__real_322bcc77 <
      (float)((uint)((param_2->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z) &
             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    if ((param_4 & 1U) != 0) {
      pUVar1 = this->MaterialNode;
      FLinearColor::FLinearColor(&local_18,param_2);
      UInterchangeShaderPortsAPI::MakeInputValueKey(&local_28,param_1);
      UInterchangeBaseNode::AddLinearColorAttribute
                ((UInterchangeBaseNode *)pUVar1,&local_28,&local_18);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if ((param_4 & 2U) != 0) {
      pUVar1 = this->MaterialInstanceNode;
      FLinearColor::FLinearColor(&local_18,param_2);
      pwVar2 = L"";
      if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
        pwVar2 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance;
      }
      ::FString::ConcatCF(&local_28,pwVar2,param_1);
      UInterchangeBaseNode::AddLinearColorAttribute
                ((UInterchangeBaseNode *)pUVar1,&local_28,&local_18);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetVec4 @ 14e6d2080

void __thiscall
UE::Interchange::GLTFMaterials::FGLTFMaterialProcessor::SetVec4
          (FGLTFMaterialProcessor *this,FString *param_1,TVector4<float> *param_2,
          TVector4<float> *param_3,int param_4)

{
  UInterchangeShaderNode *pUVar1;
  wchar_t *pwVar2;
  FString local_28;
  FLinearColor local_18;
  
  if ((((__real_322bcc77 <
         (float)((uint)((param_2->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X) &
                __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
       (__real_322bcc77 <
        (float)((uint)((param_2->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
      (__real_322bcc77 <
       (float)((uint)((param_2->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z) &
              __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     (__real_322bcc77 <
      (float)((uint)((param_2->field0_0x0)._s_0.W - (param_3->field0_0x0)._s_0.W) &
             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    if ((param_4 & 1U) != 0) {
      pUVar1 = this->MaterialNode;
      FLinearColor::FLinearColor(&local_18,param_2);
      UInterchangeShaderPortsAPI::MakeInputValueKey(&local_28,param_1);
      UInterchangeBaseNode::AddLinearColorAttribute
                ((UInterchangeBaseNode *)pUVar1,&local_28,&local_18);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if ((param_4 & 2U) != 0) {
      pUVar1 = this->MaterialInstanceNode;
      FLinearColor::FLinearColor(&local_18,param_2);
      pwVar2 = L"";
      if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
        pwVar2 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance;
      }
      ::FString::ConcatCF(&local_28,pwVar2,param_1);
      UInterchangeBaseNode::AddLinearColorAttribute
                ((UInterchangeBaseNode *)pUVar1,&local_28,&local_18);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

