// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b56a9b0

UClass * __cdecl UDS_PostProcessEffectConstruct::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PostProcessEffectConstruct.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PostProcessEffectConstruct",
               &Z_Registration_Info_UClass_UDS_PostProcessEffectConstruct.InnerSingleton,
               StaticRegisterNativesUDS_PostProcessEffectConstruct,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PostProcessEffectConstruct>,
               InternalVTableHelperCtorCaller<UDS_PostProcessEffectConstruct>,local_res8,
               UDS_PostProcessEffectBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PostProcessEffectConstruct.InnerSingleton;
}

// UDS_PostProcessEffectConstruct @ 14b56d9e0

UDS_PostProcessEffectConstruct * __thiscall
UDS_PostProcessEffectConstruct::UDS_PostProcessEffectConstruct
          (UDS_PostProcessEffectConstruct *this,FVTableHelper *param_1)

{
  UDS_PostProcessEffectBase::UDS_PostProcessEffectBase((UDS_PostProcessEffectBase *)this,param_1);
  *(undefined ***)this = &___7UDS_PostProcessEffectConstruct__6B_;
  return this;
}

// UDS_PostProcessEffectConstruct @ 14b56da10

UDS_PostProcessEffectConstruct * __thiscall
UDS_PostProcessEffectConstruct::UDS_PostProcessEffectConstruct
          (UDS_PostProcessEffectConstruct *this,FObjectInitializer *param_1)

{
  UDS_PostProcessEffectBase::UDS_PostProcessEffectBase((UDS_PostProcessEffectBase *)this,param_1);
  *(undefined ***)this = &___7UDS_PostProcessEffectConstruct__6B_;
  return this;
}

// ~UDS_PostProcessEffectConstruct @ 14b56e360

void __thiscall
UDS_PostProcessEffectConstruct::~UDS_PostProcessEffectConstruct
          (UDS_PostProcessEffectConstruct *this)

{
  *(undefined ***)this = &___7UDS_PostProcessEffectConstruct__6B_;
  UDS_PostProcessEffectBase::~UDS_PostProcessEffectBase((UDS_PostProcessEffectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b56f630

UClass * __cdecl UDS_PostProcessEffectConstruct::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PostProcessEffectConstruct.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PostProcessEffectConstruct",
               &Z_Registration_Info_UClass_UDS_PostProcessEffectConstruct.InnerSingleton,
               StaticRegisterNativesUDS_PostProcessEffectConstruct,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PostProcessEffectConstruct>,
               InternalVTableHelperCtorCaller<UDS_PostProcessEffectConstruct>,local_res8,
               UDS_PostProcessEffectBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PostProcessEffectConstruct.InnerSingleton;
}

// StaticRegisterNativesUDS_PostProcessEffectConstruct @ 14b56fd60

void __cdecl
UDS_PostProcessEffectConstruct::StaticRegisterNativesUDS_PostProcessEffectConstruct(void)

{
  return;
}

// InitPostProcessConstruction @ 14bbf92f0

void __thiscall
UDS_PostProcessEffectConstruct::InitPostProcessConstruction
          (UDS_PostProcessEffectConstruct *this,float param_1,TIntPoint<int> param_2)

{
  (**(code **)(*(longlong *)this + 0x2f0))(this,1,NAME_EffectEnabed);
  (**(code **)(*(longlong *)this + 0x2f0))(this,1,NAME_EffectResetValue);
  (**(code **)(*(longlong *)this + 0x2f0))(this,1,NAME_GridSizeX);
  (**(code **)(*(longlong *)this + 0x2f0))(this,1,NAME_GridSizeY);
                    /* WARNING: Could not recover jumptable at 0x00014bbf9395. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2f0))(this,1,NAME_MaxDistance);
  return;
}

