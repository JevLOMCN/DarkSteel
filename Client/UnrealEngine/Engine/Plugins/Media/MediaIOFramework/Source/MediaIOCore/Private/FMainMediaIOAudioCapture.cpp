// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 6

// FMainMediaIOAudioCapture @ 14d789af0

FMainMediaIOAudioCapture * __thiscall
FMainMediaIOAudioCapture::FMainMediaIOAudioCapture(FMainMediaIOAudioCapture *this)

{
  FMediaIOAudioCapture::FMediaIOAudioCapture((FMediaIOAudioCapture *)this);
  *(undefined ***)this = &___7FMainMediaIOAudioCapture__6B_;
  return this;
}

// ~FMainMediaIOAudioCapture @ 14d78c790

void __thiscall FMainMediaIOAudioCapture::~FMainMediaIOAudioCapture(FMainMediaIOAudioCapture *this)

{
  *(undefined ***)this = &___7FMainMediaIOAudioCapture__6B_;
  FMediaIOAudioCapture::~FMediaIOAudioCapture((FMediaIOAudioCapture *)this);
  return;
}

// Initialize @ 14d7af0a0

void __thiscall
FMainMediaIOAudioCapture::Initialize
          (FMainMediaIOAudioCapture *this,
          TDelegate<void___cdecl(float_*,int),FDefaultDelegateUserPolicy> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((*(longlong *)&this->field_0x20 == 0) ||
     ((*(longlong *)&this->field_0x28 != 0 && (*(int *)(*(longlong *)&this->field_0x28 + 8) == 1))))
  {
    TDelegate<void___cdecl(float_*,int),FDefaultDelegateUserPolicy>::operator=
              ((TDelegate<void___cdecl(float_*,int),FDefaultDelegateUserPolicy> *)&this->field_0xb0,
               param_1);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3187632067466755832>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaIOCoreAudioOutput.cpp"
                       ,0x108,
                       "!SubmixBufferListenerProxy || SubmixBufferListenerProxy.GetSharedReferenceCount() == 1"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  RegisterCurrentAudioDevice(this);
  return;
}

// Initialize @ 14d7af120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FMainMediaIOAudioCapture::Initialize(FMainMediaIOAudioCapture *this)

{
  int *piVar1;
  FWeakObjectPtr FVar2;
  UWorld *this_00;
  bool bVar3;
  uint uVar4;
  FWeakObjectPtr FVar5;
  FAudioDeviceHandle *this_01;
  FAudioDevice *pFVar6;
  undefined1 auStackX_10 [8];
  undefined4 uStack_34;
  FAudioDeviceHandle FStack_30;
  
  piVar1 = &(GEngine->WorldList).Array.ArrayNum;
  FVar5 = (FWeakObjectPtr)(GEngine->WorldList).Array.AllocatorInstance.Data;
  uVar4 = *piVar1;
  FVar2 = (FWeakObjectPtr)((longlong)FVar5 + (longlong)(int)uVar4 * 8);
  FStack_30._20_4_ = uStack_34;
  FStack_30.DeviceId = uVar4;
  FStack_30.World.WeakPtr = FVar5;
  FStack_30.Device = (FAudioDevice *)piVar1;
  while( true ) {
    if (*piVar1 != uVar4) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_10);
    }
    if (FVar5 == FVar2) goto LAB_14d7b9ae8;
    if (**(char **)FVar5 == '\x01') break;
    FVar5 = (FWeakObjectPtr)((longlong)FVar5 + 8);
  }
  this_00 = *(UWorld **)(*(char **)FVar5 + 0x2c0);
  if (this_00 == (UWorld *)0x0) {
LAB_14d7b9ae8:
    this_01 = UEngine::GetMainAudioDevice(GEngine,&FStack_30);
  }
  else {
    this_01 = UWorld::GetAudioDevice(this_00,&FStack_30);
  }
  FMediaIOAudioCapture::UnregisterAudioDevice((FMediaIOAudioCapture *)this);
  bVar3 = FAudioDeviceHandle::IsValid(this_01);
  if (bVar3) {
    pFVar6 = FAudioDeviceHandle::GetAudioDevice(this_01);
    FMediaIOAudioCapture::RegisterBufferListener((FMediaIOAudioCapture *)this,pFVar6);
    uVar4 = FAudioDeviceHandle::GetDeviceID(this_01);
    *(uint *)&this->field_0x18 = uVar4;
  }
  FAudioDeviceHandle::~FAudioDeviceHandle(&FStack_30);
  return;
}

// RegisterCurrentAudioDevice @ 14d7b9a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FMainMediaIOAudioCapture::RegisterCurrentAudioDevice(FMainMediaIOAudioCapture *this)

{
  int *piVar1;
  FWeakObjectPtr FVar2;
  UWorld *this_00;
  bool bVar3;
  uint uVar4;
  FWeakObjectPtr FVar5;
  FAudioDeviceHandle *this_01;
  FAudioDevice *pFVar6;
  undefined1 local_res10 [8];
  undefined4 uStack_34;
  FAudioDeviceHandle local_30;
  
  piVar1 = &(GEngine->WorldList).Array.ArrayNum;
  FVar5 = (FWeakObjectPtr)(GEngine->WorldList).Array.AllocatorInstance.Data;
  uVar4 = *piVar1;
  FVar2 = (FWeakObjectPtr)((longlong)FVar5 + (longlong)(int)uVar4 * 8);
  local_30._20_4_ = uStack_34;
  local_30.DeviceId = uVar4;
  local_30.World.WeakPtr = FVar5;
  local_30.Device = (FAudioDevice *)piVar1;
  while( true ) {
    if (*piVar1 != uVar4) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar5 == FVar2) goto LAB_14d7b9ae8;
    if (**(char **)FVar5 == '\x01') break;
    FVar5 = (FWeakObjectPtr)((longlong)FVar5 + 8);
  }
  this_00 = *(UWorld **)(*(char **)FVar5 + 0x2c0);
  if (this_00 == (UWorld *)0x0) {
LAB_14d7b9ae8:
    this_01 = UEngine::GetMainAudioDevice(GEngine,&local_30);
  }
  else {
    this_01 = UWorld::GetAudioDevice(this_00,&local_30);
  }
  FMediaIOAudioCapture::UnregisterAudioDevice((FMediaIOAudioCapture *)this);
  bVar3 = FAudioDeviceHandle::IsValid(this_01);
  if (bVar3) {
    pFVar6 = FAudioDeviceHandle::GetAudioDevice(this_01);
    FMediaIOAudioCapture::RegisterBufferListener((FMediaIOAudioCapture *)this,pFVar6);
    uVar4 = FAudioDeviceHandle::GetDeviceID(this_01);
    *(uint *)&this->field_0x18 = uVar4;
  }
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_30);
  return;
}

// RegisterMainAudioDevice @ 14d7b9b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FMainMediaIOAudioCapture::RegisterMainAudioDevice(FMainMediaIOAudioCapture *this)

{
  bool bVar1;
  uint uVar2;
  FAudioDeviceHandle *this_00;
  FAudioDevice *pFVar3;
  FAudioDeviceHandle local_28;
  
  this_00 = UEngine::GetMainAudioDevice(GEngine,&local_28);
  FMediaIOAudioCapture::UnregisterAudioDevice((FMediaIOAudioCapture *)this);
  bVar1 = FAudioDeviceHandle::IsValid(this_00);
  if (bVar1) {
    pFVar3 = FAudioDeviceHandle::GetAudioDevice(this_00);
    FMediaIOAudioCapture::RegisterBufferListener((FMediaIOAudioCapture *)this,pFVar3);
    uVar2 = FAudioDeviceHandle::GetDeviceID(this_00);
    *(uint *)&this->field_0x18 = uVar2;
  }
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
  return;
}

