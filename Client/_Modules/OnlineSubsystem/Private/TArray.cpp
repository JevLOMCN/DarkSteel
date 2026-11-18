// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 2

// operator= @ 14eb35ab0

TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_> *this,
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// RemoveAtImpl @ 14ec0fe70

void __thiscall
TArray<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *_Dst;
  int iVar1;
  
  _Dst = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

