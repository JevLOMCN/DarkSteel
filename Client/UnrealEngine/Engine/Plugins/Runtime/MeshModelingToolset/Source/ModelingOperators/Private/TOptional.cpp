// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 5

// TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14c946110

TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>::
TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  piVar1 = &(this->field0_0x0).TypedValue.ArrayMax;
  *piVar1 = -1;
  (this->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->field0_0x0).TypedValue.ArrayNum = 0;
  if ((param_1->field0_0x0).TypedValue.ArrayMax != -1) {
    _Src = (param_1->field0_0x0).TypedValue.AllocatorInstance.Data;
    iVar2 = (param_1->field0_0x0).TypedValue.ArrayNum;
    (this->field0_0x0).TypedValue.ArrayNum = iVar2;
    if (iVar2 == 0) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->field0_0x0).TypedValue.AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// operator= @ 14c949e20

TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_> * __thiscall
TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>::operator=
          (TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
           *this,TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
                 *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_> *pTVar6;
  
  if (param_1 != this) {
    if (*(int *)((longlong)&param_1->field0_0x0 + 0xc) == -1) {
      piVar1 = (int *)((longlong)&this->field0_0x0 + 0xc);
      if (*(int *)((longlong)&this->field0_0x0 + 0xc) != -1) {
        *(undefined4 *)((longlong)&this->field0_0x0 + 0x48) = 0;
        pvVar3 = *(void **)((longlong)&this->field0_0x0 + 0x40);
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        *(undefined4 *)((longlong)&this->field0_0x0 + 8) = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,(ForAnyElementType *)this,0,piVar1);
        }
        *(undefined4 *)((longlong)&this->field0_0x0 + 0x30) = 0xffffffff;
        *(undefined4 *)((longlong)&this->field0_0x0 + 0x34) = 0;
        iVar2 = *(int *)((longlong)&this->field0_0x0 + 0x2c);
        *(undefined4 *)((longlong)&this->field0_0x0 + 0x28) = 0;
        if ((iVar2 < 0) || (0x80 < iVar2)) {
          *(undefined4 *)((longlong)&this->field0_0x0 + 0x2c) = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)&this->field0_0x0 + 0x10),0)
          ;
        }
        pvVar3 = *(void **)((longlong)&this->field0_0x0 + 0x20);
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        if (*(void **)&this->field0_0x0 != (void *)0x0) {
          FMemory::Free(*(void **)&this->field0_0x0);
        }
        *(undefined8 *)&this->field0_0x0 = 0;
        *(undefined4 *)((longlong)&this->field0_0x0 + 8) = 0;
        *piVar1 = -1;
        *(undefined8 *)((longlong)&this->field0_0x0 + 0x20) = 0;
        *(undefined4 *)((longlong)&this->field0_0x0 + 0x28) = 0;
        *(undefined4 *)((longlong)&this->field0_0x0 + 0x2c) = 0x80;
        *(undefined4 *)((longlong)&this->field0_0x0 + 0x30) = 0xffffffff;
        *(undefined4 *)((longlong)&this->field0_0x0 + 0x34) = 0;
        *(undefined8 *)((longlong)&this->field0_0x0 + 0x40) = 0;
        *(undefined4 *)((longlong)&this->field0_0x0 + 0x48) = 0;
      }
    }
    else {
      *(undefined4 *)((longlong)&this->field0_0x0 + 0x48) = 0;
      pvVar3 = *(void **)((longlong)&this->field0_0x0 + 0x40);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
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
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)this,(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                          *)param_1);
      if ((*(int *)((longlong)&this->field0_0x0 + 0xc) == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
                  *)(*pcVar4)();
        return pTVar6;
      }
    }
  }
  return this;
}

// operator= @ 14c949fb0

TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> * __thiscall
TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::operator=
          (TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this,
          TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar6;
  
  if (param_1 != this) {
    if (*(int *)((longlong)&param_1->field0_0x0 + 0xc) == -1) {
      piVar1 = (int *)((longlong)&this->field0_0x0 + 0xc);
      if (*(int *)((longlong)&this->field0_0x0 + 0xc) != -1) {
        (this->field0_0x0).TypedValue.HashSize = 0;
        pvVar3 = *(void **)((longlong)&this->field0_0x0 + 0x40);
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        *(undefined4 *)((longlong)&this->field0_0x0 + 8) = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)this,0,piVar1);
        }
        *(undefined4 *)((longlong)&this->field0_0x0 + 0x30) = 0xffffffff;
        *(undefined4 *)((longlong)&this->field0_0x0 + 0x34) = 0;
        iVar2 = *(int *)((longlong)&this->field0_0x0 + 0x2c);
        *(undefined4 *)((longlong)&this->field0_0x0 + 0x28) = 0;
        if ((iVar2 < 0) || (0x80 < iVar2)) {
          *(undefined4 *)((longlong)&this->field0_0x0 + 0x2c) = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->field0_0x0).TypedValue.Elements.field_0x10,0);
        }
        pvVar3 = *(void **)((longlong)&this->field0_0x0 + 0x20);
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        if (*(void **)&this->field0_0x0 != (void *)0x0) {
          FMemory::Free(*(void **)&this->field0_0x0);
        }
        *(undefined8 *)&this->field0_0x0 = 0;
        *(undefined4 *)((longlong)&this->field0_0x0 + 8) = 0;
        *piVar1 = -1;
        *(undefined8 *)((longlong)&this->field0_0x0 + 0x20) = 0;
        *(undefined4 *)((longlong)&this->field0_0x0 + 0x28) = 0;
        *(undefined4 *)((longlong)&this->field0_0x0 + 0x2c) = 0x80;
        *(undefined4 *)((longlong)&this->field0_0x0 + 0x30) = 0xffffffff;
        *(undefined4 *)((longlong)&this->field0_0x0 + 0x34) = 0;
        *(undefined8 *)((longlong)&this->field0_0x0 + 0x40) = 0;
        (this->field0_0x0).TypedValue.HashSize = 0;
      }
    }
    else {
      (this->field0_0x0).TypedValue.HashSize = 0;
      pvVar3 = *(void **)((longlong)&this->field0_0x0 + 0x40);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this);
      *(undefined8 *)&this->field0_0x0 = 0;
      *(undefined8 *)((longlong)&this->field0_0x0 + 8) = 0;
      *(undefined8 *)((longlong)&this->field0_0x0 + 0x20) = 0;
      *(undefined4 *)((longlong)&this->field0_0x0 + 0x28) = 0;
      *(undefined4 *)((longlong)&this->field0_0x0 + 0x2c) = 0x80;
      *(undefined4 *)((longlong)&this->field0_0x0 + 0x30) = 0xffffffff;
      *(undefined4 *)((longlong)&this->field0_0x0 + 0x34) = 0;
      *(undefined8 *)((longlong)&this->field0_0x0 + 0x40) = 0;
      (this->field0_0x0).TypedValue.HashSize = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this,
                 (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)param_1);
      if ((*(int *)((longlong)&this->field0_0x0 + 0xc) == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)(*pcVar4)();
        return pTVar6;
      }
    }
  }
  return this;
}

// GetValue @ 14c980ec0

TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> * __thiscall
TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>::GetValue
          (TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar3;
  
  if (*(int *)((longlong)&this->field0_0x0 + 0xc) == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  return (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)this;
}

// GetValue @ 14c980f10

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::GetValue
          (TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar3;
  
  if (*(int *)((longlong)&this->field0_0x0 + 0xc) == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this;
}

