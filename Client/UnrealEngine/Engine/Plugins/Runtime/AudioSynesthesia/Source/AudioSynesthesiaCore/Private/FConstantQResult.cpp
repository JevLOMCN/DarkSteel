// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 3

// AddFrame @ 14d7fbf70

void __thiscall
Audio::FConstantQResult::AddFrame
          (FConstantQResult *this,int param_1,float param_2,TArrayView<float_const_,int> *param_3)

{
  int iVar1;
  TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [6];
  TArrayView<float_const_,int> local_28 [2];
  
  local_res10[0] = param_1;
  pTVar2 = TMapBase<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->ChannelCQTFrames,param_1,local_res10);
  iVar1 = pTVar2->ArrayNum;
  if (iVar1 == pTVar2->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
  }
  local_28[0].DataPtr = param_3->DataPtr;
  local_28[0].ArrayNum = param_3->ArrayNum;
  local_28[0]._12_4_ = *(undefined4 *)&param_3->field_0xc;
  pTVar2->ArrayNum = iVar1 + 1;
  FConstantQFrame::FConstantQFrame
            ((FConstantQFrame *)((pTVar2->AllocatorInstance).Data + (longlong)iVar1 * 0x18),
             local_res10[0],param_2,local_28);
  return;
}

// GetFramesForChannel @ 14d807310

TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FConstantQResult::GetFramesForChannel(FConstantQResult *this,int param_1)

{
  TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,0>_>
           ::FindChecked((TMapBase<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->ChannelCQTFrames,param_1);
  return pTVar1;
}

// GetNumChannels @ 14d807950

int __thiscall Audio::FConstantQResult::GetNumChannels(FConstantQResult *this)

{
  return *(int *)&(this->ChannelCQTFrames).field_0x8 - *(int *)&(this->ChannelCQTFrames).field_0x34;
}

