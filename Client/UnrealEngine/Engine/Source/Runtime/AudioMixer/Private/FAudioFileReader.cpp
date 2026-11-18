// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 4

// FAudioFileReader @ 14653c6a0

/* WARNING: Enum "Type": Some values do not have unique names */

FAudioFileReader * __thiscall
FAudioFileReader::FAudioFileReader(FAudioFileReader *this,FString *param_1)

{
  int *piVar1;
  int *piVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  IFileHandle *pIVar5;
  ICompressedAudioInfo *pIVar6;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar7;
  IFileHandle *pIVar8;
  ulonglong uVar9;
  ICompressedAudioInfo *pIVar10;
  wchar_t *pwVar11;
  undefined8 local_40 [3];
  
  piVar1 = &(this->CompressedFile).ArrayNum;
  (this->FileHandle).Ptr = (IFileHandle *)0x0;
  (this->Decompressor).Ptr = (ICompressedAudioInfo *)0x0;
  piVar2 = &(this->CompressedFile).ArrayMax;
  (this->CompressedFile).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DecompressionBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DecompressionBuffer).ArrayNum = 0;
  (this->DecompressionBuffer).ArrayMax = 0;
  pFVar3 = &(this->QualityInfo).DebugName;
  (this->QualityInfo).DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QualityInfo).DebugName.Data.ArrayNum = 0;
  (this->QualityInfo).DebugName.Data.ArrayMax = 0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->QualityInfo).bStreaming = false;
  (this->QualityInfo).Quality = 0;
  (this->QualityInfo).NumChannels = 0;
  (this->QualityInfo).SampleRate = 0;
  (this->QualityInfo).SampleDataSize = 0;
  (this->QualityInfo).Duration = 0.0;
  if (pFVar3 != (FString *)local_40) {
    pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->QualityInfo).DebugName.Data.ArrayNum = 0;
    (this->QualityInfo).DebugName.Data.ArrayMax = 0;
  }
  this_00 = FPlatformFileManager::Get();
  pIVar7 = FPlatformFileManager::GetPlatformFile(this_00);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pIVar8 = (IFileHandle *)(**(code **)((longlong)*pIVar7 + 0xe8))(pIVar7,pwVar11);
  pIVar5 = (this->FileHandle).Ptr;
  if ((pIVar5 != pIVar8) && ((this->FileHandle).Ptr = pIVar8, pIVar5 != (IFileHandle *)0x0)) {
    (**(code **)*pIVar5)(pIVar5,1);
  }
  pIVar5 = (this->FileHandle).Ptr;
  if (pIVar5 == (IFileHandle *)0x0) {
    (this->QualityInfo).NumChannels = 0;
    if (1 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  else {
    uVar9 = (**(code **)((longlong)*pIVar5 + 0x50))();
    *piVar1 = 0;
    if (*piVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->CompressedFile).AllocatorInstance,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)uVar9,&(this->CompressedFile).AllocatorInstance,piVar1,piVar2);
    pIVar5 = (this->FileHandle).Ptr;
    (**(code **)((longlong)*pIVar5 + 0x20))
              (pIVar5,(this->CompressedFile).AllocatorInstance.Data,uVar9);
    pIVar10 = GetNewDecompressorForFile(this,param_1);
    pIVar6 = (this->Decompressor).Ptr;
    if ((pIVar6 != pIVar10) &&
       ((this->Decompressor).Ptr = pIVar10, pIVar6 != (ICompressedAudioInfo *)0x0)) {
      (**(code **)pIVar6->_padding_)(pIVar6,1);
    }
    pIVar6 = (this->Decompressor).Ptr;
    if (pIVar6 == (ICompressedAudioInfo *)0x0) {
      (this->QualityInfo).NumChannels = 0;
      if (1 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
    }
    else {
      (**(code **)(pIVar6->_padding_ + 8))
                (pIVar6,(this->CompressedFile).AllocatorInstance.Data,uVar9 & 0xffffffff,
                 &this->QualityInfo);
    }
  }
  return this;
}

// GetFileInfo @ 146557d40

void __thiscall FAudioFileReader::GetFileInfo(FAudioFileReader *this,FSoundQualityInfo *param_1)

{
  FString *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FString *pFVar5;
  
  pFVar1 = &param_1->DebugName;
  param_1->Quality = (this->QualityInfo).Quality;
  param_1->NumChannels = (this->QualityInfo).NumChannels;
  param_1->SampleRate = (this->QualityInfo).SampleRate;
  param_1->SampleDataSize = (this->QualityInfo).SampleDataSize;
  param_1->Duration = (this->QualityInfo).Duration;
  pFVar5 = &(this->QualityInfo).DebugName;
  param_1->bStreaming = (this->QualityInfo).bStreaming;
  if (pFVar1 != pFVar5) {
    iVar3 = (param_1->DebugName).Data.ArrayMax;
    piVar2 = &(param_1->DebugName).Data.ArrayMax;
    iVar4 = (this->QualityInfo).DebugName.Data.ArrayNum;
    _Src = (pFVar5->Data).AllocatorInstance.Data;
    (param_1->DebugName).Data.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,iVar3,(ForAnyElementType *)pFVar1,iVar4,piVar2);
    if (iVar4 != 0) {
      memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar4 * 2);
    }
  }
  return;
}

// GetNewDecompressorForFile @ 146558ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

ICompressedAudioInfo * __thiscall
FAudioFileReader::GetNewDecompressorForFile(FAudioFileReader *this,FString *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ForAnyElementType _Src;
  bool bVar3;
  IAudioInfoFactoryRegistry *pIVar4;
  longlong *plVar5;
  ICompressedAudioInfo *pIVar6;
  wchar_t *pwVar7;
  ICompressedAudioInfo *pIVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 auStackY_e8 [32];
  FString local_a8;
  FString local_98;
  FString local_88;
  undefined1 local_78 [40];
  FName local_50;
  FString local_48;
  FName local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  ::FString::FString((FString *)local_78,L".opus");
  local_78._16_4_ = Audio::NAME_OPUS.ComparisonIndex.Value;
  local_78._20_4_ = Audio::NAME_OPUS.Number;
  ::FString::FString((FString *)(local_78 + 0x18),L".vorbis");
  local_50 = Audio::NAME_OGG;
  ::FString::FString(&local_48,L".binka");
  local_38 = Audio::NAME_BINKA;
  ::FString::ToLower(param_1,&local_88);
  _Src.Data = local_88.Data.AllocatorInstance.Data;
  pIVar6 = (ICompressedAudioInfo *)0x0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_88.Data.ArrayNum == 0) {
    local_a8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,local_88.Data.ArrayNum,
               &local_a8.Data.ArrayMax);
    memcpy(local_a8.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_88.Data.ArrayNum * 2);
  }
  ::FString::FString(&local_98,&local_a8);
  pIVar8 = (ICompressedAudioInfo *)local_78;
  while( true ) {
    if (*(int *)&pIVar8->bHasError == 0) {
      pwVar7 = L"";
      iVar2 = 0;
    }
    else {
      pwVar7 = (wchar_t *)pIVar8->_padding_;
      iVar2 = *(int *)&pIVar8->bHasError + -1;
    }
    bVar3 = ::FString::EndsWith(&local_98,pwVar7,iVar2,IgnoreCase);
    if (bVar3) break;
    pIVar8 = (ICompressedAudioInfo *)&(pIVar8->StreamingSoundWave).SharedReferenceCount;
    if (pIVar8 == (ICompressedAudioInfo *)local_30) {
      pIVar8 = pIVar6;
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
LAB_146559148:
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (pIVar8 == (ICompressedAudioInfo *)0x0) {
        if (1 < (byte)LogTemp._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          pIVar6 = (ICompressedAudioInfo *)0x0;
        }
      }
      else {
        pIVar4 = IAudioInfoFactoryRegistry::Get();
        plVar5 = (longlong *)
                 (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,(pIVar8->StreamingSoundWave).Object)
        ;
        if (plVar5 != (longlong *)0x0) {
          pIVar6 = (ICompressedAudioInfo *)(**(code **)(*plVar5 + 8))(plVar5);
        }
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      puVar10 = local_30;
      lVar9 = 3;
      do {
        puVar1 = (undefined8 *)(puVar10 + -0x18);
        puVar10 = puVar10 + -0x18;
        lVar9 = lVar9 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
      } while (lVar9 != 0);
      return pIVar6;
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  goto LAB_146559148;
}

// PopAudio @ 1465665a0

bool __thiscall FAudioFileReader::PopAudio(FAudioFileReader *this,float *param_1,int param_2)

{
  TArray<short,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ICompressedAudioInfo *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uStack_3c;
  TArrayView<float,int> local_38;
  TArrayView<short_const_,int> local_28;
  
  if ((this->FileHandle).Ptr == (IFileHandle *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("FileHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\FileDecoder.cpp"
                       ,0x2e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  if ((this->Decompressor).Ptr == (ICompressedAudioInfo *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Decompressor.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\FileDecoder.cpp"
                       ,0x2f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  pTVar1 = &this->DecompressionBuffer;
  piVar2 = &(this->DecompressionBuffer).ArrayMax;
  (this->DecompressionBuffer).ArrayNum = 0;
  if ((this->DecompressionBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,param_2,&pTVar1->AllocatorInstance,&(this->DecompressionBuffer).ArrayNum,piVar2);
  pIVar3 = (this->Decompressor).Ptr;
  uVar7 = (**(code **)(pIVar3->_padding_ + 0x10))
                    (pIVar3,(pTVar1->AllocatorInstance).Data,0,param_2 * 2);
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = param_2;
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = param_2;
  local_38.DataPtr = param_1;
  local_28.DataPtr = (short *)pFVar4;
  Audio::ArrayPcm16ToFloat(&local_28,&local_38);
  return (bool)uVar7;
}

