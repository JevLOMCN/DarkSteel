// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 9

// StaticClass @ 14962b3d0

UClass * __cdecl UInteractiveCommandArguments::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveCommandArguments.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveCommandArguments",
               &Z_Registration_Info_UClass_UInteractiveCommandArguments.InnerSingleton,
               StaticRegisterNativesUInteractiveCommandArguments,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInteractiveCommandArguments>,
               InternalVTableHelperCtorCaller<UInteractiveCommandArguments>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveCommandArguments.InnerSingleton;
}

// UInteractiveCommandArguments @ 14963b5b0

UInteractiveCommandArguments * __thiscall
UInteractiveCommandArguments::UInteractiveCommandArguments
          (UInteractiveCommandArguments *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->TransactionsAPI = (IToolsContextTransactionsAPI *)0x0;
  this->_padding_ = (longlong)&___7UInteractiveCommandArguments__6B_;
  return this;
}

// UInteractiveCommandArguments @ 14963b5e0

UInteractiveCommandArguments * __thiscall
UInteractiveCommandArguments::UInteractiveCommandArguments
          (UInteractiveCommandArguments *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->TransactionsAPI = (IToolsContextTransactionsAPI *)0x0;
  this->_padding_ = (longlong)&___7UInteractiveCommandArguments__6B_;
  return this;
}

// ~UInteractiveCommandArguments @ 14963eab0

void __thiscall
UInteractiveCommandArguments::~UInteractiveCommandArguments(UInteractiveCommandArguments *this)

{
  this->_padding_ = (longlong)&___7UInteractiveCommandArguments__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 149656bb0

UClass * __cdecl UInteractiveCommandArguments::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveCommandArguments.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveCommandArguments",
               &Z_Registration_Info_UClass_UInteractiveCommandArguments.InnerSingleton,
               StaticRegisterNativesUInteractiveCommandArguments,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInteractiveCommandArguments>,
               InternalVTableHelperCtorCaller<UInteractiveCommandArguments>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveCommandArguments.InnerSingleton;
}

// GetTransactionsAPI @ 149658a30

IToolsContextTransactionsAPI * __thiscall
UInteractiveCommandArguments::GetTransactionsAPI(UInteractiveCommandArguments *this)

{
  return this->TransactionsAPI;
}

// HasTransactionsAPI @ 149658e50

bool __thiscall UInteractiveCommandArguments::HasTransactionsAPI(UInteractiveCommandArguments *this)

{
  return this->TransactionsAPI != (IToolsContextTransactionsAPI *)0x0;
}

// SetTransactionsAPI @ 149662fb0

void __thiscall
UInteractiveCommandArguments::SetTransactionsAPI
          (UInteractiveCommandArguments *this,IToolsContextTransactionsAPI *param_1)

{
  this->TransactionsAPI = param_1;
  return;
}

// StaticRegisterNativesUInteractiveCommandArguments @ 149664b90

void __cdecl UInteractiveCommandArguments::StaticRegisterNativesUInteractiveCommandArguments(void)

{
  return;
}

