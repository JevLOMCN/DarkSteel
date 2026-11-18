// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 2

// StartupModule @ 14b2e1050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::Engine::FModule::StartupModule(FModule *this)

{
  code *pcVar1;
  UAudioSettings *this_00;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  FModuleManager *pFVar5;
  FName *pFVar6;
  FMetaSoundAssetManager *this_01;
  FDocumentBuilderRegistry *this_02;
  INodeClassRegistry *pIVar7;
  FObjectReferencer *this_03;
  UClass *this_04;
  IMetasoundUObjectRegistry *pIVar8;
  TArray<FMetasoundFrontendInterfaceBinding,TSizedDefaultAllocator<32>_> *pTVar9;
  IVertexAnalyzerRegistry *pIVar10;
  FAnalyzerOutput *pFVar11;
  FLLMScope local_res10 [2];
  TUniquePtr<Metasound::Frontend::IMetaSoundAssetManager,TDefaultDelete<Metasound::Frontend::IMetaSoundAssetManager>_>
  local_res18;
  TUniquePtr<Metasound::Frontend::IDocumentBuilderRegistry,TDefaultDelete<Metasound::Frontend::IDocumentBuilderRegistry>_>
  local_res20;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  FName local_80;
  FObjectReferencer *local_78;
  FMemScope local_70;
  TArray<FMetasoundFrontendInterfaceBinding,TSizedDefaultAllocator<32>_> local_68;
  TArray<FMetasoundFrontendInterfaceBinding,TSizedDefaultAllocator<32>_> local_58;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  FName local_28 [2];
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_80 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_70,&local_80,true);
  pFVar5 = FModuleManager::Get();
  pFVar6 = ::FName::FName(&local_48,"MetasoundGraphCore");
  FModuleManager::LoadModuleChecked(pFVar5,*pFVar6);
  pFVar5 = FModuleManager::Get();
  pFVar6 = ::FName::FName(&local_40,"MetasoundFrontend");
  FModuleManager::LoadModuleChecked(pFVar5,*pFVar6);
  pFVar5 = FModuleManager::Get();
  pFVar6 = ::FName::FName(&local_38,"MetasoundStandardNodes");
  FModuleManager::LoadModuleChecked(pFVar5,*pFVar6);
  pFVar5 = FModuleManager::Get();
  pFVar6 = ::FName::FName(&local_30,"MetasoundGenerator");
  FModuleManager::LoadModuleChecked(pFVar5,*pFVar6);
  pFVar5 = FModuleManager::Get();
  pFVar6 = ::FName::FName(local_28,"WaveTable");
  FModuleManager::LoadModuleChecked(pFVar5,*pFVar6);
  this_01 = ::operator_new(0x198);
  local_res18.Ptr = (IMetaSoundAssetManager *)0x0;
  if (this_01 != (FMetaSoundAssetManager *)0x0) {
    memset(this_01,0,0x198);
    local_res18.Ptr =
         (IMetaSoundAssetManager *)FMetaSoundAssetManager::FMetaSoundAssetManager(this_01);
  }
  Frontend::IMetaSoundAssetManager::Initialize(&local_res18);
  if ((FMetaSoundAssetManager *)local_res18.Ptr != (FMetaSoundAssetManager *)0x0) {
    (**(code **)*local_res18.Ptr)();
  }
  this_02 = ::operator_new(0xe0);
  local_res20.Ptr = (IDocumentBuilderRegistry *)0x0;
  if (this_02 != (FDocumentBuilderRegistry *)0x0) {
    memset(this_02,0,0xe0);
    local_res20.Ptr =
         (IDocumentBuilderRegistry *)FDocumentBuilderRegistry::FDocumentBuilderRegistry(this_02);
  }
  Frontend::IDocumentBuilderRegistry::Initialize(&local_res20);
  if ((FDocumentBuilderRegistry *)local_res20.Ptr != (FDocumentBuilderRegistry *)0x0) {
    (**(code **)*local_res20.Ptr)(local_res20.Ptr,1);
  }
  pIVar7 = Frontend::INodeClassRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar7 + 0x10);
  this_03 = ::operator_new(0x50);
  local_78 = (FObjectReferencer *)0x0;
  if (this_03 != (FObjectReferencer *)0x0) {
    this_03->_padding_ = 0;
    this_03->_padding_ = 0;
    this_03->_padding_ = 0;
    (this_03->ObjectArrayCriticalSection).CriticalSection.Opaque1[0] = (void *)0x0;
    (this_03->ObjectArrayCriticalSection).CriticalSection.Opaque2[0] = 0;
    (this_03->ObjectArrayCriticalSection).CriticalSection.Opaque2[1] = 0;
    (this_03->ObjectArrayCriticalSection).CriticalSection.Opaque3[0] = (void *)0x0;
    (this_03->ObjectArrayCriticalSection).CriticalSection.Opaque3[1] = (void *)0x0;
    (this_03->ObjectArrayCriticalSection).CriticalSection.Opaque3[2] = (void *)0x0;
    (this_03->ObjectArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_03->ObjectArray).ArrayNum = 0;
    (this_03->ObjectArray).ArrayMax = 0;
    local_78 = FObjectReferencer::FObjectReferencer(this_03);
  }
  (*pcVar1)(pIVar7,&local_78);
  this_04 = Z_Construct_UClass_UAudioSettings_NoRegister();
  if ((this_04->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_04);
  }
  this_00 = (UAudioSettings *)(this_04->ClassDefaultObject).field0_0x0.DebugPtr;
  if (this_00 == (UAudioSettings *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundEngineModule.cpp"
                       ,0x6a,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UAudioSettings::RegisterParameterInterfaces(this_00);
  pIVar8 = IMetasoundUObjectRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar8 + 8);
  local_e8 = ::operator_new(8);
  if (local_e8 != (undefined8 *)0x0) {
    *local_e8 = &___7__TMetasoundUObjectRegistryEntry_VUMetaSoundBuilderDocument___Metasound__6B_;
  }
  (*pcVar1)(pIVar8,&local_e8);
  if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,1);
  }
  pIVar8 = IMetasoundUObjectRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar8 + 8);
  local_e0 = ::operator_new(8);
  if (local_e0 != (undefined8 *)0x0) {
    *local_e0 = &___7__TMetasoundUObjectRegistryEntry_VUMetaSoundPatch___Metasound__6B_;
  }
  (*pcVar1)(pIVar8,&local_e0);
  if (local_e0 != (undefined8 *)0x0) {
    (**(code **)*local_e0)(local_e0,1);
  }
  pIVar8 = IMetasoundUObjectRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar8 + 8);
  local_d8 = ::operator_new(8);
  if (local_d8 != (undefined8 *)0x0) {
    *local_d8 = &___7__TMetasoundUObjectRegistryEntry_VUMetaSoundSource___Metasound__6B_;
  }
  (*pcVar1)(pIVar8,&local_d8);
  if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,1);
  }
  RegisterDeprecatedInterfaces();
  RegisterInterfaces();
  pTVar9 = InputFormatMonoInterface::CreateBindings(&local_68);
  RegisterInterfaceBindings(pTVar9);
  DestructItems<FMetasoundFrontendInterfaceBinding,int>
            ((FMetasoundFrontendInterfaceBinding *)local_68.AllocatorInstance.Data,local_68.ArrayNum
            );
  if ((FMetasoundFrontendInterfaceBinding *)local_68.AllocatorInstance.Data !=
      (FMetasoundFrontendInterfaceBinding *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  pTVar9 = InputFormatStereoInterface::CreateBindings(&local_58);
  RegisterInterfaceBindings(pTVar9);
  DestructItems<FMetasoundFrontendInterfaceBinding,int>
            ((FMetasoundFrontendInterfaceBinding *)local_58.AllocatorInstance.Data,local_58.ArrayNum
            );
  if ((FMetasoundFrontendInterfaceBinding *)local_58.AllocatorInstance.Data !=
      (FMetasoundFrontendInterfaceBinding *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  Frontend::RegistrationPrivate::FRegistrationListBase::RegisterAll
            (&Frontend::RegistrationPrivate::FMetasound_MetasoundEngine_Registration::ModuleInfo,
             Head);
  pIVar10 = Frontend::IVertexAnalyzerRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar10 + 0x10);
  local_d0 = ::operator_new(8);
  if (local_d0 != (undefined8 *)0x0) {
    *local_d0 = &___7FFactory_FVertexAnalyzerAudioBuffer_Frontend_Metasound__6B_;
  }
  pFVar6 = Frontend::FVertexAnalyzerAudioBuffer::GetAnalyzerName();
  (*pcVar1)(pIVar10,*pFVar6,&local_d0);
  if (local_d0 != (undefined8 *)0x0) {
    (**(code **)*local_d0)(local_d0,1);
  }
  pIVar10 = Frontend::IVertexAnalyzerRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar10 + 0x10);
  local_c8 = ::operator_new(8);
  if (local_c8 != (undefined8 *)0x0) {
    *local_c8 = &___7FFactory_FVertexAnalyzerEnvelopeFollower_Frontend_Metasound__6B_;
  }
  pFVar6 = Frontend::FVertexAnalyzerEnvelopeFollower::GetAnalyzerName();
  (*pcVar1)(pIVar10,*pFVar6,&local_c8);
  if (local_c8 != (undefined8 *)0x0) {
    (**(code **)*local_c8)(local_c8,1);
  }
  pIVar10 = Frontend::IVertexAnalyzerRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar10 + 0x10);
  local_c0 = ::operator_new(8);
  if (local_c0 != (undefined8 *)0x0) {
    *local_c0 = &
                ___7FFactory___TVertexAnalyzerForwardValue_VFVertexAnalyzerForwardBool_Frontend_Metasound___N_Frontend_Metasound__6B_
    ;
  }
  pFVar6 = Frontend::FVertexAnalyzerForwardBool::GetAnalyzerName();
  (*pcVar1)(pIVar10,*pFVar6,&local_c0);
  if (local_c0 != (undefined8 *)0x0) {
    (**(code **)*local_c0)(local_c0,1);
  }
  pIVar10 = Frontend::IVertexAnalyzerRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar10 + 0x10);
  local_b8 = ::operator_new(8);
  if (local_b8 != (undefined8 *)0x0) {
    *local_b8 = &
                ___7FFactory___TVertexAnalyzerForwardValue_VFVertexAnalyzerForwardFloat_Frontend_Metasound__M_Frontend_Metasound__6B_
    ;
  }
  pFVar6 = Frontend::FVertexAnalyzerForwardFloat::GetAnalyzerName();
  (*pcVar1)(pIVar10,*pFVar6,&local_b8);
  if (local_b8 != (undefined8 *)0x0) {
    (**(code **)*local_b8)(local_b8,1);
  }
  pIVar10 = Frontend::IVertexAnalyzerRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar10 + 0x10);
  local_b0 = ::operator_new(8);
  if (local_b0 != (undefined8 *)0x0) {
    *local_b0 = &
                ___7FFactory___TVertexAnalyzerForwardValue_VFVertexAnalyzerForwardInt_Frontend_Metasound__H_Frontend_Metasound__6B_
    ;
  }
  pFVar6 = Frontend::FVertexAnalyzerForwardInt::GetAnalyzerName();
  (*pcVar1)(pIVar10,*pFVar6,&local_b0);
  if (local_b0 != (undefined8 *)0x0) {
    (**(code **)*local_b0)(local_b0,1);
  }
  pIVar10 = Frontend::IVertexAnalyzerRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar10 + 0x10);
  local_a8 = ::operator_new(8);
  if (local_a8 != (undefined8 *)0x0) {
    *local_a8 = &
                ___7FFactory___TVertexAnalyzerForwardValue_VFVertexAnalyzerForwardTime_Frontend_Metasound__VFTime_3__Frontend_Metasound__6B_
    ;
  }
  pFVar6 = Frontend::FVertexAnalyzerForwardTime::GetAnalyzerName();
  (*pcVar1)(pIVar10,*pFVar6,&local_a8);
  if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)(local_a8,1);
  }
  pIVar10 = Frontend::IVertexAnalyzerRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar10 + 0x10);
  local_a0 = ::operator_new(8);
  if (local_a0 != (undefined8 *)0x0) {
    *local_a0 = &
                ___7FFactory___TVertexAnalyzerForwardValue_VFVertexAnalyzerForwardString_Frontend_Metasound__VFString___Frontend_Metasound__6B_
    ;
  }
  pFVar6 = Frontend::FVertexAnalyzerForwardString::GetAnalyzerName();
  (*pcVar1)(pIVar10,*pFVar6,&local_a0);
  if (local_a0 != (undefined8 *)0x0) {
    (**(code **)*local_a0)(local_a0,1);
  }
  pIVar10 = Frontend::IVertexAnalyzerRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar10 + 0x10);
  local_98 = ::operator_new(8);
  if (local_98 != (undefined8 *)0x0) {
    *local_98 = &___7FFactory_FVertexAnalyzerTriggerDensity_Frontend_Metasound__6B_;
  }
  pFVar6 = Frontend::FVertexAnalyzerTriggerDensity::GetAnalyzerName();
  (*pcVar1)(pIVar10,*pFVar6,&local_98);
  if (local_98 != (undefined8 *)0x0) {
    (**(code **)*local_98)(local_98,1);
  }
  pIVar10 = Frontend::IVertexAnalyzerRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar10 + 0x10);
  local_90 = ::operator_new(8);
  if (local_90 != (undefined8 *)0x0) {
    *local_90 = &___7FFactory_FVertexAnalyzerTriggerToTime_Frontend_Metasound__6B_;
  }
  pFVar6 = Frontend::FVertexAnalyzerTriggerToTime::GetAnalyzerName();
  (*pcVar1)(pIVar10,*pFVar6,&local_90);
  if (local_90 != (undefined8 *)0x0) {
    (**(code **)*local_90)(local_90,1);
  }
  pIVar10 = Frontend::IVertexAnalyzerRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar10 + 0x10);
  local_88 = ::operator_new(8);
  if (local_88 != (undefined8 *)0x0) {
    *local_88 = &___7FFactory_FVertexAnalyzerAudioBusWriter_Engine_Metasound__6B_;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&AnalyzerName,"UE.Audio.AudioBusWriter");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (*pcVar1)(pIVar10,AnalyzerName,&local_88);
  if (local_88 != (undefined8 *)0x0) {
    (**(code **)*local_88)(local_88,1);
  }
  pFVar11 = Frontend::
            TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardFloat,float>::
            FOutputs::GetValue();
  FVar2 = pFVar11->Name;
  pFVar6 = Frontend::FVertexAnalyzerForwardFloat::GetAnalyzerName();
  FVar3 = *pFVar6;
  pFVar6 = GetMetasoundDataTypeName<float>();
  UMetasoundGeneratorHandle::RegisterPassthroughAnalyzerForType(*pFVar6,FVar3,FVar2);
  pFVar11 = Frontend::
            TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardInt,int>::
            FOutputs::GetValue();
  FVar2 = pFVar11->Name;
  pFVar6 = Frontend::FVertexAnalyzerForwardInt::GetAnalyzerName();
  FVar3 = *pFVar6;
  pFVar6 = GetMetasoundDataTypeName<int>();
  UMetasoundGeneratorHandle::RegisterPassthroughAnalyzerForType(*pFVar6,FVar3,FVar2);
  pFVar11 = Frontend::
            TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardBool,bool>::
            FOutputs::GetValue();
  FVar2 = pFVar11->Name;
  pFVar6 = Frontend::FVertexAnalyzerForwardBool::GetAnalyzerName();
  FVar3 = *pFVar6;
  pFVar6 = GetMetasoundDataTypeName<bool>();
  UMetasoundGeneratorHandle::RegisterPassthroughAnalyzerForType(*pFVar6,FVar3,FVar2);
  pFVar11 = Frontend::
            TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardString,FString>::
            FOutputs::GetValue();
  FVar2 = pFVar11->Name;
  pFVar6 = Frontend::FVertexAnalyzerForwardString::GetAnalyzerName();
  FVar3 = *pFVar6;
  pFVar6 = GetMetasoundDataTypeName<FString>();
  UMetasoundGeneratorHandle::RegisterPassthroughAnalyzerForType(*pFVar6,FVar3,FVar2);
  pFVar11 = Frontend::
            TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardTime,Metasound::FTime>
            ::FOutputs::GetValue();
  FVar2 = pFVar11->Name;
  pFVar6 = Frontend::FVertexAnalyzerForwardTime::GetAnalyzerName();
  FVar3 = *pFVar6;
  pFVar6 = GetMetasoundDataTypeName<Metasound::FTime>();
  UMetasoundGeneratorHandle::RegisterPassthroughAnalyzerForType(*pFVar6,FVar3,FVar2);
  pFVar11 = Frontend::FVertexAnalyzerTriggerToTime::FOutputs::GetValue();
  FVar2 = pFVar11->Name;
  pFVar6 = Frontend::FVertexAnalyzerTriggerToTime::GetAnalyzerName();
  FVar3 = *pFVar6;
  pFVar6 = GetMetasoundDataTypeName<Metasound::FTrigger>();
  UMetasoundGeneratorHandle::RegisterPassthroughAnalyzerForType(*pFVar6,FVar3,FVar2);
  if (4 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  FMemScope::~FMemScope(&local_70);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// ShutdownModule @ 14b2e1860

void __thiscall Metasound::Engine::FModule::ShutdownModule(FModule *this)

{
  Frontend::RegistrationPrivate::FRegistrationListBase::UnregisterAll
            (&Frontend::RegistrationPrivate::FMetasound_MetasoundEngine_Registration::ModuleInfo,
             Head);
  Frontend::IMetaSoundAssetManager::Deinitialize();
  Frontend::IDocumentBuilderRegistry::Deinitialize();
  return;
}

