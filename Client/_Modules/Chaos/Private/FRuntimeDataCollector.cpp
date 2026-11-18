// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// AddCollector @ 1441057f0

void __thiscall
FRuntimeDataCollector::AddCollector(FRuntimeDataCollector *this,FGuid *param_1,int param_2)

{
  ulong64 uVar1;
  FDamageCollector *this_00;
  
  uVar1 = CityHash64((char *)param_1,0x10);
  this_00 = TMapBase<FGuid,FDamageCollector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDamageCollector,0>_>
            ::FindOrAddImpl<FGuid_const_&>
                      ((TMapBase<FGuid,FDamageCollector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDamageCollector,0>_>
                        *)this,(uint)uVar1,param_1);
  FDamageCollector::Reset(this_00,param_2);
  return;
}

// Clear @ 14410d550

void __thiscall FRuntimeDataCollector::Clear(FRuntimeDataCollector *this)

{
  if (*(int *)&(this->Collectors).field_0x8 != *(int *)&(this->Collectors).field_0x34) {
    TSet<TTuple<FGuid,FDamageCollector>,TDefaultMapHashableKeyFuncs<FGuid,FDamageCollector,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FGuid,FDamageCollector>,TDefaultMapHashableKeyFuncs<FGuid,FDamageCollector,0>,FDefaultSetAllocator>
                      *)this);
    TSparseArray<TSparseSetElement<TTuple<FGuid,FDamageCollector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FGuid,FDamageCollector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&(this->Collectors).field_0x8);
    *(undefined4 *)&(this->Collectors).field_0x8 = 0;
    if (*(int *)&(this->Collectors).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)this,0,(int *)&(this->Collectors).field_0xc);
    }
    *(undefined4 *)&(this->Collectors).field_0x34 = 0;
    *(undefined4 *)&(this->Collectors).field_0x28 = 0;
    *(undefined4 *)&(this->Collectors).field_0x30 = 0xffffffff;
  }
  return;
}

// Find @ 14411a4e0

FDamageCollector * __thiscall
FRuntimeDataCollector::Find(FRuntimeDataCollector *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  FDamageCollector *pFVar3;
  FDamageCollector *pFVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,FDamageCollector>,TDefaultMapHashableKeyFuncs<FGuid,FDamageCollector,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FDamageCollector>,TDefaultMapHashableKeyFuncs<FGuid,FDamageCollector,0>,FDefaultSetAllocator>
                      *)this,(uint)uVar2,param_1);
  pFVar4 = (FDamageCollector *)0x0;
  if (iVar1 != -1) {
    pFVar4 = (FDamageCollector *)(*(longlong *)&this->Collectors + (longlong)iVar1 * 0x28);
  }
  pFVar3 = pFVar4 + 1;
  if (pFVar4 == (FDamageCollector *)0x0) {
    pFVar3 = (FDamageCollector *)0x0;
  }
  return pFVar3;
}

// GetInstance @ 14411b7f0

FRuntimeDataCollector * __cdecl FRuntimeDataCollector::GetInstance(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FRuntimeDataCollector::GetInstance'::__l2::_dynamic_atexit_destructor_for__Instance__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Instance;
}

// RemoveCollector @ 14412b570

void __thiscall FRuntimeDataCollector::RemoveCollector(FRuntimeDataCollector *this,FGuid *param_1)

{
  ulong64 uVar1;
  
  if (*(int *)&(this->Collectors).field_0x8 != *(int *)&(this->Collectors).field_0x34) {
    uVar1 = CityHash64((char *)param_1,0x10);
    TSet<TTuple<FGuid,FDamageCollector>,TDefaultMapHashableKeyFuncs<FGuid,FDamageCollector,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,FDamageCollector>,TDefaultMapHashableKeyFuncs<FGuid,FDamageCollector,0>,FDefaultSetAllocator>
                         *)this,(uint)uVar1,param_1);
  }
  return;
}

