// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 2

// operator= @ 144530d70

TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
              ((this->AllocatorInstance).Data,(TObjectPtr<UObject> *)pFVar2,iVar1);
  }
  return this;
}

// Reset @ 144537220

void __thiscall
TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>::Reset
          (TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  TSharedPtr<Audio::IProxyData,1> *pTVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pTVar2 = (TSharedPtr<Audio::IProxyData,1> *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>(pTVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>(pTVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

