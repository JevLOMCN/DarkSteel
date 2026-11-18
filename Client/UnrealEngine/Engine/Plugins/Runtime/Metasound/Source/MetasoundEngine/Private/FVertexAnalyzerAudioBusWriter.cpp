// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 6

// FVertexAnalyzerAudioBusWriter @ 14b34b040

FVertexAnalyzerAudioBusWriter * __thiscall
Metasound::Engine::FVertexAnalyzerAudioBusWriter::FVertexAnalyzerAudioBusWriter
          (FVertexAnalyzerAudioBusWriter *this,FCreateAnalyzerParams *param_1)

{
  code *pcVar1;
  FAudioBusKey FVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FString *this_00;
  FVertexAnalyzerAudioBusWriter *pFVar7;
  FAudioDeviceManager *this_01;
  FAudioDevice *this_02;
  UAudioBusSubsystem *this_03;
  FPatchInput *pFVar8;
  wchar_t *_Str;
  wchar_t *_Str_00;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FPatchInput local_38;
  
  Frontend::FVertexAnalyzerBase::FVertexAnalyzerBase
            ((FVertexAnalyzerBase *)this,param_1->AnalyzerAddress,param_1->VertexDataReference);
  uVar5 = 0;
  this->_padding_ = (longlong)&___7FVertexAnalyzerAudioBusWriter_Engine_Metasound__6B_;
  (this->AudioBusPatchInput).OutputHandle.Object = (FPatchOutput *)0x0;
  (this->AudioBusPatchInput).OutputHandle.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AudioBusPatchInput).PushCallsCounter = 0;
  this_00 = ::FName::ToString(&param_1->AnalyzerAddress->AnalyzerMemberName,&local_48);
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  iVar4 = ::FString::ParseIntoArray(this_00,&local_58,L",",true);
  if (iVar4 == 2) {
    if (local_58.ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FVertexAnalyzerAudioBusWriter *)(*pcVar1)();
        return pFVar7;
      }
    }
    _Str_00 = L"";
    if (*(int *)(local_58.AllocatorInstance.Data + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)local_58.AllocatorInstance.Data;
    }
    uVar5 = _wtoi(_Str);
    if (local_58.ArrayNum < 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FVertexAnalyzerAudioBusWriter *)(*pcVar1)();
        return pFVar7;
      }
    }
    if (*(int *)(local_58.AllocatorInstance.Data + 0x18) != 0) {
      _Str_00 = *(wchar_t **)(local_58.AllocatorInstance.Data + 0x10);
    }
    uVar6 = _wtoi(_Str_00);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<701273884904652874>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\Analysis\\MetasoundVertexAnalyzerAudioBusWriter.cpp"
                       ,0x4a,"InAnalyzerMemberName.ParseIntoArray(Tokens, L\",\") == 2");
    uVar6 = uVar5;
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexAnalyzerAudioBusWriter *)(*pcVar1)();
      return pFVar7;
    }
  }
  DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  this_01 = FAudioDeviceManager::Get();
  if (this_01 != (FAudioDeviceManager *)0x0) {
    this_02 = FAudioDeviceManager::GetAudioDeviceRaw(this_01,uVar5);
    if (this_02 != (FAudioDevice *)0x0) {
      this_03 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>(this_02);
      FVar2.InstanceId = 0xffffffff;
      FVar2.ObjectId = uVar6;
      pFVar8 = UAudioBusSubsystem::AddPatchInputForAudioBus
                         (this_03,&local_38,FVar2,param_1->OperatorSettings->NumFramesPerBlock,1,
                          __real_3f800000);
      Audio::FPatchInput::operator=(&this->AudioBusPatchInput,pFVar8);
      Audio::FPatchInput::~FPatchInput(&local_38);
    }
  }
  return this;
}

// ~FVertexAnalyzerAudioBusWriter @ 14b351f30

void __thiscall
Metasound::Engine::FVertexAnalyzerAudioBusWriter::~FVertexAnalyzerAudioBusWriter
          (FVertexAnalyzerAudioBusWriter *this)

{
  undefined8 *puVar1;
  
  Audio::FPatchInput::~FPatchInput(&this->AudioBusPatchInput);
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  return;
}

// Execute @ 14b3a0c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Engine::FVertexAnalyzerAudioBusWriter::Execute(FVertexAnalyzerAudioBusWriter *this)

{
  int iVar1;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
            ((FAnyDataReference *)&this->_padding_,
             (TDataReadReference<Metasound::FAudioBuffer> *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)(local_28._8_8_ + 0x10) != *(int *)(local_28._8_8_ + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)(local_28._8_8_ + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(local_28._8_8_ + 0x10) != iVar1)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FPatchInput::PushAudio(&this->AudioBusPatchInput,*(float **)local_28._8_8_,iVar1);
  return;
}

// GetAnalyzerMemberName @ 14b3ac4d0

FName __cdecl
Metasound::Engine::FVertexAnalyzerAudioBusWriter::GetAnalyzerMemberName(uint param_1,uint param_2)

{
  bool bVar1;
  FName *pFVar2;
  uint in_register_0000000c;
  FName FVar3;
  int iVar4;
  ForAnyElementType FVar5;
  undefined1 *puVar6;
  longlong lVar7;
  int in_R8D;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FName local_res8;
  undefined1 local_res10 [8];
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FString local_68;
  FString local_58;
  FString local_48;
  
  FVar3.Number = in_register_0000000c;
  FVar3.ComparisonIndex.Value = param_1;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_58,param_2);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_48,in_R8D);
  lVar7 = 2;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_78,2,&local_6c);
  ConstructItems<FString,FString,int>(local_78.Data,&local_58,2);
  iVar4 = local_70;
  bVar1 = true;
  pFVar9 = local_78.Data + (longlong)local_70 * 0x10;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  FVar5.Data = local_78.Data;
  while( true ) {
    if (local_70 != iVar4) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar5.Data == pFVar9) break;
    if (bVar1) {
      bVar1 = false;
    }
    else {
      ::FString::AppendChars(&local_68,L",",1);
    }
    iVar8 = *(int *)(FVar5.Data + 8) + -1;
    if (*(int *)(FVar5.Data + 8) == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars(&local_68,*(wchar_t **)FVar5.Data,iVar8);
    FVar5.Data = FVar5.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_78.Data,local_70);
  puVar6 = &stack0xffffffffffffffc8;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
    puVar6 = &stack0xffffffffffffffc8;
  }
  do {
    lVar7 = lVar7 + -1;
    if (*(void **)(puVar6 + -0x10) != (void *)0x0) {
      FMemory::Free(*(void **)(puVar6 + -0x10));
    }
    puVar6 = puVar6 + -0x10;
  } while (lVar7 != 0);
  iVar4 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  pFVar2 = ::FName::FName(&local_res8,iVar4,(wchar_t *)local_68.Data.AllocatorInstance.Data,
                          FNAME_Add);
  *(FName *)FVar3 = *pFVar2;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return FVar3;
}

// GetAnalyzerName @ 14b3ac680

FName * __cdecl Metasound::Engine::FVertexAnalyzerAudioBusWriter::GetAnalyzerName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&AnalyzerName,"UE.Audio.AudioBusWriter");
      _Init_thread_footer(&::_TSS0);
      return &AnalyzerName;
    }
  }
  return &AnalyzerName;
}

// GetDataType @ 14b3aec50

FName * __cdecl Metasound::Engine::FVertexAnalyzerAudioBusWriter::GetDataType(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
                      ::__l2::TypeName,TDataReferenceTypeInfo<Metasound::FAudioBuffer>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
          ::__l2::TypeName;
}

