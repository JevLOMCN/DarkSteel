// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 6

// StaticClass @ 1460366e0

UClass * __cdecl UClockedTimeStep::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UClockedTimeStep.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"ClockedTimeStep",
               &Z_Registration_Info_UClass_UClockedTimeStep.InnerSingleton,
               StaticRegisterNativesUClockedTimeStep,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UClockedTimeStep>,
               InternalVTableHelperCtorCaller<UClockedTimeStep>,aFStackX_8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClockedTimeStep.InnerSingleton;
}

// UClockedTimeStep @ 14603ff60

UClockedTimeStep * __thiscall
UClockedTimeStep::UClockedTimeStep(UClockedTimeStep *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UClockedTimeStep__6B_;
  return this;
}

// UClockedTimeStep @ 14603ff90

UClockedTimeStep * __thiscall
UClockedTimeStep::UClockedTimeStep(UClockedTimeStep *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UClockedTimeStep__6B_;
  return this;
}

// ~UClockedTimeStep @ 146040560

void __thiscall UClockedTimeStep::~UClockedTimeStep(UClockedTimeStep *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14604cb40

UClass * __cdecl UClockedTimeStep::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClockedTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"ClockedTimeStep",
               &Z_Registration_Info_UClass_UClockedTimeStep.InnerSingleton,
               StaticRegisterNativesUClockedTimeStep,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UClockedTimeStep>,
               InternalVTableHelperCtorCaller<UClockedTimeStep>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClockedTimeStep.InnerSingleton;
}

// StaticRegisterNativesUClockedTimeStep @ 14604fd90

void __cdecl UClockedTimeStep::StaticRegisterNativesUClockedTimeStep(void)

{
  return;
}

