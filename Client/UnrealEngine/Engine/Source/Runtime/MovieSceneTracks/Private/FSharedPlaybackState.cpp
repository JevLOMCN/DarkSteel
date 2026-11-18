// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// FindCapability<UE::MovieScene::FCameraCutPlaybackCapability> @ 146889a30

FCameraCutPlaybackCapability * __thiscall
UE::MovieScene::FSharedPlaybackState::FindCapability<UE::MovieScene::FCameraCutPlaybackCapability>
          (FSharedPlaybackState *this)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  FCameraCutPlaybackCapability *pFVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  byte local_res10;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    local_res8[0] = bVar5;
    `UE::MovieScene::FSharedPlaybackState::
    FindCapability<UE::MovieScene::FCameraCutPlaybackCapability>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  FCameraCutPlaybackCapability::GetPlaybackCapabilityID();
  uVar2 = *(uint *)&(this->Capabilities).field_0x10;
  uVar6 = 1 << (local_res10 & 0x1f);
  if ((uVar6 & uVar2) != 0) {
    uVar2 = uVar6 - 1 & uVar2;
    uVar8 = (ulonglong)uVar2 - ((ulonglong)(uVar2 >> 1) & 0x5555555555555555);
    uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
    uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    bVar4 = (byte)(uVar8 >> 0x38);
    if (bVar4 == 0xff) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0xfd,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FCameraCutPlaybackCapability *)(*pcVar3)();
        return pFVar7;
      }
    }
    if ((byte)(this->Capabilities).field_0xc <= bVar4) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Num",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x21b,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FCameraCutPlaybackCapability *)(*pcVar3)();
        return pFVar7;
      }
    }
    lVar10 = (uVar8 >> 0x38) * 0x10 + *(longlong *)&this->Capabilities;
    if (*(ushort *)(lVar10 + 8) == 0xffff) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(longlong *)&this->Capabilities + (ulonglong)*(ushort *)(lVar10 + 8);
    }
    pFVar7 = (FCameraCutPlaybackCapability *)((ulonglong)*(byte *)(lVar10 + 0xd) + lVar9);
    if (pFVar7 != (FCameraCutPlaybackCapability *)0x0) {
      cVar1 = *(char *)(lVar10 + 0xe);
      if (cVar1 == '\0') {
        return pFVar7;
      }
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        return (FCameraCutPlaybackCapability *)*pFVar7;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x30,L"Unexpected playback capability storage mode");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FCameraCutPlaybackCapability *)(*pcVar3)();
        return pFVar7;
      }
    }
  }
  return (FCameraCutPlaybackCapability *)0x0;
}

// operator() @ 1504f3bc0

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::
FindCapability<UE::MovieScene::FViewportSettingsPlaybackCapability>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220256>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220256>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::FViewportSettingsPlaybackCapability*___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::FindCapability<UE::MovieScene::FViewportSettingsPlaybackCapability>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f5350

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::FindCapability<UE::MovieScene::FCameraCutPlaybackCapability>'
::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220256>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220256>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::FCameraCutPlaybackCapability*___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::FindCapability<UE::MovieScene::FCameraCutPlaybackCapability>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

