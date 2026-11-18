// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 85

// MakeManaged<UE::Math::TVector<float>_> @ 1436f40c0

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<UE::Math::TVector<float>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<UE::Math::TVector<float>_>,TDefaultDelete<TManagedArray<UE::Math::TVector<float>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FVectorType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_U__TVector_M_Math_UE____U__DefaultDeleter_V__TManagedArray_U__TVector_M_Math_UE_____SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<FLinearColor> @ 1436f4170

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<FLinearColor>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<FLinearColor>,TDefaultDelete<TManagedArray<FLinearColor>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<FLinearColor> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FLinearColorType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<FLinearColor> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_UFLinearColor____U__DefaultDeleter_V__TManagedArray_UFLinearColor_____SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<unsigned_char> @ 143877b10

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<unsigned_char>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<unsigned_char>,TDefaultDelete<TManagedArray<unsigned_char>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<unsigned_char> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FUInt8Type;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<unsigned_char> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_E__U__DefaultDeleter_V__TManagedArray_E___SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<int> @ 143877bc0

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<int>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<int>,TDefaultDelete<TManagedArray<int>_>_> *param_1,int param_2,
          FName param_3,bool param_4)

{
  TManagedArray<int> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FInt32Type;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<int> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_H__U__DefaultDeleter_V__TManagedArray_H___SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<float> @ 143877c70

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<float>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<float>,TDefaultDelete<TManagedArray<float>_>_> *param_1,
          int param_2,FName param_3,bool param_4)

{
  TManagedArray<float> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FFloatType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<float> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_M__U__DefaultDeleter_V__TManagedArray_M___SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<UE::Math::TIntVector2<unsigned_int>_> @ 143877d20

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<UE::Math::TIntVector2<unsigned_int>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<UE::Math::TIntVector2<unsigned_int>_>,TDefaultDelete<TManagedArray<UE::Math::TIntVector2<unsigned_int>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FUintVector2Type;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_U__TIntVector2_I_Math_UE____U__DefaultDeleter_V__TManagedArray_U__TIntVector2_I_Math_UE_____SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<FName> @ 143877dd0

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<FName>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<FName>,TDefaultDelete<TManagedArray<FName>_>_> *param_1,
          int param_2,FName param_3,bool param_4)

{
  TManagedArray<FName> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FNameType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<FName> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_VFName____U__DefaultDeleter_V__TManagedArray_VFName_____SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<FString> @ 143877e80

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<FString>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<FString>,TDefaultDelete<TManagedArray<FString>_>_> *param_1,
          int param_2,FName param_3,bool param_4)

{
  TManagedArray<FString> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FStringType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<FString> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_VFString____U__DefaultDeleter_V__TManagedArray_VFString_____SharedPointerInternals___00_SharedPointerInternals__6B_
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

// ModifyTypedPtr<int> @ 1438787e0

TManagedArray<int> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<int>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
  
  if (this->ArrayType != FInt32Type) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<int> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<int> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<float> @ 143878860

TManagedArray<float> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<float>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<float> *pTVar3;
  
  if (this->ArrayType != FFloatType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<float> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<float> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<UE::Math::TIntVector2<unsigned_int>_> @ 1438788e0

TManagedArray<UE::Math::TIntVector2<unsigned_int>_> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TIntVector2<unsigned_int>_>
          (FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *pTVar3;
  
  if (this->ArrayType != FUintVector2Type) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<FName> @ 143878960

TManagedArray<FName> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<FName>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<FName> *pTVar3;
  
  if (this->ArrayType != FNameType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FName> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<FName> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<FName> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FName> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<FString> @ 1438789e0

TManagedArray<FString> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<FString>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<FString> *pTVar3;
  
  if (this->ArrayType != FStringType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FString> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<FString> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<FString> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FString> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// GetTypedPtr<UE::Math::TVector<float>_> @ 143a29620

TManagedArray<UE::Math::TVector<float>_> * __thiscall
FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
  
  if (this->ArrayType != FVectorType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return pTVar3;
}

// ModifyTypedPtr<UE::Math::TVector<float>_> @ 143a2a550

TManagedArray<UE::Math::TVector<float>_> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TVector<float>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
  
  if (this->ArrayType != FVectorType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// GetTypedPtr<int> @ 143f81290

TManagedArray<int> * __thiscall
FManagedArrayCollection::FValueType::GetTypedPtr<int>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
  
  if (this->ArrayType != FInt32Type) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = (TManagedArray<int> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<int> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return pTVar3;
}

// GetTypedPtr<UE::Math::TIntVector4<int>_> @ 143f81310

TManagedArray<UE::Math::TIntVector4<int>_> * __thiscall
FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TIntVector4<int>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar3;
  
  if (this->ArrayType != FIntVector4Type) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TIntVector4<int>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = (TManagedArray<UE::Math::TIntVector4<int>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TIntVector4<int>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return pTVar3;
}

// GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_> @ 143f81390

TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
FManagedArrayCollection::FValueType::GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar3;
  
  if (this->ArrayType != FInt32ArrayType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return pTVar3;
}

// GetTypedPtr<TArray<float,TSizedDefaultAllocator<32>_>_> @ 143f81410

TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
FManagedArrayCollection::FValueType::GetTypedPtr<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar3;
  
  if (this->ArrayType != FFloatArrayType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return pTVar3;
}

// GetTypedPtr<FString> @ 143f81490

TManagedArray<FString> * __thiscall
FManagedArrayCollection::FValueType::GetTypedPtr<FString>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<FString> *pTVar3;
  
  if (this->ArrayType != FStringType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FString> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = (TManagedArray<FString> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<FString> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FString> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return pTVar3;
}

// MakeManaged<UE::Math::TBox<double>_> @ 143f82f30

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<UE::Math::TBox<double>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<UE::Math::TBox<double>_>,TDefaultDelete<TManagedArray<UE::Math::TBox<double>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<UE::Math::TBox<double>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FBoxType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<UE::Math::TBox<double>_> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_U__TBox_N_Math_UE____U__DefaultDeleter_V__TManagedArray_U__TBox_N_Math_UE_____SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<UE::Math::TIntVector2<int>_> @ 143f82fe0

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<UE::Math::TIntVector2<int>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<UE::Math::TIntVector2<int>_>,TDefaultDelete<TManagedArray<UE::Math::TIntVector2<int>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<UE::Math::TIntVector2<int>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FIntVector2Type;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_U__TIntVector2_H_Math_UE____U__DefaultDeleter_V__TManagedArray_U__TIntVector2_H_Math_UE_____SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<UE::Math::TIntVector3<int>_> @ 143f83090

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<UE::Math::TIntVector3<int>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<UE::Math::TIntVector3<int>_>,TDefaultDelete<TManagedArray<UE::Math::TIntVector3<int>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FIntVectorType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_U__TIntVector3_H_Math_UE____U__DefaultDeleter_V__TManagedArray_U__TIntVector3_H_Math_UE_____SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<UE::Math::TIntVector4<int>_> @ 143f83140

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<UE::Math::TIntVector4<int>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<UE::Math::TIntVector4<int>_>,TDefaultDelete<TManagedArray<UE::Math::TIntVector4<int>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FIntVector4Type;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_U__TIntVector4_H_Math_UE____U__DefaultDeleter_V__TManagedArray_U__TIntVector4_H_Math_UE_____SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<UE::Math::TQuat<float>_> @ 143f831f0

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<UE::Math::TQuat<float>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<UE::Math::TQuat<float>_>,TDefaultDelete<TManagedArray<UE::Math::TQuat<float>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<UE::Math::TQuat<float>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FQuatType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<UE::Math::TQuat<float>_> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_U__TQuat_M_Math_UE____U__DefaultDeleter_V__TManagedArray_U__TQuat_M_Math_UE_____SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<UE::Math::TTransform<double>_> @ 143f832a0

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<UE::Math::TTransform<double>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<UE::Math::TTransform<double>_>,TDefaultDelete<TManagedArray<UE::Math::TTransform<double>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<UE::Math::TTransform<double>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FTransformType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<UE::Math::TTransform<double>_> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_U__TTransform_N_Math_UE____U__DefaultDeleter_V__TManagedArray_U__TTransform_N_Math_UE_____SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<UE::Math::TVector4<float>_> @ 143f83350

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<UE::Math::TVector4<float>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<UE::Math::TVector4<float>_>,TDefaultDelete<TManagedArray<UE::Math::TVector4<float>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<UE::Math::TVector4<float>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FVector4fType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<UE::Math::TVector4<float>_> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_U__TVector4_M_Math_UE____U__DefaultDeleter_V__TManagedArray_U__TVector4_M_Math_UE_____SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<FGeometryCollectionSection> @ 143f83400

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<FGeometryCollectionSection>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<FGeometryCollectionSection>,TDefaultDelete<TManagedArray<FGeometryCollectionSection>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<FGeometryCollectionSection> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FMeshSectionType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<FGeometryCollectionSection> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_UFGeometryCollectionSection____U__DefaultDeleter_V__TManagedArray_UFGeometryCollectionSection_____SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<TArray<int,TSizedDefaultAllocator<32>_>_> @ 143f834b0

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FInt32ArrayType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_V__TArray_HV__TSizedDefaultAllocator__0CA_______U__DefaultDeleter_V__TManagedArray_V__TArray_HV__TSizedDefaultAllocator__0CA________SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<TArray<float,TSizedDefaultAllocator<32>_>_> @ 143f83560

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FFloatArrayType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_V__TArray_MV__TSizedDefaultAllocator__0CA_______U__DefaultDeleter_V__TManagedArray_V__TArray_MV__TSizedDefaultAllocator__0CA________SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 143f83610

FValueType * __cdecl
FManagedArrayCollection::FValueType::
MakeManaged<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FVector2DArrayType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)
                 0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_V__TArray_U__TVector2_M_Math_UE__V__TSizedDefaultAllocator__0CA_______U__DefaultDeleter_V__TManagedArray_V__TArray_U__TVector2_M_Math_UE__V__TSizedDefaultAllocator__0CA________SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> @ 143f836c0

FValueType * __cdecl
FManagedArrayCollection::FValueType::
MakeManaged<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FPMatrix33dArrayType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)
                 0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_V__TArray_V__PMatrix_N_02_02_Chaos__V__TSizedDefaultAllocator__0CA_______U__DefaultDeleter_V__TManagedArray_V__TArray_V__PMatrix_N_02_02_Chaos__V__TSizedDefaultAllocator__0CA________SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_> @ 143f83770

FValueType * __cdecl
FManagedArrayCollection::FValueType::
MakeManaged<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FFVector3fNestedArrayType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
                  *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_V__TArray_V__TArray_U__TVector_M_Math_UE__V__TSizedDefaultAllocator__0CA_____V__TSizedDefaultAllocator__0CA_______U__DefaultDeleter_V__TManagedArray_V__TArray_V__TArray_U__TVector_M_Math_UE__V__TSizedDefaultAllocator__0CA_____V__TSizedDefaultAllocator__0CA________SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<Chaos::FLinearCurve> @ 143f83820

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<Chaos::FLinearCurve>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<Chaos::FLinearCurve>,TDefaultDelete<TManagedArray<Chaos::FLinearCurve>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<Chaos::FLinearCurve> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FLinearCurveType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<Chaos::FLinearCurve> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_VFLinearCurve_Chaos____U__DefaultDeleter_V__TManagedArray_VFLinearCurve_Chaos_____SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<bool> @ 143f838d0

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<bool>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<bool>,TDefaultDelete<TManagedArray<bool>_>_> *param_1,int param_2
          ,FName param_3,bool param_4)

{
  TManagedArray<bool> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FBoolType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<bool> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray__N__U__DefaultDeleter_V__TManagedArray__N___SharedPointerInternals___00_SharedPointerInternals__6B_
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

// ModifyTypedPtr<UE::Math::TBox<double>_> @ 143f83fb0

TManagedArray<UE::Math::TBox<double>_> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TBox<double>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TBox<double>_> *pTVar3;
  
  if (this->ArrayType != FBoxType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TBox<double>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<UE::Math::TBox<double>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<UE::Math::TBox<double>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TBox<double>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<UE::Math::TIntVector2<int>_> @ 143f84030

TManagedArray<UE::Math::TIntVector2<int>_> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TIntVector2<int>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TIntVector2<int>_> *pTVar3;
  
  if (this->ArrayType != FIntVector2Type) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TIntVector2<int>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<UE::Math::TIntVector2<int>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TIntVector2<int>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<UE::Math::TIntVector3<int>_> @ 143f840b0

TManagedArray<UE::Math::TIntVector3<int>_> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TIntVector3<int>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar3;
  
  if (this->ArrayType != FIntVectorType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TIntVector3<int>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<UE::Math::TIntVector3<int>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TIntVector3<int>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<UE::Math::TIntVector4<int>_> @ 143f84130

TManagedArray<UE::Math::TIntVector4<int>_> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TIntVector4<int>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar3;
  
  if (this->ArrayType != FIntVector4Type) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TIntVector4<int>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<UE::Math::TIntVector4<int>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TIntVector4<int>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<UE::Math::TQuat<float>_> @ 143f841b0

TManagedArray<UE::Math::TQuat<float>_> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TQuat<float>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TQuat<float>_> *pTVar3;
  
  if (this->ArrayType != FQuatType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TQuat<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<UE::Math::TQuat<float>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<UE::Math::TQuat<float>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TQuat<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<UE::Math::TTransform<double>_> @ 143f84230

TManagedArray<UE::Math::TTransform<double>_> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TTransform<double>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TTransform<double>_> *pTVar3;
  
  if (this->ArrayType != FTransformType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TTransform<double>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<UE::Math::TTransform<double>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<UE::Math::TTransform<double>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TTransform<double>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<UE::Math::TVector4<float>_> @ 143f842b0

TManagedArray<UE::Math::TVector4<float>_> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TVector4<float>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TVector4<float>_> *pTVar3;
  
  if (this->ArrayType != FVector4fType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector4<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<UE::Math::TVector4<float>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<UE::Math::TVector4<float>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector4<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<FGeometryCollectionSection> @ 143f84330

TManagedArray<FGeometryCollectionSection> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<FGeometryCollectionSection>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<FGeometryCollectionSection> *pTVar3;
  
  if (this->ArrayType != FMeshSectionType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FGeometryCollectionSection> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<FGeometryCollectionSection> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<FGeometryCollectionSection> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FGeometryCollectionSection> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<FLinearColor> @ 143f843b0

TManagedArray<FLinearColor> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<FLinearColor>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<FLinearColor> *pTVar3;
  
  if (this->ArrayType != FLinearColorType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FLinearColor> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<FLinearColor> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<FLinearColor> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FLinearColor> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_> @ 143f84430

TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar3;
  
  if (this->ArrayType != FInt32ArrayType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<TArray<float,TSizedDefaultAllocator<32>_>_> @ 143f844b0

TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar3;
  
  if (this->ArrayType != FFloatArrayType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 143f84530

TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> * __thiscall
FManagedArrayCollection::FValueType::
ModifyTypedPtr<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *pTVar3;
  
  if (this->ArrayType != FVector2DArrayType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)
           this->ManagedArray;
  if (pTVar3 == (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> @ 143f845b0

TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> * __thiscall
FManagedArrayCollection::FValueType::
ModifyTypedPtr<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *pTVar3;
  
  if (this->ArrayType != FPMatrix33dArrayType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)
           this->ManagedArray;
  if (pTVar3 == (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)
                0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_> @ 143f84630

TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
* __thiscall
FManagedArrayCollection::FValueType::
ModifyTypedPtr<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
          (FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  
  if (this->ArrayType != FFVector3fNestedArrayType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
            *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<Chaos::FLinearCurve> @ 143f846b0

TManagedArray<Chaos::FLinearCurve> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<Chaos::FLinearCurve>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<Chaos::FLinearCurve> *pTVar3;
  
  if (this->ArrayType != FLinearCurveType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<Chaos::FLinearCurve> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<Chaos::FLinearCurve> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<Chaos::FLinearCurve> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<Chaos::FLinearCurve> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<bool> @ 143f84730

TManagedArray<bool> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<bool>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<bool> *pTVar3;
  
  if (this->ArrayType != FBoolType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<bool> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<bool> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<bool> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<bool> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// GetTypedPtr<float> @ 143fd2460

TManagedArray<float> * __thiscall
FManagedArrayCollection::FValueType::GetTypedPtr<float>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<float> *pTVar3;
  
  if (this->ArrayType != FFloatType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = (TManagedArray<float> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<float> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return pTVar3;
}

// GetTypedPtr<UE::Math::TIntVector3<int>_> @ 143fd24e0

TManagedArray<UE::Math::TIntVector3<int>_> * __thiscall
FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TIntVector3<int>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar3;
  
  if (this->ArrayType != FIntVectorType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TIntVector3<int>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = (TManagedArray<UE::Math::TIntVector3<int>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TIntVector3<int>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return pTVar3;
}

// GetTypedPtr<UE::Math::TVector2<float>_> @ 143fd2560

TManagedArray<UE::Math::TVector2<float>_> * __thiscall
FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector2<float>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar3;
  
  if (this->ArrayType != FVector2DType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector2<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = (TManagedArray<UE::Math::TVector2<float>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<UE::Math::TVector2<float>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector2<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return pTVar3;
}

// GetTypedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 143fd25e0

TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> * __thiscall
FManagedArrayCollection::FValueType::
GetTypedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar3;
  
  if (this->ArrayType != FIntArrayType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)
           this->ManagedArray;
  if (pTVar3 == (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return pTVar3;
}

// MakeManaged<TObjectPtr<UObject>_> @ 143fd2f30

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<TObjectPtr<UObject>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<TObjectPtr<UObject>_>,TDefaultDelete<TManagedArray<TObjectPtr<UObject>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<TObjectPtr<UObject>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FUObjectArrayType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<TObjectPtr<UObject>_> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_U__TObjectPtr_VUObject______U__DefaultDeleter_V__TManagedArray_U__TObjectPtr_VUObject_______SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<UE::Math::TVector2<float>_> @ 143fd2fe0

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<UE::Math::TVector2<float>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<UE::Math::TVector2<float>_>,TDefaultDelete<TManagedArray<UE::Math::TVector2<float>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<UE::Math::TVector2<float>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FVector2DType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<UE::Math::TVector2<float>_> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_U__TVector2_M_Math_UE____U__DefaultDeleter_V__TManagedArray_U__TVector2_M_Math_UE_____SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<UE::Math::TVector<double>_> @ 143fd3090

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<UE::Math::TVector<double>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<UE::Math::TVector<double>_>,TDefaultDelete<TManagedArray<UE::Math::TVector<double>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<UE::Math::TVector<double>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FVector3dType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<UE::Math::TVector<double>_> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_U__TVector_N_Math_UE____U__DefaultDeleter_V__TManagedArray_U__TVector_N_Math_UE_____SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 143fd3140

FValueType * __cdecl
FManagedArrayCollection::FValueType::
MakeManaged<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultDelete<TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FIntArrayType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_V__TSet_HU__DefaultKeyFuncs_H_0A___VFDefaultSetAllocator______U__DefaultDeleter_V__TManagedArray_V__TSet_HU__DefaultKeyFuncs_H_0A___VFDefaultSetAllocator_______SharedPointerInternals___00_SharedPointerInternals__6B_
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

// ModifyTypedPtr<TObjectPtr<UObject>_> @ 143fd3460

TManagedArray<TObjectPtr<UObject>_> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<TObjectPtr<UObject>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TObjectPtr<UObject>_> *pTVar3;
  
  if (this->ArrayType != FUObjectArrayType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TObjectPtr<UObject>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<TObjectPtr<UObject>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<TObjectPtr<UObject>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TObjectPtr<UObject>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<UE::Math::TVector2<float>_> @ 143fd34e0

TManagedArray<UE::Math::TVector2<float>_> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TVector2<float>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar3;
  
  if (this->ArrayType != FVector2DType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector2<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<UE::Math::TVector2<float>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<UE::Math::TVector2<float>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector2<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyTypedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 143fd3560

TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> * __thiscall
FManagedArrayCollection::FValueType::
ModifyTypedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar3;
  
  if (this->ArrayType != FIntArrayType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)
           this->ManagedArray;
  if (pTVar3 == (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// GetTypedPtr<TRefCountPtr<Chaos::FConvex>_> @ 14400abf0

TManagedArray<TRefCountPtr<Chaos::FConvex>_> * __thiscall
FManagedArrayCollection::FValueType::GetTypedPtr<TRefCountPtr<Chaos::FConvex>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *pTVar3;
  
  if (this->ArrayType != FFConvexRefCountedPtrType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TRefCountPtr<Chaos::FConvex>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = (TManagedArray<TRefCountPtr<Chaos::FConvex>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<TRefCountPtr<Chaos::FConvex>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TRefCountPtr<Chaos::FConvex>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return pTVar3;
}

// MakeManaged<TRefCountPtr<Chaos::FConvex>_> @ 144011520

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<TRefCountPtr<Chaos::FConvex>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<TRefCountPtr<Chaos::FConvex>_>,TDefaultDelete<TManagedArray<TRefCountPtr<Chaos::FConvex>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FFConvexRefCountedPtrType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<TRefCountPtr<Chaos::FConvex>_> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_V__TRefCountPtr_VFConvex_Chaos______U__DefaultDeleter_V__TManagedArray_V__TRefCountPtr_VFConvex_Chaos_______SharedPointerInternals___00_SharedPointerInternals__6B_
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

// ModifyTypedPtr<TRefCountPtr<Chaos::FConvex>_> @ 144011730

TManagedArray<TRefCountPtr<Chaos::FConvex>_> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<TRefCountPtr<Chaos::FConvex>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *pTVar3;
  
  if (this->ArrayType != FFConvexRefCountedPtrType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TRefCountPtr<Chaos::FConvex>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<TRefCountPtr<Chaos::FConvex>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<TRefCountPtr<Chaos::FConvex>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TRefCountPtr<Chaos::FConvex>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// MakeManaged<UE::Math::TTransform<float>_> @ 144062030

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<UE::Math::TTransform<float>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<UE::Math::TTransform<float>_>,TDefaultDelete<TManagedArray<UE::Math::TTransform<float>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<UE::Math::TTransform<float>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FTransform3fType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<UE::Math::TTransform<float>_> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_U__TTransform_M_Math_UE____U__DefaultDeleter_V__TManagedArray_U__TTransform_M_Math_UE_____SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<FGuid> @ 1440620e0

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<FGuid>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<FGuid>,TDefaultDelete<TManagedArray<FGuid>_>_> *param_1,
          int param_2,FName param_3,bool param_4)

{
  TManagedArray<FGuid> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FGuidType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<FGuid> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_UFGuid____U__DefaultDeleter_V__TManagedArray_UFGuid_____SharedPointerInternals___00_SharedPointerInternals__6B_
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

// FValueType @ 144069230

FValueType * __thiscall
FManagedArrayCollection::FValueType::FValueType(FValueType *this,FValueType *param_1)

{
  TSharedPtr<FManagedArrayBase,1> *pTVar1;
  FSharedReferencer<1> *this_00;
  code *pcVar2;
  bool bVar3;
  FValueType *pFVar4;
  TSharedPtr<FManagedArrayBase,1> *pTVar5;
  
  pTVar1 = &this->SharedManagedArray;
  this->ArrayType = param_1->ArrayType;
  this->GroupIndexDependency = param_1->GroupIndexDependency;
  this->bPersistent = param_1->bPersistent;
  this->bExternalValue = param_1->bExternalValue;
  this_00 = &(this->SharedManagedArray).SharedReferenceCount;
  this_00->ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar1->Object = (FManagedArrayBase *)0x0;
  this->ManagedArray = (FManagedArrayBase *)0x0;
  if (param_1 != this) {
    pTVar5 = &param_1->SharedManagedArray;
    if (pTVar1 != pTVar5) {
      pTVar1->Object = pTVar5->Object;
      pTVar5->Object = (FManagedArrayBase *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (this_00,&(param_1->SharedManagedArray).SharedReferenceCount);
    }
    this->ManagedArray = param_1->ManagedArray;
    param_1->ManagedArray = (FManagedArrayBase *)0x0;
    param_1->bExternalValue = false;
  }
  if (this->ManagedArray == (FManagedArrayBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                       ,0x3dd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FValueType *)(*pcVar2)();
      return pFVar4;
    }
  }
  return this;
}

// FValueType @ 1440692f0

FValueType * __thiscall
FManagedArrayCollection::FValueType::FValueType(FValueType *this,FValueType *param_1)

{
  TSharedPtr<FManagedArrayBase,1> *pTVar1;
  bool bVar2;
  code *pcVar3;
  undefined4 uVar4;
  FManagedArrayBase *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FManagedArrayBase *local_28;
  FSharedReferencer<1> local_20;
  
  pTVar1 = &this->SharedManagedArray;
  this->ArrayType = param_1->ArrayType;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  this->GroupIndexDependency = param_1->GroupIndexDependency;
  bVar2 = param_1->bPersistent;
  this->bExternalValue = false;
  pTVar1->Object = (FManagedArrayBase *)0x0;
  (this->SharedManagedArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->ManagedArray = (FManagedArrayBase *)0x0;
  this->bPersistent = bVar2;
  if (param_1->ManagedArray != (FManagedArrayBase *)0x0) {
    if (param_1->bExternalValue == false) {
      pTVar7 = (param_1->SharedManagedArray).SharedReferenceCount.ReferenceController;
      pFVar5 = (param_1->SharedManagedArray).Object;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar6 = (this->SharedManagedArray).SharedReferenceCount.ReferenceController;
      pTVar1->Object = pFVar5;
      (this->SharedManagedArray).SharedReferenceCount.ReferenceController = pTVar7;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      this->ManagedArray = pTVar1->Object;
    }
    else {
      pFVar5 = NewManagedTypedArray(this->ArrayType);
      this->ManagedArray = pFVar5;
      pcVar3 = *(code **)pFVar5->_padding_;
      uVar4 = (**(code **)(param_1->ManagedArray->_padding_ + 0x60))();
      (*pcVar3)(pFVar5,uVar4);
      (**(code **)(this->ManagedArray->_padding_ + 0x20))(this->ManagedArray,param_1->ManagedArray);
      pFVar5 = this->ManagedArray;
      local_28 = pFVar5;
      pTVar6 = ::operator_new(0x18);
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        pTVar6->SharedReferenceCount = (atomic<int>)0x1;
        pTVar6->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VFManagedArrayBase__U__DefaultDeleter_VFManagedArrayBase___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        pTVar6->WeakReferenceCount = (atomic<int>)0x1;
        pTVar6[1]._padding_ = (longlong)pFVar5;
        pTVar7 = pTVar6;
      }
      local_20.ReferenceController = pTVar7;
      if (pTVar1 != (TSharedPtr<FManagedArrayBase,1> *)&local_28) {
        pTVar1->Object = pFVar5;
        local_28 = (FManagedArrayBase *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->SharedManagedArray).SharedReferenceCount,&local_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20.ReferenceController);
      this->bExternalValue = false;
    }
  }
  return this;
}

// FValueType @ 144069460

FValueType * __thiscall FManagedArrayCollection::FValueType::FValueType(FValueType *this)

{
  this->ArrayType = FNoneType;
  (this->GroupIndexDependency).ComparisonIndex = 0;
  (this->GroupIndexDependency).Number = 0;
  (this->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
  (this->SharedManagedArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->ManagedArray = (FManagedArrayBase *)0x0;
  this->bPersistent = true;
  this->bExternalValue = false;
  return this;
}

// ~FValueType @ 14406bef0

void __thiscall FManagedArrayCollection::FValueType::~FValueType(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->bExternalValue != false) &&
     ((this->SharedManagedArray).Object != (FManagedArrayBase *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!SharedManagedArray.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                       ,0x3e4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedManagedArray).SharedReferenceCount.ReferenceController);
  return;
}

// Convert @ 144081ee0

void __thiscall FManagedArrayCollection::FValueType::Convert(FValueType *this,FValueType *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  MakeUniqueForWrite(this);
  if (this->ArrayType == param_1->ArrayType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayType != Other.ArrayType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                       ,0x42a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144081f37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->ManagedArray->_padding_ + 0x28))(this->ManagedArray,param_1->ManagedArray);
  return;
}

// CopyFrom @ 144082180

void __thiscall FManagedArrayCollection::FValueType::CopyFrom(FValueType *this,FValueType *param_1)

{
  FManagedArrayBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  MakeUniqueForWrite(this);
  pFVar1 = this->ManagedArray;
  iVar4 = (**(code **)(param_1->ManagedArray->_padding_ + 0x60))();
  iVar5 = (**(code **)(pFVar1->_padding_ + 0x60))(pFVar1);
  if (iVar5 < iVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Other.ManagedArray->Num() <= ManagedArray->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                       ,0x431,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = this->ManagedArray;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x30);
  uVar6 = (**(code **)(param_1->ManagedArray->_padding_ + 0x60))();
  (*pcVar2)(pFVar1,param_1->ManagedArray,0,uVar6,0);
  return;
}

// Empty @ 144089c80

void __thiscall FManagedArrayCollection::FValueType::Empty(FValueType *this)

{
  MakeUniqueForWrite(this);
                    /* WARNING: Could not recover jumptable at 0x000144089c9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->ManagedArray->_padding_ + 0x88))();
  return;
}

// Exchange @ 14408a640

void __thiscall FManagedArrayCollection::FValueType::Exchange(FValueType *this,FValueType *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  MakeUniqueForWrite(this);
  if (this->ArrayType != param_1->ArrayType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayType == Other.ArrayType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                       ,0x423,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014408a697. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->ManagedArray->_padding_ + 0x50))(this->ManagedArray,param_1->ManagedArray);
  return;
}

// InitFrom @ 144090e60

void __thiscall FManagedArrayCollection::FValueType::InitFrom(FValueType *this,FValueType *param_1)

{
  longlong lVar1;
  
  MakeUniqueForWrite(this);
  lVar1 = this->ManagedArray->_padding_;
  if (this->ArrayType == param_1->ArrayType) {
                    /* WARNING: Could not recover jumptable at 0x000144090e91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x20))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144090e9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x28))(this->ManagedArray,param_1->ManagedArray);
  return;
}

// MakeUniqueForWrite @ 144094e00

void __thiscall FManagedArrayCollection::FValueType::MakeUniqueForWrite(FValueType *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  FManagedArrayBase *pFVar5;
  FManagedArrayBase *local_18;
  FSharedReferencer<1> local_10;
  
  if (((this->SharedManagedArray).Object != (FManagedArrayBase *)0x0) &&
     ((pTVar1 = (this->SharedManagedArray).SharedReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0 ||
      (pTVar1->SharedReferenceCount != (atomic<int>)0x1)))) {
    if ((this->bExternalValue != false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsExternal()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                           ,0x3ee,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = NewManagedTypedArray(this->ArrayType);
    this->ManagedArray = pFVar5;
    pcVar2 = *(code **)pFVar5->_padding_;
    if (((this->SharedManagedArray).Object == (FManagedArrayBase *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = (**(code **)(((this->SharedManagedArray).Object)->_padding_ + 0x60))();
    (*pcVar2)(pFVar5,uVar4);
    pFVar5 = this->ManagedArray;
    pcVar2 = *(code **)(pFVar5->_padding_ + 0x20);
    if (((this->SharedManagedArray).Object == (FManagedArrayBase *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*pcVar2)(pFVar5,(this->SharedManagedArray).Object);
    pFVar5 = this->ManagedArray;
    local_18 = pFVar5;
    local_10.ReferenceController = ::operator_new(0x18);
    if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      (local_10.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      (local_10.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VFManagedArrayBase__U__DefaultDeleter_VFManagedArrayBase___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      (local_10.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      local_10.ReferenceController[1]._padding_ = (longlong)pFVar5;
    }
    if (&this->SharedManagedArray != (TSharedPtr<FManagedArrayBase,1> *)&local_18) {
      (this->SharedManagedArray).Object = pFVar5;
      local_18 = (FManagedArrayBase *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SharedManagedArray).SharedReferenceCount,&local_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
  }
  if ((this->ManagedArray == (FManagedArrayBase *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ManagedArray",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                         ,0x3f6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// Modify @ 144096610

FManagedArrayBase * __thiscall FManagedArrayCollection::FValueType::Modify(FValueType *this)

{
  MakeUniqueForWrite(this);
  this->ManagedArray->bIsDirty = true;
  return this->ManagedArray;
}

// RemoveGroupIndexDependency @ 1440aa4f0

void __thiscall
FManagedArrayCollection::FValueType::RemoveGroupIndexDependency(FValueType *this,FName param_1)

{
  if (this->GroupIndexDependency == param_1) {
    (this->GroupIndexDependency).ComparisonIndex = 0;
    (this->GroupIndexDependency).Number = 0;
  }
  return;
}

// Reserve @ 1440aedb0

void __thiscall FManagedArrayCollection::FValueType::Reserve(FValueType *this,int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->ManagedArray->_padding_ + 0x68))();
  if (iVar1 < param_1) {
    MakeUniqueForWrite(this);
    (**(code **)(this->ManagedArray->_padding_ + 8))(this->ManagedArray,param_1);
  }
  return;
}

// Resize @ 1440afcb0

void __thiscall FManagedArrayCollection::FValueType::Resize(FValueType *this,int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->ManagedArray->_padding_ + 0x60))();
  if (iVar1 < param_1) {
    MakeUniqueForWrite(this);
    (**(code **)this->ManagedArray->_padding_)(this->ManagedArray,param_1);
  }
  return;
}

// Serialize @ 1440b21e0

void __thiscall FManagedArrayCollection::FValueType::Serialize(FValueType *this,FArchive *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FManagedArrayBase *pFVar5;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [4];
  FManagedArrayBase *local_28;
  FSharedReferencer<1> local_20;
  
  local_res8[0] = 4;
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = (uint)this->ArrayType;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  this->ArrayType = (EManagedArrayType)local_res10[0];
  if ((int)local_res8[0] < 4) {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
  }
  if (1 < (int)local_res8[0]) {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->GroupIndexDependency);
    ::operator<<(param_1,&this->bPersistent);
  }
  if (this->ManagedArray == (FManagedArrayBase *)0x0) {
    if (((param_1->field_0x28 & 1) == 0) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8864559100168504218>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                           ,0x39a,"Ar.IsLoading()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = NewManagedTypedArray(this->ArrayType);
    this->ManagedArray = pFVar5;
    local_28 = pFVar5;
    local_20.ReferenceController = ::operator_new(0x18);
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      (local_20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      (local_20.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VFManagedArrayBase__U__DefaultDeleter_VFManagedArrayBase___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      (local_20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      local_20.ReferenceController[1]._padding_ = (longlong)pFVar5;
    }
    if (&this->SharedManagedArray != (TSharedPtr<FManagedArrayBase,1> *)&local_28) {
      (this->SharedManagedArray).Object = pFVar5;
      local_28 = (FManagedArrayBase *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SharedManagedArray).SharedReferenceCount,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
  }
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if ((0x4f < iVar4) || (this->bPersistent != false)) {
    (**(code **)(this->ManagedArray->_padding_ + 0x70))(this->ManagedArray,param_1);
  }
  return;
}

// MakeManaged<TRefCountPtr<Chaos::FImplicitObject>_> @ 1440fbb80

FValueType * __cdecl
FManagedArrayCollection::FValueType::MakeManaged<TRefCountPtr<Chaos::FImplicitObject>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_>,TDefaultDelete<TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FFImplicitObjectRefCountedPtrType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_V__TRefCountPtr_VFImplicitObject_Chaos______U__DefaultDeleter_V__TManagedArray_V__TRefCountPtr_VFImplicitObject_Chaos_______SharedPointerInternals___00_SharedPointerInternals__6B_
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

// MakeManaged<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_> @ 1440fbc30

FValueType * __cdecl
FManagedArrayCollection::FValueType::
MakeManaged<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>
          (FValueType *__return_storage_ptr__,
          TUniquePtr<TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>,TDefaultDelete<TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>_>_>
          *param_1,int param_2,FName param_3,bool param_4)

{
  TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  __return_storage_ptr__->ArrayType = FFBVHParticlesFloat3UniquePointerType;
  __return_storage_ptr__->GroupIndexDependency = param_3;
  __return_storage_ptr__->bPersistent = param_4;
  __return_storage_ptr__->bExternalValue = false;
  pTVar1 = param_1->Ptr;
  param_1->Ptr = (TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>
                  *)0x0;
  (__return_storage_ptr__->SharedManagedArray).Object = (FManagedArrayBase *)pTVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TManagedArray_V__TUniquePtr_VFBVHParticles_Chaos__U__TDefaultDelete_VFBVHParticles_Chaos________U__DefaultDeleter_V__TManagedArray_V__TUniquePtr_VFBVHParticles_Chaos__U__TDefaultDelete_VFBVHParticles_Chaos_________SharedPointerInternals___00_SharedPointerInternals__6B_
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

// ModifyTypedPtr<TRefCountPtr<Chaos::FImplicitObject>_> @ 1440fbda0

TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<TRefCountPtr<Chaos::FImplicitObject>_>
          (FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *pTVar3;
  
  if (this->ArrayType != FFImplicitObjectRefCountedPtrType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

