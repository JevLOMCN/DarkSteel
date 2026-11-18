// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// Broadcast @ 14dd16200

void __thiscall
FMoviePipelineHttpResponseRecieved::Broadcast
          (FMoviePipelineHttpResponseRecieved *this,int param_1,int param_2,FString *param_3)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  int local_28;
  int local_24;
  FString local_20;
  
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_28 = param_1;
  local_24 = param_2;
  if (&local_20 != param_3) {
    uVar1 = (param_3->Data).ArrayNum;
    _Src = (param_3->Data).AllocatorInstance.Data;
    local_20.Data.ArrayMax = 0;
    local_20.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_20,uVar1,&local_20.Data.ArrayMax);
      memcpy(local_20.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_28);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return;
}

