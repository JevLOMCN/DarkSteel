// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 7

// FSubmixEffectSubmixEQ @ 14653e5f0

FSubmixEffectSubmixEQ * __thiscall
FSubmixEffectSubmixEQ::FSubmixEffectSubmixEQ(FSubmixEffectSubmixEQ *this)

{
  FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this);
  *(undefined4 *)&this->field_0x70 = 0xffffffff;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined ***)this = &___7FSubmixEffectSubmixEQ__6B_;
  *(undefined4 *)&this->field_0x80 = 0;
  *(undefined4 *)&this->field_0x84 = 0xffffffff;
  (this->FiltersPerChannel).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FiltersPerChannel).ArrayNum = 0;
  (this->FiltersPerChannel).ArrayMax = 0;
  this->SampleRate = 0.0;
  this->NumOutputChannels = 2.0;
  (this->PendingSettings).bChanged = false;
  (this->PendingSettings).CurrentParams.EQBands.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PendingSettings).CurrentParams.EQBands.ArrayNum = 0;
  (this->PendingSettings).CurrentParams.EQBands.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->PendingSettings).CritSect,4000);
  (this->GameThreadEQSettings).EQBands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameThreadEQSettings).EQBands.ArrayNum = 0;
  (this->GameThreadEQSettings).EQBands.ArrayMax = 0;
  (this->RenderThreadEQSettings).EQBands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderThreadEQSettings).EQBands.ArrayNum = 0;
  (this->RenderThreadEQSettings).EQBands.ArrayMax = 0;
  this->ScratchInBuffer[0] = 0.0;
  this->ScratchInBuffer[1] = 0.0;
  this->ScratchOutBuffer[0] = 0.0;
  this->ScratchOutBuffer[1] = 0.0;
  return this;
}

// Init @ 14655ddc0

void __thiscall
FSubmixEffectSubmixEQ::Init(FSubmixEffectSubmixEQ *this,FSoundEffectSubmixInitData *param_1)

{
  TArray<FSubmixEffectSubmixEQ::FEQ,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement local_38 [8];
  void *local_30;
  undefined8 local_28;
  
  pTVar1 = &this->FiltersPerChannel;
  this->SampleRate = param_1->SampleRate;
  this->NumOutputChannels = 8.0;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_38[0] = (FScriptContainerElement)0x1;
  local_30 = (void *)0x0;
  local_28 = 0;
  if (((pFVar2 <= local_38) &&
      (local_38 < pFVar2 + (longlong)(this->FiltersPerChannel).ArrayMax * 0x18)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->FiltersPerChannel).ArrayNum;
  if (iVar5 == (this->FiltersPerChannel).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar1->AllocatorInstance,&(this->FiltersPerChannel).ArrayMax);
  }
  lVar6 = (longlong)iVar5;
  (this->FiltersPerChannel).ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  pFVar2[lVar6 * 0x18] = local_38[0];
  *(undefined8 *)(pFVar2 + lVar6 * 0x18 + 8) = 0;
  *(void **)(pFVar2 + lVar6 * 0x18 + 8) = local_30;
  local_30 = (void *)0x0;
  *(undefined4 *)(pFVar2 + lVar6 * 0x18 + 0x10) = (undefined4)local_28;
  *(undefined4 *)(pFVar2 + lVar6 * 0x18 + 0x14) = local_28._4_4_;
  local_28 = 0;
  DestructItems<Audio::FBiquadFilter,int>((FBiquadFilter *)0x0,0);
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_38[0] = (FScriptContainerElement)0x1;
  local_30 = (void *)0x0;
  local_28 = 0;
  if (((pFVar2 <= local_38) &&
      (local_38 < pFVar2 + (longlong)(this->FiltersPerChannel).ArrayMax * 0x18)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->FiltersPerChannel).ArrayNum;
  if (iVar5 == (this->FiltersPerChannel).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar1->AllocatorInstance,&(this->FiltersPerChannel).ArrayMax);
  }
  lVar6 = (longlong)iVar5;
  (this->FiltersPerChannel).ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  pFVar2[lVar6 * 0x18] = local_38[0];
  *(undefined8 *)(pFVar2 + lVar6 * 0x18 + 8) = 0;
  *(void **)(pFVar2 + lVar6 * 0x18 + 8) = local_30;
  local_30 = (void *)0x0;
  *(undefined4 *)(pFVar2 + lVar6 * 0x18 + 0x10) = (undefined4)local_28;
  *(undefined4 *)(pFVar2 + lVar6 * 0x18 + 0x14) = local_28._4_4_;
  local_28 = 0;
  DestructItems<Audio::FBiquadFilter,int>((FBiquadFilter *)0x0,0);
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_38[0] = (FScriptContainerElement)0x1;
  local_30 = (void *)0x0;
  local_28 = 0;
  if (((pFVar2 <= local_38) &&
      (local_38 < pFVar2 + (longlong)(this->FiltersPerChannel).ArrayMax * 0x18)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->FiltersPerChannel).ArrayNum;
  if (iVar5 == (this->FiltersPerChannel).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar1->AllocatorInstance,&(this->FiltersPerChannel).ArrayMax);
  }
  lVar6 = (longlong)iVar5;
  (this->FiltersPerChannel).ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  pFVar2[lVar6 * 0x18] = local_38[0];
  *(undefined8 *)(pFVar2 + lVar6 * 0x18 + 8) = 0;
  *(void **)(pFVar2 + lVar6 * 0x18 + 8) = local_30;
  local_30 = (void *)0x0;
  *(undefined4 *)(pFVar2 + lVar6 * 0x18 + 0x10) = (undefined4)local_28;
  *(undefined4 *)(pFVar2 + lVar6 * 0x18 + 0x14) = local_28._4_4_;
  local_28 = 0;
  DestructItems<Audio::FBiquadFilter,int>((FBiquadFilter *)0x0,0);
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_38[0] = (FScriptContainerElement)0x1;
  local_30 = (void *)0x0;
  local_28 = 0;
  if (((pFVar2 <= local_38) &&
      (local_38 < pFVar2 + (longlong)(this->FiltersPerChannel).ArrayMax * 0x18)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->FiltersPerChannel).ArrayNum;
  if (iVar5 == (this->FiltersPerChannel).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar1->AllocatorInstance,&(this->FiltersPerChannel).ArrayMax);
  }
  lVar6 = (longlong)iVar5;
  (this->FiltersPerChannel).ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  pFVar2[lVar6 * 0x18] = local_38[0];
  *(undefined8 *)(pFVar2 + lVar6 * 0x18 + 8) = 0;
  *(void **)(pFVar2 + lVar6 * 0x18 + 8) = local_30;
  local_30 = (void *)0x0;
  *(undefined4 *)(pFVar2 + lVar6 * 0x18 + 0x10) = (undefined4)local_28;
  *(undefined4 *)(pFVar2 + lVar6 * 0x18 + 0x14) = local_28._4_4_;
  local_28 = 0;
  DestructItems<Audio::FBiquadFilter,int>((FBiquadFilter *)0x0,0);
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  this->bEQSettingsSet = false;
  return;
}

// OnPresetChanged @ 1465644f0

void __thiscall FSubmixEffectSubmixEQ::OnPresetChanged(FSubmixEffectSubmixEQ *this)

{
  undefined1 *lpCriticalSection;
  int *piVar1;
  FSubmixEffectSubmixEQSettings *pFVar2;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  int iVar3;
  int iVar4;
  void *_Src;
  bool bVar5;
  bool bVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  ForAnyElementType FVar9;
  ForAnyElementType *pFVar10;
  longlong lVar11;
  undefined4 local_res8 [2];
  FMemScope local_res10;
  ForAnyElementType local_58;
  int local_50;
  int iStack_4c;
  FSubmixEffectSubmixEQSettings local_48;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  FVar9.Data = (FScriptContainerElement *)0x0;
  local_res8[0] = 0;
  FLLMScope::FLLMScope((FLLMScope *)local_res8,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AudioMixer,true);
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4c);
  if (pUVar7 != (UObject *)0x0) {
    pUVar8 = USubmixEffectSubmixEQPreset::StaticClass();
    iVar3 = (int)pUVar8->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar8->_padding_)) {
      lpCriticalSection = &pUVar7[2].field_0x18;
      bVar5 = true;
      bVar6 = false;
      if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_50 = *(int *)&pUVar7[3].field_0x20;
      lVar11 = (longlong)local_50;
      _Src = *(void **)&pUVar7[3].field_0x18;
      local_58.Data = (FScriptContainerElement *)0x0;
      if (local_50 == 0) {
        iStack_4c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,local_50,0,&local_58,local_50,&iStack_4c);
        memcpy(local_58.Data,_Src,lVar11 << 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar10 = &local_58;
      FVar9.Data = local_58.Data;
      goto LAB_146564624;
    }
  }
  bVar5 = false;
  bVar6 = true;
  local_30 = 0;
  pFVar10 = &local_38;
LAB_146564624:
  pFVar10->Data = (FScriptContainerElement *)0x0;
  local_48.EQBands.AllocatorInstance.Data = FVar9.Data;
  local_48.EQBands.ArrayNum = *(int *)&pFVar10[1].Data;
  local_48.EQBands.ArrayMax = *(int *)((longlong)&pFVar10[1].Data + 4);
  pFVar10[1].Data = (FScriptContainerElement *)0x0;
  if (bVar6) {
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  if ((bVar5) && (local_58.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data);
  }
  pFVar2 = &this->GameThreadEQSettings;
  bVar6 = ::IsEqual(pFVar2,&local_48);
  iVar3 = local_48.EQBands.ArrayNum;
  FVar9.Data = local_48.EQBands.AllocatorInstance.Data;
  if (!bVar6) {
    if (pFVar2 != &local_48) {
      lVar11 = (longlong)local_48.EQBands.ArrayNum;
      piVar1 = &(this->GameThreadEQSettings).EQBands.ArrayMax;
      iVar4 = *piVar1;
      (this->GameThreadEQSettings).EQBands.ArrayNum = local_48.EQBands.ArrayNum;
      if ((local_48.EQBands.ArrayNum == 0) && (iVar4 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,local_48.EQBands.ArrayNum,iVar4,(ForAnyElementType *)pFVar2,
                   local_48.EQBands.ArrayNum,piVar1);
        if (iVar3 != 0) {
          memcpy((pFVar2->EQBands).AllocatorInstance.Data,FVar9.Data,lVar11 << 4);
        }
      }
    }
    lpCriticalSection_00 = &(this->PendingSettings).CritSect;
    if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    (this->PendingSettings).bChanged = true;
    FSubmixEffectSubmixEQSettings::operator=(&(this->PendingSettings).CurrentParams,pFVar2);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope((FLLMScope *)local_res8);
  return;
}

// OnProcessAudio @ 146565370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSubmixEffectSubmixEQ::OnProcessAudio
          (FSubmixEffectSubmixEQ *this,FSoundEffectSubmixInputData *param_1,
          FSoundEffectSubmixOutputData *param_2)

{
  float fVar1;
  undefined4 uVar2;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixEQ> FVar12;
  longlong lVar13;
  FName FVar14;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  FLLMScope local_res18 [2];
  int local_res20;
  uint local_d8;
  FColor_u_0 local_c8;
  uint local_c4;
  uint local_c0;
  int local_bc;
  uint local_b8;
  TArray<float,TAlignedHeapAllocator<16>_> *local_b0;
  FName local_a8;
  FScriptContainerElement *local_a0;
  FName local_98;
  FName local_90;
  TArray<float,TAlignedHeapAllocator<16>_> *local_80;
  longlong local_78;
  longlong local_70;
  FMemScope local_68;
  FName local_60 [4];
  
  FLLMScope::FLLMScope(local_res18,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_68,AudioMixer,true);
  if (__CsvProfilerStat99 == false) {
    FCsvProfilerTrace::OutputInlineStat("SubmixEQ",_GCsvCategory_Audio.Index);
    __CsvProfilerStat99 = true;
  }
  uVar20 = _GCsvCategory_Audio.Index;
  local_b8 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("SubmixEQ",_GCsvCategory_Audio.Index,"CSV_SubmixEQ");
  FVar12 = StatPtr_STAT_AudioMixerSubmixEQ;
  if (StatPtr_STAT_AudioMixerSubmixEQ == (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixEQ>)0x0)
  {
    pFVar11 = ::FName::FName(local_60,"STAT_AudioMixerSubmixEQ");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixEQ>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSubmixEQ,*pFVar11,
                        L"Submix EQ","STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar12;
  bVar6 = false;
  bVar5 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  bVar9 = false;
  bVar8 = false;
  if ((FVar14.ComparisonIndex.Value.Value != 0) || (FVar14.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_a8.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Effects\\AudioMixerSubmixEffectEQ.cpp"
                   ,100);
        bVar6 = true;
        bVar5 = true;
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_98 = FVar14;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar8 = true;
      goto LAB_146565587;
    }
  }
  bVar6 = bVar9;
  bVar5 = bVar8;
  bVar8 = false;
  local_98 = local_90;
  FVar14 = local_90;
LAB_146565587:
  UpdateParameters(this,param_1->NumChannels);
  pTVar15 = param_1->AudioBuffer;
  pTVar3 = param_2->AudioBuffer;
  local_b0 = pTVar15;
  local_80 = pTVar3;
  if ((this->bEQSettingsSet == false) || ((this->RenderThreadEQSettings).EQBands.ArrayNum < 1)) {
    iVar10 = pTVar15->ArrayNum;
    uVar18 = 0;
    if (0 < iVar10) {
      lVar19 = 0;
      do {
        uVar21 = 0;
        if ((int)uVar18 < iVar10) {
          uVar21 = ~uVar18 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar2 = *(undefined4 *)((pTVar15->AllocatorInstance).Data + lVar19);
        uVar21 = 0;
        if ((int)uVar18 < pTVar3->ArrayNum) {
          uVar21 = ~uVar18 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar18 = uVar18 + 1;
        *(undefined4 *)((pTVar3->AllocatorInstance).Data + lVar19) = uVar2;
        lVar19 = lVar19 + 4;
        iVar10 = pTVar15->ArrayNum;
      } while ((int)uVar18 < iVar10);
    }
  }
  else {
    local_d8 = 0;
    iVar10 = param_1->NumChannels / 2;
    lVar19 = (longlong)iVar10;
    if (0 < iVar10) {
      lVar13 = 0;
      do {
        uVar20 = 0;
        if ((int)local_d8 < (this->FiltersPerChannel).ArrayNum) {
          uVar20 = ~local_d8 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar16 = (this->FiltersPerChannel).AllocatorInstance.Data;
        local_bc = local_d8 * 2;
        local_res20 = 0;
        local_a0 = pFVar16;
        if (0 < param_1->NumFrames) {
          do {
            uVar21 = local_res20 * param_1->NumChannels + local_bc;
            uVar20 = ~uVar21 >> 0x1f;
            uVar18 = 0;
            if ((int)uVar21 < pTVar15->ArrayNum) {
              uVar18 = uVar20;
            }
            local_c4 = uVar20;
            if ((uVar18 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar18 = uVar21 + 1;
            local_78 = (longlong)(int)uVar21;
            local_c0 = ~uVar18 >> 0x1f;
            this->ScratchInBuffer[0] = *(float *)((pTVar15->AllocatorInstance).Data + local_78 * 4);
            uVar17 = 0;
            if ((int)uVar18 < pTVar15->ArrayNum) {
              uVar17 = local_c0;
            }
            if ((uVar17 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar7 = local_a0;
            uVar17 = 0;
            local_70 = (longlong)(int)uVar18;
            this->ScratchInBuffer[1] = *(float *)((pTVar15->AllocatorInstance).Data + local_70 * 4);
            iVar10 = *(int *)(pFVar16 + lVar13 + 0x10);
            if (0 < iVar10) {
              lVar22 = 0;
              do {
                uVar20 = 0;
                if ((int)uVar17 < *(int *)(pFVar7 + lVar13 + 0x10)) {
                  uVar20 = ~uVar17 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                Audio::FBiquadFilter::ProcessAudioFrame
                          ((FBiquadFilter *)(*(longlong *)(pFVar7 + lVar13 + 8) + lVar22),
                           this->ScratchInBuffer,this->ScratchOutBuffer);
                uVar17 = uVar17 + 1;
                this->ScratchInBuffer[0] = this->ScratchOutBuffer[0];
                lVar22 = lVar22 + 0x30;
                this->ScratchInBuffer[1] = this->ScratchOutBuffer[1];
                pFVar16 = local_a0;
                uVar20 = local_c4;
              } while ((int)uVar17 < iVar10);
            }
            pTVar15 = local_80;
            fVar1 = this->ScratchOutBuffer[0];
            uVar18 = 0;
            if ((int)uVar21 < local_80->ArrayNum) {
              uVar18 = uVar20;
            }
            lVar22 = local_78;
            if (uVar18 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              lVar22 = (longlong)(int)uVar21;
              if (bVar9) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            *(float *)((pTVar15->AllocatorInstance).Data + lVar22 * 4) = fVar1;
            fVar1 = this->ScratchOutBuffer[1];
            uVar20 = 0;
            if ((int)(uVar21 + 1) < pTVar15->ArrayNum) {
              uVar20 = local_c0;
            }
            lVar22 = local_70;
            if (uVar20 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              lVar22 = (longlong)(int)(uVar21 + 1);
              if (bVar9) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            local_res20 = local_res20 + 1;
            *(float *)((pTVar15->AllocatorInstance).Data + lVar22 * 4) = fVar1;
            pTVar15 = local_b0;
          } while (local_res20 < param_1->NumFrames);
        }
        local_d8 = local_d8 + 1;
        lVar13 = lVar13 + 0x18;
        lVar19 = lVar19 + -1;
        FVar14 = local_98;
        uVar20 = local_b8;
      } while (lVar19 != 0);
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  FCsvProfiler::EndStat("SubmixEQ",uVar20);
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// SetParameters @ 1465739d0

bool __thiscall
FSubmixEffectSubmixEQ::SetParameters(FSubmixEffectSubmixEQ *this,FAudioEffectParameters *param_1)

{
  int *piVar1;
  FSubmixEffectSubmixEQSettings *pFVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ForAnyElementType _Src;
  int iVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  FSubmixEffectSubmixEQSettings local_b8;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  uint uStack_9c;
  
  fVar9 = __real_40fe147b;
  fVar8 = __real_469c4000;
  fVar7 = __real_41a00000;
  fVar6 = __real_40000000;
  fVar17 = __real_3dcccccd;
  fVar5 = __real_3a83126f;
  fVar4 = __real_322bcc77;
  uStack_9c = uStack_9c | 1;
  local_a8 = *(float *)(param_1 + 2);
  if (__real_469c4000 <= *(float *)(param_1 + 2)) {
    local_a8 = __real_469c4000;
  }
  fStack_a4 = *(float *)(param_1 + 3);
  if (__real_40000000 <= *(float *)(param_1 + 3)) {
    fStack_a4 = __real_40000000;
  }
  if (local_a8 <= __real_41a00000) {
    local_a8 = __real_41a00000;
  }
  if (fStack_a4 <= __real_3dcccccd) {
    fStack_a4 = __real_3dcccccd;
  }
  fVar15 = *(float *)&param_1[2].field_0x4;
  if (__real_40fe147b <= *(float *)&param_1[2].field_0x4) {
    fVar15 = __real_40fe147b;
  }
  local_b8.EQBands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (fVar15 <= __real_3a83126f) {
    fVar15 = __real_3a83126f;
  }
  local_b8.EQBands.ArrayNum = 0;
  local_b8.EQBands.ArrayMax = 0;
  if (fVar15 <= __real_322bcc77) {
    fVar15 = __real_322bcc77;
  }
  fStack_a0 = logf(fVar15);
  fVar15 = __real_410af967;
  fStack_a0 = fStack_a0 * __real_410af967;
  iVar13 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,(ForAnyElementType *)&local_b8,&local_b8.EQBands.ArrayMax);
  *(ulonglong *)(local_b8.EQBands.AllocatorInstance.Data + (longlong)iVar13 * 0x10) =
       CONCAT44(fStack_a4,local_a8);
  *(ulonglong *)(local_b8.EQBands.AllocatorInstance.Data + (longlong)iVar13 * 0x10 + 8) =
       CONCAT44(uStack_9c,fStack_a0);
  uStack_9c = uStack_9c | 1;
  fStack_a4 = *(float *)&param_1[4].field_0x4;
  if (fVar6 <= *(float *)&param_1[4].field_0x4) {
    fStack_a4 = fVar6;
  }
  local_a8 = *(float *)&param_1[3].field_0x4;
  if (fVar8 <= *(float *)&param_1[3].field_0x4) {
    local_a8 = fVar8;
  }
  if (fStack_a4 <= fVar17) {
    fStack_a4 = fVar17;
  }
  if (local_a8 <= fVar7) {
    local_a8 = fVar7;
  }
  fVar16 = *(float *)(param_1 + 4);
  if (fVar9 <= *(float *)(param_1 + 4)) {
    fVar16 = fVar9;
  }
  if (fVar16 <= fVar5) {
    fVar16 = fVar5;
  }
  if (fVar16 <= fVar4) {
    fVar16 = fVar4;
  }
  local_b8.EQBands.ArrayNum = iVar13 + 1;
  fStack_a0 = logf(fVar16);
  fStack_a0 = fStack_a0 * fVar15;
  if (((local_b8.EQBands.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a8) &&
      ((FScriptContainerElement *)&local_a8 <
       local_b8.EQBands.AllocatorInstance.Data + (longlong)local_b8.EQBands.ArrayMax * 0x10)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar3 = (code *)swi(3);
    uVar12 = (*pcVar3)();
    return (bool)uVar12;
  }
  if (local_b8.EQBands.ArrayNum == local_b8.EQBands.ArrayMax) {
    local_b8.EQBands.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x410,(ForAnyElementType *)&local_b8,&local_b8.EQBands.ArrayMax);
  }
  *(ulonglong *)
   (local_b8.EQBands.AllocatorInstance.Data + (longlong)local_b8.EQBands.ArrayNum * 0x10) =
       CONCAT44(fStack_a4,local_a8);
  *(ulonglong *)
   (local_b8.EQBands.AllocatorInstance.Data + (longlong)local_b8.EQBands.ArrayNum * 0x10 + 8) =
       CONCAT44(uStack_9c,fStack_a0);
  uStack_9c = uStack_9c | 1;
  fStack_a4 = *(float *)(param_1 + 6);
  if (fVar6 <= *(float *)(param_1 + 6)) {
    fStack_a4 = fVar6;
  }
  local_a8 = *(float *)(param_1 + 5);
  if (fVar8 <= *(float *)(param_1 + 5)) {
    local_a8 = fVar8;
  }
  if (fStack_a4 <= fVar17) {
    fStack_a4 = fVar17;
  }
  if (local_a8 <= fVar7) {
    local_a8 = fVar7;
  }
  fVar16 = *(float *)&param_1[5].field_0x4;
  if (fVar9 <= *(float *)&param_1[5].field_0x4) {
    fVar16 = fVar9;
  }
  if (fVar16 <= fVar5) {
    fVar16 = fVar5;
  }
  if (fVar16 <= fVar4) {
    fVar16 = fVar4;
  }
  local_b8.EQBands.ArrayNum = local_b8.EQBands.ArrayNum + 1;
  fStack_a0 = logf(fVar16);
  fStack_a0 = fStack_a0 * fVar15;
  if (((local_b8.EQBands.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a8) &&
      ((FScriptContainerElement *)&local_a8 <
       local_b8.EQBands.AllocatorInstance.Data + (longlong)local_b8.EQBands.ArrayMax * 0x10)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar3 = (code *)swi(3);
    uVar12 = (*pcVar3)();
    return (bool)uVar12;
  }
  if (local_b8.EQBands.ArrayNum == local_b8.EQBands.ArrayMax) {
    local_b8.EQBands.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x410,(ForAnyElementType *)&local_b8,&local_b8.EQBands.ArrayMax);
  }
  *(ulonglong *)
   (local_b8.EQBands.AllocatorInstance.Data + (longlong)local_b8.EQBands.ArrayNum * 0x10) =
       CONCAT44(fStack_a4,local_a8);
  *(ulonglong *)
   (local_b8.EQBands.AllocatorInstance.Data + (longlong)local_b8.EQBands.ArrayNum * 0x10 + 8) =
       CONCAT44(uStack_9c,fStack_a0);
  uStack_9c = uStack_9c | 1;
  fStack_a4 = *(float *)&param_1[7].field_0x4;
  if (fVar6 <= *(float *)&param_1[7].field_0x4) {
    fStack_a4 = fVar6;
  }
  local_a8 = *(float *)&param_1[6].field_0x4;
  if (fVar8 <= *(float *)&param_1[6].field_0x4) {
    local_a8 = fVar8;
  }
  if (fStack_a4 <= fVar17) {
    fStack_a4 = fVar17;
  }
  if (local_a8 <= fVar7) {
    local_a8 = fVar7;
  }
  fVar17 = *(float *)(param_1 + 7);
  if (fVar9 <= *(float *)(param_1 + 7)) {
    fVar17 = fVar9;
  }
  if (fVar17 <= fVar5) {
    fVar17 = fVar5;
  }
  if (fVar17 <= fVar4) {
    fVar17 = fVar4;
  }
  local_b8.EQBands.ArrayNum = local_b8.EQBands.ArrayNum + 1;
  fStack_a0 = logf(fVar17);
  fStack_a0 = fStack_a0 * fVar15;
  if (((local_b8.EQBands.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a8) &&
      ((FScriptContainerElement *)&local_a8 <
       local_b8.EQBands.AllocatorInstance.Data + (longlong)local_b8.EQBands.ArrayMax * 0x10)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar3 = (code *)swi(3);
    uVar12 = (*pcVar3)();
    return (bool)uVar12;
  }
  iVar13 = local_b8.EQBands.ArrayNum;
  if (local_b8.EQBands.ArrayNum == local_b8.EQBands.ArrayMax) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,(ForAnyElementType *)&local_b8,&local_b8.EQBands.ArrayMax);
  }
  local_b8.EQBands.ArrayNum = iVar13 + 1;
  pFVar2 = &this->GameThreadEQSettings;
  *(ulonglong *)(local_b8.EQBands.AllocatorInstance.Data + (longlong)iVar13 * 0x10) =
       CONCAT44(fStack_a4,local_a8);
  *(ulonglong *)(local_b8.EQBands.AllocatorInstance.Data + (longlong)iVar13 * 0x10 + 8) =
       CONCAT44(uStack_9c,fStack_a0);
  bVar11 = ::IsEqual(pFVar2,&local_b8);
  _Src.Data = local_b8.EQBands.AllocatorInstance.Data;
  if (!bVar11) {
    if (pFVar2 != &local_b8) {
      iVar10 = local_b8.EQBands.ArrayNum;
      lVar14 = (longlong)local_b8.EQBands.ArrayNum;
      piVar1 = &(this->GameThreadEQSettings).EQBands.ArrayMax;
      iVar13 = *piVar1;
      (this->GameThreadEQSettings).EQBands.ArrayNum = local_b8.EQBands.ArrayNum;
      if ((local_b8.EQBands.ArrayNum == 0) && (iVar13 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,local_b8.EQBands.ArrayNum,iVar13,(ForAnyElementType *)pFVar2,
                   local_b8.EQBands.ArrayNum,piVar1);
        if (iVar10 != 0) {
          memcpy((pFVar2->EQBands).AllocatorInstance.Data,_Src.Data,lVar14 << 4);
        }
      }
    }
    lpCriticalSection = &(this->PendingSettings).CritSect;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->PendingSettings).bChanged = true;
    FSubmixEffectSubmixEQSettings::operator=(&(this->PendingSettings).CurrentParams,pFVar2);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (local_b8.EQBands.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.EQBands.AllocatorInstance.Data);
  }
  return true;
}

// SupportsDefaultEQ @ 146578d20

bool __thiscall FSubmixEffectSubmixEQ::SupportsDefaultEQ(FSubmixEffectSubmixEQ *this)

{
  return true;
}

// UpdateParameters @ 14657c8c0

void __thiscall FSubmixEffectSubmixEQ::UpdateParameters(FSubmixEffectSubmixEQ *this,int param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FSubmixEffectSubmixEQSettings *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ForAnyElementType _Src;
  bool bVar10;
  uint uVar11;
  FBiquadFilter *pFVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  undefined1 local_res18 [8];
  uint local_res20;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  uint local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong local_c0;
  FScriptContainerElement *local_b8;
  FBiquadFilter local_b0 [2];
  
  lpCriticalSection = &(this->PendingSettings).CritSect;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  fVar9 = __real_469c4000;
  fVar7 = __real_40000000;
  if ((this->PendingSettings).bChanged == false) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->bEQSettingsSet != false) goto LAB_14657cf9a;
  }
  else {
    pFVar2 = &(this->PendingSettings).CurrentParams;
    (this->PendingSettings).bChanged = false;
    if ((FSubmixEffectSubmixEQSettings *)&local_e8 != pFVar2) {
      iVar3 = (this->PendingSettings).CurrentParams.EQBands.ArrayNum;
      pFVar15 = (pFVar2->EQBands).AllocatorInstance.Data;
      local_e0 = CONCAT44(local_e0._4_4_,iVar3);
      if (((iVar3 != 0) || (local_e0._4_4_ != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar3,local_e0._4_4_,&local_e8,iVar3,(int *)((longlong)&local_e0 + 4)),
         iVar3 != 0)) {
        memcpy(local_e8.Data,pFVar15,(longlong)iVar3 << 4);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar8 = __real_41a00000;
    fVar6 = __real_3dcccccd;
    iVar3 = (int)local_e0;
    uVar19 = (ulonglong)(int)local_e0;
    pFVar15 = local_e8.Data + uVar19 * 0x10;
    FVar14.Data = local_e8.Data;
    while( true ) {
      iVar17 = (int)uVar19;
      if ((int)uVar19 != iVar3) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FSubmixEffectEQBand,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
        iVar17 = (int)local_e0;
      }
      _Src.Data = local_e8.Data;
      if (FVar14.Data == pFVar15) break;
      fVar22 = *(float *)FVar14.Data;
      if (fVar9 <= *(float *)FVar14.Data) {
        fVar22 = fVar9;
      }
      fVar23 = *(float *)(FVar14.Data + 4);
      if (fVar7 <= *(float *)(FVar14.Data + 4)) {
        fVar23 = fVar7;
      }
      if (fVar22 <= fVar8) {
        fVar22 = fVar8;
      }
      if (fVar23 <= fVar6) {
        fVar23 = fVar6;
      }
      *(float *)FVar14.Data = fVar22;
      *(float *)(FVar14.Data + 4) = fVar23;
      FVar14.Data = FVar14.Data + 0x10;
      uVar19 = local_e0 & 0xffffffff;
    }
    pFVar2 = &this->RenderThreadEQSettings;
    if (pFVar2 != (FSubmixEffectSubmixEQSettings *)&local_e8) {
      iVar3 = (this->RenderThreadEQSettings).EQBands.ArrayMax;
      piVar1 = &(this->RenderThreadEQSettings).EQBands.ArrayMax;
      (this->RenderThreadEQSettings).EQBands.ArrayNum = iVar17;
      if ((iVar17 == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar17,iVar3,(ForAnyElementType *)pFVar2,iVar17,piVar1);
        if (iVar17 != 0) {
          memcpy((pFVar2->EQBands).AllocatorInstance.Data,_Src.Data,(longlong)iVar17 << 4);
        }
      }
    }
  }
  local_c0 = (longlong)(this->FiltersPerChannel).ArrayNum;
  uVar11 = (this->RenderThreadEQSettings).EQBands.ArrayNum;
  this->bEQSettingsSet = true;
  local_d8 = 0;
  local_res20 = uVar11;
  if (0 < local_c0) {
    local_c8 = 0;
    do {
      lVar21 = local_c8;
      uVar18 = 0;
      if ((int)local_d8 < (this->FiltersPerChannel).ArrayNum) {
        uVar18 = ~local_d8 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar15 = (this->FiltersPerChannel).AllocatorInstance.Data;
      iVar3 = *(int *)(pFVar15 + lVar21 + 0x10);
      pFVar15[lVar21] = (FScriptContainerElement)0x1;
      local_b8 = pFVar15;
      if (iVar3 < (int)uVar11) {
        local_d0 = (ulonglong)(uVar11 - iVar3);
        do {
          pFVar12 = Audio::FBiquadFilter::FBiquadFilter(local_b0);
          if (((*(FBiquadFilter **)(pFVar15 + lVar21 + 8) <= pFVar12) &&
              (pFVar12 < *(FBiquadFilter **)(pFVar15 + lVar21 + 8) +
                         *(int *)(pFVar15 + lVar21 + 0x14))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar11 = *(uint *)(pFVar15 + lVar21 + 0x10);
          if (uVar11 == *(uint *)(pFVar15 + lVar21 + 0x14)) {
            uVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x830,(ForAnyElementType *)(pFVar15 + lVar21 + 8),
                                (int *)(pFVar15 + lVar21 + 0x14));
          }
          *(uint *)(pFVar15 + lVar21 + 0x10) = uVar11 + 1;
          lVar16 = *(longlong *)(pFVar15 + lVar21 + 8);
          lVar20 = (longlong)(int)uVar11 * 0x30;
          *(undefined ***)(lVar16 + lVar20) = &___7FBiquadFilter_Audio__6B_;
          *(Type *)(lVar16 + 8 + lVar20) = pFVar12->FilterType;
          *(FBiquadCoeff **)(lVar16 + 0x10 + lVar20) = pFVar12->Biquad;
          *(float *)(lVar16 + 0x18 + lVar20) = pFVar12->SampleRate;
          *(int *)(lVar16 + 0x1c + lVar20) = pFVar12->NumChannels;
          *(float *)(lVar16 + 0x20 + lVar20) = pFVar12->Frequency;
          *(float *)(lVar16 + 0x24 + lVar20) = pFVar12->Bandwidth;
          *(float *)(lVar16 + 0x28 + lVar20) = pFVar12->GainDB;
          *(bool *)(lVar16 + 0x2c + lVar20) = pFVar12->bEnabled;
          Audio::FBiquadFilter::~FBiquadFilter(local_b0);
          uVar18 = 0;
          if ((int)uVar11 < *(int *)(pFVar15 + lVar21 + 0x10)) {
            uVar18 = ~uVar11 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          Audio::FBiquadFilter::Init
                    ((FBiquadFilter *)(*(longlong *)(pFVar15 + lVar21 + 8) + lVar20),
                     this->SampleRate,2,ParametricEQ,fVar9,fVar7,0.0);
          local_d0 = local_d0 - 1;
        } while (local_d0 != 0);
        local_d0 = 0;
        pFVar15 = local_b8;
        lVar21 = local_c8;
        uVar11 = local_res20;
      }
      else if ((int)uVar11 < iVar3) {
        lVar16 = (longlong)(int)uVar11 * 0x30;
        uVar18 = uVar11;
        do {
          uVar13 = 0;
          if ((int)uVar18 < *(int *)(pFVar15 + lVar21 + 0x10)) {
            uVar13 = ~uVar18 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          Audio::FBiquadFilter::SetEnabled
                    ((FBiquadFilter *)(*(longlong *)(pFVar15 + lVar21 + 8) + lVar16),false);
          uVar18 = uVar18 + 1;
          lVar16 = lVar16 + 0x30;
        } while ((int)uVar18 < iVar3);
      }
      if ((*(int *)(pFVar15 + lVar21 + 0x10) < (int)uVar11) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumBandsInSetting <= EqFilter.Bands.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Effects\\AudioMixerSubmixEffectEQ.cpp"
                              ,0x113,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar18 = 0;
      if (0 < (int)uVar11) {
        lVar20 = 0;
        lVar16 = 0;
        do {
          uVar13 = ~uVar18 >> 0x1f;
          uVar11 = 0;
          if ((int)uVar18 < (this->RenderThreadEQSettings).EQBands.ArrayNum) {
            uVar11 = uVar13;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->RenderThreadEQSettings).EQBands.AllocatorInstance.Data;
          uVar11 = 0;
          if ((int)uVar18 < *(int *)(pFVar15 + lVar21 + 0x10)) {
            uVar11 = uVar13;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          Audio::FBiquadFilter::SetEnabled
                    ((FBiquadFilter *)(*(longlong *)(pFVar15 + lVar21 + 8) + lVar20),
                     (bool)((byte)pFVar4[lVar16 + 0xc] & 1));
          uVar11 = 0;
          if ((int)uVar18 < *(int *)(pFVar15 + lVar21 + 0x10)) {
            uVar11 = uVar13;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          Audio::FBiquadFilter::SetParams
                    ((FBiquadFilter *)(*(longlong *)(pFVar15 + lVar21 + 8) + lVar20),ParametricEQ,
                     *(float *)(pFVar4 + lVar16),*(float *)(pFVar4 + lVar16 + 4),
                     *(float *)(pFVar4 + lVar16 + 8));
          uVar18 = uVar18 + 1;
          lVar16 = lVar16 + 0x10;
          lVar20 = lVar20 + 0x30;
          uVar11 = local_res20;
        } while ((int)uVar18 < (int)local_res20);
      }
      local_c8 = lVar21 + 0x18;
      local_d8 = local_d8 + 1;
      local_c0 = local_c0 + -1;
    } while (local_c0 != 0);
    local_c0 = 0;
  }
LAB_14657cf9a:
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  return;
}

