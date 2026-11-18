// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 14

// StaticClass @ 14e72ccc0

UClass * __cdecl UInterchangeGenericTexturePipeline::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericTexturePipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeGenericTexturePipeline,400,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericTexturePipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericTexturePipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline.InnerSingleton;
}

// UInterchangeGenericTexturePipeline @ 14e767bc0

UInterchangeGenericTexturePipeline * __thiscall
UInterchangeGenericTexturePipeline::UInterchangeGenericTexturePipeline
          (UInterchangeGenericTexturePipeline *this,FVTableHelper *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->bImportTextures = true;
  this->_padding_ = (longlong)&___7UInterchangeGenericTexturePipeline__6B_;
  (this->PipelineDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipelineDisplayName).Data.ArrayNum = 0;
  (this->PipelineDisplayName).Data.ArrayMax = 0;
  (this->AssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetName).Data.ArrayNum = 0;
  (this->AssetName).Data.ArrayMax = 0;
  this->bAllowNonPowerOfTwo = false;
  (this->BaseNodeContainer).field0_0x0.DebugPtr = (UInterchangeBaseNodeContainer *)0x0;
  (this->SourceDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceDatas).ArrayNum = 0;
  (this->SourceDatas).ArrayMax = 0;
  (this->TextureNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureNodes).ArrayNum = 0;
  (this->TextureNodes).ArrayMax = 0;
  (this->TextureFactoryNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureFactoryNodes).ArrayNum = 0;
  (this->TextureFactoryNodes).ArrayMax = 0;
  return this;
}

// UInterchangeGenericTexturePipeline @ 14e767c50

UInterchangeGenericTexturePipeline * __thiscall
UInterchangeGenericTexturePipeline::UInterchangeGenericTexturePipeline
          (UInterchangeGenericTexturePipeline *this,FObjectInitializer *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->bImportTextures = true;
  this->_padding_ = (longlong)&___7UInterchangeGenericTexturePipeline__6B_;
  (this->PipelineDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipelineDisplayName).Data.ArrayNum = 0;
  (this->PipelineDisplayName).Data.ArrayMax = 0;
  (this->AssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetName).Data.ArrayNum = 0;
  (this->AssetName).Data.ArrayMax = 0;
  this->bAllowNonPowerOfTwo = false;
  (this->BaseNodeContainer).field0_0x0.DebugPtr = (UInterchangeBaseNodeContainer *)0x0;
  (this->SourceDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceDatas).ArrayNum = 0;
  (this->SourceDatas).ArrayMax = 0;
  (this->TextureNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureNodes).ArrayNum = 0;
  (this->TextureNodes).ArrayMax = 0;
  (this->TextureFactoryNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureFactoryNodes).ArrayNum = 0;
  (this->TextureFactoryNodes).ArrayMax = 0;
  return this;
}

// ~UInterchangeGenericTexturePipeline @ 14e76c2a0

void __thiscall
UInterchangeGenericTexturePipeline::~UInterchangeGenericTexturePipeline
          (UInterchangeGenericTexturePipeline *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeGenericTexturePipeline__6B_;
  pFVar1 = (this->TextureFactoryNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextureNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PipelineDisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  return;
}

// operator() @ 14e76ea00

void __thiscall
`UInterchangeGenericTexturePipeline::ExecutePipeline'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,UInterchangeBaseNode *param_2)

{
  longlong lVar1;
  code *pcVar2;
  EInterchangeNodeContainerType EVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  ForAnyElementType *pFVar7;
  UInterchangeBaseNode *local_18 [2];
  
  EVar3 = UInterchangeBaseNode::GetNodeContainerType(param_2);
  if ((EVar3 == TranslatedAsset) && (param_2 != (UInterchangeBaseNode *)0x0)) {
    pUVar6 = Z_Construct_UClass_UInterchangeTextureNode_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) {
      lVar1 = *(longlong *)this;
      pFVar7 = (ForAnyElementType *)(lVar1 + 0x170);
      local_18[0] = param_2;
      if (((pFVar7->Data <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar7->Data + (longlong)*(int *)(lVar1 + 0x17c) * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = *(int *)(lVar1 + 0x178);
      if (iVar5 == *(int *)(lVar1 + 0x17c)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar7,(int *)(lVar1 + 0x17c));
      }
      *(int *)(lVar1 + 0x178) = iVar5 + 1;
      *(UInterchangeBaseNode **)(pFVar7->Data + (longlong)iVar5 * 8) = local_18[0];
      return;
    }
  }
  return;
}

// AdjustSettingsForContext @ 14e780cd0

void __thiscall
UInterchangeGenericTexturePipeline::AdjustSettingsForContext
          (UInterchangeGenericTexturePipeline *this,FInterchangePipelineContextParams *param_1)

{
  EInterchangePipelineContext EVar1;
  
  FInterchangePipelineContextParams::operator=
            ((FInterchangePipelineContextParams *)&this->_padding_,param_1);
  TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
  ::operator=((TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
               *)&this->_padding_,
              (TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
               *)&this->_padding_);
  EVar1 = param_1->ContextType;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(bool *)&this->_padding_ = EVar1 == None;
  EVar1 = param_1->ContextType;
  if ((EVar1 == AssetReimport) ||
     (((EVar1 - SceneReimport & 0xf9) == 0 && (EVar1 != AssetCustomMorphTargetReImport)))) {
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  }
  return;
}

// CreateTextureFactoryNode @ 14e79cee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeTextureFactoryNode * __thiscall
UInterchangeGenericTexturePipeline::CreateTextureFactoryNode
          (UInterchangeGenericTexturePipeline *this,UInterchangeTextureNode *param_1,
          TSubclassOf<UInterchangeTextureFactoryNode> *param_2)

{
  int *piVar1;
  TArray<UInterchangeTextureFactoryNode_*,TSizedDefaultAllocator<32>_> *pTVar2;
  UInterchangeBaseNodeContainer *pUVar3;
  FScriptContainerElement *pFVar4;
  FAttributeStorage *pFVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FString *pFVar11;
  UInterchangeTextureFactoryNode *pUVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  char *pcVar15;
  FString *pFVar16;
  UInterchangeTextureFactoryNode *pUVar17;
  TAttributeHandle<unsigned_char,void> *pTVar18;
  EAttributeStorageResult EVar19;
  longlong *plVar20;
  atomic<unsigned_char> *paVar21;
  undefined1 auStackY_408 [32];
  bool local_3b8 [8];
  UInterchangeTextureFactoryNode *local_3b0;
  ETextureColorSpace local_3a8;
  bool local_3a7;
  uchar local_3a6;
  uchar local_3a5 [5];
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  undefined8 local_360;
  undefined8 local_358;
  FString local_350;
  FString local_340;
  FName local_330;
  FString local_328;
  FString local_318;
  FString local_308;
  TAttributeHandle<unsigned_char,void> local_2f8;
  TAttributeHandle<bool,void> local_2e0;
  TAttributeHandle<unsigned_char,void> local_2c8;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  void *local_250 [2];
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  void *local_200 [2];
  FString local_1f0;
  void *local_1e0 [2];
  FString local_1d0;
  void *local_1c0 [2];
  FString local_1b0;
  void *local_1a0 [2];
  FString local_190;
  void *local_180 [2];
  FString local_170;
  FString local_160;
  void *local_150 [2];
  FString local_140;
  TAttributeHandle<unsigned_char,void> local_130;
  TAttributeHandle<unsigned_char,void> local_118;
  FString local_100;
  FString local_f0;
  FString local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_408;
  UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_270);
  pFVar11 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1,&local_160);
  UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_340,pFVar11);
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  local_3b0 = (UInterchangeTextureFactoryNode *)0x0;
  bVar8 = UInterchangeBaseNodeContainer::IsNodeUidValid
                    ((this->BaseNodeContainer).field0_0x0.DebugPtr,&local_340);
  pUVar17 = (UInterchangeTextureFactoryNode *)0x0;
  if (bVar8) {
    pUVar12 = (UInterchangeTextureFactoryNode *)
              UInterchangeBaseNodeContainer::GetFactoryNode
                        ((this->BaseNodeContainer).field0_0x0.DebugPtr,&local_340);
    if (pUVar12 != (UInterchangeTextureFactoryNode *)0x0) {
      pUVar13 = Z_Construct_UClass_UInterchangeTextureFactoryNode_NoRegister();
      iVar10 = (int)pUVar13->_padding_;
      if ((iVar10 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
         (local_3b0 = pUVar12,
         (longlong *)
         *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
         &pUVar13->_padding_)) {
LAB_14e79d5d5:
        pFVar11 = (FString *)(**(code **)(param_1->_padding_ + 0x2b0))(param_1,local_1e0);
        ::FString::ConcatFC(&local_2a0,pFVar11,L".GetColorSpace");
        if (local_1e0[0] != (void *)0x0) {
          FMemory::Free(local_1e0[0]);
        }
        if ((param_1->_padding_ == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          pUVar17 = (UInterchangeTextureFactoryNode *)(*pcVar6)();
          return pUVar17;
        }
        pFVar5 = (FAttributeStorage *)param_1->_padding_;
        bVar8 = UE::Interchange::FAttributeStorage::ContainAttribute
                          (pFVar5,&param_1->Macro_CustomColorSpaceKey);
        if (bVar8) {
          pTVar18 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                              (pFVar5,&local_130,&param_1->Macro_CustomColorSpaceKey);
          UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
          TAttributeHandle<unsigned_char,void>(&local_2f8,&pTVar18->Key,pTVar18->AttributeStorage);
          if (local_130.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Key.Key.Data.AllocatorInstance.Data);
          }
          bVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                            (&local_2f8);
          if (bVar8) {
            EVar19 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                               (&local_2f8,&local_3a8);
            if ((EVar19 & Operation_Success) != None) {
              if (local_2f8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2f8.Key.Key.Data.AllocatorInstance.Data);
              }
              bVar8 = true;
              goto LAB_14e79d708;
            }
            ::FString::FString(&local_1d0,&(param_1->Macro_CustomColorSpaceKey).Key);
            pFVar11 = ::FString::FString(&local_100,&local_2a0);
            UE::Interchange::LogAttributeStorageErrors(EVar19,pFVar11,(FAttributeKey *)&local_1d0);
          }
          if (local_2f8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.Key.Key.Data.AllocatorInstance.Data);
          }
          bVar8 = false;
        }
        else {
          bVar8 = false;
        }
LAB_14e79d708:
        if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          UInterchangeTextureFactoryNode::SetCustomColorSpace(local_3b0,local_3a8,true);
        }
        bVar9 = UInterchangeTextureNode::GetCustomSRGB(param_1,local_3b8);
        if (((bVar9) &&
            (UInterchangeTextureFactoryNode::SetCustomSRGB(local_3b0,local_3b8,true),
            local_3b8[0] != false)) && (!bVar8)) {
          UInterchangeTextureFactoryNode::SetCustomColorSpace(local_3b0,TCS_sRGB,true);
        }
        pFVar11 = (FString *)(**(code **)(param_1->_padding_ + 0x2b0))(param_1,local_1c0);
        ::FString::ConcatFC(&local_290,pFVar11,L".GetbFlipGreenChannel");
        if (local_1c0[0] != (void *)0x0) {
          FMemory::Free(local_1c0[0]);
        }
        if ((param_1->_padding_ == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          pUVar17 = (UInterchangeTextureFactoryNode *)(*pcVar6)();
          return pUVar17;
        }
        pFVar5 = (FAttributeStorage *)param_1->_padding_;
        bVar8 = UE::Interchange::FAttributeStorage::ContainAttribute
                          (pFVar5,&param_1->Macro_CustombFlipGreenChannelKey);
        if (bVar8) {
          UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
                    (pFVar5,&local_2e0,&param_1->Macro_CustombFlipGreenChannelKey);
          bVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid
                            (&local_2e0);
          if (bVar8) {
            EVar19 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                               (&local_2e0,&local_3a7);
            if ((EVar19 & Operation_Success) != None) {
              if (local_2e0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2e0.Key.Key.Data.AllocatorInstance.Data);
              }
              bVar8 = true;
              goto LAB_14e79d871;
            }
            ::FString::FString(&local_1b0,&(param_1->Macro_CustombFlipGreenChannelKey).Key);
            pFVar11 = ::FString::FString(&local_f0,&local_290);
            UE::Interchange::LogAttributeStorageErrors(EVar19,pFVar11,(FAttributeKey *)&local_1b0);
          }
          if (local_2e0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e0.Key.Key.Data.AllocatorInstance.Data);
          }
          bVar8 = false;
        }
        else {
          bVar8 = false;
        }
LAB_14e79d871:
        if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_290.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          UInterchangeTextureFactoryNode::SetCustombFlipGreenChannel(local_3b0,&local_3a7,true);
        }
        pFVar11 = (FString *)(**(code **)(param_1->_padding_ + 0x2b0))(param_1,local_1a0);
        ::FString::ConcatFC(&local_280,pFVar11,L".GetFilter");
        if (local_1a0[0] != (void *)0x0) {
          FMemory::Free(local_1a0[0]);
        }
        if ((param_1->_padding_ == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          pUVar17 = (UInterchangeTextureFactoryNode *)(*pcVar6)();
          return pUVar17;
        }
        pFVar5 = (FAttributeStorage *)param_1->_padding_;
        bVar8 = UE::Interchange::FAttributeStorage::ContainAttribute
                          (pFVar5,&param_1->Macro_CustomFilterKey);
        if (bVar8) {
          pTVar18 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                              (pFVar5,&local_118,&param_1->Macro_CustomFilterKey);
          UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
          TAttributeHandle<unsigned_char,void>(&local_2c8,&pTVar18->Key,pTVar18->AttributeStorage);
          if (local_118.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Key.Key.Data.AllocatorInstance.Data);
          }
          bVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                            (&local_2c8);
          if (bVar8) {
            EVar19 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                               (&local_2c8,&local_3a6);
            if ((EVar19 & Operation_Success) != None) {
              if (local_2c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2c8.Key.Key.Data.AllocatorInstance.Data);
              }
              bVar8 = true;
              goto LAB_14e79d9ce;
            }
            ::FString::FString(&local_190,&(param_1->Macro_CustomFilterKey).Key);
            pFVar11 = ::FString::FString(&local_e0,&local_280);
            UE::Interchange::LogAttributeStorageErrors(EVar19,pFVar11,(FAttributeKey *)&local_190);
          }
          if (local_2c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c8.Key.Key.Data.AllocatorInstance.Data);
          }
          bVar8 = false;
        }
        else {
          bVar8 = false;
        }
LAB_14e79d9ce:
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
        }
        pUVar17 = local_3b0;
        if (bVar8) {
          local_3a5[0] = local_3a6;
          pFVar11 = (FString *)(**(code **)(local_3b0->_padding_ + 0x2b0))(local_3b0,local_180);
          ::FString::ConcatFC(&local_350,pFVar11,L".SetFilter");
          if (local_180[0] != (void *)0x0) {
            FMemory::Free(local_180[0]);
          }
          if ((pUVar17->_padding_ == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            pUVar17 = (UInterchangeTextureFactoryNode *)(*pcVar6)();
            return pUVar17;
          }
          EVar19 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                             ((FAttributeStorage *)pUVar17->_padding_,
                              &pUVar17->Macro_CustomFilterKey,local_3a5,None);
          if ((EVar19 & Operation_Success) == None) {
            ::FString::FString(&local_170,&(pUVar17->Macro_CustomFilterKey).Key);
            FVar7.Data = local_350.Data.AllocatorInstance.Data;
            local_3a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3a0.Data.ArrayNum = local_350.Data.ArrayNum;
            if (local_350.Data.ArrayNum == 0) {
              local_3a0.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_350.Data.ArrayNum,0,(ForAnyElementType *)&local_3a0,
                         local_350.Data.ArrayNum,&local_3a0.Data.ArrayMax);
              memcpy(local_3a0.Data.AllocatorInstance.Data,FVar7.Data,
                     (longlong)local_350.Data.ArrayNum * 2);
            }
            UE::Interchange::LogAttributeStorageErrors
                      (EVar19,&local_3a0,(FAttributeKey *)&local_170);
          }
          else {
            ::FName::FName(&local_330,L"Filter");
            UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                      ((TArrayAttributeHelper<FString> *)&pUVar17->_padding_,
                       &(pUVar17->Macro_CustomFilterKey).Key);
            pUVar13 = Z_Construct_UClass_UTexture_NoRegister();
            UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<unsigned_char>
                      ((UInterchangeFactoryBaseNode *)pUVar17,&(pUVar17->Macro_CustomFilterKey).Key,
                       pUVar13,local_330);
          }
          pUVar17 = local_3b0;
          if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_350.Data.AllocatorInstance.Data);
            pUVar17 = local_3b0;
          }
        }
        goto LAB_14e79db7f;
      }
    }
    local_3b0 = (UInterchangeTextureFactoryNode *)0x0;
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4696583451556445877>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericTexturePipeline.cpp"
                       ,0x14b,"TextureFactoryNode");
    if (bVar8) goto code_r0x00014e79db7e;
    goto LAB_14e79db7f;
  }
  pUVar13 = (param_2->Class).field0_0x0.DebugPtr;
  if ((pUVar13 == (UClass *)0x0) ||
     (pUVar14 = Z_Construct_UClass_UInterchangeTextureFactoryNode_NoRegister(),
     pUVar14 == (UClass *)0x0)) {
LAB_14e79db52:
    pcVar15 = "FactoryClass";
    iVar10 = 0x154;
    paVar21 = &bGEnsureHasExecuted<_4696583451556445868>;
  }
  else {
    iVar10 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar10) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar10 * 8) !=
        &pUVar14->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((!bVar8) || (pUVar13 = (param_2->Class).field0_0x0.DebugPtr, pUVar13 == (UClass *)0x0))
    goto LAB_14e79db52;
    pUVar3 = (this->BaseNodeContainer).field0_0x0.DebugPtr;
    local_358 = 0;
    local_360 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar14 = Z_Construct_UClass_UInterchangeTextureFactoryNode_NoRegister();
    CheckIsClassChildOf_Internal(pUVar14,pUVar13);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar13);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._16_4_ = 0;
    local_c8._20_4_ = 0;
    local_c8._24_4_ = RF_NoFlags;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = pUVar3;
    pUVar12 = (UInterchangeTextureFactoryNode *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar20 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar20 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    local_3b0 = pUVar12;
    if (pUVar12 != (UInterchangeTextureFactoryNode *)0x0) {
      pUVar3 = (this->BaseNodeContainer).field0_0x0.DebugPtr;
      pFVar11 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_260);
      pUVar17 = local_3b0;
      ::FString::FString(&local_2b0,L"");
      UInterchangeBaseNodeContainer::SetupNode
                (pUVar3,(UInterchangeBaseNode *)pUVar17,&local_340,&local_270,FactoryData,&local_2b0
                );
      if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
      }
      pFVar16 = (FString *)(**(code **)(pUVar17->_padding_ + 0x2b0))(pUVar17,local_150);
      ::FString::ConcatFC(&local_328,pFVar16,L".SetAssetName");
      if (local_150[0] != (void *)0x0) {
        FMemory::Free(local_150[0]);
      }
      if ((pUVar17->_padding_ == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pUVar17 = (UInterchangeTextureFactoryNode *)(*pcVar6)();
        return pUVar17;
      }
      EVar19 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                         ((FAttributeStorage *)pUVar17->_padding_,&pUVar17->AssetNameKey,pFVar11,
                          None);
      if ((EVar19 & Operation_Success) == None) {
        ::FString::FString(&local_140,&(pUVar17->AssetNameKey).Key);
        FVar7.Data = local_328.Data.AllocatorInstance.Data;
        local_390.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_390.Data.ArrayNum = local_328.Data.ArrayNum;
        if (local_328.Data.ArrayNum == 0) {
          local_390.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_328.Data.ArrayNum,0,(ForAnyElementType *)&local_390,
                     local_328.Data.ArrayNum,&local_390.Data.ArrayMax);
          memcpy(local_390.Data.AllocatorInstance.Data,FVar7.Data,
                 (longlong)local_328.Data.ArrayNum * 2);
        }
        UE::Interchange::LogAttributeStorageErrors(EVar19,&local_390,(FAttributeKey *)&local_140);
      }
      if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data.AllocatorInstance.Data);
      }
      if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data.AllocatorInstance.Data);
      }
      pFVar11 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1,&local_230);
      pUVar17 = local_3b0;
      pFVar16 = (FString *)(**(code **)(local_3b0->_padding_ + 0x2b0))(local_3b0,local_250);
      ::FString::ConcatFC(&local_318,pFVar16,L".SetTranslatedTextureNodeUid");
      if (local_250[0] != (void *)0x0) {
        FMemory::Free(local_250[0]);
      }
      if ((pUVar17->_padding_ == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pUVar17 = (UInterchangeTextureFactoryNode *)(*pcVar6)();
        return pUVar17;
      }
      EVar19 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                         ((FAttributeStorage *)pUVar17->_padding_,
                          &pUVar17->Macro_CustomTranslatedTextureNodeUidKey,pFVar11,None);
      if ((EVar19 & Operation_Success) == None) {
        ::FString::FString(&local_240,&(pUVar17->Macro_CustomTranslatedTextureNodeUidKey).Key);
        FVar7.Data = local_318.Data.AllocatorInstance.Data;
        local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_380.Data.ArrayNum = local_318.Data.ArrayNum;
        if (local_318.Data.ArrayNum == 0) {
          local_380.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_318.Data.ArrayNum,0,(ForAnyElementType *)&local_380,
                     local_318.Data.ArrayNum,&local_380.Data.ArrayMax);
          memcpy(local_380.Data.AllocatorInstance.Data,FVar7.Data,
                 (longlong)local_318.Data.ArrayNum * 2);
        }
        UE::Interchange::LogAttributeStorageErrors(EVar19,&local_380,(FAttributeKey *)&local_240);
      }
      if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data.AllocatorInstance.Data);
      }
      if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Data.AllocatorInstance.Data);
      }
      pTVar2 = &this->TextureFactoryNodes;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_3b0) &&
          ((FScriptContainerElement *)&local_3b0 <
           pFVar4 + (longlong)(this->TextureFactoryNodes).ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        pUVar17 = (UInterchangeTextureFactoryNode *)(*pcVar6)();
        return pUVar17;
      }
      iVar10 = (this->TextureFactoryNodes).ArrayNum;
      piVar1 = &(this->TextureFactoryNodes).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->TextureFactoryNodes).ArrayNum = iVar10 + 1;
      *(UInterchangeTextureFactoryNode **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8)
           = local_3b0;
      pFVar11 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1,&local_220);
      UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)local_3b0,pFVar11);
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
      pFVar11 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)local_3b0,&local_210);
      UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)param_1,pFVar11);
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
      pUVar17 = local_3b0;
      if (this->bAllowNonPowerOfTwo != false) {
        pFVar11 = (FString *)(**(code **)(local_3b0->_padding_ + 0x2b0))(local_3b0,local_200);
        ::FString::ConcatFC(&local_308,pFVar11,L".SetAllowNonPowerOfTwo");
        if (local_200[0] != (void *)0x0) {
          FMemory::Free(local_200[0]);
        }
        if ((pUVar17->_padding_ == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          pUVar17 = (UInterchangeTextureFactoryNode *)(*pcVar6)();
          return pUVar17;
        }
        EVar19 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                           ((FAttributeStorage *)pUVar17->_padding_,
                            &pUVar17->Macro_CustomAllowNonPowerOfTwoKey,&this->bAllowNonPowerOfTwo,
                            None);
        if ((EVar19 & Operation_Success) == None) {
          ::FString::FString(&local_1f0,&(pUVar17->Macro_CustomAllowNonPowerOfTwoKey).Key);
          FVar7.Data = local_308.Data.AllocatorInstance.Data;
          local_370.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_370.Data.ArrayNum = local_308.Data.ArrayNum;
          if (local_308.Data.ArrayNum == 0) {
            local_370.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_308.Data.ArrayNum,0,(ForAnyElementType *)&local_370,
                       local_308.Data.ArrayNum,&local_370.Data.ArrayMax);
            memcpy(local_370.Data.AllocatorInstance.Data,FVar7.Data,
                   (longlong)local_308.Data.ArrayNum * 2);
          }
          UE::Interchange::LogAttributeStorageErrors(EVar19,&local_370,(FAttributeKey *)&local_1f0);
        }
        if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14e79d5d5;
    }
    pcVar15 = "TextureFactoryNode";
    iVar10 = 0x15b;
    paVar21 = &bGEnsureHasExecuted<_4696583451556445861>;
  }
  bVar8 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar21,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericTexturePipeline.cpp"
                     ,iVar10,pcVar15);
  if (bVar8) {
code_r0x00014e79db7e:
    pcVar6 = (code *)swi(3);
    pUVar17 = (UInterchangeTextureFactoryNode *)(*pcVar6)();
    return pUVar17;
  }
LAB_14e79db7f:
  if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data.AllocatorInstance.Data);
  }
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  return pUVar17;
}

// ExecutePipeline @ 14e7a8080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInterchangeGenericTexturePipeline::ExecutePipeline
          (UInterchangeGenericTexturePipeline *this,UInterchangeBaseNodeContainer *param_1,
          TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  int *piVar1;
  TArray<UInterchangeSourceData_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  void *_Src;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  UInterchangeTextureFactoryNode *this_00;
  UInterchangeGenericTexturePipeline *pUVar10;
  ForAnyElementType FVar11;
  ForAnyElementType *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  uint local_res10 [2];
  undefined1 local_88 [8];
  undefined8 local_80;
  UInterchangeGenericTexturePipeline *local_78;
  ForAnyElementType local_70;
  int local_68;
  int iStack_64;
  FString local_60;
  ForAnyElementType local_50;
  undefined8 local_48;
  code *local_40;
  UInterchangeGenericTexturePipeline **local_38;
  
  local_res10[0] = 0;
  if (param_1 == (UInterchangeBaseNodeContainer *)0x0) {
    if (2 < (byte)LogInterchangePipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangePipeline);
      return;
    }
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->BaseNodeContainer).field0_0x0.DebugPtr = param_1;
    pTVar2 = &this->SourceDatas;
    uVar4 = param_2->ArrayNum;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    piVar1 = &(this->SourceDatas).ArrayMax;
    (this->SourceDatas).ArrayNum = 0;
    if (*piVar1 != uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,&pTVar2->AllocatorInstance,0,piVar1);
    }
    pFVar13 = (param_2->AllocatorInstance).Data;
    iVar14 = param_2->ArrayNum;
    pFVar3 = pFVar13 + (longlong)iVar14 * 8;
    while( true ) {
      if (param_2->ArrayNum != iVar14) {
        local_res10[0] = local_res10[0] & 0xffffff00;
        `TCheckedPointerIterator<UInterchangeSourceData_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar13 == pFVar3) break;
      local_80 = *(undefined8 *)pFVar13;
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_80) &&
          ((FScriptContainerElement *)&local_80 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (this->SourceDatas).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      pFVar13 = pFVar13 + 8;
      (this->SourceDatas).ArrayNum = iVar9 + 1;
      *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_80;
    }
    local_38 = &local_78;
    local_40 = UE::Core::Private::Function::
               TFunctionRefCaller<`UInterchangeGenericTexturePipeline::ExecutePipeline'::__l2::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
               ::Call;
    local_78 = this;
    UInterchangeBaseNodeContainer::IterateNodes
              ((this->BaseNodeContainer).field0_0x0.DebugPtr,
               (TFunctionRef<void___cdecl(FString_const_&,UInterchangeBaseNode_*)> *)&local_40);
    if (this->bImportTextures != false) {
      pFVar13 = (this->TextureNodes).AllocatorInstance.Data;
      FVar11.Data = (FScriptContainerElement *)0x0;
      iVar14 = (this->TextureNodes).ArrayNum;
      pFVar3 = pFVar13 + (longlong)iVar14 * 8;
      this_00 = (UInterchangeTextureFactoryNode *)FVar11.Data;
      while( true ) {
        if ((this->TextureNodes).ArrayNum != iVar14) {
          `TCheckedPointerIterator<UInterchangeTextureNode_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_88);
        }
        if (pFVar13 == pFVar3) break;
        this_00 = HandleCreationOfTextureFactoryNode(this,*(UInterchangeTextureNode **)pFVar13);
        pFVar13 = pFVar13 + 8;
      }
      pUVar10 = (UInterchangeGenericTexturePipeline *)
                UInterchangePipelineBase::GetMostPipelineOuter((UInterchangePipelineBase *)this);
      if (this == pUVar10) {
        iVar14 = (int)this->_padding_;
        _Src = (void *)this->_padding_;
        local_70.Data = (FScriptContainerElement *)0x0;
        local_68 = iVar14;
        if (iVar14 == 0) {
          iStack_64 = 0;
          pFVar12 = &local_70;
          bVar7 = true;
          bVar8 = false;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar14,0,&local_70,iVar14,&iStack_64);
          memcpy(local_70.Data,_Src,(longlong)iVar14 * 2);
          pFVar12 = &local_70;
          bVar7 = true;
          bVar8 = false;
          FVar11.Data = local_70.Data;
        }
      }
      else {
        local_48 = 0;
        pFVar12 = &local_50;
        bVar7 = false;
        bVar8 = true;
      }
      pFVar12->Data = (FScriptContainerElement *)0x0;
      local_60.Data.AllocatorInstance.Data = FVar11.Data;
      local_60.Data.ArrayNum = *(int *)&pFVar12[1].Data;
      local_60.Data.ArrayMax = *(int *)((longlong)&pFVar12[1].Data + 4);
      pFVar12[1].Data = (FScriptContainerElement *)0x0;
      if ((bVar8) && (local_50.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_50.Data);
      }
      if ((bVar7) &&
         ((UInterchangeTextureFactoryNode *)local_70.Data != (UInterchangeTextureFactoryNode *)0x0))
      {
        FMemory::Free(local_70.Data);
      }
      if ((local_60.Data.ArrayNum < 2) &&
         (pUVar10 = (UInterchangeGenericTexturePipeline *)
                    UInterchangePipelineBase::GetMostPipelineOuter((UInterchangePipelineBase *)this)
         , this == pUVar10)) {
        iVar9 = (this->AssetName).Data.ArrayNum;
        iVar14 = iVar9 + -1;
        if (iVar9 == 0) {
          iVar14 = 0;
        }
        ::FString::AssignRange
                  (&local_60,(wchar_t *)(this->AssetName).Data.AllocatorInstance.Data,iVar14);
      }
      if ((((this->TextureNodes).ArrayNum == 1) &&
          (pUVar10 = (UInterchangeGenericTexturePipeline *)
                     UInterchangePipelineBase::GetMostPipelineOuter
                               ((UInterchangePipelineBase *)this), this == pUVar10)) &&
         (1 < local_60.Data.ArrayNum)) {
        bVar8 = true;
      }
      else {
        bVar8 = false;
      }
      if ((this_00 != (UInterchangeTextureFactoryNode *)0x0) && (bVar8)) {
        (**(code **)(this_00->_padding_ + 0x2e0))(this_00,&local_60);
        UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)this_00,&local_60);
      }
      if ((UInterchangeTextureFactoryNode *)local_60.Data.AllocatorInstance.Data !=
          (UInterchangeTextureFactoryNode *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ExecutePostFactoryPipeline @ 14e7a9880

void __thiscall
UInterchangeGenericTexturePipeline::ExecutePostFactoryPipeline
          (UInterchangeGenericTexturePipeline *this,UInterchangeBaseNodeContainer *param_1,
          FString *param_2,UObject *param_3,bool param_4)

{
  UInterchangeBaseNodeContainer *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (UInterchangeBaseNodeContainer *)0x0) {
    this_00 = (this->BaseNodeContainer).field0_0x0.DebugPtr;
    if ((this_00 == (UInterchangeBaseNodeContainer *)0x0) || (this_00 != param_1)) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4696583451556445970>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericTexturePipeline.cpp"
                         ,0xee,"BaseNodeContainer == InBaseNodeContainer");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if (param_3 != (UObject *)0x0) {
      UInterchangeBaseNodeContainer::GetFactoryNode(this_00,param_2);
      return;
    }
  }
  return;
}

// GetPipelineCategory @ 14e7b9320

FString * __cdecl
UInterchangeGenericTexturePipeline::GetPipelineCategory
          (FString *__return_storage_ptr__,UClass *param_1)

{
  ::FString::FString(__return_storage_ptr__,L"Textures");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e7b9bc0

UClass * __cdecl UInterchangeGenericTexturePipeline::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericTexturePipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeGenericTexturePipeline,400,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericTexturePipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericTexturePipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline.InnerSingleton;
}

// HandleCreationOfTextureFactoryNode @ 14e7bc840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UInterchangeTextureFactoryNode * __thiscall
UInterchangeGenericTexturePipeline::HandleCreationOfTextureFactoryNode
          (UInterchangeGenericTexturePipeline *this,UInterchangeTextureNode *param_1)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  int iVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  TextureAddress TVar6;
  UClass *pUVar7;
  TObjectPtr<UClass>_u_0 TVar8;
  UInterchangeTextureFactoryNode *pUVar9;
  UClass *pUVar10;
  FString *pFVar11;
  EAttributeStorageResult EVar12;
  TAttributeHandle<unsigned_char,void> *pTVar13;
  undefined1 auStackY_2a8 [32];
  EInterchangeTextureWrapMode local_268;
  uchar local_267;
  EInterchangeTextureWrapMode local_266;
  uchar local_265 [5];
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  TObjectPtr<UClass>_u_0 local_220;
  FName local_218;
  FName local_210;
  TAttributeHandle<unsigned_char,void> local_208;
  TAttributeHandle<unsigned_char,void> local_1f0;
  FString local_1d8;
  FString local_1c8;
  void *local_1b8;
  int local_1ac;
  void *local_1a8 [2];
  FString local_198;
  void *local_188 [2];
  FString local_178;
  void *local_168 [2];
  FString local_158;
  void *local_148 [2];
  FString local_138;
  TAttributeHandle<unsigned_char,void> local_128;
  TAttributeHandle<unsigned_char,void> local_110;
  FString local_f8;
  FString local_e8;
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator> local_88
  ;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pUVar10 = (UClass *)param_1->_padding_;
  pUVar7 = Z_Construct_UClass_UInterchangeTexture2DNode_NoRegister();
  if (pUVar7 == pUVar10) {
    TVar8.DebugPtr = Z_Construct_UClass_UInterchangeTexture2DFactoryNode_NoRegister();
  }
  else {
    pUVar7 = Z_Construct_UClass_UInterchangeTextureCubeNode_NoRegister();
    if (pUVar7 == pUVar10) {
      TVar8.DebugPtr = Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_NoRegister();
    }
    else {
      pUVar7 = Z_Construct_UClass_UInterchangeTextureCubeArrayNode_NoRegister();
      if (pUVar7 == pUVar10) {
        TVar8.DebugPtr = Z_Construct_UClass_UInterchangeTextureCubeArrayFactoryNode_NoRegister();
      }
      else {
        pUVar7 = Z_Construct_UClass_UInterchangeTexture2DArrayNode_NoRegister();
        if (pUVar7 == pUVar10) {
          TVar8.DebugPtr = Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_NoRegister();
        }
        else {
          pUVar7 = Z_Construct_UClass_UInterchangeTextureLightProfileNode_NoRegister();
          if (pUVar7 == pUVar10) {
            TVar8.DebugPtr =
                 Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode_NoRegister();
          }
          else {
            pUVar7 = Z_Construct_UClass_UInterchangeVolumeTextureNode_NoRegister();
            if (pUVar7 == pUVar10) {
              TVar8.DebugPtr = Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_NoRegister();
            }
            else {
              pUVar7 = Z_Construct_UClass_UInterchangeTextureBlurNode_NoRegister();
              if (pUVar7 == pUVar10) {
                TVar8.DebugPtr = Z_Construct_UClass_UInterchangeTexture2DFactoryNode_NoRegister();
              }
              else {
                TVar8.DebugPtr = (UClass *)0x0;
              }
            }
          }
        }
      }
    }
  }
  (**(code **)(param_1->_padding_ + 0x2f8))(param_1,&local_1b8);
  local_220 = TVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar8.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
  }
  pUVar9 = CreateTextureFactoryNode
                     (this,param_1,
                      (TSubclassOf<UInterchangeTextureFactoryNode> *)&local_220.ObjectPtr);
  pUVar10 = Z_Construct_UClass_UInterchangeTexture2DFactoryNode_NoRegister();
  if ((TVar8.DebugPtr != pUVar10) || (pUVar9 == (UInterchangeTextureFactoryNode *)0x0))
  goto LAB_14e7bd05a;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  pUVar10 = Z_Construct_UClass_UInterchangeTexture2DNode_NoRegister();
  iVar3 = (int)pUVar10->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
      != &pUVar10->_padding_)) {
    param_1 = (UInterchangeTextureNode *)0x0;
  }
  if (param_1 != (UInterchangeTextureNode *)0x0) {
    UE::Interchange::TMapAttributeHelper<int,FString>::ToMap
              ((TMapAttributeHelper<int,FString> *)(param_1 + 1),
               (TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *
               )&local_88);
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Move<TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)local_d8,&local_88);
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
    pFVar11 = (FString *)(**(code **)(param_1->_padding_ + 0x2b0))(param_1,local_1a8);
    ::FString::ConcatFC(&local_1d8,pFVar11,L".GetWrapU");
    if (local_1a8[0] != (void *)0x0) {
      FMemory::Free(local_1a8[0]);
    }
    if ((param_1->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pUVar9 = (UInterchangeTextureFactoryNode *)(*pcVar2)();
      return pUVar9;
    }
    pFVar1 = (FAttributeStorage *)param_1->_padding_;
    bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (pFVar1,(FAttributeKey *)
                              &param_1[1].Macro_CustombFlipGreenChannelKey.Key.Data.ArrayNum);
    if (bVar5) {
      pTVar13 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                          (pFVar1,&local_128,
                           (FAttributeKey *)
                           &param_1[1].Macro_CustombFlipGreenChannelKey.Key.Data.ArrayNum);
      UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
      TAttributeHandle<unsigned_char,void>(&local_208,&pTVar13->Key,pTVar13->AttributeStorage);
      if (local_128.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Key.Key.Data.AllocatorInstance.Data);
      }
      bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                        (&local_208);
      if (bVar5) {
        EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                           (&local_208,&local_268);
        if ((EVar12 & Operation_Success) != None) {
          if (local_208.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.Key.Key.Data.AllocatorInstance.Data);
          }
          bVar5 = true;
          goto LAB_14e7bcb4c;
        }
        ::FString::FString(&local_198,
                           (FString *)&param_1[1].Macro_CustombFlipGreenChannelKey.Key.Data.ArrayNum
                          );
        pFVar11 = ::FString::FString(&local_f8,&local_1d8);
        UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar11,(FAttributeKey *)&local_198);
      }
      if (local_208.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Key.Key.Data.AllocatorInstance.Data);
      }
      bVar5 = false;
    }
    else {
      bVar5 = false;
    }
LAB_14e7bcb4c:
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      TVar6 = UE::Interchange::Private::ConvertWrap(local_268);
      pFVar11 = (FString *)(**(code **)(pUVar9->_padding_ + 0x2b0))(pUVar9,local_188);
      ::FString::ConcatFC(&local_240,pFVar11,L".SetAddressX");
      if (local_188[0] != (void *)0x0) {
        FMemory::Free(local_188[0]);
      }
      if ((pUVar9->_padding_ == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pUVar9 = (UInterchangeTextureFactoryNode *)(*pcVar2)();
        return pUVar9;
      }
      local_267 = (uchar)TVar6;
      EVar12 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                         ((FAttributeStorage *)pUVar9->_padding_,(FAttributeKey *)(pUVar9 + 1),
                          &local_267,None);
      if ((EVar12 & Operation_Success) == None) {
        ::FString::FString(&local_178,(FString *)(pUVar9 + 1));
        FVar4.Data = local_240.Data.AllocatorInstance.Data;
        local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_260.Data.ArrayNum = local_240.Data.ArrayNum;
        if (local_240.Data.ArrayNum == 0) {
          local_260.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_240.Data.ArrayNum,0,(ForAnyElementType *)&local_260,
                     local_240.Data.ArrayNum,&local_260.Data.ArrayMax);
          memcpy(local_260.Data.AllocatorInstance.Data,FVar4.Data,
                 (longlong)local_240.Data.ArrayNum * 2);
        }
        UE::Interchange::LogAttributeStorageErrors(EVar12,&local_260,(FAttributeKey *)&local_178);
      }
      else {
        ::FName::FName(&local_218,L"AddressX");
        UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                  ((TArrayAttributeHelper<FString> *)&pUVar9->_padding_,(FString *)(pUVar9 + 1));
        pUVar10 = Z_Construct_UClass_UTexture2D_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>
                  ((UInterchangeFactoryBaseNode *)pUVar9,(FString *)(pUVar9 + 1),pUVar10,local_218);
      }
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
    }
    pFVar11 = (FString *)(**(code **)(param_1->_padding_ + 0x2b0))(param_1,local_168);
    ::FString::ConcatFC(&local_1c8,pFVar11,L".GetWrapV");
    if (local_168[0] != (void *)0x0) {
      FMemory::Free(local_168[0]);
    }
    if ((param_1->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pUVar9 = (UInterchangeTextureFactoryNode *)(*pcVar2)();
      return pUVar9;
    }
    pFVar1 = (FAttributeStorage *)param_1->_padding_;
    bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (pFVar1,(FAttributeKey *)&param_1[1].Macro_CustomFilterKey.Key.Data.ArrayNum);
    if (bVar5) {
      pTVar13 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                          (pFVar1,&local_110,
                           (FAttributeKey *)&param_1[1].Macro_CustomFilterKey.Key.Data.ArrayNum);
      UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
      TAttributeHandle<unsigned_char,void>(&local_1f0,&pTVar13->Key,pTVar13->AttributeStorage);
      if (local_110.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Key.Key.Data.AllocatorInstance.Data);
      }
      bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                        (&local_1f0);
      if (bVar5) {
        EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                           (&local_1f0,&local_266);
        if ((EVar12 & Operation_Success) != None) {
          if (local_1f0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f0.Key.Key.Data.AllocatorInstance.Data);
          }
          bVar5 = true;
          goto LAB_14e7bcdf8;
        }
        ::FString::FString(&local_158,(FString *)&param_1[1].Macro_CustomFilterKey.Key.Data.ArrayNum
                          );
        pFVar11 = ::FString::FString(&local_e8,&local_1c8);
        UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar11,(FAttributeKey *)&local_158);
      }
      if (local_1f0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Key.Key.Data.AllocatorInstance.Data);
      }
      bVar5 = false;
    }
    else {
      bVar5 = false;
    }
LAB_14e7bcdf8:
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      TVar6 = UE::Interchange::Private::ConvertWrap(local_266);
      pFVar11 = (FString *)(**(code **)(pUVar9->_padding_ + 0x2b0))(pUVar9,local_148);
      ::FString::ConcatFC(&local_230,pFVar11,L".SetAddressY");
      if (local_148[0] != (void *)0x0) {
        FMemory::Free(local_148[0]);
      }
      if ((pUVar9->_padding_ == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pUVar9 = (UInterchangeTextureFactoryNode *)(*pcVar2)();
        return pUVar9;
      }
      local_265[0] = (uchar)TVar6;
      EVar12 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                         ((FAttributeStorage *)pUVar9->_padding_,
                          (FAttributeKey *)&pUVar9[1]._padding_,local_265,None);
      if ((EVar12 & Operation_Success) == None) {
        ::FString::FString(&local_138,(FString *)&pUVar9[1]._padding_);
        FVar4.Data = local_230.Data.AllocatorInstance.Data;
        local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_250.Data.ArrayNum = local_230.Data.ArrayNum;
        if (local_230.Data.ArrayNum == 0) {
          local_250.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_230.Data.ArrayNum,0,(ForAnyElementType *)&local_250,
                     local_230.Data.ArrayNum,&local_250.Data.ArrayMax);
          memcpy(local_250.Data.AllocatorInstance.Data,FVar4.Data,
                 (longlong)local_230.Data.ArrayNum * 2);
        }
        UE::Interchange::LogAttributeStorageErrors(EVar12,&local_250,(FAttributeKey *)&local_138);
      }
      else {
        ::FName::FName(&local_210,L"AddressY");
        UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                  ((TArrayAttributeHelper<FString> *)&pUVar9->_padding_,
                   (FString *)&pUVar9[1]._padding_);
        pUVar10 = Z_Construct_UClass_UTexture2D_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>
                  ((UInterchangeFactoryBaseNode *)pUVar9,(FString *)&pUVar9[1]._padding_,pUVar10,
                   local_210);
      }
      if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_d8._8_4_ != local_a4) {
    UE::Interchange::TMapAttributeHelper<int,FString>::operator=
              ((TMapAttributeHelper<int,FString> *)&pUVar9[1]._padding_,
               (TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *
               )local_d8);
  }
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_d8,0,local_d8._8_4_);
  iVar3 = SUB84(local_d8._8_8_,4);
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_b0 = 0;
  if (0x80 < local_ac) {
    local_ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
LAB_14e7bd05a:
  if ((local_1ac != -1) && (local_1b8 != (void *)0x0)) {
    FMemory::Free(local_1b8);
  }
  return pUVar9;
}

// PostImportTextureAssetImport @ 14e7d3940

void __thiscall
UInterchangeGenericTexturePipeline::PostImportTextureAssetImport
          (UInterchangeGenericTexturePipeline *this,UObject *param_1,bool param_2)

{
  return;
}

// StaticRegisterNativesUInterchangeGenericTexturePipeline @ 14e7e46a0

void __cdecl
UInterchangeGenericTexturePipeline::StaticRegisterNativesUInterchangeGenericTexturePipeline(void)

{
  return;
}

