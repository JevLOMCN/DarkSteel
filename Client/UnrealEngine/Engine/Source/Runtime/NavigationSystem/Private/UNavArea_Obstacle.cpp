// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 6

// StaticClass @ 146d61570

UClass * __cdecl UNavArea_Obstacle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavArea_Obstacle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavArea_Obstacle",
               &Z_Registration_Info_UClass_UNavArea_Obstacle.InnerSingleton,
               StaticRegisterNativesUNavArea_Obstacle,0x48,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavArea_Obstacle>,
               InternalVTableHelperCtorCaller<UNavArea_Obstacle>,local_res8,UNavArea::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavArea_Obstacle.InnerSingleton;
}

// UNavArea_Obstacle @ 146d75fc0

UNavArea_Obstacle * __thiscall
UNavArea_Obstacle::UNavArea_Obstacle(UNavArea_Obstacle *this,FVTableHelper *param_1)

{
  UNavAreaBase::UNavAreaBase((UNavAreaBase *)this,param_1);
  *(undefined ***)this = &___7UNavArea__6B_;
  FNavAgentSelector::FNavAgentSelector((FNavAgentSelector *)&this->field_0x3c,0x7fffffff);
  *(undefined ***)this = &___7UNavArea_Obstacle__6B_;
  return this;
}

// UNavArea_Obstacle @ 146d76000

UNavArea_Obstacle * __thiscall
UNavArea_Obstacle::UNavArea_Obstacle(UNavArea_Obstacle *this,FObjectInitializer *param_1)

{
  UNavAreaBase::UNavAreaBase((UNavAreaBase *)this,param_1);
  *(undefined ***)this = &___7UNavArea__6B_;
  FNavAgentSelector::FNavAgentSelector((FNavAgentSelector *)&this->field_0x3c,0x7fffffff);
  *(undefined ***)this = &___7UNavArea_Obstacle__6B_;
  *(undefined4 *)&this->field_0x38 = 0xff7f3300;
  *(undefined8 *)&this->field_0x30 = 0x49742400;
  *(undefined4 *)&this->field_0x40 = 0xffffffff;
  *(undefined2 *)&this->field_0x44 = 1;
  return this;
}

// ~UNavArea_Obstacle @ 146d78c70

void __thiscall UNavArea_Obstacle::~UNavArea_Obstacle(UNavArea_Obstacle *this)

{
  *(undefined ***)this = &___7UNavArea__6B_;
  UNavAreaBase::~UNavAreaBase((UNavAreaBase *)this);
  return;
}

// GetPrivateStaticClass @ 146da04f0

UClass * __cdecl UNavArea_Obstacle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavArea_Obstacle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavArea_Obstacle",
               &Z_Registration_Info_UClass_UNavArea_Obstacle.InnerSingleton,
               StaticRegisterNativesUNavArea_Obstacle,0x48,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavArea_Obstacle>,
               InternalVTableHelperCtorCaller<UNavArea_Obstacle>,local_res8,UNavArea::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavArea_Obstacle.InnerSingleton;
}

// StaticRegisterNativesUNavArea_Obstacle @ 146dba970

void __cdecl UNavArea_Obstacle::StaticRegisterNativesUNavArea_Obstacle(void)

{
  return;
}

