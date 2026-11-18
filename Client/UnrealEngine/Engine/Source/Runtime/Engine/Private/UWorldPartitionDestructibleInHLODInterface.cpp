// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a74010

UClass * __cdecl UWorldPartitionDestructibleInHLODInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionDestructibleInHLODInterface",
               &Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface.InnerSingleton
               ,StaticRegisterNativesUWorldPartitionDestructibleInHLODInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionDestructibleInHLODInterface>,
               InternalVTableHelperCtorCaller<UWorldPartitionDestructibleInHLODInterface>,local_res8
               ,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface.InnerSingleton;
}

// UWorldPartitionDestructibleInHLODInterface @ 148a80110

UWorldPartitionDestructibleInHLODInterface * __thiscall
UWorldPartitionDestructibleInHLODInterface::UWorldPartitionDestructibleInHLODInterface
          (UWorldPartitionDestructibleInHLODInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionDestructibleInHLODInterface__6B_;
  return this;
}

// UWorldPartitionDestructibleInHLODInterface @ 148a80140

UWorldPartitionDestructibleInHLODInterface * __thiscall
UWorldPartitionDestructibleInHLODInterface::UWorldPartitionDestructibleInHLODInterface
          (UWorldPartitionDestructibleInHLODInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionDestructibleInHLODInterface__6B_;
  return this;
}

// ~UWorldPartitionDestructibleInHLODInterface @ 148a81b40

void __thiscall
UWorldPartitionDestructibleInHLODInterface::~UWorldPartitionDestructibleInHLODInterface
          (UWorldPartitionDestructibleInHLODInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 148a966b0

UClass * __cdecl UWorldPartitionDestructibleInHLODInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionDestructibleInHLODInterface",
               &Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface.InnerSingleton
               ,StaticRegisterNativesUWorldPartitionDestructibleInHLODInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionDestructibleInHLODInterface>,
               InternalVTableHelperCtorCaller<UWorldPartitionDestructibleInHLODInterface>,local_res8
               ,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionDestructibleInHLODInterface @ 148aa2a00

void __cdecl
UWorldPartitionDestructibleInHLODInterface::
StaticRegisterNativesUWorldPartitionDestructibleInHLODInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

