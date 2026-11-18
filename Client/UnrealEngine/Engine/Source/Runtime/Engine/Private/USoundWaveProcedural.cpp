// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// USoundWaveProcedural @ 148712dd0

USoundWaveProcedural * __thiscall
USoundWaveProcedural::USoundWaveProcedural(USoundWaveProcedural *this,FVTableHelper *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  USoundWave::USoundWave((USoundWave *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x180 = &_vftable__for__IAudioProxyDataFactory__;
  *(undefined ***)&this->field_0x188 = &_vftable__for__IInterface_AsyncCompilation__;
  pTVar1 = ::operator_new(0x18);
  pTVar2 = (TNode *)0x0;
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Item).ArrayNum = 0;
    (pTVar1->Item).ArrayMax = 0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Item).ArrayNum = 0;
    (pTVar1->Item).ArrayMax = 0;
    pTVar2 = pTVar1;
  }
  (this->QueuedAudio).Tail = pTVar2;
  (this->QueuedAudio).Head = pTVar2;
  (this->AvailableByteCount).Counter = 0;
  (this->AudioBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioBuffer).ArrayNum = 0;
  (this->AudioBuffer).ArrayMax = 0;
  this->bReset = (FThreadSafeBool)0x0;
  *(undefined8 *)&this->OnSoundWaveProceduralUnderflow = 0;
  *(undefined8 *)&(this->OnSoundWaveProceduralUnderflow).field_0x8 = 0;
  *(undefined4 *)&(this->OnSoundWaveProceduralUnderflow).field_0x10 = 0;
  return this;
}

// USoundWaveProcedural @ 148712ea0

USoundWaveProcedural * __thiscall
USoundWaveProcedural::USoundWaveProcedural(USoundWaveProcedural *this,FObjectInitializer *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  USoundWave::USoundWave((USoundWave *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x180 = &_vftable__for__IAudioProxyDataFactory__;
  *(undefined ***)&this->field_0x188 = &_vftable__for__IInterface_AsyncCompilation__;
  pTVar1 = ::operator_new(0x18);
  pTVar2 = (TNode *)0x0;
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Item).ArrayNum = 0;
    (pTVar1->Item).ArrayMax = 0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Item).ArrayNum = 0;
    (pTVar1->Item).ArrayMax = 0;
    pTVar2 = pTVar1;
  }
  (this->QueuedAudio).Tail = pTVar2;
  (this->QueuedAudio).Head = pTVar2;
  this->field_0x364 = this->field_0x364 | 1;
  (this->AvailableByteCount).Counter = 0;
  (this->AudioBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioBuffer).ArrayNum = 0;
  (this->AudioBuffer).ArrayMax = 0;
  this->bReset = (FThreadSafeBool)0x0;
  *(undefined8 *)&this->OnSoundWaveProceduralUnderflow = 0;
  *(undefined8 *)&(this->OnSoundWaveProceduralUnderflow).field_0x8 = 0;
  *(undefined4 *)&(this->OnSoundWaveProceduralUnderflow).field_0x10 = 0;
  LOCK();
  this->bReset = (FThreadSafeBool)0x0;
  UNLOCK();
  this->NumBufferUnderrunSamples = 0x200;
  this->NumSamplesToGeneratePerCallback = 0x400;
  this->SampleByteSize = 2;
  return this;
}

// ~USoundWaveProcedural @ 148714bb0

void __thiscall USoundWaveProcedural::~USoundWaveProcedural(USoundWaveProcedural *this)

{
  FScriptContainerElement *pFVar1;
  TNode *pTVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x180 = &_vftable__for__IAudioProxyDataFactory__;
  *(undefined ***)&this->field_0x188 = &_vftable__for__IInterface_AsyncCompilation__;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSoundWaveProceduralUnderflow);
  pFVar1 = (this->AudioBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->QueuedAudio).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->QueuedAudio).Tail = pTVar2->NextNode;
    pFVar1 = (pTVar2->Item).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pTVar2,0x18);
    pTVar2 = (this->QueuedAudio).Tail;
  }
  USoundWave::~USoundWave((USoundWave *)this);
  return;
}

// BeginGetCompressedData @ 148722ba0

void __thiscall
USoundWaveProcedural::BeginGetCompressedData
          (USoundWaveProcedural *this,FName param_1,FPlatformAudioCookOverrides *param_2,
          ITargetPlatform *param_3)

{
  return;
}

// GeneratePCMData @ 1487360d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
USoundWaveProcedural::GeneratePCMData(USoundWaveProcedural *this,uchar *param_1,int param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  FReadAccessScope *this_00;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong *plVar18;
  int local_res8 [2];
  uchar *local_res10;
  int local_res18;
  int *local_98;
  USoundWaveProcedural *local_90;
  ForAnyElementType local_88 [2];
  undefined8 local_78 [2];
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  pTVar2 = &this->AudioBuffer;
  plVar18 = (longlong *)0x0;
  local_res10 = param_1;
  if (this->bReset != (FThreadSafeBool)0x0) {
    LOCK();
    this->bReset = (FThreadSafeBool)0x0;
    UNLOCK();
    (this->AudioBuffer).ArrayNum = 0;
    if ((this->AudioBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&pTVar2->AllocatorInstance,0,&(this->AudioBuffer).ArrayMax);
    }
    LOCK();
    (this->AvailableByteCount).Counter = 0;
    UNLOCK();
  }
  iVar11 = (**(code **)(*(longlong *)this + 0x3f0))(this);
  iVar12 = (this->AudioBuffer).ArrayNum;
  iVar13 = 4;
  if (iVar11 == 2) {
    iVar13 = 2;
  }
  this->SampleByteSize = iVar13;
  if (this->NumSamplesToGeneratePerCallback < param_2) {
    param_2 = this->NumSamplesToGeneratePerCallback;
  }
  local_res18 = param_2;
  if ((param_2 < this->NumBufferUnderrunSamples) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SamplesToGenerate >= NumBufferUnderrunSamples",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWaveProcedural.cpp"
                         ,0x4a,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar12 = (*pcVar7)();
    return iVar12;
  }
  if (iVar12 / iVar13 < param_2) {
    iVar12 = (**(code **)(*(longlong *)this + 0x420))(this,pTVar2);
    if (0 < iVar12) {
      local_res8[0] = iVar12 * this->SampleByteSize;
      iVar12 = (this->AudioBuffer).ArrayNum;
      bVar8 = SBORROW4(local_res8[0],iVar12);
      iVar13 = local_res8[0] - iVar12;
      if (iVar12 < local_res8[0]) {
        local_98 = local_res8;
        local_90 = this;
        `USoundWaveProcedural::GeneratePCMData'::__l18::<lambda_1>::operator()(&local_98);
        iVar13 = (this->AudioBuffer).ArrayNum;
        bVar8 = SBORROW4(local_res8[0],iVar13);
        iVar13 = local_res8[0] - iVar13;
      }
      if (bVar8 != iVar13 < 0) {
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(pTVar2,local_res8[0],No);
      }
      bVar8 = false;
      goto LAB_1487363fa;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnSoundWaveProceduralUnderflow,&local_68);
    if (((*(int *)&(this->OnSoundWaveProceduralUnderflow).field_0x10 == 0) ||
        (plVar15 = *(longlong **)&(this->OnSoundWaveProceduralUnderflow).field_0x8,
        plVar15 == (longlong *)0x0)) || (cVar9 = (**(code **)(*plVar15 + 0x38))(), cVar9 == '\0')) {
      this_00 = &local_68;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnSoundWaveProceduralUnderflow,&local_50);
      plVar15 = plVar18;
      if (*(int *)&(this->OnSoundWaveProceduralUnderflow).field_0x10 != 0) {
        plVar15 = *(longlong **)&(this->OnSoundWaveProceduralUnderflow).field_0x8;
      }
      (**(code **)(*plVar15 + 0x60))(plVar15,this);
      this_00 = &local_50;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (this_00);
  }
  pFVar17 = (FScriptContainerElement *)0x0;
  pTVar2 = &this->AudioBuffer;
  while (param_2 = local_res18, pTVar4 = ((this->QueuedAudio).Tail)->NextNode,
        pTVar4 != (TNode *)0x0) {
    pTVar1 = &pTVar4->Item;
    if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_88 != pTVar1) {
      if (pFVar17 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar17);
      }
      pFVar17 = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      plVar18 = (longlong *)(ulonglong)(uint)(pTVar4->Item).ArrayNum;
      (pTVar4->Item).ArrayNum = 0;
      (pTVar4->Item).ArrayMax = 0;
    }
    pTVar5 = (this->QueuedAudio).Tail;
    (this->QueuedAudio).Tail = pTVar4;
    if (pTVar1 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_78) {
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pTVar4->Item).ArrayNum = 0;
      (pTVar4->Item).ArrayMax = 0;
    }
    if (pTVar5 != (TNode *)0x0) {
      pFVar6 = (pTVar5->Item).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pTVar5,0x18);
    }
    if ((pTVar2 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_88) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      iVar12 = (*pcVar7)();
      return iVar12;
    }
    iVar12 = (int)plVar18;
    if (iVar12 != 0) {
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,iVar12,&pTVar2->AllocatorInstance,&(this->AudioBuffer).ArrayNum,
                          &(this->AudioBuffer).ArrayMax);
      memcpy((pTVar2->AllocatorInstance).Data + iVar13,pFVar17,(longlong)iVar12);
    }
  }
  if (pFVar17 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar17);
  }
  bVar8 = true;
  param_1 = local_res10;
LAB_1487363fa:
  iVar12 = (this->AudioBuffer).ArrayNum;
  iVar13 = this->SampleByteSize;
  iVar11 = iVar12 / iVar13;
  if (iVar11 < 1) {
    uVar16 = iVar13 * this->NumBufferUnderrunSamples;
    memset(param_1,0,(longlong)(int)uVar16);
  }
  else {
    if (param_2 < iVar11) {
      iVar11 = param_2;
    }
    uVar16 = iVar11 * iVar13;
    if ((iVar12 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      iVar12 = (*pcVar7)();
      return iVar12;
    }
    memcpy(param_1,(this->AudioBuffer).AllocatorInstance.Data,(longlong)(int)uVar16);
    uVar14 = 0;
    if ((int)uVar16 <= (this->AudioBuffer).ArrayNum) {
      uVar14 = ~uVar16 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar10)) {
      pcVar7 = (code *)swi(3);
      iVar12 = (*pcVar7)();
      return iVar12;
    }
    if (uVar16 != 0) {
      pFVar17 = (this->AudioBuffer).AllocatorInstance.Data;
      iVar12 = (this->AudioBuffer).ArrayNum - uVar16;
      if (iVar12 != 0) {
        memmove(pFVar17,pFVar17 + (int)uVar16,(longlong)iVar12);
      }
      piVar3 = &(this->AudioBuffer).ArrayNum;
      *piVar3 = *piVar3 - uVar16;
    }
    if (bVar8) {
      LOCK();
      (this->AvailableByteCount).Counter = (this->AvailableByteCount).Counter - uVar16;
      UNLOCK();
    }
  }
  return uVar16;
}

// GetAssetRegistryTags @ 148738da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
USoundWaveProcedural::GetAssetRegistryTags
          (USoundWaveProcedural *this,
          TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  USoundWaveProcedural *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(USoundWaveProcedural **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
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
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(USoundWaveProcedural **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(*(longlong *)this + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(USoundWaveProcedural **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
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
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 148738db0

void __thiscall
USoundWaveProcedural::GetAssetRegistryTags
          (USoundWaveProcedural *this,FAssetRegistryTagsContext param_1)

{
  FAssetRegistryTagsContext FVar1;
  FAssetRegistryTagsContext local_res18 [2];
  
  FVar1.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(local_res18,param_1.Data);
  USoundWave::GetAssetRegistryTags((USoundWave *)this,FVar1);
  return;
}

// GetAvailableAudioByteCount @ 148739e20

int __thiscall USoundWaveProcedural::GetAvailableAudioByteCount(USoundWaveProcedural *this)

{
  return (this->AvailableByteCount).Counter;
}

// GetCompressedData @ 14873a800

TBulkData<unsigned_char> * __thiscall
USoundWaveProcedural::GetCompressedData
          (USoundWaveProcedural *this,FName param_1,FPlatformAudioCookOverrides *param_2,
          ITargetPlatform *param_3)

{
  return (TBulkData<unsigned_char> *)0x0;
}

// GetPrivateStaticClass @ 14873e750

UClass * __cdecl USoundWaveProcedural::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundWaveProcedural.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundWaveProcedural",
               &Z_Registration_Info_UClass_USoundWaveProcedural.InnerSingleton,
               StaticRegisterNativesUSoundWaveProcedural,0x470,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundWaveProcedural>,
               InternalVTableHelperCtorCaller<USoundWaveProcedural>,local_res8,
               USoundWave::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundWaveProcedural.InnerSingleton;
}

// GetResourceSizeForFormat @ 14873f450

int __thiscall
USoundWaveProcedural::GetResourceSizeForFormat(USoundWaveProcedural *this,FName param_1)

{
  return 0;
}

// HasCompressedData @ 148742a20

bool __thiscall
USoundWaveProcedural::HasCompressedData
          (USoundWaveProcedural *this,FName param_1,ITargetPlatform *param_2)

{
  return false;
}

// InitAudioResource @ 148743d20

void __thiscall
USoundWaveProcedural::InitAudioResource
          (USoundWaveProcedural *this,TBulkData<unsigned_char> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWaveProcedural.cpp"
                     ,0xc6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// InitAudioResource @ 148743d60

bool __thiscall USoundWaveProcedural::InitAudioResource(USoundWaveProcedural *this,FName param_1)

{
  return true;
}

// OnGeneratePCMAudio @ 14874d040

int __thiscall
USoundWaveProcedural::OnGeneratePCMAudio
          (USoundWaveProcedural *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  return 0;
}

// PumpQueuedAudio @ 148750150

void __thiscall USoundWaveProcedural::PumpQueuedAudio(USoundWaveProcedural *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *_Src;
  int iVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType local_38 [2];
  undefined8 local_28 [2];
  
  _Src = (FScriptContainerElement *)0x0;
  pFVar9 = _Src;
  do {
    pTVar2 = ((this->QueuedAudio).Tail)->NextNode;
    if (pTVar2 == (TNode *)0x0) {
      if (_Src != (FScriptContainerElement *)0x0) {
        FMemory::Free(_Src);
        return;
      }
      return;
    }
    pTVar1 = &pTVar2->Item;
    if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_38 != pTVar1) {
      if (_Src != (FScriptContainerElement *)0x0) {
        FMemory::Free(_Src);
      }
      _Src = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pFVar9 = (FScriptContainerElement *)(ulonglong)(uint)(pTVar2->Item).ArrayNum;
      (pTVar2->Item).ArrayNum = 0;
      (pTVar2->Item).ArrayMax = 0;
    }
    pTVar3 = (this->QueuedAudio).Tail;
    (this->QueuedAudio).Tail = pTVar2;
    if (pTVar1 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_28) {
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pTVar2->Item).ArrayNum = 0;
      (pTVar2->Item).ArrayMax = 0;
    }
    if (pTVar3 != (TNode *)0x0) {
      pFVar4 = (pTVar3->Item).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      ::operator_delete(pTVar3,0x18);
    }
    pTVar1 = &this->AudioBuffer;
    if (pTVar1 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_38) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = (int)pFVar9;
    if (iVar8 != 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar8,&pTVar1->AllocatorInstance,&(this->AudioBuffer).ArrayNum,
                         &(this->AudioBuffer).ArrayMax);
      memcpy((pTVar1->AllocatorInstance).Data + iVar7,_Src,(longlong)iVar8);
    }
  } while( true );
}

// QueueAudio @ 1487502d0

void __thiscall
USoundWaveProcedural::QueueAudio(USoundWaveProcedural *this,uchar *param_1,int param_2)

{
  TNode *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TNode *pTVar5;
  int iVar6;
  ForAnyElementType local_18;
  int local_10 [2];
  
  iVar4 = (**(code **)(*(longlong *)this + 0x3f0))();
  iVar6 = 4;
  if (iVar4 == 2) {
    iVar6 = 2;
  }
  this->SampleByteSize = iVar6;
  if (param_2 != 0) {
    if (param_2 % iVar6 == 0) {
      local_18.Data = (FScriptContainerElement *)0x0;
      local_10[0] = 0;
      local_10[1] = 0;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_2,&local_18,local_10,local_10 + 1);
      memcpy(local_18.Data,param_1,(longlong)param_2);
      pTVar5 = ::operator_new(0x18);
      if (pTVar5 != (TNode *)0x0) {
        pTVar5->NextNode = (TNode *)0x0;
        (pTVar5->Item).AllocatorInstance.Data = local_18.Data;
        local_18.Data = (FScriptContainerElement *)0x0;
        (pTVar5->Item).ArrayNum = local_10[0];
        (pTVar5->Item).ArrayMax = local_10[1];
        pTVar1 = (this->QueuedAudio).Head;
        local_10[0] = 0;
        local_10[1] = 0;
        (this->QueuedAudio).Head = pTVar5;
        pTVar1->NextNode = pTVar5;
      }
      LOCK();
      (this->AvailableByteCount).Counter = (this->AvailableByteCount).Counter + param_2;
      UNLOCK();
      if (local_18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data);
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4423401627197636573>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWaveProcedural.cpp"
                         ,0x23,"(BufferSize % SampleByteSize) == 0");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// ResetAudio @ 148754a60

void __thiscall USoundWaveProcedural::ResetAudio(USoundWaveProcedural *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  FScriptContainerElement *pFVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined8 local_18 [2];
  
  while (pTVar1 = ((this->QueuedAudio).Tail)->NextNode, pTVar1 != (TNode *)0x0) {
    pTVar2 = (this->QueuedAudio).Tail;
    (this->QueuedAudio).Tail = pTVar1;
    pTVar4 = &pTVar1->Item;
    if (pTVar4 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_18) {
      pFVar3 = (pTVar4->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pTVar1->Item).ArrayNum = 0;
      (pTVar1->Item).ArrayMax = 0;
    }
    if (pTVar2 != (TNode *)0x0) {
      pFVar3 = (pTVar2->Item).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      ::operator_delete(pTVar2,0x18);
    }
  }
  LOCK();
  this->bReset = (FThreadSafeBool)0x1;
  UNLOCK();
  return;
}

// Serialize @ 1487587f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall USoundWaveProcedural::Serialize(USoundWaveProcedural *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive FStack_1a0;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&FStack_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&FStack_1a0);
  return;
}

// Serialize @ 148758800

void __thiscall
USoundWaveProcedural::Serialize(USoundWaveProcedural *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  USoundBase::Serialize((USoundBase *)this,pFVar1);
  return;
}

// StaticRegisterNativesUSoundWaveProcedural @ 14875d130

void __cdecl USoundWaveProcedural::StaticRegisterNativesUSoundWaveProcedural(void)

{
  return;
}

// operator() @ 150530210

bool __thiscall `USoundWaveProcedural::GeneratePCMData'::__l18::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4423401627197636521>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4423401627197636521>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

