// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 9

// StaticClass @ 14e7013c0

UClass * __cdecl UInterchangeLevelInstanceActorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeLevelInstanceActorFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeLevelInstanceActorFactory",
               &Z_Registration_Info_UClass_UInterchangeLevelInstanceActorFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeLevelInstanceActorFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeLevelInstanceActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeLevelInstanceActorFactory>,local_res8,
               UInterchangeActorFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeLevelInstanceActorFactory.InnerSingleton;
}

// UInterchangeLevelInstanceActorFactory @ 14e7088f0

UInterchangeLevelInstanceActorFactory * __thiscall
UInterchangeLevelInstanceActorFactory::UInterchangeLevelInstanceActorFactory
          (UInterchangeLevelInstanceActorFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeLevelInstanceActorFactory__6B_;
  return this;
}

// UInterchangeLevelInstanceActorFactory @ 14e708920

UInterchangeLevelInstanceActorFactory * __thiscall
UInterchangeLevelInstanceActorFactory::UInterchangeLevelInstanceActorFactory
          (UInterchangeLevelInstanceActorFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeLevelInstanceActorFactory__6B_;
  return this;
}

// ~UInterchangeLevelInstanceActorFactory @ 14e7099b0

void __thiscall
UInterchangeLevelInstanceActorFactory::~UInterchangeLevelInstanceActorFactory
          (UInterchangeLevelInstanceActorFactory *this)

{
  *(undefined ***)this = &___7UInterchangeActorFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// GetFactoryClass @ 14e7183d0

UClass * __thiscall
UInterchangeLevelInstanceActorFactory::GetFactoryClass(UInterchangeLevelInstanceActorFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ALevelInstance.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstance",
               &Z_Registration_Info_UClass_ALevelInstance.InnerSingleton,
               ALevelInstance::StaticRegisterNativesALevelInstance,0x360,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALevelInstance>,InternalVTableHelperCtorCaller<ALevelInstance>,
               aFStackX_8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelInstance.InnerSingleton;
}

// GetObjectToReimport @ 14e719750

UObject * __thiscall
UInterchangeLevelInstanceActorFactory::GetObjectToReimport
          (UInterchangeLevelInstanceActorFactory *this,UObject *param_1,
          UInterchangeFactoryBaseNode *param_2,FString *param_3,FString *param_4,FString *param_5)

{
  int iVar1;
  UInterchangeFactoryBaseNode *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  TArray<UInterchangeFactoryBaseNode_const_*,TSizedDefaultAllocator<32>_> local_38;
  FSoftObjectPath local_28;
  
  if (param_1 == (UObject *)0x0) {
    return (UObject *)0x0;
  }
  pUVar4 = Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(param_2->_padding_ + 0x38) < iVar1) {
    return param_1;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar4->_padding_) {
    return param_1;
  }
  pUVar4 = Z_Construct_UClass_UInterchangeSceneImportAsset_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) {
    return param_1;
  }
  if ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_) {
    return param_1;
  }
  pUVar5 = UInterchangeSceneImportAsset::GetSceneObject
                     ((UInterchangeSceneImportAsset *)param_1,param_3,param_4,param_5);
  if (pUVar5 != (UObject *)0x0) {
    return pUVar5;
  }
  pUVar4 = Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode_NoRegister();
  UInterchangeSceneImportAsset::GetFactoryNodesOfClass
            ((UInterchangeSceneImportAsset *)param_1,&local_38,pUVar4);
  if ((1 < local_38.ArrayNum) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7022666880699596845>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeLevelInstanceActorFactory.cpp"
                         ,0x2d,"FacoryNodes.Num() < 2"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UObject *)(*pcVar2)();
    return pUVar5;
  }
  if (local_38.ArrayNum == 1) {
    this_00 = *(UInterchangeFactoryBaseNode **)local_38.AllocatorInstance.Data;
    if (this_00 != (UInterchangeFactoryBaseNode *)0x0) {
      pUVar4 = Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_28.AssetPath.PackageName.Number = 0;
        local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_28.AssetPath.AssetName.Number = 0;
        local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.SubPathString.Data.ArrayNum = 0;
        local_28.SubPathString.Data.ArrayMax = 0;
        bVar3 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(this_00,&local_28);
        if ((!bVar3) &&
           (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<7022666880699596855>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeLevelInstanceActorFactory.cpp"
                               ,0x37,"ActorFactoryNode->GetCustomReferenceObject(ObjectPath)"),
           bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar5 = (UObject *)(*pcVar2)();
          return pUVar5;
        }
        param_1 = FSoftObjectPath::TryLoad(&local_28,(FUObjectSerializeContext *)0x0);
        if ((param_1 == (UObject *)0x0) &&
           (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<7022666880699596858>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeLevelInstanceActorFactory.cpp"
                               ,0x3a,"ObjectToReimport"), bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar5 = (UObject *)(*pcVar2)();
          return pUVar5;
        }
        if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
        }
        goto LAB_14e71994e;
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7022666880699596852>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeLevelInstanceActorFactory.cpp"
                       ,0x34,"ActorFactoryNode");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UObject *)(*pcVar2)();
      return pUVar5;
    }
  }
LAB_14e71994e:
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return param_1;
}

// GetPrivateStaticClass @ 14e71a1c0

UClass * __cdecl UInterchangeLevelInstanceActorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeLevelInstanceActorFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeLevelInstanceActorFactory",
               &Z_Registration_Info_UClass_UInterchangeLevelInstanceActorFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeLevelInstanceActorFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeLevelInstanceActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeLevelInstanceActorFactory>,local_res8,
               UInterchangeActorFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeLevelInstanceActorFactory.InnerSingleton;
}

// ImportSceneObject_GameThread @ 14e723300

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
UInterchangeLevelInstanceActorFactory::ImportSceneObject_GameThread
          (UInterchangeLevelInstanceActorFactory *this,FImportSceneObjectsParams *param_1)

{
  return (UObject *)0x0;
}

// StaticRegisterNativesUInterchangeLevelInstanceActorFactory @ 14e72a550

void __cdecl
UInterchangeLevelInstanceActorFactory::StaticRegisterNativesUInterchangeLevelInstanceActorFactory
          (void)

{
  return;
}

