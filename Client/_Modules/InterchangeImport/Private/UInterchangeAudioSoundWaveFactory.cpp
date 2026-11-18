// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 22

// StaticClass @ 14e673c60

UClass * __cdecl UInterchangeAudioSoundWaveFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioSoundWaveFactory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioSoundWaveFactory",
               &Z_Registration_Info_UClass_UInterchangeAudioSoundWaveFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioSoundWaveFactory,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioSoundWaveFactory>,
               InternalVTableHelperCtorCaller<UInterchangeAudioSoundWaveFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioSoundWaveFactory.InnerSingleton;
}

// UInterchangeAudioSoundWaveFactory @ 14e690540

UInterchangeAudioSoundWaveFactory * __thiscall
UInterchangeAudioSoundWaveFactory::UInterchangeAudioSoundWaveFactory
          (UInterchangeAudioSoundWaveFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeAudioSoundWaveFactory__6B_;
  (this->ComponentsToRestart).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentsToRestart).ArrayNum = 0;
  (this->ComponentsToRestart).ArrayMax = 0;
  return this;
}

// UInterchangeAudioSoundWaveFactory @ 14e690580

UInterchangeAudioSoundWaveFactory * __thiscall
UInterchangeAudioSoundWaveFactory::UInterchangeAudioSoundWaveFactory
          (UInterchangeAudioSoundWaveFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeAudioSoundWaveFactory__6B_;
  (this->ComponentsToRestart).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentsToRestart).ArrayNum = 0;
  (this->ComponentsToRestart).ArrayMax = 0;
  return this;
}

// ~UInterchangeAudioSoundWaveFactory @ 14e691e30

void __thiscall
UInterchangeAudioSoundWaveFactory::~UInterchangeAudioSoundWaveFactory
          (UInterchangeAudioSoundWaveFactory *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeAudioSoundWaveFactory__6B_;
  pFVar1 = (this->ComponentsToRestart).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// BackupSourceData @ 14e6979b0

void __thiscall
UInterchangeAudioSoundWaveFactory::BackupSourceData
          (UInterchangeAudioSoundWaveFactory *this,UObject *param_1)

{
  return;
}

// BeginImportAsset_GameThread @ 14e697a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeAudioSoundWaveFactory::BeginImportAsset_GameThread
          (UInterchangeAudioSoundWaveFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  FName FVar1;
  ITextData *pIVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  UClass *pUVar10;
  USoundWave *this_00;
  FImportAssetResult *pFVar11;
  FString *pFVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  FAudioDeviceManager *this_01;
  uchar *puVar16;
  FName *pFVar17;
  UClass *pUVar18;
  longlong *plVar19;
  wchar_t *pwVar20;
  FScriptContainerElement *pFVar21;
  bool bVar22;
  undefined1 auStackY_318 [32];
  undefined1 local_2d8 [8];
  FImportAssetResult *local_2d0;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_2c8;
  FName local_2b8;
  TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> local_2b0;
  FSoftObjectPath local_2a0;
  undefined8 local_280;
  FName local_278;
  FTextFormat local_270;
  FText local_260;
  FString local_250;
  FText local_240;
  FText local_230;
  FString local_220;
  FText local_210;
  FFormatArgumentValue local_1f8;
  undefined4 local_1d8;
  FText local_1c8;
  FName local_1b8;
  FText local_1b0;
  FString local_1a0;
  FText local_190;
  FText local_180;
  FString local_170;
  FText local_160;
  FText local_150;
  FTextFormat local_140;
  FText local_130;
  FTextFormat local_120;
  FText local_110;
  FTextFormat local_100;
  FText local_f0;
  FTextFormat local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  bVar22 = -1 < CpuChannel->Enabled;
  local_2d0 = __return_storage_ptr__;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId27,
               "UInterchangeAudioSoundWaveFactory::BeginImportAsset_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Audio\\InterchangeAudioSoundWaveFactory.cpp"
               ,0x1b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId27);
  }
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  if (param_1->AssetNode == (UInterchangeFactoryBaseNode *)0x0) goto LAB_14e6981c1;
  lVar8 = (**(code **)(param_1->AssetNode->_padding_ + 0x2f8))();
  lVar9 = (**(code **)(this->_padding_ + 0x2b0))(this);
  if (lVar9 == 0) goto LAB_14e6981c1;
  if ((*(int *)(lVar8 + 0x38) < *(int *)(lVar9 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
      lVar9 + 0x30)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) goto LAB_14e6981c1;
  FVar1 = (FName)param_1->AssetNode;
  local_2b8 = FVar1;
  if (FVar1 == (FName)0x0) {
LAB_14e698109:
    lVar8 = (**(code **)(param_1->AssetNode->_padding_ + 0x2f8))();
    local_278 = *(FName *)(lVar8 + 0x18);
    ::FName::ToString(&local_278,&local_220);
    pFVar13 = FText::FromString(&local_f0,&local_220);
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_160,L"InterchangeAudioSoundWaveFactory",
                         L"InterchangeAudioSoundWaveFactory_ImportSoundWave_FactoryNodeFailedCast",
                         L"Failed to cast AssetNode to UInterchangeAudioSoundWaveFactoryNode. AssetNode class: `{0}`"
                        );
    pFVar15 = FTextFormat::FTextFormat(&local_e0,pFVar14,Default);
    FText::Format<FText>(&local_210,pFVar15,pFVar13);
    if (local_160.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
    }
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
    LogError(this,param_1,__return_storage_ptr__,&local_210);
    local_260.TextData.Reference = local_210.TextData.Reference;
  }
  else {
    pUVar10 = Z_Construct_UClass_UInterchangeAudioSoundWaveFactoryNode_NoRegister();
    iVar7 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar1 + 0x10) + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar1 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar10->_padding_)) goto LAB_14e698109;
    this_00 = (USoundWave *)param_1->ReimportObject;
    if (this_00 == (USoundWave *)0x0) {
      local_2a0.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_2a0.AssetPath.PackageName.Number = 0;
      local_2a0.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_2a0.AssetPath.AssetName.Number = 0;
      local_2a0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a0.SubPathString.Data.ArrayNum = 0;
      local_2a0.SubPathString.Data.ArrayMax = 0;
      bVar6 = UInterchangeFactoryBaseNode::GetCustomReferenceObject
                        ((UInterchangeFactoryBaseNode *)FVar1,&local_2a0);
      if (bVar6) {
        this_00 = (USoundWave *)FSoftObjectPath::TryLoad(&local_2a0,(FUObjectSerializeContext *)0x0)
        ;
      }
      if (local_2a0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.SubPathString.Data.AllocatorInstance.Data);
      }
    }
    iVar7 = UInterchangeBaseNode::GetTargetNodeCount((UInterchangeBaseNode *)FVar1);
    if (iVar7 == 1) {
      if (this_00 == (USoundWave *)0x0) {
        if ((param_1->AssetName).Data.ArrayNum == 0) {
          pwVar20 = L"";
        }
        else {
          pwVar20 = (wchar_t *)(param_1->AssetName).Data.AllocatorInstance.Data;
        }
        pFVar17 = ::FName::FName(&local_1b8,pwVar20);
        FVar1 = *pFVar17;
        pUVar10 = (UClass *)(**(code **)(this->_padding_ + 0x2b0))(this);
        pUVar4 = param_1->Parent;
        local_2d0 = (FImportAssetResult *)0x0;
        if (FVar1 == (FName)0x0) {
          FObjectInitializer::AssertIfInConstructor
                    (pUVar4,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
        }
        pUVar18 = Z_Construct_UClass_USoundWave_NoRegister();
        CheckIsClassChildOf_Internal(pUVar18,pUVar10);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_c8,pUVar10);
        local_c8._40_8_ = (UObject *)0x0;
        local_c8[0x20] = false;
        local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_c8._56_8_ = (UPackage *)0x0;
        local_c8._24_4_ = RF_Standalone|RF_Public;
        local_c8._8_8_ = pUVar4;
        local_c8._16_8_ = FVar1;
        this_00 = (USoundWave *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
        if (local_c8._64_8_ != 0) {
          plVar19 = (longlong *)(local_c8 + 0x50);
          if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
            plVar19 = (longlong *)local_c8._104_8_;
          }
          (**(code **)(*plVar19 + 0x10))();
        }
        if (this_00 != (USoundWave *)0x0) goto LAB_14e697edb;
        pFVar12 = UInterchangeBaseNode::GetDisplayLabel
                            ((UInterchangeBaseNode *)local_2b8,&local_170);
        pFVar13 = FText::FromString(&local_110,pFVar12);
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_180,L"InterchangeAudioSoundWaveFactory",
                             L"InterchangeAudioSoundWaveFactory_ImportSoundWave_CouldNotCreateSoundWaveAsset"
                             ,L"Could not create SoundWave asset for factory node `{0}`");
        pFVar15 = FTextFormat::FTextFormat(&local_100,pFVar14,Default);
        FText::Format<FText>(&local_230,pFVar15,pFVar13);
        if (local_180.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
        }
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        LogError(this,param_1,__return_storage_ptr__,&local_230);
        local_260.TextData.Reference = local_230.TextData.Reference;
      }
      else {
        pUVar10 = Z_Construct_UClass_USoundWave_NoRegister();
        iVar7 = (int)pUVar10->_padding_;
        if ((iVar7 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar10->_padding_)) {
          this_01 = UEngine::GetAudioDeviceManager(GEngine);
          if (this_01 != (FAudioDeviceManager *)0x0) {
            local_2b0.ArrayNum = (this->ComponentsToRestart).ArrayNum;
            lVar8 = (longlong)local_2b0.ArrayNum;
            pFVar3 = (this->ComponentsToRestart).AllocatorInstance.Data;
            local_2b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_2b0.ArrayNum == 0) {
              local_2b0.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,local_2b0.ArrayNum,0,&local_2b0.AllocatorInstance,local_2b0.ArrayNum,
                         &local_2b0.ArrayMax);
              memcpy(local_2b0.AllocatorInstance.Data,pFVar3,lVar8 << 3);
            }
            FAudioDeviceManager::StopSoundsUsingResource(this_01,this_00,&local_2b0);
            puVar16 = USoundWave::GetResourceData(this_00);
            if (puVar16 == (uchar *)0x0) {
              USoundWave::GetRuntimeFormat(this_00);
              (**(code **)(this_00->_padding_ + 0x3d8))(this_00,local_280);
            }
            if (0 < (this->ComponentsToRestart).ArrayNum) {
              pFVar21 = (this->ComponentsToRestart).AllocatorInstance.Data;
              iVar7 = (this->ComponentsToRestart).ArrayNum;
              pFVar3 = pFVar21 + (longlong)iVar7 * 8;
              while( true ) {
                if ((this->ComponentsToRestart).ArrayNum != iVar7) {
                  `TCheckedPointerIterator<TObjectPtr<UAudioComponent>,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_2d8);
                }
                __return_storage_ptr__ = local_2d0;
                if (pFVar21 == pFVar3) break;
                (**(code **)(**(longlong **)pFVar21 + 0x668))();
                pFVar21 = pFVar21 + 8;
              }
            }
            if (local_2b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2b0.AllocatorInstance.Data);
            }
          }
LAB_14e697edb:
          __return_storage_ptr__->ImportedObject = (UObject *)this_00;
          goto LAB_14e6981c1;
        }
        local_2b8 = (FName)this_00->_padding_;
        ::FName::ToString(&local_2b8,&local_250);
        pFVar13 = FText::FromString(&local_130,&local_250);
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_190,L"InterchangeAudioSoundWaveFactory",
                             L"InterchangeAudioSoundWaveFactory_ImportSoundWave_InvalidExistingAsset"
                             ,L"Existing asset `{0}` must be a USoundWave asset.");
        pFVar15 = FTextFormat::FTextFormat(&local_120,pFVar14,Default);
        FText::Format<FText>(&local_240,pFVar15,pFVar13);
        if (local_190.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
        }
        if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_250.Data.AllocatorInstance.Data);
        }
        LogError(this,param_1,__return_storage_ptr__,&local_240);
        local_260.TextData.Reference = local_240.TextData.Reference;
      }
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<838535387507851319>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Audio\\InterchangeAudioSoundWaveFactory.cpp"
                         ,0x37,"SoundWaveFactoryNode->GetTargetNodeCount() == 1");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FImportAssetResult *)(*pcVar5)();
        return pFVar11;
      }
      pFVar12 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)FVar1,&local_1a0);
      pFVar13 = FText::FromString(&local_150,pFVar12);
      iVar7 = UInterchangeBaseNode::GetTargetNodeCount((UInterchangeBaseNode *)FVar1);
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_1b0,L"InterchangeAudioSoundWaveFactory",
                           L"InterchangeAudioSoundWaveFactory_ImportSoundWave_UnexpectedNumTargets",
                           L"Expected one target node, but found {0} target nodes associated with SoundWave factory node `{1}`"
                          );
      pFVar15 = FTextFormat::FTextFormat(&local_140,pFVar14,Default);
      local_1d8 = 4;
      local_1f8.Type = Int;
      local_1f8.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(ITextData *)0x0;
      local_1f8.TextValue.field0_0x0.TypedValue.Flags = 0;
      local_1f8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar7;
      FText::FText(&local_1c8,pFVar13);
      if ((local_1c8.TextData.Reference == (ITextData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FImportAssetResult *)(*pcVar5)();
        return pFVar11;
      }
      local_2c8.ArrayNum = 2;
      local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_2c8.AllocatorInstance,2,&local_2c8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_2c8.AllocatorInstance.Data,&local_1f8,2);
      local_270.TextFormatData.Object = (pFVar15->TextFormatData).Object;
      local_270.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar15->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_270.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_270.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_270.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_260,&local_270,&local_2c8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_2c8.AllocatorInstance.Data,local_2c8.ArrayNum);
      if ((FFormatArgumentValue *)local_2c8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_2c8.AllocatorInstance.Data);
      }
      if (local_1c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
      }
      if (local_1f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_1f8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar15->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar2 = (pFVar13->TextData).Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      if (local_1b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
      }
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
      LogError(this,param_1,__return_storage_ptr__,&local_260);
    }
  }
  if (local_260.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_260.TextData.Reference + 0x10))();
  }
LAB_14e6981c1:
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ClearBackupSourceData @ 14e698550

void __thiscall
UInterchangeAudioSoundWaveFactory::ClearBackupSourceData
          (UInterchangeAudioSoundWaveFactory *this,UObject *param_1)

{
  return;
}

// EndImportAsset_GameThread @ 14e69b0b0

FImportAssetResult * __thiscall
UInterchangeAudioSoundWaveFactory::EndImportAsset_GameThread
          (UInterchangeAudioSoundWaveFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  USoundWave *this_00;
  UClass *pUVar5;
  FSoftObjectPath local_28;
  
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  if (param_1->AssetNode != (UInterchangeFactoryBaseNode *)0x0) {
    lVar3 = (**(code **)(param_1->AssetNode->_padding_ + 0x2f8))();
    lVar4 = (**(code **)(this->_padding_ + 0x2b0))(this);
    if (lVar4 != 0) {
      if ((*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_28.AssetPath.PackageName.Number = 0;
        local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_28.AssetPath.AssetName.Number = 0;
        local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.SubPathString.Data.ArrayNum = 0;
        local_28.SubPathString.Data.ArrayMax = 0;
        bVar2 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(param_1->AssetNode,&local_28);
        if ((bVar2) &&
           (this_00 = (USoundWave *)
                      FSoftObjectPath::TryLoad(&local_28,(FUObjectSerializeContext *)0x0),
           this_00 != (USoundWave *)0x0)) {
          pUVar5 = Z_Construct_UClass_USoundWave_NoRegister();
          iVar1 = (int)pUVar5->_padding_;
          if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar5->_padding_)) {
            USoundWave::InvalidateCompressedData(this_00,true,true);
            bVar2 = USoundWave::IsStreaming(this_00,(wchar_t *)0x0);
            if (bVar2) {
              USoundWave::LoadZerothChunk(this_00);
            }
            __return_storage_ptr__->ImportedObject = (UObject *)this_00;
          }
        }
        if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// FinalizeObject_GameThread @ 14e69b2d0

void __thiscall
UInterchangeAudioSoundWaveFactory::FinalizeObject_GameThread
          (UInterchangeAudioSoundWaveFactory *this,FSetupObjectParams *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 local_res10 [8];
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId282,
               "UInterchangeAudioSoundWaveFactory::FinalizeObject_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Audio\\InterchangeAudioSoundWaveFactory.cpp"
               ,0x11a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId282);
  }
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Audio\\InterchangeAudioSoundWaveFactory.cpp"
                         ,0x11c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1->ImportedObject != (UObject *)0x0) && (param_1->bIsReimport != false)) {
    pFVar5 = (this->ComponentsToRestart).AllocatorInstance.Data;
    iVar2 = (this->ComponentsToRestart).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ComponentsToRestart).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UAudioComponent>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar5 == pFVar1) break;
      (**(code **)(**(longlong **)pFVar5 + 0x650))(*(longlong **)pFVar5,0);
      pFVar5 = pFVar5 + 8;
    }
  }
  if (!bVar6) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// GetFactoryAssetType @ 14e69e420

EInterchangeFactoryAssetType __thiscall
UInterchangeAudioSoundWaveFactory::GetFactoryAssetType(UInterchangeAudioSoundWaveFactory *this)

{
  return Sounds;
}

// GetFactoryClass @ 14e69e450

UClass * __thiscall
UInterchangeAudioSoundWaveFactory::GetFactoryClass(UInterchangeAudioSoundWaveFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundWave.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundWave",&Z_Registration_Info_UClass_USoundWave.InnerSingleton,
               USoundWave::StaticRegisterNativesUSoundWave,0x408,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundWave>,
               InternalVTableHelperCtorCaller<USoundWave>,aFStackX_8,USoundBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundWave.InnerSingleton;
}

// GetPrivateStaticClass @ 14e69fe80

UClass * __cdecl UInterchangeAudioSoundWaveFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioSoundWaveFactory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioSoundWaveFactory",
               &Z_Registration_Info_UClass_UInterchangeAudioSoundWaveFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeAudioSoundWaveFactory,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioSoundWaveFactory>,
               InternalVTableHelperCtorCaller<UInterchangeAudioSoundWaveFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioSoundWaveFactory.InnerSingleton;
}

// GetSourceFilenames @ 14e6a13b0

bool __thiscall
UInterchangeAudioSoundWaveFactory::GetSourceFilenames
          (UInterchangeAudioSoundWaveFactory *this,UObject *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// ImportAsset_Async @ 14e6a2b50

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeAudioSoundWaveFactory::ImportAsset_Async
          (UInterchangeAudioSoundWaveFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UInterchangeFactoryBaseNode *this_00;
  UInterchangeBaseNodeContainer *this_01;
  UInterchangeTranslatorBase *this_02;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  UClass *pUVar7;
  USoundWave *this_03;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  FImportAssetResult *pFVar11;
  UInterchangeBaseNode *this_04;
  FString *pFVar12;
  longlong *plVar13;
  undefined8 uVar14;
  USoundWave *local_res10;
  FName local_res18;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2c8;
  TOptional<FString>_u_0 local_2b8;
  FText local_2a8;
  FText local_298;
  FText local_288;
  FText local_278;
  FText local_268;
  FString local_258;
  FText local_248;
  FText local_238;
  FText local_228;
  FText local_218;
  FString local_208;
  FText local_1f8;
  FText local_1e8;
  FText local_1d8;
  FText local_1c8;
  FString local_1b8;
  FText local_1a8;
  FText local_198;
  FInterchangeAudioPayloadData local_188;
  char local_d0;
  FText local_c8;
  FTextFormat local_b8;
  FText local_a8;
  FTextFormat local_98;
  FText local_88;
  FTextFormat local_78;
  FText local_68;
  FTextFormat local_58;
  FText local_48;
  FTextFormat local_38;
  
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  if (param_1->AssetNode == (UInterchangeFactoryBaseNode *)0x0) {
    return __return_storage_ptr__;
  }
  lVar5 = (**(code **)(param_1->AssetNode->_padding_ + 0x2f8))();
  lVar6 = (**(code **)(this->_padding_ + 0x2b0))(this);
  if (lVar6 == 0) {
    return __return_storage_ptr__;
  }
  if ((*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return __return_storage_ptr__;
  }
  pUVar2 = param_1->Parent;
  pUVar7 = (UClass *)(**(code **)(this->_padding_ + 0x2b0))(this);
  this_03 = (USoundWave *)
            UE::Interchange::FFactoryCommon::AsyncFindObject
                      (param_1->AssetNode,pUVar7,pUVar2,&param_1->AssetName);
  if (this_03 == (USoundWave *)0x0) {
    pFVar8 = FText::FromString(&local_c8,&param_1->AssetName);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_228,L"InterchangeAudioSoundWaveFactory",
                        L"UInterchangeAudioSoundWaveFactory_ImportSoundWave_NoExistingAsset",
                        L"Could not import the SoundWaveAsset \'{0}\' because the asset does not exist."
                       );
    pFVar10 = FTextFormat::FTextFormat(&local_b8,pFVar9,Default);
    pFVar8 = FText::Format<FText>(&local_238,pFVar10,pFVar8);
    LogError(this,param_1,__return_storage_ptr__,pFVar8);
    local_248.TextData.Reference = local_228.TextData.Reference;
    if (local_238.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
      local_248.TextData.Reference = local_228.TextData.Reference;
    }
    goto LAB_14e6a33aa;
  }
  pUVar7 = Z_Construct_UClass_USoundWave_NoRegister();
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(this_03->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar7->_padding_)) {
    local_res10 = (USoundWave *)0x0;
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<838535387507851384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Audio\\InterchangeAudioSoundWaveFactory.cpp"
                       ,0x78,"SoundWave");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FImportAssetResult *)(*pcVar3)();
      return pFVar11;
    }
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_198,L"InterchangeAudioSoundWaveFactory",
                        L"InterchangeAudioSoundWaveFactory_ImportSoundWave_FailedToCast",
                        L"Could not cast to SoundWave.");
    LogError(this,param_1,__return_storage_ptr__,pFVar8);
    local_248.TextData.Reference = local_198.TextData.Reference;
    goto LAB_14e6a33aa;
  }
  this_00 = param_1->AssetNode;
  local_res10 = this_03;
  if (this_00 != (UInterchangeFactoryBaseNode *)0x0) {
    pUVar7 = Z_Construct_UClass_UInterchangeAudioSoundWaveFactoryNode_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) {
      local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2c8.ArrayNum = 0;
      local_2c8.ArrayMax = 0;
      UInterchangeBaseNode::GetTargetNodeUids((UInterchangeBaseNode *)this_00,&local_2c8);
      this_01 = param_1->NodeContainer;
      if ((local_2c8.ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FImportAssetResult *)(*pcVar3)();
        return pFVar11;
      }
      this_04 = UInterchangeBaseNodeContainer::GetNode
                          (this_01,(FString *)local_2c8.AllocatorInstance.Data);
      if (this_04 == (UInterchangeBaseNode *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<838535387507851402>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Audio\\InterchangeAudioSoundWaveFactory.cpp"
                           ,0x8a,"TargetNode");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FImportAssetResult *)(*pcVar3)();
          return pFVar11;
        }
        FText::AsLocalizable_Advanced_LocText
                  (&local_2a8,L"InterchangeAudioSoundWaveFactory",
                   L"InterchangeAudioSoundWaveFactory_ImportSoundWave_InvalidTargetNode",
                   L"Target node was null.");
        LogError(this,param_1,__return_storage_ptr__,&local_2a8);
LAB_14e6a3236:
        if (local_2a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
        }
        DestructItems<FString,int>((FString *)local_2c8.AllocatorInstance.Data,local_2c8.ArrayNum);
        if (local_2c8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_2c8.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      pUVar7 = Z_Construct_UClass_UInterchangeAudioSoundWaveNode_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(this_04->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_04->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        pFVar12 = UInterchangeBaseNode::GetDisplayLabel(this_04,&local_1b8);
        pFVar8 = FText::FromString(&local_68,pFVar12);
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_1c8,L"InterchangeAudioSoundWaveFactory",
                            L"InterchangeAudioSoundWaveFactory_ImportSoundWave_NullSoundWaveNode",
                            L"Failed to cast target node `{0}` to a sound wave node.");
        pFVar10 = FTextFormat::FTextFormat(&local_58,pFVar9,Default);
        FText::Format<FText>(&local_268,pFVar10,pFVar8);
        if (local_1c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
        }
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        LogError(this,param_1,__return_storage_ptr__,&local_268);
        local_2a8.TextData.Reference = local_268.TextData.Reference;
        goto LAB_14e6a3236;
      }
      UInterchangeAudioSoundWaveNode::GetPayloadKey
                ((UInterchangeAudioSoundWaveNode *)this_04,
                 (TOptional<FString> *)&local_2b8.TypedValue);
      if (local_2b8.TypedValue.Data.ArrayMax == -1) {
        pFVar12 = UInterchangeBaseNode::GetDisplayLabel(this_04,&local_208);
        pFVar8 = FText::FromString(&local_a8,pFVar12);
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_218,L"InterchangeAudioSoundWaveFactory",
                            L"InterchangeAudioSoundWaveFactory_ImportSoundWave_SoundWaveNodeInvalidPayload"
                            ,L"Sound wave node `{0}` doesn\'t have a valid Payload.");
        pFVar10 = FTextFormat::FTextFormat(&local_98,pFVar9,Default);
        FText::Format<FText>(&local_298,pFVar10,pFVar8);
        if (local_218.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
        }
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        LogError(this,param_1,__return_storage_ptr__,&local_298);
      }
      else {
        this_02 = param_1->Translator;
        if (this_02 != (UInterchangeTranslatorBase *)0x0) {
          pUVar7 = Z_Construct_UClass_UInterchangeAudioPayloadInterface_NoRegister();
          plVar13 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_02,pUVar7);
          if (plVar13 != (longlong *)0x0) {
            pcVar3 = *(code **)(*plVar13 + 0x10);
            if ((local_2b8.TypedValue.Data.ArrayMax == -1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              pFVar11 = (FImportAssetResult *)(*pcVar3)();
              return pFVar11;
            }
            (*pcVar3)(plVar13,&local_188);
            if (local_d0 == '\0') {
              if ((local_2b8.TypedValue.Data.ArrayMax == -1) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x1bd,
                                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar11 = (FImportAssetResult *)(*pcVar3)();
                return pFVar11;
              }
              uVar14 = L"";
              if (local_2b8.TypedValue.Data.ArrayNum != 0) {
                uVar14 = local_2b8.TypedValue.Data.AllocatorInstance.Data;
              }
              pFVar8 = FText::FromString(&local_88,(wchar_t *)uVar14);
              pFVar9 = FText::AsLocalizable_Advanced_LocText
                                 (&local_1e8,L"InterchangeAudioSoundWaveFactory",
                                  L"InterchangeAudioSoundWaveFactory_ImportSoundWave_FailedToGetAudioPayloadData"
                                  ,
                                  L"Failed to retrieve audio payload from file [{0}]. See output log for more details."
                                 );
              pFVar10 = FTextFormat::FTextFormat(&local_78,pFVar9,Default);
              pFVar8 = FText::Format<FText>(&local_1f8,pFVar10,pFVar8);
              LogError(this,param_1,__return_storage_ptr__,pFVar8);
              if (local_1f8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
              }
              if (local_1e8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
              }
            }
            else {
              if (this_03 == (USoundWave *)0x0) {
                FText::AsLocalizable_Advanced_LocText
                          (&local_288,L"InterchangeAudioSoundWaveFactory",
                           L"InterchangeAudioSoundWaveFactory_ImportWaveData_NullAsset",
                           L"Sound wave asset was null.");
                LogError(this,param_1,__return_storage_ptr__,&local_288);
                if (local_288.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
                  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
                  goto LAB_14e6a2fdf;
                }
              }
              else {
                if (local_188.FactoryInfo.ChannelCount < 3) {
                  this_03->bIsAmbisonics = '\0';
                }
                else {
                  bVar4 = SetUpMultichannelSoundWave
                                    (this,param_1,&local_res10,&local_188,__return_storage_ptr__);
                  this_03 = local_res10;
                  if (!bVar4) {
                    FText::AsLocalizable_Advanced_LocText
                              (&local_278,L"InterchangeAudioSoundWaveFactory",
                               L"InterchangeAudioSoundWaveFactory_ImportWaveData_SetUpMultiChanFailure"
                               ,L"Failed to set up multichannel sound wave asset.");
                    LogError(this,param_1,__return_storage_ptr__,&local_278);
                    if (local_278.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
                    }
                    __return_storage_ptr__->ImportedObject = (UObject *)local_res10;
                    goto LAB_14e6a2fdf;
                  }
                }
                *(float *)((longlong)&this_03->_padding_ + 4) =
                     (float)local_188.FactoryInfo.NumFrames /
                     (float)local_188.FactoryInfo.SamplesPerSec;
                USoundWave::SetSampleRate(this_03,local_188.FactoryInfo.SamplesPerSec,false);
                this_03->NumChannels = local_188.FactoryInfo.ChannelCount;
                *(float *)((longlong)&this_03->_padding_ + 4) =
                     (float)local_188.FactoryInfo.SamplesPerSec *
                     *(float *)((longlong)&this_03->_padding_ + 4);
              }
              __return_storage_ptr__->ImportedObject = (UObject *)this_03;
            }
LAB_14e6a2fdf:
            if (local_d0 != '\0') {
              UE::Interchange::FInterchangeAudioPayloadData::~FInterchangeAudioPayloadData
                        (&local_188);
            }
            goto LAB_14e6a316a;
          }
        }
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_1d8,L"InterchangeAudioSoundWaveFactory",
                            L"InterchangeAudioSoundWaveFactory_ImportSoundWave_InvalidTranslator",
                            L"Translator used doesn\'t implement IInterchangeAudioPayloadInterface."
                           );
        LogError(this,param_1,__return_storage_ptr__,pFVar8);
        local_298.TextData.Reference = local_1d8.TextData.Reference;
      }
      if (local_298.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
      }
LAB_14e6a316a:
      if ((local_2b8.TypedValue.Data.ArrayMax != -1) &&
         (local_2b8.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_2b8.TypedValue.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_2c8.AllocatorInstance.Data,local_2c8.ArrayNum);
      if (local_2c8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_2c8.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<838535387507851391>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Audio\\InterchangeAudioSoundWaveFactory.cpp"
                     ,0x7f,"SoundWaveFactoryNode");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FImportAssetResult *)(*pcVar3)();
    return pFVar11;
  }
  lVar5 = (**(code **)(param_1->AssetNode->_padding_ + 0x2f8))();
  local_res18 = *(FName *)(lVar5 + 0x18);
  ::FName::ToString(&local_res18,&local_258);
  pFVar8 = FText::FromString(&local_48,&local_258);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_1a8,L"InterchangeAudioSoundWaveFactory",
                      L"InterchangeAudioSoundWaveFactory_ImportSoundWave_FactoryNodeFailedCast",
                      L"Failed to cast AssetNode to UInterchangeAudioSoundWaveFactoryNode. AssetNode class: `{0}`"
                     );
  pFVar10 = FTextFormat::FTextFormat(&local_38,pFVar9,Default);
  FText::Format<FText>(&local_248,pFVar10,pFVar8);
  if (local_1a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
  }
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  LogError(this,param_1,__return_storage_ptr__,&local_248);
LAB_14e6a33aa:
  if (local_248.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// LogError @ 14e6a3860

void __thiscall
UInterchangeAudioSoundWaveFactory::LogError
          (UInterchangeAudioSoundWaveFactory *this,FImportAssetObjectParams *param_1,
          FImportAssetResult *param_2,FText *param_3)

{
  longlong *plVar1;
  int iVar2;
  UInterchangeSourceData *pUVar3;
  FScriptContainerElement *_Src;
  ITextData *pIVar4;
  ITextData *pIVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  UInterchangeResultError_Generic *pUVar10;
  UObject *pUVar11;
  FString *pFVar12;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  
  if (this->_padding_ == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Results != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                       ,0x17b,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pUVar10 = UInterchangeResultsContainer::Add<UInterchangeResultError_Generic>
                      ((UInterchangeResultsContainer *)this->_padding_);
  if ((pUVar10 != (UInterchangeResultError_Generic *)0x0) &&
     (param_1->Translator != (UInterchangeTranslatorBase *)0x0)) {
    pUVar11 = (UObject *)(**(code **)(this->_padding_ + 0x2b0))(this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    pUVar10->_padding_ = (longlong)pUVar11;
    pUVar3 = (param_1->Translator->SourceData).field0_0x0.DebugPtr;
    if (pUVar3 == (UInterchangeSourceData *)0x0) {
      ::FString::operator=((FString *)&pUVar10->_padding_,L"Undefined");
    }
    else {
      iVar2 = (pUVar3->Filename).Data.ArrayNum;
      _Src = (pUVar3->Filename).Data.AllocatorInstance.Data;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = iVar2;
      if (iVar2 == 0) {
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,0,(ForAnyElementType *)&local_48,iVar2,&local_48.Data.ArrayMax);
        memcpy(local_48.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
      }
      ::FString::operator=((FString *)&pUVar10->_padding_,&param_1->AssetName);
      ::FString::operator=((FString *)&pUVar10->_padding_,&param_1->AssetName);
      pFVar12 = FPaths::GetBaseFilename(&local_38,&local_48,true);
      plVar1 = &pUVar10->_padding_;
      if ((FString *)plVar1 != pFVar12) {
        if ((void *)*plVar1 != (void *)0x0) {
          FMemory::Free((void *)*plVar1);
        }
        *plVar1 = (longlong)(pFVar12->Data).AllocatorInstance.Data;
        (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)&pUVar10->_padding_ = (pFVar12->Data).ArrayNum;
        *(int *)((longlong)&pUVar10->_padding_ + 4) = (pFVar12->Data).ArrayMax;
        (pFVar12->Data).ArrayNum = 0;
        (pFVar12->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data._0_1_ = 1;
    FVar8.Data = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data._4_4_ = SUB84(FVar7.Data,4);
    *(undefined4 *)param_2 = local_48.Data.AllocatorInstance.Data._0_4_;
    *(undefined4 *)&param_2->field_0x4 = local_48.Data.AllocatorInstance.Data._4_4_;
    *(undefined4 *)&param_2->ImportedObject = 0;
    *(undefined4 *)((longlong)&param_2->ImportedObject + 4) = 0;
    pIVar4 = (param_3->TextData).Reference;
    pIVar5 = (pUVar10->Text).TextData.Reference;
    if (pIVar5 != pIVar4) {
      (pUVar10->Text).TextData.Reference = pIVar4;
      local_48.Data.AllocatorInstance.Data = FVar8.Data;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
      }
      if (pIVar5 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
      }
    }
    (pUVar10->Text).Flags = param_3->Flags;
    return;
  }
  bVar9 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<838535387507851864>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Audio\\InterchangeAudioSoundWaveFactory.cpp"
                     ,600,"ErrorMessage && Arguments.Translator");
  if (bVar9) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  return;
}

// ReinstateSourceData @ 14e6a70c0

void __thiscall
UInterchangeAudioSoundWaveFactory::ReinstateSourceData
          (UInterchangeAudioSoundWaveFactory *this,UObject *param_1)

{
  return;
}

// SetSourceFilename @ 14e6a72c0

bool __thiscall
UInterchangeAudioSoundWaveFactory::SetSourceFilename
          (UInterchangeAudioSoundWaveFactory *this,UObject *param_1,FString *param_2,int param_3)

{
  return false;
}

// SetUpMultichannelSoundWave @ 14e6a72d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UInterchangeAudioSoundWaveFactory::SetUpMultichannelSoundWave
          (UInterchangeAudioSoundWaveFactory *this,FImportAssetObjectParams *param_1,
          USoundWave **param_2,FInterchangeAudioPayloadData *param_3,FImportAssetResult *param_4)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined2 uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ForAnyElementType FVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  ulonglong *puVar22;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar23;
  ulonglong uVar24;
  int iVar25;
  FScriptContainerElement *pFVar26;
  ulonglong uVar27;
  undefined1 auStackY_288 [32];
  ForAnyElementType local_238;
  undefined8 local_230;
  ForAnyElementType local_228;
  undefined8 local_220;
  ForAnyElementType local_218;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  ulonglong local_1f8;
  longlong *local_1f0;
  USoundWave **local_1e8;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FText local_1a0;
  FText local_190 [2];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong local_a8 [2];
  ulonglong local_98;
  undefined8 uStack_90;
  ulonglong local_88 [9];
  
  local_88[0] = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_210 = (param_1->AssetName).Data.ArrayNum;
  lVar20 = (longlong)local_210;
  pFVar26 = (param_1->AssetName).Data.AllocatorInstance.Data;
  local_218.Data = (FScriptContainerElement *)0x0;
  local_1e8 = param_2;
  if (local_210 == 0) {
    local_20c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_210,0,&local_218,local_210,&local_20c);
    memcpy(local_218.Data,pFVar26,lVar20 * 2);
  }
  iVar25 = local_210 + -1;
  FVar19.Data = local_218.Data;
  if (local_210 == 0) {
    iVar25 = 0;
    FVar19.Data = (FScriptContainerElement *)L"";
  }
  iVar17 = iVar25;
  if (6 < iVar25) {
    iVar17 = 6;
  }
  iVar16 = 0;
  if (0 < iVar17) {
    iVar16 = iVar17;
  }
  ::FString::FString(&local_1c0,(wchar_t *)(FVar19.Data + ((longlong)iVar25 - (longlong)iVar16) * 2)
                    );
  ::FString::ToLower(&local_1c0,&local_1d0);
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  iVar25 = local_210 + -1;
  FVar19.Data = local_218.Data;
  if (local_210 == 0) {
    iVar25 = 0;
    FVar19.Data = (FScriptContainerElement *)L"";
  }
  iVar17 = iVar25;
  if (5 < iVar25) {
    iVar17 = 5;
  }
  iVar16 = 0;
  if (0 < iVar17) {
    iVar16 = iVar17;
  }
  ::FString::FString(&local_1b0,(wchar_t *)(FVar19.Data + ((longlong)iVar25 - (longlong)iVar16) * 2)
                    );
  ::FString::ToLower(&local_1b0,&local_1e0);
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  FVar19.Data = (FScriptContainerElement *)L"";
  if (local_1d0.Data.ArrayNum != 0) {
    FVar19.Data = local_1d0.Data.AllocatorInstance.Data;
  }
  iVar25 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar19.Data,L"_ambix");
  FVar19.Data = (FScriptContainerElement *)L"";
  if (local_1e0.Data.ArrayNum != 0) {
    FVar19.Data = local_1e0.Data.AllocatorInstance.Data;
  }
  local_200 = iVar25;
  iVar17 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar19.Data,L"_fuma");
  uVar13 = _UNK_152f26fd8;
  uVar12 = ___xmm_00000005000000040000000100000000;
  uVar11 = _UNK_150631eb8;
  uVar10 = ___xmm_00000007000000060000000500000004;
  uVar9 = _UNK_150631e08;
  uVar8 = __xmm_00000003000000020000000100000000;
  local_170._0_4_ = (param_3->FactoryInfo).SamplesPerSec;
  local_170._4_4_ = (param_3->FactoryInfo).SampleDataOffset;
  uVar6 = (param_3->FactoryInfo).ChannelCount;
  uVar7 = (param_3->FactoryInfo).NumFrames;
  local_204 = iVar17;
  if (((iVar25 == 0) || (iVar17 == 0)) && (uVar6 != 4)) {
    FText::AsLocalizable_Advanced_LocText
              (&local_1a0,L"InterchangeAudioSoundWaveFactory",
               L"InterchangeAudioSoundWaveFactory_SetUpMultichan_InvalidChanCountAmbi",
               L"Tried to import ambisonics format file but the file does not contain exactly four channels."
              );
    LogError(this,param_1,param_4,&local_1a0);
    if (local_1a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a0.TextData.Reference + 0x10))();
    }
    bVar14 = false;
    goto LAB_14e6a7a35;
  }
  pFVar26 = (param_3->Buffer).AllocatorInstance.Data + (longlong)(int)local_170._4_4_ * 2;
  local_228.Data = (FScriptContainerElement *)0x0;
  local_220 = 0;
  if (uVar6 == 4) {
    local_220 = 4;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,4,0,&local_228,4,(int *)((longlong)&local_220 + 4));
    local_150 = uVar12;
    uStack_148 = uVar13;
    *(undefined8 *)local_228.Data = uVar12;
    *(undefined8 *)(local_228.Data + 8) = uVar13;
LAB_14e6a7641:
    local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_238.Data = (FScriptContainerElement *)0x0;
    local_230 = 0;
    if ((uVar6 != (uint)local_220) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("SoundWaveFactoryInfo.ChannelCount == ChannelIndices.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Audio\\InterchangeAudioSoundWaveFactory.cpp"
                            ,0x21c,L""), bVar14)) {
      pcVar5 = (code *)swi(3);
      uVar15 = (*pcVar5)();
      return (bool)uVar15;
    }
    if (0 < (int)uVar6) {
      local_1f8 = (ulonglong)uVar6;
      pTVar23 = &local_118;
      local_208 = (int)local_170;
      do {
        uVar18 = 0;
        bVar14 = local_230._4_4_ != 0;
        local_230 = (ulonglong)local_230._4_4_ << 0x20;
        if (bVar14) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,0,&local_238,0,(int *)((longlong)&local_230 + 4));
          uVar18 = local_230 & 0xffffffff;
        }
        if (0 < (int)uVar7) {
          uVar24 = (ulonglong)uVar7;
          pFVar21 = pFVar26;
          while( true ) {
            iVar25 = (int)uVar18;
            if ((local_238.Data <= pFVar21) &&
               (pFVar21 < local_238.Data + (longlong)(int)local_230._4_4_ * 2)) {
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar14) {
                pcVar5 = (code *)swi(3);
                uVar15 = (*pcVar5)();
                return (bool)uVar15;
              }
              iVar25 = (int)local_230;
            }
            if (iVar25 == local_230._4_4_) {
              iVar25 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x202,&local_238,(int *)((longlong)&local_230 + 4));
            }
            local_230 = CONCAT44(local_230._4_4_,iVar25 + 1U);
            uVar4 = *(undefined2 *)pFVar21;
            pFVar21 = pFVar21 + (longlong)(int)uVar6 * 2;
            *(undefined2 *)(local_238.Data + (longlong)iVar25 * 2) = uVar4;
            uVar24 = uVar24 - 1;
            if (uVar24 == 0) break;
            uVar18 = (ulonglong)(iVar25 + 1U);
          }
        }
        SerializeWaveFile(pTVar23,(uchar *)local_238.Data,uVar7 * 2,1,local_208);
        pFVar26 = pFVar26 + 2;
        pTVar23 = pTVar23 + 1;
        local_1f8 = local_1f8 - 1;
      } while (local_1f8 != 0);
      local_1f8 = 0;
      iVar17 = local_204;
    }
    uVar24 = 0;
    lVar20 = 8;
    FUniqueBuffer::Alloc((ulong64)&local_1f0);
    plVar1 = local_1f0;
    uVar18 = uVar24;
    if (local_1f0 != (longlong *)0x0) {
      if (((ulonglong)local_1f0[3] >> 0x3c & 4) == 0) {
        (**(code **)(*local_1f0 + 8))(local_1f0);
      }
      uVar18 = plVar1[1];
    }
    if ((local_200 == 0) || (iVar17 == 0)) {
      if ((uVar6 != 4) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("SoundWaveFactoryInfo.ChannelCount == 4",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Audio\\InterchangeAudioSoundWaveFactory.cpp"
                              ,0x239,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        uVar15 = (*pcVar5)();
        return (bool)uVar15;
      }
      (*local_1e8)->bIsAmbisonics = '\x01';
      if (iVar17 != 0) goto LAB_14e6a7912;
      puVar22 = &local_98;
      local_98 = ___xmm_00000001000000030000000200000000;
      uStack_90 = _UNK_150ae1788;
      do {
        iVar25 = (&local_118)[(int)*puVar22].ArrayNum;
        memcpy((void *)((longlong)(int)uVar24 + uVar18),
               (&local_118)[(int)*puVar22].AllocatorInstance.Data,(longlong)iVar25);
        uVar24 = (ulonglong)(uint)((int)uVar24 + iVar25);
        puVar22 = (ulonglong *)((longlong)puVar22 + 4);
      } while (puVar22 != local_88);
    }
    else {
LAB_14e6a7912:
      if (0 < (int)uVar6) {
        pTVar23 = &local_118;
        uVar27 = (ulonglong)uVar6;
        do {
          iVar25 = pTVar23->ArrayNum;
          memcpy((void *)((longlong)(int)uVar24 + uVar18),(pTVar23->AllocatorInstance).Data,
                 (longlong)iVar25);
          uVar24 = (ulonglong)(uint)((int)uVar24 + iVar25);
          pTVar23 = pTVar23 + 1;
          uVar27 = uVar27 - 1;
        } while (uVar27 != 0);
      }
    }
    bVar14 = true;
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1f0 + 3;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar3 & 0x3fffffff) == 1) {
        (**(code **)(*local_1f0 + 0x10))(local_1f0);
        local_1f0[1] = 0;
        local_1f0[2] = 0;
        LOCK();
        puVar22 = (ulonglong *)(local_1f0 + 3);
        uVar18 = *puVar22;
        *puVar22 = *puVar22 - 0x40000000;
        UNLOCK();
        if (((uint)(uVar18 >> 0x1e) & 0x3fffffff) == 1) {
          (**(code **)*local_1f0)(local_1f0,1);
        }
      }
    }
    if (local_238.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data);
    }
    puVar22 = &local_98;
    do {
      puVar2 = puVar22 + -2;
      puVar22 = puVar22 + -2;
      lVar20 = lVar20 + -1;
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
    } while (lVar20 != 0);
  }
  else {
    if (uVar6 == 6) {
      local_158 = 4;
      uStack_154 = 5;
      local_220 = 6;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,6,0,&local_228,6,(int *)((longlong)&local_220 + 4));
      local_168 = uVar8;
      uStack_160 = uVar9;
      *(undefined8 *)local_228.Data = uVar8;
      *(undefined8 *)(local_228.Data + 8) = uVar9;
      *(ulonglong *)(local_228.Data + 0x10) = CONCAT44(uStack_154,local_158);
      goto LAB_14e6a7641;
    }
    if (uVar6 == 8) {
      local_220 = 8;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,8,0,&local_228,8,(int *)((longlong)&local_220 + 4));
      local_130 = uVar10;
      uStack_128 = uVar11;
      local_140 = uVar8;
      uStack_138 = uVar9;
      *(undefined8 *)local_228.Data = uVar8;
      *(undefined8 *)(local_228.Data + 8) = uVar9;
      *(undefined8 *)(local_228.Data + 0x10) = uVar10;
      *(undefined8 *)(local_228.Data + 0x18) = uVar11;
      goto LAB_14e6a7641;
    }
    FText::AsLocalizable_Advanced_LocText
              (local_190,L"InterchangeAudioSoundWaveFactory",
               L"InterchangeAudioSoundWaveFactory_SetUpMultichan_UnknownChanConfig",
               L"Unable to import multichannel file with unsupported channel configuration.");
    LogError(this,param_1,param_4,local_190);
    if (local_190[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_190[0].TextData.Reference + 0x10))();
    }
    bVar14 = false;
  }
  if (local_228.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data);
  }
LAB_14e6a7a35:
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  if (local_218.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data);
  }
  return bVar14;
}

// SetUpSoundWaveFromPayload @ 14e6a7ac0

void __thiscall
UInterchangeAudioSoundWaveFactory::SetUpSoundWaveFromPayload
          (UInterchangeAudioSoundWaveFactory *this,FImportAssetObjectParams *param_1,
          USoundWave **param_2,FInterchangeAudioPayloadData *param_3,FImportAssetResult *param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  FText local_18;
  
  if (*param_2 == (USoundWave *)0x0) {
    FText::AsLocalizable_Advanced_LocText
              (&local_18,L"InterchangeAudioSoundWaveFactory",
               L"InterchangeAudioSoundWaveFactory_ImportWaveData_NullAsset",
               L"Sound wave asset was null.");
    LogError(this,param_1,param_4,&local_18);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  else {
    if ((param_3->FactoryInfo).ChannelCount < 3) {
      (*param_2)->bIsAmbisonics = '\0';
    }
    else {
      bVar2 = SetUpMultichannelSoundWave(this,param_1,param_2,param_3,param_4);
      if (!bVar2) {
        FText::AsLocalizable_Advanced_LocText
                  (&local_18,L"InterchangeAudioSoundWaveFactory",
                   L"InterchangeAudioSoundWaveFactory_ImportWaveData_SetUpMultiChanFailure",
                   L"Failed to set up multichannel sound wave asset.");
        LogError(this,param_1,param_4,&local_18);
        if (local_18.TextData.Reference == (ITextData *)0x0) {
          return;
        }
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
        return;
      }
    }
    *(float *)((longlong)&(*param_2)->_padding_ + 4) =
         (float)(param_3->FactoryInfo).NumFrames / (float)(param_3->FactoryInfo).SamplesPerSec;
    USoundWave::SetSampleRate(*param_2,(param_3->FactoryInfo).SamplesPerSec,false);
    (*param_2)->NumChannels = (param_3->FactoryInfo).ChannelCount;
    *(float *)((longlong)&(*param_2)->_padding_ + 4) =
         (float)(param_3->FactoryInfo).SamplesPerSec *
         *(float *)((longlong)&(*param_2)->_padding_ + 4);
  }
  return;
}

// SetupObject_GameThread @ 14e6a7f80

void __thiscall
UInterchangeAudioSoundWaveFactory::SetupObject_GameThread
          (UInterchangeAudioSoundWaveFactory *this,FSetupObjectParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId226,
               "UInterchangeAudioSoundWaveFactory::SetupObject_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Audio\\InterchangeAudioSoundWaveFactory.cpp"
               ,0xe2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId226);
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Audio\\InterchangeAudioSoundWaveFactory.cpp"
                         ,0xe4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1->ImportedObject != (UObject *)0x0) {
    Z_Construct_UClass_USoundWave_NoRegister();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// StaticRegisterNativesUInterchangeAudioSoundWaveFactory @ 14e6a8130

void __cdecl
UInterchangeAudioSoundWaveFactory::StaticRegisterNativesUInterchangeAudioSoundWaveFactory(void)

{
  return;
}

// StopComponentsUsingImportedSound @ 14e6a8290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UInterchangeAudioSoundWaveFactory::StopComponentsUsingImportedSound
          (UInterchangeAudioSoundWaveFactory *this,USoundWave *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FAudioDeviceManager *this_00;
  uchar *puVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  undefined8 local_res10;
  TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> local_28;
  
  if ((param_1 != (USoundWave *)0x0) &&
     (this_00 = UEngine::GetAudioDeviceManager(GEngine), this_00 != (FAudioDeviceManager *)0x0)) {
    local_28.ArrayNum = (this->ComponentsToRestart).ArrayNum;
    lVar5 = (longlong)local_28.ArrayNum;
    pFVar2 = (this->ComponentsToRestart).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar2,lVar5 << 3);
    }
    FAudioDeviceManager::StopSoundsUsingResource(this_00,param_1,&local_28);
    puVar3 = USoundWave::GetResourceData(param_1);
    if (puVar3 == (uchar *)0x0) {
      USoundWave::GetRuntimeFormat(param_1);
      (**(code **)(param_1->_padding_ + 0x3d8))(param_1,local_res10);
    }
    iVar1 = (this->ComponentsToRestart).ArrayNum;
    if (0 < iVar1) {
      pFVar4 = (this->ComponentsToRestart).AllocatorInstance.Data;
      pFVar2 = pFVar4 + (longlong)iVar1 * 8;
      while( true ) {
        if ((this->ComponentsToRestart).ArrayNum != iVar1) {
          `TCheckedPointerIterator<TObjectPtr<UAudioComponent>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_res10);
        }
        if (pFVar4 == pFVar2) break;
        (**(code **)(**(longlong **)pFVar4 + 0x668))();
        pFVar4 = pFVar4 + 8;
      }
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

