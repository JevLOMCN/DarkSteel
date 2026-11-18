// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// operator= @ 14ce27510

TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_> * __thiscall
TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>::operator=
          (TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
           *this,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_1
          )

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_> *pTVar4;
  
  if (param_1 != (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)this)
  {
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x48) = 0;
    pvVar1 = *(void **)((longlong)&this->field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this);
    *(undefined8 *)&this->field0_0x0 = 0;
    *(undefined8 *)((longlong)&this->field0_0x0 + 8) = 0;
    *(undefined8 *)((longlong)&this->field0_0x0 + 0x20) = 0;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x28) = 0;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x2c) = 0x80;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x30) = 0xffffffff;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x34) = 0;
    *(undefined8 *)((longlong)&this->field0_0x0 + 0x40) = 0;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x48) = 0;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               this,(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)param_1);
    if (*(int *)((longlong)&this->field0_0x0 + 0xc) == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
                  *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  return this;
}

