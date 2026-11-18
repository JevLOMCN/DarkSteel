// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 9

// StaticClass @ 14e7006c0

UClass * __cdecl UInterchangeSkyLightActorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSkyLightActorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeSkyLightActorFactory",
               &Z_Registration_Info_UClass_UInterchangeSkyLightActorFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeSkyLightActorFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSkyLightActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeSkyLightActorFactory>,local_res8,
               UInterchangeActorFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSkyLightActorFactory.InnerSingleton;
}

// UInterchangeSkyLightActorFactory @ 14e708bb0

UInterchangeSkyLightActorFactory * __thiscall
UInterchangeSkyLightActorFactory::UInterchangeSkyLightActorFactory
          (UInterchangeSkyLightActorFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeSkyLightActorFactory__6B_;
  return this;
}

// UInterchangeSkyLightActorFactory @ 14e708be0

UInterchangeSkyLightActorFactory * __thiscall
UInterchangeSkyLightActorFactory::UInterchangeSkyLightActorFactory
          (UInterchangeSkyLightActorFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeSkyLightActorFactory__6B_;
  return this;
}

// ~UInterchangeSkyLightActorFactory @ 14e709a90

void __thiscall
UInterchangeSkyLightActorFactory::~UInterchangeSkyLightActorFactory
          (UInterchangeSkyLightActorFactory *this)

{
  *(undefined ***)this = &___7UInterchangeActorFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// GetFactoryClass @ 14e718430

UClass * __thiscall
UInterchangeSkyLightActorFactory::GetFactoryClass(UInterchangeSkyLightActorFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ASkyLight.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkyLight",&Z_Registration_Info_UClass_ASkyLight.InnerSingleton,
               ASkyLight::StaticRegisterNativesASkyLight,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ASkyLight>,
               InternalVTableHelperCtorCaller<ASkyLight>,aFStackX_8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASkyLight.InnerSingleton;
}

// GetPrivateStaticClass @ 14e71a700

UClass * __cdecl UInterchangeSkyLightActorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSkyLightActorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeSkyLightActorFactory",
               &Z_Registration_Info_UClass_UInterchangeSkyLightActorFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeSkyLightActorFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSkyLightActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeSkyLightActorFactory>,local_res8,
               UInterchangeActorFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSkyLightActorFactory.InnerSingleton;
}

// ProcessActor @ 14e725230

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
UInterchangeSkyLightActorFactory::ProcessActor
          (UInterchangeSkyLightActorFactory *this,AActor *param_1,
          UInterchangeActorFactoryNode *param_2,UInterchangeBaseNodeContainer *param_3,
          FImportSceneObjectsParams *param_4)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (AActor *)0x0) {
    pUVar2 = Z_Construct_UClass_ASkyLight_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return (UObject *)param_1[1]._padding_;
    }
  }
  return (UObject *)0x0;
}

// SetupObject_GameThread @ 14e728a80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInterchangeSkyLightActorFactory::SetupObject_GameThread
          (UInterchangeSkyLightActorFactory *this,FSetupObjectParams *param_1)

{
  int iVar1;
  UObject *pUVar2;
  USkyLightComponent *this_00;
  UInterchangeSkyLightFactoryNode *this_01;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UInterchangeFactoryBaseNode *this_02;
  UTextureCube *pUVar6;
  TEnumAsByte<ESkyLightSourceType> local_res10 [8];
  FString local_38;
  FSoftObjectPath local_28;
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                         ,0x125,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_1->NodeContainer == (UInterchangeBaseNodeContainer *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6370337910524215324>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeSkyLightActorFactory.cpp"
                       ,0x1c,"Arguments.NodeContainer");
    if (!bVar4) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar2 = param_1->ImportedObject;
  if (pUVar2 == (UObject *)0x0) {
    return;
  }
  pUVar5 = Z_Construct_UClass_ASkyLight_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if (*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar5->_padding_) {
    return;
  }
  this_00 = *(USkyLightComponent **)&pUVar2[0x11].field_0x18;
  if (this_00 == (USkyLightComponent *)0x0) {
    return;
  }
  UActorComponent::UnregisterComponent((UActorComponent *)this_00);
  this_01 = (UInterchangeSkyLightFactoryNode *)param_1->FactoryNode;
  if (this_01 == (UInterchangeSkyLightFactoryNode *)0x0) {
    return;
  }
  pUVar5 = Z_Construct_UClass_UInterchangeSkyLightFactoryNode_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if (*(int *)(this_01->_padding_ + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar5->_padding_) {
    return;
  }
  bVar4 = UInterchangeSkyLightFactoryNode::GetCustomSourceType(this_01,&local_res10[0].Value);
  if (bVar4) {
    (this_00->SourceType).Value = local_res10[0].Value;
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  bVar4 = UInterchangeSkyLightFactoryNode::GetCustomCubemapDependency(this_01,&local_38);
  if ((!bVar4) || (local_38.Data.ArrayNum < 2)) goto LAB_14e728c8e;
  this_02 = UInterchangeBaseNodeContainer::GetFactoryNode(param_1->NodeContainer,&local_38);
  if (this_02 == (UInterchangeFactoryBaseNode *)0x0) {
LAB_14e728c14:
    this_02 = (UInterchangeFactoryBaseNode *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(this_02->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) goto LAB_14e728c14;
  }
  if (this_02 != (UInterchangeFactoryBaseNode *)0x0) {
    local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_28.AssetPath.PackageName.Number = 0;
    local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_28.AssetPath.AssetName.Number = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    UInterchangeFactoryBaseNode::GetCustomReferenceObject(this_02,&local_28);
    pUVar6 = (UTextureCube *)FSoftObjectPath::TryLoad(&local_28,(FUObjectSerializeContext *)0x0);
    if (pUVar6 != (UTextureCube *)0x0) {
      pUVar5 = Z_Construct_UClass_UTextureCube_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        USkyLightComponent::SetCubemap(this_00,pUVar6);
      }
    }
    if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
    }
  }
LAB_14e728c8e:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUInterchangeSkyLightActorFactory @ 14e72a5c0

void __cdecl
UInterchangeSkyLightActorFactory::StaticRegisterNativesUInterchangeSkyLightActorFactory(void)

{
  return;
}

