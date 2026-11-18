// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 7

// StaticClass @ 146d63400

UClass * __cdecl UNavArea_LowHeight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavArea_LowHeight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavArea_LowHeight",
               &Z_Registration_Info_UClass_UNavArea_LowHeight.InnerSingleton,
               StaticRegisterNativesUNavArea_LowHeight,0x48,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavArea_LowHeight>,
               InternalVTableHelperCtorCaller<UNavArea_LowHeight>,local_res8,UNavArea::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavArea_LowHeight.InnerSingleton;
}

// UNavArea_LowHeight @ 146d75e60

UNavArea_LowHeight * __thiscall
UNavArea_LowHeight::UNavArea_LowHeight(UNavArea_LowHeight *this,FVTableHelper *param_1)

{
  UNavAreaBase::UNavAreaBase((UNavAreaBase *)this,param_1);
  *(undefined ***)this = &___7UNavArea__6B_;
  FNavAgentSelector::FNavAgentSelector((FNavAgentSelector *)&this->field_0x3c,0x7fffffff);
  *(undefined ***)this = &___7UNavArea_LowHeight__6B_;
  return this;
}

// UNavArea_LowHeight @ 146d75ea0

UNavArea_LowHeight * __thiscall
UNavArea_LowHeight::UNavArea_LowHeight(UNavArea_LowHeight *this,FObjectInitializer *param_1)

{
  UNavAreaBase::UNavAreaBase((UNavAreaBase *)this,param_1);
  *(undefined ***)this = &___7UNavArea__6B_;
  FNavAgentSelector::FNavAgentSelector((FNavAgentSelector *)&this->field_0x3c,0x7fffffff);
  *(undefined ***)this = &___7UNavArea_LowHeight__6B_;
  *(undefined4 *)&this->field_0x38 = 0xff000080;
  *(undefined8 *)&this->field_0x30 = 0x7f7fc99e;
  *(undefined4 *)&this->field_0x40 = 0xffffffff;
  *(undefined2 *)&this->field_0x44 = 0;
  return this;
}

// ~UNavArea_LowHeight @ 146d78c30

void __thiscall UNavArea_LowHeight::~UNavArea_LowHeight(UNavArea_LowHeight *this)

{
  *(undefined ***)this = &___7UNavArea__6B_;
  UNavAreaBase::~UNavAreaBase((UNavAreaBase *)this);
  return;
}

// GetPrivateStaticClass @ 146da0370

UClass * __cdecl UNavArea_LowHeight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavArea_LowHeight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavArea_LowHeight",
               &Z_Registration_Info_UClass_UNavArea_LowHeight.InnerSingleton,
               StaticRegisterNativesUNavArea_LowHeight,0x48,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavArea_LowHeight>,
               InternalVTableHelperCtorCaller<UNavArea_LowHeight>,local_res8,UNavArea::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavArea_LowHeight.InnerSingleton;
}

// IsLowArea @ 146da4970

bool __thiscall UNavArea_LowHeight::IsLowArea(UNavArea_LowHeight *this)

{
  return true;
}

// StaticRegisterNativesUNavArea_LowHeight @ 146dba950

void __cdecl UNavArea_LowHeight::StaticRegisterNativesUNavArea_LowHeight(void)

{
  return;
}

