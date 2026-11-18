// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 2

// MakeManaged<FSoftObjectPath> @ 14db35960

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<FSoftObjectPath>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<FSoftObjectPath>,TDefaultDelete<TManagedArray<FSoftObjectPath>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<FSoftObjectPath> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FSoftObjectPathType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<FSoftObjectPath> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_UFSoftObjectPath____U__DefaultDeleter_V__TManagedArray_UFSoftObjectPath_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
  }
  (__return_storage_ptr__->SharedManagedArray).SharedReferenceCount.ReferenceController = pTVar2;
  __return_storage_ptr__->ManagedArray = (__return_storage_ptr__->SharedManagedArray).Object;
  MakeUniqueForWrite(__return_storage_ptr__);
  (**(code **)(__return_storage_ptr__->ManagedArray->_padding_ + 8))
            (__return_storage_ptr__->ManagedArray,param_2);
  (**(code **)__return_storage_ptr__->ManagedArray->_padding_)
            (__return_storage_ptr__->ManagedArray,param_2);
  return __return_storage_ptr__;
}

// MakeManaged<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> @ 14db35a10

FValueType * __cdecl
FManagedArrayCollection::FValueType::
MakeManaged<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FVector4fArrayType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *)
                 0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_V__TArray_U__TVector4_M_Math_UE__V__TSizedDefaultAllocator__0CA_______U__DefaultDeleter_V__TManagedArray_V__TArray_U__TVector4_M_Math_UE__V__TSizedDefaultAllocator__0CA________SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
  }
  (__return_storage_ptr__->SharedManagedArray).SharedReferenceCount.ReferenceController = pTVar2;
  __return_storage_ptr__->ManagedArray = (__return_storage_ptr__->SharedManagedArray).Object;
  MakeUniqueForWrite(__return_storage_ptr__);
  (**(code **)(__return_storage_ptr__->ManagedArray->_padding_ + 8))
            (__return_storage_ptr__->ManagedArray,param_2);
  (**(code **)__return_storage_ptr__->ManagedArray->_padding_)
            (__return_storage_ptr__->ManagedArray,param_2);
  return __return_storage_ptr__;
}

