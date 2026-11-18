// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 4

// ~UAISystemBase @ 146e81e90

void __thiscall UAISystemBase::~UAISystemBase(UAISystemBase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAISystemBase__6B_;
  pvVar1 = *(void **)&(this->AISystemClassName).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// InitializeActorsForPlay @ 146e90bc0

void __thiscall UAISystemBase::InitializeActorsForPlay(UAISystemBase *this,bool param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\AISystemBase.h"
             ,0x18,L"Pure virtual not implemented (%s)");
  return;
}

// StaticClass @ 146ea0020

UClass * __cdecl UAISystemBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAISystemBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AISystemBase",
               &Z_Registration_Info_UClass_UAISystemBase.InnerSingleton,
               StaticRegisterNativesUAISystemBase,0x60,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<UAISystemBase>,
               InternalVTableHelperCtorCaller<UAISystemBase>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISystemBase.InnerSingleton;
}

// WorldOriginLocationChanged @ 146ea4e20

void __thiscall
UAISystemBase::WorldOriginLocationChanged
          (UAISystemBase *this,TIntVector3<int> *param_1,TIntVector3<int> *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\AISystemBase.h"
             ,0x20,L"Pure virtual not implemented (%s)");
  return;
}

