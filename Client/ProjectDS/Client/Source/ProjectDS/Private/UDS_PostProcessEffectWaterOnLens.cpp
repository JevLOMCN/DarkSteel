// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b56ab80

UClass * __cdecl UDS_PostProcessEffectWaterOnLens::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PostProcessEffectWaterOnLens.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PostProcessEffectWaterOnLens",
               &Z_Registration_Info_UClass_UDS_PostProcessEffectWaterOnLens.InnerSingleton,
               StaticRegisterNativesUDS_PostProcessEffectWaterOnLens,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PostProcessEffectWaterOnLens>,
               InternalVTableHelperCtorCaller<UDS_PostProcessEffectWaterOnLens>,local_res8,
               UDS_PostProcessEffectBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PostProcessEffectWaterOnLens.InnerSingleton;
}

// UDS_PostProcessEffectWaterOnLens @ 14b56da40

UDS_PostProcessEffectWaterOnLens * __thiscall
UDS_PostProcessEffectWaterOnLens::UDS_PostProcessEffectWaterOnLens
          (UDS_PostProcessEffectWaterOnLens *this,FVTableHelper *param_1)

{
  UDS_PostProcessEffectBase::UDS_PostProcessEffectBase((UDS_PostProcessEffectBase *)this,param_1);
  *(undefined ***)this = &___7UDS_PostProcessEffectWaterOnLens__6B_;
  return this;
}

// UDS_PostProcessEffectWaterOnLens @ 14b56da70

UDS_PostProcessEffectWaterOnLens * __thiscall
UDS_PostProcessEffectWaterOnLens::UDS_PostProcessEffectWaterOnLens
          (UDS_PostProcessEffectWaterOnLens *this,FObjectInitializer *param_1)

{
  UDS_PostProcessEffectBase::UDS_PostProcessEffectBase((UDS_PostProcessEffectBase *)this,param_1);
  *(undefined ***)this = &___7UDS_PostProcessEffectWaterOnLens__6B_;
  return this;
}

// ~UDS_PostProcessEffectWaterOnLens @ 14b56e380

void __thiscall
UDS_PostProcessEffectWaterOnLens::~UDS_PostProcessEffectWaterOnLens
          (UDS_PostProcessEffectWaterOnLens *this)

{
  *(undefined ***)this = &___7UDS_PostProcessEffectWaterOnLens__6B_;
  UDS_PostProcessEffectBase::~UDS_PostProcessEffectBase((UDS_PostProcessEffectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b56f6f0

UClass * __cdecl UDS_PostProcessEffectWaterOnLens::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PostProcessEffectWaterOnLens.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PostProcessEffectWaterOnLens",
               &Z_Registration_Info_UClass_UDS_PostProcessEffectWaterOnLens.InnerSingleton,
               StaticRegisterNativesUDS_PostProcessEffectWaterOnLens,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PostProcessEffectWaterOnLens>,
               InternalVTableHelperCtorCaller<UDS_PostProcessEffectWaterOnLens>,local_res8,
               UDS_PostProcessEffectBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PostProcessEffectWaterOnLens.InnerSingleton;
}

// StaticRegisterNativesUDS_PostProcessEffectWaterOnLens @ 14b56fd70

void __cdecl
UDS_PostProcessEffectWaterOnLens::StaticRegisterNativesUDS_PostProcessEffectWaterOnLens(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_PostProcessEffectWaterOnLens_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execActivatePostProcessEffect @ 14b570be0

void __cdecl
UDS_PostProcessEffectWaterOnLens::execActivatePostProcessEffect
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ActivatePostProcessEffect((UDS_PostProcessEffectWaterOnLens *)param_1);
  return;
}

// execDeactivatePostProcessEffect @ 14b570c00

void __cdecl
UDS_PostProcessEffectWaterOnLens::execDeactivatePostProcessEffect
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DeactivatePostProcessEffect((UDS_PostProcessEffectWaterOnLens *)param_1);
  return;
}

// ActivatePostProcessEffect @ 14bbec930

void __thiscall
UDS_PostProcessEffectWaterOnLens::ActivatePostProcessEffect(UDS_PostProcessEffectWaterOnLens *this)

{
  UDS_PostProcessDataAsset *this_00;
  UCurveFloat *pUVar1;
  
  if ((*(longlong *)&this->field_0xc8 != 0) &&
     (this_00 = *(UDS_PostProcessDataAsset **)(*(longlong *)&this->field_0xc8 + 0xc0),
     this_00 != (UDS_PostProcessDataAsset *)0x0)) {
    (**(code **)(*(longlong *)this + 0x2b8))(this,4,__real_3f800000);
    pUVar1 = UDS_PostProcessDataAsset::GetCurve(this_00,WaterOnLensOut);
    (**(code **)(*(longlong *)this + 0x2e0))(this,4,NAME_BlendWeightOut,pUVar1,__real_7f7fffff);
  }
  return;
}

// DeactivatePostProcessEffect @ 14bbefe10

void __thiscall
UDS_PostProcessEffectWaterOnLens::DeactivatePostProcessEffect
          (UDS_PostProcessEffectWaterOnLens *this)

{
  if ((*(longlong *)&this->field_0xc8 != 0) &&
     (*(longlong *)(*(longlong *)&this->field_0xc8 + 0xc0) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014bbefe2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x2b8))(this,4,0);
    return;
  }
  return;
}

