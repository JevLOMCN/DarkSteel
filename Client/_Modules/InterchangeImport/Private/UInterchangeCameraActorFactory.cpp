// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 9

// StaticClass @ 14e700600

UClass * __cdecl UInterchangeCameraActorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeCameraActorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeCameraActorFactory",
               &Z_Registration_Info_UClass_UInterchangeCameraActorFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeCameraActorFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeCameraActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeCameraActorFactory>,local_res8,
               UInterchangeActorFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeCameraActorFactory.InnerSingleton;
}

// UInterchangeCameraActorFactory @ 14e708500

UInterchangeCameraActorFactory * __thiscall
UInterchangeCameraActorFactory::UInterchangeCameraActorFactory
          (UInterchangeCameraActorFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeCameraActorFactory__6B_;
  return this;
}

// UInterchangeCameraActorFactory @ 14e708530

UInterchangeCameraActorFactory * __thiscall
UInterchangeCameraActorFactory::UInterchangeCameraActorFactory
          (UInterchangeCameraActorFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeCameraActorFactory__6B_;
  return this;
}

// ~UInterchangeCameraActorFactory @ 14e709880

void __thiscall
UInterchangeCameraActorFactory::~UInterchangeCameraActorFactory
          (UInterchangeCameraActorFactory *this)

{
  *(undefined ***)this = &___7UInterchangeActorFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// ApplyAllCustomAttributesToObject @ 14e70e1d0

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
UInterchangeCameraActorFactory::ApplyAllCustomAttributesToObject
          (UInterchangeCameraActorFactory *this,FImportSceneObjectsParams *param_1,AActor *param_2,
          UObject *param_3)

{
  int iVar1;
  UInterchangeStandardCameraFactoryNode *pUVar2;
  USceneComponent *pUVar3;
  UClass *pUVar4;
  UInterchangeFactoryBaseNode *pUVar5;
  
  if (param_3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UCameraComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&param_3->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar4->_padding_)) &&
       (pUVar2 = (UInterchangeStandardCameraFactoryNode *)param_1->FactoryNode,
       pUVar2 != (UInterchangeStandardCameraFactoryNode *)0x0)) {
      pUVar4 = Z_Construct_UClass_UInterchangeStandardCameraFactoryNode_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if (((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar4->_padding_)) &&
         (pUVar3 = (param_2->RootComponent).field0_0x0.DebugPtr, pUVar3 != (USceneComponent *)0x0))
      {
        UE::InterchangeCameraActorFactory::Private::
        ApplyAllCameraCustomAttributes<UInterchangeStandardCameraFactoryNode>
                  (param_1,pUVar2,pUVar3,(USceneComponent *)param_3);
        return;
      }
    }
  }
  if ((param_1->ReimportObject == (UObject *)0x0) ||
     (*(UObject **)&param_3->field_0x20 != param_1->ReimportObject)) {
    UInterchangeFactoryBaseNode::ApplyAllCustomAttributeToObject(param_1->FactoryNode,param_3);
  }
  else {
    pUVar5 = UInterchangeFactoryBaseNode::DuplicateWithObject(param_1->FactoryNode,param_3);
    UE::Interchange::FFactoryCommon::ApplyReimportStrategyToAsset
              (param_3,param_1->ReimportFactoryNode,pUVar5,param_1->FactoryNode);
  }
  return;
}

// GetFactoryClass @ 14e718380

UClass * __thiscall
UInterchangeCameraActorFactory::GetFactoryClass(UInterchangeCameraActorFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ACameraActor.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraActor",
               &Z_Registration_Info_UClass_ACameraActor.InnerSingleton,
               ACameraActor::StaticRegisterNativesACameraActor,0xa60,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ACameraActor>,InternalVTableHelperCtorCaller<ACameraActor>,
               aFStackX_8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACameraActor.InnerSingleton;
}

// GetPrivateStaticClass @ 14e719b00

UClass * __cdecl UInterchangeCameraActorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeCameraActorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeCameraActorFactory",
               &Z_Registration_Info_UClass_UInterchangeCameraActorFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeCameraActorFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeCameraActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeCameraActorFactory>,local_res8,
               UInterchangeActorFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeCameraActorFactory.InnerSingleton;
}

// ProcessActor @ 14e724740

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
UInterchangeCameraActorFactory::ProcessActor
          (UInterchangeCameraActorFactory *this,AActor *param_1,
          UInterchangeActorFactoryNode *param_2,UInterchangeBaseNodeContainer *param_3,
          FImportSceneObjectsParams *param_4)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (AActor *)0x0) {
    pUVar2 = Z_Construct_UClass_ACameraActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return (UObject *)param_1[1]._padding_;
    }
  }
  return (UObject *)0x0;
}

// StaticRegisterNativesUInterchangeCameraActorFactory @ 14e72a4c0

void __cdecl
UInterchangeCameraActorFactory::StaticRegisterNativesUInterchangeCameraActorFactory(void)

{
  return;
}

