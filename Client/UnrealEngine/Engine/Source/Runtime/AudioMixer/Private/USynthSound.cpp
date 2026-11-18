// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 13

// StaticClass @ 146535980

UClass * __cdecl USynthSound::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthSound.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"SynthSound",
               &Z_Registration_Info_UClass_USynthSound.InnerSingleton,
               StaticRegisterNativesUSynthSound,0x480,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USynthSound>,
               InternalVTableHelperCtorCaller<USynthSound>,local_res8,
               USoundWaveProcedural::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthSound.InnerSingleton;
}

// USynthSound @ 14653f460

USynthSound * __thiscall USynthSound::USynthSound(USynthSound *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  USoundWaveProcedural::USoundWaveProcedural((USoundWaveProcedural *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->OwningSynthComponent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OwningSynthComponent).WeakPtr,(FObjectPtr)&local_res8);
  (this->FloatBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatBuffer).ArrayNum = 0;
  (this->FloatBuffer).ArrayMax = 0;
  return this;
}

// USynthSound @ 14653f4f0

USynthSound * __thiscall USynthSound::USynthSound(USynthSound *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  USoundWaveProcedural::USoundWaveProcedural((USoundWaveProcedural *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->OwningSynthComponent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OwningSynthComponent).WeakPtr,(FObjectPtr)&local_res8);
  (this->FloatBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatBuffer).ArrayNum = 0;
  (this->FloatBuffer).ArrayMax = 0;
  return this;
}

// ~USynthSound @ 1465416f0

void __thiscall USynthSound::~USynthSound(USynthSound *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  pFVar1 = (this->FloatBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USoundWaveProcedural::~USoundWaveProcedural((USoundWaveProcedural *)this);
  return;
}

// CreateSoundGenerator @ 146550cb0

TSharedPtr<ISoundGenerator,1> * __thiscall
USynthSound::CreateSoundGenerator
          (USynthSound *this,TSharedPtr<ISoundGenerator,1> *__return_storage_ptr__,
          FSoundGeneratorInitParams *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  UObject *pUVar4;
  undefined8 *puVar5;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->OwningSynthComponent).WeakPtr);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->OwningSynthComponent).WeakPtr);
    FLLMScope::FLLMScope(local_res8,AudioSynthesis,false,None,Default,true);
    FMemScope::FMemScope(&local_res20,AudioSynthesis,true);
    puVar5 = (undefined8 *)(**(code **)(*(longlong *)pUVar4 + 0x680))(pUVar4,local_18,param_1);
    puVar1 = &pUVar4[0x37].field_0x18;
    if ((undefined8 *)puVar1 != puVar5) {
      *(undefined8 *)puVar1 = *puVar5;
      *puVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pUVar4[0x37].field_0x20,
                 (FSharedReferencer<1> *)(puVar5 + 1));
    }
    __return_storage_ptr__->Object = *(ISoundGenerator **)puVar1;
    pTVar2 = *(TReferenceControllerBase<1> **)&pUVar4[0x37].field_0x20;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res8);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (ISoundGenerator *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetGeneratedPCMDataFormat @ 1465583c0

Type __thiscall USynthSound::GetGeneratedPCMDataFormat(USynthSound *this)

{
  return Float;
}

// GetPrivateStaticClass @ 14655a5e0

UClass * __cdecl USynthSound::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthSound.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"SynthSound",
               &Z_Registration_Info_UClass_USynthSound.InnerSingleton,
               StaticRegisterNativesUSynthSound,0x480,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USynthSound>,
               InternalVTableHelperCtorCaller<USynthSound>,local_res8,
               USoundWaveProcedural::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthSound.InnerSingleton;
}

// Init @ 14655e320

void __thiscall
USynthSound::Init(USynthSound *this,USynthComponent *param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  USynthComponent *local_res8;
  
  if (param_1 == (USynthComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSynthComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Components\\SynthComponent.cpp"
                       ,0x14,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USynthComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->OwningSynthComponent).WeakPtr,(FObjectPtr)&local_res8);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | 8;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  *(int *)((longlong)&this->_padding_ + 4) = param_2;
  *(int *)&this->_padding_ = param_3;
  *(int *)&this->_padding_ = param_4;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x461c4000;
  return;
}

// OnBeginGenerate @ 146562e90

void __thiscall USynthSound::OnBeginGenerate(USynthSound *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->OwningSynthComponent).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->OwningSynthComponent).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x000146562ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar3 + 0x668))(pUVar3,*(code **)(*(longlong *)pUVar3 + 0x668));
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6345570118323404839>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Components\\SynthComponent.cpp"
                     ,0x27,"OwningSynthComponent.IsValid()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnEndGenerate @ 146563130

void __thiscall USynthSound::OnEndGenerate(USynthSound *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwningSynthComponent).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwningSynthComponent).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x000146563163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x670))(pUVar2,*(code **)(*(longlong *)pUVar2 + 0x670));
    return;
  }
  return;
}

// OnGeneratePCMAudio @ 146563ad0

int __thiscall
USynthSound::OnGeneratePCMAudio
          (USynthSound *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  USynthComponent *this_00;
  FMemScope local_res8;
  FLLMScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res18,AudioSynthesis,false,None,Default,true);
  FMemScope::FMemScope(&local_res8,AudioSynthesis,true);
  iVar3 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_2 * 4,&param_1->AllocatorInstance,&param_1->ArrayNum,
                     &param_1->ArrayMax);
  memset((param_1->AllocatorInstance).Data + iVar2,0,(longlong)(param_2 * 4));
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwningSynthComponent).WeakPtr);
  if (bVar1) {
    this_00 = (USynthComponent *)FWeakObjectPtr::Get(&(this->OwningSynthComponent).WeakPtr);
    iVar3 = USynthComponent::OnGeneratePCMAudio
                      (this_00,(float *)(param_1->AllocatorInstance).Data,param_2);
  }
  FMemScope::~FMemScope(&local_res8);
  FLLMScope::~FLLMScope(local_res18);
  return iVar3;
}

// StartOnAudioDevice @ 146576fb0

void __thiscall USynthSound::StartOnAudioDevice(USynthSound *this,FAudioDevice *param_1)

{
  return;
}

// StaticRegisterNativesUSynthSound @ 146577a80

void __cdecl USynthSound::StaticRegisterNativesUSynthSound(void)

{
  return;
}

