// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 4

// Add @ 14d7fb4c0

void __thiscall Audio::FMeterResult::Add(FMeterResult *this,FMeterEntry *param_1)

{
  FScriptContainerElement *pFVar1;
  FMeterEntry *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_> *pTVar8;
  
  pTVar8 = TMapBase<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->ChannelMeterArrays,param_1->Channel,&param_1->Channel);
  pFVar2 = (FMeterEntry *)(pTVar8->AllocatorInstance).Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + pTVar8->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = pTVar8->ArrayNum;
  if (iVar7 == pTVar8->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar7 + 1;
  uVar5 = *(undefined8 *)&param_1->MeterValue;
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar7 * 0x18;
  *(undefined8 *)pFVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar1 + 8) = uVar5;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x18 + 0x10) = *(undefined8 *)&param_1->ClippingValue;
  return;
}

// GetChannelMeterArray @ 14d806b70

TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FMeterResult::GetChannelMeterArray(FMeterResult *this,int param_1)

{
  TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,0>_>
           ::FindChecked((TMapBase<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->ChannelMeterArrays,param_1);
  return pTVar1;
}

// GetMeterArray @ 14d807560

TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FMeterResult::GetMeterArray(FMeterResult *this)

{
  TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,0>_>
           ::FindChecked((TMapBase<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->ChannelMeterArrays,-1);
  return pTVar1;
}

// GetNumChannels @ 14d8079a0

int __thiscall Audio::FMeterResult::GetNumChannels(FMeterResult *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)&(this->ChannelMeterArrays).field_0x8 -
          *(int *)&(this->ChannelMeterArrays).field_0x34;
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2 + -1;
  }
  return iVar1;
}

