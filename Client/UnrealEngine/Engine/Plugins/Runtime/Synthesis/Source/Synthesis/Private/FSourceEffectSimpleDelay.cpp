// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 3

// Init @ 14f0e4f00

void __thiscall
FSourceEffectSimpleDelay::Init(FSourceEffectSimpleDelay *this,FSoundEffectSourceInitData *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  LOCK();
  *(undefined4 *)&this->field_0x5c = 1;
  UNLOCK();
  this->bIsInit = true;
  iVar2 = param_1->NumSourceChannels;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar2,&(this->FeedbackSamples).AllocatorInstance,
                     &(this->FeedbackSamples).ArrayNum,&(this->FeedbackSamples).ArrayMax);
  memset((this->FeedbackSamples).AllocatorInstance.Data + (longlong)iVar6 * 4,0,(longlong)iVar2 << 2
        );
  iVar2 = param_1->NumSourceChannels;
  piVar1 = &(this->Delays).ArrayNum;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,iVar2,&(this->Delays).AllocatorInstance,piVar1,&(this->Delays).ArrayMax)
  ;
  DefaultConstructItems<Audio::FDelay,int>
            ((this->Delays).AllocatorInstance.Data + (longlong)iVar6 * 0x58,iVar2);
  fVar4 = __real_40000000;
  uVar8 = 0;
  if (0 < param_1->NumSourceChannels) {
    do {
      uVar7 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      Audio::FDelay::Init((FDelay *)
                          ((this->Delays).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x58),
                          param_1->SampleRate,fVar4);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < param_1->NumSourceChannels);
  }
  return;
}

// OnPresetChanged @ 14f0ee8e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FSourceEffectSimpleDelay::OnPresetChanged(FSourceEffectSimpleDelay *this)

{
  undefined1 *lpCriticalSection;
  int iVar1;
  float fVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FDelay *this_00;
  FDelay *pFVar5;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4c);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = USourceEffectSimpleDelayPreset::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14f0ee923;
  }
  pUVar3 = (UObject *)0x0;
LAB_14f0ee923:
  if (pUVar3 == (UObject *)0x0) {
    local_38 = ___xmm_3f800000000000000000000043ab8000;
    uStack_30 = _UNK_15314de08;
    local_28 = (ulonglong)(local_28._4_4_ | 3) << 0x20;
  }
  else {
    lpCriticalSection = &pUVar3[2].field_0x18;
    if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_38 = *(undefined8 *)&pUVar3[3].field_0x18;
    uStack_30 = *(undefined8 *)&pUVar3[3].field_0x20;
    local_28 = *(longlong *)(pUVar3 + 4);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  (this->SettingsCopy).SpeedOfSound = (float)(undefined4)local_38;
  (this->SettingsCopy).DelayAmount = (float)local_38._4_4_;
  (this->SettingsCopy).DryAmount = (float)(undefined4)uStack_30;
  (this->SettingsCopy).WetAmount = (float)uStack_30._4_4_;
  *(longlong *)&(this->SettingsCopy).Feedback = local_28;
  fVar2 = __real_447a0000;
  if ((this->SettingsCopy).bDelayBasedOnDistance == 0) {
    this_00 = (FDelay *)(this->Delays).AllocatorInstance.Data;
    iVar1 = (this->Delays).ArrayNum;
    pFVar5 = this_00 + iVar1;
    while( true ) {
      if ((this->Delays).ArrayNum != iVar1) {
        `TCheckedPointerIterator<Audio::FDelay,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar5) break;
      Audio::FDelay::SetEasedDelayMsec
                (this_00,(this->SettingsCopy).DelayAmount * fVar2,this->bIsInit);
      this_00 = this_00 + 1;
    }
    this->bIsInit = false;
  }
  return;
}

// ProcessAudio @ 14f0f3a20

void __thiscall
FSourceEffectSimpleDelay::ProcessAudio
          (FSourceEffectSimpleDelay *this,FSoundEffectSourceInputData *param_1,float *param_2)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  FDelay *this_00;
  longlong lVar9;
  uint uVar10;
  FDelay *pFVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  undefined1 local_res8 [8];
  FSoundEffectSourceInputData *local_res10;
  float *local_res18;
  int local_res20;
  int local_a8;
  longlong local_a0;
  longlong local_98;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if ((this->SettingsCopy).bDelayBasedOnDistance != 0) {
    if ((this->SettingsCopy).bUseDistanceOverride == 0) {
      fVar19 = (param_1->SpatParams).Distance * __real_41200000;
    }
    else {
      fVar19 = (param_1->SpatParams).AttenuationDistance * __real_42c80000;
    }
    iVar13 = (this->Delays).ArrayNum;
    this_00 = (FDelay *)(this->Delays).AllocatorInstance.Data;
    fVar2 = (this->SettingsCopy).SpeedOfSound;
    pFVar11 = this_00 + iVar13;
    while( true ) {
      if ((this->Delays).ArrayNum != iVar13) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<Audio::FDelay,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar11) break;
      Audio::FDelay::SetEasedDelayMsec(this_00,fVar19 / fVar2,this->bIsInit);
      this_00 = this_00 + 1;
    }
    this->bIsInit = false;
  }
  iVar13 = (this->Delays).ArrayNum;
  lVar7 = (longlong)iVar13;
  local_a8 = 0;
  if (0 < param_1->NumSamples) {
    lVar16 = lVar7 * 4;
    lVar12 = lVar7 * -4;
    local_a0 = 0;
    local_98 = 0;
    local_res20 = iVar13;
    do {
      uVar8 = 0;
      lVar9 = 0;
      if (0 < lVar7) {
        lVar17 = 0;
        lVar16 = local_98;
        do {
          uVar10 = ~uVar8 >> 0x1f;
          uVar6 = 0;
          if ((int)uVar8 < (this->Delays).ArrayNum) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar15 = (this->Delays).AllocatorInstance.Data + lVar17;
          fVar19 = *(float *)(lVar16 + (longlong)param_1->InputSourceEffectBufferPtr);
          fVar2 = (this->SettingsCopy).DryAmount;
          pcVar4 = *(code **)(*(longlong *)pFVar15 + 8);
          uVar6 = 0;
          if ((int)uVar8 < (this->FeedbackSamples).ArrayNum) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar3 = (this->SettingsCopy).WetAmount;
          lVar14 = local_a0 + lVar16;
          fVar18 = (float)(*pcVar4)(pFVar15,*(float *)((this->FeedbackSamples).AllocatorInstance.
                                                       Data + lVar14) *
                                            (this->SettingsCopy).Feedback +
                                            *(float *)(lVar16 + (longlong)
                                                                local_res10->
                                                                InputSourceEffectBufferPtr));
          fVar19 = fVar18 * fVar3 + fVar19 * fVar2;
          *(float *)(lVar16 + (longlong)local_res18) = fVar19;
          uVar6 = 0;
          if ((int)uVar8 < (this->FeedbackSamples).ArrayNum) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar8 = uVar8 + 1;
          lVar7 = (longlong)local_res20;
          lVar9 = lVar9 + 1;
          lVar17 = lVar17 + 0x58;
          lVar16 = lVar16 + 4;
          *(float *)((this->FeedbackSamples).AllocatorInstance.Data + lVar14) = fVar19;
          param_1 = local_res10;
        } while (lVar9 < lVar7);
        lVar16 = lVar7 * 4;
        iVar13 = local_res20;
      }
      local_a8 = local_a8 + iVar13;
      local_98 = local_98 + lVar16;
      local_a0 = local_a0 + lVar12;
    } while (local_a8 < param_1->NumSamples);
  }
  return;
}

