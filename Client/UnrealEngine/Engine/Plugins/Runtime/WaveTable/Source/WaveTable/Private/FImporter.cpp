// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WaveTable
// Functions: 4

// FImporter @ 14b2bce40

FImporter * __thiscall
WaveTable::FImporter::FImporter(FImporter *this,FWaveTableSettings *param_1,bool param_2)

{
  (this->Sampler).Settings.Freq = 1.0;
  (this->Sampler).Settings.Phase = 0.0;
  (this->Sampler).LastIndex = 0.0;
  (this->Sampler).PhaseModScratch.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sampler).PhaseModScratch.ArrayNum = 0;
  (this->Sampler).PhaseModScratch.ArrayMax = 0;
  (this->Sampler).Settings.bOneShot = false;
  this->Settings = param_1;
  this->bBipolar = param_2;
  (this->Sampler).OneShotData.LastOutputIndex = -1.0;
  (this->Sampler).OneShotData.IndexFinished = -1;
  (this->Sampler).Settings.Amplitude = 1.0;
  (this->Sampler).Settings.Offset = 0.0;
  (this->Sampler).Settings.InterpolationMode = Cubic;
  (this->Sampler).Settings.Phase = param_1->Phase;
  return this;
}

// Process @ 14b2c0440

void __thiscall WaveTable::FImporter::Process(FImporter *this,FWaveTableData *param_1)

{
  int *piVar1;
  EWaveTableBitDepth EVar2;
  FWaveTableSettings *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  ForAnyElementType FVar12;
  float fVar13;
  TArray<float,TSizedDefaultAllocator<32>_> local_f8;
  ForAnyElementType local_e8;
  int local_e0 [2];
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TArrayView<float_const_,int> local_b8;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TArrayView<unsigned_char,int> local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78;
  TArrayView<short_const_,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<short,int> local_48 [3];
  
  pFVar3 = this->Settings;
  iVar9 = 0;
  iVar7 = FWaveTableData::GetNumSamples(&pFVar3->SourceData);
  if (iVar7 < 1) {
LAB_14b2c0990:
    iVar9 = (param_1->Data).ArrayNum;
    piVar1 = &(param_1->Data).ArrayMax;
    if (*piVar1 != iVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar9,&(param_1->Data).AllocatorInstance,iVar9,piVar1);
    }
    memset((param_1->Data).AllocatorInstance.Data,0,(longlong)(param_1->Data).ArrayNum);
    return;
  }
  fVar13 = 0.0;
  iVar8 = iVar7;
  if (0.0 < pFVar3->Top) {
    iVar8 = RatioToIndex(pFVar3->Top,iVar7);
    iVar9 = iVar7;
    if (iVar8 < iVar7) {
      iVar9 = iVar8;
    }
    iVar8 = iVar7 - iVar9;
  }
  if (0.0 < pFVar3->Tail) {
    iVar10 = (int)((float)iVar7 * pFVar3->Tail);
    if (iVar7 + -1 < iVar10) {
      iVar10 = iVar7 + -1;
    }
    if (iVar10 < iVar7) {
      iVar7 = iVar10;
    }
    iVar8 = iVar8 - iVar7;
  }
  iVar7 = 0;
  if (0 < iVar8) {
    iVar7 = iVar8;
  }
  if (iVar7 == 0) goto LAB_14b2c0990;
  pFVar3 = this->Settings;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0[0] = 0;
  local_e0[1] = 0;
  local_d8 = (FScriptContainerElement *)0x0;
  EVar2 = (pFVar3->SourceData).BitDepth;
  iStack_d0 = 0;
  if (EVar2 == PCM_16) {
    pFVar4 = (pFVar3->SourceData).Data.AllocatorInstance.Data;
    if (((int)((ulonglong)(longlong)(pFVar3->SourceData).Data.ArrayNum >> 1) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uStack_bc = local_b8._12_4_;
    local_c8 = pFVar4 + (longlong)iVar9 * 2;
    iStack_c0 = iVar7;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar7,&local_e8,local_e0,local_e0 + 1);
    memset(local_e8.Data + (longlong)iVar9 * 4,0,(longlong)iVar7 << 2);
    iStack_a0 = local_e0[0];
    local_a8 = local_e8.Data;
    if ((local_e0[0] < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_68._12_4_ = uStack_bc;
    local_68.ArrayNum = iStack_c0;
    local_78._12_4_ = uStack_9c;
    local_78.ArrayNum = iStack_a0;
    local_78.DataPtr = (float *)local_a8;
    local_68.DataPtr = (short *)local_c8;
    Audio::ArrayPcm16ToFloat(&local_68,&local_78);
    FVar12.Data = local_e8.Data;
    iVar7 = local_e0[0];
    if (local_e0[0] < 0) {
      iVar9 = 0xeb;
      pcVar11 = "InCount >= 0";
LAB_14b2c06d4:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar11,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,iVar9,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  else {
    if (EVar2 != IEEE_Float) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableImporter.cpp"
                         ,0x7c,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_14b2c06fe;
    }
    pFVar4 = (pFVar3->SourceData).Data.AllocatorInstance.Data;
    if (((int)((ulonglong)(longlong)(pFVar3->SourceData).Data.ArrayNum >> 2) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar12.Data = pFVar4 + (longlong)iVar9 * 4;
    if (iVar7 < 0) {
      iVar9 = 0xfe;
      pcVar11 = "ArrayNum >= 0";
      goto LAB_14b2c06d4;
    }
  }
  uStack_cc = local_b8._12_4_;
  local_d8 = FVar12.Data;
  iStack_d0 = iVar7;
LAB_14b2c06fe:
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  iVar9 = FWaveTableData::GetNumSamples(param_1);
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar9,&local_f8.AllocatorInstance,&local_f8.ArrayNum,&local_f8.ArrayMax);
  memset(local_f8.AllocatorInstance.Data + (longlong)iVar7 * 4,0,(longlong)iVar9 << 2);
  local_58._12_4_ = uStack_cc;
  local_58.ArrayNum = iStack_d0;
  local_58.DataPtr = (float *)local_d8;
  ProcessInternal(this,&local_58,&local_f8);
  FVar12.Data = local_f8.AllocatorInstance.Data;
  if (param_1->BitDepth == PCM_16) {
    pFVar4 = (param_1->Data).AllocatorInstance.Data;
    iVar9 = (int)((ulonglong)(longlong)(param_1->Data).ArrayNum >> 1);
    if ((iVar9 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = local_f8.ArrayNum;
    uStack_bc = local_48[1]._12_4_;
    local_88 = local_f8.AllocatorInstance.Data;
    local_c8 = pFVar4;
    iStack_c0 = iVar9;
    if ((local_f8.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_48[0]._12_4_ = uStack_bc;
    local_48[0].ArrayNum = iStack_c0;
    iStack_80 = iVar7;
    local_b8._12_4_ = uStack_7c;
    local_b8.ArrayNum = iVar7;
    local_48[0].DataPtr = (short *)local_c8;
    local_b8.DataPtr = (float *)local_88;
    Audio::ArrayFloatToPcm16(&local_b8,local_48);
    if (iVar9 != 0) {
      if ((iVar9 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      param_1->FinalValue = (float)(int)*(short *)pFVar4 * __real_38000100;
    }
  }
  else if (param_1->BitDepth == IEEE_Float) {
    iVar9 = local_f8.ArrayNum;
    if ((local_f8.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_98.ArrayNum = iVar9 * 4;
    local_98.DataPtr = (uchar *)FVar12.Data;
    if ((local_98.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char,int>
              (&param_1->Data,&local_98);
    param_1->BitDepth = IEEE_Float;
    if (iVar9 != 0) {
      if ((iVar9 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar13 = *(float *)FVar12.Data;
    }
    param_1->FinalValue = fVar13;
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableImporter.cpp"
                       ,0xa0,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  if (local_e8.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_e8.Data);
  return;
}

// Process @ 14b2c0a00

void __thiscall
WaveTable::FImporter::Process(FImporter *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// ProcessInternal @ 14b2c12b0

void __thiscall
WaveTable::FImporter::ProcessInternal
          (FImporter *this,TArrayView<float_const_,int> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  TArrayView<float,int> *pTVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined4 uStack_17c;
  undefined4 uStack_16c;
  undefined4 uStack_15c;
  undefined4 uStack_14c;
  undefined4 uStack_13c;
  TArrayView<float,int> local_138;
  TArrayView<float_const_,int> local_128;
  TArrayView<float,int> local_118;
  TArrayView<float_const_,int> local_108;
  TArrayView<float,int> local_f8;
  TArrayView<float,int> local_e8;
  TArrayView<float,int> local_d8;
  TArrayView<float,int> local_c8;
  TArrayView<float,int> local_b8;
  FWaveTableView local_a8;
  TArrayView<float,int> local_90;
  TArrayView<float,int> local_80;
  TArrayView<float,int> local_70 [5];
  
  local_a8.SampleView.DataPtr = param_1->DataPtr;
  local_a8.SampleView.ArrayNum = param_1->ArrayNum;
  local_a8.SampleView._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pfVar7 = TArrayView<float_const_,int>::Last(param_1,0);
  local_a8.FinalValue = *pfVar7;
  (this->Sampler).LastIndex = 0.0;
  local_138.DataPtr = (float *)(param_2->AllocatorInstance).Data;
  iVar5 = param_2->ArrayNum;
  if ((iVar5 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_138._12_4_ = uStack_16c;
  local_138.ArrayNum = iVar5;
  FWaveTableSampler::Process(&this->Sampler,&local_a8,&local_138);
  fVar11 = 0.0;
  if ((this->Settings->bRemoveOffset != false) || (this->bBipolar == false)) {
    pFVar1 = (param_2->AllocatorInstance).Data;
    iVar5 = param_2->ArrayNum;
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_128._12_4_ = uStack_15c;
    local_128.ArrayNum = iVar5;
    local_128.DataPtr = (float *)pFVar1;
    fVar11 = Audio::ArrayGetAverageValue(&local_128);
    local_118.DataPtr = (float *)(param_2->AllocatorInstance).Data;
    iVar5 = param_2->ArrayNum;
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_118._12_4_ = uStack_14c;
    local_118.ArrayNum = iVar5;
    Audio::ArrayAddConstantInplace
              (&local_118,(float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000));
  }
  fVar3 = __real_3f800000;
  if (this->Settings->bNormalize != false) {
    pFVar1 = (param_2->AllocatorInstance).Data;
    iVar5 = param_2->ArrayNum;
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_108._12_4_ = uStack_13c;
    local_108.ArrayNum = iVar5;
    local_108.DataPtr = (float *)pFVar1;
    fVar10 = Audio::ArrayMaxAbsValue(&local_108);
    if (0.0 < fVar10) {
      pTVar8 = TArrayView<float,int>::
               TArrayView<float,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                         (&local_90,param_2);
      local_f8.DataPtr = pTVar8->DataPtr;
      local_f8.ArrayNum = pTVar8->ArrayNum;
      local_f8._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
      Audio::ArrayMultiplyByConstantInPlace(&local_f8,fVar3 / fVar10);
    }
  }
  fVar10 = this->Settings->FadeIn;
  if (0.0 < fVar10) {
    iVar5 = RatioToIndex(fVar10,param_2->ArrayNum);
    local_e8.DataPtr = (float *)(param_2->AllocatorInstance).Data;
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_e8._12_4_ = uStack_17c;
    local_e8.ArrayNum = iVar5;
    Audio::ArrayFade(&local_e8,0.0,fVar3);
  }
  fVar10 = this->Settings->FadeOut;
  if (0.0 < fVar10) {
    iVar5 = RatioToIndex(fVar10,param_2->ArrayNum);
    uVar6 = RatioToIndex(fVar3 - this->Settings->FadeOut,param_2->ArrayNum);
    uVar9 = 0;
    if ((int)uVar6 < param_2->ArrayNum) {
      uVar9 = ~uVar6 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_2->AllocatorInstance).Data;
    if ((iVar5 + 1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_d8._12_4_ = uStack_17c;
    local_d8.ArrayNum = iVar5 + 1;
    local_d8.DataPtr = (float *)(pFVar1 + (longlong)(int)uVar6 * 4);
    Audio::ArrayFade(&local_d8,fVar3,0.0);
  }
  if (this->bBipolar == false) {
    pTVar8 = TArrayView<float,int>::
             TArrayView<float,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                       (&local_80,param_2);
    local_c8.DataPtr = pTVar8->DataPtr;
    local_c8.ArrayNum = pTVar8->ArrayNum;
    local_c8._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
    Audio::ArrayAbsInPlace(&local_c8);
    if (this->Settings->bRemoveOffset == false) {
      pTVar8 = TArrayView<float,int>::
               TArrayView<float,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                         (local_70,param_2);
      local_b8.DataPtr = pTVar8->DataPtr;
      local_b8.ArrayNum = pTVar8->ArrayNum;
      local_b8._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
      Audio::ArrayAddConstantInplace(&local_b8,fVar11);
    }
  }
  return;
}

