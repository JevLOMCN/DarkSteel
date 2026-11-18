// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 3

// FProxyMutator_SubmixSend @ 14d99f150

FProxyMutator_SubmixSend * __thiscall
FProxyMutator_SubmixSend::FProxyMutator_SubmixSend(FProxyMutator_SubmixSend *this)

{
  FName local_res8;
  
  this->_padding_ = -1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FProxyVolumeMutator__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  ::FName::FName(&local_res8,L"MutatorBase");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8;
  this->_padding_ = (longlong)&___7FProxyMutator_SubmixSend__6B_;
  (this->SubmixSendSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubmixSendSettings).ArrayNum = 0;
  (this->SubmixSendSettings).ArrayMax = 0;
  ::FName::FName(&local_res8,L"SubmixSend");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8;
  return this;
}

// ~FProxyMutator_SubmixSend @ 14d9a0250

void __thiscall FProxyMutator_SubmixSend::~FProxyMutator_SubmixSend(FProxyMutator_SubmixSend *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<FAudioVolumeSubmixSendSettings,int>
            ((FAudioVolumeSubmixSendSettings *)(this->SubmixSendSettings).AllocatorInstance.Data,
             (this->SubmixSendSettings).ArrayNum);
  pFVar3 = (this->SubmixSendSettings).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d9a0298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// Apply @ 14d9a2d10

void __thiscall
FProxyMutator_SubmixSend::Apply
          (FProxyMutator_SubmixSend *this,FAudioProxyActiveSoundParams *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FSoundSubmixSendInfo *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FSoundSubmixSendInfo *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement FVar11;
  FSoundSubmixSendInfo *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  bVar7 = IsInAudioThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\SubmixSendVolumeComponent.cpp"
                         ,0x12,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar11 = (FScriptContainerElement)0x1;
  local_res10 = (FScriptContainerElement)0x1;
  if (((param_1->bListenerInVolume != false) || (param_1->bAllowSpatialization == false)) ||
     (param_1->bUsingWorldSettings != false)) {
    FVar11 = (FScriptContainerElement)0x0;
    local_res10 = (FScriptContainerElement)0x0;
  }
  iVar3 = (this->SubmixSendSettings).ArrayNum;
  if (0 < iVar3) {
    pFVar13 = (this->SubmixSendSettings).AllocatorInstance.Data;
    pFVar2 = pFVar13 + (longlong)iVar3 * 0x18;
    pFVar10 = pFVar13 + 0x10;
    while( true ) {
      if ((this->SubmixSendSettings).ArrayNum != iVar3) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FAudioVolumeSubmixSendSettings_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar13 == pFVar2) break;
      if (*pFVar13 == FVar11) {
        iVar4 = *(int *)pFVar10;
        pFVar12 = *(FSoundSubmixSendInfo **)(pFVar10 + -8);
        pFVar9 = pFVar12 + iVar4;
        while( true ) {
          if (*(int *)pFVar10 != iVar4) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FSoundSubmixSendInfo_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res20);
          }
          FVar11 = local_res10;
          if (pFVar12 == pFVar9) break;
          pFVar5 = (FSoundSubmixSendInfo *)(param_1->SoundSubmixSends).AllocatorInstance.Data;
          if (((pFVar5 <= pFVar12) && (pFVar12 < pFVar5 + (param_1->SoundSubmixSends).ArrayMax)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar8 = (param_1->SoundSubmixSends).ArrayNum;
          piVar1 = &(param_1->SoundSubmixSends).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x8b8,&(param_1->SoundSubmixSends).AllocatorInstance,piVar1);
          }
          (param_1->SoundSubmixSends).ArrayNum = iVar8 + 1;
          FSoundSubmixSendInfo::FSoundSubmixSendInfo
                    ((FSoundSubmixSendInfo *)
                     ((param_1->SoundSubmixSends).AllocatorInstance.Data + (longlong)iVar8 * 0xb8),
                     pFVar12);
          pFVar12 = pFVar12 + 1;
        }
      }
      pFVar13 = pFVar13 + 0x18;
      pFVar10 = pFVar10 + 0x18;
    }
  }
  return;
}

