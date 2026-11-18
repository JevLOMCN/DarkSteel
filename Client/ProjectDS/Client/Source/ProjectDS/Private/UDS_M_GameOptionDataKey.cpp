// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b509950

UClass * __cdecl UDS_M_GameOptionDataKey::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_GameOptionDataKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_GameOptionDataKey",
               &Z_Registration_Info_UClass_UDS_M_GameOptionDataKey.InnerSingleton,
               StaticRegisterNativesUDS_M_GameOptionDataKey,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_GameOptionDataKey>,
               InternalVTableHelperCtorCaller<UDS_M_GameOptionDataKey>,local_res8,
               UDS_M_GameOptionDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_GameOptionDataKey.InnerSingleton;
}

// UDS_M_GameOptionDataKey @ 14b511000

UDS_M_GameOptionDataKey * __thiscall
UDS_M_GameOptionDataKey::UDS_M_GameOptionDataKey
          (UDS_M_GameOptionDataKey *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_GameOptionDataBase__6B_;
  *(undefined8 *)&this->field_0x1a8 = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x1a8,(FObjectPtr)local_res8);
  *(undefined ***)this = &___7UDS_M_GameOptionDataKey__6B_;
  return this;
}

// UDS_M_GameOptionDataKey @ 14b511050

UDS_M_GameOptionDataKey * __thiscall
UDS_M_GameOptionDataKey::UDS_M_GameOptionDataKey
          (UDS_M_GameOptionDataKey *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_GameOptionDataBase__6B_;
  *(undefined8 *)&this->field_0x1a8 = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x1a8,(FObjectPtr)local_res8);
  *(undefined ***)this = &___7UDS_M_GameOptionDataKey__6B_;
  return this;
}

// ~UDS_M_GameOptionDataKey @ 14b512ee0

void __thiscall UDS_M_GameOptionDataKey::~UDS_M_GameOptionDataKey(UDS_M_GameOptionDataKey *this)

{
  *(undefined ***)this = &___7UDS_M_GameOptionDataBase__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b515c00

UClass * __cdecl UDS_M_GameOptionDataKey::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_GameOptionDataKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_GameOptionDataKey",
               &Z_Registration_Info_UClass_UDS_M_GameOptionDataKey.InnerSingleton,
               StaticRegisterNativesUDS_M_GameOptionDataKey,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_GameOptionDataKey>,
               InternalVTableHelperCtorCaller<UDS_M_GameOptionDataKey>,local_res8,
               UDS_M_GameOptionDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_GameOptionDataKey.InnerSingleton;
}

// StaticRegisterNativesUDS_M_GameOptionDataKey @ 14b516c90

void __cdecl UDS_M_GameOptionDataKey::StaticRegisterNativesUDS_M_GameOptionDataKey(void)

{
  return;
}

// ClickedKeySetting @ 14bd49440

void __thiscall UDS_M_GameOptionDataKey::ClickedKeySetting(UDS_M_GameOptionDataKey *this)

{
  code *pcVar1;
  bool bVar2;
  EDS_GameOptionKeySettingIndex EVar3;
  UDS_GameOptionData *this_00;
  
  this_00 = (UDS_GameOptionData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x1a8);
  if (this_00 == (UDS_GameOptionData *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7128119159723917302>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataKey.cpp"
                       ,10,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    EVar3 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                      ((FDS_DataContainer *)&this->field_0x40,GameOptionValueIndex);
    UDS_GameOptionData::ClickedKeySetting(this_00,EVar3);
  }
  return;
}

