// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b53c480

UClass * __cdecl UDS_NpcFunctionNormalTalk::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionNormalTalk.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionNormalTalk",
               &Z_Registration_Info_UClass_UDS_NpcFunctionNormalTalk.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionNormalTalk,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionNormalTalk>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionNormalTalk>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionNormalTalk.InnerSingleton;
}

// UDS_NpcFunctionNormalTalk @ 14b540ce0

UDS_NpcFunctionNormalTalk * __thiscall
UDS_NpcFunctionNormalTalk::UDS_NpcFunctionNormalTalk
          (UDS_NpcFunctionNormalTalk *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_NpcFunctionBase__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x28,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UDS_NpcFunctionNormalTalk__6B_;
  this->field_0x34 = 0;
  return this;
}

// UDS_NpcFunctionNormalTalk @ 14b540d40

UDS_NpcFunctionNormalTalk * __thiscall
UDS_NpcFunctionNormalTalk::UDS_NpcFunctionNormalTalk
          (UDS_NpcFunctionNormalTalk *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_NpcFunctionBase__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x28,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UDS_NpcFunctionNormalTalk__6B_;
  this->field_0x34 = 0;
  return this;
}

// ~UDS_NpcFunctionNormalTalk @ 14b541a60

void __thiscall
UDS_NpcFunctionNormalTalk::~UDS_NpcFunctionNormalTalk(UDS_NpcFunctionNormalTalk *this)

{
  *(undefined ***)this = &___7UDS_NpcFunctionBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b543530

UClass * __cdecl UDS_NpcFunctionNormalTalk::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionNormalTalk.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionNormalTalk",
               &Z_Registration_Info_UClass_UDS_NpcFunctionNormalTalk.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionNormalTalk,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionNormalTalk>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionNormalTalk>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionNormalTalk.InnerSingleton;
}

// StaticRegisterNativesUDS_NpcFunctionNormalTalk @ 14b543c30

void __cdecl UDS_NpcFunctionNormalTalk::StaticRegisterNativesUDS_NpcFunctionNormalTalk(void)

{
  return;
}

