// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeMessages
// Functions: 6

// StaticClass @ 14e65d3e0

UClass * __cdecl UInterchangeResultMeshWarning::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultMeshWarning.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeMessages",L"InterchangeResultMeshWarning",
               &Z_Registration_Info_UClass_UInterchangeResultMeshWarning.InnerSingleton,
               StaticRegisterNativesUInterchangeResultMeshWarning,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeResultMeshWarning>,
               InternalVTableHelperCtorCaller<UInterchangeResultMeshWarning>,local_res8,
               UInterchangeResultWarning::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultMeshWarning.InnerSingleton;
}

// UInterchangeResultMeshWarning @ 14e65e750

UInterchangeResultMeshWarning * __thiscall
UInterchangeResultMeshWarning::UInterchangeResultMeshWarning
          (UInterchangeResultMeshWarning *this,FVTableHelper *param_1)

{
  UInterchangeResultWarning::UInterchangeResultWarning((UInterchangeResultWarning *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeResultMeshWarning__6B_;
  (this->MeshName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshName).Data.ArrayNum = 0;
  (this->MeshName).Data.ArrayMax = 0;
  return this;
}

// UInterchangeResultMeshWarning @ 14e65e790

UInterchangeResultMeshWarning * __thiscall
UInterchangeResultMeshWarning::UInterchangeResultMeshWarning
          (UInterchangeResultMeshWarning *this,FObjectInitializer *param_1)

{
  UInterchangeResultWarning::UInterchangeResultWarning((UInterchangeResultWarning *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeResultMeshWarning__6B_;
  (this->MeshName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshName).Data.ArrayNum = 0;
  (this->MeshName).Data.ArrayMax = 0;
  return this;
}

// ~UInterchangeResultMeshWarning @ 14e65eb00

void __thiscall
UInterchangeResultMeshWarning::~UInterchangeResultMeshWarning(UInterchangeResultMeshWarning *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeResultMeshWarning__6B_;
  pFVar1 = (this->MeshName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeResultWarning::~UInterchangeResultWarning((UInterchangeResultWarning *)this);
  return;
}

// GetPrivateStaticClass @ 14e65f240

UClass * __cdecl UInterchangeResultMeshWarning::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultMeshWarning.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeMessages",L"InterchangeResultMeshWarning",
               &Z_Registration_Info_UClass_UInterchangeResultMeshWarning.InnerSingleton,
               StaticRegisterNativesUInterchangeResultMeshWarning,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeResultMeshWarning>,
               InternalVTableHelperCtorCaller<UInterchangeResultMeshWarning>,local_res8,
               UInterchangeResultWarning::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultMeshWarning.InnerSingleton;
}

// StaticRegisterNativesUInterchangeResultMeshWarning @ 14e65fe70

void __cdecl UInterchangeResultMeshWarning::StaticRegisterNativesUInterchangeResultMeshWarning(void)

{
  return;
}

