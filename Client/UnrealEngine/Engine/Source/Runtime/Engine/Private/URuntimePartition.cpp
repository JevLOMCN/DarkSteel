// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 148a74bf0

UClass * __cdecl URuntimePartition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimePartition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimePartition",
               &Z_Registration_Info_UClass_URuntimePartition.InnerSingleton,
               StaticRegisterNativesURuntimePartition,0x58,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<URuntimePartition>,
               InternalVTableHelperCtorCaller<URuntimePartition>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimePartition.InnerSingleton;
}

// URuntimePartition @ 148a7fdd0

URuntimePartition * __thiscall
URuntimePartition::URuntimePartition(URuntimePartition *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URuntimePartition__6B_;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  this->bBlockOnSlowStreaming = false;
  return this;
}

// URuntimePartition @ 148a7fe00

URuntimePartition * __thiscall
URuntimePartition::URuntimePartition(URuntimePartition *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URuntimePartition__6B_;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  this->bBlockOnSlowStreaming = false;
  return this;
}

// ~URuntimePartition @ 148a81a50

void __thiscall URuntimePartition::~URuntimePartition(URuntimePartition *this)

{
  this->_padding_ = (longlong)&___7URuntimePartition__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148a96250

UClass * __cdecl URuntimePartition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimePartition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimePartition",
               &Z_Registration_Info_UClass_URuntimePartition.InnerSingleton,
               StaticRegisterNativesURuntimePartition,0x58,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<URuntimePartition>,
               InternalVTableHelperCtorCaller<URuntimePartition>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimePartition.InnerSingleton;
}

// IsValidPartitionTokens @ 148a9a7c0

bool __thiscall
URuntimePartition::IsValidPartitionTokens
          (URuntimePartition *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\RuntimeHashSet\\RuntimePartition.h"
             ,0x50,L"Pure virtual not implemented (%s)");
  return false;
}

// StaticRegisterNativesURuntimePartition @ 148aa2970

void __cdecl URuntimePartition::StaticRegisterNativesURuntimePartition(void)

{
  return;
}

