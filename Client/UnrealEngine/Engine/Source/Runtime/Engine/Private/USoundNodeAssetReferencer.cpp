// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 148678680

UClass * __cdecl USoundNodeAssetReferencer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeAssetReferencer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeAssetReferencer",
               &Z_Registration_Info_UClass_USoundNodeAssetReferencer.InnerSingleton,
               StaticRegisterNativesUSoundNodeAssetReferencer,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeAssetReferencer>,
               InternalVTableHelperCtorCaller<USoundNodeAssetReferencer>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeAssetReferencer.InnerSingleton;
}

// USoundNodeAssetReferencer @ 1486971f0

USoundNodeAssetReferencer * __thiscall
USoundNodeAssetReferencer::USoundNodeAssetReferencer
          (USoundNodeAssetReferencer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined ***)this = &___7USoundNodeAssetReferencer__6B_;
  return this;
}

// USoundNodeAssetReferencer @ 148697230

USoundNodeAssetReferencer * __thiscall
USoundNodeAssetReferencer::USoundNodeAssetReferencer
          (USoundNodeAssetReferencer *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  *(undefined ***)this = &___7USoundNodeAssetReferencer__6B_;
  return this;
}

// ~USoundNodeAssetReferencer @ 14869b770

void __thiscall
USoundNodeAssetReferencer::~USoundNodeAssetReferencer(USoundNodeAssetReferencer *this)

{
  *(undefined ***)this = &___7USoundNode__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ClearAssetReferences @ 1486a88c0

void __thiscall USoundNodeAssetReferencer::ClearAssetReferences(USoundNodeAssetReferencer *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\SoundNodeAssetReferencer.h"
             ,0x15,L"Pure virtual not implemented (%s)");
  return;
}

// ContainsProceduralSoundReference @ 1486abda0

bool __thiscall
USoundNodeAssetReferencer::ContainsProceduralSoundReference(USoundNodeAssetReferencer *this)

{
  return false;
}

// GetPrivateStaticClass @ 1486c46f0

UClass * __cdecl USoundNodeAssetReferencer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeAssetReferencer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeAssetReferencer",
               &Z_Registration_Info_UClass_USoundNodeAssetReferencer.InnerSingleton,
               StaticRegisterNativesUSoundNodeAssetReferencer,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeAssetReferencer>,
               InternalVTableHelperCtorCaller<USoundNodeAssetReferencer>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeAssetReferencer.InnerSingleton;
}

// LoadAsset @ 1486d2630

void __thiscall USoundNodeAssetReferencer::LoadAsset(USoundNodeAssetReferencer *this,bool param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\SoundNodeAssetReferencer.h"
             ,0x14,L"Pure virtual not implemented (%s)");
  return;
}

// ShouldHardReferenceAsset @ 1486f0e90

bool __thiscall
USoundNodeAssetReferencer::ShouldHardReferenceAsset
          (USoundNodeAssetReferencer *this,ITargetPlatform *param_1)

{
  return true;
}

// StaticRegisterNativesUSoundNodeAssetReferencer @ 1486f18c0

void __cdecl USoundNodeAssetReferencer::StaticRegisterNativesUSoundNodeAssetReferencer(void)

{
  return;
}

