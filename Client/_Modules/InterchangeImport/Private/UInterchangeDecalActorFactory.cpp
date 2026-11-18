// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 8

// StaticClass @ 14e700840

UClass * __cdecl UInterchangeDecalActorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeDecalActorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeDecalActorFactory",
               &Z_Registration_Info_UClass_UInterchangeDecalActorFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeDecalActorFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeDecalActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeDecalActorFactory>,local_res8,
               UInterchangeActorFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeDecalActorFactory.InnerSingleton;
}

// UInterchangeDecalActorFactory @ 14e708640

UInterchangeDecalActorFactory * __thiscall
UInterchangeDecalActorFactory::UInterchangeDecalActorFactory
          (UInterchangeDecalActorFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeDecalActorFactory__6B_;
  return this;
}

// UInterchangeDecalActorFactory @ 14e708670

UInterchangeDecalActorFactory * __thiscall
UInterchangeDecalActorFactory::UInterchangeDecalActorFactory
          (UInterchangeDecalActorFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeDecalActorFactory__6B_;
  return this;
}

// ~UInterchangeDecalActorFactory @ 14e7098f0

void __thiscall
UInterchangeDecalActorFactory::~UInterchangeDecalActorFactory(UInterchangeDecalActorFactory *this)

{
  *(undefined ***)this = &___7UInterchangeActorFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// GetFactoryClass @ 14e7183a0

UClass * __thiscall
UInterchangeDecalActorFactory::GetFactoryClass(UInterchangeDecalActorFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ADecalActor.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DecalActor",
               &Z_Registration_Info_UClass_ADecalActor.InnerSingleton,
               ADecalActor::StaticRegisterNativesADecalActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADecalActor>,
               InternalVTableHelperCtorCaller<ADecalActor>,aFStackX_8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADecalActor.InnerSingleton;
}

// GetPrivateStaticClass @ 14e719d40

UClass * __cdecl UInterchangeDecalActorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeDecalActorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeDecalActorFactory",
               &Z_Registration_Info_UClass_UInterchangeDecalActorFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeDecalActorFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeDecalActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeDecalActorFactory>,local_res8,
               UInterchangeActorFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeDecalActorFactory.InnerSingleton;
}

// ProcessActor @ 14e7247e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

UObject * __thiscall
UInterchangeDecalActorFactory::ProcessActor
          (UInterchangeDecalActorFactory *this,AActor *param_1,UInterchangeActorFactoryNode *param_2
          ,UInterchangeBaseNodeContainer *param_3,FImportSceneObjectsParams *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UInterchangeFactoryBaseNode *pUVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  UObject *pUVar9;
  UInterchangeResultError_Generic *pUVar10;
  ForAnyElementType FVar11;
  UInterchangeFactoryBaseNode *pUVar12;
  FString local_f8;
  FSoftObjectPath local_e8;
  FSoftObjectPath local_c8;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FString local_88;
  FText local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  if (param_1 == (AActor *)0x0) {
    return (UObject *)0x0;
  }
  pUVar4 = Z_Construct_UClass_ADecalActor_NoRegister();
  iVar3 = (int)pUVar4->_padding_;
  if (*(int *)(param_1->_padding_ + 0x38) < iVar3) {
    return (UObject *)0x0;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
      != &pUVar4->_padding_) {
    return (UObject *)0x0;
  }
  if (param_2 == (UInterchangeActorFactoryNode *)0x0) goto LAB_14e724b12;
  pUVar4 = Z_Construct_UClass_UInterchangeDecalActorFactoryNode_NoRegister();
  iVar3 = (int)pUVar4->_padding_;
  if ((*(int *)(param_2->_padding_ + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar3 * 8)
      != &pUVar4->_padding_)) goto LAB_14e724b12;
  pUVar12 = (UInterchangeFactoryBaseNode *)0x0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  bVar2 = UInterchangeDecalActorFactoryNode::GetCustomDecalMaterialPathName
                    ((UInterchangeDecalActorFactoryNode *)param_2,&local_f8);
  if (bVar2) {
    local_a8 = local_f8.Data.AllocatorInstance.Data;
    iVar3 = 0;
    iStack_a0 = iVar3;
    if (local_f8.Data.ArrayNum != 0) {
      iStack_a0 = local_f8.Data.ArrayNum + -1;
    }
    local_68._12_4_ = uStack_9c;
    local_68.Size = iStack_a0;
    local_68.DataPtr = (wchar_t *)local_f8.Data.AllocatorInstance.Data;
    bVar2 = FPackageName::IsValidObjectPath(&local_68,(FText *)0x0);
    if (bVar2) {
      local_98 = local_f8.Data.AllocatorInstance.Data;
      local_e8.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_e8.AssetPath.PackageName.Number = 0;
      local_e8.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_e8.AssetPath.AssetName.Number = 0;
      local_e8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.SubPathString.Data.ArrayNum = 0;
      local_e8.SubPathString.Data.ArrayMax = 0;
      if (local_f8.Data.ArrayNum != 0) {
        iVar3 = local_f8.Data.ArrayNum + -1;
      }
      local_58._12_4_ = uStack_8c;
      local_58.Size = iVar3;
      local_58.DataPtr = (wchar_t *)local_f8.Data.AllocatorInstance.Data;
      iStack_90 = iVar3;
      FSoftObjectPath::SetPath(&local_e8,&local_58);
      pUVar5 = (UInterchangeFactoryBaseNode *)
               FSoftObjectPath::TryLoad(&local_e8,(FUObjectSerializeContext *)0x0);
      FVar11.Data = local_e8.SubPathString.Data.AllocatorInstance.Data;
      if (pUVar5 != (UInterchangeFactoryBaseNode *)0x0) {
        pUVar4 = Z_Construct_UClass_UMaterialInterface_NoRegister();
        iVar3 = (int)pUVar4->_padding_;
        FVar11.Data = local_e8.SubPathString.Data.AllocatorInstance.Data;
        if ((iVar3 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar4->_padding_)) {
          pUVar12 = pUVar5;
        }
      }
LAB_14e724a04:
      if (FVar11.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar11.Data);
      }
      if (pUVar12 != (UInterchangeFactoryBaseNode *)0x0) {
        ADecalActor::SetDecalMaterial((ADecalActor *)param_1,(UMaterialInterface *)pUVar12);
        goto LAB_14e724afb;
      }
    }
    else {
      pUVar5 = UInterchangeBaseNodeContainer::GetFactoryNode(param_3,&local_f8);
      if (pUVar5 == (UInterchangeFactoryBaseNode *)0x0) {
LAB_14e724994:
        pUVar5 = pUVar12;
      }
      else {
        pUVar4 = Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode_NoRegister();
        iVar3 = (int)pUVar4->_padding_;
        if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar3) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar4->_padding_)) goto LAB_14e724994;
      }
      if (pUVar5 != (UInterchangeFactoryBaseNode *)0x0) {
        local_c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_c8.AssetPath.PackageName.Number = 0;
        local_c8.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_c8.AssetPath.AssetName.Number = 0;
        local_c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.SubPathString.Data.ArrayNum = 0;
        local_c8.SubPathString.Data.ArrayMax = 0;
        bVar2 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(pUVar5,&local_c8);
        FVar11.Data = local_c8.SubPathString.Data.AllocatorInstance.Data;
        if ((bVar2) &&
           (pUVar5 = (UInterchangeFactoryBaseNode *)
                     FSoftObjectPath::TryLoad(&local_c8,(FUObjectSerializeContext *)0x0),
           FVar11.Data = local_c8.SubPathString.Data.AllocatorInstance.Data,
           pUVar5 != (UInterchangeFactoryBaseNode *)0x0)) {
          pUVar4 = Z_Construct_UClass_UMaterialInterface_NoRegister();
          iVar3 = (int)pUVar4->_padding_;
          FVar11.Data = local_c8.SubPathString.Data.AllocatorInstance.Data;
          if ((iVar3 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
             (pUVar12 = (UInterchangeFactoryBaseNode *)0x0,
             (longlong *)
             *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
             &pUVar4->_padding_)) {
            pUVar12 = pUVar5;
          }
        }
        goto LAB_14e724a04;
      }
    }
    pFVar6 = FText::FromString(&local_38,&local_f8);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"DecalActorImport",L"NoMaterial",
                        L"No valid decal material found. Make sure that the DecalMaterialPath is valid: {0}"
                       );
    pFVar8 = FTextFormat::FTextFormat(&local_28,pFVar7,Default);
    FText::Format<FText>(&local_78,pFVar8,pFVar6);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    ::FString::FString(&local_88,L"");
    if ((*(longlong *)&this->field_0x28 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Results != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                           ,0x17b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar9 = (UObject *)(*pcVar1)();
      return pUVar9;
    }
    pUVar10 = UInterchangeResultsContainer::Add<UInterchangeResultError_Generic>
                        (*(UInterchangeResultsContainer **)&this->field_0x28);
    UInterchangeActorFactory::FillMessage<UInterchangeResultError_Generic>
              ((UInterchangeActorFactory *)this,param_4,&local_78,&local_88,pUVar10);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
  }
LAB_14e724afb:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
LAB_14e724b12:
  return (UObject *)param_1[1]._padding_;
}

// StaticRegisterNativesUInterchangeDecalActorFactory @ 14e72a4f0

void __cdecl UInterchangeDecalActorFactory::StaticRegisterNativesUInterchangeDecalActorFactory(void)

{
  return;
}

