// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b56a7f0

UClass * __cdecl UDS_PostProcessBreach::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PostProcessBreach.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PostProcessBreach",
               &Z_Registration_Info_UClass_UDS_PostProcessBreach.InnerSingleton,
               StaticRegisterNativesUDS_PostProcessBreach,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PostProcessBreach>,
               InternalVTableHelperCtorCaller<UDS_PostProcessBreach>,local_res8,
               UDS_PostProcessEffectBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PostProcessBreach.InnerSingleton;
}

// UDS_PostProcessBreach @ 14b56d620

UDS_PostProcessBreach * __thiscall
UDS_PostProcessBreach::UDS_PostProcessBreach(UDS_PostProcessBreach *this,FVTableHelper *param_1)

{
  UDS_PostProcessEffectBase::UDS_PostProcessEffectBase((UDS_PostProcessEffectBase *)this,param_1);
  *(undefined ***)this = &___7UDS_PostProcessBreach__6B_;
  return this;
}

// UDS_PostProcessBreach @ 14b56d650

UDS_PostProcessBreach * __thiscall
UDS_PostProcessBreach::UDS_PostProcessBreach
          (UDS_PostProcessBreach *this,FObjectInitializer *param_1)

{
  UDS_PostProcessEffectBase::UDS_PostProcessEffectBase((UDS_PostProcessEffectBase *)this,param_1);
  *(undefined ***)this = &___7UDS_PostProcessBreach__6B_;
  return this;
}

// ~UDS_PostProcessBreach @ 14b56e250

void __thiscall UDS_PostProcessBreach::~UDS_PostProcessBreach(UDS_PostProcessBreach *this)

{
  *(undefined ***)this = &___7UDS_PostProcessBreach__6B_;
  UDS_PostProcessEffectBase::~UDS_PostProcessEffectBase((UDS_PostProcessEffectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b56f340

UClass * __cdecl UDS_PostProcessBreach::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PostProcessBreach.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PostProcessBreach",
               &Z_Registration_Info_UClass_UDS_PostProcessBreach.InnerSingleton,
               StaticRegisterNativesUDS_PostProcessBreach,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PostProcessBreach>,
               InternalVTableHelperCtorCaller<UDS_PostProcessBreach>,local_res8,
               UDS_PostProcessEffectBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PostProcessBreach.InnerSingleton;
}

// StaticRegisterNativesUDS_PostProcessBreach @ 14b56fcc0

void __cdecl UDS_PostProcessBreach::StaticRegisterNativesUDS_PostProcessBreach(void)

{
  return;
}

// ActivatePostProcessEffect @ 14bbec7e0

void __thiscall
UDS_PostProcessBreach::ActivatePostProcessEffect
          (UDS_PostProcessBreach *this,TVector<double> *param_1)

{
  UDS_PostProcessDataAsset *this_00;
  undefined4 uVar1;
  UCurveFloat *pUVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  if ((*(longlong *)&this->field_0xc8 != 0) &&
     (this_00 = *(UDS_PostProcessDataAsset **)(*(longlong *)&this->field_0xc8 + 0xc0),
     this_00 != (UDS_PostProcessDataAsset *)0x0)) {
    uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),2);
    (**(code **)(*(longlong *)this + 0x2b8))(this,uVar3,__real_3f800000);
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    pUVar2 = UDS_PostProcessDataAsset::GetCurve(this_00,BreachIn);
    uVar1 = __real_7f7fffff;
    uVar3 = CONCAT71(uVar4,2);
    (**(code **)(*(longlong *)this + 0x2e0))(this,uVar3,NAME_BlendWeightIn,pUVar2,__real_7f7fffff);
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    pUVar2 = UDS_PostProcessDataAsset::GetCurve(this_00,BreachProcessIn);
    (**(code **)(*(longlong *)this + 0x2e0))
              (this,CONCAT71(uVar4,2),NAME_BlendWeightProcess,pUVar2,uVar1);
    local_38 = *(undefined4 *)&param_1->field0_0x0;
    uStack_34 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    uStack_30 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    uStack_2c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
    local_28 = (param_1->field0_0x0)._s_0.Z;
    (**(code **)(*(longlong *)this + 0x2e8))(this,2,NAME_Location,&local_38);
    pUVar2 = UDS_PostProcessDataAsset::GetCurve(this_00,BreachTime0);
    uVar3 = CONCAT71((int7)((ulonglong)*(longlong *)this >> 8),2);
    (**(code **)(*(longlong *)this + 0x2e0))(this,uVar3,NAME_BlendWeightScanEffectTime,pUVar2,uVar1)
    ;
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    pUVar2 = UDS_PostProcessDataAsset::GetCurve(this_00,BreachTime1);
    (**(code **)(*(longlong *)this + 0x2e0))
              (this,CONCAT71(uVar4,2),NAME_BlendWeightDistotionTime,pUVar2,uVar1);
  }
  return;
}

// DeactivatePostProcessEffect @ 14bbefd20

void __thiscall UDS_PostProcessBreach::DeactivatePostProcessEffect(UDS_PostProcessBreach *this)

{
  UDS_PostProcessDataAsset *this_00;
  undefined4 uVar1;
  UCurveFloat *pUVar2;
  undefined8 in_RDX;
  undefined8 uVar3;
  undefined7 uVar4;
  
  if ((*(longlong *)&this->field_0xc8 != 0) &&
     (this_00 = *(UDS_PostProcessDataAsset **)(*(longlong *)&this->field_0xc8 + 0xc0),
     this_00 != (UDS_PostProcessDataAsset *)0x0)) {
    uVar3 = CONCAT71((int7)((ulonglong)in_RDX >> 8),2);
    (**(code **)(*(longlong *)this + 0x2b8))(this,uVar3,__real_3f800000);
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    pUVar2 = UDS_PostProcessDataAsset::GetCurve(this_00,BreachOut);
    uVar1 = __real_7f7fffff;
    (**(code **)(*(longlong *)this + 0x2e0))
              (this,CONCAT71(uVar4,2),NAME_BlendWeightOut,pUVar2,__real_7f7fffff);
    pUVar2 = UDS_PostProcessDataAsset::GetCurve(this_00,BreachProcessOut);
    uVar3 = CONCAT71((int7)((ulonglong)*(longlong *)this >> 8),2);
    (**(code **)(*(longlong *)this + 0x2e0))(this,uVar3,NAME_BlendWeightProcess,pUVar2,uVar1);
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    pUVar2 = UDS_PostProcessDataAsset::GetCurve(this_00,BreachTime2);
    (**(code **)(*(longlong *)this + 0x2e0))
              (this,CONCAT71(uVar4,2),NAME_BlendWeightDistotionTime,pUVar2,uVar1);
  }
  return;
}

