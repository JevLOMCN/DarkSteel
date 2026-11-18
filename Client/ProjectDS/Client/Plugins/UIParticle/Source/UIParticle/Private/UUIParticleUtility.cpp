// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 14

// StaticClass @ 14ac8a4e0

UClass * __cdecl UUIParticleUtility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIParticleUtility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UIParticle",L"UIParticleUtility",
               &Z_Registration_Info_UClass_UUIParticleUtility.InnerSingleton,
               StaticRegisterNativesUUIParticleUtility,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UUIParticleUtility>,
               InternalVTableHelperCtorCaller<UUIParticleUtility>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIParticleUtility.InnerSingleton;
}

// UUIParticleUtility @ 14ac90940

UUIParticleUtility * __thiscall
UUIParticleUtility::UUIParticleUtility(UUIParticleUtility *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UUIParticleUtility__6B_;
  return this;
}

// UUIParticleUtility @ 14ac90970

UUIParticleUtility * __thiscall
UUIParticleUtility::UUIParticleUtility(UUIParticleUtility *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UUIParticleUtility__6B_;
  return this;
}

// ~UUIParticleUtility @ 14ac91290

void __thiscall UUIParticleUtility::~UUIParticleUtility(UUIParticleUtility *this)

{
  *(undefined ***)this = &___7UUIParticleUtility__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetLOD @ 14ac98480

int __cdecl UUIParticleUtility::GetLOD(void)

{
  return LevelOfDetail;
}

// GetMultiThread @ 14ac98620

bool __cdecl UUIParticleUtility::GetMultiThread(void)

{
  return Multi_Thread;
}

// GetPrivateStaticClass @ 14ac98c00

UClass * __cdecl UUIParticleUtility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIParticleUtility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UIParticle",L"UIParticleUtility",
               &Z_Registration_Info_UClass_UUIParticleUtility.InnerSingleton,
               StaticRegisterNativesUUIParticleUtility,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UUIParticleUtility>,
               InternalVTableHelperCtorCaller<UUIParticleUtility>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIParticleUtility.InnerSingleton;
}

// SetLOD @ 14aca00b0

void __cdecl UUIParticleUtility::SetLOD(int param_1)

{
  LevelOfDetail = param_1;
  return;
}

// SetMultiThread @ 14aca00c0

void __cdecl UUIParticleUtility::SetMultiThread(bool param_1)

{
  Multi_Thread = param_1;
  return;
}

// StaticRegisterNativesUUIParticleUtility @ 14aca0430

void __cdecl UUIParticleUtility::StaticRegisterNativesUUIParticleUtility(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UUIParticleUtility_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetLOD @ 14aca3510

void __cdecl UUIParticleUtility::execGetLOD(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)param_3 = LevelOfDetail;
  return;
}

// execGetMultiThread @ 14aca3540

void __cdecl UUIParticleUtility::execGetMultiThread(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = Multi_Thread;
  return;
}

// execSetLOD @ 14aca35b0

void __cdecl UUIParticleUtility::execSetLOD(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [6];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  LevelOfDetail = local_res10[0];
  return;
}

// execSetMultiThread @ 14aca3630

void __cdecl UUIParticleUtility::execSetMultiThread(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [6];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Multi_Thread = local_res10[0] != 0;
  return;
}

