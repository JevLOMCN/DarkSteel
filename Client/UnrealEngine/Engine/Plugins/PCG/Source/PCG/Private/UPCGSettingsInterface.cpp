// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// CanBeDebugged @ 1497266b0

bool __thiscall UPCGSettingsInterface::CanBeDebugged(UPCGSettingsInterface *this)

{
  return true;
}

// CanBeDisabled @ 1497266c0

bool __thiscall UPCGSettingsInterface::CanBeDisabled(UPCGSettingsInterface *this)

{
  return true;
}

// GetDataType @ 149726da0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGSettingsInterface::GetDataType(UPCGSettingsInterface *this)

{
  return Settings;
}

// GetDataTypeId @ 149726db0

FPCGDataTypeBaseId * __thiscall UPCGSettingsInterface::GetDataTypeId(UPCGSettingsInterface *this)

{
  UScriptStruct *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSettings::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSettings::AsId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSettings::AsId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pUVar1 = FPCGDataTypeInfoSettings::StaticStruct();
      FPCGDataTypeBaseId::FPCGDataTypeBaseId
                (&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSettings::AsId(void)'
                  ::__l2::Id,pUVar1);
      _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSettings::AsId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSettings::AsId(void)'
              ::__l2::Id;
    }
  }
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSettings::AsId(void)'
          ::__l2::Id;
}

// StaticClass @ 149f1d420

UClass * __cdecl UPCGSettingsInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSettingsInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSettingsInterface",
               &Z_Registration_Info_UClass_UPCGSettingsInterface.InnerSingleton,
               StaticRegisterNativesUPCGSettingsInterface,0x50,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSettingsInterface>,
               InternalVTableHelperCtorCaller<UPCGSettingsInterface>,local_res8,
               UPCGData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSettingsInterface.InnerSingleton;
}

// UPCGSettingsInterface @ 149f333b0

UPCGSettingsInterface * __thiscall
UPCGSettingsInterface::UPCGSettingsInterface(UPCGSettingsInterface *this,FVTableHelper *param_1)

{
  UPCGData::UPCGData((UPCGData *)this,param_1);
  this->bEnabled = true;
  this->bDebug = false;
  this->_padding_ = (longlong)&___7UPCGSettingsInterface__6B_;
  return this;
}

// UPCGSettingsInterface @ 149f333e0

UPCGSettingsInterface * __thiscall
UPCGSettingsInterface::UPCGSettingsInterface
          (UPCGSettingsInterface *this,FObjectInitializer *param_1)

{
  UPCGData::UPCGData((UPCGData *)this,param_1);
  this->bEnabled = true;
  this->bDebug = false;
  this->_padding_ = (longlong)&___7UPCGSettingsInterface__6B_;
  return this;
}

// ~UPCGSettingsInterface @ 149f34cd0

void __thiscall UPCGSettingsInterface::~UPCGSettingsInterface(UPCGSettingsInterface *this)

{
  this->_padding_ = (longlong)&___7UPCGSettingsInterface__6B_;
  UPCGData::~UPCGData((UPCGData *)this);
  return;
}

// GetPrivateStaticClass @ 149f4e010

UClass * __cdecl UPCGSettingsInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSettingsInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSettingsInterface",
               &Z_Registration_Info_UClass_UPCGSettingsInterface.InnerSingleton,
               StaticRegisterNativesUPCGSettingsInterface,0x50,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSettingsInterface>,
               InternalVTableHelperCtorCaller<UPCGSettingsInterface>,local_res8,
               UPCGData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSettingsInterface.InnerSingleton;
}

// GetSettings @ 149f4ed40

UPCGSettings * __thiscall UPCGSettingsInterface::GetSettings(UPCGSettingsInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGSettings.h"
             ,0xab,L"Pure virtual not implemented (%s)");
  return (UPCGSettings *)0x0;
}

// GetSettings @ 149f4ed70

UPCGSettings * __thiscall UPCGSettingsInterface::GetSettings(UPCGSettingsInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGSettings.h"
             ,0xac,L"Pure virtual not implemented (%s)");
  return (UPCGSettings *)0x0;
}

// IsInstance @ 149f52650

bool __thiscall UPCGSettingsInterface::IsInstance(UPCGSettingsInterface *this)

{
  UPCGSettingsInterface *pUVar1;
  
  pUVar1 = (UPCGSettingsInterface *)(**(code **)(this->_padding_ + 0x380))();
  return this != pUVar1;
}

// SetEnabled @ 149f60a60

void __thiscall UPCGSettingsInterface::SetEnabled(UPCGSettingsInterface *this,bool param_1)

{
  if (this->bEnabled != param_1) {
    this->bEnabled = param_1;
                    /* WARNING: Could not recover jumptable at 0x000149f60a6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x388))();
    return;
  }
  return;
}

// StaticRegisterNativesUPCGSettingsInterface @ 149f63c40

void __cdecl UPCGSettingsInterface::StaticRegisterNativesUPCGSettingsInterface(void)

{
  return;
}

