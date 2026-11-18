// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b53b730

UClass * __cdecl UDS_NpcFunctionTalk::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionTalk.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionTalk",
               &Z_Registration_Info_UClass_UDS_NpcFunctionTalk.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionTalk,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionTalk>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionTalk>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionTalk.InnerSingleton;
}

// UDS_NpcFunctionTalk @ 14b541180

UDS_NpcFunctionTalk * __thiscall
UDS_NpcFunctionTalk::UDS_NpcFunctionTalk(UDS_NpcFunctionTalk *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_NpcFunctionBase__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x28,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UDS_NpcFunctionTalk__6B_;
  this->field_0x34 = 0;
  return this;
}

// UDS_NpcFunctionTalk @ 14b5411e0

UDS_NpcFunctionTalk * __thiscall
UDS_NpcFunctionTalk::UDS_NpcFunctionTalk(UDS_NpcFunctionTalk *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_NpcFunctionBase__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x28,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UDS_NpcFunctionTalk__6B_;
  this->field_0x34 = 0;
  return this;
}

// ~UDS_NpcFunctionTalk @ 14b541b50

void __thiscall UDS_NpcFunctionTalk::~UDS_NpcFunctionTalk(UDS_NpcFunctionTalk *this)

{
  *(undefined ***)this = &___7UDS_NpcFunctionBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5438f0

UClass * __cdecl UDS_NpcFunctionTalk::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionTalk.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionTalk",
               &Z_Registration_Info_UClass_UDS_NpcFunctionTalk.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionTalk,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionTalk>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionTalk>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionTalk.InnerSingleton;
}

// StaticRegisterNativesUDS_NpcFunctionTalk @ 14b543cb0

void __cdecl UDS_NpcFunctionTalk::StaticRegisterNativesUDS_NpcFunctionTalk(void)

{
  return;
}

// OnBackEvent @ 14bef7210

void __thiscall UDS_NpcFunctionTalk::OnBackEvent(UDS_NpcFunctionTalk *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bef7213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2b0))();
  return;
}

