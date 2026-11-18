// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 7

// StaticClass @ 14e2927b0

UClass * __cdecl UOodleNetworkTrainerCommandlet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOodleNetworkTrainerCommandlet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OodleNetworkHandlerComponent",L"OodleNetworkTrainerCommandlet",
               &Z_Registration_Info_UClass_UOodleNetworkTrainerCommandlet.InnerSingleton,
               StaticRegisterNativesUOodleNetworkTrainerCommandlet,0xa0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Editor",
               InternalConstructor<UOodleNetworkTrainerCommandlet>,
               InternalVTableHelperCtorCaller<UOodleNetworkTrainerCommandlet>,local_res8,
               UCommandlet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOodleNetworkTrainerCommandlet.InnerSingleton;
}

// UOodleNetworkTrainerCommandlet @ 14e293fb0

UOodleNetworkTrainerCommandlet * __thiscall
UOodleNetworkTrainerCommandlet::UOodleNetworkTrainerCommandlet
          (UOodleNetworkTrainerCommandlet *this,FVTableHelper *param_1)

{
  UCommandlet::UCommandlet((UCommandlet *)this,param_1);
  this->_padding_ = (longlong)&___7UOodleNetworkTrainerCommandlet__6B_;
  return this;
}

// UOodleNetworkTrainerCommandlet @ 14e293fe0

UOodleNetworkTrainerCommandlet * __thiscall
UOodleNetworkTrainerCommandlet::UOodleNetworkTrainerCommandlet
          (UOodleNetworkTrainerCommandlet *this,FObjectInitializer *param_1)

{
  UCommandlet::UCommandlet((UCommandlet *)this,param_1);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 8;
  this->_padding_ = (longlong)&___7UOodleNetworkTrainerCommandlet__6B_;
  this->bCompressionTest = false;
  this->HashTableSize = 0x13;
  this->DictionarySize = 0x400000;
  this->DictionaryTrials = 3;
  this->TrialRandomness = 200;
  this->TrialGenerations = 1;
  this->bNoTrials = false;
  return this;
}

// ~UOodleNetworkTrainerCommandlet @ 14e294820

void __thiscall
UOodleNetworkTrainerCommandlet::~UOodleNetworkTrainerCommandlet
          (UOodleNetworkTrainerCommandlet *this)

{
  this->_padding_ = (longlong)&___7UOodleNetworkTrainerCommandlet__6B_;
  UCommandlet::~UCommandlet((UCommandlet *)this);
  return;
}

// GetPrivateStaticClass @ 14e296270

UClass * __cdecl UOodleNetworkTrainerCommandlet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOodleNetworkTrainerCommandlet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OodleNetworkHandlerComponent",L"OodleNetworkTrainerCommandlet",
               &Z_Registration_Info_UClass_UOodleNetworkTrainerCommandlet.InnerSingleton,
               StaticRegisterNativesUOodleNetworkTrainerCommandlet,0xa0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Editor",
               InternalConstructor<UOodleNetworkTrainerCommandlet>,
               InternalVTableHelperCtorCaller<UOodleNetworkTrainerCommandlet>,local_res8,
               UCommandlet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOodleNetworkTrainerCommandlet.InnerSingleton;
}

// Main @ 14e2992d0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UOodleNetworkTrainerCommandlet::Main(UOodleNetworkTrainerCommandlet *this,FString *param_1)

{
  if (1 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
  }
  return (int)((GWarn->Errors).ArrayNum != 0);
}

// StaticRegisterNativesUOodleNetworkTrainerCommandlet @ 14e29e1e0

void __cdecl
UOodleNetworkTrainerCommandlet::StaticRegisterNativesUOodleNetworkTrainerCommandlet(void)

{
  return;
}

