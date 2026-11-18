// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 6

// StaticClass @ 146d62a50

UClass * __cdecl UNavAreaMeta::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavAreaMeta.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavAreaMeta",
               &Z_Registration_Info_UClass_UNavAreaMeta.InnerSingleton,
               StaticRegisterNativesUNavAreaMeta,0x48,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavAreaMeta>,
               InternalVTableHelperCtorCaller<UNavAreaMeta>,local_res8,UNavArea::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavAreaMeta.InnerSingleton;
}

// UNavAreaMeta @ 146d75960

UNavAreaMeta * __thiscall UNavAreaMeta::UNavAreaMeta(UNavAreaMeta *this,FVTableHelper *param_1)

{
  UNavAreaBase::UNavAreaBase((UNavAreaBase *)this,param_1);
  *(undefined ***)this = &___7UNavArea__6B_;
  FNavAgentSelector::FNavAgentSelector((FNavAgentSelector *)&this->field_0x3c,0x7fffffff);
  *(undefined ***)this = &___7UNavAreaMeta__6B_;
  return this;
}

// UNavAreaMeta @ 146d759a0

UNavAreaMeta * __thiscall UNavAreaMeta::UNavAreaMeta(UNavAreaMeta *this,FObjectInitializer *param_1)

{
  FColor FVar1;
  
  UNavAreaBase::UNavAreaBase((UNavAreaBase *)this,param_1);
  *(undefined ***)this = &___7UNavArea__6B_;
  FNavAgentSelector::FNavAgentSelector((FNavAgentSelector *)&this->field_0x3c,0x7fffffff);
  *(undefined8 *)&this->field_0x30 = 0x3f800000;
  FVar1 = FColor::Magenta;
  this->field_0x28 = this->field_0x28 | 1;
  *(FColor_u_0 *)&this->field_0x38 = (FColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined ***)this = &___7UNavAreaMeta__6B_;
  *(undefined4 *)&this->field_0x40 = 0xffffffff;
  *(undefined2 *)&this->field_0x44 = 1;
  return this;
}

// ~UNavAreaMeta @ 146d78bd0

void __thiscall UNavAreaMeta::~UNavAreaMeta(UNavAreaMeta *this)

{
  *(undefined ***)this = &___7UNavArea__6B_;
  UNavAreaBase::~UNavAreaBase((UNavAreaBase *)this);
  return;
}

// GetPrivateStaticClass @ 146da0130

UClass * __cdecl UNavAreaMeta::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavAreaMeta.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavAreaMeta",
               &Z_Registration_Info_UClass_UNavAreaMeta.InnerSingleton,
               StaticRegisterNativesUNavAreaMeta,0x48,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavAreaMeta>,
               InternalVTableHelperCtorCaller<UNavAreaMeta>,local_res8,UNavArea::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavAreaMeta.InnerSingleton;
}

// StaticRegisterNativesUNavAreaMeta @ 146dba920

void __cdecl UNavAreaMeta::StaticRegisterNativesUNavAreaMeta(void)

{
  return;
}

