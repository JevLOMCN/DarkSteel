// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SSL
// Functions: 1

// InsertUninitializedImpl @ 143147ab0

void __thiscall
TArray<TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
  memmove(_Src + (longlong)param_2 * 0x20,_Src,(longlong)(iVar1 - param_1) << 5);
  return;
}

