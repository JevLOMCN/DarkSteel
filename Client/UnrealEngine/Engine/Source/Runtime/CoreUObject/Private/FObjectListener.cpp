// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// NotifyUObjectDeleted @ 1421f2670

void __thiscall
FSparseDelegateStorage::FObjectListener::NotifyUObjectDeleted
          (FObjectListener *this,UObjectBase *param_1,int param_2)

{
  uint uVar1;
  UObjectBase *local_res10 [3];
  
  EnterCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  local_res10[0] = param_1;
  if (SparseDelegates._8_4_ != SparseDelegates._52_4_) {
    uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<UObjectBase_const_*>
              ((TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
                *)&SparseDelegates,uVar1 >> 0x10 ^ uVar1,local_res10);
    if (SparseDelegates._8_4_ != SparseDelegates._52_4_) goto LAB_1421f26fd;
  }
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
LAB_1421f26fd:
                    /* WARNING: Could not recover jumptable at 0x0001421f270e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  return;
}

// OnUObjectArrayShutdown @ 1421f2720

void __thiscall
FSparseDelegateStorage::FObjectListener::OnUObjectArrayShutdown(FObjectListener *this)

{
  bool bVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  bVar1 = 1 < (int)SparseDelegates._72_4_;
  if (!bVar1) {
    TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
                      *)&SparseDelegates);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&SparseDelegates,0,SparseDelegates._8_4_);
  SparseDelegates._8_4_ = 0;
  if (SparseDelegates._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)&SparseDelegates,0,(int *)&SparseDelegates.field_0xc);
  }
  SparseDelegates._48_4_ = 0xffffffff;
  SparseDelegates._52_4_ = 0;
  SparseDelegates._40_4_ = 0;
  if (0x80 < (uint)SparseDelegates._44_4_) {
    SparseDelegates._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&SparseDelegates.field_0x10,0);
  }
  if (bVar1) {
    SparseDelegates._72_4_ = 1;
    TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
              *)&SparseDelegates);
  }
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
                    /* WARNING: Could not recover jumptable at 0x0001421f2821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  return;
}

// GetAllocatedSize @ 1421f2830

ulong64 __thiscall FSparseDelegateStorage::FObjectListener::GetAllocatedSize(FObjectListener *this)

{
  return 0;
}

// ~FObjectListener @ 142200fd0

void __thiscall FSparseDelegateStorage::FObjectListener::~FObjectListener(FObjectListener *this)

{
  *this = (FObjectListener)&___7FObjectListener_FSparseDelegateStorage__6B_;
  if (GIsRequestingExit == false) {
    FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
    *this = (FObjectListener)&___7FUObjectDeleteListener_FUObjectArray__6B_;
    return;
  }
  *this = (FObjectListener)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// DisableListener @ 142209a70

void __thiscall FSparseDelegateStorage::FObjectListener::DisableListener(FObjectListener *this)

{
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// EnableListener @ 14220a130

void __thiscall FSparseDelegateStorage::FObjectListener::EnableListener(FObjectListener *this)

{
  FUObjectArray::AddUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

