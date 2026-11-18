// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 1

// operator<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_> @ 145ed0c10

TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_> * __thiscall
TKeyInitializer<TObjectPtr<UFoliageType>_&&>::
operator<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>
          (TKeyInitializer<TObjectPtr<UFoliageType>_&&> *this,
          TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_> *__return_storage_ptr__)

{
  FFoliageImpl *pFVar1;
  TUniquePtr<FFoliageInfo,TDefaultDelete<FFoliageInfo>_> TVar2;
  TUniqueObj<FFoliageInfo> local_res8;
  
  TVar2.Ptr = ::operator_new(0x10);
  if (TVar2.Ptr != (FFoliageInfo *)0x0) {
    (TVar2.Ptr)->Type = StaticMesh;
    ((TVar2.Ptr)->Implementation).Ptr = (FFoliageImpl *)0x0;
    local_res8.Obj.Ptr =
         (TUniquePtr<FFoliageInfo,TDefaultDelete<FFoliageInfo>_>)
         (TUniquePtr<FFoliageInfo,TDefaultDelete<FFoliageInfo>_>)TVar2.Ptr;
    TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>::
    TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_><TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>
              (__return_storage_ptr__,this->Key,&local_res8);
    pFVar1 = ((TVar2.Ptr)->Implementation).Ptr;
    if (pFVar1 != (FFoliageImpl *)0x0) {
      (**(code **)*pFVar1)(pFVar1,1);
    }
    ::operator_delete(TVar2.Ptr,0x10);
    return __return_storage_ptr__;
  }
  local_res8.Obj.Ptr = (TUniquePtr<FFoliageInfo,TDefaultDelete<FFoliageInfo>_>)(FFoliageInfo *)0x0;
  TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>::
  TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_><TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>
            (__return_storage_ptr__,this->Key,&local_res8);
  return __return_storage_ptr__;
}

