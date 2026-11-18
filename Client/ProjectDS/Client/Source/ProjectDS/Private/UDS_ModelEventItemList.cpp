// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b51a530

UClass * __cdecl UDS_ModelEventItemList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventItemList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventItemList",
               &Z_Registration_Info_UClass_UDS_ModelEventItemList.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventItemList,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ModelEventItemList>,
               InternalVTableHelperCtorCaller<UDS_ModelEventItemList>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventItemList.InnerSingleton;
}

// UDS_ModelEventItemList @ 14b522b10

UDS_ModelEventItemList * __thiscall
UDS_ModelEventItemList::UDS_ModelEventItemList(UDS_ModelEventItemList *this,FVTableHelper *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ModelEventItemList__6B_;
  return this;
}

// UDS_ModelEventItemList @ 14b522b40

UDS_ModelEventItemList * __thiscall
UDS_ModelEventItemList::UDS_ModelEventItemList
          (UDS_ModelEventItemList *this,FObjectInitializer *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ModelEventItemList__6B_;
  return this;
}

// ~UDS_ModelEventItemList @ 14b523800

void __thiscall UDS_ModelEventItemList::~UDS_ModelEventItemList(UDS_ModelEventItemList *this)

{
  this->_padding_ = (longlong)&___7UDS_ModelEventItemList__6B_;
  UDS_ModelEventBase::~UDS_ModelEventBase((UDS_ModelEventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b526ca0

UClass * __cdecl UDS_ModelEventItemList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventItemList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventItemList",
               &Z_Registration_Info_UClass_UDS_ModelEventItemList.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventItemList,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ModelEventItemList>,
               InternalVTableHelperCtorCaller<UDS_ModelEventItemList>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventItemList.InnerSingleton;
}

// StaticRegisterNativesUDS_ModelEventItemList @ 14b5276b0

void __cdecl UDS_ModelEventItemList::StaticRegisterNativesUDS_ModelEventItemList(void)

{
  return;
}

