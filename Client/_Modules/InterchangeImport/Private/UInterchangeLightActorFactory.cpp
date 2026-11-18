// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 8

// StaticClass @ 14e701500

UClass * __cdecl UInterchangeLightActorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeLightActorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeLightActorFactory",
               &Z_Registration_Info_UClass_UInterchangeLightActorFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeLightActorFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeLightActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeLightActorFactory>,local_res8,
               UInterchangeActorFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeLightActorFactory.InnerSingleton;
}

// UInterchangeLightActorFactory @ 14e708950

UInterchangeLightActorFactory * __thiscall
UInterchangeLightActorFactory::UInterchangeLightActorFactory
          (UInterchangeLightActorFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeLightActorFactory__6B_;
  return this;
}

// UInterchangeLightActorFactory @ 14e708980

UInterchangeLightActorFactory * __thiscall
UInterchangeLightActorFactory::UInterchangeLightActorFactory
          (UInterchangeLightActorFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeLightActorFactory__6B_;
  return this;
}

// ~UInterchangeLightActorFactory @ 14e7099d0

void __thiscall
UInterchangeLightActorFactory::~UInterchangeLightActorFactory(UInterchangeLightActorFactory *this)

{
  *(undefined ***)this = &___7UInterchangeActorFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// GetFactoryClass @ 14e7183e0

UClass * __thiscall
UInterchangeLightActorFactory::GetFactoryClass(UInterchangeLightActorFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ALight.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Light",&Z_Registration_Info_UClass_ALight.InnerSingleton,
               ALight::StaticRegisterNativesALight,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ALight>,InternalVTableHelperCtorCaller<ALight>,aFStackX_8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALight.InnerSingleton;
}

// GetPrivateStaticClass @ 14e71a280

UClass * __cdecl UInterchangeLightActorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeLightActorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeLightActorFactory",
               &Z_Registration_Info_UClass_UInterchangeLightActorFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeLightActorFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeLightActorFactory>,
               InternalVTableHelperCtorCaller<UInterchangeLightActorFactory>,local_res8,
               UInterchangeActorFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeLightActorFactory.InnerSingleton;
}

// ProcessActor @ 14e724e10

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
UInterchangeLightActorFactory::ProcessActor
          (UInterchangeLightActorFactory *this,AActor *param_1,UInterchangeActorFactoryNode *param_2
          ,UInterchangeBaseNodeContainer *param_3,FImportSceneObjectsParams *param_4)

{
  int iVar1;
  ULightComponent *this_00;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  UClass *pUVar13;
  UInterchangeFactoryBaseNode *this_01;
  UTextureLightProfile *pUVar14;
  TQuat<double> *pTVar15;
  TQuat<double> *pTVar16;
  float local_res10 [2];
  FString local_138;
  FSoftObjectPath local_128;
  TVector<double>_u_0 local_108;
  FString local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  TRotator<double> local_b8;
  TQuat<double> local_98;
  TQuat<double> local_78 [3];
  
  if (param_1 == (AActor *)0x0) {
    return (UObject *)0x0;
  }
  pUVar13 = Z_Construct_UClass_ALight_NoRegister();
  iVar1 = (int)pUVar13->_padding_;
  if (*(int *)(param_1->_padding_ + 0x38) < iVar1) {
    return (UObject *)0x0;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar13->_padding_) {
    return (UObject *)0x0;
  }
  this_00 = (ULightComponent *)param_1[1]._padding_;
  if (this_00 == (ULightComponent *)0x0) {
    return (UObject *)0x0;
  }
  UActorComponent::UnregisterComponent((UActorComponent *)this_00);
  if (param_2 == (UInterchangeActorFactoryNode *)0x0) {
    return (UObject *)this_00;
  }
  pUVar13 = Z_Construct_UClass_UInterchangeLightFactoryNode_NoRegister();
  iVar1 = (int)pUVar13->_padding_;
  if (*(int *)(param_2->_padding_ + 0x38) < iVar1) {
    return (UObject *)this_00;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar13->_padding_) {
    return (UObject *)this_00;
  }
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  bVar12 = UInterchangeLightFactoryNode::GetCustomIESTexture
                     ((UInterchangeLightFactoryNode *)param_2,&local_138);
  if (!bVar12) goto LAB_14e72517a;
  UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_e8,&local_138);
  this_01 = (UInterchangeFactoryBaseNode *)UInterchangeBaseNodeContainer::GetNode(param_3,&local_e8)
  ;
  if (this_01 == (UInterchangeFactoryBaseNode *)0x0) {
LAB_14e724f1c:
    this_01 = (UInterchangeFactoryBaseNode *)0x0;
  }
  else {
    pUVar13 = Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode_NoRegister();
    iVar1 = (int)pUVar13->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar13->_padding_)) goto LAB_14e724f1c;
  }
  if (this_01 != (UInterchangeFactoryBaseNode *)0x0) {
    local_128.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_128.AssetPath.PackageName.Number = 0;
    local_128.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_128.AssetPath.AssetName.Number = 0;
    local_128.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.SubPathString.Data.ArrayNum = 0;
    local_128.SubPathString.Data.ArrayMax = 0;
    UInterchangeFactoryBaseNode::GetCustomReferenceObject(this_01,&local_128);
    pUVar14 = (UTextureLightProfile *)
              FSoftObjectPath::TryLoad(&local_128,(FUObjectSerializeContext *)0x0);
    if (pUVar14 != (UTextureLightProfile *)0x0) {
      pUVar13 = Z_Construct_UClass_UTextureLightProfile_NoRegister();
      iVar1 = (int)pUVar13->_padding_;
      if ((iVar1 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar13->_padding_)) {
        ULightComponent::SetIESTexture(this_00,pUVar14);
        bVar12 = UInterchangeLightFactoryNode::GetCustomUseIESBrightness
                           ((UInterchangeLightFactoryNode *)param_2,(bool *)local_res10);
        if (bVar12) {
          ULightComponent::SetUseIESBrightness(this_00,local_res10[0]._0_1_);
        }
        bVar12 = UInterchangeLightFactoryNode::GetCustomIESBrightnessScale
                           ((UInterchangeLightFactoryNode *)param_2,local_res10);
        if (bVar12) {
          ULightComponent::SetIESBrightnessScale(this_00,local_res10[0]);
        }
        bVar12 = UInterchangeLightFactoryNode::GetCustomRotation
                           ((UInterchangeLightFactoryNode *)param_2,&local_b8);
        if (bVar12) {
          local_108._s_0.X = (double)this_00->_padding_;
          local_108._s_0.Y = (double)this_00->_padding_;
          local_108._s_0.Z = (double)this_00->_padding_;
          pTVar15 = UE::Math::TRotator<double>::Quaternion
                              ((TRotator<double> *)&local_108._s_0,&local_98);
          pTVar16 = UE::Math::TRotator<double>::Quaternion(&local_b8,local_78);
          dVar4 = pTVar15->X;
          dVar5 = pTVar15->Y;
          dVar6 = pTVar15->Z;
          dVar7 = pTVar15->W;
          dVar8 = pTVar16->X;
          dVar9 = pTVar16->Y;
          dVar10 = pTVar16->Z;
          dVar11 = pTVar16->W;
          dVar2 = dVar6 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1] +
                  dVar5 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                  dVar4 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                  dVar7 * dVar9;
          local_108._s_0.Z = (double)this_00->_padding_;
          dVar3 = dVar6 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1] +
                  dVar5 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                  dVar4 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                  dVar7 * dVar11;
          local_d8._8_4_ = SUB84(dVar2,0);
          local_d8._0_8_ =
               dVar6 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0] +
               dVar5 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar4 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar7 * dVar8;
          local_d8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
          local_108._s_0.X = (double)this_00->_padding_;
          local_108._s_0.Y = (double)this_00->_padding_;
          local_c8._8_4_ = SUB84(dVar3,0);
          local_c8._0_8_ =
               dVar6 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0] +
               dVar5 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar4 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dVar7 * dVar10;
          local_c8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
          USceneComponent::SetRelativeLocationAndRotation
                    ((USceneComponent *)this_00,(TVector<double> *)&local_108._s_0,
                     (TQuat<double> *)local_d8,false,(FHitResult *)0x0,None);
        }
      }
    }
    if (local_128.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
LAB_14e72517a:
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
    return (UObject *)this_00;
  }
  return (UObject *)this_00;
}

// StaticRegisterNativesUInterchangeLightActorFactory @ 14e72a560

void __cdecl UInterchangeLightActorFactory::StaticRegisterNativesUInterchangeLightActorFactory(void)

{
  return;
}

