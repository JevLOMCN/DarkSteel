// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 6

// StaticClass @ 146d637c0

UClass * __cdecl UNavArea_Null::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavArea_Null.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavArea_Null",
               &Z_Registration_Info_UClass_UNavArea_Null.InnerSingleton,
               StaticRegisterNativesUNavArea_Null,0x48,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<UNavArea_Null>,
               InternalVTableHelperCtorCaller<UNavArea_Null>,local_res8,UNavArea::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavArea_Null.InnerSingleton;
}

// UNavArea_Null @ 146d75f10

UNavArea_Null * __thiscall UNavArea_Null::UNavArea_Null(UNavArea_Null *this,FVTableHelper *param_1)

{
  UNavAreaBase::UNavAreaBase((UNavAreaBase *)this,param_1);
  *(undefined ***)this = &___7UNavArea__6B_;
  FNavAgentSelector::FNavAgentSelector((FNavAgentSelector *)&this->field_0x3c,0x7fffffff);
  *(undefined ***)this = &___7UNavArea_Null__6B_;
  return this;
}

// UNavArea_Null @ 146d75f50

UNavArea_Null * __thiscall
UNavArea_Null::UNavArea_Null(UNavArea_Null *this,FObjectInitializer *param_1)

{
  UNavAreaBase::UNavAreaBase((UNavAreaBase *)this,param_1);
  *(undefined ***)this = &___7UNavArea__6B_;
  FNavAgentSelector::FNavAgentSelector((FNavAgentSelector *)&this->field_0x3c,0x7fffffff);
  *(undefined8 *)&this->field_0x30 = 0x3f800000;
  *(FColor_u_0 *)&this->field_0x38 = (FColor_u_0_s_0)FColor::Magenta.field0_0x0;
  *(undefined ***)this = &___7UNavArea_Null__6B_;
  *(undefined4 *)&this->field_0x40 = 0xffffffff;
  *(undefined4 *)&this->field_0x30 = 0x7f7fffff;
  *(undefined2 *)&this->field_0x44 = 0;
  return this;
}

// ~UNavArea_Null @ 146d78c50

void __thiscall UNavArea_Null::~UNavArea_Null(UNavArea_Null *this)

{
  *(undefined ***)this = &___7UNavArea__6B_;
  UNavAreaBase::~UNavAreaBase((UNavAreaBase *)this);
  return;
}

// GetPrivateStaticClass @ 146da0430

UClass * __cdecl UNavArea_Null::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavArea_Null.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavArea_Null",
               &Z_Registration_Info_UClass_UNavArea_Null.InnerSingleton,
               StaticRegisterNativesUNavArea_Null,0x48,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<UNavArea_Null>,
               InternalVTableHelperCtorCaller<UNavArea_Null>,local_res8,UNavArea::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavArea_Null.InnerSingleton;
}

// StaticRegisterNativesUNavArea_Null @ 146dba960

void __cdecl UNavArea_Null::StaticRegisterNativesUNavArea_Null(void)

{
  return;
}

