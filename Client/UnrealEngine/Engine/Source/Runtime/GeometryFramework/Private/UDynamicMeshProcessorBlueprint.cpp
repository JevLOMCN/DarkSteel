// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 7

// StaticClass @ 1496e8550

UClass * __cdecl UDynamicMeshProcessorBlueprint::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshProcessorBlueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"DynamicMeshProcessorBlueprint",
               &Z_Registration_Info_UClass_UDynamicMeshProcessorBlueprint.InnerSingleton,
               StaticRegisterNativesUDynamicMeshProcessorBlueprint,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMeshProcessorBlueprint>,
               InternalVTableHelperCtorCaller<UDynamicMeshProcessorBlueprint>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshProcessorBlueprint.InnerSingleton;
}

// UDynamicMeshProcessorBlueprint @ 1496f9e40

UDynamicMeshProcessorBlueprint * __thiscall
UDynamicMeshProcessorBlueprint::UDynamicMeshProcessorBlueprint
          (UDynamicMeshProcessorBlueprint *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bRequiresGameThread = true;
  this->_padding_ = (longlong)&___7UDynamicMeshProcessorBlueprint__6B_;
  return this;
}

// UDynamicMeshProcessorBlueprint @ 1496f9e70

UDynamicMeshProcessorBlueprint * __thiscall
UDynamicMeshProcessorBlueprint::UDynamicMeshProcessorBlueprint
          (UDynamicMeshProcessorBlueprint *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bRequiresGameThread = true;
  this->_padding_ = (longlong)&___7UDynamicMeshProcessorBlueprint__6B_;
  return this;
}

// ~UDynamicMeshProcessorBlueprint @ 1496fb670

void __thiscall
UDynamicMeshProcessorBlueprint::~UDynamicMeshProcessorBlueprint
          (UDynamicMeshProcessorBlueprint *this)

{
  this->_padding_ = (longlong)&___7UDynamicMeshProcessorBlueprint__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1497114a0

UClass * __cdecl UDynamicMeshProcessorBlueprint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshProcessorBlueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"DynamicMeshProcessorBlueprint",
               &Z_Registration_Info_UClass_UDynamicMeshProcessorBlueprint.InnerSingleton,
               StaticRegisterNativesUDynamicMeshProcessorBlueprint,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMeshProcessorBlueprint>,
               InternalVTableHelperCtorCaller<UDynamicMeshProcessorBlueprint>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshProcessorBlueprint.InnerSingleton;
}

// ProcessDynamicMesh @ 1497152f0

void __thiscall
UDynamicMeshProcessorBlueprint::ProcessDynamicMesh
          (UDynamicMeshProcessorBlueprint *this,UDynamicMesh *param_1,bool *param_2)

{
  UFunction *pUVar1;
  UDynamicMesh *local_18;
  bool local_10;
  
  local_10 = *param_2 != false;
  local_18 = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDynamicMeshProcessorBlueprint_ProcessDynamicMesh);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  *param_2 = local_10;
  return;
}

// StaticRegisterNativesUDynamicMeshProcessorBlueprint @ 14971ab80

void __cdecl
UDynamicMeshProcessorBlueprint::StaticRegisterNativesUDynamicMeshProcessorBlueprint(void)

{
  return;
}

