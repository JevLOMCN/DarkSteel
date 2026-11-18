// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 2

// FPeakPicker @ 14d7f88e0

FPeakPicker * __thiscall
Audio::FPeakPicker::FPeakPicker(FPeakPicker *this,FPeakPickerSettings *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = param_1->NumPostMax;
  iVar1 = param_1->NumPreMean;
  iVar2 = param_1->NumPostMean;
  (this->Settings).NumPreMax = param_1->NumPreMax;
  (this->Settings).NumPostMax = iVar3;
  (this->Settings).NumPreMean = iVar1;
  (this->Settings).NumPostMean = iVar2;
  fVar4 = param_1->MeanDelta;
  (this->Settings).NumWait = param_1->NumWait;
  (this->Settings).MeanDelta = fVar4;
  iVar3 = (this->Settings).NumPreMax;
  fVar4 = (this->Settings).MeanDelta;
  if (__real_7f800000 <= fVar4) {
    fVar4 = __real_7f800000;
  }
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  (this->Settings).NumPreMax = iVar3;
  iVar3 = (this->Settings).NumPostMax;
  if (fVar4 <= __real_358637bd) {
    fVar4 = __real_358637bd;
  }
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  (this->Settings).NumPostMax = iVar3;
  iVar3 = (this->Settings).NumPreMean;
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  (this->Settings).MeanDelta = fVar4;
  (this->Settings).NumPreMean = iVar3;
  iVar3 = (this->Settings).NumPostMean;
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  (this->Settings).NumPostMean = iVar3;
  iVar3 = (this->Settings).NumWait;
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  (this->Settings).NumWait = iVar3;
  return this;
}

// PickPeaks @ 14d8083a0

void __thiscall
Audio::FPeakPicker::PickPeaks
          (FPeakPicker *this,TArrayView<float_const_,int> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  int local_78 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_70;
  TArray<float,TSizedDefaultAllocator<32>_> local_60;
  TArrayView<float_const_,int> local_48;
  TArrayView<float_const_,int> local_38;
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  iVar2 = param_1->ArrayNum;
  if (0 < iVar2) {
    local_48.DataPtr = param_1->DataPtr;
    local_48.ArrayNum = param_1->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
    iVar9 = (this->Settings).NumPreMax;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    ArrayMaxFilter(&local_48,(this->Settings).NumPostMax + 1 + iVar9,iVar9,&local_60);
    local_38.DataPtr = param_1->DataPtr;
    local_38.ArrayNum = param_1->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
    iVar9 = (this->Settings).NumPreMean;
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    ArrayMeanFilter(&local_38,(this->Settings).NumPostMean + 1 + iVar9,iVar9,&local_70);
    FVar7.Data = local_60.AllocatorInstance.Data;
    FVar6.Data = local_70.AllocatorInstance.Data;
    pfVar3 = param_1->DataPtr;
    local_78[0] = 0;
    do {
      if ((pfVar3[local_78[0]] < *(float *)(FVar7.Data + (longlong)local_78[0] * 4)) ||
         (pfVar3[local_78[0]] <
          *(float *)(FVar6.Data + (longlong)local_78[0] * 4) + (this->Settings).MeanDelta)) {
        local_78[0] = local_78[0] + 1;
      }
      else {
        pFVar4 = (param_2->AllocatorInstance).Data;
        if ((pFVar4 <= (FScriptContainerElement *)local_78) &&
           ((FScriptContainerElement *)local_78 < pFVar4 + (longlong)*piVar1 * 4)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar9 = param_2->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar9 + 1;
        *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_78[0];
        local_78[0] = (this->Settings).NumWait + local_78[0];
      }
    } while (local_78[0] < iVar2);
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  return;
}

