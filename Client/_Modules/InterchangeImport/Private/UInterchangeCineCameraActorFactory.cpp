// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 9

// StaticClass @ 14e7004c0

UClass * __cdecl UInterchangeCineCameraActorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeCineCameraActorFactory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeCineCameraActorFactory",
               &Z_Registration_Info_UClass_UInterchangeCineCameraActorFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeCineCameraActorFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeCineCameraActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeCineCameraActorFactory>,local_res8,
               UInterchangeActorFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeCineCameraActorFactory.InnerSingleton;
}

// UInterchangeCineCameraActorFactory @ 14e708560

UInterchangeCineCameraActorFactory * __thiscall
UInterchangeCineCameraActorFactory::UInterchangeCineCameraActorFactory
          (UInterchangeCineCameraActorFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeCineCameraActorFactory__6B_;
  return this;
}

// UInterchangeCineCameraActorFactory @ 14e708590

UInterchangeCineCameraActorFactory * __thiscall
UInterchangeCineCameraActorFactory::UInterchangeCineCameraActorFactory
          (UInterchangeCineCameraActorFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeCineCameraActorFactory__6B_;
  return this;
}

// ~UInterchangeCineCameraActorFactory @ 14e7098a0

void __thiscall
UInterchangeCineCameraActorFactory::~UInterchangeCineCameraActorFactory
          (UInterchangeCineCameraActorFactory *this)

{
  *(undefined ***)this = &___7UInterchangeActorFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// ApplyAllCustomAttributesToObject @ 14e70e2c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInterchangeCineCameraActorFactory::ApplyAllCustomAttributesToObject
          (UInterchangeCineCameraActorFactory *this,FImportSceneObjectsParams *param_1,
          AActor *param_2,UObject *param_3)

{
  int iVar1;
  UInterchangePhysicalCameraFactoryNode *pUVar2;
  USceneComponent *pUVar3;
  UClass *pUVar4;
  UInterchangeFactoryBaseNode *pUVar5;
  
  if (param_3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&param_3->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar4->_padding_)) &&
       (pUVar2 = (UInterchangePhysicalCameraFactoryNode *)param_1->FactoryNode,
       pUVar2 != (UInterchangePhysicalCameraFactoryNode *)0x0)) {
      pUVar4 = Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if (((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar4->_padding_)) &&
         (pUVar3 = (param_2->RootComponent).field0_0x0.DebugPtr, pUVar3 != (USceneComponent *)0x0))
      {
        UE::InterchangeCameraActorFactory::Private::
        ApplyAllCameraCustomAttributes<UInterchangePhysicalCameraFactoryNode>
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

// GetFactoryClass @ 14e718390

UClass * __thiscall
UInterchangeCineCameraActorFactory::GetFactoryClass(UInterchangeCineCameraActorFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ACineCameraActor.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CinematicCamera",L"CineCameraActor",
               &Z_Registration_Info_UClass_ACineCameraActor.InnerSingleton,
               ACineCameraActor::StaticRegisterNativesACineCameraActor,0xae0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ACineCameraActor>,
               InternalVTableHelperCtorCaller<ACineCameraActor>,aFStackX_8,ACameraActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACineCameraActor.InnerSingleton;
}

// GetPrivateStaticClass @ 14e719bc0

UClass * __cdecl UInterchangeCineCameraActorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeCineCameraActorFactory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeCineCameraActorFactory",
               &Z_Registration_Info_UClass_UInterchangeCineCameraActorFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeCineCameraActorFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeCineCameraActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeCineCameraActorFactory>,local_res8,
               UInterchangeActorFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeCineCameraActorFactory.InnerSingleton;
}

// ProcessActor @ 14e724790

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
UInterchangeCineCameraActorFactory::ProcessActor
          (UInterchangeCineCameraActorFactory *this,AActor *param_1,
          UInterchangeActorFactoryNode *param_2,UInterchangeBaseNodeContainer *param_3,
          FImportSceneObjectsParams *param_4)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (AActor *)0x0) {
    pUVar2 = Z_Construct_UClass_ACineCameraActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return (UObject *)param_1[3].InstanceComponents.AllocatorInstance.Data;
    }
  }
  return (UObject *)0x0;
}

// StaticRegisterNativesUInterchangeCineCameraActorFactory @ 14e72a4d0

void __cdecl
UInterchangeCineCameraActorFactory::StaticRegisterNativesUInterchangeCineCameraActorFactory(void)

{
  return;
}

