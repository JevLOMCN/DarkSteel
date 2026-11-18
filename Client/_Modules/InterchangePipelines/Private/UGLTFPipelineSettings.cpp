// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 10

// StaticClass @ 14e72ef40

UClass * __cdecl UGLTFPipelineSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFPipelineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"GLTFPipelineSettings",
               &Z_Registration_Info_UClass_UGLTFPipelineSettings.InnerSingleton,
               StaticRegisterNativesUGLTFPipelineSettings,0x90,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Interchange",InternalConstructor<UGLTFPipelineSettings>,
               InternalVTableHelperCtorCaller<UGLTFPipelineSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFPipelineSettings.InnerSingleton;
}

// UGLTFPipelineSettings @ 14e766690

UGLTFPipelineSettings * __thiscall
UGLTFPipelineSettings::UGLTFPipelineSettings(UGLTFPipelineSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UGLTFPipelineSettings__6B_;
  *(undefined8 *)&this->MaterialParents = 0;
  *(undefined8 *)&(this->MaterialParents).field_0x8 = 0;
  *(undefined8 *)&(this->MaterialParents).field_0x20 = 0;
  *(undefined4 *)&(this->MaterialParents).field_0x28 = 0;
  *(undefined4 *)&(this->MaterialParents).field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialParents).field_0x34 = 0;
  *(undefined4 *)&(this->MaterialParents).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MaterialParents).field_0x40 = 0;
  *(undefined4 *)&(this->MaterialParents).field_0x48 = 0;
  this->bMaterialParentsEditible = true;
  return this;
}

// UGLTFPipelineSettings @ 14e7666f0

UGLTFPipelineSettings * __thiscall
UGLTFPipelineSettings::UGLTFPipelineSettings
          (UGLTFPipelineSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UGLTFPipelineSettings__6B_;
  *(undefined8 *)&this->MaterialParents = 0;
  *(undefined8 *)&(this->MaterialParents).field_0x8 = 0;
  *(undefined8 *)&(this->MaterialParents).field_0x20 = 0;
  *(undefined4 *)&(this->MaterialParents).field_0x28 = 0;
  *(undefined4 *)&(this->MaterialParents).field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialParents).field_0x34 = 0;
  *(undefined4 *)&(this->MaterialParents).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MaterialParents).field_0x40 = 0;
  *(undefined4 *)&(this->MaterialParents).field_0x48 = 0;
  this->bMaterialParentsEditible = true;
  return this;
}

// ~UGLTFPipelineSettings @ 14e76be10

void __thiscall UGLTFPipelineSettings::~UGLTFPipelineSettings(UGLTFPipelineSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UGLTFPipelineSettings__6B_;
  *(undefined4 *)&(this->MaterialParents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MaterialParents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MaterialParents);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// operator() @ 14e76f1c0

void __thiscall
`UGLTFPipelineSettings::GenerateExpectedParametersList'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar1;
  FString local_18;
  
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (*(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)this,
             (FString *)&stack0x00000008,(bool *)param_1);
  pTVar1 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)this;
  ::FString::ConcatFF(&local_18,param_1,
                      &UE::Interchange::GLTFMaterials::Inputs::PostFix::OffsetScale);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (pTVar1,(FString *)&stack0x00000008,(bool *)&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pTVar1 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)this;
  ::FString::ConcatFF(&local_18,param_1,&UE::Interchange::GLTFMaterials::Inputs::PostFix::Rotation);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (pTVar1,(FString *)&stack0x00000008,(bool *)&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pTVar1 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)this;
  ::FString::ConcatFF(&local_18,param_1,&UE::Interchange::GLTFMaterials::Inputs::PostFix::TexCoord);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (pTVar1,(FString *)&stack0x00000008,(bool *)&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pTVar1 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)this;
  ::FString::ConcatFF(&local_18,param_1,
                      &UE::Interchange::GLTFMaterials::Inputs::PostFix::TilingMethod);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (pTVar1,(FString *)&stack0x00000008,(bool *)&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// BuildMaterialInstance @ 14e781660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UInterchangeMaterialInstanceFactoryNode * __thiscall
UGLTFPipelineSettings::BuildMaterialInstance
          (UGLTFPipelineSettings *this,UInterchangeBaseNodeContainer *param_1,
          UInterchangeShaderGraphNode *param_2,FString *param_3)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  UInterchangeShaderGraphNode *this_00;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FString *pFVar11;
  UInterchangeFactoryBaseNode *pUVar12;
  UClass *pUVar13;
  size_t sVar14;
  FTopLevelAssetPath *this_01;
  UInterchangeMaterialInstanceFactoryNode *this_02;
  UInterchangeManager *this_03;
  UInterchangeEditorUtilitiesBase *pUVar15;
  UInterchangeMaterialInstanceFactoryNode *pUVar16;
  byte bVar17;
  FAttributeKey *pFVar18;
  int iVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  uint *puVar23;
  UInterchangeMaterialInstanceFactoryNode *pUVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  undefined1 auStackY_298 [32];
  EReimportStrategyFlags local_258;
  char local_257;
  char local_256;
  bool local_255;
  undefined1 local_254 [4];
  ulonglong local_250;
  FString local_248;
  FString local_238;
  TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  UInterchangeShaderGraphNode *local_1e8;
  FString local_1e0;
  longlong *local_1d0;
  uint uStack_1c8;
  undefined4 uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *local_1c0;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  uint local_1b0;
  uint uStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  undefined1 local_1a0 [16];
  int local_190;
  FString local_188;
  FString local_178;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  FString local_138;
  FString *local_128;
  FScriptContainerElement *local_120;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FLinearColor local_b8;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if (param_2 == (UInterchangeShaderGraphNode *)0x0) {
    return (UInterchangeMaterialInstanceFactoryNode *)0x0;
  }
  local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
  local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_3;
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  local_1e8 = param_2;
  pFVar11 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_e8);
  UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_178,pFVar11);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  pUVar12 = UInterchangeBaseNodeContainer::GetFactoryNode(param_1,&local_178);
  if (pUVar12 != (UInterchangeFactoryBaseNode *)0x0) {
    pUVar13 = Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_NoRegister();
    iVar19 = (int)pUVar13->_padding_;
    if ((iVar19 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar19 * 8) ==
        &pUVar13->_padding_)) {
      ::FString::FString(&local_138,L"SearchLocation");
      bVar6 = UInterchangeBaseNode::GetInt32Attribute
                        ((UInterchangeBaseNode *)pUVar12,&local_138,(int *)&local_257);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if ((bVar6) && (local_257 != '\x04')) {
        pUVar16 = (UInterchangeMaterialInstanceFactoryNode *)0x0;
        goto LAB_14e78200e;
      }
    }
  }
  pUVar16 = (UInterchangeMaterialInstanceFactoryNode *)0x0;
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  UInterchangeBaseNode::GetAttributeKeys((UInterchangeBaseNode *)param_2,&local_228);
  iVar19 = local_228.ArrayNum;
  local_250 = CONCAT44(local_250._4_4_,1);
  pFVar25 = local_228.AllocatorInstance.Data + (longlong)local_228.ArrayNum * 0x10;
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  local_88 = (uint *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (ForElementType<FSetElementId>)0x0;
  local_60 = 0;
  FVar20.Data = local_228.AllocatorInstance.Data;
  while( true ) {
    if (local_228.ArrayNum != iVar19) {
      local_256 = '\0';
      `TCheckedPointerIterator<UE::Interchange::FAttributeKey,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_256);
    }
    this_00 = local_1e8;
    FVar4.Data = local_248.Data.AllocatorInstance.Data;
    if (FVar20.Data == pFVar25) break;
    if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum == 0) {
      pwVar22 = L"";
LAB_14e781833:
      sVar14 = wcslen(pwVar22);
      iVar8 = ::FString::Find((FString *)FVar20.Data,pwVar22,(int)sVar14,IgnoreCase,FromStart,-1);
      if (iVar8 != -1) {
        pwVar22 = L"";
        if (InterchangeGltfMaterialAttributeIdentifier.Data.ArrayNum != 0) {
          pwVar22 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance;
        }
        local_128 = ::FString::Replace((FString *)FVar20.Data,&local_d8,pwVar22,L"",CaseSensitive);
        local_120 = FVar20.Data;
        TSet<TTuple<FString,UE::Interchange::FAttributeKey>,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::FAttributeKey,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,UE::Interchange::FAttributeKey_const_&>_>
                  ((TSet<TTuple<FString,UE::Interchange::FAttributeKey>,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::FAttributeKey,0>,FDefaultSetAllocator>
                    *)local_a8,
                   (TPairInitializer<FString_&&,UE::Interchange::FAttributeKey_const_&> *)local_1a0,
                   (bool *)&local_128);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      pwVar22 = (wchar_t *)InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data;
      if (InterchangeGltfMaterialAttributeIdentifier.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) goto LAB_14e781833;
    }
    FVar20.Data = FVar20.Data + 0x10;
  }
  if (local_a8._8_4_ != local_74) {
    local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.Data.ArrayNum = 0;
    local_238.Data.ArrayMax = 0;
    ::FString::ConcatFC((FString *)(local_1a0 + 8),&InterchangeGltfMaterialAttributeIdentifier,
                        L"ParentIdentifier");
    pFVar18 = (FAttributeKey *)L"";
    if (local_190 != 0) {
      pFVar18 = (FAttributeKey *)local_1a0._8_8_;
    }
    ::FString::FString(&local_118,(wchar_t *)pFVar18);
    bVar6 = UInterchangeBaseNode::GetStringAttribute
                      ((UInterchangeBaseNode *)this_00,&local_118,&local_238);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if ((FAttributeKey *)local_1a0._8_8_ != (FAttributeKey *)0x0) {
      FMemory::Free((void *)local_1a0._8_8_);
    }
    if (bVar6) {
      ::FString::FString(&local_1e0,L"ParentIdentifier");
      if (local_a8._8_4_ != local_74) {
        iVar19 = local_1e0.Data.ArrayNum + -1;
        FVar20.Data = local_1e0.Data.AllocatorInstance.Data;
        if (local_1e0.Data.ArrayNum == 0) {
          iVar19 = 0;
          FVar20.Data = (FScriptContainerElement *)L"";
        }
        uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar19,(wchar_t *)FVar20.Data);
        TSet<TTuple<FString,UE::Interchange::FAttributeKey>,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::FAttributeKey,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>
                  ((TSet<TTuple<FString,UE::Interchange::FAttributeKey>,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::FAttributeKey,0>,FDefaultSetAllocator>
                    *)local_a8,uVar9,&local_1e0);
      }
      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
      local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.Data.ArrayNum = 0;
      local_218.Data.ArrayMax = 0;
      FVar20.Data = (FScriptContainerElement *)L"";
      if (local_238.Data.ArrayNum != 0) {
        FVar20.Data = local_238.Data.AllocatorInstance.Data;
      }
      uVar9 = 0;
      uVar10 = local_238.Data.ArrayNum - 1;
      if (local_238.Data.ArrayNum == 0) {
        uVar10 = uVar9;
      }
      uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar10,(wchar_t *)FVar20.Data);
      if (*(int *)(FVar4.Data + 0x40) != *(int *)(FVar4.Data + 0x6c)) {
        pFVar25 = *(FScriptContainerElement **)(FVar4.Data + 0x78);
        if (*(FScriptContainerElement **)(FVar4.Data + 0x78) == (FScriptContainerElement *)0x0) {
          pFVar25 = FVar4.Data + 0x70;
        }
        iVar19 = *(int *)(pFVar25 + (ulonglong)(*(int *)(FVar4.Data + 0x80) - 1U & uVar10) * 4);
        iVar8 = local_238.Data.ArrayNum;
        while (iVar19 != -1) {
          lVar21 = (longlong)iVar19 * 0x38;
          iVar2 = *(int *)(*(longlong *)(FVar4.Data + 0x38) + 8 + lVar21);
          if (iVar2 == iVar8) {
            if (1 < iVar2) {
              iVar8 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)(*(longlong *)(FVar4.Data + 0x38) + lVar21),
                                 (wchar_t *)local_238.Data.AllocatorInstance.Data);
              bVar6 = iVar8 == 0;
              iVar8 = local_238.Data.ArrayNum;
              goto LAB_14e781a44;
            }
LAB_14e781a5d:
            if (((iVar19 != -1) &&
                (lVar21 = (longlong)iVar19 * 0x38 + *(longlong *)(FVar4.Data + 0x38), lVar21 != 0))
               && (this_01 = (FTopLevelAssetPath *)(lVar21 + 0x10),
                  this_01 != (FTopLevelAssetPath *)0x0)) {
              if (this_01->PackageName == (FName)0x0) {
                local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_248.Data.ArrayNum = 0;
                local_248.Data.ArrayMax = 0;
              }
              else {
                FTopLevelAssetPath::ToString(this_01,&local_248);
              }
              if ((UGLTFPipelineSettings *)local_218.Data.AllocatorInstance.Data !=
                  (UGLTFPipelineSettings *)0x0) {
                FMemory::Free(local_218.Data.AllocatorInstance.Data);
              }
              local_218.Data.AllocatorInstance.Data = local_248.Data.AllocatorInstance.Data;
              local_218.Data.ArrayNum = local_248.Data.ArrayNum;
              local_218.Data.ArrayMax = local_248.Data.ArrayMax;
              local_248.Data.ArrayNum = 0;
              local_248.Data.ArrayMax = 0;
              local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)this_00,&local_f8);
              FVar4.Data = local_1f8.Data.AllocatorInstance.Data;
              FVar20.Data = local_208.Data.AllocatorInstance.Data;
              local_258 = ApplyNoProperties;
              pUVar12 = UInterchangeBaseNodeContainer::GetFactoryNode
                                  ((UInterchangeBaseNodeContainer *)
                                   local_1f8.Data.AllocatorInstance.Data,
                                   (FString *)local_208.Data.AllocatorInstance.Data);
              if (pUVar12 != (UInterchangeFactoryBaseNode *)0x0) {
                pUVar13 = Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_NoRegister();
                iVar19 = (int)pUVar13->_padding_;
                if ((iVar19 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar19 * 8) ==
                    &pUVar13->_padding_)) {
                  local_258 = UInterchangeFactoryBaseNode::GetReimportStrategyFlags(pUVar12);
                }
              }
              this_02 = NewObject<UInterchangeMaterialInstanceFactoryNode>((UObject *)FVar4.Data);
              if (this_02 == (UInterchangeMaterialInstanceFactoryNode *)0x0) goto LAB_14e781f58;
              ::FString::FString(&local_108,L"");
              UInterchangeBaseNodeContainer::SetupAndReplaceFactoryNode
                        ((UInterchangeBaseNodeContainer *)FVar4.Data,
                         (UInterchangeFactoryBaseNode *)this_02,&local_178,&local_f8,FactoryData,
                         (FString *)FVar20.Data,&local_108);
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
              UInterchangeFactoryBaseNode::SetReimportStrategyFlags
                        ((UInterchangeFactoryBaseNode *)this_02,&local_258);
              UInterchangeMaterialInstanceFactoryNode::SetCustomParent(this_02,&local_218);
              this_03 = UInterchangeManager::GetInterchangeManager();
              pUVar15 = UInterchangeManager::GetEditorUtilities(this_03);
              if ((pUVar15 == (UInterchangeEditorUtilitiesBase *)0x0) ||
                 (cVar7 = (**(code **)(*(longlong *)pUVar15 + 0x2b8))(pUVar15), cVar7 == '\0')) {
                pUVar13 = Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
              }
              else {
                pUVar13 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
              }
              pFVar11 = UObjectBaseUtility::GetPathName
                                  ((UObjectBaseUtility *)pUVar13,&local_c8,(UObject *)0x0);
              UInterchangeMaterialInstanceFactoryNode::SetCustomInstanceClassName(this_02,pFVar11);
              if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data.AllocatorInstance.Data);
              }
              uVar10 = local_80;
              uStack_1b4 = uVar9;
              local_1b0 = uVar9;
              if (local_80 == 0) goto LAB_14e781c92;
              puVar23 = (uint *)(local_a8 + 0x10);
              if (local_88 != (uint *)0x0) {
                puVar23 = local_88;
              }
              uVar26 = *puVar23;
              pUVar24 = pUVar16;
              uVar9 = 0;
              local_1b0 = 0;
              goto joined_r0x00014e781c3f;
            }
            break;
          }
          bVar6 = iVar2 + iVar8 == 1;
LAB_14e781a44:
          if (bVar6) goto LAB_14e781a5d;
          iVar19 = *(int *)(lVar21 + 0x30 + *(longlong *)(FVar4.Data + 0x38));
        }
      }
      if (2 < (byte)LogInterchangePipeline._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangePipeline)
        ;
      }
      goto LAB_14e781f99;
    }
    goto LAB_14e781fa7;
  }
  goto LAB_14e781fb6;
joined_r0x00014e781c3f:
  if (uVar26 != 0) goto LAB_14e781c6b;
  uVar9 = (int)pUVar16 + 1;
  pUVar16 = (UInterchangeMaterialInstanceFactoryNode *)(ulonglong)uVar9;
  local_1b0 = (int)pUVar24 + 0x20;
  pUVar24 = (UInterchangeMaterialInstanceFactoryNode *)(ulonglong)local_1b0;
  uStack_1b4 = local_80;
  if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar9)
  goto LAB_14e781c92;
  uVar26 = puVar23[(int)uVar9];
  goto joined_r0x00014e781c3f;
LAB_14e781c6b:
  local_250 = (ulonglong)(-uVar26 & uVar26);
  uVar1 = local_250 * 2 + 1;
  lVar21 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
    }
  }
  uStack_1b4 = (local_1b0 - 1) + (int)lVar21;
  local_1e8 = (UInterchangeShaderGraphNode *)CONCAT44(local_1e8._4_4_,(int)lVar21);
  if ((int)local_80 < (int)uStack_1b4) {
    uStack_1b4 = local_80;
  }
LAB_14e781c92:
  local_1d0 = (longlong *)local_a8;
  uStack_1c4 = (undefined4)local_250;
  uVar26 = local_80 & 0xffffffe0;
  local_1c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  iStack_1a8 = local_a8._8_4_ - local_74;
  uStack_1b8 = 0xffffffff;
  TStack_160.CurrentBitIndex = uStack_1b4;
  TStack_160.UnvisitedBitMask = 0xffffffff;
  TStack_160._padding_ = CONCAT44(uStack_1c4,uVar9);
  iVar19 = (int)local_80 >> 5;
  TStack_160._28_4_ = uStack_1b4;
  TStack_160.BaseBitIndex = local_1b0;
  uStack_140 = CONCAT44(uStack_1a4,iStack_1a8);
  bVar17 = (byte)local_80;
  uStack_1c8 = uVar9;
  uStack_1ac = uStack_1b4;
  local_168 = local_1d0;
  TStack_160.Array = local_1c0;
  if (((int)local_80 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pUVar16 = (UInterchangeMaterialInstanceFactoryNode *)(*pcVar3)();
    return pUVar16;
  }
  if (uVar10 != local_80) {
    puVar23 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar23 = local_88;
    }
    uVar9 = -1 << (bVar17 & 0x1f) & puVar23[iVar19];
    while (uVar9 == 0) {
      iVar19 = iVar19 + 1;
      uVar26 = uVar26 + 0x20;
      uVar10 = local_80;
      if ((int)(((int)(local_80 - 1) >> 0x1f & 0x1fU) + (local_80 - 1)) >> 5 < iVar19)
      goto LAB_14e781db0;
      uVar9 = puVar23[iVar19];
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    uVar10 = (uVar26 - 1) + (int)lVar21;
    if ((int)local_80 < (int)uVar10) {
      uVar10 = local_80;
    }
  }
LAB_14e781db0:
  while( true ) {
    plVar5 = local_168;
    if ((int)local_168[1] - *(int *)((longlong)local_168 + 0x34) != (int)uStack_140) {
      `TSparseArray<TSparseSetElement<TTuple<FString,UE::Interchange::FAttributeKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_254);
    }
    if (((TStack_160.CurrentBitIndex == uVar10) &&
        (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (pUVar16 = this_02, plVar5 == (longlong *)local_a8)) break;
    pFVar11 = (FString *)(*plVar5 + (longlong)TStack_160.CurrentBitIndex * 0x28);
    iVar19 = (**(code **)(this_00->_padding_ + 0x2c8))(this_00,pFVar11 + 1);
    UInterchangeShaderPortsAPI::MakeInputValueKey(&local_208,pFVar11);
    if (iVar19 == 1) {
      bVar6 = UInterchangeBaseNode::GetBooleanAttribute
                        ((UInterchangeBaseNode *)this_00,pFVar11 + 1,&local_255);
      if (bVar6) {
        UInterchangeBaseNode::AddBooleanAttribute
                  ((UInterchangeBaseNode *)this_02,&local_208,&local_255);
      }
    }
    else if (iVar19 == 8) {
      bVar6 = UInterchangeBaseNode::GetFloatAttribute
                        ((UInterchangeBaseNode *)this_00,pFVar11 + 1,(float *)&local_250);
      if (bVar6) {
        UInterchangeBaseNode::AddFloatAttribute
                  ((UInterchangeBaseNode *)this_02,&local_208,(float *)&local_250);
      }
    }
    else if (iVar19 == 0xf) {
      bVar6 = UInterchangeBaseNode::GetLinearColorAttribute
                        ((UInterchangeBaseNode *)this_00,pFVar11 + 1,&local_b8);
      if (bVar6) {
        UInterchangeBaseNode::AddLinearColorAttribute
                  ((UInterchangeBaseNode *)this_02,&local_208,&local_b8);
      }
    }
    else if (iVar19 == 0x12) {
      local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.Data.ArrayNum = 0;
      local_1f8.Data.ArrayMax = 0;
      bVar6 = UInterchangeBaseNode::GetStringAttribute
                        ((UInterchangeBaseNode *)this_00,pFVar11 + 1,&local_1f8);
      if (bVar6) {
        UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_188,&local_1f8);
        UInterchangeBaseNode::AddStringAttribute
                  ((UInterchangeBaseNode *)this_02,&local_208,&local_188);
        UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                  ((UInterchangeFactoryBaseNode *)this_02,&local_188);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
      }
      if ((UInterchangeBaseNodeContainer *)local_1f8.Data.AllocatorInstance.Data !=
          (UInterchangeBaseNodeContainer *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
  }
LAB_14e781f58:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
LAB_14e781f99:
  if ((UGLTFPipelineSettings *)local_218.Data.AllocatorInstance.Data != (UGLTFPipelineSettings *)0x0
     ) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
LAB_14e781fa7:
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
LAB_14e781fb6:
  local_60 = 0;
  if (local_68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Interchange::FAttributeKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Interchange::FAttributeKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Interchange::FAttributeKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  DestructItems<UE::Interchange::FAttributeKey,int>
            ((FAttributeKey *)local_228.AllocatorInstance.Data,local_228.ArrayNum);
  if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.AllocatorInstance.Data);
  }
LAB_14e78200e:
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  return pUVar16;
}

// GenerateExpectedParametersList @ 14e7b0210

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
UGLTFPipelineSettings::GenerateExpectedParametersList
          (UGLTFPipelineSettings *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          FString *param_1)

{
  int iVar1;
  FString *pFVar2;
  FString local_res10;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_res20;
  
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  local_res20 = __return_storage_ptr__;
  iVar1 = ::FString::Find(param_1,L"_Unlit",6,IgnoreCase,FromStart,-1);
  if (iVar1 == -1) {
    `UGLTFPipelineSettings::GenerateExpectedParametersList'::__l2::<lambda_1>::operator()
              (&local_res20,&UE::Interchange::GLTFMaterials::Inputs::NormalTexture);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (__return_storage_ptr__,&local_res10,
               (bool *)&UE::Interchange::GLTFMaterials::Inputs::NormalScale);
    iVar1 = ::FString::Find(param_1,L"Transmission",0xc,IgnoreCase,FromStart,-1);
    if (iVar1 == -1) {
      `UGLTFPipelineSettings::GenerateExpectedParametersList'::__l2::<lambda_1>::operator()
                (&local_res20,&UE::Interchange::GLTFMaterials::Inputs::EmissiveTexture);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (__return_storage_ptr__,&local_res10,
                 (bool *)&UE::Interchange::GLTFMaterials::Inputs::EmissiveFactor);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (__return_storage_ptr__,&local_res10,
                 (bool *)&UE::Interchange::GLTFMaterials::Inputs::EmissiveStrength);
    }
    `UGLTFPipelineSettings::GenerateExpectedParametersList'::__l2::<lambda_1>::operator()
              (&local_res20,&UE::Interchange::GLTFMaterials::Inputs::OcclusionTexture);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (__return_storage_ptr__,&local_res10,
               (bool *)&UE::Interchange::GLTFMaterials::Inputs::OcclusionStrength);
    iVar1 = ::FString::Find(param_1,L"SpecularGlossiness",0x12,IgnoreCase,FromStart,-1);
    if (iVar1 == -1) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (__return_storage_ptr__,&local_res10,
                 (bool *)&UE::Interchange::GLTFMaterials::Inputs::IOR);
      `UGLTFPipelineSettings::GenerateExpectedParametersList'::__l2::<lambda_1>::operator()
                (&local_res20,&UE::Interchange::GLTFMaterials::Inputs::SpecularTexture);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (__return_storage_ptr__,&local_res10,
                 (bool *)&UE::Interchange::GLTFMaterials::Inputs::SpecularFactor);
    }
    iVar1 = ::FString::Find(param_1,L"Default",7,IgnoreCase,FromStart,-1);
    if (iVar1 == -1) {
      iVar1 = ::FString::Find(param_1,L"ClearCoat",9,IgnoreCase,FromStart,-1);
      if (iVar1 == -1) {
        iVar1 = ::FString::Find(param_1,L"Sheen",5,IgnoreCase,FromStart,-1);
        if (iVar1 == -1) {
          iVar1 = ::FString::Find(param_1,L"Transmission",0xc,IgnoreCase,FromStart,-1);
          if (iVar1 == -1) {
            iVar1 = ::FString::Find(param_1,L"SpecularGlossiness",0x12,IgnoreCase,FromStart,-1);
            if (iVar1 == -1) {
              return __return_storage_ptr__;
            }
            `UGLTFPipelineSettings::GenerateExpectedParametersList'::__l2::<lambda_1>::operator()
                      (&local_res20,&UE::Interchange::GLTFMaterials::Inputs::DiffuseTexture);
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                      (__return_storage_ptr__,&local_res10,
                       (bool *)&UE::Interchange::GLTFMaterials::Inputs::DiffuseFactor);
            `UGLTFPipelineSettings::GenerateExpectedParametersList'::__l2::<lambda_1>::operator()
                      (&local_res20,
                       &UE::Interchange::GLTFMaterials::Inputs::SpecularGlossinessTexture);
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                      (__return_storage_ptr__,&local_res10,
                       (bool *)&UE::Interchange::GLTFMaterials::Inputs::SpecFactor);
            pFVar2 = &UE::Interchange::GLTFMaterials::Inputs::GlossinessFactor;
          }
          else {
            `UGLTFPipelineSettings::GenerateExpectedParametersList'::__l2::<lambda_1>::operator()
                      (&local_res20,&UE::Interchange::GLTFMaterials::Inputs::TransmissionTexture);
            pFVar2 = &UE::Interchange::GLTFMaterials::Inputs::TransmissionFactor;
          }
        }
        else {
          `UGLTFPipelineSettings::GenerateExpectedParametersList'::__l2::<lambda_1>::operator()
                    (&local_res20,&UE::Interchange::GLTFMaterials::Inputs::SheenColorTexture);
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                    (__return_storage_ptr__,&local_res10,
                     (bool *)&UE::Interchange::GLTFMaterials::Inputs::SheenColorFactor);
          `UGLTFPipelineSettings::GenerateExpectedParametersList'::__l2::<lambda_1>::operator()
                    (&local_res20,&UE::Interchange::GLTFMaterials::Inputs::SheenRoughnessTexture);
          pFVar2 = &UE::Interchange::GLTFMaterials::Inputs::SheenRoughnessFactor;
        }
      }
      else {
        `UGLTFPipelineSettings::GenerateExpectedParametersList'::__l2::<lambda_1>::operator()
                  (&local_res20,&UE::Interchange::GLTFMaterials::Inputs::ClearCoatTexture);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (__return_storage_ptr__,&local_res10,
                   (bool *)&UE::Interchange::GLTFMaterials::Inputs::ClearCoatFactor);
        `UGLTFPipelineSettings::GenerateExpectedParametersList'::__l2::<lambda_1>::operator()
                  (&local_res20,&UE::Interchange::GLTFMaterials::Inputs::ClearCoatRoughnessTexture);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (__return_storage_ptr__,&local_res10,
                   (bool *)&UE::Interchange::GLTFMaterials::Inputs::ClearCoatRoughnessFactor);
        `UGLTFPipelineSettings::GenerateExpectedParametersList'::__l2::<lambda_1>::operator()
                  (&local_res20,&UE::Interchange::GLTFMaterials::Inputs::ClearCoatNormalTexture);
        pFVar2 = &UE::Interchange::GLTFMaterials::Inputs::ClearCoatNormalScale;
      }
    }
    else {
      `UGLTFPipelineSettings::GenerateExpectedParametersList'::__l2::<lambda_1>::operator()
                (&local_res20,&UE::Interchange::GLTFMaterials::Inputs::BaseColorTexture);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (__return_storage_ptr__,&local_res10,
                 (bool *)&UE::Interchange::GLTFMaterials::Inputs::BaseColorFactor);
      `UGLTFPipelineSettings::GenerateExpectedParametersList'::__l2::<lambda_1>::operator()
                (&local_res20,&UE::Interchange::GLTFMaterials::Inputs::MetallicRoughnessTexture);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (__return_storage_ptr__,&local_res10,
                 (bool *)&UE::Interchange::GLTFMaterials::Inputs::MetallicFactor);
      pFVar2 = &UE::Interchange::GLTFMaterials::Inputs::RoughnessFactor;
    }
  }
  else {
    `UGLTFPipelineSettings::GenerateExpectedParametersList'::__l2::<lambda_1>::operator()
              (&local_res20,&UE::Interchange::GLTFMaterials::Inputs::BaseColorTexture);
    pFVar2 = &UE::Interchange::GLTFMaterials::Inputs::BaseColorFactor;
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (__return_storage_ptr__,&local_res10,(bool *)pFVar2);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e7b9380

UClass * __cdecl UGLTFPipelineSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFPipelineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"GLTFPipelineSettings",
               &Z_Registration_Info_UClass_UGLTFPipelineSettings.InnerSingleton,
               StaticRegisterNativesUGLTFPipelineSettings,0x90,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Interchange",InternalConstructor<UGLTFPipelineSettings>,
               InternalVTableHelperCtorCaller<UGLTFPipelineSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFPipelineSettings.InnerSingleton;
}

// StaticRegisterNativesUGLTFPipelineSettings @ 14e7e4590

void __cdecl UGLTFPipelineSettings::StaticRegisterNativesUGLTFPipelineSettings(void)

{
  return;
}

// ValidateMaterialInstancesAndParameters @ 14e7e7130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e7e7c39) */
/* WARNING: Removing unreachable block (ram,0x00014e7e73cd) */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UGLTFPipelineSettings::ValidateMaterialInstancesAndParameters
          (UGLTFPipelineSettings *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  UGLTFPipelineSettings *pUVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar11;
  UMaterialInterface *this_00;
  UClass *pUVar12;
  FString *pFVar13;
  longlong lVar14;
  byte bVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  wchar_t *pwVar18;
  uint uVar19;
  ForAnyElementType FVar20;
  FName *pFVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  int iVar24;
  undefined1 *puVar25;
  uint *puVar26;
  uint uVar27;
  FString *pFVar28;
  uint uVar29;
  TMap<FString,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>_>
  *pTVar30;
  undefined1 auStackY_328 [32];
  undefined1 local_2d8;
  undefined1 local_2d7;
  undefined1 local_2d6;
  undefined1 local_2d5;
  undefined1 local_2d4;
  undefined1 local_2d3;
  undefined1 local_2d2 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_2d0;
  UGLTFPipelineSettings *local_2c0;
  TMap<FString,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>_>
  *local_2b8;
  uint uStack_2b0;
  uint uStack_2ac;
  TBitArray<FDefaultBitArrayAllocator> *local_2a8;
  uint uStack_2a0;
  uint uStack_29c;
  uint local_298;
  undefined4 uStack_294;
  int iStack_290;
  undefined4 uStack_28c;
  FString local_288;
  FString local_278;
  TArray<FString,TSizedDefaultAllocator<32>_> local_268;
  TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> local_258;
  TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> local_248;
  TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> local_238;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_228;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  <lambda_1> local_208;
  TMap<FString,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>_>
  *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f8;
  undefined8 uStack_1d8;
  TMap<FString,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>_>
  *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  undefined8 uStack_1a8;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  TMap<FString,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>_>
  *local_130;
  undefined8 uStack_128;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_e4;
  undefined4 local_c4;
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_328;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  iVar9 = ExpectedMaterialInstanceIdentifiers.ArrayNum;
  FVar20 = ExpectedMaterialInstanceIdentifiers.AllocatorInstance;
  __return_storage_ptr__->ArrayMax = 0;
  local_2d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d0.ArrayNum = ExpectedMaterialInstanceIdentifiers.ArrayNum;
  iVar24 = 0;
  local_2c0 = this;
  if (ExpectedMaterialInstanceIdentifiers.ArrayNum == 0) {
    local_2d0.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,ExpectedMaterialInstanceIdentifiers.ArrayNum,0,&local_2d0.AllocatorInstance,
               ExpectedMaterialInstanceIdentifiers.ArrayNum,&local_2d0.ArrayMax);
    ConstructItems<FString,FString,int>
              (local_2d0.AllocatorInstance.Data,(FString *)FVar20.Data,iVar9);
  }
  pTVar30 = &this->MaterialParents;
  local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.ArrayNum = 0;
  local_268.ArrayMax = 0;
  TMapBase<FString,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>_>
              *)pTVar30,&local_268);
  iVar9 = local_268.ArrayNum;
  uVar10 = (ulonglong)local_268.ArrayNum;
  pFVar23 = local_268.AllocatorInstance.Data + uVar10 * 0x10;
  FVar20.Data = local_268.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar10 != iVar9) {
      local_2d8 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_2d8)
      ;
    }
    iVar6 = local_2d0.ArrayNum;
    if (FVar20.Data == pFVar23) break;
    if (((local_2d0.AllocatorInstance.Data <= FVar20.Data) &&
        (FVar20.Data < local_2d0.AllocatorInstance.Data + (longlong)local_2d0.ArrayMax * 0x10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar11;
    }
    local_208.Item = (FString *)FVar20.Data;
    TArray<FString,TSizedDefaultAllocator<32>_>::
    RemoveAll<_TArray<FString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
              (&local_2d0,&local_208);
    uVar10 = local_268._8_8_ & 0xffffffff;
    FVar20.Data = FVar20.Data + 0x10;
  }
  uVar10 = (ulonglong)local_2d0.ArrayNum;
  pFVar23 = local_2d0.AllocatorInstance.Data + uVar10 * 0x10;
  FVar20.Data = local_2d0.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar10 != iVar6) {
      local_2d7 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_2d7)
      ;
    }
    pUVar7 = local_2c0;
    if (FVar20.Data == pFVar23) break;
    ::FString::ConcatCF(&local_1a0,L"[",(FString *)FVar20.Data);
    ::FString::ConcatFC(&local_288,&local_1a0,L"]: MaterialInstance not found for Identifier.");
    pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar17 <= (FScriptContainerElement *)&local_288) &&
        ((FScriptContainerElement *)&local_288 <
         pFVar17 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar11;
    }
    iVar9 = __return_storage_ptr__->ArrayNum;
    if (iVar9 == __return_storage_ptr__->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
    }
    else {
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
    }
    pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar17 = 0;
    *(FScriptContainerElement **)pFVar17 = local_288.Data.AllocatorInstance.Data;
    *(int *)(pFVar17 + 8) = local_288.Data.ArrayNum;
    *(int *)(pFVar17 + 0xc) = local_288.Data.ArrayMax;
    local_288.Data.ArrayNum = 0;
    local_288.Data.ArrayMax = 0;
    local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    uVar10 = (ulonglong)(uint)local_2d0.ArrayNum;
    FVar20.Data = FVar20.Data + 0x10;
  }
  iVar9 = *(int *)&(local_2c0->MaterialParents).field_0x28;
  puVar1 = &(local_2c0->MaterialParents).field_0x10;
  local_298 = 0;
  uStack_2ac = 1;
  uStack_29c = 0;
  if (iVar9 != 0) {
    puVar26 = *(uint **)&(local_2c0->MaterialParents).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar1;
    }
    uVar16 = *puVar26;
    iVar24 = 0;
    while (uVar16 == 0) {
      iVar24 = iVar24 + 1;
      local_298 = local_298 + 0x20;
      uStack_29c = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_14e7e7472;
      uVar16 = puVar26[iVar24];
    }
    uStack_2ac = ~(uVar16 - 1) & uVar16;
    uVar10 = (ulonglong)uStack_2ac * 2 + 1;
    lVar14 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_218 = (int)lVar14;
    uStack_29c = local_298 + -1 + local_218;
    if (iVar9 < (int)uStack_29c) {
      uStack_29c = iVar9;
    }
  }
LAB_14e7e7472:
  uVar16 = *(uint *)&(local_2c0->MaterialParents).field_0x28;
  uStack_294 = local_e4;
  bVar15 = (byte)uVar16 & 0x1f;
  iStack_290 = *(int *)&(local_2c0->MaterialParents).field_0x8 -
               *(int *)&(local_2c0->MaterialParents).field_0x34;
  uVar22 = uVar16 & 0xffffffe0;
  TStack_1c8._padding_ = CONCAT44(uStack_2ac,iVar24);
  uStack_2a0 = 0xffffffff;
  TStack_1c8.CurrentBitIndex = uStack_29c;
  TStack_1c8.UnvisitedBitMask = 0xffffffff;
  uVar19 = (int)uVar16 >> 5;
  TStack_1c8._28_4_ = local_e4;
  TStack_1c8.BaseBitIndex = local_298;
  uStack_1a8 = CONCAT44(uStack_28c,iStack_290);
  uVar27 = 1 << bVar15;
  uVar29 = -1 << bVar15;
  local_1d0 = pTVar30;
  TStack_1c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar9 < (int)uVar16)) &&
     (local_2b8 = pTVar30, uStack_2b0 = iVar24,
     local_2a8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
     bVar8 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar11;
  }
  uVar2 = *(uint *)&(pUVar7->MaterialParents).field_0x28;
  uStack_29c = uVar16;
  if (uVar16 != uVar2) {
    puVar3 = *(undefined1 **)&(pUVar7->MaterialParents).field_0x20;
    puVar25 = puVar1;
    if (puVar3 != (undefined1 *)0x0) {
      puVar25 = puVar3;
    }
    uVar16 = uVar29 & *(uint *)(puVar25 + (longlong)(int)uVar19 * 4);
    while (uVar16 == 0) {
      uVar19 = uVar19 + 1;
      uVar22 = uVar22 + 0x20;
      uStack_29c = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < (int)uVar19)
      goto LAB_14e7e7590;
      uVar29 = 0xffffffff;
      uVar16 = *(uint *)(puVar25 + (longlong)(int)uVar19 * 4);
    }
    uVar27 = ~(uVar16 - 1) & uVar16;
    uVar10 = (ulonglong)uVar27 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_214 = (int)lVar14;
    uStack_29c = (uVar22 - 1) + local_214;
    if ((int)uVar2 < (int)uStack_29c) {
      uStack_29c = uVar2;
    }
  }
LAB_14e7e7590:
  local_2b8 = &local_2c0->MaterialParents;
  uStack_294 = local_c4;
  iStack_290 = *(int *)&(local_2c0->MaterialParents).field_0x8 -
               *(int *)&(local_2c0->MaterialParents).field_0x34;
  uStack_128 = CONCAT44(uVar27,uVar19);
  uStack_118 = CONCAT44(uStack_29c,uVar29);
  local_110 = CONCAT44(local_c4,uVar22);
  uStack_108 = CONCAT44(uStack_28c,iStack_290);
  uStack_2b0 = uVar19;
  uStack_2ac = uVar27;
  local_2a8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  uStack_2a0 = uVar29;
  local_298 = uVar22;
  local_130 = local_2b8;
  local_120 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  do {
    pTVar30 = local_1d0;
    if (*(int *)&local_1d0->field_0x8 - *(int *)&local_1d0->field_0x34 != (int)uStack_1a8) {
      local_2d6 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d6);
    }
    if (((TStack_1c8.CurrentBitIndex == uStack_118._4_4_) && (TStack_1c8.Array == local_120)) &&
       (pTVar30 == local_130)) {
      DestructItems<FString,int>((FString *)local_268.AllocatorInstance.Data,local_268.ArrayNum);
      if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_2d0.AllocatorInstance.Data,local_2d0.ArrayNum);
      if (local_2d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d0.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    pFVar28 = (FString *)((longlong)TStack_1c8.CurrentBitIndex * 0x38 + *(longlong *)pTVar30);
    GenerateExpectedParametersList
              (local_2c0,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
               pFVar28);
    this_00 = (UMaterialInterface *)
              FSoftObjectPath::TryLoad
                        ((FSoftObjectPath *)(pFVar28 + 1),(FUObjectSerializeContext *)0x0);
    if (this_00 != (UMaterialInterface *)0x0) {
      pUVar12 = Z_Construct_UClass_UMaterialInstance_NoRegister();
      iVar24 = (int)pUVar12->_padding_;
      if ((iVar24 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar24 * 8) ==
          &pUVar12->_padding_)) {
        local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_228.ArrayNum = 0;
        local_228.ArrayMax = 0;
        local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_258.ArrayNum = 0;
        local_258.ArrayMax = 0;
        local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_238.ArrayNum = 0;
        local_238.ArrayMax = 0;
        local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_248.ArrayNum = 0;
        local_248.ArrayMax = 0;
        UMaterialInterface::GetAllScalarParameterInfo(this_00,&local_258,&local_228);
        UMaterialInterface::GetAllVectorParameterInfo(this_00,&local_238,&local_228);
        UMaterialInterface::GetAllTextureParameterInfo(this_00,&local_248,&local_228);
        iVar24 = local_258.ArrayNum;
        uVar10 = (ulonglong)local_258.ArrayNum;
        pFVar21 = (FName *)(local_258.AllocatorInstance.Data + uVar10 * 0x10);
        FVar20.Data = local_258.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar10 != iVar24) {
            local_2d5 = 0;
            `TCheckedPointerIterator<FMaterialParameterInfo,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_2d5);
          }
          if ((FName *)FVar20.Data == pFVar21) break;
          pFVar13 = ::FName::ToString((FName *)FVar20.Data,&local_160);
          if (local_98._8_4_ != local_64) {
            iVar9 = (pFVar13->Data).ArrayNum;
            if (iVar9 == 0) {
              pwVar18 = L"";
              iVar9 = 0;
            }
            else {
              pwVar18 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
              iVar9 = iVar9 + -1;
            }
            uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar18);
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                      ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                       uVar16,pFVar13);
          }
          if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.Data.AllocatorInstance.Data);
          }
          uVar10 = local_258._8_8_ & 0xffffffff;
          FVar20.Data = FVar20.Data + 0x10;
        }
        iVar24 = local_238.ArrayNum;
        uVar10 = (ulonglong)local_238.ArrayNum;
        pFVar21 = (FName *)(local_238.AllocatorInstance.Data + uVar10 * 0x10);
        FVar20.Data = local_238.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar10 != iVar24) {
            local_2d4 = 0;
            `TCheckedPointerIterator<FMaterialParameterInfo,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_2d4);
          }
          if ((FName *)FVar20.Data == pFVar21) break;
          pFVar13 = ::FName::ToString((FName *)FVar20.Data,&local_150);
          if (local_98._8_4_ != local_64) {
            iVar9 = (pFVar13->Data).ArrayNum;
            if (iVar9 == 0) {
              pwVar18 = L"";
              iVar9 = 0;
            }
            else {
              pwVar18 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
              iVar9 = iVar9 + -1;
            }
            uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar18);
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                      ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                       uVar16,pFVar13);
          }
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
          }
          uVar10 = local_238._8_8_ & 0xffffffff;
          FVar20.Data = FVar20.Data + 0x10;
        }
        iVar24 = local_248.ArrayNum;
        uVar10 = (ulonglong)local_248.ArrayNum;
        pFVar21 = (FName *)(local_248.AllocatorInstance.Data + uVar10 * 0x10);
        FVar20.Data = local_248.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar10 != iVar24) {
            local_2d3 = 0;
            `TCheckedPointerIterator<FMaterialParameterInfo,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_2d3);
          }
          if ((FName *)FVar20.Data == pFVar21) break;
          pFVar13 = ::FName::ToString((FName *)FVar20.Data,&local_140);
          if (local_98._8_4_ != local_64) {
            iVar9 = (pFVar13->Data).ArrayNum;
            if (iVar9 == 0) {
              pwVar18 = L"";
              iVar9 = 0;
            }
            else {
              pwVar18 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
              iVar9 = iVar9 + -1;
            }
            uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar18);
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                      ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                       uVar16,pFVar13);
          }
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
          uVar10 = local_248._8_8_ & 0xffffffff;
          FVar20.Data = FVar20.Data + 0x10;
        }
        if ((FName *)local_248.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_248.AllocatorInstance.Data);
        }
        if ((FName *)local_238.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_238.AllocatorInstance.Data);
        }
        if ((FName *)local_258.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_258.AllocatorInstance.Data);
        }
        if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.AllocatorInstance.Data);
        }
      }
    }
    uVar16 = local_70;
    uStack_2b0 = 0;
    uStack_2ac = 1;
    uStack_29c = uStack_2b0;
    local_298 = uStack_2b0;
    if (local_70 != 0) {
      puVar26 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar26 = local_78;
      }
      uVar22 = *puVar26;
      while (uVar22 == 0) {
        uStack_2b0 = uStack_2b0 + 1;
        local_298 = local_298 + 0x20;
        uStack_29c = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2b0)
        goto LAB_14e7e798f;
        uVar22 = puVar26[(int)uStack_2b0];
      }
      uStack_2ac = -uVar22 & uVar22;
      uVar10 = (ulonglong)uStack_2ac * 2 + 1;
      lVar14 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_210 = (int)lVar14;
      uStack_29c = (local_298 - 1) + local_210;
      if ((int)local_70 < (int)uStack_29c) {
        uStack_29c = local_70;
      }
    }
LAB_14e7e798f:
    local_2b8 = (TMap<FString,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>_>
                 *)local_98;
    uStack_294 = local_a4;
    local_2a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar22 = local_70 & 0xffffffe0;
    iStack_290 = local_98._8_4_ - local_64;
    TStack_1f8._padding_ = CONCAT44(uStack_2ac,uStack_2b0);
    uStack_2a0 = 0xffffffff;
    TStack_1f8.CurrentBitIndex = uStack_29c;
    TStack_1f8.UnvisitedBitMask = 0xffffffff;
    iVar24 = (int)local_70 >> 5;
    TStack_1f8._28_4_ = local_a4;
    TStack_1f8.BaseBitIndex = local_298;
    uStack_1d8 = CONCAT44(uStack_28c,iStack_290);
    bVar15 = (byte)local_70;
    local_200 = local_2b8;
    TStack_1f8.Array = local_2a8;
    if (((int)local_70 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar11;
    }
    if (uVar16 != local_70) {
      puVar26 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar26 = local_78;
      }
      uVar16 = -1 << (bVar15 & 0x1f) & puVar26[iVar24];
      while (uVar16 == 0) {
        iVar24 = iVar24 + 1;
        uVar22 = uVar22 + 0x20;
        uVar16 = local_70;
        if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < iVar24)
        goto LAB_14e7e7ab0;
        uVar16 = puVar26[iVar24];
      }
      uVar10 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_20c = (int)lVar14;
      uVar16 = (uVar22 - 1) + local_20c;
      if ((int)local_70 < (int)uVar16) {
        uVar16 = local_70;
      }
    }
LAB_14e7e7ab0:
    while( true ) {
      pTVar30 = local_200;
      if (*(int *)&local_200->field_0x8 - *(int *)&local_200->field_0x34 != (int)uStack_1d8) {
        local_2d2[0] = 0;
        `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2d2);
      }
      lVar14 = (longlong)TStack_1f8.CurrentBitIndex;
      if (((TStack_1f8.CurrentBitIndex == uVar16) &&
          (TStack_1f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (pTVar30 ==
          (TMap<FString,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>_>
           *)local_98)) break;
      lVar4 = *(longlong *)pTVar30;
      ::FString::ConcatCF(&local_170,L"[",pFVar28);
      ::FString::ConcatFC(&local_180,&local_170,L"]: Does not cover expected parameter: ");
      ::FString::ConcatFF(&local_190,&local_180,(FString *)(lVar4 + lVar14 * 0x18));
      ::FString::ConcatFC(&local_278,&local_190,L".");
      pFVar23 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar23 <= (FScriptContainerElement *)&local_278) &&
          ((FScriptContainerElement *)&local_278 <
           pFVar23 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar11;
      }
      iVar24 = __return_storage_ptr__->ArrayNum;
      if (iVar24 == __return_storage_ptr__->ArrayMax) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
        __return_storage_ptr__->ArrayNum = iVar24 + 1;
      }
      else {
        __return_storage_ptr__->ArrayNum = iVar24 + 1;
      }
      pFVar23 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar24 * 0x10;
      *(undefined8 *)pFVar23 = 0;
      *(FScriptContainerElement **)pFVar23 = local_278.Data.AllocatorInstance.Data;
      *(int *)(pFVar23 + 8) = local_278.Data.ArrayNum;
      *(int *)(pFVar23 + 0xc) = local_278.Data.ArrayMax;
      local_278.Data.ArrayNum = 0;
      local_278.Data.ArrayMax = 0;
      local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      TStack_1f8.UnvisitedBitMask = TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f8);
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
  } while( true );
}

