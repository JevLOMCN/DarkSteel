// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 7

// GetTypedPtr<FLinearColor> @ 14e8fa120

TManagedArray<FLinearColor> * __thiscall
FManagedArrayCollection::FValueType::GetTypedPtr<FLinearColor>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<FLinearColor> *pTVar3;
  
  if (this->ArrayType != FLinearColorType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FLinearColor> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = (TManagedArray<FLinearColor> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<FLinearColor> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FLinearColor> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return pTVar3;
}

// GetTypedPtr<bool> @ 14e8fa1a0

TManagedArray<bool> * __thiscall
FManagedArrayCollection::FValueType::GetTypedPtr<bool>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<bool> *pTVar3;
  
  if (this->ArrayType != FBoolType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<bool> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = (TManagedArray<bool> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<bool> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<bool> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return pTVar3;
}

// MakeManaged<double> @ 14e900630

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<double>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<double>,TDefaultDelete<TManagedArray<double>_>_> *param_1,
          int param_2,FName param_3,bool param_4)

{
  TManagedArray<double> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FDoubleType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<double> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_N__U__DefaultDeleter_V__TManagedArray_N___SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> @ 14e9006e0

FValueType * __cdecl
FManagedArrayCollection::FValueType::
MakeManaged<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FIntVector2ArrayType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> *)
                 0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_V__TArray_U__TIntVector2_H_Math_UE__V__TSizedDefaultAllocator__0CA_______U__DefaultDeleter_V__TManagedArray_V__TArray_U__TIntVector2_H_Math_UE__V__TSizedDefaultAllocator__0CA________SharedPointerInternals___00_SharedPointerInternals__6B_
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

// ModifyTypedPtr<unsigned_char> @ 14e9008f0

TManagedArray<unsigned_char> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<unsigned_char>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<unsigned_char> *pTVar3;
  
  if (this->ArrayType != FUInt8Type) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<unsigned_char> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<unsigned_char> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<unsigned_char> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<unsigned_char> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<double> @ 14e900970

TManagedArray<double> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<double>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<double> *pTVar3;
  
  if (this->ArrayType != FDoubleType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<double> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<double> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> @ 14e9009f0

TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> * __thiscall
FManagedArrayCollection::FValueType::
ModifyTypedPtr<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> *pTVar3;
  
  if (this->ArrayType != FIntVector2ArrayType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> *)
           this->ManagedArray;
  if (pTVar3 == (TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> *)
                0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

