// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// UAudioEngineSubsystem @ 148809b00

UAudioEngineSubsystem * __thiscall
UAudioEngineSubsystem::UAudioEngineSubsystem(UAudioEngineSubsystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAudioEngineSubsystem__6B_;
  return this;
}

// UAudioEngineSubsystem @ 148809b30

UAudioEngineSubsystem * __thiscall
UAudioEngineSubsystem::UAudioEngineSubsystem(UAudioEngineSubsystem *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UAudioEngineSubsystem__6B_;
  return this;
}

// ~UAudioEngineSubsystem @ 14880d130

void __thiscall UAudioEngineSubsystem::~UAudioEngineSubsystem(UAudioEngineSubsystem *this)

{
  *(undefined ***)this = &___7USubsystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetAudioDeviceHandle @ 14883ceb0

FAudioDeviceHandle * __thiscall
UAudioEngineSubsystem::GetAudioDeviceHandle
          (UAudioEngineSubsystem *this,FAudioDeviceHandle *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FAudioDeviceHandle *pFVar6;
  FAudioDeviceManager *this_00;
  longlong lVar7;
  
  lVar7 = *(longlong *)&this->field_0x20;
  if (lVar7 != 0) {
    pUVar5 = UAudioSubsystemCollectionRoot::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14883cf11;
  }
  lVar7 = 0;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("SubsystemRoot",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\AudioEngineSubsystem.cpp"
                     ,0x12,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FAudioDeviceHandle *)(*pcVar3)();
    return pFVar6;
  }
LAB_14883cf11:
  uVar2 = *(uint *)(lVar7 + 0x28);
  this_00 = FAudioDeviceManager::Get();
  if (this_00 != (FAudioDeviceManager *)0x0) {
    FAudioDeviceManager::GetAudioDevice(this_00,__return_storage_ptr__,uVar2);
    return __return_storage_ptr__;
  }
  FAudioDeviceHandle::FAudioDeviceHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetAudioDeviceId @ 14883cf60

uint __thiscall UAudioEngineSubsystem::GetAudioDeviceId(UAudioEngineSubsystem *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)&this->field_0x20;
  if (lVar6 != 0) {
    pUVar5 = UAudioSubsystemCollectionRoot::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14883cfb7;
  }
  lVar6 = 0;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("SubsystemRoot",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\AudioEngineSubsystem.cpp"
                     ,0x12,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
LAB_14883cfb7:
  return *(uint *)(lVar6 + 0x28);
}

// GetMixerDevice @ 14883fa50

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerDevice * __thiscall UAudioEngineSubsystem::GetMixerDevice(UAudioEngineSubsystem *this)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FMixerDevice *pFVar6;
  FAudioDeviceManager *this_00;
  longlong lVar7;
  FAudioDeviceHandle local_28;
  
  lVar7 = *(longlong *)&this->field_0x20;
  if (lVar7 != 0) {
    pUVar5 = UAudioSubsystemCollectionRoot::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14883faaa;
  }
  lVar7 = 0;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("SubsystemRoot",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\AudioEngineSubsystem.cpp"
                     ,0x12,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FMixerDevice *)(*pcVar3)();
    return pFVar6;
  }
LAB_14883faaa:
  uVar2 = *(uint *)(lVar7 + 0x28);
  this_00 = FAudioDeviceManager::Get();
  if (this_00 == (FAudioDeviceManager *)0x0) {
    FAudioDeviceHandle::FAudioDeviceHandle(&local_28);
  }
  else {
    FAudioDeviceManager::GetAudioDevice(this_00,&local_28,uVar2);
  }
  pFVar6 = (FMixerDevice *)FAudioDeviceHandle::GetAudioDevice(&local_28);
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
  return pFVar6;
}

// GetMutableMixerDevice @ 14883fbd0

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerDevice * __thiscall UAudioEngineSubsystem::GetMutableMixerDevice(UAudioEngineSubsystem *this)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FMixerDevice *pFVar6;
  FAudioDeviceManager *this_00;
  longlong lVar7;
  FAudioDeviceHandle local_28;
  
  lVar7 = *(longlong *)&this->field_0x20;
  if (lVar7 != 0) {
    pUVar5 = UAudioSubsystemCollectionRoot::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14883fc2a;
  }
  lVar7 = 0;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("SubsystemRoot",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\AudioEngineSubsystem.cpp"
                     ,0x12,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FMixerDevice *)(*pcVar3)();
    return pFVar6;
  }
LAB_14883fc2a:
  uVar2 = *(uint *)(lVar7 + 0x28);
  this_00 = FAudioDeviceManager::Get();
  if (this_00 == (FAudioDeviceManager *)0x0) {
    FAudioDeviceHandle::FAudioDeviceHandle(&local_28);
  }
  else {
    FAudioDeviceManager::GetAudioDevice(this_00,&local_28,uVar2);
  }
  pFVar6 = (FMixerDevice *)FAudioDeviceHandle::GetAudioDevice(&local_28);
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
  return pFVar6;
}

// GetMutableSourceManager @ 14883fc80

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerSourceManager * __thiscall
UAudioEngineSubsystem::GetMutableSourceManager(UAudioEngineSubsystem *this)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FMixerSourceManager *pFVar6;
  FAudioDeviceManager *this_00;
  FMixerDevice *this_01;
  longlong lVar7;
  FAudioDeviceHandle local_28;
  
  lVar7 = *(longlong *)&this->field_0x20;
  if (lVar7 != 0) {
    pUVar5 = UAudioSubsystemCollectionRoot::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14883fcda;
  }
  lVar7 = 0;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("SubsystemRoot",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\AudioEngineSubsystem.cpp"
                     ,0x12,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FMixerSourceManager *)(*pcVar3)();
    return pFVar6;
  }
LAB_14883fcda:
  uVar2 = *(uint *)(lVar7 + 0x28);
  this_00 = FAudioDeviceManager::Get();
  if (this_00 == (FAudioDeviceManager *)0x0) {
    FAudioDeviceHandle::FAudioDeviceHandle(&local_28);
  }
  else {
    FAudioDeviceManager::GetAudioDevice(this_00,&local_28,uVar2);
  }
  this_01 = (FMixerDevice *)FAudioDeviceHandle::GetAudioDevice(&local_28);
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
  if (this_01 != (FMixerDevice *)0x0) {
    pFVar6 = Audio::FMixerDevice::GetSourceManager(this_01);
    return pFVar6;
  }
  return (FMixerSourceManager *)0x0;
}

// GetPrivateStaticClass @ 1488403f0

UClass * __cdecl UAudioEngineSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AudioEngineSubsystem",
               &Z_Registration_Info_UClass_UAudioEngineSubsystem.InnerSingleton,
               StaticRegisterNativesUAudioEngineSubsystem,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioEngineSubsystem>,
               InternalVTableHelperCtorCaller<UAudioEngineSubsystem>,local_res8,
               UDynamicSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioEngineSubsystem.InnerSingleton;
}

// GetSourceManager @ 1488420c0

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerSourceManager * __thiscall
UAudioEngineSubsystem::GetSourceManager(UAudioEngineSubsystem *this)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FMixerSourceManager *pFVar6;
  FAudioDeviceManager *this_00;
  FMixerDevice *this_01;
  longlong lVar7;
  FAudioDeviceHandle local_28;
  
  lVar7 = *(longlong *)&this->field_0x20;
  if (lVar7 != 0) {
    pUVar5 = UAudioSubsystemCollectionRoot::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14884211a;
  }
  lVar7 = 0;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("SubsystemRoot",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\AudioEngineSubsystem.cpp"
                     ,0x12,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FMixerSourceManager *)(*pcVar3)();
    return pFVar6;
  }
LAB_14884211a:
  uVar2 = *(uint *)(lVar7 + 0x28);
  this_00 = FAudioDeviceManager::Get();
  if (this_00 == (FAudioDeviceManager *)0x0) {
    FAudioDeviceHandle::FAudioDeviceHandle(&local_28);
  }
  else {
    FAudioDeviceManager::GetAudioDevice(this_00,&local_28,uVar2);
  }
  this_01 = (FMixerDevice *)FAudioDeviceHandle::GetAudioDevice(&local_28);
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
  if (this_01 != (FMixerDevice *)0x0) {
    pFVar6 = Audio::FMixerDevice::GetSourceManager(this_01);
    return pFVar6;
  }
  return (FMixerSourceManager *)0x0;
}

// StaticRegisterNativesUAudioEngineSubsystem @ 14885ac00

void __cdecl UAudioEngineSubsystem::StaticRegisterNativesUAudioEngineSubsystem(void)

{
  return;
}

