// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b4488d0

UClass * __cdecl UDS_CharSlotGachaReward::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharSlotGachaReward.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharSlotGachaReward",
               &Z_Registration_Info_UClass_UDS_CharSlotGachaReward.InnerSingleton,
               StaticRegisterNativesUDS_CharSlotGachaReward,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CharSlotGachaReward>,
               InternalVTableHelperCtorCaller<UDS_CharSlotGachaReward>,local_res8,
               UDS_CharSlotImplByCharInfoData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharSlotGachaReward.InnerSingleton;
}

// UDS_CharSlotGachaReward @ 14b44d060

UDS_CharSlotGachaReward * __thiscall
UDS_CharSlotGachaReward::UDS_CharSlotGachaReward
          (UDS_CharSlotGachaReward *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined2 *)&this->field_0x40 = 0;
  this->field_0x42 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined ***)this = &___7UDS_CharSlotGachaReward__6B_;
  return this;
}

// UDS_CharSlotGachaReward @ 14b44d0b0

UDS_CharSlotGachaReward * __thiscall
UDS_CharSlotGachaReward::UDS_CharSlotGachaReward
          (UDS_CharSlotGachaReward *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined2 *)&this->field_0x40 = 0;
  this->field_0x42 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined ***)this = &___7UDS_CharSlotGachaReward__6B_;
  return this;
}

// ~UDS_CharSlotGachaReward @ 14b44feb0

void __thiscall UDS_CharSlotGachaReward::~UDS_CharSlotGachaReward(UDS_CharSlotGachaReward *this)

{
  *(undefined ***)this = &___7UDS_CharSlotImplBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x38);
  UObject::~UObject((UObject *)this);
  return;
}

// BindData @ 14b451e50

void __thiscall
UDS_CharSlotGachaReward::BindData
          (UDS_CharSlotGachaReward *this,
          TWeakObjectPtr<UDS_VM_W_CharacterSlot,FWeakObjectPtr> param_1)

{
  return;
}

// GetPrivateStaticClass @ 14b453dc0

UClass * __cdecl UDS_CharSlotGachaReward::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharSlotGachaReward.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharSlotGachaReward",
               &Z_Registration_Info_UClass_UDS_CharSlotGachaReward.InnerSingleton,
               StaticRegisterNativesUDS_CharSlotGachaReward,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CharSlotGachaReward>,
               InternalVTableHelperCtorCaller<UDS_CharSlotGachaReward>,local_res8,
               UDS_CharSlotImplByCharInfoData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharSlotGachaReward.InnerSingleton;
}

// IsClickable @ 14b454900

bool __thiscall UDS_CharSlotGachaReward::IsClickable(UDS_CharSlotGachaReward *this)

{
  return false;
}

// StaticRegisterNativesUDS_CharSlotGachaReward @ 14b4550f0

void __cdecl UDS_CharSlotGachaReward::StaticRegisterNativesUDS_CharSlotGachaReward(void)

{
  return;
}

// UnBindData @ 14b455530

void __thiscall
UDS_CharSlotGachaReward::UnBindData
          (UDS_CharSlotGachaReward *this,
          TWeakObjectPtr<UDS_VM_W_CharacterSlot,FWeakObjectPtr> param_1)

{
  return;
}

