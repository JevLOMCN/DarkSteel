// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// ~TThreadSingleton<FActorThreadContext> @ 14737d550

void __thiscall
TThreadSingleton<FActorThreadContext>::~TThreadSingleton<FActorThreadContext>
          (TThreadSingleton<FActorThreadContext> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FActorThreadContext> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_VFActorThreadContext____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FActorThreadContext>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FActorThreadContext>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FActorThreadContext>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// ~TThreadSingleton<FBlendPosesPerBoneFilterScratchArea> @ 1473d9be0

void __thiscall
TThreadSingleton<FBlendPosesPerBoneFilterScratchArea>::
~TThreadSingleton<FBlendPosesPerBoneFilterScratchArea>
          (TThreadSingleton<FBlendPosesPerBoneFilterScratchArea> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FBlendPosesPerBoneFilterScratchArea> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFBlendPosesPerBoneFilterScratchArea____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlendPosesPerBoneFilterScratchArea>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlendPosesPerBoneFilterScratchArea>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlendPosesPerBoneFilterScratchArea>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// ~TThreadSingleton<UE::Anim::Decompression::FGetBonePoseScratchArea> @ 1473d9c60

void __thiscall
TThreadSingleton<UE::Anim::Decompression::FGetBonePoseScratchArea>::
~TThreadSingleton<UE::Anim::Decompression::FGetBonePoseScratchArea>
          (TThreadSingleton<UE::Anim::Decompression::FGetBonePoseScratchArea> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<UE::Anim::Decompression::FGetBonePoseScratchArea> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TThreadSingleton_UFGetBonePoseScratchArea_Decompression_Anim_UE____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<UE::Anim::Decompression::FGetBonePoseScratchArea>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<UE::Anim::Decompression::FGetBonePoseScratchArea>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<UE::Anim::Decompression::FGetBonePoseScratchArea>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// operator() @ 1473dce00

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FBlendPosesPerBoneFilterScratchArea>::Get'::__l2::<lambda_1>::operator()
          (void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0xa0);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    pFVar2[8] = (FTlsAutoCleanup)0x0;
    pFVar2[9] = (FTlsAutoCleanup)0x0;
    pFVar2[10] = (FTlsAutoCleanup)0x0;
    pFVar2[0xb] = (FTlsAutoCleanup)0x0;
    pFVar2[0xc] = (FTlsAutoCleanup)0x0;
    pFVar2[0xd] = (FTlsAutoCleanup)0x0;
    pFVar2[0xe] = (FTlsAutoCleanup)0x0;
    pFVar2[0xf] = (FTlsAutoCleanup)0x0;
    pFVar2[0x10] = (FTlsAutoCleanup)0x0;
    pFVar2[0x11] = (FTlsAutoCleanup)0x0;
    pFVar2[0x12] = (FTlsAutoCleanup)0x0;
    pFVar2[0x13] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFBlendPosesPerBoneFilterScratchArea____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FBlendPosesPerBoneFilterScratchArea__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    pFVar2[8] = (FTlsAutoCleanup)0x0;
    pFVar2[9] = (FTlsAutoCleanup)0x0;
    pFVar2[10] = (FTlsAutoCleanup)0x0;
    pFVar2[0xb] = (FTlsAutoCleanup)0x0;
    pFVar2[0xc] = (FTlsAutoCleanup)0x0;
    pFVar2[0xd] = (FTlsAutoCleanup)0x0;
    pFVar2[0xe] = (FTlsAutoCleanup)0x0;
    pFVar2[0xf] = (FTlsAutoCleanup)0x0;
    pFVar2[0x10] = (FTlsAutoCleanup)0x0;
    pFVar2[0x11] = (FTlsAutoCleanup)0x0;
    pFVar2[0x12] = (FTlsAutoCleanup)0x0;
    pFVar2[0x13] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// operator() @ 1473dcee0

FTlsAutoCleanup * __thiscall
`TThreadSingleton<UE::Anim::Decompression::FGetBonePoseScratchArea>::Get'::__l2::<lambda_1>::
operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x80);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    pFVar2[8] = (FTlsAutoCleanup)0x0;
    pFVar2[9] = (FTlsAutoCleanup)0x0;
    pFVar2[10] = (FTlsAutoCleanup)0x0;
    pFVar2[0xb] = (FTlsAutoCleanup)0x0;
    pFVar2[0xc] = (FTlsAutoCleanup)0x0;
    pFVar2[0xd] = (FTlsAutoCleanup)0x0;
    pFVar2[0xe] = (FTlsAutoCleanup)0x0;
    pFVar2[0xf] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)
              &___7__TThreadSingleton_UFGetBonePoseScratchArea_Decompression_Anim_UE____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FGetBonePoseScratchArea_Decompression_Anim_UE__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    pFVar2[8] = (FTlsAutoCleanup)0x0;
    pFVar2[9] = (FTlsAutoCleanup)0x0;
    pFVar2[10] = (FTlsAutoCleanup)0x0;
    pFVar2[0xb] = (FTlsAutoCleanup)0x0;
    pFVar2[0xe] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0xf) = 0;
    *(undefined4 *)&pFVar2[0xf].field_0x4 = 0x80;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// ~TThreadSingleton<FBlendProfileScratchData> @ 147436280

void __thiscall
TThreadSingleton<FBlendProfileScratchData>::~TThreadSingleton<FBlendProfileScratchData>
          (TThreadSingleton<FBlendProfileScratchData> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FBlendProfileScratchData> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFBlendProfileScratchData____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlendProfileScratchData>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlendProfileScratchData>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlendProfileScratchData>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// operator() @ 14743aaf0

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FBlendProfileScratchData>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x1c0);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    memset(pFVar2 + 1,0,0x1b8);
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFBlendProfileScratchData____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FBlendProfileScratchData__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    pFVar2[8] = (FTlsAutoCleanup)0x0;
    pFVar2[9] = (FTlsAutoCleanup)0x0;
    pFVar2[10] = (FTlsAutoCleanup)0x0;
    pFVar2[0xb] = (FTlsAutoCleanup)0x0;
    pFVar2[0xc] = (FTlsAutoCleanup)0x0;
    pFVar2[0xd] = (FTlsAutoCleanup)0x0;
    pFVar2[0xf] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x10) = 0;
    *(undefined4 *)&pFVar2[0x10].field_0x4 = 8;
    pFVar2[0x12] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x13) = 0;
    *(undefined4 *)&pFVar2[0x13].field_0x4 = 8;
    pFVar2[0x18] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x19) = 0;
    *(undefined4 *)&pFVar2[0x19].field_0x4 = 8;
    pFVar2[0x22] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x23) = 0;
    *(undefined4 *)&pFVar2[0x23].field_0x4 = 8;
    pFVar2[0x2c] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x2d) = 0;
    *(undefined4 *)&pFVar2[0x2d].field_0x4 = 8;
    pFVar2[0x36] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x37) = 0;
    *(undefined4 *)&pFVar2[0x37].field_0x4 = 8;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// ~TThreadSingleton<UE::Anim::FCachedPoseThreadContext> @ 1474b4970

void __thiscall
TThreadSingleton<UE::Anim::FCachedPoseThreadContext>::
~TThreadSingleton<UE::Anim::FCachedPoseThreadContext>
          (TThreadSingleton<UE::Anim::FCachedPoseThreadContext> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<UE::Anim::FCachedPoseThreadContext> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFCachedPoseThreadContext_Anim_UE____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<UE::Anim::FCachedPoseThreadContext>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<UE::Anim::FCachedPoseThreadContext>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<UE::Anim::FCachedPoseThreadContext>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// operator() @ 1474b6ef0

FTlsAutoCleanup * __thiscall
`TThreadSingleton<UE::Anim::FCachedPoseThreadContext>::Get'::__l2::<lambda_1>::operator()
          (void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x11a0);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    memset(pFVar2 + 1,0,0x1198);
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFCachedPoseThreadContext_Anim_UE____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FCachedPoseThreadContext_Anim_UE__6B_;
    pFVar2[0x232] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x233) = 0;
    *(undefined4 *)&pFVar2[0x233].field_0x4 = 1;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// ~TThreadSingleton<FAnimTraceScratchBuffers> @ 147532ee0

void __thiscall
TThreadSingleton<FAnimTraceScratchBuffers>::~TThreadSingleton<FAnimTraceScratchBuffers>
          (TThreadSingleton<FAnimTraceScratchBuffers> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FAnimTraceScratchBuffers> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFAnimTraceScratchBuffers____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FAnimTraceScratchBuffers>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FAnimTraceScratchBuffers>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FAnimTraceScratchBuffers>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// ~TThreadSingleton<FBlendSpaceScratchData> @ 147532f60

void __thiscall
TThreadSingleton<FBlendSpaceScratchData>::~TThreadSingleton<FBlendSpaceScratchData>
          (TThreadSingleton<FBlendSpaceScratchData> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FBlendSpaceScratchData> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFBlendSpaceScratchData____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlendSpaceScratchData>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlendSpaceScratchData>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlendSpaceScratchData>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// ~TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea> @ 147532fe0

void __thiscall
TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>::
~TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>
          (TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFBuildRawPoseScratchArea_Anim_UE____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// ~TThreadSingleton<FSuspendCounter> @ 147533060

void __thiscall
TThreadSingleton<FSuspendCounter>::~TThreadSingleton<FSuspendCounter>
          (TThreadSingleton<FSuspendCounter> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FSuspendCounter> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_VFSuspendCounter____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSuspendCounter>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSuspendCounter>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSuspendCounter>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// operator() @ 14753a590

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FAnimTraceScratchBuffers>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x60);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    pFVar2[8] = (FTlsAutoCleanup)0x0;
    pFVar2[9] = (FTlsAutoCleanup)0x0;
    pFVar2[10] = (FTlsAutoCleanup)0x0;
    pFVar2[0xb] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFAnimTraceScratchBuffers____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FAnimTraceScratchBuffers__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    pFVar2[8] = (FTlsAutoCleanup)0x0;
    pFVar2[9] = (FTlsAutoCleanup)0x0;
    pFVar2[10] = (FTlsAutoCleanup)0x0;
    pFVar2[0xb] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// operator() @ 14753a630

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FBlendSpaceScratchData>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0xb0);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    memset(pFVar2 + 1,0,0xa8);
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFBlendSpaceScratchData____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FBlendSpaceScratchData__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[0x14] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x15) = 0;
    *(undefined4 *)&pFVar2[0x15].field_0x4 = 4;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// operator() @ 14753a6c0

FTlsAutoCleanup * __thiscall
`TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>::Get'::__l2::<lambda_1>::operator()
          (void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x30);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFBuildRawPoseScratchArea_Anim_UE____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FBuildRawPoseScratchArea_Anim_UE__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// ~TThreadSingleton<FEnsureParentsExistScratchArea> @ 1475a9570

void __thiscall
TThreadSingleton<FEnsureParentsExistScratchArea>::~TThreadSingleton<FEnsureParentsExistScratchArea>
          (TThreadSingleton<FEnsureParentsExistScratchArea> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FEnsureParentsExistScratchArea> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFEnsureParentsExistScratchArea____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FEnsureParentsExistScratchArea>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FEnsureParentsExistScratchArea>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FEnsureParentsExistScratchArea>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// ~TThreadSingleton<FPoseAssetEvalData> @ 1475a95f0

void __thiscall
TThreadSingleton<FPoseAssetEvalData>::~TThreadSingleton<FPoseAssetEvalData>
          (TThreadSingleton<FPoseAssetEvalData> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FPoseAssetEvalData> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFPoseAssetEvalData____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPoseAssetEvalData>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPoseAssetEvalData>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPoseAssetEvalData>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// operator() @ 1475ac340

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FEnsureParentsExistScratchArea>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x20);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFEnsureParentsExistScratchArea____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FEnsureParentsExistScratchArea__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// operator() @ 1475ac3c0

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FPoseAssetEvalData>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x50);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    pFVar2[8] = (FTlsAutoCleanup)0x0;
    pFVar2[9] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFPoseAssetEvalData____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FPoseAssetEvalData__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    pFVar2[8] = (FTlsAutoCleanup)0x0;
    pFVar2[9] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// ~TThreadSingleton<FBoneContainerScratchArea> @ 147689c80

void __thiscall
TThreadSingleton<FBoneContainerScratchArea>::~TThreadSingleton<FBoneContainerScratchArea>
          (TThreadSingleton<FBoneContainerScratchArea> *this)

{
  code *pcVar1;
  bool bVar2;
  TThreadSingleton<FBoneContainerScratchArea> *pTVar3;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_UFBoneContainerScratchArea____6B_;
  if (`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBoneContainerScratchArea>::GetTlsSlot(void)'
      ::__l2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TlsGetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBoneContainerScratchArea>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (pTVar3 == this) {
    TlsSetValue(`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBoneContainerScratchArea>::GetTlsSlot(void)'
                ::__l2::TlsSlot,(LPVOID)0x0);
  }
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

// operator() @ 14768b7b0

FTlsAutoCleanup * __thiscall
`TThreadSingleton<FBoneContainerScratchArea>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x20);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFBoneContainerScratchArea____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FBoneContainerScratchArea__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

