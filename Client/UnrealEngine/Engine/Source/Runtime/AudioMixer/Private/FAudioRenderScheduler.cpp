// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 18

// FAudioRenderScheduler @ 14653c8d0

/* WARNING: Enum "Type": Some values do not have unique names */

FAudioRenderScheduler * __thiscall
Audio::FAudioRenderScheduler::FAudioRenderScheduler
          (FAudioRenderScheduler *this,FMixerDevice *param_1)

{
  this->MixerDevice = param_1;
  *(undefined8 *)&this->IndexMap = 0;
  *(undefined8 *)&(this->IndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->IndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->IndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->IndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->IndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->IndexMap).field_0x48 = 0;
  this->FirstFreeIndex = -1;
  (this->Steps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Steps).ArrayNum = 0;
  (this->Steps).ArrayMax = 0;
  (this->ActiveSteps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveSteps).ArrayNum = 0;
  (this->ActiveSteps).ArrayMax = 0;
  this->bDirty = true;
  (this->BrokenLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BrokenLinks).ArrayNum = 0;
  (this->BrokenLinks).ArrayMax = 0;
  return this;
}

// ~FAudioRenderScheduler @ 146540420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FAudioRenderScheduler::~FAudioRenderScheduler(FAudioRenderScheduler *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->BrokenLinks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveSteps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FAudioRenderScheduler::FStepEntry,int>
            ((FStepEntry *)(this->Steps).AllocatorInstance.Data,(this->Steps).ArrayNum);
  pFVar1 = (this->Steps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->IndexMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->IndexMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Audio::FAudioRenderStepId,short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Audio::FAudioRenderStepId,short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Audio::FAudioRenderStepId,short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IndexMap);
  return;
}

// AddDependency @ 146545d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FAudioRenderScheduler::AddDependency
          (FAudioRenderScheduler *this,FAudioRenderStepId param_1,FAudioRenderStepId param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  ForElementType<short> FVar7;
  ForElementType<short> FVar8;
  longlong lVar9;
  uint uVar10;
  short local_28 [8];
  
  if (this->MixerDevice != (FMixerDevice *)0x0) {
    bVar3 = FMixerDevice::IsAudioRenderingThread(this->MixerDevice);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MixerDevice == nullptr || MixerDevice->IsAudioRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
                         ,0x74,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if ((param_1.Value == 0xffffffffffffffff) || (param_2.Value == 0xffffffffffffffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstStep.IsValid() && SecondStep.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
                       ,0x76,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1.Value != param_2.Value) {
    local_28[0] = GetInternalIndex(this,param_1);
    sVar4 = GetInternalIndex(this,param_2);
    uVar10 = (uint)~(int)sVar4 >> 0x1f;
    uVar5 = 0;
    if ((int)sVar4 < (this->Steps).ArrayNum) {
      uVar5 = uVar10;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->Steps).AllocatorInstance.Data;
    lVar9 = (longlong)sVar4 * 0x40;
    FVar7 = *(ForElementType<short> *)(pFVar1 + lVar9 + 0x18);
    FVar8 = (ForElementType<short>)((longlong)pFVar1 + lVar9 + 0x10);
    if (FVar7 == (ForElementType<short>)0x0) {
      FVar7 = FVar8;
    }
    if (((ulonglong)FVar7 <= local_28) &&
       (local_28 < (short *)((longlong)FVar7 + (longlong)*(int *)((longlong)FVar8 + 0x14) * 2))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar6 = *(int *)((ForElementType<short> *)((longlong)FVar8 + 0x10))->InlineData;
    if (iVar6 == *(int *)((longlong)FVar8 + 0x14)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<short>_>
                        (0x202,(ForElementType<short> *)FVar8,(int *)((longlong)FVar8 + 0x14));
    }
    *(int *)((ForElementType<short> *)((longlong)FVar8 + 0x10))->InlineData = iVar6 + 1;
    FVar7 = *(ForElementType<short> *)((longlong)FVar8 + 8);
    if (*(ForElementType<short> *)((longlong)FVar8 + 8) == (ForElementType<short>)0x0) {
      FVar7 = FVar8;
    }
    *(short *)((longlong)FVar7 + (longlong)iVar6 * 2) = local_28[0];
    uVar5 = 0;
    if ((int)sVar4 < (this->Steps).ArrayNum) {
      uVar5 = uVar10;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->Steps).AllocatorInstance.Data + lVar9 + 0x28;
    *(int *)pFVar1 = *(int *)pFVar1 + 1;
    lVar9 = (longlong)local_28[0];
    uVar5 = 0;
    if ((int)local_28[0] < (this->Steps).ArrayNum) {
      uVar5 = (uint)~(int)local_28[0] >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->Steps).AllocatorInstance.Data + lVar9 * 0x40 + 0x28;
    *(int *)pFVar1 = *(int *)pFVar1 + 1;
    this->bDirty = true;
  }
  return;
}

// AddStep @ 1465471d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FAudioRenderScheduler::AddStep
          (FAudioRenderScheduler *this,FAudioRenderStepId param_1,IAudioMixerRenderStep *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  short sVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  ulong64 local_res10;
  wchar_t *local_res20;
  
  if (((this->MixerDevice != (FMixerDevice *)0x0) &&
      (bVar3 = FMixerDevice::IsAudioRenderingThread(this->MixerDevice), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MixerDevice == nullptr || MixerDevice->IsAudioRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
                         ,0x54,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_1.Value == 0xffffffffffffffff) || (param_2 == (IAudioMixerRenderStep *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Id.IsValid() && Step != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
                         ,0x56,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  sVar4 = GetInternalIndex(this,param_1);
  uVar5 = 0;
  if ((int)sVar4 < (this->Steps).ArrayNum) {
    uVar5 = (uint)~(int)sVar4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Steps).AllocatorInstance.Data;
  if ((*(longlong *)(pFVar1 + (longlong)sVar4 * 0x40 + 8) != 0) &&
     (bVar3 = `Audio::FAudioRenderScheduler::AddStep'::__l17::<lambda_1>::operator()(local_res8),
     !bVar3)) {
    return;
  }
  if (5 < (byte)LogAudioRenderScheduler._0_1_) {
    local_res10 = param_1.Value;
    local_res20 = (wchar_t *)(**(code **)((longlong)*param_2 + 0x10))(param_2);
    UE::Logging::Private::
    LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*,unsigned___int64>
              ((FLogCategoryBase *)&LogAudioRenderScheduler,&::LOG_Static,&local_res20,&local_res10)
    ;
  }
  *(int *)(pFVar1 + (longlong)sVar4 * 0x40 + 0x28) =
       *(int *)(pFVar1 + (longlong)sVar4 * 0x40 + 0x28) + 1;
  *(IAudioMixerRenderStep **)(pFVar1 + (longlong)sVar4 * 0x40 + 8) = param_2;
  this->bDirty = true;
  return;
}

// BreakCycle @ 146547900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FAudioRenderScheduler::BreakCycle(FAudioRenderScheduler *this,int param_1)

{
  int *piVar1;
  TArray<TTuple<short,short>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  short sVar6;
  bool bVar7;
  int iVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  short sVar13;
  ulong64 local_res8;
  undefined1 local_res10 [8];
  ulong64 local_res18;
  short local_58 [2];
  undefined4 local_54;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  uVar12 = 0;
  if (param_1 < (this->ActiveSteps).ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_58[0] = *(short *)((this->ActiveSteps).AllocatorInstance.Data + (longlong)param_1 * 2);
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x202,&local_50,(int *)((longlong)&local_48 + 4));
  local_48 = CONCAT44(local_48._4_4_,iVar8 + 1);
  *(short *)(local_50.Data + (longlong)iVar8 * 2) = local_58[0];
  do {
    sVar6 = local_58[0];
    uVar12 = 0;
    if ((int)local_58[0] < (this->Steps).ArrayNum) {
      uVar12 = (uint)~(int)local_58[0] >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this->Steps).AllocatorInstance.Data;
    if ((pFVar4[(longlong)sVar6 * 0x40 + 0x2c] != (FScriptContainerElement)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Entry.bLaunched",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
                           ,0x142,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar10 = pFVar4 + (longlong)sVar6 * 0x40 + 0x10;
    iVar8 = *(int *)(pFVar4 + (longlong)sVar6 * 0x40 + 0x20);
    if (*(FScriptContainerElement **)(pFVar4 + (longlong)sVar6 * 0x40 + 0x18) !=
        (FScriptContainerElement *)0x0) {
      pFVar10 = *(FScriptContainerElement **)(pFVar4 + (longlong)sVar6 * 0x40 + 0x18);
    }
    pFVar3 = pFVar10 + (longlong)iVar8 * 2;
    while( true ) {
      if (*(int *)(pFVar4 + (longlong)sVar6 * 0x40 + 0x20) != iVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<short,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      sVar13 = -1;
      if (pFVar10 == pFVar3) goto LAB_146547ad5;
      sVar13 = *(short *)pFVar10;
      uVar12 = 0;
      if ((int)sVar13 < (this->Steps).ArrayNum) {
        uVar12 = (uint)~(int)sVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((this->Steps).AllocatorInstance.Data[(longlong)sVar13 * 0x40 + 0x2c] ==
          (FScriptContainerElement)0x0) break;
      pFVar10 = pFVar10 + 2;
    }
    if (sVar13 == -1) {
LAB_146547ad5:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrerequisiteStep != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
                         ,0x150,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    for (FVar9.Data = local_50.Data; FVar9.Data != local_50.Data + (longlong)(int)local_48 * 2;
        FVar9.Data = FVar9.Data + 2) {
      if (*(short *)FVar9.Data == sVar13) {
        if (5 < (byte)LogAudioRenderScheduler._0_1_) {
          uVar12 = 0;
          if ((int)sVar13 < (this->Steps).ArrayNum) {
            uVar12 = (uint)~(int)sVar13 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar11 = (longlong)local_58[0];
          local_res8 = *(ulong64 *)((this->Steps).AllocatorInstance.Data + (longlong)sVar13 * 0x40);
          uVar12 = 0;
          if ((int)local_58[0] < (this->Steps).ArrayNum) {
            uVar12 = (uint)~(int)local_58[0] >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_res18 = *(ulong64 *)((this->Steps).AllocatorInstance.Data + lVar11 * 0x40);
          UE::Logging::Private::
          LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned___int64,unsigned___int64>
                    ((FLogCategoryBase *)&LogAudioRenderScheduler,&::LOG_Static,&local_res18,
                     &local_res8);
        }
        BreakLink(this,sVar13,local_58[0]);
        pTVar2 = &this->BrokenLinks;
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        local_54 = CONCAT22(local_58[0],sVar13);
        if (((pFVar4 <= (FScriptContainerElement *)&local_54) &&
            ((FScriptContainerElement *)&local_54 <
             pFVar4 + (longlong)(this->BrokenLinks).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (this->BrokenLinks).ArrayNum;
        piVar1 = &(this->BrokenLinks).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x204,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->BrokenLinks).ArrayNum = iVar8 + 1;
        *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_54;
        if (local_50.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data);
        }
        return;
      }
    }
    iVar8 = (int)local_48;
    local_58[0] = sVar13;
    if ((local_50.Data <= (FScriptContainerElement *)local_58) &&
       ((FScriptContainerElement *)local_58 < local_50.Data + (longlong)local_48._4_4_ * 2)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (int)local_48;
    }
    if (iVar8 == local_48._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x202,&local_50,(int *)((longlong)&local_48 + 4));
    }
    local_48 = CONCAT44(local_48._4_4_,iVar8 + 1);
    *(short *)(local_50.Data + (longlong)iVar8 * 2) = local_58[0];
  } while( true );
}

// BreakLink @ 146547da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Audio::FAudioRenderScheduler::BreakLink(FAudioRenderScheduler *this,short param_1,short param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  short local_res10 [4];
  
  uVar3 = 0;
  if ((int)param_2 < (this->Steps).ArrayNum) {
    uVar3 = (uint)~(int)param_2 >> 0x1f;
  }
  local_res10[0] = param_1;
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::RemoveSingleSwap
            ((TArray<short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
             ((this->Steps).AllocatorInstance.Data + (longlong)param_2 * 0x40 + 0x10),local_res10,
             Default);
  uVar3 = 0;
  if ((int)param_1 < (this->Steps).ArrayNum) {
    uVar3 = (uint)~(int)param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->Steps).AllocatorInstance.Data[(longlong)param_1 * 0x40 + 0x2d] =
       (FScriptContainerElement)0x1;
  uVar3 = 0;
  if ((int)param_2 < (this->Steps).ArrayNum) {
    uVar3 = (uint)~(int)param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->Steps).AllocatorInstance.Data[(longlong)param_2 * 0x40 + 0x2d] =
       (FScriptContainerElement)0x1;
  return;
}

// CheckBrokenLinks @ 146549540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FAudioRenderScheduler::CheckBrokenLinks(FAudioRenderScheduler *this)

{
  int *piVar1;
  TArray<TTuple<short,short>,TSizedDefaultAllocator<32>_> *pTVar2;
  short sVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  ulonglong uVar13;
  TArray<short,TSizedDefaultAllocator<32>_> local_28;
  
  uVar10 = 0;
  if (0 < (this->BrokenLinks).ArrayNum) {
    pTVar2 = &this->BrokenLinks;
    uVar13 = uVar10;
    do {
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < (this->BrokenLinks).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = (pTVar2->AllocatorInstance).Data + uVar13;
      if (this->bDirty == false) {
LAB_146549734:
        BreakLink(this,*(short *)pFVar11,*(short *)(pFVar11 + 2));
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar13 = uVar13 + 4;
      }
      else {
        sVar3 = *(short *)(pFVar11 + 2);
        uVar7 = 0;
        if ((int)sVar3 < (this->Steps).ArrayNum) {
          uVar7 = (uint)~(int)sVar3 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->Steps).AllocatorInstance.Data;
        pFVar8 = pFVar4 + (longlong)sVar3 * 0x40 + 0x10;
        if (*(FScriptContainerElement **)(pFVar4 + (longlong)sVar3 * 0x40 + 0x18) !=
            (FScriptContainerElement *)0x0) {
          pFVar8 = *(FScriptContainerElement **)(pFVar4 + (longlong)sVar3 * 0x40 + 0x18);
        }
        pFVar4 = pFVar8 + (longlong)*(int *)(pFVar4 + (longlong)sVar3 * 0x40 + 0x20) * 2;
        if (pFVar8 != pFVar4) {
          do {
            if (*(short *)pFVar8 == *(short *)pFVar11) {
              local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_28.ArrayNum = 0;
              local_28.ArrayMax = 0;
              bVar6 = FindIndirectLinkSkipping
                                (this,*(short *)(pFVar11 + 2),*(short *)pFVar11,&local_28);
              if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_28.AllocatorInstance.Data);
              }
              if (bVar6) goto LAB_146549734;
              break;
            }
            pFVar8 = pFVar8 + 2;
          } while (pFVar8 != pFVar4);
        }
        uVar7 = 0;
        if ((int)uVar9 < (this->BrokenLinks).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar11 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 4;
        iVar12 = ~uVar9 + (this->BrokenLinks).ArrayNum;
        if (iVar12 != 0) {
          memmove(pFVar11,pFVar11 + 4,(longlong)iVar12 << 2);
        }
        piVar1 = &(this->BrokenLinks).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,2,&pTVar2->AllocatorInstance,(this->BrokenLinks).ArrayNum,
                   &(this->BrokenLinks).ArrayMax);
      }
    } while ((int)uVar10 < (this->BrokenLinks).ArrayNum);
  }
  return;
}

// FindIndirectLink @ 146553df0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioRenderScheduler::FindIndirectLink
          (FAudioRenderScheduler *this,short param_1,short param_2)

{
  bool bVar1;
  TArray<short,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  bVar1 = FindIndirectLinkSkipping(this,param_1,param_2,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// FindIndirectLinkSkipping @ 146553e30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioRenderScheduler::FindIndirectLinkSkipping
          (FAudioRenderScheduler *this,short param_1,short param_2,
          TArray<short,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  short sVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  short local_res18 [4];
  
  pFVar12 = (param_3->AllocatorInstance).Data;
  local_res18[0] = param_2;
  if (((pFVar12 <= (FScriptContainerElement *)local_res18) &&
      ((FScriptContainerElement *)local_res18 < pFVar12 + (longlong)param_3->ArrayMax * 2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar7 = param_3->ArrayNum;
  if (iVar7 == param_3->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x202,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar7 + 1;
  *(short *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 2) = local_res18[0];
  lVar10 = (longlong)local_res18[0];
  uVar8 = 0;
  if ((int)local_res18[0] < (this->Steps).ArrayNum) {
    uVar8 = (uint)~(int)local_res18[0] >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar12 = (this->Steps).AllocatorInstance.Data;
  pFVar11 = *(FScriptContainerElement **)(pFVar12 + lVar10 * 0x40 + 0x18);
  pFVar12 = pFVar12 + lVar10 * 0x40 + 0x10;
  if (pFVar11 == (FScriptContainerElement *)0x0) {
    pFVar11 = pFVar12;
  }
  iVar7 = *(int *)(pFVar12 + 0x10);
  pFVar1 = pFVar11 + (longlong)iVar7 * 2;
  do {
    if (*(int *)(pFVar12 + 0x10) != iVar7) {
      `TCheckedPointerIterator<short,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar1) {
      return false;
    }
    sVar3 = *(short *)pFVar11;
    if (sVar3 == param_1) {
      return true;
    }
    pFVar9 = (param_3->AllocatorInstance).Data;
    pFVar2 = pFVar9 + (longlong)param_3->ArrayNum * 2;
    for (; pFVar9 != pFVar2; pFVar9 = pFVar9 + 2) {
      if (*(short *)pFVar9 == sVar3) goto LAB_146553fb3;
    }
    bVar5 = FindIndirectLinkSkipping(this,param_1,sVar3,param_3);
    if (bVar5) {
      return true;
    }
LAB_146553fb3:
    pFVar11 = pFVar11 + 2;
  } while( true );
}

// GetInternalIndex @ 146558750

/* WARNING: Enum "Type": Some values do not have unique names */

short __thiscall
Audio::FAudioRenderScheduler::GetInternalIndex
          (FAudioRenderScheduler *this,FAudioRenderStepId param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  undefined1 *puVar9;
  longlong lVar10;
  TPairInitializer<Audio::FAudioRenderStepId_const_&,short_const_&> local_res8;
  short local_48 [4];
  short **local_40;
  short *local_38;
  
  if (*(int *)&(this->IndexMap).field_0x8 != *(int *)&(this->IndexMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->IndexMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->IndexMap).field_0x38;
    }
    iVar7 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->IndexMap).field_0x48 - 1U &
                              (int)(param_1.Value >> 0x20) * 0x17 + (int)param_1.Value) * 4);
    if (iVar7 != -1) {
      do {
        lVar10 = *(longlong *)&this->IndexMap + (longlong)iVar7 * 0x18;
        if (*(ulong64 *)(*(longlong *)&this->IndexMap + (longlong)iVar7 * 0x18) == param_1.Value) {
          psVar8 = (short *)(lVar10 + 8);
          if (lVar10 == 0) {
            psVar8 = (short *)0x0;
          }
          if (psVar8 != (short *)0x0) {
            return *psVar8;
          }
          break;
        }
        iVar7 = *(int *)(lVar10 + 0x10);
      } while (iVar7 != -1);
    }
  }
  iVar7 = (this->Steps).ArrayNum;
  local_48[0] = this->FirstFreeIndex;
  lVar10 = (longlong)local_48[0];
  piVar1 = &(this->Steps).ArrayNum;
  local_res8.Value = (short *)param_1.Value;
  if (local_48[0] == -1) {
    if ((0x7ffe < iVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Steps.Num() < TNumericLimits<FInternalIndex>::Max()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
                           ,0x38,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      sVar5 = (*pcVar3)();
      return sVar5;
    }
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,&(this->Steps).AllocatorInstance,piVar1,&(this->Steps).ArrayMax);
    DefaultConstructItems<Audio::FAudioRenderScheduler::FStepEntry,int>
              ((this->Steps).AllocatorInstance.Data + (longlong)iVar7 * 0x40,1);
    local_48[0] = (short)(this->Steps).ArrayNum + -1;
  }
  else {
    uVar6 = 0;
    if (local_48[0] < iVar7) {
      uVar6 = (uint)~(int)local_48[0] >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      sVar5 = (*pcVar3)();
      return sVar5;
    }
    this->FirstFreeIndex = *(short *)((this->Steps).AllocatorInstance.Data + lVar10 * 0x40 + 0x38);
  }
  psVar8 = local_res8.Value;
  lVar10 = (longlong)local_48[0];
  uVar6 = 0;
  if ((int)local_48[0] < *piVar1) {
    uVar6 = (uint)~(int)local_48[0] >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    sVar5 = (*pcVar3)();
    return sVar5;
  }
  *(short **)((this->Steps).AllocatorInstance.Data + lVar10 * 0x40) = psVar8;
  local_40 = &local_res8.Value;
  local_38 = local_48;
  TSet<TTuple<Audio::FAudioRenderStepId,short>,TDefaultMapHashableKeyFuncs<Audio::FAudioRenderStepId,short,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<Audio::FAudioRenderStepId_const_&,short_const_&>_>
            ((TSet<TTuple<Audio::FAudioRenderStepId,short>,TDefaultMapHashableKeyFuncs<Audio::FAudioRenderStepId,short,0>,FDefaultSetAllocator>
              *)&this->IndexMap,&local_res8,(bool *)&local_40);
  pFVar2 = (this->ActiveSteps).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar2 + (longlong)(this->ActiveSteps).ArrayMax * 2))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    sVar5 = (*pcVar3)();
    return sVar5;
  }
  iVar7 = (this->ActiveSteps).ArrayNum;
  piVar1 = &(this->ActiveSteps).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x202,&(this->ActiveSteps).AllocatorInstance,piVar1);
  }
  (this->ActiveSteps).ArrayNum = iVar7 + 1;
  *(short *)((this->ActiveSteps).AllocatorInstance.Data + (longlong)iVar7 * 2) = local_48[0];
  return local_48[0];
}

// RemoveDependency @ 14656d200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Audio::FAudioRenderScheduler::RemoveDependency
          (FAudioRenderScheduler *this,FAudioRenderStepId param_1,FAudioRenderStepId param_2)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  short local_res10 [4];
  
  if (((this->MixerDevice != (FMixerDevice *)0x0) &&
      (bVar2 = FMixerDevice::IsAudioRenderingThread(this->MixerDevice), !bVar2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MixerDevice == nullptr || MixerDevice->IsAudioRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
                         ,0x89,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((param_1.Value == 0xffffffffffffffff) || (param_2.Value == 0xffffffffffffffff)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstStep.IsValid() && SecondStep.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
                         ,0x8b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1.Value == param_2.Value) {
    return;
  }
  sVar3 = GetInternalIndex(this,param_1);
  local_res10[0] = sVar3;
  sVar4 = GetInternalIndex(this,param_2);
  uVar6 = 0;
  if ((int)sVar4 < (this->Steps).ArrayNum) {
    uVar6 = (uint)~(int)sVar4 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = TArray<short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::RemoveSingleSwap
                    ((TArray<short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                     ((this->Steps).AllocatorInstance.Data + (longlong)sVar4 * 0x40 + 0x10),
                     local_res10,Default);
  if ((iVar5 != 0) ||
     (bVar2 = `Audio::FAudioRenderScheduler::RemoveDependency'::__l20::<lambda_1>::operator()
                        (local_res8), bVar2)) {
    RemoveReference(this,sVar3);
    RemoveReference(this,sVar4);
  }
  this->bDirty = true;
  return;
}

// RemoveReference @ 14656d550

/* WARNING: Removing unreachable block (ram,0x00014656d809) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FAudioRenderScheduler::RemoveReference(FAudioRenderScheduler *this,short param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  short sVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  short local_98 [8];
  FAudioRenderScheduler *local_88;
  undefined8 local_68 [4];
  FScriptContainerElement local_48 [16];
  
  uVar7 = 0;
  if ((int)param_1 < (this->Steps).ArrayNum) {
    uVar7 = (uint)~(int)param_1 >> 0x1f;
  }
  local_98[0] = param_1;
  local_88 = this;
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar13 = (this->Steps).AllocatorInstance.Data + (longlong)param_1 * 0x40;
  if (((*(int *)&pFVar13[0x28].field_0x0 < 1) || (*(longlong *)&pFVar13->field_0x0 == -1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entry.ReferenceCount >= 1 && Entry.StepId.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
                         ,0x47,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = pFVar13 + 0x28;
  *(int *)&pFVar3->field_0x0 = *(int *)&pFVar3->field_0x0 + -1;
  if (*(int *)&pFVar3->field_0x0 == 0) {
    if (*(int *)&(this->IndexMap).field_0x8 != *(int *)&(this->IndexMap).field_0x34) {
      TSet<TTuple<Audio::FAudioRenderStepId,short>,TDefaultMapHashableKeyFuncs<Audio::FAudioRenderStepId,short,0>,FDefaultSetAllocator>
      ::RemoveImpl<Audio::FAudioRenderStepId>
                ((TSet<TTuple<Audio::FAudioRenderStepId,short>,TDefaultMapHashableKeyFuncs<Audio::FAudioRenderStepId,short,0>,FDefaultSetAllocator>
                  *)&this->IndexMap,
                 (int)((ulonglong)*(undefined8 *)&pFVar13->field_0x0 >> 0x20) * 0x17 +
                 (int)*(undefined8 *)&pFVar13->field_0x0,(FAudioRenderStepId *)pFVar13);
    }
    pFVar3 = (this->ActiveSteps).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_98) &&
        ((FScriptContainerElement *)local_98 < pFVar3 + (longlong)(this->ActiveSteps).ArrayMax * 2))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = (this->ActiveSteps).ArrayNum;
    if (iVar2 != 0) {
      iVar12 = 0;
      pFVar3 = (this->ActiveSteps).AllocatorInstance.Data;
      bVar6 = *(short *)pFVar3 != local_98[0];
      lVar9 = 0;
      sVar8 = local_98[0];
      iVar10 = 0;
      do {
        iVar11 = iVar10;
        do {
          lVar9 = lVar9 + 1;
          iVar11 = iVar11 + 1;
          if (iVar2 <= lVar9) break;
        } while (bVar6 == (*(short *)(pFVar3 + lVar9 * 2) != sVar8));
        if (bVar6 != false) {
          if (iVar12 != iVar10) {
            memmove(pFVar3 + (longlong)iVar12 * 2,pFVar3 + (longlong)iVar10 * 2,
                    (longlong)(iVar11 - iVar10) * 2);
            sVar8 = local_98[0];
          }
          iVar12 = iVar12 + (iVar11 - iVar10);
        }
        bVar6 = (bool)(bVar6 ^ 1);
        iVar10 = iVar11;
      } while (lVar9 < iVar2);
      (local_88->ActiveSteps).ArrayNum = iVar12;
      this = local_88;
    }
    *(undefined8 *)&pFVar13[8].field_0x0 = 0;
    *(undefined8 *)&pFVar13->field_0x0 = 0xffffffffffffffff;
    if (pFVar13 + 0x10 != (FScriptContainerElement *)local_68) {
      *(undefined8 *)&pFVar13[0x10].field_0x0 = local_68[0];
      if (*(void **)&pFVar13[0x18].field_0x0 != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar13[0x18].field_0x0);
      }
      *(undefined8 *)&pFVar13[0x18].field_0x0 = 0;
      *(undefined4 *)&pFVar13[0x20].field_0x0 = 0;
      *(undefined4 *)(pFVar13 + 0x24) = 4;
    }
    pFVar3 = pFVar13 + 0x30;
    *(undefined4 *)&pFVar13[0x28].field_0x0 = 0;
    *(undefined2 *)(pFVar13 + 0x2c) = 0;
    if (pFVar3 != local_48) {
      puVar4 = *(undefined8 **)&pFVar3->field_0x0;
      *(undefined8 *)&pFVar3->field_0x0 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar4 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
    *(undefined2 *)&pFVar13[0x38].field_0x0 = 0xffff;
    *(short *)&pFVar13[0x38].field_0x0 = this->FirstFreeIndex;
    this->FirstFreeIndex = local_98[0];
  }
  return;
}

// RemoveStep @ 14656e260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FAudioRenderScheduler::RemoveStep(FAudioRenderScheduler *this,FAudioRenderStepId param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  short sVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  ulong64 local_res10;
  wchar_t *local_res18;
  
  if (((this->MixerDevice != (FMixerDevice *)0x0) &&
      (bVar3 = FMixerDevice::IsAudioRenderingThread(this->MixerDevice), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MixerDevice == nullptr || MixerDevice->IsAudioRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
                         ,100,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1.Value == 0xffffffffffffffff) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Id.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
                         ,0x66,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  sVar4 = GetInternalIndex(this,param_1);
  uVar5 = 0;
  if ((int)sVar4 < (this->Steps).ArrayNum) {
    uVar5 = (uint)~(int)sVar4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Steps).AllocatorInstance.Data;
  if ((*(longlong *)(pFVar1 + (longlong)sVar4 * 0x40 + 8) == 0) &&
     (bVar3 = `Audio::FAudioRenderScheduler::RemoveStep'::__l17::<lambda_1>::operator()(local_res8),
     !bVar3)) {
    return;
  }
  if (5 < (byte)LogAudioRenderScheduler._0_1_) {
    local_res10 = param_1.Value;
    local_res18 = (wchar_t *)
                  (**(code **)(**(longlong **)(pFVar1 + (longlong)sVar4 * 0x40 + 8) + 0x10))();
    UE::Logging::Private::
    LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*,unsigned___int64>
              ((FLogCategoryBase *)&LogAudioRenderScheduler,&::LOG_Static,&local_res18,&local_res10)
    ;
  }
  *(undefined8 *)(pFVar1 + (longlong)sVar4 * 0x40 + 8) = 0;
  RemoveReference(this,sVar4);
  this->bDirty = true;
  return;
}

// RenderBlock @ 14656edf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall Audio::FAudioRenderScheduler::RenderBlock(FAudioRenderScheduler *this,bool param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  FTaskBase *this_00;
  
  if (((this->MixerDevice != (FMixerDevice *)0x0) &&
      (bVar4 = FMixerDevice::IsAudioRenderingThread(this->MixerDevice), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MixerDevice == nullptr || MixerDevice->IsAudioRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
                         ,0x9f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId160,"FAudioRenderScheduler::RenderBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
               ,0xa0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId160);
  }
  if (param_1) {
    ScheduleAll(this,true);
  }
  else {
    this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (this_00 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<`Audio::FAudioRenderScheduler::RenderBlock'::`14'::<lambda_1>,void,void>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::Init(this_00,L"Scheduled audio render steps",High,None,None);
      this_00[1]._padding_ = (longlong)this;
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<`Audio::FAudioRenderScheduler::RenderBlock'::`14'::<lambda_1>_>::
            _vftable_;
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
      UE::Tasks::Private::FTaskBase::Wait(this_00);
      LOCK();
      paVar1 = &this_00->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_00->_padding_)(this_00,1);
      }
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ScheduleAll @ 1465707d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall Audio::FAudioRenderScheduler::ScheduleAll(FAudioRenderScheduler *this,bool param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  TArray<short,TSizedDefaultAllocator<32>_> *pTVar3;
  atomic<unsigned_int> aVar4;
  ForElementType<short> FVar5;
  FTaskBase *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ForElementType<short> FVar13;
  wchar_t *pwVar14;
  FTaskBase *pFVar15;
  undefined8 *puVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  short sVar21;
  uint uVar22;
  uint uVar23;
  ForElementType<short> FVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  bool bVar28;
  undefined1 local_res20 [8];
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_a8;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96 [6];
  ForAnyElementType local_90;
  int local_88;
  int iStack_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  undefined4 local_74;
  FScriptContainerElement *local_70;
  longlong local_68;
  longlong local_60;
  FScriptContainerElement local_58 [8];
  FScriptContainerElement local_50 [16];
  
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId179,"FAudioRenderScheduler::ScheduleAll",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
               ,0xb3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId179);
  }
  uVar22 = (this->ActiveSteps).ArrayNum;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  iStack_84 = 0;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  if (0 < (int)uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar22,&local_90,0,&iStack_84);
  }
  uVar22 = 0;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  CheckBrokenLinks(this);
  iVar10 = (this->ActiveSteps).ArrayNum;
  if (local_88 < iVar10) {
    local_60 = 0;
    lVar26 = 0;
    do {
      bVar9 = true;
      lVar18 = lVar26;
      local_78 = uVar22;
      local_68 = lVar26;
      if ((int)uVar22 < iVar10) {
        do {
          local_7c = ~uVar22 >> 0x1f;
          uVar23 = 0;
          if ((int)uVar22 < (this->ActiveSteps).ArrayNum) {
            uVar23 = local_7c;
          }
          local_78 = uVar22;
          local_68 = lVar26;
          if ((uVar23 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          sVar21 = *(short *)((this->ActiveSteps).AllocatorInstance.Data + lVar26 * 2);
          uVar23 = 0;
          if ((int)sVar21 < (this->Steps).ArrayNum) {
            uVar23 = (uint)~(int)sVar21 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar19 = (this->Steps).AllocatorInstance.Data + (longlong)sVar21 * 0x40;
          local_70 = pFVar19;
          if (pFVar19[0x2c] == (FScriptContainerElement)0x0) {
            if (this->bDirty == false) {
LAB_146570a76:
              if (param_1) {
                uVar23 = local_7c;
                if (*(longlong **)(pFVar19 + 8) != (longlong *)0x0) {
                  (**(code **)(**(longlong **)(pFVar19 + 8) + 8))();
                  uVar23 = local_7c;
                }
              }
              else {
                if ((longlong)local_a8._8_8_ < 0) {
                  DestructItems<UE::Tasks::Private::FTaskHandle,int>
                            ((FTaskHandle *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
                  iVar10 = local_a8.ArrayMax;
                  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
                  if (iVar10 != 0) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,0,&local_a8.AllocatorInstance,0,&local_a8.ArrayMax);
                  }
                }
                else {
                  DestructItems<UE::Tasks::Private::FTaskHandle,int>
                            ((FTaskHandle *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
                  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
                }
                pFVar17 = pFVar19 + 0x10;
                iVar10 = *(int *)(pFVar19 + 0x20);
                if (*(FScriptContainerElement **)(pFVar19 + 0x18) != (FScriptContainerElement *)0x0)
                {
                  pFVar17 = *(FScriptContainerElement **)(pFVar19 + 0x18);
                }
                pFVar20 = pFVar17 + (longlong)iVar10 * 2;
                while( true ) {
                  if (*(int *)(pFVar19 + 0x20) != iVar10) {
                    local_98 = 0;
                    `TCheckedPointerIterator<short,int,0>::operator!='::__l2::<lambda_1>::operator()
                              (&local_98);
                  }
                  uVar22 = local_78;
                  uVar23 = local_7c;
                  if (pFVar17 == pFVar20) break;
                  sVar21 = *(short *)pFVar17;
                  uVar22 = 0;
                  if ((int)sVar21 < (this->Steps).ArrayNum) {
                    uVar22 = (uint)~(int)sVar21 >> 0x1f;
                  }
                  if ((uVar22 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if ((*(longlong *)
                        ((this->Steps).AllocatorInstance.Data + (longlong)sVar21 * 0x40 + 0x30) == 0
                      ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Steps[PrerequisiteIndex].TaskHandle.IsValid()",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
                                               ,0xec,L""), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  uVar22 = 0;
                  if ((int)sVar21 < (this->Steps).ArrayNum) {
                    uVar22 = (uint)~(int)sVar21 >> 0x1f;
                  }
                  if ((uVar22 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pFVar19 = (this->Steps).AllocatorInstance.Data + (longlong)sVar21 * 0x40 + 0x30;
                  if (((local_a8.AllocatorInstance.Data <= pFVar19) &&
                      (pFVar19 < local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 8))
                     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if (local_a8.ArrayNum == local_a8.ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
                    local_a8.ArrayNum = iVar12;
                  }
                  lVar18 = (longlong)local_a8.ArrayNum;
                  local_a8.ArrayNum = local_a8.ArrayNum + 1;
                  *(longlong *)(local_a8.AllocatorInstance.Data + lVar18 * 8) = 0;
                  lVar26 = *(longlong *)pFVar19;
                  *(longlong *)(local_a8.AllocatorInstance.Data + lVar18 * 8) = lVar26;
                  if (lVar26 != 0) {
                    LOCK();
                    *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
                    UNLOCK();
                  }
                  pFVar17 = pFVar17 + 2;
                  pFVar19 = local_70;
                }
                if (pFVar19[0x2d] != (FScriptContainerElement)0x0) {
                  pFVar20 = (this->BrokenLinks).AllocatorInstance.Data;
                  iVar10 = (this->BrokenLinks).ArrayNum;
                  pFVar17 = pFVar20 + (longlong)iVar10 * 4;
                  while( true ) {
                    if ((this->BrokenLinks).ArrayNum != iVar10) {
                      local_97 = 0;
                      `TCheckedPointerIterator<TTuple<short,short>,int,0>::operator!='::__l2::
                      <lambda_1>::operator()(&local_97);
                    }
                    pFVar19 = local_70;
                    if (pFVar20 == pFVar17) break;
                    uVar11 = 0;
                    if ((int)uVar22 < (this->ActiveSteps).ArrayNum) {
                      uVar11 = uVar23;
                    }
                    if ((uVar11 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    if (*(short *)pFVar20 ==
                        *(short *)((this->ActiveSteps).AllocatorInstance.Data + local_68 * 2)) {
                      sVar21 = *(short *)(pFVar20 + 2);
                      uVar11 = 0;
                      if ((int)sVar21 < (this->Steps).ArrayNum) {
                        uVar11 = (uint)~(int)sVar21 >> 0x1f;
                      }
                      if ((uVar11 == 0) &&
                         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar9)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      if ((this->Steps).AllocatorInstance.Data[(longlong)sVar21 * 0x40 + 0x2c] !=
                          (FScriptContainerElement)0x0) {
                        sVar21 = *(short *)(pFVar20 + 2);
                        uVar11 = 0;
                        if ((int)sVar21 < (this->Steps).ArrayNum) {
                          uVar11 = (uint)~(int)sVar21 >> 0x1f;
                        }
                        if ((uVar11 == 0) &&
                           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar9)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        pFVar19 = (this->Steps).AllocatorInstance.Data +
                                  (longlong)sVar21 * 0x40 + 0x30;
                        if (((local_a8.AllocatorInstance.Data <= pFVar19) &&
                            (pFVar19 < local_a8.AllocatorInstance.Data +
                                       (longlong)local_a8.ArrayMax * 8)) &&
                           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar9)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        if (local_a8.ArrayNum == local_a8.ArrayMax) {
                          iVar12 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x808,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
                          local_a8.ArrayNum = iVar12;
                        }
                        lVar18 = (longlong)local_a8.ArrayNum;
                        local_a8.ArrayNum = local_a8.ArrayNum + 1;
                        *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar18 * 8) = 0;
                        lVar26 = *(longlong *)pFVar19;
                        *(longlong *)(local_a8.AllocatorInstance.Data + lVar18 * 8) = lVar26;
                        if (lVar26 != 0) {
                          LOCK();
                          *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
                          UNLOCK();
                        }
                      }
                    }
                    lVar26 = local_68;
                    uVar11 = 0;
                    if ((int)uVar22 < (this->ActiveSteps).ArrayNum) {
                      uVar11 = uVar23;
                    }
                    if ((uVar11 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    if (*(short *)(pFVar20 + 2) ==
                        *(short *)((this->ActiveSteps).AllocatorInstance.Data + lVar26 * 2)) {
                      sVar21 = *(short *)pFVar20;
                      uVar11 = 0;
                      if ((int)sVar21 < (this->Steps).ArrayNum) {
                        uVar11 = (uint)~(int)sVar21 >> 0x1f;
                      }
                      if ((uVar11 == 0) &&
                         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar9)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      if ((this->Steps).AllocatorInstance.Data[(longlong)sVar21 * 0x40 + 0x2c] !=
                          (FScriptContainerElement)0x0) {
                        sVar21 = *(short *)pFVar20;
                        uVar11 = 0;
                        if ((int)sVar21 < (this->Steps).ArrayNum) {
                          uVar11 = (uint)~(int)sVar21 >> 0x1f;
                        }
                        if ((uVar11 == 0) &&
                           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar9)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        pFVar19 = (this->Steps).AllocatorInstance.Data +
                                  (longlong)sVar21 * 0x40 + 0x30;
                        if (((local_a8.AllocatorInstance.Data <= pFVar19) &&
                            (pFVar19 < local_a8.AllocatorInstance.Data +
                                       (longlong)local_a8.ArrayMax * 8)) &&
                           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar9)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        if (local_a8.ArrayNum == local_a8.ArrayMax) {
                          iVar12 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x808,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
                          local_a8.ArrayNum = iVar12;
                        }
                        lVar18 = (longlong)local_a8.ArrayNum;
                        local_a8.ArrayNum = local_a8.ArrayNum + 1;
                        *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar18 * 8) = 0;
                        lVar26 = *(longlong *)pFVar19;
                        *(longlong *)(local_a8.AllocatorInstance.Data + lVar18 * 8) = lVar26;
                        if (lVar26 != 0) {
                          LOCK();
                          *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
                          UNLOCK();
                        }
                      }
                    }
                    pFVar20 = pFVar20 + 4;
                  }
                }
                if (*(longlong **)(pFVar19 + 8) == (longlong *)0x0) {
                  pwVar14 = L"Empty audio render step";
                }
                else {
                  pwVar14 = (wchar_t *)(**(code **)(**(longlong **)(pFVar19 + 8) + 0x10))();
                }
                pFVar15 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                                      *)&UE::Tasks::Private::SmallTaskAllocator);
                if (pFVar15 == (FTaskBase *)0x0) {
                  pFVar15 = (FTaskBase *)0x0;
                }
                else {
                  UE::Tasks::Private::FTaskBase::FTaskBase(pFVar15,2,true);
                  pFVar15->_padding_ =
                       (longlong)
                       &UE::Tasks::Private::
                        TExecutableTaskBase<`Audio::FAudioRenderScheduler::ScheduleAll'::`33'::<lambda_1>,void,void>
                        ::_vftable_;
                  UE::Tasks::Private::FTaskBase::Init(pFVar15,pwVar14,High,None,None);
                  pFVar15[1]._padding_ = (longlong)local_70;
                  pFVar15->_padding_ =
                       (longlong)
                       &UE::Tasks::Private::
                        TExecutableTask<`Audio::FAudioRenderScheduler::ScheduleAll'::`33'::<lambda_1>_>
                        ::_vftable_;
                }
                pFVar17 = local_70;
                UE::Tasks::Private::FTaskBase::
                AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
                          (pFVar15,&local_a8,true);
                UE::Tasks::Private::FTaskBase::TryLaunch(pFVar15,0x100);
                pFVar19 = pFVar17 + 0x30;
                if (pFVar19 == local_58) {
                  if (pFVar15 != (FTaskBase *)0x0) {
                    LOCK();
                    paVar1 = &pFVar15->RefCount;
                    aVar4 = *paVar1;
                    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
                    UNLOCK();
                    if (aVar4 == (atomic<unsigned_int>)0x1) {
                      puVar16 = (undefined8 *)pFVar15->_padding_;
                      goto LAB_14657140c;
                    }
                  }
                }
                else {
                  pFVar6 = *(FTaskBase **)pFVar19;
                  *(FTaskBase **)pFVar19 = pFVar15;
                  if (pFVar6 != (FTaskBase *)0x0) {
                    LOCK();
                    paVar1 = &pFVar6->RefCount;
                    aVar4 = *paVar1;
                    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
                    UNLOCK();
                    if (aVar4 == (atomic<unsigned_int>)0x1) {
                      puVar16 = (undefined8 *)pFVar6->_padding_;
                      pFVar15 = pFVar6;
LAB_14657140c:
                      (*(code *)*puVar16)(pFVar15,1);
                    }
                  }
                }
                pFVar15 = UE::Tasks::Private::GetCurrentTask();
                if ((pFVar15 == (FTaskBase *)0x0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Parent != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                                       ,0x1ff,L""), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar6 = *(FTaskBase **)(pFVar17 + 0x30);
                LOCK();
                paVar1 = &pFVar15->NumLocks;
                aVar4 = *paVar1;
                *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
                UNLOCK();
                if ((aVar4 == (atomic<unsigned_int>)0xfffffffe) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("PrevNumLocks + 1 < TNumericLimits<uint32>::Max()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                                       ,0x1c2,L"Max number of nested tasks reached: %d"), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (((uint)aVar4 < 0x80000001) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("PrevNumLocks > ExecutionFlag",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                                       ,0x1c3,
                                       L"Internal error: nested tasks can be added only during parent\'s execution (%u)"
                                      ), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                bVar9 = UE::Tasks::Private::FTaskBase::AddSubsequent(pFVar6,pFVar15);
                if (bVar9) {
                  LOCK();
                  pFVar6->RefCount = (atomic<unsigned_int>)((int)pFVar6->RefCount + 1);
                  UNLOCK();
                  UE::Tasks::Private::FTaskBase::
                  FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                            (&pFVar15->Prerequisites,pFVar6);
                  pFVar19 = local_70;
                  uVar22 = local_78;
                }
                else {
                  LOCK();
                  pFVar15->NumLocks = (atomic<unsigned_int>)((int)pFVar15->NumLocks + -1);
                  UNLOCK();
                  pFVar19 = local_70;
                  uVar22 = local_78;
                }
              }
              uVar11 = 0;
              if ((int)uVar22 < (this->ActiveSteps).ArrayNum) {
                uVar11 = uVar23;
              }
              if ((uVar11 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar26 = local_68;
              pFVar17 = (this->ActiveSteps).AllocatorInstance.Data + local_68 * 2;
              if (((local_90.Data <= pFVar17) && (pFVar17 < local_90.Data + (longlong)iStack_84 * 2)
                  ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar9)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (local_88 == iStack_84) {
                local_88 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x202,&local_90,&iStack_84);
              }
              lVar18 = (longlong)local_88;
              bVar9 = false;
              local_88 = local_88 + 1;
              *(undefined2 *)(local_90.Data + lVar18 * 2) = *(undefined2 *)pFVar17;
              pFVar19[0x2c] = (FScriptContainerElement)0x1;
              lVar18 = local_60;
              goto LAB_146570b83;
            }
            pFVar17 = pFVar19 + 0x10;
            iVar10 = *(int *)(pFVar19 + 0x20);
            if (*(FScriptContainerElement **)(pFVar19 + 0x18) != (FScriptContainerElement *)0x0) {
              pFVar17 = *(FScriptContainerElement **)(pFVar19 + 0x18);
            }
            pFVar20 = pFVar17 + (longlong)iVar10 * 2;
            while( true ) {
              pFVar19 = local_70;
              if (*(int *)(local_70 + 0x20) != iVar10) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<short,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_res20);
              }
              if (pFVar17 == pFVar20) goto LAB_146570a76;
              sVar21 = *(short *)pFVar17;
              uVar23 = 0;
              if ((int)sVar21 < (this->Steps).ArrayNum) {
                uVar23 = (uint)~(int)sVar21 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar23 = local_80;
              if ((this->Steps).AllocatorInstance.Data[(longlong)sVar21 * 0x40 + 0x2c] ==
                  (FScriptContainerElement)0x0) break;
              pFVar17 = pFVar17 + 2;
            }
          }
          else {
LAB_146570b83:
            local_68 = lVar26;
            uVar23 = local_80 + 1;
            local_60 = lVar18 + 1;
            if (local_68 != lVar18) {
              uVar23 = local_80;
              local_60 = lVar18;
            }
          }
          local_80 = uVar23;
          local_78 = uVar22 + 1;
          lVar26 = local_68 + 1;
          lVar18 = local_60;
          uVar22 = local_78;
        } while ((int)local_78 < (this->ActiveSteps).ArrayNum);
        uVar22 = local_80;
        local_68 = lVar26;
        if (bVar9) goto LAB_146570bbe;
      }
      else {
LAB_146570bbe:
        BreakCycle(this,uVar22);
      }
      iVar10 = (this->ActiveSteps).ArrayNum;
      lVar26 = lVar18;
    } while (local_88 < iVar10);
  }
  pFVar17 = (this->BrokenLinks).AllocatorInstance.Data;
  uVar25 = 0;
  iVar10 = (this->BrokenLinks).ArrayNum;
  pFVar19 = pFVar17 + (longlong)iVar10 * 4;
  while( true ) {
    if ((this->BrokenLinks).ArrayNum != iVar10) {
      local_96[0] = 0;
      `TCheckedPointerIterator<TTuple<short,short>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_96);
    }
    if (pFVar17 == pFVar19) {
      uVar27 = uVar25;
      if (0 < (this->Steps).ArrayNum) {
        do {
          uVar23 = (uint)uVar25;
          uVar22 = 0;
          if ((int)uVar23 < (this->Steps).ArrayNum) {
            uVar22 = ~uVar23 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar19 = (this->Steps).AllocatorInstance.Data;
          pFVar17 = pFVar19 + uVar27 + 0x30;
          if (pFVar17 != local_50) {
            puVar16 = *(undefined8 **)pFVar17;
            *(longlong *)pFVar17 = 0;
            if (puVar16 != (undefined8 *)0x0) {
              LOCK();
              piVar2 = (int *)(puVar16 + 6);
              iVar10 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)*puVar16)(puVar16,1);
              }
            }
          }
          *(undefined2 *)(pFVar19 + uVar27 + 0x2c) = 0;
          uVar25 = (ulonglong)(uVar23 + 1);
          uVar27 = uVar27 + 0x40;
        } while ((int)(uVar23 + 1) < (this->Steps).ArrayNum);
      }
      pTVar3 = &this->ActiveSteps;
      if (pTVar3 != (TArray<short,TSizedDefaultAllocator<32>_> *)&local_90) {
        pFVar19 = (pTVar3->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar3->AllocatorInstance).Data = local_90.Data;
        (this->ActiveSteps).ArrayNum = local_88;
        (this->ActiveSteps).ArrayMax = iStack_84;
        local_88 = 0;
        iStack_84 = 0;
        local_90.Data = (FScriptContainerElement *)0x0;
      }
      this->bDirty = false;
      DestructItems<UE::Tasks::Private::FTaskHandle,int>
                ((FTaskHandle *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
      if (bVar28) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    local_74 = *(undefined4 *)pFVar17;
    sVar21 = (short)((uint)local_74 >> 0x10);
    uVar22 = 0;
    if ((int)sVar21 < (this->Steps).ArrayNum) {
      uVar22 = (uint)~(int)sVar21 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) break;
    FVar24 = (ForElementType<short>)
             ((longlong)(this->Steps).AllocatorInstance.Data + (longlong)sVar21 * 0x40 + 0x10);
    FVar5 = *(ForElementType<short> *)((longlong)FVar24 + 8);
    FVar13 = FVar24;
    if (FVar5 != (ForElementType<short>)0x0) {
      FVar13 = FVar5;
    }
    if ((ulonglong)FVar13 <= &local_74) {
      FVar13 = FVar24;
      if (FVar5 != (ForElementType<short>)0x0) {
        FVar13 = FVar5;
      }
      if ((&local_74 <
           (undefined4 *)((longlong)FVar13 + (longlong)*(int *)((longlong)FVar24 + 0x14) * 2)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar12 = *(int *)((longlong)FVar24 + 0x10);
    if (iVar12 == *(int *)((longlong)FVar24 + 0x14)) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<short>_>
                         (0x202,(ForElementType<short> *)FVar24,(int *)((longlong)FVar24 + 0x14));
    }
    *(int *)((longlong)FVar24 + 0x10) = iVar12 + 1;
    if (*(ForElementType<short> *)((longlong)FVar24 + 8) != (ForElementType<short>)0x0) {
      FVar24 = *(ForElementType<short> *)((longlong)FVar24 + 8);
    }
    pFVar17 = pFVar17 + 4;
    *(undefined2 *)((longlong)FVar24 + (longlong)iVar12 * 2) = (undefined2)local_74;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// operator() @ 1504ed810

bool __thiscall `Audio::FAudioRenderScheduler::AddStep'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4812797909307228071>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4812797909307228071>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504ed850

bool __thiscall
`Audio::FAudioRenderScheduler::RemoveStep'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4812797909307228055>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4812797909307228055>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504ed8d0

bool __thiscall
`Audio::FAudioRenderScheduler::RemoveDependency'::__l20::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4812797909307228012>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4812797909307228012>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

