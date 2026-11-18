// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// StaticClass @ 14e032440

UClass * __cdecl UGroomCreateStrandsTexturesOptions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomCreateStrandsTexturesOptions.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomCreateStrandsTexturesOptions",
               &Z_Registration_Info_UClass_UGroomCreateStrandsTexturesOptions.InnerSingleton,
               StaticRegisterNativesUGroomCreateStrandsTexturesOptions,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGroomCreateStrandsTexturesOptions>,
               InternalVTableHelperCtorCaller<UGroomCreateStrandsTexturesOptions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomCreateStrandsTexturesOptions.InnerSingleton;
}

// UGroomCreateStrandsTexturesOptions @ 14e03ddb0

UGroomCreateStrandsTexturesOptions * __thiscall
UGroomCreateStrandsTexturesOptions::UGroomCreateStrandsTexturesOptions
          (UGroomCreateStrandsTexturesOptions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Layout = Layout1;
  this->_padding_ = (longlong)&___7UGroomCreateStrandsTexturesOptions__6B_;
  (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->SkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  this->LODIndex = 0;
  this->SectionIndex = 0;
  this->UVChannelIndex = 0;
  (this->GroupIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupIndex).ArrayNum = 0;
  (this->GroupIndex).ArrayMax = 0;
  (this->GeneratedTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedTextures).ArrayNum = 0;
  (this->GeneratedTextures).ArrayMax = 0;
  this->Resolution = 0x800;
  this->TraceType = TraceBidirectional;
  this->TraceDistance = 3.0;
  this->MeshType = Static;
  this->Dilation = 8;
  return this;
}

// UGroomCreateStrandsTexturesOptions @ 14e03de20

UGroomCreateStrandsTexturesOptions * __thiscall
UGroomCreateStrandsTexturesOptions::UGroomCreateStrandsTexturesOptions
          (UGroomCreateStrandsTexturesOptions *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Layout = Layout1;
  this->_padding_ = (longlong)&___7UGroomCreateStrandsTexturesOptions__6B_;
  (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->SkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  this->LODIndex = 0;
  this->SectionIndex = 0;
  this->UVChannelIndex = 0;
  (this->GroupIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupIndex).ArrayNum = 0;
  (this->GroupIndex).ArrayMax = 0;
  (this->GeneratedTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedTextures).ArrayNum = 0;
  (this->GeneratedTextures).ArrayMax = 0;
  this->Resolution = 0x800;
  this->TraceType = TraceBidirectional;
  this->TraceDistance = 3.0;
  this->MeshType = Static;
  this->Dilation = 8;
  return this;
}

// ~UGroomCreateStrandsTexturesOptions @ 14e03ee90

void __thiscall
UGroomCreateStrandsTexturesOptions::~UGroomCreateStrandsTexturesOptions
          (UGroomCreateStrandsTexturesOptions *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGroomCreateStrandsTexturesOptions__6B_;
  pFVar1 = (this->GeneratedTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GroupIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e052160

UClass * __cdecl UGroomCreateStrandsTexturesOptions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomCreateStrandsTexturesOptions.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomCreateStrandsTexturesOptions",
               &Z_Registration_Info_UClass_UGroomCreateStrandsTexturesOptions.InnerSingleton,
               StaticRegisterNativesUGroomCreateStrandsTexturesOptions,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGroomCreateStrandsTexturesOptions>,
               InternalVTableHelperCtorCaller<UGroomCreateStrandsTexturesOptions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomCreateStrandsTexturesOptions.InnerSingleton;
}

// StaticRegisterNativesUGroomCreateStrandsTexturesOptions @ 14e064c90

void __cdecl
UGroomCreateStrandsTexturesOptions::StaticRegisterNativesUGroomCreateStrandsTexturesOptions(void)

{
  return;
}

