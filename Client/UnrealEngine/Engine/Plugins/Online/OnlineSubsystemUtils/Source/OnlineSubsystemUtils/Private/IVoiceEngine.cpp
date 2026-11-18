// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 11

// ~IVoiceEngine @ 14ecdbd50

void __thiscall IVoiceEngine::~IVoiceEngine(IVoiceEngine *this)

{
  *this = (IVoiceEngine)&___7IVoiceEngine__6B_;
  return;
}

// DisconnectAllEndpoints @ 14ece2370

void __thiscall IVoiceEngine::DisconnectAllEndpoints(IVoiceEngine *this)

{
  return;
}

// GetIncomingAudioAmplitude @ 14ece7b60

float __thiscall
IVoiceEngine::GetIncomingAudioAmplitude(IVoiceEngine *this,FUniqueNetIdWrapper *param_1)

{
  return __real_bf800000;
}

// GetMicrophoneAmplitude @ 14ece7e70

float __thiscall IVoiceEngine::GetMicrophoneAmplitude(IVoiceEngine *this,int param_1)

{
  return __real_bf800000;
}

// GetMicrophoneOutput @ 14ece7f30

TSharedPtr<Audio::FPatchOutput,1> * __thiscall
IVoiceEngine::GetMicrophoneOutput
          (IVoiceEngine *this,TSharedPtr<Audio::FPatchOutput,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FPatchOutput *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetRemoteTalkerOutput @ 14ece88b0

TSharedPtr<Audio::FPatchOutput,1> * __thiscall
IVoiceEngine::GetRemoteTalkerOutput
          (IVoiceEngine *this,TSharedPtr<Audio::FPatchOutput,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FPatchOutput *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// PatchLocalTalkerOutputToEndpoint @ 14ecf3de0

bool __thiscall IVoiceEngine::PatchLocalTalkerOutputToEndpoint(IVoiceEngine *this,FString *param_1)

{
  return false;
}

// PatchRemoteTalkerOutputToEndpoint @ 14ecf3fe0

bool __thiscall
IVoiceEngine::PatchRemoteTalkerOutputToEndpoint(IVoiceEngine *this,FString *param_1,bool param_2)

{
  return false;
}

// ReadLocalVoiceData @ 14ecf7080

uint __thiscall
IVoiceEngine::ReadLocalVoiceData
          (IVoiceEngine *this,uint param_1,uchar *param_2,uint *param_3,ulong64 *param_4)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ecf7083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 0x80))();
  return uVar1;
}

// SetRemoteVoiceAmplitude @ 14ecf9cf0

uint __thiscall
IVoiceEngine::SetRemoteVoiceAmplitude(IVoiceEngine *this,FUniqueNetIdWrapper *param_1,float param_2)

{
  return 0xffffffff;
}

// SubmitRemoteVoiceData @ 14ecfc1f0

uint __thiscall
IVoiceEngine::SubmitRemoteVoiceData
          (IVoiceEngine *this,FUniqueNetIdWrapper *param_1,uchar *param_2,uint *param_3,
          ulong64 *param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  ulonglong uVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pTVar3 = (TReferenceControllerBase<1> *)0x0;
  uVar4 = (ulonglong)(param_1->Variant).TypeIndex;
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*this + 0x90);
  if (1 < uVar4) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4 + 4) == '\0') {
    bVar1 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8098327459864248868>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Public\\Online\\CoreOnline.h"
                       ,0x224,"IsV1()");
    pTVar5 = pTVar3;
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
  }
  else {
    if ((param_1->Variant).TypeIndex != '\0') {
      bVar1 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar1) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        uVar2 = (*UNRECOVERED_JUMPTABLE)();
        return uVar2;
      }
    }
    pTVar3 = (TReferenceControllerBase<1> *)(param_1->Variant)._padding_;
    pTVar5 = (TReferenceControllerBase<1> *)(param_1->Variant)._padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_14ecfc2ff;
  }
  bVar1 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar1) {
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
LAB_14ecfc2ff:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
                    /* WARNING: Could not recover jumptable at 0x00014ecfc332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(this,pTVar5,param_2,param_3);
  return uVar2;
}

