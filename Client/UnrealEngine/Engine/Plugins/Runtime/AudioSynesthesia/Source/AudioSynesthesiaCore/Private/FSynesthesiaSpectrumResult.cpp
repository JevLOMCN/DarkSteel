// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 3

// Add @ 14d7fb590

void __thiscall
Audio::FSynesthesiaSpectrumResult::Add
          (FSynesthesiaSpectrumResult *this,FSynesthesiaSpectrumEntry *param_1)

{
  FSynesthesiaSpectrumEntry *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<Audio::FSynesthesiaSpectrumEntry,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  
  pTVar6 = TMapBase<int,TArray<Audio::FSynesthesiaSpectrumEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FSynesthesiaSpectrumEntry,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,TArray<Audio::FSynesthesiaSpectrumEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FSynesthesiaSpectrumEntry,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->ChannelSpectrumArrays,param_1->Channel,&param_1->Channel);
  pFVar1 = (FSynesthesiaSpectrumEntry *)(pTVar6->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + pTVar6->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = pTVar6->ArrayNum;
  if (iVar5 == pTVar6->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
  }
  pTVar6->ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  lVar7 = (longlong)iVar5;
  *(int *)(pFVar2 + lVar7 * 0x18) = param_1->Channel;
  *(float *)(pFVar2 + lVar7 * 0x18 + 4) = param_1->Timestamp;
  *(undefined8 *)(pFVar2 + lVar7 * 0x18 + 8) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar7 * 0x18 + 8) =
       (param_1->SpectrumValues).AllocatorInstance.Data;
  (param_1->SpectrumValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar7 * 0x18 + 0x10) = (param_1->SpectrumValues).ArrayNum;
  *(int *)(pFVar2 + lVar7 * 0x18 + 0x14) = (param_1->SpectrumValues).ArrayMax;
  (param_1->SpectrumValues).ArrayNum = 0;
  (param_1->SpectrumValues).ArrayMax = 0;
  return;
}

// GetChannelSpectrumArray @ 14d806c30

TArray<Audio::FSynesthesiaSpectrumEntry,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FSynesthesiaSpectrumResult::GetChannelSpectrumArray
          (FSynesthesiaSpectrumResult *this,int param_1)

{
  TArray<Audio::FSynesthesiaSpectrumEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<int,TArray<Audio::FSynesthesiaSpectrumEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FSynesthesiaSpectrumEntry,TSizedDefaultAllocator<32>_>,0>_>
           ::FindChecked((TMapBase<int,TArray<Audio::FSynesthesiaSpectrumEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FSynesthesiaSpectrumEntry,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->ChannelSpectrumArrays,param_1);
  return pTVar1;
}

// GetNumChannels @ 14d8079c0

int __thiscall Audio::FSynesthesiaSpectrumResult::GetNumChannels(FSynesthesiaSpectrumResult *this)

{
  return *(int *)&(this->ChannelSpectrumArrays).field_0x8 -
         *(int *)&(this->ChannelSpectrumArrays).field_0x34;
}

