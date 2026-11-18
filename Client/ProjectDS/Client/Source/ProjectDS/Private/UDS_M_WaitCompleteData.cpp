// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b51c240

UClass * __cdecl UDS_M_WaitCompleteData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_WaitCompleteData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_WaitCompleteData",
               &Z_Registration_Info_UClass_UDS_M_WaitCompleteData.InnerSingleton,
               StaticRegisterNativesUDS_M_WaitCompleteData,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_WaitCompleteData>,
               InternalVTableHelperCtorCaller<UDS_M_WaitCompleteData>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_WaitCompleteData.InnerSingleton;
}

// UDS_M_WaitCompleteData @ 14b5224b0

UDS_M_WaitCompleteData * __thiscall
UDS_M_WaitCompleteData::UDS_M_WaitCompleteData(UDS_M_WaitCompleteData *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_WaitCompleteData__6B_;
  (this->WaitCompletData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->WaitCompletData).WeakPtr,(FObjectPtr)local_res8);
  this->IsUpdate = true;
  return this;
}

// UDS_M_WaitCompleteData @ 14b522500

UDS_M_WaitCompleteData * __thiscall
UDS_M_WaitCompleteData::UDS_M_WaitCompleteData
          (UDS_M_WaitCompleteData *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_WaitCompleteData__6B_;
  (this->WaitCompletData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->WaitCompletData).WeakPtr,(FObjectPtr)local_res8);
  this->IsUpdate = true;
  return this;
}

// ~UDS_M_WaitCompleteData @ 14b523670

void __thiscall UDS_M_WaitCompleteData::~UDS_M_WaitCompleteData(UDS_M_WaitCompleteData *this)

{
  this->_padding_ = (longlong)&___7UDS_M_WaitCompleteData__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5266a0

UClass * __cdecl UDS_M_WaitCompleteData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_WaitCompleteData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_WaitCompleteData",
               &Z_Registration_Info_UClass_UDS_M_WaitCompleteData.InnerSingleton,
               StaticRegisterNativesUDS_M_WaitCompleteData,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_WaitCompleteData>,
               InternalVTableHelperCtorCaller<UDS_M_WaitCompleteData>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_WaitCompleteData.InnerSingleton;
}

// StaticRegisterNativesUDS_M_WaitCompleteData @ 14b5275a0

void __cdecl UDS_M_WaitCompleteData::StaticRegisterNativesUDS_M_WaitCompleteData(void)

{
  return;
}

// GetIsUpdate @ 14bd5d0f0

bool __thiscall UDS_M_WaitCompleteData::GetIsUpdate(UDS_M_WaitCompleteData *this)

{
  return this->IsUpdate;
}

// GetWaitCompleteData @ 14bd64de0

TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> __thiscall
UDS_M_WaitCompleteData::GetWaitCompleteData(UDS_M_WaitCompleteData *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->WaitCompletData).WeakPtr;
  return (TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>)in_RDX;
}

// InitModel @ 14bd68f20

void __thiscall
UDS_M_WaitCompleteData::InitModel
          (UDS_M_WaitCompleteData *this,TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> param_1)

{
  (this->WaitCompletData).WeakPtr = param_1.WeakPtr;
  UDS_ModelBase::SetViewModelTemplateKey((UDS_ModelBase *)this,Data_WaitComplete);
  return;
}

