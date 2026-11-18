// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// Emplace<FAssetDataTagMap> @ 142b72a30

FAssetDataTagMap * __thiscall
TOptional<FAssetDataTagMap>::Emplace<FAssetDataTagMap>
          (TOptional<FAssetDataTagMap> *this,FAssetDataTagMap *param_1)

{
  void *pvVar1;
  
  if (this->bIsSet != false) {
    DestructItems<TTuple<FName,FString>,int>
              ((TTuple<FName,FString> *)(this->TypedValue)._padding_,
               (int)(this->TypedValue)._padding_);
    pvVar1 = (void *)(this->TypedValue)._padding_;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  }
  (this->TypedValue)._padding_ = 0;
  (this->TypedValue)._padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&(this->TypedValue)._padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&(this->TypedValue)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  (this->TypedValue).RefCount.Counter = 0;
  this->bIsSet = true;
  return &this->TypedValue;
}

// operator* @ 142b7e790

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>::operator*
          (TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar3;
  
  if (*(int *)((longlong)&this->field0_0x0 + 0xc) == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)this;
}

