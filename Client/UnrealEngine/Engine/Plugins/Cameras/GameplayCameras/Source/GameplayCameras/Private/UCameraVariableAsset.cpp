// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 13

// StaticClass @ 14d572160

UClass * __cdecl UCameraVariableAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraVariableAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraVariableAsset",
               &Z_Registration_Info_UClass_UCameraVariableAsset.InnerSingleton,
               StaticRegisterNativesUCameraVariableAsset,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraVariableAsset>,
               InternalVTableHelperCtorCaller<UCameraVariableAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraVariableAsset.InnerSingleton;
}

// UCameraVariableAsset @ 14d58fa50

UCameraVariableAsset * __thiscall
UCameraVariableAsset::UCameraVariableAsset(UCameraVariableAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bAutoReset = false;
  this->bIsPreBlended = false;
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  this->bIsPrivate = false;
  return this;
}

// UCameraVariableAsset @ 14d58fa90

UCameraVariableAsset * __thiscall
UCameraVariableAsset::UCameraVariableAsset(UCameraVariableAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bAutoReset = false;
  this->bIsPreBlended = false;
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  this->bIsPrivate = false;
  return this;
}

// ~UCameraVariableAsset @ 14d591d80

void __thiscall UCameraVariableAsset::~UCameraVariableAsset(UCameraVariableAsset *this)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDefaultValuePtr @ 14d5a7a30

uchar * __thiscall UCameraVariableAsset::GetDefaultValuePtr(UCameraVariableAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableAssets.h"
             ,0x21,L"Pure virtual not implemented (%s)");
  return (uchar *)0x0;
}

// GetPrivateStaticClass @ 14d5a9c70

UClass * __cdecl UCameraVariableAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraVariableAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraVariableAsset",
               &Z_Registration_Info_UClass_UCameraVariableAsset.InnerSingleton,
               StaticRegisterNativesUCameraVariableAsset,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraVariableAsset>,
               InternalVTableHelperCtorCaller<UCameraVariableAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraVariableAsset.InnerSingleton;
}

// GetVariableDefinition @ 14d5ac6a0

FCameraVariableDefinition * __thiscall
UCameraVariableAsset::GetVariableDefinition
          (UCameraVariableAsset *this,FCameraVariableDefinition *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  ECameraVariableType EVar3;
  FCameraVariableDefinition *pFVar4;
  ulong64 uVar5;
  
  (__return_storage_ptr__->VariableID).Value = 0xffffffff;
  __return_storage_ptr__->VariableType = Boolean;
  (__return_storage_ptr__->BlendableStructType).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  __return_storage_ptr__->bIsPrivate = false;
  __return_storage_ptr__->bIsInput = false;
  __return_storage_ptr__->bAutoReset = false;
  if ((((this->Guid).D == 0 && (this->Guid).C == 0) && (this->Guid).B == 0) && (this->Guid).A == 0)
  {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_841517864337801202>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                       ,0xe,"Guid.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCameraVariableDefinition *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar5 = CityHash64((char *)&this->Guid,0x10);
  (__return_storage_ptr__->VariableID).Value = (uint)uVar5;
  EVar3 = (**(code **)(this->_padding_ + 0x2b0))(this);
  __return_storage_ptr__->VariableType = EVar3;
  __return_storage_ptr__->bIsPrivate = this->bIsPrivate;
  __return_storage_ptr__->bIsInput = this->bIsPreBlended;
  __return_storage_ptr__->bAutoReset = this->bAutoReset;
  return __return_storage_ptr__;
}

// GetVariableID @ 14d5ac760

FCameraVariableID __thiscall UCameraVariableAsset::GetVariableID(UCameraVariableAsset *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong64 uVar4;
  undefined4 *in_RDX;
  
  if ((((this->Guid).D == 0 && (this->Guid).C == 0) && (this->Guid).B == 0) && (this->Guid).A == 0)
  {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_841517864337801202>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                       ,0xe,"Guid.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FCameraVariableID)uVar3;
    }
  }
  uVar4 = CityHash64((char *)&this->Guid,0x10);
  *in_RDX = (int)uVar4;
  return (FCameraVariableID)(uint)in_RDX;
}

// GetVariableType @ 14d5ac850

ECameraVariableType __thiscall UCameraVariableAsset::GetVariableType(UCameraVariableAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableAssets.h"
             ,0x20,L"Pure virtual not implemented (%s)");
  return Boolean;
}

// PostDuplicate @ 14d5c4560

void __thiscall UCameraVariableAsset::PostDuplicate(UCameraVariableAsset *this,Type param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  (**(code **)(this->_padding_ + 0xf8))(this,param_1 == PIE);
  if (param_1 == Normal) {
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->Guid).A = pFVar4->A;
    (this->Guid).B = uVar1;
    (this->Guid).C = uVar2;
    (this->Guid).D = uVar3;
  }
  return;
}

// PostInitProperties @ 14d5c46c0

void __thiscall UCameraVariableAsset::PostInitProperties(UCameraVariableAsset *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  UObject::PostInitProperties((UObject *)this);
  if (((this->_padding_ & 0x80430) == 0) &&
     ((((this->Guid).D == 0 && (this->Guid).C == 0) && (this->Guid).B == 0) && (this->Guid).A == 0))
  {
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->Guid).A = pFVar4->A;
    (this->Guid).B = uVar1;
    (this->Guid).C = uVar2;
    (this->Guid).D = uVar3;
  }
  return;
}

// PostLoad @ 14d5c4830

void __thiscall UCameraVariableAsset::PostLoad(UCameraVariableAsset *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  if ((((this->Guid).D == 0 && (this->Guid).C == 0) && (this->Guid).B == 0) && (this->Guid).A == 0)
  {
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->Guid).A = pFVar4->A;
    (this->Guid).B = uVar1;
    (this->Guid).C = uVar2;
    (this->Guid).D = uVar3;
  }
  UObject::PostLoad((UObject *)this);
  return;
}

// StaticRegisterNativesUCameraVariableAsset @ 14d5d0e20

void __cdecl UCameraVariableAsset::StaticRegisterNativesUCameraVariableAsset(void)

{
  return;
}

