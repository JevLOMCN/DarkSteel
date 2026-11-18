// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147ba1c50

UClass * __cdecl UPoseWatchPoseElement::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseWatchPoseElement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PoseWatchPoseElement",
               &Z_Registration_Info_UClass_UPoseWatchPoseElement.InnerSingleton,
               StaticRegisterNativesUPoseWatchPoseElement,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPoseWatchPoseElement>,
               InternalVTableHelperCtorCaller<UPoseWatchPoseElement>,local_res8,
               UPoseWatchElement::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseWatchPoseElement.InnerSingleton;
}

// UPoseWatchPoseElement @ 147bbdae0

UPoseWatchPoseElement * __thiscall
UPoseWatchPoseElement::UPoseWatchPoseElement(UPoseWatchPoseElement *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPoseWatchPoseElement__6B_;
  return this;
}

// UPoseWatchPoseElement @ 147bbdb10

UPoseWatchPoseElement * __thiscall
UPoseWatchPoseElement::UPoseWatchPoseElement
          (UPoseWatchPoseElement *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPoseWatchPoseElement__6B_;
  return this;
}

// ~UPoseWatchPoseElement @ 147bbfa90

void __thiscall UPoseWatchPoseElement::~UPoseWatchPoseElement(UPoseWatchPoseElement *this)

{
  *(undefined ***)this = &___7UPoseWatchPoseElement__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147be5d00

UClass * __cdecl UPoseWatchPoseElement::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseWatchPoseElement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PoseWatchPoseElement",
               &Z_Registration_Info_UClass_UPoseWatchPoseElement.InnerSingleton,
               StaticRegisterNativesUPoseWatchPoseElement,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPoseWatchPoseElement>,
               InternalVTableHelperCtorCaller<UPoseWatchPoseElement>,local_res8,
               UPoseWatchElement::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseWatchPoseElement.InnerSingleton;
}

// StaticRegisterNativesUPoseWatchPoseElement @ 147c037a0

void __cdecl UPoseWatchPoseElement::StaticRegisterNativesUPoseWatchPoseElement(void)

{
  return;
}

