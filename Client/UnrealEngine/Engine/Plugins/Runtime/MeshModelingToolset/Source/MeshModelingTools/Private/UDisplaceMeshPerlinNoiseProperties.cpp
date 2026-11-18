// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbfe0f0

UClass * __cdecl UDisplaceMeshPerlinNoiseProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDisplaceMeshPerlinNoiseProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DisplaceMeshPerlinNoiseProperties",
               &Z_Registration_Info_UClass_UDisplaceMeshPerlinNoiseProperties.InnerSingleton,
               StaticRegisterNativesUDisplaceMeshPerlinNoiseProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDisplaceMeshPerlinNoiseProperties>,
               InternalVTableHelperCtorCaller<UDisplaceMeshPerlinNoiseProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDisplaceMeshPerlinNoiseProperties.InnerSingleton;
}

// UDisplaceMeshPerlinNoiseProperties @ 14cc1cf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDisplaceMeshPerlinNoiseProperties * __thiscall
UDisplaceMeshPerlinNoiseProperties::UDisplaceMeshPerlinNoiseProperties
          (UDisplaceMeshPerlinNoiseProperties *this,FVTableHelper *param_1)

{
  TArray<FPerlinLayerProperties,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  uVar6 = _UNK_152953668;
  uVar5 = ___xmm_3f0000003e8000003f8000003d4ccccd;
  uVar4 = _UNK_152953658;
  uVar3 = ___xmm_3dcccccd3f8000003e4ccccd3f000000;
  pTVar1 = &this->PerlinLayerProperties;
  this->_padding_ = (longlong)&___7UDisplaceMeshPerlinNoiseProperties__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PerlinLayerProperties).ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,4,0,&pTVar1->AllocatorInstance,4,&(this->PerlinLayerProperties).ArrayMax);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)pFVar2 = uVar5;
  *(undefined8 *)(pFVar2 + 8) = uVar6;
  *(undefined8 *)(pFVar2 + 0x10) = uVar3;
  *(undefined8 *)(pFVar2 + 0x18) = uVar4;
  return this;
}

// UDisplaceMeshPerlinNoiseProperties @ 14cc1cff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDisplaceMeshPerlinNoiseProperties * __thiscall
UDisplaceMeshPerlinNoiseProperties::UDisplaceMeshPerlinNoiseProperties
          (UDisplaceMeshPerlinNoiseProperties *this,FObjectInitializer *param_1)

{
  TArray<FPerlinLayerProperties,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  uVar6 = _UNK_152953668;
  uVar5 = ___xmm_3f0000003e8000003f8000003d4ccccd;
  uVar4 = _UNK_152953658;
  uVar3 = ___xmm_3dcccccd3f8000003e4ccccd3f000000;
  pTVar1 = &this->PerlinLayerProperties;
  this->_padding_ = (longlong)&___7UDisplaceMeshPerlinNoiseProperties__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PerlinLayerProperties).ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,4,0,&pTVar1->AllocatorInstance,4,&(this->PerlinLayerProperties).ArrayMax);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)pFVar2 = uVar5;
  *(undefined8 *)(pFVar2 + 8) = uVar6;
  *(undefined8 *)(pFVar2 + 0x10) = uVar3;
  *(undefined8 *)(pFVar2 + 0x18) = uVar4;
  return this;
}

// ~UDisplaceMeshPerlinNoiseProperties @ 14cc22840

void __thiscall
UDisplaceMeshPerlinNoiseProperties::~UDisplaceMeshPerlinNoiseProperties
          (UDisplaceMeshPerlinNoiseProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDisplaceMeshPerlinNoiseProperties__6B_;
  pFVar1 = (this->PerlinLayerProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5c170

UClass * __cdecl UDisplaceMeshPerlinNoiseProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDisplaceMeshPerlinNoiseProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DisplaceMeshPerlinNoiseProperties",
               &Z_Registration_Info_UClass_UDisplaceMeshPerlinNoiseProperties.InnerSingleton,
               StaticRegisterNativesUDisplaceMeshPerlinNoiseProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDisplaceMeshPerlinNoiseProperties>,
               InternalVTableHelperCtorCaller<UDisplaceMeshPerlinNoiseProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDisplaceMeshPerlinNoiseProperties.InnerSingleton;
}

// StaticRegisterNativesUDisplaceMeshPerlinNoiseProperties @ 14cc82370

void __cdecl
UDisplaceMeshPerlinNoiseProperties::StaticRegisterNativesUDisplaceMeshPerlinNoiseProperties(void)

{
  return;
}

