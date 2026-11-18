// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 21

// GetArray<unsigned_char> @ 143871d30

TArrayView<unsigned_char_const_,int> * __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::GetArray<unsigned_char>
          (FCollectionPropertyConstFacade *this,
          TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,FName *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_char_const_,int> *pTVar4;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar5;
  char *pcVar6;
  int iVar7;
  FName local_18;
  FName local_10;
  
  if ((this->ManagedArrayCollection).Object == (FManagedArrayCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_char_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  local_18 = *param_1;
  local_10 = PropertyFacadeNames::PropertyGroup;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&((this->ManagedArrayCollection).Object)->Map,(TTuple<FName,FName> *)&local_18)
  ;
  iVar7 = 0;
  pcVar6 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = (char *)0x0;
  }
  if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\x10')) {
    lVar1 = *(longlong *)(pcVar6 + 0x20);
    if (lVar1 != 0) {
      __return_storage_ptr__->DataPtr = *(uchar **)(lVar1 + 0x10);
      iVar7 = *(int *)(lVar1 + 0x18);
      if (iVar7 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TArrayView<unsigned_char_const_,int> *)(*pcVar2)();
          return pTVar4;
        }
      }
      goto LAB_143871dea;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_char_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->DataPtr = (uchar *)0x0;
LAB_143871dea:
  __return_storage_ptr__->ArrayNum = iVar7;
  return __return_storage_ptr__;
}

// GetArray<UE::Math::TVector<float>_> @ 143871e40

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::GetArray<UE::Math::TVector<float>_>
          (FCollectionPropertyConstFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__,FName *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar4;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar5;
  char *pcVar6;
  int iVar7;
  FName local_18;
  FName local_10;
  
  if ((this->ManagedArrayCollection).Object == (FManagedArrayCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  local_18 = *param_1;
  local_10 = PropertyFacadeNames::PropertyGroup;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&((this->ManagedArrayCollection).Object)->Map,(TTuple<FName,FName> *)&local_18)
  ;
  iVar7 = 0;
  pcVar6 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = (char *)0x0;
  }
  if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\x01')) {
    lVar1 = *(longlong *)(pcVar6 + 0x20);
    if (lVar1 != 0) {
      __return_storage_ptr__->DataPtr = *(TVector<float> **)(lVar1 + 0x10);
      iVar7 = *(int *)(lVar1 + 0x18);
      if (iVar7 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar2)();
          return pTVar4;
        }
      }
      goto LAB_143871efa;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
LAB_143871efa:
  __return_storage_ptr__->ArrayNum = iVar7;
  return __return_storage_ptr__;
}

// GetArray<FName> @ 143871f50

TArrayView<FName_const_,int> * __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::GetArray<FName>
          (FCollectionPropertyConstFacade *this,TArrayView<FName_const_,int> *__return_storage_ptr__
          ,FName *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FName_const_,int> *pTVar4;
  TManagedArray<FName> *pTVar5;
  
  if ((this->ManagedArrayCollection).Object == (FManagedArrayCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FName_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<FName>
                     ((this->ManagedArrayCollection).Object,*param_1,
                      PropertyFacadeNames::PropertyGroup);
  if (pTVar5 != (TManagedArray<FName> *)0x0) {
    __return_storage_ptr__->DataPtr = *(FName **)&pTVar5->field_0x10;
    iVar1 = *(int *)&pTVar5->field_0x18;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArrayView<FName_const_,int> *)(*pcVar2)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (FName *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetArray<FString> @ 143872020

TArrayView<FString_const_,int> * __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::GetArray<FString>
          (FCollectionPropertyConstFacade *this,
          TArrayView<FString_const_,int> *__return_storage_ptr__,FName *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FString_const_,int> *pTVar4;
  TManagedArray<FString> *pTVar5;
  
  if ((this->ManagedArrayCollection).Object == (FManagedArrayCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FString_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<FString>
                     ((this->ManagedArrayCollection).Object,*param_1,
                      PropertyFacadeNames::PropertyGroup);
  if (pTVar5 != (TManagedArray<FString> *)0x0) {
    __return_storage_ptr__->DataPtr = *(FString **)&pTVar5->field_0x10;
    iVar1 = *(int *)&pTVar5->field_0x18;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArrayView<FString_const_,int> *)(*pcVar2)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (FString *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetValue<UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_> @ 143872eb0

TVector<float> * __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::
GetValue<UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_>
          (FCollectionPropertyConstFacade *this,int param_1,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_2)

{
  TVector<float> *pTVar1;
  
  pTVar1 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](param_2,param_1);
  return pTVar1;
}

// GetValue<FName_const_&,FName> @ 143872ec0

FName * __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::GetValue<FName_const_&,FName>
          (FCollectionPropertyConstFacade *this,int param_1,TArrayView<FName_const_,int> *param_2)

{
  FName *pFVar1;
  
  pFVar1 = TArrayView<FName_const_,int>::operator[](param_2,param_1);
  return pFVar1;
}

// GetValue<FString_const_&,FString> @ 143872ed0

FString * __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
          (FCollectionPropertyConstFacade *this,int param_1,TArrayView<FString_const_,int> *param_2)

{
  FString *pFVar1;
  
  pFVar1 = TArrayView<FString_const_,int>::operator[](param_2,param_1);
  return pFVar1;
}

// GetValue<unsigned_char,unsigned_char> @ 143872ee0

uchar __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::GetValue<unsigned_char,unsigned_char>
          (FCollectionPropertyConstFacade *this,int param_1,
          TArrayView<unsigned_char_const_,int> *param_2)

{
  uchar *puVar1;
  
  puVar1 = TArrayView<unsigned_char_const_,int>::operator[](param_2,param_1);
  return *puVar1;
}

// GetValue<int,UE::Math::TVector<float>_> @ 143872f00

int __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
          (FCollectionPropertyConstFacade *this,int param_1,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_2)

{
  TVector<float> *pTVar1;
  
  pTVar1 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](param_2,param_1);
  return (int)(pTVar1->field0_0x0)._s_0.X;
}

// GetValue<float,UE::Math::TVector<float>_> @ 143872f20

float __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
          (FCollectionPropertyConstFacade *this,int param_1,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_2)

{
  TVector<float> *pTVar1;
  
  pTVar1 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](param_2,param_1);
  return (pTVar1->field0_0x0)._s_0.X;
}

// GetValue<UE::Math::TVector<float>,UE::Math::TVector<float>_> @ 143872f40

TVector<float> * __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::
GetValue<UE::Math::TVector<float>,UE::Math::TVector<float>_>
          (FCollectionPropertyConstFacade *this,TVector<float> *__return_storage_ptr__,int param_1,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_2)

{
  float fVar1;
  TVector<float> *pTVar2;
  
  pTVar2 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](param_2,param_1);
  fVar1 = (pTVar2->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pTVar2->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// GetValue<FName,FName> @ 143872f80

FName __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::GetValue<FName,FName>
          (FCollectionPropertyConstFacade *this,int param_1,TArrayView<FName_const_,int> *param_2)

{
  FName *pFVar1;
  uint in_register_00000014;
  FName FVar2;
  TArrayView<FName_const_,int> *in_R9;
  
  FVar2.Number = in_register_00000014;
  FVar2.ComparisonIndex.Value = param_1;
  pFVar1 = TArrayView<FName_const_,int>::operator[](in_R9,(int)param_2);
  *(FName *)FVar2 = *pFVar1;
  return FVar2;
}

// GetValue<FString,FString> @ 143872fb0

FString * __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::GetValue<FString,FString>
          (FCollectionPropertyConstFacade *this,FString *__return_storage_ptr__,int param_1,
          TArrayView<FString_const_,int> *param_2)

{
  FString *pFVar1;
  
  pFVar1 = TArrayView<FString_const_,int>::operator[](param_2,param_1);
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char> @ 143872fe0

ECollectionPropertyFlags __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::
GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
          (FCollectionPropertyConstFacade *this,int param_1,
          TArrayView<unsigned_char_const_,int> *param_2)

{
  ECollectionPropertyFlags *pEVar1;
  
  pEVar1 = TArrayView<unsigned_char_const_,int>::operator[](param_2,param_1);
  return *pEVar1;
}

// GetValue<bool,UE::Math::TVector<float>_> @ 143873000

bool __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
          (FCollectionPropertyConstFacade *this,int param_1,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_2)

{
  TVector<float> *pTVar1;
  
  pTVar1 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](param_2,param_1);
  if ((pTVar1->field0_0x0)._s_0.X != 0.0) {
    return true;
  }
  return false;
}

// FCollectionPropertyConstFacade @ 14388a980

FCollectionPropertyConstFacade * __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::FCollectionPropertyConstFacade
          (FCollectionPropertyConstFacade *this,
          TSharedPtr<FManagedArrayCollection_const_,1> *param_1,ENoInit param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FCollectionPropertyConstFacade_Softs_Chaos__6B_;
  (this->KeyNameArray).DataPtr = (FName *)0x0;
  (this->KeyNameArray).ArrayNum = 0;
  (this->LowValueArray).DataPtr = (TVector<float> *)0x0;
  (this->LowValueArray).ArrayNum = 0;
  (this->HighValueArray).DataPtr = (TVector<float> *)0x0;
  (this->HighValueArray).ArrayNum = 0;
  (this->StringValueArray).DataPtr = (FString *)0x0;
  (this->StringValueArray).ArrayNum = 0;
  (this->FlagsArray).DataPtr = (uchar *)0x0;
  (this->FlagsArray).ArrayNum = 0;
  *(undefined8 *)&this->KeyNameIndices = 0;
  *(undefined8 *)&(this->KeyNameIndices).field_0x8 = 0;
  *(undefined8 *)&(this->KeyNameIndices).field_0x20 = 0;
  *(undefined4 *)&(this->KeyNameIndices).field_0x28 = 0;
  *(undefined4 *)&(this->KeyNameIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyNameIndices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyNameIndices).field_0x34 = 0;
  *(undefined8 *)&(this->KeyNameIndices).field_0x40 = 0;
  *(undefined4 *)&(this->KeyNameIndices).field_0x48 = 0;
  (this->ManagedArrayCollection).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ManagedArrayCollection).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->KeyArray).DataPtr = (FString *)0x0;
  (this->KeyArray).ArrayNum = 0;
  *(undefined8 *)&this->KeyIndices = 0;
  *(undefined8 *)&(this->KeyIndices).field_0x8 = 0;
  *(undefined8 *)&(this->KeyIndices).field_0x20 = 0;
  *(undefined4 *)&(this->KeyIndices).field_0x28 = 0;
  *(undefined4 *)&(this->KeyIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyIndices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyIndices).field_0x34 = 0;
  *(undefined8 *)&(this->KeyIndices).field_0x40 = 0;
  *(undefined4 *)&(this->KeyIndices).field_0x48 = 0;
  return this;
}

// FCollectionPropertyConstFacade @ 14388aa70

FCollectionPropertyConstFacade * __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::FCollectionPropertyConstFacade
          (FCollectionPropertyConstFacade *this,
          TSharedPtr<FManagedArrayCollection_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FCollectionPropertyConstFacade_Softs_Chaos__6B_;
  (this->KeyNameArray).DataPtr = (FName *)0x0;
  (this->KeyNameArray).ArrayNum = 0;
  (this->LowValueArray).DataPtr = (TVector<float> *)0x0;
  (this->LowValueArray).ArrayNum = 0;
  (this->HighValueArray).DataPtr = (TVector<float> *)0x0;
  (this->HighValueArray).ArrayNum = 0;
  (this->StringValueArray).DataPtr = (FString *)0x0;
  (this->StringValueArray).ArrayNum = 0;
  (this->FlagsArray).DataPtr = (uchar *)0x0;
  (this->FlagsArray).ArrayNum = 0;
  *(undefined8 *)&this->KeyNameIndices = 0;
  *(undefined8 *)&(this->KeyNameIndices).field_0x8 = 0;
  *(undefined8 *)&(this->KeyNameIndices).field_0x20 = 0;
  *(undefined4 *)&(this->KeyNameIndices).field_0x28 = 0;
  *(undefined4 *)&(this->KeyNameIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyNameIndices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyNameIndices).field_0x34 = 0;
  *(undefined8 *)&(this->KeyNameIndices).field_0x40 = 0;
  *(undefined4 *)&(this->KeyNameIndices).field_0x48 = 0;
  (this->ManagedArrayCollection).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ManagedArrayCollection).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->KeyArray).DataPtr = (FString *)0x0;
  (this->KeyArray).ArrayNum = 0;
  *(undefined8 *)&this->KeyIndices = 0;
  *(undefined8 *)&(this->KeyIndices).field_0x8 = 0;
  *(undefined8 *)&(this->KeyIndices).field_0x20 = 0;
  *(undefined4 *)&(this->KeyIndices).field_0x28 = 0;
  *(undefined4 *)&(this->KeyIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyIndices).field_0x34 = 0;
  *(undefined4 *)&(this->KeyIndices).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->KeyIndices).field_0x40 = 0;
  *(undefined4 *)&(this->KeyIndices).field_0x48 = 0;
  UpdateArrays(this);
  RebuildKeyIndices(this);
  return this;
}

// ~FCollectionPropertyConstFacade @ 14388c9e0

void __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::~FCollectionPropertyConstFacade
          (FCollectionPropertyConstFacade *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->KeyIndices).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FCollectionPropertyConstFacade_Softs_Chaos__6B_;
  pvVar1 = *(void **)&(this->KeyIndices).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyIndices);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ManagedArrayCollection).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->KeyNameIndices).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KeyNameIndices).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyNameIndices);
  return;
}

// IsValid @ 1438c3a10

bool __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::IsValid(FCollectionPropertyConstFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ManagedArrayCollection).Object == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FManagedArrayCollection::HasAttribute
                    ((this->ManagedArrayCollection).Object,PropertyFacadeNames::KeyNameName,
                     PropertyFacadeNames::PropertyGroup);
  if (bVar2) {
    if ((this->ManagedArrayCollection).Object == (FManagedArrayCollection *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        bVar2 = (bool)(*pcVar1)();
        return bVar2;
      }
    }
    bVar2 = FManagedArrayCollection::HasAttribute
                      ((this->ManagedArrayCollection).Object,PropertyFacadeNames::LowValueName,
                       PropertyFacadeNames::PropertyGroup);
    if (bVar2) {
      if ((this->ManagedArrayCollection).Object == (FManagedArrayCollection *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          bVar2 = (bool)(*pcVar1)();
          return bVar2;
        }
      }
      bVar2 = FManagedArrayCollection::HasAttribute
                        ((this->ManagedArrayCollection).Object,PropertyFacadeNames::HighValueName,
                         PropertyFacadeNames::PropertyGroup);
      if (bVar2) {
        if ((this->ManagedArrayCollection).Object == (FManagedArrayCollection *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            bVar2 = (bool)(*pcVar1)();
            return bVar2;
          }
        }
        bVar2 = FManagedArrayCollection::HasAttribute
                          ((this->ManagedArrayCollection).Object,
                           PropertyFacadeNames::StringValueName,PropertyFacadeNames::PropertyGroup);
        if (bVar2) {
          if ((this->ManagedArrayCollection).Object == (FManagedArrayCollection *)0x0) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              bVar2 = (bool)(*pcVar1)();
              return bVar2;
            }
          }
          bVar2 = FManagedArrayCollection::HasAttribute
                            ((this->ManagedArrayCollection).Object,PropertyFacadeNames::FlagsName,
                             PropertyFacadeNames::PropertyGroup);
          if (bVar2) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// RebuildKeyIndices @ 1438c84d0

void __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::RebuildKeyIndices
          (FCollectionPropertyConstFacade *this)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  uint local_res8 [4];
  FName *local_28;
  uint *local_20;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId59,"FCollectionPropertyConstFacade_RebuildKeyIndices",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionPropertyFacade.cpp"
               ,0x3b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId59);
  }
  iVar1 = (this->KeyNameArray).ArrayNum;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Empty
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->KeyNameIndices,iVar1);
  local_res8[0] = 0;
  if (0 < iVar1) {
    do {
      uVar3 = local_res8[0];
      uVar5 = 0;
      if ((int)local_res8[0] < (this->KeyNameArray).ArrayNum) {
        uVar5 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_28 = (this->KeyNameArray).DataPtr + (int)uVar3;
      local_20 = local_res8;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)&this->KeyNameIndices,(TPairInitializer<FName_const_&,int_&> *)(local_res8 + 2),
                 (bool *)&local_28);
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < iVar1);
  }
  if (!bVar6) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// UpdateArrays @ 1438db420

void __thiscall
Chaos::Softs::FCollectionPropertyConstFacade::UpdateArrays(FCollectionPropertyConstFacade *this)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  TManagedArray<FName> *pTVar6;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar7;
  TManagedArray<FString> *pTVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  char *pcVar10;
  FName *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FString *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  uchar *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  FName local_38;
  FName local_30;
  TArrayView<UE::Math::TVector<float>_const_,int> local_28;
  TArrayView<UE::Math::TVector<float>_const_,int> local_18;
  
  if (((this->ManagedArrayCollection).Object == (FManagedArrayCollection *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<FName>
                     ((this->ManagedArrayCollection).Object,PropertyFacadeNames::KeyNameName,
                      PropertyFacadeNames::PropertyGroup);
  if (pTVar6 == (TManagedArray<FName> *)0x0) {
    local_68 = (FName *)0x0;
    iStack_60 = 0;
  }
  else {
    local_68 = *(FName **)&pTVar6->field_0x10;
    iStack_60 = *(int *)&pTVar6->field_0x18;
    if ((iStack_60 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->KeyNameArray).DataPtr = local_68;
  *(ulonglong *)&(this->KeyNameArray).ArrayNum = CONCAT44(uStack_5c,iStack_60);
  pTVar7 = GetArray<UE::Math::TVector<float>_>(this,&local_28,&PropertyFacadeNames::LowValueName);
  iVar3 = pTVar7->ArrayNum;
  uVar4 = *(undefined4 *)&pTVar7->field_0xc;
  (this->LowValueArray).DataPtr = pTVar7->DataPtr;
  (this->LowValueArray).ArrayNum = iVar3;
  *(undefined4 *)&(this->LowValueArray).field_0xc = uVar4;
  pTVar7 = GetArray<UE::Math::TVector<float>_>(this,&local_18,&PropertyFacadeNames::HighValueName);
  iVar3 = pTVar7->ArrayNum;
  uVar4 = *(undefined4 *)&pTVar7->field_0xc;
  (this->HighValueArray).DataPtr = pTVar7->DataPtr;
  (this->HighValueArray).ArrayNum = iVar3;
  *(undefined4 *)&(this->HighValueArray).field_0xc = uVar4;
  if (((this->ManagedArrayCollection).Object == (FManagedArrayCollection *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar8 = FManagedArrayCollection::FindAttributeTyped<FString>
                     ((this->ManagedArrayCollection).Object,PropertyFacadeNames::StringValueName,
                      PropertyFacadeNames::PropertyGroup);
  if (pTVar8 == (TManagedArray<FString> *)0x0) {
    local_58 = (FString *)0x0;
    iStack_50 = 0;
  }
  else {
    local_58 = *(FString **)&pTVar8->field_0x10;
    iStack_50 = *(int *)&pTVar8->field_0x18;
    if ((iStack_50 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->StringValueArray).DataPtr = local_58;
  *(ulonglong *)&(this->StringValueArray).ArrayNum = CONCAT44(uStack_4c,iStack_50);
  if (((this->ManagedArrayCollection).Object == (FManagedArrayCollection *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_38 = PropertyFacadeNames::FlagsName;
  local_30 = PropertyFacadeNames::PropertyGroup;
  pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&((this->ManagedArrayCollection).Object)->Map,(TTuple<FName,FName> *)&local_38)
  ;
  pcVar10 = &pTVar9->field_0x10;
  if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar10 = (char *)0x0;
  }
  if ((pcVar10 != (char *)0x0) && (*pcVar10 == '\x10')) {
    lVar1 = *(longlong *)(pcVar10 + 0x20);
    if (lVar1 != 0) {
      local_48 = *(uchar **)(lVar1 + 0x10);
      iStack_40 = *(int *)(lVar1 + 0x18);
      if ((iStack_40 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_1438db652;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_48 = (uchar *)0x0;
  iStack_40 = 0;
LAB_1438db652:
  (this->FlagsArray).DataPtr = local_48;
  *(ulonglong *)&(this->FlagsArray).ArrayNum = CONCAT44(uStack_3c,iStack_40);
  return;
}

