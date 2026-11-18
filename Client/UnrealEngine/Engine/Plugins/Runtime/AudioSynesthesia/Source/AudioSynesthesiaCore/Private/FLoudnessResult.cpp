// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 4

// Add @ 14d7fb400

void __thiscall Audio::FLoudnessResult::Add(FLoudnessResult *this,FLoudnessEntry *param_1)

{
  FScriptContainerElement *pFVar1;
  FLoudnessEntry *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_> *pTVar7;
  
  pTVar7 = TMapBase<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->ChannelLoudnessArrays,param_1->Channel,&param_1->Channel);
  pFVar2 = (FLoudnessEntry *)(pTVar7->AllocatorInstance).Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + pTVar7->ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = pTVar7->ArrayNum;
  if (iVar6 == pTVar7->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
  }
  pTVar7->ArrayNum = iVar6 + 1;
  uVar4 = *(undefined8 *)&param_1->Energy;
  pFVar1 = (pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar1 + 8) = uVar4;
  return;
}

// GetChannelLoudnessArray @ 14d806a20

TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FLoudnessResult::GetChannelLoudnessArray(FLoudnessResult *this,int param_1)

{
  TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,0>_>
           ::FindChecked((TMapBase<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->ChannelLoudnessArrays,param_1);
  return pTVar1;
}

// GetLoudnessArray @ 14d807410

TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FLoudnessResult::GetLoudnessArray(FLoudnessResult *this)

{
  TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,0>_>
           ::FindChecked((TMapBase<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->ChannelLoudnessArrays,-1);
  return pTVar1;
}

// GetNumChannels @ 14d807980

int __thiscall Audio::FLoudnessResult::GetNumChannels(FLoudnessResult *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)&(this->ChannelLoudnessArrays).field_0x8 -
          *(int *)&(this->ChannelLoudnessArrays).field_0x34;
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2 + -1;
  }
  return iVar1;
}

