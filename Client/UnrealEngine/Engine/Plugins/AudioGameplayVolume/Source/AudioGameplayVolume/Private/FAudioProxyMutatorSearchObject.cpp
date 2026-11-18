// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 1

// SearchVolumes @ 14d9a9470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAudioProxyMutatorSearchObject::SearchVolumes
          (FAudioProxyMutatorSearchObject *this,
          TArray<UAudioGameplayVolumeProxy_*,TSizedDefaultAllocator<32>_> *param_1,
          FAudioProxyMutatorSearchResult *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  UAudioGameplayVolumeProxy *this_00;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong *plVar14;
  undefined1 auStack_f8 [32];
  char local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined4 local_d4;
  FScriptContainerElement *local_d0;
  uint local_c8 [2];
  TArray<UAudioGameplayVolumeProxy_*,TSizedDefaultAllocator<32>_> *local_c0;
  FScriptContainerElement *local_b8;
  undefined1 local_a8 [64];
  void *local_68;
  undefined4 local_60;
  EComponentPayload local_58;
  bool local_57;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_c0 = param_1;
  bVar7 = IsInAudioThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeSubsystem.cpp"
                         ,0x56,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Blue,"FAudioProxyMutatorSearchObject_SearchVolumes");
  if (CpuChannel->Enabled < 0) {
    local_d8 = '\0';
  }
  else {
    local_d8 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId87,"FAudioProxyMutatorSearchObject_SearchVolumes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeSubsystem.cpp"
               ,0x57);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId87);
  }
  FAudioProxyMutatorSearchResult::Reset(param_2);
  pFVar12 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  local_a8._32_8_ = 0;
  local_a8._40_4_ = 0;
  local_b8 = pFVar12 + (longlong)iVar1 * 8;
  local_a8._52_4_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = this->PayloadType;
  local_57 = this->bFilterPayload;
  local_a8._44_4_ = 0x80;
  local_a8._48_4_ = 0xffffffff;
  while( true ) {
    pFVar13 = local_b8;
    local_d0 = pFVar12;
    if (param_1->ArrayNum != iVar1) {
      local_d7 = 0;
      `TCheckedPointerIterator<UAudioGameplayVolumeProxy_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_d7);
    }
    cVar8 = local_d8;
    if (pFVar12 == pFVar13) break;
    plVar2 = *(longlong **)pFVar12;
    if ((((plVar2 != (longlong *)0x0) && (*(uint *)((longlong)plVar2 + 0x3c) == this->WorldID)) &&
        ((this->bFilterPayload == false ||
         ((this->PayloadType & *(EComponentPayload *)(plVar2 + 8)) != AGCP_None)))) &&
       (cVar8 = (**(code **)(*plVar2 + 0x2b0))(plVar2,&this->Location), cVar8 != '\0')) {
      if (this->bCollectMutators != false) {
        bVar7 = IsInAudioThread();
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInAudioThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeProxy.cpp"
                               ,0x6d,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar6 = plVar2[6];
        plVar11 = (longlong *)plVar2[5];
        plVar14 = plVar11 + (longlong)(int)lVar6 * 2;
        while( true ) {
          if ((int)plVar2[6] != (int)lVar6) {
            local_d6 = 0;
            `TCheckedPointerIterator<TSharedPtr<FProxyVolumeMutator,1>_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_d6);
          }
          pFVar12 = local_d0;
          param_1 = local_c0;
          if (plVar11 == plVar14) break;
          plVar3 = (longlong *)*plVar11;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 8))(plVar3,local_a8);
          }
          plVar11 = plVar11 + 2;
        }
      }
      local_d4 = (undefined4)plVar2[7];
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
                (&param_2->VolumeSet,local_c8,(bool *)&local_d4);
    }
    pFVar12 = pFVar12 + 8;
  }
  if ((this->bAffectedByLegacySystem == false) &&
     (bVar7 = FAudioDeviceHandle::IsValid(&this->AudioDeviceHandle), bVar7)) {
    bVar7 = FAudioDeviceHandle::IsValid(&this->AudioDeviceHandle);
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                           ,0x60,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FAudioDevice::GetDefaultAudioSettings
              ((this->AudioDeviceHandle).Device,this->WorldID,&param_2->ReverbSettings,
               &param_2->InteriorSettings);
  }
  if (this->bCollectMutators != false) {
    pFVar13 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    pFVar12 = pFVar13 + (longlong)iVar1 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<UAudioGameplayVolumeProxy_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_d5);
      }
      if (pFVar13 == pFVar12) break;
      this_00 = *(UAudioGameplayVolumeProxy **)pFVar13;
      if ((this_00 == (UAudioGameplayVolumeProxy *)0x0) ||
         (*(int *)&(param_2->VolumeSet).Elements.field_0x8 ==
          *(int *)&(param_2->VolumeSet).Elements.field_0x34)) {
LAB_14d9a978b:
        pFVar13 = pFVar13 + 8;
      }
      else {
        FVar4 = (param_2->VolumeSet).Hash.SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&(param_2->VolumeSet).Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar4;
        }
        iVar9 = *(int *)((longlong)FVar10 +
                        (ulonglong)((param_2->VolumeSet).HashSize - 1U & this_00->VolumeID) * 4);
        if (iVar9 == -1) goto LAB_14d9a978b;
        lVar6 = *(longlong *)&(param_2->VolumeSet).Elements;
        do {
          if (*(uint *)(lVar6 + (longlong)iVar9 * 0xc) == this_00->VolumeID) {
            UAudioGameplayVolumeProxy::GatherMutators
                      (this_00,(FAudioProxyMutatorPriorities *)local_a8,param_2);
            goto LAB_14d9a978b;
          }
          iVar9 = *(int *)(lVar6 + 4 + (longlong)iVar9 * 0xc);
        } while (iVar9 != -1);
        pFVar13 = pFVar13 + 8;
      }
    }
  }
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  if (cVar8 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

