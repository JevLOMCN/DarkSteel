// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 16

// StaticClass @ 14e6ab6a0

UClass * __cdecl UInterchangeGroomCacheFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGroomCacheFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeGroomCacheFactory",
               &Z_Registration_Info_UClass_UInterchangeGroomCacheFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeGroomCacheFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGroomCacheFactory>,
               InternalVTableHelperCtorCaller<UInterchangeGroomCacheFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGroomCacheFactory.InnerSingleton;
}

// UInterchangeGroomCacheFactory @ 14e6b58a0

UInterchangeGroomCacheFactory * __thiscall
UInterchangeGroomCacheFactory::UInterchangeGroomCacheFactory
          (UInterchangeGroomCacheFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeGroomCacheFactory__6B_;
  return this;
}

// UInterchangeGroomCacheFactory @ 14e6b58d0

UInterchangeGroomCacheFactory * __thiscall
UInterchangeGroomCacheFactory::UInterchangeGroomCacheFactory
          (UInterchangeGroomCacheFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeGroomCacheFactory__6B_;
  return this;
}

// ~UInterchangeGroomCacheFactory @ 14e6b9b70

void __thiscall
UInterchangeGroomCacheFactory::~UInterchangeGroomCacheFactory(UInterchangeGroomCacheFactory *this)

{
  *(undefined ***)this = &___7UInterchangeGroomCacheFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// operator() @ 14e6ba1d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`UInterchangeGroomCacheFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
          (void *this,FText *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  UInterchangeResultError_Generic *pUVar6;
  UObject *pUVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  undefined1 local_res8 [8];
  ForAnyElementType local_78;
  undefined8 local_70;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  lVar3 = *(longlong *)this;
  if (*(longlong *)(lVar3 + 0x28) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Results != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                       ,0x17b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar6 = UInterchangeResultsContainer::Add<UInterchangeResultError_Generic>
                     (*(UInterchangeResultsContainer **)(lVar3 + 0x28));
  lVar3 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x28);
  local_78.Data = (FScriptContainerElement *)0x0;
  iVar2 = *(int *)(lVar3 + 0x30);
  _Src = *(void **)(lVar3 + 0x28);
  local_70 = CONCAT44(local_70._4_4_,iVar2);
  if (iVar2 == 0) {
    local_70 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,&local_78,iVar2,(int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,_Src,(longlong)iVar2 * 2);
  }
  plVar1 = &pUVar6->_padding_;
  if ((ForAnyElementType *)plVar1 != &local_78) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_78.Data;
    *(undefined4 *)&pUVar6->_padding_ = (undefined4)local_70;
    local_78.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&pUVar6->_padding_ + 4) = local_70._4_4_;
    local_70 = 0;
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  ::FString::operator=
            ((FString *)&pUVar6->_padding_,(FString *)(*(longlong *)((longlong)this + 8) + 8));
  pUVar7 = (UObject *)(**(code **)(**(longlong **)this + 0x2b0))();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  pUVar6->_padding_ = (longlong)pUVar7;
  local_68.TextData.Reference = (param_1->TextData).Reference;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 8))
              (local_68.TextData.Reference,local_res8);
  }
  local_68.Flags = param_1->Flags;
  pFVar8 = FText::FromString(&local_38,(FString *)(*(longlong *)((longlong)this + 8) + 8));
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"InterchangeGroomCacheFactory",L"GroomCacheFactory_Failure",
                      L"UInterchangeGroomCacheFactory: Could not create Groom Cache \'{0}\'. Reason: {1}"
                     );
  pFVar10 = FTextFormat::FTextFormat(&local_28,pFVar9,Default);
  pFVar8 = FText::Format<FText,FText>(&local_58,pFVar10,pFVar8,&local_68);
  FText::operator=(&pUVar6->Text,pFVar8);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  **(undefined1 **)((longlong)this + 0x10) = 1;
  return;
}

// BackupSourceData @ 14e6becc0

void __thiscall
UInterchangeGroomCacheFactory::BackupSourceData
          (UInterchangeGroomCacheFactory *this,UObject *param_1)

{
  return;
}

// BeginImportAsset_GameThread @ 14e6bece0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeGroomCacheFactory::BeginImportAsset_GameThread
          (UInterchangeGroomCacheFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  UInterchangeTranslatorBase *this_00;
  UInterchangeGroomCacheFactoryNode *this_01;
  UObject *pUVar1;
  FName FVar2;
  FHairGroupInfoWithVisibility *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  FFeedbackContext *pFVar7;
  UGroomCache *pUVar8;
  FString *pFVar9;
  FInterchangeGroomPayloadKey *pFVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  UClass *pUVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  FText *pFVar20;
  FImportAssetResult *pFVar21;
  UInterchangeGroomNode *this_02;
  UInterchangeFactoryBaseNode *this_03;
  UGroomAsset *pUVar22;
  FName *pFVar23;
  UGroomCache *this_04;
  TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *pTVar24;
  FText *pFVar25;
  FText *pFVar26;
  FText *pFVar27;
  FTextFormat *pFVar28;
  TArray<FHairGroupInfoWithVisibility,TSizedDefaultAllocator<32>_> *pTVar29;
  TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_> *pTVar30;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *pTVar31;
  FUObjectItem *pFVar32;
  wchar_t *pwVar33;
  int iVar34;
  uint uVar35;
  FHairStrandsDatas *pFVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  ulonglong uVar40;
  FHairGroupInfo *pFVar41;
  bool bVar42;
  undefined1 auStackY_758 [32];
  TArray<FGroomCacheInputData,TSizedDefaultAllocator<32>_> local_6f8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_6e8;
  EGroomCacheAttributes local_6d8;
  EGroomCacheType local_6d7 [3];
  uint local_6d4;
  uint local_6d0;
  uint local_6cc;
  FHairStrandsDatas *local_6c8;
  UGroomAsset *local_6c0;
  UGroomCache *local_6b8;
  longlong *local_6b0;
  FTextBuilder local_6a8;
  ForAnyElementType local_690;
  int local_688;
  int local_684;
  FGroomAnimationInfo local_680;
  TArray<FString,TSizedDefaultAllocator<32>_> local_660;
  UInterchangeGroomCacheFactory *local_650;
  FImportAssetObjectParams *local_648;
  FImportAssetResult *local_640;
  UGroomCache *local_638;
  TOptional<FInterchangeGroomPayloadKey> local_630;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_610;
  FText local_600;
  FSoftObjectPath local_5f0;
  int local_5d0;
  FHairDescriptionGroups local_5c8;
  FString *local_598;
  double local_590;
  FString local_588;
  EInterchangeGroomPayLoadType local_578;
  uint local_574;
  FGroomCacheProcessor local_570;
  undefined8 local_558;
  FSoftObjectPath local_550;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_530;
  FInterchangeGroomPayloadKey *local_520;
  FText local_518;
  TSharedPtr<FCulture,1> local_508;
  TSharedPtr<FCulture,1> local_4f8;
  FFormatArgumentValue *local_4e8;
  FFormatArgumentValue *pFStack_4e0;
  FTextFormat local_4d8;
  FText local_4c8;
  FTextFormat local_4b8;
  FFormatArgumentValue local_4a8;
  undefined1 local_488 [16];
  longlong *local_478;
  undefined4 local_470;
  undefined4 local_468;
  longlong local_460;
  longlong *local_458;
  undefined4 local_450;
  FFormatArgumentValue local_448;
  FText local_428;
  initializer_list<FFormatArgumentValue> local_418;
  FText local_408;
  FText local_3f8;
  FText local_3e8;
  FText local_3d8;
  FText local_3c8;
  FText local_3b8;
  FText local_3a8;
  FText local_398;
  FName local_388;
  FText local_380;
  FText local_370;
  FText local_360;
  FText local_350;
  FText local_340;
  FText local_330;
  FText local_320;
  FText local_310;
  FText local_300;
  FText local_2f0;
  FSlowTask local_2d8;
  FTextFormat local_278;
  FTextFormat local_268;
  FTextFormat local_258;
  FTextFormat local_248;
  FTextFormat local_238;
  FText local_228;
  FText local_218;
  FText local_208;
  FHairDescription local_1f8;
  char local_e8;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_758;
  bVar42 = -1 < CpuChannel->Enabled;
  if (bVar42) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId31,
               "UInterchangeGroomCacheFactory::BeginImportAsset_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Groom\\InterchangeGroomCacheFactory.cpp"
               ,0x1f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId31);
  }
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  this_00 = param_1->Translator;
  local_650 = this;
  local_648 = param_1;
  local_640 = __return_storage_ptr__;
  if (this_00 != (UInterchangeTranslatorBase *)0x0) {
    pUVar16 = Z_Construct_UClass_UInterchangeGroomPayloadInterface_NoRegister();
    plVar17 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar16);
    if (plVar17 != (longlong *)0x0) {
      this_01 = (UInterchangeGroomCacheFactoryNode *)param_1->AssetNode;
      if (this_01 != (UInterchangeGroomCacheFactoryNode *)0x0) {
        pUVar16 = Z_Construct_UClass_UInterchangeGroomCacheFactoryNode_NoRegister();
        iVar34 = (int)pUVar16->_padding_;
        if ((iVar34 <= *(int *)(this_01->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar34 * 8) ==
            &pUVar16->_padding_)) {
          lVar18 = (**(code **)(this_01->_padding_ + 0x2f8))(this_01);
          if ((lVar18 != 0) &&
             (lVar19 = (**(code **)(*(longlong *)this + 0x2b0))(this), lVar19 != 0)) {
            if ((*(int *)(lVar18 + 0x38) < *(int *)(lVar19 + 0x38)) ||
               (*(longlong *)(*(longlong *)(lVar18 + 0x30) + (longlong)*(int *)(lVar19 + 0x38) * 8)
                != lVar19 + 0x30)) {
              bVar11 = false;
            }
            else {
              bVar11 = true;
            }
            if (bVar11) {
              local_6e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_6e8.ArrayNum = 0;
              local_6e8.ArrayMax = 0;
              UInterchangeBaseNode::GetTargetNodeUids((UInterchangeBaseNode *)this_01,&local_6e8);
              if (local_6e8.ArrayNum == 0) {
                pFVar20 = FText::AsLocalizable_Advanced_LocText
                                    (&local_380,L"InterchangeGroomCacheFactory",
                                     L"GroomCacheFactory_MissingTargetNodeId",
                                     L"Groom cache factory node is missing the target node id.");
                `UInterchangeGroomCacheFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::
                operator()(&local_650,pFVar20);
              }
              else {
                if ((local_6e8.ArrayNum < 1) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  pFVar21 = (FImportAssetResult *)(*pcVar5)();
                  return pFVar21;
                }
                this_02 = (UInterchangeGroomNode *)
                          UInterchangeBaseNodeContainer::GetNode
                                    (param_1->NodeContainer,
                                     (FString *)local_6e8.AllocatorInstance.Data);
                if (this_02 != (UInterchangeGroomNode *)0x0) {
                  pUVar16 = Z_Construct_UClass_UInterchangeGroomNode_NoRegister();
                  iVar34 = (int)pUVar16->_padding_;
                  if ((iVar34 <= *(int *)(this_02->_padding_ + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar34 * 8) ==
                      &pUVar16->_padding_)) {
                    UInterchangeGroomNode::GetPayloadKey(this_02,&local_630);
                    if (local_630.bIsSet == false) {
                      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<7779604117286027352>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Groom\\InterchangeGroomCacheFactory.cpp"
                                          ,0x58,"OptionalPayloadKey.IsSet()");
                      if (bVar11) {
                        pcVar5 = (code *)swi(3);
                        pFVar21 = (FImportAssetResult *)(*pcVar5)();
                        return pFVar21;
                      }
                      pFVar20 = FText::AsLocalizable_Advanced_LocText
                                          (&local_370,L"InterchangeGroomCacheFactory",
                                           L"GroomCacheFactory_MissingPayloadKey",
                                           L"Groom node has no payload key.");
                      `UInterchangeGroomCacheFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>
                      ::operator()(&local_650,pFVar20);
                      if (local_370.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*local_370.TextData.Reference + 0x10))();
                      }
                      goto LAB_14e6befc9;
                    }
                    local_5f0.AssetPath.PackageName.ComparisonIndex.Value = 0;
                    local_5f0.AssetPath.PackageName.Number = 0;
                    local_5f0.AssetPath.AssetName.ComparisonIndex.Value = 0;
                    local_5f0.AssetPath.AssetName.Number = 0;
                    local_5f0.SubPathString.Data.AllocatorInstance.Data =
                         (FScriptContainerElement *)0x0;
                    local_5f0.SubPathString.Data.ArrayNum = 0;
                    local_5f0.SubPathString.Data.ArrayMax = 0;
                    bVar11 = UInterchangeGroomCacheFactoryNode::GetCustomGroomAssetPath
                                       (this_01,&local_5f0);
                    if (bVar11) {
LAB_14e6bf0a2:
                      pUVar22 = (UGroomAsset *)
                                FSoftObjectPath::TryLoad(&local_5f0,(FUObjectSerializeContext *)0x0)
                      ;
                      if (pUVar22 != (UGroomAsset *)0x0) {
                        pUVar16 = Z_Construct_UClass_UGroomAsset_NoRegister();
                        iVar34 = (int)pUVar16->_padding_;
                        if ((iVar34 <= *(int *)(pUVar22->_padding_ + 0x38)) &&
                           ((longlong *)
                            *(undefined1 **)
                             (*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar34 * 8) ==
                            &pUVar16->_padding_)) {
                          FGroomAnimationInfo::FGroomAnimationInfo(&local_680);
                          local_6d4 = 0;
                          bVar11 = UInterchangeGroomCacheFactoryNode::GetCustomNumFrames
                                             (this_01,(int *)&local_6d4);
                          if (bVar11) {
                            local_680.NumFrames = local_6d4;
                          }
                          bVar11 = UInterchangeGroomCacheFactoryNode::GetCustomStartFrame
                                             (this_01,(int *)&local_6d4);
                          if (bVar11) {
                            local_680.StartFrame = local_6d4;
                          }
                          bVar11 = UInterchangeGroomCacheFactoryNode::GetCustomEndFrame
                                             (this_01,(int *)&local_6d4);
                          local_590 = 0.0;
                          if (bVar11) {
                            local_680.EndFrame = local_6d4;
                          }
                          bVar11 = UInterchangeGroomCacheFactoryNode::GetCustomFrameRate
                                             (this_01,&local_590);
                          if (bVar11) {
                            if (local_590 == 0.0) {
                              local_680.SecondsPerFrame = 0.041666668;
                            }
                            else {
                              local_680.SecondsPerFrame =
                                   (float)(__real_3ff0000000000000 / local_590);
                            }
                          }
                          bVar11 = UInterchangeGroomCacheFactoryNode::GetCustomGroomCacheAttributes
                                             (this_01,&local_6d8);
                          if (bVar11) {
                            local_680.Attributes = local_6d8;
                          }
                          bVar11 = FGroomAnimationInfo::IsValid(&local_680);
                          if (!bVar11) {
                            pFVar20 = FText::AsLocalizable_Advanced_LocText
                                                (&local_350,L"InterchangeGroomCacheFactory",
                                                 L"GroomCacheFactory_InvalidAnimInfo",
                                                 L"Invalid number of frames, start/end frame, frame rate or no attribute is animated."
                                                );
                            `UInterchangeGroomCacheFactory::BeginImportAsset_GameThread'::__l2::
                            <lambda_1>::operator()(&local_650,pFVar20);
                            if (local_350.TextData.Reference != (ITextData *)0x0) {
                              (**(code **)((longlong)*local_350.TextData.Reference + 0x10))();
                            }
                            goto LAB_14e6bf1dd;
                          }
                          local_6b8 = (UGroomCache *)param_1->ReimportObject;
                          local_680.EndTime = (float)local_680.EndFrame * local_680.SecondsPerFrame;
                          local_680.Duration =
                               (float)local_680.NumFrames * local_680.SecondsPerFrame;
                          local_680.StartTime =
                               (float)local_680.StartFrame * local_680.SecondsPerFrame;
                          if (local_6b8 == (UGroomCache *)0x0) {
                            local_550.AssetPath.PackageName.ComparisonIndex.Value = 0;
                            local_550.AssetPath.PackageName.Number = 0;
                            local_550.AssetPath.AssetName.ComparisonIndex.Value = 0;
                            local_550.AssetPath.AssetName.Number = 0;
                            local_550.SubPathString.Data.AllocatorInstance.Data =
                                 (FScriptContainerElement *)0x0;
                            local_550.SubPathString.Data.ArrayNum = 0;
                            local_550.SubPathString.Data.ArrayMax = 0;
                            bVar11 = UInterchangeFactoryBaseNode::GetCustomReferenceObject
                                               ((UInterchangeFactoryBaseNode *)this_01,&local_550);
                            if (bVar11) {
                              local_6b8 = (UGroomCache *)
                                          FSoftObjectPath::TryLoad
                                                    (&local_550,(FUObjectSerializeContext *)0x0);
                            }
                            if (local_550.SubPathString.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_550.SubPathString.Data.AllocatorInstance.Data);
                            }
                            local_6c0 = pUVar22;
                            local_6b0 = plVar17;
                            if (local_6b8 != (UGroomCache *)0x0) goto LAB_14e6bf31b;
LAB_14e6bf3e2:
                            if ((param_1->AssetName).Data.ArrayNum == 0) {
                              pwVar33 = L"";
                            }
                            else {
                              pwVar33 = (wchar_t *)(param_1->AssetName).Data.AllocatorInstance.Data;
                            }
                            local_6c0 = pUVar22;
                            local_6b0 = plVar17;
                            pFVar23 = ::FName::FName(&local_388,pwVar33);
                            pUVar1 = param_1->Parent;
                            local_558 = 0;
                            FVar2 = *pFVar23;
                            if (FVar2 == (FName)0x0) {
                              FObjectInitializer::AssertIfInConstructor
                                        (pUVar1,
                                         L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                                        );
                            }
                            pUVar16 = Z_Construct_UClass_UGroomCache_NoRegister();
                            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                                      ((FStaticConstructObjectParameters *)local_d8,pUVar16);
                            local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
                            local_d8._56_8_ = (UPackage *)0x0;
                            local_d8._24_4_ = RF_Standalone|RF_Public;
                            local_d8._40_8_ = (UObject *)0x0;
                            local_d8[0x20] = false;
                            local_d8._8_8_ = pUVar1;
                            local_d8._16_8_ = FVar2;
                            this_04 = (UGroomCache *)
                                      StaticConstructObject_Internal
                                                ((FStaticConstructObjectParameters *)local_d8);
                            local_638 = this_04;
                            if (local_d8._64_8_ != 0) {
                              plVar17 = (longlong *)(local_d8 + 0x50);
                              if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
                                plVar17 = (longlong *)local_d8._104_8_;
                              }
                              (**(code **)(*plVar17 + 0x10))();
                            }
                            if (this_04 == (UGroomCache *)0x0) {
                              pFVar20 = FText::AsLocalizable_Advanced_LocText
                                                  (&local_340,L"InterchangeGroomCacheFactory",
                                                   L"GroomCacheFactory_GroomCreationFailure",
                                                   L"Could not allocate new GroomCache.");
                              `UInterchangeGroomCacheFactory::BeginImportAsset_GameThread'::__l2::
                              <lambda_1>::operator()(&local_650,pFVar20);
                              if (local_340.TextData.Reference != (ITextData *)0x0) {
                                (**(code **)((longlong)*local_340.TextData.Reference + 0x10))();
                              }
                              goto LAB_14e6bf1dd;
                            }
                          }
                          else {
LAB_14e6bf31b:
                            pUVar8 = local_6b8;
                            pUVar16 = Z_Construct_UClass_UGroomCache_NoRegister();
                            iVar34 = (int)pUVar16->_padding_;
                            if (((*(int *)(local_6b8->_padding_ + 0x38) < iVar34) ||
                                ((longlong *)
                                 *(undefined1 **)
                                  (*(longlong *)(local_6b8->_padding_ + 0x30) + (longlong)iVar34 * 8
                                  ) != &pUVar16->_padding_)) ||
                               (local_638 = local_6b8, bVar11 = local_6b8 == (UGroomCache *)0x0,
                               this_04 = local_6b8, local_6c0 = pUVar22, local_6b8 = pUVar8,
                               local_6b0 = plVar17, bVar11)) goto LAB_14e6bf3e2;
                          }
                          bVar11 = UInterchangeGroomCacheFactoryNode::GetCustomGroomCacheImportType
                                             (this_01,local_6d7);
                          if (bVar11) {
                            UGroomCache::Initialize(this_04,local_6d7[0]);
                            pFVar7 = GWarn;
                            iVar34 = local_680.NumFrames + 1;
                            local_5d0 = iVar34;
                            pFVar20 = FText::AsLocalizable_Advanced_LocText
                                                (&local_320,L"InterchangeGroomCacheFactory",
                                                 L"ImportGroomCache",L"Importing GroomCache frames")
                            ;
                            FSlowTask::FSlowTask(&local_2d8,(float)iVar34,pFVar20,true,pFVar7);
                            FSlowTask::Initialize(&local_2d8);
                            if (local_320.TextData.Reference != (ITextData *)0x0) {
                              (**(code **)((longlong)*local_320.TextData.Reference + 0x10))();
                            }
                            FSlowTask::MakeDialog(&local_2d8,false,false);
                            pTVar24 = UGroomAsset::GetHairGroupsPlatformData(pUVar22);
                            local_520 = TOptional<FInterchangeGroomPayloadKey>::GetValue(&local_630)
                            ;
                            FGroomCacheProcessor::FGroomCacheProcessor
                                      (&local_570,local_6d7[0],local_680.Attributes);
                            FText::FText(&local_600);
                            fVar6 = __real_3f800000;
                            local_6cc = local_680.StartFrame;
                            if (local_680.StartFrame < (int)(local_680.EndFrame + 1U)) {
                              local_598 = &param_1->AssetName;
                              uVar35 = local_680.StartFrame;
                              do {
                                pFVar9 = local_598;
                                bVar11 = -1 < CpuChannel->Enabled;
                                local_6cc = uVar35;
                                if (bVar11) {
                                  FCpuProfilerTrace::GetOrCreateSpecId
                                            (&__CpuProfilerEventSpecId225,
                                             "FGroomCacheImporter::ImportGroomCache::OneFrame",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Groom\\InterchangeGroomCacheFactory.cpp"
                                             ,0xe1);
                                  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId225);
                                }
                                local_6a8.Lines.AllocatorInstance.Data =
                                     (FScriptContainerElement *)0x0;
                                uVar35 = uVar35 - local_680.StartFrame;
                                local_6a8.Lines.ArrayNum = 0;
                                local_6a8.Lines.ArrayMax = 0;
                                local_6a8.IndentCount = 0;
                                pFVar20 = FText::FromString(&local_208,pFVar9);
                                local_4f8.Object = (FCulture *)0x0;
                                local_4f8.SharedReferenceCount.ReferenceController =
                                     (TReferenceControllerBase<1> *)0x0;
                                pFVar25 = FText::AsNumber(&local_228,local_5d0,
                                                          (FNumberFormattingOptions *)0x0,&local_4f8
                                                         );
                                local_508.Object = (FCulture *)0x0;
                                local_508.SharedReferenceCount.ReferenceController =
                                     (TReferenceControllerBase<1> *)0x0;
                                pFVar26 = FText::AsNumber(&local_218,uVar35,
                                                          (FNumberFormattingOptions *)0x0,&local_508
                                                         );
                                pFVar27 = FText::AsLocalizable_Advanced_LocText
                                                    (&local_310,L"InterchangeGroomCacheFactory",
                                                     L"ImportGroomCacheFrame",
                                                     L"Importing {2} frame {0} of {1}");
                                pFVar28 = FTextFormat::FTextFormat(&local_268,pFVar27,Default);
                                FTextBuilder::AppendLineFormat<FText,FText,FText>
                                          (&local_6a8,pFVar28,pFVar26,pFVar25,pFVar20);
                                if (local_310.TextData.Reference != (ITextData *)0x0) {
                                  (**(code **)((longlong)*local_310.TextData.Reference + 0x10))();
                                }
                                SharedPointerInternals::TReferenceControllerBase<1>::
                                ReleaseSharedReferenceNoInline
                                          (local_508.SharedReferenceCount.ReferenceController);
                                SharedPointerInternals::TReferenceControllerBase<1>::
                                ReleaseSharedReferenceNoInline
                                          (local_4f8.SharedReferenceCount.ReferenceController);
                                pFVar20 = FTextBuilder::ToText(&local_6a8,&local_300);
                                FSlowTask::EnterProgressFrame(&local_2d8,fVar6,pFVar20);
                                if (local_300.TextData.Reference != (ITextData *)0x0) {
                                  (**(code **)((longlong)*local_300.TextData.Reference + 0x10))();
                                }
                                pFVar10 = local_520;
                                ::FString::FString(&local_588,&local_520->UniqueId);
                                local_578 = pFVar10->Type;
                                local_574 = uVar35;
                                (**(code **)(*local_6b0 + 0x10))(local_6b0,&local_1f8);
                                if (local_e8 == '\0') {
                                  pFVar20 = FText::AsLocalizable_Advanced_LocText
                                                      (&local_3e8,L"InterchangeGroomCacheFactory",
                                                       L"GroomCacheFactory_NoPayload",
                                                       L"Missing payload for frame {0}");
                                  pFVar28 = FTextFormat::FTextFormat(&local_238,pFVar20,Default);
                                  local_4a8.Type = Int;
                                  local_4a8.field1_0x8 =
                                       (FFormatArgumentValue_u_8)(longlong)(int)local_6cc;
                                  local_4a8.TextValue.field0_0x0.TypedValue.TextData.Reference =
                                       (TRefCountPtr<ITextData>)(ITextData *)0x0;
                                  local_4a8.TextValue.field0_0x0.TypedValue.Flags = 0;
                                  local_610.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                                  local_610.ArrayNum = 1;
                                  UE::Core::Private::
                                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                            (0x20,8,1,0,&local_610.AllocatorInstance,1,
                                             &local_610.ArrayMax);
                                  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                                            (local_610.AllocatorInstance.Data,&local_4a8,1);
                                  local_4b8.TextFormatData.Object = (pFVar28->TextFormatData).Object
                                  ;
                                  local_4b8.TextFormatData.SharedReferenceCount.ReferenceController
                                       = (pFVar28->TextFormatData).SharedReferenceCount.
                                         ReferenceController;
                                  if (local_4b8.TextFormatData.SharedReferenceCount.
                                      ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                                    LOCK();
                                    (local_4b8.TextFormatData.SharedReferenceCount.
                                    ReferenceController)->SharedReferenceCount =
                                         (atomic<int>)
                                         ((int)(local_4b8.TextFormatData.SharedReferenceCount.
                                               ReferenceController)->SharedReferenceCount + 1);
                                    UNLOCK();
                                  }
                                  FText::Format(&local_518,&local_4b8,&local_610);
                                  DestructItems<FFormatArgumentValue,int>
                                            ((FFormatArgumentValue *)
                                             local_610.AllocatorInstance.Data,local_610.ArrayNum);
                                  if ((FFormatArgumentValue *)local_610.AllocatorInstance.Data !=
                                      (FFormatArgumentValue *)0x0) {
                                    FMemory::Free(local_610.AllocatorInstance.Data);
                                  }
                                  if (local_4a8.TextValue.field0_0x0.TypedValue.TextData.Reference
                                      != (ITextData *)0x0) {
                                    (**(code **)((longlong)
                                                 *(ITextData *)
                                                  local_4a8.TextValue.field0_0x0.TypedValue.TextData
                                                  .Reference + 0x10))();
                                  }
                                  SharedPointerInternals::TReferenceControllerBase<1>::
                                  ReleaseSharedReferenceNoInline
                                            ((pFVar28->TextFormatData).SharedReferenceCount.
                                             ReferenceController);
                                  FText::operator=(&local_600,&local_518);
                                  if (local_518.TextData.Reference != (ITextData *)0x0) {
                                    (**(code **)((longlong)*local_518.TextData.Reference + 0x10))();
                                  }
                                  if (local_3e8.TextData.Reference != (ITextData *)0x0) {
                                    (**(code **)((longlong)*local_3e8.TextData.Reference + 0x10))();
                                  }
LAB_14e6c0847:
                                  if (local_e8 != '\0') {
                                    FHairDescription::~FHairDescription(&local_1f8);
                                  }
                                  if (local_588.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_588.Data.AllocatorInstance.Data);
                                  }
                                  DestructItems<FText,int>
                                            ((FText *)local_6a8.Lines.AllocatorInstance.Data,
                                             local_6a8.Lines.ArrayNum);
                                  if ((FText *)local_6a8.Lines.AllocatorInstance.Data !=
                                      (FText *)0x0) {
                                    FMemory::Free(local_6a8.Lines.AllocatorInstance.Data);
                                  }
                                  if (bVar11) {
                                    FCpuProfilerTrace::OutputEndEvent();
                                  }
                                  pUVar8 = local_638;
                                  if (local_638 == local_6b8) goto LAB_14e6c0971;
                                  pFVar32 = FUObjectArray::IndexToObject
                                                      (&GUObjectArray,
                                                       *(int *)((longlong)&local_638->_padding_ + 4)
                                                      );
                                  if ((((ulonglong)((pFVar32->field0_0x0).FlagsAndRefCount >> 0x20)
                                        >> 0x1e & 1) != 0) &&
                                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("!IsRooted()",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                                                  ,0xb8,L""), bVar11)) {
                                    pcVar5 = (code *)swi(3);
                                    pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                    return pFVar21;
                                  }
                                  UObjectBase::AtomicallySetFlags
                                            ((UObjectBase *)pUVar8,RF_MirroredGarbage);
                                  pFVar32 = FUObjectArray::IndexToObject
                                                      (&GUObjectArray,
                                                       *(int *)((longlong)&pUVar8->_padding_ + 4));
                                  goto LAB_14e6c0910;
                                }
                                local_5c8.HairGroups.AllocatorInstance.Data =
                                     (FScriptContainerElement *)0x0;
                                local_5c8.HairGroups.ArrayNum = 0;
                                local_5c8.HairGroups.ArrayMax = 0;
                                bVar12 = FGroomBuilder::BuildHairDescriptionGroups
                                                   (&local_1f8,&local_5c8,false);
                                if (!bVar12) {
                                  pFVar20 = FText::AsLocalizable_Advanced_LocText
                                                      (&local_3f8,L"InterchangeGroomCacheFactory",
                                                                                                              
                                                  L"GroomCacheFactory_HairDescriptionGroupsBuildFailure"
                                                  ,L"Failed to build HairDescriptionGroups.");
                                  FText::operator=(&local_600,pFVar20);
LAB_14e6c0682:
                                  if (local_3f8.TextData.Reference != (ITextData *)0x0) {
                                    (**(code **)((longlong)*local_3f8.TextData.Reference + 0x10))();
                                  }
                                  DestructItems<FHairDescriptionGroup,int>
                                            ((FHairDescriptionGroup *)
                                             local_5c8.HairGroups.AllocatorInstance.Data,
                                             local_5c8.HairGroups.ArrayNum);
                                  if ((FHairDescriptionGroup *)
                                      local_5c8.HairGroups.AllocatorInstance.Data !=
                                      (FHairDescriptionGroup *)0x0) {
                                    FMemory::Free(local_5c8.HairGroups.AllocatorInstance.Data);
                                  }
                                  goto LAB_14e6c0847;
                                }
                                iVar34 = local_5c8.HairGroups.ArrayNum;
                                uVar40 = local_5c8.HairGroups._8_8_ & 0xffffffff;
                                local_6d0 = local_5c8.HairGroups.ArrayNum;
                                uVar35 = pTVar24->ArrayNum;
                                if (local_5c8.HairGroups.ArrayNum != uVar35) {
                                  pFVar20 = FText::AsLocalizable_Advanced_LocText
                                                      (&local_408,L"InterchangeGroomCacheFactory",
                                                       L"GroomCacheFactory_GroupCountMismatch",
                                                                                                              
                                                  L"GroomCache does not have the same number of groups as the static groom ({0} instead of {1})."
                                                  );
                                  pFVar28 = FTextFormat::FTextFormat(&local_248,pFVar20,Default);
                                  local_488._0_4_ = 1;
                                  local_4e8 = (FFormatArgumentValue *)local_488;
                                  local_478 = (longlong *)0x0;
                                  pFStack_4e0 = &local_448;
                                  local_470 = 0;
                                  local_468 = 0;
                                  local_458 = (longlong *)0x0;
                                  local_450 = 0;
                                  local_488._8_8_ = uVar40;
                                  local_460 = (longlong)(int)uVar35;
                                  local_418._First = local_4e8;
                                  local_418._Last = pFStack_4e0;
                                  pTVar31 = TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_>
                                            ::
                                            TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_>
                                                      (&local_530,&local_418);
                                  local_4d8.TextFormatData.Object = (pFVar28->TextFormatData).Object
                                  ;
                                  local_4d8.TextFormatData.SharedReferenceCount.ReferenceController
                                       = (pFVar28->TextFormatData).SharedReferenceCount.
                                         ReferenceController;
                                  if (local_4d8.TextFormatData.SharedReferenceCount.
                                      ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                                    LOCK();
                                    (local_4d8.TextFormatData.SharedReferenceCount.
                                    ReferenceController)->SharedReferenceCount =
                                         (atomic<int>)
                                         ((int)(local_4d8.TextFormatData.SharedReferenceCount.
                                               ReferenceController)->SharedReferenceCount + 1);
                                    UNLOCK();
                                  }
                                  FText::Format(&local_4c8,&local_4d8,pTVar31);
                                  DestructItems<FFormatArgumentValue,int>
                                            ((FFormatArgumentValue *)
                                             local_530.AllocatorInstance.Data,local_530.ArrayNum);
                                  if ((FFormatArgumentValue *)local_530.AllocatorInstance.Data !=
                                      (FFormatArgumentValue *)0x0) {
                                    FMemory::Free(local_530.AllocatorInstance.Data);
                                  }
                                  if (local_458 != (longlong *)0x0) {
                                    (**(code **)(*local_458 + 0x10))();
                                  }
                                  if (local_478 != (longlong *)0x0) {
                                    (**(code **)(*local_478 + 0x10))();
                                  }
                                  SharedPointerInternals::TReferenceControllerBase<1>::
                                  ReleaseSharedReferenceNoInline
                                            ((pFVar28->TextFormatData).SharedReferenceCount.
                                             ReferenceController);
                                  FText::operator=(&local_600,&local_4c8);
                                  local_3f8.TextData.Reference = local_408.TextData.Reference;
                                  if (local_4c8.TextData.Reference != (ITextData *)0x0) {
                                    (**(code **)((longlong)*local_4c8.TextData.Reference + 0x10))();
                                    local_3f8.TextData.Reference = local_408.TextData.Reference;
                                  }
                                  goto LAB_14e6c0682;
                                }
                                pTVar29 = UGroomAsset::GetHairGroupsInfo(local_6c0);
                                local_690.Data = (FScriptContainerElement *)0x0;
                                iVar13 = pTVar29->ArrayNum;
                                pFVar3 = (FHairGroupInfoWithVisibility *)
                                         (pTVar29->AllocatorInstance).Data;
                                local_688 = iVar13;
                                if (iVar13 == 0) {
                                  local_684 = 0;
                                }
                                else {
                                  UE::Core::Private::
                                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                            (0x40,8,iVar13,0,&local_690,iVar13,&local_684);
                                  ConstructItems<FHairGroupInfoWithVisibility,FHairGroupInfoWithVisibility,int>
                                            (local_690.Data,pFVar3,iVar13);
                                }
                                local_6f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                                local_6f8.ArrayNum = 0;
                                local_6f8.ArrayMax = 0;
                                if (iVar34 < 1) {
                                  if (iVar34 < 0) {
                    /* WARNING: Subroutine does not return */
                                    UE::Core::Private::OnInvalidArrayNum(uVar40);
                                  }
                                }
                                else {
                                  iVar13 = UE::Core::Private::
                                           ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                     (800,8,iVar34,&local_6f8.AllocatorInstance,
                                                      &local_6f8.ArrayNum,&local_6f8.ArrayMax);
                                  DefaultConstructItems<FGroomCacheInputData,int>
                                            (local_6f8.AllocatorInstance.Data +
                                             (longlong)iVar13 * 800,iVar34);
                                }
                                pUVar22 = local_6c0;
                                uVar35 = 0;
                                if (iVar34 != 0) {
                                  do {
                                    uVar37 = ~uVar35 >> 0x1f;
                                    uVar14 = 0;
                                    if ((int)uVar35 < local_6f8.ArrayNum) {
                                      uVar14 = uVar37;
                                    }
                                    if ((uVar14 == 0) &&
                                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                           ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                      pcVar5 = (code *)swi(3);
                                      pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                      return pFVar21;
                                    }
                                    lVar18 = (longlong)(int)uVar35 * 800;
                                    local_6c8 = (FHairStrandsDatas *)
                                                (local_6f8.AllocatorInstance.Data + lVar18 + 400);
                                    uVar14 = 0;
                                    if ((int)uVar35 < local_6f8.ArrayNum) {
                                      uVar14 = uVar37;
                                    }
                                    if ((uVar14 == 0) &&
                                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                           ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                      pcVar5 = (code *)swi(3);
                                      pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                      return pFVar21;
                                    }
                                    pFVar36 = (FHairStrandsDatas *)
                                              (local_6f8.AllocatorInstance.Data + lVar18);
                                    uVar15 = 0;
                                    uVar14 = uVar15;
                                    if ((int)uVar35 < local_688) {
                                      uVar14 = uVar37;
                                    }
                                    if ((uVar14 == 0) &&
                                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                           ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                      pcVar5 = (code *)swi(3);
                                      pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                      return pFVar21;
                                    }
                                    pFVar41 = (FHairGroupInfo *)
                                              (local_690.Data + (longlong)(int)uVar35 * 0x40);
                                    pTVar30 = UGroomAsset::GetHairGroupsInterpolation(pUVar22);
                                    uVar14 = uVar15;
                                    if ((int)uVar35 < pTVar30->ArrayNum) {
                                      uVar14 = ~uVar35 >> 0x1f;
                                    }
                                    if ((uVar14 == 0) &&
                                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                           ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                      pcVar5 = (code *)swi(3);
                                      pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                      return pFVar21;
                                    }
                                    pFVar4 = (pTVar30->AllocatorInstance).Data;
                                    uVar14 = uVar15;
                                    if ((int)uVar35 < local_5c8.HairGroups.ArrayNum) {
                                      uVar14 = ~uVar35 >> 0x1f;
                                    }
                                    if ((uVar14 == 0) &&
                                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                           ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                      pcVar5 = (code *)swi(3);
                                      pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                      return pFVar21;
                                    }
                                    FGroomBuilder::BuildData
                                              ((FHairDescriptionGroup *)
                                               (local_5c8.HairGroups.AllocatorInstance.Data +
                                               (longlong)(int)uVar35 * 0x318),
                                               (FHairGroupsInterpolation *)
                                               (pFVar4 + (longlong)(int)uVar35 * 0x28),pFVar41,
                                               pFVar36,local_6c8,true,true,false);
                                    uVar35 = uVar35 + 1;
                                    uVar14 = local_6d0;
                                    uVar37 = 0;
                                  } while (uVar35 < (uint)iVar34);
                                  do {
                                    local_6c0 = pUVar22;
                                    uVar35 = 0;
                                    if (local_6d7[0] == Strands) {
                                      uVar14 = uVar15;
                                      if ((int)uVar37 < pTVar24->ArrayNum) {
                                        uVar14 = ~uVar37 >> 0x1f;
                                      }
                                      if ((uVar14 == 0) &&
                                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                             ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                        pcVar5 = (code *)swi(3);
                                        pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                        return pFVar21;
                                      }
                                      if ((*(uint *)((pTVar24->AllocatorInstance).Data +
                                                    (longlong)(int)uVar37 * 2000 + 800) & 0x100) ==
                                          0) {
                                        local_6c8 = (FHairStrandsDatas *)
                                                    ((ulonglong)local_6c8 & 0xffffffff00000000);
                                      }
                                      else {
                                        uVar14 = uVar35;
                                        if ((int)uVar37 < local_6f8.ArrayNum) {
                                          uVar14 = ~uVar37 >> 0x1f;
                                        }
                                        if ((uVar14 == 0) &&
                                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                          pcVar5 = (code *)swi(3);
                                          pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                          return pFVar21;
                                        }
                                        local_6c8 = (FHairStrandsDatas *)
                                                    CONCAT44(local_6c8._4_4_,
                                                             *(undefined4 *)
                                                              (local_6f8.AllocatorInstance.Data +
                                                              (longlong)(int)uVar37 * 800 + 0x80));
                                      }
                                      uVar14 = uVar35;
                                      if ((int)uVar37 < local_6f8.ArrayNum) {
                                        uVar14 = ~uVar37 >> 0x1f;
                                      }
                                      if ((uVar14 == 0) &&
                                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                             ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                        pcVar5 = (code *)swi(3);
                                        pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                        return pFVar21;
                                      }
                                      iVar34 = *(int *)(local_6f8.AllocatorInstance.Data +
                                                       (longlong)(int)uVar37 * 800 + 0x80);
                                      uVar14 = uVar15;
                                      if ((int)uVar37 < pTVar24->ArrayNum) {
                                        uVar14 = ~uVar37 >> 0x1f;
                                      }
                                      if ((uVar14 == 0) &&
                                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                             ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                        pcVar5 = (code *)swi(3);
                                        pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                        return pFVar21;
                                      }
                                      iVar13 = *(int *)((pTVar24->AllocatorInstance).Data +
                                                       (longlong)(int)uVar37 * 2000 + 0x2c8);
                                      uVar14 = uVar15;
                                      if ((int)uVar37 < local_6f8.ArrayNum) {
                                        uVar14 = ~uVar37 >> 0x1f;
                                      }
                                      if ((uVar14 == 0) &&
                                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                             ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                        pcVar5 = (code *)swi(3);
                                        pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                        return pFVar21;
                                      }
                                      iVar38 = (int)local_6c8 +
                                               *(int *)(local_6f8.AllocatorInstance.Data +
                                                       (longlong)(int)uVar37 * 800 + 8);
                                      uVar14 = uVar15;
                                      if ((int)uVar37 < pTVar24->ArrayNum) {
                                        uVar14 = ~uVar37 >> 0x1f;
                                      }
                                      if ((uVar14 == 0) &&
                                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                             ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                        pcVar5 = (code *)swi(3);
                                        pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                        return pFVar21;
                                      }
                                      if ((iVar34 != iVar13) ||
                                         (uVar14 = local_6d0,
                                         iVar38 != *(int *)((pTVar24->AllocatorInstance).Data +
                                                           (longlong)(int)uVar37 * 2000 + 0x2cc))) {
                                        if ((int)uVar37 < pTVar24->ArrayNum) {
                                          uVar15 = ~uVar37 >> 0x1f;
                                        }
                                        if ((uVar15 == 0) &&
                                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                          pcVar5 = (code *)swi(3);
                                          pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                          return pFVar21;
                                        }
                                        uVar14 = *(uint *)((pTVar24->AllocatorInstance).Data +
                                                          (longlong)(int)uVar37 * 2000 + 0x2cc);
                                        uVar15 = uVar35;
                                        if ((int)uVar37 < pTVar24->ArrayNum) {
                                          uVar15 = ~uVar37 >> 0x1f;
                                        }
                                        if ((uVar15 == 0) &&
                                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                          pcVar5 = (code *)swi(3);
                                          pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                          return pFVar21;
                                        }
                                        uVar15 = *(uint *)((pTVar24->AllocatorInstance).Data +
                                                          (longlong)(int)uVar37 * 2000 + 0x2c8);
                                        uVar39 = uVar35;
                                        if ((int)uVar37 < local_6f8.ArrayNum) {
                                          uVar39 = ~uVar37 >> 0x1f;
                                        }
                                        if ((uVar39 == 0) &&
                                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                          pcVar5 = (code *)swi(3);
                                          pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                          return pFVar21;
                                        }
                                        uVar39 = (int)local_6c8 +
                                                 *(int *)(local_6f8.AllocatorInstance.Data +
                                                         (longlong)(int)uVar37 * 800 + 8);
                                        if ((int)uVar37 < local_6f8.ArrayNum) {
                                          uVar35 = ~uVar37 >> 0x1f;
                                        }
                                        if ((uVar35 == 0) &&
                                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                          pcVar5 = (code *)swi(3);
                                          pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                          return pFVar21;
                                        }
                                        uVar35 = *(uint *)(local_6f8.AllocatorInstance.Data +
                                                          (longlong)(int)uVar37 * 800 + 0x80);
                                        pFVar20 = FText::AsLocalizable_Advanced_LocText
                                                            ((FText *)&local_448,
                                                             L"InterchangeGroomCacheFactory",
                                                                                                                          
                                                  L"GroomCacheFactory_StrandsValidationFailure",
                                                  L"GroomCache frame {0} does not have the same number of curves ({1}) or vertices ({2}) for the strands as the static groom ({3} and {4} respectively)."
                                                  );
                                        pFVar28 = FTextFormat::FTextFormat
                                                            (&local_278,pFVar20,Default);
                                        pFVar20 = FText::
                                                  Format<int,unsigned_int,unsigned_int,unsigned_int,unsigned_int>
                                                            (&local_2f0,pFVar28,local_6cc,uVar35,
                                                             uVar39,uVar15,uVar14);
                                        FText::operator=(&local_600,pFVar20);
                                        local_428.TextData.Reference = (ITextData *)local_448._0_8_;
                                        if (local_2f0.TextData.Reference != (ITextData *)0x0) {
                                          (**(code **)((longlong)*local_2f0.TextData.Reference +
                                                      0x10))();
                                          local_428.TextData.Reference =
                                               (ITextData *)local_448._0_8_;
                                        }
LAB_14e6c04b5:
                                        if (local_428.TextData.Reference != (ITextData *)0x0) {
                                          (**(code **)((longlong)*local_428.TextData.Reference +
                                                      0x10))();
                                        }
                                        DestructItems<FGroomCacheInputData,int>
                                                  ((FGroomCacheInputData *)
                                                   local_6f8.AllocatorInstance.Data,
                                                   local_6f8.ArrayNum);
                                        if ((FGroomCacheInputData *)local_6f8.AllocatorInstance.Data
                                            != (FGroomCacheInputData *)0x0) {
                                          FMemory::Free(local_6f8.AllocatorInstance.Data);
                                        }
                                        DestructItems<FHairGroupInfoWithVisibility,int>
                                                  ((FHairGroupInfoWithVisibility *)local_690.Data,
                                                   local_688);
                                        if ((FHairGroupInfoWithVisibility *)local_690.Data !=
                                            (FHairGroupInfoWithVisibility *)0x0) {
                                          FMemory::Free(local_690.Data);
                                        }
                                        DestructItems<FHairDescriptionGroup,int>
                                                  ((FHairDescriptionGroup *)
                                                   local_5c8.HairGroups.AllocatorInstance.Data,
                                                   local_5c8.HairGroups.ArrayNum);
                                        if ((FHairDescriptionGroup *)
                                            local_5c8.HairGroups.AllocatorInstance.Data !=
                                            (FHairDescriptionGroup *)0x0) {
                                          FMemory::Free(local_5c8.HairGroups.AllocatorInstance.Data)
                                          ;
                                        }
                                        goto LAB_14e6c0847;
                                      }
                                    }
                                    else if (local_6d7[0] == Guides) {
                                      uVar14 = uVar35;
                                      if ((int)uVar37 < pTVar24->ArrayNum) {
                                        uVar14 = ~uVar37 >> 0x1f;
                                      }
                                      if ((uVar14 == 0) &&
                                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                             ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                        pcVar5 = (code *)swi(3);
                                        pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                        return pFVar21;
                                      }
                                      if ((*(uint *)((pTVar24->AllocatorInstance).Data +
                                                    (longlong)(int)uVar37 * 2000 + 0x60) & 0x100) ==
                                          0) {
                                        local_6c8 = (FHairStrandsDatas *)
                                                    ((ulonglong)local_6c8 & 0xffffffff00000000);
                                      }
                                      else {
                                        uVar14 = uVar35;
                                        if ((int)uVar37 < local_6f8.ArrayNum) {
                                          uVar14 = ~uVar37 >> 0x1f;
                                        }
                                        if ((uVar14 == 0) &&
                                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                          pcVar5 = (code *)swi(3);
                                          pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                          return pFVar21;
                                        }
                                        local_6c8 = (FHairStrandsDatas *)
                                                    CONCAT44(local_6c8._4_4_,
                                                             *(undefined4 *)
                                                              (local_6f8.AllocatorInstance.Data +
                                                              (longlong)(int)uVar37 * 800 + 0x210));
                                      }
                                      uVar14 = uVar35;
                                      if ((int)uVar37 < local_6f8.ArrayNum) {
                                        uVar14 = ~uVar37 >> 0x1f;
                                      }
                                      if ((uVar14 == 0) &&
                                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                             ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                        pcVar5 = (code *)swi(3);
                                        pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                        return pFVar21;
                                      }
                                      iVar34 = *(int *)(local_6f8.AllocatorInstance.Data +
                                                       (longlong)(int)uVar37 * 800 + 0x210);
                                      uVar14 = uVar35;
                                      if ((int)uVar37 < pTVar24->ArrayNum) {
                                        uVar14 = ~uVar37 >> 0x1f;
                                      }
                                      if ((uVar14 == 0) &&
                                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                             ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                        pcVar5 = (code *)swi(3);
                                        pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                        return pFVar21;
                                      }
                                      iVar13 = *(int *)((pTVar24->AllocatorInstance).Data +
                                                       (longlong)(int)uVar37 * 2000 + 8);
                                      uVar14 = uVar35;
                                      if ((int)uVar37 < local_6f8.ArrayNum) {
                                        uVar14 = ~uVar37 >> 0x1f;
                                      }
                                      if ((uVar14 == 0) &&
                                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                             ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                        pcVar5 = (code *)swi(3);
                                        pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                        return pFVar21;
                                      }
                                      iVar38 = (int)local_6c8 +
                                               *(int *)(local_6f8.AllocatorInstance.Data +
                                                       (longlong)(int)uVar37 * 800 + 0x198);
                                      uVar14 = uVar35;
                                      if ((int)uVar37 < pTVar24->ArrayNum) {
                                        uVar14 = ~uVar37 >> 0x1f;
                                      }
                                      if ((uVar14 == 0) &&
                                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                             ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                        pcVar5 = (code *)swi(3);
                                        pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                        return pFVar21;
                                      }
                                      if ((iVar34 != iVar13) ||
                                         (uVar14 = local_6d0,
                                         iVar38 != *(int *)((pTVar24->AllocatorInstance).Data +
                                                           (longlong)(int)uVar37 * 2000 + 0xc))) {
                                        uVar14 = uVar35;
                                        if ((int)uVar37 < pTVar24->ArrayNum) {
                                          uVar14 = ~uVar37 >> 0x1f;
                                        }
                                        if ((uVar14 == 0) &&
                                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                          pcVar5 = (code *)swi(3);
                                          pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                          return pFVar21;
                                        }
                                        uVar14 = *(uint *)((pTVar24->AllocatorInstance).Data +
                                                          (longlong)(int)uVar37 * 2000 + 0xc);
                                        uVar15 = uVar35;
                                        if ((int)uVar37 < pTVar24->ArrayNum) {
                                          uVar15 = ~uVar37 >> 0x1f;
                                        }
                                        if ((uVar15 == 0) &&
                                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                          pcVar5 = (code *)swi(3);
                                          pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                          return pFVar21;
                                        }
                                        uVar15 = *(uint *)((pTVar24->AllocatorInstance).Data +
                                                          (longlong)(int)uVar37 * 2000 + 8);
                                        uVar39 = uVar35;
                                        if ((int)uVar37 < local_6f8.ArrayNum) {
                                          uVar39 = ~uVar37 >> 0x1f;
                                        }
                                        if ((uVar39 == 0) &&
                                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                          pcVar5 = (code *)swi(3);
                                          pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                          return pFVar21;
                                        }
                                        uVar39 = (int)local_6c8 +
                                                 *(int *)(local_6f8.AllocatorInstance.Data +
                                                         (longlong)(int)uVar37 * 800 + 0x198);
                                        if ((int)uVar37 < local_6f8.ArrayNum) {
                                          uVar35 = ~uVar37 >> 0x1f;
                                        }
                                        if ((uVar35 == 0) &&
                                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                          pcVar5 = (code *)swi(3);
                                          pFVar21 = (FImportAssetResult *)(*pcVar5)();
                                          return pFVar21;
                                        }
                                        uVar35 = *(uint *)(local_6f8.AllocatorInstance.Data +
                                                          (longlong)(int)uVar37 * 800 + 0x210);
                                        pFVar20 = FText::AsLocalizable_Advanced_LocText
                                                            (&local_428,
                                                             L"InterchangeGroomCacheFactory",
                                                                                                                          
                                                  L"GroomCacheFactory_GuidesValidationFailure",
                                                  L"GroomCache frame {0} does not have the same number of curves ({1}) or vertices ({2}) for the guides as the static groom ({3} and {4} respectively)."
                                                  );
                                        pFVar28 = FTextFormat::FTextFormat
                                                            (&local_258,pFVar20,Default);
                                        pFVar20 = FText::
                                                  Format<int,unsigned_int,unsigned_int,unsigned_int,unsigned_int>
                                                            ((FText *)((longlong)&local_448 + 0x10),
                                                             pFVar28,local_6cc,uVar35,uVar39,uVar15,
                                                             uVar14);
                                        FText::operator=(&local_600,pFVar20);
                                        if (local_448.TextValue.field0_0x0.TypedValue.TextData.
                                            Reference != (ITextData *)0x0) {
                                          (**(code **)((longlong)
                                                       *(ITextData *)
                                                        local_448.TextValue.field0_0x0.TypedValue.
                                                        TextData.Reference + 0x10))();
                                        }
                                        goto LAB_14e6c04b5;
                                      }
                                    }
                                    uVar37 = uVar37 + 1;
                                    pUVar22 = local_6c0;
                                  } while (uVar37 < uVar14);
                                }
                                FGroomCacheProcessor::AddGroomSample(&local_570,&local_6f8);
                                DestructItems<FGroomCacheInputData,int>
                                          ((FGroomCacheInputData *)local_6f8.AllocatorInstance.Data,
                                           local_6f8.ArrayNum);
                                if ((FGroomCacheInputData *)local_6f8.AllocatorInstance.Data !=
                                    (FGroomCacheInputData *)0x0) {
                                  FMemory::Free(local_6f8.AllocatorInstance.Data);
                                }
                                DestructItems<FHairGroupInfoWithVisibility,int>
                                          ((FHairGroupInfoWithVisibility *)local_690.Data,local_688)
                                ;
                                if ((FHairGroupInfoWithVisibility *)local_690.Data !=
                                    (FHairGroupInfoWithVisibility *)0x0) {
                                  FMemory::Free(local_690.Data);
                                }
                                DestructItems<FHairDescriptionGroup,int>
                                          ((FHairDescriptionGroup *)
                                           local_5c8.HairGroups.AllocatorInstance.Data,
                                           local_5c8.HairGroups.ArrayNum);
                                if ((FHairDescriptionGroup *)
                                    local_5c8.HairGroups.AllocatorInstance.Data !=
                                    (FHairDescriptionGroup *)0x0) {
                                  FMemory::Free(local_5c8.HairGroups.AllocatorInstance.Data);
                                }
                                if (local_e8 != '\0') {
                                  FHairDescription::~FHairDescription(&local_1f8);
                                }
                                if (local_588.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_588.Data.AllocatorInstance.Data);
                                }
                                DestructItems<FText,int>
                                          ((FText *)local_6a8.Lines.AllocatorInstance.Data,
                                           local_6a8.Lines.ArrayNum);
                                if ((FText *)local_6a8.Lines.AllocatorInstance.Data != (FText *)0x0)
                                {
                                  FMemory::Free(local_6a8.Lines.AllocatorInstance.Data);
                                }
                                if (bVar11) {
                                  FCpuProfilerTrace::OutputEndEvent();
                                }
                                uVar35 = local_6cc + 1;
                                local_6cc = uVar35;
                              } while ((int)uVar35 < (int)(local_680.EndFrame + 1U));
                            }
                            pUVar8 = local_638;
                            FGroomCacheProcessor::TransferChunks(&local_570,local_638);
                            UGroomCache::SetGroomAnimationInfo(pUVar8,&local_680);
                            __return_storage_ptr__->ImportedObject = (UObject *)pUVar8;
                            if (local_600.TextData.Reference != (ITextData *)0x0) {
                              (**(code **)((longlong)*local_600.TextData.Reference + 0x10))();
                            }
                            DestructItems<FGroomCacheChunk,int>
                                      ((FGroomCacheChunk *)local_570.Chunks.AllocatorInstance.Data,
                                       local_570.Chunks.ArrayNum);
                            if ((FGroomCacheChunk *)local_570.Chunks.AllocatorInstance.Data !=
                                (FGroomCacheChunk *)0x0) {
                              FMemory::Free(local_570.Chunks.AllocatorInstance.Data);
                            }
                            FSlowTask::Destroy(&local_2d8);
                            if (local_2d8.FrameMessage.TextData.Reference != (ITextData *)0x0) {
                              (**(code **)((longlong)*local_2d8.FrameMessage.TextData.Reference +
                                          0x10))();
                            }
                            if (local_2d8.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
                              (**(code **)((longlong)*local_2d8.DefaultMessage.TextData.Reference +
                                          0x10))();
                            }
                            if (local_5f0.SubPathString.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_5f0.SubPathString.Data.AllocatorInstance.Data);
                            }
                            if ((local_630.bIsSet != false) &&
                               (local_630.TypedValue.UniqueId.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0)) {
                              FMemory::Free(local_630.TypedValue.UniqueId.Data.AllocatorInstance.
                                            Data);
                            }
                            DestructItems<FString,int>
                                      ((FString *)local_6e8.AllocatorInstance.Data,
                                       local_6e8.ArrayNum);
                            if (local_6e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                            {
                              FMemory::Free(local_6e8.AllocatorInstance.Data);
                            }
                            if (!bVar42) {
                              return __return_storage_ptr__;
                            }
                            FCpuProfilerTrace::OutputEndEvent();
                            return __return_storage_ptr__;
                          }
                          pFVar20 = FText::AsLocalizable_Advanced_LocText
                                              (&local_330,L"InterchangeGroomCacheFactory",
                                               L"GroomCacheFactory_NoImportType",
                                               L"No GroomCache type was specified for import.");
                          `UInterchangeGroomCacheFactory::BeginImportAsset_GameThread'::__l2::
                          <lambda_1>::operator()(&local_650,pFVar20);
                          if (local_330.TextData.Reference != (ITextData *)0x0) {
                            (**(code **)((longlong)*local_330.TextData.Reference + 0x10))();
                          }
                          goto LAB_14e6bf1dd;
                        }
                      }
                      pFVar20 = FText::AsLocalizable_Advanced_LocText
                                          (&local_3d8,L"InterchangeGroomCacheFactory",
                                           L"GroomCacheFactory_MissingGroomAsset",
                                           L"Could not retrieve groom asset.");
                      `UInterchangeGroomCacheFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>
                      ::operator()(&local_650,pFVar20);
                      if (local_3d8.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*local_3d8.TextData.Reference + 0x10))();
                      }
                    }
                    else {
                      local_660.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_660.ArrayNum = 0;
                      local_660.ArrayMax = 0;
                      UInterchangeFactoryBaseNode::GetFactoryDependencies
                                ((UInterchangeFactoryBaseNode *)this_01,&local_660);
                      if ((0 < local_660.ArrayNum) &&
                         (this_03 = (UInterchangeFactoryBaseNode *)
                                    UInterchangeBaseNodeContainer::GetNode
                                              (param_1->NodeContainer,
                                               (FString *)local_660.AllocatorInstance.Data),
                         this_03 != (UInterchangeFactoryBaseNode *)0x0)) {
                        pUVar16 = Z_Construct_UClass_UInterchangeGroomFactoryNode_NoRegister();
                        iVar34 = (int)pUVar16->_padding_;
                        if ((iVar34 <= *(int *)(this_03->_padding_ + 0x38)) &&
                           (((longlong *)
                             *(undefined1 **)
                              (*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar34 * 8) ==
                             &pUVar16->_padding_ &&
                            (bVar11 = UInterchangeFactoryBaseNode::GetCustomReferenceObject
                                                (this_03,&local_5f0), bVar11)))) {
                          DestructItems<FString,int>
                                    ((FString *)local_660.AllocatorInstance.Data,local_660.ArrayNum)
                          ;
                          if (local_660.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_660.AllocatorInstance.Data);
                          }
                          goto LAB_14e6bf0a2;
                        }
                      }
                      pFVar20 = FText::AsLocalizable_Advanced_LocText
                                          (&local_360,L"InterchangeGroomCacheFactory",
                                           L"GroomCacheFactory_MissingGroomAssetDependency",
                                           L"Could not retrieve groom asset dependency.");
                      `UInterchangeGroomCacheFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>
                      ::operator()(&local_650,pFVar20);
                      if (local_360.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*local_360.TextData.Reference + 0x10))();
                      }
                      DestructItems<FString,int>
                                ((FString *)local_660.AllocatorInstance.Data,local_660.ArrayNum);
                      if (local_660.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_660.AllocatorInstance.Data);
                      }
                    }
LAB_14e6bf1dd:
                    if (local_5f0.SubPathString.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_5f0.SubPathString.Data.AllocatorInstance.Data);
                    }
                    goto LAB_14e6befc9;
                  }
                }
                pFVar20 = FText::AsLocalizable_Advanced_LocText
                                    (&local_3c8,L"InterchangeGroomCacheFactory",
                                     L"GroomCacheFactory_MissingGroomNode",L"Groom node not found.")
                ;
                `UInterchangeGroomCacheFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::
                operator()(&local_650,pFVar20);
                local_380.TextData.Reference = local_3c8.TextData.Reference;
              }
              if (local_380.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_380.TextData.Reference + 0x10))();
              }
              goto LAB_14e6beea6;
            }
          }
          pFVar20 = FText::AsLocalizable_Advanced_LocText
                              (&local_3b8,L"InterchangeGroomCacheFactory",
                               L"GroomCacheFactory_NodeClassMissmatch",
                               L"Asset node parameter class doesn\'t derive the UGroomCache class.")
          ;
          `UInterchangeGroomCacheFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
                    (&local_650,pFVar20);
          if (local_3b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_3b8.TextData.Reference + 0x10))();
          }
          goto LAB_14e6c0c1c;
        }
      }
      pFVar20 = FText::AsLocalizable_Advanced_LocText
                          (&local_3a8,L"InterchangeGroomCacheFactory",
                           L"GroomCacheFactory_AssetNodeNull",
                           L"Asset node parameter is not a UInterchangeGroomCacheFactoryNode.");
      `UInterchangeGroomCacheFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
                (&local_650,pFVar20);
      if (local_3a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3a8.TextData.Reference + 0x10))();
      }
      goto LAB_14e6c0c1c;
    }
  }
  pFVar20 = FText::AsLocalizable_Advanced_LocText
                      (&local_398,L"InterchangeGroomCacheFactory",
                       L"GroomCacheFactory_NoPayloadInterface",
                       L"The translator does not implement IInterchangeGroomPayloadInterface");
  `UInterchangeGroomCacheFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
            (&local_650,pFVar20);
  if (local_398.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_398.TextData.Reference + 0x10))();
  }
  goto LAB_14e6c0c1c;
  while( true ) {
    if (((ulonglong)pFVar32 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    bVar11 = lVar18 == (pFVar32->field0_0x0).FlagsAndRefCount;
    if (bVar11) {
      (pFVar32->field0_0x0).FlagsAndRefCount =
           (longlong)(int)uVar35 << 0x20 | (longlong)(int)lVar18 | 0x20000000000000;
    }
    UNLOCK();
    if (bVar11) break;
LAB_14e6c0910:
    lVar18 = (pFVar32->field0_0x0).FlagsAndRefCount;
    uVar35 = (uint)((ulonglong)lVar18 >> 0x20);
    if ((uVar35 >> 0x15 & 1) != 0) break;
  }
  pFVar32 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar8->_padding_ + 4));
  FUObjectItem::ClearRootFlags(pFVar32,Async);
LAB_14e6c0971:
  `UInterchangeGroomCacheFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
            (&local_650,&local_600);
  if (local_600.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_600.TextData.Reference + 0x10))();
  }
  DestructItems<FGroomCacheChunk,int>
            ((FGroomCacheChunk *)local_570.Chunks.AllocatorInstance.Data,local_570.Chunks.ArrayNum);
  if ((FGroomCacheChunk *)local_570.Chunks.AllocatorInstance.Data != (FGroomCacheChunk *)0x0) {
    FMemory::Free(local_570.Chunks.AllocatorInstance.Data);
  }
  FSlowTask::Destroy(&local_2d8);
  if (local_2d8.FrameMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2d8.FrameMessage.TextData.Reference + 0x10))();
  }
  if (local_2d8.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2d8.DefaultMessage.TextData.Reference + 0x10))();
  }
  if (local_5f0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f0.SubPathString.Data.AllocatorInstance.Data);
  }
LAB_14e6befc9:
  if ((local_630.bIsSet != false) &&
     (local_630.TypedValue.UniqueId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
  {
    FMemory::Free(local_630.TypedValue.UniqueId.Data.AllocatorInstance.Data);
  }
LAB_14e6beea6:
  DestructItems<FString,int>((FString *)local_6e8.AllocatorInstance.Data,local_6e8.ArrayNum);
  if (local_6e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.AllocatorInstance.Data);
  }
LAB_14e6c0c1c:
  if (bVar42) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ClearBackupSourceData @ 14e6c0fd0

void __thiscall
UInterchangeGroomCacheFactory::ClearBackupSourceData
          (UInterchangeGroomCacheFactory *this,UObject *param_1)

{
  return;
}

// GetFactoryAssetType @ 14e6c38b0

EInterchangeFactoryAssetType __thiscall
UInterchangeGroomCacheFactory::GetFactoryAssetType(UInterchangeGroomCacheFactory *this)

{
  return Grooms;
}

// GetFactoryClass @ 14e6c38d0

UClass * __thiscall
UInterchangeGroomCacheFactory::GetFactoryClass(UInterchangeGroomCacheFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGroomCache.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomCache",
               &Z_Registration_Info_UClass_UGroomCache.InnerSingleton,
               UGroomCache::StaticRegisterNativesUGroomCache,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGroomCache>,
               InternalVTableHelperCtorCaller<UGroomCache>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomCache.InnerSingleton;
}

// GetPrivateStaticClass @ 14e6c4ec0

UClass * __cdecl UInterchangeGroomCacheFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGroomCacheFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeGroomCacheFactory",
               &Z_Registration_Info_UClass_UInterchangeGroomCacheFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeGroomCacheFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGroomCacheFactory>,
               InternalVTableHelperCtorCaller<UInterchangeGroomCacheFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGroomCacheFactory.InnerSingleton;
}

// GetSourceFilenames @ 14e6c89b0

bool __thiscall
UInterchangeGroomCacheFactory::GetSourceFilenames
          (UInterchangeGroomCacheFactory *this,UObject *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// ReinstateSourceData @ 14e6d0bc0

void __thiscall
UInterchangeGroomCacheFactory::ReinstateSourceData
          (UInterchangeGroomCacheFactory *this,UObject *param_1)

{
  return;
}

// SetSourceFilename @ 14e6d1b40

bool __thiscall
UInterchangeGroomCacheFactory::SetSourceFilename
          (UInterchangeGroomCacheFactory *this,UObject *param_1,FString *param_2,int param_3)

{
  return false;
}

// SetupObject_GameThread @ 14e6d21c0

void __thiscall
UInterchangeGroomCacheFactory::SetupObject_GameThread
          (UInterchangeGroomCacheFactory *this,FSetupObjectParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId351,"UInterchangeGroomCacheFactory::SetupObject_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Groom\\InterchangeGroomCacheFactory.cpp"
               ,0x15f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId351);
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                         ,0x125,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (!bVar3) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// StaticRegisterNativesUInterchangeGroomCacheFactory @ 14e6d2310

void __cdecl UInterchangeGroomCacheFactory::StaticRegisterNativesUInterchangeGroomCacheFactory(void)

{
  return;
}

