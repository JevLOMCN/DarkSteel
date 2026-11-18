// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc94650

UClass * __cdecl UNewMeshMaterialProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNewMeshMaterialProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"NewMeshMaterialProperties",
               &Z_Registration_Info_UClass_UNewMeshMaterialProperties.InnerSingleton,
               StaticRegisterNativesUNewMeshMaterialProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UNewMeshMaterialProperties>,
               InternalVTableHelperCtorCaller<UNewMeshMaterialProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNewMeshMaterialProperties.InnerSingleton;
}

// UNewMeshMaterialProperties @ 14ccbeec0

UNewMeshMaterialProperties * __thiscall
UNewMeshMaterialProperties::UNewMeshMaterialProperties
          (UNewMeshMaterialProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->UVScale = 1.0;
  this->_padding_ = (longlong)&___7UNewMeshMaterialProperties__6B_;
  (this->Material).WeakPtr = (FWeakObjectPtr)0x0;
  this->bWorldSpaceUVScale = false;
  this->bShowWireframe = false;
  this->bShowExtendedOptions = true;
  return this;
}

// UNewMeshMaterialProperties @ 14ccbef10

UNewMeshMaterialProperties * __thiscall
UNewMeshMaterialProperties::UNewMeshMaterialProperties(UNewMeshMaterialProperties *this)

{
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *local_res8;
  FName local_res10;
  
  pFVar2 = FObjectInitializer::Get();
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,pFVar2);
  this->UVScale = 1.0;
  this->_padding_ = (longlong)&___7UNewMeshMaterialProperties__6B_;
  this->bShowExtendedOptions = true;
  (this->Material).WeakPtr = (FWeakObjectPtr)0x0;
  this->bWorldSpaceUVScale = false;
  this->bShowWireframe = false;
  pFVar3 = ::FName::FName(&local_res10,L"MATERIAL");
  FVar1 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  local_res8 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->Material).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~UNewMeshMaterialProperties @ 14ccc49d0

void __thiscall
UNewMeshMaterialProperties::~UNewMeshMaterialProperties(UNewMeshMaterialProperties *this)

{
  this->_padding_ = (longlong)&___7UNewMeshMaterialProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd00d30

UClass * __cdecl UNewMeshMaterialProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNewMeshMaterialProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"NewMeshMaterialProperties",
               &Z_Registration_Info_UClass_UNewMeshMaterialProperties.InnerSingleton,
               StaticRegisterNativesUNewMeshMaterialProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UNewMeshMaterialProperties>,
               InternalVTableHelperCtorCaller<UNewMeshMaterialProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNewMeshMaterialProperties.InnerSingleton;
}

// StaticRegisterNativesUNewMeshMaterialProperties @ 14cd2f220

void __cdecl UNewMeshMaterialProperties::StaticRegisterNativesUNewMeshMaterialProperties(void)

{
  return;
}

