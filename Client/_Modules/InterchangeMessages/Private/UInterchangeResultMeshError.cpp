// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeMessages
// Functions: 6

// StaticClass @ 14e65d620

UClass * __cdecl UInterchangeResultMeshError::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultMeshError.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeMessages",L"InterchangeResultMeshError",
               &Z_Registration_Info_UClass_UInterchangeResultMeshError.InnerSingleton,
               StaticRegisterNativesUInterchangeResultMeshError,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeResultMeshError>,
               InternalVTableHelperCtorCaller<UInterchangeResultMeshError>,local_res8,
               UInterchangeResultError::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultMeshError.InnerSingleton;
}

// UInterchangeResultMeshError @ 14e65e650

UInterchangeResultMeshError * __thiscall
UInterchangeResultMeshError::UInterchangeResultMeshError
          (UInterchangeResultMeshError *this,FVTableHelper *param_1)

{
  UInterchangeResultError::UInterchangeResultError((UInterchangeResultError *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeResultMeshError__6B_;
  (this->MeshName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshName).Data.ArrayNum = 0;
  (this->MeshName).Data.ArrayMax = 0;
  return this;
}

// UInterchangeResultMeshError @ 14e65e690

UInterchangeResultMeshError * __thiscall
UInterchangeResultMeshError::UInterchangeResultMeshError
          (UInterchangeResultMeshError *this,FObjectInitializer *param_1)

{
  UInterchangeResultError::UInterchangeResultError((UInterchangeResultError *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeResultMeshError__6B_;
  (this->MeshName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshName).Data.ArrayNum = 0;
  (this->MeshName).Data.ArrayMax = 0;
  return this;
}

// ~UInterchangeResultMeshError @ 14e65ea70

void __thiscall
UInterchangeResultMeshError::~UInterchangeResultMeshError(UInterchangeResultMeshError *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeResultMeshError__6B_;
  pFVar1 = (this->MeshName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeResultError::~UInterchangeResultError((UInterchangeResultError *)this);
  return;
}

// GetPrivateStaticClass @ 14e65f0c0

UClass * __cdecl UInterchangeResultMeshError::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultMeshError.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeMessages",L"InterchangeResultMeshError",
               &Z_Registration_Info_UClass_UInterchangeResultMeshError.InnerSingleton,
               StaticRegisterNativesUInterchangeResultMeshError,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeResultMeshError>,
               InternalVTableHelperCtorCaller<UInterchangeResultMeshError>,local_res8,
               UInterchangeResultError::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultMeshError.InnerSingleton;
}

// StaticRegisterNativesUInterchangeResultMeshError @ 14e65fe50

void __cdecl UInterchangeResultMeshError::StaticRegisterNativesUInterchangeResultMeshError(void)

{
  return;
}

