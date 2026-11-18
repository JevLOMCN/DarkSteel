// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticClass @ 147ba1a60

UClass * __cdecl UPoseWatchElement::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseWatchElement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PoseWatchElement",
               &Z_Registration_Info_UClass_UPoseWatchElement.InnerSingleton,
               StaticRegisterNativesUPoseWatchElement,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPoseWatchElement>,
               InternalVTableHelperCtorCaller<UPoseWatchElement>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseWatchElement.InnerSingleton;
}

// UPoseWatchElement @ 147bbda20

UPoseWatchElement * __thiscall
UPoseWatchElement::UPoseWatchElement(UPoseWatchElement *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPoseWatchElement__6B_;
  return this;
}

// UPoseWatchElement @ 147bbda50

UPoseWatchElement * __thiscall
UPoseWatchElement::UPoseWatchElement(UPoseWatchElement *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPoseWatchElement__6B_;
  return this;
}

// GetPrivateStaticClass @ 147be5ba0

UClass * __cdecl UPoseWatchElement::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseWatchElement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PoseWatchElement",
               &Z_Registration_Info_UClass_UPoseWatchElement.InnerSingleton,
               StaticRegisterNativesUPoseWatchElement,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPoseWatchElement>,
               InternalVTableHelperCtorCaller<UPoseWatchElement>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseWatchElement.InnerSingleton;
}

// StaticRegisterNativesUPoseWatchElement @ 147c03780

void __cdecl UPoseWatchElement::StaticRegisterNativesUPoseWatchElement(void)

{
  return;
}

