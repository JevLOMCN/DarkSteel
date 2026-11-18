// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// StaticClass @ 14cbfdc10

UClass * __cdecl UDisplaceMeshCommonProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDisplaceMeshCommonProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DisplaceMeshCommonProperties",
               &Z_Registration_Info_UClass_UDisplaceMeshCommonProperties.InnerSingleton,
               StaticRegisterNativesUDisplaceMeshCommonProperties,0xe8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDisplaceMeshCommonProperties>,
               InternalVTableHelperCtorCaller<UDisplaceMeshCommonProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDisplaceMeshCommonProperties.InnerSingleton;
}

// UDisplaceMeshCommonProperties @ 14cc1cd60

UDisplaceMeshCommonProperties * __thiscall
UDisplaceMeshCommonProperties::UDisplaceMeshCommonProperties
          (UDisplaceMeshCommonProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->DisplacementType = PerlinNoise;
  this->_padding_ = (longlong)&___7UDisplaceMeshCommonProperties__6B_;
  (this->WeightMap).Number = 0;
  (this->WeightMapsList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightMapsList).ArrayNum = 0;
  (this->WeightMapsList).ArrayMax = 0;
  this->bInvertWeightMap = false;
  this->bShowWireframe = false;
  this->bDisableSizeWarning = false;
  this->DisplaceIntensity = 10.0;
  this->RandomSeed = 0x7a69;
  this->SubdivisionType = PNTriangles;
  this->Subdivisions = 4;
  (this->WeightMap).ComparisonIndex = 0;
  return this;
}

// UDisplaceMeshCommonProperties @ 14cc1cde0

UDisplaceMeshCommonProperties * __thiscall
UDisplaceMeshCommonProperties::UDisplaceMeshCommonProperties
          (UDisplaceMeshCommonProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->DisplacementType = PerlinNoise;
  this->_padding_ = (longlong)&___7UDisplaceMeshCommonProperties__6B_;
  (this->WeightMap).Number = 0;
  (this->WeightMapsList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightMapsList).ArrayNum = 0;
  (this->WeightMapsList).ArrayMax = 0;
  this->bInvertWeightMap = false;
  this->bShowWireframe = false;
  this->bDisableSizeWarning = false;
  this->DisplaceIntensity = 10.0;
  this->RandomSeed = 0x7a69;
  this->SubdivisionType = PNTriangles;
  this->Subdivisions = 4;
  (this->WeightMap).ComparisonIndex = 0;
  return this;
}

// ~UDisplaceMeshCommonProperties @ 14cc227d0

void __thiscall
UDisplaceMeshCommonProperties::~UDisplaceMeshCommonProperties(UDisplaceMeshCommonProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDisplaceMeshCommonProperties__6B_;
  DestructItems<FString,int>
            ((FString *)(this->WeightMapsList).AllocatorInstance.Data,
             (this->WeightMapsList).ArrayNum);
  pFVar1 = (this->WeightMapsList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5bff0

UClass * __cdecl UDisplaceMeshCommonProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDisplaceMeshCommonProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DisplaceMeshCommonProperties",
               &Z_Registration_Info_UClass_UDisplaceMeshCommonProperties.InnerSingleton,
               StaticRegisterNativesUDisplaceMeshCommonProperties,0xe8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDisplaceMeshCommonProperties>,
               InternalVTableHelperCtorCaller<UDisplaceMeshCommonProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDisplaceMeshCommonProperties.InnerSingleton;
}

// GetWeightMapsFunc @ 14cc5e4e0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UDisplaceMeshCommonProperties::GetWeightMapsFunc
          (UDisplaceMeshCommonProperties *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->WeightMapsList).ArrayNum;
  pFVar2 = (this->WeightMapsList).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FString,FString,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,(FString *)pFVar2,iVar1);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUDisplaceMeshCommonProperties @ 14cc82320

void __cdecl UDisplaceMeshCommonProperties::StaticRegisterNativesUDisplaceMeshCommonProperties(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetWeightMapsFunc @ 14cc8b0a0

void __cdecl
UDisplaceMeshCommonProperties::execGetWeightMapsFunc(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  int iVar2;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)&param_1[5].field_0x10;
  pFVar1 = *(FString **)&param_1[5].field_0x8;
  local_10 = CONCAT44(local_10._4_4_,iVar2);
  if (iVar2 == 0) {
    local_10 = 0;
    local_10._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,&local_18,iVar2,(int *)((longlong)&local_10 + 4));
    ConstructItems<FString,FString,int>(local_18.Data,pFVar1,iVar2);
  }
  iVar2 = (int)local_10;
  if (param_3 != &local_18) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    iVar2 = 0;
    *(int *)((longlong)param_3 + 8) = (int)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FString,int>((FString *)local_18.Data,iVar2);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

