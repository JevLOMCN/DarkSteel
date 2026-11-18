// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 12

// StaticClass @ 14e2ed1a0

UClass * __cdecl UDatasmithCustomActionBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithCustomActionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithCustomActionBase",
               &Z_Registration_Info_UClass_UDatasmithCustomActionBase.InnerSingleton,
               StaticRegisterNativesUDatasmithCustomActionBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithCustomActionBase>,
               InternalVTableHelperCtorCaller<UDatasmithCustomActionBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithCustomActionBase.InnerSingleton;
}

// UDatasmithCustomActionBase @ 14e2f48f0

UDatasmithCustomActionBase * __thiscall
UDatasmithCustomActionBase::UDatasmithCustomActionBase
          (UDatasmithCustomActionBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IDatasmithCustomAction__;
  return this;
}

// UDatasmithCustomActionBase @ 14e2f4930

UDatasmithCustomActionBase * __thiscall
UDatasmithCustomActionBase::UDatasmithCustomActionBase
          (UDatasmithCustomActionBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IDatasmithCustomAction__;
  return this;
}

// ~UDatasmithCustomActionBase @ 14e2f5f40

void __thiscall
UDatasmithCustomActionBase::~UDatasmithCustomActionBase(UDatasmithCustomActionBase *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IDatasmithCustomAction__;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyOnActors @ 14e2f8500

void __thiscall
UDatasmithCustomActionBase::ApplyOnActors
          (UDatasmithCustomActionBase *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// ApplyOnAssets @ 14e2f8510

void __thiscall
UDatasmithCustomActionBase::ApplyOnAssets
          (UDatasmithCustomActionBase *this,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// CanApplyOnActors @ 14e2f86a0

bool __thiscall
UDatasmithCustomActionBase::CanApplyOnActors
          (UDatasmithCustomActionBase *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return false;
}

// CanApplyOnAssets @ 14e2f86b0

bool __thiscall
UDatasmithCustomActionBase::CanApplyOnAssets
          (UDatasmithCustomActionBase *this,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1)

{
  return false;
}

// GetLabel @ 14e2fb9c0

FText * __thiscall UDatasmithCustomActionBase::GetLabel(UDatasmithCustomActionBase *this)

{
  FText *pFVar1;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\DatasmithContent\\Source\\DatasmithContent\\Public\\DatasmithCustomAction.h"
             ,0x45,L"Pure virtual not implemented (%s)");
  pFVar1 = FText::GetEmpty();
  return pFVar1;
}

// GetPrivateStaticClass @ 14e2fc3c0

UClass * __cdecl UDatasmithCustomActionBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithCustomActionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithCustomActionBase",
               &Z_Registration_Info_UClass_UDatasmithCustomActionBase.InnerSingleton,
               StaticRegisterNativesUDatasmithCustomActionBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithCustomActionBase>,
               InternalVTableHelperCtorCaller<UDatasmithCustomActionBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithCustomActionBase.InnerSingleton;
}

// GetTooltip @ 14e2fd880

FText * __thiscall UDatasmithCustomActionBase::GetTooltip(UDatasmithCustomActionBase *this)

{
  FText *pFVar1;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\DatasmithContent\\Source\\DatasmithContent\\Public\\DatasmithCustomAction.h"
             ,0x46,L"Pure virtual not implemented (%s)");
  pFVar1 = FText::GetEmpty();
  return pFVar1;
}

// StaticRegisterNativesUDatasmithCustomActionBase @ 14e2fed00

void __cdecl UDatasmithCustomActionBase::StaticRegisterNativesUDatasmithCustomActionBase(void)

{
  return;
}

