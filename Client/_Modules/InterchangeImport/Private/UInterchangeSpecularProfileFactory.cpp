// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 11

// StaticClass @ 14e700f00

UClass * __cdecl UInterchangeSpecularProfileFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSpecularProfileFactory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeSpecularProfileFactory",
               &Z_Registration_Info_UClass_UInterchangeSpecularProfileFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeSpecularProfileFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSpecularProfileFactory>,
               InternalVTableHelperCtorCaller<UInterchangeSpecularProfileFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSpecularProfileFactory.InnerSingleton;
}

// UInterchangeSpecularProfileFactory @ 14e708c90

UInterchangeSpecularProfileFactory * __thiscall
UInterchangeSpecularProfileFactory::UInterchangeSpecularProfileFactory
          (UInterchangeSpecularProfileFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeSpecularProfileFactory__6B_;
  return this;
}

// UInterchangeSpecularProfileFactory @ 14e708cc0

UInterchangeSpecularProfileFactory * __thiscall
UInterchangeSpecularProfileFactory::UInterchangeSpecularProfileFactory
          (UInterchangeSpecularProfileFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeSpecularProfileFactory__6B_;
  return this;
}

// ~UInterchangeSpecularProfileFactory @ 14e709af0

void __thiscall
UInterchangeSpecularProfileFactory::~UInterchangeSpecularProfileFactory
          (UInterchangeSpecularProfileFactory *this)

{
  *(undefined ***)this = &___7UInterchangeSpecularProfileFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// operator() @ 14e70a470

void __thiscall
`UInterchangeSpecularProfileFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
          (void *this)

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
  ForAnyElementType local_28;
  undefined8 local_20;
  FText local_18;
  
  lVar3 = *(longlong *)((longlong)this + 8);
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
  local_28.Data = (FScriptContainerElement *)0x0;
  iVar2 = *(int *)(*(longlong *)(*(longlong *)this + 0x28) + 0x30);
  _Src = *(void **)(*(longlong *)(*(longlong *)this + 0x28) + 0x28);
  local_20 = CONCAT44(local_20._4_4_,iVar2);
  if (iVar2 == 0) {
    local_20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,&local_28,iVar2,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,(longlong)iVar2 * 2);
  }
  plVar1 = &pUVar6->_padding_;
  if ((ForAnyElementType *)plVar1 != &local_28) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_28.Data;
    *(undefined4 *)&pUVar6->_padding_ = (undefined4)local_20;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&pUVar6->_padding_ + 4) = local_20._4_4_;
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  ::FString::operator=((FString *)&pUVar6->_padding_,(FString *)(*(longlong *)this + 8));
  pUVar7 = (UObject *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x2b0))();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  pUVar6->_padding_ = (longlong)pUVar7;
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"InterchangeSpecularProfileFactory",
                      L"CreateEmptyAssetUnsupportedReimport",
                      L"Re-import of USpecularProfile not supported yet.");
  FText::operator=(&pUVar6->Text,pFVar8);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  UInterchangeFactoryBaseNode::SetSkipNodeImport
            (*(UInterchangeFactoryBaseNode **)(*(longlong *)this + 0x18));
  return;
}

// operator() @ 14e70b900

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`UInterchangeSpecularProfileFactory::BeginImportAsset_GameThread'::__l2::<lambda_2>::operator()
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
                     (&local_48,L"InterchangeSpecularProfileFactory",
                      L"SpecProfileFactory_CouldNotCreateSpecProfile",
                      L"Could not create Specular Profile asset %s. Reason: %s");
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

// BeginImportAsset_GameThread @ 14e70f7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeSpecularProfileFactory::BeginImportAsset_GameThread
          (UInterchangeSpecularProfileFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  int iVar1;
  UInterchangeSpecularProfileFactoryNode *this_00;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FName *pFVar9;
  FText *pFVar10;
  UInterchangeFactoryBaseNode *this_01;
  UObject *pUVar11;
  FImportAssetResult *pFVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  bool bVar15;
  undefined1 auStackY_1c8 [32];
  ESpecularProfileFormat local_198 [8];
  FText local_190;
  undefined8 local_180;
  FString local_178;
  FSoftObjectPath local_168;
  FSoftObjectPath local_148;
  UInterchangeSpecularProfileFactory *local_128;
  FImportAssetObjectParams *local_120;
  FImportAssetResult *local_118;
  FImportAssetObjectParams *local_110;
  UInterchangeSpecularProfileFactory *local_108;
  FString local_100;
  FName local_f0;
  FText local_e8;
  FText local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId27,
               "UInterchangeSpecularProfileFactory::BeginImportAsset_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\SpecularProfile\\InterchangeSpecularProfileFactory.cpp"
               ,0x1b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId27);
  }
  (**(code **)(*(longlong *)this + 0x2c0))(this,param_1);
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  local_110 = param_1;
  local_108 = this;
  if (param_1->ReimportObject != (UObject *)0x0) {
    `UInterchangeSpecularProfileFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
              (&local_110);
    if (!bVar15) {
      return __return_storage_ptr__;
    }
    FCpuProfilerTrace::OutputEndEvent();
    return __return_storage_ptr__;
  }
  local_128 = this;
  local_120 = param_1;
  local_118 = __return_storage_ptr__;
  FText::AsLocalizable_Advanced_LocText
            (&local_190,L"InterchangeSpecularProfileFactory",
             L"SpecProfileFactory_CouldNotCreateSpecProfile_MissMatchClass",
             L"Mismatch between Interchange specular profile factory node class and factory class.")
  ;
  if (param_1->AssetNode != (UInterchangeFactoryBaseNode *)0x0) {
    lVar5 = (**(code **)(param_1->AssetNode->_padding_ + 0x2f8))();
    lVar6 = (**(code **)(*(longlong *)this + 0x2b0))(this);
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
        this_00 = (UInterchangeSpecularProfileFactoryNode *)param_1->AssetNode;
        if (this_00 == (UInterchangeSpecularProfileFactoryNode *)0x0) {
LAB_14e70fc64:
          pFVar10 = FText::AsLocalizable_Advanced_LocText
                              (&local_d8,L"InterchangeSpecularProfileFactory",
                               L"SpecProfileFactory_CouldNotCreateSpecProfile_CannotCastFactoryNode"
                               ,
                               L"Cannot cast Interchange factory node to UInterchangeSpecularProfileFactoryNode."
                              );
          `UInterchangeSpecularProfileFactory::BeginImportAsset_GameThread'::__l2::<lambda_2>::
          operator()(&local_128,pFVar10);
          local_e8.TextData.Reference = local_d8.TextData.Reference;
LAB_14e70fac4:
          if (local_e8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
          }
        }
        else {
          pUVar7 = Z_Construct_UClass_UInterchangeSpecularProfileFactoryNode_NoRegister();
          iVar1 = (int)pUVar7->_padding_;
          if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar7->_padding_)) goto LAB_14e70fc64;
          lVar5 = (**(code **)(this_00->_padding_ + 0x2f8))(this_00);
          if ((lVar5 != 0) && (lVar6 = (**(code **)(*(longlong *)this + 0x2b0))(this), lVar6 != 0))
          {
            if ((*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38)) ||
               (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
                lVar6 + 0x30)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_14e70fc24;
            if (param_1->ReimportObject != (UObject *)0x0) {
LAB_14e70fc16:
              `UInterchangeSpecularProfileFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::
              operator()(&local_110);
              goto LAB_14e70facf;
            }
            local_168.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_168.AssetPath.PackageName.Number = 0;
            local_168.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_168.AssetPath.AssetName.Number = 0;
            local_168.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_168.SubPathString.Data.ArrayNum = 0;
            local_168.SubPathString.Data.ArrayMax = 0;
            bVar4 = UInterchangeFactoryBaseNode::GetCustomReferenceObject
                              ((UInterchangeFactoryBaseNode *)this_00,&local_168);
            pUVar8 = (UObject *)0x0;
            if (bVar4) {
              pUVar8 = FSoftObjectPath::TryLoad(&local_168,(FUObjectSerializeContext *)0x0);
            }
            if (local_168.SubPathString.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_168.SubPathString.Data.AllocatorInstance.Data);
            }
            if (pUVar8 != (UObject *)0x0) goto LAB_14e70fc16;
            if ((param_1->AssetName).Data.ArrayNum == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = (wchar_t *)(param_1->AssetName).Data.AllocatorInstance.Data;
            }
            pFVar9 = ::FName::FName(&local_f0,pwVar14);
            pUVar8 = param_1->Parent;
            local_180 = 0;
            FVar2 = *pFVar9;
            if (FVar2 == (FName)0x0) {
              FObjectInitializer::AssertIfInConstructor
                        (pUVar8,
                         L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                        );
            }
            pUVar7 = Z_Construct_UClass_USpecularProfile_NoRegister();
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_c8,pUVar7);
            local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
            local_c8._56_8_ = (UPackage *)0x0;
            local_c8._24_4_ = RF_Standalone|RF_Public;
            local_c8._40_8_ = (UObject *)0x0;
            local_c8[0x20] = false;
            local_c8._8_8_ = pUVar8;
            local_c8._16_8_ = FVar2;
            pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
            if (local_c8._64_8_ != 0) {
              plVar13 = (longlong *)(local_c8 + 0x50);
              if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
                plVar13 = (longlong *)local_c8._104_8_;
              }
              (**(code **)(*plVar13 + 0x10))();
            }
            if (pUVar8 != (UObject *)0x0) {
              __return_storage_ptr__->ImportedObject = pUVar8;
              bVar4 = UInterchangeSpecularProfileFactoryNode::GetCustomFormat(this_00,local_198);
              if (bVar4) {
                *(ESpecularProfileFormat *)(pUVar8 + 1) = local_198[0];
              }
              local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_178.Data.ArrayNum = 0;
              local_178.Data.ArrayMax = 0;
              bVar4 = UInterchangeSpecularProfileFactoryNode::GetCustomTexture(this_00,&local_178);
              if (bVar4) {
                UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_100,&local_178);
                this_01 = (UInterchangeFactoryBaseNode *)
                          UInterchangeBaseNodeContainer::GetNode(param_1->NodeContainer,&local_100);
                if (this_01 == (UInterchangeFactoryBaseNode *)0x0) {
LAB_14e70fb6c:
                  this_01 = (UInterchangeFactoryBaseNode *)0x0;
                }
                else {
                  pUVar7 = Z_Construct_UClass_UInterchangeTexture2DFactoryNode_NoRegister();
                  iVar1 = (int)pUVar7->_padding_;
                  if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                      &pUVar7->_padding_)) goto LAB_14e70fb6c;
                }
                if (this_01 != (UInterchangeFactoryBaseNode *)0x0) {
                  local_148.AssetPath.PackageName.ComparisonIndex.Value = 0;
                  local_148.AssetPath.PackageName.Number = 0;
                  local_148.AssetPath.AssetName.ComparisonIndex.Value = 0;
                  local_148.AssetPath.AssetName.Number = 0;
                  local_148.SubPathString.Data.AllocatorInstance.Data =
                       (FScriptContainerElement *)0x0;
                  local_148.SubPathString.Data.ArrayNum = 0;
                  local_148.SubPathString.Data.ArrayMax = 0;
                  bVar4 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(this_01,&local_148);
                  if ((bVar4) &&
                     (pUVar11 = FSoftObjectPath::TryLoad(&local_148,(FUObjectSerializeContext *)0x0)
                     , pUVar11 != (UObject *)0x0)) {
                    pUVar7 = Z_Construct_UClass_UTexture2D_NoRegister();
                    iVar1 = (int)pUVar7->_padding_;
                    if ((iVar1 <= *(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38)) &&
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) +
                         (longlong)iVar1 * 8) == &pUVar7->_padding_)) {
                      if (UE::GC::GIsIncrementalReachabilityPending != false) {
                        UE::GC::MarkAsReachable(pUVar11);
                      }
                      *(UObject **)&pUVar8[0x1b].field_0x8 = pUVar11;
                    }
                  }
                  if (local_148.SubPathString.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_148.SubPathString.Data.AllocatorInstance.Data);
                  }
                }
                if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_100.Data.AllocatorInstance.Data);
                }
              }
              if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.Data.AllocatorInstance.Data);
              }
              goto LAB_14e70facf;
            }
            pFVar10 = FText::AsLocalizable_Advanced_LocText
                                (&local_e8,L"InterchangeSpecularProfileFactory",
                                 L"SpecProfileFactory_CouldNotCreateSpecProfile_SpecularProfileCreationFail"
                                 ,L"Specular Profile creation failed");
            `UInterchangeSpecularProfileFactory::BeginImportAsset_GameThread'::__l2::<lambda_2>::
            operator()(&local_128,pFVar10);
            goto LAB_14e70fac4;
          }
LAB_14e70fc24:
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_967182938061930421>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\SpecularProfile\\InterchangeSpecularProfileFactory.cpp"
                             ,0x4b,
                             "SpecularProfileClass && SpecularProfileClass->IsChildOf(GetFactoryClass())"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar12 = (FImportAssetResult *)(*pcVar3)();
            return pFVar12;
          }
          `UInterchangeSpecularProfileFactory::BeginImportAsset_GameThread'::__l2::<lambda_2>::
          operator()(&local_128,&local_190);
        }
LAB_14e70facf:
        if (local_190.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
        }
        goto LAB_14e70fcb5;
      }
    }
  }
  `UInterchangeSpecularProfileFactory::BeginImportAsset_GameThread'::__l2::<lambda_2>::operator()
            (&local_128,&local_190);
  if (local_190.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
  }
LAB_14e70fcb5:
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetFactoryAssetType @ 14e718340

EInterchangeFactoryAssetType __thiscall
UInterchangeSpecularProfileFactory::GetFactoryAssetType(UInterchangeSpecularProfileFactory *this)

{
  return Materials;
}

// GetFactoryClass @ 14e718450

UClass * __thiscall
UInterchangeSpecularProfileFactory::GetFactoryClass(UInterchangeSpecularProfileFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USpecularProfile.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpecularProfile",
               &Z_Registration_Info_UClass_USpecularProfile.InnerSingleton,
               USpecularProfile::StaticRegisterNativesUSpecularProfile,0x458,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USpecularProfile>,
               InternalVTableHelperCtorCaller<USpecularProfile>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpecularProfile.InnerSingleton;
}

// GetPrivateStaticClass @ 14e71a880

UClass * __cdecl UInterchangeSpecularProfileFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSpecularProfileFactory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeSpecularProfileFactory",
               &Z_Registration_Info_UClass_UInterchangeSpecularProfileFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeSpecularProfileFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSpecularProfileFactory>,
               InternalVTableHelperCtorCaller<UInterchangeSpecularProfileFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSpecularProfileFactory.InnerSingleton;
}

// StaticRegisterNativesUInterchangeSpecularProfileFactory @ 14e72a5e0

void __cdecl
UInterchangeSpecularProfileFactory::StaticRegisterNativesUInterchangeSpecularProfileFactory(void)

{
  return;
}

