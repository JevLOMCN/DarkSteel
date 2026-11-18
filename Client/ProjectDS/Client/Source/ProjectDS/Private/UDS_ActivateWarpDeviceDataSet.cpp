// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b40ced0

UClass * __cdecl UDS_ActivateWarpDeviceDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ActivateWarpDeviceDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ActivateWarpDeviceDataSet",
               &Z_Registration_Info_UClass_UDS_ActivateWarpDeviceDataSet.InnerSingleton,
               StaticRegisterNativesUDS_ActivateWarpDeviceDataSet,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ActivateWarpDeviceDataSet>,
               InternalVTableHelperCtorCaller<UDS_ActivateWarpDeviceDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ActivateWarpDeviceDataSet.InnerSingleton;
}

// UDS_ActivateWarpDeviceDataSet @ 14b4112e0

UDS_ActivateWarpDeviceDataSet * __thiscall
UDS_ActivateWarpDeviceDataSet::UDS_ActivateWarpDeviceDataSet
          (UDS_ActivateWarpDeviceDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_ActivateWarpDeviceDataSet__6B_;
  return this;
}

// ~UDS_ActivateWarpDeviceDataSet @ 14b411e80

void __thiscall
UDS_ActivateWarpDeviceDataSet::~UDS_ActivateWarpDeviceDataSet(UDS_ActivateWarpDeviceDataSet *this)

{
  *(undefined ***)this = &___7UDS_ActivateWarpDeviceDataSet__6B_;
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b413420

UClass * __cdecl UDS_ActivateWarpDeviceDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ActivateWarpDeviceDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ActivateWarpDeviceDataSet",
               &Z_Registration_Info_UClass_UDS_ActivateWarpDeviceDataSet.InnerSingleton,
               StaticRegisterNativesUDS_ActivateWarpDeviceDataSet,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ActivateWarpDeviceDataSet>,
               InternalVTableHelperCtorCaller<UDS_ActivateWarpDeviceDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ActivateWarpDeviceDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_ActivateWarpDeviceDataSet @ 14b414250

void __cdecl UDS_ActivateWarpDeviceDataSet::StaticRegisterNativesUDS_ActivateWarpDeviceDataSet(void)

{
  return;
}

// UDS_ActivateWarpDeviceDataSet @ 14ba324b0

UDS_ActivateWarpDeviceDataSet * __thiscall
UDS_ActivateWarpDeviceDataSet::UDS_ActivateWarpDeviceDataSet
          (UDS_ActivateWarpDeviceDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_ActivateWarpDeviceDataSet__6B_;
  return this;
}

// OnAdded @ 14ba5e7a0

void __thiscall UDS_ActivateWarpDeviceDataSet::OnAdded(UDS_ActivateWarpDeviceDataSet *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_ActivateWarpDeviceData *pUVar4;
  UDS_ActivateWarpDeviceData *local_res10 [3];
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UDS_ActivateWarpDeviceData>(pUVar3);
  if (pUVar4 == (UDS_ActivateWarpDeviceData *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5920579784374484927>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_ActivateWarpDeviceData.cpp"
                       ,0x41,"false");
    if (!bVar2) {
      return;
    }
code_r0x00014ba5e841:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res10[0] = pUVar4;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  bVar2 = UDS_DataSetBase::AddData((UDS_DataSetBase *)this,0,(TObjectPtr<UDS_DataBase>)local_res10);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5920579784374484919>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_ActivateWarpDeviceData.cpp"
                       ,0x49,"false");
    if (bVar2) goto code_r0x00014ba5e841;
  }
  return;
}

