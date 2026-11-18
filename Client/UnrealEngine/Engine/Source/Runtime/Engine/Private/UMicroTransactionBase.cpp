// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 1472eb610

UClass * __cdecl UMicroTransactionBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMicroTransactionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MicroTransactionBase",
               &Z_Registration_Info_UClass_UMicroTransactionBase.InnerSingleton,
               StaticRegisterNativesUMicroTransactionBase,0x68,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMicroTransactionBase>,
               InternalVTableHelperCtorCaller<UMicroTransactionBase>,local_res8,
               UPlatformInterfaceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMicroTransactionBase.InnerSingleton;
}

// UMicroTransactionBase @ 1472f1e30

UMicroTransactionBase * __thiscall
UMicroTransactionBase::UMicroTransactionBase(UMicroTransactionBase *this,FVTableHelper *param_1)

{
  UPlatformInterfaceBase::UPlatformInterfaceBase((UPlatformInterfaceBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMicroTransactionBase__6B_;
  (this->AvailableProducts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AvailableProducts).ArrayNum = 0;
  (this->AvailableProducts).ArrayMax = 0;
  (this->LastError).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastError).Data.ArrayNum = 0;
  (this->LastError).Data.ArrayMax = 0;
  (this->LastErrorSolution).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastErrorSolution).Data.ArrayNum = 0;
  (this->LastErrorSolution).Data.ArrayMax = 0;
  return this;
}

// ~UMicroTransactionBase @ 1472f2360

void __thiscall UMicroTransactionBase::~UMicroTransactionBase(UMicroTransactionBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMicroTransactionBase__6B_;
  pFVar1 = (this->LastErrorSolution).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastError).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPurchaseInfo,int>
            ((FPurchaseInfo *)(this->AvailableProducts).AllocatorInstance.Data,
             (this->AvailableProducts).ArrayNum);
  pFVar1 = (this->AvailableProducts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPlatformInterfaceBase::~UPlatformInterfaceBase((UPlatformInterfaceBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472f3c40

UClass * __cdecl UMicroTransactionBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMicroTransactionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MicroTransactionBase",
               &Z_Registration_Info_UClass_UMicroTransactionBase.InnerSingleton,
               StaticRegisterNativesUMicroTransactionBase,0x68,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMicroTransactionBase>,
               InternalVTableHelperCtorCaller<UMicroTransactionBase>,local_res8,
               UPlatformInterfaceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMicroTransactionBase.InnerSingleton;
}

// StaticRegisterNativesUMicroTransactionBase @ 1472f4470

void __cdecl UMicroTransactionBase::StaticRegisterNativesUMicroTransactionBase(void)

{
  return;
}

// UMicroTransactionBase @ 14850fda0

UMicroTransactionBase * __thiscall
UMicroTransactionBase::UMicroTransactionBase
          (UMicroTransactionBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMicroTransactionBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->AvailableProducts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AvailableProducts).ArrayNum = 0;
  (this->AvailableProducts).ArrayMax = 0;
  (this->LastError).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastError).Data.ArrayNum = 0;
  (this->LastError).Data.ArrayMax = 0;
  (this->LastErrorSolution).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastErrorSolution).Data.ArrayNum = 0;
  (this->LastErrorSolution).Data.ArrayMax = 0;
  return this;
}

// BeginPurchase @ 148518280

bool __thiscall UMicroTransactionBase::BeginPurchase(UMicroTransactionBase *this,int param_1)

{
  return false;
}

// Init @ 1485311b0

void __thiscall UMicroTransactionBase::Init(UMicroTransactionBase *this)

{
  return;
}

// IsAllowedToMakePurchases @ 148531f20

bool __thiscall UMicroTransactionBase::IsAllowedToMakePurchases(UMicroTransactionBase *this)

{
  return false;
}

// QueryForAvailablePurchases @ 14853c3b0

bool __thiscall UMicroTransactionBase::QueryForAvailablePurchases(UMicroTransactionBase *this)

{
  return false;
}

