// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 8

// StaticClass @ 14e700dc0

UClass * __cdecl UInterchangeHeterogeneousVolumeActorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeHeterogeneousVolumeActorFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeHeterogeneousVolumeActorFactory",
               &Z_Registration_Info_UClass_UInterchangeHeterogeneousVolumeActorFactory.
                InnerSingleton,StaticRegisterNativesUInterchangeHeterogeneousVolumeActorFactory,0x30
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeHeterogeneousVolumeActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeHeterogeneousVolumeActorFactory>,
               local_res8,UInterchangeActorFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeHeterogeneousVolumeActorFactory.InnerSingleton;
}

// UInterchangeHeterogeneousVolumeActorFactory @ 14e7086a0

UInterchangeHeterogeneousVolumeActorFactory * __thiscall
UInterchangeHeterogeneousVolumeActorFactory::UInterchangeHeterogeneousVolumeActorFactory
          (UInterchangeHeterogeneousVolumeActorFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeHeterogeneousVolumeActorFactory__6B_;
  return this;
}

// UInterchangeHeterogeneousVolumeActorFactory @ 14e7086d0

UInterchangeHeterogeneousVolumeActorFactory * __thiscall
UInterchangeHeterogeneousVolumeActorFactory::UInterchangeHeterogeneousVolumeActorFactory
          (UInterchangeHeterogeneousVolumeActorFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeHeterogeneousVolumeActorFactory__6B_;
  return this;
}

// ~UInterchangeHeterogeneousVolumeActorFactory @ 14e709910

void __thiscall
UInterchangeHeterogeneousVolumeActorFactory::~UInterchangeHeterogeneousVolumeActorFactory
          (UInterchangeHeterogeneousVolumeActorFactory *this)

{
  *(undefined ***)this = &___7UInterchangeActorFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// GetFactoryClass @ 14e7183b0

UClass * __thiscall
UInterchangeHeterogeneousVolumeActorFactory::GetFactoryClass
          (UInterchangeHeterogeneousVolumeActorFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_AHeterogeneousVolume.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HeterogeneousVolume",
               &Z_Registration_Info_UClass_AHeterogeneousVolume.InnerSingleton,
               AHeterogeneousVolume::StaticRegisterNativesAHeterogeneousVolume,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AHeterogeneousVolume>,
               InternalVTableHelperCtorCaller<AHeterogeneousVolume>,aFStackX_8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AHeterogeneousVolume.InnerSingleton;
}

// GetPrivateStaticClass @ 14e719e00

UClass * __cdecl UInterchangeHeterogeneousVolumeActorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeHeterogeneousVolumeActorFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeHeterogeneousVolumeActorFactory",
               &Z_Registration_Info_UClass_UInterchangeHeterogeneousVolumeActorFactory.
                InnerSingleton,StaticRegisterNativesUInterchangeHeterogeneousVolumeActorFactory,0x30
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeHeterogeneousVolumeActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeHeterogeneousVolumeActorFactory>,
               local_res8,UInterchangeActorFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeHeterogeneousVolumeActorFactory.InnerSingleton;
}

// ProcessActor @ 14e724b50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
UInterchangeHeterogeneousVolumeActorFactory::ProcessActor
          (UInterchangeHeterogeneousVolumeActorFactory *this,AActor *param_1,
          UInterchangeActorFactoryNode *param_2,UInterchangeBaseNodeContainer *param_3,
          FImportSceneObjectsParams *param_4)

{
  int iVar1;
  USceneComponent *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UInterchangeFactoryBaseNode *this_00;
  UObject *pUVar5;
  UObject *pUVar6;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FSoftObjectPath local_38;
  
  if (param_1 == (AActor *)0x0) {
    return (UObject *)0x0;
  }
  pUVar4 = Z_Construct_UClass_AHeterogeneousVolume_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(param_1->_padding_ + 0x38) < iVar1) {
    return (UObject *)0x0;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar4->_padding_) {
    return (UObject *)0x0;
  }
  pUVar2 = (param_1->RootComponent).field0_0x0.DebugPtr;
  if (pUVar2 == (USceneComponent *)0x0) {
    return (UObject *)0x0;
  }
  pUVar4 = Z_Construct_UClass_UHeterogeneousVolumeComponent_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(pUVar2->_padding_ + 0x38) < iVar1) {
    return (UObject *)0x0;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_) {
    return (UObject *)0x0;
  }
  if (param_2 == (UInterchangeActorFactoryNode *)0x0) {
    return (UObject *)0x0;
  }
  pUVar4 = Z_Construct_UClass_UInterchangeHeterogeneousVolumeActorFactoryNode_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(param_2->_padding_ + 0x38) < iVar1) {
    return (UObject *)0x0;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar4->_padding_) {
    return (UObject *)0x0;
  }
  pUVar6 = (UObject *)0x0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  bVar3 = UInterchangeHeterogeneousVolumeActorFactoryNode::GetCustomVolumetricMaterialUid
                    ((UInterchangeHeterogeneousVolumeActorFactoryNode *)param_2,&local_78);
  pUVar5 = pUVar6;
  if ((!bVar3) ||
     (this_00 = UInterchangeBaseNodeContainer::GetFactoryNode(param_3,&local_78),
     this_00 == (UInterchangeFactoryBaseNode *)0x0)) goto LAB_14e724d96;
  local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.AssetPath.PackageName.Number = 0;
  local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetPath.AssetName.Number = 0;
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
  UInterchangeFactoryBaseNode::GetCustomReferenceObject(this_00,&local_38);
  pUVar5 = FSoftObjectPath::TryLoad(&local_38,(FUObjectSerializeContext *)0x0);
  if (pUVar5 == (UObject *)0x0) {
LAB_14e724cbb:
    pUVar5 = pUVar6;
    if (2 < (byte)LogInterchangeImport._0_1_) {
      UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_2,&local_48);
      UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_58);
      FSoftObjectPath::ToString(&local_38,&local_68);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      pUVar5 = (UObject *)0x0;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pUVar4 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14e724cbb;
  }
  if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
LAB_14e724d96:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (pUVar5 != (UObject *)0x0) {
    (**(code **)(*(longlong *)pUVar5 + 0x98))(pUVar5);
    (**(code **)(pUVar2->_padding_ + 0x6b8))(pUVar2,0,pUVar5);
  }
  return (UObject *)pUVar2;
}

// StaticRegisterNativesUInterchangeHeterogeneousVolumeActorFactory @ 14e72a500

void __cdecl
UInterchangeHeterogeneousVolumeActorFactory::
StaticRegisterNativesUInterchangeHeterogeneousVolumeActorFactory(void)

{
  return;
}

