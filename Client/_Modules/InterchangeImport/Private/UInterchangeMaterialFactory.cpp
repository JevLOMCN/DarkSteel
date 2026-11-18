// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 19

// StaticClass @ 14e6d8280

UClass * __cdecl UInterchangeMaterialFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMaterialFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeMaterialFactory",
               &Z_Registration_Info_UClass_UInterchangeMaterialFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeMaterialFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeMaterialFactory>,
               InternalVTableHelperCtorCaller<UInterchangeMaterialFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMaterialFactory.InnerSingleton;
}

// UInterchangeMaterialFactory @ 14e6e0900

UInterchangeMaterialFactory * __thiscall
UInterchangeMaterialFactory::UInterchangeMaterialFactory
          (UInterchangeMaterialFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->bSkipImport = false;
  this->_padding_ = (longlong)&___7UInterchangeMaterialFactory__6B_;
  return this;
}

// UInterchangeMaterialFactory @ 14e6e0930

UInterchangeMaterialFactory * __thiscall
UInterchangeMaterialFactory::UInterchangeMaterialFactory
          (UInterchangeMaterialFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->bSkipImport = false;
  this->_padding_ = (longlong)&___7UInterchangeMaterialFactory__6B_;
  return this;
}

// ~UInterchangeMaterialFactory @ 14e6e15e0

void __thiscall
UInterchangeMaterialFactory::~UInterchangeMaterialFactory(UInterchangeMaterialFactory *this)

{
  this->_padding_ = (longlong)&___7UInterchangeMaterialFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// operator() @ 14e6e3c10

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`UInterchangeMaterialFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
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
                     (&local_48,L"InterchangeMaterialFactory",L"MatFactory_CouldNotCreateMat",
                      L"Could not create Material asset {0}. Reason: {1}");
  pFVar10 = FTextFormat::FTextFormat(&local_28,pFVar9,Default);
  pFVar8 = FText::Format<FText,FText>(&local_58,pFVar10,pFVar8,&local_68);
  FText::operator=(&pUVar6->Text,pFVar8);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  *(undefined1 *)(*(longlong *)this + 0x30) = 1;
  **(undefined1 **)((longlong)this + 0x10) = 1;
  return;
}

// BackupSourceData @ 14e6e94b0

void __thiscall
UInterchangeMaterialFactory::BackupSourceData(UInterchangeMaterialFactory *this,UObject *param_1)

{
  return;
}

// BeginImportAsset_GameThread @ 14e6eb4e0

FImportAssetResult * __thiscall
UInterchangeMaterialFactory::BeginImportAsset_GameThread
          (UInterchangeMaterialFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  int iVar1;
  UInterchangeMaterialInstanceFactoryNode *this_00;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  EReimportStrategyFlags EVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  UClass *pUVar9;
  FName FVar10;
  UClass *pUVar11;
  FName *pFVar12;
  FName FVar13;
  FText *pFVar14;
  FImportAssetResult *pFVar15;
  wchar_t *pwVar16;
  FName FVar17;
  bool bVar18;
  bool local_res18 [8];
  FName local_res20;
  FText local_108;
  FString local_f8;
  UObject *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FSoftObjectPath local_d8;
  FSoftObjectPath local_b8;
  UInterchangeMaterialFactory *local_98;
  FImportAssetObjectParams *local_90;
  FImportAssetResult *local_88;
  FName local_80;
  TStringView<wchar_t> local_78;
  FText local_68;
  FText local_58;
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId896,
               "UInterchangeMaterialFactory::BeginImportAsset_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Material\\InterchangeMaterialFactory.cpp"
               ,0x380);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId896);
  }
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  local_98 = this;
  local_90 = param_1;
  local_88 = __return_storage_ptr__;
  FText::AsLocalizable_Advanced_LocText
            (&local_108,L"InterchangeMaterialFactory",L"MatFactory_CouldNotCreateMat_MissMatchClass"
             ,L"Mismatch between Interchange material factory node class and factory class.");
  if (param_1->AssetNode != (UInterchangeFactoryBaseNode *)0x0) {
    lVar7 = (**(code **)(param_1->AssetNode->_padding_ + 0x2f8))();
    lVar8 = (**(code **)(this->_padding_ + 0x2b0))(this);
    if (lVar8 != 0) {
      if ((*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
          lVar8 + 0x30)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        this_00 = (UInterchangeMaterialInstanceFactoryNode *)param_1->AssetNode;
        if (this_00 != (UInterchangeMaterialInstanceFactoryNode *)0x0) {
          pUVar9 = Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_NoRegister();
          iVar6 = (int)pUVar9->_padding_;
          if ((iVar6 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
              &pUVar9->_padding_)) {
            pUVar9 = (UClass *)(**(code **)(this_00->_padding_ + 0x2f8))(this_00);
            if ((pUVar9 != (UClass *)0x0) &&
               (lVar7 = (**(code **)(this->_padding_ + 0x2b0))(this), lVar7 != 0)) {
              if (((int)pUVar9->_padding_ < *(int *)(lVar7 + 0x38)) ||
                 (*(longlong *)(pUVar9->_padding_ + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
                  lVar7 + 0x30)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                FVar10 = (FName)param_1->ReimportObject;
                local_res20 = FVar10;
                if (FVar10 == (FName)0x0) {
                  local_d8.AssetPath.PackageName.ComparisonIndex.Value = 0;
                  local_d8.AssetPath.PackageName.Number = 0;
                  local_d8.AssetPath.AssetName.ComparisonIndex.Value = 0;
                  local_d8.AssetPath.AssetName.Number = 0;
                  local_d8.SubPathString.Data.AllocatorInstance.Data =
                       (FScriptContainerElement *)0x0;
                  local_d8.SubPathString.Data.ArrayNum = 0;
                  local_d8.SubPathString.Data.ArrayMax = 0;
                  bVar3 = UInterchangeFactoryBaseNode::GetCustomReferenceObject
                                    ((UInterchangeFactoryBaseNode *)this_00,&local_d8);
                  if (bVar3) {
                    FVar10 = (FName)FSoftObjectPath::TryLoad
                                              (&local_d8,(FUObjectSerializeContext *)0x0);
                  }
                  if (local_d8.SubPathString.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_d8.SubPathString.Data.AllocatorInstance.Data);
                  }
                }
                local_res18[0] = true;
                UInterchangeBaseMaterialFactoryNode::GetCustomIsMaterialImportEnabled
                          ((UInterchangeBaseMaterialFactoryNode *)this_00,local_res18);
                if (FVar10 == (FName)0x0) {
                  if (local_res18[0] == false) goto LAB_14e6eba44;
                  pUVar11 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
                  iVar6 = 0;
                  if (pUVar11 == (UClass *)0x0) {
LAB_14e6eb84a:
                    if ((param_1->AssetName).Data.ArrayNum == 0) {
                      pwVar16 = L"";
                    }
                    else {
                      pwVar16 = (wchar_t *)(param_1->AssetName).Data.AllocatorInstance.Data;
                    }
                    pFVar12 = ::FName::FName(&local_res20,pwVar16);
                    FVar13 = (FName)NewObject<UObject>(param_1->Parent,pUVar9,*pFVar12,
                                                       RF_Standalone|RF_Public,(UObject *)0x0,false,
                                                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0
                                                      );
                  }
                  else {
                    iVar1 = (int)pUVar11->_padding_;
                    if (((int)pUVar9->_padding_ < iVar1) ||
                       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) !=
                        &pUVar11->_padding_)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    if (!bVar3) goto LAB_14e6eb84a;
                    pUVar9 = Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_NoRegister()
                    ;
                    iVar1 = (int)pUVar9->_padding_;
                    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                        &pUVar9->_padding_)) goto LAB_14e6eb8a1;
                    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_f8.Data.ArrayNum = 0;
                    local_f8.Data.ArrayMax = 0;
                    bVar3 = UInterchangeMaterialInstanceFactoryNode::GetCustomParent
                                      (this_00,&local_f8);
                    if (bVar3) {
                      local_e8 = (UObject *)local_f8.Data.AllocatorInstance.Data;
                      local_b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
                      local_b8.AssetPath.PackageName.Number = 0;
                      local_b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
                      local_b8.AssetPath.AssetName.Number = 0;
                      local_b8.SubPathString.Data.AllocatorInstance.Data =
                           (FScriptContainerElement *)0x0;
                      local_b8.SubPathString.Data.ArrayNum = 0;
                      local_b8.SubPathString.Data.ArrayMax = 0;
                      if (local_f8.Data.ArrayNum != 0) {
                        iVar6 = local_f8.Data.ArrayNum + -1;
                      }
                      local_78._12_4_ = uStack_dc;
                      local_78.Size = iVar6;
                      local_78.DataPtr = (wchar_t *)local_f8.Data.AllocatorInstance.Data;
                      iStack_e0 = iVar6;
                      FSoftObjectPath::SetPath(&local_b8,&local_78);
                      if ((param_1->AssetName).Data.ArrayNum == 0) {
                        pwVar16 = L"";
                      }
                      else {
                        pwVar16 = (wchar_t *)(param_1->AssetName).Data.AllocatorInstance.Data;
                      }
                      pFVar12 = ::FName::FName(&local_80,pwVar16);
                      FVar10 = *pFVar12;
                      local_e8 = param_1->Parent;
                      local_res20 = (FName)FSoftObjectPath::TryLoad
                                                     (&local_b8,(FUObjectSerializeContext *)0x0);
                      if (local_res20 == (FName)0x0) {
LAB_14e6eb815:
                        FVar17 = FVar13;
                      }
                      else {
                        pUVar9 = Z_Construct_UClass_UMaterialInterface_NoRegister();
                        iVar6 = (int)pUVar9->_padding_;
                        if ((*(int *)(*(longlong *)((longlong)local_res20 + 0x10) + 0x38) < iVar6)
                           || (FVar17 = local_res20,
                              (longlong *)
                              *(undefined1 **)
                               (*(longlong *)(*(longlong *)((longlong)local_res20 + 0x10) + 0x30) +
                               (longlong)iVar6 * 8) != &pUVar9->_padding_)) goto LAB_14e6eb815;
                      }
                      FVar13 = (FName)UMaterialInstanceDynamic::Create
                                                ((UMaterialInterface *)FVar17,local_e8,FVar10);
                      if (local_b8.SubPathString.Data.AllocatorInstance.Data !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_b8.SubPathString.Data.AllocatorInstance.Data);
                      }
                    }
                    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                    }
                  }
                  FVar10 = FVar13;
                  if (FVar13 != (FName)0x0) {
LAB_14e6eb93e:
                    if (this->bSkipImport == false) {
                      pUVar9 = Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_NoRegister
                                         ();
                      iVar6 = (int)pUVar9->_padding_;
                      if ((*(int *)(this_00->_padding_ + 0x38) < iVar6) ||
                         ((longlong *)
                          *(undefined1 **)
                           (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
                          &pUVar9->_padding_)) {
                        Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode_NoRegister();
                      }
                      else {
                        pUVar9 = Z_Construct_UClass_UMaterialInstance_NoRegister();
                        iVar6 = (int)pUVar9->_padding_;
                        if ((iVar6 <= *(int *)(*(longlong *)((longlong)FVar10 + 0x10) + 0x38)) &&
                           ((longlong *)
                            *(undefined1 **)
                             (*(longlong *)(*(longlong *)((longlong)FVar10 + 0x10) + 0x30) +
                             (longlong)iVar6 * 8) == &pUVar9->_padding_)) {
                          EVar5 = UInterchangeFactoryBaseNode::GetReimportStrategyFlags
                                            ((UInterchangeFactoryBaseNode *)this_00);
                          if ((param_1->ReimportObject == (UObject *)0x0) ||
                             (EVar5 != ApplyNoProperties)) {
                            UE::Interchange::MaterialFactory::Internal::SetupSpecularProfile
                                      (param_1,(UInterchangeFactoryBaseNode *)this_00,
                                       (UObject *)FVar10);
                            SetupMaterialInstance
                                      (this,(UMaterialInstance *)FVar10,param_1->NodeContainer,
                                       this_00,param_1->ReimportObject == (UObject *)0x0);
                            __return_storage_ptr__->ImportedObject = (UObject *)FVar10;
                          }
                          else {
                            UE::Interchange::MaterialFactory::Internal::SetupSpecularProfile
                                      (param_1,(UInterchangeFactoryBaseNode *)this_00,
                                       (UObject *)FVar10);
                            __return_storage_ptr__->ImportedObject = (UObject *)FVar10;
                          }
                          goto LAB_14e6eba44;
                        }
                      }
                      __return_storage_ptr__->ImportedObject = (UObject *)FVar10;
                    }
                    goto LAB_14e6eba44;
                  }
                }
                else {
                  iVar6 = (int)pUVar9->_padding_;
                  if ((iVar6 <= *(int *)(*(longlong *)((longlong)FVar10 + 0x10) + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(*(longlong *)((longlong)FVar10 + 0x10) + 0x30) +
                       (longlong)iVar6 * 8) == &pUVar9->_padding_)) {
                    if ((local_res20 == (FName)0x0) &&
                       (cVar4 = (**(code **)(param_1->Translator->_padding_ + 0x2c8))(),
                       cVar4 != '\x02')) {
                      __return_storage_ptr__->bIsFactorySkipAsset = true;
                      this->bSkipImport = true;
                    }
                    goto LAB_14e6eb93e;
                  }
                }
LAB_14e6eb8a1:
                if (local_res18[0] != false) {
                  pFVar14 = FText::AsLocalizable_Advanced_LocText
                                      (&local_68,L"InterchangeMaterialFactory",
                                       L"MatFactory_CouldNotCreateMat_MaterialCreationFail",
                                       L"Material creation failed");
                  `UInterchangeMaterialFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::
                  operator()(&local_98,pFVar14);
                  if (local_68.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
                  }
                }
                goto LAB_14e6eba44;
              }
            }
            bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_5111701867600018529>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Material\\InterchangeMaterialFactory.cpp"
                               ,0x39f,"MaterialClass && MaterialClass->IsChildOf(GetFactoryClass())"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pFVar15 = (FImportAssetResult *)(*pcVar2)();
              return pFVar15;
            }
            goto LAB_14e6eba36;
          }
        }
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_58,L"InterchangeMaterialFactory",
                             L"MatFactory_CouldNotCreateMat_CannotCastFactoryNode",
                             L"Cannot cast Interchange factory node to UInterchangeBaseMaterialFactoryNode."
                            );
        `UInterchangeMaterialFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
                  (&local_98,pFVar14);
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
        goto LAB_14e6eba44;
      }
    }
  }
LAB_14e6eba36:
  `UInterchangeMaterialFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
            (&local_98,&local_108);
LAB_14e6eba44:
  if (local_108.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ClearBackupSourceData @ 14e6ec150

void __thiscall
UInterchangeMaterialFactory::ClearBackupSourceData
          (UInterchangeMaterialFactory *this,UObject *param_1)

{
  return;
}

// GetFactoryAssetType @ 14e6efc10

EInterchangeFactoryAssetType __thiscall
UInterchangeMaterialFactory::GetFactoryAssetType(UInterchangeMaterialFactory *this)

{
  return Materials;
}

// GetFactoryClass @ 14e6efc60

UClass * __thiscall UInterchangeMaterialFactory::GetFactoryClass(UInterchangeMaterialFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UMaterialInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialInterface",
               &Z_Registration_Info_UClass_UMaterialInterface.InnerSingleton,
               UMaterialInterface::StaticRegisterNativesUMaterialInterface,0xe8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialInterface>,
               InternalVTableHelperCtorCaller<UMaterialInterface>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialInterface.InnerSingleton;
}

// GetPrivateStaticClass @ 14e6f0d50

UClass * __cdecl UInterchangeMaterialFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMaterialFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeMaterialFactory",
               &Z_Registration_Info_UClass_UInterchangeMaterialFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeMaterialFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeMaterialFactory>,
               InternalVTableHelperCtorCaller<UInterchangeMaterialFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMaterialFactory.InnerSingleton;
}

// GetSourceFilenames @ 14e6f1120

bool __thiscall
UInterchangeMaterialFactory::GetSourceFilenames
          (UInterchangeMaterialFactory *this,UObject *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// ImportAsset_Async @ 14e6f2930

/* WARNING: Enum "Type": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeMaterialFactory::ImportAsset_Async
          (UInterchangeMaterialFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  int iVar1;
  UInterchangeFactoryBaseNode *pUVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FImportAssetResult *pFVar9;
  FStaticBasicLogRecord *pFVar10;
  bool bVar11;
  TOptional<FMD5Hash> local_38;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1111,"UInterchangeMaterialFactory::ImportAsset_Async",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Material\\InterchangeMaterialFactory.cpp"
               ,0x457);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1111);
  }
  pUVar2 = param_1->AssetNode;
  bVar4 = this->bSkipImport;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  __return_storage_ptr__->bIsFactorySkipAsset = bVar4;
  if (pUVar2 != (UInterchangeFactoryBaseNode *)0x0) {
    lVar5 = (**(code **)(pUVar2->_padding_ + 0x2f8))();
    lVar6 = (**(code **)(this->_padding_ + 0x2b0))(this);
    if (lVar6 != 0) {
      if ((*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
          lVar6 + 0x30)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (pUVar2 = param_1->AssetNode, pUVar2 != (UInterchangeFactoryBaseNode *)0x0)) {
        pUVar7 = Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_NoRegister();
        iVar1 = (int)pUVar7->_padding_;
        if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar7->_padding_)) {
          pUVar8 = param_1->Parent;
          pUVar7 = (UClass *)(**(code **)(this->_padding_ + 0x2b0))(this);
          pUVar8 = UE::Interchange::FFactoryCommon::AsyncFindObject
                             (pUVar2,pUVar7,pUVar8,&param_1->AssetName);
          if (this->bSkipImport == false) {
            if (pUVar8 == (UObject *)0x0) {
              if ((byte)LogInterchangeImport._0_1_ < 2) goto LAB_14e6f2b4e;
              if ((param_1->AssetName).Data.ArrayNum == 0) {
                pFVar10 = &::LOG_Static;
              }
              else {
                pFVar10 = &::LOG_Static;
              }
            }
            else {
              pUVar7 = Z_Construct_UClass_UMaterialInterface_NoRegister();
              iVar1 = (int)pUVar7->_padding_;
              if ((iVar1 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
                  &pUVar7->_padding_)) {
                if (param_1->ReimportObject == (UObject *)0x0) {
                  UInterchangeFactoryBaseNode::ApplyAllCustomAttributeToObject(pUVar2,pUVar8);
                }
                UInterchangeSourceData::GetFileContentHash(param_1->SourceData,&local_38);
                goto LAB_14e6f2b4e;
              }
              bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_5111701867600018313>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Material\\InterchangeMaterialFactory.cpp"
                                 ,0x477,"MaterialInterface");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                pFVar9 = (FImportAssetResult *)(*pcVar3)();
                return pFVar9;
              }
              if ((byte)LogInterchangeImport._0_1_ < 2) goto LAB_14e6f2b4e;
              pFVar10 = &::LOG_Static;
            }
            UE::Logging::Private::BasicLog<2>(pFVar10,(FLogCategoryBase *)&LogInterchangeImport);
          }
          else {
            __return_storage_ptr__->ImportedObject = pUVar8;
          }
        }
      }
    }
  }
LAB_14e6f2b4e:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ReinstateSourceData @ 14e6fa5a0

void __thiscall
UInterchangeMaterialFactory::ReinstateSourceData(UInterchangeMaterialFactory *this,UObject *param_1)

{
  return;
}

// SetSourceFilename @ 14e6fb3b0

bool __thiscall
UInterchangeMaterialFactory::SetSourceFilename
          (UInterchangeMaterialFactory *this,UObject *param_1,FString *param_2,int param_3)

{
  return false;
}

// SetupMaterialInstance @ 14e6fb420

void __thiscall
UInterchangeMaterialFactory::SetupMaterialInstance
          (UInterchangeMaterialFactory *this,UMaterialInstance *param_1,
          UInterchangeBaseNodeContainer *param_2,UInterchangeMaterialInstanceFactoryNode *param_3,
          bool param_4)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  EAttributeTypes EVar5;
  int iVar6;
  UClass *pUVar7;
  ulonglong uVar8;
  FName *pFVar9;
  UInterchangeFactoryBaseNode *this_00;
  UTexture *pUVar10;
  byte bVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  undefined1 local_e7;
  TEnumAsByte<EBlendMode> local_e6;
  bool local_e5 [5];
  TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> local_e0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d0;
  float local_c0 [2];
  FString local_b8;
  FString local_a8;
  FString local_98;
  FSoftObjectPath local_88;
  FName local_68;
  FString local_60;
  FName local_50;
  FLinearColor_u_0 local_48;
  FLinearColor_u_0 local_38;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1937,"UInterchangeMaterialFactory::SetupMaterialInstance",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Material\\InterchangeMaterialFactory.cpp"
               ,0x791);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1937);
  }
  if ((param_4 != false) && (param_1 != (UMaterialInstance *)0x0)) {
    pUVar7 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) {
      UMaterialInstanceDynamic::ClearParameterValues((UMaterialInstanceDynamic *)param_1);
    }
  }
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  UInterchangeShaderPortsAPI::GatherInputs((UInterchangeBaseNode *)param_3,&local_d0);
  iVar1 = local_d0.ArrayNum;
  uVar8 = (ulonglong)local_d0.ArrayNum;
  pFVar15 = local_d0.AllocatorInstance.Data + uVar8 * 0x10;
  FVar14.Data = local_d0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar1) {
      param_4 = false;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&param_4);
    }
    if (FVar14.Data == pFVar15) break;
    if (*(int *)(FVar14.Data + 8) == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = *(wchar_t **)FVar14.Data;
    }
    ::FName::FName(&local_68,pwVar13);
    bVar4 = UInterchangeShaderPortsAPI::HasParameter((UInterchangeBaseNode *)param_3,&local_68);
    EVar5 = UInterchangeShaderPortsAPI::GetInputType
                      ((UInterchangeBaseNode *)param_3,(FString *)FVar14.Data,bVar4);
    if (EVar5 == Bool) {
LAB_14e6fb5b4:
      uVar8 = local_d0._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 0x10;
    }
    else {
      if (EVar5 == Float) {
        UE::Interchange::MaterialFactory::Internal::UpdateParameterFloat
                  (param_1,(FString *)FVar14.Data,param_3,bVar4);
        goto LAB_14e6fb5b4;
      }
      if (EVar5 == LinearColor) {
        UE::Interchange::MaterialFactory::Internal::UpdateParameterLinearColor
                  (param_1,(FString *)FVar14.Data,param_3,bVar4);
        uVar8 = local_d0._8_8_ & 0xffffffff;
        FVar14.Data = FVar14.Data + 0x10;
      }
      else {
        if (EVar5 != String) goto LAB_14e6fb5b4;
        UE::Interchange::MaterialFactory::Internal::UpdateParameterTexture
                  (param_1,(FString *)FVar14.Data,param_3,param_2,bVar4);
        uVar8 = local_d0._8_8_ & 0xffffffff;
        FVar14.Data = FVar14.Data + 0x10;
      }
    }
  }
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  UE::Interchange::Materials::HashUtils::FInterchangeMaterialInstanceOverridesAPI::GatherLeafInputs
            ((UInterchangeBaseNode *)param_3,&local_e0);
  iVar1 = local_e0.ArrayNum;
  uVar8 = (ulonglong)local_e0.ArrayNum;
  pFVar15 = local_e0.AllocatorInstance.Data + uVar8 * 0x10;
  FVar14.Data = local_e0.AllocatorInstance.Data;
  do {
    if ((int)uVar8 != iVar1) {
      local_e7 = 0;
      `TCheckedPointerIterator<UE::Interchange::FAttributeKey,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_e7);
    }
    if (FVar14.Data == pFVar15) {
      bVar4 = UInterchangeMaterialInstanceFactoryNode::GetCustomBlendMode(param_3,&local_e6);
      if (bVar4) {
        bVar11 = *(byte *)&param_1->BasePropertyOverrides | 2;
        (param_1->BasePropertyOverrides).BlendMode.Value = local_e6.Value;
        (param_1->BlendMode).Value = local_e6.Value;
      }
      else {
        bVar11 = *(byte *)&param_1->BasePropertyOverrides & 0xfd;
      }
      *(byte *)&param_1->BasePropertyOverrides = bVar11;
      DestructItems<UE::Interchange::FAttributeKey,int>
                ((FAttributeKey *)local_e0.AllocatorInstance.Data,local_e0.ArrayNum);
      if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
      if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
      if (bVar16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    ::FString::FString(&local_60,
                       UE::Interchange::Materials::HashUtils::
                       FInterchangeMaterialInstanceOverridesAPI::OverrideParameterSeparator);
    bVar4 = ::FString::Split((FString *)FVar14.Data,&local_60,&local_98,&local_b8);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    FVar12.Data = local_98.Data.AllocatorInstance.Data;
    if (bVar4) {
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      iVar6 = local_b8.Data.ArrayNum + -1;
      if (local_b8.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar9 = ::FName::FName(&local_50,iVar6,(wchar_t *)local_b8.Data.AllocatorInstance.Data,
                              FNAME_Add);
      FVar2 = *pFVar9;
      iVar6 = (**(code **)(param_3->_padding_ + 0x2c8))(param_3,FVar14.Data);
      if (iVar6 == 1) {
        bVar4 = UInterchangeBaseNode::GetBooleanAttribute
                          ((UInterchangeBaseNode *)param_3,(FString *)FVar14.Data,local_e5);
        if ((bVar4) && (param_1 != (UMaterialInstance *)0x0)) {
          pUVar7 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
          iVar6 = (int)pUVar7->_padding_;
          if ((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
             (((longlong *)
               *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
               &pUVar7->_padding_ &&
              (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_5111701867600018839>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Material\\InterchangeMaterialFactory.cpp"
                                  ,0x269,"false"), bVar4)))) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      else if (iVar6 == 8) {
        bVar4 = UInterchangeBaseNode::GetFloatAttribute
                          ((UInterchangeBaseNode *)param_3,(FString *)FVar14.Data,local_c0);
        if ((bVar4) && (param_1 != (UMaterialInstance *)0x0)) {
          pUVar7 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
          iVar6 = (int)pUVar7->_padding_;
          if ((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
              &pUVar7->_padding_)) {
            UMaterialInstanceDynamic::SetScalarParameterValue
                      ((UMaterialInstanceDynamic *)param_1,FVar2,local_c0[0]);
          }
        }
      }
      else if (iVar6 == 0xf) {
        bVar4 = UInterchangeBaseNode::GetLinearColorAttribute
                          ((UInterchangeBaseNode *)param_3,(FString *)FVar14.Data,
                           (FLinearColor *)&local_48._s_0);
        if ((bVar4) && (param_1 != (UMaterialInstance *)0x0)) {
          pUVar7 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
          iVar6 = (int)pUVar7->_padding_;
          if ((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
              &pUVar7->_padding_)) {
            local_38._0_8_ = local_48._0_8_;
            local_38._8_8_ = local_48._8_8_;
            UMaterialInstanceDynamic::SetVectorParameterValue
                      ((UMaterialInstanceDynamic *)param_1,FVar2,(FLinearColor *)&local_38._s_0);
          }
        }
      }
      else if (iVar6 == 0x12) {
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.Data.ArrayNum = 0;
        local_a8.Data.ArrayMax = 0;
        bVar4 = UInterchangeBaseNode::GetStringAttribute
                          ((UInterchangeBaseNode *)param_3,(FString *)FVar14.Data,&local_a8);
        FVar12.Data = local_a8.Data.AllocatorInstance.Data;
        if (!bVar4) goto LAB_14e6fb7dd;
        this_00 = (UInterchangeFactoryBaseNode *)
                  UInterchangeBaseNodeContainer::GetNode(param_2,&local_a8);
        if (this_00 == (UInterchangeFactoryBaseNode *)0x0) {
LAB_14e6fb726:
          this_00 = (UInterchangeFactoryBaseNode *)0x0;
        }
        else {
          pUVar7 = Z_Construct_UClass_UInterchangeTextureFactoryNode_NoRegister();
          iVar6 = (int)pUVar7->_padding_;
          if ((*(int *)(this_00->_padding_ + 0x38) < iVar6) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
              &pUVar7->_padding_)) goto LAB_14e6fb726;
        }
        FVar12.Data = local_a8.Data.AllocatorInstance.Data;
        if (this_00 != (UInterchangeFactoryBaseNode *)0x0) {
          local_88.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_88.AssetPath.PackageName.Number = 0;
          local_88.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_88.AssetPath.AssetName.Number = 0;
          local_88.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_88.SubPathString.Data.ArrayNum = 0;
          local_88.SubPathString.Data.ArrayMax = 0;
          UInterchangeFactoryBaseNode::GetCustomReferenceObject(this_00,&local_88);
          pUVar10 = (UTexture *)FSoftObjectPath::TryLoad(&local_88,(FUObjectSerializeContext *)0x0);
          if (pUVar10 != (UTexture *)0x0) {
            pUVar7 = Z_Construct_UClass_UTexture_NoRegister();
            iVar6 = (int)pUVar7->_padding_;
            if (((iVar6 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
                ((longlong *)
                 *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
                 &pUVar7->_padding_)) && (param_1 != (UMaterialInstance *)0x0)) {
              pUVar7 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
              iVar6 = (int)pUVar7->_padding_;
              if ((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8)
                  == &pUVar7->_padding_)) {
                UMaterialInstanceDynamic::SetTextureParameterValue
                          ((UMaterialInstanceDynamic *)param_1,FVar2,pUVar10);
              }
            }
          }
          FVar12.Data = local_a8.Data.AllocatorInstance.Data;
          if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
            FVar12.Data = local_a8.Data.AllocatorInstance.Data;
          }
        }
        goto LAB_14e6fb7dd;
      }
    }
    else {
LAB_14e6fb7dd:
      if (FVar12.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar12.Data);
      }
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    uVar8 = local_e0._8_8_ & 0xffffffff;
    FVar14.Data = FVar14.Data + 0x10;
  } while( true );
}

// SetupObject_GameThread @ 14e6fba80

void __thiscall
UInterchangeMaterialFactory::SetupObject_GameThread
          (UInterchangeMaterialFactory *this,FSetupObjectParams *param_1)

{
  int iVar1;
  UMaterialInterface *this_00;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UTexture *pUVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  UTexture *local_res18;
  FString local_68;
  FString local_58;
  FMemoryImageMaterialParameterInfo local_48;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1191,"UInterchangeMaterialFactory::SetupObject_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Material\\InterchangeMaterialFactory.cpp"
               ,0x4a7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1191);
  }
  bVar5 = IsInGameThread();
  pwVar10 = L"";
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Material\\InterchangeMaterialFactory.cpp"
                         ,0x4a8,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                         ,0x125,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->bSkipImport == false) {
    this_00 = (UMaterialInterface *)param_1->ImportedObject;
    if ((this_00 == (UMaterialInterface *)0x0) ||
       (param_1->SourceData == (UInterchangeSourceData *)0x0)) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5111701867600018256>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Material\\InterchangeMaterialFactory.cpp"
                         ,0x4b0,"Arguments.ImportedObject && Arguments.SourceData");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      pUVar6 = Z_Construct_UClass_UMaterialInterface_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        pFVar8 = GetTypeName<UMaterialInterface>(&local_68);
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        pFVar8 = GetFullNameForCastLogError<UObject>(&local_58,(UObject *)this_00);
        if ((pFVar8->Data).ArrayNum != 0) {
          pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar10,pwVar9);
      }
      pUVar6 = Z_Construct_UClass_UMaterialInstance_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        lVar2 = this_00[2]._padding_;
        iVar1 = (int)this_00[2]._padding_;
        plVar11 = (longlong *)(lVar2 + 0x10);
        while( true ) {
          if ((int)this_00[2]._padding_ != iVar1) {
            `TCheckedPointerIterator<FTextureParameterValue,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (plVar11 + -2 == (longlong *)(lVar2 + (longlong)iVar1 * 0x28)) break;
          if (*plVar11 != 0) {
            lVar3 = plVar11[-2];
            local_48.Name.ComparisonIndex.Value = (uint)lVar3;
            local_48.Name.Number = (uint)((ulonglong)lVar3 >> 0x20);
            local_res18 = (UTexture *)0x0;
            local_48.Name.DisplayIndex.Value = 0;
            local_48.Index = -1;
            local_48.Association.Value = '\x02';
            bVar5 = UMaterialInterface::GetTextureParameterDefaultValue
                              (this_00,&local_48,&local_res18);
            if (((bVar5) && (local_res18 != (UTexture *)0x0)) &&
               (pUVar7 = UE::Interchange::MaterialFactory::Internal::
                         GetVirtualTextureStreamingMatchedTexture
                                   (local_res18->VirtualTextureStreaming,(UTexture *)*plVar11),
               pUVar7 != (UTexture *)0x0)) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar7);
              }
              *plVar11 = (longlong)pUVar7;
            }
          }
          plVar11 = plVar11 + 5;
        }
      }
    }
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SetupReimportedMaterialInstance @ 14e6fbf70

void __thiscall
UInterchangeMaterialFactory::SetupReimportedMaterialInstance
          (UInterchangeMaterialFactory *this,UMaterialInstance *param_1,
          UInterchangeBaseNodeContainer *param_2,UInterchangeMaterialInstanceFactoryNode *param_3,
          UInterchangeMaterialInstanceFactoryNode *param_4)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  TEnumAsByte<EBlendMode> TVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  EAttributeTypes EVar11;
  FString *pFVar12;
  FName *pFVar13;
  byte bVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  wchar_t *pwVar17;
  ForAnyElementType FVar18;
  bool bVar19;
  bool bVar20;
  TEnumAsByte<EBlendMode> local_178;
  undefined1 local_177 [15];
  FSoftObjectPath local_168;
  uint local_148;
  TArray<FString,TSizedDefaultAllocator<32>_> local_140;
  float local_130;
  float local_12c;
  FString local_128;
  FString local_118;
  FLinearColor_u_0 local_108;
  FLinearColor_u_0 local_f8;
  FSoftObjectPath local_e8;
  FName local_c8;
  UObject *local_c0;
  FScriptContainerElement *local_b8;
  FName local_a8;
  uint uStack_a0;
  uint uStack_9c;
  FName local_98;
  FName local_90;
  FName local_88;
  FString local_80;
  FString local_70 [4];
  
  bVar10 = false;
  bVar20 = false;
  local_148 = 0;
  TVar6.Value = UInterchangeFactoryBaseNode::GetReimportStrategyFlags
                          ((UInterchangeFactoryBaseNode *)param_3);
  if (TVar6.Value == ApplyNoProperties) {
    return;
  }
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  local_178.Value = TVar6.Value;
  UInterchangeShaderPortsAPI::GatherInputs((UInterchangeBaseNode *)param_3,&local_140);
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar3 = __real_38d1b717;
  fVar2 = __real_322bcc77;
  uVar15 = (ulonglong)local_140.ArrayNum;
  local_b8 = local_140.AllocatorInstance.Data + uVar15 * 0x10;
  local_148 = local_140.ArrayNum;
  uVar16 = uVar15;
  FVar18.Data = local_140.AllocatorInstance.Data;
  while( true ) {
    pFVar5 = local_b8;
    if ((int)uVar16 != (int)uVar15) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_177);
    }
    if (FVar18.Data == pFVar5) break;
    if (*(int *)(FVar18.Data + 8) == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = *(wchar_t **)FVar18.Data;
    }
    ::FName::FName(&local_c8,pwVar17);
    bVar7 = UInterchangeShaderPortsAPI::HasParameter((UInterchangeBaseNode *)param_3,&local_c8);
    if (bVar7) {
      bVar10 = true;
      pFVar12 = UInterchangeShaderPortsAPI::MakeInputParameterKey(local_70,(FString *)FVar18.Data);
    }
    else {
      bVar20 = true;
      pFVar12 = UInterchangeShaderPortsAPI::MakeInputValueKey(&local_80,(FString *)FVar18.Data);
    }
    local_128.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
    (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Data.ArrayNum = (pFVar12->Data).ArrayNum;
    local_128.Data.ArrayMax = (pFVar12->Data).ArrayMax;
    (pFVar12->Data).ArrayNum = 0;
    (pFVar12->Data).ArrayMax = 0;
    if ((bVar20) &&
       (bVar20 = false, local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if ((bVar10) &&
       (bVar10 = false, local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
    {
      FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
    }
    EVar11 = UInterchangeShaderPortsAPI::GetInputType
                       ((UInterchangeBaseNode *)param_3,(FString *)FVar18.Data,bVar7);
    if (EVar11 == Float) {
      bVar19 = TVar6.Value == ApplyPipelineProperties;
      bVar8 = UInterchangeBaseNode::GetFloatAttribute
                        ((UInterchangeBaseNode *)param_4,&local_128,&local_130);
      if (bVar8) {
        if (*(int *)(FVar18.Data + 8) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)FVar18.Data;
        }
        pFVar13 = ::FName::FName(&local_88,pwVar17);
        local_168.AssetPath.PackageName = (FName)((ulonglong)*pFVar13 & 0xffffffff);
        local_168.AssetPath.AssetName.Number = 0xffffffff;
        local_168.AssetPath.AssetName.ComparisonIndex.Value = (*pFVar13).Number;
        local_168.SubPathString.Data.AllocatorInstance.Data._0_1_ = 2;
        bVar8 = UMaterialInterface::GetScalarParameterValue
                          ((UMaterialInterface *)param_1,
                           (FMemoryImageMaterialParameterInfo *)&local_168,&local_12c,false);
        if (bVar8) {
          bVar19 = bVar19 || (float)((uint)(local_130 - local_12c) & uVar4) <= fVar2;
        }
      }
      TVar6.Value = local_178.Value;
      if (bVar19) {
        UE::Interchange::MaterialFactory::Internal::UpdateParameterFloat
                  (param_1,(FString *)FVar18.Data,param_3,bVar7);
        TVar6.Value = local_178.Value;
      }
    }
    else if (EVar11 == LinearColor) {
      bVar19 = TVar6.Value == ApplyPipelineProperties;
      bVar8 = UInterchangeBaseNode::GetLinearColorAttribute
                        ((UInterchangeBaseNode *)param_4,&local_128,(FLinearColor *)&local_108._s_0)
      ;
      if (bVar8) {
        if (*(int *)(FVar18.Data + 8) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)FVar18.Data;
        }
        pFVar13 = ::FName::FName(&local_90,pwVar17);
        local_168.AssetPath.PackageName = (FName)((ulonglong)*pFVar13 & 0xffffffff);
        local_168.AssetPath.AssetName.Number = 0xffffffff;
        local_168.AssetPath.AssetName.ComparisonIndex.Value = (*pFVar13).Number;
        local_168.SubPathString.Data.AllocatorInstance.Data._0_1_ = 2;
        bVar8 = UMaterialInterface::GetVectorParameterValue
                          ((UMaterialInterface *)param_1,
                           (FMemoryImageMaterialParameterInfo *)&local_168,
                           (FLinearColor *)&local_f8._s_0,false);
        if ((((bVar8) && ((float)((uint)(local_108._s_0.R - local_f8._s_0.R) & uVar4) < fVar3)) &&
            ((float)((uint)(local_108._s_0.G - local_f8._s_0.G) & uVar4) < fVar3)) &&
           (((float)((uint)(local_108._s_0.B - local_f8._s_0.B) & uVar4) < fVar3 &&
            ((float)((uint)(local_108._s_0.A - local_f8._s_0.A) & uVar4) < fVar3)))) {
          bVar19 = true;
        }
      }
      TVar6.Value = local_178.Value;
      if (bVar19) {
        UE::Interchange::MaterialFactory::Internal::UpdateParameterLinearColor
                  (param_1,(FString *)FVar18.Data,param_3,bVar7);
        TVar6.Value = local_178.Value;
      }
    }
    else if (EVar11 == String) {
      bVar19 = TVar6.Value == ApplyPipelineProperties;
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      bVar8 = UInterchangeBaseNode::GetStringAttribute
                        ((UInterchangeBaseNode *)param_4,&local_128,&local_118);
      if (bVar8) {
        pcVar1 = *(code **)(param_1->_padding_ + 0x418);
        if (*(int *)(FVar18.Data + 8) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)FVar18.Data;
        }
        pFVar13 = ::FName::FName(&local_98,pwVar17);
        local_168.AssetPath.PackageName = (FName)((ulonglong)*pFVar13 & 0xffffffff);
        local_168.AssetPath.AssetName.Number = 0xffffffff;
        local_168.AssetPath.AssetName.ComparisonIndex.Value = (*pFVar13).Number;
        local_168.SubPathString.Data.AllocatorInstance.Data._0_1_ = 2;
        cVar9 = (*pcVar1)(param_1,&local_168,&local_c0);
        if (cVar9 != '\0') {
          local_a8 = (FName)local_118.Data.AllocatorInstance.Data;
          local_e8.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_e8.AssetPath.PackageName.Number = 0;
          local_e8.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_e8.AssetPath.AssetName.Number = 0;
          local_e8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          uStack_a0 = local_118.Data.ArrayNum - 1;
          local_e8.SubPathString.Data.ArrayNum = 0;
          local_e8.SubPathString.Data.ArrayMax = 0;
          if (local_118.Data.ArrayNum == 0) {
            uStack_a0 = 0;
          }
          local_168.AssetPath.AssetName.Number = uStack_9c;
          local_168.AssetPath.AssetName.ComparisonIndex.Value = uStack_a0;
          local_168.AssetPath.PackageName = (FName)local_118.Data.AllocatorInstance.Data;
          FSoftObjectPath::SetPath(&local_e8,(TStringView<wchar_t> *)&local_168);
          local_168.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_168.AssetPath.PackageName.Number = 0;
          local_168.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_168.AssetPath.AssetName.Number = 0;
          local_168.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_168.SubPathString.Data.ArrayNum = 0;
          local_168.SubPathString.Data.ArrayMax = 0;
          FSoftObjectPath::SetPath(&local_168,local_c0);
          bVar8 = FSoftObjectPath::operator==(&local_e8,&local_168);
          bVar19 = bVar19 || bVar8;
          if (local_168.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_168.SubPathString.Data.AllocatorInstance.Data);
          }
          if (local_e8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_e8.SubPathString.Data.AllocatorInstance.Data);
          }
        }
      }
      if (bVar19) {
        UE::Interchange::MaterialFactory::Internal::UpdateParameterTexture
                  (param_1,(FString *)FVar18.Data,param_3,param_2,bVar7);
      }
      TVar6.Value = local_178.Value;
      if ((FName)local_118.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
        TVar6.Value = local_178.Value;
      }
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    uVar16 = local_140._8_8_ & 0xffffffff;
    FVar18.Data = FVar18.Data + 0x10;
    uVar15 = (ulonglong)local_148;
  }
  bVar20 = TVar6.Value == ApplyPipelineProperties;
  bVar10 = UInterchangeMaterialInstanceFactoryNode::GetCustomBlendMode(param_4,&local_178);
  if (bVar10) {
    if ((param_1->BasePropertyOverrides).bOverride_BlendMode != '\0') {
      bVar20 = bVar20 || (param_1->BasePropertyOverrides).BlendMode.Value == local_178.Value;
    }
LAB_14e6fc47b:
    if (!bVar20) goto LAB_14e6fc4ba;
  }
  else if ((param_1->BasePropertyOverrides).bOverride_BlendMode != '\0') goto LAB_14e6fc47b;
  bVar20 = UInterchangeMaterialInstanceFactoryNode::GetCustomBlendMode(param_3,&local_178);
  if (bVar20) {
    bVar14 = *(byte *)&param_1->BasePropertyOverrides | 2;
    (param_1->BasePropertyOverrides).BlendMode.Value = local_178.Value;
    (param_1->BlendMode).Value = local_178.Value;
  }
  else {
    bVar14 = *(byte *)&param_1->BasePropertyOverrides & 0xfd;
  }
  *(byte *)&param_1->BasePropertyOverrides = bVar14;
LAB_14e6fc4ba:
  DestructItems<FString,int>((FString *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUInterchangeMaterialFactory @ 14e6fcd80

void __cdecl UInterchangeMaterialFactory::StaticRegisterNativesUInterchangeMaterialFactory(void)

{
  return;
}

