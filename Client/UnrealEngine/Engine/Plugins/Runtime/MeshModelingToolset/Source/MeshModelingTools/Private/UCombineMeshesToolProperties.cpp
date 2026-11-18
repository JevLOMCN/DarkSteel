// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbd1570

UClass * __cdecl UCombineMeshesToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCombineMeshesToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CombineMeshesToolProperties",
               &Z_Registration_Info_UClass_UCombineMeshesToolProperties.InnerSingleton,
               StaticRegisterNativesUCombineMeshesToolProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCombineMeshesToolProperties>,
               InternalVTableHelperCtorCaller<UCombineMeshesToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCombineMeshesToolProperties.InnerSingleton;
}

// UCombineMeshesToolProperties @ 14cbdceb0

UCombineMeshesToolProperties * __thiscall
UCombineMeshesToolProperties::UCombineMeshesToolProperties
          (UCombineMeshesToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bIsDuplicateMode = false;
  this->_padding_ = (longlong)&___7UCombineMeshesToolProperties__6B_;
  this->OutputWriteTo = NewObject;
  (this->OutputNewName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputNewName).Data.ArrayNum = 0;
  (this->OutputNewName).Data.ArrayMax = 0;
  (this->OutputExistingName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputExistingName).Data.ArrayNum = 0;
  (this->OutputExistingName).Data.ArrayMax = 0;
  return this;
}

// UCombineMeshesToolProperties @ 14cbdcf10

UCombineMeshesToolProperties * __thiscall
UCombineMeshesToolProperties::UCombineMeshesToolProperties
          (UCombineMeshesToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bIsDuplicateMode = false;
  this->_padding_ = (longlong)&___7UCombineMeshesToolProperties__6B_;
  this->OutputWriteTo = NewObject;
  (this->OutputNewName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputNewName).Data.ArrayNum = 0;
  (this->OutputNewName).Data.ArrayMax = 0;
  (this->OutputExistingName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputExistingName).Data.ArrayNum = 0;
  (this->OutputExistingName).Data.ArrayMax = 0;
  return this;
}

// ~UCombineMeshesToolProperties @ 14cbe0150

void __thiscall
UCombineMeshesToolProperties::~UCombineMeshesToolProperties(UCombineMeshesToolProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCombineMeshesToolProperties__6B_;
  pFVar1 = (this->OutputExistingName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputNewName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cbef380

UClass * __cdecl UCombineMeshesToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCombineMeshesToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CombineMeshesToolProperties",
               &Z_Registration_Info_UClass_UCombineMeshesToolProperties.InnerSingleton,
               StaticRegisterNativesUCombineMeshesToolProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCombineMeshesToolProperties>,
               InternalVTableHelperCtorCaller<UCombineMeshesToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCombineMeshesToolProperties.InnerSingleton;
}

// StaticRegisterNativesUCombineMeshesToolProperties @ 14cbf6ab0

void __cdecl UCombineMeshesToolProperties::StaticRegisterNativesUCombineMeshesToolProperties(void)

{
  return;
}

