// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 12

// StaticClass @ 14e6d8340

UClass * __cdecl UInterchangeMaterialFunctionFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactory.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeMaterialFunctionFactory",
               &Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeMaterialFunctionFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeMaterialFunctionFactory>,
               InternalVTableHelperCtorCaller<UInterchangeMaterialFunctionFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactory.InnerSingleton;
}

// UInterchangeMaterialFunctionFactory @ 14e6e0960

UInterchangeMaterialFunctionFactory * __thiscall
UInterchangeMaterialFunctionFactory::UInterchangeMaterialFunctionFactory
          (UInterchangeMaterialFunctionFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->bSkipImport = false;
  this->_padding_ = (longlong)&___7UInterchangeMaterialFunctionFactory__6B_;
  return this;
}

// UInterchangeMaterialFunctionFactory @ 14e6e0990

UInterchangeMaterialFunctionFactory * __thiscall
UInterchangeMaterialFunctionFactory::UInterchangeMaterialFunctionFactory
          (UInterchangeMaterialFunctionFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->bSkipImport = false;
  this->_padding_ = (longlong)&___7UInterchangeMaterialFunctionFactory__6B_;
  return this;
}

// ~UInterchangeMaterialFunctionFactory @ 14e6e1600

void __thiscall
UInterchangeMaterialFunctionFactory::~UInterchangeMaterialFunctionFactory
          (UInterchangeMaterialFunctionFactory *this)

{
  this->_padding_ = (longlong)&___7UInterchangeMaterialFunctionFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// operator() @ 14e6e3e20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`UInterchangeMaterialFunctionFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
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
                     (&local_48,L"InterchangeMaterialFactory",L"MatFunc_CouldNotCreateMat",
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

// BeginImportAsset_GameThread @ 14e6ebad0

FImportAssetResult * __thiscall
UInterchangeMaterialFunctionFactory::BeginImportAsset_GameThread
          (UInterchangeMaterialFunctionFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  int iVar1;
  UInterchangeFactoryBaseNode *this_00;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  FName *pFVar10;
  FText *pFVar11;
  FImportAssetResult *pFVar12;
  wchar_t *pwVar13;
  bool bVar14;
  FName local_res10;
  FText local_a8;
  FText local_98;
  FText local_88;
  UInterchangeMaterialFunctionFactory *local_78;
  FImportAssetObjectParams *local_70;
  FImportAssetResult *local_68;
  FSoftObjectPath local_60;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2149,
               "UInterchangeMaterialFunctionFactory::BeginImportAsset_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Material\\InterchangeMaterialFactory.cpp"
               ,0x865);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2149);
  }
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  local_78 = this;
  local_70 = param_1;
  local_68 = __return_storage_ptr__;
  FText::AsLocalizable_Advanced_LocText
            (&local_a8,L"InterchangeMaterialFactory",L"MatFunc_CouldNotCreateMat_MissMatchClass",
             L"Mismatch between Interchange material factory node class and factory class.");
  if (param_1->AssetNode != (UInterchangeFactoryBaseNode *)0x0) {
    lVar6 = (**(code **)(param_1->AssetNode->_padding_ + 0x2f8))();
    lVar7 = (**(code **)(this->_padding_ + 0x2b0))(this);
    if (lVar7 != 0) {
      if ((*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
          lVar7 + 0x30)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        this_00 = param_1->AssetNode;
        if (this_00 != (UInterchangeFactoryBaseNode *)0x0) {
          pUVar8 = Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_NoRegister();
          iVar1 = (int)pUVar8->_padding_;
          if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar8->_padding_)) {
            pUVar8 = (UClass *)(**(code **)(this_00->_padding_ + 0x2f8))(this_00);
            if ((pUVar8 != (UClass *)0x0) &&
               (lVar6 = (**(code **)(this->_padding_ + 0x2b0))(this), lVar6 != 0)) {
              local_res10 = (FName)&pUVar8->_padding_;
              if (((int)pUVar8->_padding_ < *(int *)(lVar6 + 0x38)) ||
                 (*(longlong *)(*(longlong *)local_res10 + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
                  lVar6 + 0x30)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                pUVar2 = param_1->ReimportObject;
                pUVar9 = pUVar2;
                if (pUVar2 == (UObject *)0x0) {
                  local_60.AssetPath.PackageName.ComparisonIndex.Value = 0;
                  local_60.AssetPath.PackageName.Number = 0;
                  local_60.AssetPath.AssetName.ComparisonIndex.Value = 0;
                  local_60.AssetPath.AssetName.Number = 0;
                  local_60.SubPathString.Data.AllocatorInstance.Data =
                       (FScriptContainerElement *)0x0;
                  local_60.SubPathString.Data.ArrayNum = 0;
                  local_60.SubPathString.Data.ArrayMax = 0;
                  bVar4 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(this_00,&local_60);
                  if (bVar4) {
                    pUVar9 = FSoftObjectPath::TryLoad(&local_60,(FUObjectSerializeContext *)0x0);
                  }
                  if (local_60.SubPathString.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_60.SubPathString.Data.AllocatorInstance.Data);
                  }
                  if (pUVar9 != (UObject *)0x0) goto LAB_14e6ebd10;
                  if ((param_1->AssetName).Data.ArrayNum == 0) {
                    pwVar13 = L"";
                  }
                  else {
                    pwVar13 = (wchar_t *)(param_1->AssetName).Data.AllocatorInstance.Data;
                  }
                  pFVar10 = ::FName::FName(&local_res10,pwVar13);
                  pUVar9 = NewObject<UObject>(param_1->Parent,pUVar8,*pFVar10,
                                              RF_Standalone|RF_Public,(UObject *)0x0,false,
                                              (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
LAB_14e6ebd47:
                  if (pUVar9 != (UObject *)0x0) {
                    __return_storage_ptr__->ImportedObject = pUVar9;
                    goto LAB_14e6ebdc8;
                  }
                }
                else {
LAB_14e6ebd10:
                  if ((*(int *)((longlong)local_res10 + 8) <=
                       *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
                     (*(FName *)(*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) +
                                (longlong)*(int *)((longlong)local_res10 + 8) * 8) == local_res10))
                  {
                    if ((pUVar2 == (UObject *)0x0) &&
                       (cVar5 = (**(code **)(param_1->Translator->_padding_ + 0x2c8))(),
                       cVar5 != '\x02')) {
                      this->bSkipImport = true;
                      __return_storage_ptr__->bIsFactorySkipAsset = true;
                    }
                    goto LAB_14e6ebd47;
                  }
                }
                pFVar11 = FText::AsLocalizable_Advanced_LocText
                                    (&local_98,L"InterchangeMaterialFactory",
                                     L"MatFunc_CouldNotCreateMat_MaterialCreationFail",
                                     L"Material creation failed.");
                `UInterchangeMaterialFunctionFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>
                ::operator()(&local_78,pFVar11);
                if (local_98.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
                }
                goto LAB_14e6ebdc8;
              }
            }
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_5111701867600017276>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Material\\InterchangeMaterialFactory.cpp"
                               ,0x884,"MaterialClass && MaterialClass->IsChildOf(GetFactoryClass())"
                              );
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar12 = (FImportAssetResult *)(*pcVar3)();
              return pFVar12;
            }
            goto LAB_14e6ebdbb;
          }
        }
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5111701867600017283>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Material\\InterchangeMaterialFactory.cpp"
                           ,0x87d,"MaterialFactoryNode");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar12 = (FImportAssetResult *)(*pcVar3)();
          return pFVar12;
        }
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            (&local_88,L"InterchangeMaterialFactory",
                             L"MatFunc_CouldNotCreateMat_CannotCastFactoryNode",
                             L"Cannot cast Interchange factory node to UInterchangeBaseMaterialFactoryNode."
                            );
        `UInterchangeMaterialFunctionFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::
        operator()(&local_78,pFVar11);
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
        goto LAB_14e6ebdc8;
      }
    }
  }
LAB_14e6ebdbb:
  `UInterchangeMaterialFunctionFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
            (&local_78,&local_a8);
LAB_14e6ebdc8:
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetFactoryAssetType @ 14e6efc20

EInterchangeFactoryAssetType __thiscall
UInterchangeMaterialFunctionFactory::GetFactoryAssetType(UInterchangeMaterialFunctionFactory *this)

{
  return Materials;
}

// GetFactoryClass @ 14e6efc70

UClass * __thiscall
UInterchangeMaterialFunctionFactory::GetFactoryClass(UInterchangeMaterialFunctionFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunctionInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunctionInterface",
               &Z_Registration_Info_UClass_UMaterialFunctionInterface.InnerSingleton,
               UMaterialFunctionInterface::StaticRegisterNativesUMaterialFunctionInterface,0x40,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialFunctionInterface>,
               InternalVTableHelperCtorCaller<UMaterialFunctionInterface>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunctionInterface.InnerSingleton;
}

// GetPrivateStaticClass @ 14e6f0e10

UClass * __cdecl UInterchangeMaterialFunctionFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactory.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeMaterialFunctionFactory",
               &Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeMaterialFunctionFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeMaterialFunctionFactory>,
               InternalVTableHelperCtorCaller<UInterchangeMaterialFunctionFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactory.InnerSingleton;
}

// ImportAsset_Async @ 14e6f2b90

/* WARNING: Enum "Type": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeMaterialFunctionFactory::ImportAsset_Async
          (UInterchangeMaterialFunctionFactory *this,FImportAssetResult *__return_storage_ptr__,
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
  bool bVar10;
  TOptional<FMD5Hash> local_38;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2235,
               "UInterchangeMaterialFunctionFactory::ImportAsset_Async",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Material\\InterchangeMaterialFactory.cpp"
               ,0x8bb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2235);
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
      if (bVar4) {
        pUVar2 = param_1->AssetNode;
        if (pUVar2 != (UInterchangeFactoryBaseNode *)0x0) {
          pUVar7 = Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_NoRegister();
          iVar1 = (int)pUVar7->_padding_;
          if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar7->_padding_)) {
            pUVar8 = param_1->Parent;
            pUVar7 = (UClass *)(**(code **)(this->_padding_ + 0x2b0))(this);
            pUVar8 = UE::Interchange::FFactoryCommon::AsyncFindObject
                               (param_1->AssetNode,pUVar7,pUVar8,&param_1->AssetName);
            if (this->bSkipImport == false) {
              if (pUVar8 == (UObject *)0x0) {
                if (1 < (byte)LogInterchangeImport._0_1_) {
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
                }
              }
              else {
                if (param_1->ReimportObject == (UObject *)0x0) {
                  pUVar7 = Z_Construct_UClass_UMaterialFunction_NoRegister();
                  iVar1 = (int)pUVar7->_padding_;
                  if ((iVar1 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8
                       ) == &pUVar7->_padding_)) {
                    UInterchangeFactoryBaseNode::ApplyAllCustomAttributeToObject(pUVar2,pUVar8);
                  }
                }
                UInterchangeSourceData::GetFileContentHash(param_1->SourceData,&local_38);
                __return_storage_ptr__->ImportedObject = pUVar8;
              }
            }
            else {
              __return_storage_ptr__->ImportedObject = pUVar8;
            }
            goto LAB_14e6f2d80;
          }
        }
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5111701867600017211>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Material\\InterchangeMaterialFactory.cpp"
                           ,0x8c5,"MaterialFactoryNode");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FImportAssetResult *)(*pcVar3)();
          return pFVar9;
        }
      }
    }
  }
LAB_14e6f2d80:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// SetupObject_GameThread @ 14e6fbd20

void __thiscall
UInterchangeMaterialFunctionFactory::SetupObject_GameThread
          (UInterchangeMaterialFunctionFactory *this,FSetupObjectParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2291,
               "UInterchangeMaterialFunctionFactory::SetupObject_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Material\\InterchangeMaterialFactory.cpp"
               ,0x8f3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2291);
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

// StaticRegisterNativesUInterchangeMaterialFunctionFactory @ 14e6fcd90

void __cdecl
UInterchangeMaterialFunctionFactory::StaticRegisterNativesUInterchangeMaterialFunctionFactory(void)

{
  return;
}

