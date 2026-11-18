// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 8

// StaticClass @ 149483af0

UClass * __cdecl AWN_ISM_Test::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_ISM_Test.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_ISM_Test",
               &Z_Registration_Info_UClass_AWN_ISM_Test.InnerSingleton,
               StaticRegisterNativesAWN_ISM_Test,0x2e0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<AWN_ISM_Test>,
               InternalVTableHelperCtorCaller<AWN_ISM_Test>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_ISM_Test.InnerSingleton;
}

// AWN_ISM_Test @ 14948c5a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_ISM_Test * __thiscall AWN_ISM_Test::AWN_ISM_Test(AWN_ISM_Test *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AWN_ISM_Test__6B_;
  (this->SpawnInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnInfos).ArrayNum = 0;
  (this->SpawnInfos).ArrayMax = 0;
  (this->ISMComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ISMComponents).ArrayNum = 0;
  (this->ISMComponents).ArrayMax = 0;
  return this;
}

// AWN_ISM_Test @ 14948c5f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_ISM_Test * __thiscall AWN_ISM_Test::AWN_ISM_Test(AWN_ISM_Test *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  USceneComponent *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xf9;
  this->_padding_ = (longlong)&___7AWN_ISM_Test__6B_;
  (this->SpawnInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnInfos).ArrayNum = 0;
  (this->SpawnInfos).ArrayMax = 0;
  (this->ISMComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ISMComponents).ArrayNum = 0;
  (this->ISMComponents).ArrayMax = 0;
  pFVar3 = ::FName::FName(&local_res8,"RootComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = (USceneComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  AActor::SetRootComponent((AActor *)this,pUVar5);
  return this;
}

// ~AWN_ISM_Test @ 14948fdf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_ISM_Test::~AWN_ISM_Test(AWN_ISM_Test *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AWN_ISM_Test__6B_;
  pFVar1 = (this->ISMComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWN_TestInstanceSpawnInfo,int>
            ((FWN_TestInstanceSpawnInfo *)(this->SpawnInfos).AllocatorInstance.Data,
             (this->SpawnInfos).ArrayNum);
  pFVar1 = (this->SpawnInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 1494a1490

UClass * __cdecl AWN_ISM_Test::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_ISM_Test.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_ISM_Test",
               &Z_Registration_Info_UClass_AWN_ISM_Test.InnerSingleton,
               StaticRegisterNativesAWN_ISM_Test,0x2e0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<AWN_ISM_Test>,
               InternalVTableHelperCtorCaller<AWN_ISM_Test>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_ISM_Test.InnerSingleton;
}

// OnConstruction @ 1494a6b20

void __thiscall AWN_ISM_Test::OnConstruction(AWN_ISM_Test *this,TTransform<double> *param_1)

{
  FUtf8String *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  UMaterialInterface *pUVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  undefined1 local_res8 [8];
  
  pFVar7 = (this->ISMComponents).AllocatorInstance.Data;
  iVar2 = (this->ISMComponents).ArrayNum;
  pFVar4 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ISMComponents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UWN_BindlessISMComponent>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar4) break;
    (**(code **)(**(longlong **)pFVar7 + 0xc38))();
    pFVar7 = pFVar7 + 8;
  }
  pFVar4 = (this->SpawnInfos).AllocatorInstance.Data;
  iVar2 = (this->SpawnInfos).ArrayNum;
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(pFVar4 + 0x10);
  do {
    if ((this->SpawnInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FWN_TestInstanceSpawnInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    pFVar1 = &this_00[-1].ObjectID.SubPathString;
    if ((FScriptContainerElement *)pFVar1 == pFVar4 + (longlong)iVar2 * 0x38) {
      return;
    }
    pUVar5 = (UMaterialInterface *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (pUVar5 == (UMaterialInterface *)0x0) {
      if ((this_00->ObjectID).AssetPath.PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad(&this_00->ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar5 = (UMaterialInterface *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
        goto LAB_1494a6bda;
      }
    }
    else {
LAB_1494a6bda:
      if (pUVar5 != (UMaterialInterface *)0x0) {
        pUVar6 = Z_Construct_UClass_UMaterialInterface_NoRegister();
        iVar3 = (int)pUVar6->_padding_;
        if ((iVar3 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar6->_padding_)) {
          SpawnInstances(this,(double)(pFVar1->Data).AllocatorInstance.Data,
                         this_00[-1].ObjectID.SubPathString.Data.ArrayNum,pUVar5);
        }
      }
    }
    this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)&this_00[1].ObjectID.AssetPath.AssetName;
  } while( true );
}

// SpawnInstances @ 1494ad990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
AWN_ISM_Test::SpawnInstances
          (AWN_ISM_Test *this,double param_1,int param_2,UMaterialInterface *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  UObject *pUVar4;
  UMaterialInterface *pUVar5;
  FName FVar6;
  UClass *pUVar7;
  UStaticMeshComponent *this_00;
  UStaticMesh *pUVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_130;
  undefined1 local_128 [8];
  FString local_120;
  FGCObject local_110;
  UStaticMesh *local_100;
  FName local_f8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_f0;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_158;
  pFVar10 = (this->ISMComponents).AllocatorInstance.Data;
  iVar2 = (this->ISMComponents).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ISMComponents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UWN_BindlessISMComponent>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_128);
    }
    if (pFVar10 == pFVar1) goto LAB_1494ada19;
    this_00 = *(UStaticMeshComponent **)pFVar10;
    pUVar5 = UStaticMeshComponent::GetMaterial(this_00,0);
    if (param_3 == pUVar5) break;
    pFVar10 = pFVar10 + 8;
  }
  if (this_00 == (UStaticMeshComponent *)0x0) {
LAB_1494ada19:
    lVar3 = param_3->_padding_;
    FVar6 = (FName)Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
    local_138 = 4;
    MakeUniqueObjectName((UObject *)&local_f8,(UClass *)this,FVar6,(EUniqueObjectNameOptions)lVar3);
    pUVar4 = (UObject *)this->_padding_;
    if (local_f8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                (pUVar4,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar7 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_d8,pUVar7);
    local_d8._16_4_ = local_f8.ComparisonIndex.Value;
    local_d8._20_4_ = local_f8.Number;
    local_d8._24_4_ = RF_NoFlags;
    local_d8._40_8_ = (UObject *)0x0;
    local_d8[0x20] = false;
    local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_d8._56_8_ = (UPackage *)0x0;
    local_d8._8_8_ = pUVar4;
    this_00 = (UStaticMeshComponent *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
    if (local_d8._64_8_ != 0) {
      plVar9 = (longlong *)(local_d8 + 0x50);
      if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_d8._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (**(code **)(this_00->_padding_ + 0x508))
              (this_00,this->_padding_,&FAttachmentTransformRules::KeepRelativeTransform,0);
    local_110.bCanMakeInitialReferences = false;
    local_110.bReferenceAdded = false;
    local_110._padding_ = (longlong)&___7FGCObject__6B_;
    FGCObject::RegisterGCObject(&local_110);
    local_100 = (UStaticMesh *)0x0;
    local_110._padding_ = (longlong)&___7__FObjectFinder_VUStaticMesh___ConstructorHelpers__6B_;
    ConstructorHelpers::CheckIfIsInConstructor(L"/Engine/EngineMeshes/Sphere.Sphere");
    ::FString::FString(&local_120,L"/Engine/EngineMeshes/Sphere.Sphere");
    ConstructorHelpers::StripObjectClass(&local_120,true);
    pUVar8 = ConstructorHelpersInternal::FindOrLoadObject<UStaticMesh>(&local_120,0);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar8 == (UStaticMesh *)0x0)) {
      local_100 = pUVar8;
      if (pUVar8 == (UStaticMesh *)0x0) {
        ConstructorHelpers::FailedToFind(L"/Engine/EngineMeshes/Sphere.Sphere");
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
      local_100 = pUVar8;
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (local_100 != (UStaticMesh *)0x0) {
      (**(code **)(this_00->_padding_ + 0xb28))(this_00,local_100);
    }
    local_110._padding_ = (longlong)&___7FGCObject__6B_;
    FGCObject::UnregisterGCObject(&local_110);
  }
  WN_CreateInstanceTransforms(&local_f0,param_1,param_2);
  local_130 = 0;
  local_138 = CONCAT31(local_138._1_3_,1);
  (**(code **)(this_00->_padding_ + 3000))(this_00,&local_120,&local_f0,0);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesAWN_ISM_Test @ 1494ae190

void __cdecl AWN_ISM_Test::StaticRegisterNativesAWN_ISM_Test(void)

{
  return;
}

