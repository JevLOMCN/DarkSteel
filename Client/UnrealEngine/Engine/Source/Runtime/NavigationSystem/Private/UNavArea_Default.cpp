// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 6

// StaticClass @ 146d62eb0

UClass * __cdecl UNavArea_Default::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavArea_Default.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavArea_Default",
               &Z_Registration_Info_UClass_UNavArea_Default.InnerSingleton,
               StaticRegisterNativesUNavArea_Default,0x48,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavArea_Default>,
               InternalVTableHelperCtorCaller<UNavArea_Default>,local_res8,UNavArea::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavArea_Default.InnerSingleton;
}

// UNavArea_Default @ 146d75dc0

UNavArea_Default * __thiscall
UNavArea_Default::UNavArea_Default(UNavArea_Default *this,FVTableHelper *param_1)

{
  UNavAreaBase::UNavAreaBase((UNavAreaBase *)this,param_1);
  *(undefined ***)this = &___7UNavArea__6B_;
  FNavAgentSelector::FNavAgentSelector((FNavAgentSelector *)&this->field_0x3c,0x7fffffff);
  *(undefined ***)this = &___7UNavArea_Default__6B_;
  return this;
}

// UNavArea_Default @ 146d75e00

UNavArea_Default * __thiscall
UNavArea_Default::UNavArea_Default(UNavArea_Default *this,FObjectInitializer *param_1)

{
  UNavAreaBase::UNavAreaBase((UNavAreaBase *)this,param_1);
  *(undefined ***)this = &___7UNavArea__6B_;
  FNavAgentSelector::FNavAgentSelector((FNavAgentSelector *)&this->field_0x3c,0x7fffffff);
  *(undefined8 *)&this->field_0x30 = 0x3f800000;
  *(FColor_u_0 *)&this->field_0x38 = (FColor_u_0_s_0)FColor::Magenta.field0_0x0;
  *(undefined ***)this = &___7UNavArea_Default__6B_;
  *(undefined4 *)&this->field_0x40 = 0xffffffff;
  *(undefined2 *)&this->field_0x44 = 1;
  return this;
}

// ~UNavArea_Default @ 146d78c10

void __thiscall UNavArea_Default::~UNavArea_Default(UNavArea_Default *this)

{
  *(undefined ***)this = &___7UNavArea__6B_;
  UNavAreaBase::~UNavAreaBase((UNavAreaBase *)this);
  return;
}

// GetPrivateStaticClass @ 146da02b0

UClass * __cdecl UNavArea_Default::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavArea_Default.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavArea_Default",
               &Z_Registration_Info_UClass_UNavArea_Default.InnerSingleton,
               StaticRegisterNativesUNavArea_Default,0x48,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavArea_Default>,
               InternalVTableHelperCtorCaller<UNavArea_Default>,local_res8,UNavArea::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavArea_Default.InnerSingleton;
}

// StaticRegisterNativesUNavArea_Default @ 146dba940

void __cdecl UNavArea_Default::StaticRegisterNativesUNavArea_Default(void)

{
  return;
}

