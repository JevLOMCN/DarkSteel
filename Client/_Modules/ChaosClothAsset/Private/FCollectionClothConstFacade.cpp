// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 108

// CalculateUserDefinedAttributesTypeHash<int> @ 14db26f60

uint __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::CalculateUserDefinedAttributesTypeHash<int>
          (FCollectionClothConstFacade *this,FName *param_1,uint param_2)

{
  FName *pFVar1;
  FName FVar2;
  int *piVar3;
  uint uVar4;
  TManagedArray<int> *pTVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  int iVar8;
  longlong lVar9;
  undefined1 local_res18 [16];
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  
  FConstClothCollection::GetUserDefinedAttributeNames<int>
            ((this->ClothCollection).Object,&local_38,param_1);
  iVar8 = local_38.ArrayNum;
  pFVar1 = (FName *)(local_38.AllocatorInstance.Data + (longlong)iVar8 * 8);
  FVar7.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar8) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if ((FName *)FVar7.Data == pFVar1) break;
    FVar2 = *(FName *)FVar7.Data;
    uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    uVar4 = param_2 ^ (param_2 >> 2) + FVar2.Number + param_2 * 0x40 + uVar4 + 0x9e3779b9;
    pTVar5 = FConstClothCollection::GetUserDefinedAttribute<int>
                       ((this->ClothCollection).Object,(FName *)FVar7.Data,param_1);
    uVar6 = 0;
    if (pTVar5 != (TManagedArray<int> *)0x0) {
      uVar6 = 0;
      piVar3 = *(int **)&pTVar5->field_0x10;
      for (lVar9 = (longlong)*(int *)&pTVar5->field_0x18; lVar9 != 0; lVar9 = lVar9 + -1) {
        uVar6 = (ulonglong)
                ((uint)uVar6 ^ (uint)uVar6 * 0x40 + -0x61c88647 + (int)(uVar6 >> 2) + *piVar3);
        piVar3 = piVar3 + 1;
      }
    }
    param_2 = uVar4 ^ (int)uVar6 + -0x61c88647 + uVar4 * 0x40 + (uVar4 >> 2);
    FVar7.Data = FVar7.Data + 8;
  }
  if ((FName *)local_38.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return param_2;
}

// CalculateUserDefinedAttributesTypeHash<float> @ 14db270a0

uint __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::CalculateUserDefinedAttributesTypeHash<float>
          (FCollectionClothConstFacade *this,FName *param_1,uint param_2)

{
  FName *pFVar1;
  int iVar2;
  FName FVar3;
  int *piVar4;
  uint uVar5;
  TManagedArray<float> *pTVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 local_res18 [16];
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  
  FConstClothCollection::GetUserDefinedAttributeNames<float>
            ((this->ClothCollection).Object,&local_38,param_1);
  iVar9 = local_38.ArrayNum;
  pFVar1 = (FName *)(local_38.AllocatorInstance.Data + (longlong)iVar9 * 8);
  FVar7.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar9) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if ((FName *)FVar7.Data == pFVar1) break;
    FVar3 = *(FName *)FVar7.Data;
    uVar5 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    uVar8 = param_2 ^ (param_2 >> 2) + FVar3.Number + param_2 * 0x40 + uVar5 + 0x9e3779b9;
    pTVar6 = FConstClothCollection::GetUserDefinedAttribute<float>
                       ((this->ClothCollection).Object,(FName *)FVar7.Data,param_1);
    uVar5 = 0;
    if (pTVar6 != (TManagedArray<float> *)0x0) {
      piVar4 = *(int **)&pTVar6->field_0x10;
      uVar5 = 0;
      for (lVar10 = (longlong)*(int *)&pTVar6->field_0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
        iVar2 = *piVar4;
        piVar4 = piVar4 + 1;
        uVar5 = uVar5 ^ iVar2 + -0x61c88647 + uVar5 * 0x40 + (uVar5 >> 2);
      }
    }
    param_2 = uVar8 ^ (uVar8 >> 2) + 0x9e3779b9 + uVar8 * 0x40 + uVar5;
    FVar7.Data = FVar7.Data + 8;
  }
  if ((FName *)local_38.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return param_2;
}

// CalculateUserDefinedAttributesTypeHash<UE::Math::TVector<float>_> @ 14db271f0

uint __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::
CalculateUserDefinedAttributesTypeHash<UE::Math::TVector<float>_>
          (FCollectionClothConstFacade *this,FName *param_1,uint param_2)

{
  FName *pFVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  TManagedArray<UE::Math::TVector<float>_> *pTVar5;
  uint uVar6;
  longlong lVar7;
  void *pvVar8;
  int iVar9;
  ForAnyElementType FVar10;
  undefined1 local_res18 [16];
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  FConstClothCollection::GetUserDefinedAttributeNames<UE::Math::TVector<float>_>
            ((this->ClothCollection).Object,&local_48,param_1);
  iVar9 = local_48.ArrayNum;
  pFVar1 = (FName *)(local_48.AllocatorInstance.Data + (longlong)iVar9 * 8);
  FVar10.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar9) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if ((FName *)FVar10.Data == pFVar1) break;
    FVar2 = *(FName *)FVar10.Data;
    uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    uVar6 = param_2 ^ (param_2 >> 2) + FVar2.Number + param_2 * 0x40 + uVar3 + 0x9e3779b9;
    pTVar5 = FConstClothCollection::GetUserDefinedAttribute<UE::Math::TVector<float>_>
                       ((this->ClothCollection).Object,(FName *)FVar10.Data,param_1);
    uVar3 = 0;
    if (pTVar5 != (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      pvVar8 = *(void **)&pTVar5->field_0x10;
      for (lVar7 = (longlong)*(int *)&pTVar5->field_0x18; lVar7 != 0; lVar7 = lVar7 + -1) {
        uVar4 = FCrc::MemCrc_DEPRECATED(pvVar8,0xc,0);
        pvVar8 = (void *)((longlong)pvVar8 + 0xc);
        uVar3 = uVar3 ^ (uVar3 >> 2) + 0x9e3779b9 + uVar3 * 0x40 + uVar4;
      }
    }
    param_2 = uVar6 ^ (uVar6 >> 2) + 0x9e3779b9 + uVar6 * 0x40 + uVar3;
    FVar10.Data = FVar10.Data + 8;
  }
  if ((FName *)local_48.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return param_2;
}

// CalculateUserDefinedAttributesTypeHash<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14db27330

uint __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::
CalculateUserDefinedAttributesTypeHash<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FCollectionClothConstFacade *this,FName *param_1,uint param_2)

{
  FName *pFVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar5;
  ForAnyElementType FVar6;
  int iVar7;
  undefined1 local_res18 [16];
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  
  FConstClothCollection::GetUserDefinedAttributeNames<TArray<int,TSizedDefaultAllocator<32>_>_>
            ((this->ClothCollection).Object,&local_38,param_1);
  iVar7 = local_38.ArrayNum;
  pFVar1 = (FName *)(local_38.AllocatorInstance.Data + (longlong)iVar7 * 8);
  FVar6.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar7) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if ((FName *)FVar6.Data == pFVar1) break;
    FVar2 = *(FName *)FVar6.Data;
    uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    uVar3 = param_2 ^ (param_2 >> 2) + FVar2.Number + param_2 * 0x40 + uVar3 + 0x9e3779b9;
    pTVar5 = FConstClothCollection::
             GetUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                       ((this->ClothCollection).Object,(FName *)FVar6.Data,param_1);
    if (pTVar5 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = GetArrayHash<TArray<int,TSizedDefaultAllocator<32>_>_>
                        (*(TArray<int,TSizedDefaultAllocator<32>_> **)&pTVar5->field_0x10,
                         (longlong)*(int *)&pTVar5->field_0x18,0);
    }
    param_2 = uVar3 ^ (uVar3 >> 2) + 0x9e3779b9 + uVar3 * 0x40 + uVar4;
    FVar6.Data = FVar6.Data + 8;
  }
  if ((FName *)local_38.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return param_2;
}

// GetUserDefinedAttribute<int> @ 14db2de10

TArrayView<int_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetUserDefinedAttribute<int>
          (FCollectionClothConstFacade *this,TArrayView<int_const_,int> *__return_storage_ptr__,
          FName *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TManagedArray<int> *pTVar4;
  TArrayView<int_const_,int> *pTVar5;
  
  pTVar4 = FConstClothCollection::GetUserDefinedAttribute<int>
                     ((this->ClothCollection).Object,param_1,param_2);
  if (pTVar4 == (TManagedArray<int> *)0x0) {
    __return_storage_ptr__->DataPtr = (int *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar3 = (**(code **)(*(longlong *)pTVar4 + 0x60))(pTVar4);
    __return_storage_ptr__->DataPtr = *(int **)&pTVar4->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar3;
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArrayView<int_const_,int> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetUserDefinedAttribute<float> @ 14db2e4b0

TArrayView<float_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetUserDefinedAttribute<float>
          (FCollectionClothConstFacade *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          FName *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TManagedArray<float> *pTVar4;
  TArrayView<float_const_,int> *pTVar5;
  
  pTVar4 = FConstClothCollection::GetUserDefinedAttribute<float>
                     ((this->ClothCollection).Object,param_1,param_2);
  if (pTVar4 == (TManagedArray<float> *)0x0) {
    __return_storage_ptr__->DataPtr = (float *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar3 = (**(code **)(*(longlong *)pTVar4 + 0x60))(pTVar4);
    __return_storage_ptr__->DataPtr = *(float **)&pTVar4->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar3;
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArrayView<float_const_,int> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetUserDefinedAttribute<UE::Math::TVector<float>_> @ 14db2eb50

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::
GetUserDefinedAttribute<UE::Math::TVector<float>_>
          (FCollectionClothConstFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__,FName *param_1,
          FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TManagedArray<UE::Math::TVector<float>_> *pTVar4;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar5;
  
  pTVar4 = FConstClothCollection::GetUserDefinedAttribute<UE::Math::TVector<float>_>
                     ((this->ClothCollection).Object,param_1,param_2);
  if (pTVar4 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar3 = (**(code **)(*(longlong *)pTVar4 + 0x60))(pTVar4);
    __return_storage_ptr__->DataPtr = *(TVector<float> **)&pTVar4->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar3;
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14db2f1f0

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::
GetUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FCollectionClothConstFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__,
          FName *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar5;
  
  pTVar4 = FConstClothCollection::GetUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                     ((this->ClothCollection).Object,param_1,param_2);
  if (pTVar4 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar3 = (**(code **)(*(longlong *)pTVar4 + 0x60))(pTVar4);
    __return_storage_ptr__->DataPtr =
         *(TArray<int,TSizedDefaultAllocator<32>_> **)&pTVar4->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar3;
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetUserDefinedAttributeNames<int> @ 14db2fb10

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetUserDefinedAttributeNames<int>
          (FCollectionClothConstFacade *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName *param_1)

{
  FConstClothCollection::GetUserDefinedAttributeNames<int>
            ((this->ClothCollection).Object,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetUserDefinedAttributeNames<float> @ 14db2fe70

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetUserDefinedAttributeNames<float>
          (FCollectionClothConstFacade *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName *param_1)

{
  FConstClothCollection::GetUserDefinedAttributeNames<float>
            ((this->ClothCollection).Object,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetUserDefinedAttributeNames<UE::Math::TVector<float>_> @ 14db301d0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::
GetUserDefinedAttributeNames<UE::Math::TVector<float>_>
          (FCollectionClothConstFacade *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName *param_1)

{
  FConstClothCollection::GetUserDefinedAttributeNames<UE::Math::TVector<float>_>
            ((this->ClothCollection).Object,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetUserDefinedAttributeNames<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14db30530

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::
GetUserDefinedAttributeNames<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FCollectionClothConstFacade *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName *param_1)

{
  FConstClothCollection::GetUserDefinedAttributeNames<TArray<int,TSizedDefaultAllocator<32>_>_>
            ((this->ClothCollection).Object,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// HasUserDefinedAttribute<int> @ 14db30ee0

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::HasUserDefinedAttribute<int>
          (FCollectionClothConstFacade *this,FName *param_1,FName *param_2)

{
  bool bVar1;
  
  bVar1 = FConstClothCollection::HasUserDefinedAttribute<int>
                    ((this->ClothCollection).Object,param_1,param_2);
  return bVar1;
}

// HasUserDefinedAttribute<float> @ 14db31180

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::HasUserDefinedAttribute<float>
          (FCollectionClothConstFacade *this,FName *param_1,FName *param_2)

{
  bool bVar1;
  
  bVar1 = FConstClothCollection::HasUserDefinedAttribute<float>
                    ((this->ClothCollection).Object,param_1,param_2);
  return bVar1;
}

// HasUserDefinedAttribute<UE::Math::TVector<float>_> @ 14db31420

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::
HasUserDefinedAttribute<UE::Math::TVector<float>_>
          (FCollectionClothConstFacade *this,FName *param_1,FName *param_2)

{
  bool bVar1;
  
  bVar1 = FConstClothCollection::HasUserDefinedAttribute<UE::Math::TVector<float>_>
                    ((this->ClothCollection).Object,param_1,param_2);
  return bVar1;
}

// HasUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14db316c0

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::
HasUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FCollectionClothConstFacade *this,FName *param_1,FName *param_2)

{
  bool bVar1;
  
  bVar1 = FConstClothCollection::HasUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                    ((this->ClothCollection).Object,param_1,param_2);
  return bVar1;
}

// FCollectionClothConstFacade @ 14db3a980

FCollectionClothConstFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::FCollectionClothConstFacade
          (FCollectionClothConstFacade *this,
          TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FCollectionClothConstFacade_ClothAsset_Chaos_UE__6B_;
  (this->ClothCollection).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ClothCollection).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// FCollectionClothConstFacade @ 14db3a9b0

FCollectionClothConstFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::FCollectionClothConstFacade
          (FCollectionClothConstFacade *this,TSharedRef<FManagedArrayCollection_const_,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FCollectionClothConstFacade *pFVar4;
  
  this->_padding_ = (longlong)&___7FCollectionClothConstFacade_ClothAsset_Chaos_UE__6B_;
  pTVar3 = ::operator_new(0x298);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->ClothCollection).Object = (FConstClothCollection *)0x10;
    (this->ClothCollection).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFConstClothCollection_ClothAsset_Chaos_UE___00_SharedPointerInternals__6B_
    ;
    FConstClothCollection::FConstClothCollection<FManagedArrayCollection_const_>
              ((FConstClothCollection *)(pTVar3 + 1),param_1,(TProtectedInit)0x0);
    if ((FConstClothCollection *)(pTVar3 + 1) == (FConstClothCollection *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FCollectionClothConstFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
    (this->ClothCollection).Object = (FConstClothCollection *)(pTVar3 + 1);
    (this->ClothCollection).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// ~FCollectionClothConstFacade @ 14db3bb10

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::~FCollectionClothConstFacade
          (FCollectionClothConstFacade *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothCollection).SharedReferenceCount.ReferenceController);
  return;
}

// BuildSimulationMesh @ 14db48260

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::BuildSimulationMesh
          (FCollectionClothConstFacade *this,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_5,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_6,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_7)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  TManagedArray<UE::Math::TVector<float>_> *pTVar4;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar5;
  TManagedArray<int> *pTVar6;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  void *pvVar17;
  undefined4 *puVar18;
  uint uVar19;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar20;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68 [2];
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  pTVar4 = ((this->ClothCollection).Object)->SimPosition3D;
  if (pTVar4 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    iVar13 = param_1->ArrayMax;
    pvVar17 = (void *)0x0;
    param_1->ArrayNum = 0;
    iVar12 = 0;
LAB_14db4840b:
    if (iVar13 != 0) goto LAB_14db4833c;
    param_1->ArrayMax = 0;
  }
  else {
    iVar12 = (**(code **)(*(longlong *)pTVar4 + 0x60))(pTVar4);
    pvVar17 = *(void **)&pTVar4->field_0x10;
    if ((iVar12 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar13 = param_1->ArrayMax;
    param_1->ArrayNum = iVar12;
    if (iVar12 == 0) goto LAB_14db4840b;
LAB_14db4833c:
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar12,iVar13,&param_1->AllocatorInstance,iVar12,&param_1->ArrayMax);
    if (iVar12 != 0) {
      memcpy((param_1->AllocatorInstance).Data,pvVar17,(longlong)iVar12 * 0xc);
    }
  }
  pTVar4 = ((this->ClothCollection).Object)->SimNormal;
  if (pTVar4 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    iVar13 = param_2->ArrayMax;
    pvVar17 = (void *)0x0;
    iVar12 = 0;
    param_2->ArrayNum = 0;
LAB_14db48505:
    if (iVar13 != 0) goto LAB_14db48435;
    param_2->ArrayMax = 0;
  }
  else {
    iVar12 = (**(code **)(*(longlong *)pTVar4 + 0x60))(pTVar4);
    pvVar17 = *(void **)&pTVar4->field_0x10;
    if ((iVar12 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar13 = param_2->ArrayMax;
    param_2->ArrayNum = iVar12;
    if (iVar12 == 0) goto LAB_14db48505;
LAB_14db48435:
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar12,iVar13,&param_2->AllocatorInstance,iVar12,&param_2->ArrayMax);
    if (iVar12 != 0) {
      memcpy((param_2->AllocatorInstance).Data,pvVar17,(longlong)iVar12 * 0xc);
    }
  }
  pTVar5 = ((this->ClothCollection).Object)->SimPosition2D;
  if (pTVar5 == (TManagedArray<UE::Math::TVector2<float>_> *)0x0) {
    iVar13 = param_4->ArrayMax;
    pvVar17 = (void *)0x0;
    iVar12 = 0;
    param_4->ArrayNum = 0;
LAB_14db485f9:
    if (iVar13 != 0) goto LAB_14db48532;
    param_4->ArrayMax = 0;
  }
  else {
    iVar12 = (**(code **)(*(longlong *)pTVar5 + 0x60))(pTVar5);
    pvVar17 = *(void **)&pTVar5->field_0x10;
    if ((iVar12 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar13 = param_4->ArrayMax;
    param_4->ArrayNum = iVar12;
    if (iVar12 == 0) goto LAB_14db485f9;
LAB_14db48532:
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar12,iVar13,&param_4->AllocatorInstance,iVar12,&param_4->ArrayMax);
    if (iVar12 != 0) {
      memcpy((param_4->AllocatorInstance).Data,pvVar17,(longlong)iVar12 << 3);
    }
  }
  pTVar6 = ((this->ClothCollection).Object)->SimVertex3DLookup;
  if (pTVar6 == (TManagedArray<int> *)0x0) {
    iVar13 = param_6->ArrayMax;
    iVar12 = 0;
    param_6->ArrayNum = 0;
    pvVar17 = (void *)0x0;
LAB_14db486c0:
    if (iVar13 == 0) {
      param_6->ArrayMax = 0;
      goto LAB_14db48657;
    }
  }
  else {
    iVar12 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
    pvVar17 = *(void **)&pTVar6->field_0x10;
    if ((iVar12 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar13 = param_6->ArrayMax;
    param_6->ArrayNum = iVar12;
    if (iVar12 == 0) goto LAB_14db486c0;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar12,iVar13,&param_6->AllocatorInstance,iVar12,&param_6->ArrayMax);
  if (iVar12 != 0) {
    memcpy((param_6->AllocatorInstance).Data,pvVar17,(longlong)iVar12 << 2);
  }
LAB_14db48657:
  if (param_7 != (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)0x0)
  {
    pTVar7 = ((this->ClothCollection).Object)->SimVertex2DLookup;
    if (pTVar7 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar13 = 0;
      pTVar20 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    }
    else {
      iVar13 = (**(code **)(*(longlong *)pTVar7 + 0x60))(pTVar7);
      pTVar20 = *(TArray<int,TSizedDefaultAllocator<32>_> **)&pTVar7->field_0x10;
      if ((iVar13 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(param_7->AllocatorInstance).Data,
               param_7->ArrayNum);
    param_7->ArrayNum = iVar13;
    if ((iVar13 == 0) && (param_7->ArrayMax == 0)) {
      param_7->ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar13,param_7->ArrayMax,&param_7->AllocatorInstance,iVar13,
                 &param_7->ArrayMax);
      ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((param_7->AllocatorInstance).Data,pTVar20,iVar13);
    }
  }
  pTVar8 = ((this->ClothCollection).Object)->SimIndices2D;
  if (pTVar8 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
    iVar13 = 0;
    puVar18 = (undefined4 *)0x0;
  }
  else {
    iVar13 = (**(code **)(*(longlong *)pTVar8 + 0x60))(pTVar8);
    puVar18 = *(undefined4 **)&pTVar8->field_0x10;
    if ((iVar13 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  piVar1 = &param_5->ArrayMax;
  puVar3 = puVar18 + (longlong)iVar13 * 3;
  for (; puVar18 != puVar3; puVar18 = puVar18 + 3) {
    local_88 = *puVar18;
    pFVar9 = (param_5->AllocatorInstance).Data;
    if (((pFVar9 <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 < pFVar9 + (longlong)*piVar1 * 4)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar13 = param_5->ArrayNum;
    if (iVar13 == *piVar1) {
      iVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_5->AllocatorInstance,piVar1);
    }
    param_5->ArrayNum = iVar13 + 1;
    *(undefined4 *)((param_5->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_88;
    local_84 = puVar18[1];
    pFVar9 = (param_5->AllocatorInstance).Data;
    if (((pFVar9 <= (FScriptContainerElement *)&local_84) &&
        ((FScriptContainerElement *)&local_84 < pFVar9 + (longlong)*piVar1 * 4)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar13 = param_5->ArrayNum;
    if (iVar13 == *piVar1) {
      iVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_5->AllocatorInstance,piVar1);
    }
    param_5->ArrayNum = iVar13 + 1;
    *(undefined4 *)((param_5->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_84;
    local_80 = puVar18[2];
    pFVar9 = (param_5->AllocatorInstance).Data;
    if (((pFVar9 <= (FScriptContainerElement *)&local_80) &&
        ((FScriptContainerElement *)&local_80 < pFVar9 + (longlong)*piVar1 * 4)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar13 = param_5->ArrayNum;
    if (iVar13 == *piVar1) {
      iVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_5->AllocatorInstance,piVar1);
    }
    param_5->ArrayNum = iVar13 + 1;
    *(undefined4 *)((param_5->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_80;
  }
  iVar13 = FManagedArrayCollection::NumElements
                     ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                      ClothCollectionGroup::SimFaces);
  uVar19 = iVar13 * 3;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  param_5->ArrayNum = 0;
  if (*piVar1 < (int)uVar19) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar19,&param_5->AllocatorInstance,0,piVar1);
  }
  iVar13 = FManagedArrayCollection::NumElements
                     ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                      ClothCollectionGroup::SimFaces);
  uVar19 = iVar13 * 3;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  piVar2 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < (int)uVar19) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar19,&param_3->AllocatorInstance,0,piVar2);
  }
  uVar19 = 0;
  iVar13 = FManagedArrayCollection::NumElements
                     ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                      ClothCollectionGroup::SimFaces);
  if (0 < iVar13) {
    param_4 = (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)0x0;
    do {
      pTVar8 = ((this->ClothCollection).Object)->SimIndices3D;
      if (pTVar8 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
        iVar13 = 0;
        lVar16 = 0;
      }
      else {
        iVar13 = (**(code **)(*(longlong *)pTVar8 + 0x60))(pTVar8);
        lVar16 = *(longlong *)&pTVar8->field_0x10;
        if ((iVar13 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      uVar14 = 0;
      if ((int)uVar19 < iVar13) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_60 = *(undefined8 *)((longlong)&(param_4->AllocatorInstance).Data + lVar16);
      iVar13 = *(int *)((longlong)&param_4->ArrayNum + lVar16);
      iVar15 = (int)((ulonglong)local_60 >> 0x20);
      iVar12 = (int)local_60;
      local_58 = iVar13;
      if (((iVar12 != iVar15) && (iVar12 != iVar13)) && (iVar15 != iVar13)) {
        pFVar9 = (param_3->AllocatorInstance).Data;
        local_7c = iVar12;
        if (((pFVar9 <= (FScriptContainerElement *)&local_7c) &&
            ((FScriptContainerElement *)&local_7c < pFVar9 + (longlong)*piVar2 * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar12 = param_3->ArrayNum;
        if (iVar12 == *piVar2) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_3->AllocatorInstance,piVar2);
        }
        param_3->ArrayNum = iVar12 + 1;
        *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_7c;
        pFVar9 = (param_3->AllocatorInstance).Data;
        local_78 = local_60._4_4_;
        if (((pFVar9 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar9 + (longlong)*piVar2 * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar12 = param_3->ArrayNum;
        if (iVar12 == *piVar2) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_3->AllocatorInstance,piVar2);
        }
        param_3->ArrayNum = iVar12 + 1;
        *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_78;
        pFVar9 = (param_3->AllocatorInstance).Data;
        local_74 = iVar13;
        if (((pFVar9 <= (FScriptContainerElement *)&local_74) &&
            ((FScriptContainerElement *)&local_74 < pFVar9 + (longlong)*piVar2 * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar13 = param_3->ArrayNum;
        if (iVar13 == *piVar2) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_3->AllocatorInstance,piVar2);
        }
        param_3->ArrayNum = iVar13 + 1;
        *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_74;
        pTVar8 = ((this->ClothCollection).Object)->SimIndices2D;
        if (pTVar8 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
          iVar13 = 0;
          lVar16 = 0;
        }
        else {
          iVar13 = (**(code **)(*(longlong *)pTVar8 + 0x60))(pTVar8);
          lVar16 = *(longlong *)&pTVar8->field_0x10;
          if ((iVar13 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        uVar14 = 0;
        if ((int)uVar19 < iVar13) {
          uVar14 = ~uVar19 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar9 = (param_5->AllocatorInstance).Data;
        local_50 = *(undefined8 *)((longlong)&(param_4->AllocatorInstance).Data + lVar16);
        local_48 = *(undefined4 *)((longlong)&param_4->ArrayNum + lVar16);
        local_70 = (undefined4)local_50;
        if (((pFVar9 <= (FScriptContainerElement *)&local_70) &&
            ((FScriptContainerElement *)&local_70 < pFVar9 + (longlong)param_5->ArrayMax * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar13 = param_5->ArrayNum;
        if (iVar13 == param_5->ArrayMax) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_5->AllocatorInstance,piVar1);
          param_5->ArrayNum = iVar13;
        }
        param_5->ArrayNum = iVar13 + 1;
        *(undefined4 *)((param_5->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_70;
        pFVar9 = (param_5->AllocatorInstance).Data;
        local_6c = local_50._4_4_;
        if (((pFVar9 <= (FScriptContainerElement *)&local_6c) &&
            ((FScriptContainerElement *)&local_6c < pFVar9 + (longlong)param_5->ArrayMax * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar13 = param_5->ArrayNum;
        if (iVar13 == param_5->ArrayMax) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_5->AllocatorInstance,piVar1);
          param_5->ArrayNum = iVar13;
        }
        param_5->ArrayNum = iVar13 + 1;
        *(undefined4 *)((param_5->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_6c;
        pFVar9 = (param_5->AllocatorInstance).Data;
        local_68[0] = local_48;
        if (((pFVar9 <= (FScriptContainerElement *)local_68) &&
            ((FScriptContainerElement *)local_68 < pFVar9 + (longlong)param_5->ArrayMax * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar13 = param_5->ArrayNum;
        if (iVar13 == param_5->ArrayMax) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_5->AllocatorInstance,piVar1);
          param_5->ArrayNum = iVar13;
        }
        param_5->ArrayNum = iVar13 + 1;
        *(undefined4 *)((param_5->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_68[0];
      }
      param_4 = (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)&param_4->ArrayMax;
      uVar19 = uVar19 + 1;
      iVar13 = FManagedArrayCollection::NumElements
                         ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                          ClothCollectionGroup::SimFaces);
    } while ((int)uVar19 < iVar13);
  }
  return;
}

// CalculateTypeHash @ 14db49780

uint __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::CalculateTypeHash
          (FCollectionClothConstFacade *this,bool param_1,uint param_2)

{
  FName *pFVar1;
  int iVar2;
  FName FVar3;
  FName FVar4;
  TManagedArray<FName> *pTVar5;
  TManagedArray<int> *pTVar6;
  TManagedArray<UE::Math::TIntVector2<int>_> *pTVar7;
  TManagedArray<FSoftObjectPath> *pTVar8;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar9;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar10;
  TManagedArray<UE::Math::TVector<float>_> *pTVar11;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar12;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar13;
  TManagedArray<FString> *pTVar14;
  TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *pTVar15;
  TManagedArray<FLinearColor> *pTVar16;
  TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *pTVar17;
  TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *pTVar18;
  code *pcVar19;
  bool bVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  FSoftObjectPath *pFVar24;
  TVector<float> *pTVar25;
  TManagedArray<float> *pTVar26;
  FConstClothCollection *pFVar27;
  int *piVar28;
  undefined8 uVar29;
  uint uVar30;
  void *pvVar31;
  ulonglong uVar32;
  longlong lVar33;
  ForAnyElementType FVar34;
  float fVar35;
  undefined1 local_res18 [16];
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  pFVar27 = (this->ClothCollection).Object;
  bVar20 = FConstClothCollection::IsValid(pFVar27,None);
  if (((!bVar20) ||
      (iVar21 = FManagedArrayCollection::NumElements
                          ((pFVar27->ManagedArrayCollection).Object,ClothCollectionGroup::Lods),
      iVar21 != 1)) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFacade.cpp"
                          ,0x3b,L""), bVar20)) {
    pcVar19 = (code *)swi(3);
    uVar22 = (*pcVar19)();
    return uVar22;
  }
  pFVar24 = GetPhysicsAssetSoftObjectPathName(this);
  uVar22 = ::GetTypeHash(pFVar24);
  uVar30 = param_2 * 0x40 + (param_2 >> 2) + 0x9e3779b9 + uVar22 ^ param_2;
  pFVar24 = GetSkeletalMeshSoftObjectPathName(this);
  FVar3 = (pFVar24->AssetPath).AssetName;
  uVar22 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  FVar4 = (pFVar24->AssetPath).PackageName;
  uVar23 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  uVar23 = uVar23 + FVar4.Number;
  iVar21 = (pFVar24->SubPathString).Data.ArrayNum;
  uVar23 = uVar23 * 0x40 + uVar22 + FVar3.Number + (uVar23 >> 2) + 0x9e3779b9 ^ uVar23;
  if (1 < iVar21) {
    uVar22 = FCrc::Strihash_DEPRECATED<char8_t>
                       (iVar21 + -1,(uchar *)(pFVar24->SubPathString).Data.AllocatorInstance.Data);
    uVar23 = uVar23 ^ uVar22 + 0x9e3779b9 + uVar23 * 0x40 + (uVar23 >> 2);
  }
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar23;
  pFVar27 = (this->ClothCollection).Object;
  if ((pFVar27->ReferenceBoneName == (TManagedArray<FName> *)0x0) ||
     (iVar21 = FManagedArrayCollection::NumElements
                         ((pFVar27->ManagedArrayCollection).Object,ClothCollectionGroup::Lods),
     iVar21 < 1)) {
    uVar29 = 0;
  }
  else {
    pTVar5 = ((this->ClothCollection).Object)->ReferenceBoneName;
    if ((*(int *)&pTVar5->field_0x18 < 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar19 = (code *)swi(3);
      uVar22 = (*pcVar19)();
      return uVar22;
    }
    uVar29 = **(undefined8 **)&pTVar5->field_0x10;
  }
  uVar22 = ::GetTypeHash((FNameEntryId)(uint)uVar29);
  uVar30 = uVar30 * 0x40 + (int)((ulonglong)uVar29 >> 0x20) + (uVar30 >> 2) + 0x9e3779b9 + uVar22 ^
           uVar30;
  pTVar25 = GetSolverGravity(this);
  uVar22 = FCrc::MemCrc_DEPRECATED(pTVar25,0xc,0);
  uVar30 = uVar30 * 0x40 + (uVar30 >> 2) + uVar22 + 0x9e3779b9 ^ uVar30;
  fVar35 = GetSolverAirDamping(this);
  uVar30 = uVar30 * 0x40 + (int)fVar35 + (uVar30 >> 2) + 0x9e3779b9 ^ uVar30;
  iVar21 = GetSolverSubSteps(this);
  uVar30 = uVar30 * 0x40 + (uVar30 >> 2) + iVar21 + -0x61c88647 ^ uVar30;
  fVar35 = GetSolverTimeStep(this);
  uVar22 = 0;
  pFVar27 = (this->ClothCollection).Object;
  uVar30 = uVar30 * 0x40 + (int)fVar35 + (uVar30 >> 2) + 0x9e3779b9 ^ uVar30;
  pTVar6 = pFVar27->SeamStitchStart;
  if (pTVar6 != (TManagedArray<int> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar6->field_0x18;
    piVar28 = *(int **)&pTVar6->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar22 = uVar22 ^ uVar22 * 0x40 + -0x61c88647 + (uVar22 >> 2) + *piVar28;
        lVar33 = lVar33 + -1;
        piVar28 = piVar28 + 1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar6 = pFVar27->SeamStitchEnd;
  uVar32 = 0;
  uVar23 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar22;
  if (pTVar6 != (TManagedArray<int> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar6->field_0x18;
    piVar28 = *(int **)&pTVar6->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar23 = (uint)uVar32 ^ (uint)uVar32 * 0x40 + -0x61c88647 + (int)(uVar32 >> 2) + *piVar28;
        uVar32 = (ulonglong)uVar23;
        lVar33 = lVar33 + -1;
        piVar28 = piVar28 + 1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar7 = pFVar27->SeamStitch2DEndIndices;
  uVar22 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar23;
  if (pTVar7 != (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar7->field_0x18;
    pvVar31 = *(void **)&pTVar7->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar23 = (*FCrc::MemCrc32Func)(pvVar31,8,0);
        pvVar31 = (void *)((longlong)pvVar31 + 8);
        uVar22 = uVar22 ^ uVar23 + 0x9e3779b9 + uVar22 * 0x40 + (uVar22 >> 2);
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar6 = pFVar27->SeamStitch3DIndex;
  uVar23 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar22;
  if (pTVar6 != (TManagedArray<int> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar6->field_0x18;
    piVar28 = *(int **)&pTVar6->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar23 = uVar23 ^ uVar23 * 0x40 + -0x61c88647 + (uVar23 >> 2) + *piVar28;
        lVar33 = lVar33 + -1;
        piVar28 = piVar28 + 1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar6 = pFVar27->SimVertices2DStart;
  uVar22 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar23;
  if (pTVar6 != (TManagedArray<int> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar6->field_0x18;
    piVar28 = *(int **)&pTVar6->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar22 = uVar22 ^ uVar22 * 0x40 + -0x61c88647 + (uVar22 >> 2) + *piVar28;
        lVar33 = lVar33 + -1;
        piVar28 = piVar28 + 1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar6 = pFVar27->SimVertices2DEnd;
  uVar23 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar22;
  if (pTVar6 != (TManagedArray<int> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar6->field_0x18;
    piVar28 = *(int **)&pTVar6->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar23 = uVar23 ^ uVar23 * 0x40 + -0x61c88647 + (uVar23 >> 2) + *piVar28;
        lVar33 = lVar33 + -1;
        piVar28 = piVar28 + 1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar6 = pFVar27->SimFacesStart;
  uVar22 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar23;
  if (pTVar6 != (TManagedArray<int> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar6->field_0x18;
    piVar28 = *(int **)&pTVar6->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar22 = uVar22 ^ uVar22 * 0x40 + -0x61c88647 + (uVar22 >> 2) + *piVar28;
        lVar33 = lVar33 + -1;
        piVar28 = piVar28 + 1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar6 = pFVar27->SimFacesEnd;
  uVar23 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar22;
  if (pTVar6 != (TManagedArray<int> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar6->field_0x18;
    piVar28 = *(int **)&pTVar6->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar23 = uVar23 ^ uVar23 * 0x40 + -0x61c88647 + (uVar23 >> 2) + *piVar28;
        lVar33 = lVar33 + -1;
        piVar28 = piVar28 + 1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar6 = pFVar27->SimPatternFabric;
  uVar22 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar23;
  if (pTVar6 != (TManagedArray<int> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar6->field_0x18;
    piVar28 = *(int **)&pTVar6->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar22 = uVar22 ^ uVar22 * 0x40 + -0x61c88647 + (uVar22 >> 2) + *piVar28;
        lVar33 = lVar33 + -1;
        piVar28 = piVar28 + 1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar6 = pFVar27->RenderVerticesStart;
  uVar23 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar22;
  if (pTVar6 != (TManagedArray<int> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar6->field_0x18;
    piVar28 = *(int **)&pTVar6->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar23 = uVar23 ^ uVar23 * 0x40 + -0x61c88647 + (uVar23 >> 2) + *piVar28;
        lVar33 = lVar33 + -1;
        piVar28 = piVar28 + 1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar6 = pFVar27->RenderVerticesEnd;
  uVar22 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar23;
  if (pTVar6 != (TManagedArray<int> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar6->field_0x18;
    piVar28 = *(int **)&pTVar6->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar22 = uVar22 ^ uVar22 * 0x40 + -0x61c88647 + (uVar22 >> 2) + *piVar28;
        lVar33 = lVar33 + -1;
        piVar28 = piVar28 + 1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar6 = pFVar27->RenderFacesStart;
  uVar23 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar22;
  if (pTVar6 != (TManagedArray<int> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar6->field_0x18;
    piVar28 = *(int **)&pTVar6->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar23 = uVar23 ^ uVar23 * 0x40 + -0x61c88647 + (uVar23 >> 2) + *piVar28;
        lVar33 = lVar33 + -1;
        piVar28 = piVar28 + 1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar6 = pFVar27->RenderFacesEnd;
  uVar32 = 0;
  uVar22 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar23;
  if (pTVar6 != (TManagedArray<int> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar6->field_0x18;
    piVar28 = *(int **)&pTVar6->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar22 = (uint)uVar32 ^ (uint)uVar32 * 0x40 + -0x61c88647 + (int)(uVar32 >> 2) + *piVar28;
        uVar32 = (ulonglong)uVar22;
        lVar33 = lVar33 + -1;
        piVar28 = piVar28 + 1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar22;
  pTVar8 = pFVar27->RenderMaterialSoftObjectPathName;
  if (pTVar8 == (TManagedArray<FSoftObjectPath> *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = GetArrayHash<FSoftObjectPath>
                       (*(FSoftObjectPath **)&pTVar8->field_0x10,
                        (longlong)*(int *)&pTVar8->field_0x18,0);
  }
  uVar32 = 0;
  uVar23 = 0;
  pFVar27 = (this->ClothCollection).Object;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar22;
  pTVar6 = pFVar27->RenderDeformerNumInfluences;
  if (pTVar6 != (TManagedArray<int> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar6->field_0x18;
    piVar28 = *(int **)&pTVar6->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar23 = (uint)uVar32 ^ (uint)uVar32 * 0x40 + -0x61c88647 + (int)(uVar32 >> 2) + *piVar28;
        uVar32 = (ulonglong)uVar23;
        lVar33 = lVar33 + -1;
        piVar28 = piVar28 + 1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar9 = pFVar27->SimIndices2D;
  uVar22 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar23;
  if (pTVar9 != (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar9->field_0x18;
    pvVar31 = *(void **)&pTVar9->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar23 = FCrc::MemCrc_DEPRECATED(pvVar31,0xc,0);
        pvVar31 = (void *)((longlong)pvVar31 + 0xc);
        uVar22 = uVar22 ^ uVar23 + 0x9e3779b9 + uVar22 * 0x40 + (uVar22 >> 2);
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar9 = pFVar27->SimIndices3D;
  uVar23 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar22;
  if (pTVar9 != (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar9->field_0x18;
    pvVar31 = *(void **)&pTVar9->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar22 = FCrc::MemCrc_DEPRECATED(pvVar31,0xc,0);
        pvVar31 = (void *)((longlong)pvVar31 + 0xc);
        uVar23 = uVar23 ^ uVar22 + 0x9e3779b9 + uVar23 * 0x40 + (uVar23 >> 2);
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar10 = pFVar27->SimPosition2D;
  uVar22 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar23;
  if (pTVar10 != (TManagedArray<UE::Math::TVector2<float>_> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar10->field_0x18;
    pvVar31 = *(void **)&pTVar10->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar23 = FCrc::MemCrc_DEPRECATED(pvVar31,8,0);
        pvVar31 = (void *)((longlong)pvVar31 + 8);
        uVar22 = uVar22 ^ uVar23 + 0x9e3779b9 + uVar22 * 0x40 + (uVar22 >> 2);
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar6 = pFVar27->SimVertex3DLookup;
  uVar32 = 0;
  uVar23 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar22;
  if (pTVar6 != (TManagedArray<int> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar6->field_0x18;
    piVar28 = *(int **)&pTVar6->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar23 = (uint)uVar32 ^ (uint)uVar32 * 0x40 + -0x61c88647 + (int)(uVar32 >> 2) + *piVar28;
        uVar32 = (ulonglong)uVar23;
        lVar33 = lVar33 + -1;
        piVar28 = piVar28 + 1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar11 = pFVar27->SimPosition3D;
  uVar22 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar23;
  if (pTVar11 != (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar11->field_0x18;
    pvVar31 = *(void **)&pTVar11->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar23 = FCrc::MemCrc_DEPRECATED(pvVar31,0xc,0);
        pvVar31 = (void *)((longlong)pvVar31 + 0xc);
        uVar22 = uVar22 ^ uVar23 + 0x9e3779b9 + uVar22 * 0x40 + (uVar22 >> 2);
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar11 = pFVar27->SimNormal;
  uVar23 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar22;
  if (pTVar11 != (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar11->field_0x18;
    pvVar31 = *(void **)&pTVar11->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar22 = FCrc::MemCrc_DEPRECATED(pvVar31,0xc,0);
        pvVar31 = (void *)((longlong)pvVar31 + 0xc);
        uVar23 = uVar23 ^ uVar22 + 0x9e3779b9 + uVar23 * 0x40 + (uVar23 >> 2);
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar23;
  pTVar12 = pFVar27->SimBoneIndices;
  if (pTVar12 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = GetArrayHash<TArray<int,TSizedDefaultAllocator<32>_>_>
                       (*(TArray<int,TSizedDefaultAllocator<32>_> **)&pTVar12->field_0x10,
                        (longlong)*(int *)&pTVar12->field_0x18,0);
  }
  uVar30 = uVar30 ^ (uVar30 >> 2) + uVar30 * 0x40 + -0x61c88647 + uVar22;
  pTVar13 = ((this->ClothCollection).Object)->SimBoneWeights;
  if (pTVar13 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = GetArrayHash<TArray<float,TSizedDefaultAllocator<32>_>_>
                       (*(TArray<float,TSizedDefaultAllocator<32>_> **)&pTVar13->field_0x10,
                        (longlong)*(int *)&pTVar13->field_0x18,0);
  }
  uVar30 = uVar30 ^ (uVar30 >> 2) + uVar30 * 0x40 + -0x61c88647 + uVar22;
  pTVar12 = ((this->ClothCollection).Object)->TetherKinematicIndex;
  if (pTVar12 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = GetArrayHash<TArray<int,TSizedDefaultAllocator<32>_>_>
                       (*(TArray<int,TSizedDefaultAllocator<32>_> **)&pTVar12->field_0x10,
                        (longlong)*(int *)&pTVar12->field_0x18,0);
  }
  uVar30 = uVar30 ^ (uVar30 >> 2) + uVar30 * 0x40 + -0x61c88647 + uVar22;
  pTVar13 = ((this->ClothCollection).Object)->TetherReferenceLength;
  if (pTVar13 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = GetArrayHash<TArray<float,TSizedDefaultAllocator<32>_>_>
                       (*(TArray<float,TSizedDefaultAllocator<32>_> **)&pTVar13->field_0x10,
                        (longlong)*(int *)&pTVar13->field_0x18,0);
  }
  uVar30 = uVar30 ^ (uVar30 >> 2) + uVar30 * 0x40 + -0x61c88647 + uVar22;
  pTVar12 = ((this->ClothCollection).Object)->SimVertex2DLookup;
  if (pTVar12 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = GetArrayHash<TArray<int,TSizedDefaultAllocator<32>_>_>
                       (*(TArray<int,TSizedDefaultAllocator<32>_> **)&pTVar12->field_0x10,
                        (longlong)*(int *)&pTVar12->field_0x18,0);
  }
  uVar30 = uVar30 ^ (uVar30 >> 2) + uVar30 * 0x40 + -0x61c88647 + uVar22;
  pTVar12 = ((this->ClothCollection).Object)->SeamStitchLookup;
  if (pTVar12 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = GetArrayHash<TArray<int,TSizedDefaultAllocator<32>_>_>
                       (*(TArray<int,TSizedDefaultAllocator<32>_> **)&pTVar12->field_0x10,
                        (longlong)*(int *)&pTVar12->field_0x18,0);
  }
  uVar32 = 0;
  uVar23 = 0;
  pFVar27 = (this->ClothCollection).Object;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar22;
  pTVar26 = pFVar27->SimCustomResizingBlend;
  if (pTVar26 != (TManagedArray<float> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar26->field_0x18;
    piVar28 = *(int **)&pTVar26->field_0x10;
    if (lVar33 != 0) {
      do {
        iVar21 = *piVar28;
        piVar28 = piVar28 + 1;
        uVar23 = (uint)uVar32 ^ iVar21 + -0x61c88647 + (uint)uVar32 * 0x40 + (int)(uVar32 >> 2);
        uVar32 = (ulonglong)uVar23;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar11 = pFVar27->PreResizedSimPosition3D;
  uVar22 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar23;
  if (pTVar11 != (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar11->field_0x18;
    pvVar31 = *(void **)&pTVar11->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar23 = FCrc::MemCrc_DEPRECATED(pvVar31,0xc,0);
        pvVar31 = (void *)((longlong)pvVar31 + 0xc);
        uVar22 = uVar22 ^ uVar23 + 0x9e3779b9 + uVar22 * 0x40 + (uVar22 >> 2);
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar22;
  pTVar14 = pFVar27->SimMorphTargetName;
  if (pTVar14 == (TManagedArray<FString> *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = GetArrayHash<FString>
                       (*(FString **)&pTVar14->field_0x10,(longlong)*(int *)&pTVar14->field_0x18,0);
  }
  pFVar27 = (this->ClothCollection).Object;
  uVar23 = 0;
  pTVar6 = pFVar27->SimMorphTargetVerticesStart;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar22;
  if (pTVar6 != (TManagedArray<int> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar6->field_0x18;
    piVar28 = *(int **)&pTVar6->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar23 = uVar23 ^ uVar23 * 0x40 + -0x61c88647 + (uVar23 >> 2) + *piVar28;
        lVar33 = lVar33 + -1;
        piVar28 = piVar28 + 1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  uVar32 = 0;
  uVar22 = 0;
  pTVar6 = pFVar27->SimMorphTargetVerticesEnd;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar23;
  if (pTVar6 != (TManagedArray<int> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar6->field_0x18;
    piVar28 = *(int **)&pTVar6->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar22 = (uint)uVar32 ^ (uint)uVar32 * 0x40 + -0x61c88647 + (int)(uVar32 >> 2) + *piVar28;
        uVar32 = (ulonglong)uVar22;
        lVar33 = lVar33 + -1;
        piVar28 = piVar28 + 1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  uVar30 = uVar30 * 0x40 + uVar22 + (uVar30 >> 2) + 0x9e3779b9 ^ uVar30;
  uVar22 = FConstClothCollection::GetElementsTypeHash<UE::Math::TVector<float>_>
                     (pFVar27->SimMorphTargetPositionDelta);
  uVar30 = uVar30 * 0x40 + (uVar30 >> 2) + 0x9e3779b9 + uVar22 ^ uVar30;
  uVar22 = FConstClothCollection::GetElementsTypeHash<UE::Math::TVector<float>_>
                     (((this->ClothCollection).Object)->SimMorphTargetTangentZDelta);
  uVar32 = 0;
  uVar23 = 0;
  pFVar27 = (this->ClothCollection).Object;
  uVar30 = uVar30 * 0x40 + (uVar30 >> 2) + uVar22 + 0x9e3779b9 ^ uVar30;
  pTVar6 = pFVar27->SimMorphTargetSimVertex3DIndex;
  if (pTVar6 != (TManagedArray<int> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar6->field_0x18;
    piVar28 = *(int **)&pTVar6->field_0x10;
    if (lVar33 != 0) {
      do {
        uVar23 = (uint)uVar32 ^ (uint)uVar32 * 0x40 + -0x61c88647 + (int)(uVar32 >> 2) + *piVar28;
        uVar32 = (ulonglong)uVar23;
        lVar33 = lVar33 + -1;
        piVar28 = piVar28 + 1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  uVar30 = uVar30 * 0x40 + uVar23 + (uVar30 >> 2) + 0x9e3779b9 ^ uVar30;
  uVar22 = FConstClothCollection::GetElementsTypeHash<UE::Math::TVector<float>_>
                     (pFVar27->FabricBendingStiffness);
  uVar32 = 0;
  uVar23 = 0;
  pFVar27 = (this->ClothCollection).Object;
  uVar30 = uVar30 * 0x40 + (uVar30 >> 2) + 0x9e3779b9 + uVar22 ^ uVar30;
  pTVar26 = pFVar27->FabricBucklingRatio;
  if (pTVar26 != (TManagedArray<float> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar26->field_0x18;
    piVar28 = *(int **)&pTVar26->field_0x10;
    if (lVar33 != 0) {
      do {
        iVar21 = *piVar28;
        piVar28 = piVar28 + 1;
        uVar23 = (uint)uVar32 ^ iVar21 + -0x61c88647 + (uint)uVar32 * 0x40 + (int)(uVar32 >> 2);
        uVar32 = (ulonglong)uVar23;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  uVar30 = uVar30 * 0x40 + uVar23 + (uVar30 >> 2) + 0x9e3779b9 ^ uVar30;
  uVar22 = FConstClothCollection::GetElementsTypeHash<UE::Math::TVector<float>_>
                     (pFVar27->FabricBucklingStiffness);
  pFVar27 = (this->ClothCollection).Object;
  uVar23 = 0;
  pTVar26 = pFVar27->FabricDamping;
  uVar30 = uVar30 * 0x40 + -0x61c88647 + (uVar30 >> 2) + uVar22 ^ uVar30;
  uVar22 = uVar23;
  if (pTVar26 != (TManagedArray<float> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar26->field_0x18;
    piVar28 = *(int **)&pTVar26->field_0x10;
    uVar22 = 0;
    if (lVar33 != 0) {
      do {
        iVar21 = *piVar28;
        piVar28 = piVar28 + 1;
        uVar23 = uVar23 ^ iVar21 + -0x61c88647 + uVar23 * 0x40 + (uVar23 >> 2);
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
      uVar22 = uVar23;
    }
  }
  pTVar26 = pFVar27->FabricDensity;
  uVar23 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar22;
  if (pTVar26 != (TManagedArray<float> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar26->field_0x18;
    piVar28 = *(int **)&pTVar26->field_0x10;
    if (lVar33 != 0) {
      do {
        iVar21 = *piVar28;
        piVar28 = piVar28 + 1;
        uVar23 = uVar23 ^ iVar21 + -0x61c88647 + uVar23 * 0x40 + (uVar23 >> 2);
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  pTVar26 = pFVar27->FabricFriction;
  uVar32 = 0;
  uVar22 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + uVar30 * 0x40 + -0x61c88647 + uVar23;
  if (pTVar26 != (TManagedArray<float> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar26->field_0x18;
    piVar28 = *(int **)&pTVar26->field_0x10;
    if (lVar33 != 0) {
      do {
        iVar21 = *piVar28;
        piVar28 = piVar28 + 1;
        uVar22 = (uint)uVar32 ^ iVar21 + -0x61c88647 + (uint)uVar32 * 0x40 + (int)(uVar32 >> 2);
        uVar32 = (ulonglong)uVar22;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  uVar30 = uVar30 * 0x40 + uVar22 + (uVar30 >> 2) + 0x9e3779b9 ^ uVar30;
  uVar22 = FConstClothCollection::GetElementsTypeHash<UE::Math::TVector<float>_>
                     (pFVar27->FabricStretchStiffness);
  pFVar27 = (this->ClothCollection).Object;
  uVar23 = 0;
  pTVar26 = pFVar27->FabricPressure;
  uVar30 = uVar30 * 0x40 + -0x61c88647 + (uVar30 >> 2) + uVar22 ^ uVar30;
  uVar22 = uVar23;
  if (pTVar26 != (TManagedArray<float> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar26->field_0x18;
    piVar28 = *(int **)&pTVar26->field_0x10;
    uVar22 = 0;
    if (lVar33 != 0) {
      do {
        iVar21 = *piVar28;
        piVar28 = piVar28 + 1;
        uVar23 = uVar23 ^ iVar21 + -0x61c88647 + uVar23 * 0x40 + (uVar23 >> 2);
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
      uVar22 = uVar23;
    }
  }
  uVar23 = 0;
  pTVar6 = pFVar27->FabricLayer;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar22;
  uVar22 = uVar23;
  if (pTVar6 != (TManagedArray<int> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar6->field_0x18;
    piVar28 = *(int **)&pTVar6->field_0x10;
    uVar22 = 0;
    if (lVar33 != 0) {
      do {
        uVar23 = uVar23 ^ uVar23 * 0x40 + -0x61c88647 + (uVar23 >> 2) + *piVar28;
        lVar33 = lVar33 + -1;
        piVar28 = piVar28 + 1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
      uVar22 = uVar23;
    }
  }
  pTVar26 = pFVar27->FabricCollisionThickness;
  uVar32 = 0;
  uVar23 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + uVar30 * 0x40 + -0x61c88647 + uVar22;
  if (pTVar26 != (TManagedArray<float> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar26->field_0x18;
    piVar28 = *(int **)&pTVar26->field_0x10;
    if (lVar33 != 0) {
      do {
        iVar21 = *piVar28;
        piVar28 = piVar28 + 1;
        uVar23 = (uint)uVar32 ^ iVar21 + -0x61c88647 + (uint)uVar32 * 0x40 + (int)(uVar32 >> 2);
        uVar32 = (ulonglong)uVar23;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  uVar30 = uVar30 * 0x40 + uVar23 + (uVar30 >> 2) + 0x9e3779b9 ^ uVar30;
  uVar22 = FConstClothCollection::GetElementsTypeHash<UE::Math::TIntVector3<int>_>
                     (pFVar27->RenderIndices);
  uVar30 = uVar30 * 0x40 + (uVar30 >> 2) + 0x9e3779b9 + uVar22 ^ uVar30;
  uVar22 = FConstClothCollection::GetElementsTypeHash<UE::Math::TVector<float>_>
                     (((this->ClothCollection).Object)->RenderPosition);
  uVar30 = uVar30 * 0x40 + (uVar30 >> 2) + uVar22 + 0x9e3779b9 ^ uVar30;
  uVar22 = FConstClothCollection::GetElementsTypeHash<UE::Math::TVector<float>_>
                     (((this->ClothCollection).Object)->RenderNormal);
  uVar30 = uVar30 * 0x40 + (uVar30 >> 2) + uVar22 + 0x9e3779b9 ^ uVar30;
  uVar22 = FConstClothCollection::GetElementsTypeHash<UE::Math::TVector<float>_>
                     (((this->ClothCollection).Object)->RenderTangentU);
  uVar30 = uVar30 * 0x40 + (uVar30 >> 2) + uVar22 + 0x9e3779b9 ^ uVar30;
  uVar22 = FConstClothCollection::GetElementsTypeHash<UE::Math::TVector<float>_>
                     (((this->ClothCollection).Object)->RenderTangentV);
  uVar30 = uVar30 * 0x40 + (uVar30 >> 2) + uVar22 + 0x9e3779b9 ^ uVar30;
  pTVar15 = ((this->ClothCollection).Object)->RenderUVs;
  if (pTVar15 ==
      (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = GetArrayHash<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                       (*(TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> **)
                         &pTVar15->field_0x10,(longlong)*(int *)&pTVar15->field_0x18,0);
  }
  uVar30 = uVar30 ^ (uVar30 >> 2) + uVar30 * 0x40 + -0x61c88647 + uVar22;
  pTVar16 = ((this->ClothCollection).Object)->RenderColor;
  if (pTVar16 == (TManagedArray<FLinearColor> *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = GetArrayHash<FLinearColor>
                       (*(FLinearColor **)&pTVar16->field_0x10,
                        (longlong)*(int *)&pTVar16->field_0x18,0);
  }
  uVar30 = uVar30 ^ (uVar30 >> 2) + uVar30 * 0x40 + -0x61c88647 + uVar22;
  pTVar12 = ((this->ClothCollection).Object)->RenderBoneIndices;
  if (pTVar12 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = GetArrayHash<TArray<int,TSizedDefaultAllocator<32>_>_>
                       (*(TArray<int,TSizedDefaultAllocator<32>_> **)&pTVar12->field_0x10,
                        (longlong)*(int *)&pTVar12->field_0x18,0);
  }
  uVar30 = uVar30 ^ (uVar30 >> 2) + uVar30 * 0x40 + -0x61c88647 + uVar22;
  pTVar13 = ((this->ClothCollection).Object)->RenderBoneWeights;
  if (pTVar13 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = GetArrayHash<TArray<float,TSizedDefaultAllocator<32>_>_>
                       (*(TArray<float,TSizedDefaultAllocator<32>_> **)&pTVar13->field_0x10,
                        (longlong)*(int *)&pTVar13->field_0x18,0);
  }
  uVar30 = uVar30 ^ (uVar30 >> 2) + uVar30 * 0x40 + -0x61c88647 + uVar22;
  pTVar17 = ((this->ClothCollection).Object)->RenderDeformerPositionBaryCoordsAndDist;
  if (pTVar17 ==
      (TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = GetArrayHash<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                       (*(TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> **)
                         &pTVar17->field_0x10,(longlong)*(int *)&pTVar17->field_0x18,0);
  }
  uVar30 = uVar30 ^ (uVar30 >> 2) + uVar30 * 0x40 + -0x61c88647 + uVar22;
  pTVar17 = ((this->ClothCollection).Object)->RenderDeformerNormalBaryCoordsAndDist;
  if (pTVar17 ==
      (TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = GetArrayHash<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                       (*(TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> **)
                         &pTVar17->field_0x10,(longlong)*(int *)&pTVar17->field_0x18,0);
  }
  uVar30 = uVar30 ^ (uVar30 >> 2) + uVar30 * 0x40 + -0x61c88647 + uVar22;
  pTVar17 = ((this->ClothCollection).Object)->RenderDeformerTangentBaryCoordsAndDist;
  if (pTVar17 ==
      (TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = GetArrayHash<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                       (*(TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> **)
                         &pTVar17->field_0x10,(longlong)*(int *)&pTVar17->field_0x18,0);
  }
  uVar30 = uVar30 ^ (uVar30 >> 2) + uVar30 * 0x40 + -0x61c88647 + uVar22;
  pTVar18 = ((this->ClothCollection).Object)->RenderDeformerSimIndices3D;
  if (pTVar18 ==
      (TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = GetArrayHash<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                       (*(TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> **)
                         &pTVar18->field_0x10,(longlong)*(int *)&pTVar18->field_0x18,0);
  }
  uVar30 = uVar30 ^ (uVar30 >> 2) + uVar30 * 0x40 + -0x61c88647 + uVar22;
  pTVar13 = ((this->ClothCollection).Object)->RenderDeformerWeight;
  if (pTVar13 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = GetArrayHash<TArray<float,TSizedDefaultAllocator<32>_>_>
                       (*(TArray<float,TSizedDefaultAllocator<32>_> **)&pTVar13->field_0x10,
                        (longlong)*(int *)&pTVar13->field_0x18,0);
  }
  uVar23 = 0;
  pFVar27 = (this->ClothCollection).Object;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar22;
  pTVar26 = pFVar27->RenderDeformerSkinningBlend;
  uVar22 = uVar23;
  if (pTVar26 != (TManagedArray<float> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar26->field_0x18;
    piVar28 = *(int **)&pTVar26->field_0x10;
    uVar22 = 0;
    if (lVar33 != 0) {
      do {
        iVar21 = *piVar28;
        piVar28 = piVar28 + 1;
        uVar23 = uVar23 ^ iVar21 + -0x61c88647 + uVar23 * 0x40 + (uVar23 >> 2);
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
      uVar22 = uVar23;
    }
  }
  pTVar26 = pFVar27->RenderCustomResizingBlend;
  uVar23 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar22;
  if (pTVar26 != (TManagedArray<float> *)0x0) {
    lVar33 = (longlong)*(int *)&pTVar26->field_0x18;
    piVar28 = *(int **)&pTVar26->field_0x10;
    if (lVar33 != 0) {
      do {
        iVar21 = *piVar28;
        piVar28 = piVar28 + 1;
        uVar23 = uVar23 ^ iVar21 + -0x61c88647 + uVar23 * 0x40 + (uVar23 >> 2);
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      pFVar27 = (this->ClothCollection).Object;
    }
  }
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar23;
  pTVar14 = pFVar27->CustomResizingRegionSet;
  if (pTVar14 == (TManagedArray<FString> *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = GetArrayHash<FString>
                       (*(FString **)&pTVar14->field_0x10,(longlong)*(int *)&pTVar14->field_0x18,0);
  }
  uVar23 = 0;
  uVar30 = uVar30 ^ (uVar30 >> 2) + uVar30 * 0x40 + -0x61c88647 + uVar22;
  pTVar6 = ((this->ClothCollection).Object)->CustomResizingRegionType;
  if (pTVar6 != (TManagedArray<int> *)0x0) {
    piVar28 = *(int **)&pTVar6->field_0x10;
    for (lVar33 = (longlong)*(int *)&pTVar6->field_0x18; lVar33 != 0; lVar33 = lVar33 + -1) {
      uVar23 = uVar23 ^ uVar23 * 0x40 + -0x61c88647 + (uVar23 >> 2) + *piVar28;
      piVar28 = piVar28 + 1;
    }
  }
  uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar23;
  if (param_1) {
    FConstClothCollection::GetUserDefinedAttributeNames<float>
              ((this->ClothCollection).Object,&local_48,&ClothCollectionGroup::SimVertices3D);
    iVar21 = local_48.ArrayNum;
    pFVar1 = (FName *)(local_48.AllocatorInstance.Data + (longlong)iVar21 * 8);
    FVar34.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      if (local_48.ArrayNum != iVar21) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if ((FName *)FVar34.Data == pFVar1) break;
      FVar3 = *(FName *)FVar34.Data;
      uVar22 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      uVar30 = uVar30 ^ uVar22 + 0x9e3779b9 + FVar3.Number + uVar30 * 0x40 + (uVar30 >> 2);
      pTVar26 = FConstClothCollection::GetUserDefinedAttribute<float>
                          ((this->ClothCollection).Object,(FName *)FVar34.Data,
                           &ClothCollectionGroup::SimVertices3D);
      uVar22 = 0;
      if (pTVar26 != (TManagedArray<float> *)0x0) {
        piVar28 = *(int **)&pTVar26->field_0x10;
        uVar22 = 0;
        for (lVar33 = (longlong)*(int *)&pTVar26->field_0x18; lVar33 != 0; lVar33 = lVar33 + -1) {
          iVar2 = *piVar28;
          piVar28 = piVar28 + 1;
          uVar22 = uVar22 ^ iVar2 + -0x61c88647 + uVar22 * 0x40 + (uVar22 >> 2);
        }
      }
      uVar30 = uVar30 ^ (uVar30 >> 2) + 0x9e3779b9 + uVar30 * 0x40 + uVar22;
      FVar34.Data = FVar34.Data + 8;
    }
    if ((FName *)local_48.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return uVar30;
}

// CalculateWeightMapTypeHash @ 14db4ae40

uint __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::CalculateWeightMapTypeHash
          (FCollectionClothConstFacade *this,uint param_1)

{
  FName *pFVar1;
  int iVar2;
  FName FVar3;
  int *piVar4;
  uint uVar5;
  TManagedArray<float> *pTVar6;
  int iVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 local_res10 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  
  FConstClothCollection::GetUserDefinedAttributeNames<float>
            ((this->ClothCollection).Object,&local_28,&ClothCollectionGroup::SimVertices3D);
  iVar7 = local_28.ArrayNum;
  pFVar1 = (FName *)(local_28.AllocatorInstance.Data + (longlong)iVar7 * 8);
  FVar8.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar7) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if ((FName *)FVar8.Data == pFVar1) break;
    FVar3 = *(FName *)FVar8.Data;
    uVar5 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    uVar9 = param_1 ^ (param_1 >> 2) + FVar3.Number + param_1 * 0x40 + uVar5 + 0x9e3779b9;
    pTVar6 = FConstClothCollection::GetUserDefinedAttribute<float>
                       ((this->ClothCollection).Object,(FName *)FVar8.Data,
                        &ClothCollectionGroup::SimVertices3D);
    uVar5 = 0;
    if (pTVar6 != (TManagedArray<float> *)0x0) {
      piVar4 = *(int **)&pTVar6->field_0x10;
      uVar5 = 0;
      for (lVar10 = (longlong)*(int *)&pTVar6->field_0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
        iVar2 = *piVar4;
        piVar4 = piVar4 + 1;
        uVar5 = uVar5 ^ iVar2 + -0x61c88647 + uVar5 * 0x40 + (uVar5 >> 2);
      }
    }
    param_1 = uVar9 ^ (uVar9 >> 2) + 0x9e3779b9 + uVar9 * 0x40 + uVar5;
    FVar8.Data = FVar8.Data + 8;
  }
  if ((FName *)local_28.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return param_1;
}

// FindRenderPatternByFaceIndex @ 14db557b0

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::FindRenderPatternByFaceIndex
          (FCollectionClothConstFacade *this,int param_1)

{
  FConstClothCollection *pFVar1;
  int iVar2;
  
  pFVar1 = (this->ClothCollection).Object;
  iVar2 = FConstClothCollection::GetArrayIndexForContainedElement
                    (pFVar1->RenderFacesStart,pFVar1->RenderFacesEnd,param_1);
  return iVar2;
}

// FindRenderPatternByVertex @ 14db557d0

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::FindRenderPatternByVertex
          (FCollectionClothConstFacade *this,int param_1)

{
  FConstClothCollection *pFVar1;
  int iVar2;
  
  pFVar1 = (this->ClothCollection).Object;
  iVar2 = FConstClothCollection::GetArrayIndexForContainedElement
                    (pFVar1->RenderVerticesStart,pFVar1->RenderVerticesEnd,param_1);
  return iVar2;
}

// FindSimAccessoryMeshIndexByName @ 14db55a90

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::FindSimAccessoryMeshIndexByName
          (FCollectionClothConstFacade *this,FName *param_1)

{
  TManagedArray<FName> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FName *pFVar7;
  
  pTVar1 = ((this->ClothCollection).Object)->SimAccessoryMeshName;
  if (pTVar1 != (TManagedArray<FName> *)0x0) {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    pFVar7 = *(FName **)&pTVar1->field_0x10;
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    uVar6 = 0;
    if (0 < iVar4) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < iVar4) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        if (*pFVar7 == *param_1) {
          return uVar6;
        }
        uVar6 = uVar6 + 1;
        pFVar7 = pFVar7 + 1;
      } while ((int)uVar6 < iVar4);
    }
  }
  return -1;
}

// FindSimMorphTargetIndexByName @ 14db55b80

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::FindSimMorphTargetIndexByName
          (FCollectionClothConstFacade *this,FString *param_1)

{
  int iVar1;
  TManagedArray<FString> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  pTVar2 = ((this->ClothCollection).Object)->SimMorphTargetName;
  if (pTVar2 != (TManagedArray<FString> *)0x0) {
    iVar5 = (**(code **)(*(longlong *)pTVar2 + 0x60))(pTVar2);
    puVar9 = *(undefined8 **)&pTVar2->field_0x10;
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    uVar8 = 0;
    if (0 < iVar5) {
      do {
        uVar6 = 0;
        if ((int)uVar8 < iVar5) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
        iVar7 = *(int *)(puVar9 + 1);
        iVar1 = (param_1->Data).ArrayNum;
        if (iVar7 == iVar1) {
          if (iVar7 < 2) {
            return uVar8;
          }
          iVar7 = wcscmp((wchar_t *)*puVar9,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar4 = iVar7 == 0;
        }
        else {
          bVar4 = iVar7 + iVar1 == 1;
        }
        if (bVar4) {
          return uVar8;
        }
        uVar8 = uVar8 + 1;
        puVar9 = puVar9 + 2;
      } while ((int)uVar8 < iVar5);
    }
  }
  return -1;
}

// FindSimPatternByFaceIndex @ 14db55c90

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::FindSimPatternByFaceIndex
          (FCollectionClothConstFacade *this,int param_1)

{
  FConstClothCollection *pFVar1;
  int iVar2;
  
  pFVar1 = (this->ClothCollection).Object;
  iVar2 = FConstClothCollection::GetArrayIndexForContainedElement
                    (pFVar1->SimFacesStart,pFVar1->SimFacesEnd,param_1);
  return iVar2;
}

// FindSimPatternByVertex2D @ 14db55cb0

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::FindSimPatternByVertex2D
          (FCollectionClothConstFacade *this,int param_1)

{
  FConstClothCollection *pFVar1;
  int iVar2;
  
  pFVar1 = (this->ClothCollection).Object;
  iVar2 = FConstClothCollection::GetArrayIndexForContainedElement
                    (pFVar1->SimVertices2DStart,pFVar1->SimVertices2DEnd,param_1);
  return iVar2;
}

// GetCustomResizingRegionSet @ 14db577f0

TArrayView<FString_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetCustomResizingRegionSet
          (FCollectionClothConstFacade *this,TArrayView<FString_const_,int> *__return_storage_ptr__)

{
  TManagedArray<FString> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<FString_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->CustomResizingRegionSet;
  if (pTVar1 == (TManagedArray<FString> *)0x0) {
    __return_storage_ptr__->DataPtr = (FString *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(FString **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<FString_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetCustomResizingRegionType @ 14db57960

TArrayView<int_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetCustomResizingRegionType
          (FCollectionClothConstFacade *this,TArrayView<int_const_,int> *__return_storage_ptr__)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<int_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->CustomResizingRegionType;
  if (pTVar1 == (TManagedArray<int> *)0x0) {
    __return_storage_ptr__->DataPtr = (int *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(int **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<int_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetFabric @ 14db57d60

FCollectionClothFabricConstFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetFabric
          (FCollectionClothConstFacade *this,
          FCollectionClothFabricConstFacade *__return_storage_ptr__,int param_1)

{
  FCollectionClothFabricConstFacade::FCollectionClothFabricConstFacade
            (__return_storage_ptr__,&this->ClothCollection,param_1);
  return __return_storage_ptr__;
}

// GetNumCustomResizingRegions @ 14db58060

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetNumCustomResizingRegions
          (FCollectionClothConstFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                     ClothCollectionGroup::CustomResizingRegions);
  return iVar1;
}

// GetNumFabrics @ 14db581f0

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetNumFabrics(FCollectionClothConstFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                     ClothCollectionGroup::Fabrics);
  return iVar1;
}

// GetNumRenderFaces @ 14db58210

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetNumRenderFaces
          (FCollectionClothConstFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                     ClothCollectionGroup::RenderFaces);
  return iVar1;
}

// GetNumRenderPatterns @ 14db58260

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetNumRenderPatterns
          (FCollectionClothConstFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                     ClothCollectionGroup::RenderPatterns);
  return iVar1;
}

// GetNumRenderVertices @ 14db58280

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetNumRenderVertices
          (FCollectionClothConstFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                     ClothCollectionGroup::RenderVertices);
  return iVar1;
}

// GetNumSeams @ 14db58300

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetNumSeams(FCollectionClothConstFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                     ClothCollectionGroup::Seams);
  return iVar1;
}

// GetNumSimAccessoryMeshes @ 14db58340

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetNumSimAccessoryMeshes
          (FCollectionClothConstFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                     ClothCollectionGroup::SimAccessoryMeshes);
  return iVar1;
}

// GetNumSimFaces @ 14db58360

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetNumSimFaces
          (FCollectionClothConstFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                     ClothCollectionGroup::SimFaces);
  return iVar1;
}

// GetNumSimMorphTargetVertices @ 14db583b0

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetNumSimMorphTargetVertices
          (FCollectionClothConstFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                     ClothCollectionGroup::SimMorphTargetVertices);
  return iVar1;
}

// GetNumSimMorphTargets @ 14db58400

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetNumSimMorphTargets
          (FCollectionClothConstFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                     ClothCollectionGroup::SimMorphTargets);
  return iVar1;
}

// GetNumSimPatterns @ 14db58420

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetNumSimPatterns
          (FCollectionClothConstFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                     ClothCollectionGroup::SimPatterns);
  return iVar1;
}

// GetNumSimVertices2D @ 14db58440

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetNumSimVertices2D
          (FCollectionClothConstFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                     ClothCollectionGroup::SimVertices2D);
  return iVar1;
}

// GetNumSimVertices3D @ 14db58490

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetNumSimVertices3D
          (FCollectionClothConstFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                     ClothCollectionGroup::SimVertices3D);
  return iVar1;
}

// GetPhysicsAssetSoftObjectPathName @ 14db58530

FSoftObjectPath * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetPhysicsAssetSoftObjectPathName
          (FCollectionClothConstFacade *this)

{
  FConstClothCollection *pFVar1;
  TManagedArray<FSoftObjectPath> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSoftObjectPath *pFVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetPhysicsAssetSoftObjectPathName'
             ::__l2::_dynamic_atexit_destructor_for__EmptyString__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar1 = (this->ClothCollection).Object;
  if (pFVar1->PhysicsAssetSoftObjectPathName != (TManagedArray<FSoftObjectPath> *)0x0) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((pFVar1->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (0 < iVar5) {
      pTVar2 = ((this->ClothCollection).Object)->PhysicsAssetSoftObjectPathName;
      if (*(int *)&pTVar2->field_0x18 < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FSoftObjectPath *)(*pcVar3)();
          return pFVar6;
        }
      }
      return *(FSoftObjectPath **)&pTVar2->field_0x10;
    }
  }
  return &::EmptyString;
}

// GetPreResizedSimPosition3D @ 14db58620

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetPreResizedSimPosition3D
          (FCollectionClothConstFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->PreResizedSimPosition3D;
  if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(TVector<float> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetReferenceBoneName @ 14db58820

FName __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetReferenceBoneName
          (FCollectionClothConstFacade *this)

{
  FConstClothCollection *pFVar1;
  TManagedArray<FName> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName FVar6;
  FName in_RDX;
  
  pFVar1 = (this->ClothCollection).Object;
  if (pFVar1->ReferenceBoneName != (TManagedArray<FName> *)0x0) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((pFVar1->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (0 < iVar5) {
      pTVar2 = ((this->ClothCollection).Object)->ReferenceBoneName;
      if (*(int *)&pTVar2->field_0x18 < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          FVar6 = (FName)(*pcVar3)();
          return FVar6;
        }
      }
      *(undefined8 *)in_RDX = **(undefined8 **)&pTVar2->field_0x10;
      return in_RDX;
    }
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetRenderBoneIndices @ 14db588d0

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderBoneIndices
          (FCollectionClothConstFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->RenderBoneIndices;
  if (pTVar1 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr =
         *(TArray<int,TSizedDefaultAllocator<32>_> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRenderBoneWeights @ 14db58df0

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderBoneWeights
          (FCollectionClothConstFacade *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->RenderBoneWeights;
  if (pTVar1 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr =
         *(TArray<float,TSizedDefaultAllocator<32>_> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRenderColor @ 14db590b0

TArrayView<FLinearColor_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderColor
          (FCollectionClothConstFacade *this,
          TArrayView<FLinearColor_const_,int> *__return_storage_ptr__)

{
  TManagedArray<FLinearColor> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<FLinearColor_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->RenderColor;
  if (pTVar1 == (TManagedArray<FLinearColor> *)0x0) {
    __return_storage_ptr__->DataPtr = (FLinearColor *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(FLinearColor **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<FLinearColor_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRenderCustomResizingBlend @ 14db595d0

TArrayView<float_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderCustomResizingBlend
          (FCollectionClothConstFacade *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TManagedArray<float> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<float_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->RenderCustomResizingBlend;
  if (pTVar1 == (TManagedArray<float> *)0x0) {
    __return_storage_ptr__->DataPtr = (float *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(float **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<float_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRenderDeformerNormalBaryCoordsAndDist @ 14db59890

TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderDeformerNormalBaryCoordsAndDist
          (FCollectionClothConstFacade *this,
          TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int>
          *__return_storage_ptr__)

{
  TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->RenderDeformerNormalBaryCoordsAndDist;
  if (pTVar1 == (TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *)0x0
     ) {
    __return_storage_ptr__->DataPtr =
         (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr =
         *(TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int>
                  *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRenderDeformerNumInfluences @ 14db59b50

TArrayView<int_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderDeformerNumInfluences
          (FCollectionClothConstFacade *this,TArrayView<int_const_,int> *__return_storage_ptr__)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<int_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->RenderDeformerNumInfluences;
  if (pTVar1 == (TManagedArray<int> *)0x0) {
    __return_storage_ptr__->DataPtr = (int *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(int **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<int_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRenderDeformerPositionBaryCoordsAndDist @ 14db59d70

TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderDeformerPositionBaryCoordsAndDist
          (FCollectionClothConstFacade *this,
          TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int>
          *__return_storage_ptr__)

{
  TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->RenderDeformerPositionBaryCoordsAndDist;
  if (pTVar1 == (TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *)0x0
     ) {
    __return_storage_ptr__->DataPtr =
         (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr =
         *(TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int>
                  *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRenderDeformerSimIndices3D @ 14db5a030

TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderDeformerSimIndices3D
          (FCollectionClothConstFacade *this,
          TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int>
          *__return_storage_ptr__)

{
  TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->RenderDeformerSimIndices3D;
  if (pTVar1 == (TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *)
                0x0) {
    __return_storage_ptr__->DataPtr =
         (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr =
         *(TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int>
                  *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRenderDeformerSkinningBlend @ 14db5a550

TArrayView<float_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderDeformerSkinningBlend
          (FCollectionClothConstFacade *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TManagedArray<float> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<float_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->RenderDeformerSkinningBlend;
  if (pTVar1 == (TManagedArray<float> *)0x0) {
    __return_storage_ptr__->DataPtr = (float *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(float **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<float_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRenderDeformerTangentBaryCoordsAndDist @ 14db5a810

TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderDeformerTangentBaryCoordsAndDist
          (FCollectionClothConstFacade *this,
          TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int>
          *__return_storage_ptr__)

{
  TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->RenderDeformerTangentBaryCoordsAndDist;
  if (pTVar1 == (TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *)0x0
     ) {
    __return_storage_ptr__->DataPtr =
         (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr =
         *(TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int>
                  *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRenderDeformerWeight @ 14db5aad0

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderDeformerWeight
          (FCollectionClothConstFacade *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->RenderDeformerWeight;
  if (pTVar1 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr =
         *(TArray<float,TSizedDefaultAllocator<32>_> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRenderIndices @ 14db5adb0

TArrayView<UE::Math::TIntVector3<int>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderIndices
          (FCollectionClothConstFacade *this,
          TArrayView<UE::Math::TIntVector3<int>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<UE::Math::TIntVector3<int>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->RenderIndices;
  if (pTVar1 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TIntVector3<int> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(TIntVector3<int> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TIntVector3<int>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRenderMaterialSoftObjectPathName @ 14db5b070

TArrayView<FSoftObjectPath_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderMaterialSoftObjectPathName
          (FCollectionClothConstFacade *this,
          TArrayView<FSoftObjectPath_const_,int> *__return_storage_ptr__)

{
  TManagedArray<FSoftObjectPath> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<FSoftObjectPath_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->RenderMaterialSoftObjectPathName;
  if (pTVar1 == (TManagedArray<FSoftObjectPath> *)0x0) {
    __return_storage_ptr__->DataPtr = (FSoftObjectPath *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(FSoftObjectPath **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<FSoftObjectPath_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRenderNormal @ 14db5b2f0

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderNormal
          (FCollectionClothConstFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->RenderNormal;
  if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(TVector<float> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRenderPattern @ 14db5b5b0

FCollectionClothRenderPatternConstFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderPattern
          (FCollectionClothConstFacade *this,
          FCollectionClothRenderPatternConstFacade *__return_storage_ptr__,int param_1)

{
  FCollectionClothRenderPatternConstFacade::FCollectionClothRenderPatternConstFacade
            (__return_storage_ptr__,&this->ClothCollection,param_1);
  return __return_storage_ptr__;
}

// GetRenderPosition @ 14db5b690

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderPosition
          (FCollectionClothConstFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->RenderPosition;
  if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(TVector<float> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRenderTangentU @ 14db5b950

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderTangentU
          (FCollectionClothConstFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->RenderTangentU;
  if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(TVector<float> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRenderTangentV @ 14db5bc10

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderTangentV
          (FCollectionClothConstFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->RenderTangentV;
  if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(TVector<float> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRenderUVs @ 14db5bed0

TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderUVs
          (FCollectionClothConstFacade *this,
          TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int>
          *__return_storage_ptr__)

{
  TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->RenderUVs;
  if (pTVar1 == (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0
     ) {
    __return_storage_ptr__->DataPtr =
         (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr =
         *(TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int>
                  *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSeam @ 14db5c410

FCollectionClothSeamConstFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSeam
          (FCollectionClothConstFacade *this,FCollectionClothSeamConstFacade *__return_storage_ptr__
          ,int param_1)

{
  FCollectionClothSeamConstFacade::FCollectionClothSeamConstFacade
            (__return_storage_ptr__,&this->ClothCollection,param_1);
  return __return_storage_ptr__;
}

// GetSeamStitchLookup @ 14db5c9f0

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSeamStitchLookup
          (FCollectionClothConstFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SeamStitchLookup;
  if (pTVar1 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr =
         *(TArray<int,TSizedDefaultAllocator<32>_> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimAccessoryMesh @ 14db5d040

FCollectionClothSimAccessoryMeshConstFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimAccessoryMesh
          (FCollectionClothConstFacade *this,
          FCollectionClothSimAccessoryMeshConstFacade *__return_storage_ptr__,int param_1)

{
  FCollectionClothSimAccessoryMeshConstFacade::FCollectionClothSimAccessoryMeshConstFacade
            (__return_storage_ptr__,&this->ClothCollection,param_1);
  return __return_storage_ptr__;
}

// GetSimAccessoryMeshBoneIndicesAttribute @ 14db5d3f0

TArrayView<FName_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimAccessoryMeshBoneIndicesAttribute
          (FCollectionClothConstFacade *this,TArrayView<FName_const_,int> *__return_storage_ptr__)

{
  TManagedArray<FName> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<FName_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimAccessoryMeshBoneIndicesAttribute;
  if (pTVar1 == (TManagedArray<FName> *)0x0) {
    __return_storage_ptr__->DataPtr = (FName *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(FName **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<FName_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimAccessoryMeshBoneWeightsAttribute @ 14db5d8c0

TArrayView<FName_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimAccessoryMeshBoneWeightsAttribute
          (FCollectionClothConstFacade *this,TArrayView<FName_const_,int> *__return_storage_ptr__)

{
  TManagedArray<FName> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<FName_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimAccessoryMeshBoneWeightsAttribute;
  if (pTVar1 == (TManagedArray<FName> *)0x0) {
    __return_storage_ptr__->DataPtr = (FName *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(FName **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<FName_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimAccessoryMeshName @ 14db5daf0

TArrayView<FName_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimAccessoryMeshName
          (FCollectionClothConstFacade *this,TArrayView<FName_const_,int> *__return_storage_ptr__)

{
  TManagedArray<FName> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<FName_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimAccessoryMeshName;
  if (pTVar1 == (TManagedArray<FName> *)0x0) {
    __return_storage_ptr__->DataPtr = (FName *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(FName **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<FName_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimAccessoryMeshNormalAttribute @ 14db5dff0

TArrayView<FName_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimAccessoryMeshNormalAttribute
          (FCollectionClothConstFacade *this,TArrayView<FName_const_,int> *__return_storage_ptr__)

{
  TManagedArray<FName> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<FName_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimAccessoryMeshNormalAttribute;
  if (pTVar1 == (TManagedArray<FName> *)0x0) {
    __return_storage_ptr__->DataPtr = (FName *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(FName **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<FName_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimAccessoryMeshPosition3DAttribute @ 14db5e4f0

TArrayView<FName_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimAccessoryMeshPosition3DAttribute
          (FCollectionClothConstFacade *this,TArrayView<FName_const_,int> *__return_storage_ptr__)

{
  TManagedArray<FName> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<FName_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimAccessoryMeshPosition3DAttribute;
  if (pTVar1 == (TManagedArray<FName> *)0x0) {
    __return_storage_ptr__->DataPtr = (FName *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(FName **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<FName_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimBoneIndices @ 14db5e720

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimBoneIndices
          (FCollectionClothConstFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimBoneIndices;
  if (pTVar1 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr =
         *(TArray<int,TSizedDefaultAllocator<32>_> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimBoneWeights @ 14db5e890

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimBoneWeights
          (FCollectionClothConstFacade *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimBoneWeights;
  if (pTVar1 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr =
         *(TArray<float,TSizedDefaultAllocator<32>_> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimCustomResizingBlend @ 14db5ea00

TArrayView<float_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimCustomResizingBlend
          (FCollectionClothConstFacade *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TManagedArray<float> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<float_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimCustomResizingBlend;
  if (pTVar1 == (TManagedArray<float> *)0x0) {
    __return_storage_ptr__->DataPtr = (float *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(float **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<float_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimImportVertexID @ 14db5eb90

TArrayView<int_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimImportVertexID
          (FCollectionClothConstFacade *this,TArrayView<int_const_,int> *__return_storage_ptr__)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<int_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimImportVertexID;
  if (pTVar1 == (TManagedArray<int> *)0x0) {
    __return_storage_ptr__->DataPtr = (int *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(int **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<int_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimIndices2D @ 14db5ef30

TArrayView<UE::Math::TIntVector3<int>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimIndices2D
          (FCollectionClothConstFacade *this,
          TArrayView<UE::Math::TIntVector3<int>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<UE::Math::TIntVector3<int>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimIndices2D;
  if (pTVar1 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TIntVector3<int> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(TIntVector3<int> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TIntVector3<int>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimIndices3D @ 14db5f1f0

TArrayView<UE::Math::TIntVector3<int>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimIndices3D
          (FCollectionClothConstFacade *this,
          TArrayView<UE::Math::TIntVector3<int>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<UE::Math::TIntVector3<int>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimIndices3D;
  if (pTVar1 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TIntVector3<int> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(TIntVector3<int> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TIntVector3<int>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimMorphTarget @ 14db5f4b0

FCollectionClothSimMorphTargetConstFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimMorphTarget
          (FCollectionClothConstFacade *this,
          FCollectionClothSimMorphTargetConstFacade *__return_storage_ptr__,int param_1)

{
  FCollectionClothSimMorphTargetConstFacade::FCollectionClothSimMorphTargetConstFacade
            (__return_storage_ptr__,&this->ClothCollection,param_1);
  return __return_storage_ptr__;
}

// GetSimMorphTargetName @ 14db5f590

TArrayView<FString_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimMorphTargetName
          (FCollectionClothConstFacade *this,TArrayView<FString_const_,int> *__return_storage_ptr__)

{
  TManagedArray<FString> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<FString_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimMorphTargetName;
  if (pTVar1 == (TManagedArray<FString> *)0x0) {
    __return_storage_ptr__->DataPtr = (FString *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(FString **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<FString_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimMorphTargetPositionDelta @ 14db5f730

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimMorphTargetPositionDelta
          (FCollectionClothConstFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimMorphTargetPositionDelta;
  if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(TVector<float> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimMorphTargetSimVertex3DIndex @ 14db5f9f0

TArrayView<int_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimMorphTargetSimVertex3DIndex
          (FCollectionClothConstFacade *this,TArrayView<int_const_,int> *__return_storage_ptr__)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<int_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimMorphTargetSimVertex3DIndex;
  if (pTVar1 == (TManagedArray<int> *)0x0) {
    __return_storage_ptr__->DataPtr = (int *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(int **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<int_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimMorphTargetTangentZDelta @ 14db5fcb0

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimMorphTargetTangentZDelta
          (FCollectionClothConstFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimMorphTargetTangentZDelta;
  if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(TVector<float> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimNormal @ 14db5ff90

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimNormal
          (FCollectionClothConstFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimNormal;
  if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(TVector<float> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimPattern @ 14db60100

FCollectionClothSimPatternConstFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimPattern
          (FCollectionClothConstFacade *this,
          FCollectionClothSimPatternConstFacade *__return_storage_ptr__,int param_1)

{
  FCollectionClothSimPatternConstFacade::FCollectionClothSimPatternConstFacade
            (__return_storage_ptr__,&this->ClothCollection,param_1);
  return __return_storage_ptr__;
}

// GetSimPosition2D @ 14db601e0

TArrayView<UE::Math::TVector2<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimPosition2D
          (FCollectionClothConstFacade *this,
          TArrayView<UE::Math::TVector2<float>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<UE::Math::TVector2<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<UE::Math::TVector2<float>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimPosition2D;
  if (pTVar1 == (TManagedArray<UE::Math::TVector2<float>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector2<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(TVector2<float> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector2<float>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimPosition3D @ 14db60700

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimPosition3D
          (FCollectionClothConstFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimPosition3D;
  if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(TVector<float> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimVertex2DLookup @ 14db60870

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimVertex2DLookup
          (FCollectionClothConstFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimVertex2DLookup;
  if (pTVar1 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr =
         *(TArray<int,TSizedDefaultAllocator<32>_> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimVertex3DLookup @ 14db609e0

TArrayView<int_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimVertex3DLookup
          (FCollectionClothConstFacade *this,TArrayView<int_const_,int> *__return_storage_ptr__)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<int_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->SimVertex3DLookup;
  if (pTVar1 == (TManagedArray<int> *)0x0) {
    __return_storage_ptr__->DataPtr = (int *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr = *(int **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<int_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSkeletalMeshSoftObjectPathName @ 14db60cc0

FSoftObjectPath * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSkeletalMeshSoftObjectPathName
          (FCollectionClothConstFacade *this)

{
  FConstClothCollection *pFVar1;
  TManagedArray<FSoftObjectPath> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSoftObjectPath *pFVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSkeletalMeshSoftObjectPathName'
             ::__l2::_dynamic_atexit_destructor_for__EmptyString__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar1 = (this->ClothCollection).Object;
  if (pFVar1->SkeletalMeshSoftObjectPathName != (TManagedArray<FSoftObjectPath> *)0x0) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((pFVar1->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (0 < iVar5) {
      pTVar2 = ((this->ClothCollection).Object)->SkeletalMeshSoftObjectPathName;
      if (*(int *)&pTVar2->field_0x18 < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FSoftObjectPath *)(*pcVar3)();
          return pFVar6;
        }
      }
      return *(FSoftObjectPath **)&pTVar2->field_0x10;
    }
  }
  return &::EmptyString;
}

// GetSolverAirDamping @ 14db60db0

float __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSolverAirDamping
          (FCollectionClothConstFacade *this)

{
  FConstClothCollection *pFVar1;
  TManagedArray<float> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  
  pFVar1 = (this->ClothCollection).Object;
  if (pFVar1->SolverAirDamping != (TManagedArray<float> *)0x0) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((pFVar1->ManagedArrayCollection).Object,ClothCollectionGroup::Solvers);
    if (iVar5 == 1) {
      pTVar2 = ((this->ClothCollection).Object)->SolverAirDamping;
      if (*(int *)&pTVar2->field_0x18 < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          fVar6 = (float)(*pcVar3)();
          return fVar6;
        }
      }
      return **(float **)&pTVar2->field_0x10;
    }
  }
  return __real_3d0f5c29;
}

// GetSolverGravity @ 14db60e40

TVector<float> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSolverGravity
          (FCollectionClothConstFacade *this)

{
  FConstClothCollection *pFVar1;
  TManagedArray<UE::Math::TVector<float>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TVector<float> *pTVar6;
  
  pFVar1 = (this->ClothCollection).Object;
  if (pFVar1->SolverGravity != (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((pFVar1->ManagedArrayCollection).Object,ClothCollectionGroup::Solvers);
    if (iVar5 == 1) {
      pTVar2 = ((this->ClothCollection).Object)->SolverGravity;
      if (*(int *)&pTVar2->field_0x18 < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TVector<float> *)(*pcVar3)();
          return pTVar6;
        }
      }
      return *(TVector<float> **)&pTVar2->field_0x10;
    }
  }
  return &FDefaultSolver::Gravity;
}

// GetSolverSubSteps @ 14db60ed0

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSolverSubSteps
          (FCollectionClothConstFacade *this)

{
  FConstClothCollection *pFVar1;
  TManagedArray<int> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pFVar1 = (this->ClothCollection).Object;
  if (pFVar1->SolverSubSteps != (TManagedArray<int> *)0x0) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((pFVar1->ManagedArrayCollection).Object,ClothCollectionGroup::Solvers);
    if (iVar5 == 1) {
      pTVar2 = ((this->ClothCollection).Object)->SolverSubSteps;
      if (*(int *)&pTVar2->field_0x18 < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
      }
      return **(int **)&pTVar2->field_0x10;
    }
  }
  return 1;
}

// GetSolverTimeStep @ 14db60f60

float __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSolverTimeStep
          (FCollectionClothConstFacade *this)

{
  FConstClothCollection *pFVar1;
  TManagedArray<float> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  
  pFVar1 = (this->ClothCollection).Object;
  if (pFVar1->SolverTimeStep != (TManagedArray<float> *)0x0) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((pFVar1->ManagedArrayCollection).Object,ClothCollectionGroup::Solvers);
    if (iVar5 == 1) {
      pTVar2 = ((this->ClothCollection).Object)->SolverTimeStep;
      if (*(int *)&pTVar2->field_0x18 < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          fVar6 = (float)(*pcVar3)();
          return fVar6;
        }
      }
      return **(float **)&pTVar2->field_0x10;
    }
  }
  return __real_3d072b02;
}

// GetTetherKinematicIndex @ 14db610c0

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetTetherKinematicIndex
          (FCollectionClothConstFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->TetherKinematicIndex;
  if (pTVar1 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr =
         *(TArray<int,TSizedDefaultAllocator<32>_> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetTetherReferenceLength @ 14db61230

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetTetherReferenceLength
          (FCollectionClothConstFacade *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__)

{
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *pTVar5;
  
  pTVar1 = ((this->ClothCollection).Object)->TetherReferenceLength;
  if (pTVar1 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    __return_storage_ptr__->DataPtr =
         *(TArray<float,TSizedDefaultAllocator<32>_> **)&pTVar1->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetValidClothCollectionGroupName @ 14db613a0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetValidClothCollectionGroupName
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
              *)&ClothAsset::Private::FixedAttributeNamesMap,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetWeightMap @ 14db61420

TArrayView<float_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetWeightMap
          (FCollectionClothConstFacade *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TManagedArray<float> *pTVar4;
  TArrayView<float_const_,int> *pTVar5;
  
  pTVar4 = FConstClothCollection::GetUserDefinedAttribute<float>
                     ((this->ClothCollection).Object,param_1,&ClothCollectionGroup::SimVertices3D);
  if (pTVar4 == (TManagedArray<float> *)0x0) {
    __return_storage_ptr__->DataPtr = (float *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar3 = (**(code **)(*(longlong *)pTVar4 + 0x60))(pTVar4);
    __return_storage_ptr__->DataPtr = *(float **)&pTVar4->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar3;
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArrayView<float_const_,int> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetWeightMapNames @ 14db615b0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetWeightMapNames
          (FCollectionClothConstFacade *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FConstClothCollection::GetUserDefinedAttributeNames<float>
            ((this->ClothCollection).Object,__return_storage_ptr__,
             &ClothCollectionGroup::SimVertices3D);
  return __return_storage_ptr__;
}

// HasSolverElement @ 14db617e0

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::HasSolverElement
          (FCollectionClothConstFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                     ClothCollectionGroup::Solvers);
  return iVar1 == 1;
}

// HasValidData @ 14db61810

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::HasValidData(FCollectionClothConstFacade *this)

{
  FConstClothCollection *this_00;
  bool bVar1;
  int iVar2;
  
  this_00 = (this->ClothCollection).Object;
  bVar1 = FConstClothCollection::IsValid(this_00,None);
  if (bVar1) {
    iVar2 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (iVar2 == 1) {
      iVar2 = FManagedArrayCollection::NumElements
                        ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                         ClothCollectionGroup::SimPatterns);
      if (iVar2 != 0) {
        iVar2 = FManagedArrayCollection::NumElements
                          ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                           ClothCollectionGroup::RenderPatterns);
        if (iVar2 != 0) {
          iVar2 = FManagedArrayCollection::NumElements
                            ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                             ClothCollectionGroup::SimVertices2D);
          if (iVar2 != 0) {
            iVar2 = FManagedArrayCollection::NumElements
                              ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                               ClothCollectionGroup::SimVertices3D);
            if (iVar2 != 0) {
              iVar2 = FManagedArrayCollection::NumElements
                                ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                                 ClothCollectionGroup::SimFaces);
              if (iVar2 != 0) {
                iVar2 = FManagedArrayCollection::NumElements
                                  ((((this->ClothCollection).Object)->ManagedArrayCollection).Object
                                   ,ClothCollectionGroup::RenderVertices);
                if (iVar2 != 0) {
                  iVar2 = FManagedArrayCollection::NumElements
                                    ((((this->ClothCollection).Object)->ManagedArrayCollection).
                                     Object,ClothCollectionGroup::RenderFaces);
                  if (iVar2 != 0) {
                    return true;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// HasValidRenderData @ 14db61920

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::HasValidRenderData
          (FCollectionClothConstFacade *this)

{
  FConstClothCollection *this_00;
  bool bVar1;
  int iVar2;
  
  this_00 = (this->ClothCollection).Object;
  bVar1 = FConstClothCollection::IsValid(this_00,None);
  if (bVar1) {
    iVar2 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (iVar2 == 1) {
      iVar2 = FManagedArrayCollection::NumElements
                        ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                         ClothCollectionGroup::RenderPatterns);
      if (iVar2 != 0) {
        iVar2 = FManagedArrayCollection::NumElements
                          ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                           ClothCollectionGroup::RenderVertices);
        if (iVar2 != 0) {
          iVar2 = FManagedArrayCollection::NumElements
                            ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                             ClothCollectionGroup::RenderFaces);
          if (iVar2 != 0) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// HasValidSimulationData @ 14db619c0

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::HasValidSimulationData
          (FCollectionClothConstFacade *this)

{
  FConstClothCollection *this_00;
  bool bVar1;
  int iVar2;
  
  this_00 = (this->ClothCollection).Object;
  bVar1 = FConstClothCollection::IsValid(this_00,None);
  if (bVar1) {
    iVar2 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (iVar2 == 1) {
      iVar2 = FManagedArrayCollection::NumElements
                        ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                         ClothCollectionGroup::SimPatterns);
      if (iVar2 != 0) {
        iVar2 = FManagedArrayCollection::NumElements
                          ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                           ClothCollectionGroup::SimVertices2D);
        if (iVar2 != 0) {
          iVar2 = FManagedArrayCollection::NumElements
                            ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                             ClothCollectionGroup::SimVertices3D);
          if (iVar2 != 0) {
            iVar2 = FManagedArrayCollection::NumElements
                              ((((this->ClothCollection).Object)->ManagedArrayCollection).Object,
                               ClothCollectionGroup::SimFaces);
            if (iVar2 != 0) {
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}

// HasWeightMap @ 14db61a70

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::HasWeightMap
          (FCollectionClothConstFacade *this,FName *param_1)

{
  bool bVar1;
  
  bVar1 = FConstClothCollection::HasUserDefinedAttribute<float>
                    ((this->ClothCollection).Object,param_1,&ClothCollectionGroup::SimVertices3D);
  return bVar1;
}

// IsValid @ 14db65980

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::IsValid
          (FCollectionClothConstFacade *this,EClothCollectionExtendedSchemas param_1)

{
  FConstClothCollection *this_00;
  bool bVar1;
  int iVar2;
  
  this_00 = (this->ClothCollection).Object;
  bVar1 = FConstClothCollection::IsValid(this_00,param_1);
  if (!bVar1) {
    return false;
  }
  if (((param_1 & CookedOnly) == None) &&
     (iVar2 = FManagedArrayCollection::NumElements
                        ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Lods),
     iVar2 != 1)) {
    return false;
  }
  return true;
}

// IsValidClothCollectionGroupName @ 14db65f10

bool __cdecl
UE::Chaos::ClothAsset::FCollectionClothConstFacade::IsValidClothCollectionGroupName(FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar4 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar4 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    for (iVar3 = *(int *)(lVar4 + (ulonglong)
                                  (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                                  FVar1.Number + uVar2) * 4); iVar3 != -1;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 +
                        ClothAsset::Private::FixedAttributeNamesMap._0_8_)) {
      if (*(FName *)((longlong)iVar3 * 0x20 + ClothAsset::Private::FixedAttributeNamesMap._0_8_) ==
          FVar1) goto LAB_14db65f8b;
    }
  }
  iVar3 = -1;
LAB_14db65f8b:
  return iVar3 != -1;
}

