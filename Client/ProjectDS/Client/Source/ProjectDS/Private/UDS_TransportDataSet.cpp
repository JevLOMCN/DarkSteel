// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b5c3110

UClass * __cdecl UDS_TransportDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TransportDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TransportDataSet",
               &Z_Registration_Info_UClass_UDS_TransportDataSet.InnerSingleton,
               StaticRegisterNativesUDS_TransportDataSet,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TransportDataSet>,
               InternalVTableHelperCtorCaller<UDS_TransportDataSet>,local_res8,
               UDS_EntityDataSet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TransportDataSet.InnerSingleton;
}

// UDS_TransportDataSet @ 14b5c7570

UDS_TransportDataSet * __thiscall
UDS_TransportDataSet::UDS_TransportDataSet(UDS_TransportDataSet *this,FVTableHelper *param_1)

{
  UDS_EntityDataSet::UDS_EntityDataSet((UDS_EntityDataSet *)this,param_1);
  *(undefined ***)this = &___7UDS_TransportDataSet__6B_;
  return this;
}

// ~UDS_TransportDataSet @ 14b5c8d80

void __thiscall UDS_TransportDataSet::~UDS_TransportDataSet(UDS_TransportDataSet *this)

{
  *(undefined ***)this = &___7UDS_TransportDataSet__6B_;
  UDS_EntityDataSet::~UDS_EntityDataSet((UDS_EntityDataSet *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cc560

UClass * __cdecl UDS_TransportDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TransportDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TransportDataSet",
               &Z_Registration_Info_UClass_UDS_TransportDataSet.InnerSingleton,
               StaticRegisterNativesUDS_TransportDataSet,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TransportDataSet>,
               InternalVTableHelperCtorCaller<UDS_TransportDataSet>,local_res8,
               UDS_EntityDataSet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TransportDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_TransportDataSet @ 14b5ce070

void __cdecl UDS_TransportDataSet::StaticRegisterNativesUDS_TransportDataSet(void)

{
  return;
}

// UDS_TransportDataSet @ 14ba92370

UDS_TransportDataSet * __thiscall
UDS_TransportDataSet::UDS_TransportDataSet(UDS_TransportDataSet *this,FObjectInitializer *param_1)

{
  UDS_EntityDataSet::UDS_EntityDataSet((UDS_EntityDataSet *)this,param_1);
  *(undefined ***)this = &___7UDS_TransportDataSet__6B_;
  return this;
}

// OnAdded @ 14babda50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_TransportDataSet::OnAdded(UDS_TransportDataSet *this)

{
  UObject *pUVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  UDS_TransportData *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar1 = GetTransientPackageAsObject();
  local_148[0] = NewObject<UDS_TransportData>(pUVar1);
  if (local_148[0] == (UDS_TransportData *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TransportDataSet::OnAdded",0x1d,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x38,L"Failed to create TransportData");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_148[0]);
    }
    UDS_DataSetBase::AddData((UDS_DataSetBase *)this,0,(TObjectPtr<UDS_DataBase>)local_148);
  }
  return;
}

